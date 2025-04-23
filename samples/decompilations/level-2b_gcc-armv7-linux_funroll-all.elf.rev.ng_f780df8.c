#include "types-and-globals.h"
#include "helpers.h"

_ABI(AAPCS) _Noreturn
void function_0x10000_Code_arm(generic32_t argument_0, generic32_t argument_1, generic32_t argument_2, generic32_t argument_3) {
}

_ABI(AAPCS) _Noreturn
void function_0x10008_Code_arm(generic32_t argument_0, generic32_t argument_1, generic32_t argument_2, generic32_t argument_3) {
}

_ABI(AAPCS) _Noreturn
void function_0x10034_Code_arm(generic32_t argument_0, generic32_t argument_1, generic32_t argument_2, generic32_t argument_3) {
}

_ABI(AAPCS) _Noreturn
void function_0x100e0_Code_arm(generic32_t argument_0, generic32_t argument_1, generic32_t argument_2) {
}

_ABI(AAPCS) _Noreturn
void function_0x100e4_Code_arm(generic32_t argument_0, generic32_t argument_1, generic32_t argument_2) {
}

_ABI(AAPCS) _Noreturn
void function_0x100e8_Code_arm(generic32_t argument_0, generic32_t argument_1, generic32_t argument_2) {
}

_ABI(raw_arm)
artificial_struct_returned_by_rawfunction_76 unreserved__init(generic32_t register_r0 _REG(r0_arm), generic32_t register_r1 _REG(r1_arm), generic32_t register_r2 _REG(r2_arm), generic32_t register_r3 _REG(r3_arm)) {
  struct _PACKED struct_104 {
    generic32_t offset_0;
    generic32_t offset_4;
  } _stack;
  _stack.offset_0 = register_r3;
  _stack.offset_4 = __init_r14();
  call_weak_fn();
  return (artificial_struct_returned_by_rawfunction_76) { register_r0, register_r1, register_r2, _stack.offset_0 };
}

_ABI(AAPCS)
generic64_t function_0x1034c_Code_arm(generic32_t argument_0, generic32_t argument_1) {
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  pointer_or_number32_t _var_2;
  pointer_or_number32_t _var_3;
  artificial_struct_returned_by_rawfunction_28 _var_4;
  _var_4 = unreserved___libc_start_main(argument_0, argument_1, _undef_generic32_t(), _undef_generic32_t());
  _var_3 = _var_4.register_r0;
  _var_2 = _var_4.register_r1;
  _var_1 = _var_4.register_r2;
  _var_0 = _var_4.register_r3;
  return ((number64_t) _var_2 << 32) | _var_3;
}

_ABI(AAPCS)
void function_0x10350_Code_arm(generic32_t argument_0) {
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  pointer_or_number32_t _var_2;
  pointer_or_number32_t _var_3;
  artificial_struct_returned_by_rawfunction_28 _var_4;
  _var_4 = unreserved___libc_start_main(argument_0, _undef_generic32_t(), _undef_generic32_t(), _undef_generic32_t());
  _var_3 = _var_4.register_r0;
  _var_2 = _var_4.register_r1;
  _var_1 = _var_4.register_r2;
  _var_0 = _var_4.register_r3;
}

_ABI(raw_arm)
artificial_struct_returned_by_rawfunction_78 function_0x1035c_Code_arm(generic32_t register_r0 _REG(r0_arm), generic32_t register_r1 _REG(r1_arm), generic32_t register_r2 _REG(r2_arm)) {
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  pointer_or_number32_t _var_2;
  pointer_or_number32_t _var_3;
  artificial_struct_returned_by_rawfunction_28 _var_4;
  _var_4 = printf(register_r0, register_r1, register_r2, _undef_generic32_t());
  _var_3 = _var_4.register_r0;
  _var_2 = _var_4.register_r1;
  _var_1 = _var_4.register_r2;
  _var_0 = _var_4.register_r3;
  return (artificial_struct_returned_by_rawfunction_78) { _var_3, _var_2, _var_1 };
}

_ABI(raw_arm)
artificial_struct_returned_by_rawfunction_79 function_0x10368_Code_arm(generic32_t register_r0 _REG(r0_arm)) {
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  pointer_or_number32_t _var_2;
  pointer_or_number32_t _var_3;
  artificial_struct_returned_by_rawfunction_28 _var_4;
  _var_4 = puts(register_r0, _undef_generic32_t(), _undef_generic32_t(), _undef_generic32_t());
  _var_3 = _var_4.register_r0;
  _var_2 = _var_4.register_r1;
  _var_1 = _var_4.register_r2;
  _var_0 = _var_4.register_r3;
  return (artificial_struct_returned_by_rawfunction_79) { _var_3, _var_2, _var_1 };
}

