void __mingw_invalidParameterHandler(short unsigned int const* expression, short unsigned int const* function, short unsigned int const* file, unsigned int line, long long unsigned int pReserved) __pure
{
    return;
}

int pre_c_init()
{
    __mingw_initltsdrot_force = 1;
    __mingw_initltsdyn_force = 1;
    __mingw_initltssuo_force = 1;
    int rcx;
    rcx = false;
    managedapp = rcx;
    
    if (!__mingw_app_type)
        __set_app_type(_crt_console_app);
    else
        __set_app_type(_crt_gui_app);
    
    int32_t* rax_1 = __p__fmode();
    *rax_1 = _fmode;
    int32_t* rax_2 = __p__commode();
    *rax_2 = _commode;
    
    if (_MINGW_INSTALL_DEBUG_MATHERR != 1)
        return 0;
    
    __mingw_setusermatherr(_matherr);
    return 0;
}

uint64_t pre_cpp_init()
{
    startinfo.newmode = _newmode;
    return __getmainargs(&argc, &argv, &envp, _dowildcard, &startinfo);
}

int __tmainCRTStartup()
{
    TEB* gsbase;
    void* StackBase = gsbase->NtTib.Self->NtTib.StackBase;
    
    while (true)
    {
        int64_t _.bss_1 = 0;
        
        if (0 == _.bss)
            _.bss = StackBase;
        else
            _.bss_1 = _.bss;
        
        int32_t rdi;
        
        if (_.bss_1)
        {
            if (StackBase != _.bss_1)
            {
                Sleep(0x3e8);
                continue;
            }
            
            rdi = 1;
            
            if (__native_startup_state != 1)
                goto label_1400011e5;
            
            goto label_14000133c;
        }
        else
        {
            rdi = 0;
            
            if (__native_startup_state != 1)
            {
                label_1400011e5:
                
                if (!__native_startup_state)
                {
                    __native_startup_state = 1;
                    _initterm(&__xi_a, &__xi_z);
                }
                else
                    has_cctor = 1;
                
                if (__native_startup_state == 1)
                    goto label_14000135a;
                
                goto label_140001200;
            }
            
            label_14000133c:
            _amsg_exit(0x1f);
            
            if (__native_startup_state != 1)
            {
                label_140001200:
                
                if (rdi)
                    break;
            }
            else
            {
                label_14000135a:
                _initterm(&__xc_a, &__xc_z);
                __native_startup_state = 2;
                
                if (rdi)
                    break;
            }
        }
        _.bss;
        _.bss = 0;
        break;
    }
    
    __dyn_tls_init(nullptr, 2, nullptr);
    _pei386_runtime_relocator();
    __mingw_oldexcpt_handler = SetUnhandledExceptionFilter(_gnu_exception_handler);
    mingw_set_invalid_parameter_handler(__mingw_invalidParameterHandler);
    int64_t argc_1 = argc;
    int64_t* rax_5 = malloc((argc_1 + 1) << 3);
    char** argv_1 = argv;
    char** rdi_1 = rax_5;
    
    if (argc_1 > 0)
    {
        int64_t rbx_1 = 0;
        
        do
        {
            uint64_t _Size = strlen(argv_1[rbx_1]) + 1;
            int64_t rax_7 = malloc(_Size);
            rdi_1[rbx_1] = rax_7;
            int64_t rdx_1 = argv_1[rbx_1];
            rbx_1 += 1;
            memcpy(rax_7, rdx_1, _Size);
        } while (argc_1 != rbx_1);
        
        rax_5 = &rdi_1[argc_1 + 1 - 1];
    }
    
    *rax_5 = 0;
    argv = rdi_1;
    __main();
    argc;
    *__initenv = envp;
    argv;
    main();
    int managedapp_1 = managedapp;
    mainret = 0;
    
    if (!managedapp_1)
    {
        exit(0);
        /* no return */
    }
    
    if (has_cctor)
        return 0;
    
    _cexit();
    return mainret;
}

int WinMainCRTStartup()
{
    __mingw_app_type = 1;
    return __tmainCRTStartup();
}

int mainCRTStartup()
{
    __mingw_app_type = 0;
    return __tmainCRTStartup();
}

int atexit(void (* func)())
{
    _onexit_t_1 rax = _onexit(func);
    return rax - rax;
}

int64_t __gcc_register_frame()
{
    /* tailcall */
    return atexit(__gcc_deregister_frame);
}

void __gcc_deregister_frame() __pure
{
    return;
}

int64_t printf(char* arg1, int64_t arg2)
{
    argv = arg2;
    int64_t r8;
    arg_18 = r8;
    int64_t r9;
    arg_20 = r9;
    int64_t* var_20 = &argv;
    return __mingw_vfprintf(__imp___acrt_iob_func(), arg1, &argv);
}

int64_t multiplication_table(int32_t arg1)
{
    printf(&_.rdata, 0);
    printf(&_.rdata, 1);
    printf(&_.rdata, 2);
    printf(&_.rdata, 3);
    printf(&_.rdata, 4);
    printf(&_.rdata, 5);
    printf(&_.rdata, 6);
    printf(&_.rdata, 7);
    printf(&_.rdata, 8);
    printf(&_.rdata, 9);
    printf(&_.rdata, 0xa);
    printf(&_.rdata, 0xb);
    printf(&_.rdata, 0xc);
    printf(&_.rdata, 0xd);
    printf(&_.rdata, 0xe);
    printf(&_.rdata, 0xf);
    printf(&_.rdata, 0x10);
    printf(&_.rdata, 0x11);
    printf(&_.rdata, 0x12);
    printf(&_.rdata, 0x13);
    return printf(&_.rdata, 0x14);
}

