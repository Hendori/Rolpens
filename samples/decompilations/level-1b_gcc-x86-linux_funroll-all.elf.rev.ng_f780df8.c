#include "types-and-globals.h"
#include "helpers.h"

_ABI(SystemV_x86)
void unreserved__init(void) {
  unreserved___x86_get_pc_thunk_bx();
  if (*((generic32_t *) NULL)) {
    ((cabifunction_89 *) *((generic32_t *) NULL))();
  }
}

_ABI(raw_x86)
artificial_struct_returned_by_rawfunction_31 unreserved___libc_start_main_(void) {
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  artificial_struct_returned_by_rawfunction_31 _var_2;
  _var_2 = unreserved___libc_start_main();
  _var_1 = _var_2.register_eax;
  _var_0 = _var_2.register_edx;
  return (artificial_struct_returned_by_rawfunction_31) { _var_1, _var_0 };
}

_ABI(raw_x86)
artificial_struct_returned_by_rawfunction_31 printf_(void) {
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  artificial_struct_returned_by_rawfunction_31 _var_2;
  _var_2 = printf();
  _var_1 = _var_2.register_eax;
  _var_0 = _var_2.register_edx;
  return (artificial_struct_returned_by_rawfunction_31) { _var_1, _var_0 };
}

_ABI(raw_x86)
artificial_struct_returned_by_rawfunction_31 puts_(void) {
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  artificial_struct_returned_by_rawfunction_31 _var_2;
  _var_2 = puts();
  _var_1 = _var_2.register_eax;
  _var_0 = _var_2.register_edx;
  return (artificial_struct_returned_by_rawfunction_31) { _var_1, _var_0 };
}

_ABI(raw_x86)
artificial_struct_returned_by_rawfunction_31 unreserved___cxa_finalize_(void) {
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  artificial_struct_returned_by_rawfunction_31 _var_2;
  _var_2 = unreserved___cxa_finalize();
  _var_1 = _var_2.register_eax;
  _var_0 = _var_2.register_edx;
  return (artificial_struct_returned_by_rawfunction_31) { _var_1, _var_0 };
}

_ABI(SystemV_x86) _Noreturn
void unreserved__start(void) {
  struct _PACKED struct_55 {
    generic32_t offset_0;
    generic32_t offset_4;
    generic32_t offset_8;
    generic32_t offset_12;
    generic32_t offset_16;
    uint8_t padding_at_20[4];
    generic32_t *offset_24;
  } _stack;
  artificial_struct_returned_by_rawfunction_31 _var_0;
  _stack.offset_24 = &(&_stack)[1];
  function_0x401098_Code_x86();
  _stack.offset_16 = 0;
  _stack.offset_12 = 0;
  _stack.offset_8 = &(&_stack)[1].offset_4;
  _stack.offset_4 = (&_stack)[1].offset_0;
  _stack.offset_0 = *((generic32_t *) NULL);
  _var_0 = unreserved___libc_start_main_();
}

_ABI(SystemV_x86)
void function_0x401098_Code_x86(void) {
}

_ABI(SystemV_x86)
void unreserved___x86_get_pc_thunk_bx(void) {
}

_ABI(SystemV_x86)
void deregister_tm_clones(void) {
  generic64_t _var_0;
  _var_0 = unreserved___x86_get_pc_thunk_dx();
}

_ABI(SystemV_x86)
void register_tm_clones(void) {
  generic64_t _var_0;
  _var_0 = unreserved___x86_get_pc_thunk_dx();
  *((generic32_t *) (__init_local_sp() - 8)) = 0;
}

