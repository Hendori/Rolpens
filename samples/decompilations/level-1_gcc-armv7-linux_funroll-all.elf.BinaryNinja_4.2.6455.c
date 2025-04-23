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
    void* lr = &(&format)[r3 + 0x140];
    char r12 = *(lr - 0x100);
    *(lr - 0x100) = 0;
    uint32_t r0 = var_107;
    uint32_t lr_1 = r0 + r3 + key[1][0];
    int32_t r3_2 = lr_1 & 0xff;
    
    if (0 - lr_1 >= 0)
        r3_2 = 0 - (0 - lr_1);
    
    void* r1_3 = &(&format)[r3_2 + 0x140];
    char r12_2 = *(r1_3 - 0x100);
    *(r1_3 - 0x100) = r0;
    char var_106;
    uint32_t r0_1 = var_106;
    int32_t r12_3 = r0_1 + r3_2 + key[2][0];
    int32_t r3_4 = r12_3 & 0xff;
    
    if (0 - r12_3 >= 0)
        r3_4 = 0 - (0 - r12_3);
    
    void* r1_5 = &(&format)[r3_4 + 0x140];
    char lr_5 = *(r1_5 - 0x100);
    *(r1_5 - 0x100) = r0_1;
    char var_105;
    uint32_t r0_2 = var_105;
    int32_t lr_6 = r0_2 + r3_4 + key[3][0];
    int32_t r3_6 = lr_6 & 0xff;
    
    if (0 - lr_6 >= 0)
        r3_6 = 0 - (0 - lr_6);
    
    void* r1_7 = &(&format)[r3_6 + 0x140];
    char r12_7 = *(r1_7 - 0x100);
    *(r1_7 - 0x100) = r0_2;
    char var_104;
    uint32_t r0_3 = var_104;
    int32_t r12_8 = r0_3 + r3_6 + key[4][0];
    int32_t r3_8 = r12_8 & 0xff;
    
    if (0 - r12_8 >= 0)
        r3_8 = 0 - (0 - r12_8);
    
    void* r1_9 = &(&format)[r3_8 + 0x140];
    char lr_10 = *(r1_9 - 0x100);
    *(r1_9 - 0x100) = r0_3;
    char var_103;
    uint32_t r0_4 = var_103;
    int32_t lr_11 = r0_4 + r3_8 + key[5][0];
    int32_t r3_10 = lr_11 & 0xff;
    
    if (0 - lr_11 >= 0)
        r3_10 = 0 - (0 - lr_11);
    
    void* r1_11 = &(&format)[r3_10 + 0x140];
    char r12_12 = *(r1_11 - 0x100);
    *(r1_11 - 0x100) = r0_4;
    char var_102;
    uint32_t r0_5 = var_102;
    int32_t r12_13 = r0_5 + r3_10 + key[6][0];
    int32_t r3_12 = r12_13 & 0xff;
    
    if (0 - r12_13 >= 0)
        r3_12 = 0 - (0 - r12_13);
    
    void* r1_13 = &(&format)[r3_12 + 0x140];
    char lr_15 = *(r1_13 - 0x100);
    *(r1_13 - 0x100) = r0_5;
    char var_101;
    uint32_t r0_6 = var_101;
    int32_t lr_16 = r0_6 + r3_12 + key[7][0];
    int32_t r3_14 = lr_16 & 0xff;
    
    if (0 - lr_16 >= 0)
        r3_14 = 0 - (0 - lr_16);
    
    void* r1_15 = &(&format)[r3_14 + 0x140];
    char r12_17 = *(r1_15 - 0x100);
    *(r1_15 - 0x100) = r0_6;
    char var_100;
    uint32_t r0_7 = var_100;
    int32_t r12_18 = r0_7 + r3_14 + key[8][0];
    int32_t r3_16 = r12_18 & 0xff;
    
    if (0 - r12_18 >= 0)
        r3_16 = 0 - (0 - r12_18);
    
    void* r1_17 = &(&format)[r3_16 + 0x140];
    char lr_20 = *(r1_17 - 0x100);
    *(r1_17 - 0x100) = r0_7;
    char var_ff;
    uint32_t r0_8 = var_ff;
    int32_t lr_21 = r0_8 + r3_16 + key[9][0];
    int32_t r3_18 = lr_21 & 0xff;
    
    if (0 - lr_21 >= 0)
        r3_18 = 0 - (0 - lr_21);
    
    void* r1_19 = &(&format)[r3_18 + 0x140];
    char r12_22 = *(r1_19 - 0x100);
    *(r1_19 - 0x100) = r0_8;
    char var_fe;
    uint32_t r0_9 = var_fe;
    int32_t r12_23 = r0_9 + r3_18 + key[0xa][0];
    int32_t r3_20 = r12_23 & 0xff;
    
    if (0 - r12_23 >= 0)
        r3_20 = 0 - (0 - r12_23);
    
    void* r1_21 = &(&format)[r3_20 + 0x140];
    char lr_25 = *(r1_21 - 0x100);
    *(r1_21 - 0x100) = r0_9;
    char var_fd;
    uint32_t r0_10 = var_fd;
    int32_t lr_26 = r0_10 + r3_20 + key[0xb][0];
    int32_t r3_22 = lr_26 & 0xff;
    
    if (0 - lr_26 >= 0)
        r3_22 = 0 - (0 - lr_26);
    
    void* r1_23 = &(&format)[r3_22 + 0x140];
    char r12_27 = *(r1_23 - 0x100);
    *(r1_23 - 0x100) = r0_10;
    char var_fc;
    uint32_t r0_11 = var_fc;
    int32_t r12_28 = r0_11 + r3_22 + key[0xc][0];
    int32_t r3_24 = r12_28 & 0xff;
    
    if (0 - r12_28 >= 0)
        r3_24 = 0 - (0 - r12_28);
    
    void* r1_25 = &(&format)[r3_24 + 0x140];
    char lr_30 = *(r1_25 - 0x100);
    *(r1_25 - 0x100) = r0_11;
    char var_fb;
    uint32_t r0_12 = var_fb;
    int32_t lr_31 = r0_12 + r3_24 + key[0xd][0];
    int32_t r3_26 = lr_31 & 0xff;
    
    if (0 - lr_31 >= 0)
        r3_26 = 0 - (0 - lr_31);
    
    void* r1_27 = &(&format)[r3_26 + 0x140];
    char r12_32 = *(r1_27 - 0x100);
    *(r1_27 - 0x100) = r0_12;
    char var_fa;
    uint32_t lr_33 = var_fa;
    int32_t r3_27 = lr_33 + r3_26 + key[0xe][0];
    int32_t r12_33 = r3_27 & 0xff;
    
    if (0 - r3_27 >= 0)
        r12_33 = 0 - (0 - r3_27);
    
    void* r3_28 = &(&format)[r12_33 + 0x140];
    char r1_29 = *(r3_28 - 0x100);
    *(r3_28 - 0x100) = lr_33;
    char var_f9;
    uint32_t lr_34 = var_f9;
    int32_t r3_29 = lr_34 + r12_33 + key[0xf][0];
    int32_t r3_30 = r3_29 & 0xff;
    
    if (0 - r3_29 >= 0)
        r3_30 = 0 - (0 - r3_29);
    
    void* r1_31 = &(&format)[r3_30 + 0x140];
    char r12_36 = *(r1_31 - 0x100);
    *(r1_31 - 0x100) = lr_34;
    char var_f8;
    uint32_t lr_35 = var_f8;
    int32_t r12_37 = lr_35 + r3_30 + key[0x10][0];
    int32_t r3_32 = r12_37 & 0xff;
    
    if (0 - r12_37 >= 0)
        r3_32 = 0 - (0 - r12_37);
    
    void* r1_33 = &(&format)[r3_32 + 0x140];
    char r0_19 = *(r1_33 - 0x100);
    *(r1_33 - 0x100) = lr_35;
    char var_f7;
    uint32_t lr_36 = var_f7;
    int32_t r0_20 = lr_36 + r3_32 + key[0x11][0];
    int32_t r3_34 = r0_20 & 0xff;
    
    if (0 - r0_20 >= 0)
        r3_34 = 0 - (0 - r0_20);
    
    void* r1_35 = &(&format)[r3_34 + 0x140];
    char r12_41 = *(r1_35 - 0x100);
    *(r1_35 - 0x100) = lr_36;
    char var_f6;
    uint32_t lr_37 = var_f6;
    int32_t r12_42 = lr_37 + r3_34 + key[0x12][0];
    int32_t r3_36 = r12_42 & 0xff;
    
    if (0 - r12_42 >= 0)
        r3_36 = 0 - (0 - r12_42);
    
    void* r1_37 = &(&format)[r3_36 + 0x140];
    char r0_24 = *(r1_37 - 0x100);
    *(r1_37 - 0x100) = lr_37;
    char var_f5;
    uint32_t lr_38 = var_f5;
    int32_t r0_25 = lr_38 + r3_36 + key[0x13][0];
    int32_t r3_38 = r0_25 & 0xff;
    
    if (0 - r0_25 >= 0)
        r3_38 = 0 - (0 - r0_25);
    
    void* r1_39 = &(&format)[r3_38 + 0x140];
    char r12_46 = *(r1_39 - 0x100);
    *(r1_39 - 0x100) = lr_38;
    char var_f4;
    uint32_t lr_39 = var_f4;
    int32_t r12_47 = lr_39 + r3_38 + key[0x14][0];
    int32_t r3_40 = r12_47 & 0xff;
    
    if (0 - r12_47 >= 0)
        r3_40 = 0 - (0 - r12_47);
    
    void* r1_41 = &(&format)[r3_40 + 0x140];
    char r0_29 = *(r1_41 - 0x100);
    *(r1_41 - 0x100) = lr_39;
    char var_f3;
    uint32_t lr_40 = var_f3;
    int32_t r0_30 = lr_40 + r3_40 + key[0x15][0];
    int32_t r3_42 = r0_30 & 0xff;
    
    if (0 - r0_30 >= 0)
        r3_42 = 0 - (0 - r0_30);
    
    void* r1_43 = &(&format)[r3_42 + 0x140];
    char r12_51 = *(r1_43 - 0x100);
    *(r1_43 - 0x100) = lr_40;
    char var_f2;
    uint32_t lr_41 = var_f2;
    int32_t r12_52 = lr_41 + r3_42 + key[0x16][0];
    int32_t r3_44 = r12_52 & 0xff;
    
    if (0 - r12_52 >= 0)
        r3_44 = 0 - (0 - r12_52);
    
    void* r1_45 = &(&format)[r3_44 + 0x140];
    char r0_34 = *(r1_45 - 0x100);
    *(r1_45 - 0x100) = lr_41;
    char var_f1;
    uint32_t lr_42 = var_f1;
    int32_t r0_35 = lr_42 + r3_44 + key[0x17][0];
    int32_t r3_46 = r0_35 & 0xff;
    
    if (0 - r0_35 >= 0)
        r3_46 = 0 - (0 - r0_35);
    
    void* r1_47 = &(&format)[r3_46 + 0x140];
    char r12_56 = *(r1_47 - 0x100);
    *(r1_47 - 0x100) = lr_42;
    char var_f0;
    uint32_t lr_43 = var_f0;
    int32_t r12_57 = lr_43 + r3_46 + key[0x18][0];
    int32_t r3_48 = r12_57 & 0xff;
    
    if (0 - r12_57 >= 0)
        r3_48 = 0 - (0 - r12_57);
    
    void* r1_49 = &(&format)[r3_48 + 0x140];
    char r0_39 = *(r1_49 - 0x100);
    *(r1_49 - 0x100) = lr_43;
    char var_ef;
    uint32_t lr_44 = var_ef;
    int32_t r0_40 = lr_44 + r3_48 + key[0x19][0];
    int32_t r3_50 = r0_40 & 0xff;
    
    if (0 - r0_40 >= 0)
        r3_50 = 0 - (0 - r0_40);
    
    void* r1_51 = &(&format)[r3_50 + 0x140];
    char r12_61 = *(r1_51 - 0x100);
    *(r1_51 - 0x100) = lr_44;
    char var_ee;
    uint32_t lr_45 = var_ee;
    int32_t r12_62 = lr_45 + r3_50 + key[0x1a][0];
    int32_t r3_52 = r12_62 & 0xff;
    
    if (0 - r12_62 >= 0)
        r3_52 = 0 - (0 - r12_62);
    
    void* r1_53 = &(&format)[r3_52 + 0x140];
    char r0_44 = *(r1_53 - 0x100);
    *(r1_53 - 0x100) = lr_45;
    char var_ed;
    uint32_t lr_46 = var_ed;
    int32_t r0_45 = lr_46 + r3_52 + key[0x1b][0];
    int32_t r3_54 = r0_45 & 0xff;
    
    if (0 - r0_45 >= 0)
        r3_54 = 0 - (0 - r0_45);
    
    void* r1_55 = &(&format)[r3_54 + 0x140];
    char r12_66 = *(r1_55 - 0x100);
    *(r1_55 - 0x100) = lr_46;
    char var_ec;
    uint32_t lr_47 = var_ec;
    int32_t r12_67 = lr_47 + r3_54 + key[0x1c][0];
    int32_t r3_56 = r12_67 & 0xff;
    
    if (0 - r12_67 >= 0)
        r3_56 = 0 - (0 - r12_67);
    
    void* r1_57 = &(&format)[r3_56 + 0x140];
    char r0_49 = *(r1_57 - 0x100);
    *(r1_57 - 0x100) = lr_47;
    char var_eb;
    uint32_t lr_48 = var_eb;
    int32_t r0_50 = lr_48 + r3_56 + key[0x1d][0];
    int32_t r3_58 = r0_50 & 0xff;
    
    if (0 - r0_50 >= 0)
        r3_58 = 0 - (0 - r0_50);
    
    void* r1_59 = &(&format)[r3_58 + 0x140];
    char r12_71 = *(r1_59 - 0x100);
    *(r1_59 - 0x100) = lr_48;
    char var_ea;
    uint32_t lr_49 = var_ea;
    int32_t r12_72 = lr_49 + r3_58 + key[0x1e][0];
    int32_t r3_60 = r12_72 & 0xff;
    
    if (0 - r12_72 >= 0)
        r3_60 = 0 - (0 - r12_72);
    
    void* r1_61 = &(&format)[r3_60 + 0x140];
    char r0_54 = *(r1_61 - 0x100);
    *(r1_61 - 0x100) = lr_49;
    char var_e9;
    uint32_t lr_50 = var_e9;
    int32_t r0_55 = lr_50 + r3_60 + key[0x1f][0];
    int32_t r3_62 = r0_55 & 0xff;
    
    if (0 - r0_55 >= 0)
        r3_62 = 0 - (0 - r0_55);
    
    void* r1_63 = &(&format)[r3_62 + 0x140];
    char r12_76 = *(r1_63 - 0x100);
    *(r1_63 - 0x100) = lr_50;
    uint32_t lr_51 = var_e8;
    int32_t r12_77 = lr_51 + r3_62 + key[0x20][0];
    int32_t r3_64 = r12_77 & 0xff;
    
    if (0 - r12_77 >= 0)
        r3_64 = 0 - (0 - r12_77);
    
    void* r1_65 = &(&format)[r3_64 + 0x140];
    char r0_59 = *(r1_65 - 0x100);
    *(r1_65 - 0x100) = lr_51;
    char var_e7;
    uint32_t lr_52 = var_e7;
    int32_t r0_60 = lr_52 + r3_64 + key[0x21][0];
    int32_t r3_66 = r0_60 & 0xff;
    
    if (0 - r0_60 >= 0)
        r3_66 = 0 - (0 - r0_60);
    
    void* r1_67 = &(&format)[r3_66 + 0x140];
    char r12_81 = *(r1_67 - 0x100);
    *(r1_67 - 0x100) = lr_52;
    char var_e6;
    uint32_t lr_53 = var_e6;
    int32_t r12_82 = lr_53 + r3_66 + key[0x22][0];
    int32_t r3_68 = r12_82 & 0xff;
    
    if (0 - r12_82 >= 0)
        r3_68 = 0 - (0 - r12_82);
    
    void* r1_69 = &(&format)[r3_68 + 0x140];
    char r0_64 = *(r1_69 - 0x100);
    *(r1_69 - 0x100) = lr_53;
    char var_e5;
    uint32_t lr_54 = var_e5;
    int32_t r0_65 = lr_54 + r3_68 + key[0x23][0];
    int32_t r3_70 = r0_65 & 0xff;
    
    if (0 - r0_65 >= 0)
        r3_70 = 0 - (0 - r0_65);
    
    void* r1_71 = &(&format)[r3_70 + 0x140];
    char r12_86 = *(r1_71 - 0x100);
    *(r1_71 - 0x100) = lr_54;
    char var_e4;
    uint32_t lr_55 = var_e4;
    int32_t r12_87 = lr_55 + r3_70 + key[0x24][0];
    int32_t r3_72 = r12_87 & 0xff;
    
    if (0 - r12_87 >= 0)
        r3_72 = 0 - (0 - r12_87);
    
    void* r1_73 = &(&format)[r3_72 + 0x140];
    char r0_69 = *(r1_73 - 0x100);
    *(r1_73 - 0x100) = lr_55;
    char var_e3;
    uint32_t lr_56 = var_e3;
    int32_t r0_70 = lr_56 + r3_72 + key[0x25][0];
    int32_t r3_74 = r0_70 & 0xff;
    
    if (0 - r0_70 >= 0)
        r3_74 = 0 - (0 - r0_70);
    
    void* r1_75 = &(&format)[r3_74 + 0x140];
    char r12_91 = *(r1_75 - 0x100);
    *(r1_75 - 0x100) = lr_56;
    char var_e2;
    uint32_t lr_57 = var_e2;
    int32_t r12_92 = lr_57 + r3_74 + key[0x26][0];
    int32_t r3_76 = r12_92 & 0xff;
    
    if (0 - r12_92 >= 0)
        r3_76 = 0 - (0 - r12_92);
    
    void* r1_77 = &(&format)[r3_76 + 0x140];
    char r0_74 = *(r1_77 - 0x100);
    *(r1_77 - 0x100) = lr_57;
    char var_e1;
    uint32_t lr_58 = var_e1;
    int32_t r0_75 = lr_58 + r3_76 + key[0x27][0];
    int32_t r3_78 = r0_75 & 0xff;
    
    if (0 - r0_75 >= 0)
        r3_78 = 0 - (0 - r0_75);
    
    void* r1_79 = &(&format)[r3_78 + 0x140];
    char r12_96 = *(r1_79 - 0x100);
    *(r1_79 - 0x100) = lr_58;
    char var_e0;
    uint32_t lr_59 = var_e0;
    int32_t r12_97 = lr_59 + r3_78 + key[0x28][0];
    int32_t r3_80 = r12_97 & 0xff;
    
    if (0 - r12_97 >= 0)
        r3_80 = 0 - (0 - r12_97);
    
    void* r1_81 = &(&format)[r3_80 + 0x140];
    char r0_79 = *(r1_81 - 0x100);
    *(r1_81 - 0x100) = lr_59;
    char var_df;
    uint32_t lr_60 = var_df;
    int32_t r0_80 = lr_60 + r3_80 + key[0x29][0];
    int32_t r3_82 = r0_80 & 0xff;
    
    if (0 - r0_80 >= 0)
        r3_82 = 0 - (0 - r0_80);
    
    void* r1_83 = &(&format)[r3_82 + 0x140];
    char r12_101 = *(r1_83 - 0x100);
    *(r1_83 - 0x100) = lr_60;
    char var_de;
    uint32_t lr_61 = var_de;
    int32_t r12_102 = lr_61 + r3_82 + key[0x2a][0];
    int32_t r3_84 = r12_102 & 0xff;
    
    if (0 - r12_102 >= 0)
        r3_84 = 0 - (0 - r12_102);
    
    void* r1_85 = &(&format)[r3_84 + 0x140];
    char r0_84 = *(r1_85 - 0x100);
    *(r1_85 - 0x100) = lr_61;
    char var_dd;
    uint32_t lr_62 = var_dd;
    int32_t r0_85 = lr_62 + r3_84 + key[0x2b][0];
    int32_t r3_86 = r0_85 & 0xff;
    
    if (0 - r0_85 >= 0)
        r3_86 = 0 - (0 - r0_85);
    
    void* r1_87 = &(&format)[r3_86 + 0x140];
    char r12_106 = *(r1_87 - 0x100);
    *(r1_87 - 0x100) = lr_62;
    char var_dc;
    uint32_t lr_63 = var_dc;
    int32_t r12_107 = lr_63 + r3_86 + key[0x2c][0];
    int32_t r3_88 = r12_107 & 0xff;
    
    if (0 - r12_107 >= 0)
        r3_88 = 0 - (0 - r12_107);
    
    void* r1_89 = &(&format)[r3_88 + 0x140];
    char r0_89 = *(r1_89 - 0x100);
    *(r1_89 - 0x100) = lr_63;
    char var_db;
    uint32_t lr_64 = var_db;
    int32_t r0_90 = lr_64 + r3_88 + key[0x2d][0];
    int32_t r3_90 = r0_90 & 0xff;
    
    if (0 - r0_90 >= 0)
        r3_90 = 0 - (0 - r0_90);
    
    void* r1_91 = &(&format)[r3_90 + 0x140];
    char r12_111 = *(r1_91 - 0x100);
    *(r1_91 - 0x100) = lr_64;
    char var_da;
    uint32_t lr_65 = var_da;
    int32_t r12_112 = lr_65 + r3_90 + key[0x2e][0];
    int32_t r3_92 = r12_112 & 0xff;
    
    if (0 - r12_112 >= 0)
        r3_92 = 0 - (0 - r12_112);
    
    void* r1_93 = &(&format)[r3_92 + 0x140];
    char r0_94 = *(r1_93 - 0x100);
    *(r1_93 - 0x100) = lr_65;
    char var_d9;
    uint32_t lr_66 = var_d9;
    int32_t r0_95 = lr_66 + r3_92 + key[0x2f][0];
    int32_t r3_94 = r0_95 & 0xff;
    
    if (0 - r0_95 >= 0)
        r3_94 = 0 - (0 - r0_95);
    
    void* r1_95 = &(&format)[r3_94 + 0x140];
    char r12_116 = *(r1_95 - 0x100);
    *(r1_95 - 0x100) = lr_66;
    char var_d8;
    uint32_t lr_67 = var_d8;
    int32_t r12_117 = lr_67 + r3_94 + key[0x30][0];
    int32_t r3_96 = r12_117 & 0xff;
    
    if (0 - r12_117 >= 0)
        r3_96 = 0 - (0 - r12_117);
    
    void* r1_97 = &(&format)[r3_96 + 0x140];
    char r0_99 = *(r1_97 - 0x100);
    *(r1_97 - 0x100) = lr_67;
    char var_d7;
    uint32_t lr_68 = var_d7;
    int32_t r0_100 = lr_68 + r3_96 + key[0x31][0];
    int32_t r3_98 = r0_100 & 0xff;
    
    if (0 - r0_100 >= 0)
        r3_98 = 0 - (0 - r0_100);
    
    void* r1_99 = &(&format)[r3_98 + 0x140];
    char r12_121 = *(r1_99 - 0x100);
    *(r1_99 - 0x100) = lr_68;
    char var_d6;
    uint32_t lr_69 = var_d6;
    int32_t r12_122 = lr_69 + r3_98 + key[0x32][0];
    int32_t r3_100 = r12_122 & 0xff;
    
    if (0 - r12_122 >= 0)
        r3_100 = 0 - (0 - r12_122);
    
    void* r1_101 = &(&format)[r3_100 + 0x140];
    char r0_104 = *(r1_101 - 0x100);
    *(r1_101 - 0x100) = lr_69;
    char var_d5;
    uint32_t lr_70 = var_d5;
    int32_t r0_105 = lr_70 + r3_100 + key[0x33][0];
    int32_t r3_102 = r0_105 & 0xff;
    
    if (0 - r0_105 >= 0)
        r3_102 = 0 - (0 - r0_105);
    
    void* r1_103 = &(&format)[r3_102 + 0x140];
    char r12_126 = *(r1_103 - 0x100);
    *(r1_103 - 0x100) = lr_70;
    char var_d4;
    uint32_t lr_71 = var_d4;
    int32_t r12_127 = lr_71 + r3_102 + key[0x34][0];
    int32_t r3_104 = r12_127 & 0xff;
    
    if (0 - r12_127 >= 0)
        r3_104 = 0 - (0 - r12_127);
    
    void* r1_105 = &(&format)[r3_104 + 0x140];
    char r0_109 = *(r1_105 - 0x100);
    *(r1_105 - 0x100) = lr_71;
    char var_d3;
    uint32_t lr_72 = var_d3;
    int32_t r0_110 = lr_72 + r3_104 + key[0x35][0];
    int32_t r3_106 = r0_110 & 0xff;
    
    if (0 - r0_110 >= 0)
        r3_106 = 0 - (0 - r0_110);
    
    void* r1_107 = &(&format)[r3_106 + 0x140];
    char r12_131 = *(r1_107 - 0x100);
    *(r1_107 - 0x100) = lr_72;
    char var_d2;
    uint32_t lr_73 = var_d2;
    int32_t r12_132 = lr_73 + r3_106 + key[0x36][0];
    int32_t r3_108 = r12_132 & 0xff;
    
    if (0 - r12_132 >= 0)
        r3_108 = 0 - (0 - r12_132);
    
    void* r1_109 = &(&format)[r3_108 + 0x140];
    char r0_114 = *(r1_109 - 0x100);
    *(r1_109 - 0x100) = lr_73;
    char var_d1;
    uint32_t lr_74 = var_d1;
    int32_t r0_115 = lr_74 + r3_108 + key[0x37][0];
    int32_t r3_110 = r0_115 & 0xff;
    
    if (0 - r0_115 >= 0)
        r3_110 = 0 - (0 - r0_115);
    
    void* r1_111 = &(&format)[r3_110 + 0x140];
    char r12_136 = *(r1_111 - 0x100);
    *(r1_111 - 0x100) = lr_74;
    char var_d0;
    uint32_t lr_75 = var_d0;
    int32_t r12_137 = lr_75 + r3_110 + key[0x38][0];
    int32_t r3_112 = r12_137 & 0xff;
    
    if (0 - r12_137 >= 0)
        r3_112 = 0 - (0 - r12_137);
    
    void* r1_113 = &(&format)[r3_112 + 0x140];
    char r0_119 = *(r1_113 - 0x100);
    *(r1_113 - 0x100) = lr_75;
    char var_cf;
    uint32_t lr_76 = var_cf;
    int32_t r0_120 = lr_76 + r3_112 + key[0x39][0];
    int32_t r3_114 = r0_120 & 0xff;
    
    if (0 - r0_120 >= 0)
        r3_114 = 0 - (0 - r0_120);
    
    void* r1_115 = &(&format)[r3_114 + 0x140];
    char r12_141 = *(r1_115 - 0x100);
    *(r1_115 - 0x100) = lr_76;
    char var_ce;
    uint32_t lr_77 = var_ce;
    int32_t r12_142 = lr_77 + r3_114 + key[0x3a][0];
    int32_t r3_116 = r12_142 & 0xff;
    
    if (0 - r12_142 >= 0)
        r3_116 = 0 - (0 - r12_142);
    
    void* r1_117 = &(&format)[r3_116 + 0x140];
    char r0_124 = *(r1_117 - 0x100);
    *(r1_117 - 0x100) = lr_77;
    char var_cd;
    uint32_t lr_78 = var_cd;
    int32_t r0_125 = lr_78 + r3_116 + key[0x3b][0];
    int32_t r3_118 = r0_125 & 0xff;
    
    if (0 - r0_125 >= 0)
        r3_118 = 0 - (0 - r0_125);
    
    void* r1_119 = &(&format)[r3_118 + 0x140];
    char r12_146 = *(r1_119 - 0x100);
    *(r1_119 - 0x100) = lr_78;
    char var_cc;
    uint32_t lr_79 = var_cc;
    int32_t r12_147 = lr_79 + r3_118 + key[0x3c][0];
    int32_t r3_120 = r12_147 & 0xff;
    
    if (0 - r12_147 >= 0)
        r3_120 = 0 - (0 - r12_147);
    
    void* r1_121 = &(&format)[r3_120 + 0x140];
    char r0_129 = *(r1_121 - 0x100);
    *(r1_121 - 0x100) = lr_79;
    char var_cb;
    uint32_t lr_80 = var_cb;
    int32_t r0_130 = lr_80 + r3_120 + key[0x3d][0];
    int32_t r3_122 = r0_130 & 0xff;
    
    if (0 - r0_130 >= 0)
        r3_122 = 0 - (0 - r0_130);
    
    void* r1_123 = &(&format)[r3_122 + 0x140];
    char r12_151 = *(r1_123 - 0x100);
    *(r1_123 - 0x100) = lr_80;
    char var_ca;
    uint32_t lr_81 = var_ca;
    int32_t r12_152 = lr_81 + r3_122 + key[0x3e][0];
    int32_t r3_124 = r12_152 & 0xff;
    
    if (0 - r12_152 >= 0)
        r3_124 = 0 - (0 - r12_152);
    
    void* r1_125 = &(&format)[r3_124 + 0x140];
    char r0_134 = *(r1_125 - 0x100);
    *(r1_125 - 0x100) = lr_81;
    char var_c9;
    uint32_t lr_82 = var_c9;
    int32_t r0_135 = lr_82 + r3_124 + key[0x3f][0];
    int32_t r3_126 = r0_135 & 0xff;
    
    if (0 - r0_135 >= 0)
        r3_126 = 0 - (0 - r0_135);
    
    void* r1_127 = &(&format)[r3_126 + 0x140];
    char r12_156 = *(r1_127 - 0x100);
    *(r1_127 - 0x100) = lr_82;
    char var_c9_1 = r12_156;
    char var_c8;
    uint32_t lr_83 = var_c8;
    int32_t r12_157 = lr_83 + r3_126 + key[0x40][0];
    int32_t r3_128 = r12_157 & 0xff;
    
    if (0 - r12_157 >= 0)
        r3_128 = 0 - (0 - r12_157);
    
    void* r1_129 = &(&format)[r3_128 + 0x140];
    char r0_139 = *(r1_129 - 0x100);
    *(r1_129 - 0x100) = lr_83;
    char var_c7;
    uint32_t lr_84 = var_c7;
    int32_t r0_140 = lr_84 + r3_128 + key[0x41][0];
    int32_t r3_130 = r0_140 & 0xff;
    
    if (0 - r0_140 >= 0)
        r3_130 = 0 - (0 - r0_140);
    
    void* r1_131 = &(&format)[r3_130 + 0x140];
    char r12_161 = *(r1_131 - 0x100);
    *(r1_131 - 0x100) = lr_84;
    char var_c7_1 = r12_161;
    char var_c6;
    uint32_t lr_85 = var_c6;
    int32_t r12_162 = lr_85 + r3_130 + key[0x42][0];
    int32_t r3_132 = r12_162 & 0xff;
    
    if (0 - r12_162 >= 0)
        r3_132 = 0 - (0 - r12_162);
    
    void* r1_133 = &(&format)[r3_132 + 0x140];
    char r0_144 = *(r1_133 - 0x100);
    *(r1_133 - 0x100) = lr_85;
    char var_c6_1 = r0_144;
    char var_c5;
    uint32_t lr_86 = var_c5;
    int32_t r0_145 = lr_86 + r3_132 + key[0x43][0];
    int32_t r3_134 = r0_145 & 0xff;
    
    if (0 - r0_145 >= 0)
        r3_134 = 0 - (0 - r0_145);
    
    void* r1_135 = &(&format)[r3_134 + 0x140];
    char r12_166 = *(r1_135 - 0x100);
    *(r1_135 - 0x100) = lr_86;
    char var_c5_1 = r12_166;
    char var_c4;
    uint32_t lr_87 = var_c4;
    int32_t r12_167 = lr_87 + r3_134 + key[0x44][0];
    int32_t r3_136 = r12_167 & 0xff;
    
    if (0 - r12_167 >= 0)
        r3_136 = 0 - (0 - r12_167);
    
    void* r1_137 = &(&format)[r3_136 + 0x140];
    char r0_149 = *(r1_137 - 0x100);
    *(r1_137 - 0x100) = lr_87;
    char var_c3;
    uint32_t lr_88 = var_c3;
    int32_t r0_150 = lr_88 + r3_136 + key[0x45][0];
    int32_t r3_138 = r0_150 & 0xff;
    
    if (0 - r0_150 >= 0)
        r3_138 = 0 - (0 - r0_150);
    
    void* r1_139 = &(&format)[r3_138 + 0x140];
    char r12_171 = *(r1_139 - 0x100);
    *(r1_139 - 0x100) = lr_88;
    char var_c3_1 = r12_171;
    char var_c2;
    uint32_t lr_89 = var_c2;
    int32_t r12_172 = lr_89 + r3_138 + key[0x46][0];
    int32_t r3_140 = r12_172 & 0xff;
    
    if (0 - r12_172 >= 0)
        r3_140 = 0 - (0 - r12_172);
    
    void* r1_141 = &(&format)[r3_140 + 0x140];
    char r0_154 = *(r1_141 - 0x100);
    *(r1_141 - 0x100) = lr_89;
    char var_c2_1 = r0_154;
    char var_c1;
    uint32_t lr_90 = var_c1;
    int32_t r0_155 = lr_90 + r3_140 + key[0x47][0];
    int32_t r3_142 = r0_155 & 0xff;
    
    if (0 - r0_155 >= 0)
        r3_142 = 0 - (0 - r0_155);
    
    void* r1_143 = &(&format)[r3_142 + 0x140];
    char r12_176 = *(r1_143 - 0x100);
    *(r1_143 - 0x100) = lr_90;
    char var_c1_1 = r12_176;
    char var_c0;
    uint32_t lr_91 = var_c0;
    int32_t r12_177 = lr_91 + r3_142 + key[0x48][0];
    int32_t r3_144 = r12_177 & 0xff;
    
    if (0 - r12_177 >= 0)
        r3_144 = 0 - (0 - r12_177);
    
    void* r1_145 = &(&format)[r3_144 + 0x140];
    char r0_159 = *(r1_145 - 0x100);
    *(r1_145 - 0x100) = lr_91;
    char var_bf;
    uint32_t lr_92 = var_bf;
    int32_t r0_160 = lr_92 + r3_144 + key[0x49][0];
    int32_t r3_146 = r0_160 & 0xff;
    
    if (0 - r0_160 >= 0)
        r3_146 = 0 - (0 - r0_160);
    
    void* r1_147 = &(&format)[r3_146 + 0x140];
    char r12_181 = *(r1_147 - 0x100);
    *(r1_147 - 0x100) = lr_92;
    char var_bf_1 = r12_181;
    char var_be;
    uint32_t lr_93 = var_be;
    int32_t r12_182 = lr_93 + r3_146 + key[0x4a][0];
    int32_t r3_148 = r12_182 & 0xff;
    
    if (0 - r12_182 >= 0)
        r3_148 = 0 - (0 - r12_182);
    
    void* r1_149 = &(&format)[r3_148 + 0x140];
    char r0_164 = *(r1_149 - 0x100);
    *(r1_149 - 0x100) = lr_93;
    char var_be_1 = r0_164;
    char var_bd;
    uint32_t lr_94 = var_bd;
    int32_t r0_165 = lr_94 + r3_148 + key[0x4b][0];
    int32_t r3_150 = r0_165 & 0xff;
    
    if (0 - r0_165 >= 0)
        r3_150 = 0 - (0 - r0_165);
    
    void* r1_151 = &(&format)[r3_150 + 0x140];
    char r12_186 = *(r1_151 - 0x100);
    *(r1_151 - 0x100) = lr_94;
    char var_bd_1 = r12_186;
    char var_bc;
    uint32_t lr_95 = var_bc;
    int32_t r12_187 = lr_95 + r3_150 + key[0x4c][0];
    int32_t r3_152 = r12_187 & 0xff;
    
    if (0 - r12_187 >= 0)
        r3_152 = 0 - (0 - r12_187);
    
    void* r1_153 = &(&format)[r3_152 + 0x140];
    char r0_169 = *(r1_153 - 0x100);
    *(r1_153 - 0x100) = lr_95;
    char var_bb;
    uint32_t lr_96 = var_bb;
    int32_t r12_189 = lr_96 + r3_152 + key[0x4d][0];
    int32_t r3_154 = r12_189 & 0xff;
    
    if (0 - r12_189 >= 0)
        r3_154 = 0 - (0 - r12_189);
    
    void* r12_190 = &(&format)[r3_154 + 0x140];
    char r1_155 = *(r12_190 - 0x100);
    *(r12_190 - 0x100) = lr_96;
    char var_bb_1 = r1_155;
    char var_ba;
    uint32_t lr_97 = var_ba;
    int32_t r12_191 = lr_97 + r3_154 + key[0x4e][0];
    int32_t r3_156 = r12_191 & 0xff;
    
    if (0 - r12_191 >= 0)
        r3_156 = 0 - (0 - r12_191);
    
    void* r1_157 = &(&format)[r3_156 + 0x140];
    char r0_173 = *(r1_157 - 0x100);
    *(r1_157 - 0x100) = lr_97;
    char var_ba_1 = r0_173;
    char var_b9;
    uint32_t lr_98 = var_b9;
    int32_t r0_174 = lr_98 + r3_156 + key[0x4f][0];
    int32_t r3_158 = r0_174 & 0xff;
    
    if (0 - r0_174 >= 0)
        r3_158 = 0 - (0 - r0_174);
    
    void* r1_159 = &(&format)[r3_158 + 0x140];
    char r12_195 = *(r1_159 - 0x100);
    *(r1_159 - 0x100) = lr_98;
    char var_b9_1 = r12_195;
    char var_b8;
    uint32_t lr_99 = var_b8;
    int32_t r12_196 = lr_99 + r3_158 + key[0x50][0];
    int32_t r3_160 = r12_196 & 0xff;
    
    if (0 - r12_196 >= 0)
        r3_160 = 0 - (0 - r12_196);
    
    void* r1_161 = &(&format)[r3_160 + 0x140];
    char r0_178 = *(r1_161 - 0x100);
    *(r1_161 - 0x100) = lr_99;
    char var_b7;
    uint32_t lr_100 = var_b7;
    int32_t r0_179 = lr_100 + r3_160 + key[0x51][0];
    int32_t r3_162 = r0_179 & 0xff;
    
    if (0 - r0_179 >= 0)
        r3_162 = 0 - (0 - r0_179);
    
    void* r1_163 = &(&format)[r3_162 + 0x140];
    char r12_200 = *(r1_163 - 0x100);
    *(r1_163 - 0x100) = lr_100;
    char var_b7_1 = r12_200;
    char var_b6;
    uint32_t lr_101 = var_b6;
    int32_t r12_201 = lr_101 + r3_162 + key[0x52][0];
    int32_t r3_164 = r12_201 & 0xff;
    
    if (0 - r12_201 >= 0)
        r3_164 = 0 - (0 - r12_201);
    
    void* r1_165 = &(&format)[r3_164 + 0x140];
    char r0_183 = *(r1_165 - 0x100);
    *(r1_165 - 0x100) = lr_101;
    char var_b6_1 = r0_183;
    char var_b5;
    uint32_t lr_102 = var_b5;
    int32_t r0_184 = lr_102 + r3_164 + key[0x53][0];
    int32_t r3_166 = r0_184 & 0xff;
    
    if (0 - r0_184 >= 0)
        r3_166 = 0 - (0 - r0_184);
    
    void* r1_167 = &(&format)[r3_166 + 0x140];
    char r12_205 = *(r1_167 - 0x100);
    *(r1_167 - 0x100) = lr_102;
    char var_b5_1 = r12_205;
    char var_b4;
    uint32_t lr_103 = var_b4;
    int32_t r12_206 = lr_103 + r3_166 + key[0x54][0];
    int32_t r3_168 = r12_206 & 0xff;
    
    if (0 - r12_206 >= 0)
        r3_168 = 0 - (0 - r12_206);
    
    void* r1_169 = &(&format)[r3_168 + 0x140];
    char r0_188 = *(r1_169 - 0x100);
    *(r1_169 - 0x100) = lr_103;
    char var_b3;
    uint32_t lr_104 = var_b3;
    int32_t r0_189 = lr_104 + r3_168 + key[0x55][0];
    int32_t r3_170 = r0_189 & 0xff;
    
    if (0 - r0_189 >= 0)
        r3_170 = 0 - (0 - r0_189);
    
    void* r1_171 = &(&format)[r3_170 + 0x140];
    char r12_210 = *(r1_171 - 0x100);
    *(r1_171 - 0x100) = lr_104;
    char var_b3_1 = r12_210;
    char var_b2;
    uint32_t lr_105 = var_b2;
    int32_t r12_211 = lr_105 + r3_170 + key[0x56][0];
    int32_t r3_172 = r12_211 & 0xff;
    
    if (0 - r12_211 >= 0)
        r3_172 = 0 - (0 - r12_211);
    
    void* r1_173 = &(&format)[r3_172 + 0x140];
    char r0_193 = *(r1_173 - 0x100);
    *(r1_173 - 0x100) = lr_105;
    char var_b2_1 = r0_193;
    char var_b1;
    uint32_t lr_106 = var_b1;
    int32_t r0_194 = lr_106 + r3_172 + key[0x57][0];
    int32_t r3_174 = r0_194 & 0xff;
    
    if (0 - r0_194 >= 0)
        r3_174 = 0 - (0 - r0_194);
    
    void* r1_175 = &(&format)[r3_174 + 0x140];
    char r12_215 = *(r1_175 - 0x100);
    *(r1_175 - 0x100) = lr_106;
    char var_b1_1 = r12_215;
    char var_b0;
    uint32_t lr_107 = var_b0;
    int32_t r12_216 = lr_107 + r3_174 + key[0x58][0];
    int32_t r3_176 = r12_216 & 0xff;
    
    if (0 - r12_216 >= 0)
        r3_176 = 0 - (0 - r12_216);
    
    void* r1_177 = &(&format)[r3_176 + 0x140];
    char r0_198 = *(r1_177 - 0x100);
    *(r1_177 - 0x100) = lr_107;
    char var_af;
    uint32_t lr_108 = var_af;
    int32_t r0_199 = lr_108 + r3_176 + key[0x59][0];
    int32_t r3_178 = r0_199 & 0xff;
    
    if (0 - r0_199 >= 0)
        r3_178 = 0 - (0 - r0_199);
    
    void* r1_179 = &(&format)[r3_178 + 0x140];
    char r12_220 = *(r1_179 - 0x100);
    *(r1_179 - 0x100) = lr_108;
    char var_af_1 = r12_220;
    char var_ae;
    uint32_t lr_109 = var_ae;
    int32_t r12_221 = lr_109 + r3_178 + key[0x5a][0];
    int32_t r3_180 = r12_221 & 0xff;
    
    if (0 - r12_221 >= 0)
        r3_180 = 0 - (0 - r12_221);
    
    void* r1_181 = &(&format)[r3_180 + 0x140];
    char r0_203 = *(r1_181 - 0x100);
    *(r1_181 - 0x100) = lr_109;
    char var_ae_1 = r0_203;
    char var_ad;
    uint32_t lr_110 = var_ad;
    int32_t r0_204 = lr_110 + r3_180 + key[0x5b][0];
    int32_t r3_182 = r0_204 & 0xff;
    
    if (0 - r0_204 >= 0)
        r3_182 = 0 - (0 - r0_204);
    
    void* r1_183 = &(&format)[r3_182 + 0x140];
    char r12_225 = *(r1_183 - 0x100);
    *(r1_183 - 0x100) = lr_110;
    char var_ad_1 = r12_225;
    char var_ac;
    uint32_t lr_111 = var_ac;
    int32_t r12_226 = lr_111 + r3_182 + key[0x5c][0];
    int32_t r3_184 = r12_226 & 0xff;
    
    if (0 - r12_226 >= 0)
        r3_184 = 0 - (0 - r12_226);
    
    void* r1_185 = &(&format)[r3_184 + 0x140];
    char r0_208 = *(r1_185 - 0x100);
    *(r1_185 - 0x100) = lr_111;
    char var_ab;
    uint32_t lr_112 = var_ab;
    int32_t r0_209 = lr_112 + r3_184 + key[0x5d][0];
    int32_t r3_186 = r0_209 & 0xff;
    
    if (0 - r0_209 >= 0)
        r3_186 = 0 - (0 - r0_209);
    
    void* r1_187 = &(&format)[r3_186 + 0x140];
    char r12_230 = *(r1_187 - 0x100);
    *(r1_187 - 0x100) = lr_112;
    char var_ab_1 = r12_230;
    char var_aa;
    uint32_t lr_113 = var_aa;
    int32_t r12_231 = lr_113 + r3_186 + key[0x5e][0];
    int32_t r3_188 = r12_231 & 0xff;
    
    if (0 - r12_231 >= 0)
        r3_188 = 0 - (0 - r12_231);
    
    void* r1_189 = &(&format)[r3_188 + 0x140];
    char r0_213 = *(r1_189 - 0x100);
    *(r1_189 - 0x100) = lr_113;
    char var_aa_1 = r0_213;
    char var_a9;
    uint32_t lr_114 = var_a9;
    int32_t r0_214 = lr_114 + r3_188 + key[0x5f][0];
    int32_t r3_190 = r0_214 & 0xff;
    
    if (0 - r0_214 >= 0)
        r3_190 = 0 - (0 - r0_214);
    
    void* r1_191 = &(&format)[r3_190 + 0x140];
    char r12_235 = *(r1_191 - 0x100);
    *(r1_191 - 0x100) = lr_114;
    char var_a9_1 = r12_235;
    char var_a8;
    uint32_t lr_115 = var_a8;
    int32_t r12_236 = lr_115 + r3_190 + key[0x60][0];
    int32_t r3_192 = r12_236 & 0xff;
    
    if (0 - r12_236 >= 0)
        r3_192 = 0 - (0 - r12_236);
    
    void* r1_193 = &(&format)[r3_192 + 0x140];
    char r0_218 = *(r1_193 - 0x100);
    *(r1_193 - 0x100) = lr_115;
    char var_a7;
    uint32_t lr_116 = var_a7;
    int32_t r0_219 = lr_116 + r3_192 + key[0x61][0];
    int32_t r3_194 = r0_219 & 0xff;
    
    if (0 - r0_219 >= 0)
        r3_194 = 0 - (0 - r0_219);
    
    void* r1_195 = &(&format)[r3_194 + 0x140];
    char r12_240 = *(r1_195 - 0x100);
    *(r1_195 - 0x100) = lr_116;
    char var_a7_1 = r12_240;
    char var_a6;
    uint32_t lr_117 = var_a6;
    int32_t r12_241 = lr_117 + r3_194 + key[0x62][0];
    int32_t r3_196 = r12_241 & 0xff;
    
    if (0 - r12_241 >= 0)
        r3_196 = 0 - (0 - r12_241);
    
    void* r1_197 = &(&format)[r3_196 + 0x140];
    char r0_223 = *(r1_197 - 0x100);
    *(r1_197 - 0x100) = lr_117;
    char var_a6_1 = r0_223;
    char var_a5;
    uint32_t lr_118 = var_a5;
    int32_t r0_224 = lr_118 + r3_196 + key[0x63][0];
    int32_t r3_198 = r0_224 & 0xff;
    
    if (0 - r0_224 >= 0)
        r3_198 = 0 - (0 - r0_224);
    
    void* r1_199 = &(&format)[r3_198 + 0x140];
    char r12_245 = *(r1_199 - 0x100);
    *(r1_199 - 0x100) = lr_118;
    char var_a5_1 = r12_245;
    char var_a4;
    uint32_t lr_119 = var_a4;
    int32_t r12_246 = lr_119 + r3_198 + key[0x64][0];
    int32_t r3_200 = r12_246 & 0xff;
    
    if (0 - r12_246 >= 0)
        r3_200 = 0 - (0 - r12_246);
    
    void* r1_201 = &(&format)[r3_200 + 0x140];
    char r0_228 = *(r1_201 - 0x100);
    *(r1_201 - 0x100) = lr_119;
    char var_a3;
    uint32_t lr_120 = var_a3;
    int32_t r0_229 = lr_120 + r3_200 + key[0x65][0];
    int32_t r3_202 = r0_229 & 0xff;
    
    if (0 - r0_229 >= 0)
        r3_202 = 0 - (0 - r0_229);
    
    void* r1_203 = &(&format)[r3_202 + 0x140];
    char r12_250 = *(r1_203 - 0x100);
    *(r1_203 - 0x100) = lr_120;
    char var_a3_1 = r12_250;
    char var_a2;
    uint32_t lr_121 = var_a2;
    int32_t r12_251 = lr_121 + r3_202 + key[0x66][0];
    int32_t r3_204 = r12_251 & 0xff;
    
    if (0 - r12_251 >= 0)
        r3_204 = 0 - (0 - r12_251);
    
    void* r1_205 = &(&format)[r3_204 + 0x140];
    char r0_233 = *(r1_205 - 0x100);
    *(r1_205 - 0x100) = lr_121;
    char var_a2_1 = r0_233;
    char var_a1;
    uint32_t lr_122 = var_a1;
    int32_t r0_234 = lr_122 + r3_204 + key[0x67][0];
    int32_t r3_206 = r0_234 & 0xff;
    
    if (0 - r0_234 >= 0)
        r3_206 = 0 - (0 - r0_234);
    
    void* r1_207 = &(&format)[r3_206 + 0x140];
    char r12_255 = *(r1_207 - 0x100);
    *(r1_207 - 0x100) = lr_122;
    char var_a1_1 = r12_255;
    char var_a0;
    uint32_t lr_123 = var_a0;
    int32_t r12_256 = lr_123 + r3_206 + key[0x68][0];
    int32_t r3_208 = r12_256 & 0xff;
    
    if (0 - r12_256 >= 0)
        r3_208 = 0 - (0 - r12_256);
    
    void* r1_209 = &(&format)[r3_208 + 0x140];
    char r0_238 = *(r1_209 - 0x100);
    *(r1_209 - 0x100) = lr_123;
    char var_9f;
    uint32_t lr_124 = var_9f;
    int32_t r0_239 = lr_124 + r3_208 + key[0x69][0];
    int32_t r3_210 = r0_239 & 0xff;
    
    if (0 - r0_239 >= 0)
        r3_210 = 0 - (0 - r0_239);
    
    void* r1_211 = &(&format)[r3_210 + 0x140];
    char r12_260 = *(r1_211 - 0x100);
    *(r1_211 - 0x100) = lr_124;
    char var_9f_1 = r12_260;
    char var_9e;
    uint32_t lr_125 = var_9e;
    int32_t r12_261 = lr_125 + r3_210 + key[0x6a][0];
    int32_t r3_212 = r12_261 & 0xff;
    
    if (0 - r12_261 >= 0)
        r3_212 = 0 - (0 - r12_261);
    
    void* r1_213 = &(&format)[r3_212 + 0x140];
    char r0_243 = *(r1_213 - 0x100);
    *(r1_213 - 0x100) = lr_125;
    char var_9e_1 = r0_243;
    char var_9d;
    uint32_t lr_126 = var_9d;
    int32_t r0_244 = lr_126 + r3_212 + key[0x6b][0];
    int32_t r3_214 = r0_244 & 0xff;
    
    if (0 - r0_244 >= 0)
        r3_214 = 0 - (0 - r0_244);
    
    void* r1_215 = &(&format)[r3_214 + 0x140];
    char r12_265 = *(r1_215 - 0x100);
    *(r1_215 - 0x100) = lr_126;
    char var_9d_1 = r12_265;
    char var_9c;
    uint32_t lr_127 = var_9c;
    int32_t r12_266 = lr_127 + r3_214 + key[0x6c][0];
    int32_t r3_216 = r12_266 & 0xff;
    
    if (0 - r12_266 >= 0)
        r3_216 = 0 - (0 - r12_266);
    
    void* r1_217 = &(&format)[r3_216 + 0x140];
    char r0_248 = *(r1_217 - 0x100);
    *(r1_217 - 0x100) = lr_127;
    char var_9b;
    uint32_t lr_128 = var_9b;
    int32_t r0_249 = lr_128 + r3_216 + key[0x6d][0];
    int32_t r3_218 = r0_249 & 0xff;
    
    if (0 - r0_249 >= 0)
        r3_218 = 0 - (0 - r0_249);
    
    void* r1_219 = &(&format)[r3_218 + 0x140];
    char r12_270 = *(r1_219 - 0x100);
    *(r1_219 - 0x100) = lr_128;
    char var_9b_1 = r12_270;
    char var_9a;
    uint32_t lr_129 = var_9a;
    int32_t r12_271 = lr_129 + r3_218 + key[0x6e][0];
    int32_t r3_220 = r12_271 & 0xff;
    
    if (0 - r12_271 >= 0)
        r3_220 = 0 - (0 - r12_271);
    
    void* r1_221 = &(&format)[r3_220 + 0x140];
    char r0_253 = *(r1_221 - 0x100);
    *(r1_221 - 0x100) = lr_129;
    char var_9a_1 = r0_253;
    char var_99;
    uint32_t lr_130 = var_99;
    int32_t r0_254 = lr_130 + r3_220 + key[0x6f][0];
    int32_t r3_222 = r0_254 & 0xff;
    
    if (0 - r0_254 >= 0)
        r3_222 = 0 - (0 - r0_254);
    
    void* r1_223 = &(&format)[r3_222 + 0x140];
    char r12_275 = *(r1_223 - 0x100);
    *(r1_223 - 0x100) = lr_130;
    char var_99_1 = r12_275;
    char var_98;
    uint32_t lr_131 = var_98;
    int32_t r12_276 = lr_131 + r3_222 + key[0x70][0];
    int32_t r3_224 = r12_276 & 0xff;
    
    if (0 - r12_276 >= 0)
        r3_224 = 0 - (0 - r12_276);
    
    void* r1_225 = &(&format)[r3_224 + 0x140];
    char r0_258 = *(r1_225 - 0x100);
    *(r1_225 - 0x100) = lr_131;
    char var_97;
    uint32_t lr_132 = var_97;
    int32_t r0_259 = lr_132 + r3_224 + key[0x71][0];
    int32_t r3_226 = r0_259 & 0xff;
    
    if (0 - r0_259 >= 0)
        r3_226 = 0 - (0 - r0_259);
    
    void* r1_227 = &(&format)[r3_226 + 0x140];
    char r12_280 = *(r1_227 - 0x100);
    *(r1_227 - 0x100) = lr_132;
    char var_97_1 = r12_280;
    char var_96;
    uint32_t lr_133 = var_96;
    int32_t r12_281 = lr_133 + r3_226 + key[0x72][0];
    int32_t r3_228 = r12_281 & 0xff;
    
    if (0 - r12_281 >= 0)
        r3_228 = 0 - (0 - r12_281);
    
    void* r1_229 = &(&format)[r3_228 + 0x140];
    char r0_263 = *(r1_229 - 0x100);
    *(r1_229 - 0x100) = lr_133;
    char var_96_1 = r0_263;
    char var_95;
    uint32_t lr_134 = var_95;
    int32_t r0_264 = lr_134 + r3_228 + key[0x73][0];
    int32_t r3_230 = r0_264 & 0xff;
    
    if (0 - r0_264 >= 0)
        r3_230 = 0 - (0 - r0_264);
    
    void* r1_231 = &(&format)[r3_230 + 0x140];
    char r12_285 = *(r1_231 - 0x100);
    *(r1_231 - 0x100) = lr_134;
    char var_95_1 = r12_285;
    char var_94;
    uint32_t lr_135 = var_94;
    int32_t r12_286 = lr_135 + r3_230 + key[0x74][0];
    int32_t r3_232 = r12_286 & 0xff;
    
    if (0 - r12_286 >= 0)
        r3_232 = 0 - (0 - r12_286);
    
    void* r1_233 = &(&format)[r3_232 + 0x140];
    char r0_268 = *(r1_233 - 0x100);
    *(r1_233 - 0x100) = lr_135;
    char var_93;
    uint32_t lr_136 = var_93;
    int32_t r0_269 = lr_136 + r3_232 + key[0x75][0];
    int32_t r3_234 = r0_269 & 0xff;
    
    if (0 - r0_269 >= 0)
        r3_234 = 0 - (0 - r0_269);
    
    void* r1_235 = &(&format)[r3_234 + 0x140];
    char r12_290 = *(r1_235 - 0x100);
    *(r1_235 - 0x100) = lr_136;
    char var_93_1 = r12_290;
    char var_92;
    uint32_t lr_137 = var_92;
    int32_t r12_291 = lr_137 + r3_234 + key[0x76][0];
    int32_t r3_236 = r12_291 & 0xff;
    
    if (0 - r12_291 >= 0)
        r3_236 = 0 - (0 - r12_291);
    
    void* r1_237 = &(&format)[r3_236 + 0x140];
    char r0_273 = *(r1_237 - 0x100);
    *(r1_237 - 0x100) = lr_137;
    char var_92_1 = r0_273;
    char var_91;
    uint32_t lr_138 = var_91;
    int32_t r0_274 = lr_138 + r3_236 + key[0x77][0];
    int32_t r3_238 = r0_274 & 0xff;
    
    if (0 - r0_274 >= 0)
        r3_238 = 0 - (0 - r0_274);
    
    void* r1_239 = &(&format)[r3_238 + 0x140];
    char r12_295 = *(r1_239 - 0x100);
    *(r1_239 - 0x100) = lr_138;
    char var_91_1 = r12_295;
    char var_90;
    uint32_t lr_139 = var_90;
    int32_t r12_296 = lr_139 + r3_238 + key[0x78][0];
    int32_t r3_240 = r12_296 & 0xff;
    
    if (0 - r12_296 >= 0)
        r3_240 = 0 - (0 - r12_296);
    
    void* r1_241 = &(&format)[r3_240 + 0x140];
    char r0_278 = *(r1_241 - 0x100);
    *(r1_241 - 0x100) = lr_139;
    char var_8f;
    uint32_t lr_140 = var_8f;
    int32_t r0_279 = lr_140 + r3_240 + key[0x79][0];
    int32_t r3_242 = r0_279 & 0xff;
    
    if (0 - r0_279 >= 0)
        r3_242 = 0 - (0 - r0_279);
    
    void* r1_243 = &(&format)[r3_242 + 0x140];
    char r12_300 = *(r1_243 - 0x100);
    *(r1_243 - 0x100) = lr_140;
    char var_8f_1 = r12_300;
    char var_8e;
    uint32_t lr_141 = var_8e;
    int32_t r12_301 = lr_141 + r3_242 + key[0x7a][0];
    int32_t r3_244 = r12_301 & 0xff;
    
    if (0 - r12_301 >= 0)
        r3_244 = 0 - (0 - r12_301);
    
    void* r1_245 = &(&format)[r3_244 + 0x140];
    char r0_283 = *(r1_245 - 0x100);
    *(r1_245 - 0x100) = lr_141;
    char var_8e_1 = r0_283;
    char var_8d;
    uint32_t lr_142 = var_8d;
    int32_t r0_284 = lr_142 + r3_244 + key[0x7b][0];
    int32_t r3_246 = r0_284 & 0xff;
    
    if (0 - r0_284 >= 0)
        r3_246 = 0 - (0 - r0_284);
    
    void* r1_247 = &(&format)[r3_246 + 0x140];
    char r12_305 = *(r1_247 - 0x100);
    *(r1_247 - 0x100) = lr_142;
    char var_8d_1 = r12_305;
    char var_8c;
    uint32_t lr_143 = var_8c;
    int32_t r12_306 = lr_143 + r3_246 + key[0x7c][0];
    int32_t r3_248 = r12_306 & 0xff;
    
    if (0 - r12_306 >= 0)
        r3_248 = 0 - (0 - r12_306);
    
    void* r1_249 = &(&format)[r3_248 + 0x140];
    char r0_288 = *(r1_249 - 0x100);
    *(r1_249 - 0x100) = lr_143;
    char var_8b;
    uint32_t lr_144 = var_8b;
    int32_t r0_289 = lr_144 + r3_248 + key[0x7d][0];
    int32_t r3_250 = r0_289 & 0xff;
    
    if (0 - r0_289 >= 0)
        r3_250 = 0 - (0 - r0_289);
    
    void* r1_251 = &(&format)[r3_250 + 0x140];
    char r12_310 = *(r1_251 - 0x100);
    *(r1_251 - 0x100) = lr_144;
    char var_8b_1 = r12_310;
    char var_8a;
    uint32_t lr_145 = var_8a;
    int32_t r12_311 = lr_145 + r3_250 + key[0x7e][0];
    int32_t r3_252 = r12_311 & 0xff;
    
    if (0 - r12_311 >= 0)
        r3_252 = 0 - (0 - r12_311);
    
    void* r1_253 = &(&format)[r3_252 + 0x140];
    char r0_293 = *(r1_253 - 0x100);
    *(r1_253 - 0x100) = lr_145;
    char var_8a_1 = r0_293;
    char var_89;
    uint32_t lr_146 = var_89;
    int32_t r0_294 = lr_146 + r3_252 + key[0x7f][0];
    int32_t r3_254 = r0_294 & 0xff;
    
    if (0 - r0_294 >= 0)
        r3_254 = 0 - (0 - r0_294);
    
    void* r1_255 = &(&format)[r3_254 + 0x140];
    char r12_315 = *(r1_255 - 0x100);
    *(r1_255 - 0x100) = lr_146;
    char var_89_1 = r12_315;
    uint32_t lr_147 = var_88;
    int32_t r12_316 = lr_147 + r3_254 + key[0x80][0];
    int32_t r3_256 = r12_316 & 0xff;
    
    if (0 - r12_316 >= 0)
        r3_256 = 0 - (0 - r12_316);
    
    void* r1_257 = &(&format)[r3_256 + 0x140];
    char r0_298 = *(r1_257 - 0x100);
    *(r1_257 - 0x100) = lr_147;
    char var_87;
    uint32_t lr_148 = var_87;
    int32_t r0_299 = lr_148 + r3_256 + key[0x81][0];
    int32_t r3_258 = r0_299 & 0xff;
    
    if (0 - r0_299 >= 0)
        r3_258 = 0 - (0 - r0_299);
    
    void* r1_259 = &(&format)[r3_258 + 0x140];
    char r12_320 = *(r1_259 - 0x100);
    *(r1_259 - 0x100) = lr_148;
    char var_87_1 = r12_320;
    char var_86;
    uint32_t lr_149 = var_86;
    int32_t r12_321 = lr_149 + r3_258 + key[0x82][0];
    int32_t r3_260 = r12_321 & 0xff;
    
    if (0 - r12_321 >= 0)
        r3_260 = 0 - (0 - r12_321);
    
    void* r1_261 = &(&format)[r3_260 + 0x140];
    char r0_303 = *(r1_261 - 0x100);
    *(r1_261 - 0x100) = lr_149;
    char var_86_1 = r0_303;
    char var_85;
    uint32_t lr_150 = var_85;
    int32_t r0_304 = lr_150 + r3_260 + key[0x83][0];
    int32_t r3_262 = r0_304 & 0xff;
    
    if (0 - r0_304 >= 0)
        r3_262 = 0 - (0 - r0_304);
    
    void* r1_263 = &(&format)[r3_262 + 0x140];
    char r12_325 = *(r1_263 - 0x100);
    *(r1_263 - 0x100) = lr_150;
    char var_85_1 = r12_325;
    char var_84;
    uint32_t lr_151 = var_84;
    int32_t r12_326 = lr_151 + r3_262 + key[0x84][0];
    int32_t r3_264 = r12_326 & 0xff;
    
    if (0 - r12_326 >= 0)
        r3_264 = 0 - (0 - r12_326);
    
    void* r1_265 = &(&format)[r3_264 + 0x140];
    char r0_308 = *(r1_265 - 0x100);
    *(r1_265 - 0x100) = lr_151;
    char var_83;
    uint32_t lr_152 = var_83;
    int32_t r0_309 = lr_152 + r3_264 + key[0x85][0];
    int32_t r3_266 = r0_309 & 0xff;
    
    if (0 - r0_309 >= 0)
        r3_266 = 0 - (0 - r0_309);
    
    void* r1_267 = &(&format)[r3_266 + 0x140];
    char r12_330 = *(r1_267 - 0x100);
    *(r1_267 - 0x100) = lr_152;
    char var_83_1 = r12_330;
    char var_82;
    uint32_t lr_153 = var_82;
    int32_t r12_331 = lr_153 + r3_266 + key[0x86][0];
    int32_t r3_268 = r12_331 & 0xff;
    
    if (0 - r12_331 >= 0)
        r3_268 = 0 - (0 - r12_331);
    
    void* r1_269 = &(&format)[r3_268 + 0x140];
    char r0_313 = *(r1_269 - 0x100);
    *(r1_269 - 0x100) = lr_153;
    char var_82_1 = r0_313;
    char var_81;
    uint32_t lr_154 = var_81;
    int32_t r0_314 = lr_154 + r3_268 + key[0x87][0];
    int32_t r3_270 = r0_314 & 0xff;
    
    if (0 - r0_314 >= 0)
        r3_270 = 0 - (0 - r0_314);
    
    void* r1_271 = &(&format)[r3_270 + 0x140];
    char r12_335 = *(r1_271 - 0x100);
    *(r1_271 - 0x100) = lr_154;
    char var_81_1 = r12_335;
    char var_80;
    uint32_t lr_155 = var_80;
    int32_t r12_336 = lr_155 + r3_270 + key[0x88][0];
    int32_t r3_272 = r12_336 & 0xff;
    
    if (0 - r12_336 >= 0)
        r3_272 = 0 - (0 - r12_336);
    
    void* r1_273 = &(&format)[r3_272 + 0x140];
    char r0_318 = *(r1_273 - 0x100);
    *(r1_273 - 0x100) = lr_155;
    char var_7f;
    uint32_t lr_156 = var_7f;
    int32_t r0_319 = lr_156 + r3_272 + key[0x89][0];
    int32_t r3_274 = r0_319 & 0xff;
    
    if (0 - r0_319 >= 0)
        r3_274 = 0 - (0 - r0_319);
    
    void* r1_275 = &(&format)[r3_274 + 0x140];
    char r12_340 = *(r1_275 - 0x100);
    *(r1_275 - 0x100) = lr_156;
    char var_7f_1 = r12_340;
    char var_7e;
    uint32_t lr_157 = var_7e;
    int32_t r12_341 = lr_157 + r3_274 + key[0x8a][0];
    int32_t r3_276 = r12_341 & 0xff;
    
    if (0 - r12_341 >= 0)
        r3_276 = 0 - (0 - r12_341);
    
    void* r1_277 = &(&format)[r3_276 + 0x140];
    char r0_323 = *(r1_277 - 0x100);
    *(r1_277 - 0x100) = lr_157;
    char var_7e_1 = r0_323;
    char var_7d;
    uint32_t lr_158 = var_7d;
    int32_t r0_324 = lr_158 + r3_276 + key[0x8b][0];
    int32_t r3_278 = r0_324 & 0xff;
    
    if (0 - r0_324 >= 0)
        r3_278 = 0 - (0 - r0_324);
    
    void* r1_279 = &(&format)[r3_278 + 0x140];
    char r12_345 = *(r1_279 - 0x100);
    *(r1_279 - 0x100) = lr_158;
    char var_7d_1 = r12_345;
    char var_7c;
    uint32_t lr_159 = var_7c;
    int32_t r0_326 = lr_159 + r3_278 + key[0x8c][0];
    int32_t r12_346 = r0_326 & 0xff;
    
    if (0 - r0_326 >= 0)
        r12_346 = 0 - (0 - r0_326);
    
    void* r1_281 = &(&format)[r12_346 + 0x140];
    char r0_327 = *(r1_281 - 0x100);
    *(r1_281 - 0x100) = lr_159;
    char var_7b;
    uint32_t lr_160 = var_7b;
    int32_t r0_328 = lr_160 + r12_346 + key[0x8d][0];
    int32_t r3_282 = r0_328 & 0xff;
    
    if (0 - r0_328 >= 0)
        r3_282 = 0 - (0 - r0_328);
    
    void* r1_283 = &(&format)[r3_282 + 0x140];
    char r12_349 = *(r1_283 - 0x100);
    *(r1_283 - 0x100) = lr_160;
    char var_7b_1 = r12_349;
    char var_7a;
    uint32_t lr_161 = var_7a;
    int32_t r12_350 = lr_161 + r3_282 + key[0x8e][0];
    int32_t r3_284 = r12_350 & 0xff;
    
    if (0 - r12_350 >= 0)
        r3_284 = 0 - (0 - r12_350);
    
    void* r1_285 = &(&format)[r3_284 + 0x140];
    char r0_332 = *(r1_285 - 0x100);
    *(r1_285 - 0x100) = lr_161;
    char var_7a_1 = r0_332;
    char var_79;
    uint32_t lr_162 = var_79;
    int32_t r0_333 = lr_162 + r3_284 + key[0x8f][0];
    int32_t r3_286 = r0_333 & 0xff;
    
    if (0 - r0_333 >= 0)
        r3_286 = 0 - (0 - r0_333);
    
    void* r1_287 = &(&format)[r3_286 + 0x140];
    char r12_354 = *(r1_287 - 0x100);
    *(r1_287 - 0x100) = lr_162;
    char var_79_1 = r12_354;
    char var_78;
    uint32_t lr_163 = var_78;
    int32_t r12_355 = lr_163 + r3_286 + key[0x90][0];
    int32_t r3_288 = r12_355 & 0xff;
    
    if (0 - r12_355 >= 0)
        r3_288 = 0 - (0 - r12_355);
    
    void* r1_289 = &(&format)[r3_288 + 0x140];
    char r0_337 = *(r1_289 - 0x100);
    *(r1_289 - 0x100) = lr_163;
    char var_77;
    uint32_t lr_164 = var_77;
    int32_t r0_338 = lr_164 + r3_288 + key[0x91][0];
    int32_t r3_290 = r0_338 & 0xff;
    
    if (0 - r0_338 >= 0)
        r3_290 = 0 - (0 - r0_338);
    
    void* r1_291 = &(&format)[r3_290 + 0x140];
    char r12_359 = *(r1_291 - 0x100);
    *(r1_291 - 0x100) = lr_164;
    char var_77_1 = r12_359;
    char var_76;
    uint32_t lr_165 = var_76;
    int32_t r12_360 = lr_165 + r3_290 + key[0x92][0];
    int32_t r3_292 = r12_360 & 0xff;
    
    if (0 - r12_360 >= 0)
        r3_292 = 0 - (0 - r12_360);
    
    void* r1_293 = &(&format)[r3_292 + 0x140];
    char r0_342 = *(r1_293 - 0x100);
    *(r1_293 - 0x100) = lr_165;
    char var_76_1 = r0_342;
    char var_75;
    uint32_t lr_166 = var_75;
    int32_t r0_343 = lr_166 + r3_292 + key[0x93][0];
    int32_t r3_294 = r0_343 & 0xff;
    
    if (0 - r0_343 >= 0)
        r3_294 = 0 - (0 - r0_343);
    
    void* r1_295 = &(&format)[r3_294 + 0x140];
    char r12_364 = *(r1_295 - 0x100);
    *(r1_295 - 0x100) = lr_166;
    char var_75_1 = r12_364;
    char var_74;
    uint32_t lr_167 = var_74;
    int32_t r12_365 = lr_167 + r3_294 + key[0x94][0];
    int32_t r3_296 = r12_365 & 0xff;
    
    if (0 - r12_365 >= 0)
        r3_296 = 0 - (0 - r12_365);
    
    void* r1_297 = &(&format)[r3_296 + 0x140];
    char r0_347 = *(r1_297 - 0x100);
    *(r1_297 - 0x100) = lr_167;
    char var_73;
    uint32_t lr_168 = var_73;
    int32_t r0_348 = lr_168 + r3_296 + key[0x95][0];
    int32_t r3_298 = r0_348 & 0xff;
    
    if (0 - r0_348 >= 0)
        r3_298 = 0 - (0 - r0_348);
    
    void* r1_299 = &(&format)[r3_298 + 0x140];
    char r12_369 = *(r1_299 - 0x100);
    *(r1_299 - 0x100) = lr_168;
    char var_73_1 = r12_369;
    char var_72;
    uint32_t lr_169 = var_72;
    int32_t r12_370 = lr_169 + r3_298 + key[0x96][0];
    int32_t r3_300 = r12_370 & 0xff;
    
    if (0 - r12_370 >= 0)
        r3_300 = 0 - (0 - r12_370);
    
    void* r1_301 = &(&format)[r3_300 + 0x140];
    char r0_352 = *(r1_301 - 0x100);
    *(r1_301 - 0x100) = lr_169;
    char var_72_1 = r0_352;
    char var_71;
    uint32_t lr_170 = var_71;
    int32_t r0_353 = lr_170 + r3_300 + key[0x97][0];
    int32_t r3_302 = r0_353 & 0xff;
    
    if (0 - r0_353 >= 0)
        r3_302 = 0 - (0 - r0_353);
    
    void* r1_303 = &(&format)[r3_302 + 0x140];
    char r12_374 = *(r1_303 - 0x100);
    *(r1_303 - 0x100) = lr_170;
    char var_71_1 = r12_374;
    char var_70;
    uint32_t lr_171 = var_70;
    int32_t r12_375 = lr_171 + r3_302 + key[0x98][0];
    int32_t r3_304 = r12_375 & 0xff;
    
    if (0 - r12_375 >= 0)
        r3_304 = 0 - (0 - r12_375);
    
    void* r1_305 = &(&format)[r3_304 + 0x140];
    char r0_357 = *(r1_305 - 0x100);
    *(r1_305 - 0x100) = lr_171;
    char var_6f;
    uint32_t lr_172 = var_6f;
    int32_t r0_358 = lr_172 + r3_304 + key[0x99][0];
    int32_t r3_306 = r0_358 & 0xff;
    
    if (0 - r0_358 >= 0)
        r3_306 = 0 - (0 - r0_358);
    
    void* r1_307 = &(&format)[r3_306 + 0x140];
    char r12_379 = *(r1_307 - 0x100);
    *(r1_307 - 0x100) = lr_172;
    char var_6f_1 = r12_379;
    char var_6e;
    uint32_t lr_173 = var_6e;
    int32_t r12_380 = lr_173 + r3_306 + key[0x9a][0];
    int32_t r3_308 = r12_380 & 0xff;
    
    if (0 - r12_380 >= 0)
        r3_308 = 0 - (0 - r12_380);
    
    void* r1_309 = &(&format)[r3_308 + 0x140];
    char r0_362 = *(r1_309 - 0x100);
    *(r1_309 - 0x100) = lr_173;
    char var_6e_1 = r0_362;
    char var_6d;
    uint32_t lr_174 = var_6d;
    int32_t r0_363 = lr_174 + r3_308 + key[0x9b][0];
    int32_t r3_310 = r0_363 & 0xff;
    
    if (0 - r0_363 >= 0)
        r3_310 = 0 - (0 - r0_363);
    
    void* r1_311 = &(&format)[r3_310 + 0x140];
    char r12_384 = *(r1_311 - 0x100);
    *(r1_311 - 0x100) = lr_174;
    char var_6d_1 = r12_384;
    char var_6c;
    uint32_t lr_175 = var_6c;
    int32_t r12_385 = lr_175 + r3_310 + key[0x9c][0];
    int32_t r3_312 = r12_385 & 0xff;
    
    if (0 - r12_385 >= 0)
        r3_312 = 0 - (0 - r12_385);
    
    void* r1_313 = &(&format)[r3_312 + 0x140];
    char r0_367 = *(r1_313 - 0x100);
    *(r1_313 - 0x100) = lr_175;
    char var_6b;
    uint32_t lr_176 = var_6b;
    int32_t r0_368 = lr_176 + r3_312 + key[0x9d][0];
    int32_t r3_314 = r0_368 & 0xff;
    
    if (0 - r0_368 >= 0)
        r3_314 = 0 - (0 - r0_368);
    
    void* r1_315 = &(&format)[r3_314 + 0x140];
    char r12_389 = *(r1_315 - 0x100);
    *(r1_315 - 0x100) = lr_176;
    char var_6b_1 = r12_389;
    char var_6a;
    uint32_t lr_177 = var_6a;
    int32_t r12_390 = lr_177 + r3_314 + key[0x9e][0];
    int32_t r3_316 = r12_390 & 0xff;
    
    if (0 - r12_390 >= 0)
        r3_316 = 0 - (0 - r12_390);
    
    void* r1_317 = &(&format)[r3_316 + 0x140];
    char r0_372 = *(r1_317 - 0x100);
    *(r1_317 - 0x100) = lr_177;
    char var_6a_1 = r0_372;
    char var_69;
    uint32_t lr_178 = var_69;
    int32_t r0_373 = lr_178 + r3_316 + key[0x9f][0];
    int32_t r3_318 = r0_373 & 0xff;
    
    if (0 - r0_373 >= 0)
        r3_318 = 0 - (0 - r0_373);
    
    void* r1_319 = &(&format)[r3_318 + 0x140];
    char r12_394 = *(r1_319 - 0x100);
    *(r1_319 - 0x100) = lr_178;
    char var_69_1 = r12_394;
    char var_68;
    uint32_t lr_179 = var_68;
    int32_t r12_395 = lr_179 + r3_318 + key[0xa0][0];
    int32_t r3_320 = r12_395 & 0xff;
    
    if (0 - r12_395 >= 0)
        r3_320 = 0 - (0 - r12_395);
    
    void* r1_321 = &(&format)[r3_320 + 0x140];
    char r0_377 = *(r1_321 - 0x100);
    *(r1_321 - 0x100) = lr_179;
    char var_67;
    uint32_t lr_180 = var_67;
    int32_t r0_378 = lr_180 + r3_320 + key[0xa1][0];
    int32_t r3_322 = r0_378 & 0xff;
    
    if (0 - r0_378 >= 0)
        r3_322 = 0 - (0 - r0_378);
    
    void* r1_323 = &(&format)[r3_322 + 0x140];
    char r12_399 = *(r1_323 - 0x100);
    *(r1_323 - 0x100) = lr_180;
    char var_67_1 = r12_399;
    char var_66;
    uint32_t lr_181 = var_66;
    int32_t r12_400 = lr_181 + r3_322 + key[0xa2][0];
    int32_t r3_324 = r12_400 & 0xff;
    
    if (0 - r12_400 >= 0)
        r3_324 = 0 - (0 - r12_400);
    
    void* r1_325 = &(&format)[r3_324 + 0x140];
    char r0_382 = *(r1_325 - 0x100);
    *(r1_325 - 0x100) = lr_181;
    char var_66_1 = r0_382;
    char var_65;
    uint32_t lr_182 = var_65;
    int32_t r0_383 = lr_182 + r3_324 + key[0xa3][0];
    int32_t r3_326 = r0_383 & 0xff;
    
    if (0 - r0_383 >= 0)
        r3_326 = 0 - (0 - r0_383);
    
    void* r1_327 = &(&format)[r3_326 + 0x140];
    char r12_404 = *(r1_327 - 0x100);
    *(r1_327 - 0x100) = lr_182;
    char var_65_1 = r12_404;
    char var_64;
    uint32_t lr_183 = var_64;
    int32_t r12_405 = lr_183 + r3_326 + key[0xa4][0];
    int32_t r3_328 = r12_405 & 0xff;
    
    if (0 - r12_405 >= 0)
        r3_328 = 0 - (0 - r12_405);
    
    void* r1_329 = &(&format)[r3_328 + 0x140];
    char r0_387 = *(r1_329 - 0x100);
    *(r1_329 - 0x100) = lr_183;
    char var_63;
    uint32_t lr_184 = var_63;
    int32_t r0_388 = lr_184 + r3_328 + key[0xa5][0];
    int32_t r3_330 = r0_388 & 0xff;
    
    if (0 - r0_388 >= 0)
        r3_330 = 0 - (0 - r0_388);
    
    void* r1_331 = &(&format)[r3_330 + 0x140];
    char r12_409 = *(r1_331 - 0x100);
    *(r1_331 - 0x100) = lr_184;
    char var_63_1 = r12_409;
    char var_62;
    uint32_t lr_185 = var_62;
    int32_t r12_410 = lr_185 + r3_330 + key[0xa6][0];
    int32_t r3_332 = r12_410 & 0xff;
    
    if (0 - r12_410 >= 0)
        r3_332 = 0 - (0 - r12_410);
    
    void* r1_333 = &(&format)[r3_332 + 0x140];
    char r0_392 = *(r1_333 - 0x100);
    *(r1_333 - 0x100) = lr_185;
    char var_62_1 = r0_392;
    char var_61;
    uint32_t lr_186 = var_61;
    int32_t r0_393 = lr_186 + r3_332 + key[0xa7][0];
    int32_t r3_334 = r0_393 & 0xff;
    
    if (0 - r0_393 >= 0)
        r3_334 = 0 - (0 - r0_393);
    
    void* r1_335 = &(&format)[r3_334 + 0x140];
    char r12_414 = *(r1_335 - 0x100);
    *(r1_335 - 0x100) = lr_186;
    char var_61_1 = r12_414;
    char var_60;
    uint32_t lr_187 = var_60;
    int32_t r12_415 = lr_187 + r3_334 + key[0xa8][0];
    int32_t r3_336 = r12_415 & 0xff;
    
    if (0 - r12_415 >= 0)
        r3_336 = 0 - (0 - r12_415);
    
    void* r1_337 = &(&format)[r3_336 + 0x140];
    char r0_397 = *(r1_337 - 0x100);
    *(r1_337 - 0x100) = lr_187;
    char var_5f;
    uint32_t lr_188 = var_5f;
    int32_t r0_398 = lr_188 + r3_336 + key[0xa9][0];
    int32_t r3_338 = r0_398 & 0xff;
    
    if (0 - r0_398 >= 0)
        r3_338 = 0 - (0 - r0_398);
    
    void* r1_339 = &(&format)[r3_338 + 0x140];
    char r12_419 = *(r1_339 - 0x100);
    *(r1_339 - 0x100) = lr_188;
    char var_5f_1 = r12_419;
    char var_5e;
    uint32_t lr_189 = var_5e;
    int32_t r12_420 = lr_189 + r3_338 + key[0xaa][0];
    int32_t r3_340 = r12_420 & 0xff;
    
    if (0 - r12_420 >= 0)
        r3_340 = 0 - (0 - r12_420);
    
    void* r1_341 = &(&format)[r3_340 + 0x140];
    char r0_402 = *(r1_341 - 0x100);
    *(r1_341 - 0x100) = lr_189;
    char var_5e_1 = r0_402;
    char var_5d;
    uint32_t lr_190 = var_5d;
    int32_t r0_403 = lr_190 + r3_340 + key[0xab][0];
    int32_t r3_342 = r0_403 & 0xff;
    
    if (0 - r0_403 >= 0)
        r3_342 = 0 - (0 - r0_403);
    
    void* r1_343 = &(&format)[r3_342 + 0x140];
    char r12_424 = *(r1_343 - 0x100);
    *(r1_343 - 0x100) = lr_190;
    char var_5d_1 = r12_424;
    char var_5c;
    uint32_t lr_191 = var_5c;
    int32_t r12_425 = lr_191 + r3_342 + key[0xac][0];
    int32_t r3_344 = r12_425 & 0xff;
    
    if (0 - r12_425 >= 0)
        r3_344 = 0 - (0 - r12_425);
    
    void* r1_345 = &(&format)[r3_344 + 0x140];
    char r0_407 = *(r1_345 - 0x100);
    *(r1_345 - 0x100) = lr_191;
    char var_5b;
    uint32_t lr_192 = var_5b;
    int32_t r0_408 = lr_192 + r3_344 + key[0xad][0];
    int32_t r3_346 = r0_408 & 0xff;
    
    if (0 - r0_408 >= 0)
        r3_346 = 0 - (0 - r0_408);
    
    void* r1_347 = &(&format)[r3_346 + 0x140];
    char r12_429 = *(r1_347 - 0x100);
    *(r1_347 - 0x100) = lr_192;
    char var_5b_1 = r12_429;
    char var_5a;
    uint32_t lr_193 = var_5a;
    int32_t r12_430 = lr_193 + r3_346 + key[0xae][0];
    int32_t r3_348 = r12_430 & 0xff;
    
    if (0 - r12_430 >= 0)
        r3_348 = 0 - (0 - r12_430);
    
    void* r1_349 = &(&format)[r3_348 + 0x140];
    char r0_412 = *(r1_349 - 0x100);
    *(r1_349 - 0x100) = lr_193;
    char var_5a_1 = r0_412;
    char var_59;
    uint32_t lr_194 = var_59;
    int32_t r0_413 = lr_194 + r3_348 + key[0xaf][0];
    int32_t r3_350 = r0_413 & 0xff;
    
    if (0 - r0_413 >= 0)
        r3_350 = 0 - (0 - r0_413);
    
    void* r1_351 = &(&format)[r3_350 + 0x140];
    char r12_434 = *(r1_351 - 0x100);
    *(r1_351 - 0x100) = lr_194;
    char var_59_1 = r12_434;
    char var_58;
    uint32_t lr_195 = var_58;
    int32_t r12_435 = lr_195 + r3_350 + key[0xb0][0];
    int32_t r3_352 = r12_435 & 0xff;
    
    if (0 - r12_435 >= 0)
        r3_352 = 0 - (0 - r12_435);
    
    void* r1_353 = &(&format)[r3_352 + 0x140];
    char r0_417 = *(r1_353 - 0x100);
    *(r1_353 - 0x100) = lr_195;
    char var_57;
    uint32_t lr_196 = var_57;
    int32_t r0_418 = lr_196 + r3_352 + key[0xb1][0];
    int32_t r3_354 = r0_418 & 0xff;
    
    if (0 - r0_418 >= 0)
        r3_354 = 0 - (0 - r0_418);
    
    void* r1_355 = &(&format)[r3_354 + 0x140];
    char r12_439 = *(r1_355 - 0x100);
    *(r1_355 - 0x100) = lr_196;
    char var_57_1 = r12_439;
    char var_56;
    uint32_t lr_197 = var_56;
    int32_t r12_440 = lr_197 + r3_354 + key[0xb2][0];
    int32_t r3_356 = r12_440 & 0xff;
    
    if (0 - r12_440 >= 0)
        r3_356 = 0 - (0 - r12_440);
    
    void* r1_357 = &(&format)[r3_356 + 0x140];
    char r0_422 = *(r1_357 - 0x100);
    *(r1_357 - 0x100) = lr_197;
    char var_56_1 = r0_422;
    char var_55;
    uint32_t lr_198 = var_55;
    int32_t r0_423 = lr_198 + r3_356 + key[0xb3][0];
    int32_t r3_358 = r0_423 & 0xff;
    
    if (0 - r0_423 >= 0)
        r3_358 = 0 - (0 - r0_423);
    
    void* r1_359 = &(&format)[r3_358 + 0x140];
    char r12_444 = *(r1_359 - 0x100);
    *(r1_359 - 0x100) = lr_198;
    char var_55_1 = r12_444;
    char var_54;
    uint32_t lr_199 = var_54;
    int32_t r12_445 = lr_199 + r3_358 + key[0xb4][0];
    int32_t r3_360 = r12_445 & 0xff;
    
    if (0 - r12_445 >= 0)
        r3_360 = 0 - (0 - r12_445);
    
    void* r1_361 = &(&format)[r3_360 + 0x140];
    char r0_427 = *(r1_361 - 0x100);
    *(r1_361 - 0x100) = lr_199;
    char var_53;
    uint32_t lr_200 = var_53;
    int32_t r0_428 = lr_200 + r3_360 + key[0xb5][0];
    int32_t r3_362 = r0_428 & 0xff;
    
    if (0 - r0_428 >= 0)
        r3_362 = 0 - (0 - r0_428);
    
    void* r1_363 = &(&format)[r3_362 + 0x140];
    char r12_449 = *(r1_363 - 0x100);
    *(r1_363 - 0x100) = lr_200;
    char var_53_1 = r12_449;
    char var_52;
    uint32_t lr_201 = var_52;
    int32_t r12_450 = lr_201 + r3_362 + key[0xb6][0];
    int32_t r3_364 = r12_450 & 0xff;
    
    if (0 - r12_450 >= 0)
        r3_364 = 0 - (0 - r12_450);
    
    void* r1_365 = &(&format)[r3_364 + 0x140];
    char r0_432 = *(r1_365 - 0x100);
    *(r1_365 - 0x100) = lr_201;
    char var_52_1 = r0_432;
    char var_51;
    uint32_t lr_202 = var_51;
    int32_t r0_433 = lr_202 + r3_364 + key[0xb7][0];
    int32_t r3_366 = r0_433 & 0xff;
    
    if (0 - r0_433 >= 0)
        r3_366 = 0 - (0 - r0_433);
    
    void* r1_367 = &(&format)[r3_366 + 0x140];
    char r12_454 = *(r1_367 - 0x100);
    *(r1_367 - 0x100) = lr_202;
    char var_51_1 = r12_454;
    char var_50;
    uint32_t lr_203 = var_50;
    int32_t r12_455 = lr_203 + r3_366 + key[0xb8][0];
    int32_t r3_368 = r12_455 & 0xff;
    
    if (0 - r12_455 >= 0)
        r3_368 = 0 - (0 - r12_455);
    
    void* r1_369 = &(&format)[r3_368 + 0x140];
    char r0_437 = *(r1_369 - 0x100);
    *(r1_369 - 0x100) = lr_203;
    char var_4f;
    uint32_t lr_204 = var_4f;
    int32_t r0_438 = lr_204 + r3_368 + key[0xb9][0];
    int32_t r3_370 = r0_438 & 0xff;
    
    if (0 - r0_438 >= 0)
        r3_370 = 0 - (0 - r0_438);
    
    void* r1_371 = &(&format)[r3_370 + 0x140];
    char r12_459 = *(r1_371 - 0x100);
    *(r1_371 - 0x100) = lr_204;
    char var_4f_1 = r12_459;
    char var_4e;
    uint32_t lr_205 = var_4e;
    int32_t r12_460 = lr_205 + r3_370 + key[0xba][0];
    int32_t r3_372 = r12_460 & 0xff;
    
    if (0 - r12_460 >= 0)
        r3_372 = 0 - (0 - r12_460);
    
    void* r1_373 = &(&format)[r3_372 + 0x140];
    char r0_442 = *(r1_373 - 0x100);
    *(r1_373 - 0x100) = lr_205;
    char var_4e_1 = r0_442;
    char var_4d;
    uint32_t lr_206 = var_4d;
    int32_t r0_443 = lr_206 + r3_372 + key[0xbb][0];
    int32_t r3_374 = r0_443 & 0xff;
    
    if (0 - r0_443 >= 0)
        r3_374 = 0 - (0 - r0_443);
    
    void* r1_375 = &(&format)[r3_374 + 0x140];
    char r12_464 = *(r1_375 - 0x100);
    *(r1_375 - 0x100) = lr_206;
    char var_4d_1 = r12_464;
    char var_4c;
    uint32_t lr_207 = var_4c;
    int32_t r12_465 = lr_207 + r3_374 + key[0xbc][0];
    int32_t r3_376 = r12_465 & 0xff;
    
    if (0 - r12_465 >= 0)
        r3_376 = 0 - (0 - r12_465);
    
    void* r1_377 = &(&format)[r3_376 + 0x140];
    char r0_447 = *(r1_377 - 0x100);
    *(r1_377 - 0x100) = lr_207;
    char var_4b;
    uint32_t lr_208 = var_4b;
    int32_t r0_448 = lr_208 + r3_376 + key[0xbd][0];
    int32_t r3_378 = r0_448 & 0xff;
    
    if (0 - r0_448 >= 0)
        r3_378 = 0 - (0 - r0_448);
    
    void* r1_379 = &(&format)[r3_378 + 0x140];
    char r12_469 = *(r1_379 - 0x100);
    *(r1_379 - 0x100) = lr_208;
    char var_4b_1 = r12_469;
    char var_4a;
    uint32_t lr_209 = var_4a;
    int32_t r12_470 = lr_209 + r3_378 + key[0xbe][0];
    int32_t r3_380 = r12_470 & 0xff;
    
    if (0 - r12_470 >= 0)
        r3_380 = 0 - (0 - r12_470);
    
    void* r1_381 = &(&format)[r3_380 + 0x140];
    char r0_452 = *(r1_381 - 0x100);
    *(r1_381 - 0x100) = lr_209;
    char var_4a_1 = r0_452;
    char var_49;
    uint32_t lr_210 = var_49;
    int32_t r0_453 = lr_210 + r3_380 + key[0xbf][0];
    int32_t r3_382 = r0_453 & 0xff;
    
    if (0 - r0_453 >= 0)
        r3_382 = 0 - (0 - r0_453);
    
    void* r1_383 = &(&format)[r3_382 + 0x140];
    char r12_474 = *(r1_383 - 0x100);
    *(r1_383 - 0x100) = lr_210;
    char var_49_1 = r12_474;
    char var_48;
    uint32_t lr_211 = var_48;
    int32_t r12_475 = lr_211 + r3_382 + key[0xc0][0];
    int32_t r3_384 = r12_475 & 0xff;
    
    if (0 - r12_475 >= 0)
        r3_384 = 0 - (0 - r12_475);
    
    void* r1_385 = &(&format)[r3_384 + 0x140];
    char r0_457 = *(r1_385 - 0x100);
    *(r1_385 - 0x100) = lr_211;
    char var_47;
    uint32_t lr_212 = var_47;
    int32_t r0_458 = lr_212 + r3_384 + key[0xc1][0];
    int32_t r3_386 = r0_458 & 0xff;
    
    if (0 - r0_458 >= 0)
        r3_386 = 0 - (0 - r0_458);
    
    void* r1_387 = &(&format)[r3_386 + 0x140];
    char r12_479 = *(r1_387 - 0x100);
    *(r1_387 - 0x100) = lr_212;
    char var_47_1 = r12_479;
    char var_46;
    uint32_t lr_213 = var_46;
    int32_t r12_480 = lr_213 + r3_386 + key[0xc2][0];
    int32_t r3_388 = r12_480 & 0xff;
    
    if (0 - r12_480 >= 0)
        r3_388 = 0 - (0 - r12_480);
    
    void* r1_389 = &(&format)[r3_388 + 0x140];
    char r0_462 = *(r1_389 - 0x100);
    *(r1_389 - 0x100) = lr_213;
    char var_46_1 = r0_462;
    char var_45;
    uint32_t lr_214 = var_45;
    int32_t r0_463 = lr_214 + r3_388 + key[0xc3][0];
    int32_t r3_390 = r0_463 & 0xff;
    
    if (0 - r0_463 >= 0)
        r3_390 = 0 - (0 - r0_463);
    
    void* r1_391 = &(&format)[r3_390 + 0x140];
    char r12_484 = *(r1_391 - 0x100);
    *(r1_391 - 0x100) = lr_214;
    char var_45_1 = r12_484;
    char var_44;
    uint32_t lr_215 = var_44;
    int32_t r12_485 = lr_215 + r3_390 + key[0xc4][0];
    int32_t r3_392 = r12_485 & 0xff;
    
    if (0 - r12_485 >= 0)
        r3_392 = 0 - (0 - r12_485);
    
    void* r1_393 = &(&format)[r3_392 + 0x140];
    char r0_467 = *(r1_393 - 0x100);
    *(r1_393 - 0x100) = lr_215;
    char var_43;
    uint32_t lr_216 = var_43;
    int32_t r0_468 = lr_216 + r3_392 + key[0xc5][0];
    int32_t r3_394 = r0_468 & 0xff;
    
    if (0 - r0_468 >= 0)
        r3_394 = 0 - (0 - r0_468);
    
    void* r1_395 = &(&format)[r3_394 + 0x140];
    char r12_489 = *(r1_395 - 0x100);
    *(r1_395 - 0x100) = lr_216;
    char var_43_1 = r12_489;
    char var_42;
    uint32_t lr_217 = var_42;
    int32_t r12_490 = lr_217 + r3_394 + key[0xc6][0];
    int32_t r3_396 = r12_490 & 0xff;
    
    if (0 - r12_490 >= 0)
        r3_396 = 0 - (0 - r12_490);
    
    void* r1_397 = &(&format)[r3_396 + 0x140];
    char r0_472 = *(r1_397 - 0x100);
    *(r1_397 - 0x100) = lr_217;
    char var_42_1 = r0_472;
    char var_41;
    uint32_t lr_218 = var_41;
    int32_t r0_473 = lr_218 + r3_396 + key[0xc7][0];
    int32_t r3_398 = r0_473 & 0xff;
    
    if (0 - r0_473 >= 0)
        r3_398 = 0 - (0 - r0_473);
    
    void* r1_399 = &(&format)[r3_398 + 0x140];
    char r12_494 = *(r1_399 - 0x100);
    *(r1_399 - 0x100) = lr_218;
    char var_41_1 = r12_494;
    char var_40;
    uint32_t lr_219 = var_40;
    int32_t r12_495 = lr_219 + r3_398 + key[0xc8][0];
    int32_t r3_400 = r12_495 & 0xff;
    
    if (0 - r12_495 >= 0)
        r3_400 = 0 - (0 - r12_495);
    
    void* r1_401 = &(&format)[r3_400 + 0x140];
    char r0_477 = *(r1_401 - 0x100);
    *(r1_401 - 0x100) = lr_219;
    char var_3f;
    uint32_t lr_220 = var_3f;
    int32_t r0_478 = lr_220 + r3_400 + key[0xc9][0];
    int32_t r3_402 = r0_478 & 0xff;
    
    if (0 - r0_478 >= 0)
        r3_402 = 0 - (0 - r0_478);
    
    void* r1_403 = &(&format)[r3_402 + 0x140];
    char r12_499 = *(r1_403 - 0x100);
    *(r1_403 - 0x100) = lr_220;
    char var_3f_1 = r12_499;
    char var_3e;
    uint32_t lr_221 = var_3e;
    int32_t r0_480 = lr_221 + r3_402 + key[0xca][0];
    int32_t r12_500 = r0_480 & 0xff;
    
    if (0 - r0_480 >= 0)
        r12_500 = 0 - (0 - r0_480);
    
    void* r1_405 = &(&format)[r12_500 + 0x140];
    char r0_481 = *(r1_405 - 0x100);
    *(r1_405 - 0x100) = lr_221;
    char var_3e_1 = r0_481;
    char var_3d;
    uint32_t lr_222 = var_3d;
    int32_t r0_482 = lr_222 + r12_500 + key[0xcb][0];
    int32_t r3_406 = r0_482 & 0xff;
    
    if (0 - r0_482 >= 0)
        r3_406 = 0 - (0 - r0_482);
    
    void* r1_407 = &(&format)[r3_406 + 0x140];
    char r12_503 = *(r1_407 - 0x100);
    *(r1_407 - 0x100) = lr_222;
    char var_3d_1 = r12_503;
    char var_3c;
    uint32_t lr_223 = var_3c;
    int32_t r12_504 = lr_223 + r3_406 + key[0xcc][0];
    int32_t r3_408 = r12_504 & 0xff;
    
    if (0 - r12_504 >= 0)
        r3_408 = 0 - (0 - r12_504);
    
    void* r1_409 = &(&format)[r3_408 + 0x140];
    char r0_486 = *(r1_409 - 0x100);
    *(r1_409 - 0x100) = lr_223;
    char var_3b;
    uint32_t lr_224 = var_3b;
    int32_t r0_487 = lr_224 + r3_408 + key[0xcd][0];
    int32_t r3_410 = r0_487 & 0xff;
    
    if (0 - r0_487 >= 0)
        r3_410 = 0 - (0 - r0_487);
    
    void* r1_411 = &(&format)[r3_410 + 0x140];
    char r12_508 = *(r1_411 - 0x100);
    *(r1_411 - 0x100) = lr_224;
    char var_3b_1 = r12_508;
    char var_3a;
    uint32_t lr_225 = var_3a;
    int32_t r12_509 = lr_225 + r3_410 + key[0xce][0];
    int32_t r3_412 = r12_509 & 0xff;
    
    if (0 - r12_509 >= 0)
        r3_412 = 0 - (0 - r12_509);
    
    void* r1_413 = &(&format)[r3_412 + 0x140];
    char r0_491 = *(r1_413 - 0x100);
    *(r1_413 - 0x100) = lr_225;
    char var_3a_1 = r0_491;
    char var_39;
    uint32_t lr_226 = var_39;
    int32_t r0_492 = lr_226 + r3_412 + key[0xcf][0];
    int32_t r3_414 = r0_492 & 0xff;
    
    if (0 - r0_492 >= 0)
        r3_414 = 0 - (0 - r0_492);
    
    void* r1_415 = &(&format)[r3_414 + 0x140];
    char r12_513 = *(r1_415 - 0x100);
    *(r1_415 - 0x100) = lr_226;
    char var_39_1 = r12_513;
    char var_38;
    uint32_t lr_227 = var_38;
    int32_t r12_514 = lr_227 + r3_414 + key[0xd0][0];
    int32_t r3_416 = r12_514 & 0xff;
    
    if (0 - r12_514 >= 0)
        r3_416 = 0 - (0 - r12_514);
    
    void* r1_417 = &(&format)[r3_416 + 0x140];
    char r0_496 = *(r1_417 - 0x100);
    *(r1_417 - 0x100) = lr_227;
    char var_37;
    uint32_t lr_228 = var_37;
    int32_t r0_497 = lr_228 + r3_416 + key[0xd1][0];
    int32_t r3_418 = r0_497 & 0xff;
    
    if (0 - r0_497 >= 0)
        r3_418 = 0 - (0 - r0_497);
    
    void* r1_419 = &(&format)[r3_418 + 0x140];
    char r12_518 = *(r1_419 - 0x100);
    *(r1_419 - 0x100) = lr_228;
    char var_37_1 = r12_518;
    char var_36;
    uint32_t lr_229 = var_36;
    int32_t r12_519 = lr_229 + r3_418 + key[0xd2][0];
    int32_t r3_420 = r12_519 & 0xff;
    
    if (0 - r12_519 >= 0)
        r3_420 = 0 - (0 - r12_519);
    
    void* r1_421 = &(&format)[r3_420 + 0x140];
    char r0_501 = *(r1_421 - 0x100);
    *(r1_421 - 0x100) = lr_229;
    char var_36_1 = r0_501;
    char var_35;
    uint32_t lr_230 = var_35;
    int32_t r0_502 = lr_230 + r3_420 + key[0xd3][0];
    int32_t r3_422 = r0_502 & 0xff;
    
    if (0 - r0_502 >= 0)
        r3_422 = 0 - (0 - r0_502);
    
    void* r1_423 = &(&format)[r3_422 + 0x140];
    char r12_523 = *(r1_423 - 0x100);
    *(r1_423 - 0x100) = lr_230;
    char var_35_1 = r12_523;
    char var_34;
    uint32_t lr_231 = var_34;
    int32_t r12_524 = lr_231 + r3_422 + key[0xd4][0];
    int32_t r3_424 = r12_524 & 0xff;
    
    if (0 - r12_524 >= 0)
        r3_424 = 0 - (0 - r12_524);
    
    void* r1_425 = &(&format)[r3_424 + 0x140];
    char r0_506 = *(r1_425 - 0x100);
    *(r1_425 - 0x100) = lr_231;
    char var_33;
    uint32_t lr_232 = var_33;
    int32_t r0_507 = lr_232 + r3_424 + key[0xd5][0];
    int32_t r3_426 = r0_507 & 0xff;
    
    if (0 - r0_507 >= 0)
        r3_426 = 0 - (0 - r0_507);
    
    void* r1_427 = &(&format)[r3_426 + 0x140];
    char r12_528 = *(r1_427 - 0x100);
    *(r1_427 - 0x100) = lr_232;
    char var_33_1 = r12_528;
    char var_32;
    uint32_t lr_233 = var_32;
    int32_t r12_529 = lr_233 + r3_426 + key[0xd6][0];
    int32_t r3_428 = r12_529 & 0xff;
    
    if (0 - r12_529 >= 0)
        r3_428 = 0 - (0 - r12_529);
    
    void* r1_429 = &(&format)[r3_428 + 0x140];
    char r0_511 = *(r1_429 - 0x100);
    *(r1_429 - 0x100) = lr_233;
    char var_32_1 = r0_511;
    char var_31;
    uint32_t lr_234 = var_31;
    int32_t r0_512 = lr_234 + r3_428 + key[0xd7][0];
    int32_t r3_430 = r0_512 & 0xff;
    
    if (0 - r0_512 >= 0)
        r3_430 = 0 - (0 - r0_512);
    
    void* r1_431 = &(&format)[r3_430 + 0x140];
    char r12_533 = *(r1_431 - 0x100);
    *(r1_431 - 0x100) = lr_234;
    char var_31_1 = r12_533;
    char var_30;
    uint32_t lr_235 = var_30;
    int32_t r12_534 = lr_235 + r3_430 + key[0xd8][0];
    int32_t r3_432 = r12_534 & 0xff;
    
    if (0 - r12_534 >= 0)
        r3_432 = 0 - (0 - r12_534);
    
    void* r1_433 = &(&format)[r3_432 + 0x140];
    char r0_516 = *(r1_433 - 0x100);
    *(r1_433 - 0x100) = lr_235;
    char var_2f;
    uint32_t lr_236 = var_2f;
    int32_t r0_517 = lr_236 + r3_432 + key[0xd9][0];
    int32_t r3_434 = r0_517 & 0xff;
    
    if (0 - r0_517 >= 0)
        r3_434 = 0 - (0 - r0_517);
    
    void* r1_435 = &(&format)[r3_434 + 0x140];
    char r12_538 = *(r1_435 - 0x100);
    *(r1_435 - 0x100) = lr_236;
    char var_2f_1 = r12_538;
    char var_2e;
    uint32_t lr_237 = var_2e;
    int32_t r12_539 = lr_237 + r3_434 + key[0xda][0];
    int32_t r3_436 = r12_539 & 0xff;
    
    if (0 - r12_539 >= 0)
        r3_436 = 0 - (0 - r12_539);
    
    void* r1_437 = &(&format)[r3_436 + 0x140];
    char r0_521 = *(r1_437 - 0x100);
    *(r1_437 - 0x100) = lr_237;
    char var_2e_1 = r0_521;
    char var_2d;
    uint32_t lr_238 = var_2d;
    int32_t r0_522 = lr_238 + r3_436 + key[0xdb][0];
    int32_t r3_438 = r0_522 & 0xff;
    
    if (0 - r0_522 >= 0)
        r3_438 = 0 - (0 - r0_522);
    
    void* r1_439 = &(&format)[r3_438 + 0x140];
    char r12_543 = *(r1_439 - 0x100);
    *(r1_439 - 0x100) = lr_238;
    char var_2d_1 = r12_543;
    char var_2c;
    uint32_t lr_239 = var_2c;
    int32_t r12_544 = lr_239 + r3_438 + key[0xdc][0];
    int32_t r3_440 = r12_544 & 0xff;
    
    if (0 - r12_544 >= 0)
        r3_440 = 0 - (0 - r12_544);
    
    void* r1_441 = &(&format)[r3_440 + 0x140];
    char r0_526 = *(r1_441 - 0x100);
    *(r1_441 - 0x100) = lr_239;
    char var_2b;
    uint32_t lr_240 = var_2b;
    int32_t r0_527 = lr_240 + r3_440 + key[0xdd][0];
    int32_t r3_442 = r0_527 & 0xff;
    
    if (0 - r0_527 >= 0)
        r3_442 = 0 - (0 - r0_527);
    
    void* r1_443 = &(&format)[r3_442 + 0x140];
    char r12_548 = *(r1_443 - 0x100);
    *(r1_443 - 0x100) = lr_240;
    char var_2b_1 = r12_548;
    char var_2a;
    uint32_t lr_241 = var_2a;
    int32_t r12_549 = lr_241 + r3_442 + key[0xde][0];
    int32_t r3_444 = r12_549 & 0xff;
    
    if (0 - r12_549 >= 0)
        r3_444 = 0 - (0 - r12_549);
    
    void* r1_445 = &(&format)[r3_444 + 0x140];
    char r0_531 = *(r1_445 - 0x100);
    *(r1_445 - 0x100) = lr_241;
    char var_2a_1 = r0_531;
    char var_29;
    uint32_t lr_242 = var_29;
    int32_t r0_532 = lr_242 + r3_444 + key[0xdf][0];
    int32_t r3_446 = r0_532 & 0xff;
    
    if (0 - r0_532 >= 0)
        r3_446 = 0 - (0 - r0_532);
    
    void* r1_447 = &(&format)[r3_446 + 0x140];
    char r12_553 = *(r1_447 - 0x100);
    *(r1_447 - 0x100) = lr_242;
    char var_29_1 = r12_553;
    char var_28;
    uint32_t lr_243 = var_28;
    int32_t r12_554 = lr_243 + r3_446 + key[0xe0][0];
    int32_t r3_448 = r12_554 & 0xff;
    
    if (0 - r12_554 >= 0)
        r3_448 = 0 - (0 - r12_554);
    
    void* r1_449 = &(&format)[r3_448 + 0x140];
    char r0_536 = *(r1_449 - 0x100);
    *(r1_449 - 0x100) = lr_243;
    char var_27;
    uint32_t lr_244 = var_27;
    int32_t r0_537 = lr_244 + r3_448 + key[0xe1][0];
    int32_t r3_450 = r0_537 & 0xff;
    
    if (0 - r0_537 >= 0)
        r3_450 = 0 - (0 - r0_537);
    
    void* r1_451 = &(&format)[r3_450 + 0x140];
    char r12_558 = *(r1_451 - 0x100);
    *(r1_451 - 0x100) = lr_244;
    char var_27_1 = r12_558;
    char var_26;
    uint32_t lr_245 = var_26;
    int32_t r12_559 = lr_245 + r3_450 + key[0xe2][0];
    int32_t r3_452 = r12_559 & 0xff;
    
    if (0 - r12_559 >= 0)
        r3_452 = 0 - (0 - r12_559);
    
    void* r1_453 = &(&format)[r3_452 + 0x140];
    char r0_541 = *(r1_453 - 0x100);
    *(r1_453 - 0x100) = lr_245;
    char var_26_1 = r0_541;
    char var_25;
    uint32_t lr_246 = var_25;
    int32_t r0_542 = lr_246 + r3_452 + key[0xe3][0];
    int32_t r3_454 = r0_542 & 0xff;
    
    if (0 - r0_542 >= 0)
        r3_454 = 0 - (0 - r0_542);
    
    void* r1_455 = &(&format)[r3_454 + 0x140];
    char r12_563 = *(r1_455 - 0x100);
    *(r1_455 - 0x100) = lr_246;
    char var_25_1 = r12_563;
    char var_24;
    uint32_t lr_247 = var_24;
    int32_t r12_564 = lr_247 + r3_454 + key[0xe4][0];
    int32_t r3_456 = r12_564 & 0xff;
    
    if (0 - r12_564 >= 0)
        r3_456 = 0 - (0 - r12_564);
    
    void* r1_457 = &(&format)[r3_456 + 0x140];
    char r0_546 = *(r1_457 - 0x100);
    *(r1_457 - 0x100) = lr_247;
    char var_23;
    uint32_t lr_248 = var_23;
    int32_t r0_547 = lr_248 + r3_456 + key[0xe5][0];
    int32_t r3_458 = r0_547 & 0xff;
    
    if (0 - r0_547 >= 0)
        r3_458 = 0 - (0 - r0_547);
    
    void* r1_459 = &(&format)[r3_458 + 0x140];
    char r12_568 = *(r1_459 - 0x100);
    *(r1_459 - 0x100) = lr_248;
    char var_23_1 = r12_568;
    char var_22;
    uint32_t lr_249 = var_22;
    int32_t r12_569 = lr_249 + r3_458 + key[0xe6][0];
    int32_t r3_460 = r12_569 & 0xff;
    
    if (0 - r12_569 >= 0)
        r3_460 = 0 - (0 - r12_569);
    
    void* r1_461 = &(&format)[r3_460 + 0x140];
    char r0_551 = *(r1_461 - 0x100);
    *(r1_461 - 0x100) = lr_249;
    char var_22_1 = r0_551;
    char var_21;
    uint32_t lr_250 = var_21;
    int32_t r0_552 = lr_250 + r3_460 + key[0xe7][0];
    int32_t r3_462 = r0_552 & 0xff;
    
    if (0 - r0_552 >= 0)
        r3_462 = 0 - (0 - r0_552);
    
    void* r1_463 = &(&format)[r3_462 + 0x140];
    char r12_573 = *(r1_463 - 0x100);
    *(r1_463 - 0x100) = lr_250;
    char var_21_1 = r12_573;
    char var_20;
    uint32_t lr_251 = var_20;
    int32_t r12_574 = lr_251 + r3_462 + key[0xe8][0];
    int32_t r3_464 = r12_574 & 0xff;
    
    if (0 - r12_574 >= 0)
        r3_464 = 0 - (0 - r12_574);
    
    void* r1_465 = &(&format)[r3_464 + 0x140];
    char r0_556 = *(r1_465 - 0x100);
    *(r1_465 - 0x100) = lr_251;
    char var_1f;
    uint32_t lr_252 = var_1f;
    int32_t r0_557 = lr_252 + r3_464 + key[0xe9][0];
    int32_t r3_466 = r0_557 & 0xff;
    
    if (0 - r0_557 >= 0)
        r3_466 = 0 - (0 - r0_557);
    
    void* r1_467 = &(&format)[r3_466 + 0x140];
    char r12_578 = *(r1_467 - 0x100);
    *(r1_467 - 0x100) = lr_252;
    char var_1f_1 = r12_578;
    char var_1e;
    uint32_t lr_253 = var_1e;
    int32_t r12_579 = lr_253 + r3_466 + key[0xea][0];
    int32_t r3_468 = r12_579 & 0xff;
    
    if (0 - r12_579 >= 0)
        r3_468 = 0 - (0 - r12_579);
    
    void* r1_469 = &(&format)[r3_468 + 0x140];
    char r0_561 = *(r1_469 - 0x100);
    *(r1_469 - 0x100) = lr_253;
    char var_1e_1 = r0_561;
    char var_1d;
    uint32_t lr_254 = var_1d;
    int32_t r0_562 = lr_254 + r3_468 + key[0xeb][0];
    int32_t r3_470 = r0_562 & 0xff;
    
    if (0 - r0_562 >= 0)
        r3_470 = 0 - (0 - r0_562);
    
    void* r1_471 = &(&format)[r3_470 + 0x140];
    char r12_583 = *(r1_471 - 0x100);
    *(r1_471 - 0x100) = lr_254;
    char var_1d_1 = r12_583;
    char var_1c;
    uint32_t lr_255 = var_1c;
    int32_t r12_584 = lr_255 + r3_470 + key[0xec][0];
    int32_t r3_472 = r12_584 & 0xff;
    
    if (0 - r12_584 >= 0)
        r3_472 = 0 - (0 - r12_584);
    
    void* r1_473 = &(&format)[r3_472 + 0x140];
    char r0_566 = *(r1_473 - 0x100);
    *(r1_473 - 0x100) = lr_255;
    char var_1b;
    uint32_t lr_256 = var_1b;
    int32_t r0_567 = lr_256 + r3_472 + key[0xed][0];
    int32_t r3_474 = r0_567 & 0xff;
    
    if (0 - r0_567 >= 0)
        r3_474 = 0 - (0 - r0_567);
    
    void* r1_475 = &(&format)[r3_474 + 0x140];
    char r12_588 = *(r1_475 - 0x100);
    *(r1_475 - 0x100) = lr_256;
    char var_1b_1 = r12_588;
    char var_1a;
    uint32_t lr_257 = var_1a;
    int32_t r12_589 = lr_257 + r3_474 + key[0xee][0];
    int32_t r3_476 = r12_589 & 0xff;
    
    if (0 - r12_589 >= 0)
        r3_476 = 0 - (0 - r12_589);
    
    void* r1_477 = &(&format)[r3_476 + 0x140];
    char r0_571 = *(r1_477 - 0x100);
    *(r1_477 - 0x100) = lr_257;
    char var_1a_1 = r0_571;
    char var_19;
    uint32_t lr_258 = var_19;
    int32_t r0_572 = lr_258 + r3_476 + key[0xef][0];
    int32_t r3_478 = r0_572 & 0xff;
    
    if (0 - r0_572 >= 0)
        r3_478 = 0 - (0 - r0_572);
    
    void* r1_479 = &(&format)[r3_478 + 0x140];
    char r12_593 = *(r1_479 - 0x100);
    *(r1_479 - 0x100) = lr_258;
    char var_19_1 = r12_593;
    char var_18;
    uint32_t lr_259 = var_18;
    int32_t r12_594 = lr_259 + r3_478 + key[0xf0][0];
    int32_t r3_480 = r12_594 & 0xff;
    
    if (0 - r12_594 >= 0)
        r3_480 = 0 - (0 - r12_594);
    
    void* r1_481 = &(&format)[r3_480 + 0x140];
    char r0_576 = *(r1_481 - 0x100);
    *(r1_481 - 0x100) = lr_259;
    char var_17;
    uint32_t lr_260 = var_17;
    int32_t r0_577 = lr_260 + r3_480 + key[0xf1][0];
    int32_t r3_482 = r0_577 & 0xff;
    
    if (0 - r0_577 >= 0)
        r3_482 = 0 - (0 - r0_577);
    
    void* r1_483 = &(&format)[r3_482 + 0x140];
    char r12_598 = *(r1_483 - 0x100);
    *(r1_483 - 0x100) = lr_260;
    char var_17_1 = r12_598;
    char var_16;
    uint32_t lr_261 = var_16;
    int32_t r12_599 = lr_261 + r3_482 + key[0xf2][0];
    int32_t r3_484 = r12_599 & 0xff;
    
    if (0 - r12_599 >= 0)
        r3_484 = 0 - (0 - r12_599);
    
    void* r1_485 = &(&format)[r3_484 + 0x140];
    char r0_581 = *(r1_485 - 0x100);
    *(r1_485 - 0x100) = lr_261;
    char var_16_1 = r0_581;
    char var_15;
    uint32_t lr_262 = var_15;
    int32_t r0_582 = lr_262 + r3_484 + key[0xf3][0];
    int32_t r3_486 = r0_582 & 0xff;
    
    if (0 - r0_582 >= 0)
        r3_486 = 0 - (0 - r0_582);
    
    void* r1_487 = &(&format)[r3_486 + 0x140];
    char r12_603 = *(r1_487 - 0x100);
    *(r1_487 - 0x100) = lr_262;
    char var_15_1 = r12_603;
    char var_14;
    uint32_t lr_263 = var_14;
    int32_t r12_604 = lr_263 + r3_486 + key[0xf4][0];
    int32_t r3_488 = r12_604 & 0xff;
    
    if (0 - r12_604 >= 0)
        r3_488 = 0 - (0 - r12_604);
    
    void* r1_489 = &(&format)[r3_488 + 0x140];
    char r0_586 = *(r1_489 - 0x100);
    *(r1_489 - 0x100) = lr_263;
    char var_13;
    uint32_t lr_264 = var_13;
    int32_t r0_587 = lr_264 + r3_488 + key[0xf5][0];
    int32_t r3_490 = r0_587 & 0xff;
    
    if (0 - r0_587 >= 0)
        r3_490 = 0 - (0 - r0_587);
    
    void* r1_491 = &(&format)[r3_490 + 0x140];
    char r12_608 = *(r1_491 - 0x100);
    *(r1_491 - 0x100) = lr_264;
    char var_13_1 = r12_608;
    char var_12;
    uint32_t lr_265 = var_12;
    int32_t r12_609 = lr_265 + r3_490 + key[0xf6][0];
    int32_t r3_492 = r12_609 & 0xff;
    
    if (0 - r12_609 >= 0)
        r3_492 = 0 - (0 - r12_609);
    
    void* r1_493 = &(&format)[r3_492 + 0x140];
    char r0_591 = *(r1_493 - 0x100);
    *(r1_493 - 0x100) = lr_265;
    char var_12_1 = r0_591;
    char var_11;
    uint32_t lr_266 = var_11;
    int32_t r0_592 = lr_266 + r3_492 + key[0xf7][0];
    int32_t r3_494 = r0_592 & 0xff;
    
    if (0 - r0_592 >= 0)
        r3_494 = 0 - (0 - r0_592);
    
    void* r1_495 = &(&format)[r3_494 + 0x140];
    char r12_613 = *(r1_495 - 0x100);
    *(r1_495 - 0x100) = lr_266;
    char var_11_1 = r12_613;
    char var_10;
    uint32_t lr_267 = var_10;
    int32_t r12_614 = lr_267 + r3_494 + key[0xf8][0];
    int32_t r3_496 = r12_614 & 0xff;
    
    if (0 - r12_614 >= 0)
        r3_496 = 0 - (0 - r12_614);
    
    void* r1_497 = &(&format)[r3_496 + 0x140];
    char r0_596 = *(r1_497 - 0x100);
    *(r1_497 - 0x100) = lr_267;
    char var_f;
    uint32_t lr_268 = var_f;
    int32_t r0_597 = lr_268 + r3_496 + key[0xf9][0];
    int32_t r3_498 = r0_597 & 0xff;
    
    if (0 - r0_597 >= 0)
        r3_498 = 0 - (0 - r0_597);
    
    void* r1_499 = &(&format)[r3_498 + 0x140];
    char r12_618 = *(r1_499 - 0x100);
    *(r1_499 - 0x100) = lr_268;
    char var_f_1 = r12_618;
    char var_e;
    uint32_t lr_269 = var_e;
    int32_t r12_619 = lr_269 + r3_498 + key[0xfa][0];
    int32_t r3_500 = r12_619 & 0xff;
    
    if (0 - r12_619 >= 0)
        r3_500 = 0 - (0 - r12_619);
    
    void* r1_501 = &(&format)[r3_500 + 0x140];
    char r0_601 = *(r1_501 - 0x100);
    *(r1_501 - 0x100) = lr_269;
    char var_e_1 = r0_601;
    char var_d;
    uint32_t lr_270 = var_d;
    int32_t r0_602 = lr_270 + r3_500 + key[0xfb][0];
    int32_t r3_502 = r0_602 & 0xff;
    
    if (0 - r0_602 >= 0)
        r3_502 = 0 - (0 - r0_602);
    
    void* r1_503 = &(&format)[r3_502 + 0x140];
    char r12_623 = *(r1_503 - 0x100);
    *(r1_503 - 0x100) = lr_270;
    char var_d_1 = r12_623;
    char var_c;
    uint32_t lr_271 = var_c;
    int32_t r12_624 = lr_271 + r3_502 + key[0xfc][0];
    int32_t r3_504 = r12_624 & 0xff;
    
    if (0 - r12_624 >= 0)
        r3_504 = 0 - (0 - r12_624);
    
    void* r1_505 = &(&format)[r3_504 + 0x140];
    char r0_606 = *(r1_505 - 0x100);
    *(r1_505 - 0x100) = lr_271;
    char var_b;
    uint32_t lr_272 = var_b;
    int32_t r0_607 = lr_272 + r3_504 + key[0xfd][0];
    int32_t r3_506 = r0_607 & 0xff;
    
    if (0 - r0_607 >= 0)
        r3_506 = 0 - (0 - r0_607);
    
    void* r1_507 = &(&format)[r3_506 + 0x140];
    char r12_628 = *(r1_507 - 0x100);
    *(r1_507 - 0x100) = lr_272;
    char var_b_1 = r12_628;
    char var_a;
    uint32_t lr_273 = var_a;
    int32_t r12_629 = lr_273 + r3_506 + key[0xfe][0];
    int32_t r3_508 = r12_629 & 0xff;
    
    if (0 - r12_629 >= 0)
        r3_508 = 0 - (0 - r12_629);
    
    void* r1_509 = &(&format)[r3_508 + 0x140];
    char r0_611 = *(r1_509 - 0x100);
    *(r1_509 - 0x100) = lr_273;
    char var_a_1 = r0_611;
    uint32_t lr_274 = var_9;
    int32_t r0_612 = lr_274 + r3_508 + key[0xff][0];
    int32_t r3_510 = r0_612 & 0xff;
    
    if (0 - r0_612 >= 0)
        r3_510 = 0 - (0 - r0_612);
    
    void* r3_511 = &(&format)[r3_510 + 0x140];
    char r1_511 = *(r3_511 - 0x100);
    *(r3_511 - 0x100) = lr_274;
    char var_9_1 = r1_511;
    uint32_t lr_275 = r12_2;
    void* r0_614 = &(&format)[lr_275 + 0x140];
    char r3_512 = *(r0_614 - 0x100);
    *(r0_614 - 0x100) = lr_275;
    char var_107_2 = r3_512;
    void var_8;
    char var_147 = *(&var_8 + r3_512 + *(r0_614 - 0x100) - 0x100) ^ data_26131;
    uint32_t r12_636 = lr_5;
    uint32_t lr_276 = r12_636 + lr_275;
    int32_t r3_514 = lr_276 & 0xff;
    
    if (0 - lr_276 >= 0)
        r3_514 = 0 - (0 - lr_276);
    
    void* r0_616 = &(&format)[r3_514 + 0x140];
    char r1_516 = *(r0_616 - 0x100);
    *(r0_616 - 0x100) = r12_636;
    char var_106_2 = r1_516;
    char var_146 = *(&var_8 + r1_516 + *(r0_616 - 0x100) - 0x100) ^ data_26132;
    uint32_t r12_640 = r12_7;
    int32_t r3_515 = r12_640 + r3_514;
    int32_t lr_280 = r3_515 & 0xff;
    
    if (0 - r3_515 >= 0)
        lr_280 = 0 - (0 - r3_515);
    
    void* r0_618 = &(&format)[lr_280 + 0x140];
    char r1_519 = *(r0_618 - 0x100);
    *(r0_618 - 0x100) = r12_640;
    char var_105_2 = r1_519;
    char var_145 = *(&var_8 + r1_519 + *(r0_618 - 0x100) - 0x100) ^ data_26133;
    uint32_t r12_644 = lr_10;
    int32_t lr_281 = r12_644 + lr_280;
    int32_t r3_519 = lr_281 & 0xff;
    
    if (0 - lr_281 >= 0)
        r3_519 = 0 - (0 - lr_281);
    
    void* r0_620 = &(&format)[r3_519 + 0x140];
    char r1_522 = *(r0_620 - 0x100);
    *(r0_620 - 0x100) = r12_644;
    char r12_647 = *(&var_8 + r1_522 + *(r0_620 - 0x100) - 0x100) ^ data_26134;
    uint32_t r12_648 = r12_12;
    int32_t r3_520 = r12_648 + r3_519;
    int32_t lr_285 = r3_520 & 0xff;
    
    if (0 - r3_520 >= 0)
        lr_285 = 0 - (0 - r3_520);
    
    void* r0_622 = &(&format)[lr_285 + 0x140];
    char r1_525 = *(r0_622 - 0x100);
    *(r0_622 - 0x100) = r12_648;
    char var_103_2 = r1_525;
    char var_143 = *(&var_8 + r1_525 + *(r0_622 - 0x100) - 0x100) ^ data_26135;
    uint32_t r12_652 = lr_15;
    int32_t lr_286 = r12_652 + lr_285;
    int32_t r3_524 = lr_286 & 0xff;
    
    if (0 - lr_286 >= 0)
        r3_524 = 0 - (0 - lr_286);
    
    void* r0_624 = &(&format)[r3_524 + 0x140];
    char r1_528 = *(r0_624 - 0x100);
    *(r0_624 - 0x100) = r12_652;
    char var_102_2 = r1_528;
    char var_142 = data_26136 ^ *(&var_8 + r1_528 + *(r0_624 - 0x100) - 0x100);
    uint32_t lr_289 = r12_17;
    int32_t r3_525 = lr_289 + r3_524;
    int32_t r3_526 = r3_525 & 0xff;
    
    if (0 - r3_525 >= 0)
        r3_526 = 0 - (0 - r3_525);
    
    void* r0_626 = &(&format)[r3_526 + 0x140];
    char r2_10 = *(r0_626 - 0x100);
    *(r0_626 - 0x100) = lr_289;
    char var_101_2 = r2_10;
    char var_141 = *(&var_8 + r2_10 + *(r0_626 - 0x100) - 0x100) ^ data_26137;
    uint32_t lr_293 = lr_20;
    int32_t r3_527 = lr_293 + r3_526;
    int32_t r3_528 = r3_527 & 0xff;
    
    if (0 - r3_527 >= 0)
        r3_528 = 0 - (0 - r3_527);
    
    void* r0_629 = &(&format)[r3_528 + 0x140];
    char r1_532 = *(r0_629 - 0x100);
    *(r0_629 - 0x100) = lr_293;
    char lr_296 = *(&var_8 + r1_532 + *(r0_629 - 0x100) - 0x100) ^ data_26138;
    uint32_t lr_297 = r12_22;
    int32_t r3_529 = lr_297 + r3_528;
    int32_t r3_530 = r3_529 & 0xff;
    
    if (0 - r3_529 >= 0)
        r3_530 = 0 - (0 - r3_529);
    
    void* r0_631 = &(&format)[r3_530 + 0x140];
    char r1_535 = *(r0_631 - 0x100);
    *(r0_631 - 0x100) = lr_297;
    char var_ff_2 = r1_535;
    char var_13f = *(&var_8 + r1_535 + *(r0_631 - 0x100) - 0x100) ^ data_26139;
    uint32_t lr_301 = lr_25;
    int32_t r3_531 = lr_301 + r3_530;
    int32_t r3_532 = r3_531 & 0xff;
    
    if (0 - r3_531 >= 0)
        r3_532 = 0 - (0 - r3_531);
    
    void* r0_633 = &(&format)[r3_532 + 0x140];
    char r1_538 = *(r0_633 - 0x100);
    *(r0_633 - 0x100) = lr_301;
    char var_fe_2 = r1_538;
    char var_13e = *(&var_8 + r1_538 + *(r0_633 - 0x100) - 0x100) ^ data_2613a;
    uint32_t lr_305 = r12_27;
    int32_t r3_533 = lr_305 + r3_532;
    int32_t r3_534 = r3_533 & 0xff;
    
    if (0 - r3_533 >= 0)
        r3_534 = 0 - (0 - r3_533);
    
    void* r0_635 = &(&format)[r3_534 + 0x140];
    char r1_541 = *(r0_635 - 0x100);
    *(r0_635 - 0x100) = lr_305;
    char var_fd_2 = r1_541;
    char var_13d = *(&var_8 + r1_541 + *(r0_635 - 0x100) - 0x100) ^ data_2613b;
    uint32_t lr_309 = lr_30;
    int32_t r3_535 = lr_309 + r3_534;
    int32_t r3_536 = r3_535 & 0xff;
    
    if (0 - r3_535 >= 0)
        r3_536 = 0 - (0 - r3_535);
    
    void* r0_637 = &(&format)[r3_536 + 0x140];
    char r1_544 = *(r0_637 - 0x100);
    *(r0_637 - 0x100) = lr_309;
    char lr_312 = *(&var_8 + r1_544 + *(r0_637 - 0x100) - 0x100) ^ data_2613c;
    uint32_t lr_313 = r12_32;
    int32_t r3_537 = lr_313 + r3_536;
    int32_t r3_538 = r3_537 & 0xff;
    
    if (0 - r3_537 >= 0)
        r3_538 = 0 - (0 - r3_537);
    
    void* r0_639 = &(&format)[r3_538 + 0x140];
    char r1_547 = *(r0_639 - 0x100);
    *(r0_639 - 0x100) = lr_313;
    char var_fb_2 = r1_547;
    char var_13b = *(&var_8 + r1_547 + *(r0_639 - 0x100) - 0x100) ^ data_2613d;
    uint32_t lr_317 = r1_29;
    int32_t r3_539 = lr_317 + r3_538;
    int32_t r3_540 = r3_539 & 0xff;
    
    if (0 - r3_539 >= 0)
        r3_540 = 0 - (0 - r3_539);
    
    void* r0_641 = &(&format)[r3_540 + 0x140];
    char r1_550 = *(r0_641 - 0x100);
    *(r0_641 - 0x100) = lr_317;
    char var_fa_2 = r1_550;
    char var_13a = *(&var_8 + r1_550 + *(r0_641 - 0x100) - 0x100) ^ data_2613e;
    uint32_t lr_321 = r12_36;
    int32_t r3_541 = lr_321 + r3_540;
    int32_t r3_542 = r3_541 & 0xff;
    
    if (0 - r3_541 >= 0)
        r3_542 = 0 - (0 - r3_541);
    
    void* r0_643 = &(&format)[r3_542 + 0x140];
    char r1_553 = *(r0_643 - 0x100);
    *(r0_643 - 0x100) = lr_321;
    char var_f9_2 = r1_553;
    char var_139 = *(&var_8 + r1_553 + *(r0_643 - 0x100) - 0x100) ^ data_2613f;
    uint32_t lr_325 = r0_19;
    int32_t r3_543 = lr_325 + r3_542;
    int32_t r3_544 = r3_543 & 0xff;
    
    if (0 - r3_543 >= 0)
        r3_544 = 0 - (0 - r3_543);
    
    void* r0_645 = &(&format)[r3_544 + 0x140];
    char r1_556 = *(r0_645 - 0x100);
    *(r0_645 - 0x100) = lr_325;
    char lr_328 = *(&var_8 + r1_556 + *(r0_645 - 0x100) - 0x100) ^ data_26140;
    uint32_t lr_329 = r12_41;
    int32_t r3_545 = lr_329 + r3_544;
    int32_t r3_546 = r3_545 & 0xff;
    
    if (0 - r3_545 >= 0)
        r3_546 = 0 - (0 - r3_545);
    
    void* r0_647 = &(&format)[r3_546 + 0x140];
    char r1_559 = *(r0_647 - 0x100);
    *(r0_647 - 0x100) = lr_329;
    char var_f7_2 = r1_559;
    char var_137 = *(&var_8 + r1_559 + *(r0_647 - 0x100) - 0x100) ^ data_26141;
    uint32_t lr_333 = r0_24;
    int32_t r3_547 = lr_333 + r3_546;
    int32_t r3_548 = r3_547 & 0xff;
    
    if (0 - r3_547 >= 0)
        r3_548 = 0 - (0 - r3_547);
    
    void* r0_649 = &(&format)[r3_548 + 0x140];
    char r1_562 = *(r0_649 - 0x100);
    *(r0_649 - 0x100) = lr_333;
    char var_f6_2 = r1_562;
    char var_136 = *(&var_8 + r1_562 + *(r0_649 - 0x100) - 0x100) ^ data_26142;
    uint32_t lr_337 = r12_46;
    int32_t r3_549 = lr_337 + r3_548;
    int32_t r3_550 = r3_549 & 0xff;
    
    if (0 - r3_549 >= 0)
        r3_550 = 0 - (0 - r3_549);
    
    void* r0_651 = &(&format)[r3_550 + 0x140];
    char r1_565 = *(r0_651 - 0x100);
    *(r0_651 - 0x100) = lr_337;
    char var_f5_2 = r1_565;
    char var_135 = *(&var_8 + r1_565 + *(r0_651 - 0x100) - 0x100) ^ data_26143;
    uint32_t lr_341 = r0_29;
    int32_t r3_551 = lr_341 + r3_550;
    int32_t r3_552 = r3_551 & 0xff;
    
    if (0 - r3_551 >= 0)
        r3_552 = 0 - (0 - r3_551);
    
    void* r0_653 = &(&format)[r3_552 + 0x140];
    char r1_568 = *(r0_653 - 0x100);
    *(r0_653 - 0x100) = lr_341;
    char lr_344 = *(&var_8 + r1_568 + *(r0_653 - 0x100) - 0x100) ^ data_26144;
    uint32_t lr_345 = r12_51;
    int32_t r3_553 = lr_345 + r3_552;
    int32_t r3_554 = r3_553 & 0xff;
    
    if (0 - r3_553 >= 0)
        r3_554 = 0 - (0 - r3_553);
    
    void* r0_655 = &(&format)[r3_554 + 0x140];
    char r1_571 = *(r0_655 - 0x100);
    *(r0_655 - 0x100) = lr_345;
    char var_f3_2 = r1_571;
    char var_133 = *(&var_8 + r1_571 + *(r0_655 - 0x100) - 0x100) ^ data_26145;
    uint32_t lr_349 = r0_34;
    int32_t r3_555 = lr_349 + r3_554;
    int32_t r3_556 = r3_555 & 0xff;
    
    if (0 - r3_555 >= 0)
        r3_556 = 0 - (0 - r3_555);
    
    void* r0_657 = &(&format)[r3_556 + 0x140];
    char r1_574 = *(r0_657 - 0x100);
    *(r0_657 - 0x100) = lr_349;
    char var_f2_2 = r1_574;
    char var_132 = *(&var_8 + r1_574 + *(r0_657 - 0x100) - 0x100) ^ data_26146;
    uint32_t lr_353 = r12_56;
    int32_t r3_557 = lr_353 + r3_556;
    int32_t r3_558 = r3_557 & 0xff;
    
    if (0 - r3_557 >= 0)
        r3_558 = 0 - (0 - r3_557);
    
    void* r0_659 = &(&format)[r3_558 + 0x140];
    char r1_577 = *(r0_659 - 0x100);
    *(r0_659 - 0x100) = lr_353;
    char var_f1_2 = r1_577;
    char var_131 = *(&var_8 + r1_577 + *(r0_659 - 0x100) - 0x100) ^ data_26147;
    uint32_t lr_357 = r0_39;
    int32_t r3_559 = lr_357 + r3_558;
    int32_t r3_560 = r3_559 & 0xff;
    
    if (0 - r3_559 >= 0)
        r3_560 = 0 - (0 - r3_559);
    
    void* r0_661 = &(&format)[r3_560 + 0x140];
    char r1_580 = *(r0_661 - 0x100);
    *(r0_661 - 0x100) = lr_357;
    char lr_360 = *(&var_8 + r1_580 + *(r0_661 - 0x100) - 0x100) ^ data_26148;
    uint32_t lr_361 = r12_61;
    int32_t r3_561 = lr_361 + r3_560;
    int32_t r3_562 = r3_561 & 0xff;
    
    if (0 - r3_561 >= 0)
        r3_562 = 0 - (0 - r3_561);
    
    void* r0_663 = &(&format)[r3_562 + 0x140];
    char r1_583 = *(r0_663 - 0x100);
    *(r0_663 - 0x100) = lr_361;
    char var_ef_2 = r1_583;
    char var_12f = *(&var_8 + r1_583 + *(r0_663 - 0x100) - 0x100) ^ data_26149;
    uint32_t lr_365 = r0_44;
    int32_t r3_563 = lr_365 + r3_562;
    int32_t r3_564 = r3_563 & 0xff;
    
    if (0 - r3_563 >= 0)
        r3_564 = 0 - (0 - r3_563);
    
    void* r0_665 = &(&format)[r3_564 + 0x140];
    char r1_586 = *(r0_665 - 0x100);
    *(r0_665 - 0x100) = lr_365;
    char var_ee_2 = r1_586;
    char var_12e = *(&var_8 + r1_586 + *(r0_665 - 0x100) - 0x100) ^ data_2614a;
    uint32_t lr_369 = r12_66;
    int32_t r3_565 = lr_369 + r3_564;
    int32_t r3_566 = r3_565 & 0xff;
    
    if (0 - r3_565 >= 0)
        r3_566 = 0 - (0 - r3_565);
    
    void* r0_667 = &(&format)[r3_566 + 0x140];
    char r1_589 = *(r0_667 - 0x100);
    *(r0_667 - 0x100) = lr_369;
    char var_ed_2 = r1_589;
    char var_12d = *(&var_8 + r1_589 + *(r0_667 - 0x100) - 0x100) ^ data_2614b;
    uint32_t lr_373 = r0_49;
    int32_t r3_567 = lr_373 + r3_566;
    int32_t r3_568 = r3_567 & 0xff;
    
    if (0 - r3_567 >= 0)
        r3_568 = 0 - (0 - r3_567);
    
    void* r0_669 = &(&format)[r3_568 + 0x140];
    char r1_592 = *(r0_669 - 0x100);
    *(r0_669 - 0x100) = lr_373;
    char lr_376 = *(&var_8 + r1_592 + *(r0_669 - 0x100) - 0x100) ^ data_2614c;
    uint32_t lr_377 = r12_71;
    int32_t r3_569 = lr_377 + r3_568;
    int32_t r3_570 = r3_569 & 0xff;
    
    if (0 - r3_569 >= 0)
        r3_570 = 0 - (0 - r3_569);
    
    void* r0_671 = &(&format)[r3_570 + 0x140];
    char r1_595 = *(r0_671 - 0x100);
    *(r0_671 - 0x100) = lr_377;
    char var_eb_2 = r1_595;
    char var_12b = *(&var_8 + r1_595 + *(r0_671 - 0x100) - 0x100) ^ data_2614d;
    uint32_t lr_381 = r0_54;
    int32_t r3_571 = lr_381 + r3_570;
    int32_t r3_572 = r3_571 & 0xff;
    
    if (0 - r3_571 >= 0)
        r3_572 = 0 - (0 - r3_571);
    
    void* r0_673 = &(&format)[r3_572 + 0x140];
    char r1_598 = *(r0_673 - 0x100);
    *(r0_673 - 0x100) = lr_381;
    char var_ea_2 = r1_598;
    char var_12a = *(&var_8 + r1_598 + *(r0_673 - 0x100) - 0x100) ^ data_2614e;
    uint32_t lr_385 = r12_76;
    int32_t r3_573 = lr_385 + r3_572;
    int32_t r3_574 = r3_573 & 0xff;
    
    if (0 - r3_573 >= 0)
        r3_574 = 0 - (0 - r3_573);
    
    void* r0_675 = &(&format)[r3_574 + 0x140];
    char r1_601 = *(r0_675 - 0x100);
    *(r0_675 - 0x100) = lr_385;
    char var_e9_2 = r1_601;
    char var_129 = *(&var_8 + r1_601 + *(r0_675 - 0x100) - 0x100) ^ data_2614f;
    uint32_t lr_389 = r0_59;
    int32_t r3_575 = lr_389 + r3_574;
    int32_t r3_576 = r3_575 & 0xff;
    
    if (0 - r3_575 >= 0)
        r3_576 = 0 - (0 - r3_575);
    
    void* r0_677 = &(&format)[r3_576 + 0x140];
    char r1_604 = *(r0_677 - 0x100);
    *(r0_677 - 0x100) = lr_389;
    char lr_392 = *(&var_8 + r1_604 + *(r0_677 - 0x100) - 0x100) ^ data_26150;
    uint32_t lr_393 = r12_81;
    int32_t r3_577 = lr_393 + r3_576;
    int32_t r3_578 = r3_577 & 0xff;
    
    if (0 - r3_577 >= 0)
        r3_578 = 0 - (0 - r3_577);
    
    void* r0_679 = &(&format)[r3_578 + 0x140];
    char r1_607 = *(r0_679 - 0x100);
    *(r0_679 - 0x100) = lr_393;
    char var_e7_2 = r1_607;
    char var_127 = *(&var_8 + r1_607 + *(r0_679 - 0x100) - 0x100) ^ data_26151;
    uint32_t lr_397 = r0_64;
    int32_t r3_579 = lr_397 + r3_578;
    int32_t r3_580 = r3_579 & 0xff;
    
    if (0 - r3_579 >= 0)
        r3_580 = 0 - (0 - r3_579);
    
    void* r0_681 = &(&format)[r3_580 + 0x140];
    char r1_610 = *(r0_681 - 0x100);
    *(r0_681 - 0x100) = lr_397;
    char var_e6_2 = r1_610;
    char var_126 = *(&var_8 + r1_610 + *(r0_681 - 0x100) - 0x100) ^ data_26152;
    uint32_t lr_401 = r12_86;
    int32_t r3_581 = lr_401 + r3_580;
    int32_t r3_582 = r3_581 & 0xff;
    
    if (0 - r3_581 >= 0)
        r3_582 = 0 - (0 - r3_581);
    
    void* r0_683 = &(&format)[r3_582 + 0x140];
    char r1_613 = *(r0_683 - 0x100);
    *(r0_683 - 0x100) = lr_401;
    char var_e5_2 = r1_613;
    char var_125 = *(&var_8 + r1_613 + *(r0_683 - 0x100) - 0x100) ^ data_26153;
    uint32_t lr_405 = r0_69;
    int32_t r3_583 = lr_405 + r3_582;
    int32_t r3_584 = r3_583 & 0xff;
    
    if (0 - r3_583 >= 0)
        r3_584 = 0 - (0 - r3_583);
    
    void* r0_685 = &(&format)[r3_584 + 0x140];
    char r1_616 = *(r0_685 - 0x100);
    *(r0_685 - 0x100) = lr_405;
    char lr_408 = *(&var_8 + r1_616 + *(r0_685 - 0x100) - 0x100) ^ data_26154;
    uint32_t lr_409 = r12_91;
    int32_t r3_585 = lr_409 + r3_584;
    int32_t r3_586 = r3_585 & 0xff;
    
    if (0 - r3_585 >= 0)
        r3_586 = 0 - (0 - r3_585);
    
    void* r0_687 = &(&format)[r3_586 + 0x140];
    char r1_619 = *(r0_687 - 0x100);
    *(r0_687 - 0x100) = lr_409;
    char var_e3_2 = r1_619;
    char var_123 = *(&var_8 + r1_619 + *(r0_687 - 0x100) - 0x100) ^ data_26155;
    uint32_t lr_413 = r0_74;
    int32_t r3_587 = lr_413 + r3_586;
    int32_t r3_588 = r3_587 & 0xff;
    
    if (0 - r3_587 >= 0)
        r3_588 = 0 - (0 - r3_587);
    
    void* r0_689 = &(&format)[r3_588 + 0x140];
    char r1_622 = *(r0_689 - 0x100);
    *(r0_689 - 0x100) = lr_413;
    char var_e2_2 = r1_622;
    char var_122 = *(&var_8 + r1_622 + *(r0_689 - 0x100) - 0x100) ^ data_26156;
    uint32_t lr_417 = r12_96;
    int32_t r3_589 = lr_417 + r3_588;
    int32_t r3_590 = r3_589 & 0xff;
    
    if (0 - r3_589 >= 0)
        r3_590 = 0 - (0 - r3_589);
    
    void* r0_691 = &(&format)[r3_590 + 0x140];
    char r1_625 = *(r0_691 - 0x100);
    *(r0_691 - 0x100) = lr_417;
    char var_e1_2 = r1_625;
    char var_121 = *(&var_8 + r1_625 + *(r0_691 - 0x100) - 0x100) ^ data_26157;
    uint32_t lr_421 = r0_79;
    int32_t r3_591 = lr_421 + r3_590;
    int32_t r3_592 = r3_591 & 0xff;
    
    if (0 - r3_591 >= 0)
        r3_592 = 0 - (0 - r3_591);
    
    void* r0_693 = &(&format)[r3_592 + 0x140];
    char r1_628 = *(r0_693 - 0x100);
    *(r0_693 - 0x100) = lr_421;
    char lr_424 = *(&var_8 + r1_628 + *(r0_693 - 0x100) - 0x100) ^ data_26158;
    uint32_t lr_425 = r12_101;
    int32_t r3_593 = lr_425 + r3_592;
    int32_t r3_594 = r3_593 & 0xff;
    
    if (0 - r3_593 >= 0)
        r3_594 = 0 - (0 - r3_593);
    
    void* r0_695 = &(&format)[r3_594 + 0x140];
    char r1_631 = *(r0_695 - 0x100);
    *(r0_695 - 0x100) = lr_425;
    char var_df_2 = r1_631;
    char var_11f = *(&var_8 + r1_631 + *(r0_695 - 0x100) - 0x100) ^ data_26159;
    uint32_t lr_429 = r0_84;
    int32_t r3_595 = lr_429 + r3_594;
    int32_t r3_596 = r3_595 & 0xff;
    
    if (0 - r3_595 >= 0)
        r3_596 = 0 - (0 - r3_595);
    
    void* r0_697 = &(&format)[r3_596 + 0x140];
    char r1_634 = *(r0_697 - 0x100);
    *(r0_697 - 0x100) = lr_429;
    char var_de_2 = r1_634;
    char var_11e = *(&var_8 + r1_634 + *(r0_697 - 0x100) - 0x100) ^ data_2615a;
    uint32_t lr_433 = r12_106;
    int32_t r3_597 = lr_433 + r3_596;
    int32_t r12_763 = r3_597 & 0xff;
    
    if (0 - r3_597 >= 0)
        r12_763 = 0 - (0 - r3_597);
    
    void* r0_699 = &(&format)[r12_763 + 0x140];
    char r1_637 = *(r0_699 - 0x100);
    *(r0_699 - 0x100) = lr_433;
    char var_dd_2 = r1_637;
    char var_11d = data_2615b ^ *(&var_8 + r1_637 + *(r0_699 - 0x100) - 0x100);
    uint32_t r0_700 = r0_89;
    int32_t r12_764 = r0_700 + r12_763;
    int32_t r3_600 = r12_764 & 0xff;
    
    if (0 - r12_764 >= 0)
        r3_600 = 0 - (0 - r12_764);
    
    void* r12_765 = &(&format)[r3_600 + 0x140];
    char lr_437 = *(r12_765 - 0x100);
    *(r12_765 - 0x100) = r0_700;
    char r2_16 = *(&var_8 + lr_437 + *(r12_765 - 0x100) - 0x100) ^ data_2615c;
    uint32_t r12_767 = r12_111;
    int32_t r3_601 = r12_767 + r3_600;
    int32_t r2_17 = r3_601 & 0xff;
    
    if (0 - r3_601 >= 0)
        r2_17 = 0 - (0 - r3_601);
    
    void* r0_704 = &(&format)[r2_17 + 0x140];
    char r1_641 = *(r0_704 - 0x100);
    *(r0_704 - 0x100) = r12_767;
    char var_db_2 = r1_641;
    char var_11b = *(&var_8 + r1_641 + *(r0_704 - 0x100) - 0x100) ^ data_2615d;
    uint32_t r12_771 = r0_94;
    int32_t r2_18 = r12_771 + r2_17;
    int32_t r3_605 = r2_18 & 0xff;
    
    if (0 - r2_18 >= 0)
        r3_605 = 0 - (0 - r2_18);
    
    void* r0_706 = &(&format)[r3_605 + 0x140];
    char r1_644 = *(r0_706 - 0x100);
    *(r0_706 - 0x100) = r12_771;
    char var_da_2 = r1_644;
    char var_11a = *(&var_8 + r1_644 + *(r0_706 - 0x100) - 0x100) ^ data_2615e;
    uint32_t r12_775 = r12_116;
    int32_t r3_606 = r12_775 + r3_605;
    int32_t r2_22 = r3_606 & 0xff;
    
    if (0 - r3_606 >= 0)
        r2_22 = 0 - (0 - r3_606);
    
    void* r0_708 = &(&format)[r2_22 + 0x140];
    char r1_647 = *(r0_708 - 0x100);
    *(r0_708 - 0x100) = r12_775;
    char var_d9_2 = r1_647;
    char var_119 = *(&var_8 + r1_647 + *(r0_708 - 0x100) - 0x100) ^ data_2615f;
    uint32_t r12_779 = r0_99;
    int32_t r2_23 = r12_779 + r2_22;
    int32_t r3_610 = r2_23 & 0xff;
    
    if (0 - r2_23 >= 0)
        r3_610 = 0 - (0 - r2_23);
    
    void* r0_710 = &(&format)[r3_610 + 0x140];
    char r1_650 = *(r0_710 - 0x100);
    *(r0_710 - 0x100) = r12_779;
    char r12_782 = *(&var_8 + r1_650 + *(r0_710 - 0x100) - 0x100) ^ data_26160;
    uint32_t r12_783 = r12_121;
    int32_t r3_611 = r12_783 + r3_610;
    int32_t r2_27 = r3_611 & 0xff;
    
    if (0 - r3_611 >= 0)
        r2_27 = 0 - (0 - r3_611);
    
    void* r0_712 = &(&format)[r2_27 + 0x140];
    char r1_653 = *(r0_712 - 0x100);
    *(r0_712 - 0x100) = r12_783;
    char var_d7_2 = r1_653;
    char var_117 = *(&var_8 + r1_653 + *(r0_712 - 0x100) - 0x100) ^ data_26161;
    uint32_t r12_787 = r0_104;
    int32_t r2_28 = r12_787 + r2_27;
    int32_t r3_615 = r2_28 & 0xff;
    
    if (0 - r2_28 >= 0)
        r3_615 = 0 - (0 - r2_28);
    
    void* r0_714 = &(&format)[r3_615 + 0x140];
    char r1_656 = *(r0_714 - 0x100);
    *(r0_714 - 0x100) = r12_787;
    char var_d6_2 = r1_656;
    char var_116 = *(&var_8 + r1_656 + *(r0_714 - 0x100) - 0x100) ^ data_26162;
    uint32_t r12_791 = r12_126;
    int32_t r3_616 = r12_791 + r3_615;
    int32_t r2_32 = r3_616 & 0xff;
    
    if (0 - r3_616 >= 0)
        r2_32 = 0 - (0 - r3_616);
    
    void* r0_716 = &(&format)[r2_32 + 0x140];
    char r1_659 = *(r0_716 - 0x100);
    *(r0_716 - 0x100) = r12_791;
    char var_d5_2 = r1_659;
    char var_115 = *(&var_8 + r1_659 + *(r0_716 - 0x100) - 0x100) ^ data_26163;
    uint32_t r12_795 = r0_109;
    int32_t r2_33 = r12_795 + r2_32;
    int32_t r3_620 = r2_33 & 0xff;
    
    if (0 - r2_33 >= 0)
        r3_620 = 0 - (0 - r2_33);
    
    void* r0_718 = &(&format)[r3_620 + 0x140];
    char r1_662 = *(r0_718 - 0x100);
    *(r0_718 - 0x100) = r12_795;
    char r12_798 = *(&var_8 + r1_662 + *(r0_718 - 0x100) - 0x100) ^ data_26164;
    uint32_t r12_799 = r12_131;
    int32_t r3_621 = r12_799 + r3_620;
    int32_t r2_37 = r3_621 & 0xff;
    
    if (0 - r3_621 >= 0)
        r2_37 = 0 - (0 - r3_621);
    
    void* r0_720 = &(&format)[r2_37 + 0x140];
    char r1_665 = *(r0_720 - 0x100);
    *(r0_720 - 0x100) = r12_799;
    char var_d3_2 = r1_665;
    char var_113 = *(&var_8 + r1_665 + *(r0_720 - 0x100) - 0x100) ^ data_26165;
    uint32_t r12_803 = r0_114;
    int32_t r2_38 = r12_803 + r2_37;
    int32_t r3_625 = r2_38 & 0xff;
    
    if (0 - r2_38 >= 0)
        r3_625 = 0 - (0 - r2_38);
    
    void* r0_722 = &(&format)[r3_625 + 0x140];
    char r1_668 = *(r0_722 - 0x100);
    *(r0_722 - 0x100) = r12_803;
    char var_d2_2 = r1_668;
    char var_112 = *(&var_8 + r1_668 + *(r0_722 - 0x100) - 0x100) ^ data_26166;
    uint32_t r12_807 = r12_136;
    int32_t r3_626 = r12_807 + r3_625;
    int32_t r2_42 = r3_626 & 0xff;
    
    if (0 - r3_626 >= 0)
        r2_42 = 0 - (0 - r3_626);
    
    void* r0_724 = &(&format)[r2_42 + 0x140];
    char r1_671 = *(r0_724 - 0x100);
    *(r0_724 - 0x100) = r12_807;
    char var_d1_2 = r1_671;
    char var_111 = *(&var_8 + r1_671 + *(r0_724 - 0x100) - 0x100) ^ data_26167;
    uint32_t r12_811 = r0_119;
    int32_t r2_43 = r12_811 + r2_42;
    int32_t r3_630 = r2_43 & 0xff;
    
    if (0 - r2_43 >= 0)
        r3_630 = 0 - (0 - r2_43);
    
    void* r0_726 = &(&format)[r3_630 + 0x140];
    char r1_674 = *(r0_726 - 0x100);
    *(r0_726 - 0x100) = r12_811;
    char r12_814 = *(&var_8 + r1_674 + *(r0_726 - 0x100) - 0x100) ^ data_26168;
    uint32_t r12_815 = r12_141;
    int32_t r3_631 = r12_815 + r3_630;
    int32_t r2_47 = r3_631 & 0xff;
    
    if (0 - r3_631 >= 0)
        r2_47 = 0 - (0 - r3_631);
    
    void* r0_728 = &(&format)[r2_47 + 0x140];
    char r1_677 = *(r0_728 - 0x100);
    *(r0_728 - 0x100) = r12_815;
    char var_cf_2 = r1_677;
    char var_10f = *(&var_8 + r1_677 + *(r0_728 - 0x100) - 0x100) ^ data_26169;
    uint32_t r12_819 = r0_124;
    int32_t r2_48 = r12_819 + r2_47;
    int32_t r3_635 = r2_48 & 0xff;
    
    if (0 - r2_48 >= 0)
        r3_635 = 0 - (0 - r2_48);
    
    void* r0_730 = &(&format)[r3_635 + 0x140];
    char r1_680 = *(r0_730 - 0x100);
    *(r0_730 - 0x100) = r12_819;
    char var_ce_2 = r1_680;
    char var_10e = *(&var_8 + r1_680 + *(r0_730 - 0x100) - 0x100) ^ data_2616a;
    uint32_t r12_823 = r12_146;
    int32_t r3_636 = r12_823 + r3_635;
    int32_t r2_52 = r3_636 & 0xff;
    
    if (0 - r3_636 >= 0)
        r2_52 = 0 - (0 - r3_636);
    
    void* r0_732 = &(&format)[r2_52 + 0x140];
    char r1_683 = *(r0_732 - 0x100);
    *(r0_732 - 0x100) = r12_823;
    char var_cd_2 = r1_683;
    char var_10d = *(&var_8 + r1_683 + *(r0_732 - 0x100) - 0x100) ^ data_2616b;
    uint32_t r12_827 = r0_129;
    int32_t r2_53 = r12_827 + r2_52;
    int32_t r3_640 = r2_53 & 0xff;
    
    if (0 - r2_53 >= 0)
        r3_640 = 0 - (0 - r2_53);
    
    void* r0_734 = &(&format)[r3_640 + 0x140];
    char r1_686 = *(r0_734 - 0x100);
    *(r0_734 - 0x100) = r12_827;
    char r12_830 = *(&var_8 + r1_686 + *(r0_734 - 0x100) - 0x100) ^ data_2616c;
    uint32_t r12_831 = r12_151;
    int32_t r3_641 = r12_831 + r3_640;
    int32_t r2_57 = r3_641 & 0xff;
    
    if (0 - r3_641 >= 0)
        r2_57 = 0 - (0 - r3_641);
    
    void* r0_736 = &(&format)[r2_57 + 0x140];
    char r1_689 = *(r0_736 - 0x100);
    *(r0_736 - 0x100) = r12_831;
    char var_cb_2 = r1_689;
    char var_10b = *(&var_8 + r1_689 + *(r0_736 - 0x100) - 0x100) ^ data_2616d;
    uint32_t r0_737 = r0_134;
    int32_t r2_58 = r0_737 + r2_57;
    int32_t r12_835 = r2_58 & 0xff;
    
    if (0 - r2_58 >= 0)
        r12_835 = 0 - (0 - r2_58);
    
    void* r12_836 = &(&format)[r12_835 + 0x140];
    char r1_692 = *(r12_836 - 0x100);
    *(r12_836 - 0x100) = r0_737;
    char var_ca_2 = r1_692;
    char var_10a = *(&var_8 + r1_692 + *(r12_836 - 0x100) - 0x100) ^ data_2616e;
    format = 0x20;
    char var_109 = 0;
    int32_t result = printf("Decrypted message: %s\n", &format, 0, &var_8, format, r12_647, lr_296, lr_312, lr_328, lr_344, lr_360, lr_376, lr_392, lr_408, lr_424, r2_16, r12_782, r12_798, r12_814, r12_830, r12, r1_522, r1_532, r1_544, r1_556, r1_568, r1_580, r1_592, r1_604, r1_616, r1_628, lr_437, r1_650, r1_662, r1_674, r1_686, r0_139, r0_149, r0_159, r0_169, r0_178, r0_188, r0_198, r0_208, r0_218, r0_228, r0_238, r0_248, r0_258, r0_268, r0_278, r0_288, r0_298, r0_308, r0_318, r0_327, r0_337, r0_347, r0_357, r0_367, r0_377, r0_387, r0_397, r0_407, r0_417, r0_427, r0_437, r0_447, r0_457, r0_467, r0_477, r0_486, r0_496, r0_506, r0_516, r0_526, r0_536, r0_546, r0_556, r0_566, r0_576, r0_586, r0_596, r0_606);
    return result;
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

