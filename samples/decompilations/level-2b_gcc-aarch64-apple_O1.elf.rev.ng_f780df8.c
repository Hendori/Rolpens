#include "types-and-globals.h"
#include "helpers.h"

_ABI(raw_aarch64) _Noreturn
void function_0x100000000_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003000_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003bd8_Code_aarch64(void) {
  struct _PACKED struct_17 {
    generic32_t offset_0;
    uint8_t padding_at_4[28];
  } _stack;
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 24))) = __init_lr();
  _stack.offset_0 = unreserved___DATA.offset_155 - unreserved___DATA.offset_159 + (unreserved___DATA.offset_132 - unreserved___DATA.offset_136 + (unreserved___DATA.offset_109 - unreserved___DATA.offset_113 + (unreserved___DATA.offset_86 - unreserved___DATA.offset_90 + (unreserved___DATA.offset_40 - unreserved___DATA.offset_44 + (unreserved___DATA.offset_63 - unreserved___DATA.offset_67)))));
  function_0x100003e30_Code_aarch64((generic64_t) function_0x100003e78_Code_aarch64);
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003c64_Code_aarch64(void) {
  struct _PACKED struct_18 {
    generic32_t offset_0;
    uint8_t padding_at_4[44];
  } _stack;
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 24))) = __init_lr();
  *((uint8_t **) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 32))) = "P(%d) = %d\n";
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 40))) = (pointer_or_number64_t) &unreserved___PAGEZERO + 5;
  *((generic32_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 8))) = 5;
  _stack.offset_0 = 0;
  function_0x100003e30_Code_aarch64((generic64_t) "P(%d) = %d\n");
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003d8c_Code_aarch64(void) {
  struct _PACKED struct_19 {
    uint8_t padding_at_0[48];
  } _stack;
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 24))) = __init_lr();
  function_0x100003e3c_Code_aarch64();
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003e10_Code_aarch64(void) {
  struct _PACKED struct_20 {
    uint8_t padding_at_0[16];
  } _stack;
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 8))) = __init_lr();
  function_0x100003bd8_Code_aarch64();
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003e30_Code_aarch64(generic64_t register_x0 _REG(x0_aarch64)) {
  __abort("A longjmp was taken");
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003e3c_Code_aarch64(void) {
  __abort("A longjmp was taken");
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003e68_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003e74_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003e78_Code_aarch64(void) {
}

_ABI(raw_aarch64) _Noreturn
void function_0x100003ee0_Code_aarch64(void) {
}