int64_t decrypt_message()
{
    char var_108 = 0;
    char var_107;
    __builtin_memcpy(&var_107, "\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f", 0x1f);
    char var_e8;
    __builtin_strncpy(&var_e8, " !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f", 0x60);
    char var_88;
    __builtin_memcpy(&var_88, "\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe", 0x7f);
    char var_9 = 0xff;
    uint32_t rdx = key[0];
    int64_t rax = rdx;
    char rcx = (&var_108)[rax];
    (&var_108)[rax] = 0;
    var_108 = rcx;
    char rcx_1 = var_107;
    char rax_2 = rcx_1 + key[1][0] + rdx;
    uint64_t r9 = rax_2;
    char r8 = (&var_108)[r9];
    (&var_108)[r9] = rcx_1;
    char var_106;
    char rax_3 = rax_2 + key[2][0] + var_106;
    uint64_t r11 = rax_3;
    char rdx_1 = (&var_108)[r11];
    (&var_108)[r11] = var_106;
    char var_105;
    char rax_4 = rax_3 + key[3][0] + var_105;
    uint64_t r9_1 = rax_4;
    char r8_1 = (&var_108)[r9_1];
    (&var_108)[r9_1] = var_105;
    char var_104;
    char rax_5 = rax_4 + key[4][0] + var_104;
    uint64_t r11_1 = rax_5;
    char rdx_2 = (&var_108)[r11_1];
    (&var_108)[r11_1] = var_104;
    char var_103;
    char rax_6 = rax_5 + key[5][0] + var_103;
    uint64_t r9_2 = rax_6;
    char r8_2 = (&var_108)[r9_2];
    (&var_108)[r9_2] = var_103;
    char var_102;
    char rax_7 = rax_6 + key[6][0] + var_102;
    uint64_t r11_2 = rax_7;
    char rdx_3 = (&var_108)[r11_2];
    (&var_108)[r11_2] = var_102;
    char var_101;
    char rax_8 = rax_7 + key[7][0] + var_101;
    uint64_t r9_3 = rax_8;
    char r8_3 = (&var_108)[r9_3];
    (&var_108)[r9_3] = var_101;
    char var_100;
    char rax_9 = rax_8 + key[8][0] + var_100;
    uint64_t r11_3 = rax_9;
    char rdx_4 = (&var_108)[r11_3];
    (&var_108)[r11_3] = var_100;
    char var_ff;
    char rax_10 = rax_9 + key[9][0] + var_ff;
    uint64_t r9_4 = rax_10;
    char r8_4 = (&var_108)[r9_4];
    (&var_108)[r9_4] = var_ff;
    char var_fe;
    char rax_11 = rax_10 + key[0xa][0] + var_fe;
    uint64_t r11_4 = rax_11;
    char rdx_5 = (&var_108)[r11_4];
    (&var_108)[r11_4] = var_fe;
    char var_fd;
    char rax_12 = rax_11 + key[0xb][0] + var_fd;
    uint64_t r9_5 = rax_12;
    char r8_5 = (&var_108)[r9_5];
    (&var_108)[r9_5] = var_fd;
    char var_fc;
    char rax_13 = rax_12 + key[0xc][0] + var_fc;
    uint64_t r11_5 = rax_13;
    char rdx_6 = (&var_108)[r11_5];
    (&var_108)[r11_5] = var_fc;
    char var_fb;
    char rax_14 = rax_13 + key[0xd][0] + var_fb;
    uint64_t r9_6 = rax_14;
    char r8_6 = (&var_108)[r9_6];
    (&var_108)[r9_6] = var_fb;
    char var_fa;
    char rax_15 = rax_14 + key[0xe][0] + var_fa;
    uint64_t r11_6 = rax_15;
    char rdx_7 = (&var_108)[r11_6];
    (&var_108)[r11_6] = var_fa;
    char var_f9;
    char rax_16 = rax_15 + key[0xf][0] + var_f9;
    uint64_t r9_7 = rax_16;
    char r8_7 = (&var_108)[r9_7];
    (&var_108)[r9_7] = var_f9;
    char var_f8;
    char rax_17 = rax_16 + key[0x10][0] + var_f8;
    uint64_t r11_7 = rax_17;
    char rdx_8 = (&var_108)[r11_7];
    (&var_108)[r11_7] = var_f8;
    char var_f7;
    char rax_18 = rax_17 + key[0x11][0] + var_f7;
    uint64_t r9_8 = rax_18;
    char r8_8 = (&var_108)[r9_8];
    (&var_108)[r9_8] = var_f7;
    char var_f6;
    char rax_19 = rax_18 + key[0x12][0] + var_f6;
    uint64_t r11_8 = rax_19;
    char rdx_9 = (&var_108)[r11_8];
    (&var_108)[r11_8] = var_f6;
    char var_f5;
    char rax_20 = rax_19 + key[0x13][0] + var_f5;
    uint64_t r9_9 = rax_20;
    char r8_9 = (&var_108)[r9_9];
    (&var_108)[r9_9] = var_f5;
    char var_f4;
    char rax_21 = rax_20 + key[0x14][0] + var_f4;
    uint64_t r11_9 = rax_21;
    char rdx_10 = (&var_108)[r11_9];
    (&var_108)[r11_9] = var_f4;
    char var_f3;
    char rax_22 = rax_21 + key[0x15][0] + var_f3;
    uint64_t r9_10 = rax_22;
    char r8_10 = (&var_108)[r9_10];
    (&var_108)[r9_10] = var_f3;
    char var_f2;
    char rax_23 = rax_22 + key[0x16][0] + var_f2;
    uint64_t r11_10 = rax_23;
    char rdx_11 = (&var_108)[r11_10];
    (&var_108)[r11_10] = var_f2;
    char var_f1;
    char rax_24 = rax_23 + key[0x17][0] + var_f1;
    uint64_t r9_11 = rax_24;
    char r8_11 = (&var_108)[r9_11];
    (&var_108)[r9_11] = var_f1;
    char var_f0;
    char rax_25 = rax_24 + key[0x18][0] + var_f0;
    uint64_t r11_11 = rax_25;
    char rdx_12 = (&var_108)[r11_11];
    (&var_108)[r11_11] = var_f0;
    char var_ef;
    char rax_26 = rax_25 + key[0x19][0] + var_ef;
    uint64_t r9_12 = rax_26;
    char r8_12 = (&var_108)[r9_12];
    (&var_108)[r9_12] = var_ef;
    char var_ee;
    char rax_27 = rax_26 + key[0x1a][0] + var_ee;
    uint64_t r11_12 = rax_27;
    char rdx_13 = (&var_108)[r11_12];
    (&var_108)[r11_12] = var_ee;
    char var_ed;
    char rax_28 = rax_27 + key[0x1b][0] + var_ed;
    uint64_t r9_13 = rax_28;
    char r8_13 = (&var_108)[r9_13];
    (&var_108)[r9_13] = var_ed;
    char var_ec;
    char rax_29 = rax_28 + key[0x1c][0] + var_ec;
    uint64_t r11_13 = rax_29;
    char rdx_14 = (&var_108)[r11_13];
    (&var_108)[r11_13] = var_ec;
    char var_eb;
    char rax_30 = rax_29 + key[0x1d][0] + var_eb;
    uint64_t r9_14 = rax_30;
    char r8_14 = (&var_108)[r9_14];
    (&var_108)[r9_14] = var_eb;
    char var_ea;
    char rax_31 = rax_30 + key[0x1e][0] + var_ea;
    uint64_t r11_14 = rax_31;
    char rdx_15 = (&var_108)[r11_14];
    (&var_108)[r11_14] = var_ea;
    char var_e9;
    char rax_32 = rax_31 + key[0x1f][0] + var_e9;
    uint64_t r9_15 = rax_32;
    char r8_15 = (&var_108)[r9_15];
    (&var_108)[r9_15] = var_e9;
    char r10_15 = var_e8;
    char rax_33 = rax_32 + key[0x20][0] + r10_15;
    uint64_t r11_15 = rax_33;
    char rdx_16 = (&var_108)[r11_15];
    (&var_108)[r11_15] = r10_15;
    char var_e7;
    char rax_34 = rax_33 + key[0x21][0] + var_e7;
    uint64_t r9_16 = rax_34;
    char r8_16 = (&var_108)[r9_16];
    (&var_108)[r9_16] = var_e7;
    char var_e6;
    char rax_35 = rax_34 + key[0x22][0] + var_e6;
    uint64_t r11_16 = rax_35;
    char rdx_17 = (&var_108)[r11_16];
    (&var_108)[r11_16] = var_e6;
    char var_e5;
    char rax_36 = rax_35 + key[0x23][0] + var_e5;
    uint64_t r9_17 = rax_36;
    char r8_17 = (&var_108)[r9_17];
    (&var_108)[r9_17] = var_e5;
    char var_e4;
    char rax_37 = rax_36 + key[0x24][0] + var_e4;
    uint64_t r11_17 = rax_37;
    char rdx_18 = (&var_108)[r11_17];
    (&var_108)[r11_17] = var_e4;
    char var_e3;
    char rax_38 = rax_37 + key[0x25][0] + var_e3;
    uint64_t r9_18 = rax_38;
    char r8_18 = (&var_108)[r9_18];
    (&var_108)[r9_18] = var_e3;
    char var_e2;
    char rax_39 = rax_38 + key[0x26][0] + var_e2;
    uint64_t r11_18 = rax_39;
    char rdx_19 = (&var_108)[r11_18];
    (&var_108)[r11_18] = var_e2;
    char var_e1;
    char rax_40 = rax_39 + key[0x27][0] + var_e1;
    uint64_t r9_19 = rax_40;
    char r8_19 = (&var_108)[r9_19];
    (&var_108)[r9_19] = var_e1;
    char var_e0;
    char rax_41 = rax_40 + key[0x28][0] + var_e0;
    uint64_t r11_19 = rax_41;
    char rdx_20 = (&var_108)[r11_19];
    (&var_108)[r11_19] = var_e0;
    char var_df;
    char rax_42 = rax_41 + key[0x29][0] + var_df;
    uint64_t r9_20 = rax_42;
    char r8_20 = (&var_108)[r9_20];
    (&var_108)[r9_20] = var_df;
    char var_de;
    char rax_43 = rax_42 + key[0x2a][0] + var_de;
    uint64_t r11_20 = rax_43;
    char rdx_21 = (&var_108)[r11_20];
    (&var_108)[r11_20] = var_de;
    char var_dd;
    char rax_44 = rax_43 + key[0x2b][0] + var_dd;
    uint64_t r9_21 = rax_44;
    char r8_21 = (&var_108)[r9_21];
    (&var_108)[r9_21] = var_dd;
    char var_dc;
    char rax_45 = rax_44 + key[0x2c][0] + var_dc;
    uint64_t r11_21 = rax_45;
    char rdx_22 = (&var_108)[r11_21];
    (&var_108)[r11_21] = var_dc;
    char var_db;
    char rax_46 = rax_45 + key[0x2d][0] + var_db;
    uint64_t r9_22 = rax_46;
    char r8_22 = (&var_108)[r9_22];
    (&var_108)[r9_22] = var_db;
    char var_da;
    char rax_47 = rax_46 + key[0x2e][0] + var_da;
    uint64_t r11_22 = rax_47;
    char rdx_23 = (&var_108)[r11_22];
    (&var_108)[r11_22] = var_da;
    char var_d9;
    char rax_48 = rax_47 + key[0x2f][0] + var_d9;
    uint64_t r9_23 = rax_48;
    char r8_23 = (&var_108)[r9_23];
    (&var_108)[r9_23] = var_d9;
    char var_d8;
    char rax_49 = rax_48 + key[0x30][0] + var_d8;
    uint64_t r11_23 = rax_49;
    char rdx_24 = (&var_108)[r11_23];
    (&var_108)[r11_23] = var_d8;
    char var_d7;
    char rax_50 = rax_49 + key[0x31][0] + var_d7;
    uint64_t r9_24 = rax_50;
    char r8_24 = (&var_108)[r9_24];
    (&var_108)[r9_24] = var_d7;
    char var_d6;
    char rax_51 = rax_50 + key[0x32][0] + var_d6;
    uint64_t r11_24 = rax_51;
    char rdx_25 = (&var_108)[r11_24];
    (&var_108)[r11_24] = var_d6;
    char var_d5;
    char rax_52 = rax_51 + key[0x33][0] + var_d5;
    uint64_t r9_25 = rax_52;
    char r8_25 = (&var_108)[r9_25];
    (&var_108)[r9_25] = var_d5;
    char var_d4;
    char rax_53 = rax_52 + key[0x34][0] + var_d4;
    uint64_t r11_25 = rax_53;
    char rdx_26 = (&var_108)[r11_25];
    (&var_108)[r11_25] = var_d4;
    char var_d3;
    char rax_54 = rax_53 + key[0x35][0] + var_d3;
    uint64_t r9_26 = rax_54;
    char r8_26 = (&var_108)[r9_26];
    (&var_108)[r9_26] = var_d3;
    char var_d2;
    char rax_55 = rax_54 + key[0x36][0] + var_d2;
    uint64_t r11_26 = rax_55;
    char rdx_27 = (&var_108)[r11_26];
    (&var_108)[r11_26] = var_d2;
    char var_d1;
    char rax_56 = rax_55 + key[0x37][0] + var_d1;
    uint64_t r9_27 = rax_56;
    char r8_27 = (&var_108)[r9_27];
    (&var_108)[r9_27] = var_d1;
    char var_d0;
    char rax_57 = rax_56 + key[0x38][0] + var_d0;
    uint64_t r11_27 = rax_57;
    char rdx_28 = (&var_108)[r11_27];
    (&var_108)[r11_27] = var_d0;
    char var_cf;
    char rax_58 = rax_57 + key[0x39][0] + var_cf;
    uint64_t r9_28 = rax_58;
    char r8_28 = (&var_108)[r9_28];
    (&var_108)[r9_28] = var_cf;
    char var_ce;
    char rax_59 = rax_58 + key[0x3a][0] + var_ce;
    uint64_t r11_28 = rax_59;
    char rdx_29 = (&var_108)[r11_28];
    (&var_108)[r11_28] = var_ce;
    char var_cd;
    char rax_60 = rax_59 + key[0x3b][0] + var_cd;
    uint64_t r9_29 = rax_60;
    char r8_29 = (&var_108)[r9_29];
    (&var_108)[r9_29] = var_cd;
    char var_cc;
    char rax_61 = rax_60 + key[0x3c][0] + var_cc;
    uint64_t r11_29 = rax_61;
    char rdx_30 = (&var_108)[r11_29];
    (&var_108)[r11_29] = var_cc;
    char var_cb;
    char rax_62 = rax_61 + key[0x3d][0] + var_cb;
    uint64_t r9_30 = rax_62;
    char r8_30 = (&var_108)[r9_30];
    (&var_108)[r9_30] = var_cb;
    char var_ca;
    char rax_63 = rax_62 + key[0x3e][0] + var_ca;
    uint64_t r11_30 = rax_63;
    char rdx_31 = (&var_108)[r11_30];
    (&var_108)[r11_30] = var_ca;
    char var_c9;
    char rax_64 = rax_63 + key[0x3f][0] + var_c9;
    uint64_t r9_31 = rax_64;
    char r8_31 = (&var_108)[r9_31];
    (&var_108)[r9_31] = var_c9;
    char var_c9_1 = r8_31;
    char var_c8;
    char rax_65 = rax_64 + key[0x40][0] + var_c8;
    uint64_t r11_31 = rax_65;
    char rdx_32 = (&var_108)[r11_31];
    (&var_108)[r11_31] = var_c8;
    char var_c8_1 = rdx_32;
    char var_c7;
    char rax_66 = rax_65 + key[0x41][0] + var_c7;
    uint64_t r9_32 = rax_66;
    char r8_32 = (&var_108)[r9_32];
    (&var_108)[r9_32] = var_c7;
    char var_c7_1 = r8_32;
    char var_c6;
    char rax_67 = rax_66 + key[0x42][0] + var_c6;
    uint64_t r11_32 = rax_67;
    char rdx_33 = (&var_108)[r11_32];
    (&var_108)[r11_32] = var_c6;
    char var_c6_1 = rdx_33;
    char var_c5;
    char rax_68 = rax_67 + key[0x43][0] + var_c5;
    uint64_t r9_33 = rax_68;
    char r8_33 = (&var_108)[r9_33];
    (&var_108)[r9_33] = var_c5;
    char var_c5_1 = r8_33;
    char var_c4;
    char rax_69 = rax_68 + key[0x44][0] + var_c4;
    uint64_t r11_33 = rax_69;
    char rdx_34 = (&var_108)[r11_33];
    (&var_108)[r11_33] = var_c4;
    char var_c4_1 = rdx_34;
    char var_c3;
    char rax_70 = rax_69 + key[0x45][0] + var_c3;
    uint64_t r9_34 = rax_70;
    char r8_34 = (&var_108)[r9_34];
    (&var_108)[r9_34] = var_c3;
    char var_c3_1 = r8_34;
    char var_c2;
    char rax_71 = rax_70 + key[0x46][0] + var_c2;
    uint64_t r11_34 = rax_71;
    char rdx_35 = (&var_108)[r11_34];
    (&var_108)[r11_34] = var_c2;
    char var_c2_1 = rdx_35;
    char var_c1;
    char rax_72 = rax_71 + key[0x47][0] + var_c1;
    uint64_t r9_35 = rax_72;
    char r8_35 = (&var_108)[r9_35];
    (&var_108)[r9_35] = var_c1;
    char var_c1_1 = r8_35;
    char var_c0;
    char rax_73 = rax_72 + key[0x48][0] + var_c0;
    uint64_t r11_35 = rax_73;
    char rdx_36 = (&var_108)[r11_35];
    (&var_108)[r11_35] = var_c0;
    char var_c0_1 = rdx_36;
    char var_bf;
    char rax_74 = rax_73 + key[0x49][0] + var_bf;
    uint64_t r9_36 = rax_74;
    char r8_36 = (&var_108)[r9_36];
    (&var_108)[r9_36] = var_bf;
    char var_bf_1 = r8_36;
    char var_be;
    char rax_75 = rax_74 + key[0x4a][0] + var_be;
    uint64_t r11_36 = rax_75;
    char rdx_37 = (&var_108)[r11_36];
    (&var_108)[r11_36] = var_be;
    char var_be_1 = rdx_37;
    char var_bd;
    char rax_76 = rax_75 + key[0x4b][0] + var_bd;
    uint64_t r9_37 = rax_76;
    char r8_37 = (&var_108)[r9_37];
    (&var_108)[r9_37] = var_bd;
    char var_bd_1 = r8_37;
    char var_bc;
    char rax_77 = rax_76 + key[0x4c][0] + var_bc;
    uint64_t r11_37 = rax_77;
    char rdx_38 = (&var_108)[r11_37];
    (&var_108)[r11_37] = var_bc;
    char var_bc_1 = rdx_38;
    char var_bb;
    char rax_78 = rax_77 + key[0x4d][0] + var_bb;
    uint64_t r9_38 = rax_78;
    char r8_38 = (&var_108)[r9_38];
    (&var_108)[r9_38] = var_bb;
    char var_bb_1 = r8_38;
    char var_ba;
    char rax_79 = rax_78 + key[0x4e][0] + var_ba;
    uint64_t r11_38 = rax_79;
    char rdx_39 = (&var_108)[r11_38];
    (&var_108)[r11_38] = var_ba;
    char var_ba_1 = rdx_39;
    char var_b9;
    char rax_80 = rax_79 + key[0x4f][0] + var_b9;
    uint64_t r9_39 = rax_80;
    char r8_39 = (&var_108)[r9_39];
    (&var_108)[r9_39] = var_b9;
    char var_b9_1 = r8_39;
    char var_b8;
    char rax_81 = rax_80 + key[0x50][0] + var_b8;
    uint64_t r11_39 = rax_81;
    char rdx_40 = (&var_108)[r11_39];
    (&var_108)[r11_39] = var_b8;
    char var_b8_1 = rdx_40;
    char var_b7;
    char rax_82 = rax_81 + key[0x51][0] + var_b7;
    uint64_t r9_40 = rax_82;
    char r8_40 = (&var_108)[r9_40];
    (&var_108)[r9_40] = var_b7;
    char var_b7_1 = r8_40;
    char var_b6;
    char rax_83 = rax_82 + key[0x52][0] + var_b6;
    uint64_t r11_40 = rax_83;
    char rdx_41 = (&var_108)[r11_40];
    (&var_108)[r11_40] = var_b6;
    char var_b6_1 = rdx_41;
    char var_b5;
    char rax_84 = rax_83 + key[0x53][0] + var_b5;
    uint64_t r9_41 = rax_84;
    char r8_41 = (&var_108)[r9_41];
    (&var_108)[r9_41] = var_b5;
    char var_b5_1 = r8_41;
    char var_b4;
    char rax_85 = rax_84 + key[0x54][0] + var_b4;
    uint64_t r11_41 = rax_85;
    char rdx_42 = (&var_108)[r11_41];
    (&var_108)[r11_41] = var_b4;
    char var_b4_1 = rdx_42;
    char var_b3;
    char rax_86 = rax_85 + key[0x55][0] + var_b3;
    uint64_t r9_42 = rax_86;
    char r8_42 = (&var_108)[r9_42];
    (&var_108)[r9_42] = var_b3;
    char var_b3_1 = r8_42;
    char var_b2;
    char rax_87 = rax_86 + key[0x56][0] + var_b2;
    uint64_t r11_42 = rax_87;
    char rdx_43 = (&var_108)[r11_42];
    (&var_108)[r11_42] = var_b2;
    char var_b2_1 = rdx_43;
    char var_b1;
    char rax_88 = rax_87 + key[0x57][0] + var_b1;
    uint64_t r9_43 = rax_88;
    char r8_43 = (&var_108)[r9_43];
    (&var_108)[r9_43] = var_b1;
    char var_b1_1 = r8_43;
    char var_b0;
    char rax_89 = rax_88 + key[0x58][0] + var_b0;
    uint64_t r11_43 = rax_89;
    char rdx_44 = (&var_108)[r11_43];
    (&var_108)[r11_43] = var_b0;
    char var_b0_1 = rdx_44;
    char var_af;
    char rax_90 = rax_89 + key[0x59][0] + var_af;
    uint64_t r9_44 = rax_90;
    char r8_44 = (&var_108)[r9_44];
    (&var_108)[r9_44] = var_af;
    char var_af_1 = r8_44;
    char var_ae;
    char rax_91 = rax_90 + key[0x5a][0] + var_ae;
    uint64_t r11_44 = rax_91;
    char rdx_45 = (&var_108)[r11_44];
    (&var_108)[r11_44] = var_ae;
    char var_ae_1 = rdx_45;
    char var_ad;
    char rax_92 = rax_91 + key[0x5b][0] + var_ad;
    uint64_t r9_45 = rax_92;
    char r8_45 = (&var_108)[r9_45];
    (&var_108)[r9_45] = var_ad;
    char var_ad_1 = r8_45;
    char var_ac;
    char rax_93 = rax_92 + key[0x5c][0] + var_ac;
    uint64_t r11_45 = rax_93;
    char rdx_46 = (&var_108)[r11_45];
    (&var_108)[r11_45] = var_ac;
    char var_ac_1 = rdx_46;
    char var_ab;
    char rax_94 = rax_93 + key[0x5d][0] + var_ab;
    uint64_t r9_46 = rax_94;
    char r8_46 = (&var_108)[r9_46];
    (&var_108)[r9_46] = var_ab;
    char var_ab_1 = r8_46;
    char var_aa;
    char rax_95 = rax_94 + key[0x5e][0] + var_aa;
    uint64_t r11_46 = rax_95;
    char rdx_47 = (&var_108)[r11_46];
    (&var_108)[r11_46] = var_aa;
    char var_aa_1 = rdx_47;
    char var_a9;
    char rax_96 = rax_95 + key[0x5f][0] + var_a9;
    uint64_t r9_47 = rax_96;
    char r8_47 = (&var_108)[r9_47];
    (&var_108)[r9_47] = var_a9;
    char var_a9_1 = r8_47;
    char var_a8;
    char rax_97 = rax_96 + key[0x60][0] + var_a8;
    uint64_t r11_47 = rax_97;
    char rdx_48 = (&var_108)[r11_47];
    (&var_108)[r11_47] = var_a8;
    char var_a8_1 = rdx_48;
    char var_a7;
    char rax_98 = rax_97 + key[0x61][0] + var_a7;
    uint64_t r9_48 = rax_98;
    char r8_48 = (&var_108)[r9_48];
    (&var_108)[r9_48] = var_a7;
    char var_a7_1 = r8_48;
    char var_a6;
    char rax_99 = rax_98 + key[0x62][0] + var_a6;
    uint64_t r11_48 = rax_99;
    char rdx_49 = (&var_108)[r11_48];
    (&var_108)[r11_48] = var_a6;
    char var_a6_1 = rdx_49;
    char var_a5;
    char rax_100 = rax_99 + key[0x63][0] + var_a5;
    uint64_t r9_49 = rax_100;
    char r8_49 = (&var_108)[r9_49];
    (&var_108)[r9_49] = var_a5;
    char var_a5_1 = r8_49;
    char var_a4;
    char rax_101 = rax_100 + key[0x64][0] + var_a4;
    uint64_t r11_49 = rax_101;
    char rdx_50 = (&var_108)[r11_49];
    (&var_108)[r11_49] = var_a4;
    char var_a4_1 = rdx_50;
    char var_a3;
    char rax_102 = rax_101 + key[0x65][0] + var_a3;
    uint64_t r9_50 = rax_102;
    char r8_50 = (&var_108)[r9_50];
    (&var_108)[r9_50] = var_a3;
    char var_a3_1 = r8_50;
    char var_a2;
    char rax_103 = rax_102 + key[0x66][0] + var_a2;
    uint64_t r11_50 = rax_103;
    char rdx_51 = (&var_108)[r11_50];
    (&var_108)[r11_50] = var_a2;
    char var_a2_1 = rdx_51;
    char var_a1;
    char rax_104 = rax_103 + key[0x67][0] + var_a1;
    uint64_t r9_51 = rax_104;
    char r8_51 = (&var_108)[r9_51];
    (&var_108)[r9_51] = var_a1;
    char var_a1_1 = r8_51;
    char var_a0;
    char rax_105 = rax_104 + key[0x68][0] + var_a0;
    uint64_t r11_51 = rax_105;
    char rdx_52 = (&var_108)[r11_51];
    (&var_108)[r11_51] = var_a0;
    char var_a0_1 = rdx_52;
    char var_9f;
    char rax_106 = rax_105 + key[0x69][0] + var_9f;
    uint64_t r9_52 = rax_106;
    char r8_52 = (&var_108)[r9_52];
    (&var_108)[r9_52] = var_9f;
    char var_9f_1 = r8_52;
    char var_9e;
    char rax_107 = rax_106 + key[0x6a][0] + var_9e;
    uint64_t r11_52 = rax_107;
    char rdx_53 = (&var_108)[r11_52];
    (&var_108)[r11_52] = var_9e;
    char var_9e_1 = rdx_53;
    char var_9d;
    char rax_108 = rax_107 + key[0x6b][0] + var_9d;
    uint64_t r9_53 = rax_108;
    char r8_53 = (&var_108)[r9_53];
    (&var_108)[r9_53] = var_9d;
    char var_9d_1 = r8_53;
    char var_9c;
    char rax_109 = rax_108 + key[0x6c][0] + var_9c;
    uint64_t r11_53 = rax_109;
    char rdx_54 = (&var_108)[r11_53];
    (&var_108)[r11_53] = var_9c;
    char var_9c_1 = rdx_54;
    char var_9b;
    char rax_110 = rax_109 + key[0x6d][0] + var_9b;
    uint64_t r9_54 = rax_110;
    char r8_54 = (&var_108)[r9_54];
    (&var_108)[r9_54] = var_9b;
    char var_9b_1 = r8_54;
    char var_9a;
    char rax_111 = rax_110 + key[0x6e][0] + var_9a;
    uint64_t r11_54 = rax_111;
    char rdx_55 = (&var_108)[r11_54];
    (&var_108)[r11_54] = var_9a;
    char var_9a_1 = rdx_55;
    char var_99;
    char rax_112 = rax_111 + key[0x6f][0] + var_99;
    uint64_t r9_55 = rax_112;
    char r8_55 = (&var_108)[r9_55];
    (&var_108)[r9_55] = var_99;
    char var_99_1 = r8_55;
    char var_98;
    char rax_113 = rax_112 + key[0x70][0] + var_98;
    uint64_t r11_55 = rax_113;
    char rdx_56 = (&var_108)[r11_55];
    (&var_108)[r11_55] = var_98;
    char var_98_1 = rdx_56;
    char var_97;
    char rax_114 = rax_113 + key[0x71][0] + var_97;
    uint64_t r9_56 = rax_114;
    char r8_56 = (&var_108)[r9_56];
    (&var_108)[r9_56] = var_97;
    char var_97_1 = r8_56;
    char var_96;
    char rax_115 = rax_114 + key[0x72][0] + var_96;
    uint64_t r11_56 = rax_115;
    char rdx_57 = (&var_108)[r11_56];
    (&var_108)[r11_56] = var_96;
    char var_96_1 = rdx_57;
    char var_95;
    char rax_116 = rax_115 + key[0x73][0] + var_95;
    uint64_t r9_57 = rax_116;
    char r8_57 = (&var_108)[r9_57];
    (&var_108)[r9_57] = var_95;
    char var_95_1 = r8_57;
    char var_94;
    char rax_117 = rax_116 + key[0x74][0] + var_94;
    uint64_t r11_57 = rax_117;
    char rdx_58 = (&var_108)[r11_57];
    (&var_108)[r11_57] = var_94;
    char var_94_1 = rdx_58;
    char var_93;
    char rax_118 = rax_117 + key[0x75][0] + var_93;
    uint64_t r9_58 = rax_118;
    char r8_58 = (&var_108)[r9_58];
    (&var_108)[r9_58] = var_93;
    char var_93_1 = r8_58;
    char var_92;
    char rax_119 = rax_118 + key[0x76][0] + var_92;
    uint64_t r11_58 = rax_119;
    char rdx_59 = (&var_108)[r11_58];
    (&var_108)[r11_58] = var_92;
    char var_92_1 = rdx_59;
    char var_91;
    char rax_120 = rax_119 + key[0x77][0] + var_91;
    uint64_t r9_59 = rax_120;
    char r8_59 = (&var_108)[r9_59];
    (&var_108)[r9_59] = var_91;
    char var_91_1 = r8_59;
    char var_90;
    char rax_121 = rax_120 + key[0x78][0] + var_90;
    uint64_t r11_59 = rax_121;
    char rdx_60 = (&var_108)[r11_59];
    (&var_108)[r11_59] = var_90;
    char var_90_1 = rdx_60;
    char var_8f;
    char rax_122 = rax_121 + key[0x79][0] + var_8f;
    uint64_t r9_60 = rax_122;
    char r8_60 = (&var_108)[r9_60];
    (&var_108)[r9_60] = var_8f;
    char var_8f_1 = r8_60;
    char var_8e;
    char rax_123 = rax_122 + key[0x7a][0] + var_8e;
    uint64_t r11_60 = rax_123;
    char rdx_61 = (&var_108)[r11_60];
    (&var_108)[r11_60] = var_8e;
    char var_8e_1 = rdx_61;
    char var_8d;
    char rax_124 = rax_123 + key[0x7b][0] + var_8d;
    uint64_t r9_61 = rax_124;
    char r8_61 = (&var_108)[r9_61];
    (&var_108)[r9_61] = var_8d;
    char var_8d_1 = r8_61;
    char var_8c;
    char rax_125 = rax_124 + key[0x7c][0] + var_8c;
    uint64_t r11_61 = rax_125;
    char rdx_62 = (&var_108)[r11_61];
    (&var_108)[r11_61] = var_8c;
    char var_8c_1 = rdx_62;
    char var_8b;
    char rax_126 = rax_125 + key[0x7d][0] + var_8b;
    uint64_t r9_62 = rax_126;
    char r8_62 = (&var_108)[r9_62];
    (&var_108)[r9_62] = var_8b;
    char var_8b_1 = r8_62;
    char var_8a;
    char rax_127 = rax_126 + key[0x7e][0] + var_8a;
    uint64_t r11_62 = rax_127;
    char rdx_63 = (&var_108)[r11_62];
    (&var_108)[r11_62] = var_8a;
    char var_8a_1 = rdx_63;
    char var_89;
    char rax_128 = rax_127 + key[0x7f][0] + var_89;
    uint64_t r9_63 = rax_128;
    char r8_63 = (&var_108)[r9_63];
    (&var_108)[r9_63] = var_89;
    char var_89_1 = r8_63;
    char r10_63 = var_88;
    char rax_129 = rax_128 + key[0x80][0] + r10_63;
    uint64_t r11_63 = rax_129;
    char rdx_64 = (&var_108)[r11_63];
    (&var_108)[r11_63] = r10_63;
    char var_88_1 = rdx_64;
    char var_87;
    char rax_130 = rax_129 + key[0x81][0] + var_87;
    uint64_t r9_64 = rax_130;
    char r8_64 = (&var_108)[r9_64];
    (&var_108)[r9_64] = var_87;
    char var_87_1 = r8_64;
    char var_86;
    char rax_131 = rax_130 + key[0x82][0] + var_86;
    uint64_t r11_64 = rax_131;
    char rdx_65 = (&var_108)[r11_64];
    (&var_108)[r11_64] = var_86;
    char var_86_1 = rdx_65;
    char var_85;
    char rax_132 = rax_131 + key[0x83][0] + var_85;
    uint64_t r9_65 = rax_132;
    char r8_65 = (&var_108)[r9_65];
    (&var_108)[r9_65] = var_85;
    char var_85_1 = r8_65;
    char var_84;
    char rax_133 = rax_132 + key[0x84][0] + var_84;
    uint64_t r11_65 = rax_133;
    char rdx_66 = (&var_108)[r11_65];
    (&var_108)[r11_65] = var_84;
    char var_84_1 = rdx_66;
    char var_83;
    char rax_134 = rax_133 + key[0x85][0] + var_83;
    uint64_t r9_66 = rax_134;
    char r8_66 = (&var_108)[r9_66];
    (&var_108)[r9_66] = var_83;
    char var_83_1 = r8_66;
    char var_82;
    char rax_135 = rax_134 + key[0x86][0] + var_82;
    uint64_t r11_66 = rax_135;
    char rdx_67 = (&var_108)[r11_66];
    (&var_108)[r11_66] = var_82;
    char var_82_1 = rdx_67;
    char var_81;
    char rax_136 = rax_135 + key[0x87][0] + var_81;
    uint64_t r9_67 = rax_136;
    char r8_67 = (&var_108)[r9_67];
    (&var_108)[r9_67] = var_81;
    char var_81_1 = r8_67;
    char var_80;
    char rax_137 = rax_136 + key[0x88][0] + var_80;
    uint64_t r11_67 = rax_137;
    char rdx_68 = (&var_108)[r11_67];
    (&var_108)[r11_67] = var_80;
    char var_80_1 = rdx_68;
    char var_7f;
    char rax_138 = rax_137 + key[0x89][0] + var_7f;
    uint64_t r9_68 = rax_138;
    char r8_68 = (&var_108)[r9_68];
    (&var_108)[r9_68] = var_7f;
    char var_7f_1 = r8_68;
    char var_7e;
    char rax_139 = rax_138 + key[0x8a][0] + var_7e;
    uint64_t r11_68 = rax_139;
    char rdx_69 = (&var_108)[r11_68];
    (&var_108)[r11_68] = var_7e;
    char var_7e_1 = rdx_69;
    char var_7d;
    char rax_140 = rax_139 + key[0x8b][0] + var_7d;
    uint64_t r9_69 = rax_140;
    char r8_69 = (&var_108)[r9_69];
    (&var_108)[r9_69] = var_7d;
    char var_7d_1 = r8_69;
    char var_7c;
    char rax_141 = rax_140 + key[0x8c][0] + var_7c;
    uint64_t r11_69 = rax_141;
    char rdx_70 = (&var_108)[r11_69];
    (&var_108)[r11_69] = var_7c;
    char var_7c_1 = rdx_70;
    char var_7b;
    char rax_142 = rax_141 + key[0x8d][0] + var_7b;
    uint64_t r9_70 = rax_142;
    char r8_70 = (&var_108)[r9_70];
    (&var_108)[r9_70] = var_7b;
    char var_7b_1 = r8_70;
    char var_7a;
    char rax_143 = rax_142 + key[0x8e][0] + var_7a;
    uint64_t r11_70 = rax_143;
    char rdx_71 = (&var_108)[r11_70];
    (&var_108)[r11_70] = var_7a;
    char var_7a_1 = rdx_71;
    char var_79;
    char rax_144 = rax_143 + key[0x8f][0] + var_79;
    uint64_t r9_71 = rax_144;
    char r8_71 = (&var_108)[r9_71];
    (&var_108)[r9_71] = var_79;
    char var_79_1 = r8_71;
    char var_78;
    char rax_145 = rax_144 + key[0x90][0] + var_78;
    uint64_t r11_71 = rax_145;
    char rdx_72 = (&var_108)[r11_71];
    (&var_108)[r11_71] = var_78;
    char var_78_1 = rdx_72;
    char var_77;
    char rax_146 = rax_145 + key[0x91][0] + var_77;
    uint64_t r9_72 = rax_146;
    char r8_72 = (&var_108)[r9_72];
    (&var_108)[r9_72] = var_77;
    char var_77_1 = r8_72;
    char var_76;
    char rax_147 = rax_146 + key[0x92][0] + var_76;
    uint64_t r11_72 = rax_147;
    char rdx_73 = (&var_108)[r11_72];
    (&var_108)[r11_72] = var_76;
    char var_76_1 = rdx_73;
    char var_75;
    char rax_148 = rax_147 + key[0x93][0] + var_75;
    uint64_t r9_73 = rax_148;
    char r8_73 = (&var_108)[r9_73];
    (&var_108)[r9_73] = var_75;
    char var_75_1 = r8_73;
    char var_74;
    char rax_149 = rax_148 + key[0x94][0] + var_74;
    uint64_t r11_73 = rax_149;
    char rdx_74 = (&var_108)[r11_73];
    (&var_108)[r11_73] = var_74;
    char var_74_1 = rdx_74;
    char var_73;
    char rax_150 = rax_149 + key[0x95][0] + var_73;
    uint64_t r9_74 = rax_150;
    char r8_74 = (&var_108)[r9_74];
    (&var_108)[r9_74] = var_73;
    char var_73_1 = r8_74;
    char var_72;
    char rax_151 = rax_150 + key[0x96][0] + var_72;
    uint64_t r11_74 = rax_151;
    char rdx_75 = (&var_108)[r11_74];
    (&var_108)[r11_74] = var_72;
    char var_72_1 = rdx_75;
    char var_71;
    char rax_152 = rax_151 + key[0x97][0] + var_71;
    uint64_t r9_75 = rax_152;
    char r8_75 = (&var_108)[r9_75];
    (&var_108)[r9_75] = var_71;
    char var_71_1 = r8_75;
    char var_70;
    char rax_153 = rax_152 + key[0x98][0] + var_70;
    uint64_t r11_75 = rax_153;
    char rdx_76 = (&var_108)[r11_75];
    (&var_108)[r11_75] = var_70;
    char var_70_1 = rdx_76;
    char var_6f;
    char rax_154 = rax_153 + key[0x99][0] + var_6f;
    uint64_t r9_76 = rax_154;
    char r8_76 = (&var_108)[r9_76];
    (&var_108)[r9_76] = var_6f;
    char var_6f_1 = r8_76;
    char var_6e;
    char rax_155 = rax_154 + key[0x9a][0] + var_6e;
    uint64_t r11_76 = rax_155;
    char rdx_77 = (&var_108)[r11_76];
    (&var_108)[r11_76] = var_6e;
    char var_6e_1 = rdx_77;
    char var_6d;
    char rax_156 = rax_155 + key[0x9b][0] + var_6d;
    uint64_t r9_77 = rax_156;
    char r8_77 = (&var_108)[r9_77];
    (&var_108)[r9_77] = var_6d;
    char var_6d_1 = r8_77;
    char var_6c;
    char rax_157 = rax_156 + key[0x9c][0] + var_6c;
    uint64_t r11_77 = rax_157;
    char rdx_78 = (&var_108)[r11_77];
    (&var_108)[r11_77] = var_6c;
    char var_6c_1 = rdx_78;
    char var_6b;
    char rax_158 = rax_157 + key[0x9d][0] + var_6b;
    uint64_t r9_78 = rax_158;
    char r8_78 = (&var_108)[r9_78];
    (&var_108)[r9_78] = var_6b;
    char var_6b_1 = r8_78;
    char var_6a;
    char rax_159 = rax_158 + key[0x9e][0] + var_6a;
    uint64_t r11_78 = rax_159;
    char rdx_79 = (&var_108)[r11_78];
    (&var_108)[r11_78] = var_6a;
    char var_6a_1 = rdx_79;
    char var_69;
    char rax_160 = rax_159 + key[0x9f][0] + var_69;
    uint64_t r9_79 = rax_160;
    char r8_79 = (&var_108)[r9_79];
    (&var_108)[r9_79] = var_69;
    char var_69_1 = r8_79;
    char var_68;
    char rax_161 = rax_160 + key[0xa0][0] + var_68;
    uint64_t r11_79 = rax_161;
    char rdx_80 = (&var_108)[r11_79];
    (&var_108)[r11_79] = var_68;
    char var_68_1 = rdx_80;
    char var_67;
    char rax_162 = rax_161 + key[0xa1][0] + var_67;
    uint64_t r9_80 = rax_162;
    char r8_80 = (&var_108)[r9_80];
    (&var_108)[r9_80] = var_67;
    char var_67_1 = r8_80;
    char var_66;
    char rax_163 = rax_162 + key[0xa2][0] + var_66;
    uint64_t r11_80 = rax_163;
    char rdx_81 = (&var_108)[r11_80];
    (&var_108)[r11_80] = var_66;
    char var_66_1 = rdx_81;
    char var_65;
    char rax_164 = rax_163 + key[0xa3][0] + var_65;
    uint64_t r9_81 = rax_164;
    char r8_81 = (&var_108)[r9_81];
    (&var_108)[r9_81] = var_65;
    char var_65_1 = r8_81;
    char var_64;
    char rax_165 = rax_164 + key[0xa4][0] + var_64;
    uint64_t r11_81 = rax_165;
    char rdx_82 = (&var_108)[r11_81];
    (&var_108)[r11_81] = var_64;
    char var_64_1 = rdx_82;
    char var_63;
    char rax_166 = rax_165 + key[0xa5][0] + var_63;
    uint64_t r9_82 = rax_166;
    char r8_82 = (&var_108)[r9_82];
    (&var_108)[r9_82] = var_63;
    char var_63_1 = r8_82;
    char var_62;
    char rax_167 = rax_166 + key[0xa6][0] + var_62;
    uint64_t r11_82 = rax_167;
    char rdx_83 = (&var_108)[r11_82];
    (&var_108)[r11_82] = var_62;
    char var_62_1 = rdx_83;
    char var_61;
    char rax_168 = rax_167 + key[0xa7][0] + var_61;
    uint64_t r9_83 = rax_168;
    char r8_83 = (&var_108)[r9_83];
    (&var_108)[r9_83] = var_61;
    char var_61_1 = r8_83;
    char var_60;
    char rax_169 = rax_168 + key[0xa8][0] + var_60;
    uint64_t r11_83 = rax_169;
    char rdx_84 = (&var_108)[r11_83];
    (&var_108)[r11_83] = var_60;
    char var_60_1 = rdx_84;
    char var_5f;
    char rax_170 = rax_169 + key[0xa9][0] + var_5f;
    uint64_t r9_84 = rax_170;
    char r8_84 = (&var_108)[r9_84];
    (&var_108)[r9_84] = var_5f;
    char var_5f_1 = r8_84;
    char var_5e;
    char rax_171 = rax_170 + key[0xaa][0] + var_5e;
    uint64_t r11_84 = rax_171;
    char rdx_85 = (&var_108)[r11_84];
    (&var_108)[r11_84] = var_5e;
    char var_5e_1 = rdx_85;
    char var_5d;
    char rax_172 = rax_171 + key[0xab][0] + var_5d;
    uint64_t r9_85 = rax_172;
    char r8_85 = (&var_108)[r9_85];
    (&var_108)[r9_85] = var_5d;
    char var_5d_1 = r8_85;
    char var_5c;
    char rax_173 = rax_172 + key[0xac][0] + var_5c;
    uint64_t r11_85 = rax_173;
    char rdx_86 = (&var_108)[r11_85];
    (&var_108)[r11_85] = var_5c;
    char var_5c_1 = rdx_86;
    char var_5b;
    char rax_174 = rax_173 + key[0xad][0] + var_5b;
    uint64_t r9_86 = rax_174;
    char r8_86 = (&var_108)[r9_86];
    (&var_108)[r9_86] = var_5b;
    char var_5b_1 = r8_86;
    char var_5a;
    char rax_175 = rax_174 + key[0xae][0] + var_5a;
    uint64_t r11_86 = rax_175;
    char rdx_87 = (&var_108)[r11_86];
    (&var_108)[r11_86] = var_5a;
    char var_5a_1 = rdx_87;
    char var_59;
    char rax_176 = rax_175 + key[0xaf][0] + var_59;
    uint64_t r9_87 = rax_176;
    char r8_87 = (&var_108)[r9_87];
    (&var_108)[r9_87] = var_59;
    char var_59_1 = r8_87;
    char var_58;
    char rax_177 = rax_176 + key[0xb0][0] + var_58;
    uint64_t r11_87 = rax_177;
    char rdx_88 = (&var_108)[r11_87];
    (&var_108)[r11_87] = var_58;
    char var_58_1 = rdx_88;
    char var_57;
    char rax_178 = rax_177 + key[0xb1][0] + var_57;
    uint64_t r9_88 = rax_178;
    char r8_88 = (&var_108)[r9_88];
    (&var_108)[r9_88] = var_57;
    char var_57_1 = r8_88;
    char var_56;
    char rax_179 = rax_178 + key[0xb2][0] + var_56;
    uint64_t r11_88 = rax_179;
    char rdx_89 = (&var_108)[r11_88];
    (&var_108)[r11_88] = var_56;
    char var_56_1 = rdx_89;
    char var_55;
    char rax_180 = rax_179 + key[0xb3][0] + var_55;
    uint64_t r9_89 = rax_180;
    char r8_89 = (&var_108)[r9_89];
    (&var_108)[r9_89] = var_55;
    char var_55_1 = r8_89;
    char var_54;
    char rax_181 = rax_180 + key[0xb4][0] + var_54;
    uint64_t r11_89 = rax_181;
    char rdx_90 = (&var_108)[r11_89];
    (&var_108)[r11_89] = var_54;
    char var_54_1 = rdx_90;
    char var_53;
    char rax_182 = rax_181 + key[0xb5][0] + var_53;
    uint64_t r9_90 = rax_182;
    char r8_90 = (&var_108)[r9_90];
    (&var_108)[r9_90] = var_53;
    char var_53_1 = r8_90;
    char var_52;
    char rax_183 = rax_182 + key[0xb6][0] + var_52;
    uint64_t r11_90 = rax_183;
    char rdx_91 = (&var_108)[r11_90];
    (&var_108)[r11_90] = var_52;
    char var_52_1 = rdx_91;
    char var_51;
    char rax_184 = rax_183 + key[0xb7][0] + var_51;
    uint64_t r9_91 = rax_184;
    char r8_91 = (&var_108)[r9_91];
    (&var_108)[r9_91] = var_51;
    char var_51_1 = r8_91;
    char var_50;
    char rax_185 = rax_184 + key[0xb8][0] + var_50;
    uint64_t r11_91 = rax_185;
    char rdx_92 = (&var_108)[r11_91];
    (&var_108)[r11_91] = var_50;
    char var_50_1 = rdx_92;
    char var_4f;
    char rax_186 = rax_185 + key[0xb9][0] + var_4f;
    uint64_t r9_92 = rax_186;
    char r8_92 = (&var_108)[r9_92];
    (&var_108)[r9_92] = var_4f;
    char var_4f_1 = r8_92;
    char var_4e;
    char rax_187 = rax_186 + key[0xba][0] + var_4e;
    uint64_t r11_92 = rax_187;
    char rdx_93 = (&var_108)[r11_92];
    (&var_108)[r11_92] = var_4e;
    char var_4e_1 = rdx_93;
    char var_4d;
    char rax_188 = rax_187 + key[0xbb][0] + var_4d;
    uint64_t r9_93 = rax_188;
    char r8_93 = (&var_108)[r9_93];
    (&var_108)[r9_93] = var_4d;
    char var_4d_1 = r8_93;
    char var_4c;
    char rax_189 = rax_188 + key[0xbc][0] + var_4c;
    uint64_t r11_93 = rax_189;
    char rdx_94 = (&var_108)[r11_93];
    (&var_108)[r11_93] = var_4c;
    char var_4c_1 = rdx_94;
    char var_4b;
    char rax_190 = rax_189 + key[0xbd][0] + var_4b;
    uint64_t r9_94 = rax_190;
    char r8_94 = (&var_108)[r9_94];
    (&var_108)[r9_94] = var_4b;
    char var_4b_1 = r8_94;
    char var_4a;
    char rax_191 = rax_190 + key[0xbe][0] + var_4a;
    uint64_t r11_94 = rax_191;
    char rdx_95 = (&var_108)[r11_94];
    (&var_108)[r11_94] = var_4a;
    char var_4a_1 = rdx_95;
    char var_49;
    char rax_192 = rax_191 + key[0xbf][0] + var_49;
    uint64_t r9_95 = rax_192;
    char r8_95 = (&var_108)[r9_95];
    (&var_108)[r9_95] = var_49;
    char var_49_1 = r8_95;
    char var_48;
    char rax_193 = rax_192 + key[0xc0][0] + var_48;
    uint64_t r11_95 = rax_193;
    char rdx_96 = (&var_108)[r11_95];
    (&var_108)[r11_95] = var_48;
    char var_48_1 = rdx_96;
    char var_47;
    char rax_194 = rax_193 + key[0xc1][0] + var_47;
    uint64_t r9_96 = rax_194;
    char r8_96 = (&var_108)[r9_96];
    (&var_108)[r9_96] = var_47;
    char var_47_1 = r8_96;
    char var_46;
    char rax_195 = rax_194 + key[0xc2][0] + var_46;
    uint64_t r11_96 = rax_195;
    char rdx_97 = (&var_108)[r11_96];
    (&var_108)[r11_96] = var_46;
    char var_46_1 = rdx_97;
    char var_45;
    char rax_196 = rax_195 + key[0xc3][0] + var_45;
    uint64_t r9_97 = rax_196;
    char r8_97 = (&var_108)[r9_97];
    (&var_108)[r9_97] = var_45;
    char var_45_1 = r8_97;
    char var_44;
    char rax_197 = rax_196 + key[0xc4][0] + var_44;
    uint64_t r11_97 = rax_197;
    char rdx_98 = (&var_108)[r11_97];
    (&var_108)[r11_97] = var_44;
    char var_44_1 = rdx_98;
    char var_43;
    char rax_198 = rax_197 + key[0xc5][0] + var_43;
    uint64_t r9_98 = rax_198;
    char r8_98 = (&var_108)[r9_98];
    (&var_108)[r9_98] = var_43;
    char var_43_1 = r8_98;
    char var_42;
    char rax_199 = rax_198 + key[0xc6][0] + var_42;
    uint64_t r11_98 = rax_199;
    char rdx_99 = (&var_108)[r11_98];
    (&var_108)[r11_98] = var_42;
    char var_42_1 = rdx_99;
    char var_41;
    char rax_200 = rax_199 + key[0xc7][0] + var_41;
    uint64_t r9_99 = rax_200;
    char r8_99 = (&var_108)[r9_99];
    (&var_108)[r9_99] = var_41;
    char var_41_1 = r8_99;
    char var_40;
    char rax_201 = rax_200 + key[0xc8][0] + var_40;
    uint64_t r11_99 = rax_201;
    char rdx_100 = (&var_108)[r11_99];
    (&var_108)[r11_99] = var_40;
    char var_40_1 = rdx_100;
    char var_3f;
    char rax_202 = rax_201 + key[0xc9][0] + var_3f;
    uint64_t r9_100 = rax_202;
    char r8_100 = (&var_108)[r9_100];
    (&var_108)[r9_100] = var_3f;
    char var_3f_1 = r8_100;
    char var_3e;
    char rax_203 = rax_202 + key[0xca][0] + var_3e;
    uint64_t r11_100 = rax_203;
    char rdx_101 = (&var_108)[r11_100];
    (&var_108)[r11_100] = var_3e;
    char var_3e_1 = rdx_101;
    char var_3d;
    char rax_204 = rax_203 + key[0xcb][0] + var_3d;
    uint64_t r9_101 = rax_204;
    char r8_101 = (&var_108)[r9_101];
    (&var_108)[r9_101] = var_3d;
    char var_3d_1 = r8_101;
    char var_3c;
    char rax_205 = rax_204 + key[0xcc][0] + var_3c;
    uint64_t r11_101 = rax_205;
    char rdx_102 = (&var_108)[r11_101];
    (&var_108)[r11_101] = var_3c;
    char var_3c_1 = rdx_102;
    char var_3b;
    char rax_206 = rax_205 + key[0xcd][0] + var_3b;
    uint64_t r9_102 = rax_206;
    char r8_102 = (&var_108)[r9_102];
    (&var_108)[r9_102] = var_3b;
    char var_3b_1 = r8_102;
    char var_3a;
    char rax_207 = rax_206 + key[0xce][0] + var_3a;
    uint64_t r11_102 = rax_207;
    char rdx_103 = (&var_108)[r11_102];
    (&var_108)[r11_102] = var_3a;
    char var_3a_1 = rdx_103;
    char var_39;
    char rax_208 = rax_207 + key[0xcf][0] + var_39;
    uint64_t r9_103 = rax_208;
    char r8_103 = (&var_108)[r9_103];
    (&var_108)[r9_103] = var_39;
    char var_39_1 = r8_103;
    char var_38;
    char rax_209 = rax_208 + key[0xd0][0] + var_38;
    uint64_t r11_103 = rax_209;
    char rdx_104 = (&var_108)[r11_103];
    (&var_108)[r11_103] = var_38;
    char var_38_1 = rdx_104;
    char var_37;
    char rax_210 = rax_209 + key[0xd1][0] + var_37;
    uint64_t r9_104 = rax_210;
    char r8_104 = (&var_108)[r9_104];
    (&var_108)[r9_104] = var_37;
    char var_37_1 = r8_104;
    char var_36;
    char rax_211 = rax_210 + key[0xd2][0] + var_36;
    uint64_t r11_104 = rax_211;
    char rdx_105 = (&var_108)[r11_104];
    (&var_108)[r11_104] = var_36;
    char var_36_1 = rdx_105;
    char var_35;
    char rax_212 = rax_211 + key[0xd3][0] + var_35;
    uint64_t r9_105 = rax_212;
    char r8_105 = (&var_108)[r9_105];
    (&var_108)[r9_105] = var_35;
    char var_35_1 = r8_105;
    char var_34;
    char rax_213 = rax_212 + key[0xd4][0] + var_34;
    uint64_t r11_105 = rax_213;
    char rdx_106 = (&var_108)[r11_105];
    (&var_108)[r11_105] = var_34;
    char var_34_1 = rdx_106;
    char var_33;
    char rax_214 = rax_213 + key[0xd5][0] + var_33;
    uint64_t r9_106 = rax_214;
    char r8_106 = (&var_108)[r9_106];
    (&var_108)[r9_106] = var_33;
    char var_33_1 = r8_106;
    char var_32;
    char rax_215 = rax_214 + key[0xd6][0] + var_32;
    uint64_t r11_106 = rax_215;
    char rdx_107 = (&var_108)[r11_106];
    (&var_108)[r11_106] = var_32;
    char var_32_1 = rdx_107;
    char var_31;
    char rax_216 = rax_215 + key[0xd7][0] + var_31;
    uint64_t r9_107 = rax_216;
    char r8_107 = (&var_108)[r9_107];
    (&var_108)[r9_107] = var_31;
    char var_31_1 = r8_107;
    char var_30;
    char rax_217 = rax_216 + key[0xd8][0] + var_30;
    uint64_t r11_107 = rax_217;
    char rdx_108 = (&var_108)[r11_107];
    (&var_108)[r11_107] = var_30;
    char var_30_1 = rdx_108;
    char var_2f;
    char rax_218 = rax_217 + key[0xd9][0] + var_2f;
    uint64_t r9_108 = rax_218;
    char r8_108 = (&var_108)[r9_108];
    (&var_108)[r9_108] = var_2f;
    char var_2f_1 = r8_108;
    char var_2e;
    char rax_219 = rax_218 + key[0xda][0] + var_2e;
    uint64_t r11_108 = rax_219;
    char rdx_109 = (&var_108)[r11_108];
    (&var_108)[r11_108] = var_2e;
    char var_2e_1 = rdx_109;
    char var_2d;
    char rax_220 = rax_219 + key[0xdb][0] + var_2d;
    uint64_t r9_109 = rax_220;
    char r8_109 = (&var_108)[r9_109];
    (&var_108)[r9_109] = var_2d;
    char var_2d_1 = r8_109;
    char var_2c;
    char rax_221 = rax_220 + key[0xdc][0] + var_2c;
    uint64_t r11_109 = rax_221;
    char rdx_110 = (&var_108)[r11_109];
    (&var_108)[r11_109] = var_2c;
    char var_2c_1 = rdx_110;
    char var_2b;
    char rax_222 = rax_221 + key[0xdd][0] + var_2b;
    uint64_t r9_110 = rax_222;
    char r8_110 = (&var_108)[r9_110];
    (&var_108)[r9_110] = var_2b;
    char var_2b_1 = r8_110;
    char var_2a;
    char rax_223 = rax_222 + key[0xde][0] + var_2a;
    uint64_t r11_110 = rax_223;
    char rdx_111 = (&var_108)[r11_110];
    (&var_108)[r11_110] = var_2a;
    char var_2a_1 = rdx_111;
    char var_29;
    char rax_224 = rax_223 + key[0xdf][0] + var_29;
    uint64_t r9_111 = rax_224;
    char r8_111 = (&var_108)[r9_111];
    (&var_108)[r9_111] = var_29;
    char var_29_1 = r8_111;
    char var_28;
    char rax_225 = rax_224 + key[0xe0][0] + var_28;
    uint64_t r11_111 = rax_225;
    char rdx_112 = (&var_108)[r11_111];
    (&var_108)[r11_111] = var_28;
    char var_28_1 = rdx_112;
    char var_27;
    char rax_226 = rax_225 + key[0xe1][0] + var_27;
    uint64_t r9_112 = rax_226;
    char r8_112 = (&var_108)[r9_112];
    (&var_108)[r9_112] = var_27;
    char var_27_1 = r8_112;
    char var_26;
    char rax_227 = rax_226 + key[0xe2][0] + var_26;
    uint64_t r11_112 = rax_227;
    char rdx_113 = (&var_108)[r11_112];
    (&var_108)[r11_112] = var_26;
    char var_26_1 = rdx_113;
    char var_25;
    char rax_228 = rax_227 + key[0xe3][0] + var_25;
    uint64_t r9_113 = rax_228;
    char r8_113 = (&var_108)[r9_113];
    (&var_108)[r9_113] = var_25;
    char var_25_1 = r8_113;
    char var_24;
    char rax_229 = rax_228 + key[0xe4][0] + var_24;
    uint64_t r11_113 = rax_229;
    char rdx_114 = (&var_108)[r11_113];
    (&var_108)[r11_113] = var_24;
    char var_24_1 = rdx_114;
    char var_23;
    char rax_230 = rax_229 + key[0xe5][0] + var_23;
    uint64_t r9_114 = rax_230;
    char r8_114 = (&var_108)[r9_114];
    (&var_108)[r9_114] = var_23;
    char var_23_1 = r8_114;
    char var_22;
    char rax_231 = rax_230 + key[0xe6][0] + var_22;
    uint64_t r11_114 = rax_231;
    char rdx_115 = (&var_108)[r11_114];
    (&var_108)[r11_114] = var_22;
    char var_22_1 = rdx_115;
    char var_21;
    char rax_232 = rax_231 + key[0xe7][0] + var_21;
    uint64_t r9_115 = rax_232;
    char r8_115 = (&var_108)[r9_115];
    (&var_108)[r9_115] = var_21;
    char var_21_1 = r8_115;
    char var_20;
    char rax_233 = rax_232 + key[0xe8][0] + var_20;
    uint64_t r11_115 = rax_233;
    char rdx_116 = (&var_108)[r11_115];
    (&var_108)[r11_115] = var_20;
    char var_20_1 = rdx_116;
    char var_1f;
    char rax_234 = rax_233 + key[0xe9][0] + var_1f;
    uint64_t r9_116 = rax_234;
    char r8_116 = (&var_108)[r9_116];
    (&var_108)[r9_116] = var_1f;
    char var_1f_1 = r8_116;
    char var_1e;
    char rax_235 = rax_234 + key[0xea][0] + var_1e;
    uint64_t r11_116 = rax_235;
    char rdx_117 = (&var_108)[r11_116];
    (&var_108)[r11_116] = var_1e;
    char var_1e_1 = rdx_117;
    char var_1d;
    char rax_236 = rax_235 + key[0xeb][0] + var_1d;
    uint64_t r9_117 = rax_236;
    char r8_117 = (&var_108)[r9_117];
    (&var_108)[r9_117] = var_1d;
    char var_1d_1 = r8_117;
    char var_1c;
    char rax_237 = rax_236 + key[0xec][0] + var_1c;
    uint64_t r11_117 = rax_237;
    char rdx_118 = (&var_108)[r11_117];
    (&var_108)[r11_117] = var_1c;
    char var_1c_1 = rdx_118;
    char var_1b;
    char rax_238 = rax_237 + key[0xed][0] + var_1b;
    uint64_t r9_118 = rax_238;
    char r8_118 = (&var_108)[r9_118];
    (&var_108)[r9_118] = var_1b;
    char var_1b_1 = r8_118;
    char var_1a;
    char rax_239 = rax_238 + key[0xee][0] + var_1a;
    uint64_t r11_118 = rax_239;
    char rdx_119 = (&var_108)[r11_118];
    (&var_108)[r11_118] = var_1a;
    char var_1a_1 = rdx_119;
    char var_19;
    char rax_240 = rax_239 + key[0xef][0] + var_19;
    uint64_t r9_119 = rax_240;
    char r8_119 = (&var_108)[r9_119];
    (&var_108)[r9_119] = var_19;
    char var_19_1 = r8_119;
    char var_18;
    char rax_241 = rax_240 + key[0xf0][0] + var_18;
    uint64_t r11_119 = rax_241;
    char rdx_120 = (&var_108)[r11_119];
    (&var_108)[r11_119] = var_18;
    char var_18_1 = rdx_120;
    char var_17;
    char rax_242 = rax_241 + key[0xf1][0] + var_17;
    uint64_t r9_120 = rax_242;
    char r8_120 = (&var_108)[r9_120];
    (&var_108)[r9_120] = var_17;
    char var_17_1 = r8_120;
    char var_16;
    char rax_243 = rax_242 + key[0xf2][0] + var_16;
    uint64_t r11_120 = rax_243;
    char rdx_121 = (&var_108)[r11_120];
    (&var_108)[r11_120] = var_16;
    char var_16_1 = rdx_121;
    char var_15;
    char rax_244 = rax_243 + key[0xf3][0] + var_15;
    uint64_t r9_121 = rax_244;
    char r8_121 = (&var_108)[r9_121];
    (&var_108)[r9_121] = var_15;
    char var_15_1 = r8_121;
    char var_14;
    char rax_245 = rax_244 + key[0xf4][0] + var_14;
    uint64_t r11_121 = rax_245;
    char rdx_122 = (&var_108)[r11_121];
    (&var_108)[r11_121] = var_14;
    char var_14_1 = rdx_122;
    char var_13;
    char rax_246 = rax_245 + key[0xf5][0] + var_13;
    uint64_t r9_122 = rax_246;
    char r8_122 = (&var_108)[r9_122];
    (&var_108)[r9_122] = var_13;
    char var_13_1 = r8_122;
    char var_12;
    char rax_247 = rax_246 + key[0xf6][0] + var_12;
    uint64_t r11_122 = rax_247;
    char rdx_123 = (&var_108)[r11_122];
    (&var_108)[r11_122] = var_12;
    char var_12_1 = rdx_123;
    char var_11;
    char rax_248 = rax_247 + key[0xf7][0] + var_11;
    uint64_t r9_123 = rax_248;
    char r8_123 = (&var_108)[r9_123];
    (&var_108)[r9_123] = var_11;
    char var_11_1 = r8_123;
    char var_10;
    char rax_249 = rax_248 + key[0xf8][0] + var_10;
    uint64_t r11_123 = rax_249;
    char rdx_124 = (&var_108)[r11_123];
    (&var_108)[r11_123] = var_10;
    char var_10_1 = rdx_124;
    char var_f;
    char rax_250 = rax_249 + key[0xf9][0] + var_f;
    uint64_t r9_124 = rax_250;
    char r8_124 = (&var_108)[r9_124];
    (&var_108)[r9_124] = var_f;
    char var_f_1 = r8_124;
    char var_e;
    char rax_251 = rax_250 + key[0xfa][0] + var_e;
    uint64_t r11_124 = rax_251;
    char rdx_125 = (&var_108)[r11_124];
    (&var_108)[r11_124] = var_e;
    char var_e_1 = rdx_125;
    char var_d;
    char rax_252 = rax_251 + key[0xfb][0] + var_d;
    uint64_t r9_125 = rax_252;
    char r8_125 = (&var_108)[r9_125];
    (&var_108)[r9_125] = var_d;
    char var_d_1 = r8_125;
    char var_c;
    char rax_253 = rax_252 + key[0xfc][0] + var_c;
    uint64_t r11_125 = rax_253;
    char rdx_126 = (&var_108)[r11_125];
    (&var_108)[r11_125] = var_c;
    char var_c_1 = rdx_126;
    char var_b;
    char rax_254 = rax_253 + key[0xfd][0] + var_b;
    uint64_t r9_126 = rax_254;
    char r8_126 = (&var_108)[r9_126];
    (&var_108)[r9_126] = var_b;
    char var_b_1 = r8_126;
    char var_a;
    char rax_255 = rax_254 + key[0xfe][0] + var_a;
    uint64_t r11_126 = rax_255;
    char rdx_127 = (&var_108)[r11_126];
    (&var_108)[r11_126] = var_a;
    char var_a_1 = rdx_127;
    uint64_t rax_257 = rax_255 + key[0xff][0] + var_9;
    char rcx_128 = (&var_108)[rax_257];
    (&var_108)[rax_257] = var_9;
    char var_9_1 = rcx_128;
    uint64_t r8_127 = r8;
    char r11_127 = (&var_108)[r8_127];
    (&var_108)[r8_127] = r8;
    char var_107_2 = r11_127;
    char var_147 = (&var_108)[r11_127 + (&var_108)[r8_127]] ^ data_14000c001;
    char r10_128 = r8 + rdx_1;
    uint64_t rcx_129 = r10_128;
    char r8_128 = (&var_108)[rcx_129];
    (&var_108)[rcx_129] = rdx_1;
    char var_106_2 = r8_128;
    char var_146 = (&var_108)[r8_128 + (&var_108)[rcx_129]] ^ data_14000c002;
    char r10_129 = r10_128 + r8_1;
    uint64_t rax_259 = r10_129;
    char rcx_130 = (&var_108)[rax_259];
    (&var_108)[rax_259] = r8_1;
    char var_105_2 = rcx_130;
    char var_145 = (&var_108)[rcx_130 + (&var_108)[rax_259]] ^ data_14000c003;
    char r10_130 = r10_129 + rdx_2;
    uint64_t rax_260 = r10_130;
    char rdx_130 = (&var_108)[rax_260];
    (&var_108)[rax_260] = rdx_2;
    char var_104_2 = rdx_130;
    char var_144 = (&var_108)[rdx_130 + (&var_108)[rax_260]] ^ data_14000c004;
    char r10_131 = r10_130 + r8_2;
    uint64_t r9_131 = r10_131;
    char rax_261 = (&var_108)[r9_131];
    (&var_108)[r9_131] = r8_2;
    char var_103_2 = rax_261;
    char var_143 = (&var_108)[rax_261 + (&var_108)[r9_131]] ^ data_14000c005;
    char r10_132 = r10_131 + rdx_3;
    uint64_t r11_131 = r10_132;
    char r9_132 = (&var_108)[r11_131];
    (&var_108)[r11_131] = rdx_3;
    char var_102_2 = r9_132;
    char var_142 = (&var_108)[r9_132 + (&var_108)[r11_131]] ^ data_14000c006;
    char r10_133 = r10_132 + r8_3;
    uint64_t rcx_133 = r10_133;
    char r11_132 = (&var_108)[rcx_133];
    (&var_108)[rcx_133] = r8_3;
    char var_101_2 = r11_132;
    char var_141 = (&var_108)[r11_132 + (&var_108)[rcx_133]] ^ data_14000c007;
    char r10_134 = r10_133 + rdx_4;
    uint64_t rcx_134 = r10_134;
    char rdx_133 = (&var_108)[rcx_134];
    (&var_108)[rcx_134] = rdx_4;
    char var_100_2 = rdx_133;
    char var_140 = (&var_108)[rdx_133 + (&var_108)[rcx_134]] ^ data_14000c008;
    char r10_135 = r10_134 + r8_4;
    uint64_t r8_134 = r10_135;
    char rcx_135 = (&var_108)[r8_134];
    (&var_108)[r8_134] = r8_4;
    char var_ff_2 = rcx_135;
    char var_13f = (&var_108)[rcx_135 + (&var_108)[r8_134]] ^ data_14000c009;
    char r10_136 = r10_135 + rdx_5;
    uint64_t rax_265 = r10_136;
    char r8_135 = (&var_108)[rax_265];
    (&var_108)[rax_265] = rdx_5;
    char var_fe_2 = r8_135;
    char var_13e = (&var_108)[r8_135 + (&var_108)[rax_265]] ^ data_14000c00a;
    char r10_137 = r10_136 + r8_5;
    uint64_t r9_136 = r10_137;
    char rax_266 = (&var_108)[r9_136];
    (&var_108)[r9_136] = r8_5;
    char var_fd_2 = rax_266;
    char var_13d = (&var_108)[rax_266 + (&var_108)[r9_136]] ^ data_14000c00b;
    char r10_138 = r10_137 + rdx_6;
    uint64_t r9_137 = r10_138;
    char rdx_136 = (&var_108)[r9_137];
    (&var_108)[r9_137] = rdx_6;
    char var_fc_2 = rdx_136;
    char var_13c = (&var_108)[rdx_136 + (&var_108)[r9_137]] ^ data_14000c00c;
    char r10_139 = r10_138 + r8_6;
    uint64_t rcx_138 = r10_139;
    char r9_138 = (&var_108)[rcx_138];
    (&var_108)[rcx_138] = r8_6;
    char var_fb_2 = r9_138;
    char var_13b = (&var_108)[r9_138 + (&var_108)[rcx_138]] ^ data_14000c00d;
    char r10_140 = r10_139 + rdx_7;
    uint64_t r11_138 = r10_140;
    char rcx_139 = (&var_108)[r11_138];
    (&var_108)[r11_138] = rdx_7;
    char var_fa_2 = rcx_139;
    char var_13a = (&var_108)[rcx_139 + (&var_108)[r11_138]] ^ data_14000c00e;
    char r10_141 = r10_140 + r8_7;
    uint64_t r8_139 = r10_141;
    char r11_139 = (&var_108)[r8_139];
    (&var_108)[r8_139] = r8_7;
    char var_f9_2 = r11_139;
    char var_139 = (&var_108)[r11_139 + (&var_108)[r8_139]] ^ data_14000c00f;
    char r10_142 = r10_141 + rdx_8;
    uint64_t r8_140 = r10_142;
    char rdx_139 = (&var_108)[r8_140];
    (&var_108)[r8_140] = rdx_8;
    char var_f8_2 = rdx_139;
    char var_138 = (&var_108)[rdx_139 + (&var_108)[r8_140]] ^ data_14000c010;
    char r10_143 = r10_142 + r8_8;
    uint64_t rax_271 = r10_143;
    char r8_141 = (&var_108)[rax_271];
    (&var_108)[rax_271] = r8_8;
    char var_f7_2 = r8_141;
    char var_137 = (&var_108)[r8_141 + (&var_108)[rax_271]] ^ data_14000c011;
    char r10_144 = r10_143 + rdx_9;
    uint64_t rcx_142 = r10_144;
    char rax_272 = (&var_108)[rcx_142];
    (&var_108)[rcx_142] = rdx_9;
    char var_f6_2 = rax_272;
    char var_136 = (&var_108)[rax_272 + (&var_108)[rcx_142]] ^ data_14000c012;
    char r10_145 = r10_144 + r8_9;
    uint64_t r9_143 = r10_145;
    char rcx_143 = (&var_108)[r9_143];
    (&var_108)[r9_143] = r8_9;
    char var_f5_2 = rcx_143;
    char var_135 = (&var_108)[rcx_143 + (&var_108)[r9_143]] ^ data_14000c013;
    char r10_146 = r10_145 + rdx_10;
    uint64_t r9_144 = r10_146;
    char rdx_142 = (&var_108)[r9_144];
    (&var_108)[r9_144] = rdx_10;
    char var_f4_2 = rdx_142;
    char var_134 = (&var_108)[rdx_142 + (&var_108)[r9_144]] ^ data_14000c014;
    char r10_147 = r10_146 + r8_10;
    uint64_t r11_144 = r10_147;
    char r9_145 = (&var_108)[r11_144];
    (&var_108)[r11_144] = r8_10;
    char var_f3_2 = r9_145;
    char var_133 = (&var_108)[r9_145 + (&var_108)[r11_144]] ^ data_14000c015;
    char r10_148 = r10_147 + rdx_11;
    uint64_t r8_145 = r10_148;
    char r11_145 = (&var_108)[r8_145];
    (&var_108)[r8_145] = rdx_11;
    char var_f2_2 = r11_145;
    char var_132 = (&var_108)[r11_145 + (&var_108)[r8_145]] ^ data_14000c016;
    char r10_149 = r10_148 + r8_11;
    uint64_t rcx_146 = r10_149;
    char r8_146 = (&var_108)[rcx_146];
    (&var_108)[rcx_146] = r8_11;
    char var_f1_2 = r8_146;
    char var_131 = (&var_108)[r8_146 + (&var_108)[rcx_146]] ^ data_14000c017;
    char r10_150 = r10_149 + rdx_12;
    uint64_t rcx_147 = r10_150;
    char rdx_145 = (&var_108)[rcx_147];
    (&var_108)[rcx_147] = rdx_12;
    char var_f0_2 = rdx_145;
    char var_130 = (&var_108)[rdx_145 + (&var_108)[rcx_147]] ^ data_14000c018;
    char r10_151 = r10_150 + r8_12;
    uint64_t rax_278 = r10_151;
    char rcx_148 = (&var_108)[rax_278];
    (&var_108)[rax_278] = r8_12;
    char var_ef_2 = rcx_148;
    char var_12f = (&var_108)[rcx_148 + (&var_108)[rax_278]] ^ data_14000c019;
    char r10_152 = r10_151 + rdx_13;
    uint64_t r9_149 = r10_152;
    char rax_279 = (&var_108)[r9_149];
    (&var_108)[r9_149] = rdx_13;
    char var_ee_2 = rax_279;
    char var_12e = (&var_108)[rax_279 + (&var_108)[r9_149]] ^ data_14000c01a;
    char r10_153 = r10_152 + r8_13;
    uint64_t r11_149 = r10_153;
    char r9_150 = (&var_108)[r11_149];
    (&var_108)[r11_149] = r8_13;
    char var_ed_2 = r9_150;
    char var_12d = (&var_108)[r9_150 + (&var_108)[r11_149]] ^ data_14000c01b;
    char r10_154 = r10_153 + rdx_14;
    uint64_t r11_150 = r10_154;
    char rdx_148 = (&var_108)[r11_150];
    (&var_108)[r11_150] = rdx_14;
    char var_ec_2 = rdx_148;
    char var_12c = (&var_108)[rdx_148 + (&var_108)[r11_150]] ^ data_14000c01c;
    char r10_155 = r10_154 + r8_14;
    uint64_t rcx_151 = r10_155;
    char r11_151 = (&var_108)[rcx_151];
    (&var_108)[rcx_151] = r8_14;
    char var_eb_2 = r11_151;
    char var_12b = (&var_108)[r11_151 + (&var_108)[rcx_151]] ^ data_14000c01d;
    char r10_156 = r10_155 + rdx_15;
    uint64_t r8_152 = r10_156;
    char rcx_152 = (&var_108)[r8_152];
    (&var_108)[r8_152] = rdx_15;
    char var_ea_2 = rcx_152;
    char var_12a = (&var_108)[rcx_152 + (&var_108)[r8_152]] ^ data_14000c01e;
    char r10_157 = r10_156 + r8_15;
    uint64_t rax_283 = r10_157;
    char r8_153 = (&var_108)[rax_283];
    (&var_108)[rax_283] = r8_15;
    char var_e9_2 = r8_153;
    char var_129 = (&var_108)[r8_153 + (&var_108)[rax_283]] ^ data_14000c01f;
    char r10_158 = r10_157 + rdx_16;
    uint64_t rax_284 = r10_158;
    char rdx_151 = (&var_108)[rax_284];
    (&var_108)[rax_284] = rdx_16;
    char var_e8_2 = rdx_151;
    char var_128 = (&var_108)[rdx_151 + (&var_108)[rax_284]] ^ data_14000c020;
    char r10_159 = r10_158 + r8_16;
    uint64_t r9_155 = r10_159;
    char rax_285 = (&var_108)[r9_155];
    (&var_108)[r9_155] = r8_16;
    char var_e7_2 = rax_285;
    char var_127 = (&var_108)[rax_285 + (&var_108)[r9_155]] ^ data_14000c021;
    char r10_160 = r10_159 + rdx_17;
    uint64_t rcx_155 = r10_160;
    char r9_156 = (&var_108)[rcx_155];
    (&var_108)[rcx_155] = rdx_17;
    char var_e6_2 = r9_156;
    char var_126 = (&var_108)[r9_156 + (&var_108)[rcx_155]] ^ data_14000c022;
    char r10_161 = r10_160 + r8_17;
    uint64_t r11_156 = r10_161;
    char rcx_156 = (&var_108)[r11_156];
    (&var_108)[r11_156] = r8_17;
    char var_e5_2 = rcx_156;
    char var_125 = (&var_108)[rcx_156 + (&var_108)[r11_156]] ^ data_14000c023;
    char r10_162 = r10_161 + rdx_18;
    uint64_t r11_157 = r10_162;
    char rdx_154 = (&var_108)[r11_157];
    (&var_108)[r11_157] = rdx_18;
    char var_e4_2 = rdx_154;
    char var_124 = (&var_108)[rdx_154 + (&var_108)[r11_157]] ^ data_14000c024;
    char r10_163 = r10_162 + r8_18;
    uint64_t r8_158 = r10_163;
    char r11_158 = (&var_108)[r8_158];
    (&var_108)[r8_158] = r8_18;
    char var_e3_2 = r11_158;
    char var_123 = (&var_108)[r11_158 + (&var_108)[r8_158]] ^ data_14000c025;
    char r10_164 = r10_163 + rdx_19;
    uint64_t rax_289 = r10_164;
    char r8_159 = (&var_108)[rax_289];
    (&var_108)[rax_289] = rdx_19;
    char var_e2_2 = r8_159;
    char var_122 = (&var_108)[r8_159 + (&var_108)[rax_289]] ^ data_14000c026;
    char r10_165 = r10_164 + r8_19;
    uint64_t rcx_159 = r10_165;
    char rax_290 = (&var_108)[rcx_159];
    (&var_108)[rcx_159] = r8_19;
    char var_e1_2 = rax_290;
    char var_121 = (&var_108)[rax_290 + (&var_108)[rcx_159]] ^ data_14000c027;
    char r10_166 = r10_165 + rdx_20;
    uint64_t rcx_160 = r10_166;
    char rdx_157 = (&var_108)[rcx_160];
    (&var_108)[rcx_160] = rdx_20;
    char var_e0_2 = rdx_157;
    char var_120 = (&var_108)[rdx_157 + (&var_108)[rcx_160]] ^ data_14000c028;
    char r10_167 = r10_166 + r8_20;
    uint64_t r9_162 = r10_167;
    char rcx_161 = (&var_108)[r9_162];
    (&var_108)[r9_162] = r8_20;
    char var_df_2 = rcx_161;
    char var_11f = (&var_108)[rcx_161 + (&var_108)[r9_162]] ^ data_14000c029;
    char r10_168 = r10_167 + rdx_21;
    uint64_t r11_162 = r10_168;
    char r9_163 = (&var_108)[r11_162];
    (&var_108)[r11_162] = rdx_21;
    char var_de_2 = r9_163;
    char var_11e = (&var_108)[r9_163 + (&var_108)[r11_162]] ^ data_14000c02a;
    char r10_169 = r10_168 + r8_21;
    uint64_t r8_163 = r10_169;
    char r11_163 = (&var_108)[r8_163];
    (&var_108)[r8_163] = r8_21;
    char var_dd_2 = r11_163;
    char var_11d = (&var_108)[r11_163 + (&var_108)[r8_163]] ^ data_14000c02b;
    char r10_170 = r10_169 + rdx_22;
    uint64_t r8_164 = r10_170;
    char rdx_160 = (&var_108)[r8_164];
    (&var_108)[r8_164] = rdx_22;
    char var_dc_2 = rdx_160;
    char var_11c = (&var_108)[rdx_160 + (&var_108)[r8_164]] ^ data_14000c02c;
    char r10_171 = r10_170 + r8_22;
    uint64_t rcx_164 = r10_171;
    char r8_165 = (&var_108)[rcx_164];
    (&var_108)[rcx_164] = r8_22;
    char var_db_2 = r8_165;
    char var_11b = (&var_108)[r8_165 + (&var_108)[rcx_164]] ^ data_14000c02d;
    char r10_172 = r10_171 + rdx_23;
    uint64_t rax_296 = r10_172;
    char rcx_165 = (&var_108)[rax_296];
    (&var_108)[rax_296] = rdx_23;
    char var_da_2 = rcx_165;
    char var_11a = (&var_108)[rcx_165 + (&var_108)[rax_296]] ^ data_14000c02e;
    char r10_173 = r10_172 + r8_23;
    uint64_t r9_167 = r10_173;
    char rax_297 = (&var_108)[r9_167];
    (&var_108)[r9_167] = r8_23;
    char var_d9_2 = rax_297;
    char var_119 = (&var_108)[rax_297 + (&var_108)[r9_167]] ^ data_14000c02f;
    char r10_174 = r10_173 + rdx_24;
    uint64_t r9_168 = r10_174;
    char rdx_163 = (&var_108)[r9_168];
    (&var_108)[r9_168] = rdx_24;
    char var_d8_2 = rdx_163;
    char var_118 = (&var_108)[rdx_163 + (&var_108)[r9_168]] ^ data_14000c030;
    char r10_175 = r10_174 + r8_24;
    uint64_t r11_168 = r10_175;
    char r9_169 = (&var_108)[r11_168];
    (&var_108)[r11_168] = r8_24;
    char var_d7_2 = r9_169;
    char var_117 = (&var_108)[r9_169 + (&var_108)[r11_168]] ^ data_14000c031;
    char r10_176 = r10_175 + rdx_25;
    uint64_t rcx_168 = r10_176;
    char r11_169 = (&var_108)[rcx_168];
    (&var_108)[rcx_168] = rdx_25;
    char var_d6_2 = r11_169;
    char var_116 = (&var_108)[r11_169 + (&var_108)[rcx_168]] ^ data_14000c032;
    char r10_177 = r10_176 + r8_25;
    uint64_t r8_170 = r10_177;
    char rcx_169 = (&var_108)[r8_170];
    (&var_108)[r8_170] = r8_25;
    char var_d5_2 = rcx_169;
    char var_115 = (&var_108)[rcx_169 + (&var_108)[r8_170]] ^ data_14000c033;
    char r10_178 = r10_177 + rdx_26;
    uint64_t r8_171 = r10_178;
    char rdx_166 = (&var_108)[r8_171];
    (&var_108)[r8_171] = rdx_26;
    char var_d4_2 = rdx_166;
    char var_114 = (&var_108)[rdx_166 + (&var_108)[r8_171]] ^ data_14000c034;
    char r10_179 = r10_178 + r8_26;
    uint64_t rax_302 = r10_179;
    char r8_172 = (&var_108)[rax_302];
    (&var_108)[rax_302] = r8_26;
    char var_d3_2 = r8_172;
    char var_113 = (&var_108)[r8_172 + (&var_108)[rax_302]] ^ data_14000c035;
    char r10_180 = r10_179 + rdx_27;
    uint64_t r9_173 = r10_180;
    char rax_303 = (&var_108)[r9_173];
    (&var_108)[r9_173] = rdx_27;
    char var_d2_2 = rax_303;
    char var_112 = (&var_108)[rax_303 + (&var_108)[r9_173]] ^ data_14000c036;
    char r10_181 = r10_180 + r8_27;
    uint64_t rcx_172 = r10_181;
    char r9_174 = (&var_108)[rcx_172];
    (&var_108)[rcx_172] = r8_27;
    char var_d1_2 = r9_174;
    char var_111 = (&var_108)[r9_174 + (&var_108)[rcx_172]] ^ data_14000c037;
    char r10_182 = r10_181 + rdx_28;
    uint64_t rcx_173 = r10_182;
    char rdx_169 = (&var_108)[rcx_173];
    (&var_108)[rcx_173] = rdx_28;
    char var_d0_2 = rdx_169;
    char var_110 = (&var_108)[rdx_169 + (&var_108)[rcx_173]] ^ data_14000c038;
    char r10_183 = r10_182 + r8_28;
    uint64_t r11_175 = r10_183;
    char rcx_174 = (&var_108)[r11_175];
    (&var_108)[r11_175] = r8_28;
    char var_cf_2 = rcx_174;
    char var_10f = (&var_108)[rcx_174 + (&var_108)[r11_175]] ^ data_14000c039;
    char r10_184 = r10_183 + rdx_29;
    uint64_t r8_176 = r10_184;
    char r11_176 = (&var_108)[r8_176];
    (&var_108)[r8_176] = rdx_29;
    char var_ce_2 = r11_176;
    char var_10e = (&var_108)[r11_176 + (&var_108)[r8_176]] ^ data_14000c03a;
    char r10_185 = r10_184 + r8_29;
    uint64_t rax_307 = r10_185;
    char r8_177 = (&var_108)[rax_307];
    (&var_108)[rax_307] = r8_29;
    char var_cd_2 = r8_177;
    char var_10d = (&var_108)[r8_177 + (&var_108)[rax_307]] ^ data_14000c03b;
    char r10_186 = r10_185 + rdx_30;
    uint64_t rax_308 = r10_186;
    char rdx_172 = (&var_108)[rax_308];
    (&var_108)[rax_308] = rdx_30;
    char var_cc_2 = rdx_172;
    char var_10c = (&var_108)[rdx_172 + (&var_108)[rax_308]] ^ data_14000c03c;
    char r10_187 = r10_186 + r8_30;
    uint64_t rcx_177 = r10_187;
    char rax_309 = (&var_108)[rcx_177];
    (&var_108)[rcx_177] = r8_30;
    char var_cb_2 = rax_309;
    char var_10b = (&var_108)[rax_309 + (&var_108)[rcx_177]] ^ data_14000c03d;
    uint64_t r10_189 = r10_187 + rdx_31;
    char r9_180 = (&var_108)[r10_189];
    (&var_108)[r10_189] = rdx_31;
    char var_ca_2 = r9_180;
    char var_10a = (&var_108)[r9_180 + (&var_108)[r10_189]] ^ data_14000c03e;
    char var_148 = 0x20;
    char var_109 = 0;
    return printf("Decrypted message: %s\n", &var_148);
}

