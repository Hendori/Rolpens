#include "types-and-globals.h"
#include "helpers.h"

_ABI(raw_aarch64) _Noreturn
void function_0x100000000_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003000_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003574_Code_aarch64(void) {
  struct _PACKED struct_16 {
    generic32_t offset_0;
    uint8_t padding_at_4[44];
  } _stack;
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 24))) = __init_lr();
  *((rawfunction_14 **) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 32))) = function_0x100003ec0_Code_aarch64;
  _stack.offset_0 = 0;
  function_0x100003e78_Code_aarch64((generic64_t) function_0x100003ec0_Code_aarch64);
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003bf0_Code_aarch64(generic64_t register_x0 _REG(x0_aarch64)) {
  struct _PACKED struct_17 {
    generic32_t offset_0;
    uint8_t padding_at_4[92];
  } _stack;
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 40))) = __init_lr();
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 56))) = (pointer_or_number64_t) &unreserved___TEXT + 16096;
  *((generic32_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 16))) = 0;
  *((generic32_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 8))) = (number32_t) register_x0;
  _stack.offset_0 = 0;
  function_0x100003e78_Code_aarch64((pointer_or_number64_t) &unreserved___TEXT + 16096);
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003e58_Code_aarch64(void) {
  struct _PACKED struct_18 {
    uint8_t padding_at_0[16];
  } _stack;
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 8))) = __init_lr();
  function_0x100003bf0_Code_aarch64((pointer_or_number64_t) &unreserved___PAGEZERO + 19);
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003e78_Code_aarch64(generic64_t register_x0 _REG(x0_aarch64)) {
  __abort("A longjmp was taken");
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003e84_Code_aarch64(void) {
  __abort("A longjmp was taken");
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003eb0_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003ebc_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003ec0_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003f10_Code_aarch64(void) {
}