_ABI(SystemV_x86)
void unreserved___do_global_dtors_aux(void) {
  struct _PACKED struct_56 {
    generic32_t offset_0;
    uint8_t padding_at_4[24];
  } _stack;
  unreserved___x86_get_pc_thunk_bx();
  if (!*((generic8_t *) NULL)) {
    if (*((generic32_t *) NULL)) {
      pointer_or_number32_t _var_0;
      pointer_or_number32_t _var_1;
      artificial_struct_returned_by_rawfunction_31 _var_2;
      _stack.offset_0 = *((generic32_t *) NULL);
      _var_2 = unreserved___cxa_finalize_();
      _var_1 = _var_2.register_eax;
      _var_0 = _var_2.register_edx;
    }
    deregister_tm_clones();
    *((generic8_t *) NULL) = '\001';
  }
}

_ABI(SystemV_x86)
void frame_dummy(void) {
  generic64_t _var_0;
  _var_0 = unreserved___x86_get_pc_thunk_dx();
  *((generic32_t *) (__init_local_sp() - 8)) = 0;
}

_ABI(SystemV_x86)
generic64_t unreserved___x86_get_pc_thunk_dx(void) {
  return (number64_t) *((generic32_t *) __init_local_sp()) << 32;
}

_ABI(SystemV_x86)
void all_badges(void) {
  struct _PACKED struct_57 {
    uint8_t padding_at_0[4];
    generic32_t offset_4;
    uint8_t padding_at_8[20];
  } _stack;
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  artificial_struct_returned_by_rawfunction_31 _var_2;
  unreserved___x86_get_pc_thunk_bx();
  _stack.offset_4 = (*((generic16_t *) NULL) - (*((generic16_t *) NULL) & 0xFF)) * 6;
  _var_2 = printf_();
  _var_1 = _var_2.register_eax;
  _var_0 = _var_2.register_edx;
}

_ABI(SystemV_x86)
void polynome_table(void) {
  struct _PACKED struct_58 {
    uint8_t padding_at_0[4];
    generic32_t offset_4;
    generic32_t offset_8;
    uint8_t padding_at_12[16];
  } _stack;
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  pointer_or_number32_t _var_2;
  pointer_or_number32_t _var_3;
  pointer_or_number32_t _var_4;
  pointer_or_number32_t _var_5;
  pointer_or_number32_t _var_6;
  pointer_or_number32_t _var_7;
  pointer_or_number32_t _var_8;
  pointer_or_number32_t _var_9;
  pointer_or_number32_t _var_10;
  pointer_or_number32_t _var_11;
  pointer_or_number32_t _var_12;
  pointer_or_number32_t _var_13;
  pointer_or_number32_t _var_14;
  pointer_or_number32_t _var_15;
  pointer_or_number32_t _var_16;
  pointer_or_number32_t _var_17;
  pointer_or_number32_t _var_18;
  pointer_or_number32_t _var_19;
  pointer_or_number32_t _var_20;
  pointer_or_number32_t _var_21;
  artificial_struct_returned_by_rawfunction_31 _var_22;
  artificial_struct_returned_by_rawfunction_31 _var_23;
  artificial_struct_returned_by_rawfunction_31 _var_24;
  artificial_struct_returned_by_rawfunction_31 _var_25;
  artificial_struct_returned_by_rawfunction_31 _var_26;
  artificial_struct_returned_by_rawfunction_31 _var_27;
  artificial_struct_returned_by_rawfunction_31 _var_28;
  artificial_struct_returned_by_rawfunction_31 _var_29;
  artificial_struct_returned_by_rawfunction_31 _var_30;
  artificial_struct_returned_by_rawfunction_31 _var_31;
  artificial_struct_returned_by_rawfunction_31 _var_32;
  unreserved___x86_get_pc_thunk_bx();
  _stack.offset_8 = 5;
  _stack.offset_4 = 0;
  _var_22 = printf_();
  _var_21 = _var_22.register_eax;
  _var_20 = _var_22.register_edx;
  _stack.offset_8 = 4294967241;
  _stack.offset_4 = 1;
  _var_23 = printf_();
  _var_19 = _var_23.register_eax;
  _var_18 = _var_23.register_edx;
  _stack.offset_8 = 4294967203;
  _stack.offset_4 = 2;
  _var_24 = printf_();
  _var_17 = _var_24.register_eax;
  _var_16 = _var_24.register_edx;
  _stack.offset_8 = 4294967187;
  _stack.offset_4 = 3;
  _var_25 = printf_();
  _var_15 = _var_25.register_eax;
  _var_14 = _var_25.register_edx;
  _stack.offset_8 = 4294967193;
  _stack.offset_4 = 4;
  _var_26 = printf_();
  _var_13 = _var_26.register_eax;
  _var_12 = _var_26.register_edx;
  _stack.offset_8 = 4294967221;
  _stack.offset_4 = 5;
  _var_27 = printf_();
  _var_11 = _var_27.register_eax;
  _var_10 = _var_27.register_edx;
  _stack.offset_8 = 4294967271;
  _stack.offset_4 = 6;
  _var_28 = printf_();
  _var_9 = _var_28.register_eax;
  _var_8 = _var_28.register_edx;
  _stack.offset_8 = 47;
  _stack.offset_4 = 7;
  _var_29 = printf_();
  _var_7 = _var_29.register_eax;
  _var_6 = _var_29.register_edx;
  _stack.offset_8 = 141;
  _stack.offset_4 = 8;
  _var_30 = printf_();
  _var_5 = _var_30.register_eax;
  _var_4 = _var_30.register_edx;
  _stack.offset_8 = 257;
  _stack.offset_4 = 9;
  _var_31 = printf_();
  _var_3 = _var_31.register_eax;
  _var_2 = _var_31.register_edx;
  _stack.offset_8 = 395;
  _stack.offset_4 = 10;
  _var_32 = printf_();
  _var_1 = _var_32.register_eax;
  _var_0 = _var_32.register_edx;
}