int64_t main()
{
    __main();
    multiplication_table(0x11);
    decrypt_message();
    return 0;
}

void __do_global_dtors()
{
    void (* i)() = **&p;
    
    while (i)
    {
        i();
        void (** p_1)() = p;
        i = p_1[1];
        p = &p_1[1];
    }
}

int64_t __do_global_ctors()
{
    int32_t rax_4 = 0;
    int32_t rcx;
    uint64_t r8_2;
    
    do
    {
        r8_2 = rax_4 + 1;
        rcx = rax_4;
        rax_4 = r8_2;
    } while (*(&__CTOR_LIST__ + (r8_2 << 3)));
    
    if (rcx)
    {
        uint64_t rax_1 = rcx;
        void* i = &__CTOR_LIST__ + (rax_1 << 3);
        
        do
        {
            (*i)();
            i -= 8;
        } while (i != ((rax_1 - (rcx - 1)) << 3) + 0x14000b9b8);
    }
    
    /* tailcall */
    return atexit(__do_global_dtors);
}

int __main()
{
    int initialized_1 = initialized;
    
    if (initialized_1)
        return initialized_1;
    
    initialized = 1;
    /* tailcall */
    return __do_global_ctors();
}

int _setargv() __pure
{
    return 0;
}

int __dyn_tls_dtor(void* hDllHandle, long unsigned int dwReason, void* lpreserved)
{
    if (dwReason != 3 && dwReason)
        return 1;
    
    __mingw_TLScallback(hDllHandle, dwReason, lpreserved);
    return 1;
}

int __dyn_tls_init(void* hDllHandle, long unsigned int dwReason, void* lpreserved)
{
    if (_CRT_MT != 2)
        _CRT_MT = 2;
    
    if (dwReason != 2 && dwReason == 1)
        __mingw_TLScallback(hDllHandle, dwReason, lpreserved);
    
    return 1;
}

int __tlregdtor(void (* func)()) __pure
{
    return 0;
}

int _matherr(struct _exception* pexcept)
{
    void* const rbx;
    
    if (pexcept->type > 6)
        rbx = "Unknown error";
    else
        switch (pexcept->type)
        {
            case 0:
            {
                rbx = "Unknown error";
                break;
            }
            case 1:
            {
                rbx = "Argument domain error (DOMAIN)";
                break;
            }
            case 2:
            {
                rbx = "Argument singularity (SIGN)";
                break;
            }
            case 3:
            {
                rbx = "Overflow range error (OVERFLOW)";
                break;
            }
            case 4:
            {
                rbx = "The result is too small to be re…";
                break;
            }
            case 5:
            {
                rbx = "Total loss of significance (TLOS…";
                break;
            }
            case 6:
            {
                rbx = "Partial loss of significance (PL…";
                break;
            }
        }
    
    fprintf(__acrt_iob_func(2), "_matherr(): %s in %s(%g, %g)  (r…", rbx, pexcept->name, pexcept->arg1, pexcept->arg2, pexcept->retval);
    return 0;
}

void _fpreset() __pure
{
    return;
}

void __report_error(char const* msg, ...) __noreturn
{
    int64_t _ArgList_1;
    _ArgList = _ArgList_1;
    int64_t r8;
    arg_18 = r8;
    int64_t r9;
    arg_20 = r9;
    fwrite("Mingw-w64 runtime failure:\n", 1, 0x1b, __acrt_iob_func(2));
    vfprintf(__acrt_iob_func(2), msg, &_ArgList);
    abort();
    /* no return */
}

