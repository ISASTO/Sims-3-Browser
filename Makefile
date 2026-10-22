# Sims 3 iOS recompilation — build rules (see HANDOFF.md)
CC = clang
GEN = build/gen
RT_SRC = $(wildcard runtime/*.c)
GEN_SRC = $(wildcard $(GEN)/recomp_*.c) $(GEN)/recomp_table.c $(GEN)/imports_weak.c $(GEN)/image_manifest.c
CFLAGS_COMMON = -fno-strict-aliasing -ffp-contract=off -Iruntime -I$(GEN) -w
DLM_NATIVE = -D__wasilibc_unmodified_upstream=1
DLM = -DONLY_MSPACES=1 -DMSPACES=1 -DHAVE_MMAP=0 -DHAVE_MORECORE=0 -DUSE_LOCKS=0 -DMALLOC_FAILURE_ACTION= -DNO_MALLOC_STATS=1

# ---------------- native (headless boot testing)
NATIVE_O = build/native
NATIVE_GEN_OBJ = $(patsubst $(GEN)/%.c,$(NATIVE_O)/gen/%.o,$(GEN_SRC))
NATIVE_RT_OBJ = $(patsubst runtime/%.c,$(NATIVE_O)/rt/%.o,$(RT_SRC)) $(NATIVE_O)/rt/dlmalloc.o
$(NATIVE_O)/gen/%.o: $(GEN)/%.c runtime/cpu.h
	@mkdir -p $(dir $@)
	$(CC) -c -O1 -g0 -DFN_TRACE $(CFLAGS_COMMON) $< -o $@
$(NATIVE_O)/rt/%.o: runtime/%.c runtime/rt.h runtime/cpu.h
	@mkdir -p $(dir $@)
	$(CC) -c -O1 -g -DFN_TRACE $(CFLAGS_COMMON) $< -o $@
$(NATIVE_O)/rt/dlmalloc.o: runtime/third_party/dlmalloc.c
	@mkdir -p $(dir $@)
	$(CC) -c -O2 $(DLM_NATIVE) $(DLM) -w $< -o $@
build/sims3_native: $(NATIVE_GEN_OBJ) $(NATIVE_RT_OBJ)
	$(CC) -o $@ $^ -lm
native: build/sims3_native
.PHONY: native

# ---------------- wasm (browser build): guest address == linear-memory address; the C data starts at 16 MiB so
# the original image's preferred range [0x4000, 0x4E8000) stays free for the loader.
WASM_O = build/wasm
WASM_CC = $(CC) --target=wasm32-wasi -DGUEST_IDENTITY -mbulk-memory -mnontrapping-fptoint -msign-ext
WASM_GEN_OBJ = $(patsubst $(GEN)/%.c,$(WASM_O)/gen/%.o,$(GEN_SRC))
WASM_RT_OBJ = $(patsubst runtime/%.c,$(WASM_O)/rt/%.o,$(RT_SRC)) $(WASM_O)/rt/dlmalloc.o
$(WASM_O)/gen/%.o: $(GEN)/%.c runtime/cpu.h
	@mkdir -p $(dir $@)
	$(WASM_CC) -c -O2 -g0 $(CFLAGS_COMMON) $< -o $@
$(WASM_O)/rt/%.o: runtime/%.c runtime/rt.h runtime/cpu.h
	@mkdir -p $(dir $@)
	$(WASM_CC) -c -O2 -g0 $(CFLAGS_COMMON) $< -o $@
$(WASM_O)/rt/dlmalloc.o: runtime/third_party/dlmalloc.c
	@mkdir -p $(dir $@)
	$(WASM_CC) -c -O2 $(DLM) -w $< -o $@
build/web/sims3.wasm: $(WASM_GEN_OBJ) $(WASM_RT_OBJ)
	@mkdir -p $(dir $@)
	$(WASM_CC) -nostartfiles /usr/lib/wasm32-wasi/crt1-reactor.o -Wl,--no-entry -Wl,--export=_initialize -o $@ $^ -lm -Wl,--global-base=16777216 -Wl,-z,stack-size=8388608 \
	  -Wl,--initial-memory=67108864 -Wl,--max-memory=4294967296 -Wl,--export=sims3_boot -Wl,--export=sims3_set_verbose -Wl,--export=sims3_frame \
	  -Wl,--export=sims3_touch -Wl,--export=sims3_lifecycle -Wl,--export=sims3_text_event -Wl,--export=sims3_ui_action -Wl,--export=sims3_media_picked -Wl,--export=malloc -Wl,--export=free
build/web/index.html build/web/sims3.js build/web/gl.js: build/web/%: web/%
	@mkdir -p $(dir $@)
	cp $< $@
build/web/bundle-manifest.json: tools/bundle_manifest.py
	@mkdir -p $(dir $@)
	python3 tools/bundle_manifest.py extract/Payload/sims3_iphone.app $@
wasm: build/web/sims3.wasm build/web/index.html build/web/sims3.js build/web/gl.js build/web/bundle-manifest.json
.PHONY: wasm
