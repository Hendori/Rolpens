#include "types-and-globals.h"
#include "helpers.h"

_ABI(SystemV_x86_64)
void unreserved__init(void) {
  if (segment_0x403dd0_Generic64_768.unreserved__got.offset_16) {
    ((cabifunction_91 *) segment_0x403dd0_Generic64_768.unreserved__got.offset_16)();
  }
}

_ABI(SystemV_x86_64)
int32_t puts_(const int8_t *str) {
  int32_t _var_0;
  _var_0 = puts(str);
  return _var_0;
}

_ABI(SystemV_x86_64)
int32_t printf_(const int8_t *format) {
  int32_t _var_0;
  _var_0 = printf(format);
  return _var_0;
}

_ABI(SystemV_x86_64)
void unreserved___cxa_finalize_(void *d) {
  unreserved___cxa_finalize(d);
}

_ABI(SystemV_x86_64) _Noreturn
void unreserved__start(generic64_t argument_0, generic64_t argument_1, struct_65 *argument_2) {
  int32_t _var_0;
  _var_0 = unreserved___libc_start_main((cabifunction_35 *) main, (int32_t) (number32_t) *((generic64_t *) __init_local_sp()), (int8_t **) (__init_local_sp() + 8), (cabifunction_35 *) NULL, (cabifunction_34 *) NULL, (cabifunction_34 *) argument_2, (void *) __init_local_sp());
  // The previous function call does not return
}

_ABI(SystemV_x86_64)
void deregister_tm_clones(void) {
}

_ABI(SystemV_x86_64)
void register_tm_clones(void) {
}

_ABI(SystemV_x86_64)
void unreserved___do_global_dtors_aux(void) {
  if (!segment_0x403dd0_Generic64_768.unreserved__bss.completed_0) {
    if (segment_0x403dd0_Generic64_768.unreserved__got.offset_32) {
      unreserved___cxa_finalize_((void *) segment_0x403dd0_Generic64_768.unreserved__data.offset_8);
    }
    deregister_tm_clones();
    segment_0x403dd0_Generic64_768.unreserved__bss.completed_0 = '\001';
  }
}

_ABI(SystemV_x86_64)
void frame_dummy(void) {
}

_ABI(SystemV_x86_64)
struct_82 all_badges(void) {
  int32_t _var_0;
  struct_82 _var_1;
  _var_0 = printf_((const int8_t *) "We can open every door with badge #%d\n");
  _var_1.offset_0 = (uint64_t) _var_0;
  _var_1.offset_8 = segment_0x403dd0_Generic64_768.unreserved__data.some_blob.offset_135;
  return _var_1;
}

_ABI(SystemV_x86_64)
struct_84 polynome_table(generic64_t argument_0, generic64_t argument_1, generic64_t argument_2) {
  struct _PACKED struct_60 {
    generic8_t *offset_0;
  } _stack;
  int32_t _var_0;
  int32_t _var_1;
  int32_t _var_2;
  int32_t _var_3;
  int32_t _var_4;
  int32_t _var_5;
  int32_t _var_6;
  int32_t _var_7;
  int32_t _var_8;
  int32_t _var_9;
  int32_t _var_10;
  struct_84 _var_11;
  *((uint8_t **) &_stack) = "P(%d) = %d\n";
  _var_10 = printf_((const int8_t *) "P(%d) = %d\n");
  _var_9 = printf_((const int8_t *) "P(%d) = %d\n");
  _var_8 = printf_((const int8_t *) "P(%d) = %d\n");
  _var_7 = printf_((const int8_t *) "P(%d) = %d\n");
  _var_6 = printf_((const int8_t *) "P(%d) = %d\n");
  _var_5 = printf_((const int8_t *) "P(%d) = %d\n");
  _var_4 = printf_((const int8_t *) "P(%d) = %d\n");
  _var_3 = printf_((const int8_t *) "P(%d) = %d\n");
  _var_2 = printf_((const int8_t *) "P(%d) = %d\n");
  _var_1 = printf_((const int8_t *) "P(%d) = %d\n");
  _var_0 = printf_((const int8_t *) "P(%d) = %d\n");
  _var_11.offset_0 = (uint64_t) _var_0;
  _var_11.offset_8 = 395;
  return _var_11;
}

_ABI(SystemV_x86_64)
struct_86 red_herring(generic64_t argument_0, generic64_t argument_1, generic64_t argument_2) {
  struct _PACKED struct_61 {
    generic8_t *offset_0;
  } _stack;
  int32_t _var_0;
  int32_t _var_1;
  int32_t _var_2;
  int32_t _var_3;
  int32_t _var_4;
  int32_t _var_5;
  struct_86 _var_6;
  *((uint8_t **) &_stack) = " *  %d\n";
  _var_5 = puts_((const int8_t *) "These are a few of my favorite numbers:");
  _var_4 = printf_((const int8_t *) " *  %d\n");
  _var_3 = printf_((const int8_t *) " *  %d\n");
  _var_2 = printf_((const int8_t *) " *  %d\n");
  _var_1 = printf_((const int8_t *) " *  %d\n");
  _var_0 = printf_((const int8_t *) " *  %d\n");
  _var_6.offset_0 = (uint64_t) _var_0;
  _var_6.offset_8 = argument_2;
  return _var_6;
}

_ABI(SystemV_x86_64)
struct_88 main(void) {
  struct_86 _var_0;
  struct_84 _var_1;
  struct_82 _var_2;
  struct_88 _var_3;
  _var_2 = all_badges();
  _var_1 = polynome_table(_undef_generic64_t(), _undef_generic64_t(), _var_2.offset_8);
  _var_0 = red_herring(_undef_generic64_t(), _undef_generic64_t(), _var_1.offset_8);
  _var_3.offset_0 = 0;
  _var_3.offset_8 = _var_0.offset_8;
  return _var_3;
}

_ABI(SystemV_x86_64)
void unreserved__fini(void) {
}