unsigned char** mark_section_writable(void* addr)
{
    struct _MEMORY_BASIC_INFORMATION b;
    int64_t r12;
    b.Type = r12;
    int64_t rsi;
    b.State = rsi;
    b.Protect = *rsi[4];
    int64_t rbx;
    b.RegionSize = rbx;
    int64_t maxSections_1 = maxSections;
    unsigned char** result;
    
    if (maxSections_1 <= 0)
        maxSections_1 = 0;
    else
    {
        int32_t i = 0;
        result = &the_secs->sec_start;
        
        do
        {
            unsigned char* sec_start = ADJ(result)->sec_start;
            
            if (sec_start <= addr && addr < &sec_start[ADJ(result)->hash->Misc])
                goto label_1400056ca;
            
            i += 1;
            result = &result[5];
        } while (i != maxSections_1);
    }
    
    struct Section_Header* rax_2 = __mingw_GetSectionForAddress(addr);
    
    if (!rax_2)
    {
        __report_error("Address %p has no image-section", addr);
        /* no return */
    }
    
    int64_t rbx_2 = maxSections_1 * 0x28;
    void* rax_4 = the_secs + rbx_2;
    *(rax_4 + 0x20) = rax_2;
    *rax_4 = 0;
    void* lpAddress = &_GetPEImageBase()->e_magic[rax_2->virtualAddress];
    *(&the_secs->sec_start + rbx_2) = lpAddress;
    int64_t lpBuffer;
    
    if (!VirtualQuery(lpAddress, &lpBuffer, 0x30))
    {
        __report_error("  VirtualQuery failed for %d byt…", rax_2->virtualSize, *(&the_secs->sec_start + rbx_2));
        /* no return */
    }
    
    result = *b.AllocationBase[4];
    
    if (&result[-8] & 0xffffffbf && (result - 4) & 0xfffffffb)
    {
        int64_t lpAddress_1 = lpBuffer;
        uint64_t BaseAddress = b.BaseAddress;
        enum PAGE_PROTECTION_FLAGS flNewProtect = PAGE_READWRITE;
        
        if (result != 2)
            flNewProtect = PAGE_EXECUTE_READWRITE;
        
        void* lpflOldProtect = rbx_2 + the_secs;
        *(lpflOldProtect + 8) = lpAddress_1;
        *(lpflOldProtect + 0x10) = BaseAddress;
        result = VirtualProtect(lpAddress_1, BaseAddress, flNewProtect, lpflOldProtect);
        
        if (!result)
        {
            __report_error("  VirtualProtect failed with cod…", GetLastError());
            /* no return */
        }
    }
    
    maxSections += 1;
    label_1400056ca:
    int64_t rsi_2;
    rsi_2 = b.State;
    *rsi_2[4] = b.Protect;
    return result;
}

void _pei386_runtime_relocator()
{
    if (!was_init)
    {
        was_init = 1;
        void* rax_5 = (__mingw_GetSectionCount() * 0x28 + 0xf) & 0xfffffffffffffff0;
        _.text(rax_5);
        maxSections = 0;
        void var_88;
        the_secs = &var_88 - rax_5 + 0x30;
    }
}

int (*)() __mingw_raise_matherr(int typ, char const* name, double a1, double a2, double rslt)
{
    int (* stUserMathErr_1)() = stUserMathErr;
    
    if (!stUserMathErr_1)
        return stUserMathErr_1;
    
    int typ_1 = typ;
    char const* name_1 = name;
    double a1_1 = a1;
    double a2_1 = a2;
    double rslt_1 = rslt;
    return stUserMathErr_1(&typ_1);
}

int64_t __mingw_setusermatherr(int (* f)())
{
    stUserMathErr = f;
    /* tailcall */
    return __setusermatherr(f);
}

long int _gnu_exception_handler(struct _EXCEPTION_POINTERS* exception_data)
{
    EXCEPTION_RECORD* ExceptionRecord = exception_data->ExceptionRecord;
    uint32_t ExceptionCode = ExceptionRecord->ExceptionCode;
    
    if ((ExceptionCode & 0x20ffffff) == 0x20474343 && !(ExceptionRecord->ExceptionFlags & 1))
        return 0xffffffff;
    
    if (ExceptionCode <= 0xc0000096)
    {
        if (ExceptionCode > 0xc000008b)
        {
            uint64_t rax = ExceptionCode + 0x3fffff73;
            
            if (rax > 9)
                return 0xffffffff;
            
            _crt_signal_t rax_8;
            
            switch (rax)
            {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                {
                    rax_8 = signal(8, nullptr);
                    
                    if (rax_8 == 1)
                    {
                        signal(8, 1);
                        return 0xffffffff;
                    }
                    
                    label_140005c16:
                    
                    if (rax_8)
                    {
                        rax_8(8);
                        return 0xffffffff;
                    }
                    break;
                }
                case 5:
                case 8:
                {
                    return 0xffffffff;
                    break;
                }
                case 7:
                {
                    rax_8 = signal(8, nullptr);
                    
                    if (rax_8 != 1)
                        goto label_140005c16;
                    
                    signal(8, 1);
                    return 0xffffffff;
                    break;
                }
                case 9:
                {
                    label_140005b9a:
                    _crt_signal_t rax_4 = signal(4, nullptr);
                    
                    if (rax_4 == 1)
                    {
                        signal(4, 1);
                        return 0xffffffff;
                    }
                    
                    if (rax_4)
                    {
                        rax_4(4);
                        return 0xffffffff;
                    }
                    break;
                }
            }
        }
        else if (ExceptionCode == 0xc0000005)
        {
            _crt_signal_t rax_11 = signal(0xb, nullptr);
            
            if (rax_11 == 1)
            {
                signal(0xb, 1);
                return 0xffffffff;
            }
            
            if (rax_11)
            {
                rax_11(0xb);
                return 0xffffffff;
            }
        }
        else
        {
            if (ExceptionCode == 0xc0000008)
                return 0xffffffff;
            
            if (ExceptionCode == 0xc000001d)
                goto label_140005b9a;
            
            if (ExceptionCode == 0x80000002)
                return 0xffffffff;
        }
    }
    
    long int (* __mingw_oldexcpt_handler_1)() = __mingw_oldexcpt_handler;
    
    if (!__mingw_oldexcpt_handler_1)
        return 0;
    
    /* tailcall */
    return __mingw_oldexcpt_handler_1();
}

int64_t __mingwthr_run_key_dtors()
{
    EnterCriticalSection(&__mingwthr_cs);
    
    for (struct __mingwthr_key* i = key_dtor_list; i; i = i->next)
    {
        int64_t rax_1 = TlsGetValue(i->key);
        
        if (!GetLastError() && rax_1)
            i->dtor(rax_1);
    }
    
    /* tailcall */
    return LeaveCriticalSection(&__mingwthr_cs);
}

int volatile ___w64_mingwthr_add_key_dtor(long unsigned int key, void (* dtor)())
{
    int volatile __mingwthr_cs_init_1 = __mingwthr_cs_init;
    
    if (!__mingwthr_cs_init_1)
        return __mingwthr_cs_init_1;
    
    long unsigned int* rax = calloc(1, 0x18);
    
    if (!rax)
        return -1;
    
    *rax = key;
    *(rax + 8) = dtor;
    EnterCriticalSection(&__mingwthr_cs);
    struct __mingwthr_key* key_dtor_list_1 = key_dtor_list;
    key_dtor_list = rax;
    *(rax + 0x10) = key_dtor_list_1;
    LeaveCriticalSection(&__mingwthr_cs);
    return 0;
}

int ___w64_mingwthr_remove_key_dtor(long unsigned int key)
{
    if (!__mingwthr_cs_init)
        return 0;
    
    EnterCriticalSection(&__mingwthr_cs);
    struct __mingwthr_key* key_dtor_list_1 = key_dtor_list;
    
    if (key_dtor_list_1)
    {
        struct __mingwthr_key* key_dtor_list_2 = nullptr;
        
        while (true)
        {
            struct __mingwthr_key* next = key_dtor_list_1->next;
            
            if (key_dtor_list_1->key == key)
            {
                if (!key_dtor_list_2)
                    key_dtor_list = next;
                else
                    key_dtor_list_2->next = next;
                
                free(key_dtor_list_1);
                break;
            }
            
            key_dtor_list_2 = key_dtor_list_1;
            
            if (!next)
                break;
            
            key_dtor_list_1 = next;
        }
    }
    
    LeaveCriticalSection(&__mingwthr_cs);
    return 0;
}

int __mingw_TLScallback(void* hDllHandle, long unsigned int reason, void* reserved)
{
    if (reason == 2)
        return 1;
    
    if (reason > 2)
    {
        if (reason == 3 && __mingwthr_cs_init)
            __mingwthr_run_key_dtors();
    }
    else if (!reason)
    {
        if (__mingwthr_cs_init)
            __mingwthr_run_key_dtors();
        
        if (__mingwthr_cs_init == 1)
        {
            struct __mingwthr_key* i = key_dtor_list;
            
            while (i)
            {
                struct __mingwthr_key* i_1 = i;
                i = i->next;
                free(i_1);
            }
            
            key_dtor_list = nullptr;
            __mingwthr_cs_init = 0;
            DeleteCriticalSection(&__mingwthr_cs);
        }
    }
    else
    {
        if (!__mingwthr_cs_init)
            InitializeCriticalSection(&__mingwthr_cs);
        
        __mingwthr_cs_init = 1;
    }
    
    return 1;
}

int _ValidateImageBase(unsigned char* pImageBase)
{
    if (*pImageBase == 0x5a4d)
    {
        void* rcx = &pImageBase[*(pImageBase + 0x3c)];
        
        if (*rcx == 0x4550)
        {
            int32_t result;
            result = *(rcx + 0x18) == 0x20b;
            return result;
        }
    }
    
    return 0;
}

void* _FindPESection(unsigned char* pImageBase, long long unsigned int rva)
{
    void* rcx = &pImageBase[*(pImageBase + 0x3c)];
    void* result = rcx + *(rcx + 0x14) + 0x18;
    uint32_t rcx_1 = *(rcx + 6);
    
    if (rcx_1)
    {
        void* r9_1 = result + (rcx_1 - 1) * 0x28 + 0x28;
        
        do
        {
            uint64_t r8_1 = *(result + 0xc);
            
            if (r8_1 <= rva && r8_1 + *(result + 8) > rva)
                return result;
            
            result += 0x28;
        } while (result != r9_1);
    }
    
    return nullptr;
}

struct Section_Header* const _FindPESectionByName(char const* pName)
{
    if (strlen(pName) <= 8)
    {
        for (struct Section_Header* const _Str1 = &__section_headers; _Str1 != 0x140000480; _Str1 = &_Str1[1])
        {
            if (!strncmp(_Str1, pName, 8))
                return _Str1;
        }
    }
    
    return 0;
}

struct Section_Header* const __mingw_GetSectionForAddress(void* p)
{
    for (struct Section_Header* const i = &__section_headers; i != 0x140000480; i = &i[1])
    {
        uint64_t virtualAddress = i->virtualAddress;
        
        if (p - &__dos_header >= virtualAddress && p - &__dos_header < virtualAddress + i->virtualSize)
            return i;
    }
    
    return 0;
}

int __mingw_GetSectionCount() __pure
{
    return 0x13;
}

struct Section_Header* const _FindPESectionExec(long long unsigned int eNo)
{
    for (struct Section_Header* const i = &__section_headers; i != 0x140000480; i = &i[1])
    {
        if (*i->characteristics[3] & 0x20)
        {
            if (!eNo)
                return i;
            
            eNo -= 1;
        }
    }
    
    return 0;
}

struct DOS_Header* const _GetPEImageBase() __pure
{
    return &__dos_header;
}

uint32_t _IsNonwritableInCurrentImage(unsigned char* pTarget)
{
    for (struct Section_Header* const i = &__section_headers; i != 0x140000480; i = &i[1])
    {
        uint64_t virtualAddress = i->virtualAddress;
        
        if (pTarget - &__dos_header >= virtualAddress && pTarget - &__dos_header < virtualAddress + i->virtualSize)
            return ~i->characteristics >> 0x1f;
    }
    
    return 0;
}

void* __mingw_enum_import_library_names(int i)
{
    struct Section_Header* const i_1 = &__section_headers;
    
    do
    {
        uint64_t virtualAddress = i_1->virtualAddress;
        
        if (0x11000 >= virtualAddress && 0x11000 < virtualAddress + i_1->virtualSize)
        {
            void* rax_3 = &_.idata$2;
            
            while (*(rax_3 + 4) || *(rax_3 + 0xc))
            {
                if (i <= 0)
                    return &__dos_header.e_magic[*(rax_3 + 0xc)];
                
                i -= 1;
                rax_3 += 0x14;
            }
            
            break;
        }
        
        i_1 = &i_1[1];
    } while (0x140000480 != i_1);
    
    return 0;
}

int64_t _.text(int64_t arg1 @ rax)
{
    int64_t result = arg1;
    void* rcx = &arg_8;
    
    if (arg1 >= 0x1000)
    {
        do
        {
            rcx -= 0x1000;
            *rcx = *rcx;
            arg1 -= 0x1000;
        } while (arg1 > 0x1000);
    }
    
    void* rcx_1 = rcx - arg1;
    *rcx_1 = *rcx_1;
    return result;
}

int32_t __mingw_vfprintf(struct _iobuf* stream, char const* fmt, char* argv)
{
    _lock_file(stream);
    int32_t result = __mingw_pformat(0x6000, stream, 0, fmt, argv);
    _unlock_file(stream);
    return result;
}

char* __pformat_cvt(int mode, float128 val, int nd, int* dp, int* sign)
{
    int64_t* rdx;
    int64_t bits_1 = *rdx;
    int32_t rdx_1 = rdx[1];
    int64_t bits = bits_1;
    int32_t var_10 = rdx_1;
    int16_t r10 = rdx_1 & 0x7fff;
    int kindp;
    int rcx_1;
    int be;
    
    if (!r10)
    {
        uint32_t rdx_3 = bits_1 >> 0x20;
        
        if (!(bits_1 | rdx_3))
        {
            be = 0;
            kindp = 0;
            rcx_1 = rdx_1 & 0x8000;
        }
        else
        {
            if (rdx_3 < 0)
                goto label_140006402;
            
            be = -0x403d;
            kindp = 2;
            rcx_1 = rdx_1 & 0x8000;
        }
    }
    else if (r10 != 0x7fff)
    {
        label_140006402:
        be = r10 - 0x403e;
        kindp = 1;
        rcx_1 = rdx_1 & 0x8000;
    }
    else if (!((bits_1 >> 0x20 & 0x7fffffff) | bits_1))
    {
        kindp = 3;
        be = 0;
        rcx_1 = rdx_1 & 0x8000;
    }
    else
    {
        kindp = 4;
        be = 0;
        rcx_1 = 0;
    }
    
    *sign = rcx_1;
    void rve;
    return __gdtoa(&fpi, be, &bits, &kindp, mode, nd, dp, &rve);
}

int __pformat_putc(int c, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int16_t flags = stream->flags;
    int count;
    
    if (!(*flags[1] & 0x40))
        count = stream->count;
    
    if (*flags[1] & 0x40 || stream->quota > count)
    {
        void* dest = stream->dest;
        *flags[1] &= 0x20;
        
        if (*flags[1])
        {
            fputc(c, dest);
            int result = stream->count + 1;
            stream->count = result;
            return result;
        }
        
        *(dest + stream->count) = c;
        count = stream->count;
    }
    
    stream->count = count + 1;
    return count + 1;
}

int __pformat_wputchars(short unsigned int const* s, int count, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    char buf[0x10];
    int64_t rsi;
    buf[8] = rsi;
    int64_t rbx;
    buf[0] = rbx;
    int count_2 = count;
    short unsigned int const* s_1 = s;
    void ps;
    void var_48;
    wcrtomb(&var_48, 0, &ps);
    int precision = stream->precision;
    int precision_1 = precision;
    
    if (count_2 <= precision)
        precision_1 = count_2;
    
    int width = stream->width;
    
    if (precision >= 0)
        count_2 = precision_1;
    
    if (width > count_2)
    {
        int32_t rax_6 = width - count_2;
        stream->width = rax_6;
        
        if (*stream->flags[1] & 4)
        {
            if (count_2 > 0)
                goto label_140006570;
            
            stream->width = rax_6 - 1;
            goto label_140006610;
        }
        
        stream->width = rax_6 - 1;
        
        do
        {
            __pformat_putc(0x20, stream);
            width = stream->width;
            stream->width = width - 1;
        } while (width);
        
        goto label_14000655e;
    }
    
    stream->width = 0xffffffff;
    label_14000655e:
    
    if (count_2 <= 0)
        stream->width = 0xfffffffe;
    else
    {
        label_140006570:
        
        while (true)
        {
            short unsigned int const wc = *s_1;
            s_1 = &s_1[1];
            int32_t rax = wcrtomb(&var_48, wc, &ps);
            
            if (rax <= 0)
            {
                while (true)
                {
                    width = stream->width;
                    stream->width = width - 1;
                    
                    if (width <= 0)
                        break;
                    
                    label_140006610:
                    __pformat_putc(0x20, stream);
                }
                
                break;
            }
            
            void* rsi_1 = &var_48;
            
            while (true)
            {
                int16_t flags = stream->flags;
                rsi_1 += 1;
                int count_1;
                
                if (!(*flags[1] & 0x40))
                    count_1 = stream->count;
                
                if (*flags[1] & 0x40 || stream->quota > count_1)
                {
                    int32_t _Character = *(rsi_1 - 1);
                    void* dest = stream->dest;
                    *flags[1] &= 0x20;
                    
                    if (!*flags[1])
                    {
                        *(dest + stream->count) = _Character;
                        count_1 = stream->count;
                    }
                    else
                    {
                        fputc(_Character, dest);
                        stream->count += 1;
                        
                        if (rsi_1 == &var_48 + rax - 1 + 1)
                            break;
                        
                        continue;
                    }
                }
                
                stream->count = count_1 + 1;
                
                if (rsi_1 == &var_48 + rax - 1 + 1)
                    break;
            }
            
            int count_3 = count_2;
            count_2 -= 1;
            
            if (count_3 == 1)
            {
                width = stream->width;
                stream->width = width - 1;
                
                if (width > 0)
                    goto label_140006610;
                
                break;
            }
        }
    }
    
    buf[0];
    buf[8];
    return width;
}

int __pformat_putchars(char const* s, int count, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int precision = stream->precision;
    int count_3 = count;
    int precision_1 = precision;
    char const* s_1 = s;
    
    if (count <= precision)
        precision_1 = count_3;
    
    int width = stream->width;
    
    if (precision >= 0)
        count_3 = precision_1;
    
    int16_t flags;
    
    if (width > count_3)
    {
        int32_t rax_2 = width - count_3;
        stream->width = rax_2;
        flags = stream->flags;
        
        if (!(*flags[1] & 4))
        {
            stream->width = rax_2 - 1;
            
            do
            {
                __pformat_putc(0x20, stream);
                width = stream->width;
                stream->width = width - 1;
            } while (width);
            
            goto label_1400066b3;
        }
        
        if (!count_3)
        {
            stream->width = rax_2 - 1;
            goto label_140006731;
        }
    }
    else
    {
        stream->width = 0xffffffff;
        label_1400066b3:
        
        if (!count_3)
        {
            stream->width = 0xfffffffe;
            return width;
        }
        
        flags = stream->flags;
    }
    
    while (true)
    {
        int count_1;
        
        if (!(*flags[1] & 0x40))
            count_1 = stream->count;
        
        if (*flags[1] & 0x40 || stream->quota > count_1)
        {
            int32_t _Character = *s_1;
            void* dest = stream->dest;
            
            if (!(*flags[1] & 0x20))
            {
                *(dest + stream->count) = _Character;
                count_1 = stream->count;
            }
            else
            {
                fputc(_Character, dest);
                count_1 = stream->count;
            }
        }
        
        stream->count = count_1 + 1;
        
        if (&s_1[count_3 - 1] == s_1)
            break;
        
        flags = stream->flags;
        s_1 = &s_1[1];
    }
    
    while (true)
    {
        width = stream->width;
        stream->width = width - 1;
        
        if (width <= 0)
            return width;
        
        flags = stream->flags;
        label_140006731:
        int count_2;
        
        if (!(*flags[1] & 0x40))
            count_2 = stream->count;
        
        if (*flags[1] & 0x40 || stream->quota > count_2)
        {
            char* dest_1 = stream->dest;
            
            if (!(*flags[1] & 0x20))
            {
                dest_1[stream->count] = 0x20;
                count_2 = stream->count;
            }
            else
            {
                fputc(0x20, dest_1);
                count_2 = stream->count;
            }
        }
        
        stream->count = count_2 + 1;
    }
}

int64_t __pformat_puts(char const* s, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    char const* s_1 = s;
    int64_t precision = stream->precision;
    
    if (!s)
        s_1 = "(null)";
    
    int rax;
    
    if (precision < 0)
        rax = strlen(s_1);
    else
        rax = strnlen(s_1, precision);
    
    /* tailcall */
    return __pformat_putchars(s_1, rax, stream);
}

int64_t __pformat_emit_inf_or_nan(int sign, char* value, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int flags = stream->flags;
    stream->precision = 0xffffffff;
    char s;
    void* r9;
    void var_b;
    
    if (sign)
    {
        s = 0x2d;
        r9 = &var_b;
    }
    else if (flags & 0x100)
    {
        s = 0x2b;
        r9 = &var_b;
    }
    else if (!(flags & 0x40))
        r9 = &s;
    else
    {
        s = 0x20;
        r9 = &var_b;
    }
    
    for (int64_t i = 0; i != 3; i += 1)
        *(r9 + i) = (value[i] & 0xdf) | (flags & 0x20);
    
    return __pformat_putchars(&s, r9 + 3 - &s, stream);
}

int64_t __pformat_xint(int fmt, union value, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream, union value)
{
    void var_78;
    int32_t rax_1;
    char rcx;
    int32_t rdi;
    char** stream_1;
    char r8;
    int32_t r12;
    void* r13;
    int32_t r15;
    
    if (fmt != 0x6f)
    {
        r15 = stream_1[2];
        int32_t rax = 0;
        rdi = stream_1[1];
        
        if (r15 >= 0)
            rax = r15;
        
        rax_1 = rax + 0x12;
        
        if (!(rdi & 0x1000))
        {
            r12 = *(stream_1 + 0xc);
            
            if (rax_1 < r12)
                rax_1 = r12;
            
            int64_t rax_4 = (rax_1 + 0xf) & 0xfffffffffffffff0;
            _.text(rax_4);
            rcx = 4;
            r8 = 0xf;
            r13 = &var_78 - rax_4 + 0x20;
            goto label_140006921;
        }
        
        rcx = 4;
        
        if (stream_1[4])
            goto label_140006ac2;
        
        r12 = *(stream_1 + 0xc);
        
        if (rax_1 < r12)
            rax_1 = r12;
        
        int64_t rax_29 = (rax_1 + 0xf) & 0xfffffffffffffff0;
        _.text(rax_29);
        r8 = 0xf;
        r13 = &var_78 - rax_29 + 0x20;
        goto label_140006aff;
    }
    
    r15 = stream_1[2];
    int32_t rax_23 = 0;
    rdi = stream_1[1];
    
    if (r15 >= 0)
        rax_23 = r15;
    
    rax_1 = rax_23 + 0x18;
    char* rsi;
    
    if (rdi & 0x1000)
    {
        if (!stream_1[4])
        {
            r12 = *(stream_1 + 0xc);
            
            if (rax_1 < r12)
                rax_1 = r12;
            
            goto label_140006c21;
        }
        
        rcx = 3;
        label_140006ac2:
        r12 = *(stream_1 + 0xc);
        int32_t rax_18 = rax_1 + rax_1 / 3;
        
        if (rax_18 < r12)
            rax_18 = r12;
        
        int64_t rax_21 = (rax_18 + 0xf) & 0xfffffffffffffff0;
        _.text(rax_21);
        r13 = &var_78 - rax_21 + 0x20;
        
        if (fmt == 0x6f)
            goto label_140006c37;
        
        r8 = 0xf;
        label_140006aff:
        rsi = r13;
        
        if (stream)
            goto label_14000695f;
        
        goto label_140006b16;
    }
    
    r12 = *(stream_1 + 0xc);
    
    if (r12 >= rax_1)
        rax_1 = r12;
    
    label_140006c21:
    int64_t rax_26 = (rax_1 + 0xf) & 0xfffffffffffffff0;
    _.text(rax_26);
    rcx = 3;
    r13 = &var_78 - rax_26 + 0x20;
    label_140006c37:
    r8 = 7;
    label_140006921:
    rsi = r13;
    
    if (stream)
    {
        label_14000695f:
        
        do
        {
            rsi = &rsi[1];
            char rax_6 = r8 & stream;
            char rax_8 = (rax_6 + 0x37) | (fmt & 0x20);
            
            if (rax_6 + 0x30 < 0x3a)
                rax_8 = rax_6 + 0x30;
            
            stream u>>= rcx;
            rsi[-1] = rax_8;
        } while (stream);
        
        if (rsi == r13)
            goto label_140006b16;
        
        if (r15 <= 0)
            goto label_140006c4c;
        
        goto label_14000697c;
    }
    
    label_140006b16:
    stream_1[1] = rdi & 0xfffff7ff;
    
    if (r15 <= 0)
    {
        label_140006c4c:
        
        if (fmt == 0x6f && *(stream_1 + 9) & 8)
        {
            *rsi = 0x30;
            rsi = &rsi[1];
        }
        
        if (rsi != r13 || !r15)
            goto label_1400069aa;
        
        goto label_140006b44;
    }
    
    label_14000697c:
    int32_t _Size_2 = r15 - (rsi - r13);
    
    if (_Size_2 <= 0)
        goto label_140006c4c;
    
    int64_t _Size = _Size_2;
    char* rcx_1 = rsi;
    rsi = &rsi[_Size];
    memset(rcx_1, 0x30, _Size);
    int32_t i;
    
    if (rsi != r13)
    {
        label_1400069aa:
        i = rsi - r13;
        
        if (i < r12)
            goto label_140006b60;
        
        goto label_1400069b6;
    }
    
    label_140006b44:
    *rsi = 0x30;
    rsi = &rsi[1];
    i = rsi - r13;
    int32_t _Size_3;
    
    if (i >= r12)
    {
        label_1400069b6:
        *(stream_1 + 0xc) = 0xffffffff;
        
        if (fmt == 0x6f)
        {
            _Size_3 = -1;
            
            if (rsi > r13)
                goto label_1400069fd;
            
            return i;
        }
        
        _Size_3 = -1;
        
        if (*(stream_1 + 9) & 8)
        {
            *rsi = fmt;
            rsi = &rsi[2];
            rsi[-1] = 0x30;
        }
        
        goto label_1400069d7;
    }
    
    label_140006b60:
    _Size_3 = r12 - i;
    int32_t rdi_1 = stream_1[1];
    *(stream_1 + 0xc) = _Size_3;
    int32_t rsi_1;
    
    if (fmt == 0x6f)
    {
        if (r15 < 0 && (rdi_1 & 0x600) == 0x200)
        {
            label_140006d27:
            char* rcx_2 = rsi;
            uint64_t _Size_1 = _Size_3;
            rsi = &rsi[_Size_1];
            i = memset(rcx_2, 0x30, _Size_1);
            _Size_3 = _Size_3 * 0 - 1;
            
            if (fmt == 0x6f || !(rdi_1 & 0x800))
                goto label_140006b9d;
            
            goto label_140006b92;
        }
        
        if (!(rdi_1 & 0x400))
        {
            label_140006bb5:
            int32_t i_1 = _Size_3 - 1;
            
            do
            {
                __pformat_putc(0x20, stream_1);
                i = i_1;
                i_1 -= 1;
            } while (i > 0);
            
            _Size_3 = -1;
            
            if (rsi > r13)
                goto label_1400069fd;
            
            goto label_140006a35;
        }
        
        if (rsi > r13)
        {
            label_140006a00:
            
            while (true)
            {
                rsi -= 1;
                int32_t rax_13;
                
                if (!(rdi_1 & 0x4000))
                    rax_13 = *(stream_1 + 0x24);
                
                if (!(rdi_1 & 0x4000) && stream_1[5] <= rax_13)
                    goto label_1400069f2;
                
                int32_t _Character = *rsi;
                char* _Stream = *stream_1;
                
                if (!(rdi_1 & 0x2000))
                {
                    _Stream[*(stream_1 + 0x24)] = _Character;
                    rax_13 = *(stream_1 + 0x24);
                    label_1400069f2:
                    i = rax_13 + 1;
                    *(stream_1 + 0x24) = i;
                    
                    if (rsi <= r13)
                        break;
                }
                else
                {
                    fputc(_Character, _Stream);
                    i = *(stream_1 + 0x24) + 1;
                    *(stream_1 + 0x24) = i;
                    
                    if (rsi <= r13)
                        break;
                }
                
                label_1400069fd:
                rdi_1 = stream_1[1];
            }
            
            label_140006a35:
            rsi_1 = _Size_3 - 1;
            
            if (_Size_3 > 0)
                goto label_140006a5e;
            
            return i;
        }
    }
    else
    {
        if (rdi_1 & 0x800)
        {
            _Size_3 -= 2;
            
            if (_Size_3 > 0 && r15 < 0)
                goto label_140006d72;
            
            label_140006b92:
            *rsi = fmt;
            rsi = &rsi[2];
            rsi[-1] = 0x30;
            label_140006b9d:
            
            if (_Size_3 <= 0)
            {
                label_1400069d7:
                
                if (r13 < rsi)
                    goto label_1400069fd;
                
                return i;
            }
            
            rdi_1 = stream_1[1];
            
            if (rdi_1 & 0x400)
                goto label_140006ca5;
            
            goto label_140006bb5;
        }
        
        if (r15 < 0)
        {
            label_140006d72:
            i = rdi_1 & 0x600;
            
            if (i == 0x200)
                goto label_140006d27;
            
            if (rdi_1 & 0x800)
                goto label_140006b92;
        }
        
        if (!(rdi_1 & 0x400))
            goto label_140006bb5;
        
        label_140006ca5:
        
        if (r13 < rsi)
            goto label_140006a00;
    }
    
    rsi_1 = _Size_3 - 1;
    
    while (true)
    {
        int32_t rax_16;
        
        if (!(rdi_1 & 0x4000))
            rax_16 = *(stream_1 + 0x24);
        
        if (!(rdi_1 & 0x4000) && stream_1[5] <= rax_16)
            goto label_140006a53;
        
        char* _Stream_1 = *stream_1;
        
        if (!(rdi_1 & 0x2000))
        {
            _Stream_1[*(stream_1 + 0x24)] = 0x20;
            rax_16 = *(stream_1 + 0x24);
            label_140006a53:
            i = rax_16 + 1;
            *(stream_1 + 0x24) = i;
            int32_t temp1_1 = rsi_1;
            rsi_1 -= 1;
            
            if (temp1_1 < 1)
                return i;
        }
        else
        {
            fputc(0x20, _Stream_1);
            i = *(stream_1 + 0x24) + 1;
            *(stream_1 + 0x24) = i;
            int32_t temp0_1 = rsi_1;
            rsi_1 -= 1;
            
            if (temp0_1 < 1)
                return i;
        }
        
        label_140006a5e:
        rdi_1 = stream_1[1];
    }
}

