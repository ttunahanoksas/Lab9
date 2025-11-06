#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* trim_alloc(const char *src) {
    const char *s = src, *e = src + strlen(src) - 1;
    while (isspace(*s)) s++;
    while (e > s && isspace(*e)) e--;
    size_t n = e - s + 1;
    char *r = malloc(n + 1);
    strncpy(r, s, n);
    r[n] = '\0';
    return r;
}

int main() {
    char src[] = "   Hi, what's up?   ";
    char *trimmed = trim_alloc(src);
    printf("'%s'\n", trimmed);
    free(trimmed);
}

return 0;
}
