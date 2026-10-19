/* Recovered connected pathname code. Original addresses remain in each symbol.
 * This is the game's behavior, including its unusual root/truncation rules;
 * it is not a replacement with the host operating system's path library.
 * The generated tables preserve the original default C locale and root bytes.
 */
#include "core.h"
#include "path-data.h"

uint32_t core_path_root(void) { return (uint32_t)(uintptr_t)s3c_path_root_data; }

uint32_t FUN_4a000c5c(int32_t value) { return s3c_ctype_data[value + 1] & 0x98; }
uint32_t FUN_4a000c72(int32_t value) { return s3c_ctype_data[value + 1] & 1; }
int32_t FUN_4a000c88(int32_t value) {
  return (s3c_ctype_data[value + 1] & 0x10) ? value + 0x20 : value;
}
int32_t FUN_4a000ca8(int32_t value) {
  return (s3c_ctype_data[value + 1] & 8) && value != 0xdf ? value - 0x20 : value;
}

uint32_t FUN_4a16303e(char *destination, char *source, uint32_t capacity) {
  uint32_t length = (uint32_t)FUN_4a0013e0((uint *)source);
  if (capacity) {
    uint32_t count = length;
    if (capacity - 1 <= length) count = capacity - 1;
    if (count) FUN_4a000f84((uint *)destination, (uint *)source, count);
    destination[count] = 0;
  }
  return length;
}

uint32_t FUN_4a163010(char *destination, char *source, uint32_t capacity) {
  uint32_t length = (uint32_t)FUN_4a0013e0((uint *)destination), added;
  if (length < capacity - 1)
    added = FUN_4a16303e(destination + length, source, capacity - length);
  else
    added = (uint32_t)FUN_4a0013e0((uint *)source);
  return added + length;
}

char *FUN_4a00b998(char *source, char *destination) {
  char *end = source + FUN_4a0013e0((uint *)source);
  do {
    if (end <= source) goto copy_parent;
    --end;
  } while (*end != '/' && *end != '\\');
  while (source + 1 < end && (end[-1] == '/' || end[-1] == '\\')) --end;
copy_parent:
  if (source != destination) FUN_4a0012bc((uint *)destination, (uint *)source);
  destination[end - source] = 0;
  return destination;
}

char *FUN_4a00b9ea(char *source, char *destination) {
  char *cursor = source + FUN_4a0013e0((uint *)source) - 1;
  if (*cursor != '.') {
    do {
      char *previous = cursor - 1;
      if (*previous == '.') {
        FUN_4a0012bc((uint *)destination, (uint *)cursor);
        return destination;
      }
      cursor = previous;
    } while (source < cursor);
  }
  *destination = 0;
  return destination;
}

char *FUN_4a00ba22(char *source, char *destination, int32_t keep_extension) {
  char temporary[128];
  char *cursor = source + FUN_4a0013e0((uint *)source), *previous, *dot = 0;
  for (;;) {
    previous = cursor - 1;
    if (previous < source || *previous == '/' || *previous == '\\') break;
    cursor = previous;
    if (*previous == '.') dot = previous;
  }
  FUN_4a001368((uint *)temporary, (uint *)cursor, 127);
  FUN_4a16303e(destination, temporary, 128);
  if (!keep_extension && dot) destination[dot - previous - 1] = 0;
  return destination;
}

uint32_t FUN_4a00ba7c(char *source) { return FUN_4a0015c0(source, "://") != 0; }

char *FUN_4a00ba94(char *destination, char *source, int32_t capacity) {
  int32_t length = FUN_4a0013e0((uint *)destination);
  int32_t added = FUN_4a0013e0((uint *)source);
  if (length + 1 < capacity) {
    if (length && added) {
      char *end = destination + length;
      if (end[-1] == '/' || end[-1] == '\\') {
        if (*source == '/' || *source == '\\') ++source;
      } else if (*source != '/' && *source != '\\') {
        end[0] = '/'; end[1] = 0;
      }
    }
    FUN_4a163010(destination, source, (uint32_t)capacity);
  } else destination[capacity - 1] = 0;
  return destination;
}

