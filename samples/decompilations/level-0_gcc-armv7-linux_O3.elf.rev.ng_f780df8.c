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
artificial_struct_returned_by_rawfunction_75 unreserved__init(generic32_t register_r0 _REG(r0_arm), generic32_t register_r1 _REG(r1_arm), generic32_t register_r2 _REG(r2_arm), generic32_t register_r3 _REG(r3_arm)) {
  struct _PACKED struct_102 {
    generic32_t offset_0;
    generic32_t offset_4;
  } _stack;
  _stack.offset_0 = register_r3;
  _stack.offset_4 = __init_r14();
  call_weak_fn();
  return (artificial_struct_returned_by_rawfunction_75) { register_r0, register_r1, register_r2, _stack.offset_0 };
}

_ABI(AAPCS)
generic64_t function_0x1034c_Code_arm(generic32_t argument_0, generic32_t argument_1) {
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  pointer_or_number32_t _var_2;
  pointer_or_number32_t _var_3;
  artificial_struct_returned_by_rawfunction_27 _var_4;
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
  artificial_struct_returned_by_rawfunction_27 _var_4;
  _var_4 = unreserved___libc_start_main(argument_0, _undef_generic32_t(), _undef_generic32_t(), _undef_generic32_t());
  _var_3 = _var_4.register_r0;
  _var_2 = _var_4.register_r1;
  _var_1 = _var_4.register_r2;
  _var_0 = _var_4.register_r3;
}

_ABI(AAPCS)
void function_0x1035c_Code_arm(void) {
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  pointer_or_number32_t _var_2;
  pointer_or_number32_t _var_3;
  artificial_struct_returned_by_rawfunction_27 _var_4;
  _var_4 = printf(_undef_generic32_t(), _undef_generic32_t(), _undef_generic32_t(), _undef_generic32_t());
  _var_3 = _var_4.register_r0;
  _var_2 = _var_4.register_r1;
  _var_1 = _var_4.register_r2;
  _var_0 = _var_4.register_r3;
}

_ABI(AAPCS)
void function_0x10368_Code_arm(generic32_t argument_0) {
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  pointer_or_number32_t _var_2;
  pointer_or_number32_t _var_3;
  artificial_struct_returned_by_rawfunction_27 _var_4;
  _var_4 = puts(argument_0, _undef_generic32_t(), _undef_generic32_t(), _undef_generic32_t());
  _var_3 = _var_4.register_r0;
  _var_2 = _var_4.register_r1;
  _var_1 = _var_4.register_r2;
  _var_0 = _var_4.register_r3;
}

_ABI(AAPCS) _Noreturn
void function_0x10380_Code_arm(void) {
  abort();
}

_ABI(AAPCS)
generic32_t main(void) {
  struct _PACKED struct_103 {
    uint8_t padding_at_0[4];
    generic32_t offset_4;
  } _stack;
  generic32_t _var_0;
  _stack.offset_4 = __init_r14();
  _var_0 = it_crowd();
  function_0x1035c_Code_arm();
  return 0;
}

_ABI(raw_arm) _Noreturn
void unreserved__start(generic32_t register_r0 _REG(r0_arm), struct_101 _stack_arguments _STACK) {
  struct _PACKED struct_105 {
    generic32_t offset_0;
    generic32_t offset_4;
  } _stack;
  _stack_arguments.offset_0 = &(&_stack)[1].offset_4;
  _stack.offset_4 = register_r0;
  _stack.offset_0 = 0;
  function_0x10350_Code_arm(segment_0x10000_Generic32_1940.unreserved__text.offset_80);
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
  return ((number64_t) ((int32_t) (((uint32_t) (segment_0x10000_Generic32_1940.unreserved__text.offset_212 - segment_0x10000_Generic32_1940.unreserved__text.offset_208) >> 31) + ((int32_t) (segment_0x10000_Generic32_1940.unreserved__text.offset_212 - segment_0x10000_Generic32_1940.unreserved__text.offset_208) >> 2)) >> 1) << 32) | segment_0x10000_Generic32_1940.unreserved__text.offset_208;
}