int64_t __pformat_int(union value, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream, union value)
{
    int32_t _Size_3 = 0;
    char** stream_1;
    int32_t _Size_2 = stream_1[2];
    int32_t r12 = stream_1[1];
    
    if (_Size_2 >= 0)
        _Size_3 = _Size_2;
    
    int32_t rax = _Size_3 + 0x17;
    
    if (r12 & 0x1000 && stream_1[4])
        rax += rax / 3;
    
    int32_t rsi = *(stream_1 + 0xc);
    
    if (rsi >= rax)
        rax = rsi;
    
    int64_t rax_3 = (rax + 0xf) & 0xfffffffffffffff0;
    _.text(rax_3);
    
    if (!(r12 & 0x80))
        goto label_140006e36;
    
    void var_68;
    void* rdi_1;
    int32_t _Size_1;
    
    if (stream < 0)
    {
        stream = -(stream);
        label_140006e4c:
        void* r8 = &var_68 - rax_3 + 0x20;
        
        while (true)
        {
            rdi_1 = r8 + 1;
            uint64_t stream_2 = stream / 0xa;
            *r8 = stream - (stream_2 + (stream_2 << 2)) * 2 + 0x30;
            
            if (stream <= 9)
                break;
            
            if (&var_68 - rax_3 + 0x20 != rdi_1 && r12 & 0x1000 && stream_1[4] && ((rdi_1 - (&var_68 - rax_3 + 0x20)) & 0x8000000000000003) == 3)
            {
                *(r8 + 1) = 0x2c;
                rdi_1 = r8 + 2;
            }
            
            stream = stream_2;
            r8 = rdi_1;
        }
        
        if (_Size_2 > 0)
        {
            _Size_1 = _Size_2 - (rdi_1 - (&var_68 - rax_3 + 0x20));
            
            if (_Size_1 <= 0)
                goto label_140006ef0;
            
            goto label_140006eda;
        }
        
        if (&var_68 - rax_3 + 0x20 == rdi_1)
            goto label_140007079;
    }
    else
    {
        r12 &= 0x7f;
        stream_1[1] = r12;
        label_140006e36:
        
        if (stream)
            goto label_140006e4c;
        
        rdi_1 = &var_68 - rax_3 + 0x20;
        _Size_1 = _Size_2;
        
        if (_Size_2 > 0)
        {
            label_140006eda:
            int64_t _Size = _Size_1;
            void* rcx = rdi_1;
            rdi_1 += _Size;
            memset(rcx, 0x30, _Size);
            label_140006ef0:
            
            if (&var_68 - rax_3 + 0x20 == rdi_1)
            {
                *rdi_1 = 0x30;
                rdi_1 += 1;
            }
        }
        else
        {
            label_140007079:
            
            if (_Size_2)
            {
                *rdi_1 = 0x30;
                rdi_1 += 1;
            }
        }
    }
    
    if (rsi > 0)
    {
        int32_t rsi_1 = rsi - (rdi_1 - (&var_68 - rax_3 + 0x20));
        *(stream_1 + 0xc) = rsi_1;
        
        if (rsi_1 > 0)
        {
            if (!(r12 & 0x1c0))
            {
                if (_Size_2 < 0 && (r12 & 0x600) == 0x200)
                    goto label_1400070ba;
                
                goto label_140006f22;
            }
            
            *(stream_1 + 0xc) = rsi_1 - 1;
            
            if (_Size_2 >= 0 || (r12 & 0x600) != 0x200)
            {
                label_140006f22:
                
                if (!(r12 & 0x400))
                {
                    int32_t rax_25 = *(stream_1 + 0xc);
                    *(stream_1 + 0xc) = rax_25 - 1;
                    
                    if (rax_25 > 0)
                    {
                        int32_t i;
                        
                        do
                        {
                            __pformat_putc(0x20, stream_1);
                            i = *(stream_1 + 0xc);
                            *(stream_1 + 0xc) = i - 1;
                        } while (i > 0);
                        r12 = stream_1[1];
                    }
                }
            }
            else
            {
                label_1400070ba:
                int32_t rdx_6 = *(stream_1 + 0xc);
                uint64_t rax_24 = rdx_6 - 1;
                *(stream_1 + 0xc) = rax_24;
                
                if (rdx_6 > 0)
                {
                    void* rcx_2 = rdi_1;
                    rdi_1 += rax_24 + 1;
                    memset(rcx_2, 0x30, rax_24 + 1);
                    *(stream_1 + 0xc) = 0xffffffff;
                }
            }
        }
    }
    
    void* rsi_2;
    
    if (r12 & 0x80)
    {
        *rdi_1 = 0x2d;
        rsi_2 = rdi_1 + 1;
    }
    else if (!(r12 & 0x100))
    {
        rsi_2 = rdi_1;
        
        if (r12 & 0x40)
        {
            *rdi_1 = 0x20;
            rsi_2 += 1;
        }
    }
    else
    {
        *rdi_1 = 0x2b;
        rsi_2 = rdi_1 + 1;
    }
    
    if (&var_68 - rax_3 + 0x20 < rsi_2)
    {
        while (true)
        {
            rsi_2 -= 1;
            int32_t rax_17;
            
            if (!(r12 & 0x4000))
                rax_17 = *(stream_1 + 0x24);
            
            if (!(r12 & 0x4000) && stream_1[5] <= rax_17)
                goto label_140006f5d;
            
            int32_t _Character = *rsi_2;
            FILE* _Stream = *stream_1;
            
            if (!(r12 & 0x2000))
            {
                *(_Stream + *(stream_1 + 0x24)) = _Character;
                rax_17 = *(stream_1 + 0x24);
                label_140006f5d:
                *(stream_1 + 0x24) = rax_17 + 1;
                
                if (&var_68 - rax_3 + 0x20 == rsi_2)
                    break;
            }
            else
            {
                fputc(_Character, _Stream);
                *(stream_1 + 0x24) += 1;
                
                if (&var_68 - rax_3 + 0x20 == rsi_2)
                    break;
            }
            
            r12 = stream_1[1];
        }
    }
    
    int32_t result = *(stream_1 + 0xc);
    
    while (true)
    {
        int32_t result_1 = result;
        result -= 1;
        *(stream_1 + 0xc) = result;
        
        if (result_1 <= 0)
            break;
        
        int16_t rcx_1 = stream_1[1];
        int32_t rdx_1;
        
        if (!(*rcx_1[1] & 0x40))
            rdx_1 = *(stream_1 + 0x24);
        
        if (*rcx_1[1] & 0x40 || stream_1[5] > rdx_1)
        {
            char* _Stream_1 = *stream_1;
            *rcx_1[1] &= 0x20;
            
            if (!*rcx_1[1])
            {
                _Stream_1[*(stream_1 + 0x24)] = 0x20;
                rdx_1 = *(stream_1 + 0x24);
                result = *(stream_1 + 0xc);
            }
            else
            {
                fputc(0x20, _Stream_1);
                rdx_1 = *(stream_1 + 0x24);
                result = *(stream_1 + 0xc);
            }
        }
        
        *(stream_1 + 0x24) = rdx_1 + 1;
    }
    
    return result;
}

int64_t __pformat_emit_radix_point(struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    void var_10;
    int64_t r12;
    var_10 = r12;
    int64_t ps;
    short unsigned int rpchr_1;
    
    if (stream->rplen == 0xfffffffd)
    {
        ps = 0;
        short unsigned int pwc;
        int rax_10 = mbrtowc(&pwc, *localeconv(), 0x10, &ps);
        
        if (rax_10 <= 0)
            rpchr_1 = stream->rpchr;
        else
        {
            rpchr_1 = pwc;
            stream->rpchr = rpchr_1;
        }
        
        stream->rplen = rax_10;
    }
    else
        rpchr_1 = stream->rpchr;
    
    if (!rpchr_1)
        return __pformat_putc(0x2e, stream);
    
    int64_t rax_3 = (stream->rplen + 0xf) & 0xfffffffffffffff0;
    _.text(rax_3);
    ps = 0;
    void var_58;
    char* rbx = &var_58 - rax_3 + 0x20;
    int32_t rax_4 = wcrtomb(rbx, rpchr_1, &ps);
    
    if (rax_4 <= 0)
        return __pformat_putc(0x2e, stream);
    
    void* rdi_1 = &rbx[rax_4 - 1 + 1];
    int result;
    
    while (true)
    {
        int16_t flags = stream->flags;
        rbx = &rbx[1];
        int count;
        
        if (!(*flags[1] & 0x40))
            count = stream->count;
        
        if (*flags[1] & 0x40 || stream->quota > count)
        {
            int32_t _Character = rbx[-1];
            FILE* dest = stream->dest;
            *flags[1] &= 0x20;
            
            if (!*flags[1])
            {
                *(dest + stream->count) = _Character;
                count = stream->count;
            }
            else
            {
                fputc(_Character, dest);
                result = stream->count + 1;
                stream->count = result;
                
                if (rdi_1 == rbx)
                    break;
                
                continue;
            }
        }
        
        result = count + 1;
        stream->count = result;
        
        if (rdi_1 == rbx)
            break;
    }
    
    return result;
}

int __pformat_emit_float(int sign, char* value, int len, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int width = stream->width;
    char* value_1 = value;
    int rsi = len;
    int rax;
    int precision_2;
    
    if (len > 0)
    {
        if (width >= len)
        {
            int width_5 = width;
            width -= len;
            stream->width = width;
            
            if (width_5 - len < 0)
                goto label_1400072d9;
            
            precision_2 = stream->precision;
            
            if (width <= precision_2)
                goto label_1400072d9;
            
            goto label_140007429;
        }
        
        label_1400072d9:
        stream->width = 0xffffffff;
        
        if (*stream->flags[1] & 0x10 && stream->thousands_chr)
        {
            rax = -1;
            label_1400072fe:
            uint32_t rcx_2 = (rsi + 2) / 3;
            int32_t i = rcx_2 - 1 - rax;
            
            if (rcx_2 != 1)
            {
                do
                {
                    if (rax <= 0)
                        goto label_14000735a;
                    
                    rax -= 1;
                    stream->width = rax;
                } while (i != -(rax));
            }
            
            goto label_140007310;
        }
        
        label_14000735a:
        
        if (!sign)
            goto label_140007362;
        
        __pformat_putc(0x2d, stream);
    }
    else
    {
        int flags;
        
        if (width <= 0)
        {
            if (!width)
                goto label_14000748b;
            
            stream->width = 0xffffffff;
            label_140007499:
            
            if (!sign)
            {
                label_140007362:
                flags = stream->flags;
                label_140007365:
                
                if (*flags[1] & 1)
                    __pformat_putc(0x2b, stream);
                else if (flags & 0x40)
                    __pformat_putc(0x20, stream);
            }
            else
                __pformat_putc(0x2d, stream);
        }
        else
        {
            width -= 1;
            label_14000748b:
            precision_2 = stream->precision;
            
            if (width <= precision_2)
            {
                stream->width = 0xffffffff;
                goto label_140007499;
            }
            
            label_140007429:
            rax = width - precision_2;
            stream->width = rax;
            int16_t flags_1;
            
            if (precision_2 <= 0)
                flags_1 = stream->flags;
            
            if (precision_2 > 0 || *flags_1[1] & 8)
            {
                rax -= 1;
                stream->width = rax;
                
                if (rsi > 0 && *stream->flags[1] & 0x10 && stream->thousands_chr)
                    goto label_1400072fe;
                
                label_140007310:
                
                if (rax <= 0)
                    goto label_14000735a;
            }
            else if (rsi > 0)
            {
                *flags_1[1] &= 0x10;
                
                if (!*flags_1[1] || !stream->thousands_chr)
                    goto label_140007314;
                
                goto label_1400072fe;
            }
            
            label_140007314:
            int rax_1;
            
            if (!sign)
            {
                flags = stream->flags;
                
                if (flags & 0x1c0)
                {
                    rax_1 = rax - 1;
                    stream->width = rax_1;
                    
                    if (rax == 1 || *flags[1] & 6)
                        goto label_140007365;
                    
                    goto label_14000733b;
                }
                
                if (*flags[1] & 6)
                    goto label_140007365;
                
                int width_4 = stream->width;
                stream->width = width_4 - 1;
                
                if (width_4 <= 0)
                    goto label_140007365;
                
                goto label_140007358;
            }
            
            rax_1 = rax - 1;
            stream->width = rax_1;
            
            if (rax == 1)
                __pformat_putc(0x2d, stream);
            else
            {
                if (!(stream->flags & 0x600))
                {
                    label_14000733b:
                    stream->width = rax_1 - 1;
                    label_140007358:
                    int width_1;
                    
                    do
                    {
                        __pformat_putc(0x20, stream);
                        width_1 = stream->width;
                        stream->width = width_1 - 1;
                    } while (width_1 > 0);
                    goto label_14000735a;
                }
                
                __pformat_putc(0x2d, stream);
            }
        }
    }
    int width_2 = stream->width;
    
    if (width_2 > 0 && (stream->flags & 0x600) == 0x200)
    {
        stream->width = width_2 - 1;
        int width_3;
        
        do
        {
            __pformat_putc(0x30, stream);
            width_3 = stream->width;
            stream->width = width_3 - 1;
        } while (width_3 > 0);
    }
    
    int precision;
    
    if (rsi <= 0)
    {
        __pformat_putc(0x30, stream);
        precision = stream->precision;
        
        if (precision <= 0 && !(*stream->flags[1] & 8))
        {
            if (rsi)
                goto label_14000756d;
            
            stream->precision = precision - 1;
            return precision - 1;
        }
        
        __pformat_emit_radix_point(stream);
        
        if (rsi)
        {
            precision = stream->precision;
            label_14000756d:
            stream->precision = precision + rsi;
            int i_1;
            
            do
            {
                __pformat_putc(0x30, stream);
                i_1 = rsi;
                rsi += 1;
            } while (i_1 != 0xffffffff);
        }
    }
    else
    {
        while (true)
        {
            char c_2 = *value_1;
            int c = 0x30;
            
            if (c_2)
            {
                value_1 = &value_1[1];
                c = c_2;
            }
            
            __pformat_putc(c, stream);
            int temp5_1 = rsi;
            rsi -= 1;
            
            if (temp5_1 == 1)
                break;
            
            if (*stream->flags[1] & 0x10 && stream->thousands_chr && rsi * 0xaaaaaaab <= 0x55555555)
                __pformat_wputchars(&stream->thousands_chr, 1, stream);
        }
        
        precision = stream->precision;
        
        if (precision <= 0 && !(*stream->flags[1] & 8))
        {
            stream->precision = precision - 1;
            return precision - 1;
        }
        
        __pformat_emit_radix_point(stream);
    }
    int precision_1;
    
    while (true)
    {
        precision_1 = stream->precision;
        stream->precision = precision_1 - 1;
        
        if (precision_1 <= 0)
            break;
        
        char c_3 = *value_1;
        int c_1 = 0x30;
        
        if (c_3)
        {
            value_1 = &value_1[1];
            c_1 = c_3;
        }
        
        __pformat_putc(c_1, stream);
    }
    
    return precision_1;
}

int64_t __pformat_emit_efloat(int sign, char* value, int e, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int expmin_2 = 1;
    int64_t r13 = e - 1;
    int32_t r8_1 = (e - 1) >> 0x1f;
    int32_t rcx_1 = (r13 * 0x66666667) >> 0x22;
    int32_t rcx_2 = rcx_1 - r8_1;
    
    if (rcx_1 != r8_1)
    {
        int32_t rax_3;
        int32_t rcx_3;
        
        do
        {
            rcx_3 = rcx_2 >> 0x1f;
            expmin_2 += 1;
            rax_3 = (rcx_2 * 0x66666667) >> 0x22;
            rcx_2 s/= 0xa;
        } while (rax_3 != rcx_3);
    }
    
    int expmin = stream->expmin;
    
    if (expmin == 0xffffffff)
    {
        stream->expmin = 2;
        expmin = 2;
    }
    
    int expmin_1 = expmin_2;
    int width = stream->width;
    
    if (expmin >= expmin_2)
        expmin_1 = expmin;
    
    int rax_6 = width - (expmin_1 + 2);
    
    if (width <= expmin_1 + 2)
        rax_6 = -1;
    
    stream->width = rax_6;
    __pformat_emit_float(sign, value, 1, stream);
    int flags = stream->flags;
    stream->precision = stream->expmin;
    stream->flags = flags | 0x1c0;
    __pformat_putc((flags & 0x20) | 0x45, stream);
    stream->width += expmin_1 + 1;
    /* tailcall */
    return __pformat_int(r13);
}

int64_t __pformat_efloat(float128 x, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int precision = stream->precision;
    int80_t* rcx;
    int80_t x87_r7 = *rcx;
    int nd;
    
    if (precision < 0)
    {
        stream->precision = 6;
        nd = 7;
    }
    else
        nd = precision + 1;
    
    int80_t var_38 = x87_r7;
    int sign;
    int dp;
    float128 val;
    char* rax = __pformat_cvt(2, val, nd, &dp, &sign);
    int e = dp;
    
    if (e != 0xffff8000)
    {
        __pformat_emit_efloat(sign, rax, e, stream);
        return __freedtoa(rax);
    }
    
    __pformat_emit_inf_or_nan(sign, rax, stream);
    return __freedtoa(rax);
}

int64_t __pformat_float(float128 x, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int precision = stream->precision;
    int80_t* rcx;
    int80_t x87_r7 = *rcx;
    
    if (precision < 0)
    {
        stream->precision = 6;
        precision = 6;
    }
    
    int80_t var_38 = x87_r7;
    int sign;
    int dp;
    float128 val;
    char* rax = __pformat_cvt(3, val, precision, &dp, &sign);
    int len = dp;
    
    if (len == 0xffff8000)
        __pformat_emit_inf_or_nan(sign, rax, stream);
    else
    {
        __pformat_emit_float(sign, rax, len, stream);
        int width = stream->width;
        
        while (true)
        {
            int width_1 = width;
            width -= 1;
            stream->width = width;
            
            if (width_1 <= 0)
                break;
            
            int16_t flags = stream->flags;
            int count;
            
            if (!(*flags[1] & 0x40))
                count = stream->count;
            
            if (*flags[1] & 0x40 || stream->quota > count)
            {
                void* dest = stream->dest;
                *flags[1] &= 0x20;
                
                if (!*flags[1])
                {
                    *(dest + stream->count) = 0x20;
                    count = stream->count;
                    width = stream->width;
                }
                else
                {
                    fputc(0x20, dest);
                    count = stream->count;
                    width = stream->width;
                }
            }
            
            stream->count = count + 1;
        }
    }
    
    return __freedtoa(rax);
}

int64_t __pformat_gfloat(float128 x, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream)
{
    int precision_1 = stream->precision;
    int80_t* rcx;
    int80_t x87_r7 = *rcx;
    
    if (precision_1 < 0)
    {
        stream->precision = 6;
        precision_1 = 6;
    }
    else if (!precision_1)
    {
        stream->precision = 1;
        precision_1 = 1;
    }
    
    int80_t var_38 = x87_r7;
    int sign;
    int dp;
    float128 val;
    char* rax = __pformat_cvt(2, val, precision_1, &dp, &sign);
    int dp_1 = dp;
    
    if (dp_1 == 0xffff8000)
        __pformat_emit_inf_or_nan(sign, rax, stream);
    else
    {
        int32_t rax_2 = stream->flags & 0x800;
        int precision;
        
        if (dp_1 >= 0xfffffffd)
            precision = stream->precision;
        
        if (dp_1 < 0xfffffffd || dp_1 > precision)
        {
            int rax_4;
            
            if (rax_2)
                rax_4 = stream->precision - 1;
            else
                rax_4 = strlen(rax) - 1;
            
            stream->precision = rax_4;
            __pformat_emit_efloat(sign, rax, dp_1, stream);
        }
        else
        {
            if (!rax_2)
            {
                int32_t rax_7 = strlen(rax);
                int rax_8 = rax_7 - dp_1;
                stream->precision = rax_8;
                
                if (rax_7 - dp_1 < 0)
                {
                    int width_1 = stream->width;
                    
                    if (width_1 > 0)
                        stream->width = rax_8 + width_1;
                }
            }
            else
                stream->precision = precision - dp_1;
            
            __pformat_emit_float(sign, rax, dp_1, stream);
            
            while (true)
            {
                int width = stream->width;
                stream->width = width - 1;
                
                if (width <= 0)
                    break;
                
                __pformat_putc(0x20, stream);
            }
        }
    }
    
    return __freedtoa(rax);
}

int64_t __pformat_emit_xfloat(union value, struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream, union value)
{
    bool cond:0 = stream;
    struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream_3 = stream;
    struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream_2;
    struct { void* dest; int flags; int width; int precision; int rplen; short unsigned int rpchr; __padding char _1a[0x2];int thousands_chr_len; short unsigned int thousands_chr; __padding char _22[0x2];int count; int quota; int expmin; }* stream_1 = stream_2;
    int32_t rdx;
    int32_t rdi_1;
    
    if (!rdx)
        rdi_1 = 0;
    
    if (rdx || cond:0)
        rdi_1 = rdx - 3;
    
    int precision_1 = stream_1->precision;
    stream_2 = precision_1 > 0;
    int32_t i_2;
    
    if (precision_1 <= 0xe)
    {
        uint64_t r9 = stream_3 >> 1;
        int64_t rax_1 = 4 << (0xe - precision_1) << 2;
        int64_t rax_2 = rax_1 + r9;
        
        if (rax_1 + r9 < 0)
        {
            rdi_1 += 4;
            stream_3 = rax_2 >> 3 >> (0xf - precision_1) << 2;
            label_140007c87:
            i_2 = precision_1 + 1;
            goto label_140007c8a;
        }
        
        uint64_t stream_4 = (rax_2 * 2) >> (0xf - precision_1) << 2;
        stream_3 = stream_4;
        
        if (stream_4 || stream_2)
            goto label_140007c87;
        
        goto label_140007a9d;
    }
    
    char var_58;
    int flags;
    void* i_1;
    int flags_1;
    
    if (cond:0 || stream_2)
    {
        i_2 = 0x10;
        label_140007c8a:
        flags = stream_1->flags;
        i_1 = &var_58;
        flags_1 = flags;
        int32_t i;
        
        do
        {
            int32_t rax_17 = stream_3 & 0xf;
            
            if (i_2 != 1)
            {
                int precision_3 = stream_1->precision;
                
                if (precision_3 > 0)
                    stream_1->precision = precision_3 - 1;
                
                goto label_140007cf3;
            }
            
            int precision_4;
            
            if (i_1 <= &var_58 && !(flags & 0x800))
                precision_4 = stream_1->precision;
            
            if (i_1 <= &var_58 && !(flags & 0x800) && precision_4 <= 0)
            {
                if (rax_17)
                    goto label_140007cf7;
                
                if (!precision_4)
                    goto label_140007cbf;
                
                break;
            }
            
            *i_1 = 0x2e;
            i_1 += 1;
            label_140007cf3:
            
            if (rax_17)
            {
                label_140007cf7:
                
                if (rax_17 <= 9)
                    goto label_140007cbf;
                
                *i_1 = (rax_17 + 0x37) | (flags & 0x20);
                i_1 += 1;
            }
            else if (i_1 > &var_58 || stream_1->precision >= 0)
            {
                label_140007cbf:
                *i_1 = rax_17 + 0x30;
                i_1 += 1;
            }
            
            stream_3 u>>= 4;
            i = i_2;
            i_2 -= 1;
        } while (i != 1);
        
        if (i_1 == &var_58)
        {
            if (stream_1->precision <= 0)
                goto label_140007aa7;
            
            goto label_140007d36;
        }
    }
    else
    {
        label_140007a9d:
        flags = stream_1->flags;
        label_140007aa7:
        flags_1 = flags;
        char* rax_4 = &var_58;
        
        if (*flags[1] & 8)
        {
            label_140007d36:
            var_58 = 0x2e;
            void var_57;
            rax_4 = &var_57;
            *rax_4 = 0x30;
            i_1 = &rax_4[1];
        }
        else
        {
            *rax_4 = 0x30;
            i_1 = &rax_4[1];
        }
    }
    
    int width_3 = stream_1->width;
    int32_t rbp_1 = 2;
    
    if (width_3 > 0)
    {
        int precision_2 = stream_1->precision;
        int32_t r10_2 = i_1 - &var_58;
        
        if (precision_2 > 0)
            r10_2 += precision_2;
        
        int32_t r10_3 = r10_2 + 6;
        int32_t rax_6 = rdi_1 >> 0x1f;
        int32_t r9_2 = r10_3;
        int32_t rdx_5 = (rdi_1 * 0x66666667) >> 0x22;
        int32_t rdx_6 = rdx_5 - rax_6;
        
        if (rdx_5 != rax_6)
        {
            int32_t rax_9;
            int32_t rdx_7;
            
            do
            {
                r9_2 += 1;
                rdx_7 = rdx_6 >> 0x1f;
                rax_9 = (rdx_6 * 0x66666667) >> 0x22;
                rdx_6 s/= 0xa;
            } while (rax_9 != rdx_7);
            rbp_1 = r9_2 + 2 - r10_3;
        }
        
        if (width_3 <= r9_2)
            stream_1->width = 0xffffffff;
        else
        {
            int r11_1 = width_3 - r9_2;
            *flags[1] &= 6;
            
            if (*flags[1])
                stream_1->width = r11_1;
            else
            {
                stream_1->width = r11_1 - 1;
                
                if (r11_1 > 0)
                {
                    int width;
                    
                    do
                    {
                        __pformat_putc(0x20, stream_1);
                        width = stream_1->width;
                        stream_1->width = width - 1;
                    } while (width > 0);
                    flags_1 = stream_1->flags;
                }
            }
        }
    }
    
    if (flags_1 & 0x80)
        __pformat_putc(0x2d, stream_1);
    else if (flags_1 & 0x100)
        __pformat_putc(0x2b, stream_1);
    else if (flags_1 & 0x40)
        __pformat_putc(0x20, stream_1);
    
    __pformat_putc(0x30, stream_1);
    __pformat_putc((stream_1->flags & 0x20) | 0x58, stream_1);
    int width_1 = stream_1->width;
    
    if (width_1 > 0 && *stream_1->flags[1] & 2)
    {
        stream_1->width = width_1 - 1;
        int width_2;
        
        do
        {
            __pformat_putc(0x30, stream_1);
            width_2 = stream_1->width;
            stream_1->width = width_2 - 1;
        } while (width_2 > 0);
    }
    
    if (i_1 > &var_58)
    {
        do
        {
            int32_t c = *(i_1 - 1);
            i_1 -= 1;
            
            if (c == 0x2e)
                __pformat_emit_radix_point(stream_1);
            else if (c == 0x2c)
            {
                short unsigned int thousands_chr = stream_1->thousands_chr;
                char buf[0x18];
                buf[0x16] = thousands_chr;
                
                if (thousands_chr)
                    __pformat_wputchars(&buf[0x16], 1, stream_1);
            }
            else
                __pformat_putc(c, stream_1);
        } while (i_1 != &var_58);
    }
    
    while (true)
    {
        int precision = stream_1->precision;
        stream_1->precision = precision - 1;
        
        if (precision <= 0)
            break;
        
        __pformat_putc(0x30, stream_1);
    }
    
    __pformat_putc((stream_1->flags & 0x20) | 0x50, stream_1);
    stream_1->width += rbp_1;
    stream_1->flags |= 0x1c0;
    /* tailcall */
    return __pformat_int(value, rdi_1, value);
}

