#ifndef PURE_C_SUPERLIB_H
#define PURE_C_SUPERLIB_H

#ifdef PURE_C_SUPERLIB_PREFIX
#define ACTUAL_PURE_C_SUPERLIB_PREFIX PURE_C_SUPERLIB_PREFIX
#else
#define ACTUAL_PURE_C_SUPERLIB_PREFIX
#endif

#define PURE_C_SUPERLIB_MAKE_CONCAT(A, B) A ## B
#define PURE_C_SUPERLIB_CONCAT(A, B) PURE_C_SUPERLIB_MAKE_CONCAT(A, B)
#define PURE_C_SUPERLIB(X) PURE_C_SUPERLIB_CONCAT(ACTUAL_PURE_C_SUPERLIB_PREFIX, X)

void PURE_C_SUPERLIB(get_result)(void) asm("pure_c_superlib_get_result");

#undef PURE_C_SUPERLIB
#undef PURE_C_SUPERLIB_CONCAT
#undef PURE_C_SUPERLIB_MAKE_CONCAT
#undef ACTUAL_PURE_C_SUPERLIB_PREFIX

#endif //PURE_C_SUPERLIB_H