_ABI(AAPCS)
void unreserved___do_global_dtors_aux(void) {
  struct _PACKED struct_106 {
    uint8_t padding_at_0[4];
    generic32_t offset_4;
  } _stack;
  _stack.offset_4 = __init_r14();
  if (!*segment_0x10000_Generic32_1940.unreserved__text.offset_256) {
    deregister_tm_clones();
    *segment_0x10000_Generic32_1940.unreserved__text.offset_256 = '\001';
  }
}

_ABI(AAPCS)
generic64_t frame_dummy(void) {
  return ((number64_t) ((int32_t) (((uint32_t) (segment_0x10000_Generic32_1940.unreserved__text.offset_212 - segment_0x10000_Generic32_1940.unreserved__text.offset_208) >> 31) + ((int32_t) (segment_0x10000_Generic32_1940.unreserved__text.offset_212 - segment_0x10000_Generic32_1940.unreserved__text.offset_208) >> 2)) >> 1) << 32) | segment_0x10000_Generic32_1940.unreserved__text.offset_208;
}

_ABI(AAPCS)
generic32_t it_crowd(void) {
  struct _PACKED struct_104 {
    generic8_t *offset_0;
    generic32_t offset_4;
  } _stack;
  pointer_or_number32_t _var_0;
  pointer_or_number32_t _var_1;
  pointer_or_number32_t _var_2;
  pointer_or_number32_t _var_3;
  artificial_struct_returned_by_rawfunction_27 _var_4;
  _stack.offset_0 = "Are you sure?\n";
  _stack.offset_4 = __init_r14();
  function_0x10368_Code_arm((generic32_t) "Are you feeling stressed, Jen?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Are you sure?\n");
  function_0x10368_Code_arm((generic32_t) "Well, I guess you're not.\n");
  _var_4 = puts((pointer_or_number32_t) "Well done, Jen.\n", _undef_generic32_t(), _undef_generic32_t(), _undef_generic32_t());
  _var_3 = _var_4.register_r0;
  _var_2 = _var_4.register_r1;
  _var_1 = _var_4.register_r2;
  _var_0 = _var_4.register_r3;
  return _var_3;
}

_ABI(AAPCS)
generic32_t some_calculation(generic32_t argument_0) {
  return ((((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) * ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) + argument_0 + ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)))) * (((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) * ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) + argument_0 + ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)))) + argument_0 + (((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) * ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) + argument_0 + ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))))) * ((((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) * ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) + argument_0 + ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)))) * (((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) * ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) + argument_0 + ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)))) + argument_0 + (((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) * ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) + argument_0 + ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))))) + argument_0 + ((((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) * ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) + argument_0 + ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)))) * (((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) * ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) + argument_0 + ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)))) + argument_0 + (((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) * ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0))) + argument_0 + ((((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) * (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)) + argument_0 + (((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) * ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0) + argument_0 + ((argument_0 + 2) * argument_0 * ((argument_0 + 2) * argument_0) + argument_0 + (argument_0 + 2) * argument_0)))));
}

_ABI(raw_arm)
artificial_struct_returned_by_rawfunction_89 unreserved__fini(generic32_t register_r0 _REG(r0_arm), generic32_t register_r1 _REG(r1_arm), generic32_t register_r2 _REG(r2_arm), generic32_t register_r3 _REG(r3_arm)) {
  *((generic32_t *) (__init_local_sp() - 8)) = register_r3;
  *((generic32_t *) (__init_local_sp() - 4)) = __init_r14();
  return (artificial_struct_returned_by_rawfunction_89) { register_r0, register_r1, register_r2, *((generic32_t *) (__init_local_sp() - 8)) };
}

_ABI(AAPCS) _Noreturn
void function_0x10100_Code_arm_thumb(void) {
}

