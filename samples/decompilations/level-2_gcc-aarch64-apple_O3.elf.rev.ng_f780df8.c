#include "types-and-globals.h"
#include "helpers.h"

_ABI(raw_aarch64) _Noreturn
void function_0x100000000_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003000_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003540_Code_aarch64(void) {
  struct _PACKED struct_15 {
    generic32_t offset_0;
    uint8_t padding_at_4[44];
  } _stack;
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 24))) = __init_lr();
  *((rawfunction_13 **) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 32))) = function_0x100003ea8_Code_aarch64;
  _stack.offset_0 = 0;
  function_0x100003e60_Code_aarch64((generic64_t) function_0x100003ea8_Code_aarch64);
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003bc0_Code_aarch64(generic64_t register_x0 _REG(x0_aarch64)) {
  struct _PACKED struct_16 {
    generic32_t offset_0;
    uint8_t padding_at_4[92];
  } _stack;
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 40))) = __init_lr();
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 56))) = (pointer_or_number64_t) &unreserved___TEXT + 16072;
  _stack.offset_0 = 0;
  *((generic32_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 8))) = (number32_t) register_x0;
  *((generic32_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 16))) = 0;
  function_0x100003e60_Code_aarch64((pointer_or_number64_t) &unreserved___TEXT + 16072);
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003e40_Code_aarch64(void) {
  struct _PACKED struct_17 {
    uint8_t padding_at_0[16];
  } _stack;
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 8))) = __init_lr();
  function_0x100003bc0_Code_aarch64((pointer_or_number64_t) &unreserved___PAGEZERO + 19);
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003e60_Code_aarch64(generic64_t register_x0 _REG(x0_aarch64)) {
  __abort("A longjmp was taken");
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003e98_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003ea4_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003ea8_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003ef8_Code_aarch64(void) {
}