int32_t __mingw_pformat(int flags, void* dest, int max, char const* fmt, char* argv)
{
    char* argv_1 = argv;
    int32_t* rax;
    int64_t r9;
    float128 x;
    rax = _errno();
    int32_t _Character = *fmt;
    int32_t rdi_1 = flags & 0x6000;
    int32_t _ErrorMessage = *rax;
    int16_t var_58 = 0;
    char _Character_1 = _Character;
    void* rbx_1 = &fmt[1];
    struct stream;
    stream.quota = 0xffffffff;
    stream.expmin = 0xfffffffd;
    stream.rpchr = dest;
    stream.thousands_chr_len = *dest[4];
    stream.thousands_chr = rdi_1;
    stream.count = 0xffffffff;
    int16_t var_60 = 0;
    int32_t var_5c = 0;
    int32_t var_54 = 0;
    int32_t var_4c = 0xffffffff;
    
    if (!_Character)
        return _Character;
    
    do
    {
        if (_Character != 0x25)
        {
            int32_t r8 = stream.thousands_chr;
            int32_t rax_1;
            
            if (!(r8 & 0x4000))
                rax_1 = var_54;
            
            if (r8 & 0x4000 || max > rax_1)
            {
                FILE* _Stream;
                _Stream = stream.rpchr;
                *_Stream[4] = stream.thousands_chr_len;
                
                if (r8 & 0x2000)
                {
                    int64_t r9_1;
                    r9_1 = fputc(_Character, _Stream);
                    rax_1 = var_54;
                }
                else
                {
                    *(_Stream + var_54) = _Character_1;
                    rax_1 = var_54;
                }
            }
            
            var_54 = rax_1 + 1;
        }
        else
        {
            char rax_4 = *rbx_1;
            stream.thousands_chr = rdi_1;
            stream.count = 0xffffffff;
            stream.quota = 0xffffffff;
            
            if (!rax_4)
                break;
            
            void* rsi_1 = rbx_1;
            int* r10_1 = &stream.count;
            int32_t r15_1 = 0;
            int32_t r14_1 = 0;
            
            while (true)
            {
                int32_t rcx = rax_4;
                int32_t rax_15;
                uint64_t* rcx_3;
                double rdx_8;
                double rdx_11;
                int80_t* rdx_13;
                void* argv_2;
                void* argv_3;
                
                if (rax_4 - 0x20 > 0x5a)
                {
                    label_140007fdb:
                    
                    if (rax_4 - 0x30 > 9 || r14_1 > 3)
                    {
                        label_1400087d5:
                        int64_t r9_29;
                        r9_29 = __pformat_putc(0x25, &stream.rpchr);
                        break;
                        break;
                    }
                    
                    if (r14_1)
                        goto label_14000877a;
                    
                    r14_1 = 1;
                    label_140007ffc:
                    
                    if (!r10_1)
                    {
                        rax_4 = *(rsi_1 + 1);
                        rsi_1 += 1;
                    }
                    else
                    {
                        uint64_t rax_6 = *r10_1;
                        
                        if (rax_6 < 0)
                        {
                            rax_4 = *(rsi_1 + 1);
                            rsi_1 += 1;
                            *r10_1 = rcx - 0x30;
                        }
                        else
                        {
                            *r10_1 = rcx + ((rax_6 * 5) << 1) - 0x30;
                            rax_4 = *(rsi_1 + 1);
                            rsi_1 += 1;
                        }
                    }
                }
                else
                    switch (rax_4)
                    {
                        case 0x20:
                        {
                            if (r14_1)
                            {
                                rax_4 = *(rsi_1 + 1);
                                rsi_1 += 1;
                            }
                            else
                            {
                                rax_4 = *(rsi_1 + 1);
                                stream.thousands_chr |= 0x40;
                                rsi_1 += 1;
                            }
                            break;
                        }
                        case 0x21:
                        case 0x22:
                        case 0x24:
                        case 0x26:
                        case 0x28:
                        case 0x29:
                        case 0x2c:
                        case 0x2f:
                        case 0x31:
                        case 0x32:
                        case 0x33:
                        case 0x34:
                        case 0x35:
                        case 0x36:
                        case 0x37:
                        case 0x38:
                        case 0x39:
                        case 0x3a:
                        case 0x3b:
                        case 0x3c:
                        case 0x3d:
                        case 0x3e:
                        case 0x3f:
                        case 0x40:
                        case 0x42:
                        case 0x44:
                        case 0x48:
                        case 0x4a:
                        case 0x4b:
                        case 0x4d:
                        case 0x4e:
                        case 0x4f:
                        case 0x50:
                        case 0x51:
                        case 0x52:
                        case 0x54:
                        case 0x55:
                        case 0x56:
                        case 0x57:
                        case 0x59:
                        case 0x5a:
                        case 0x5b:
                        case 0x5c:
                        case 0x5d:
                        case 0x5e:
                        case 0x5f:
                        case 0x60:
                        case 0x62:
                        case 0x6b:
                        case 0x71:
                        case 0x72:
                        case 0x76:
                        case 0x77:
                        case 0x79:
                        {
                            goto label_140007fdb;
                        }
                        case 0x23:
                        {
                            if (r14_1)
                            {
                                rax_4 = *(rsi_1 + 1);
                                rsi_1 += 1;
                            }
                            else
                            {
                                rax_4 = *(rsi_1 + 1);
                                stream.thousands_chr |= 0x800;
                                rsi_1 += 1;
                            }
                            break;
                        }
                        case 0x25:
                        {
                            rbx_1 = rsi_1 + 1;
                            int64_t r9_15;
                            r9_15 = __pformat_putc(0x25, &stream.rpchr);
                            break;
                            break;
                            break;
                        }
                        case 0x27:
                        {
                            if (!r14_1)
                            {
                                stream.thousands_chr |= 0x1000;
                                stream.flags = 0;
                                struct lconv* rax_23 = localeconv();
                                int32_t rax_24;
                                int64_t r9_17;
                                rax_24 = mbrtowc(&*stream.dest[6], rax_23->thousands_sep, 0x10, &stream.flags);
                                
                                if (rax_24 > 0)
                                    int16_t var_58_1 = *stream.dest[6];
                                
                                int32_t var_5c_1 = rax_24;
                            }
                            
                            rax_4 = *(rsi_1 + 1);
                            rsi_1 += 1;
                            break;
                        }
                        case 0x2a:
                        {
                            if (!r10_1)
                            {
                                label_140008521:
                                rax_4 = *(rsi_1 + 1);
                                r14_1 = 4;
                                rsi_1 += 1;
                            }
                            else if (r14_1 & 0xfffffffd)
                            {
                                rax_4 = *(rsi_1 + 1);
                                r10_1 = nullptr;
                                rsi_1 += 1;
                                r14_1 = 4;
                            }
                            else
                            {
                                int rax_25 = *argv_1;
                                *r10_1 = rax_25;
                                
                                if (rax_25 >= 0)
                                    goto label_1400084cb;
                                
                                if (r14_1)
                                {
                                    rax_4 = *(rsi_1 + 1);
                                    argv_1 = &argv_1[8];
                                    rsi_1 += 1;
                                    r10_1 = nullptr;
                                    stream.quota = 0xffffffff;
                                    r14_1 = 2;
                                }
                                else
                                {
                                    stream.thousands_chr |= 0x400;
                                    stream.count = -(stream.count);
                                    label_1400084cb:
                                    rax_4 = *(rsi_1 + 1);
                                    argv_1 = &argv_1[8];
                                    rsi_1 += 1;
                                    r10_1 = nullptr;
                                }
                            }
                            break;
                        }
                        case 0x2b:
                        {
                            if (r14_1)
                            {
                                rax_4 = *(rsi_1 + 1);
                                rsi_1 += 1;
                            }
                            else
                            {
                                rax_4 = *(rsi_1 + 1);
                                stream.thousands_chr |= 0x100;
                                rsi_1 += 1;
                            }
                            break;
                        }
                        case 0x2d:
                        {
                            if (r14_1)
                            {
                                rax_4 = *(rsi_1 + 1);
                                rsi_1 += 1;
                            }
                            else
                            {
                                rax_4 = *(rsi_1 + 1);
                                stream.thousands_chr |= 0x400;
                                rsi_1 += 1;
                            }
                            break;
                        }
                        case 0x2e:
                        {
                            if (r14_1 > 1)
                                goto label_140008521;
                            
                            rax_4 = *(rsi_1 + 1);
                            r14_1 = 2;
                            rsi_1 += 1;
                            stream.quota = 0;
                            r10_1 = &stream.quota;
                            break;
                        }
                        case 0x30:
                        {
                            if (r14_1)
                            {
                                if (r14_1 > 3)
                                    goto label_1400087d5;
                                
                                rcx = 0x30;
                                label_14000877a:
                                
                                if (r14_1 != 2)
                                    goto label_140007ffc;
                                
                                r14_1 = 3;
                                goto label_140007ffc;
                            }
                            
                            rax_4 = *(rsi_1 + 1);
                            stream.thousands_chr |= 0x200;
                            rsi_1 += 1;
                            break;
                        }
                        case 0x41:
                        {
                            rax_15 = stream.thousands_chr;
                            rcx_3 = *argv_1;
                            argv_1 = &argv_1[8];
                            
                            if (rax_15 & 4)
                                goto label_1400081ed;
                            
                            goto label_140008572;
                        }
                        case 0x43:
                        {
                            stream.quota = 0xffffffff;
                            argv_3 = &argv_1[8];
                            label_140008610:
                            int16_t rax_30 = *argv_1;
                            argv_1 = argv_3;
                            rbx_1 = rsi_1 + 1;
                            stream.flags = rax_30;
                            int64_t r9_22;
                            r9_22 = __pformat_wputchars(&stream.flags, 1, &stream.rpchr);
                            break;
                            break;
                            break;
                        }
                        case 0x45:
                        {
                            rdx_8 = *argv_1;
                            argv_1 = &argv_1[8];
                            
                            if (stream.thousands_chr & 4)
                                goto label_1400082f3;
                            
                            goto label_14000865a;
                        }
                        case 0x46:
                        {
                            rdx_11 = *argv_1;
                            argv_1 = &argv_1[8];
                            
                            if (stream.thousands_chr & 4)
                                goto label_140008389;
                            
                            goto label_140008692;
                        }
                        case 0x47:
                        {
                            rdx_13 = *argv_1;
                            argv_1 = &argv_1[8];
                            
                            if (stream.thousands_chr & 4)
                                goto label_1400083c1;
                            
                            goto label_1400086ca;
                        }
                        case 0x49:
                        {
                            rax_4 = *(rsi_1 + 1);
                            
                            if (rax_4 == 0x36)
                            {
                                if (*(rsi_1 + 2) != 0x34)
                                    goto label_1400087d5;
                                
                                rax_4 = *(rsi_1 + 3);
                                r15_1 = 3;
                                rsi_1 += 3;
                                r14_1 = 4;
                            }
                            else if (rax_4 == 0x33)
                            {
                                if (*(rsi_1 + 2) != 0x32)
                                    goto label_1400087d5;
                                
                                rax_4 = *(rsi_1 + 3);
                                r15_1 = 2;
                                rsi_1 += 3;
                                r14_1 = 4;
                            }
                            else
                            {
                                rsi_1 += 1;
                                r15_1 = 3;
                                r14_1 = 4;
                            }
                            break;
                        }
                        case 0x4c:
                        {
                            rax_4 = *(rsi_1 + 1);
                            stream.thousands_chr |= 4;
                            rsi_1 += 1;
                            r14_1 = 4;
                            break;
                        }
                        case 0x53:
                        {
                            argv_2 = &argv_1[8];
                            label_140008729:
                            short unsigned int* r12 = *argv_1;
                            
                            if (!r12)
                                r12 = u"(null)";
                            
                            int quota = stream.quota;
                            int count;
                            
                            if (quota < 0)
                                count = wcslen(r12);
                            else
                                count = wcsnlen(r12, quota);
                            
                            argv_1 = argv_2;
                            int64_t r9_27;
                            r9_27 = __pformat_wputchars(r12, count, &stream.rpchr);
                            goto label_140008767;
                        }
                        case 0x58:
                        case 0x6f:
                        case 0x75:
                        case 0x78:
                        {
                            stream.thousands_chr &= 0xfffffeff;
                            uint64_t value_2;
                            
                            if (r15_1 == 3)
                            {
                                value_2 = *argv_1;
                                stream.flags = value_2;
                                stream.width = *value_2[4];
                            }
                            else
                            {
                                value_2 = *argv_1;
                                
                                if (r15_1 == 2)
                                {
                                    stream.flags = value_2;
                                    stream.width = *value_2[4];
                                }
                                else if (r15_1 == 1)
                                {
                                    value_2 = value_2;
                                    stream.flags = value_2;
                                    stream.width = *value_2[4];
                                }
                                else
                                {
                                    if (r15_1 == 5)
                                        value_2 = value_2;
                                    
                                    stream.flags = value_2;
                                    stream.width = *value_2[4];
                                }
                            }
                            
                            if (rcx == 0x75)
                            {
                                argv_1 = &argv_1[8];
                                rbx_1 = rsi_1 + 1;
                                int64_t r9_30;
                                r9_30 = __pformat_int(value_2);
                            }
                            else
                            {
                                argv_1 = &argv_1[8];
                                rbx_1 = rsi_1 + 1;
                                int64_t r9_2;
                                r9_2 = __pformat_xint();
                            }
                            
                            break;
                            break;
                            break;
                        }
                        case 0x61:
                        {
                            rcx_3 = *argv_1;
                            argv_1 = &argv_1[8];
                            rax_15 = stream.thousands_chr | 0x20;
                            stream.thousands_chr = rax_15;
                            int64_t r9_26;
                            
                            if (rax_15 & 4)
                            {
                                label_1400081ed:
                                int16_t rbx_4 = rcx_3[1];
                                uint64_t value = *rcx_3;
                                int32_t r10_2 = rbx_4;
                                int32_t r9_9 = (value >> 0x20 & 0x7fffffff) | value;
                                
                                if ((0xfffe - ((-(r9_9) | r9_9) >> 0x1f | (r10_2 * 2))) >> 0x10)
                                    goto label_140008795;
                                
                                if (rbx_4 < 0)
                                {
                                    rax_15 |= 0x80;
                                    stream.thousands_chr = rax_15;
                                }
                                
                                int16_t rdx_7 = rbx_4 & 0x7fff;
                                
                                if (!rdx_7)
                                {
                                    r9_26 = __pformat_emit_xfloat(value);
                                    goto label_140008767;
                                }
                                
                                if (rdx_7 != 0x7fff || r9_9)
                                {
                                    r9_26 = __pformat_emit_xfloat(value);
                                    goto label_140008767;
                                }
                                
                                int64_t r9_31;
                                r9_31 = __pformat_emit_inf_or_nan(r10_2 & 0x8000, "Inf", &stream.rpchr);
                                goto label_140008767;
                            }
                            
                            label_140008572:
                            uint32_t r8_9 = rcx_3 >> 0x20;
                            double var_c8_2;
                            var_c8_2 = rcx_3;
                            
                            if (0x7ff00000 - ((-(rcx_3) | rcx_3) >> 0x1f | (r8_9 & 0x7fffffff)) < 0)
                            {
                                label_140008795:
                                int64_t r9_28;
                                r9_28 = __pformat_emit_inf_or_nan(0, "NaN", &stream.rpchr);
                                label_140008767:
                                rbx_1 = rsi_1 + 1;
                                break;
                                break;
                            }
                            
                            int32_t var_c0;
                            
                            if (var_c0 < 0)
                            {
                                rax_15 |= 0x80;
                                stream.thousands_chr = rax_15;
                            }
                            
                            int32_t r8_10 = r8_9 & 0x7ff00000;
                            int32_t rax_28 = (r8_9 & 0xfffff) | rcx_3;
                            rcx_3 = rax_28;
                            rcx_3 |= r8_10 != 0x7ff00000;
                            
                            if (!rcx_3 && rax_28 | r8_10)
                            {
                                int64_t r9_21;
                                r9_21 = __pformat_emit_inf_or_nan(var_c0 & 0x8000, "Inf", &stream.rpchr);
                                goto label_140008767;
                            }
                            
                            double rax_34 = var_c8_2;
                            int32_t rdx_24;
                            rdx_24 = var_c0 & 0x7fff;
                            
                            if (!rdx_24)
                                label_14000880c:
                            else if (rdx_24 > 0x3c00)
                            {
                                if (!rdx_24)
                                    goto label_14000880c;
                                
                                rdx_24 -= 0x3ffc;
                            }
                            else
                            {
                                rax_34 u>>= (0x3c01 - rdx_24);
                                rdx_24 = (rdx_24 + 0x3c01 - rdx_24) - 0x3ffc;
                            }
                            
                            r9_26 = __pformat_emit_xfloat(rax_34 >> 3);
                            goto label_140008767;
                        }
                        case 0x63:
                        {
                            argv_3 = &argv_1[8];
                            stream.quota = 0xffffffff;
                            
                            if (r15_1 - 2 <= 1)
                                goto label_140008610;
                            
                            stream.flags = *argv_1;
                            argv_1 = argv_3;
                            rbx_1 = rsi_1 + 1;
                            int64_t r9_5;
                            r9_5 = __pformat_putchars(&stream.flags, 1, &stream.rpchr);
                            break;
                            break;
                        }
                        case 0x64:
                        case 0x69:
                        {
                            stream.thousands_chr |= 0x80;
                            int64_t rcx_1;
                            
                            if (r15_1 == 3)
                            {
                                rcx_1 = *argv_1;
                                stream.flags = rcx_1;
                                stream.width = *rcx_1[4];
                            }
                            else
                            {
                                rcx_1 = *argv_1;
                                
                                if (r15_1 == 2)
                                {
                                    stream.flags = rcx_1;
                                    stream.width = *rcx_1[4];
                                }
                                else if (r15_1 == 1)
                                {
                                    rcx_1 = rcx_1;
                                    stream.flags = rcx_1;
                                    stream.width = *rcx_1[4];
                                }
                                else
                                {
                                    if (r15_1 == 5)
                                        rcx_1 = rcx_1;
                                    
                                    stream.flags = rcx_1;
                                    stream.width = *rcx_1[4];
                                }
                            }
                            
                            argv_1 = &argv_1[8];
                            rbx_1 = rsi_1 + 1;
                            int64_t rax_11 = rcx_1 >> 0x3f;
                            stream.precision = rax_11;
                            stream.rplen = *rax_11[4];
                            int64_t r9_3;
                            r9_3 = __pformat_int();
                            break;
                            break;
                            break;
                        }
                        case 0x65:
                        {
                            rdx_8 = *argv_1;
                            argv_1 = &argv_1[8];
                            int32_t rax_17 = stream.thousands_chr | 0x20;
                            stream.thousands_chr = rax_17;
                            
                            if (rax_17 & 4)
                            {
                                label_1400082f3:
                                rbx_1 = rsi_1 + 1;
                                int80_t var_a8_1 = *rdx_8;
                                int64_t r9_11;
                                r9_11 = __pformat_efloat(x, &stream.rpchr);
                                break;
                                break;
                            }
                            
                            label_14000865a:
                            rbx_1 = rsi_1 + 1;
                            long double var_a8_4 = rdx_8;
                            int64_t r9_23;
                            r9_23 = __pformat_efloat(x, &stream.rpchr);
                            break;
                            break;
                            break;
                        }
                        case 0x66:
                        {
                            rdx_11 = *argv_1;
                            argv_1 = &argv_1[8];
                            int32_t rax_20 = stream.thousands_chr | 0x20;
                            stream.thousands_chr = rax_20;
                            
                            if (rax_20 & 4)
                            {
                                label_140008389:
                                rbx_1 = rsi_1 + 1;
                                int80_t var_a8_2 = *rdx_11;
                                int64_t r9_13;
                                r9_13 = __pformat_float(x, &stream.rpchr);
                                break;
                                break;
                            }
                            
                            label_140008692:
                            rbx_1 = rsi_1 + 1;
                            long double var_a8_5 = rdx_11;
                            int64_t r9_24;
                            r9_24 = __pformat_float(x, &stream.rpchr);
                            break;
                            break;
                            break;
                        }
                        case 0x67:
                        {
                            rdx_13 = *argv_1;
                            argv_1 = &argv_1[8];
                            int32_t rax_22 = stream.thousands_chr | 0x20;
                            stream.thousands_chr = rax_22;
                            
                            if (rax_22 & 4)
                            {
                                label_1400083c1:
                                rbx_1 = rsi_1 + 1;
                                int80_t var_a8_3 = *rdx_13;
                                int64_t r9_14;
                                r9_14 = __pformat_gfloat(x, &stream.rpchr);
                                break;
                                break;
                            }
                            
                            label_1400086ca:
                            rbx_1 = rsi_1 + 1;
                            long double var_a8_6 = rdx_13;
                            int64_t r9_25;
                            r9_25 = __pformat_gfloat(x, &stream.rpchr);
                            break;
                            break;
                            break;
                        }
                        case 0x68:
                        {
                            rax_4 = *(rsi_1 + 1);
                            
                            if (rax_4 == 0x68)
                            {
                                rax_4 = *(rsi_1 + 2);
                                r15_1 = 5;
                                rsi_1 += 2;
                                r14_1 = 4;
                            }
                            else
                            {
                                rsi_1 += 1;
                                r15_1 = 1;
                                r14_1 = 4;
                            }
                            break;
                        }
                        case 0x6a:
                        case 0x74:
                        case 0x7a:
                        {
                            rax_4 = *(rsi_1 + 1);
                            r15_1 = 3;
                            rsi_1 += 1;
                            r14_1 = 4;
                            break;
                        }
                        case 0x6c:
                        {
                            rax_4 = *(rsi_1 + 1);
                            
                            if (rax_4 == 0x6c)
                            {
                                rax_4 = *(rsi_1 + 2);
                                r15_1 = 3;
                                rsi_1 += 2;
                                r14_1 = 4;
                            }
                            else
                            {
                                rsi_1 += 1;
                                r15_1 = 2;
                                r14_1 = 4;
                            }
                            break;
                        }
                        case 0x6d:
                        {
                            rbx_1 = rsi_1 + 1;
                            int64_t r9_12;
                            r9_12 = __pformat_puts(strerror(_ErrorMessage), &stream.rpchr);
                            break;
                            break;
                            break;
                        }
                        case 0x6e:
                        {
                            int64_t* rdx_6 = *argv_1;
                            int64_t rax_13 = var_54;
                            argv_1 = &argv_1[8];
                            
                            if (r15_1 == 5)
                            {
                                *rdx_6 = rax_13;
                                goto label_140008767;
                            }
                            
                            if (r15_1 == 1)
                            {
                                *rdx_6 = rax_13;
                                rbx_1 = rsi_1 + 1;
                            }
                            else if (r15_1 == 2 || r15_1 != 3)
                            {
                                *rdx_6 = rax_13;
                                rbx_1 = rsi_1 + 1;
                            }
                            else
                            {
                                *rdx_6 = rax_13;
                                rbx_1 = rsi_1 + 1;
                            }
                            
                            break;
                            break;
                        }
                        case 0x70:
                        {
                            if (!r14_1 && stream.thousands_chr == rdi_1)
                            {
                                stream.quota = 0x10;
                                int32_t rax_36;
                                *rax_36[1] = *rdi_1[1] | 2;
                                stream.thousands_chr = rax_36;
                            }
                            
                            int64_t value_1 = *argv_1;
                            stream.precision = 0;
                            stream.rplen = 0;
                            argv_1 = &argv_1[8];
                            rbx_1 = rsi_1 + 1;
                            stream.flags = value_1;
                            stream.width = *value_1[4];
                            int64_t r9_10;
                            r9_10 = __pformat_xint(0x78, value_1);
                            break;
                            break;
                            break;
                        }
                        case 0x73:
                        {
                            char* s = *argv_1;
                            argv_2 = &argv_1[8];
                            
                            if (r15_1 - 2 <= 1)
                                goto label_140008729;
                            
                            argv_1 = argv_2;
                            rbx_1 = rsi_1 + 1;
                            int64_t r9_4;
                            r9_4 = __pformat_puts(s, &stream.rpchr);
                            break;
                            break;
                        }
                    }
                
                if (!rax_4)
                    return var_54;
            }
        }
        
        _Character_1 = *rbx_1;
        rbx_1 += 1;
        _Character = _Character_1;
    } while (_Character);
    
    return var_54;
}

void* __rv_alloc_D2A(int i)
{
    int k = 0;
    
    if (i > 0x1b)
    {
        int32_t rax_1 = 4;
        
        do
        {
            rax_1 *= 2;
            k += 1;
        } while (rax_1 + 0x17 < i);
    }
    
    int64_t* rax_2 = __Balloc_D2A(k);
    *rax_2 = k;
    return rax_2 + 4;
}

void* __nrv_alloc_D2A(char* s, char** rve, int n)
{
    int k;
    
    if (n <= 0x1b)
        k = 0;
    else
    {
        int32_t rax_1 = 4;
        k = 0;
        
        do
        {
            rax_1 *= 2;
            k += 1;
        } while (n > rax_1 + 0x17);
    }
    
    int64_t* rax_2 = __Balloc_D2A(k);
    char* rdx_1 = &s[1];
    *rax_2 = k;
    char rcx_1 = *s;
    *(rax_2 + 4) = rcx_1;
    char* rax_3 = rax_2 + 4;
    
    if (rcx_1)
    {
        char i;
        
        do
        {
            i = *rdx_1;
            rax_3 = &rax_3[1];
            rdx_1 = &rdx_1[1];
            *rax_3 = i;
        } while (i);
    }
    
    if (rve)
        *rve = rax_3;
    
    return rax_2 + 4;
}

int64_t __freedtoa(char* s)
{
    int32_t rcx = *(s - 4);
    *(s + 4) = rcx;
    *(s + 8) = 1 << rcx;
    /* tailcall */
    return __Bfree_D2A(&s[-4]);
}

uint32_t __quorem_D2A(struct __Bigint* b, struct __Bigint* S)
{
    int wds = S->wds;
    
    if (b->wds < wds)
        return 0;
    
    int rsi = wds - 1;
    long unsigned int (* rbx_1)[0x1] = &S->x;
    void* rdi_1 = &rbx_1[rsi];
    void* r10_3 = &(&b->x)[rsi];
    int32_t r8_1 = *r10_3;
    int32_t rcx = *rdi_1 + 1;
    uint32_t result_1 = COMBINE(0, r8_1) / rcx;
    uint32_t result = result_1;
    
    if (r8_1 >= rcx)
    {
        long unsigned int (* r9_1)[0x1] = rbx_1;
        long unsigned int (* r8_2)[0x1] = &b->x;
        uint64_t r14_1 = 0;
        uint64_t rdx_1 = 0;
        
        do
        {
            uint64_t x = ADJ(r9_1)->x;
            uint64_t x_1 = ADJ(r8_2)->x;
            r9_1 = &r9_1[1];
            r8_2 = &r8_2[1];
            int64_t rax_5 = x * result_1 + r14_1;
            r14_1 = rax_5 >> 0x20;
            uint64_t rcx_1 = x_1 - (rax_5 + rdx_1);
            ADJ(r8_2)->wds = rcx_1;
            rdx_1 = rcx_1 >> 0x20 & 1;
        } while (rdi_1 >= r9_1);
    }
    
    if (r8_1 >= rcx && !*r10_3)
    {
        while (true)
        {
            r10_3 -= 4;
            
            if (&b->x >= r10_3)
                break;
            
            if (*r10_3)
                break;
            
            rsi -= 1;
        }
        
        b->wds = rsi;
        
        if (__cmp_D2A(b, S) >= 0)
            goto label_140008b46;
    }
    else if (__cmp_D2A(b, S) >= 0)
    {
        label_140008b46:
        long unsigned int (* r8_3)[0x1] = &b->x;
        result = result_1 + 1;
        uint64_t rax_10 = 0;
        
        do
        {
            uint64_t x_2 = ADJ(rbx_1)->x;
            uint64_t x_3 = ADJ(r8_3)->x;
            rbx_1 = &rbx_1[1];
            r8_3 = &r8_3[1];
            uint64_t rdx_5 = x_3 - (rax_10 + x_2);
            ADJ(r8_3)->wds = rdx_5;
            rax_10 = rdx_5 >> 0x20 & 1;
        } while (rdi_1 >= rbx_1);
        
        void* rax_15 = &(&b->x)[rsi];
        
        if (!*rax_15)
        {
            while (true)
            {
                rax_15 -= 4;
                
                if (&b->x >= rax_15)
                    break;
                
                if (*rax_15)
                    break;
                
                rsi -= 1;
            }
            
            b->wds = rsi;
        }
    }
    
    return result;
}