_ABI(AAPCS) _Noreturn
void function_0x10380_Code_arm(void) {
  abort();
}

_ABI(raw_arm) _Noreturn
void unreserved__start(generic32_t register_r0 _REG(r0_arm), struct_103 _stack_arguments _STACK) {
  struct _PACKED struct_105 {
    generic32_t offset_0;
    generic32_t offset_4;
  } _stack;
  _stack_arguments.offset_0 = &(&_stack)[1].offset_4;
  _stack.offset_4 = register_r0;
  _stack.offset_0 = 0;
  function_0x10350_Code_arm(*((generic32_t *) ""));
  __abort("A longjmp was taken");
}

_ABI(AAPCS)
void call_weak_fn(void) {
}

_ABI(AAPCS)
void deregister_tm_clones(void) {
}

_ABI(AAPCS)
generic64_t register_tm_clones(void) {
  return ((number64_t) ((int32_t) (((uint32_t) (segment_0x10000_Generic32_1972.unreserved__text.offset_176 - segment_0x10000_Generic32_1972.unreserved__text.offset_172) >> 31) + ((int32_t) (segment_0x10000_Generic32_1972.unreserved__text.offset_176 - segment_0x10000_Generic32_1972.unreserved__text.offset_172) >> 2)) >> 1) << 32) | segment_0x10000_Generic32_1972.unreserved__text.offset_172;
}

_ABI(AAPCS)
void unreserved___do_global_dtors_aux(void) {
  struct _PACKED struct_106 {
    uint8_t padding_at_0[4];
    generic32_t offset_4;
  } _stack;
  _stack.offset_4 = __init_r14();
  if (!*segment_0x10000_Generic32_1972.unreserved__text.offset_220) {
    deregister_tm_clones();
    *segment_0x10000_Generic32_1972.unreserved__text.offset_220 = '\001';
  }
}

_ABI(AAPCS)
generic64_t frame_dummy(void) {
  return ((number64_t) ((int32_t) (((uint32_t) (segment_0x10000_Generic32_1972.unreserved__text.offset_176 - segment_0x10000_Generic32_1972.unreserved__text.offset_172) >> 31) + ((int32_t) (segment_0x10000_Generic32_1972.unreserved__text.offset_176 - segment_0x10000_Generic32_1972.unreserved__text.offset_172) >> 2)) >> 1) << 32) | segment_0x10000_Generic32_1972.unreserved__text.offset_172;
}

_ABI(AAPCS)
void all_badges(void) {
  struct _PACKED struct_107 {
    uint8_t padding_at_0[4];
    generic32_t offset_4;
  } _stack;
  generic32_t _var_0;
  generic32_t _var_1;
  generic32_t _var_2;
  artificial_struct_returned_by_rawfunction_78 _var_3;
  _stack.offset_4 = __init_r14();
  _var_3 = function_0x1035c_Code_arm((generic32_t) "We can open every door with badge #%d\n", *((generic16_t *) (generic32_t) 135343) - *((generic8_t *) (generic32_t) 135347) + (*((generic16_t *) (generic32_t) 135320) - *((generic8_t *) (generic32_t) 135324) + (*((generic16_t *) (generic32_t) 135297) - *((generic8_t *) (generic32_t) 135301) + (*((generic16_t *) (generic32_t) 135274) - *((generic8_t *) (generic32_t) 135278) + (*((generic16_t *) (generic32_t) 135228) - *((generic8_t *) (generic32_t) 135232) + (*((generic16_t *) (generic32_t) 135251) - *((generic8_t *) (generic32_t) 135255)))))), *((generic16_t *) (generic32_t) 135320) - *((generic8_t *) (generic32_t) 135324));
  _var_2 = _var_3.register_r0;
  _var_1 = _var_3.register_r1;
  _var_0 = _var_3.register_r2;
}