_ABI(SystemV_x86)
void red_herring(void) {
  struct _PACKED struct_59 {
    uint8_t padding_at_0[4];
    generic32_t offset_4;
    uint8_t padding_at_8[20];
  } _stack;
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  pointer_or_number32_t _var_2;
  pointer_or_number32_t _var_3;
  pointer_or_number32_t _var_4;
  pointer_or_number32_t _var_5;
  pointer_or_number32_t _var_6;
  pointer_or_number32_t _var_7;
  pointer_or_number32_t _var_8;
  pointer_or_number32_t _var_9;
  pointer_or_number32_t _var_10;
  pointer_or_number32_t _var_11;
  artificial_struct_returned_by_rawfunction_31 _var_12;
  artificial_struct_returned_by_rawfunction_31 _var_13;
  artificial_struct_returned_by_rawfunction_31 _var_14;
  artificial_struct_returned_by_rawfunction_31 _var_15;
  artificial_struct_returned_by_rawfunction_31 _var_16;
  artificial_struct_returned_by_rawfunction_31 _var_17;
  unreserved___x86_get_pc_thunk_bx();
  _var_12 = puts_();
  _var_11 = _var_12.register_eax;
  _var_10 = _var_12.register_edx;
  _stack.offset_4 = 16;
  _var_13 = printf_();
  _var_9 = _var_13.register_eax;
  _var_8 = _var_13.register_edx;
  _stack.offset_4 = 35;
  _var_14 = printf_();
  _var_7 = _var_14.register_eax;
  _var_6 = _var_14.register_edx;
  _stack.offset_4 = 48;
  _var_15 = printf_();
  _var_5 = _var_15.register_eax;
  _var_4 = _var_15.register_edx;
  _stack.offset_4 = 49;
  _var_16 = printf_();
  _var_3 = _var_16.register_eax;
  _var_2 = _var_16.register_edx;
  _stack.offset_4 = 32;
  _var_17 = printf_();
  _var_1 = _var_17.register_eax;
  _var_0 = _var_17.register_edx;
}

_ABI(SystemV_x86)
generic32_t main(void) {
  all_badges();
  polynome_table();
  red_herring();
  return 0;
}

_ABI(SystemV_x86)
void unreserved__fini(void) {
  unreserved___x86_get_pc_thunk_bx();
}