char* __gdtoa(struct FPI const* fpi, int be, long unsigned int* bits, int* kindp, int mode, int ndigits, int* decpt, char** rve)
{
    int128_t zmm6;
    int128_t var_58 = zmm6;
    int rsi = *kindp;
    int mode_1 = mode;
    int* kindp_1 = kindp;
    int ndigits_1 = ndigits;
    *kindp = rsi & 0xffffffcf;
    int32_t rax_7 = rsi & 7;
    char* rcx;
    char** rve_1;
    int r8;
    
    if (rax_7 == 3)
    {
        rve_1 = rve;
        r8 = 8;
        rcx = "Infinity";
        *decpt = 0xffff8000;
    }
    else
    {
        uint32_t rdi_2 = rsi & 4;
        uint32_t var_b0_1 = rdi_2;
        
        if (!rdi_2)
        {
            if (!rax_7)
            {
                *decpt = 1;
                return __nrv_alloc_D2A(U"0", rve, 1);
            }
            
            char* result = nullptr;
            
            if (rax_7 - 1 <= 1)
            {
                int nbits = fpi->nbits;
                int32_t rax_12 = 0x20;
                int k_2 = 0;
                
                if (nbits > 0x20)
                {
                    do
                    {
                        rax_12 *= 2;
                        k_2 += 1;
                    } while (nbits > rax_12);
                }
                
                int64_t* r13_1 = __Balloc_D2A(k_2);
                long unsigned int* bits_1 = bits;
                void* rdx_1 = &r13_1[3];
                int64_t r8_5 = (nbits - 1) >> 5 << 2;
                void* rcx_2 = bits_1 + r8_5;
                
                do
                {
                    long unsigned int r9_1 = *bits_1;
                    bits_1 = &bits_1[1];
                    rdx_1 += 4;
                    *(rdx_1 - 4) = r9_1;
                } while (rcx_2 >= bits_1);
                
                int64_t rax_14 = r8_5 + 4;
                
                if (rcx_2 + 1 < bits + 1)
                    rax_14 = 4;
                
                int64_t rax_15 = rax_14 >> 2;
                int32_t rbp_1 = rax_15;
                void* rax_16 = r13_1 + (rax_15 << 2);
                
                while (true)
                {
                    int32_t rdx_3 = rbp_1;
                    rbp_1 -= 1;
                    
                    if (*(rax_16 + 0x14))
                    {
                        *(r13_1 + 0x14) = rdx_3;
                        uint64_t rflags_1;
                        int32_t temp0_1;
                        temp0_1 = __bsr_gprv_memv(*(r13_1 + (rbp_1 << 2) + 0x18));
                        rbp_1 = (rdx_3 << 5) - (temp0_1 ^ 0x1f);
                        break;
                    }
                    
                    rax_16 -= 4;
                    
                    if (!rbp_1)
                    {
                        *(r13_1 + 0x14) = 0;
                        break;
                    }
                }
                
                int32_t k_1 = __trailz_D2A(r13_1);
                int32_t e = k_1;
                int be_1 = be;
                
                if (k_1)
                {
                    __rshift_D2A(r13_1, k_1);
                    be_1 = be + e;
                    rbp_1 -= e;
                }
                
                if (!*(r13_1 + 0x14))
                {
                    __Bfree_D2A(r13_1);
                    *decpt = 1;
                    return __nrv_alloc_D2A(U"0", rve, 1);
                }
                
                double zmm0_2 = __b2d_D2A(r13_1, &e);
                int32_t r8_6 = be_1 + rbp_1;
                uint64_t rcx_9 = (zmm0_2 >> 0x20 & 0xfffff) | 0x3ff00000;
                uint128_t zmm1;
                zmm1 = r8_6 - 1;
                zmm1 = zmm1 * 0.30102999566398098;
                uint64_t rax_21 = zmm0_2 | rcx_9 << 0x20;
                int32_t r10_6 = -((r8_6 - 1));
                
                if (r10_6 < 0)
                    r10_6 = r8_6 - 1;
                
                zmm0_2 = (rax_21 - 1.5) * 0.28952965460216801 + 0.1760912590558 + zmm1;
                
                if (r10_6 - 0x435 > 0)
                {
                    zmm1 = r10_6 - 0x435;
                    zmm1 = zmm1 * 7.0000000000000003e-17;
                    zmm0_2 = zmm0_2 + zmm1;
                }
                
                int32_t k_10 = zmm0_2;
                
                if (0.0 > zmm0_2)
                {
                    zmm1 = k_10;
                    zmm1 - zmm0_2;
                    
                    if (FCMP_UO(zmm1, zmm0_2) || !(zmm1 == zmm0_2))
                        k_10 -= 1;
                }
                
                uint64_t rax_23 = rax_21 | (rcx_9 + ((r8_6 - 1) << 0x14)) << 0x20;
                void var_78;
                var_78 = rax_23;
                int32_t rax_25 = rbp_1 - (r8_6 - 1);
                int32_t e_14 = rax_25 - 1;
                int32_t e_13;
                int32_t k_11;
                int32_t k;
                int32_t var_7c_1;
                
                if (k_10 > 0x16)
                {
                    var_7c_1 = 1;
                    label_140008f88:
                    e_13 = 0;
                    
                    if (e_14 < 0)
                    {
                        label_140009595:
                        e_14 = 0;
                        e_13 = 1 - rax_25;
                    }
                    
                    if (k_10 >= 0)
                        goto label_140009231;
                    
                    e_13 -= k_10;
                    int32_t k_8 = -(k_10);
                    k_11 = k_10;
                    k_10 = 0;
                    k = k_8;
                }
                else
                {
                    if (!(__tens_D2A[k_10] <= rax_23))
                    {
                        var_7c_1 = 0;
                        k_10 -= 1;
                        goto label_140008f88;
                    }
                    
                    var_7c_1 = 0;
                    e_13 = 0;
                    
                    if (e_14 < 0)
                        goto label_140009595;
                    
                    label_140009231:
                    k_11 = k_10;
                    e_14 += k_10;
                    k = 0;
                }
                
                int32_t k_12;
                char* result_2;
                int32_t i_1;
                int32_t var_90_1;
                uint32_t var_88_2;
                int32_t i_4;
                char i_3;
                int k_5;
                struct __Bigint* b_9;
                int32_t e_11;
                int32_t k_14;
                int32_t e_12;
                int32_t k_9;
                struct __Bigint* r12_2;
                uint128_t zmm0_3;
                uint128_t zmm2;
                
                if (mode_1 > 9)
                {
                    mode_1 = 0;
                    label_14000927a:
                    e = nbits * 0.30103000000000002 + 3;
                    k_9 = k_10;
                    e_12 = e_14;
                    result = __rv_alloc_D2A(nbits * 0.30103000000000002 + 3);
                    int32_t e_2;
                    int emin;
                    
                    if (be_1 < 0)
                    {
                        int32_t r12_3 = nbits - rbp_1;
                        emin = fpi->emin;
                        ndigits_1 = 0;
                        e_2 = r12_3 + 1;
                        var_88_2 = 0;
                        e = e_2;
                        i_1 = 0xffffffff;
                        i_4 = 0xffffffff;
                        
                        if (be_1 - r12_3 < emin)
                        {
                            if (!((mode_1 - 3) & 0xfffffffd))
                            {
                                label_140009be0:
                                
                                if (mode_1 <= 1)
                                    goto label_140009331;
                            }
                            else
                            {
                                label_140009308:
                                e_2 = be_1 - emin + 1;
                                int32_t rcx_23;
                                rcx_23 = mode_1 > 1;
                                e = e_2;
                                emin = i_1 > 0;
                                
                                if (!(rcx_23 & emin) || e_2 <= i_1)
                                    goto label_140009331;
                            }
                            
                            if (k < i_1 - 1)
                            {
                                int32_t rdx_49 = i_1 - 1 - k;
                                k_5 = 0;
                                k = i_1 - 1;
                                k_9 += rdx_49;
                            }
                            else
                                k_5 = k - (i_1 - 1);
                            
                            if (i_1 < 0)
                            {
                                e = 0;
                                e_11 = e_13 - i_1;
                                goto label_140009345;
                            }
                            
                            e = i_1;
                            e_12 += i_1;
                            e_11 = e_13;
                            e_13 += i_1;
                            goto label_140009345;
                        }
                        
                        label_140009331:
                        e_12 += e_2;
                        k_5 = k;
                        e_11 = e_13;
                        e_13 += e_2;
                        label_140009345:
                        var_78 = e_12;
                        var_90_1 = 1;
                        e_12 = var_78;
                        r12_2 = __i2b_D2A(1);
                        label_140009376:
                        
                        if (e_11 > 0 && e_12 > 0)
                        {
                            int32_t e_3 = e_12;
                            
                            if (e_11 <= e_12)
                                e_3 = e_11;
                            
                            e_13 -= e_3;
                            e = e_3;
                            e_11 -= e_3;
                            e_12 -= e_3;
                        }
                        
                        if (k)
                        {
                            if (!var_90_1)
                            {
                                var_78 = e_12;
                                e_12 = var_78;
                                r13_1 = __pow5mult_D2A(r13_1, k);
                            }
                            else
                            {
                                if (k_5 > 0)
                                {
                                    var_78 = k_9;
                                    struct __Bigint* a = __pow5mult_D2A(r12_2, k_5);
                                    r12_2 = a;
                                    be_1 = __mult_D2A(a, r13_1);
                                    __Bfree_D2A(r13_1);
                                    r13_1 = be_1;
                                    k_9 = var_78;
                                }
                                
                                if (k != k_5)
                                    r13_1 = __pow5mult_D2A(r13_1, k - k_5);
                            }
                        }
                        
                        int32_t k_7 = k_9;
                        int32_t e_15 = e_12;
                        b_9 = __i2b_D2A(1);
                        struct __Bigint* rax_56;
                        rax_56 = mode_1 <= 1;
                        bool rdx_24 = rbp_1 == 1 & rax_56;
                        int32_t var_a0_2;
                        
                        if (k_7 <= 0)
                        {
                            var_a0_2 = 0;
                            
                            if (rdx_24 && fpi->emin + 1 < be)
                                goto label_14000a08b;
                            
                            goto label_14000944b;
                        }
                        
                        struct __Bigint* b_10 = __pow5mult_D2A(b_9, k_7);
                        k_7 = k_9;
                        e_15 = e_12;
                        b_9 = b_10;
                        int32_t rbx_1;
                        uint64_t rflags_2;
                        int32_t temp0_4;
                        
                        if (rdx_24 && be > fpi->emin + 1)
                        {
                            label_14000a08b:
                            e_13 += 1;
                            e_15 += 1;
                            var_a0_2 = 1;
                            label_14000944b:
                            rbx_1 = 0x1f;
                            
                            if (k_7)
                            {
                                temp0_4 = __bsr_gprv_memv((&b_9->x)[b_9->wds - 1]);
                                rbx_1 = temp0_4 ^ 0x1f;
                            }
                        }
                        else
                        {
                            var_a0_2 = 0;
                            temp0_4 = __bsr_gprv_memv((&b_9->x)[b_9->wds - 1]);
                            rbx_1 = temp0_4 ^ 0x1f;
                        }
                        int32_t e_10 = (rbx_1 - e_15 - 4) & 0x1f;
                        int k_6 = e_13 + e_10;
                        e = e_10;
                        int32_t e_6 = e_10;
                        
                        if (k_6 > 0)
                        {
                            int64_t* rax_57 = __lshift_D2A(r13_1, k_6);
                            e_6 = e;
                            r13_1 = rax_57;
                        }
                        
                        int k_3 = e_6 + e_15;
                        
                        if (k_3 > 0)
                            b_9 = __lshift_D2A(b_9, k_3);
                        
                        bool rbp_3 = mode_1 > 2;
                        
                        if (!var_7c_1)
                        {
                            label_1400094c2:
                            
                            if (i_1 <= 0 && rbp_3)
                                goto label_1400094d7;
                            
                            k_12 = k_11 + 1;
                            
                            if (!var_90_1)
                                goto label_140009b24;
                            
                            goto label_140009797;
                        }
                        
                        if (__cmp_D2A(r13_1, b_9) >= 0)
                            goto label_1400094c2;
                        
                        r13_1 = __multadd_D2A(r13_1, 0xa, 0);
                        int32_t rax_106;
                        rax_106 = i_4 <= 0;
                        char rbp_5 = rbp_3 & rax_106;
                        int32_t var_d8;
                        char rdx_42;
                        struct __Bigint* r8_11;
                        
                        if (var_90_1)
                        {
                            r12_2 = __multadd_D2A(r12_2, 0xa, 0);
                            
                            if (rbp_5)
                            {
                                label_14000a1c7:
                                k_11 -= 1;
                                i_1 = i_4;
                                label_1400094d7:
                                
                                if (i_1)
                                    goto label_1400099c9;
                                
                                struct __Bigint* b = __multadd_D2A(b_9, 5, 0);
                                b_9 = b;
                                
                                if (__cmp_D2A(r13_1, b) <= 0)
                                    goto label_1400099c9;
                                
                                k_12 = k_11 + 2;
                                goto label_140009510;
                            }
                            
                            k_12 = k_11;
                            i_1 = i_4;
                            label_140009797:
                            int k_4 = e_10 + e_11;
                            
                            if (k_4 > 0)
                                r12_2 = __lshift_D2A(r12_2, k_4);
                            
                            struct __Bigint* b_7 = r12_2;
                            
                            if (var_a0_2)
                            {
                                struct __Bigint* b_2 = __Balloc_D2A(r12_2->k);
                                memcpy(&b_2->sign, &r12_2->sign, (r12_2->wds << 2) + 8);
                                b_7 = __lshift_D2A(b_2, 1);
                            }
                            
                            var_90_1 = kindp_1;
                            int32_t e_4 = 1;
                            struct __Bigint* b_3 = b_7;
                            char* result_1 = result;
                            e_13 = result;
                            
                            while (true)
                            {
                                e = e_4;
                                uint32_t rax_83 = __quorem_D2A(r13_1, b_9);
                                int rax_84 = __cmp_D2A(r13_1, r12_2);
                                int64_t* rax_85 = __diff_D2A(b_9, b_3);
                                char* result_3;
                                int rdx_32;
                                struct __Bigint* b_8;
                                
                                if (rax_85[2])
                                {
                                    __Bfree_D2A(rax_85);
                                    rdx_32 = 1;
                                }
                                else
                                {
                                    var_a0_2 = rax_85;
                                    int rax_86 = __cmp_D2A(r13_1, rax_85);
                                    __Bfree_D2A(var_a0_2);
                                    rdx_32 = rax_86 | mode_1;
                                    
                                    if (rdx_32)
                                        rdx_32 = rax_86;
                                    else
                                    {
                                        long unsigned int rax_88 = *bits;
                                        long unsigned int var_a8_2 = rax_88;
                                        
                                        if (!((rax_88 & 1) | var_88_2))
                                        {
                                            var_d8 = rax_83 + 0x30;
                                            result = e_13;
                                            result_3 = result_1;
                                            b_8 = b_3;
                                            kindp_1 = var_90_1;
                                            
                                            if (rax_83 == 9)
                                                goto label_14000a1a4;
                                            
                                            if (rax_84 <= 0)
                                            {
                                                var_b0_1 = 0x10;
                                                
                                                if (*(r13_1 + 0x14) <= 1)
                                                {
                                                    int32_t rax_161;
                                                    rax_161 = r13_1[3];
                                                    var_b0_1 = rax_161 << 4;
                                                }
                                            }
                                            else
                                            {
                                                var_b0_1 = 0x20;
                                                var_d8 = rax_83 + 0x31;
                                            }
                                            
                                            r8_11 = r12_2;
                                            r12_2 = b_8;
                                            *result_3 = var_d8;
                                            result_2 = &result_3[1];
                                            goto label_140009953;
                                        }
                                    }
                                }
                                
                                void* result_4;
                                
                                if (rax_84 < 0 || (!(rax_84 | mode_1) && !(*bits & 1)))
                                {
                                    var_d8 = rax_83 + 0x30;
                                    result_3 = result_1;
                                    result = e_13;
                                    b_8 = b_3;
                                    kindp_1 = var_90_1;
                                    
                                    if (!var_88_2)
                                    {
                                        if (rdx_32 <= 0)
                                            goto label_14000a178;
                                        
                                        label_14000a147:
                                        struct __Bigint* a_2 = __lshift_D2A(r13_1, 1);
                                        r13_1 = a_2;
                                        int rax_145 = __cmp_D2A(a_2, b_9);
                                        
                                        if (rax_145 <= 0 && (rax_145 || !(var_d8 & 1)))
                                        {
                                            var_88_2 = 0x20;
                                            label_14000a178:
                                            
                                            if (*(r13_1 + 0x14) > 1)
                                            {
                                                label_14000a188:
                                                r8_11 = r12_2;
                                                var_b0_1 = 0x10;
                                                r12_2 = b_8;
                                                result_4 = &result_3[1];
                                                goto label_140009f05;
                                            }
                                            
                                            r8_11 = r12_2;
                                            r12_2 = b_8;
                                            
                                            if (!r13_1[3])
                                            {
                                                var_b0_1 = var_88_2;
                                                result_4 = &result_3[1];
                                            }
                                            else
                                            {
                                                var_b0_1 = 0x10;
                                                result_4 = &result_3[1];
                                            }
                                            
                                            goto label_140009f05;
                                        }
                                        
                                        if (var_d8 != 0x39)
                                        {
                                            var_88_2 = 0x20;
                                            var_d8 = rax_83 + 0x31;
                                            goto label_14000a178;
                                        }
                                        
                                        label_14000a1a4:
                                        result_4 = &result_3[1];
                                    }
                                    else
                                    {
                                        if (*(r13_1 + 0x14) <= 1 && !r13_1[3])
                                        {
                                            if (rdx_32 > 0)
                                                goto label_14000a147;
                                            
                                            r8_11 = r12_2;
                                            r12_2 = b_8;
                                            result_4 = &result_3[1];
                                            label_140009f05:
                                            result_2 = result_4;
                                            *result_3 = var_d8;
                                            goto label_140009953;
                                        }
                                        
                                        if (var_88_2 == 2)
                                            goto label_14000a188;
                                        
                                        var_b0_1 = kindp_1;
                                        int32_t rbx_16 = var_d8;
                                        struct __Bigint* b_4 = b_8;
                                        var_d8 = result;
                                        char* result_5 = result_3;
                                        
                                        while (__cmp_D2A(b_9, b_4) > 0)
                                        {
                                            *result_5 = rbx_16;
                                            result_5 = &result_5[1];
                                            struct __Bigint* b_6 = __multadd_D2A(b_4, 0xa, 0);
                                            
                                            if (r12_2 == b_4)
                                                r12_2 = b_6;
                                            
                                            struct __Bigint* b_1 = __multadd_D2A(r13_1, 0xa, 0);
                                            b_4 = b_6;
                                            r13_1 = b_1;
                                            rbx_16 = __quorem_D2A(b_1, b_9) + 0x30;
                                        }
                                        
                                        result_3 = result_5;
                                        result_4 = &result_5[1];
                                        result = var_d8;
                                        b_8 = b_4;
                                        kindp_1 = var_b0_1;
                                        
                                        if (rbx_16 != 0x39)
                                        {
                                            var_b0_1 = 0x20;
                                            r8_11 = r12_2;
                                            r12_2 = b_8;
                                            var_d8 = rbx_16 + 1;
                                            goto label_140009f05;
                                        }
                                    }
                                }
                                else
                                {
                                    result_4 = &result_1[1];
                                    result_2 = result_4;
                                    
                                    if (rdx_32 <= 0 || var_88_2 == 2)
                                    {
                                        *(result_4 - 1) = (rax_83 + 0x30);
                                        
                                        if (e == i_1)
                                        {
                                            var_d8 = rax_83 + 0x30;
                                            r8_11 = r12_2;
                                            result = e_13;
                                            kindp_1 = var_90_1;
                                            r12_2 = b_3;
                                            break;
                                        }
                                        
                                        r13_1 = __multadd_D2A(r13_1, 0xa, 0);
                                        
                                        if (r12_2 == b_3)
                                        {
                                            struct __Bigint* b_5 = __multadd_D2A(r12_2, 0xa, 0);
                                            r12_2 = b_5;
                                            b_3 = b_5;
                                        }
                                        else
                                        {
                                            r12_2 = __multadd_D2A(r12_2, 0xa, 0);
                                            b_3 = __multadd_D2A(b_3, 0xa, 0);
                                        }
                                        
                                        result_1 = result_4;
                                        e_4 = e + 1;
                                        continue;
                                    }
                                    else
                                    {
                                        result = e_13;
                                        result_3 = result_1;
                                        b_8 = b_3;
                                        kindp_1 = var_90_1;
                                        
                                        if (rax_83 != 9)
                                        {
                                            r8_11 = r12_2;
                                            var_b0_1 = 0x20;
                                            r12_2 = b_8;
                                            *result_3 = (rax_83 + 0x30) + 1;
                                            goto label_140009953;
                                        }
                                    }
                                }
                                
                                r8_11 = r12_2;
                                result_2 = result_4;
                                r12_2 = b_8;
                                rdx_42 = 0x39;
                                *result_3 = 0x39;
                                goto label_140009bc7;
                            }
                        }
                        else
                        {
                            if (rbp_5)
                                goto label_14000a1c7;
                            
                            k_12 = k_11;
                            i_1 = i_4;
                            label_140009b24:
                            result_2 = result;
                            int32_t e_5 = 1;
                            int32_t rax_113;
                            
                            while (true)
                            {
                                e = e_5;
                                result_2 = &result_2[1];
                                rax_113 = __quorem_D2A(r13_1, b_9) + 0x30;
                                result_2[-1] = rax_113;
                                
                                if (e >= i_1)
                                    break;
                                
                                r13_1 = __multadd_D2A(r13_1, 0xa, 0);
                                e_5 = e + 1;
                            }
                            
                            var_d8 = rax_113;
                            r8_11 = nullptr;
                        }
                        
                        if (!var_88_2)
                        {
                            struct __Bigint* a_1 = __lshift_D2A(r13_1, 1);
                            r13_1 = a_1;
                            int rax_124 = __cmp_D2A(a_1, b_9);
                            
                            if (rax_124 > 0 || (!rax_124 && var_d8 & 1))
                            {
                                label_140009ba3:
                                rdx_42 = result_2[-1];
                                label_140009bc7:
                                
                                while (true)
                                {
                                    if (rdx_42 != 0x39)
                                    {
                                        var_b0_1 = 0x20;
                                        result_2[-1] = rdx_42 + 1;
                                        break;
                                    }
                                    
                                    if (&result_2[-1] == result)
                                    {
                                        k_12 += 1;
                                        *result = 0x31;
                                        var_b0_1 = 0x20;
                                        break;
                                    }
                                    
                                    rdx_42 = result_2[-2];
                                    result_2 = &result_2[-1];
                                }
                            }
                            else
                            {
                                label_140009dfd:
                                
                                if (*(r13_1 + 0x14) <= 1)
                                {
                                    uint32_t rax_156 = 0x10;
                                    
                                    if (!r13_1[3])
                                        rax_156 = var_b0_1;
                                    
                                    var_b0_1 = rax_156;
                                }
                                else
                                    var_b0_1 = 0x10;
                            }
                        }
                        else
                        {
                            if (var_88_2 == 2)
                                goto label_140009dfd;
                            
                            if (*(r13_1 + 0x14) > 1 || r13_1[3])
                                goto label_140009ba3;
                        }
                        
                        label_140009953:
                        var_d8 = r8_11;
                        __Bfree_D2A(b_9);
                        
                        if (!r12_2)
                            goto label_140009538;
                        
                        struct __Bigint* v = var_d8;
                        
                        if (v && v != r12_2)
                            __Bfree_D2A(v);
                        
                        goto label_140009980;
                    }
                    
                    if (k_11 > fpi->int_max)
                    {
                        ndigits_1 = 0;
                        var_88_2 = 0;
                        i_1 = 0xffffffff;
                        i_4 = 0xffffffff;
                        label_1400092d5:
                        int32_t r12_1 = nbits - rbp_1;
                        emin = fpi->emin;
                        e_2 = r12_1 + 1;
                        e = e_2;
                        
                        if (be_1 - r12_1 >= emin || !((mode_1 - 3) & 0xfffffffd))
                            goto label_140009be0;
                        
                        goto label_140009308;
                    }
                    
                    var_88_2 = 0;
                    i_1 = 0xffffffff;
                    zmm2 = __tens_D2A[k_11];
                    label_140009c48:
                    zmm0_3 = var_78;
                    result_2 = &result[1];
                    e = 1;
                    zmm1 = zmm0_3 / zmm2;
                    k_12 = k_11 + 1;
                    int32_t rax_121 = zmm1;
                    zmm1 = rax_121;
                    *result = rax_121 + 0x30;
                    zmm1 = zmm1 * zmm2;
                    zmm0_3 = zmm0_3 - zmm1;
                    zmm0_3 - 0.0;
                    
                    if (!FCMP_UO(zmm0_3, 0.0) && zmm0_3 == 0.0)
                        goto label_140009538;
                    
                    while (true)
                    {
                        int32_t e_7 = e;
                        
                        if (e_7 == i_1)
                            break;
                        
                        zmm0_3 = zmm0_3 * 10.0;
                        result_2 = &result_2[1];
                        e = e_7 + 1;
                        zmm1 = zmm0_3 / zmm2;
                        rax_121 = zmm1;
                        zmm1 = rax_121;
                        result_2[-1] = rax_121 + 0x30;
                        zmm1 = zmm1 * zmm2;
                        zmm0_3 = zmm0_3 - zmm1;
                        zmm0_3 - 0.0;
                        
                        if (!FCMP_UO(zmm0_3, 0.0))
                        {
                            if (zmm0_3 == 0.0)
                                goto label_140009538;
                        }
                    }
                    
                    if (var_88_2)
                    {
                        var_b0_1 = 0x10;
                        
                        if (var_88_2 != 1)
                            goto label_140009538;
                        
                        goto label_140009d12;
                    }
                    
                    zmm0_3 = zmm0_3 + zmm0_3;
                    
                    if (!(zmm0_3 > zmm2))
                    {
                        zmm0_3 - zmm2;
                        var_b0_1 = 0x10;
                        
                        if (FCMP_UO(zmm0_3, zmm2) || zmm0_3 != zmm2 || !(rax_121 & 1))
                            goto label_140009538;
                        
                        goto label_140009d12;
                    }
                    
                    label_140009d12:
                    i_3 = result_2[-1];
                    k_14 = k_11;
                    label_1400091f6:
                    
                    while (i_3 == 0x39)
                    {
                        if (&result_2[-1] == result)
                        {
                            *result = 0x30;
                            k_14 += 1;
                            i_3 = result_2[-1];
                            break;
                        }
                        
                        i_3 = result_2[-2];
                        result_2 = &result_2[-1];
                    }
                    
                    var_b0_1 = 0x20;
                    result_2[-1] = i_3 + 1;
                    k_12 = k_14 + 1;
                    label_140009538:
                    
                    if (result_2 > result)
                    {
                        while (result_2[-1] == 0x30)
                        {
                            result_2 -= 1;
                            
                            if (result_2 == result)
                                break;
                        }
                    }
                    else
                    {
                        result_2 = result_2;
                        result = result;
                    }
                }
                else
                {
                    bool rdi_7;
                    
                    if (mode_1 > 5)
                    {
                        rdi_7 = false;
                        mode_1 -= 4;
                    }
                    else
                        rdi_7 = r8_6 + 0x3fd <= 0x7f7;
                    
                    int i_2;
                    
                    if (mode_1 != 3)
                    {
                        if (mode_1 <= 3)
                        {
                            if (mode_1 != 2)
                                goto label_14000927a;
                            
                            var_90_1 = 0;
                        }
                        else
                        {
                            if (mode_1 != 4)
                            {
                                int32_t i_6 = ndigits_1 + k_11;
                                i_4 = i_6;
                                i_1 = i_6 + 1;
                                e = i_6 + 1;
                                
                                if (i_6 + 1 <= 0)
                                {
                                    var_90_1 = 1;
                                    goto label_140009d56;
                                }
                                
                                var_90_1 = 1;
                                k_9 = k_10;
                                e_12 = e_14;
                                result = __rv_alloc_D2A(i_1);
                                goto label_140009058;
                            }
                            
                            var_90_1 = 1;
                        }
                        
                        int rax_69 = 1;
                        
                        if (ndigits_1 > 0)
                            rax_69 = ndigits_1;
                        
                        ndigits_1 = rax_69;
                        i_2 = rax_69;
                        e = rax_69;
                        i_4 = rax_69;
                        i_1 = rax_69;
                        goto label_140009680;
                    }
                    
                    int32_t i_7 = ndigits_1 + k_11;
                    i_4 = i_7;
                    i_1 = i_7 + 1;
                    e = i_7 + 1;
                    
                    if (i_7 + 1 <= 0)
                    {
                        var_90_1 = 0;
                        label_140009d56:
                        e = 1;
                        i_2 = 1;
                        label_140009680:
                        k_9 = k_10;
                        e_12 = e_14;
                        result = __rv_alloc_D2A(i_2);
                        
                        if (mode_1 > 1)
                            goto label_140009058;
                        
                        var_88_2 = 0;
                        label_14000908d:
                        void* rax_35;
                        rax_35 = i_1 <= 0xe;
                        rax_35 &= rdi_7;
                        char r8_8 = rax_35;
                        
                        if (!rax_35 || var_88_2 | k_11)
                            goto label_14000970c;
                        
                        e = 0;
                        zmm0_3 = var_78;
                        uint64_t rax_41;
                        int32_t i_5;
                        
                        if (!var_7c_1 || !(0x3ff0000000000000 > zmm0_3))
                        {
                            zmm1 = zmm0_3 + zmm0_3;
                            zmm1 = zmm1 + 7.0;
                            rax_41 = zmm1 | ((zmm1 >> 0x20) - 0x3400000) << 0x20;
                            
                            if (!i_1)
                                goto label_1400096d0;
                            
                            i_5 = i_1;
                            k_14 = 0;
                            label_14000911f:
                            zmm2 = rax_41;
                            double zmm3 = __tens_D2A[i_5 - 1];
                            bool cond:21_1;
                            bool cond:22_1;
                            
                            if (!var_90_1)
                            {
                                zmm1 = zmm0_3;
                                result_2 = result;
                                int32_t e_8 = 1;
                                uint128_t zmm4_2;
                                zmm4_2 = zmm2 * zmm3;
                                char rcx_67 = 0;
                                
                                while (true)
                                {
                                    int32_t rax_130 = zmm1;
                                    e = e_8;
                                    
                                    if (rax_130)
                                    {
                                        rcx_67 = r8_8;
                                        zmm1 = zmm1 - rax_130;
                                    }
                                    
                                    result_2 = &result_2[1];
                                    i_3 = rax_130 + 0x30;
                                    result_2[-1] = i_3;
                                    int32_t e_9 = e;
                                    
                                    if (e_9 == i_5)
                                        break;
                                    
                                    zmm1 = zmm1 * 0x4024000000000000;
                                    e_8 = e_9 + 1;
                                    rcx_67 = r8_8;
                                }
                                
                                if (!rcx_67)
                                    zmm1 = zmm0_3;
                                
                                zmm0_3 = 0x3fe0000000000000;
                                zmm2 = zmm4_2 + zmm0_3;
                                
                                if (zmm1 > zmm2)
                                    goto label_1400091f6;
                                
                                zmm0_3 = zmm0_3 - zmm4_2;
                                
                                if (zmm0_3 <= zmm1)
                                    goto label_1400096f9;
                                
                                zmm1 - 0.0;
                                cond:21_1 = FCMP_UO(zmm1, 0.0);
                                cond:22_1 = zmm1 != 0.0;
                            }
                            else
                            {
                                int32_t rax_44 = zmm0_3;
                                result_2 = &result[1];
                                zmm1 = 0x3fe0000000000000 / zmm3;
                                zmm1 = zmm1 - zmm2;
                                zmm2 = rax_44;
                                *result = rax_44 + 0x30;
                                zmm0_3 = zmm0_3 - zmm2;
                                
                                if (!(zmm1 > zmm0_3))
                                {
                                    zmm3 = 10.0;
                                    
                                    while (true)
                                    {
                                        zmm2 = 0x3ff0000000000000 - zmm0_3;
                                        
                                        if (!(zmm1 <= zmm2))
                                        {
                                            i_3 = result_2[-1];
                                            break;
                                        }
                                        
                                        int32_t e_1 = e + 1;
                                        e = e_1;
                                        
                                        if (e_1 >= i_5)
                                            goto label_1400096f9;
                                        
                                        zmm0_3 = zmm0_3 * zmm3;
                                        result_2 = &result_2[1];
                                        zmm1 = zmm1 * zmm3;
                                        int32_t rax_46 = zmm0_3;
                                        zmm2 = rax_46;
                                        result_2[-1] = rax_46 + 0x30;
                                        zmm0_3 = zmm0_3 - zmm2;
                                        
                                        if (zmm1 > zmm0_3)
                                            goto label_14000a1db;
                                    }
                                    
                                    goto label_1400091f6;
                                }
                                
                                label_14000a1db:
                                zmm0_3 - 0.0;
                                cond:21_1 = FCMP_UO(zmm0_3, 0.0);
                                cond:22_1 = zmm0_3 != 0.0;
                            }
                            
                            uint32_t rax_131 = cond:21_1;
                            
                            if (cond:22_1)
                                rax_131 = 1;
                            
                            var_b0_1 = rax_131 << 4;
                            k_12 = k_14 + 1;
                            goto label_140009538;
                        }
                        
                        if (!i_1)
                        {
                            zmm1 = zmm0_3 + zmm0_3;
                            zmm1 = zmm1 + 7.0;
                            rax_41 = zmm1 | ((zmm1 >> 0x20) - 0x3400000) << 0x20;
                            label_1400096d0:
                            zmm0_3 = zmm0_3 - 5.0;
                            zmm1 = rax_41;
                            
                            if (!(zmm0_3 > zmm1))
                            {
                                if (__xorpd_xmmxuq_memxuq(zmm1, data_14000d570) > zmm0_3)
                                    goto label_1400099bd;
                                
                                goto label_1400096f9;
                            }
                            
                            k_12 = 2;
                            b_9 = nullptr;
                            r12_2 = nullptr;
                            label_140009510:
                            *result = 0x31;
                            result_2 = &result[1];
                            __Bfree_D2A(b_9);
                            var_b0_1 = 0x20;
                            
                            if (!r12_2)
                                goto label_140009538;
                            
                            label_140009980:
                            __Bfree_D2A(r12_2);
                            goto label_140009538;
                        }
                        
                        i_5 = i_4;
                        
                        if (i_5 > 0)
                        {
                            zmm0_3 = zmm0_3 * 10.0;
                            k_14 = -1;
                            zmm1 = 0x4008000000000000 * zmm0_3;
                            zmm1 = zmm1 + 7.0;
                            rax_41 = zmm1 | ((zmm1 >> 0x20) - 0x3400000) << 0x20;
                            goto label_14000911f;
                        }
                        
                        label_1400096f9:
                        var_88_2 = 0;
                    }
                    else
                    {
                        var_90_1 = 0;
                        k_9 = k_10;
                        e_12 = e_14;
                        result = __rv_alloc_D2A(i_1);
                        label_140009058:
                        int rounding = fpi->rounding;
                        var_88_2 = rounding - 1;
                        
                        if (rounding == 1)
                            goto label_14000908d;
                        
                        uint32_t rax_36 = 2;
                        
                        if (rounding - 1 >= 0)
                            rax_36 = rounding - 1;
                        
                        var_88_2 = rax_36;
                        
                        if (rsi & 8)
                        {
                            var_88_2 = 3 - rax_36;
                            goto label_14000908d;
                        }
                    }
                    
                    label_14000970c:
                    
                    if (be_1 < 0 || fpi->int_max < k_11)
                    {
                        if (var_90_1)
                            goto label_1400092d5;
                        
                        k_5 = k;
                        e_11 = e_13;
                        r12_2 = nullptr;
                        goto label_140009376;
                    }
                    
                    int64_t k_13 = k_11;
                    zmm2 = __tens_D2A[k_13];
                    
                    if (ndigits_1 >= 0 || i_1 > 0)
                        goto label_140009c48;
                    
                    if (!i_1)
                    {
                        zmm2 = zmm2 * 5.0;
                        
                        if (zmm2 >= var_78)
                            goto label_1400099bd;
                        
                        b_9 = nullptr;
                        r12_2 = nullptr;
                        k_12 = k_13 + 2;
                        goto label_140009510;
                    }
                    
                    label_1400099bd:
                    b_9 = nullptr;
                    r12_2 = nullptr;
                    label_1400099c9:
                    result_2 = result;
                    k_12 = -(ndigits_1);
                    __Bfree_D2A(b_9);
                    var_b0_1 = 0x10;
                    
                    if (r12_2)
                        goto label_140009980;
                    
                    result_2 = result;
                    result = result;
                }
                __Bfree_D2A(r13_1);
                *result_2 = 0;
                *decpt = k_12;
                
                if (rve)
                    *rve = result_2;
                
                *kindp_1 |= var_b0_1;
            }
            
            return result;
        }
        
        if (rax_7 != 4)
            return nullptr;
        
        rve_1 = rve;
        r8 = 3;
        rcx = &data_14000d509;
        *decpt = 0xffff8000;
    }
    
    /* tailcall */
    return __nrv_alloc_D2A(rcx, rve_1, r8);
}

void __rshift_D2A(struct __Bigint* b, int k)
{
    int64_t wds = b->wds;
    int32_t rbp_1 = k >> 5;
    
    if (wds <= rbp_1)
        b->wds = 0;
    else
    {
        int64_t rbp_2 = rbp_1;
        void* r11_1 = &(&b->x)[wds];
        void* rsi_1 = &(&b->x)[rbp_2];
        int32_t rdx = k & 0x1f;
        void* rax_4;
        
        if (!rdx)
        {
            int32_t* rdi_2 = &b->x;
            
            if (r11_1 > rsi_1)
            {
                do
                {
                    *rdi_2 = *rsi_1;
                    rdi_2 = &rdi_2[1];
                    rsi_1 += 4;
                } while (r11_1 > rsi_1);
                
                rax_4 = &(&b->x)[wds - rbp_2];
                goto label_14000a3f0;
            }
            
            b->wds = 0;
        }
        else
        {
            void* r8_1 = rsi_1 + 4;
            uint32_t r9_2 = *rsi_1 >> rdx;
            
            if (r11_1 > r8_1)
            {
                long unsigned int (* rsi_2)[0x1] = &b->x;
                
                do
                {
                    int32_t rax_1 = *r8_1;
                    rsi_2 = &rsi_2[1];
                    r8_1 += 4;
                    ADJ(rsi_2)->wds = rax_1 << (0x20 - rdx) | r9_2;
                    r9_2 = *(r8_1 - 4) >> rdx;
                } while (r11_1 > r8_1);
                
                rax_4 = &(&b->x)[wds - rbp_2 - 1];
                *rax_4 = r9_2;
                
                if (!r9_2)
                    goto label_14000a3f0;
                
                goto label_14000a3a3;
            }
            
            b->x = r9_2;
            
            if (!r9_2)
                b->wds = 0;
            else
            {
                rax_4 = &b->x;
                label_14000a3a3:
                rax_4 += 4;
                label_14000a3f0:
                int rax = (rax_4 - &b->x) >> 2;
                b->wds = rax;
                
                if (rax)
                    return;
            }
        }
    }
    
    b->x = 0;
}

int __trailz_D2A(struct __Bigint* b)
{
    int32_t result = 0;
    long unsigned int (* rax)[0x1] = &b->x;
    void* rcx = &rax[b->wds];
    
    if (rax < rcx)
    {
        do
        {
            long unsigned int x[0x1] = ADJ(rax)->x;
            
            if (x)
            {
                if (rcx > rax)
                    return result + _tzcnt_u32(x);
                
                break;
            }
            
            rax = &rax[1];
            result += 0x20;
        } while (rcx > rax);
    }
    
    return result;
}

long int dtoa_lock(unsigned int n)
{
    long int dtoa_CS_init_1 = dtoa_CS_init;
    
    if (dtoa_CS_init_1 != 2)
    {
        if (dtoa_CS_init_1)
        {
            if (dtoa_CS_init_1 != 1)
                return dtoa_CS_init_1;
            
            label_14000a4b0:
            
            do
            {
                Sleep(1);
                dtoa_CS_init_1 = dtoa_CS_init;
            } while (dtoa_CS_init_1 == 1);
            
            goto label_14000a4b2;
        }
        
        long int dtoa_CS_init_2 = dtoa_CS_init;
        dtoa_CS_init = 1;
        
        if (!dtoa_CS_init_2)
        {
            InitializeCriticalSection(&dtoa_CritSec);
            InitializeCriticalSection(&dtoa_CritSec[1]);
            atexit(dtoa_lock_cleanup);
            dtoa_CS_init = 2;
        }
        else if (dtoa_CS_init_2 == 2)
            dtoa_CS_init = 2;
        else
        {
            dtoa_CS_init_1 = dtoa_CS_init;
            
            if (dtoa_CS_init_1 == 1)
                goto label_14000a4b0;
            
            label_14000a4b2:
            
            if (dtoa_CS_init_1 != 2)
                return dtoa_CS_init_1;
        }
    }
    
    /* tailcall */
    return EnterCriticalSection(&dtoa_CritSec[n]);
}

void dtoa_lock_cleanup()
{
    long int dtoa_CS_init_1 = dtoa_CS_init;
    dtoa_CS_init = 3;
    
    if (dtoa_CS_init_1 != 2)
        return;
    
    DeleteCriticalSection(&dtoa_CritSec);
    /* tailcall */
    return DeleteCriticalSection(&dtoa_CritSec[1]);
}

int64_t* __Balloc_D2A(int k)
{
    dtoa_lock(0);
    int64_t* pmem_next_1;
    uint64_t rcx_3;
    int32_t rsi_1;
    
    if (k <= 9)
    {
        int64_t k_1 = k;
        pmem_next_1 = freelist[k_1];
        
        if (!pmem_next_1)
        {
            rsi_1 = 1 << k;
            pmem_next_1 = pmem_next;
            rcx_3 = (((rsi_1 + 9) << 2) + -ffffffffffffffff) >> 3;
            
            if (((pmem_next_1 - &private_mem) >> 3) + rcx_3 > 0x120)
                goto label_14000a5d2;
            
            pmem_next = &pmem_next_1[rcx_3];
            label_14000a5dc:
            bool cond:1_1 = dtoa_CS_init == 2;
            pmem_next_1[1] = k;
            *(pmem_next_1 + 0xc) = rsi_1;
            
            if (cond:1_1)
            {
                LeaveCriticalSection(&dtoa_CritSec);
                pmem_next_1[2] = 0;
            }
            else
                pmem_next_1[2] = 0;
        }
        else
        {
            bool cond:0_1 = dtoa_CS_init != 2;
            freelist[k_1] = *pmem_next_1;
            
            if (cond:0_1)
                pmem_next_1[2] = 0;
            else
            {
                LeaveCriticalSection(&dtoa_CritSec);
                pmem_next_1[2] = 0;
            }
        }
    }
    else
    {
        rsi_1 = 1 << k;
        rcx_3 = ((rsi_1 << 2) + 0x23) >> 3;
        label_14000a5d2:
        pmem_next_1 = malloc(rcx_3 << 3);
        
        if (pmem_next_1)
            goto label_14000a5dc;
    }
    return pmem_next_1;
}

void __Bfree_D2A(struct __Bigint* v)
{
    if (v)
    {
        if (v->k > 9)
            /* tailcall */
            return free(v);
        
        dtoa_lock(0);
        int64_t k = v->k;
        bool cond:0_1 = dtoa_CS_init == 2;
        int64_t rcx_1 = freelist[k];
        freelist[k] = v;
        v->next = rcx_1;
        
        if (cond:0_1)
            /* tailcall */
            return LeaveCriticalSection(&dtoa_CritSec);
    }
}

struct __Bigint* __multadd_D2A(struct __Bigint* b, int m, int a)
{
    int wds = b->wds;
    struct __Bigint* r12 = b;
    int64_t a_1 = a;
    int64_t rcx = 0;
    
