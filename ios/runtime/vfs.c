/* vfs.c — guest file-system namespace.
 *   /app/sims3_iphone.app/...   read-only bundle (original IPA contents)
 *   /home/{Documents,Library,tmp}  writable app container (persisted by the host)
 * Paths are canonicalised here; the host maps the two roots to storage. */
#include "rt.h"
const char *VFS_BUNDLE = "/app/sims3_iphone.app";
const char *VFS_HOME = "/home";

void vfs_init(void) {}

const char *vfs_resolve(const char *in, char *out, size_t outlen) {
    char tmp[1024];
    snprintf(tmp, sizeof tmp, "%s", in);
    char *parts[128]; int n = 0;
    for (char *tok = strtok(tmp, "/"); tok && n < 128; tok = strtok(NULL, "/")) {
        if (!strcmp(tok, ".") || !*tok) continue;
        if (!strcmp(tok, "..")) { if (n) n--; continue; }
        parts[n++] = tok;
    }
    size_t k = 0;
    out[0] = 0;
    for (int i = 0; i < n && k + 2 < outlen; i++) k += (size_t)snprintf(out + k, outlen - k, "/%s", parts[i]);
    if (!n) snprintf(out, outlen, "/");
    return out;
}
