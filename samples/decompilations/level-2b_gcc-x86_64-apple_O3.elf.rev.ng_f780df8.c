#include "types-and-globals.h"
#include "helpers.h"

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000000_Code_x86_64(generic64_t argument_0, generic64_t argument_1, generic64_t argument_2, generic64_t argument_3, generic64_t argument_4) {
  generic32_t _var_0;
  generic64_t _var_1;
  generic64_t _var_2;
  generic64_t _var_3;
  generic64_t _var_4;
  generic64_t _var_5;
  generic64_t _var_6;
  generic64_t _var_7;
  generic64_t _var_8;
  generic64_t _var_9;
  generic64_t _var_10;
  generic32_t _var_11;
  generic64_t _var_12;
  generic32_t _var_13;
  generic32_t _var_14;
  generic32_t _var_15;
  generic32_t _var_16;
  generic64_t _var_17;
  generic32_t _var_18;
  generic32_t _var_19;
  generic32_t _var_20;
  generic64_t _var_21;
  generic32_t _var_22;
  generic32_t _var_23;
  generic32_t _var_24;
  generic64_t _var_25;
  generic32_t _var_26;
  generic32_t _var_27;
  generic32_t _var_28;
  generic64_t _var_29;
  generic32_t _var_30;
  generic32_t _var_31;
  generic32_t _var_32;
  generic64_t _var_33;
  generic32_t _var_34;
  generic32_t _var_35;
  generic32_t _var_36;
  generic64_t _var_37;
  generic32_t _var_38;
  generic32_t _var_39;
  generic32_t _var_40;
  generic64_t _var_41;
  generic32_t _var_42;
  generic32_t _var_43;
  generic32_t _var_44;
  generic64_t _var_45;
  generic32_t _var_46;
  generic32_t _var_47;
  generic64_t _var_48;
  generic64_t _var_49;
  generic32_t _var_50;
  generic32_t _var_51;
  generic64_t _var_52;
  generic32_t _var_53;
  generic8_t _var_54;
  _helper_iret_protected_wrapper(NULL, 1, 1, &unreserved___PAGEZERO, 0, &unreserved___PAGEZERO, &unreserved___PAGEZERO, function_0x100000000_Code_x86_64, _undef_generic64_t(), argument_4, _undef_generic64_t(), _undef_generic64_t(), _undef_generic64_t(), argument_3, argument_0, argument_2, argument_1, __init_local_sp(), 4294967295, &unreserved___PAGEZERO, (pointer_or_number64_t) &unreserved___PAGEZERO + 514, 1, 4243635, 1, 0, &unreserved___PAGEZERO, 0, 51, &unreserved___PAGEZERO, 4294967295, 15727360, 43, &unreserved___PAGEZERO, 13628160, 0, &unreserved___PAGEZERO, 0, 0, 0, 0, 0, &unreserved___PAGEZERO, 65535, 0, &unreserved___PAGEZERO, 35584, 274877906944, 127, (pointer_or_number64_t) &unreserved___PAGEZERO + 2147549185, &unreserved___PAGEZERO, 0, &unreserved___PAGEZERO, 4294967295, &_var_0, &_var_1, &_var_2, &_var_3, &_var_4, &_var_5, &_var_6, &_var_7, &_var_8, &_var_9, &_var_10, &_var_11, &_var_12, &_var_13, &_var_14, &_var_15, &_var_16, &_var_17, &_var_18, &_var_19, &_var_20, &_var_21, &_var_22, &_var_23, &_var_24, &_var_25, &_var_26, &_var_27, &_var_28, &_var_29, &_var_30, &_var_31, &_var_32, &_var_33, &_var_34, &_var_35, &_var_36, &_var_37, &_var_38, &_var_39, &_var_40, &_var_41, &_var_42, &_var_43, &_var_44, &_var_45, &_var_46, &_var_47, &_var_48, &_var_49, &_var_50, &_var_51, &_var_52, &_var_53, &_var_54);
  __abort("A longjmp was taken");
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000001_Code_x86_64(generic64_t argument_0, generic64_t argument_1, generic64_t argument_2, generic64_t argument_3, generic64_t argument_4) {
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x1000003f9_Code_x86_64(generic64_t argument_0, generic64_t argument_1, generic64_t argument_2, generic64_t argument_3) {
  generic64_t _var_0;
  generic64_t _var_1;
  _var_1 = _lshift(&unreserved___PAGEZERO, 0);
  _var_0 = _lshift(&unreserved___PAGEZERO, 4);
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x10000061b_Code_x86_64(generic8_t *argument_0, generic64_t argument_1, generic64_t argument_2, generic64_t argument_3) {
  struct _PACKED struct_21 {
    uint8_t padding_at_0[8];
  } _stack;
  generic32_t _var_0;
  generic64_t _var_1;
  generic64_t _var_2;
  generic32_t _var_3;
  *argument_0 = *argument_0 + (number8_t) argument_3;
  _helper_write_eflags_wrapper(NULL, *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 8))), 2375936, (pointer_or_number64_t) &unreserved___PAGEZERO + 514, &_var_0, &_var_1, &_var_2, &_var_3);
  *((generic8_t *) 18446744073709551501U) = *((generic8_t *) 18446744073709551501U) + (number8_t) argument_3;
  *((struct_0 **) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 8))) = &unreserved___PAGEZERO;
  *((generic64_t *) &_stack) = (pointer_or_number64_t) &unreserved___DATA + 32;
  __abort("A longjmp was taken");
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x10000065c_Code_x86_64(void) {
  struct _PACKED struct_22 {
    generic64_t offset_0;
    uint8_t padding_at_8[8];
  } _stack;
  *((struct_0 **) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 8))) = &unreserved___PAGEZERO;
  _stack.offset_0 = (pointer_or_number64_t) &unreserved___DATA + 32;
  __abort("A longjmp was taken");
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000cb0_Code_x86_64(void) {
  struct _PACKED struct_23 {
    generic64_t offset_0;
    uint8_t padding_at_8[8];
  } _stack;
  *((struct_0 **) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 8))) = &unreserved___PAGEZERO;
  _stack.offset_0 = (pointer_or_number64_t) &unreserved___DATA + 32;
  __abort("A longjmp was taken");
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000d30_Code_x86_64(void) {
  struct _PACKED struct_24 {
    uint8_t padding_at_0[8];
  } _stack;
  *((cabifunction_52 **) &_stack) = function_0x100000ef7_Code_x86_64;
  function_0x100000ea0_Code_x86_64((generic64_t) function_0x100000ef7_Code_x86_64, (struct_29 *) &unreserved___PAGEZERO, (pointer_or_number64_t) &unreserved___PAGEZERO + 5);
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000e20_Code_x86_64(void) {
  function_0x100000ea6_Code_x86_64((generic64_t) function_0x100000f08_Code_x86_64);
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000e80_Code_x86_64(void) {
  function_0x100000cb0_Code_x86_64();
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000ea0_Code_x86_64(generic64_t argument_0, struct_29 *argument_1, generic64_t argument_2) {
  struct _PACKED struct_25 {
    generic64_t offset_0;
    uint8_t padding_at_8[8];
  } _stack;
  *((struct_0 **) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 8))) = &unreserved___PAGEZERO;
  _stack.offset_0 = (pointer_or_number64_t) &unreserved___DATA + 32;
  __abort("A longjmp was taken");
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000ea6_Code_x86_64(generic64_t argument_0) {
  struct _PACKED struct_27 {
    generic64_t offset_0;
    uint8_t padding_at_8[8];
  } _stack;
  *((generic64_t *) ((pointer_or_number64_t) &_stack + ((pointer_or_number64_t) &unreserved___PAGEZERO + 8))) = (pointer_or_number64_t) &unreserved___PAGEZERO + 14;
  _stack.offset_0 = (pointer_or_number64_t) &unreserved___DATA + 32;
  __abort("A longjmp was taken");
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000ed0_Code_x86_64(generic64_t argument_0, generic64_t argument_1, generic64_t argument_2, generic64_t argument_3) {
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000ef7_Code_x86_64(generic64_t argument_0, generic64_t argument_1, generic64_t argument_2, generic64_t argument_3) {
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000f08_Code_x86_64(generic64_t argument_0, generic64_t argument_1, generic64_t argument_2, generic64_t argument_3) {
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000f30_Code_x86_64(generic64_t argument_0, generic64_t argument_1, generic64_t argument_2, generic64_t argument_3) {
}

_ABI(SystemV_x86_64) _Noreturn
void function_0x100000f38_Code_x86_64(generic64_t argument_0, generic64_t argument_1, generic64_t argument_2, generic64_t argument_3) {
}