    do
    {
        int64_t rax_3 = (&r12->x)[rcx] * m + a_1;
        (&r12->x)[rcx] = rax_3;
        rcx += 1;
        a_1 = rax_3 >> 0x20;
    } while (wds > rcx);
    
    struct __Bigint* result = r12;
    
    if (a_1)
    {
        if (r12->maxwds > wds)
            goto label_14000a765;
        
        struct __Bigint* result_1 = __Balloc_D2A(r12->k + 1);
        result = result_1;
        
        if (result_1)
        {
            memcpy(&result_1->sign, &r12->sign, (r12->wds << 2) + 8);
            struct __Bigint* v = r12;
            r12 = result;
            __Bfree_D2A(v);
            label_14000a765:
            result = r12;
            (&r12->x)[wds] = a_1;
            r12->wds = wds + 1;
        }
    }
    
    return result;
}

struct __Bigint* __i2b_D2A(int i)
{
    dtoa_lock(0);
    struct __Bigint* pmem_next_1 = freelist[1];
    
    if (!pmem_next_1)
    {
        pmem_next_1 = pmem_next;
        
        if (((pmem_next_1 - &private_mem) >> 3) + 5 <= 0x120)
        {
            pmem_next = pmem_next_1 + 0x28;
            label_14000a846:
            bool cond:1_1 = dtoa_CS_init != 2;
            pmem_next_1->k = 1;
            pmem_next_1->maxwds = 2;
            
            if (cond:1_1)
                goto label_14000a7ed;
            
            goto label_14000a85f;
        }
        
        pmem_next_1 = malloc(0x28);
        
        if (pmem_next_1)
            goto label_14000a846;
    }
    else
    {
        bool cond:0_1 = dtoa_CS_init == 2;
        freelist[1] = pmem_next_1->next;
        
        if (!cond:0_1)
            goto label_14000a7ed;
        
        label_14000a85f:
        LeaveCriticalSection(&dtoa_CritSec);
        label_14000a7ed:
        pmem_next_1->x = i;
        pmem_next_1->sign = 0;
        pmem_next_1->wds = 1;
    }
    
    return pmem_next_1;
}

int64_t* __mult_D2A(struct __Bigint* a, struct __Bigint* b)
{
    int64_t wds = a->wds;
    int64_t wds_1 = b->wds;
    struct __Bigint* r13 = a;
    struct __Bigint* r15 = b;
    
    if (wds >= wds_1)
    {
        int32_t wds_2 = wds_1;
        r15 = a;
        wds_1 = wds;
        r13 = b;
        wds = wds_2;
    }
    
    int32_t i_1 = wds_1 + wds;
    int32_t rcx;
    rcx = r15->maxwds < i_1;
    int64_t* result = __Balloc_D2A(rcx + r15->k);
    
    if (result)
    {
        int32_t* r11_1 = &result[3];
        void* rsi_1 = &r11_1[i_1];
        
        if (r11_1 < rsi_1)
            r11_1 = memset(r11_1, 0, ((rsi_1 - result - 0x19) >> 2 << 2) + 4);
        
        long unsigned int (* r9_1)[0x1] = &r13->x;
        void* rbp = &r9_1[wds];
        void* rdi = &(&r15->x)[wds_1];
        
        if (r9_1 < rbp)
        {
            void* r13_1 = ((rdi - r15 - 0x19) >> 2 << 2) + 4;
            
            if (rdi < &r15->x[0] + 1)
                r13_1 = 4;
            
            while (true)
            {
                uint64_t x_1 = ADJ(r9_1)->x;
                r9_1 = &r9_1[1];
                
                if (!x_1)
                {
                    r11_1 = &r11_1[1];
                    
                    if (rbp <= r9_1)
                        break;
                }
                else
                {
                    int32_t* rcx_3 = r11_1;
                    long unsigned int (* rdx)[0x1] = &r15->x;
                    uint64_t r8_2 = 0;
                    
                    do
                    {
                        uint64_t x = ADJ(rdx)->x;
                        uint64_t r15_2 = *rcx_3;
                        rdx = &rdx[1];
                        rcx_3 = &rcx_3[1];
                        int64_t rax_13 = x * x_1 + r15_2 + r8_2;
                        rcx_3[-1] = rax_13;
                        r8_2 = rax_13 >> 0x20;
                    } while (rdi > rdx);
                    
                    *(r11_1 + r13_1) = r8_2;
                    r11_1 = &r11_1[1];
                    
                    if (rbp <= r9_1)
                        break;
                }
            }
        }
        
        if (i_1 > 0)
        {
            int32_t i;
            
            do
            {
                int32_t rax_14 = *(rsi_1 - 4);
                rsi_1 -= 4;
                
                if (rax_14)
                    break;
                
                i = i_1;
                i_1 -= 1;
            } while (i != 1);
        }
        
        *(result + 0x14) = i_1;
    }
    
    return result;
}

struct __Bigint* __pow5mult_D2A(struct __Bigint* b, int k)
{
    struct __Bigint* r13 = b;
    int32_t rax_1 = k & 3;
    
    if (rax_1)
    {
        struct __Bigint* rax_5 = __multadd_D2A(b, p05[rax_1 - 1], 0);
        r13 = rax_5;
        
        if (!rax_5)
            return 0;
    }
    
    int32_t rbx_1 = k >> 2;
    
    if (!rbx_1)
        return r13;
    
    struct __Bigint* p5s_1 = p5s;
    
    if (!p5s_1)
    {
        dtoa_lock(1);
        p5s_1 = p5s;
        
        if (!p5s_1)
        {
            struct __Bigint* p5s_2 = __Balloc_D2A(1);
            p5s_1 = p5s_2;
            
            if (!p5s_2)
            {
                p5s = nullptr;
                return nullptr;
            }
            
            p5s = p5s_1;
            p5s_1->wds = 1;
            p5s_1->x = 0x271;
            p5s_1->next = 0;
        }
        
        if (dtoa_CS_init == 2)
            LeaveCriticalSection(&dtoa_CritSec[1]);
    }
    
    struct __Bigint* a = r13;
    
    while (true)
    {
        if (!(rbx_1 & 1))
            goto label_14000aa30;
        
        int64_t* a_1 = __mult_D2A(a, p5s_1);
        
        if (!a_1)
            return 0;
        
        if (!a)
        {
            a = a_1;
            label_14000aa30:
            rbx_1 s>>= 1;
            
            if (!rbx_1)
                return a;
        }
        else
        {
            if (a->k <= 9)
            {
                dtoa_lock(0);
                int64_t k_1 = a->k;
                bool cond:1_1 = dtoa_CS_init != 2;
                int64_t rdx_1 = freelist[k_1];
                freelist[k_1] = a;
                a->next = rdx_1;
                a = a_1;
                
                if (!cond:1_1)
                    LeaveCriticalSection(&dtoa_CritSec);
                
                goto label_14000aa30;
            }
            
            struct __Bigint* a_2 = a;
            a = a_1;
            free(a_2);
            rbx_1 s>>= 1;
            
            if (!rbx_1)
                return a;
        }
        
        int64_t* next = p5s_1->next;
        
        if (!next)
        {
            dtoa_lock(1);
            next = p5s_1->next;
            
            if (!next)
            {
                int64_t* next_1 = __mult_D2A(p5s_1, p5s_1);
                p5s_1->next = next_1;
                next = next_1;
                
                if (!next_1)
                    return 0;
                
                *next_1 = 0;
            }
            
            if (dtoa_CS_init == 2)
                LeaveCriticalSection(&dtoa_CritSec[1]);
        }
        
        p5s_1 = next;
    }
}

int64_t* __lshift_D2A(struct __Bigint* b, int k)
{
    int k_1 = b->k;
    int32_t rsi_1 = k >> 5;
    int maxwds = b->maxwds;
    int32_t rbp_1 = b->wds + rsi_1;
    
    while (rbp_1 + 1 > maxwds)
    {
        maxwds *= 2;
        k_1 += 1;
    }
    
    int64_t* result = __Balloc_D2A(k_1);
    
    if (result)
    {
        void* rdi_1 = &result[3];
        
        if (rsi_1 > 0)
        {
            void* rcx = rdi_1;
            int64_t _Size = rsi_1 << 2;
            rdi_1 += _Size;
            memset(rcx, 0, _Size);
        }
        
        void* rsi_3 = &b->x;
        void* r9_1 = rsi_3 + (b->wds << 2);
        int32_t rbx_1 = k & 0x1f;
        
        if (!rbx_1)
        {
            do
            {
                *rdi_1 = *rsi_3;
                void* rdi_2 = rdi_1 + 4;
                void* rsi_4 = rsi_3 + 4;
                
                if (r9_1 <= rsi_4)
                    break;
                
                *rdi_2 = *rsi_4;
                rdi_1 = rdi_2 + 4;
                rsi_3 = rsi_4 + 4;
            } while (r9_1 > rsi_3);
        }
        else
        {
            void* r8_2 = rdi_1;
            uint32_t rdx = 0;
            
            do
            {
                int32_t rax_1 = *rsi_3;
                r8_2 += 4;
                rsi_3 += 4;
                *(r8_2 - 4) = rax_1 << rbx_1 | rdx;
                rdx = *(rsi_3 - 4) >> (0x20 - rbx_1);
            } while (r9_1 > rsi_3);
            
            void* rax_8 = ((r9_1 - b - 0x19) >> 2 << 2) + 4;
            
            if (r9_1 < &b->x[0] + 1)
                rax_8 = 4;
            
            if (rdx)
                rbp_1 += 1;
            
            *(rdi_1 + rax_8) = rdx;
        }
        
        *(result + 0x14) = rbp_1;
        __Bfree_D2A(b);
    }
    
    return result;
}

int __cmp_D2A(struct __Bigint* a, struct __Bigint* b)
{
    int64_t wds = b->wds;
    int wds_1 = a->wds;
    int32_t result = wds_1 - wds;
    
    if (wds_1 == wds)
    {
        int64_t r8_1 = wds << 2;
        void* i = &a->x + r8_1;
        void* rdx = &b->x + r8_1;
        
        do
        {
            i -= 4;
            rdx -= 4;
            int32_t r10_1 = *rdx;
            int32_t temp1_1 = *i;
            
            if (temp1_1 != r10_1)
                return (result - result) | 1;
        } while (&a->x < i);
    }
    
    return result;
}

int64_t* __diff_D2A(struct __Bigint* a, struct __Bigint* b)
{
    int64_t wds = b->wds;
    int wds_2 = a->wds;
    struct __Bigint* a_1 = a;
    struct __Bigint* b_1 = b;
    int32_t rdi = wds_2 - wds;
    int64_t* result;
    
    if (wds_2 != wds)
    {
        rdi = 0;
        
        if (wds_2 - wds < 0)
        {
            label_14000aed3:
            struct __Bigint* rax_14 = a_1;
            rdi = 1;
            a_1 = b_1;
            b_1 = rax_14;
        }
    }
    else
    {
        int64_t rdx = wds << 2;
        void* rax = &a->x + rdx;
        void* rdx_1 = &b_1->x + rdx;
        int32_t r9_1;
        int32_t temp1_1;
        
        while (true)
        {
            rax -= 4;
            rdx_1 -= 4;
            r9_1 = *rdx_1;
            temp1_1 = *rax;
            
            if (temp1_1 != r9_1)
                break;
            
            if (&a->x >= rax)
            {
                int64_t* result_2 = __Balloc_D2A(0);
                result = result_2;
                
                if (!result_2)
                    goto label_14000aec0;
                
                *(result + 0x14) = 1;
                return result;
            }
        }
        
        if (temp1_1 < r9_1)
            goto label_14000aed3;
    }
    
    int64_t* result_1 = __Balloc_D2A(a_1->k);
    result = result_1;
    
    if (result_1)
    {
        result_1[2] = rdi;
        int64_t wds_1 = a_1->wds;
        void* rcx_2 = 0x18;
        uint64_t rdx_2 = 0;
        int32_t r9_2 = wds_1;
        void* r11_1 = &(&a_1->x)[wds_1];
        void* i = &(&b_1->x)[b_1->wds];
        int32_t r10_1;
        
        do
        {
            uint64_t rax_4 = *(a_1 + rcx_2) - rdx_2 - *(b_1 + rcx_2);
            *(result + rcx_2) = rax_4;
            rcx_2 += 4;
            r10_1 = rax_4;
            rdx_2 = rax_4 >> 0x20 & 1;
        } while (i > rcx_2 + b_1);
        
        void* rax_9 = (i - b_1 - 0x19) & 0xfffffffffffffffc;
        
        if (i < &b_1->x[0] + 1)
            rax_9 = nullptr;
        
        void* rsi = ((i - b_1 - 0x19) >> 2 << 2) + 4;
        void* rax_10 = rax_9 + &result[3];
        
        if (i < &b_1->x[0] + 1)
            rsi = 4;
        
        void* rbp_2 = &a_1->x + rsi;
        void* rsi_1 = rsi + &result[3];
        
        if (r11_1 > rbp_2)
        {
            void* rbx_2 = rsi_1;
            void* rcx_4 = rbp_2;
            
            do
            {
                uint64_t rax_11 = *rcx_4;
                rcx_4 += 4;
                rbx_2 += 4;
                uint64_t rax_12 = rax_11 - rdx_2;
                *(rbx_2 - 4) = rax_12;
                r10_1 = rax_12;
                rdx_2 = rax_12 >> 0x20 & 1;
            } while (r11_1 > rcx_4);
            
            rax_10 = rsi_1 + ((r11_1 - 1 - rbp_2) & 0xfffffffffffffffc);
        }
        
        if (!r10_1)
        {
            int32_t i_1;
            
            do
            {
                i_1 = *(rax_10 - 4);
                rax_10 -= 4;
                r9_2 -= 1;
            } while (!i_1);
        }
        
        *(result + 0x14) = r9_2;
    }
    
    label_14000aec0:
    return result;
}

uint64_t __b2d_D2A(struct __Bigint* a, int* e)
{
    void* rbx = &(&a->x)[a->wds];
    int32_t r11 = *(rbx - 4);
    uint64_t rflags;
    int32_t temp0;
    temp0 = _bit_scan_reverse(r11);
    int32_t rax_2 = temp0 ^ 0x1f;
    *e = 0x20 - rax_2;
    
    if (rax_2 <= 0xa)
    {
        uint32_t r9_2 = 0;
        
        if (&a->x < rbx - 4)
            r9_2 = *(rbx - 8) >> (0xb - rax_2);
        
        return (r11 >> (0xb - rax_2) | 0x3ff00000) << 0x20 | r11 << (rax_2 + 0x15) | r9_2;
    }
    
    uint64_t rdx_4;
    uint64_t r8_1;
    
    if (&a->x >= rbx - 4)
    {
        r8_1 = 0;
        
        if (rax_2 != 0xb)
            return (r11 << (rax_2 - 0xb) | 0x3ff00000) << 0x20;
        
        rdx_4 = (r11 | 0x3ff00000) << 0x20;
    }
    else
    {
        r8_1 = *(rbx - 8);
        
        if (rax_2 == 0xb)
            rdx_4 = (r11 | 0x3ff00000) << 0x20;
        else
        {
            int32_t rdx_2 = r11 << (rax_2 - 0xb) | r8_1 >> (0x20 - (rax_2 - 0xb));
            r8_1 = r8_1 << (rax_2 - 0xb);
            rdx_4 = (rdx_2 | 0x3ff00000) << 0x20;
            
            if (&a->x < rbx - 8)
                return rdx_4 | r8_1 | *(rbx - 0xc) >> (0x20 - (rax_2 - 0xb));
        }
    }
    
    return rdx_4 | r8_1;
}

int64_t* __d2b_D2A(double dd, int* e, int* bits)
{
    int64_t* result = __Balloc_D2A(1);
    
    if (result)
    {
        uint32_t rcx_2 = dd >> 0x20;
        uint32_t rdx_1 = rcx_2 & 0xfffff;
        int32_t rcx_4 = rcx_2 >> 0x14 & 0x7ff;
        
        if (rcx_4)
            rdx_1 |= 0x100000;
        
        int32_t rax_2;
        uint32_t r8_2;
        
        if (!dd)
        {
            rax_2 = 1;
            uint32_t temp0_3 = _tzcnt_u32(rdx_1);
            *(result + 0x14) = 1;
            r8_2 = temp0_3 + 0x20;
            result[3] = rdx_1 >> temp0_3;
            
            if (rcx_4)
            {
                label_14000b11e:
                *e = rcx_4 + r8_2 - 0x433;
                *bits = 0x35 - r8_2;
                return result;
            }
        }
        else
        {
            r8_2 = _tzcnt_u32(dd);
            uint32_t rax_1 = dd >> r8_2;
            
            if (r8_2)
            {
                rax_1 |= rdx_1 << (0x20 - r8_2);
                rdx_1 u>>= r8_2;
            }
            
            result[3] = rax_1;
            rax_2 = 1 + 1;
            *(result + 0x1c) = rdx_1;
            *(result + 0x14) = rax_2;
            
            if (rcx_4)
                goto label_14000b11e;
        }
        
        uint64_t rflags_1;
        int32_t temp0_2;
        temp0_2 = __bsr_gprv_memv(*(result + (rax_2 << 2) + 0x14));
        *e = r8_2 - 0x432;
        *bits = (rax_2 << 5) - (temp0_2 ^ 0x1f);
    }
    
    return result;
}

char* __strcp_D2A(char* a, char const* b)
{
    char* result = a;
    void* rcx = &b[1];
    char const rdx = *b;
    *result = rdx;
    
    if (rdx)
    {
        char i;
        
        do
        {
            i = *rcx;
            result = &result[1];
            rcx += 1;
            *result = i;
        } while (i);
    }
    
    return result;
}

long long unsigned int strnlen(char const* s, long long unsigned int maxlen)
{
    int64_t result = 0;
    char const* s_1 = s;
    
    if (maxlen)
    {
        while (*s_1)
        {
            s_1 = &s_1[1];
            result = s_1 - s;
            
            if (result >= maxlen)
                break;
        }
    }
    
    return result;
}

long long unsigned int wcsnlen(short unsigned int const* w, long long unsigned int ncnt)
{
    long long unsigned int r8 = 0;
    
    if (ncnt)
    {
        do
        {
            if (!w[r8])
                return r8;
            
            r8 += 1;
        } while (ncnt != r8);
    }
    
    return ncnt;
}

int* __p__fmode() __pure
{
    return _fmode;
}

int* __p__commode() __pure
{
    return _commode;
}

int64_t _lock_file(struct _iobuf* pf)
{
    if (pf >= __acrt_iob_func(0) && pf <= __acrt_iob_func(0x13))
    {
        int64_t result = _lock(((pf - __acrt_iob_func(0)) >> 4) * 0xaaaaaaab + 0x10);
        *(pf + 0x18) |= 0x8000;
        return result;
    }
    
    /* tailcall */
    return EnterCriticalSection(&pf[6]);
}

int64_t _unlock_file(struct _iobuf* pf)
{
    if (pf >= __acrt_iob_func(0) && pf <= __acrt_iob_func(0x13))
    {
        *(pf + 0x18) &= 0xffff7fff;
        /* tailcall */
        return _unlock(((pf - __acrt_iob_func(0)) >> 4) * 0xaaaaaaab + 0x10);
    }
    
    /* tailcall */
    return LeaveCriticalSection(&pf[6]);
}

void (*)() mingw_get_invalid_parameter_handler()
{
    return handler;
}

void (*)() mingw_set_invalid_parameter_handler(void (* new_handler)())
{
    void (* handler_1)() = handler;
    handler = new_handler;
    return handler_1;
}

void* __acrt_iob_func(unsigned int index)
{
    return &__iob_func()[index * 6];
}

int32_t __wcrtomb_cp(char* dst, short unsigned int wc, unsigned int const cp, unsigned int const mb_max)
{
    lpWideCharStr = wc;
    
    if (cp)
    {
        BOOL lpUsedDefaultChar = 0;
        int32_t result = WideCharToMultiByte(cp, 0, &lpWideCharStr, 1, dst, mb_max, nullptr, &lpUsedDefaultChar);
        
        if (result && !lpUsedDefaultChar)
            return result;
    }
    else if (wc <= 0xff)
    {
        *dst = wc;
        return 1;
    }
    
    *_errno() = 0x2a;
    return 0xffffffff;
}

int64_t wcrtomb(char* dst, short unsigned int wc, int* ps)
{
    char* dst_1 = dst;
    void var_1d;
    
    if (!dst)
        dst_1 = &var_1d;
    int32_t mb_max = ___mb_cur_max_func();
    return __wcrtomb_cp(dst_1, wc, ___lc_codepage_func(), mb_max);
}

long long unsigned int wcsrtombs(char* dst, short unsigned int const** src, long long unsigned int len, int* ps)
{
    int64_t result = 0;
    char* dst_1 = dst;
    uint32_t cp = ___lc_codepage_func();
    int32_t mb_max = ___mb_cur_max_func();
    short unsigned int const* rsi = *src;
    
    if (rsi)
    {
        if (!dst_1)
        {
            while (true)
            {
                void var_3d;
                int32_t rax_5 = __wcrtomb_cp(&var_3d, *rsi, cp, mb_max);
                
                if (rax_5 <= 0)
                    break;
                
                result += rax_5;
                
                if (!*(&var_3d + rax_5 - 1))
                    return result - 1;
                
                rsi = &rsi[1];
            }
            
            return -1;
        }
        
        if (len)
        {
            do
            {
                int32_t rax_1 = __wcrtomb_cp(dst_1, *rsi, cp, mb_max);
                
                if (rax_1 <= 0)
                    return -1;
                
                int64_t rax = rax_1;
                dst_1 = &dst_1[rax];
                result += rax;
                
                if (!dst_1[-1])
                {
                    *src = nullptr;
                    return result - 1;
                }
                
                rsi = &rsi[1];
            } while (len > result);
        }
        
        *src = rsi;
    }
    
    return result;
}

int __mbrtowc_cp(short unsigned int* pwc, char const* s, long long unsigned int n, int* ps, unsigned int const cp, unsigned int const mb_max)
{
    void var_10;
    int64_t rbx;
    var_10 = rbx;
    
    if (!s)
        return 0;
    
    if (!n)
        return -2;
    
    int rax = *ps;
    char const TestChar = *s;
    *ps = 0;
    int var_1c = rax;
    
    if (!TestChar)
    {
        *pwc = 0;
        return 0;
    }
    
    if (mb_max <= 1)
    {
        label_14000b59f:
        
        if (!cp)
        {
            *pwc = *s;
            return 1;
        }
        
        if (MultiByteToWideChar(cp, MB_ERR_INVALID_CHARS, s, 1, pwc, 1))
            return 1;
    }
    else
    {
        short unsigned int* lpWideCharStr;
        char const* lpMultiByteStr;
        
        if (rax)
        {
            *var_1c[1] = TestChar;
            lpMultiByteStr = &var_1c;
            int32_t var_30_2 = 1;
            lpWideCharStr = pwc;
        }
        else
        {
            if (!IsDBCSLeadByteEx(cp, TestChar))
                goto label_14000b59f;
            
            if (n == 1)
            {
                *ps = *s;
                return -2;
            }
            
            lpWideCharStr = pwc;
            lpMultiByteStr = s;
            int32_t var_30_1 = 1;
        }
        
        if (MultiByteToWideChar(cp, MB_ERR_INVALID_CHARS, lpMultiByteStr, 2, lpWideCharStr, 1))
            return 2;
    }
    
    *_errno() = 0x2a;
    return -1;
}

int64_t mbrtowc(short unsigned int* pwc, char const* s, long long unsigned int n, int* ps)
{
    short unsigned int* pwc_1 = pwc;
    short unsigned int var_2a = 0;
    
    if (!pwc)
        pwc_1 = &var_2a;
    
    int32_t mb_max = ___mb_cur_max_func();
    uint32_t cp = ___lc_codepage_func();
    int* ps_1 = &internal_mbstate;
    
    if (ps)
        ps_1 = ps;
    
    return __mbrtowc_cp(pwc_1, s, n, ps_1, cp, mb_max);
}

long long unsigned int mbsrtowcs(short unsigned int* dst, char const** src, long long unsigned int len, int* ps)
{
    int* ps_1 = ps;
    short unsigned int* pwc_1 = dst;
    
    if (!ps)
        ps_1 = &internal_mbstate;
    
    uint32_t cp = ___lc_codepage_func();
    int32_t mb_max = ___mb_cur_max_func();
    
    if (src)
    {
        char* s = *src;
        
        if (s)
        {
            int64_t result;
            
            if (!pwc_1)
            {
                result = 0;
                short unsigned int pwc = 0;
                
                while (true)
                {
                    int rax_4 = __mbrtowc_cp(&pwc, &s[result], mb_max, ps_1, cp, mb_max);
                    
                    if (rax_4 <= 0)
                        break;
                    
                    s = *src;
                    result += rax_4;
                }
            }
            else
            {
                result = 0;
                
                if (len)
                {
                    do
                    {
                        int rax_1 = __mbrtowc_cp(pwc_1, s, len - result, ps_1, cp, mb_max);
                        
                        if (rax_1 <= 0)
                        {
                            if (len > result && !rax_1)
                                *src = nullptr;
                            
                            break;
                        }
                        
                        int64_t rax = rax_1;
                        pwc_1 = &pwc_1[1];
                        result += rax;
                        s = &(*src)[rax];
                        *src = s;
                    } while (len > result);
                }
            }
            
            return result;
        }
    }
    
    return 0;
}

int64_t mbrlen(char const* s, long long unsigned int n, int* ps)
{
    void var_18;
    int64_t rsi;
    var_18 = rsi;
    int* ps_1 = ps;
    short unsigned int pwc = 0;
    int32_t mb_max = ___mb_cur_max_func();
    uint32_t cp = ___lc_codepage_func();
    
    if (!ps_1)
        ps_1 = &s_mbstate;
    
    return __mbrtowc_cp(&pwc, s, n, ps_1, cp, mb_max);
}

EXCEPTION_DISPOSITION _.text(struct _EXCEPTION_RECORD* ExceptionRecord, void* EstablisherFrame, struct _CONTEXT* ContextRecord, struct _DISPATCHER_CONTEXT* DispatcherContext)
{
    /* tailcall */
    return __C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
}

uint32_t ___lc_codepage_func()
{
    /* tailcall */
    return ___lc_codepage_func();
}

int32_t ___mb_cur_max_func()
{
    /* tailcall */
    return ___mb_cur_max_func();
}

uint64_t __getmainargs(int32_t* arg1, int64_t* arg2, int64_t* arg3, int32_t arg4, int32_t* arg5)
{
    /* tailcall */
    return __getmainargs(arg1, arg2, arg3, arg4, arg5);
}

FILE* __iob_func()
{
    /* tailcall */
    return __iob_func();
}

void __set_app_type(enum _crt_app_type _Type)
{
    /* tailcall */
    return __set_app_type(_Type);
}

void __setusermatherr(_UserMathErrorFunctionPointer _UserMathErrorFunction)
{
    /* tailcall */
    return __setusermatherr(_UserMathErrorFunction);
}

void _amsg_exit(int32_t rterrnum)
{
    /* tailcall */
    return _amsg_exit(rterrnum);
}

void _cexit()
{
    /* tailcall */
    return _cexit();
}

int32_t* _errno()
{
    /* tailcall */
    return _errno();
}

void _initterm(_PVFV* _First, _PVFV* _Last)
{
    /* tailcall */
    return _initterm(_First, _Last);
}

void _lock(int32_t locknum)
{
    /* tailcall */
    return _lock(locknum);
}

_onexit_t_1 _onexit(_onexit_t_1 _Func)
{
    /* tailcall */
    return _onexit(_Func);
}

void _unlock(int32_t locknum)
{
    /* tailcall */
    return _unlock(locknum);
}

void abort() __noreturn
{
    /* tailcall */
    return abort();
}

int64_t calloc(uint64_t _Count, uint64_t _Size)
{
    /* tailcall */
    return calloc(_Count, _Size);
}

void exit(int32_t _Except) __noreturn
{
    /* tailcall */
    return exit(_Except);
}

int32_t fprintf(FILE* const _Stream, char const* const _Format, ...)
{
    /* tailcall */
    return fprintf();
}

int32_t fputc(int32_t _Character, FILE* _Stream)
{
    /* tailcall */
    return fputc(_Character, _Stream);
}

void free(void* _Block)
{
    /* tailcall */
    return free(_Block);
}

uint64_t fwrite(void const* _Buffer, uint64_t _ElementSize, uint64_t _ElementCount, FILE* _Stream)
{
    /* tailcall */
    return fwrite(_Buffer, _ElementSize, _ElementCount, _Stream);
}

struct lconv* localeconv()
{
    /* tailcall */
    return localeconv();
}

int64_t malloc(uint64_t _Size)
{
    /* tailcall */
    return malloc(_Size);
}

int64_t memcpy(void* _Dst, void const* _Src, uint64_t _Size)
{
    /* tailcall */
    return memcpy(_Dst, _Src, _Size);
}

int64_t memset(void* _Dst, int32_t _Val, uint64_t _Size)
{
    /* tailcall */
    return memset(_Dst, _Val, _Size);
}

_crt_signal_t signal(int32_t _Signal, _crt_signal_t _Function)
{
    /* tailcall */
    return signal(_Signal, _Function);
}

char* strerror(int32_t _ErrorMessage)
{
    /* tailcall */
    return strerror(_ErrorMessage);
}

uint64_t strlen(char const* _Str)
{
    /* tailcall */
    return strlen(_Str);
}

int32_t strncmp(char const* _Str1, char const* _Str2, uint64_t _MaxCount)
{
    /* tailcall */
    return strncmp(_Str1, _Str2, _MaxCount);
}

int32_t vfprintf(FILE* const _Stream, char const* const _Format, va_list _ArgList)
{
    /* tailcall */
    return vfprintf(_Stream, _Format, _ArgList);
}

uint64_t wcslen(wchar16 const* _String)
{
    /* tailcall */
    return wcslen(_String);
}

int32_t WideCharToMultiByte(uint32_t CodePage, uint32_t dwFlags, wchar16* lpWideCharStr, int32_t cchWideChar, PSTR lpMultiByteStr, int32_t cbMultiByte, PSTR lpDefaultChar, BOOL* lpUsedDefaultChar)
{
    /* tailcall */
    return WideCharToMultiByte(CodePage, dwFlags, lpWideCharStr, cchWideChar, lpMultiByteStr, cbMultiByte, lpDefaultChar, lpUsedDefaultChar);
}

uint64_t VirtualQuery(void* lpAddress, MEMORY_BASIC_INFORMATION* lpBuffer, uint64_t dwLength)
{
    /* tailcall */
    return VirtualQuery(lpAddress, lpBuffer, dwLength);
}

BOOL VirtualProtect(void* lpAddress, uint64_t dwSize, enum PAGE_PROTECTION_FLAGS flNewProtect, enum PAGE_PROTECTION_FLAGS* lpflOldProtect)
{
    /* tailcall */
    return VirtualProtect(lpAddress, dwSize, flNewProtect, lpflOldProtect);
}

int64_t TlsGetValue(uint32_t dwTlsIndex)
{
    /* tailcall */
    return TlsGetValue(dwTlsIndex);
}

void Sleep(uint32_t dwMilliseconds)
{
    /* tailcall */
    return Sleep(dwMilliseconds);
}

LPTOP_LEVEL_EXCEPTION_FILTER SetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER lpTopLevelExceptionFilter)
{
    /* tailcall */
    return SetUnhandledExceptionFilter(lpTopLevelExceptionFilter);
}

int32_t MultiByteToWideChar(uint32_t CodePage, enum MULTI_BYTE_TO_WIDE_CHAR_FLAGS dwFlags, uint8_t* lpMultiByteStr, int32_t cbMultiByte, wchar16* lpWideCharStr, int32_t cchWideChar)
{
    /* tailcall */
    return MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}

void LeaveCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    /* tailcall */
    return LeaveCriticalSection(lpCriticalSection);
}

BOOL IsDBCSLeadByteEx(uint32_t CodePage, uint8_t TestChar)
{
    /* tailcall */
    return IsDBCSLeadByteEx(CodePage, TestChar);
}

void InitializeCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    /* tailcall */
    return InitializeCriticalSection(lpCriticalSection);
}

enum WIN32_ERROR GetLastError()
{
    /* tailcall */
    return GetLastError();
}

void EnterCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    /* tailcall */
    return EnterCriticalSection(lpCriticalSection);
}

void DeleteCriticalSection(CRITICAL_SECTION* lpCriticalSection)
{
    /* tailcall */
    return DeleteCriticalSection(lpCriticalSection);
}

int64_t register_frame_ctor()
{
    /* tailcall */
    return __gcc_register_frame();
}