/* Normalizer body follows the recovered control flow. Do not simplify to a
 * platform path API: URI prefixes, leading parents, root slashes, trimming,
 * and the 127-byte limit have game-specific observable behavior.
 */
char *FUN_4a00bb00(char *path, int32_t preserve_case) {
  int32_t length = FUN_4a0013e0((uint *)path);
  if (!length) return path;
  for (int32_t i = 0; i < length; ++i) {
    if (path[i] == '\\') path[i] = '/';
    if (!preserve_case) path[i] = (char)FUN_4a000c88((byte)path[i]);
  }
  char original_first = path[0];
  char *scheme = FUN_4a0015c0(path, "://"), *body = scheme ? scheme + 3 : path;
  int32_t prefix_length = (int32_t)(body - path);
  length -= prefix_length;
  while (*body == '/') {
    FUN_4a00105c((uint *)body, (uint *)(body + 1), (uint32_t)length);
    --length;
  }
  for (int32_t i = 0; i < length - 1; ++i) {
    char *at = body + i;
    if (at[0] == '/' && at[1] == '.' && (i == length - 2 || at[2] == '/')) {
      FUN_4a00105c((uint *)at, (uint *)(at + 2), (uint32_t)(length - i - 1));
      length -= 2; --i;
    }
  }
  if (body[0] == '.' && length > 1) {
    if (body[1] == '/') {
      FUN_4a00105c((uint *)body, (uint *)(body + 2), (uint32_t)(length - 1));
      length -= 2;
      goto remove_single_dot;
    }
  } else {
remove_single_dot:
    if (!length || body[0] != '.') goto collapse_slashes;
  }
  if (!body[1]) { --length; body[0] = 0; }
collapse_slashes:;
  bool drive = length > 0 && body[1] == ':';
  bool slash = false;
  for (int32_t i = 0; i < length; ++i) {
    if (body[i] == '/') {
      if (slash) {
        FUN_4a00105c((uint *)(body + i), (uint *)(body + i + 1), (uint32_t)(length - i));
        --length; --i;
      } else slash = true;
    } else slash = false;
  }
  for (;;) {
    int32_t segment = 0, search = 0, previous, position, after;
    bool skip_drive, skip_parent;
    do {
      do {
        position = search; previous = segment;
        if (length - 3 < position) {
          while (length > 0 && (FUN_4a000c72((byte)body[length - 1]) ||
                 body[length - 1] == '/' || body[length - 1] == '\r')) {
            body[--length] = 0;
          }
          if (!prefix_length && !length) {
            body[0] = original_first == '/' ? '/' : '.';
            body[1] = 0; ++length;
          }
          if (length + prefix_length > 127) body[127] = 0;
          return path;
        }
        after = position + 1; segment = previous; search = after;
        if (body[position] != '/') continue;
        segment = after; search = position + 2;
        if (body[after] != '.') continue;
        search = position + 3;
        if (body[position + 2] != '.') continue;
        if (search != length) {
          char *tail = body + search;
          search = position + 4;
          if (*tail != '/') continue;
        }
        break;
      } while (true);
      skip_drive = drive && previous + 1 < length && body[previous + 1] == ':';
      skip_parent = body[previous] == '.' && body[previous + 1] == '.' && body[previous + 2] == '/';
    } while (skip_drive || skip_parent);
    FUN_4a00105c((uint *)(body + previous), (uint *)(body + search), (uint32_t)(length - search + 1));
    length -= search - previous;
  }
}

char *FUN_4a00d6a8(char *source, char *destination) {
  if (*source == '/' || *source == '\\' || FUN_4a00ba7c(source) ||
      !FUN_4a0013e0((uint *)s3c_path_root_data) || !FUN_4a0013e0((uint *)source)) {
    FUN_4a16303e(destination, source, 128);
  } else {
    FUN_4a0012bc((uint *)destination, (uint *)s3c_path_root_data);
    FUN_4a00ba94(destination, source, 128);
    FUN_4a00bb00(destination, 0);
  }
  return destination;
}
