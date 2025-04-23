#include "types-and-globals.h"
#include "helpers.h"

_ABI(SystemV_x86_64)
void unreserved__init(void) {
  if (segment_0x403dd0_Generic64_600.unreserved__got.offset_16) {
    ((cabifunction_84 *) segment_0x403dd0_Generic64_600.unreserved__got.offset_16)();
  }
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

_ABI(SystemV_x86_64)
struct_72 main(void) {
  struct_79 _var_0;
  struct_81 _var_1;
  struct_72 _var_2;
  _var_1 = short_multiplication_table(19);
  _var_0 = count_sheep(19, _undef_generic64_t(), _var_1.offset_8, _undef_generic64_t());
  _var_2.offset_0 = 0;
  _var_2.offset_8 = _var_0.offset_8;
  return _var_2;
}

_ABI(SystemV_x86_64) _Noreturn
void unreserved__start(generic64_t argument_0, generic64_t argument_1, struct_61 *argument_2) {
  int32_t _var_0;
  _var_0 = unreserved___libc_start_main((cabifunction_34 *) main, (int32_t) (number32_t) *((generic64_t *) __init_local_sp()), (int8_t **) (__init_local_sp() + 8), (cabifunction_34 *) NULL, (cabifunction_33 *) NULL, (cabifunction_33 *) argument_2, (void *) __init_local_sp());
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
  if (!segment_0x403dd0_Generic64_600.unreserved__bss.completed_0) {
    if (segment_0x403dd0_Generic64_600.unreserved__got.offset_32) {
      unreserved___cxa_finalize_((void *) segment_0x403dd0_Generic64_600.unreserved__data.offset_8);
    }
    deregister_tm_clones();
    segment_0x403dd0_Generic64_600.unreserved__bss.completed_0 = '\001';
  }
}

_ABI(SystemV_x86_64)
void frame_dummy(void) {
}

_ABI(SystemV_x86_64)
struct_79 count_sheep(generic64_t argument_0, generic64_t argument_1, generic64_t argument_2, generic64_t argument_3) {
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
  int32_t _var_11;
  int32_t _var_12;
  int32_t _var_13;
  int32_t _var_14;
  int32_t _var_15;
  int32_t _var_16;
  int32_t _var_17;
  int32_t _var_18;
  int32_t _var_19;
  int32_t _var_20;
  int32_t _var_21;
  int32_t _var_22;
  int32_t _var_23;
  int32_t _var_24;
  int32_t _var_25;
  int32_t _var_26;
  int32_t _var_27;
  int32_t _var_28;
  int32_t _var_29;
  int32_t _var_30;
  int32_t _var_31;
  int32_t _var_32;
  int32_t _var_33;
  int32_t _var_34;
  int32_t _var_35;
  int32_t _var_36;
  int32_t _var_37;
  int32_t _var_38;
  int32_t _var_39;
  int32_t _var_40;
  int32_t _var_41;
  int32_t _var_42;
  int32_t _var_43;
  int32_t _var_44;
  int32_t _var_45;
  int32_t _var_46;
  int32_t _var_47;
  int32_t _var_48;
  int32_t _var_49;
  int32_t _var_50;
  int32_t _var_51;
  int32_t _var_52;
  int32_t _var_53;
  int32_t _var_54;
  int32_t _var_55;
  int32_t _var_56;
  int32_t _var_57;
  int32_t _var_58;
  int32_t _var_59;
  int32_t _var_60;
  int32_t _var_61;
  int32_t _var_62;
  int32_t _var_63;
  int32_t _var_64;
  int32_t _var_65;
  int32_t _var_66;
  int32_t _var_67;
  int32_t _var_68;
  int32_t _var_69;
  int32_t _var_70;
  int32_t _var_71;
  int32_t _var_72;
  int32_t _var_73;
  int32_t _var_74;
  int32_t _var_75;
  int32_t _var_76;
  int32_t _var_77;
  int32_t _var_78;
  int32_t _var_79;
  int32_t _var_80;
  int32_t _var_81;
  int32_t _var_82;
  int32_t _var_83;
  int32_t _var_84;
  int32_t _var_85;
  int32_t _var_86;
  int32_t _var_87;
  int32_t _var_88;
  int32_t _var_89;
  int32_t _var_90;
  int32_t _var_91;
  int32_t _var_92;
  int32_t _var_93;
  int32_t _var_94;
  int32_t _var_95;
  int32_t _var_96;
  int32_t _var_97;
  int32_t _var_98;
  int32_t _var_99;
  int32_t _var_100;
  int32_t _var_101;
  struct_79 _var_102;
  _var_101 = printf_((const int8_t *) "%d ");
  _var_100 = printf_((const int8_t *) "%d ");
  _var_99 = printf_((const int8_t *) "%d ");
  _var_98 = printf_((const int8_t *) "%d ");
  _var_97 = printf_((const int8_t *) "%d ");
  _var_96 = printf_((const int8_t *) "%d ");
  _var_95 = printf_((const int8_t *) "%d ");
  _var_94 = printf_((const int8_t *) "%d ");
  _var_93 = printf_((const int8_t *) "%d ");
  _var_92 = printf_((const int8_t *) "%d ");
  _var_91 = printf_((const int8_t *) "%d ");
  _var_90 = printf_((const int8_t *) "%d ");
  _var_89 = printf_((const int8_t *) "%d ");
  _var_88 = printf_((const int8_t *) "%d ");
  _var_87 = printf_((const int8_t *) "%d ");
  _var_86 = printf_((const int8_t *) "%d ");
  _var_85 = printf_((const int8_t *) "%d ");
  _var_84 = printf_((const int8_t *) "%d ");
  _var_83 = printf_((const int8_t *) "%d ");
  _var_82 = printf_((const int8_t *) "%d ");
  _var_81 = printf_((const int8_t *) "%d ");
  _var_80 = printf_((const int8_t *) "%d ");
  _var_79 = printf_((const int8_t *) "%d ");
  _var_78 = printf_((const int8_t *) "%d ");
  _var_77 = printf_((const int8_t *) "%d ");
  _var_76 = printf_((const int8_t *) "%d ");
  _var_75 = printf_((const int8_t *) "%d ");
  _var_74 = printf_((const int8_t *) "%d ");
  _var_73 = printf_((const int8_t *) "%d ");
  _var_72 = printf_((const int8_t *) "%d ");
  _var_71 = printf_((const int8_t *) "%d ");
  _var_70 = printf_((const int8_t *) "%d ");
  _var_69 = printf_((const int8_t *) "%d ");
  _var_68 = printf_((const int8_t *) "%d ");
  _var_67 = printf_((const int8_t *) "%d ");
  _var_66 = printf_((const int8_t *) "%d ");
  _var_65 = printf_((const int8_t *) "%d ");
  _var_64 = printf_((const int8_t *) "%d ");
  _var_63 = printf_((const int8_t *) "%d ");
  _var_62 = printf_((const int8_t *) "%d ");
  _var_61 = printf_((const int8_t *) "%d ");
  _var_60 = printf_((const int8_t *) "%d ");
  _var_59 = printf_((const int8_t *) "%d ");
  _var_58 = printf_((const int8_t *) "%d ");
  _var_57 = printf_((const int8_t *) "%d ");
  _var_56 = printf_((const int8_t *) "%d ");
  _var_55 = printf_((const int8_t *) "%d ");
  _var_54 = printf_((const int8_t *) "%d ");
  _var_53 = printf_((const int8_t *) "%d ");
  _var_52 = printf_((const int8_t *) "%d ");
  _var_51 = printf_((const int8_t *) "%d ");
  _var_50 = printf_((const int8_t *) "%d ");
  _var_49 = printf_((const int8_t *) "%d ");
  _var_48 = printf_((const int8_t *) "%d ");
  _var_47 = printf_((const int8_t *) "%d ");
  _var_46 = printf_((const int8_t *) "%d ");
  _var_45 = printf_((const int8_t *) "%d ");
  _var_44 = printf_((const int8_t *) "%d ");
  _var_43 = printf_((const int8_t *) "%d ");
  _var_42 = printf_((const int8_t *) "%d ");
  _var_41 = printf_((const int8_t *) "%d ");
  _var_40 = printf_((const int8_t *) "%d ");
  _var_39 = printf_((const int8_t *) "%d ");
  _var_38 = printf_((const int8_t *) "%d ");
  _var_37 = printf_((const int8_t *) "%d ");
  _var_36 = printf_((const int8_t *) "%d ");
  _var_35 = printf_((const int8_t *) "%d ");
  _var_34 = printf_((const int8_t *) "%d ");
  _var_33 = printf_((const int8_t *) "%d ");
  _var_32 = printf_((const int8_t *) "%d ");
  _var_31 = printf_((const int8_t *) "(nice) ");
  _var_30 = printf_((const int8_t *) "%d ");
  _var_29 = printf_((const int8_t *) "%d ");
  _var_28 = printf_((const int8_t *) "%d ");
  _var_27 = printf_((const int8_t *) "%d ");
  _var_26 = printf_((const int8_t *) "%d ");
  _var_25 = printf_((const int8_t *) "%d ");
  _var_24 = printf_((const int8_t *) "%d ");
  _var_23 = printf_((const int8_t *) "%d ");
  _var_22 = printf_((const int8_t *) "%d ");
  _var_21 = printf_((const int8_t *) "%d ");
  _var_20 = printf_((const int8_t *) "%d ");
  _var_19 = printf_((const int8_t *) "%d ");
  _var_18 = printf_((const int8_t *) "%d ");
  _var_17 = printf_((const int8_t *) "%d ");
  _var_16 = printf_((const int8_t *) "%d ");
  _var_15 = printf_((const int8_t *) "%d ");
  _var_14 = printf_((const int8_t *) "%d ");
  _var_13 = printf_((const int8_t *) "%d ");
  _var_12 = printf_((const int8_t *) "%d ");
  _var_11 = printf_((const int8_t *) "%d ");
  _var_10 = printf_((const int8_t *) "%d ");
  _var_9 = printf_((const int8_t *) "%d ");
  _var_8 = printf_((const int8_t *) "%d ");
  _var_7 = printf_((const int8_t *) "%d ");
  _var_6 = printf_((const int8_t *) "%d ");
  _var_5 = printf_((const int8_t *) "%d ");
  _var_4 = printf_((const int8_t *) "%d ");
  _var_3 = printf_((const int8_t *) "%d ");
  _var_2 = printf_((const int8_t *) "%d ");
  _var_1 = printf_((const int8_t *) "%d ");
  _var_0 = puts((const int8_t *) "ZzZzZz...");
  _var_102.offset_0 = (uint64_t) _var_0;
  _var_102.offset_8 = argument_2;
  return _var_102;
}

_ABI(SystemV_x86_64)
struct_81 short_multiplication_table(generic64_t argument_0) {
  struct _PACKED struct_56 {
    uint8_t padding_at_0[16];
    generic64_t offset_16;
    uint8_t padding_at_24[24];
    generic64_t offset_48;
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
  int32_t _var_11;
  int32_t _var_12;
  int32_t _var_13;
  int32_t _var_14;
  int32_t _var_15;
  int32_t _var_16;
  int32_t _var_17;
  int32_t _var_18;
  int32_t _var_19;
  struct_81 _var_20;
  _stack.offset_48 = (pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 28;
  _stack.offset_16 = &segment_0x402000_Generic64_396.unreserved__rodata.offset_16[10];
  _var_19 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_18 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_17 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_16 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 28));
  _var_15 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_14 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_13 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_12 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 28));
  _var_11 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_10 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_9 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_8 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 28));
  _var_7 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_6 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_5 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_4 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 28));
  _var_3 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_2 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_1 = printf_((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 10));
  _var_0 = printf((const int8_t *) ((pointer_or_number64_t) &segment_0x402000_Generic64_396.unreserved__rodata.offset_16 + 28));
  _var_20.offset_0 = (uint64_t) _var_0;
  _var_20.offset_8 = argument_0 & 0xFFFFFFFF;
  return _var_20;
}

_ABI(SystemV_x86_64)
void unreserved__fini(void) {
}

