#include <stdio.h>
#define PURE_C_SUPERLIB_PREFIX s_
#include "superlib.h"
#undef PURE_C_SUPERLIB_PREFIX

int main() {
    s_get_result();
    printf("Hello, World!\n");
    return 0;
}
