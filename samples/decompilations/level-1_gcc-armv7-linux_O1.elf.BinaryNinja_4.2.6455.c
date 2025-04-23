int32_t _init(int32_t arg1, int32_t arg2)
{
    return call_weak_fn(arg1, arg2);
}

int32_t sub_10314()
{
    /* jump -> 0 */
}

void __libc_start_main(int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc, char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(), void* stack_end) __noreturn
{
    /* tailcall */
    return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

int32_t printf(char* arg1, char const* format, ...)
{
    /* tailcall */
    return printf();
}

int32_t __gmon_start__()
{
    /* tailcall */
    return __gmon_start__();
}

void abort() __noreturn
{
    /* tailcall */
    return abort();
}

void _start(void (* arg1)(), void* arg2) __noreturn
{
    __libc_start_main(main, arg2, &arg_4, nullptr, nullptr, arg1, &arg_4);
    /* no return */
}

void call_weak_fn(int32_t arg1, int32_t arg2)
{
    if (!__gmon_start__)
        return;
    
    /* tailcall */
    return __gmon_start__(arg1, arg2, __gmon_start__, &_GLOBAL_OFFSET_TABLE_);
}

void deregister_tm_clones()
{
    return;
}

void register_tm_clones()
{
    return;
}

void __do_global_dtors_aux(int32_t arg1, int32_t arg2, int32_t arg3)
{
    uint32_t __bss_start_1 = __bss_start;
    
    if (__bss_start_1)
        return;
    
    deregister_tm_clones(arg1, arg2, arg3, __bss_start_1);
    __bss_start = 1;
}

void frame_dummy()
{
    /* tailcall */
    return register_tm_clones();
}

int32_t multiplication_table(int32_t arg1)
{
    printf(&data_15548, nullptr, arg1, 0);
    printf(&data_15548, 1, arg1, arg1);
    printf(&data_15548, 2, arg1, arg1 << 1);
    printf(&data_15548, 3, arg1, 3 * arg1);
    printf(&data_15548, 4, arg1, arg1 << 2);
    printf(&data_15548, 5, arg1, 5 * arg1);
    printf(&data_15548, 6, arg1, 6 * arg1);
    printf(&data_15548, 7, arg1, 7 * arg1);
    printf(&data_15548, 8, arg1, arg1 << 3);
    printf(&data_15548, 9, arg1, 9 * arg1);
    printf(&data_15548, 0xa, arg1, 0xa * arg1);
    printf(&data_15548, 0xb, arg1, 0xb * arg1);
    printf(&data_15548, 0xc, arg1, 0xc * arg1);
    printf(&data_15548, 0xd, arg1, 0xd * arg1);
    printf(&data_15548, 0xe, arg1, 0xe * arg1);
    printf(&data_15548, 0xf, arg1, 0xf * arg1);
    printf(&data_15548, 0x10, arg1, arg1 << 4);
    printf(&data_15548, 0x11, arg1, 0x11 * arg1);
    printf(&data_15548, 0x12, arg1, 0x12 * arg1);
    printf(&data_15548, 0x13, arg1, 0x13 * arg1);
    return printf(&data_15548, 0x14, arg1, 0x14 * arg1);
}

int32_t decrypt_message()
{
    char var_108 = 0;
    char var_107;
    __builtin_memcpy(&var_107, "\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f", 0x1f);
    char var_e8;
    __builtin_strncpy(&var_e8, " !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f", 0x60);
    char var_88;
    __builtin_memcpy(&var_88, "\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe", 0x7f);
    char var_9 = 0xff;
    uint32_t r3 = key[0];
    char format;
    void* r1_1 = &(&format)[r3 + 0x140];
    char r12 = *(r1_1 - 0x100);
    *(r1_1 - 0x100) = 0;
    char var_108_1 = r12;
    uint32_t r0 = var_107;
    uint32_t r3_2 = r0 + r3 + key[1][0];
    int32_t r3_3 = r3_2 & 0xff;
    
    if (0 - r3_2 >= 0)
        r3_3 = 0 - (0 - r3_2);
    
    void* r1_6 = &(&format)[r3_3 + 0x140];
    char r12_1 = *(r1_6 - 0x100);
    *(r1_6 - 0x100) = r0;
    char var_106;
    uint32_t r0_1 = var_106;
    int32_t r3_5 = r0_1 + r3_3 + key[2][0];
    int32_t r3_6 = r3_5 & 0xff;
    
    if (0 - r3_5 >= 0)
        r3_6 = 0 - (0 - r3_5);
    
    void* r1_11 = &(&format)[r3_6 + 0x140];
    char r12_2 = *(r1_11 - 0x100);
    *(r1_11 - 0x100) = r0_1;
    char var_105;
    uint32_t r0_2 = var_105;
    int32_t r3_8 = r0_2 + r3_6 + key[3][0];
    int32_t r3_9 = r3_8 & 0xff;
    
    if (0 - r3_8 >= 0)
        r3_9 = 0 - (0 - r3_8);
    
    void* r1_16 = &(&format)[r3_9 + 0x140];
    char r12_3 = *(r1_16 - 0x100);
    *(r1_16 - 0x100) = r0_2;
    char var_104;
    uint32_t r0_3 = var_104;
    int32_t r3_11 = r0_3 + r3_9 + key[4][0];
    int32_t r3_12 = r3_11 & 0xff;
    
    if (0 - r3_11 >= 0)
        r3_12 = 0 - (0 - r3_11);
    
    void* r1_21 = &(&format)[r3_12 + 0x140];
    char r12_4 = *(r1_21 - 0x100);
    *(r1_21 - 0x100) = r0_3;
    char var_103;
    uint32_t r0_4 = var_103;
    int32_t r3_14 = r0_4 + r3_12 + key[5][0];
    int32_t r3_15 = r3_14 & 0xff;
    
    if (0 - r3_14 >= 0)
        r3_15 = 0 - (0 - r3_14);
    
    void* r1_26 = &(&format)[r3_15 + 0x140];
    char r12_5 = *(r1_26 - 0x100);
    *(r1_26 - 0x100) = r0_4;
    char var_102;
    uint32_t r0_5 = var_102;
    int32_t r3_17 = r0_5 + r3_15 + key[6][0];
    int32_t r3_18 = r3_17 & 0xff;
    
    if (0 - r3_17 >= 0)
        r3_18 = 0 - (0 - r3_17);
    
    void* r1_31 = &(&format)[r3_18 + 0x140];
    char r12_6 = *(r1_31 - 0x100);
    *(r1_31 - 0x100) = r0_5;
    char var_101;
    uint32_t r0_6 = var_101;
    int32_t r3_20 = r0_6 + r3_18 + key[7][0];
    int32_t r3_21 = r3_20 & 0xff;
    
    if (0 - r3_20 >= 0)
        r3_21 = 0 - (0 - r3_20);
    
    void* r1_36 = &(&format)[r3_21 + 0x140];
    char r12_7 = *(r1_36 - 0x100);
    *(r1_36 - 0x100) = r0_6;
    char var_100;
    uint32_t r0_7 = var_100;
    int32_t r3_23 = r0_7 + r3_21 + key[8][0];
    int32_t r3_24 = r3_23 & 0xff;
    
    if (0 - r3_23 >= 0)
        r3_24 = 0 - (0 - r3_23);
    
    void* r1_41 = &(&format)[r3_24 + 0x140];
    char r12_8 = *(r1_41 - 0x100);
    *(r1_41 - 0x100) = r0_7;
    char var_ff;
    uint32_t r0_8 = var_ff;
    int32_t r3_26 = r0_8 + r3_24 + key[9][0];
    int32_t r3_27 = r3_26 & 0xff;
    
    if (0 - r3_26 >= 0)
        r3_27 = 0 - (0 - r3_26);
    
    void* r1_46 = &(&format)[r3_27 + 0x140];
    char r12_9 = *(r1_46 - 0x100);
    *(r1_46 - 0x100) = r0_8;
    char var_fe;
    uint32_t r0_9 = var_fe;
    int32_t r3_29 = r0_9 + r3_27 + key[0xa][0];
    int32_t r3_30 = r3_29 & 0xff;
    
    if (0 - r3_29 >= 0)
        r3_30 = 0 - (0 - r3_29);
    
    void* r1_51 = &(&format)[r3_30 + 0x140];
    char r12_10 = *(r1_51 - 0x100);
    *(r1_51 - 0x100) = r0_9;
    char var_fd;
    uint32_t r0_10 = var_fd;
    int32_t r3_32 = r0_10 + r3_30 + key[0xb][0];
    int32_t r3_33 = r3_32 & 0xff;
    
    if (0 - r3_32 >= 0)
        r3_33 = 0 - (0 - r3_32);
    
    void* r1_56 = &(&format)[r3_33 + 0x140];
    char r12_11 = *(r1_56 - 0x100);
    *(r1_56 - 0x100) = r0_10;
    char var_fc;
    uint32_t r0_11 = var_fc;
    int32_t r3_35 = r0_11 + r3_33 + key[0xc][0];
    int32_t r3_36 = r3_35 & 0xff;
    
    if (0 - r3_35 >= 0)
        r3_36 = 0 - (0 - r3_35);
    
    void* r1_61 = &(&format)[r3_36 + 0x140];
    char r12_12 = *(r1_61 - 0x100);
    *(r1_61 - 0x100) = r0_11;
    char var_fb;
    uint32_t r0_12 = var_fb;
    int32_t r3_38 = r0_12 + r3_36 + key[0xd][0];
    int32_t r3_39 = r3_38 & 0xff;
    
    if (0 - r3_38 >= 0)
        r3_39 = 0 - (0 - r3_38);
    
    void* r1_66 = &(&format)[r3_39 + 0x140];
    char r12_13 = *(r1_66 - 0x100);
    *(r1_66 - 0x100) = r0_12;
    char var_fa;
    uint32_t r1_67 = var_fa;
    int32_t r3_41 = r1_67 + r3_39 + key[0xe][0];
    int32_t r3_42 = r3_41 & 0xff;
    
    if (0 - r3_41 >= 0)
        r3_42 = 0 - (0 - r3_41);
    
    void* r2_4 = &(&format)[r3_42 + 0x140];
    char r0_13 = *(r2_4 - 0x100);
    *(r2_4 - 0x100) = r1_67;
    char var_f9;
    uint32_t r0_14 = var_f9;
    int32_t r3_44 = r0_14 + r3_42 + key[0xf][0];
    int32_t r3_45 = r3_44 & 0xff;
    
    if (0 - r3_44 >= 0)
        r3_45 = 0 - (0 - r3_44);
    
    void* r1_72 = &(&format)[r3_45 + 0x140];
    char r12_14 = *(r1_72 - 0x100);
    *(r1_72 - 0x100) = r0_14;
    char var_f8;
    uint32_t r0_15 = var_f8;
    int32_t r3_47 = r0_15 + r3_45 + key[0x10][0];
    int32_t r3_48 = r3_47 & 0xff;
    
    if (0 - r3_47 >= 0)
        r3_48 = 0 - (0 - r3_47);
    
    void* r1_77 = &(&format)[r3_48 + 0x140];
    char r12_15 = *(r1_77 - 0x100);
    *(r1_77 - 0x100) = r0_15;
    char var_f7;
    uint32_t r0_16 = var_f7;
    int32_t r3_50 = r0_16 + r3_48 + key[0x11][0];
    int32_t r3_51 = r3_50 & 0xff;
    
    if (0 - r3_50 >= 0)
        r3_51 = 0 - (0 - r3_50);
    
    void* r1_82 = &(&format)[r3_51 + 0x140];
    char r12_16 = *(r1_82 - 0x100);
    *(r1_82 - 0x100) = r0_16;
    char var_f6;
    uint32_t r0_17 = var_f6;
    int32_t r3_53 = r0_17 + r3_51 + key[0x12][0];
    int32_t r3_54 = r3_53 & 0xff;
    
    if (0 - r3_53 >= 0)
        r3_54 = 0 - (0 - r3_53);
    
    void* r1_87 = &(&format)[r3_54 + 0x140];
    char r12_17 = *(r1_87 - 0x100);
    *(r1_87 - 0x100) = r0_17;
    char var_f5;
    uint32_t r0_18 = var_f5;
    int32_t r3_56 = r0_18 + r3_54 + key[0x13][0];
    int32_t r3_57 = r3_56 & 0xff;
    
    if (0 - r3_56 >= 0)
        r3_57 = 0 - (0 - r3_56);
    
    void* r1_92 = &(&format)[r3_57 + 0x140];
    char r12_18 = *(r1_92 - 0x100);
    *(r1_92 - 0x100) = r0_18;
    char var_f4;
    uint32_t r0_19 = var_f4;
    int32_t r3_59 = r0_19 + r3_57 + key[0x14][0];
    int32_t r3_60 = r3_59 & 0xff;
    
    if (0 - r3_59 >= 0)
        r3_60 = 0 - (0 - r3_59);
    
    void* r1_97 = &(&format)[r3_60 + 0x140];
    char r12_19 = *(r1_97 - 0x100);
    *(r1_97 - 0x100) = r0_19;
    char var_f3;
    uint32_t r0_20 = var_f3;
    int32_t r3_62 = r0_20 + r3_60 + key[0x15][0];
    int32_t r3_63 = r3_62 & 0xff;
    
    if (0 - r3_62 >= 0)
        r3_63 = 0 - (0 - r3_62);
    
    void* r1_102 = &(&format)[r3_63 + 0x140];
    char r12_20 = *(r1_102 - 0x100);
    *(r1_102 - 0x100) = r0_20;
    char var_f2;
    uint32_t r0_21 = var_f2;
    int32_t r3_65 = r0_21 + r3_63 + key[0x16][0];
    int32_t r3_66 = r3_65 & 0xff;
    
    if (0 - r3_65 >= 0)
        r3_66 = 0 - (0 - r3_65);
    
    void* r1_107 = &(&format)[r3_66 + 0x140];
    char r12_21 = *(r1_107 - 0x100);
    *(r1_107 - 0x100) = r0_21;
    char var_f1;
    uint32_t r0_22 = var_f1;
    int32_t r3_68 = r0_22 + r3_66 + key[0x17][0];
    int32_t r3_69 = r3_68 & 0xff;
    
    if (0 - r3_68 >= 0)
        r3_69 = 0 - (0 - r3_68);
    
    void* r1_112 = &(&format)[r3_69 + 0x140];
    char r12_22 = *(r1_112 - 0x100);
    *(r1_112 - 0x100) = r0_22;
    char var_f0;
    uint32_t r0_23 = var_f0;
    int32_t r3_71 = r0_23 + r3_69 + key[0x18][0];
    int32_t r3_72 = r3_71 & 0xff;
    
    if (0 - r3_71 >= 0)
        r3_72 = 0 - (0 - r3_71);
    
    void* r1_117 = &(&format)[r3_72 + 0x140];
    char r12_23 = *(r1_117 - 0x100);
    *(r1_117 - 0x100) = r0_23;
    char var_ef;
    uint32_t r0_24 = var_ef;
    int32_t r3_74 = r0_24 + r3_72 + key[0x19][0];
    int32_t r3_75 = r3_74 & 0xff;
    
    if (0 - r3_74 >= 0)
        r3_75 = 0 - (0 - r3_74);
    
    void* r1_122 = &(&format)[r3_75 + 0x140];
    char r12_24 = *(r1_122 - 0x100);
    *(r1_122 - 0x100) = r0_24;
    char var_ee;
    uint32_t r0_25 = var_ee;
    int32_t r3_77 = r0_25 + r3_75 + key[0x1a][0];
    int32_t r3_78 = r3_77 & 0xff;
    
    if (0 - r3_77 >= 0)
        r3_78 = 0 - (0 - r3_77);
    
    void* r1_127 = &(&format)[r3_78 + 0x140];
    char r12_25 = *(r1_127 - 0x100);
    *(r1_127 - 0x100) = r0_25;
    char var_ed;
    uint32_t r0_26 = var_ed;
    int32_t r3_80 = r0_26 + r3_78 + key[0x1b][0];
    int32_t r3_81 = r3_80 & 0xff;
    
    if (0 - r3_80 >= 0)
        r3_81 = 0 - (0 - r3_80);
    
    void* r1_132 = &(&format)[r3_81 + 0x140];
    char r12_26 = *(r1_132 - 0x100);
    *(r1_132 - 0x100) = r0_26;
    char var_ec;
    uint32_t r0_27 = var_ec;
    int32_t r3_83 = r0_27 + r3_81 + key[0x1c][0];
    int32_t r3_84 = r3_83 & 0xff;
    
    if (0 - r3_83 >= 0)
        r3_84 = 0 - (0 - r3_83);
    
    void* r1_137 = &(&format)[r3_84 + 0x140];
    char r12_27 = *(r1_137 - 0x100);
    *(r1_137 - 0x100) = r0_27;
    char var_eb;
    uint32_t r0_28 = var_eb;
    int32_t r3_86 = r0_28 + r3_84 + key[0x1d][0];
    int32_t r3_87 = r3_86 & 0xff;
    
    if (0 - r3_86 >= 0)
        r3_87 = 0 - (0 - r3_86);
    
    void* r1_142 = &(&format)[r3_87 + 0x140];
    char r12_28 = *(r1_142 - 0x100);
    *(r1_142 - 0x100) = r0_28;
    char var_ea;
    uint32_t r0_29 = var_ea;
    int32_t r3_89 = r0_29 + r3_87 + key[0x1e][0];
    int32_t r3_90 = r3_89 & 0xff;
    
    if (0 - r3_89 >= 0)
        r3_90 = 0 - (0 - r3_89);
    
    void* r1_147 = &(&format)[r3_90 + 0x140];
    char r12_29 = *(r1_147 - 0x100);
    *(r1_147 - 0x100) = r0_29;
    char var_e9;
    uint32_t r0_30 = var_e9;
    int32_t r3_92 = r0_30 + r3_90 + key[0x1f][0];
    int32_t r3_93 = r3_92 & 0xff;
    
    if (0 - r3_92 >= 0)
        r3_93 = 0 - (0 - r3_92);
    
    void* r1_152 = &(&format)[r3_93 + 0x140];
    char r12_30 = *(r1_152 - 0x100);
    *(r1_152 - 0x100) = r0_30;
    uint32_t r0_31 = var_e8;
    int32_t r3_95 = r0_31 + r3_93 + key[0x20][0];
    int32_t r3_96 = r3_95 & 0xff;
    
    if (0 - r3_95 >= 0)
        r3_96 = 0 - (0 - r3_95);
    
    void* r1_157 = &(&format)[r3_96 + 0x140];
    char r12_31 = *(r1_157 - 0x100);
    *(r1_157 - 0x100) = r0_31;
    char var_e7;
    uint32_t r0_32 = var_e7;
    int32_t r3_98 = r0_32 + r3_96 + key[0x21][0];
    int32_t r3_99 = r3_98 & 0xff;
    
    if (0 - r3_98 >= 0)
        r3_99 = 0 - (0 - r3_98);
    
    void* r1_162 = &(&format)[r3_99 + 0x140];
    char r12_32 = *(r1_162 - 0x100);
    *(r1_162 - 0x100) = r0_32;
    char var_e6;
    uint32_t r0_33 = var_e6;
    int32_t r3_101 = r0_33 + r3_99 + key[0x22][0];
    int32_t r3_102 = r3_101 & 0xff;
    
    if (0 - r3_101 >= 0)
        r3_102 = 0 - (0 - r3_101);
    
    void* r1_167 = &(&format)[r3_102 + 0x140];
    char r12_33 = *(r1_167 - 0x100);
    *(r1_167 - 0x100) = r0_33;
    char var_e5;
    uint32_t r0_34 = var_e5;
    int32_t r3_104 = r0_34 + r3_102 + key[0x23][0];
    int32_t r3_105 = r3_104 & 0xff;
    
    if (0 - r3_104 >= 0)
        r3_105 = 0 - (0 - r3_104);
    
    void* r1_172 = &(&format)[r3_105 + 0x140];
    char r12_34 = *(r1_172 - 0x100);
    *(r1_172 - 0x100) = r0_34;
    char var_e4;
    uint32_t r0_35 = var_e4;
    int32_t r3_107 = r0_35 + r3_105 + key[0x24][0];
    int32_t r3_108 = r3_107 & 0xff;
    
    if (0 - r3_107 >= 0)
        r3_108 = 0 - (0 - r3_107);
    
    void* r1_177 = &(&format)[r3_108 + 0x140];
    char r12_35 = *(r1_177 - 0x100);
    *(r1_177 - 0x100) = r0_35;
    char var_e3;
    uint32_t r0_36 = var_e3;
    int32_t r3_110 = r0_36 + r3_108 + key[0x25][0];
    int32_t r3_111 = r3_110 & 0xff;
    
    if (0 - r3_110 >= 0)
        r3_111 = 0 - (0 - r3_110);
    
    void* r1_182 = &(&format)[r3_111 + 0x140];
    char r12_36 = *(r1_182 - 0x100);
    *(r1_182 - 0x100) = r0_36;
    char var_e2;
    uint32_t r0_37 = var_e2;
    int32_t r3_113 = r0_37 + r3_111 + key[0x26][0];
    int32_t r3_114 = r3_113 & 0xff;
    
    if (0 - r3_113 >= 0)
        r3_114 = 0 - (0 - r3_113);
    
    void* r1_187 = &(&format)[r3_114 + 0x140];
    char r12_37 = *(r1_187 - 0x100);
    *(r1_187 - 0x100) = r0_37;
    char var_e1;
    uint32_t r0_38 = var_e1;
    int32_t r3_116 = r0_38 + r3_114 + key[0x27][0];
    int32_t r3_117 = r3_116 & 0xff;
    
    if (0 - r3_116 >= 0)
        r3_117 = 0 - (0 - r3_116);
    
    void* r1_192 = &(&format)[r3_117 + 0x140];
    char r12_38 = *(r1_192 - 0x100);
    *(r1_192 - 0x100) = r0_38;
    char var_e0;
    uint32_t r0_39 = var_e0;
    int32_t r3_119 = r0_39 + r3_117 + key[0x28][0];
    int32_t r3_120 = r3_119 & 0xff;
    
    if (0 - r3_119 >= 0)
        r3_120 = 0 - (0 - r3_119);
    
    void* r1_197 = &(&format)[r3_120 + 0x140];
    char r12_39 = *(r1_197 - 0x100);
    *(r1_197 - 0x100) = r0_39;
    char var_df;
    uint32_t r0_40 = var_df;
    int32_t r3_122 = r0_40 + r3_120 + key[0x29][0];
    int32_t r3_123 = r3_122 & 0xff;
    
    if (0 - r3_122 >= 0)
        r3_123 = 0 - (0 - r3_122);
    
    void* r1_202 = &(&format)[r3_123 + 0x140];
    char r12_40 = *(r1_202 - 0x100);
    *(r1_202 - 0x100) = r0_40;
    char var_de;
    uint32_t r0_41 = var_de;
    int32_t r3_125 = r0_41 + r3_123 + key[0x2a][0];
    int32_t r3_126 = r3_125 & 0xff;
    
    if (0 - r3_125 >= 0)
        r3_126 = 0 - (0 - r3_125);
    
    void* r1_207 = &(&format)[r3_126 + 0x140];
    char r12_41 = *(r1_207 - 0x100);
    *(r1_207 - 0x100) = r0_41;
    char var_dd;
    uint32_t r0_42 = var_dd;
    int32_t r3_128 = r0_42 + r3_126 + key[0x2b][0];
    int32_t r3_129 = r3_128 & 0xff;
    
    if (0 - r3_128 >= 0)
        r3_129 = 0 - (0 - r3_128);
    
    void* r1_212 = &(&format)[r3_129 + 0x140];
    char r12_42 = *(r1_212 - 0x100);
    *(r1_212 - 0x100) = r0_42;
    char var_dc;
    uint32_t r0_43 = var_dc;
    int32_t r3_131 = r0_43 + r3_129 + key[0x2c][0];
    int32_t r3_132 = r3_131 & 0xff;
    
    if (0 - r3_131 >= 0)
        r3_132 = 0 - (0 - r3_131);
    
    void* r1_217 = &(&format)[r3_132 + 0x140];
    char r12_43 = *(r1_217 - 0x100);
    *(r1_217 - 0x100) = r0_43;
    char var_db;
    uint32_t r0_44 = var_db;
    int32_t r3_134 = r0_44 + r3_132 + key[0x2d][0];
    int32_t r3_135 = r3_134 & 0xff;
    
    if (0 - r3_134 >= 0)
        r3_135 = 0 - (0 - r3_134);
    
    void* r1_222 = &(&format)[r3_135 + 0x140];
    char r12_44 = *(r1_222 - 0x100);
    *(r1_222 - 0x100) = r0_44;
    char var_da;
    uint32_t r0_45 = var_da;
    int32_t r3_137 = r0_45 + r3_135 + key[0x2e][0];
    int32_t r3_138 = r3_137 & 0xff;
    
    if (0 - r3_137 >= 0)
        r3_138 = 0 - (0 - r3_137);
    
    void* r1_227 = &(&format)[r3_138 + 0x140];
    char r12_45 = *(r1_227 - 0x100);
    *(r1_227 - 0x100) = r0_45;
    char var_d9;
    uint32_t r0_46 = var_d9;
    int32_t r3_140 = r0_46 + r3_138 + key[0x2f][0];
    int32_t r3_141 = r3_140 & 0xff;
    
    if (0 - r3_140 >= 0)
        r3_141 = 0 - (0 - r3_140);
    
    void* r1_232 = &(&format)[r3_141 + 0x140];
    char r12_46 = *(r1_232 - 0x100);
    *(r1_232 - 0x100) = r0_46;
    char var_d8;
    uint32_t r0_47 = var_d8;
    int32_t r3_143 = r0_47 + r3_141 + key[0x30][0];
    int32_t r3_144 = r3_143 & 0xff;
    
    if (0 - r3_143 >= 0)
        r3_144 = 0 - (0 - r3_143);
    
    void* r1_237 = &(&format)[r3_144 + 0x140];
    char r12_47 = *(r1_237 - 0x100);
    *(r1_237 - 0x100) = r0_47;
    char var_d7;
    uint32_t r0_48 = var_d7;
    int32_t r3_146 = r0_48 + r3_144 + key[0x31][0];
    int32_t r3_147 = r3_146 & 0xff;
    
    if (0 - r3_146 >= 0)
        r3_147 = 0 - (0 - r3_146);
    
    void* r1_242 = &(&format)[r3_147 + 0x140];
    char r12_48 = *(r1_242 - 0x100);
    *(r1_242 - 0x100) = r0_48;
    char var_d6;
    uint32_t r0_49 = var_d6;
    int32_t r3_149 = r0_49 + r3_147 + key[0x32][0];
    int32_t r3_150 = r3_149 & 0xff;
    
    if (0 - r3_149 >= 0)
        r3_150 = 0 - (0 - r3_149);
    
    void* r1_247 = &(&format)[r3_150 + 0x140];
    char r12_49 = *(r1_247 - 0x100);
    *(r1_247 - 0x100) = r0_49;
    char var_d5;
    uint32_t r0_50 = var_d5;
    int32_t r3_152 = r0_50 + r3_150 + key[0x33][0];
    int32_t r3_153 = r3_152 & 0xff;
    
    if (0 - r3_152 >= 0)
        r3_153 = 0 - (0 - r3_152);
    
    void* r1_252 = &(&format)[r3_153 + 0x140];
    char r12_50 = *(r1_252 - 0x100);
    *(r1_252 - 0x100) = r0_50;
    char var_d4;
    uint32_t r0_51 = var_d4;
    int32_t r3_155 = r0_51 + r3_153 + key[0x34][0];
    int32_t r3_156 = r3_155 & 0xff;
    
    if (0 - r3_155 >= 0)
        r3_156 = 0 - (0 - r3_155);
    
    void* r1_257 = &(&format)[r3_156 + 0x140];
    char r12_51 = *(r1_257 - 0x100);
    *(r1_257 - 0x100) = r0_51;
    char var_d3;
    uint32_t r0_52 = var_d3;
    int32_t r3_158 = r0_52 + r3_156 + key[0x35][0];
    int32_t r3_159 = r3_158 & 0xff;
    
    if (0 - r3_158 >= 0)
        r3_159 = 0 - (0 - r3_158);
    
    void* r1_262 = &(&format)[r3_159 + 0x140];
    char r12_52 = *(r1_262 - 0x100);
    *(r1_262 - 0x100) = r0_52;
    char var_d2;
    uint32_t r0_53 = var_d2;
    int32_t r3_161 = r0_53 + r3_159 + key[0x36][0];
    int32_t r3_162 = r3_161 & 0xff;
    
    if (0 - r3_161 >= 0)
        r3_162 = 0 - (0 - r3_161);
    
    void* r1_267 = &(&format)[r3_162 + 0x140];
    char r12_53 = *(r1_267 - 0x100);
    *(r1_267 - 0x100) = r0_53;
    char var_d1;
    uint32_t r0_54 = var_d1;
    int32_t r3_164 = r0_54 + r3_162 + key[0x37][0];
    int32_t r3_165 = r3_164 & 0xff;
    
    if (0 - r3_164 >= 0)
        r3_165 = 0 - (0 - r3_164);
    
    void* r1_272 = &(&format)[r3_165 + 0x140];
    char r12_54 = *(r1_272 - 0x100);
    *(r1_272 - 0x100) = r0_54;
    char var_d0;
    uint32_t r0_55 = var_d0;
    int32_t r3_167 = r0_55 + r3_165 + key[0x38][0];
    int32_t r3_168 = r3_167 & 0xff;
    
    if (0 - r3_167 >= 0)
        r3_168 = 0 - (0 - r3_167);
    
    void* r1_277 = &(&format)[r3_168 + 0x140];
    char r12_55 = *(r1_277 - 0x100);
    *(r1_277 - 0x100) = r0_55;
    char var_cf;
    uint32_t r0_56 = var_cf;
    int32_t r3_170 = r0_56 + r3_168 + key[0x39][0];
    int32_t r3_171 = r3_170 & 0xff;
    
    if (0 - r3_170 >= 0)
        r3_171 = 0 - (0 - r3_170);
    
    void* r1_282 = &(&format)[r3_171 + 0x140];
    char r12_56 = *(r1_282 - 0x100);
    *(r1_282 - 0x100) = r0_56;
    char var_ce;
    uint32_t r0_57 = var_ce;
    int32_t r3_173 = r0_57 + r3_171 + key[0x3a][0];
    int32_t r3_174 = r3_173 & 0xff;
    
    if (0 - r3_173 >= 0)
        r3_174 = 0 - (0 - r3_173);
    
    void* r1_287 = &(&format)[r3_174 + 0x140];
    char r12_57 = *(r1_287 - 0x100);
    *(r1_287 - 0x100) = r0_57;
    char var_cd;
    uint32_t r0_58 = var_cd;
    int32_t r3_176 = r0_58 + r3_174 + key[0x3b][0];
    int32_t r3_177 = r3_176 & 0xff;
    
    if (0 - r3_176 >= 0)
        r3_177 = 0 - (0 - r3_176);
    
    void* r1_292 = &(&format)[r3_177 + 0x140];
    char r12_58 = *(r1_292 - 0x100);
    *(r1_292 - 0x100) = r0_58;
    char var_cc;
    uint32_t r0_59 = var_cc;
    int32_t r3_179 = r0_59 + r3_177 + key[0x3c][0];
    int32_t r3_180 = r3_179 & 0xff;
    
    if (0 - r3_179 >= 0)
        r3_180 = 0 - (0 - r3_179);
    
    void* r1_297 = &(&format)[r3_180 + 0x140];
    char r12_59 = *(r1_297 - 0x100);
    *(r1_297 - 0x100) = r0_59;
    char var_cb;
    uint32_t r0_60 = var_cb;
    int32_t r3_182 = r0_60 + r3_180 + key[0x3d][0];
    int32_t r3_183 = r3_182 & 0xff;
    
    if (0 - r3_182 >= 0)
        r3_183 = 0 - (0 - r3_182);
    
    void* r1_302 = &(&format)[r3_183 + 0x140];
    char r12_60 = *(r1_302 - 0x100);
    *(r1_302 - 0x100) = r0_60;
    char var_ca;
    uint32_t r0_61 = var_ca;
    int32_t r3_185 = r0_61 + r3_183 + key[0x3e][0];
    int32_t r3_186 = r3_185 & 0xff;
    
    if (0 - r3_185 >= 0)
        r3_186 = 0 - (0 - r3_185);
    
    void* r1_307 = &(&format)[r3_186 + 0x140];
    char r12_61 = *(r1_307 - 0x100);
    *(r1_307 - 0x100) = r0_61;
    char var_c9;
    uint32_t r0_62 = var_c9;
    int32_t r3_188 = r0_62 + r3_186 + key[0x3f][0];
    int32_t r3_189 = r3_188 & 0xff;
    
    if (0 - r3_188 >= 0)
        r3_189 = 0 - (0 - r3_188);
    
    void* r1_312 = &(&format)[r3_189 + 0x140];
    char r12_62 = *(r1_312 - 0x100);
    *(r1_312 - 0x100) = r0_62;
    char var_c9_1 = r12_62;
    char var_c8;
    uint32_t r0_63 = var_c8;
    int32_t r3_191 = r0_63 + r3_189 + key[0x40][0];
    int32_t r3_192 = r3_191 & 0xff;
    
    if (0 - r3_191 >= 0)
        r3_192 = 0 - (0 - r3_191);
    
    void* r1_317 = &(&format)[r3_192 + 0x140];
    char r12_63 = *(r1_317 - 0x100);
    *(r1_317 - 0x100) = r0_63;
    char var_c8_1 = r12_63;
    char var_c7;
    uint32_t r0_64 = var_c7;
    int32_t r3_194 = r0_64 + r3_192 + key[0x41][0];
    int32_t r3_195 = r3_194 & 0xff;
    
    if (0 - r3_194 >= 0)
        r3_195 = 0 - (0 - r3_194);
    
    void* r1_322 = &(&format)[r3_195 + 0x140];
    char r12_64 = *(r1_322 - 0x100);
    *(r1_322 - 0x100) = r0_64;
    char var_c7_1 = r12_64;
    char var_c6;
    uint32_t r0_65 = var_c6;
    int32_t r3_197 = r0_65 + r3_195 + key[0x42][0];
    int32_t r3_198 = r3_197 & 0xff;
    
    if (0 - r3_197 >= 0)
        r3_198 = 0 - (0 - r3_197);
    
    void* r1_327 = &(&format)[r3_198 + 0x140];
    char r12_65 = *(r1_327 - 0x100);
    *(r1_327 - 0x100) = r0_65;
    char var_c6_1 = r12_65;
    char var_c5;
    uint32_t r0_66 = var_c5;
    int32_t r3_200 = r0_66 + r3_198 + key[0x43][0];
    int32_t r3_201 = r3_200 & 0xff;
    
    if (0 - r3_200 >= 0)
        r3_201 = 0 - (0 - r3_200);
    
    void* r1_332 = &(&format)[r3_201 + 0x140];
    char r12_66 = *(r1_332 - 0x100);
    *(r1_332 - 0x100) = r0_66;
    char var_c5_1 = r12_66;
    char var_c4;
    uint32_t r0_67 = var_c4;
    int32_t r3_203 = r0_67 + r3_201 + key[0x44][0];
    int32_t r3_204 = r3_203 & 0xff;
    
    if (0 - r3_203 >= 0)
        r3_204 = 0 - (0 - r3_203);
    
    void* r1_337 = &(&format)[r3_204 + 0x140];
    char r12_67 = *(r1_337 - 0x100);
    *(r1_337 - 0x100) = r0_67;
    char var_c4_1 = r12_67;
    char var_c3;
    uint32_t r0_68 = var_c3;
    int32_t r3_206 = r0_68 + r3_204 + key[0x45][0];
    int32_t r3_207 = r3_206 & 0xff;
    
    if (0 - r3_206 >= 0)
        r3_207 = 0 - (0 - r3_206);
    
    void* r1_342 = &(&format)[r3_207 + 0x140];
    char r12_68 = *(r1_342 - 0x100);
    *(r1_342 - 0x100) = r0_68;
    char var_c3_1 = r12_68;
    char var_c2;
    uint32_t r0_69 = var_c2;
    int32_t r3_209 = r0_69 + r3_207 + key[0x46][0];
    int32_t r3_210 = r3_209 & 0xff;
    
    if (0 - r3_209 >= 0)
        r3_210 = 0 - (0 - r3_209);
    
    void* r1_347 = &(&format)[r3_210 + 0x140];
    char r12_69 = *(r1_347 - 0x100);
    *(r1_347 - 0x100) = r0_69;
    char var_c2_1 = r12_69;
    char var_c1;
    uint32_t r0_70 = var_c1;
    int32_t r3_212 = r0_70 + r3_210 + key[0x47][0];
    int32_t r3_213 = r3_212 & 0xff;
    
    if (0 - r3_212 >= 0)
        r3_213 = 0 - (0 - r3_212);
    
    void* r1_352 = &(&format)[r3_213 + 0x140];
    char r12_70 = *(r1_352 - 0x100);
    *(r1_352 - 0x100) = r0_70;
    char var_c1_1 = r12_70;
    char var_c0;
    uint32_t r0_71 = var_c0;
    int32_t r3_215 = r0_71 + r3_213 + key[0x48][0];
    int32_t r3_216 = r3_215 & 0xff;
    
    if (0 - r3_215 >= 0)
        r3_216 = 0 - (0 - r3_215);
    
    void* r1_357 = &(&format)[r3_216 + 0x140];
    char r12_71 = *(r1_357 - 0x100);
    *(r1_357 - 0x100) = r0_71;
    char var_c0_1 = r12_71;
    char var_bf;
    uint32_t r0_72 = var_bf;
    int32_t r3_218 = r0_72 + r3_216 + key[0x49][0];
    int32_t r3_219 = r3_218 & 0xff;
    
    if (0 - r3_218 >= 0)
        r3_219 = 0 - (0 - r3_218);
    
    void* r1_362 = &(&format)[r3_219 + 0x140];
    char r12_72 = *(r1_362 - 0x100);
    *(r1_362 - 0x100) = r0_72;
    char var_bf_1 = r12_72;
    char var_be;
    uint32_t r0_73 = var_be;
    int32_t r3_221 = r0_73 + r3_219 + key[0x4a][0];
    int32_t r3_222 = r3_221 & 0xff;
    
    if (0 - r3_221 >= 0)
        r3_222 = 0 - (0 - r3_221);
    
    void* r1_367 = &(&format)[r3_222 + 0x140];
    char r12_73 = *(r1_367 - 0x100);
    *(r1_367 - 0x100) = r0_73;
    char var_be_1 = r12_73;
    char var_bd;
    uint32_t r0_74 = var_bd;
    int32_t r3_224 = r0_74 + r3_222 + key[0x4b][0];
    int32_t r3_225 = r3_224 & 0xff;
    
    if (0 - r3_224 >= 0)
        r3_225 = 0 - (0 - r3_224);
    
    void* r1_372 = &(&format)[r3_225 + 0x140];
    char r12_74 = *(r1_372 - 0x100);
    *(r1_372 - 0x100) = r0_74;
    char var_bd_1 = r12_74;
    char var_bc;
    uint32_t r0_75 = var_bc;
    int32_t r3_227 = r0_75 + r3_225 + key[0x4c][0];
    int32_t r3_228 = r3_227 & 0xff;
    
    if (0 - r3_227 >= 0)
        r3_228 = 0 - (0 - r3_227);
    
    void* r1_377 = &(&format)[r3_228 + 0x140];
    char r12_75 = *(r1_377 - 0x100);
    *(r1_377 - 0x100) = r0_75;
    char var_bc_1 = r12_75;
    char var_bb;
    uint32_t r1_378 = var_bb;
    int32_t r3_230 = r1_378 + r3_228 + key[0x4d][0];
    int32_t r3_231 = r3_230 & 0xff;
    
    if (0 - r3_230 >= 0)
        r3_231 = 0 - (0 - r3_230);
    
    void* r2_9 = &(&format)[r3_231 + 0x140];
    char r0_76 = *(r2_9 - 0x100);
    *(r2_9 - 0x100) = r1_378;
    char var_bb_1 = r0_76;
    char var_ba;
    uint32_t r0_77 = var_ba;
    int32_t r3_233 = r0_77 + r3_231 + key[0x4e][0];
    int32_t r3_234 = r3_233 & 0xff;
    
    if (0 - r3_233 >= 0)
        r3_234 = 0 - (0 - r3_233);
    
    void* r1_383 = &(&format)[r3_234 + 0x140];
    char r12_76 = *(r1_383 - 0x100);
    *(r1_383 - 0x100) = r0_77;
    char var_ba_1 = r12_76;
    char var_b9;
    uint32_t r0_78 = var_b9;
    int32_t r3_236 = r0_78 + r3_234 + key[0x4f][0];
    int32_t r3_237 = r3_236 & 0xff;
    
    if (0 - r3_236 >= 0)
        r3_237 = 0 - (0 - r3_236);
    
    void* r1_388 = &(&format)[r3_237 + 0x140];
    char r12_77 = *(r1_388 - 0x100);
    *(r1_388 - 0x100) = r0_78;
    char var_b9_1 = r12_77;
    char var_b8;
    uint32_t r0_79 = var_b8;
    int32_t r3_239 = r0_79 + r3_237 + key[0x50][0];
    int32_t r3_240 = r3_239 & 0xff;
    
    if (0 - r3_239 >= 0)
        r3_240 = 0 - (0 - r3_239);
    
    void* r1_393 = &(&format)[r3_240 + 0x140];
    char r12_78 = *(r1_393 - 0x100);
    *(r1_393 - 0x100) = r0_79;
    char var_b8_1 = r12_78;
    char var_b7;
    uint32_t r0_80 = var_b7;
    int32_t r3_242 = r0_80 + r3_240 + key[0x51][0];
    int32_t r3_243 = r3_242 & 0xff;
    
    if (0 - r3_242 >= 0)
        r3_243 = 0 - (0 - r3_242);
    
    void* r1_398 = &(&format)[r3_243 + 0x140];
    char r12_79 = *(r1_398 - 0x100);
    *(r1_398 - 0x100) = r0_80;
    char var_b7_1 = r12_79;
    char var_b6;
    uint32_t r0_81 = var_b6;
    int32_t r3_245 = r0_81 + r3_243 + key[0x52][0];
    int32_t r3_246 = r3_245 & 0xff;
    
    if (0 - r3_245 >= 0)
        r3_246 = 0 - (0 - r3_245);
    
    void* r1_403 = &(&format)[r3_246 + 0x140];
    char r12_80 = *(r1_403 - 0x100);
    *(r1_403 - 0x100) = r0_81;
    char var_b6_1 = r12_80;
    char var_b5;
    uint32_t r0_82 = var_b5;
    int32_t r3_248 = r0_82 + r3_246 + key[0x53][0];
    int32_t r3_249 = r3_248 & 0xff;
    
    if (0 - r3_248 >= 0)
        r3_249 = 0 - (0 - r3_248);
    
    void* r1_408 = &(&format)[r3_249 + 0x140];
    char r12_81 = *(r1_408 - 0x100);
    *(r1_408 - 0x100) = r0_82;
    char var_b5_1 = r12_81;
    char var_b4;
    uint32_t r0_83 = var_b4;
    int32_t r3_251 = r0_83 + r3_249 + key[0x54][0];
    int32_t r3_252 = r3_251 & 0xff;
    
    if (0 - r3_251 >= 0)
        r3_252 = 0 - (0 - r3_251);
    
    void* r1_413 = &(&format)[r3_252 + 0x140];
    char r12_82 = *(r1_413 - 0x100);
    *(r1_413 - 0x100) = r0_83;
    char var_b4_1 = r12_82;
    char var_b3;
    uint32_t r0_84 = var_b3;
    int32_t r3_254 = r0_84 + r3_252 + key[0x55][0];
    int32_t r3_255 = r3_254 & 0xff;
    
    if (0 - r3_254 >= 0)
        r3_255 = 0 - (0 - r3_254);
    
    void* r1_418 = &(&format)[r3_255 + 0x140];
    char r12_83 = *(r1_418 - 0x100);
    *(r1_418 - 0x100) = r0_84;
    char var_b3_1 = r12_83;
    char var_b2;
    uint32_t r0_85 = var_b2;
    int32_t r3_257 = r0_85 + r3_255 + key[0x56][0];
    int32_t r3_258 = r3_257 & 0xff;
    
    if (0 - r3_257 >= 0)
        r3_258 = 0 - (0 - r3_257);
    
    void* r1_423 = &(&format)[r3_258 + 0x140];
    char r12_84 = *(r1_423 - 0x100);
    *(r1_423 - 0x100) = r0_85;
    char var_b2_1 = r12_84;
    char var_b1;
    uint32_t r0_86 = var_b1;
    int32_t r3_260 = r0_86 + r3_258 + key[0x57][0];
    int32_t r3_261 = r3_260 & 0xff;
    
    if (0 - r3_260 >= 0)
        r3_261 = 0 - (0 - r3_260);
    
    void* r1_428 = &(&format)[r3_261 + 0x140];
    char r12_85 = *(r1_428 - 0x100);
    *(r1_428 - 0x100) = r0_86;
    char var_b1_1 = r12_85;
    char var_b0;
    uint32_t r0_87 = var_b0;
    int32_t r3_263 = r0_87 + r3_261 + key[0x58][0];
    int32_t r3_264 = r3_263 & 0xff;
    
    if (0 - r3_263 >= 0)
        r3_264 = 0 - (0 - r3_263);
    
    void* r1_433 = &(&format)[r3_264 + 0x140];
    char r12_86 = *(r1_433 - 0x100);
    *(r1_433 - 0x100) = r0_87;
    char var_b0_1 = r12_86;
    char var_af;
    uint32_t r0_88 = var_af;
    int32_t r3_266 = r0_88 + r3_264 + key[0x59][0];
    int32_t r3_267 = r3_266 & 0xff;
    
    if (0 - r3_266 >= 0)
        r3_267 = 0 - (0 - r3_266);
    
    void* r1_438 = &(&format)[r3_267 + 0x140];
    char r12_87 = *(r1_438 - 0x100);
    *(r1_438 - 0x100) = r0_88;
    char var_af_1 = r12_87;
    char var_ae;
    uint32_t r0_89 = var_ae;
    int32_t r3_269 = r0_89 + r3_267 + key[0x5a][0];
    int32_t r3_270 = r3_269 & 0xff;
    
    if (0 - r3_269 >= 0)
        r3_270 = 0 - (0 - r3_269);
    
    void* r1_443 = &(&format)[r3_270 + 0x140];
    char r12_88 = *(r1_443 - 0x100);
    *(r1_443 - 0x100) = r0_89;
    char var_ae_1 = r12_88;
    char var_ad;
    uint32_t r0_90 = var_ad;
    int32_t r3_272 = r0_90 + r3_270 + key[0x5b][0];
    int32_t r3_273 = r3_272 & 0xff;
    
    if (0 - r3_272 >= 0)
        r3_273 = 0 - (0 - r3_272);
    
    void* r1_448 = &(&format)[r3_273 + 0x140];
    char r12_89 = *(r1_448 - 0x100);
    *(r1_448 - 0x100) = r0_90;
    char var_ad_1 = r12_89;
    char var_ac;
    uint32_t r0_91 = var_ac;
    int32_t r3_275 = r0_91 + r3_273 + key[0x5c][0];
    int32_t r3_276 = r3_275 & 0xff;
    
    if (0 - r3_275 >= 0)
        r3_276 = 0 - (0 - r3_275);
    
    void* r1_453 = &(&format)[r3_276 + 0x140];
    char r12_90 = *(r1_453 - 0x100);
    *(r1_453 - 0x100) = r0_91;
    char var_ac_1 = r12_90;
    char var_ab;
    uint32_t r0_92 = var_ab;
    int32_t r3_278 = r0_92 + r3_276 + key[0x5d][0];
    int32_t r3_279 = r3_278 & 0xff;
    
    if (0 - r3_278 >= 0)
        r3_279 = 0 - (0 - r3_278);
    
    void* r1_458 = &(&format)[r3_279 + 0x140];
    char r12_91 = *(r1_458 - 0x100);
    *(r1_458 - 0x100) = r0_92;
    char var_ab_1 = r12_91;
    char var_aa;
    uint32_t r0_93 = var_aa;
    int32_t r3_281 = r0_93 + r3_279 + key[0x5e][0];
    int32_t r3_282 = r3_281 & 0xff;
    
    if (0 - r3_281 >= 0)
        r3_282 = 0 - (0 - r3_281);
    
    void* r1_463 = &(&format)[r3_282 + 0x140];
    char r12_92 = *(r1_463 - 0x100);
    *(r1_463 - 0x100) = r0_93;
    char var_aa_1 = r12_92;
    char var_a9;
    uint32_t r0_94 = var_a9;
    int32_t r3_284 = r0_94 + r3_282 + key[0x5f][0];
    int32_t r3_285 = r3_284 & 0xff;
    
    if (0 - r3_284 >= 0)
        r3_285 = 0 - (0 - r3_284);
    
    void* r1_468 = &(&format)[r3_285 + 0x140];
    char r12_93 = *(r1_468 - 0x100);
    *(r1_468 - 0x100) = r0_94;
    char var_a9_1 = r12_93;
    char var_a8;
    uint32_t r0_95 = var_a8;
    int32_t r3_287 = r0_95 + r3_285 + key[0x60][0];
    int32_t r3_288 = r3_287 & 0xff;
    
    if (0 - r3_287 >= 0)
        r3_288 = 0 - (0 - r3_287);
    
    void* r1_473 = &(&format)[r3_288 + 0x140];
    char r12_94 = *(r1_473 - 0x100);
    *(r1_473 - 0x100) = r0_95;
    char var_a8_1 = r12_94;
    char var_a7;
    uint32_t r0_96 = var_a7;
    int32_t r3_290 = r0_96 + r3_288 + key[0x61][0];
    int32_t r3_291 = r3_290 & 0xff;
    
    if (0 - r3_290 >= 0)
        r3_291 = 0 - (0 - r3_290);
    
    void* r1_478 = &(&format)[r3_291 + 0x140];
    char r12_95 = *(r1_478 - 0x100);
    *(r1_478 - 0x100) = r0_96;
    char var_a7_1 = r12_95;
    char var_a6;
    uint32_t r0_97 = var_a6;
    int32_t r3_293 = r0_97 + r3_291 + key[0x62][0];
    int32_t r3_294 = r3_293 & 0xff;
    
    if (0 - r3_293 >= 0)
        r3_294 = 0 - (0 - r3_293);
    
    void* r1_483 = &(&format)[r3_294 + 0x140];
    char r12_96 = *(r1_483 - 0x100);
    *(r1_483 - 0x100) = r0_97;
    char var_a6_1 = r12_96;
    char var_a5;
    uint32_t r0_98 = var_a5;
    int32_t r3_296 = r0_98 + r3_294 + key[0x63][0];
    int32_t r3_297 = r3_296 & 0xff;
    
    if (0 - r3_296 >= 0)
        r3_297 = 0 - (0 - r3_296);
    
    void* r1_488 = &(&format)[r3_297 + 0x140];
    char r12_97 = *(r1_488 - 0x100);
    *(r1_488 - 0x100) = r0_98;
    char var_a5_1 = r12_97;
    char var_a4;
    uint32_t r0_99 = var_a4;
    int32_t r3_299 = r0_99 + r3_297 + key[0x64][0];
    int32_t r3_300 = r3_299 & 0xff;
    
    if (0 - r3_299 >= 0)
        r3_300 = 0 - (0 - r3_299);
    
    void* r1_493 = &(&format)[r3_300 + 0x140];
    char r12_98 = *(r1_493 - 0x100);
    *(r1_493 - 0x100) = r0_99;
    char var_a4_1 = r12_98;
    char var_a3;
    uint32_t r0_100 = var_a3;
    int32_t r3_302 = r0_100 + r3_300 + key[0x65][0];
    int32_t r3_303 = r3_302 & 0xff;
    
    if (0 - r3_302 >= 0)
        r3_303 = 0 - (0 - r3_302);
    
    void* r1_498 = &(&format)[r3_303 + 0x140];
    char r12_99 = *(r1_498 - 0x100);
    *(r1_498 - 0x100) = r0_100;
    char var_a3_1 = r12_99;
    char var_a2;
    uint32_t r0_101 = var_a2;
    int32_t r3_305 = r0_101 + r3_303 + key[0x66][0];
    int32_t r3_306 = r3_305 & 0xff;
    
    if (0 - r3_305 >= 0)
        r3_306 = 0 - (0 - r3_305);
    
    void* r1_503 = &(&format)[r3_306 + 0x140];
    char r12_100 = *(r1_503 - 0x100);
    *(r1_503 - 0x100) = r0_101;
    char var_a2_1 = r12_100;
    char var_a1;
    uint32_t r0_102 = var_a1;
    int32_t r3_308 = r0_102 + r3_306 + key[0x67][0];
    int32_t r3_309 = r3_308 & 0xff;
    
    if (0 - r3_308 >= 0)
        r3_309 = 0 - (0 - r3_308);
    
    void* r1_508 = &(&format)[r3_309 + 0x140];
    char r12_101 = *(r1_508 - 0x100);
    *(r1_508 - 0x100) = r0_102;
    char var_a1_1 = r12_101;
    char var_a0;
    uint32_t r0_103 = var_a0;
    int32_t r3_311 = r0_103 + r3_309 + key[0x68][0];
    int32_t r3_312 = r3_311 & 0xff;
    
    if (0 - r3_311 >= 0)
        r3_312 = 0 - (0 - r3_311);
    
    void* r1_513 = &(&format)[r3_312 + 0x140];
    char r12_102 = *(r1_513 - 0x100);
    *(r1_513 - 0x100) = r0_103;
    char var_a0_1 = r12_102;
    char var_9f;
    uint32_t r0_104 = var_9f;
    int32_t r3_314 = r0_104 + r3_312 + key[0x69][0];
    int32_t r3_315 = r3_314 & 0xff;
    
    if (0 - r3_314 >= 0)
        r3_315 = 0 - (0 - r3_314);
    
    void* r1_518 = &(&format)[r3_315 + 0x140];
    char r12_103 = *(r1_518 - 0x100);
    *(r1_518 - 0x100) = r0_104;
    char var_9f_1 = r12_103;
    char var_9e;
    uint32_t r0_105 = var_9e;
    int32_t r3_317 = r0_105 + r3_315 + key[0x6a][0];
    int32_t r3_318 = r3_317 & 0xff;
    
    if (0 - r3_317 >= 0)
        r3_318 = 0 - (0 - r3_317);
    
    void* r1_523 = &(&format)[r3_318 + 0x140];
    char r12_104 = *(r1_523 - 0x100);
    *(r1_523 - 0x100) = r0_105;
    char var_9e_1 = r12_104;
    char var_9d;
    uint32_t r0_106 = var_9d;
    int32_t r3_320 = r0_106 + r3_318 + key[0x6b][0];
    int32_t r3_321 = r3_320 & 0xff;
    
    if (0 - r3_320 >= 0)
        r3_321 = 0 - (0 - r3_320);
    
    void* r1_528 = &(&format)[r3_321 + 0x140];
    char r12_105 = *(r1_528 - 0x100);
    *(r1_528 - 0x100) = r0_106;
    char var_9d_1 = r12_105;
    char var_9c;
    uint32_t r0_107 = var_9c;
    int32_t r3_323 = r0_107 + r3_321 + key[0x6c][0];
    int32_t r3_324 = r3_323 & 0xff;
    
    if (0 - r3_323 >= 0)
        r3_324 = 0 - (0 - r3_323);
    
    void* r1_533 = &(&format)[r3_324 + 0x140];
    char r12_106 = *(r1_533 - 0x100);
    *(r1_533 - 0x100) = r0_107;
    char var_9c_1 = r12_106;
    char var_9b;
    uint32_t r0_108 = var_9b;
    int32_t r3_326 = r0_108 + r3_324 + key[0x6d][0];
    int32_t r3_327 = r3_326 & 0xff;
    
    if (0 - r3_326 >= 0)
        r3_327 = 0 - (0 - r3_326);
    
    void* r1_538 = &(&format)[r3_327 + 0x140];
    char r12_107 = *(r1_538 - 0x100);
    *(r1_538 - 0x100) = r0_108;
    char var_9b_1 = r12_107;
    char var_9a;
    uint32_t r0_109 = var_9a;
    int32_t r3_329 = r0_109 + r3_327 + key[0x6e][0];
    int32_t r3_330 = r3_329 & 0xff;
    
    if (0 - r3_329 >= 0)
        r3_330 = 0 - (0 - r3_329);
    
    void* r1_543 = &(&format)[r3_330 + 0x140];
    char r12_108 = *(r1_543 - 0x100);
    *(r1_543 - 0x100) = r0_109;
    char var_9a_1 = r12_108;
    char var_99;
    uint32_t r0_110 = var_99;
    int32_t r3_332 = r0_110 + r3_330 + key[0x6f][0];
    int32_t r3_333 = r3_332 & 0xff;
    
    if (0 - r3_332 >= 0)
        r3_333 = 0 - (0 - r3_332);
    
    void* r1_548 = &(&format)[r3_333 + 0x140];
    char r12_109 = *(r1_548 - 0x100);
    *(r1_548 - 0x100) = r0_110;
    char var_99_1 = r12_109;
    char var_98;
    uint32_t r0_111 = var_98;
    int32_t r3_335 = r0_111 + r3_333 + key[0x70][0];
    int32_t r3_336 = r3_335 & 0xff;
    
    if (0 - r3_335 >= 0)
        r3_336 = 0 - (0 - r3_335);
    
    void* r1_553 = &(&format)[r3_336 + 0x140];
    char r12_110 = *(r1_553 - 0x100);
    *(r1_553 - 0x100) = r0_111;
    char var_98_1 = r12_110;
    char var_97;
    uint32_t r0_112 = var_97;
    int32_t r3_338 = r0_112 + r3_336 + key[0x71][0];
    int32_t r3_339 = r3_338 & 0xff;
    
    if (0 - r3_338 >= 0)
        r3_339 = 0 - (0 - r3_338);
    
    void* r1_558 = &(&format)[r3_339 + 0x140];
    char r12_111 = *(r1_558 - 0x100);
    *(r1_558 - 0x100) = r0_112;
    char var_97_1 = r12_111;
    char var_96;
    uint32_t r0_113 = var_96;
    int32_t r3_341 = r0_113 + r3_339 + key[0x72][0];
    int32_t r3_342 = r3_341 & 0xff;
    
    if (0 - r3_341 >= 0)
        r3_342 = 0 - (0 - r3_341);
    
    void* r1_563 = &(&format)[r3_342 + 0x140];
    char r12_112 = *(r1_563 - 0x100);
    *(r1_563 - 0x100) = r0_113;
    char var_96_1 = r12_112;
    char var_95;
    uint32_t r0_114 = var_95;
    int32_t r3_344 = r0_114 + r3_342 + key[0x73][0];
    int32_t r3_345 = r3_344 & 0xff;
    
    if (0 - r3_344 >= 0)
        r3_345 = 0 - (0 - r3_344);
    
    void* r1_568 = &(&format)[r3_345 + 0x140];
    char r12_113 = *(r1_568 - 0x100);
    *(r1_568 - 0x100) = r0_114;
    char var_95_1 = r12_113;
    char var_94;
    uint32_t r0_115 = var_94;
    int32_t r3_347 = r0_115 + r3_345 + key[0x74][0];
    int32_t r3_348 = r3_347 & 0xff;
    
    if (0 - r3_347 >= 0)
        r3_348 = 0 - (0 - r3_347);
    
    void* r1_573 = &(&format)[r3_348 + 0x140];
    char r12_114 = *(r1_573 - 0x100);
    *(r1_573 - 0x100) = r0_115;
    char var_94_1 = r12_114;
    char var_93;
    uint32_t r0_116 = var_93;
    int32_t r3_350 = r0_116 + r3_348 + key[0x75][0];
    int32_t r3_351 = r3_350 & 0xff;
    
    if (0 - r3_350 >= 0)
        r3_351 = 0 - (0 - r3_350);
    
    void* r1_578 = &(&format)[r3_351 + 0x140];
    char r12_115 = *(r1_578 - 0x100);
    *(r1_578 - 0x100) = r0_116;
    char var_93_1 = r12_115;
    char var_92;
    uint32_t r0_117 = var_92;
    int32_t r3_353 = r0_117 + r3_351 + key[0x76][0];
    int32_t r3_354 = r3_353 & 0xff;
    
    if (0 - r3_353 >= 0)
        r3_354 = 0 - (0 - r3_353);
    
    void* r1_583 = &(&format)[r3_354 + 0x140];
    char r12_116 = *(r1_583 - 0x100);
    *(r1_583 - 0x100) = r0_117;
    char var_92_1 = r12_116;
    char var_91;
    uint32_t r0_118 = var_91;
    int32_t r3_356 = r0_118 + r3_354 + key[0x77][0];
    int32_t r3_357 = r3_356 & 0xff;
    
    if (0 - r3_356 >= 0)
        r3_357 = 0 - (0 - r3_356);
    
    void* r1_588 = &(&format)[r3_357 + 0x140];
    char r12_117 = *(r1_588 - 0x100);
    *(r1_588 - 0x100) = r0_118;
    char var_91_1 = r12_117;
    char var_90;
    uint32_t r0_119 = var_90;
    int32_t r3_359 = r0_119 + r3_357 + key[0x78][0];
    int32_t r3_360 = r3_359 & 0xff;
    
    if (0 - r3_359 >= 0)
        r3_360 = 0 - (0 - r3_359);
    
    void* r1_593 = &(&format)[r3_360 + 0x140];
    char r12_118 = *(r1_593 - 0x100);
    *(r1_593 - 0x100) = r0_119;
    char var_90_1 = r12_118;
    char var_8f;
    uint32_t r0_120 = var_8f;
    int32_t r3_362 = r0_120 + r3_360 + key[0x79][0];
    int32_t r3_363 = r3_362 & 0xff;
    
    if (0 - r3_362 >= 0)
        r3_363 = 0 - (0 - r3_362);
    
    void* r1_598 = &(&format)[r3_363 + 0x140];
    char r12_119 = *(r1_598 - 0x100);
    *(r1_598 - 0x100) = r0_120;
    char var_8f_1 = r12_119;
    char var_8e;
    uint32_t r0_121 = var_8e;
    int32_t r3_365 = r0_121 + r3_363 + key[0x7a][0];
    int32_t r3_366 = r3_365 & 0xff;
    
    if (0 - r3_365 >= 0)
        r3_366 = 0 - (0 - r3_365);
    
    void* r1_603 = &(&format)[r3_366 + 0x140];
    char r12_120 = *(r1_603 - 0x100);
    *(r1_603 - 0x100) = r0_121;
    char var_8e_1 = r12_120;
    char var_8d;
    uint32_t r0_122 = var_8d;
    int32_t r3_368 = r0_122 + r3_366 + key[0x7b][0];
    int32_t r3_369 = r3_368 & 0xff;
    
    if (0 - r3_368 >= 0)
        r3_369 = 0 - (0 - r3_368);
    
    void* r1_608 = &(&format)[r3_369 + 0x140];
    char r12_121 = *(r1_608 - 0x100);
    *(r1_608 - 0x100) = r0_122;
    char var_8d_1 = r12_121;
    char var_8c;
    uint32_t r0_123 = var_8c;
    int32_t r3_371 = r0_123 + r3_369 + key[0x7c][0];
    int32_t r3_372 = r3_371 & 0xff;
    
    if (0 - r3_371 >= 0)
        r3_372 = 0 - (0 - r3_371);
    
    void* r1_613 = &(&format)[r3_372 + 0x140];
    char r12_122 = *(r1_613 - 0x100);
    *(r1_613 - 0x100) = r0_123;
    char var_8c_1 = r12_122;
    char var_8b;
    uint32_t r0_124 = var_8b;
    int32_t r3_374 = r0_124 + r3_372 + key[0x7d][0];
    int32_t r3_375 = r3_374 & 0xff;
    
    if (0 - r3_374 >= 0)
        r3_375 = 0 - (0 - r3_374);
    
    void* r1_618 = &(&format)[r3_375 + 0x140];
    char r12_123 = *(r1_618 - 0x100);
    *(r1_618 - 0x100) = r0_124;
    char var_8b_1 = r12_123;
    char var_8a;
    uint32_t r0_125 = var_8a;
    int32_t r3_377 = r0_125 + r3_375 + key[0x7e][0];
    int32_t r3_378 = r3_377 & 0xff;
    
    if (0 - r3_377 >= 0)
        r3_378 = 0 - (0 - r3_377);
    
    void* r1_623 = &(&format)[r3_378 + 0x140];
    char r12_124 = *(r1_623 - 0x100);
    *(r1_623 - 0x100) = r0_125;
    char var_8a_1 = r12_124;
    char var_89;
    uint32_t r0_126 = var_89;
    int32_t r3_380 = r0_126 + r3_378 + key[0x7f][0];
    int32_t r3_381 = r3_380 & 0xff;
    
    if (0 - r3_380 >= 0)
        r3_381 = 0 - (0 - r3_380);
    
    void* r1_628 = &(&format)[r3_381 + 0x140];
    char r12_125 = *(r1_628 - 0x100);
    *(r1_628 - 0x100) = r0_126;
    char var_89_1 = r12_125;
    uint32_t r0_127 = var_88;
    int32_t r3_383 = r0_127 + r3_381 + key[0x80][0];
    int32_t r3_384 = r3_383 & 0xff;
    
    if (0 - r3_383 >= 0)
        r3_384 = 0 - (0 - r3_383);
    
    void* r1_633 = &(&format)[r3_384 + 0x140];
    char r12_126 = *(r1_633 - 0x100);
    *(r1_633 - 0x100) = r0_127;
    char var_88_1 = r12_126;
    char var_87;
    uint32_t r0_128 = var_87;
    int32_t r3_386 = r0_128 + r3_384 + key[0x81][0];
    int32_t r3_387 = r3_386 & 0xff;
    
    if (0 - r3_386 >= 0)
        r3_387 = 0 - (0 - r3_386);
    
    void* r1_638 = &(&format)[r3_387 + 0x140];
    char r12_127 = *(r1_638 - 0x100);
    *(r1_638 - 0x100) = r0_128;
    char var_87_1 = r12_127;
    char var_86;
    uint32_t r0_129 = var_86;
    int32_t r3_389 = r0_129 + r3_387 + key[0x82][0];
    int32_t r3_390 = r3_389 & 0xff;
    
    if (0 - r3_389 >= 0)
        r3_390 = 0 - (0 - r3_389);
    
    void* r1_643 = &(&format)[r3_390 + 0x140];
    char r12_128 = *(r1_643 - 0x100);
    *(r1_643 - 0x100) = r0_129;
    char var_86_1 = r12_128;
    char var_85;
    uint32_t r0_130 = var_85;
    int32_t r3_392 = r0_130 + r3_390 + key[0x83][0];
    int32_t r3_393 = r3_392 & 0xff;
    
    if (0 - r3_392 >= 0)
        r3_393 = 0 - (0 - r3_392);
    
    void* r1_648 = &(&format)[r3_393 + 0x140];
    char r12_129 = *(r1_648 - 0x100);
    *(r1_648 - 0x100) = r0_130;
    char var_85_1 = r12_129;
    char var_84;
    uint32_t r0_131 = var_84;
    int32_t r3_395 = r0_131 + r3_393 + key[0x84][0];
    int32_t r3_396 = r3_395 & 0xff;
    
    if (0 - r3_395 >= 0)
        r3_396 = 0 - (0 - r3_395);
    
    void* r1_653 = &(&format)[r3_396 + 0x140];
    char r12_130 = *(r1_653 - 0x100);
    *(r1_653 - 0x100) = r0_131;
    char var_84_1 = r12_130;
    char var_83;
    uint32_t r0_132 = var_83;
    int32_t r3_398 = r0_132 + r3_396 + key[0x85][0];
    int32_t r3_399 = r3_398 & 0xff;
    
    if (0 - r3_398 >= 0)
        r3_399 = 0 - (0 - r3_398);
    
    void* r1_658 = &(&format)[r3_399 + 0x140];
    char r12_131 = *(r1_658 - 0x100);
    *(r1_658 - 0x100) = r0_132;
    char var_83_1 = r12_131;
    char var_82;
    uint32_t r0_133 = var_82;
    int32_t r3_401 = r0_133 + r3_399 + key[0x86][0];
    int32_t r3_402 = r3_401 & 0xff;
    
    if (0 - r3_401 >= 0)
        r3_402 = 0 - (0 - r3_401);
    
    void* r1_663 = &(&format)[r3_402 + 0x140];
    char r12_132 = *(r1_663 - 0x100);
    *(r1_663 - 0x100) = r0_133;
    char var_82_1 = r12_132;
    char var_81;
    uint32_t r0_134 = var_81;
    int32_t r3_404 = r0_134 + r3_402 + key[0x87][0];
    int32_t r3_405 = r3_404 & 0xff;
    
    if (0 - r3_404 >= 0)
        r3_405 = 0 - (0 - r3_404);
    
    void* r1_668 = &(&format)[r3_405 + 0x140];
    char r12_133 = *(r1_668 - 0x100);
    *(r1_668 - 0x100) = r0_134;
    char var_81_1 = r12_133;
    char var_80;
    uint32_t r0_135 = var_80;
    int32_t r3_407 = r0_135 + r3_405 + key[0x88][0];
    int32_t r3_408 = r3_407 & 0xff;
    
    if (0 - r3_407 >= 0)
        r3_408 = 0 - (0 - r3_407);
    
    void* r1_673 = &(&format)[r3_408 + 0x140];
    char r12_134 = *(r1_673 - 0x100);
    *(r1_673 - 0x100) = r0_135;
    char var_80_1 = r12_134;
    char var_7f;
    uint32_t r0_136 = var_7f;
    int32_t r3_410 = r0_136 + r3_408 + key[0x89][0];
    int32_t r3_411 = r3_410 & 0xff;
    
    if (0 - r3_410 >= 0)
        r3_411 = 0 - (0 - r3_410);
    
    void* r1_678 = &(&format)[r3_411 + 0x140];
    char r12_135 = *(r1_678 - 0x100);
    *(r1_678 - 0x100) = r0_136;
    char var_7f_1 = r12_135;
    char var_7e;
    uint32_t r0_137 = var_7e;
    int32_t r3_413 = r0_137 + r3_411 + key[0x8a][0];
    int32_t r3_414 = r3_413 & 0xff;
    
    if (0 - r3_413 >= 0)
        r3_414 = 0 - (0 - r3_413);
    
    void* r1_683 = &(&format)[r3_414 + 0x140];
    char r12_136 = *(r1_683 - 0x100);
    *(r1_683 - 0x100) = r0_137;
    char var_7e_1 = r12_136;
    char var_7d;
    uint32_t r0_138 = var_7d;
    int32_t r3_416 = r0_138 + r3_414 + key[0x8b][0];
    int32_t r3_417 = r3_416 & 0xff;
    
    if (0 - r3_416 >= 0)
        r3_417 = 0 - (0 - r3_416);
    
    void* r1_688 = &(&format)[r3_417 + 0x140];
    char r12_137 = *(r1_688 - 0x100);
    *(r1_688 - 0x100) = r0_138;
    char var_7d_1 = r12_137;
    char var_7c;
    uint32_t r1_689 = var_7c;
    int32_t r3_419 = r1_689 + r3_417 + key[0x8c][0];
    int32_t r3_420 = r3_419 & 0xff;
    
    if (0 - r3_419 >= 0)
        r3_420 = 0 - (0 - r3_419);
    
    void* r2_14 = &(&format)[r3_420 + 0x140];
    char r0_139 = *(r2_14 - 0x100);
    *(r2_14 - 0x100) = r1_689;
    char var_7c_1 = r0_139;
    char var_7b;
    uint32_t r0_140 = var_7b;
    int32_t r3_422 = r0_140 + r3_420 + key[0x8d][0];
    int32_t r3_423 = r3_422 & 0xff;
    
    if (0 - r3_422 >= 0)
        r3_423 = 0 - (0 - r3_422);
    
    void* r1_694 = &(&format)[r3_423 + 0x140];
    char r12_138 = *(r1_694 - 0x100);
    *(r1_694 - 0x100) = r0_140;
    char var_7b_1 = r12_138;
    char var_7a;
    uint32_t r0_141 = var_7a;
    int32_t r3_425 = r0_141 + r3_423 + key[0x8e][0];
    int32_t r3_426 = r3_425 & 0xff;
    
    if (0 - r3_425 >= 0)
        r3_426 = 0 - (0 - r3_425);
    
    void* r1_699 = &(&format)[r3_426 + 0x140];
    char r12_139 = *(r1_699 - 0x100);
    *(r1_699 - 0x100) = r0_141;
    char var_7a_1 = r12_139;
    char var_79;
    uint32_t r0_142 = var_79;
    int32_t r3_428 = r0_142 + r3_426 + key[0x8f][0];
    int32_t r3_429 = r3_428 & 0xff;
    
    if (0 - r3_428 >= 0)
        r3_429 = 0 - (0 - r3_428);
    
    void* r1_704 = &(&format)[r3_429 + 0x140];
    char r12_140 = *(r1_704 - 0x100);
    *(r1_704 - 0x100) = r0_142;
    char var_79_1 = r12_140;
    char var_78;
    uint32_t r0_143 = var_78;
    int32_t r3_431 = r0_143 + r3_429 + key[0x90][0];
    int32_t r3_432 = r3_431 & 0xff;
    
    if (0 - r3_431 >= 0)
        r3_432 = 0 - (0 - r3_431);
    
    void* r1_709 = &(&format)[r3_432 + 0x140];
    char r12_141 = *(r1_709 - 0x100);
    *(r1_709 - 0x100) = r0_143;
    char var_78_1 = r12_141;
    char var_77;
    uint32_t r0_144 = var_77;
    int32_t r3_434 = r0_144 + r3_432 + key[0x91][0];
    int32_t r3_435 = r3_434 & 0xff;
    
    if (0 - r3_434 >= 0)
        r3_435 = 0 - (0 - r3_434);
    
    void* r1_714 = &(&format)[r3_435 + 0x140];
    char r12_142 = *(r1_714 - 0x100);
    *(r1_714 - 0x100) = r0_144;
    char var_77_1 = r12_142;
    char var_76;
    uint32_t r0_145 = var_76;
    int32_t r3_437 = r0_145 + r3_435 + key[0x92][0];
    int32_t r3_438 = r3_437 & 0xff;
    
    if (0 - r3_437 >= 0)
        r3_438 = 0 - (0 - r3_437);
    
    void* r1_719 = &(&format)[r3_438 + 0x140];
    char r12_143 = *(r1_719 - 0x100);
    *(r1_719 - 0x100) = r0_145;
    char var_76_1 = r12_143;
    char var_75;
    uint32_t r0_146 = var_75;
    int32_t r3_440 = r0_146 + r3_438 + key[0x93][0];
    int32_t r3_441 = r3_440 & 0xff;
    
    if (0 - r3_440 >= 0)
        r3_441 = 0 - (0 - r3_440);
    
    void* r1_724 = &(&format)[r3_441 + 0x140];
    char r12_144 = *(r1_724 - 0x100);
    *(r1_724 - 0x100) = r0_146;
    char var_75_1 = r12_144;
    char var_74;
    uint32_t r0_147 = var_74;
    int32_t r3_443 = r0_147 + r3_441 + key[0x94][0];
    int32_t r3_444 = r3_443 & 0xff;
    
    if (0 - r3_443 >= 0)
        r3_444 = 0 - (0 - r3_443);
    
    void* r1_729 = &(&format)[r3_444 + 0x140];
    char r12_145 = *(r1_729 - 0x100);
    *(r1_729 - 0x100) = r0_147;
    char var_74_1 = r12_145;
    char var_73;
    uint32_t r0_148 = var_73;
    int32_t r3_446 = r0_148 + r3_444 + key[0x95][0];
    int32_t r3_447 = r3_446 & 0xff;
    
    if (0 - r3_446 >= 0)
        r3_447 = 0 - (0 - r3_446);
    
    void* r1_734 = &(&format)[r3_447 + 0x140];
    char r12_146 = *(r1_734 - 0x100);
    *(r1_734 - 0x100) = r0_148;
    char var_73_1 = r12_146;
    char var_72;
    uint32_t r0_149 = var_72;
    int32_t r3_449 = r0_149 + r3_447 + key[0x96][0];
    int32_t r3_450 = r3_449 & 0xff;
    
    if (0 - r3_449 >= 0)
        r3_450 = 0 - (0 - r3_449);
    
    void* r1_739 = &(&format)[r3_450 + 0x140];
    char r12_147 = *(r1_739 - 0x100);
    *(r1_739 - 0x100) = r0_149;
    char var_72_1 = r12_147;
    char var_71;
    uint32_t r0_150 = var_71;
    int32_t r3_452 = r0_150 + r3_450 + key[0x97][0];
    int32_t r3_453 = r3_452 & 0xff;
    
    if (0 - r3_452 >= 0)
        r3_453 = 0 - (0 - r3_452);
    
    void* r1_744 = &(&format)[r3_453 + 0x140];
    char r12_148 = *(r1_744 - 0x100);
    *(r1_744 - 0x100) = r0_150;
    char var_71_1 = r12_148;
    char var_70;
    uint32_t r0_151 = var_70;
    int32_t r3_455 = r0_151 + r3_453 + key[0x98][0];
    int32_t r3_456 = r3_455 & 0xff;
    
    if (0 - r3_455 >= 0)
        r3_456 = 0 - (0 - r3_455);
    
    void* r1_749 = &(&format)[r3_456 + 0x140];
    char r12_149 = *(r1_749 - 0x100);
    *(r1_749 - 0x100) = r0_151;
    char var_70_1 = r12_149;
    char var_6f;
    uint32_t r0_152 = var_6f;
    int32_t r3_458 = r0_152 + r3_456 + key[0x99][0];
    int32_t r3_459 = r3_458 & 0xff;
    
    if (0 - r3_458 >= 0)
        r3_459 = 0 - (0 - r3_458);
    
    void* r1_754 = &(&format)[r3_459 + 0x140];
    char r12_150 = *(r1_754 - 0x100);
    *(r1_754 - 0x100) = r0_152;
    char var_6f_1 = r12_150;
    char var_6e;
    uint32_t r0_153 = var_6e;
    int32_t r3_461 = r0_153 + r3_459 + key[0x9a][0];
    int32_t r3_462 = r3_461 & 0xff;
    
    if (0 - r3_461 >= 0)
        r3_462 = 0 - (0 - r3_461);
    
    void* r1_759 = &(&format)[r3_462 + 0x140];
    char r12_151 = *(r1_759 - 0x100);
    *(r1_759 - 0x100) = r0_153;
    char var_6e_1 = r12_151;
    char var_6d;
    uint32_t r0_154 = var_6d;
    int32_t r3_464 = r0_154 + r3_462 + key[0x9b][0];
    int32_t r3_465 = r3_464 & 0xff;
    
    if (0 - r3_464 >= 0)
        r3_465 = 0 - (0 - r3_464);
    
    void* r1_764 = &(&format)[r3_465 + 0x140];
    char r12_152 = *(r1_764 - 0x100);
    *(r1_764 - 0x100) = r0_154;
    char var_6d_1 = r12_152;
    char var_6c;
    uint32_t r0_155 = var_6c;
    int32_t r3_467 = r0_155 + r3_465 + key[0x9c][0];
    int32_t r3_468 = r3_467 & 0xff;
    
    if (0 - r3_467 >= 0)
        r3_468 = 0 - (0 - r3_467);
    
    void* r1_769 = &(&format)[r3_468 + 0x140];
    char r12_153 = *(r1_769 - 0x100);
    *(r1_769 - 0x100) = r0_155;
    char var_6c_1 = r12_153;
    char var_6b;
    uint32_t r0_156 = var_6b;
    int32_t r3_470 = r0_156 + r3_468 + key[0x9d][0];
    int32_t r3_471 = r3_470 & 0xff;
    
    if (0 - r3_470 >= 0)
        r3_471 = 0 - (0 - r3_470);
    
    void* r1_774 = &(&format)[r3_471 + 0x140];
    char r12_154 = *(r1_774 - 0x100);
    *(r1_774 - 0x100) = r0_156;
    char var_6b_1 = r12_154;
    char var_6a;
    uint32_t r0_157 = var_6a;
    int32_t r3_473 = r0_157 + r3_471 + key[0x9e][0];
    int32_t r3_474 = r3_473 & 0xff;
    
    if (0 - r3_473 >= 0)
        r3_474 = 0 - (0 - r3_473);
    
    void* r1_779 = &(&format)[r3_474 + 0x140];
    char r12_155 = *(r1_779 - 0x100);
    *(r1_779 - 0x100) = r0_157;
    char var_6a_1 = r12_155;
    char var_69;
    uint32_t r0_158 = var_69;
    int32_t r3_476 = r0_158 + r3_474 + key[0x9f][0];
    int32_t r3_477 = r3_476 & 0xff;
    
    if (0 - r3_476 >= 0)
        r3_477 = 0 - (0 - r3_476);
    
    void* r1_784 = &(&format)[r3_477 + 0x140];
    char r12_156 = *(r1_784 - 0x100);
    *(r1_784 - 0x100) = r0_158;
    char var_69_1 = r12_156;
    char var_68;
    uint32_t r0_159 = var_68;
    int32_t r3_479 = r0_159 + r3_477 + key[0xa0][0];
    int32_t r3_480 = r3_479 & 0xff;
    
    if (0 - r3_479 >= 0)
        r3_480 = 0 - (0 - r3_479);
    
    void* r1_789 = &(&format)[r3_480 + 0x140];
    char r12_157 = *(r1_789 - 0x100);
    *(r1_789 - 0x100) = r0_159;
    char var_68_1 = r12_157;
    char var_67;
    uint32_t r0_160 = var_67;
    int32_t r3_482 = r0_160 + r3_480 + key[0xa1][0];
    int32_t r3_483 = r3_482 & 0xff;
    
    if (0 - r3_482 >= 0)
        r3_483 = 0 - (0 - r3_482);
    
    void* r1_794 = &(&format)[r3_483 + 0x140];
    char r12_158 = *(r1_794 - 0x100);
    *(r1_794 - 0x100) = r0_160;
    char var_67_1 = r12_158;
    char var_66;
    uint32_t r0_161 = var_66;
    int32_t r3_485 = r0_161 + r3_483 + key[0xa2][0];
    int32_t r3_486 = r3_485 & 0xff;
    
    if (0 - r3_485 >= 0)
        r3_486 = 0 - (0 - r3_485);
    
    void* r1_799 = &(&format)[r3_486 + 0x140];
    char r12_159 = *(r1_799 - 0x100);
    *(r1_799 - 0x100) = r0_161;
    char var_66_1 = r12_159;
    char var_65;
    uint32_t r0_162 = var_65;
    int32_t r3_488 = r0_162 + r3_486 + key[0xa3][0];
    int32_t r3_489 = r3_488 & 0xff;
    
    if (0 - r3_488 >= 0)
        r3_489 = 0 - (0 - r3_488);
    
    void* r1_804 = &(&format)[r3_489 + 0x140];
    char r12_160 = *(r1_804 - 0x100);
    *(r1_804 - 0x100) = r0_162;
    char var_65_1 = r12_160;
    char var_64;
    uint32_t r0_163 = var_64;
    int32_t r3_491 = r0_163 + r3_489 + key[0xa4][0];
    int32_t r3_492 = r3_491 & 0xff;
    
    if (0 - r3_491 >= 0)
        r3_492 = 0 - (0 - r3_491);
    
    void* r1_809 = &(&format)[r3_492 + 0x140];
    char r12_161 = *(r1_809 - 0x100);
    *(r1_809 - 0x100) = r0_163;
    char var_64_1 = r12_161;
    char var_63;
    uint32_t r0_164 = var_63;
    int32_t r3_494 = r0_164 + r3_492 + key[0xa5][0];
    int32_t r3_495 = r3_494 & 0xff;
    
    if (0 - r3_494 >= 0)
        r3_495 = 0 - (0 - r3_494);
    
    void* r1_814 = &(&format)[r3_495 + 0x140];
    char r12_162 = *(r1_814 - 0x100);
    *(r1_814 - 0x100) = r0_164;
    char var_63_1 = r12_162;
    char var_62;
    uint32_t r0_165 = var_62;
    int32_t r3_497 = r0_165 + r3_495 + key[0xa6][0];
    int32_t r3_498 = r3_497 & 0xff;
    
    if (0 - r3_497 >= 0)
        r3_498 = 0 - (0 - r3_497);
    
    void* r1_819 = &(&format)[r3_498 + 0x140];
    char r12_163 = *(r1_819 - 0x100);
    *(r1_819 - 0x100) = r0_165;
    char var_62_1 = r12_163;
    char var_61;
    uint32_t r0_166 = var_61;
    int32_t r3_500 = r0_166 + r3_498 + key[0xa7][0];
    int32_t r3_501 = r3_500 & 0xff;
    
    if (0 - r3_500 >= 0)
        r3_501 = 0 - (0 - r3_500);
    
    void* r1_824 = &(&format)[r3_501 + 0x140];
    char r12_164 = *(r1_824 - 0x100);
    *(r1_824 - 0x100) = r0_166;
    char var_61_1 = r12_164;
    char var_60;
    uint32_t r0_167 = var_60;
    int32_t r3_503 = r0_167 + r3_501 + key[0xa8][0];
    int32_t r3_504 = r3_503 & 0xff;
    
    if (0 - r3_503 >= 0)
        r3_504 = 0 - (0 - r3_503);
    
    void* r1_829 = &(&format)[r3_504 + 0x140];
    char r12_165 = *(r1_829 - 0x100);
    *(r1_829 - 0x100) = r0_167;
    char var_60_1 = r12_165;
    char var_5f;
    uint32_t r0_168 = var_5f;
    int32_t r3_506 = r0_168 + r3_504 + key[0xa9][0];
    int32_t r3_507 = r3_506 & 0xff;
    
    if (0 - r3_506 >= 0)
        r3_507 = 0 - (0 - r3_506);
    
    void* r1_834 = &(&format)[r3_507 + 0x140];
    char r12_166 = *(r1_834 - 0x100);
    *(r1_834 - 0x100) = r0_168;
    char var_5f_1 = r12_166;
    char var_5e;
    uint32_t r0_169 = var_5e;
    int32_t r3_509 = r0_169 + r3_507 + key[0xaa][0];
    int32_t r3_510 = r3_509 & 0xff;
    
    if (0 - r3_509 >= 0)
        r3_510 = 0 - (0 - r3_509);
    
    void* r1_839 = &(&format)[r3_510 + 0x140];
    char r12_167 = *(r1_839 - 0x100);
    *(r1_839 - 0x100) = r0_169;
    char var_5e_1 = r12_167;
    char var_5d;
    uint32_t r0_170 = var_5d;
    int32_t r3_512 = r0_170 + r3_510 + key[0xab][0];
    int32_t r3_513 = r3_512 & 0xff;
    
    if (0 - r3_512 >= 0)
        r3_513 = 0 - (0 - r3_512);
    
    void* r1_844 = &(&format)[r3_513 + 0x140];
    char r12_168 = *(r1_844 - 0x100);
    *(r1_844 - 0x100) = r0_170;
    char var_5d_1 = r12_168;
    char var_5c;
    uint32_t r0_171 = var_5c;
    int32_t r3_515 = r0_171 + r3_513 + key[0xac][0];
    int32_t r3_516 = r3_515 & 0xff;
    
    if (0 - r3_515 >= 0)
        r3_516 = 0 - (0 - r3_515);
    
    void* r1_849 = &(&format)[r3_516 + 0x140];
    char r12_169 = *(r1_849 - 0x100);
    *(r1_849 - 0x100) = r0_171;
    char var_5c_1 = r12_169;
    char var_5b;
    uint32_t r0_172 = var_5b;
    int32_t r3_518 = r0_172 + r3_516 + key[0xad][0];
    int32_t r3_519 = r3_518 & 0xff;
    
    if (0 - r3_518 >= 0)
        r3_519 = 0 - (0 - r3_518);
    
    void* r1_854 = &(&format)[r3_519 + 0x140];
    char r12_170 = *(r1_854 - 0x100);
    *(r1_854 - 0x100) = r0_172;
    char var_5b_1 = r12_170;
    char var_5a;
    uint32_t r0_173 = var_5a;
    int32_t r3_521 = r0_173 + r3_519 + key[0xae][0];
    int32_t r3_522 = r3_521 & 0xff;
    
    if (0 - r3_521 >= 0)
        r3_522 = 0 - (0 - r3_521);
    
    void* r1_859 = &(&format)[r3_522 + 0x140];
    char r12_171 = *(r1_859 - 0x100);
    *(r1_859 - 0x100) = r0_173;
    char var_5a_1 = r12_171;
    char var_59;
    uint32_t r0_174 = var_59;
    int32_t r3_524 = r0_174 + r3_522 + key[0xaf][0];
    int32_t r3_525 = r3_524 & 0xff;
    
    if (0 - r3_524 >= 0)
        r3_525 = 0 - (0 - r3_524);
    
    void* r1_864 = &(&format)[r3_525 + 0x140];
    char r12_172 = *(r1_864 - 0x100);
    *(r1_864 - 0x100) = r0_174;
    char var_59_1 = r12_172;
    char var_58;
    uint32_t r0_175 = var_58;
    int32_t r3_527 = r0_175 + r3_525 + key[0xb0][0];
    int32_t r3_528 = r3_527 & 0xff;
    
    if (0 - r3_527 >= 0)
        r3_528 = 0 - (0 - r3_527);
    
    void* r1_869 = &(&format)[r3_528 + 0x140];
    char r12_173 = *(r1_869 - 0x100);
    *(r1_869 - 0x100) = r0_175;
    char var_58_1 = r12_173;
    char var_57;
    uint32_t r0_176 = var_57;
    int32_t r3_530 = r0_176 + r3_528 + key[0xb1][0];
    int32_t r3_531 = r3_530 & 0xff;
    
    if (0 - r3_530 >= 0)
        r3_531 = 0 - (0 - r3_530);
    
    void* r1_874 = &(&format)[r3_531 + 0x140];
    char r12_174 = *(r1_874 - 0x100);
    *(r1_874 - 0x100) = r0_176;
    char var_57_1 = r12_174;
    char var_56;
    uint32_t r0_177 = var_56;
    int32_t r3_533 = r0_177 + r3_531 + key[0xb2][0];
    int32_t r3_534 = r3_533 & 0xff;
    
    if (0 - r3_533 >= 0)
        r3_534 = 0 - (0 - r3_533);
    
    void* r1_879 = &(&format)[r3_534 + 0x140];
    char r12_175 = *(r1_879 - 0x100);
    *(r1_879 - 0x100) = r0_177;
    char var_56_1 = r12_175;
    char var_55;
    uint32_t r0_178 = var_55;
    int32_t r3_536 = r0_178 + r3_534 + key[0xb3][0];
    int32_t r3_537 = r3_536 & 0xff;
    
    if (0 - r3_536 >= 0)
        r3_537 = 0 - (0 - r3_536);
    
    void* r1_884 = &(&format)[r3_537 + 0x140];
    char r12_176 = *(r1_884 - 0x100);
    *(r1_884 - 0x100) = r0_178;
    char var_55_1 = r12_176;
    char var_54;
    uint32_t r0_179 = var_54;
    int32_t r3_539 = r0_179 + r3_537 + key[0xb4][0];
    int32_t r3_540 = r3_539 & 0xff;
    
    if (0 - r3_539 >= 0)
        r3_540 = 0 - (0 - r3_539);
    
    void* r1_889 = &(&format)[r3_540 + 0x140];
    char r12_177 = *(r1_889 - 0x100);
    *(r1_889 - 0x100) = r0_179;
    char var_54_1 = r12_177;
    char var_53;
    uint32_t r0_180 = var_53;
    int32_t r3_542 = r0_180 + r3_540 + key[0xb5][0];
    int32_t r3_543 = r3_542 & 0xff;
    
    if (0 - r3_542 >= 0)
        r3_543 = 0 - (0 - r3_542);
    
    void* r1_894 = &(&format)[r3_543 + 0x140];
    char r12_178 = *(r1_894 - 0x100);
    *(r1_894 - 0x100) = r0_180;
    char var_53_1 = r12_178;
    char var_52;
    uint32_t r0_181 = var_52;
    int32_t r3_545 = r0_181 + r3_543 + key[0xb6][0];
    int32_t r3_546 = r3_545 & 0xff;
    
    if (0 - r3_545 >= 0)
        r3_546 = 0 - (0 - r3_545);
    
    void* r1_899 = &(&format)[r3_546 + 0x140];
    char r12_179 = *(r1_899 - 0x100);
    *(r1_899 - 0x100) = r0_181;
    char var_52_1 = r12_179;
    char var_51;
    uint32_t r0_182 = var_51;
    int32_t r3_548 = r0_182 + r3_546 + key[0xb7][0];
    int32_t r3_549 = r3_548 & 0xff;
    
    if (0 - r3_548 >= 0)
        r3_549 = 0 - (0 - r3_548);
    
    void* r1_904 = &(&format)[r3_549 + 0x140];
    char r12_180 = *(r1_904 - 0x100);
    *(r1_904 - 0x100) = r0_182;
    char var_51_1 = r12_180;
    char var_50;
    uint32_t r0_183 = var_50;
    int32_t r3_551 = r0_183 + r3_549 + key[0xb8][0];
    int32_t r3_552 = r3_551 & 0xff;
    
    if (0 - r3_551 >= 0)
        r3_552 = 0 - (0 - r3_551);
    
    void* r1_909 = &(&format)[r3_552 + 0x140];
    char r12_181 = *(r1_909 - 0x100);
    *(r1_909 - 0x100) = r0_183;
    char var_50_1 = r12_181;
    char var_4f;
    uint32_t r0_184 = var_4f;
    int32_t r3_554 = r0_184 + r3_552 + key[0xb9][0];
    int32_t r3_555 = r3_554 & 0xff;
    
    if (0 - r3_554 >= 0)
        r3_555 = 0 - (0 - r3_554);
    
    void* r1_914 = &(&format)[r3_555 + 0x140];
    char r12_182 = *(r1_914 - 0x100);
    *(r1_914 - 0x100) = r0_184;
    char var_4f_1 = r12_182;
    char var_4e;
    uint32_t r0_185 = var_4e;
    int32_t r3_557 = r0_185 + r3_555 + key[0xba][0];
    int32_t r3_558 = r3_557 & 0xff;
    
    if (0 - r3_557 >= 0)
        r3_558 = 0 - (0 - r3_557);
    
    void* r1_919 = &(&format)[r3_558 + 0x140];
    char r12_183 = *(r1_919 - 0x100);
    *(r1_919 - 0x100) = r0_185;
    char var_4e_1 = r12_183;
    char var_4d;
    uint32_t r0_186 = var_4d;
    int32_t r3_560 = r0_186 + r3_558 + key[0xbb][0];
    int32_t r3_561 = r3_560 & 0xff;
    
    if (0 - r3_560 >= 0)
        r3_561 = 0 - (0 - r3_560);
    
    void* r1_924 = &(&format)[r3_561 + 0x140];
    char r12_184 = *(r1_924 - 0x100);
    *(r1_924 - 0x100) = r0_186;
    char var_4d_1 = r12_184;
    char var_4c;
    uint32_t r0_187 = var_4c;
    int32_t r3_563 = r0_187 + r3_561 + key[0xbc][0];
    int32_t r3_564 = r3_563 & 0xff;
    
    if (0 - r3_563 >= 0)
        r3_564 = 0 - (0 - r3_563);
    
    void* r1_929 = &(&format)[r3_564 + 0x140];
    char r12_185 = *(r1_929 - 0x100);
    *(r1_929 - 0x100) = r0_187;
    char var_4c_1 = r12_185;
    char var_4b;
    uint32_t r0_188 = var_4b;
    int32_t r3_566 = r0_188 + r3_564 + key[0xbd][0];
    int32_t r3_567 = r3_566 & 0xff;
    
    if (0 - r3_566 >= 0)
        r3_567 = 0 - (0 - r3_566);
    
    void* r1_934 = &(&format)[r3_567 + 0x140];
    char r12_186 = *(r1_934 - 0x100);
    *(r1_934 - 0x100) = r0_188;
    char var_4b_1 = r12_186;
    char var_4a;
    uint32_t r0_189 = var_4a;
    int32_t r3_569 = r0_189 + r3_567 + key[0xbe][0];
    int32_t r3_570 = r3_569 & 0xff;
    
    if (0 - r3_569 >= 0)
        r3_570 = 0 - (0 - r3_569);
    
    void* r1_939 = &(&format)[r3_570 + 0x140];
    char r12_187 = *(r1_939 - 0x100);
    *(r1_939 - 0x100) = r0_189;
    char var_4a_1 = r12_187;
    char var_49;
    uint32_t r0_190 = var_49;
    int32_t r3_572 = r0_190 + r3_570 + key[0xbf][0];
    int32_t r3_573 = r3_572 & 0xff;
    
    if (0 - r3_572 >= 0)
        r3_573 = 0 - (0 - r3_572);
    
    void* r1_944 = &(&format)[r3_573 + 0x140];
    char r12_188 = *(r1_944 - 0x100);
    *(r1_944 - 0x100) = r0_190;
    char var_49_1 = r12_188;
    char var_48;
    uint32_t r0_191 = var_48;
    int32_t r3_575 = r0_191 + r3_573 + key[0xc0][0];
    int32_t r3_576 = r3_575 & 0xff;
    
    if (0 - r3_575 >= 0)
        r3_576 = 0 - (0 - r3_575);
    
    void* r1_949 = &(&format)[r3_576 + 0x140];
    char r12_189 = *(r1_949 - 0x100);
    *(r1_949 - 0x100) = r0_191;
    char var_48_1 = r12_189;
    char var_47;
    uint32_t r0_192 = var_47;
    int32_t r3_578 = r0_192 + r3_576 + key[0xc1][0];
    int32_t r3_579 = r3_578 & 0xff;
    
    if (0 - r3_578 >= 0)
        r3_579 = 0 - (0 - r3_578);
    
    void* r1_954 = &(&format)[r3_579 + 0x140];
    char r12_190 = *(r1_954 - 0x100);
    *(r1_954 - 0x100) = r0_192;
    char var_47_1 = r12_190;
    char var_46;
    uint32_t r0_193 = var_46;
    int32_t r3_581 = r0_193 + r3_579 + key[0xc2][0];
    int32_t r3_582 = r3_581 & 0xff;
    
    if (0 - r3_581 >= 0)
        r3_582 = 0 - (0 - r3_581);
    
    void* r1_959 = &(&format)[r3_582 + 0x140];
    char r12_191 = *(r1_959 - 0x100);
    *(r1_959 - 0x100) = r0_193;
    char var_46_1 = r12_191;
    char var_45;
    uint32_t r0_194 = var_45;
    int32_t r3_584 = r0_194 + r3_582 + key[0xc3][0];
    int32_t r3_585 = r3_584 & 0xff;
    
    if (0 - r3_584 >= 0)
        r3_585 = 0 - (0 - r3_584);
    
    void* r1_964 = &(&format)[r3_585 + 0x140];
    char r12_192 = *(r1_964 - 0x100);
    *(r1_964 - 0x100) = r0_194;
    char var_45_1 = r12_192;
    char var_44;
    uint32_t r0_195 = var_44;
    int32_t r3_587 = r0_195 + r3_585 + key[0xc4][0];
    int32_t r3_588 = r3_587 & 0xff;
    
    if (0 - r3_587 >= 0)
        r3_588 = 0 - (0 - r3_587);
    
    void* r1_969 = &(&format)[r3_588 + 0x140];
    char r12_193 = *(r1_969 - 0x100);
    *(r1_969 - 0x100) = r0_195;
    char var_44_1 = r12_193;
    char var_43;
    uint32_t r0_196 = var_43;
    int32_t r3_590 = r0_196 + r3_588 + key[0xc5][0];
    int32_t r3_591 = r3_590 & 0xff;
    
    if (0 - r3_590 >= 0)
        r3_591 = 0 - (0 - r3_590);
    
    void* r1_974 = &(&format)[r3_591 + 0x140];
    char r12_194 = *(r1_974 - 0x100);
    *(r1_974 - 0x100) = r0_196;
    char var_43_1 = r12_194;
    char var_42;
    uint32_t r0_197 = var_42;
    int32_t r3_593 = r0_197 + r3_591 + key[0xc6][0];
    int32_t r3_594 = r3_593 & 0xff;
    
    if (0 - r3_593 >= 0)
        r3_594 = 0 - (0 - r3_593);
    
    void* r1_979 = &(&format)[r3_594 + 0x140];
    char r12_195 = *(r1_979 - 0x100);
    *(r1_979 - 0x100) = r0_197;
    char var_42_1 = r12_195;
    char var_41;
    uint32_t r0_198 = var_41;
    int32_t r3_596 = r0_198 + r3_594 + key[0xc7][0];
    int32_t r3_597 = r3_596 & 0xff;
    
    if (0 - r3_596 >= 0)
        r3_597 = 0 - (0 - r3_596);
    
    void* r1_984 = &(&format)[r3_597 + 0x140];
    char r12_196 = *(r1_984 - 0x100);
    *(r1_984 - 0x100) = r0_198;
    char var_41_1 = r12_196;
    char var_40;
    uint32_t r0_199 = var_40;
    int32_t r3_599 = r0_199 + r3_597 + key[0xc8][0];
    int32_t r3_600 = r3_599 & 0xff;
    
    if (0 - r3_599 >= 0)
        r3_600 = 0 - (0 - r3_599);
    
    void* r1_989 = &(&format)[r3_600 + 0x140];
    char r12_197 = *(r1_989 - 0x100);
    *(r1_989 - 0x100) = r0_199;
    char var_40_1 = r12_197;
    char var_3f;
    uint32_t r0_200 = var_3f;
    int32_t r3_602 = r0_200 + r3_600 + key[0xc9][0];
    int32_t r3_603 = r3_602 & 0xff;
    
    if (0 - r3_602 >= 0)
        r3_603 = 0 - (0 - r3_602);
    
    void* r1_994 = &(&format)[r3_603 + 0x140];
    char r12_198 = *(r1_994 - 0x100);
    *(r1_994 - 0x100) = r0_200;
    char var_3f_1 = r12_198;
    char var_3e;
    uint32_t r1_995 = var_3e;
    int32_t r3_605 = r1_995 + r3_603 + key[0xca][0];
    int32_t r3_606 = r3_605 & 0xff;
    
    if (0 - r3_605 >= 0)
        r3_606 = 0 - (0 - r3_605);
    
    void* r2_19 = &(&format)[r3_606 + 0x140];
    char r0_201 = *(r2_19 - 0x100);
    *(r2_19 - 0x100) = r1_995;
    char var_3e_1 = r0_201;
    char var_3d;
    uint32_t r0_202 = var_3d;
    int32_t r3_608 = r0_202 + r3_606 + key[0xcb][0];
    int32_t r3_609 = r3_608 & 0xff;
    
    if (0 - r3_608 >= 0)
        r3_609 = 0 - (0 - r3_608);
    
    void* r1_1000 = &(&format)[r3_609 + 0x140];
    char r12_199 = *(r1_1000 - 0x100);
    *(r1_1000 - 0x100) = r0_202;
    char var_3d_1 = r12_199;
    char var_3c;
    uint32_t r0_203 = var_3c;
    int32_t r3_611 = r0_203 + r3_609 + key[0xcc][0];
    int32_t r3_612 = r3_611 & 0xff;
    
    if (0 - r3_611 >= 0)
        r3_612 = 0 - (0 - r3_611);
    
    void* r1_1005 = &(&format)[r3_612 + 0x140];
    char r12_200 = *(r1_1005 - 0x100);
    *(r1_1005 - 0x100) = r0_203;
    char var_3c_1 = r12_200;
    char var_3b;
    uint32_t r0_204 = var_3b;
    int32_t r3_614 = r0_204 + r3_612 + key[0xcd][0];
    int32_t r3_615 = r3_614 & 0xff;
    
    if (0 - r3_614 >= 0)
        r3_615 = 0 - (0 - r3_614);
    
    void* r1_1010 = &(&format)[r3_615 + 0x140];
    char r12_201 = *(r1_1010 - 0x100);
    *(r1_1010 - 0x100) = r0_204;
    char var_3b_1 = r12_201;
    char var_3a;
    uint32_t r0_205 = var_3a;
    int32_t r3_617 = r0_205 + r3_615 + key[0xce][0];
    int32_t r3_618 = r3_617 & 0xff;
    
    if (0 - r3_617 >= 0)
        r3_618 = 0 - (0 - r3_617);
    
    void* r1_1015 = &(&format)[r3_618 + 0x140];
    char r12_202 = *(r1_1015 - 0x100);
    *(r1_1015 - 0x100) = r0_205;
    char var_3a_1 = r12_202;
    char var_39;
    uint32_t r0_206 = var_39;
    int32_t r3_620 = r0_206 + r3_618 + key[0xcf][0];
    int32_t r3_621 = r3_620 & 0xff;
    
    if (0 - r3_620 >= 0)
        r3_621 = 0 - (0 - r3_620);
    
    void* r1_1020 = &(&format)[r3_621 + 0x140];
    char r12_203 = *(r1_1020 - 0x100);
    *(r1_1020 - 0x100) = r0_206;
    char var_39_1 = r12_203;
    char var_38;
    uint32_t r0_207 = var_38;
    int32_t r3_623 = r0_207 + r3_621 + key[0xd0][0];
    int32_t r3_624 = r3_623 & 0xff;
    
    if (0 - r3_623 >= 0)
        r3_624 = 0 - (0 - r3_623);
    
    void* r1_1025 = &(&format)[r3_624 + 0x140];
    char r12_204 = *(r1_1025 - 0x100);
    *(r1_1025 - 0x100) = r0_207;
    char var_38_1 = r12_204;
    char var_37;
    uint32_t r0_208 = var_37;
    int32_t r3_626 = r0_208 + r3_624 + key[0xd1][0];
    int32_t r3_627 = r3_626 & 0xff;
    
    if (0 - r3_626 >= 0)
        r3_627 = 0 - (0 - r3_626);
    
    void* r1_1030 = &(&format)[r3_627 + 0x140];
    char r12_205 = *(r1_1030 - 0x100);
    *(r1_1030 - 0x100) = r0_208;
    char var_37_1 = r12_205;
    char var_36;
    uint32_t r0_209 = var_36;
    int32_t r3_629 = r0_209 + r3_627 + key[0xd2][0];
    int32_t r3_630 = r3_629 & 0xff;
    
    if (0 - r3_629 >= 0)
        r3_630 = 0 - (0 - r3_629);
    
    void* r1_1035 = &(&format)[r3_630 + 0x140];
    char r12_206 = *(r1_1035 - 0x100);
    *(r1_1035 - 0x100) = r0_209;
    char var_36_1 = r12_206;
    char var_35;
    uint32_t r0_210 = var_35;
    int32_t r3_632 = r0_210 + r3_630 + key[0xd3][0];
    int32_t r3_633 = r3_632 & 0xff;
    
    if (0 - r3_632 >= 0)
        r3_633 = 0 - (0 - r3_632);
    
    void* r1_1040 = &(&format)[r3_633 + 0x140];
    char r12_207 = *(r1_1040 - 0x100);
    *(r1_1040 - 0x100) = r0_210;
    char var_35_1 = r12_207;
    char var_34;
    uint32_t r0_211 = var_34;
    int32_t r3_635 = r0_211 + r3_633 + key[0xd4][0];
    int32_t r3_636 = r3_635 & 0xff;
    
    if (0 - r3_635 >= 0)
        r3_636 = 0 - (0 - r3_635);
    
    void* r1_1045 = &(&format)[r3_636 + 0x140];
    char r12_208 = *(r1_1045 - 0x100);
    *(r1_1045 - 0x100) = r0_211;
    char var_34_1 = r12_208;
    char var_33;
    uint32_t r0_212 = var_33;
    int32_t r3_638 = r0_212 + r3_636 + key[0xd5][0];
    int32_t r3_639 = r3_638 & 0xff;
    
    if (0 - r3_638 >= 0)
        r3_639 = 0 - (0 - r3_638);
    
    void* r1_1050 = &(&format)[r3_639 + 0x140];
    char r12_209 = *(r1_1050 - 0x100);
    *(r1_1050 - 0x100) = r0_212;
    char var_33_1 = r12_209;
    char var_32;
    uint32_t r0_213 = var_32;
    int32_t r3_641 = r0_213 + r3_639 + key[0xd6][0];
    int32_t r3_642 = r3_641 & 0xff;
    
    if (0 - r3_641 >= 0)
        r3_642 = 0 - (0 - r3_641);
    
    void* r1_1055 = &(&format)[r3_642 + 0x140];
    char r12_210 = *(r1_1055 - 0x100);
    *(r1_1055 - 0x100) = r0_213;
    char var_32_1 = r12_210;
    char var_31;
    uint32_t r0_214 = var_31;
    int32_t r3_644 = r0_214 + r3_642 + key[0xd7][0];
    int32_t r3_645 = r3_644 & 0xff;
    
    if (0 - r3_644 >= 0)
        r3_645 = 0 - (0 - r3_644);
    
    void* r1_1060 = &(&format)[r3_645 + 0x140];
    char r12_211 = *(r1_1060 - 0x100);
    *(r1_1060 - 0x100) = r0_214;
    char var_31_1 = r12_211;
    char var_30;
    uint32_t r0_215 = var_30;
    int32_t r3_647 = r0_215 + r3_645 + key[0xd8][0];
    int32_t r3_648 = r3_647 & 0xff;
    
    if (0 - r3_647 >= 0)
        r3_648 = 0 - (0 - r3_647);
    
    void* r1_1065 = &(&format)[r3_648 + 0x140];
    char r12_212 = *(r1_1065 - 0x100);
    *(r1_1065 - 0x100) = r0_215;
    char var_30_1 = r12_212;
    char var_2f;
    uint32_t r0_216 = var_2f;
    int32_t r3_650 = r0_216 + r3_648 + key[0xd9][0];
    int32_t r3_651 = r3_650 & 0xff;
    
    if (0 - r3_650 >= 0)
        r3_651 = 0 - (0 - r3_650);
    
    void* r1_1070 = &(&format)[r3_651 + 0x140];
    char r12_213 = *(r1_1070 - 0x100);
    *(r1_1070 - 0x100) = r0_216;
    char var_2f_1 = r12_213;
    char var_2e;
    uint32_t r0_217 = var_2e;
    int32_t r3_653 = r0_217 + r3_651 + key[0xda][0];
    int32_t r3_654 = r3_653 & 0xff;
    
    if (0 - r3_653 >= 0)
        r3_654 = 0 - (0 - r3_653);
    
    void* r1_1075 = &(&format)[r3_654 + 0x140];
    char r12_214 = *(r1_1075 - 0x100);
    *(r1_1075 - 0x100) = r0_217;
    char var_2e_1 = r12_214;
    char var_2d;
    uint32_t r0_218 = var_2d;
    int32_t r3_656 = r0_218 + r3_654 + key[0xdb][0];
    int32_t r3_657 = r3_656 & 0xff;
    
    if (0 - r3_656 >= 0)
        r3_657 = 0 - (0 - r3_656);
    
    void* r1_1080 = &(&format)[r3_657 + 0x140];
    char r12_215 = *(r1_1080 - 0x100);
    *(r1_1080 - 0x100) = r0_218;
    char var_2d_1 = r12_215;
    char var_2c;
    uint32_t r0_219 = var_2c;
    int32_t r3_659 = r0_219 + r3_657 + key[0xdc][0];
    int32_t r3_660 = r3_659 & 0xff;
    
    if (0 - r3_659 >= 0)
        r3_660 = 0 - (0 - r3_659);
    
    void* r1_1085 = &(&format)[r3_660 + 0x140];
    char r12_216 = *(r1_1085 - 0x100);
    *(r1_1085 - 0x100) = r0_219;
    char var_2c_1 = r12_216;
    char var_2b;
    uint32_t r0_220 = var_2b;
    int32_t r3_662 = r0_220 + r3_660 + key[0xdd][0];
    int32_t r3_663 = r3_662 & 0xff;
    
    if (0 - r3_662 >= 0)
        r3_663 = 0 - (0 - r3_662);
    
    void* r1_1090 = &(&format)[r3_663 + 0x140];
    char r12_217 = *(r1_1090 - 0x100);
    *(r1_1090 - 0x100) = r0_220;
    char var_2b_1 = r12_217;
    char var_2a;
    uint32_t r0_221 = var_2a;
    int32_t r3_665 = r0_221 + r3_663 + key[0xde][0];
    int32_t r3_666 = r3_665 & 0xff;
    
    if (0 - r3_665 >= 0)
        r3_666 = 0 - (0 - r3_665);
    
    void* r1_1095 = &(&format)[r3_666 + 0x140];
    char r12_218 = *(r1_1095 - 0x100);
    *(r1_1095 - 0x100) = r0_221;
    char var_2a_1 = r12_218;
    char var_29;
    uint32_t r0_222 = var_29;
    int32_t r3_668 = r0_222 + r3_666 + key[0xdf][0];
    int32_t r3_669 = r3_668 & 0xff;
    
    if (0 - r3_668 >= 0)
        r3_669 = 0 - (0 - r3_668);
    
    void* r1_1100 = &(&format)[r3_669 + 0x140];
    char r12_219 = *(r1_1100 - 0x100);
    *(r1_1100 - 0x100) = r0_222;
    char var_29_1 = r12_219;
    char var_28;
    uint32_t r0_223 = var_28;
    int32_t r3_671 = r0_223 + r3_669 + key[0xe0][0];
    int32_t r3_672 = r3_671 & 0xff;
    
    if (0 - r3_671 >= 0)
        r3_672 = 0 - (0 - r3_671);
    
    void* r1_1105 = &(&format)[r3_672 + 0x140];
    char r12_220 = *(r1_1105 - 0x100);
    *(r1_1105 - 0x100) = r0_223;
    char var_28_1 = r12_220;
    char var_27;
    uint32_t r0_224 = var_27;
    int32_t r3_674 = r0_224 + r3_672 + key[0xe1][0];
    int32_t r3_675 = r3_674 & 0xff;
    
    if (0 - r3_674 >= 0)
        r3_675 = 0 - (0 - r3_674);
    
    void* r1_1110 = &(&format)[r3_675 + 0x140];
    char r12_221 = *(r1_1110 - 0x100);
    *(r1_1110 - 0x100) = r0_224;
    char var_27_1 = r12_221;
    char var_26;
    uint32_t r0_225 = var_26;
    int32_t r3_677 = r0_225 + r3_675 + key[0xe2][0];
    int32_t r3_678 = r3_677 & 0xff;
    
    if (0 - r3_677 >= 0)
        r3_678 = 0 - (0 - r3_677);
    
    void* r1_1115 = &(&format)[r3_678 + 0x140];
    char r12_222 = *(r1_1115 - 0x100);
    *(r1_1115 - 0x100) = r0_225;
    char var_26_1 = r12_222;
    char var_25;
    uint32_t r0_226 = var_25;
    int32_t r3_680 = r0_226 + r3_678 + key[0xe3][0];
    int32_t r3_681 = r3_680 & 0xff;
    
    if (0 - r3_680 >= 0)
        r3_681 = 0 - (0 - r3_680);
    
    void* r1_1120 = &(&format)[r3_681 + 0x140];
    char r12_223 = *(r1_1120 - 0x100);
    *(r1_1120 - 0x100) = r0_226;
    char var_25_1 = r12_223;
    char var_24;
    uint32_t r0_227 = var_24;
    int32_t r3_683 = r0_227 + r3_681 + key[0xe4][0];
    int32_t r3_684 = r3_683 & 0xff;
    
    if (0 - r3_683 >= 0)
        r3_684 = 0 - (0 - r3_683);
    
    void* r1_1125 = &(&format)[r3_684 + 0x140];
    char r12_224 = *(r1_1125 - 0x100);
    *(r1_1125 - 0x100) = r0_227;
    char var_24_1 = r12_224;
    char var_23;
    uint32_t r0_228 = var_23;
    int32_t r3_686 = r0_228 + r3_684 + key[0xe5][0];
    int32_t r3_687 = r3_686 & 0xff;
    
    if (0 - r3_686 >= 0)
        r3_687 = 0 - (0 - r3_686);
    
    void* r1_1130 = &(&format)[r3_687 + 0x140];
    char r12_225 = *(r1_1130 - 0x100);
    *(r1_1130 - 0x100) = r0_228;
    char var_23_1 = r12_225;
    char var_22;
    uint32_t r0_229 = var_22;
    int32_t r3_689 = r0_229 + r3_687 + key[0xe6][0];
    int32_t r3_690 = r3_689 & 0xff;
    
    if (0 - r3_689 >= 0)
        r3_690 = 0 - (0 - r3_689);
    
    void* r1_1135 = &(&format)[r3_690 + 0x140];
    char r12_226 = *(r1_1135 - 0x100);
    *(r1_1135 - 0x100) = r0_229;
    char var_22_1 = r12_226;
    char var_21;
    uint32_t r0_230 = var_21;
    int32_t r3_692 = r0_230 + r3_690 + key[0xe7][0];
    int32_t r3_693 = r3_692 & 0xff;
    
    if (0 - r3_692 >= 0)
        r3_693 = 0 - (0 - r3_692);
    
    void* r1_1140 = &(&format)[r3_693 + 0x140];
    char r12_227 = *(r1_1140 - 0x100);
    *(r1_1140 - 0x100) = r0_230;
    char var_21_1 = r12_227;
    char var_20;
    uint32_t r0_231 = var_20;
    int32_t r3_695 = r0_231 + r3_693 + key[0xe8][0];
    int32_t r3_696 = r3_695 & 0xff;
    
    if (0 - r3_695 >= 0)
        r3_696 = 0 - (0 - r3_695);
    
    void* r1_1145 = &(&format)[r3_696 + 0x140];
    char r12_228 = *(r1_1145 - 0x100);
    *(r1_1145 - 0x100) = r0_231;
    char var_20_1 = r12_228;
    char var_1f;
    uint32_t r0_232 = var_1f;
    int32_t r3_698 = r0_232 + r3_696 + key[0xe9][0];
    int32_t r3_699 = r3_698 & 0xff;
    
    if (0 - r3_698 >= 0)
        r3_699 = 0 - (0 - r3_698);
    
    void* r1_1150 = &(&format)[r3_699 + 0x140];
    char r12_229 = *(r1_1150 - 0x100);
    *(r1_1150 - 0x100) = r0_232;
    char var_1f_1 = r12_229;
    char var_1e;
    uint32_t r0_233 = var_1e;
    int32_t r3_701 = r0_233 + r3_699 + key[0xea][0];
    int32_t r3_702 = r3_701 & 0xff;
    
    if (0 - r3_701 >= 0)
        r3_702 = 0 - (0 - r3_701);
    
    void* r1_1155 = &(&format)[r3_702 + 0x140];
    char r12_230 = *(r1_1155 - 0x100);
    *(r1_1155 - 0x100) = r0_233;
    char var_1e_1 = r12_230;
    char var_1d;
    uint32_t r0_234 = var_1d;
    int32_t r3_704 = r0_234 + r3_702 + key[0xeb][0];
    int32_t r3_705 = r3_704 & 0xff;
    
    if (0 - r3_704 >= 0)
        r3_705 = 0 - (0 - r3_704);
    
    void* r1_1160 = &(&format)[r3_705 + 0x140];
    char r12_231 = *(r1_1160 - 0x100);
    *(r1_1160 - 0x100) = r0_234;
    char var_1d_1 = r12_231;
    char var_1c;
    uint32_t r0_235 = var_1c;
    int32_t r3_707 = r0_235 + r3_705 + key[0xec][0];
    int32_t r3_708 = r3_707 & 0xff;
    
    if (0 - r3_707 >= 0)
        r3_708 = 0 - (0 - r3_707);
    
    void* r1_1165 = &(&format)[r3_708 + 0x140];
    char r12_232 = *(r1_1165 - 0x100);
    *(r1_1165 - 0x100) = r0_235;
    char var_1c_1 = r12_232;
    char var_1b;
    uint32_t r0_236 = var_1b;
    int32_t r3_710 = r0_236 + r3_708 + key[0xed][0];
    int32_t r3_711 = r3_710 & 0xff;
    
    if (0 - r3_710 >= 0)
        r3_711 = 0 - (0 - r3_710);
    
    void* r1_1170 = &(&format)[r3_711 + 0x140];
    char r12_233 = *(r1_1170 - 0x100);
    *(r1_1170 - 0x100) = r0_236;
    char var_1b_1 = r12_233;
    char var_1a;
    uint32_t r0_237 = var_1a;
    int32_t r3_713 = r0_237 + r3_711 + key[0xee][0];
    int32_t r3_714 = r3_713 & 0xff;
    
    if (0 - r3_713 >= 0)
        r3_714 = 0 - (0 - r3_713);
    
    void* r1_1175 = &(&format)[r3_714 + 0x140];
    char r12_234 = *(r1_1175 - 0x100);
    *(r1_1175 - 0x100) = r0_237;
    char var_1a_1 = r12_234;
    char var_19;
    uint32_t r0_238 = var_19;
    int32_t r3_716 = r0_238 + r3_714 + key[0xef][0];
    int32_t r3_717 = r3_716 & 0xff;
    
    if (0 - r3_716 >= 0)
        r3_717 = 0 - (0 - r3_716);
    
    void* r1_1180 = &(&format)[r3_717 + 0x140];
    char r12_235 = *(r1_1180 - 0x100);
    *(r1_1180 - 0x100) = r0_238;
    char var_19_1 = r12_235;
    char var_18;
    uint32_t r0_239 = var_18;
    int32_t r3_719 = r0_239 + r3_717 + key[0xf0][0];
    int32_t r3_720 = r3_719 & 0xff;
    
    if (0 - r3_719 >= 0)
        r3_720 = 0 - (0 - r3_719);
    
    void* r1_1185 = &(&format)[r3_720 + 0x140];
    char r12_236 = *(r1_1185 - 0x100);
    *(r1_1185 - 0x100) = r0_239;
    char var_18_1 = r12_236;
    char var_17;
    uint32_t r0_240 = var_17;
    int32_t r3_722 = r0_240 + r3_720 + key[0xf1][0];
    int32_t r3_723 = r3_722 & 0xff;
    
    if (0 - r3_722 >= 0)
        r3_723 = 0 - (0 - r3_722);
    
    void* r1_1190 = &(&format)[r3_723 + 0x140];
    char r12_237 = *(r1_1190 - 0x100);
    *(r1_1190 - 0x100) = r0_240;
    char var_17_1 = r12_237;
    char var_16;
    uint32_t r0_241 = var_16;
    int32_t r3_725 = r0_241 + r3_723 + key[0xf2][0];
    int32_t r3_726 = r3_725 & 0xff;
    
    if (0 - r3_725 >= 0)
        r3_726 = 0 - (0 - r3_725);
    
    void* r1_1195 = &(&format)[r3_726 + 0x140];
    char r12_238 = *(r1_1195 - 0x100);
    *(r1_1195 - 0x100) = r0_241;
    char var_16_1 = r12_238;
    char var_15;
    uint32_t r0_242 = var_15;
    int32_t r3_728 = r0_242 + r3_726 + key[0xf3][0];
    int32_t r3_729 = r3_728 & 0xff;
    
    if (0 - r3_728 >= 0)
        r3_729 = 0 - (0 - r3_728);
    
    void* r1_1200 = &(&format)[r3_729 + 0x140];
    char r12_239 = *(r1_1200 - 0x100);
    *(r1_1200 - 0x100) = r0_242;
    char var_15_1 = r12_239;
    char var_14;
    uint32_t r0_243 = var_14;
    int32_t r3_731 = r0_243 + r3_729 + key[0xf4][0];
    int32_t r3_732 = r3_731 & 0xff;
    
    if (0 - r3_731 >= 0)
        r3_732 = 0 - (0 - r3_731);
    
    void* r1_1205 = &(&format)[r3_732 + 0x140];
    char r12_240 = *(r1_1205 - 0x100);
    *(r1_1205 - 0x100) = r0_243;
    char var_14_1 = r12_240;
    char var_13;
    uint32_t r0_244 = var_13;
    int32_t r3_734 = r0_244 + r3_732 + key[0xf5][0];
    int32_t r3_735 = r3_734 & 0xff;
    
    if (0 - r3_734 >= 0)
        r3_735 = 0 - (0 - r3_734);
    
    void* r1_1210 = &(&format)[r3_735 + 0x140];
    char r12_241 = *(r1_1210 - 0x100);
    *(r1_1210 - 0x100) = r0_244;
    char var_13_1 = r12_241;
    char var_12;
    uint32_t r0_245 = var_12;
    int32_t r3_737 = r0_245 + r3_735 + key[0xf6][0];
    int32_t r3_738 = r3_737 & 0xff;
    
    if (0 - r3_737 >= 0)
        r3_738 = 0 - (0 - r3_737);
    
    void* r1_1215 = &(&format)[r3_738 + 0x140];
    char r12_242 = *(r1_1215 - 0x100);
    *(r1_1215 - 0x100) = r0_245;
    char var_12_1 = r12_242;
    char var_11;
    uint32_t r0_246 = var_11;
    int32_t r3_740 = r0_246 + r3_738 + key[0xf7][0];
    int32_t r3_741 = r3_740 & 0xff;
    
    if (0 - r3_740 >= 0)
        r3_741 = 0 - (0 - r3_740);
    
    void* r1_1220 = &(&format)[r3_741 + 0x140];
    char r12_243 = *(r1_1220 - 0x100);
    *(r1_1220 - 0x100) = r0_246;
    char var_11_1 = r12_243;
    char var_10;
    uint32_t r0_247 = var_10;
    int32_t r3_743 = r0_247 + r3_741 + key[0xf8][0];
    int32_t r3_744 = r3_743 & 0xff;
    
    if (0 - r3_743 >= 0)
        r3_744 = 0 - (0 - r3_743);
    
    void* r1_1225 = &(&format)[r3_744 + 0x140];
    char r12_244 = *(r1_1225 - 0x100);
    *(r1_1225 - 0x100) = r0_247;
    char var_10_1 = r12_244;
    char var_f;
    uint32_t r0_248 = var_f;
    int32_t r3_746 = r0_248 + r3_744 + key[0xf9][0];
    int32_t r3_747 = r3_746 & 0xff;
    
    if (0 - r3_746 >= 0)
        r3_747 = 0 - (0 - r3_746);
    
    void* r1_1230 = &(&format)[r3_747 + 0x140];
    char r12_245 = *(r1_1230 - 0x100);
    *(r1_1230 - 0x100) = r0_248;
    char var_f_1 = r12_245;
    char var_e;
    uint32_t r0_249 = var_e;
    int32_t r3_749 = r0_249 + r3_747 + key[0xfa][0];
    int32_t r3_750 = r3_749 & 0xff;
    
    if (0 - r3_749 >= 0)
        r3_750 = 0 - (0 - r3_749);
    
    void* r1_1235 = &(&format)[r3_750 + 0x140];
    char r12_246 = *(r1_1235 - 0x100);
    *(r1_1235 - 0x100) = r0_249;
    char var_e_1 = r12_246;
    char var_d;
    uint32_t r0_250 = var_d;
    int32_t r3_752 = r0_250 + r3_750 + key[0xfb][0];
    int32_t r3_753 = r3_752 & 0xff;
    
    if (0 - r3_752 >= 0)
        r3_753 = 0 - (0 - r3_752);
    
    void* r1_1240 = &(&format)[r3_753 + 0x140];
    char r12_247 = *(r1_1240 - 0x100);
    *(r1_1240 - 0x100) = r0_250;
    char var_d_1 = r12_247;
    char var_c;
    uint32_t r0_251 = var_c;
    int32_t r3_755 = r0_251 + r3_753 + key[0xfc][0];
    int32_t r3_756 = r3_755 & 0xff;
    
    if (0 - r3_755 >= 0)
        r3_756 = 0 - (0 - r3_755);
    
    void* r1_1245 = &(&format)[r3_756 + 0x140];
    char r12_248 = *(r1_1245 - 0x100);
    *(r1_1245 - 0x100) = r0_251;
    char var_c_1 = r12_248;
    char var_b;
    uint32_t r0_252 = var_b;
    int32_t r3_758 = r0_252 + r3_756 + key[0xfd][0];
    int32_t r3_759 = r3_758 & 0xff;
    
    if (0 - r3_758 >= 0)
        r3_759 = 0 - (0 - r3_758);
    
    void* r1_1250 = &(&format)[r3_759 + 0x140];
    char r12_249 = *(r1_1250 - 0x100);
    *(r1_1250 - 0x100) = r0_252;
    char var_b_1 = r12_249;
    char var_a;
    uint32_t r0_253 = var_a;
    int32_t r3_761 = r0_253 + r3_759 + key[0xfe][0];
    int32_t r3_762 = r3_761 & 0xff;
    
    if (0 - r3_761 >= 0)
        r3_762 = 0 - (0 - r3_761);
    
    void* r1_1255 = &(&format)[r3_762 + 0x140];
    char r12_250 = *(r1_1255 - 0x100);
    *(r1_1255 - 0x100) = r0_253;
    char var_a_1 = r12_250;
    uint32_t r0_254 = var_9;
    int32_t r3_764 = r0_254 + r3_762 + key[0xff][0];
    int32_t r3_765 = r3_764 & 0xff;
    
    if (0 - r3_764 >= 0)
        r3_765 = 0 - (0 - r3_764);
    
    void* r3_767 = &(&format)[r3_765 + 0x140];
    char r1_1259 = *(r3_767 - 0x100);
    *(r3_767 - 0x100) = r0_254;
    char var_9_1 = r1_1259;
    uint32_t r3_768 = r12_1;
    void* r0_255 = &(&format)[r3_768 + 0x140];
    char r1_1261 = *(r0_255 - 0x100);
    *(r0_255 - 0x100) = r3_768;
    char var_107_2 = r1_1261;
    void var_8;
    char var_147 = *(&var_8 + r1_1261 + *(r0_255 - 0x100) - 0x100) ^ data_26131;
    uint32_t r12_251 = r12_2;
    uint32_t r3_769 = r12_251 + r3_768;
    int32_t r3_770 = r3_769 & 0xff;
    
    if (0 - r3_769 >= 0)
        r3_770 = 0 - (0 - r3_769);
    
    void* r0_258 = &(&format)[r3_770 + 0x140];
    char r1_1269 = *(r0_258 - 0x100);
    *(r0_258 - 0x100) = r12_251;
    char var_106_2 = r1_1269;
    char var_146 = *(&var_8 + r1_1269 + *(r0_258 - 0x100) - 0x100) ^ data_26132;
    uint32_t r12_252 = r12_3;
    int32_t r3_771 = r12_252 + r3_770;
    int32_t r3_772 = r3_771 & 0xff;
    
    if (0 - r3_771 >= 0)
        r3_772 = 0 - (0 - r3_771);
    
    void* r0_261 = &(&format)[r3_772 + 0x140];
    char r1_1277 = *(r0_261 - 0x100);
    *(r0_261 - 0x100) = r12_252;
    char var_105_2 = r1_1277;
    char var_145 = *(&var_8 + r1_1277 + *(r0_261 - 0x100) - 0x100) ^ data_26133;
    uint32_t r12_253 = r12_4;
    int32_t r3_773 = r12_253 + r3_772;
    int32_t r3_774 = r3_773 & 0xff;
    
    if (0 - r3_773 >= 0)
        r3_774 = 0 - (0 - r3_773);
    
    void* r0_264 = &(&format)[r3_774 + 0x140];
    char r1_1285 = *(r0_264 - 0x100);
    *(r0_264 - 0x100) = r12_253;
    char var_104_2 = r1_1285;
    char var_144 = *(&var_8 + r1_1285 + *(r0_264 - 0x100) - 0x100) ^ data_26134;
    uint32_t r12_254 = r12_5;
    int32_t r3_775 = r12_254 + r3_774;
    int32_t r3_776 = r3_775 & 0xff;
    
    if (0 - r3_775 >= 0)
        r3_776 = 0 - (0 - r3_775);
    
    void* r0_267 = &(&format)[r3_776 + 0x140];
    char r1_1293 = *(r0_267 - 0x100);
    *(r0_267 - 0x100) = r12_254;
    char var_103_2 = r1_1293;
    char var_143 = *(&var_8 + r1_1293 + *(r0_267 - 0x100) - 0x100) ^ data_26135;
    uint32_t r12_255 = r12_6;
    int32_t r3_777 = r12_255 + r3_776;
    int32_t r3_778 = r3_777 & 0xff;
    
    if (0 - r3_777 >= 0)
        r3_778 = 0 - (0 - r3_777);
    
    void* r0_270 = &(&format)[r3_778 + 0x140];
    char r1_1301 = *(r0_270 - 0x100);
    *(r0_270 - 0x100) = r12_255;
    char var_102_2 = r1_1301;
    char var_142 = data_26136 ^ *(&var_8 + r1_1301 + *(r0_270 - 0x100) - 0x100);
    uint32_t r0_272 = r12_7;
    int32_t r3_779 = r0_272 + r3_778;
    int32_t r3_780 = r3_779 & 0xff;
    
    if (0 - r3_779 >= 0)
        r3_780 = 0 - (0 - r3_779);
    
    void* r1_1305 = &(&format)[r3_780 + 0x140];
    char r2_25 = *(r1_1305 - 0x100);
    *(r1_1305 - 0x100) = r0_272;
    char var_101_2 = r2_25;
    char var_141 = *(&var_8 + r2_25 + *(r1_1305 - 0x100) - 0x100) ^ data_26137;
    uint32_t r12_256 = r12_8;
    int32_t r3_781 = r12_256 + r3_780;
    int32_t r3_782 = r3_781 & 0xff;
    
    if (0 - r3_781 >= 0)
        r3_782 = 0 - (0 - r3_781);
    
    void* r0_274 = &(&format)[r3_782 + 0x140];
    char r1_1313 = *(r0_274 - 0x100);
    *(r0_274 - 0x100) = r12_256;
    char var_100_2 = r1_1313;
    char var_140 = *(&var_8 + r1_1313 + *(r0_274 - 0x100) - 0x100) ^ data_26138;
    uint32_t r12_257 = r12_9;
    int32_t r3_783 = r12_257 + r3_782;
    int32_t r3_784 = r3_783 & 0xff;
    
    if (0 - r3_783 >= 0)
        r3_784 = 0 - (0 - r3_783);
    
    void* r0_277 = &(&format)[r3_784 + 0x140];
    char r1_1321 = *(r0_277 - 0x100);
    *(r0_277 - 0x100) = r12_257;
    char var_ff_2 = r1_1321;
    char var_13f = *(&var_8 + r1_1321 + *(r0_277 - 0x100) - 0x100) ^ data_26139;
    uint32_t r12_258 = r12_10;
    int32_t r3_785 = r12_258 + r3_784;
    int32_t r3_786 = r3_785 & 0xff;
    
    if (0 - r3_785 >= 0)
        r3_786 = 0 - (0 - r3_785);
    
    void* r0_280 = &(&format)[r3_786 + 0x140];
    char r1_1329 = *(r0_280 - 0x100);
    *(r0_280 - 0x100) = r12_258;
    char var_fe_2 = r1_1329;
    char var_13e = *(&var_8 + r1_1329 + *(r0_280 - 0x100) - 0x100) ^ data_2613a;
    uint32_t r12_259 = r12_11;
    int32_t r3_787 = r12_259 + r3_786;
    int32_t r3_788 = r3_787 & 0xff;
    
    if (0 - r3_787 >= 0)
        r3_788 = 0 - (0 - r3_787);
    
    void* r0_283 = &(&format)[r3_788 + 0x140];
    char r1_1337 = *(r0_283 - 0x100);
    *(r0_283 - 0x100) = r12_259;
    char var_fd_2 = r1_1337;
    char var_13d = *(&var_8 + r1_1337 + *(r0_283 - 0x100) - 0x100) ^ data_2613b;
    uint32_t r12_260 = r12_12;
    int32_t r3_789 = r12_260 + r3_788;
    int32_t r3_790 = r3_789 & 0xff;
    
    if (0 - r3_789 >= 0)
        r3_790 = 0 - (0 - r3_789);
    
    void* r0_286 = &(&format)[r3_790 + 0x140];
    char r1_1345 = *(r0_286 - 0x100);
    *(r0_286 - 0x100) = r12_260;
    char var_fc_2 = r1_1345;
    char var_13c = *(&var_8 + r1_1345 + *(r0_286 - 0x100) - 0x100) ^ data_2613c;
    uint32_t r12_261 = r12_13;
    int32_t r3_791 = r12_261 + r3_790;
    int32_t r3_792 = r3_791 & 0xff;
    
    if (0 - r3_791 >= 0)
        r3_792 = 0 - (0 - r3_791);
    
    void* r0_289 = &(&format)[r3_792 + 0x140];
    char r1_1353 = *(r0_289 - 0x100);
    *(r0_289 - 0x100) = r12_261;
    char var_fb_2 = r1_1353;
    char var_13b = *(&var_8 + r1_1353 + *(r0_289 - 0x100) - 0x100) ^ data_2613d;
    uint32_t r12_262 = r0_13;
    int32_t r3_793 = r12_262 + r3_792;
    int32_t r3_794 = r3_793 & 0xff;
    
    if (0 - r3_793 >= 0)
        r3_794 = 0 - (0 - r3_793);
    
    void* r0_292 = &(&format)[r3_794 + 0x140];
    char r1_1361 = *(r0_292 - 0x100);
    *(r0_292 - 0x100) = r12_262;
    char var_fa_2 = r1_1361;
    char var_13a = *(&var_8 + r1_1361 + *(r0_292 - 0x100) - 0x100) ^ data_2613e;
    uint32_t r12_263 = r12_14;
    int32_t r3_795 = r12_263 + r3_794;
    int32_t r3_796 = r3_795 & 0xff;
    
    if (0 - r3_795 >= 0)
        r3_796 = 0 - (0 - r3_795);
    
    void* r0_295 = &(&format)[r3_796 + 0x140];
    char r1_1369 = *(r0_295 - 0x100);
    *(r0_295 - 0x100) = r12_263;
    char var_f9_2 = r1_1369;
    char var_139 = *(&var_8 + r1_1369 + *(r0_295 - 0x100) - 0x100) ^ data_2613f;
    uint32_t r12_264 = r12_15;
    int32_t r3_797 = r12_264 + r3_796;
    int32_t r3_798 = r3_797 & 0xff;
    
    if (0 - r3_797 >= 0)
        r3_798 = 0 - (0 - r3_797);
    
    void* r0_298 = &(&format)[r3_798 + 0x140];
    char r1_1377 = *(r0_298 - 0x100);
    *(r0_298 - 0x100) = r12_264;
    char var_f8_2 = r1_1377;
    char var_138 = *(&var_8 + r1_1377 + *(r0_298 - 0x100) - 0x100) ^ data_26140;
    uint32_t r12_265 = r12_16;
    int32_t r3_799 = r12_265 + r3_798;
    int32_t r3_800 = r3_799 & 0xff;
    
    if (0 - r3_799 >= 0)
        r3_800 = 0 - (0 - r3_799);
    
    void* r0_301 = &(&format)[r3_800 + 0x140];
    char r1_1385 = *(r0_301 - 0x100);
    *(r0_301 - 0x100) = r12_265;
    char var_f7_2 = r1_1385;
    char var_137 = *(&var_8 + r1_1385 + *(r0_301 - 0x100) - 0x100) ^ data_26141;
    uint32_t r12_266 = r12_17;
    int32_t r3_801 = r12_266 + r3_800;
    int32_t r3_802 = r3_801 & 0xff;
    
    if (0 - r3_801 >= 0)
        r3_802 = 0 - (0 - r3_801);
    
    void* r0_304 = &(&format)[r3_802 + 0x140];
    char r1_1393 = *(r0_304 - 0x100);
    *(r0_304 - 0x100) = r12_266;
    char var_f6_2 = r1_1393;
    char var_136 = *(&var_8 + r1_1393 + *(r0_304 - 0x100) - 0x100) ^ data_26142;
    uint32_t r12_267 = r12_18;
    int32_t r3_803 = r12_267 + r3_802;
    int32_t r3_804 = r3_803 & 0xff;
    
    if (0 - r3_803 >= 0)
        r3_804 = 0 - (0 - r3_803);
    
    void* r0_307 = &(&format)[r3_804 + 0x140];
    char r1_1401 = *(r0_307 - 0x100);
    *(r0_307 - 0x100) = r12_267;
    char var_f5_2 = r1_1401;
    char var_135 = *(&var_8 + r1_1401 + *(r0_307 - 0x100) - 0x100) ^ data_26143;
    uint32_t r12_268 = r12_19;
    int32_t r3_805 = r12_268 + r3_804;
    int32_t r3_806 = r3_805 & 0xff;
    
    if (0 - r3_805 >= 0)
        r3_806 = 0 - (0 - r3_805);
    
    void* r0_310 = &(&format)[r3_806 + 0x140];
    char r1_1409 = *(r0_310 - 0x100);
    *(r0_310 - 0x100) = r12_268;
    char var_f4_2 = r1_1409;
    char var_134 = *(&var_8 + r1_1409 + *(r0_310 - 0x100) - 0x100) ^ data_26144;
    uint32_t r12_269 = r12_20;
    int32_t r3_807 = r12_269 + r3_806;
    int32_t r3_808 = r3_807 & 0xff;
    
    if (0 - r3_807 >= 0)
        r3_808 = 0 - (0 - r3_807);
    
    void* r0_313 = &(&format)[r3_808 + 0x140];
    char r1_1417 = *(r0_313 - 0x100);
    *(r0_313 - 0x100) = r12_269;
    char var_f3_2 = r1_1417;
    char var_133 = *(&var_8 + r1_1417 + *(r0_313 - 0x100) - 0x100) ^ data_26145;
    uint32_t r12_270 = r12_21;
    int32_t r3_809 = r12_270 + r3_808;
    int32_t r3_810 = r3_809 & 0xff;
    
    if (0 - r3_809 >= 0)
        r3_810 = 0 - (0 - r3_809);
    
    void* r0_316 = &(&format)[r3_810 + 0x140];
    char r1_1425 = *(r0_316 - 0x100);
    *(r0_316 - 0x100) = r12_270;
    char var_f2_2 = r1_1425;
    char var_132 = *(&var_8 + r1_1425 + *(r0_316 - 0x100) - 0x100) ^ data_26146;
    uint32_t r12_271 = r12_22;
    int32_t r3_811 = r12_271 + r3_810;
    int32_t r3_812 = r3_811 & 0xff;
    
    if (0 - r3_811 >= 0)
        r3_812 = 0 - (0 - r3_811);
    
    void* r0_319 = &(&format)[r3_812 + 0x140];
    char r1_1433 = *(r0_319 - 0x100);
    *(r0_319 - 0x100) = r12_271;
    char var_f1_2 = r1_1433;
    char var_131 = *(&var_8 + r1_1433 + *(r0_319 - 0x100) - 0x100) ^ data_26147;
    uint32_t r12_272 = r12_23;
    int32_t r3_813 = r12_272 + r3_812;
    int32_t r3_814 = r3_813 & 0xff;
    
    if (0 - r3_813 >= 0)
        r3_814 = 0 - (0 - r3_813);
    
    void* r0_322 = &(&format)[r3_814 + 0x140];
    char r1_1441 = *(r0_322 - 0x100);
    *(r0_322 - 0x100) = r12_272;
    char var_f0_2 = r1_1441;
    char var_130 = *(&var_8 + r1_1441 + *(r0_322 - 0x100) - 0x100) ^ data_26148;
    uint32_t r12_273 = r12_24;
    int32_t r3_815 = r12_273 + r3_814;
    int32_t r3_816 = r3_815 & 0xff;
    
    if (0 - r3_815 >= 0)
        r3_816 = 0 - (0 - r3_815);
    
    void* r0_325 = &(&format)[r3_816 + 0x140];
    char r1_1449 = *(r0_325 - 0x100);
    *(r0_325 - 0x100) = r12_273;
    char var_ef_2 = r1_1449;
    char var_12f = *(&var_8 + r1_1449 + *(r0_325 - 0x100) - 0x100) ^ data_26149;
    uint32_t r12_274 = r12_25;
    int32_t r3_817 = r12_274 + r3_816;
    int32_t r3_818 = r3_817 & 0xff;
    
    if (0 - r3_817 >= 0)
        r3_818 = 0 - (0 - r3_817);
    
    void* r0_328 = &(&format)[r3_818 + 0x140];
    char r1_1457 = *(r0_328 - 0x100);
    *(r0_328 - 0x100) = r12_274;
    char var_ee_2 = r1_1457;
    char var_12e = *(&var_8 + r1_1457 + *(r0_328 - 0x100) - 0x100) ^ data_2614a;
    uint32_t r12_275 = r12_26;
    int32_t r3_819 = r12_275 + r3_818;
    int32_t r3_820 = r3_819 & 0xff;
    
    if (0 - r3_819 >= 0)
        r3_820 = 0 - (0 - r3_819);
    
    void* r0_331 = &(&format)[r3_820 + 0x140];
    char r1_1465 = *(r0_331 - 0x100);
    *(r0_331 - 0x100) = r12_275;
    char var_ed_2 = r1_1465;
    char var_12d = *(&var_8 + r1_1465 + *(r0_331 - 0x100) - 0x100) ^ data_2614b;
    uint32_t r12_276 = r12_27;
    int32_t r3_821 = r12_276 + r3_820;
    int32_t r3_822 = r3_821 & 0xff;
    
    if (0 - r3_821 >= 0)
        r3_822 = 0 - (0 - r3_821);
    
    void* r0_334 = &(&format)[r3_822 + 0x140];
    char r1_1473 = *(r0_334 - 0x100);
    *(r0_334 - 0x100) = r12_276;
    char var_ec_2 = r1_1473;
    char var_12c = *(&var_8 + r1_1473 + *(r0_334 - 0x100) - 0x100) ^ data_2614c;
    uint32_t r12_277 = r12_28;
    int32_t r3_823 = r12_277 + r3_822;
    int32_t r3_824 = r3_823 & 0xff;
    
    if (0 - r3_823 >= 0)
        r3_824 = 0 - (0 - r3_823);
    
    void* r0_337 = &(&format)[r3_824 + 0x140];
    char r1_1481 = *(r0_337 - 0x100);
    *(r0_337 - 0x100) = r12_277;
    char var_eb_2 = r1_1481;
    char var_12b = *(&var_8 + r1_1481 + *(r0_337 - 0x100) - 0x100) ^ data_2614d;
    uint32_t r12_278 = r12_29;
    int32_t r3_825 = r12_278 + r3_824;
    int32_t r3_826 = r3_825 & 0xff;
    
    if (0 - r3_825 >= 0)
        r3_826 = 0 - (0 - r3_825);
    
    void* r0_340 = &(&format)[r3_826 + 0x140];
    char r1_1489 = *(r0_340 - 0x100);
    *(r0_340 - 0x100) = r12_278;
    char var_ea_2 = r1_1489;
    char var_12a = *(&var_8 + r1_1489 + *(r0_340 - 0x100) - 0x100) ^ data_2614e;
    uint32_t r12_279 = r12_30;
    int32_t r3_827 = r12_279 + r3_826;
    int32_t r3_828 = r3_827 & 0xff;
    
    if (0 - r3_827 >= 0)
        r3_828 = 0 - (0 - r3_827);
    
    void* r0_343 = &(&format)[r3_828 + 0x140];
    char r1_1497 = *(r0_343 - 0x100);
    *(r0_343 - 0x100) = r12_279;
    char var_e9_2 = r1_1497;
    char var_129 = *(&var_8 + r1_1497 + *(r0_343 - 0x100) - 0x100) ^ data_2614f;
    uint32_t r12_280 = r12_31;
    int32_t r3_829 = r12_280 + r3_828;
    int32_t r3_830 = r3_829 & 0xff;
    
    if (0 - r3_829 >= 0)
        r3_830 = 0 - (0 - r3_829);
    
    void* r0_346 = &(&format)[r3_830 + 0x140];
    char r1_1505 = *(r0_346 - 0x100);
    *(r0_346 - 0x100) = r12_280;
    char var_e8_2 = r1_1505;
    char var_128 = *(&var_8 + r1_1505 + *(r0_346 - 0x100) - 0x100) ^ data_26150;
    uint32_t r12_281 = r12_32;
    int32_t r3_831 = r12_281 + r3_830;
    int32_t r3_832 = r3_831 & 0xff;
    
    if (0 - r3_831 >= 0)
        r3_832 = 0 - (0 - r3_831);
    
    void* r0_349 = &(&format)[r3_832 + 0x140];
    char r1_1513 = *(r0_349 - 0x100);
    *(r0_349 - 0x100) = r12_281;
    char var_e7_2 = r1_1513;
    char var_127 = *(&var_8 + r1_1513 + *(r0_349 - 0x100) - 0x100) ^ data_26151;
    uint32_t r12_282 = r12_33;
    int32_t r3_833 = r12_282 + r3_832;
    int32_t r3_834 = r3_833 & 0xff;
    
    if (0 - r3_833 >= 0)
        r3_834 = 0 - (0 - r3_833);
    
    void* r0_352 = &(&format)[r3_834 + 0x140];
    char r1_1521 = *(r0_352 - 0x100);
    *(r0_352 - 0x100) = r12_282;
    char var_e6_2 = r1_1521;
    char var_126 = *(&var_8 + r1_1521 + *(r0_352 - 0x100) - 0x100) ^ data_26152;
    uint32_t r12_283 = r12_34;
    int32_t r3_835 = r12_283 + r3_834;
    int32_t r3_836 = r3_835 & 0xff;
    
    if (0 - r3_835 >= 0)
        r3_836 = 0 - (0 - r3_835);
    
    void* r0_355 = &(&format)[r3_836 + 0x140];
    char r1_1529 = *(r0_355 - 0x100);
    *(r0_355 - 0x100) = r12_283;
    char var_e5_2 = r1_1529;
    char var_125 = *(&var_8 + r1_1529 + *(r0_355 - 0x100) - 0x100) ^ data_26153;
    uint32_t r12_284 = r12_35;
    int32_t r3_837 = r12_284 + r3_836;
    int32_t r3_838 = r3_837 & 0xff;
    
    if (0 - r3_837 >= 0)
        r3_838 = 0 - (0 - r3_837);
    
    void* r0_358 = &(&format)[r3_838 + 0x140];
    char r1_1537 = *(r0_358 - 0x100);
    *(r0_358 - 0x100) = r12_284;
    char var_e4_2 = r1_1537;
    char var_124 = *(&var_8 + r1_1537 + *(r0_358 - 0x100) - 0x100) ^ data_26154;
    uint32_t r12_285 = r12_36;
    int32_t r3_839 = r12_285 + r3_838;
    int32_t r3_840 = r3_839 & 0xff;
    
    if (0 - r3_839 >= 0)
        r3_840 = 0 - (0 - r3_839);
    
    void* r0_361 = &(&format)[r3_840 + 0x140];
    char r1_1545 = *(r0_361 - 0x100);
    *(r0_361 - 0x100) = r12_285;
    char var_e3_2 = r1_1545;
    char var_123 = *(&var_8 + r1_1545 + *(r0_361 - 0x100) - 0x100) ^ data_26155;
    uint32_t r12_286 = r12_37;
    int32_t r3_841 = r12_286 + r3_840;
    int32_t r3_842 = r3_841 & 0xff;
    
    if (0 - r3_841 >= 0)
        r3_842 = 0 - (0 - r3_841);
    
    void* r0_364 = &(&format)[r3_842 + 0x140];
    char r1_1553 = *(r0_364 - 0x100);
    *(r0_364 - 0x100) = r12_286;
    char var_e2_2 = r1_1553;
    char var_122 = *(&var_8 + r1_1553 + *(r0_364 - 0x100) - 0x100) ^ data_26156;
    uint32_t r12_287 = r12_38;
    int32_t r3_843 = r12_287 + r3_842;
    int32_t r3_844 = r3_843 & 0xff;
    
    if (0 - r3_843 >= 0)
        r3_844 = 0 - (0 - r3_843);
    
    void* r0_367 = &(&format)[r3_844 + 0x140];
    char r1_1561 = *(r0_367 - 0x100);
    *(r0_367 - 0x100) = r12_287;
    char var_e1_2 = r1_1561;
    char var_121 = *(&var_8 + r1_1561 + *(r0_367 - 0x100) - 0x100) ^ data_26157;
    uint32_t r12_288 = r12_39;
    int32_t r3_845 = r12_288 + r3_844;
    int32_t r3_846 = r3_845 & 0xff;
    
    if (0 - r3_845 >= 0)
        r3_846 = 0 - (0 - r3_845);
    
    void* r0_370 = &(&format)[r3_846 + 0x140];
    char r1_1569 = *(r0_370 - 0x100);
    *(r0_370 - 0x100) = r12_288;
    char var_e0_2 = r1_1569;
    char var_120 = *(&var_8 + r1_1569 + *(r0_370 - 0x100) - 0x100) ^ data_26158;
    uint32_t r12_289 = r12_40;
    int32_t r3_847 = r12_289 + r3_846;
    int32_t r3_848 = r3_847 & 0xff;
    
    if (0 - r3_847 >= 0)
        r3_848 = 0 - (0 - r3_847);
    
    void* r0_373 = &(&format)[r3_848 + 0x140];
    char r1_1577 = *(r0_373 - 0x100);
    *(r0_373 - 0x100) = r12_289;
    char var_df_2 = r1_1577;
    char var_11f = *(&var_8 + r1_1577 + *(r0_373 - 0x100) - 0x100) ^ data_26159;
    uint32_t r12_290 = r12_41;
    int32_t r3_849 = r12_290 + r3_848;
    int32_t r3_850 = r3_849 & 0xff;
    
    if (0 - r3_849 >= 0)
        r3_850 = 0 - (0 - r3_849);
    
    void* r0_376 = &(&format)[r3_850 + 0x140];
    char r1_1585 = *(r0_376 - 0x100);
    *(r0_376 - 0x100) = r12_290;
    char var_de_2 = r1_1585;
    char var_11e = *(&var_8 + r1_1585 + *(r0_376 - 0x100) - 0x100) ^ data_2615a;
    uint32_t r12_291 = r12_42;
    int32_t r3_851 = r12_291 + r3_850;
    int32_t r3_852 = r3_851 & 0xff;
    
    if (0 - r3_851 >= 0)
        r3_852 = 0 - (0 - r3_851);
    
    void* r0_379 = &(&format)[r3_852 + 0x140];
    char r1_1593 = *(r0_379 - 0x100);
    *(r0_379 - 0x100) = r12_291;
    char var_dd_2 = r1_1593;
    char var_11d = data_2615b ^ *(&var_8 + r1_1593 + *(r0_379 - 0x100) - 0x100);
    uint32_t r0_381 = r12_43;
    int32_t r3_853 = r0_381 + r3_852;
    int32_t r3_854 = r3_853 & 0xff;
    
    if (0 - r3_853 >= 0)
        r3_854 = 0 - (0 - r3_853);
    
    void* r1_1597 = &(&format)[r3_854 + 0x140];
    char r2_32 = *(r1_1597 - 0x100);
    *(r1_1597 - 0x100) = r0_381;
    char var_dc_2 = r2_32;
    char var_11c = *(&var_8 + r2_32 + *(r1_1597 - 0x100) - 0x100) ^ data_2615c;
    uint32_t r12_292 = r12_44;
    int32_t r3_855 = r12_292 + r3_854;
    int32_t r3_856 = r3_855 & 0xff;
    
    if (0 - r3_855 >= 0)
        r3_856 = 0 - (0 - r3_855);
    
    void* r0_383 = &(&format)[r3_856 + 0x140];
    char r1_1605 = *(r0_383 - 0x100);
    *(r0_383 - 0x100) = r12_292;
    char var_db_2 = r1_1605;
    char var_11b = *(&var_8 + r1_1605 + *(r0_383 - 0x100) - 0x100) ^ data_2615d;
    uint32_t r12_293 = r12_45;
    int32_t r3_857 = r12_293 + r3_856;
    int32_t r3_858 = r3_857 & 0xff;
    
    if (0 - r3_857 >= 0)
        r3_858 = 0 - (0 - r3_857);
    
    void* r0_386 = &(&format)[r3_858 + 0x140];
    char r1_1613 = *(r0_386 - 0x100);
    *(r0_386 - 0x100) = r12_293;
    char var_da_2 = r1_1613;
    char var_11a = *(&var_8 + r1_1613 + *(r0_386 - 0x100) - 0x100) ^ data_2615e;
    uint32_t r12_294 = r12_46;
    int32_t r3_859 = r12_294 + r3_858;
    int32_t r3_860 = r3_859 & 0xff;
    
    if (0 - r3_859 >= 0)
        r3_860 = 0 - (0 - r3_859);
    
    void* r0_389 = &(&format)[r3_860 + 0x140];
    char r1_1621 = *(r0_389 - 0x100);
    *(r0_389 - 0x100) = r12_294;
    char var_d9_2 = r1_1621;
    char var_119 = *(&var_8 + r1_1621 + *(r0_389 - 0x100) - 0x100) ^ data_2615f;
    uint32_t r12_295 = r12_47;
    int32_t r3_861 = r12_295 + r3_860;
    int32_t r3_862 = r3_861 & 0xff;
    
    if (0 - r3_861 >= 0)
        r3_862 = 0 - (0 - r3_861);
    
    void* r0_392 = &(&format)[r3_862 + 0x140];
    char r1_1629 = *(r0_392 - 0x100);
    *(r0_392 - 0x100) = r12_295;
    char var_d8_2 = r1_1629;
    char var_118 = *(&var_8 + r1_1629 + *(r0_392 - 0x100) - 0x100) ^ data_26160;
    uint32_t r12_296 = r12_48;
    int32_t r3_863 = r12_296 + r3_862;
    int32_t r3_864 = r3_863 & 0xff;
    
    if (0 - r3_863 >= 0)
        r3_864 = 0 - (0 - r3_863);
    
    void* r0_395 = &(&format)[r3_864 + 0x140];
    char r1_1637 = *(r0_395 - 0x100);
    *(r0_395 - 0x100) = r12_296;
    char var_d7_2 = r1_1637;
    char var_117 = *(&var_8 + r1_1637 + *(r0_395 - 0x100) - 0x100) ^ data_26161;
    uint32_t r12_297 = r12_49;
    int32_t r3_865 = r12_297 + r3_864;
    int32_t r3_866 = r3_865 & 0xff;
    
    if (0 - r3_865 >= 0)
        r3_866 = 0 - (0 - r3_865);
    
    void* r0_398 = &(&format)[r3_866 + 0x140];
    char r1_1645 = *(r0_398 - 0x100);
    *(r0_398 - 0x100) = r12_297;
    char var_d6_2 = r1_1645;
    char var_116 = *(&var_8 + r1_1645 + *(r0_398 - 0x100) - 0x100) ^ data_26162;
    uint32_t r12_298 = r12_50;
    int32_t r3_867 = r12_298 + r3_866;
    int32_t r3_868 = r3_867 & 0xff;
    
    if (0 - r3_867 >= 0)
        r3_868 = 0 - (0 - r3_867);
    
    void* r0_401 = &(&format)[r3_868 + 0x140];
    char r1_1653 = *(r0_401 - 0x100);
    *(r0_401 - 0x100) = r12_298;
    char var_d5_2 = r1_1653;
    char var_115 = *(&var_8 + r1_1653 + *(r0_401 - 0x100) - 0x100) ^ data_26163;
    uint32_t r12_299 = r12_51;
    int32_t r3_869 = r12_299 + r3_868;
    int32_t r3_870 = r3_869 & 0xff;
    
    if (0 - r3_869 >= 0)
        r3_870 = 0 - (0 - r3_869);
    
    void* r0_404 = &(&format)[r3_870 + 0x140];
    char r1_1661 = *(r0_404 - 0x100);
    *(r0_404 - 0x100) = r12_299;
    char var_d4_2 = r1_1661;
    char var_114 = *(&var_8 + r1_1661 + *(r0_404 - 0x100) - 0x100) ^ data_26164;
    uint32_t r12_300 = r12_52;
    int32_t r3_871 = r12_300 + r3_870;
    int32_t r3_872 = r3_871 & 0xff;
    
    if (0 - r3_871 >= 0)
        r3_872 = 0 - (0 - r3_871);
    
    void* r0_407 = &(&format)[r3_872 + 0x140];
    char r1_1669 = *(r0_407 - 0x100);
    *(r0_407 - 0x100) = r12_300;
    char var_d3_2 = r1_1669;
    char var_113 = *(&var_8 + r1_1669 + *(r0_407 - 0x100) - 0x100) ^ data_26165;
    uint32_t r12_301 = r12_53;
    int32_t r3_873 = r12_301 + r3_872;
    int32_t r3_874 = r3_873 & 0xff;
    
    if (0 - r3_873 >= 0)
        r3_874 = 0 - (0 - r3_873);
    
    void* r0_410 = &(&format)[r3_874 + 0x140];
    char r1_1677 = *(r0_410 - 0x100);
    *(r0_410 - 0x100) = r12_301;
    char var_d2_2 = r1_1677;
    char var_112 = *(&var_8 + r1_1677 + *(r0_410 - 0x100) - 0x100) ^ data_26166;
    uint32_t r12_302 = r12_54;
    int32_t r3_875 = r12_302 + r3_874;
    int32_t r3_876 = r3_875 & 0xff;
    
    if (0 - r3_875 >= 0)
        r3_876 = 0 - (0 - r3_875);
    
    void* r0_413 = &(&format)[r3_876 + 0x140];
    char r1_1685 = *(r0_413 - 0x100);
    *(r0_413 - 0x100) = r12_302;
    char var_d1_2 = r1_1685;
    char var_111 = *(&var_8 + r1_1685 + *(r0_413 - 0x100) - 0x100) ^ data_26167;
    uint32_t r12_303 = r12_55;
    int32_t r3_877 = r12_303 + r3_876;
    int32_t r3_878 = r3_877 & 0xff;
    
    if (0 - r3_877 >= 0)
        r3_878 = 0 - (0 - r3_877);
    
    void* r0_416 = &(&format)[r3_878 + 0x140];
    char r1_1693 = *(r0_416 - 0x100);
    *(r0_416 - 0x100) = r12_303;
    char var_d0_2 = r1_1693;
    char var_110 = *(&var_8 + r1_1693 + *(r0_416 - 0x100) - 0x100) ^ data_26168;
    uint32_t r12_304 = r12_56;
    int32_t r3_879 = r12_304 + r3_878;
    int32_t r3_880 = r3_879 & 0xff;
    
    if (0 - r3_879 >= 0)
        r3_880 = 0 - (0 - r3_879);
    
    void* r0_419 = &(&format)[r3_880 + 0x140];
    char r1_1701 = *(r0_419 - 0x100);
    *(r0_419 - 0x100) = r12_304;
    char var_cf_2 = r1_1701;
    char var_10f = *(&var_8 + r1_1701 + *(r0_419 - 0x100) - 0x100) ^ data_26169;
    uint32_t r12_305 = r12_57;
    int32_t r3_881 = r12_305 + r3_880;
    int32_t r3_882 = r3_881 & 0xff;
    
    if (0 - r3_881 >= 0)
        r3_882 = 0 - (0 - r3_881);
    
    void* r0_422 = &(&format)[r3_882 + 0x140];
    char r1_1709 = *(r0_422 - 0x100);
    *(r0_422 - 0x100) = r12_305;
    char var_ce_2 = r1_1709;
    char var_10e = *(&var_8 + r1_1709 + *(r0_422 - 0x100) - 0x100) ^ data_2616a;
    uint32_t r12_306 = r12_58;
    int32_t r3_883 = r12_306 + r3_882;
    int32_t r3_884 = r3_883 & 0xff;
    
    if (0 - r3_883 >= 0)
        r3_884 = 0 - (0 - r3_883);
    
    void* r0_425 = &(&format)[r3_884 + 0x140];
    char r1_1717 = *(r0_425 - 0x100);
    *(r0_425 - 0x100) = r12_306;
    char var_cd_2 = r1_1717;
    char var_10d = *(&var_8 + r1_1717 + *(r0_425 - 0x100) - 0x100) ^ data_2616b;
    uint32_t r12_307 = r12_59;
    int32_t r3_885 = r12_307 + r3_884;
    int32_t r3_886 = r3_885 & 0xff;
    
    if (0 - r3_885 >= 0)
        r3_886 = 0 - (0 - r3_885);
    
    void* r0_428 = &(&format)[r3_886 + 0x140];
    char r1_1725 = *(r0_428 - 0x100);
    *(r0_428 - 0x100) = r12_307;
    char var_cc_2 = r1_1725;
    char var_10c = *(&var_8 + r1_1725 + *(r0_428 - 0x100) - 0x100) ^ data_2616c;
    uint32_t r12_308 = r12_60;
    int32_t r3_887 = r12_308 + r3_886;
    int32_t r3_888 = r3_887 & 0xff;
    
    if (0 - r3_887 >= 0)
        r3_888 = 0 - (0 - r3_887);
    
    void* r0_431 = &(&format)[r3_888 + 0x140];
    char r1_1733 = *(r0_431 - 0x100);
    *(r0_431 - 0x100) = r12_308;
    char var_cb_2 = r1_1733;
    char var_10b = *(&var_8 + r1_1733 + *(r0_431 - 0x100) - 0x100) ^ data_2616d;
    uint32_t r0_434 = r12_61;
    int32_t r3_889 = r0_434 + r3_888;
    int32_t r3_890 = r3_889 & 0xff;
    
    if (0 - r3_889 >= 0)
        r3_890 = 0 - (0 - r3_889);
    
    void* r3_892 = &(&format)[r3_890 + 0x140];
    char r1_1740 = *(r3_892 - 0x100);
    *(r3_892 - 0x100) = r0_434;
    char var_ca_2 = r1_1740;
    char var_10a = *(&var_8 + r1_1740 + *(r3_892 - 0x100) - 0x100) ^ data_2616e;
    format = 0x20;
    char var_109 = 0;
    return printf("Decrypted message: %s\n", &format);
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    multiplication_table(0x11);
    decrypt_message();
    return 0;
}

int32_t _fini() __pure
{
    return;
}