_ABI(raw_arm)
artificial_struct_returned_by_rawfunction_88 polynome_table(void) {
  struct _PACKED struct_108 {
    generic8_t *offset_0;
    generic32_t offset_4;
  } _stack;
  generic32_t _var_0;
  generic32_t _var_1;
  generic32_t _var_2;
  generic32_t _var_3;
  generic32_t _var_4;
  generic32_t _var_5;
  generic32_t _var_6;
  generic32_t _var_7;
  generic32_t _var_8;
  generic32_t _var_9;
  generic32_t _var_10;
  generic32_t _var_11;
  generic32_t _var_12;
  generic32_t _var_13;
  generic32_t _var_14;
  generic32_t _var_15;
  generic32_t _var_16;
  generic32_t _var_17;
  generic32_t _var_18;
  generic32_t _var_19;
  generic32_t _var_20;
  generic32_t _var_21;
  generic32_t _var_22;
  generic32_t _var_23;
  generic32_t _var_24;
  generic32_t _var_25;
  generic32_t _var_26;
  generic32_t _var_27;
  generic32_t _var_28;
  generic32_t _var_29;
  generic32_t _var_30;
  generic32_t _var_31;
  generic32_t _var_32;
  artificial_struct_returned_by_rawfunction_78 _var_33;
  artificial_struct_returned_by_rawfunction_78 _var_34;
  artificial_struct_returned_by_rawfunction_78 _var_35;
  artificial_struct_returned_by_rawfunction_78 _var_36;
  artificial_struct_returned_by_rawfunction_78 _var_37;
  artificial_struct_returned_by_rawfunction_78 _var_38;
  artificial_struct_returned_by_rawfunction_78 _var_39;
  artificial_struct_returned_by_rawfunction_78 _var_40;
  artificial_struct_returned_by_rawfunction_78 _var_41;
  artificial_struct_returned_by_rawfunction_78 _var_42;
  artificial_struct_returned_by_rawfunction_78 _var_43;
  _stack.offset_0 = "P(%d) = %d\n";
  _stack.offset_4 = __init_r14();
  _var_33 = function_0x1035c_Code_arm((generic32_t) "P(%d) = %d\n", 0, 5);
  _var_32 = _var_33.register_r0;
  _var_31 = _var_33.register_r1;
  _var_30 = _var_33.register_r2;
  _var_34 = function_0x1035c_Code_arm((generic32_t) "P(%d) = %d\n", 1, (generic32_t) -55);
  _var_29 = _var_34.register_r0;
  _var_28 = _var_34.register_r1;
  _var_27 = _var_34.register_r2;
  _var_35 = function_0x1035c_Code_arm((generic32_t) "P(%d) = %d\n", 2, (generic32_t) -93);
  _var_26 = _var_35.register_r0;
  _var_25 = _var_35.register_r1;
  _var_24 = _var_35.register_r2;
  _var_36 = function_0x1035c_Code_arm((generic32_t) "P(%d) = %d\n", 3, (generic32_t) -109);
  _var_23 = _var_36.register_r0;
  _var_22 = _var_36.register_r1;
  _var_21 = _var_36.register_r2;
  _var_37 = function_0x1035c_Code_arm((generic32_t) "P(%d) = %d\n", 4, (generic32_t) -103);
  _var_20 = _var_37.register_r0;
  _var_19 = _var_37.register_r1;
  _var_18 = _var_37.register_r2;
  _var_38 = function_0x1035c_Code_arm((generic32_t) "P(%d) = %d\n", 5, (generic32_t) -75);
  _var_17 = _var_38.register_r0;
  _var_16 = _var_38.register_r1;
  _var_15 = _var_38.register_r2;
  _var_39 = function_0x1035c_Code_arm((generic32_t) "P(%d) = %d\n", 6, (generic32_t) -25);
  _var_14 = _var_39.register_r0;
  _var_13 = _var_39.register_r1;
  _var_12 = _var_39.register_r2;
  _var_40 = function_0x1035c_Code_arm((generic32_t) "P(%d) = %d\n", 7, 47);
  _var_11 = _var_40.register_r0;
  _var_10 = _var_40.register_r1;
  _var_9 = _var_40.register_r2;
  _var_41 = function_0x1035c_Code_arm((generic32_t) "P(%d) = %d\n", 8, 141);
  _var_8 = _var_41.register_r0;
  _var_7 = _var_41.register_r1;
  _var_6 = _var_41.register_r2;
  _var_42 = function_0x1035c_Code_arm((generic32_t) "P(%d) = %d\n", 9, 257);
  _var_5 = _var_42.register_r0;
  _var_4 = _var_42.register_r1;
  _var_3 = _var_42.register_r2;
  _var_43 = function_0x1035c_Code_arm((generic32_t) "P(%d) = %d\n", 10, 395);
  _var_2 = _var_43.register_r0;
  _var_1 = _var_43.register_r1;
  _var_0 = _var_43.register_r2;
  return (artificial_struct_returned_by_rawfunction_88) { _var_2, _var_1, _var_0 };
}

_ABI(raw_arm)
artificial_struct_returned_by_rawfunction_89 red_herring(generic32_t register_r0 _REG(r0_arm), generic32_t register_r1 _REG(r1_arm), generic32_t register_r2 _REG(r2_arm)) {
  struct _PACKED struct_109 {
    generic8_t *offset_0;
    generic32_t offset_4;
  } _stack;
  generic32_t _var_0;
  generic32_t _var_1;
  generic32_t _var_2;
  generic32_t _var_3;
  generic32_t _var_4;
  generic32_t _var_5;
  generic32_t _var_6;
  generic32_t _var_7;
  generic32_t _var_8;
  generic32_t _var_9;
  generic32_t _var_10;
  generic32_t _var_11;
  generic32_t _var_12;
  generic32_t _var_13;
  generic32_t _var_14;
  generic32_t _var_15;
  generic32_t _var_16;
  generic32_t _var_17;
  artificial_struct_returned_by_rawfunction_79 _var_18;
  artificial_struct_returned_by_rawfunction_78 _var_19;
  artificial_struct_returned_by_rawfunction_78 _var_20;
  artificial_struct_returned_by_rawfunction_78 _var_21;
  artificial_struct_returned_by_rawfunction_78 _var_22;
  artificial_struct_returned_by_rawfunction_78 _var_23;
  _stack.offset_0 = " *  %d\n";
  _stack.offset_4 = __init_r14();
  _var_18 = function_0x10368_Code_arm((generic32_t) "These are a few of my favorite numbers:");
  _var_17 = _var_18.register_r0;
  _var_16 = _var_18.register_r1;
  _var_15 = _var_18.register_r2;
  _var_19 = function_0x1035c_Code_arm((generic32_t) " *  %d\n", 16, _var_15);
  _var_14 = _var_19.register_r0;
  _var_13 = _var_19.register_r1;
  _var_12 = _var_19.register_r2;
  _var_20 = function_0x1035c_Code_arm((generic32_t) " *  %d\n", 35, _var_12);
  _var_11 = _var_20.register_r0;
  _var_10 = _var_20.register_r1;
  _var_9 = _var_20.register_r2;
  _var_21 = function_0x1035c_Code_arm((generic32_t) " *  %d\n", 48, _var_9);
  _var_8 = _var_21.register_r0;
  _var_7 = _var_21.register_r1;
  _var_6 = _var_21.register_r2;
  _var_22 = function_0x1035c_Code_arm((generic32_t) " *  %d\n", 49, _var_6);
  _var_5 = _var_22.register_r0;
  _var_4 = _var_22.register_r1;
  _var_3 = _var_22.register_r2;
  _var_23 = function_0x1035c_Code_arm((generic32_t) " *  %d\n", 32, _var_3);
  _var_2 = _var_23.register_r0;
  _var_1 = _var_23.register_r1;
  _var_0 = _var_23.register_r2;
  return (artificial_struct_returned_by_rawfunction_89) { _var_2, _var_1, _var_0 };
}

_ABI(raw_arm)
artificial_struct_returned_by_rawfunction_90 main(void) {
  struct _PACKED struct_110 {
    uint8_t padding_at_0[4];
    generic32_t offset_4;
  } _stack;
  generic32_t _var_0;
  generic32_t _var_1;
  generic32_t _var_2;
  generic32_t _var_3;
  generic32_t _var_4;
  generic32_t _var_5;
  artificial_struct_returned_by_rawfunction_88 _var_6;
  artificial_struct_returned_by_rawfunction_89 _var_7;
  _stack.offset_4 = __init_r14();
  all_badges();
  _var_6 = polynome_table();
  _var_5 = _var_6.register_r0;
  _var_4 = _var_6.register_r1;
  _var_3 = _var_6.register_r2;
  _var_7 = red_herring(_var_5, _var_4, _var_3);
  _var_2 = _var_7.register_r0;
  _var_1 = _var_7.register_r1;
  _var_0 = _var_7.register_r2;
  return (artificial_struct_returned_by_rawfunction_90) { 0, _var_1, _var_0 };
}

_ABI(raw_arm)
artificial_struct_returned_by_rawfunction_91 unreserved__fini(generic32_t register_r0 _REG(r0_arm), generic32_t register_r1 _REG(r1_arm), generic32_t register_r2 _REG(r2_arm), generic32_t register_r3 _REG(r3_arm)) {
  *((generic32_t *) (__init_local_sp() - 8)) = register_r3;
  *((generic32_t *) (__init_local_sp() - 4)) = __init_r14();
  return (artificial_struct_returned_by_rawfunction_91) { register_r0, register_r1, register_r2, *((generic32_t *) (__init_local_sp() - 8)) };
}

_ABI(AAPCS) _Noreturn
void function_0x10100_Code_arm_thumb(void) {
}

