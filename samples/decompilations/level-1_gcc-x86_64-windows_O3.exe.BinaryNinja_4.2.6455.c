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

int64_t printf.constprop.0(int64_t arg1, int64_t arg2)
{
    argv = arg2;
    int64_t r8;
    arg_18 = r8;
    int64_t r9;
    arg_20 = r9;
    int64_t* var_10 = &argv;
    return __mingw_vfprintf(__imp___acrt_iob_func(), &_.rdata, &argv);
}

int64_t multiplication_table(int32_t arg1)
{
    printf.constprop.0(&_.rdata, 0);
    printf.constprop.0(&_.rdata, 1);
    printf.constprop.0(&_.rdata, 2);
    printf.constprop.0(&_.rdata, 3);
    printf.constprop.0(&_.rdata, 4);
    printf.constprop.0(&_.rdata, 5);
    printf.constprop.0(&_.rdata, 6);
    printf.constprop.0(&_.rdata, 7);
    printf.constprop.0(&_.rdata, 8);
    printf.constprop.0(&_.rdata, 9);
    printf.constprop.0(&_.rdata, 0xa);
    printf.constprop.0(&_.rdata, 0xb);
    printf.constprop.0(&_.rdata, 0xc);
    printf.constprop.0(&_.rdata, 0xd);
    printf.constprop.0(&_.rdata, 0xe);
    printf.constprop.0(&_.rdata, 0xf);
    printf.constprop.0(&_.rdata, 0x10);
    printf.constprop.0(&_.rdata, 0x11);
    printf.constprop.0(&_.rdata, 0x12);
    printf.constprop.0(&_.rdata, 0x13);
    /* tailcall */
    return printf.constprop.0(&_.rdata, 0x14);
}

int64_t decrypt_message()
{
    int128_t var_108 = data_14000c030;
    int128_t zmm0 = data_14000c040;
    int128_t var_e8;
    __builtin_strncpy(&var_e8, " !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f", 0x60);
    int128_t var_88;
    __builtin_memcpy(&var_88, "\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe\xff", 0x80);
    uint64_t rax = key[0];
    char rcx = *(&var_108 + rax);
    *(&var_108 + rax) = 0;
    var_108 = rcx;
    char rcx_1 = *var_108[1];
    char rax_3 = key[1][0] + rcx_1 + rax;
    uint64_t rdx_1 = rax_3;
    char r8 = *(&var_108 + rdx_1);
    *(&var_108 + rdx_1) = rcx_1;
    char rcx_2 = *var_108[2];
    *var_108[1] = r8;
    char rax_4 = rax_3 + key[2][0] + rcx_2;
    uint64_t rdx_2 = rax_4;
    char r8_1 = *(&var_108 + rdx_2);
    *(&var_108 + rdx_2) = rcx_2;
    char rcx_3 = *var_108[3];
    *var_108[2] = r8_1;
    char rax_5 = rax_4 + key[3][0] + rcx_3;
    uint64_t rdx_3 = rax_5;
    char r8_2 = *(&var_108 + rdx_3);
    *(&var_108 + rdx_3) = rcx_3;
    char rcx_4 = *var_108[4];
    *var_108[3] = r8_2;
    char rax_6 = rax_5 + key[4][0] + rcx_4;
    uint64_t rdx_4 = rax_6;
    char r8_3 = *(&var_108 + rdx_4);
    *(&var_108 + rdx_4) = rcx_4;
    char rcx_5 = *var_108[5];
    *var_108[4] = r8_3;
    char rax_7 = rax_6 + key[5][0] + rcx_5;
    uint64_t rdx_5 = rax_7;
    char r8_4 = *(&var_108 + rdx_5);
    *(&var_108 + rdx_5) = rcx_5;
    char rcx_6 = *var_108[6];
    *var_108[5] = r8_4;
    char rax_8 = rax_7 + key[6][0] + rcx_6;
    uint64_t rdx_6 = rax_8;
    char r8_5 = *(&var_108 + rdx_6);
    *(&var_108 + rdx_6) = rcx_6;
    char rcx_7 = *var_108[7];
    *var_108[6] = r8_5;
    char rax_9 = rax_8 + key[7][0] + rcx_7;
    uint64_t rdx_7 = rax_9;
    char r8_6 = *(&var_108 + rdx_7);
    *(&var_108 + rdx_7) = rcx_7;
    char rcx_8 = *var_108[8];
    *var_108[7] = r8_6;
    char rax_10 = rax_9 + key[8][0] + rcx_8;
    uint64_t rdx_8 = rax_10;
    char r8_7 = *(&var_108 + rdx_8);
    *(&var_108 + rdx_8) = rcx_8;
    char rcx_9 = *var_108[9];
    *var_108[8] = r8_7;
    char rax_11 = rax_10 + key[9][0] + rcx_9;
    uint64_t rdx_9 = rax_11;
    char r8_8 = *(&var_108 + rdx_9);
    *(&var_108 + rdx_9) = rcx_9;
    char rcx_10 = *var_108[0xa];
    *var_108[9] = r8_8;
    char rax_12 = rax_11 + key[0xa][0] + rcx_10;
    uint64_t rdx_10 = rax_12;
    char r8_9 = *(&var_108 + rdx_10);
    *(&var_108 + rdx_10) = rcx_10;
    char rcx_11 = *var_108[0xb];
    *var_108[0xa] = r8_9;
    char rax_13 = rax_12 + key[0xb][0] + rcx_11;
    uint64_t rdx_11 = rax_13;
    char r8_10 = *(&var_108 + rdx_11);
    *(&var_108 + rdx_11) = rcx_11;
    char rcx_12 = *var_108[0xc];
    *var_108[0xb] = r8_10;
    char rax_14 = rax_13 + key[0xc][0] + rcx_12;
    uint64_t rdx_12 = rax_14;
    char r8_11 = *(&var_108 + rdx_12);
    *(&var_108 + rdx_12) = rcx_12;
    char rcx_13 = *var_108[0xd];
    *var_108[0xc] = r8_11;
    char rax_15 = rax_14 + key[0xd][0] + rcx_13;
    uint64_t rdx_13 = rax_15;
    char r8_12 = *(&var_108 + rdx_13);
    *(&var_108 + rdx_13) = rcx_13;
    char rcx_14 = *var_108[0xe];
    *var_108[0xd] = r8_12;
    char rax_16 = rax_15 + key[0xe][0] + rcx_14;
    uint64_t rdx_14 = rax_16;
    char r8_13 = *(&var_108 + rdx_14);
    *(&var_108 + rdx_14) = rcx_14;
    char rcx_15 = *var_108[0xf];
    *var_108[0xe] = r8_13;
    char rax_17 = rax_16 + key[0xf][0] + rcx_15;
    uint64_t rdx_15 = rax_17;
    char r8_14 = *(&var_108 + rdx_15);
    *(&var_108 + rdx_15) = rcx_15;
    char rcx_16 = zmm0;
    *var_108[0xf] = r8_14;
    char rax_18 = rax_17 + key[0x10][0] + rcx_16;
    uint64_t rdx_16 = rax_18;
    char r8_15 = *(&var_108 + rdx_16);
    *(&var_108 + rdx_16) = rcx_16;
    char rcx_17 = *zmm0[1];
    int128_t var_f8;
    var_f8 = r8_15;
    char rax_19 = rax_18 + key[0x11][0] + rcx_17;
    uint64_t rdx_17 = rax_19;
    char r8_16 = *(&var_108 + rdx_17);
    *(&var_108 + rdx_17) = rcx_17;
    char rcx_18 = *var_f8[2];
    *var_f8[1] = r8_16;
    char rax_20 = rax_19 + key[0x12][0] + rcx_18;
    uint64_t rdx_18 = rax_20;
    char r8_17 = *(&var_108 + rdx_18);
    *(&var_108 + rdx_18) = rcx_18;
    char rcx_19 = *var_f8[3];
    *var_f8[2] = r8_17;
    char rax_21 = rax_20 + key[0x13][0] + rcx_19;
    uint64_t rdx_19 = rax_21;
    char r8_18 = *(&var_108 + rdx_19);
    *(&var_108 + rdx_19) = rcx_19;
    char rcx_20 = *var_f8[4];
    *var_f8[3] = r8_18;
    char rax_22 = rax_21 + key[0x14][0] + rcx_20;
    uint64_t rdx_20 = rax_22;
    char r8_19 = *(&var_108 + rdx_20);
    *(&var_108 + rdx_20) = rcx_20;
    char rcx_21 = *var_f8[5];
    *var_f8[4] = r8_19;
    char rax_23 = rax_22 + key[0x15][0] + rcx_21;
    uint64_t rdx_21 = rax_23;
    char r8_20 = *(&var_108 + rdx_21);
    *(&var_108 + rdx_21) = rcx_21;
    char rcx_22 = *var_f8[6];
    *var_f8[5] = r8_20;
    char rax_24 = rax_23 + key[0x16][0] + rcx_22;
    uint64_t rdx_22 = rax_24;
    char r8_21 = *(&var_108 + rdx_22);
    *(&var_108 + rdx_22) = rcx_22;
    char rcx_23 = *var_f8[7];
    *var_f8[6] = r8_21;
    char rax_25 = rax_24 + key[0x17][0] + rcx_23;
    uint64_t rdx_23 = rax_25;
    char r8_22 = *(&var_108 + rdx_23);
    *(&var_108 + rdx_23) = rcx_23;
    char rcx_24 = *var_f8[8];
    *var_f8[7] = r8_22;
    char rax_26 = rax_25 + key[0x18][0] + rcx_24;
    uint64_t rdx_24 = rax_26;
    char r8_23 = *(&var_108 + rdx_24);
    *(&var_108 + rdx_24) = rcx_24;
    char rcx_25 = *var_f8[9];
    *var_f8[8] = r8_23;
    char rax_27 = rax_26 + key[0x19][0] + rcx_25;
    uint64_t rdx_25 = rax_27;
    char r8_24 = *(&var_108 + rdx_25);
    *(&var_108 + rdx_25) = rcx_25;
    char rcx_26 = *var_f8[0xa];
    *var_f8[9] = r8_24;
    char rax_28 = rax_27 + key[0x1a][0] + rcx_26;
    uint64_t rdx_26 = rax_28;
    char r8_25 = *(&var_108 + rdx_26);
    *(&var_108 + rdx_26) = rcx_26;
    char rcx_27 = *var_f8[0xb];
    *var_f8[0xa] = r8_25;
    char rax_29 = rax_28 + key[0x1b][0] + rcx_27;
    uint64_t rdx_27 = rax_29;
    char r8_26 = *(&var_108 + rdx_27);
    *(&var_108 + rdx_27) = rcx_27;
    char rcx_28 = *var_f8[0xc];
    *var_f8[0xb] = r8_26;
    char rax_30 = rax_29 + key[0x1c][0] + rcx_28;
    uint64_t rdx_28 = rax_30;
    char r8_27 = *(&var_108 + rdx_28);
    *(&var_108 + rdx_28) = rcx_28;
    char rcx_29 = *var_f8[0xd];
    *var_f8[0xc] = r8_27;
    char rax_31 = rax_30 + key[0x1d][0] + rcx_29;
    uint64_t rdx_29 = rax_31;
    char r8_28 = *(&var_108 + rdx_29);
    *(&var_108 + rdx_29) = rcx_29;
    char rcx_30 = *var_f8[0xe];
    *var_f8[0xd] = r8_28;
    char rax_32 = rax_31 + key[0x1e][0] + rcx_30;
    uint64_t rdx_30 = rax_32;
    char r8_29 = *(&var_108 + rdx_30);
    *(&var_108 + rdx_30) = rcx_30;
    char rcx_31 = *var_f8[0xf];
    *var_f8[0xe] = r8_29;
    char rax_33 = rax_32 + key[0x1f][0] + rcx_31;
    uint64_t rdx_31 = rax_33;
    char r8_30 = *(&var_108 + rdx_31);
    *(&var_108 + rdx_31) = rcx_31;
    char rcx_32 = var_e8;
    *var_f8[0xf] = r8_30;
    char rax_34 = rax_33 + key[0x20][0] + rcx_32;
    uint64_t rdx_32 = rax_34;
    char r8_31 = *(&var_108 + rdx_32);
    *(&var_108 + rdx_32) = rcx_32;
    char rcx_33 = *var_e8[1];
    var_e8 = r8_31;
    char rax_35 = rax_34 + key[0x21][0] + rcx_33;
    uint64_t rdx_33 = rax_35;
    char r8_32 = *(&var_108 + rdx_33);
    *(&var_108 + rdx_33) = rcx_33;
    char rcx_34 = *var_e8[2];
    *var_e8[1] = r8_32;
    char rax_36 = rax_35 + key[0x22][0] + rcx_34;
    uint64_t rdx_34 = rax_36;
    char r8_33 = *(&var_108 + rdx_34);
    *(&var_108 + rdx_34) = rcx_34;
    char rcx_35 = *var_e8[3];
    *var_e8[2] = r8_33;
    char rax_37 = rax_36 + key[0x23][0] + rcx_35;
    uint64_t rdx_35 = rax_37;
    char r8_34 = *(&var_108 + rdx_35);
    *(&var_108 + rdx_35) = rcx_35;
    char rcx_36 = *var_e8[4];
    *var_e8[3] = r8_34;
    char rax_38 = rax_37 + key[0x24][0] + rcx_36;
    uint64_t rdx_36 = rax_38;
    char r8_35 = *(&var_108 + rdx_36);
    *(&var_108 + rdx_36) = rcx_36;
    char rcx_37 = *var_e8[5];
    *var_e8[4] = r8_35;
    char rax_39 = rax_38 + key[0x25][0] + rcx_37;
    uint64_t rdx_37 = rax_39;
    char r8_36 = *(&var_108 + rdx_37);
    *(&var_108 + rdx_37) = rcx_37;
    char rcx_38 = *var_e8[6];
    *var_e8[5] = r8_36;
    char rax_40 = rax_39 + key[0x26][0] + rcx_38;
    uint64_t rdx_38 = rax_40;
    char r8_37 = *(&var_108 + rdx_38);
    *(&var_108 + rdx_38) = rcx_38;
    char rcx_39 = *var_e8[7];
    *var_e8[6] = r8_37;
    char rax_41 = rax_40 + key[0x27][0] + rcx_39;
    uint64_t rdx_39 = rax_41;
    char r8_38 = *(&var_108 + rdx_39);
    *(&var_108 + rdx_39) = rcx_39;
    char rcx_40 = *var_e8[8];
    *var_e8[7] = r8_38;
    char rax_42 = rax_41 + key[0x28][0] + rcx_40;
    uint64_t rdx_40 = rax_42;
    char r8_39 = *(&var_108 + rdx_40);
    *(&var_108 + rdx_40) = rcx_40;
    char rcx_41 = *var_e8[9];
    *var_e8[8] = r8_39;
    char rax_43 = rax_42 + key[0x29][0] + rcx_41;
    uint64_t rdx_41 = rax_43;
    char r8_40 = *(&var_108 + rdx_41);
    *(&var_108 + rdx_41) = rcx_41;
    char rcx_42 = *var_e8[0xa];
    *var_e8[9] = r8_40;
    char rax_44 = rax_43 + key[0x2a][0] + rcx_42;
    uint64_t rdx_42 = rax_44;
    char r8_41 = *(&var_108 + rdx_42);
    *(&var_108 + rdx_42) = rcx_42;
    char rcx_43 = *var_e8[0xb];
    *var_e8[0xa] = r8_41;
    char rax_45 = rax_44 + key[0x2b][0] + rcx_43;
    uint64_t rdx_43 = rax_45;
    char r8_42 = *(&var_108 + rdx_43);
    *(&var_108 + rdx_43) = rcx_43;
    char rcx_44 = *var_e8[0xc];
    *var_e8[0xb] = r8_42;
    char rax_46 = rax_45 + key[0x2c][0] + rcx_44;
    uint64_t rdx_44 = rax_46;
    char r8_43 = *(&var_108 + rdx_44);
    *(&var_108 + rdx_44) = rcx_44;
    char rcx_45 = *var_e8[0xd];
    *var_e8[0xc] = r8_43;
    char rax_47 = rax_46 + key[0x2d][0] + rcx_45;
    uint64_t rdx_45 = rax_47;
    char r8_44 = *(&var_108 + rdx_45);
    *(&var_108 + rdx_45) = rcx_45;
    char rcx_46 = *var_e8[0xe];
    *var_e8[0xd] = r8_44;
    char rax_48 = rax_47 + key[0x2e][0] + rcx_46;
    uint64_t rdx_46 = rax_48;
    char r8_45 = *(&var_108 + rdx_46);
    *(&var_108 + rdx_46) = rcx_46;
    char rcx_47 = *var_e8[0xf];
    *var_e8[0xe] = r8_45;
    char rax_49 = rax_48 + key[0x2f][0] + rcx_47;
    uint64_t rdx_47 = rax_49;
    char r8_46 = *(&var_108 + rdx_47);
    *(&var_108 + rdx_47) = rcx_47;
    int128_t var_d8;
    char rcx_48 = var_d8;
    *var_e8[0xf] = r8_46;
    char rax_50 = rax_49 + key[0x30][0] + rcx_48;
    uint64_t rdx_48 = rax_50;
    char r8_47 = *(&var_108 + rdx_48);
    *(&var_108 + rdx_48) = rcx_48;
    char rcx_49 = *var_d8[1];
    var_d8 = r8_47;
    char rax_51 = rax_50 + key[0x31][0] + rcx_49;
    uint64_t rdx_49 = rax_51;
    char r8_48 = *(&var_108 + rdx_49);
    *(&var_108 + rdx_49) = rcx_49;
    char rcx_50 = *var_d8[2];
    *var_d8[1] = r8_48;
    char rax_52 = rax_51 + key[0x32][0] + rcx_50;
    uint64_t rdx_50 = rax_52;
    char r8_49 = *(&var_108 + rdx_50);
    *(&var_108 + rdx_50) = rcx_50;
    char rcx_51 = *var_d8[3];
    *var_d8[2] = r8_49;
    char rax_53 = rax_52 + key[0x33][0] + rcx_51;
    uint64_t rdx_51 = rax_53;
    char r8_50 = *(&var_108 + rdx_51);
    *(&var_108 + rdx_51) = rcx_51;
    char rcx_52 = *var_d8[4];
    *var_d8[3] = r8_50;
    char rax_54 = rax_53 + key[0x34][0] + rcx_52;
    uint64_t rdx_52 = rax_54;
    char r8_51 = *(&var_108 + rdx_52);
    *(&var_108 + rdx_52) = rcx_52;
    char rcx_53 = *var_d8[5];
    *var_d8[4] = r8_51;
    char rax_55 = rax_54 + key[0x35][0] + rcx_53;
    uint64_t rdx_53 = rax_55;
    char r8_52 = *(&var_108 + rdx_53);
    *(&var_108 + rdx_53) = rcx_53;
    char rcx_54 = *var_d8[6];
    *var_d8[5] = r8_52;
    char rax_56 = rax_55 + key[0x36][0] + rcx_54;
    uint64_t rdx_54 = rax_56;
    char r8_53 = *(&var_108 + rdx_54);
    *(&var_108 + rdx_54) = rcx_54;
    char rcx_55 = *var_d8[7];
    *var_d8[6] = r8_53;
    char rax_57 = rax_56 + key[0x37][0] + rcx_55;
    uint64_t rdx_55 = rax_57;
    char r8_54 = *(&var_108 + rdx_55);
    *(&var_108 + rdx_55) = rcx_55;
    char rcx_56 = *var_d8[8];
    *var_d8[7] = r8_54;
    char rax_58 = rax_57 + key[0x38][0] + rcx_56;
    uint64_t rdx_56 = rax_58;
    char r8_55 = *(&var_108 + rdx_56);
    *(&var_108 + rdx_56) = rcx_56;
    char rcx_57 = *var_d8[9];
    *var_d8[8] = r8_55;
    char rax_59 = rax_58 + key[0x39][0] + rcx_57;
    uint64_t rdx_57 = rax_59;
    char r8_56 = *(&var_108 + rdx_57);
    *(&var_108 + rdx_57) = rcx_57;
    char rcx_58 = *var_d8[0xa];
    *var_d8[9] = r8_56;
    char rax_60 = rax_59 + key[0x3a][0] + rcx_58;
    uint64_t rdx_58 = rax_60;
    char r8_57 = *(&var_108 + rdx_58);
    *(&var_108 + rdx_58) = rcx_58;
    char rcx_59 = *var_d8[0xb];
    *var_d8[0xa] = r8_57;
    char rax_61 = rax_60 + key[0x3b][0] + rcx_59;
    uint64_t rdx_59 = rax_61;
    char r8_58 = *(&var_108 + rdx_59);
    *(&var_108 + rdx_59) = rcx_59;
    char rcx_60 = *var_d8[0xc];
    *var_d8[0xb] = r8_58;
    char rax_62 = rax_61 + key[0x3c][0] + rcx_60;
    uint64_t rdx_60 = rax_62;
    char r8_59 = *(&var_108 + rdx_60);
    *(&var_108 + rdx_60) = rcx_60;
    char rcx_61 = *var_d8[0xd];
    *var_d8[0xc] = r8_59;
    char rax_63 = rax_62 + key[0x3d][0] + rcx_61;
    uint64_t rdx_61 = rax_63;
    char r8_60 = *(&var_108 + rdx_61);
    *(&var_108 + rdx_61) = rcx_61;
    char rcx_62 = *var_d8[0xe];
    *var_d8[0xd] = r8_60;
    char rax_64 = rax_63 + key[0x3e][0] + rcx_62;
    uint64_t rdx_62 = rax_64;
    char r8_61 = *(&var_108 + rdx_62);
    *(&var_108 + rdx_62) = rcx_62;
    char rcx_63 = *var_d8[0xf];
    *var_d8[0xe] = r8_61;
    char rax_65 = rax_64 + key[0x3f][0] + rcx_63;
    uint64_t rdx_63 = rax_65;
    char r8_62 = *(&var_108 + rdx_63);
    *(&var_108 + rdx_63) = rcx_63;
    int128_t var_c8;
    char rcx_64 = var_c8;
    *var_d8[0xf] = r8_62;
    char rax_66 = rax_65 + key[0x40][0] + rcx_64;
    uint64_t rdx_64 = rax_66;
    char r8_63 = *(&var_108 + rdx_64);
    *(&var_108 + rdx_64) = rcx_64;
    char rcx_65 = *var_c8[1];
    var_c8 = r8_63;
    char rax_67 = rax_66 + key[0x41][0] + rcx_65;
    uint64_t rdx_65 = rax_67;
    char r8_64 = *(&var_108 + rdx_65);
    *(&var_108 + rdx_65) = rcx_65;
    char rcx_66 = *var_c8[2];
    *var_c8[1] = r8_64;
    char rax_68 = rax_67 + key[0x42][0] + rcx_66;
    uint64_t rdx_66 = rax_68;
    char r8_65 = *(&var_108 + rdx_66);
    *(&var_108 + rdx_66) = rcx_66;
    char rcx_67 = *var_c8[3];
    *var_c8[2] = r8_65;
    char rax_69 = rax_68 + key[0x43][0] + rcx_67;
    uint64_t rdx_67 = rax_69;
    char r8_66 = *(&var_108 + rdx_67);
    *(&var_108 + rdx_67) = rcx_67;
    char rcx_68 = *var_c8[4];
    *var_c8[3] = r8_66;
    char rax_70 = rax_69 + key[0x44][0] + rcx_68;
    uint64_t rdx_68 = rax_70;
    char r8_67 = *(&var_108 + rdx_68);
    *(&var_108 + rdx_68) = rcx_68;
    char rcx_69 = *var_c8[5];
    *var_c8[4] = r8_67;
    char rax_71 = rax_70 + key[0x45][0] + rcx_69;
    uint64_t rdx_69 = rax_71;
    char r8_68 = *(&var_108 + rdx_69);
    *(&var_108 + rdx_69) = rcx_69;
    char rcx_70 = *var_c8[6];
    *var_c8[5] = r8_68;
    char rax_72 = rax_71 + key[0x46][0] + rcx_70;
    uint64_t rdx_70 = rax_72;
    char r8_69 = *(&var_108 + rdx_70);
    *(&var_108 + rdx_70) = rcx_70;
    char rcx_71 = *var_c8[7];
    *var_c8[6] = r8_69;
    char rax_73 = rax_72 + key[0x47][0] + rcx_71;
    uint64_t rdx_71 = rax_73;
    char r8_70 = *(&var_108 + rdx_71);
    *(&var_108 + rdx_71) = rcx_71;
    char rcx_72 = *var_c8[8];
    *var_c8[7] = r8_70;
    char rax_74 = rax_73 + key[0x48][0] + rcx_72;
    uint64_t rdx_72 = rax_74;
    char r8_71 = *(&var_108 + rdx_72);
    *(&var_108 + rdx_72) = rcx_72;
    char rcx_73 = *var_c8[9];
    *var_c8[8] = r8_71;
    char rax_75 = rax_74 + key[0x49][0] + rcx_73;
    uint64_t rdx_73 = rax_75;
    char r8_72 = *(&var_108 + rdx_73);
    *(&var_108 + rdx_73) = rcx_73;
    char rcx_74 = *var_c8[0xa];
    *var_c8[9] = r8_72;
    char rax_76 = rax_75 + key[0x4a][0] + rcx_74;
    uint64_t rdx_74 = rax_76;
    char r8_73 = *(&var_108 + rdx_74);
    *(&var_108 + rdx_74) = rcx_74;
    char rcx_75 = *var_c8[0xb];
    *var_c8[0xa] = r8_73;
    char rax_77 = rax_76 + key[0x4b][0] + rcx_75;
    uint64_t rdx_75 = rax_77;
    char r8_74 = *(&var_108 + rdx_75);
    *(&var_108 + rdx_75) = rcx_75;
    char rcx_76 = *var_c8[0xc];
    *var_c8[0xb] = r8_74;
    char rax_78 = rax_77 + key[0x4c][0] + rcx_76;
    uint64_t rdx_76 = rax_78;
    char r8_75 = *(&var_108 + rdx_76);
    *(&var_108 + rdx_76) = rcx_76;
    char rcx_77 = *var_c8[0xd];
    *var_c8[0xc] = r8_75;
    char rax_79 = rax_78 + key[0x4d][0] + rcx_77;
    uint64_t rdx_77 = rax_79;
    char r8_76 = *(&var_108 + rdx_77);
    *(&var_108 + rdx_77) = rcx_77;
    char rcx_78 = *var_c8[0xe];
    *var_c8[0xd] = r8_76;
    char rax_80 = rax_79 + key[0x4e][0] + rcx_78;
    uint64_t rdx_78 = rax_80;
    char r8_77 = *(&var_108 + rdx_78);
    *(&var_108 + rdx_78) = rcx_78;
    char rcx_79 = *var_c8[0xf];
    *var_c8[0xe] = r8_77;
    char rax_81 = rax_80 + key[0x4f][0] + rcx_79;
    uint64_t rdx_79 = rax_81;
    char r8_78 = *(&var_108 + rdx_79);
    *(&var_108 + rdx_79) = rcx_79;
    int128_t var_b8;
    char rcx_80 = var_b8;
    *var_c8[0xf] = r8_78;
    char rax_82 = rax_81 + key[0x50][0] + rcx_80;
    uint64_t rdx_80 = rax_82;
    char r8_79 = *(&var_108 + rdx_80);
    *(&var_108 + rdx_80) = rcx_80;
    char rcx_81 = *var_b8[1];
    var_b8 = r8_79;
    char rax_83 = rax_82 + key[0x51][0] + rcx_81;
    uint64_t rdx_81 = rax_83;
    char r8_80 = *(&var_108 + rdx_81);
    *(&var_108 + rdx_81) = rcx_81;
    char rcx_82 = *var_b8[2];
    *var_b8[1] = r8_80;
    char rax_84 = rax_83 + key[0x52][0] + rcx_82;
    uint64_t rdx_82 = rax_84;
    char r8_81 = *(&var_108 + rdx_82);
    *(&var_108 + rdx_82) = rcx_82;
    char rcx_83 = *var_b8[3];
    *var_b8[2] = r8_81;
    char rax_85 = rax_84 + key[0x53][0] + rcx_83;
    uint64_t rdx_83 = rax_85;
    char r8_82 = *(&var_108 + rdx_83);
    *(&var_108 + rdx_83) = rcx_83;
    char rcx_84 = *var_b8[4];
    *var_b8[3] = r8_82;
    char rax_86 = rax_85 + key[0x54][0] + rcx_84;
    uint64_t rdx_84 = rax_86;
    char r8_83 = *(&var_108 + rdx_84);
    *(&var_108 + rdx_84) = rcx_84;
    char rcx_85 = *var_b8[5];
    *var_b8[4] = r8_83;
    char rax_87 = rax_86 + key[0x55][0] + rcx_85;
    uint64_t rdx_85 = rax_87;
    char r8_84 = *(&var_108 + rdx_85);
    *(&var_108 + rdx_85) = rcx_85;
    char rcx_86 = *var_b8[6];
    *var_b8[5] = r8_84;
    char rax_88 = rax_87 + key[0x56][0] + rcx_86;
    uint64_t rdx_86 = rax_88;
    char r8_85 = *(&var_108 + rdx_86);
    *(&var_108 + rdx_86) = rcx_86;
    char rcx_87 = *var_b8[7];
    *var_b8[6] = r8_85;
    char rax_89 = rax_88 + key[0x57][0] + rcx_87;
    uint64_t rdx_87 = rax_89;
    char r8_86 = *(&var_108 + rdx_87);
    *(&var_108 + rdx_87) = rcx_87;
    char rcx_88 = *var_b8[8];
    *var_b8[7] = r8_86;
    char rax_90 = rax_89 + key[0x58][0] + rcx_88;
    uint64_t rdx_88 = rax_90;
    char r8_87 = *(&var_108 + rdx_88);
    *(&var_108 + rdx_88) = rcx_88;
    char rcx_89 = *var_b8[9];
    *var_b8[8] = r8_87;
    char rax_91 = rax_90 + key[0x59][0] + rcx_89;
    uint64_t rdx_89 = rax_91;
    char r8_88 = *(&var_108 + rdx_89);
    *(&var_108 + rdx_89) = rcx_89;
    char rcx_90 = *var_b8[0xa];
    *var_b8[9] = r8_88;
    char rax_92 = rax_91 + key[0x5a][0] + rcx_90;
    uint64_t rdx_90 = rax_92;
    char r8_89 = *(&var_108 + rdx_90);
    *(&var_108 + rdx_90) = rcx_90;
    char rcx_91 = *var_b8[0xb];
    *var_b8[0xa] = r8_89;
    char rax_93 = rax_92 + key[0x5b][0] + rcx_91;
    uint64_t rdx_91 = rax_93;
    char r8_90 = *(&var_108 + rdx_91);
    *(&var_108 + rdx_91) = rcx_91;
    char rcx_92 = *var_b8[0xc];
    *var_b8[0xb] = r8_90;
    char rax_94 = rax_93 + key[0x5c][0] + rcx_92;
    uint64_t rdx_92 = rax_94;
    char r8_91 = *(&var_108 + rdx_92);
    *(&var_108 + rdx_92) = rcx_92;
    char rcx_93 = *var_b8[0xd];
    *var_b8[0xc] = r8_91;
    char rax_95 = rax_94 + key[0x5d][0] + rcx_93;
    uint64_t rdx_93 = rax_95;
    char r8_92 = *(&var_108 + rdx_93);
    *(&var_108 + rdx_93) = rcx_93;
    char rcx_94 = *var_b8[0xe];
    *var_b8[0xd] = r8_92;
    char rax_96 = rax_95 + key[0x5e][0] + rcx_94;
    uint64_t rdx_94 = rax_96;
    char r8_93 = *(&var_108 + rdx_94);
    *(&var_108 + rdx_94) = rcx_94;
    char rcx_95 = *var_b8[0xf];
    *var_b8[0xe] = r8_93;
    char rax_97 = rax_96 + key[0x5f][0] + rcx_95;
    uint64_t rdx_95 = rax_97;
    char r8_94 = *(&var_108 + rdx_95);
    *(&var_108 + rdx_95) = rcx_95;
    int128_t var_a8;
    char rcx_96 = var_a8;
    *var_b8[0xf] = r8_94;
    char rax_98 = rax_97 + key[0x60][0] + rcx_96;
    uint64_t rdx_96 = rax_98;
    char r8_95 = *(&var_108 + rdx_96);
    *(&var_108 + rdx_96) = rcx_96;
    char rcx_97 = *var_a8[1];
    var_a8 = r8_95;
    char rax_99 = rax_98 + key[0x61][0] + rcx_97;
    uint64_t rdx_97 = rax_99;
    char r8_96 = *(&var_108 + rdx_97);
    *(&var_108 + rdx_97) = rcx_97;
    char rcx_98 = *var_a8[2];
    *var_a8[1] = r8_96;
    char rax_100 = rax_99 + key[0x62][0] + rcx_98;
    uint64_t rdx_98 = rax_100;
    char r8_97 = *(&var_108 + rdx_98);
    *(&var_108 + rdx_98) = rcx_98;
    char rcx_99 = *var_a8[3];
    *var_a8[2] = r8_97;
    char rax_101 = rax_100 + key[0x63][0] + rcx_99;
    uint64_t rdx_99 = rax_101;
    char r8_98 = *(&var_108 + rdx_99);
    *(&var_108 + rdx_99) = rcx_99;
    char rcx_100 = *var_a8[4];
    *var_a8[3] = r8_98;
    char rax_102 = rax_101 + key[0x64][0] + rcx_100;
    uint64_t rdx_100 = rax_102;
    char r8_99 = *(&var_108 + rdx_100);
    *(&var_108 + rdx_100) = rcx_100;
    char rcx_101 = *var_a8[5];
    *var_a8[4] = r8_99;
    char rax_103 = rax_102 + key[0x65][0] + rcx_101;
    uint64_t rdx_101 = rax_103;
    char r8_100 = *(&var_108 + rdx_101);
    *(&var_108 + rdx_101) = rcx_101;
    char rcx_102 = *var_a8[6];
    *var_a8[5] = r8_100;
    char rax_104 = rax_103 + key[0x66][0] + rcx_102;
    uint64_t rdx_102 = rax_104;
    char r8_101 = *(&var_108 + rdx_102);
    *(&var_108 + rdx_102) = rcx_102;
    char rcx_103 = *var_a8[7];
    *var_a8[6] = r8_101;
    char rax_105 = rax_104 + key[0x67][0] + rcx_103;
    uint64_t rdx_103 = rax_105;
    char r8_102 = *(&var_108 + rdx_103);
    *(&var_108 + rdx_103) = rcx_103;
    char rcx_104 = *var_a8[8];
    *var_a8[7] = r8_102;
    char rax_106 = rax_105 + key[0x68][0] + rcx_104;
    uint64_t rdx_104 = rax_106;
    char r8_103 = *(&var_108 + rdx_104);
    *(&var_108 + rdx_104) = rcx_104;
    char rcx_105 = *var_a8[9];
    *var_a8[8] = r8_103;
    char rax_107 = rax_106 + key[0x69][0] + rcx_105;
    uint64_t rdx_105 = rax_107;
    char r8_104 = *(&var_108 + rdx_105);
    *(&var_108 + rdx_105) = rcx_105;
    char rcx_106 = *var_a8[0xa];
    *var_a8[9] = r8_104;
    char rax_108 = rax_107 + key[0x6a][0] + rcx_106;
    uint64_t rdx_106 = rax_108;
    char r8_105 = *(&var_108 + rdx_106);
    *(&var_108 + rdx_106) = rcx_106;
    char rcx_107 = *var_a8[0xb];
    *var_a8[0xa] = r8_105;
    char rax_109 = rax_108 + key[0x6b][0] + rcx_107;
    uint64_t rdx_107 = rax_109;
    char r8_106 = *(&var_108 + rdx_107);
    *(&var_108 + rdx_107) = rcx_107;
    char rcx_108 = *var_a8[0xc];
    *var_a8[0xb] = r8_106;
    char rax_110 = rax_109 + key[0x6c][0] + rcx_108;
    uint64_t rdx_108 = rax_110;
    char r8_107 = *(&var_108 + rdx_108);
    *(&var_108 + rdx_108) = rcx_108;
    char rcx_109 = *var_a8[0xd];
    *var_a8[0xc] = r8_107;
    char rax_111 = rax_110 + key[0x6d][0] + rcx_109;
    uint64_t rdx_109 = rax_111;
    char r8_108 = *(&var_108 + rdx_109);
    *(&var_108 + rdx_109) = rcx_109;
    char rcx_110 = *var_a8[0xe];
    *var_a8[0xd] = r8_108;
    char rax_112 = rax_111 + key[0x6e][0] + rcx_110;
    uint64_t rdx_110 = rax_112;
    char r8_109 = *(&var_108 + rdx_110);
    *(&var_108 + rdx_110) = rcx_110;
    char rcx_111 = *var_a8[0xf];
    *var_a8[0xe] = r8_109;
    char rax_113 = rax_112 + key[0x6f][0] + rcx_111;
    uint64_t rdx_111 = rax_113;
    char r8_110 = *(&var_108 + rdx_111);
    *(&var_108 + rdx_111) = rcx_111;
    int128_t var_98;
    char rcx_112 = var_98;
    *var_a8[0xf] = r8_110;
    char rax_114 = rax_113 + key[0x70][0] + rcx_112;
    uint64_t rdx_112 = rax_114;
    char r8_111 = *(&var_108 + rdx_112);
    *(&var_108 + rdx_112) = rcx_112;
    char rcx_113 = *var_98[1];
    var_98 = r8_111;
    char rax_115 = rax_114 + key[0x71][0] + rcx_113;
    uint64_t rdx_113 = rax_115;
    char r8_112 = *(&var_108 + rdx_113);
    *(&var_108 + rdx_113) = rcx_113;
    char rcx_114 = *var_98[2];
    *var_98[1] = r8_112;
    char rax_116 = rax_115 + key[0x72][0] + rcx_114;
    uint64_t rdx_114 = rax_116;
    char r8_113 = *(&var_108 + rdx_114);
    *(&var_108 + rdx_114) = rcx_114;
    char rcx_115 = *var_98[3];
    *var_98[2] = r8_113;
    char rax_117 = rax_116 + key[0x73][0] + rcx_115;
    uint64_t rdx_115 = rax_117;
    char r8_114 = *(&var_108 + rdx_115);
    *(&var_108 + rdx_115) = rcx_115;
    char rcx_116 = *var_98[4];
    *var_98[3] = r8_114;
    char rax_118 = rax_117 + key[0x74][0] + rcx_116;
    uint64_t rdx_116 = rax_118;
    char r8_115 = *(&var_108 + rdx_116);
    *(&var_108 + rdx_116) = rcx_116;
    char rcx_117 = *var_98[5];
    *var_98[4] = r8_115;
    char rax_119 = rax_118 + key[0x75][0] + rcx_117;
    uint64_t rdx_117 = rax_119;
    char r8_116 = *(&var_108 + rdx_117);
    *(&var_108 + rdx_117) = rcx_117;
    char rcx_118 = *var_98[6];
    *var_98[5] = r8_116;
    char rax_120 = rax_119 + key[0x76][0] + rcx_118;
    uint64_t rdx_118 = rax_120;
    char r8_117 = *(&var_108 + rdx_118);
    *(&var_108 + rdx_118) = rcx_118;
    char rcx_119 = *var_98[7];
    *var_98[6] = r8_117;
    char rax_121 = rax_120 + key[0x77][0] + rcx_119;
    uint64_t rdx_119 = rax_121;
    char r8_118 = *(&var_108 + rdx_119);
    *(&var_108 + rdx_119) = rcx_119;
    char rcx_120 = *var_98[8];
    *var_98[7] = r8_118;
    char rax_122 = rax_121 + key[0x78][0] + rcx_120;
    uint64_t rdx_120 = rax_122;
    char r8_119 = *(&var_108 + rdx_120);
    *(&var_108 + rdx_120) = rcx_120;
    char rcx_121 = *var_98[9];
    *var_98[8] = r8_119;
    char rax_123 = rax_122 + key[0x79][0] + rcx_121;
    uint64_t rdx_121 = rax_123;
    char r8_120 = *(&var_108 + rdx_121);
    *(&var_108 + rdx_121) = rcx_121;
    char rcx_122 = *var_98[0xa];
    *var_98[9] = r8_120;
    char rax_124 = rax_123 + key[0x7a][0] + rcx_122;
    uint64_t rdx_122 = rax_124;
    char r8_121 = *(&var_108 + rdx_122);
    *(&var_108 + rdx_122) = rcx_122;
    char rcx_123 = *var_98[0xb];
    *var_98[0xa] = r8_121;
    char rax_125 = rax_124 + key[0x7b][0] + rcx_123;
    uint64_t rdx_123 = rax_125;
    char r8_122 = *(&var_108 + rdx_123);
    *(&var_108 + rdx_123) = rcx_123;
    char rcx_124 = *var_98[0xc];
    *var_98[0xb] = r8_122;
    char rax_126 = rax_125 + key[0x7c][0] + rcx_124;
    uint64_t rdx_124 = rax_126;
    char r8_123 = *(&var_108 + rdx_124);
    *(&var_108 + rdx_124) = rcx_124;
    char rcx_125 = *var_98[0xd];
    *var_98[0xc] = r8_123;
    char rax_127 = rax_126 + key[0x7d][0] + rcx_125;
    uint64_t rdx_125 = rax_127;
    char r8_124 = *(&var_108 + rdx_125);
    *(&var_108 + rdx_125) = rcx_125;
    char rcx_126 = *var_98[0xe];
    *var_98[0xd] = r8_124;
    char rax_128 = rax_127 + key[0x7e][0] + rcx_126;
    uint64_t rdx_126 = rax_128;
    char r8_125 = *(&var_108 + rdx_126);
    *(&var_108 + rdx_126) = rcx_126;
    char rcx_127 = *var_98[0xf];
    *var_98[0xe] = r8_125;
    char rax_129 = rax_128 + key[0x7f][0] + rcx_127;
    uint64_t rdx_127 = rax_129;
    char r8_126 = *(&var_108 + rdx_127);
    *(&var_108 + rdx_127) = rcx_127;
    char rcx_128 = var_88;
    *var_98[0xf] = r8_126;
    char rax_130 = rax_129 + key[0x80][0] + rcx_128;
    uint64_t rdx_128 = rax_130;
    char r8_127 = *(&var_108 + rdx_128);
    *(&var_108 + rdx_128) = rcx_128;
    char rcx_129 = *var_88[1];
    var_88 = r8_127;
    char rax_131 = rax_130 + key[0x81][0] + rcx_129;
    uint64_t rdx_129 = rax_131;
    char r8_128 = *(&var_108 + rdx_129);
    *(&var_108 + rdx_129) = rcx_129;
    char rcx_130 = *var_88[2];
    *var_88[1] = r8_128;
    char rax_132 = rax_131 + key[0x82][0] + rcx_130;
    uint64_t rdx_130 = rax_132;
    char r8_129 = *(&var_108 + rdx_130);
    *(&var_108 + rdx_130) = rcx_130;
    char rcx_131 = *var_88[3];
    *var_88[2] = r8_129;
    char rax_133 = rax_132 + key[0x83][0] + rcx_131;
    uint64_t rdx_131 = rax_133;
    char r8_130 = *(&var_108 + rdx_131);
    *(&var_108 + rdx_131) = rcx_131;
    char rcx_132 = *var_88[4];
    *var_88[3] = r8_130;
    char rax_134 = rax_133 + key[0x84][0] + rcx_132;
    uint64_t rdx_132 = rax_134;
    char r8_131 = *(&var_108 + rdx_132);
    *(&var_108 + rdx_132) = rcx_132;
    char rcx_133 = *var_88[5];
    *var_88[4] = r8_131;
    char rax_135 = rax_134 + key[0x85][0] + rcx_133;
    uint64_t rdx_133 = rax_135;
    char r8_132 = *(&var_108 + rdx_133);
    *(&var_108 + rdx_133) = rcx_133;
    char rcx_134 = *var_88[6];
    *var_88[5] = r8_132;
    char rax_136 = rax_135 + key[0x86][0] + rcx_134;
    uint64_t rdx_134 = rax_136;
    char r8_133 = *(&var_108 + rdx_134);
    *(&var_108 + rdx_134) = rcx_134;
    char rcx_135 = *var_88[7];
    *var_88[6] = r8_133;
    char rax_137 = rax_136 + key[0x87][0] + rcx_135;
    uint64_t rdx_135 = rax_137;
    char r8_134 = *(&var_108 + rdx_135);
    *(&var_108 + rdx_135) = rcx_135;
    char rcx_136 = *var_88[8];
    *var_88[7] = r8_134;
    char rax_138 = rax_137 + key[0x88][0] + rcx_136;
    uint64_t rdx_136 = rax_138;
    char r8_135 = *(&var_108 + rdx_136);
    *(&var_108 + rdx_136) = rcx_136;
    char rcx_137 = *var_88[9];
    *var_88[8] = r8_135;
    char rax_139 = rax_138 + key[0x89][0] + rcx_137;
    uint64_t rdx_137 = rax_139;
    char r8_136 = *(&var_108 + rdx_137);
    *(&var_108 + rdx_137) = rcx_137;
    char rcx_138 = *var_88[0xa];
    *var_88[9] = r8_136;
    char rax_140 = rax_139 + key[0x8a][0] + rcx_138;
    uint64_t rdx_138 = rax_140;
    char r8_137 = *(&var_108 + rdx_138);
    *(&var_108 + rdx_138) = rcx_138;
    char rcx_139 = *var_88[0xb];
    *var_88[0xa] = r8_137;
    char rax_141 = rax_140 + key[0x8b][0] + rcx_139;
    uint64_t rdx_139 = rax_141;
    char r8_138 = *(&var_108 + rdx_139);
    *(&var_108 + rdx_139) = rcx_139;
    char rcx_140 = *var_88[0xc];
    *var_88[0xb] = r8_138;
    char rax_142 = rax_141 + key[0x8c][0] + rcx_140;
    uint64_t rdx_140 = rax_142;
    char r8_139 = *(&var_108 + rdx_140);
    *(&var_108 + rdx_140) = rcx_140;
    char rcx_141 = *var_88[0xd];
    *var_88[0xc] = r8_139;
    char rax_143 = rax_142 + key[0x8d][0] + rcx_141;
    uint64_t rdx_141 = rax_143;
    char r8_140 = *(&var_108 + rdx_141);
    *(&var_108 + rdx_141) = rcx_141;
    char rcx_142 = *var_88[0xe];
    *var_88[0xd] = r8_140;
    char rax_144 = rax_143 + key[0x8e][0] + rcx_142;
    uint64_t rdx_142 = rax_144;
    char r8_141 = *(&var_108 + rdx_142);
    *(&var_108 + rdx_142) = rcx_142;
    char rcx_143 = *var_88[0xf];
    *var_88[0xe] = r8_141;
    char rax_145 = rax_144 + key[0x8f][0] + rcx_143;
    uint64_t rdx_143 = rax_145;
    char r8_142 = *(&var_108 + rdx_143);
    *(&var_108 + rdx_143) = rcx_143;
    int128_t var_78;
    char rcx_144 = var_78;
    *var_88[0xf] = r8_142;
    char rax_146 = rax_145 + key[0x90][0] + rcx_144;
    uint64_t rdx_144 = rax_146;
    char r8_143 = *(&var_108 + rdx_144);
    *(&var_108 + rdx_144) = rcx_144;
    char rcx_145 = *var_78[1];
    var_78 = r8_143;
    char rax_147 = rax_146 + key[0x91][0] + rcx_145;
    uint64_t rdx_145 = rax_147;
    char r8_144 = *(&var_108 + rdx_145);
    *(&var_108 + rdx_145) = rcx_145;
    char rcx_146 = *var_78[2];
    *var_78[1] = r8_144;
    char rax_148 = rax_147 + key[0x92][0] + rcx_146;
    uint64_t rdx_146 = rax_148;
    char r8_145 = *(&var_108 + rdx_146);
    *(&var_108 + rdx_146) = rcx_146;
    char rcx_147 = *var_78[3];
    *var_78[2] = r8_145;
    char rax_149 = rax_148 + key[0x93][0] + rcx_147;
    uint64_t rdx_147 = rax_149;
    char r8_146 = *(&var_108 + rdx_147);
    *(&var_108 + rdx_147) = rcx_147;
    char rcx_148 = *var_78[4];
    *var_78[3] = r8_146;
    char rax_150 = rax_149 + key[0x94][0] + rcx_148;
    uint64_t rdx_148 = rax_150;
    char r8_147 = *(&var_108 + rdx_148);
    *(&var_108 + rdx_148) = rcx_148;
    char rcx_149 = *var_78[5];
    *var_78[4] = r8_147;
    char rax_151 = rax_150 + key[0x95][0] + rcx_149;
    uint64_t rdx_149 = rax_151;
    char r8_148 = *(&var_108 + rdx_149);
    *(&var_108 + rdx_149) = rcx_149;
    char rcx_150 = *var_78[6];
    *var_78[5] = r8_148;
    char rax_152 = rax_151 + key[0x96][0] + rcx_150;
    uint64_t rdx_150 = rax_152;
    char r8_149 = *(&var_108 + rdx_150);
    *(&var_108 + rdx_150) = rcx_150;
    char rcx_151 = *var_78[7];
    *var_78[6] = r8_149;
    char rax_153 = rax_152 + key[0x97][0] + rcx_151;
    uint64_t rdx_151 = rax_153;
    char r8_150 = *(&var_108 + rdx_151);
    *(&var_108 + rdx_151) = rcx_151;
    char rcx_152 = *var_78[8];
    *var_78[7] = r8_150;
    char rax_154 = rax_153 + key[0x98][0] + rcx_152;
    uint64_t rdx_152 = rax_154;
    char r8_151 = *(&var_108 + rdx_152);
    *(&var_108 + rdx_152) = rcx_152;
    char rcx_153 = *var_78[9];
    *var_78[8] = r8_151;
    char rax_155 = rax_154 + key[0x99][0] + rcx_153;
    uint64_t rdx_153 = rax_155;
    char r8_152 = *(&var_108 + rdx_153);
    *(&var_108 + rdx_153) = rcx_153;
    char rcx_154 = *var_78[0xa];
    *var_78[9] = r8_152;
    char rax_156 = rax_155 + key[0x9a][0] + rcx_154;
    uint64_t rdx_154 = rax_156;
    char r8_153 = *(&var_108 + rdx_154);
    *(&var_108 + rdx_154) = rcx_154;
    char rcx_155 = *var_78[0xb];
    *var_78[0xa] = r8_153;
    char rax_157 = rax_156 + key[0x9b][0] + rcx_155;
    uint64_t rdx_155 = rax_157;
    char r8_154 = *(&var_108 + rdx_155);
    *(&var_108 + rdx_155) = rcx_155;
    char rcx_156 = *var_78[0xc];
    *var_78[0xb] = r8_154;
    char rax_158 = rax_157 + key[0x9c][0] + rcx_156;
    uint64_t rdx_156 = rax_158;
    char r8_155 = *(&var_108 + rdx_156);
    *(&var_108 + rdx_156) = rcx_156;
    char rcx_157 = *var_78[0xd];
    *var_78[0xc] = r8_155;
    char rax_159 = rax_158 + key[0x9d][0] + rcx_157;
    uint64_t rdx_157 = rax_159;
    char r8_156 = *(&var_108 + rdx_157);
    *(&var_108 + rdx_157) = rcx_157;
    char rcx_158 = *var_78[0xe];
    *var_78[0xd] = r8_156;
    char rax_160 = rax_159 + key[0x9e][0] + rcx_158;
    uint64_t rdx_158 = rax_160;
    char r8_157 = *(&var_108 + rdx_158);
    *(&var_108 + rdx_158) = rcx_158;
    char rcx_159 = *var_78[0xf];
    *var_78[0xe] = r8_157;
    char rax_161 = rax_160 + key[0x9f][0] + rcx_159;
    uint64_t rdx_159 = rax_161;
    char r8_158 = *(&var_108 + rdx_159);
    *(&var_108 + rdx_159) = rcx_159;
    int128_t var_68;
    char rcx_160 = var_68;
    *var_78[0xf] = r8_158;
    char rax_162 = rax_161 + key[0xa0][0] + rcx_160;
    uint64_t rdx_160 = rax_162;
    char r8_159 = *(&var_108 + rdx_160);
    *(&var_108 + rdx_160) = rcx_160;
    char rcx_161 = *var_68[1];
    var_68 = r8_159;
    char rax_163 = rax_162 + key[0xa1][0] + rcx_161;
    uint64_t rdx_161 = rax_163;
    char r8_160 = *(&var_108 + rdx_161);
    *(&var_108 + rdx_161) = rcx_161;
    char rcx_162 = *var_68[2];
    *var_68[1] = r8_160;
    char rax_164 = rax_163 + key[0xa2][0] + rcx_162;
    uint64_t rdx_162 = rax_164;
    char r8_161 = *(&var_108 + rdx_162);
    *(&var_108 + rdx_162) = rcx_162;
    char rcx_163 = *var_68[3];
    *var_68[2] = r8_161;
    char rax_165 = rax_164 + key[0xa3][0] + rcx_163;
    uint64_t rdx_163 = rax_165;
    char r8_162 = *(&var_108 + rdx_163);
    *(&var_108 + rdx_163) = rcx_163;
    char rcx_164 = *var_68[4];
    *var_68[3] = r8_162;
    char rax_166 = rax_165 + key[0xa4][0] + rcx_164;
    uint64_t rdx_164 = rax_166;
    char r8_163 = *(&var_108 + rdx_164);
    *(&var_108 + rdx_164) = rcx_164;
    char rcx_165 = *var_68[5];
    *var_68[4] = r8_163;
    char rax_167 = rax_166 + key[0xa5][0] + rcx_165;
    uint64_t rdx_165 = rax_167;
    char r8_164 = *(&var_108 + rdx_165);
    *(&var_108 + rdx_165) = rcx_165;
    char rcx_166 = *var_68[6];
    *var_68[5] = r8_164;
    char rax_168 = rax_167 + key[0xa6][0] + rcx_166;
    uint64_t rdx_166 = rax_168;
    char r8_165 = *(&var_108 + rdx_166);
    *(&var_108 + rdx_166) = rcx_166;
    char rcx_167 = *var_68[7];
    *var_68[6] = r8_165;
    char rax_169 = rax_168 + key[0xa7][0] + rcx_167;
    uint64_t rdx_167 = rax_169;
    char r8_166 = *(&var_108 + rdx_167);
    *(&var_108 + rdx_167) = rcx_167;
    char rcx_168 = *var_68[8];
    *var_68[7] = r8_166;
    char rax_170 = rax_169 + key[0xa8][0] + rcx_168;
    uint64_t rdx_168 = rax_170;
    char r8_167 = *(&var_108 + rdx_168);
    *(&var_108 + rdx_168) = rcx_168;
    char rcx_169 = *var_68[9];
    *var_68[8] = r8_167;
    char rax_171 = rax_170 + key[0xa9][0] + rcx_169;
    uint64_t rdx_169 = rax_171;
    char r8_168 = *(&var_108 + rdx_169);
    *(&var_108 + rdx_169) = rcx_169;
    char rcx_170 = *var_68[0xa];
    *var_68[9] = r8_168;
    char rax_172 = rax_171 + key[0xaa][0] + rcx_170;
    uint64_t rdx_170 = rax_172;
    char r8_169 = *(&var_108 + rdx_170);
    *(&var_108 + rdx_170) = rcx_170;
    char rcx_171 = *var_68[0xb];
    *var_68[0xa] = r8_169;
    char rax_173 = rax_172 + key[0xab][0] + rcx_171;
    uint64_t rdx_171 = rax_173;
    char r8_170 = *(&var_108 + rdx_171);
    *(&var_108 + rdx_171) = rcx_171;
    char rcx_172 = *var_68[0xc];
    *var_68[0xb] = r8_170;
    char rax_174 = rax_173 + key[0xac][0] + rcx_172;
    uint64_t rdx_172 = rax_174;
    char r8_171 = *(&var_108 + rdx_172);
    *(&var_108 + rdx_172) = rcx_172;
    char rcx_173 = *var_68[0xd];
    *var_68[0xc] = r8_171;
    char rax_175 = rax_174 + key[0xad][0] + rcx_173;
    uint64_t rdx_173 = rax_175;
    char r8_172 = *(&var_108 + rdx_173);
    *(&var_108 + rdx_173) = rcx_173;
    char rcx_174 = *var_68[0xe];
    *var_68[0xd] = r8_172;
    char rax_176 = rax_175 + key[0xae][0] + rcx_174;
    uint64_t rdx_174 = rax_176;
    char r8_173 = *(&var_108 + rdx_174);
    *(&var_108 + rdx_174) = rcx_174;
    char rcx_175 = *var_68[0xf];
    *var_68[0xe] = r8_173;
    char rax_177 = rax_176 + key[0xaf][0] + rcx_175;
    uint64_t rdx_175 = rax_177;
    char r8_174 = *(&var_108 + rdx_175);
    *(&var_108 + rdx_175) = rcx_175;
    int128_t var_58;
    char rcx_176 = var_58;
    *var_68[0xf] = r8_174;
    char rax_178 = rax_177 + key[0xb0][0] + rcx_176;
    uint64_t rdx_176 = rax_178;
    char r8_175 = *(&var_108 + rdx_176);
    *(&var_108 + rdx_176) = rcx_176;
    char rcx_177 = *var_58[1];
    var_58 = r8_175;
    char rax_179 = rax_178 + key[0xb1][0] + rcx_177;
    uint64_t rdx_177 = rax_179;
    char r8_176 = *(&var_108 + rdx_177);
    *(&var_108 + rdx_177) = rcx_177;
    char rcx_178 = *var_58[2];
    *var_58[1] = r8_176;
    char rax_180 = rax_179 + key[0xb2][0] + rcx_178;
    uint64_t rdx_178 = rax_180;
    char r8_177 = *(&var_108 + rdx_178);
    *(&var_108 + rdx_178) = rcx_178;
    char rcx_179 = *var_58[3];
    *var_58[2] = r8_177;
    char rax_181 = rax_180 + key[0xb3][0] + rcx_179;
    uint64_t rdx_179 = rax_181;
    char r8_178 = *(&var_108 + rdx_179);
    *(&var_108 + rdx_179) = rcx_179;
    char rcx_180 = *var_58[4];
    *var_58[3] = r8_178;
    char rax_182 = rax_181 + key[0xb4][0] + rcx_180;
    uint64_t rdx_180 = rax_182;
    char r8_179 = *(&var_108 + rdx_180);
    *(&var_108 + rdx_180) = rcx_180;
    char rcx_181 = *var_58[5];
    *var_58[4] = r8_179;
    char rax_183 = rax_182 + key[0xb5][0] + rcx_181;
    uint64_t rdx_181 = rax_183;
    char r8_180 = *(&var_108 + rdx_181);
    *(&var_108 + rdx_181) = rcx_181;
    char rcx_182 = *var_58[6];
    *var_58[5] = r8_180;
    char rax_184 = rax_183 + key[0xb6][0] + rcx_182;
    uint64_t rdx_182 = rax_184;
    char r8_181 = *(&var_108 + rdx_182);
    *(&var_108 + rdx_182) = rcx_182;
    char rcx_183 = *var_58[7];
    *var_58[6] = r8_181;
    char rax_185 = rax_184 + key[0xb7][0] + rcx_183;
    uint64_t rdx_183 = rax_185;
    char r8_182 = *(&var_108 + rdx_183);
    *(&var_108 + rdx_183) = rcx_183;
    char rcx_184 = *var_58[8];
    *var_58[7] = r8_182;
    char rax_186 = rax_185 + key[0xb8][0] + rcx_184;
    uint64_t rdx_184 = rax_186;
    char r8_183 = *(&var_108 + rdx_184);
    *(&var_108 + rdx_184) = rcx_184;
    char rcx_185 = *var_58[9];
    *var_58[8] = r8_183;
    char rax_187 = rax_186 + key[0xb9][0] + rcx_185;
    uint64_t rdx_185 = rax_187;
    char r8_184 = *(&var_108 + rdx_185);
    *(&var_108 + rdx_185) = rcx_185;
    char rcx_186 = *var_58[0xa];
    *var_58[9] = r8_184;
    char rax_188 = rax_187 + key[0xba][0] + rcx_186;
    uint64_t rdx_186 = rax_188;
    char r8_185 = *(&var_108 + rdx_186);
    *(&var_108 + rdx_186) = rcx_186;
    char rcx_187 = *var_58[0xb];
    *var_58[0xa] = r8_185;
    char rax_189 = rax_188 + key[0xbb][0] + rcx_187;
    uint64_t rdx_187 = rax_189;
    char r8_186 = *(&var_108 + rdx_187);
    *(&var_108 + rdx_187) = rcx_187;
    char rcx_188 = *var_58[0xc];
    *var_58[0xb] = r8_186;
    char rax_190 = rax_189 + key[0xbc][0] + rcx_188;
    uint64_t rdx_188 = rax_190;
    char r8_187 = *(&var_108 + rdx_188);
    *(&var_108 + rdx_188) = rcx_188;
    char rcx_189 = *var_58[0xd];
    *var_58[0xc] = r8_187;
    char rax_191 = rax_190 + key[0xbd][0] + rcx_189;
    uint64_t rdx_189 = rax_191;
    char r8_188 = *(&var_108 + rdx_189);
    *(&var_108 + rdx_189) = rcx_189;
    char rcx_190 = *var_58[0xe];
    *var_58[0xd] = r8_188;
    char rax_192 = rax_191 + key[0xbe][0] + rcx_190;
    uint64_t rdx_190 = rax_192;
    char r8_189 = *(&var_108 + rdx_190);
    *(&var_108 + rdx_190) = rcx_190;
    char rcx_191 = *var_58[0xf];
    *var_58[0xe] = r8_189;
    char rax_193 = rax_192 + key[0xbf][0] + rcx_191;
    uint64_t rdx_191 = rax_193;
    char r8_190 = *(&var_108 + rdx_191);
    *(&var_108 + rdx_191) = rcx_191;
    int128_t var_48;
    char rcx_192 = var_48;
    *var_58[0xf] = r8_190;
    char rax_194 = rax_193 + key[0xc0][0] + rcx_192;
    uint64_t rdx_192 = rax_194;
    char r8_191 = *(&var_108 + rdx_192);
    *(&var_108 + rdx_192) = rcx_192;
    char rcx_193 = *var_48[1];
    var_48 = r8_191;
    char rax_195 = rax_194 + key[0xc1][0] + rcx_193;
    uint64_t rdx_193 = rax_195;
    char r8_192 = *(&var_108 + rdx_193);
    *(&var_108 + rdx_193) = rcx_193;
    char rcx_194 = *var_48[2];
    *var_48[1] = r8_192;
    char rax_196 = rax_195 + key[0xc2][0] + rcx_194;
    uint64_t rdx_194 = rax_196;
    char r8_193 = *(&var_108 + rdx_194);
    *(&var_108 + rdx_194) = rcx_194;
    char rcx_195 = *var_48[3];
    *var_48[2] = r8_193;
    char rax_197 = rax_196 + key[0xc3][0] + rcx_195;
    uint64_t rdx_195 = rax_197;
    char r8_194 = *(&var_108 + rdx_195);
    *(&var_108 + rdx_195) = rcx_195;
    char rcx_196 = *var_48[4];
    *var_48[3] = r8_194;
    char rax_198 = rax_197 + key[0xc4][0] + rcx_196;
    uint64_t rdx_196 = rax_198;
    char r8_195 = *(&var_108 + rdx_196);
    *(&var_108 + rdx_196) = rcx_196;
    char rcx_197 = *var_48[5];
    *var_48[4] = r8_195;
    char rax_199 = rax_198 + key[0xc5][0] + rcx_197;
    uint64_t rdx_197 = rax_199;
    char r8_196 = *(&var_108 + rdx_197);
    *(&var_108 + rdx_197) = rcx_197;
    char rcx_198 = *var_48[6];
    *var_48[5] = r8_196;
    char rax_200 = rax_199 + key[0xc6][0] + rcx_198;
    uint64_t rdx_198 = rax_200;
    char r8_197 = *(&var_108 + rdx_198);
    *(&var_108 + rdx_198) = rcx_198;
    char rcx_199 = *var_48[7];
    *var_48[6] = r8_197;
    char rax_201 = rax_200 + key[0xc7][0] + rcx_199;
    uint64_t rdx_199 = rax_201;
    char r8_198 = *(&var_108 + rdx_199);
    *(&var_108 + rdx_199) = rcx_199;
    char rcx_200 = *var_48[8];
    *var_48[7] = r8_198;
    char rax_202 = rax_201 + key[0xc8][0] + rcx_200;
    uint64_t rdx_200 = rax_202;
    char r8_199 = *(&var_108 + rdx_200);
    *(&var_108 + rdx_200) = rcx_200;
    char rcx_201 = *var_48[9];
    *var_48[8] = r8_199;
    char rax_203 = rax_202 + key[0xc9][0] + rcx_201;
    uint64_t rdx_201 = rax_203;
    char r8_200 = *(&var_108 + rdx_201);
    *(&var_108 + rdx_201) = rcx_201;
    char rcx_202 = *var_48[0xa];
    *var_48[9] = r8_200;
    char rax_204 = rax_203 + key[0xca][0] + rcx_202;
    uint64_t rdx_202 = rax_204;
    char r8_201 = *(&var_108 + rdx_202);
    *(&var_108 + rdx_202) = rcx_202;
    char rcx_203 = *var_48[0xb];
    *var_48[0xa] = r8_201;
    char rax_205 = rax_204 + key[0xcb][0] + rcx_203;
    uint64_t rdx_203 = rax_205;
    char r8_202 = *(&var_108 + rdx_203);
    *(&var_108 + rdx_203) = rcx_203;
    char rcx_204 = *var_48[0xc];
    *var_48[0xb] = r8_202;
    char rax_206 = rax_205 + key[0xcc][0] + rcx_204;
    uint64_t rdx_204 = rax_206;
    char r8_203 = *(&var_108 + rdx_204);
    *(&var_108 + rdx_204) = rcx_204;
    char rcx_205 = *var_48[0xd];
    *var_48[0xc] = r8_203;
    char rax_207 = rax_206 + key[0xcd][0] + rcx_205;
    uint64_t rdx_205 = rax_207;
    char r8_204 = *(&var_108 + rdx_205);
    *(&var_108 + rdx_205) = rcx_205;
    char rcx_206 = *var_48[0xe];
    *var_48[0xd] = r8_204;
    char rax_208 = rax_207 + key[0xce][0] + rcx_206;
    uint64_t rdx_206 = rax_208;
    char r8_205 = *(&var_108 + rdx_206);
    *(&var_108 + rdx_206) = rcx_206;
    char rcx_207 = *var_48[0xf];
    *var_48[0xe] = r8_205;
    char rax_209 = rax_208 + key[0xcf][0] + rcx_207;
    uint64_t rdx_207 = rax_209;
    char r8_206 = *(&var_108 + rdx_207);
    *(&var_108 + rdx_207) = rcx_207;
    int128_t var_38;
    char rcx_208 = var_38;
    *var_48[0xf] = r8_206;
    char rax_210 = rax_209 + key[0xd0][0] + rcx_208;
    uint64_t rdx_208 = rax_210;
    char r8_207 = *(&var_108 + rdx_208);
    *(&var_108 + rdx_208) = rcx_208;
    char rcx_209 = *var_38[1];
    var_38 = r8_207;
    char rax_211 = rax_210 + key[0xd1][0] + rcx_209;
    uint64_t rdx_209 = rax_211;
    char r8_208 = *(&var_108 + rdx_209);
    *(&var_108 + rdx_209) = rcx_209;
    char rcx_210 = *var_38[2];
    *var_38[1] = r8_208;
    char rax_212 = rax_211 + key[0xd2][0] + rcx_210;
    uint64_t rdx_210 = rax_212;
    char r8_209 = *(&var_108 + rdx_210);
    *(&var_108 + rdx_210) = rcx_210;
    char rcx_211 = *var_38[3];
    *var_38[2] = r8_209;
    char rax_213 = rax_212 + key[0xd3][0] + rcx_211;
    uint64_t rdx_211 = rax_213;
    char r8_210 = *(&var_108 + rdx_211);
    *(&var_108 + rdx_211) = rcx_211;
    char rcx_212 = *var_38[4];
    *var_38[3] = r8_210;
    char rax_214 = rax_213 + key[0xd4][0] + rcx_212;
    uint64_t rdx_212 = rax_214;
    char r8_211 = *(&var_108 + rdx_212);
    *(&var_108 + rdx_212) = rcx_212;
    char rcx_213 = *var_38[5];
    *var_38[4] = r8_211;
    char rax_215 = rax_214 + key[0xd5][0] + rcx_213;
    uint64_t rdx_213 = rax_215;
    char r8_212 = *(&var_108 + rdx_213);
    *(&var_108 + rdx_213) = rcx_213;
    char rcx_214 = *var_38[6];
    *var_38[5] = r8_212;
    char rax_216 = rax_215 + key[0xd6][0] + rcx_214;
    uint64_t rdx_214 = rax_216;
    char r8_213 = *(&var_108 + rdx_214);
    *(&var_108 + rdx_214) = rcx_214;
    char rcx_215 = *var_38[7];
    *var_38[6] = r8_213;
    char rax_217 = rax_216 + key[0xd7][0] + rcx_215;
    uint64_t rdx_215 = rax_217;
    char r8_214 = *(&var_108 + rdx_215);
    *(&var_108 + rdx_215) = rcx_215;
    char rcx_216 = *var_38[8];
    *var_38[7] = r8_214;
    char rax_218 = rax_217 + key[0xd8][0] + rcx_216;
    uint64_t rdx_216 = rax_218;
    char r8_215 = *(&var_108 + rdx_216);
    *(&var_108 + rdx_216) = rcx_216;
    char rcx_217 = *var_38[9];
    *var_38[8] = r8_215;
    char rax_219 = rax_218 + key[0xd9][0] + rcx_217;
    uint64_t rdx_217 = rax_219;
    char r8_216 = *(&var_108 + rdx_217);
    *(&var_108 + rdx_217) = rcx_217;
    char rcx_218 = *var_38[0xa];
    *var_38[9] = r8_216;
    char rax_220 = rax_219 + key[0xda][0] + rcx_218;
    uint64_t rdx_218 = rax_220;
    char r8_217 = *(&var_108 + rdx_218);
    *(&var_108 + rdx_218) = rcx_218;
    char rcx_219 = *var_38[0xb];
    *var_38[0xa] = r8_217;
    char rax_221 = rax_220 + key[0xdb][0] + rcx_219;
    uint64_t rdx_219 = rax_221;
    char r8_218 = *(&var_108 + rdx_219);
    *(&var_108 + rdx_219) = rcx_219;
    char rcx_220 = *var_38[0xc];
    *var_38[0xb] = r8_218;
    char rax_222 = rax_221 + key[0xdc][0] + rcx_220;
    uint64_t rdx_220 = rax_222;
    char r8_219 = *(&var_108 + rdx_220);
    *(&var_108 + rdx_220) = rcx_220;
    char rcx_221 = *var_38[0xd];
    *var_38[0xc] = r8_219;
    char rax_223 = rax_222 + key[0xdd][0] + rcx_221;
    uint64_t rdx_221 = rax_223;
    char r8_220 = *(&var_108 + rdx_221);
    *(&var_108 + rdx_221) = rcx_221;
    char rcx_222 = *var_38[0xe];
    *var_38[0xd] = r8_220;
    char rax_224 = rax_223 + key[0xde][0] + rcx_222;
    uint64_t rdx_222 = rax_224;
    char r8_221 = *(&var_108 + rdx_222);
    *(&var_108 + rdx_222) = rcx_222;
    char rcx_223 = *var_38[0xf];
    *var_38[0xe] = r8_221;
    char rax_225 = rax_224 + key[0xdf][0] + rcx_223;
    uint64_t rdx_223 = rax_225;
    char r8_222 = *(&var_108 + rdx_223);
    *(&var_108 + rdx_223) = rcx_223;
    int128_t var_28;
    char rcx_224 = var_28;
    *var_38[0xf] = r8_222;
    char rax_226 = rax_225 + key[0xe0][0] + rcx_224;
    uint64_t rdx_224 = rax_226;
    char r8_223 = *(&var_108 + rdx_224);
    *(&var_108 + rdx_224) = rcx_224;
    char rcx_225 = *var_28[1];
    var_28 = r8_223;
    char rax_227 = rax_226 + key[0xe1][0] + rcx_225;
    uint64_t rdx_225 = rax_227;
    char r8_224 = *(&var_108 + rdx_225);
    *(&var_108 + rdx_225) = rcx_225;
    char rcx_226 = *var_28[2];
    *var_28[1] = r8_224;
    char rax_228 = rax_227 + key[0xe2][0] + rcx_226;
    uint64_t rdx_226 = rax_228;
    char r8_225 = *(&var_108 + rdx_226);
    *(&var_108 + rdx_226) = rcx_226;
    char rcx_227 = *var_28[3];
    *var_28[2] = r8_225;
    char rax_229 = rax_228 + key[0xe3][0] + rcx_227;
    uint64_t rdx_227 = rax_229;
    char r8_226 = *(&var_108 + rdx_227);
    *(&var_108 + rdx_227) = rcx_227;
    char rcx_228 = *var_28[4];
    *var_28[3] = r8_226;
    char rax_230 = rax_229 + key[0xe4][0] + rcx_228;
    uint64_t rdx_228 = rax_230;
    char r8_227 = *(&var_108 + rdx_228);
    *(&var_108 + rdx_228) = rcx_228;
    char rcx_229 = *var_28[5];
    *var_28[4] = r8_227;
    char rax_231 = rax_230 + key[0xe5][0] + rcx_229;
    uint64_t rdx_229 = rax_231;
    char r8_228 = *(&var_108 + rdx_229);
    *(&var_108 + rdx_229) = rcx_229;
    char rcx_230 = *var_28[6];
    *var_28[5] = r8_228;
    char rax_232 = rax_231 + key[0xe6][0] + rcx_230;
    uint64_t rdx_230 = rax_232;
    char r8_229 = *(&var_108 + rdx_230);
    *(&var_108 + rdx_230) = rcx_230;
    char rcx_231 = *var_28[7];
    *var_28[6] = r8_229;
    char rax_233 = rax_232 + key[0xe7][0] + rcx_231;
    uint64_t rdx_231 = rax_233;
    char r8_230 = *(&var_108 + rdx_231);
    *(&var_108 + rdx_231) = rcx_231;
    char rcx_232 = *var_28[8];
    *var_28[7] = r8_230;
    char rax_234 = rax_233 + key[0xe8][0] + rcx_232;
    uint64_t rdx_232 = rax_234;
    char r8_231 = *(&var_108 + rdx_232);
    *(&var_108 + rdx_232) = rcx_232;
    char rcx_233 = *var_28[9];
    *var_28[8] = r8_231;
    char rax_235 = rax_234 + key[0xe9][0] + rcx_233;
    uint64_t rdx_233 = rax_235;
    char r8_232 = *(&var_108 + rdx_233);
    *(&var_108 + rdx_233) = rcx_233;
    char rcx_234 = *var_28[0xa];
    *var_28[9] = r8_232;
    char rax_236 = rax_235 + key[0xea][0] + rcx_234;
    uint64_t rdx_234 = rax_236;
    char r8_233 = *(&var_108 + rdx_234);
    *(&var_108 + rdx_234) = rcx_234;
    char rcx_235 = *var_28[0xb];
    *var_28[0xa] = r8_233;
    char rax_237 = rax_236 + key[0xeb][0] + rcx_235;
    uint64_t rdx_235 = rax_237;
    char r8_234 = *(&var_108 + rdx_235);
    *(&var_108 + rdx_235) = rcx_235;
    char rcx_236 = *var_28[0xc];
    *var_28[0xb] = r8_234;
    char rax_238 = rax_237 + key[0xec][0] + rcx_236;
    uint64_t rdx_236 = rax_238;
    char r8_235 = *(&var_108 + rdx_236);
    *(&var_108 + rdx_236) = rcx_236;
    char rcx_237 = *var_28[0xd];
    *var_28[0xc] = r8_235;
    char rax_239 = rax_238 + key[0xed][0] + rcx_237;
    uint64_t rdx_237 = rax_239;
    char r8_236 = *(&var_108 + rdx_237);
    *(&var_108 + rdx_237) = rcx_237;
    char rcx_238 = *var_28[0xe];
    *var_28[0xd] = r8_236;
    char rax_240 = rax_239 + key[0xee][0] + rcx_238;
    uint64_t rdx_238 = rax_240;
    char r8_237 = *(&var_108 + rdx_238);
    *(&var_108 + rdx_238) = rcx_238;
    char rcx_239 = *var_28[0xf];
    *var_28[0xe] = r8_237;
    char rax_241 = rax_240 + key[0xef][0] + rcx_239;
    uint64_t rdx_239 = rax_241;
    char r8_238 = *(&var_108 + rdx_239);
    *(&var_108 + rdx_239) = rcx_239;
    int128_t var_18;
    char rcx_240 = var_18;
    *var_28[0xf] = r8_238;
    char rax_242 = rax_241 + key[0xf0][0] + rcx_240;
    uint64_t rdx_240 = rax_242;
    char r8_239 = *(&var_108 + rdx_240);
    *(&var_108 + rdx_240) = rcx_240;
    char rcx_241 = *var_18[1];
    var_18 = r8_239;
    char rax_243 = rax_242 + key[0xf1][0] + rcx_241;
    uint64_t rdx_241 = rax_243;
    char r8_240 = *(&var_108 + rdx_241);
    *(&var_108 + rdx_241) = rcx_241;
    char rcx_242 = *var_18[2];
    *var_18[1] = r8_240;
    char rax_244 = rax_243 + key[0xf2][0] + rcx_242;
    uint64_t rdx_242 = rax_244;
    char r8_241 = *(&var_108 + rdx_242);
    *(&var_108 + rdx_242) = rcx_242;
    char rcx_243 = *var_18[3];
    *var_18[2] = r8_241;
    char rax_245 = rax_244 + key[0xf3][0] + rcx_243;
    uint64_t rdx_243 = rax_245;
    char r8_242 = *(&var_108 + rdx_243);
    *(&var_108 + rdx_243) = rcx_243;
    char rcx_244 = *var_18[4];
    *var_18[3] = r8_242;
    char rax_246 = rax_245 + key[0xf4][0] + rcx_244;
    uint64_t rdx_244 = rax_246;
    char r8_243 = *(&var_108 + rdx_244);
    *(&var_108 + rdx_244) = rcx_244;
    char rcx_245 = *var_18[5];
    *var_18[4] = r8_243;
    char rax_247 = rax_246 + key[0xf5][0] + rcx_245;
    uint64_t rdx_245 = rax_247;
    char r8_244 = *(&var_108 + rdx_245);
    *(&var_108 + rdx_245) = rcx_245;
    char rcx_246 = *var_18[6];
    *var_18[5] = r8_244;
    char rax_248 = rax_247 + key[0xf6][0] + rcx_246;
    uint64_t rdx_246 = rax_248;
    char r8_245 = *(&var_108 + rdx_246);
    *(&var_108 + rdx_246) = rcx_246;
    char rcx_247 = *var_18[7];
    *var_18[6] = r8_245;
    char rax_249 = rax_248 + key[0xf7][0] + rcx_247;
    uint64_t rdx_247 = rax_249;
    char r8_246 = *(&var_108 + rdx_247);
    *(&var_108 + rdx_247) = rcx_247;
    char rcx_248 = *var_18[8];
    *var_18[7] = r8_246;
    char rax_250 = rax_249 + key[0xf8][0] + rcx_248;
    uint64_t rdx_248 = rax_250;
    char r8_247 = *(&var_108 + rdx_248);
    *(&var_108 + rdx_248) = rcx_248;
    char rcx_249 = *var_18[9];
    *var_18[8] = r8_247;
    char rax_251 = rax_250 + key[0xf9][0] + rcx_249;
    uint64_t rdx_249 = rax_251;
    char r8_248 = *(&var_108 + rdx_249);
    *(&var_108 + rdx_249) = rcx_249;
    char rcx_250 = *var_18[0xa];
    *var_18[9] = r8_248;
    char rax_252 = rax_251 + key[0xfa][0] + rcx_250;
    uint64_t rdx_250 = rax_252;
    char r8_249 = *(&var_108 + rdx_250);
    *(&var_108 + rdx_250) = rcx_250;
    char rcx_251 = *var_18[0xb];
    *var_18[0xa] = r8_249;
    char rax_253 = rax_252 + key[0xfb][0] + rcx_251;
    uint64_t rdx_251 = rax_253;
    char r8_250 = *(&var_108 + rdx_251);
    *(&var_108 + rdx_251) = rcx_251;
    char rcx_252 = *var_18[0xc];
    *var_18[0xb] = r8_250;
    char rax_254 = rax_253 + key[0xfc][0] + rcx_252;
    uint64_t rdx_252 = rax_254;
    char r8_251 = *(&var_108 + rdx_252);
    *(&var_108 + rdx_252) = rcx_252;
    char rcx_253 = *var_18[0xd];
    *var_18[0xc] = r8_251;
    char rax_255 = rax_254 + key[0xfd][0] + rcx_253;
    uint64_t rdx_253 = rax_255;
    char r8_252 = *(&var_108 + rdx_253);
    *(&var_108 + rdx_253) = rcx_253;
    char rcx_254 = *var_18[0xe];
    *var_18[0xd] = r8_252;
    char rax_256 = rax_255 + key[0xfe][0] + rcx_254;
    uint64_t rdx_254 = rax_256;
    char r8_253 = *(&var_108 + rdx_254);
    *(&var_108 + rdx_254) = rcx_254;
    char rdx_255 = *var_18[0xf];
    *var_18[0xe] = r8_253;
    uint64_t rax_258 = rax_256 + key[0xff][0] + rdx_255;
    char rcx_255 = *(&var_108 + rax_258);
    *(&var_108 + rax_258) = rdx_255;
    *var_18[0xf] = rcx_255;
    uint64_t rcx_256 = *var_108[1];
    char rdx_256 = *(&var_108 + rcx_256);
    *(&var_108 + rcx_256) = rcx_256;
    char r8_254 = *var_108[2];
    *var_108[1] = rdx_256;
    char rax_260 = rcx_256 + r8_254;
    uint64_t rcx_257 = rax_260;
    char var_147 = *(&var_108 + rdx_256 + *(&var_108 + rcx_256)) ^ data_14000b001;
    char rdx_259 = *(&var_108 + rcx_257);
    *(&var_108 + rcx_257) = r8_254;
    char r8_255 = *var_108[3];
    *var_108[2] = rdx_259;
    char rax_261 = rax_260 + r8_255;
    uint64_t rcx_258 = rax_261;
    char var_146 = *(&var_108 + rdx_259 + *(&var_108 + rcx_257)) ^ data_14000b002;
    char rdx_262 = *(&var_108 + rcx_258);
    *(&var_108 + rcx_258) = r8_255;
    *var_108[3] = rdx_262;
    char r8_256 = *var_108[4];
    char rax_262 = rax_261 + r8_256;
    char var_145 = *(&var_108 + rdx_262 + *(&var_108 + rcx_258)) ^ data_14000b003;
    uint64_t rcx_259 = rax_262;
    char rdx_265 = *(&var_108 + rcx_259);
    *(&var_108 + rcx_259) = r8_256;
    char r8_257 = *var_108[5];
    *var_108[4] = rdx_265;
    char rax_263 = rax_262 + r8_257;
    uint64_t rcx_260 = rax_263;
    char var_144 = *(&var_108 + rdx_265 + *(&var_108 + rcx_259)) ^ data_14000b004;
    char rdx_268 = *(&var_108 + rcx_260);
    *(&var_108 + rcx_260) = r8_257;
    char r8_258 = *var_108[6];
    *var_108[5] = rdx_268;
    char rax_264 = rax_263 + r8_258;
    uint64_t rcx_261 = rax_264;
    char var_143 = *(&var_108 + rdx_268 + *(&var_108 + rcx_260)) ^ data_14000b005;
    char rdx_271 = *(&var_108 + rcx_261);
    *(&var_108 + rcx_261) = r8_258;
    char r8_259 = *var_108[7];
    *var_108[6] = rdx_271;
    char rax_265 = rax_264 + r8_259;
    uint64_t rcx_262 = rax_265;
    char var_142 = *(&var_108 + rdx_271 + *(&var_108 + rcx_261)) ^ data_14000b006;
    char rdx_274 = *(&var_108 + rcx_262);
    *(&var_108 + rcx_262) = r8_259;
    *var_108[7] = rdx_274;
    char r8_260 = *var_108[8];
    char rax_266 = rax_265 + r8_260;
    char var_141 = *(&var_108 + rdx_274 + *(&var_108 + rcx_262)) ^ data_14000b007;
    uint64_t rcx_263 = rax_266;
    char rdx_277 = *(&var_108 + rcx_263);
    *(&var_108 + rcx_263) = r8_260;
    char r8_261 = *var_108[9];
    *var_108[8] = rdx_277;
    char rax_267 = rax_266 + r8_261;
    uint64_t rcx_264 = rax_267;
    char var_140 = *(&var_108 + rdx_277 + *(&var_108 + rcx_263)) ^ data_14000b008;
    char rdx_280 = *(&var_108 + rcx_264);
    *(&var_108 + rcx_264) = r8_261;
    char r8_262 = *var_108[0xa];
    *var_108[9] = rdx_280;
    char rax_268 = rax_267 + r8_262;
    uint64_t rcx_265 = rax_268;
    char var_13f = *(&var_108 + rdx_280 + *(&var_108 + rcx_264)) ^ data_14000b009;
    char rdx_283 = *(&var_108 + rcx_265);
    *(&var_108 + rcx_265) = r8_262;
    char r8_263 = *var_108[0xb];
    *var_108[0xa] = rdx_283;
    char rax_269 = rax_268 + r8_263;
    uint64_t rcx_266 = rax_269;
    char var_13e = *(&var_108 + rdx_283 + *(&var_108 + rcx_265)) ^ data_14000b00a;
    char rdx_286 = *(&var_108 + rcx_266);
    *(&var_108 + rcx_266) = r8_263;
    *var_108[0xb] = rdx_286;
    char r8_264 = *var_108[0xc];
    char rax_270 = rax_269 + r8_264;
    char var_13d = *(&var_108 + rdx_286 + *(&var_108 + rcx_266)) ^ data_14000b00b;
    uint64_t rcx_267 = rax_270;
    char rdx_289 = *(&var_108 + rcx_267);
    *(&var_108 + rcx_267) = r8_264;
    char r8_265 = *var_108[0xd];
    *var_108[0xc] = rdx_289;
    char rax_271 = rax_270 + r8_265;
    uint64_t rcx_268 = rax_271;
    char var_13c = *(&var_108 + rdx_289 + *(&var_108 + rcx_267)) ^ data_14000b00c;
    char rdx_292 = *(&var_108 + rcx_268);
    *(&var_108 + rcx_268) = r8_265;
    char r8_266 = *var_108[0xe];
    *var_108[0xd] = rdx_292;
    char rax_272 = rax_271 + r8_266;
    uint64_t rcx_269 = rax_272;
    char var_13b = *(&var_108 + rdx_292 + *(&var_108 + rcx_268)) ^ data_14000b00d;
    char rdx_295 = *(&var_108 + rcx_269);
    *(&var_108 + rcx_269) = r8_266;
    char r8_267 = *var_108[0xf];
    *var_108[0xe] = rdx_295;
    char rax_273 = rax_272 + r8_267;
    uint64_t rcx_270 = rax_273;
    char var_13a = *(&var_108 + rdx_295 + *(&var_108 + rcx_269)) ^ data_14000b00e;
    char rdx_298 = *(&var_108 + rcx_270);
    *(&var_108 + rcx_270) = r8_267;
    *var_108[0xf] = rdx_298;
    char r8_268 = var_f8;
    char rax_274 = rax_273 + r8_268;
    char var_139 = *(&var_108 + rdx_298 + *(&var_108 + rcx_270)) ^ data_14000b00f;
    uint64_t rcx_271 = rax_274;
    char rdx_301 = *(&var_108 + rcx_271);
    *(&var_108 + rcx_271) = r8_268;
    char r8_269 = *var_f8[1];
    var_f8 = rdx_301;
    char rax_275 = rax_274 + r8_269;
    uint64_t rcx_272 = rax_275;
    char var_138 = *(&var_108 + rdx_301 + *(&var_108 + rcx_271)) ^ data_14000b010;
    char rdx_304 = *(&var_108 + rcx_272);
    *(&var_108 + rcx_272) = r8_269;
    char r8_270 = *var_f8[2];
    *var_f8[1] = rdx_304;
    char rax_276 = rax_275 + r8_270;
    uint64_t rcx_273 = rax_276;
    char var_137 = *(&var_108 + rdx_304 + *(&var_108 + rcx_272)) ^ data_14000b011;
    char rdx_307 = *(&var_108 + rcx_273);
    *(&var_108 + rcx_273) = r8_270;
    char r8_271 = *var_f8[3];
    *var_f8[2] = rdx_307;
    char rax_277 = rax_276 + r8_271;
    uint64_t rcx_274 = rax_277;
    char var_136 = *(&var_108 + rdx_307 + *(&var_108 + rcx_273)) ^ data_14000b012;
    char rdx_310 = *(&var_108 + rcx_274);
    *(&var_108 + rcx_274) = r8_271;
    *var_f8[3] = rdx_310;
    char r8_272 = *var_f8[4];
    char rax_278 = rax_277 + r8_272;
    char var_135 = *(&var_108 + rdx_310 + *(&var_108 + rcx_274)) ^ data_14000b013;
    uint64_t rcx_275 = rax_278;
    char rdx_313 = *(&var_108 + rcx_275);
    *(&var_108 + rcx_275) = r8_272;
    char r8_273 = *var_f8[5];
    *var_f8[4] = rdx_313;
    char rax_279 = rax_278 + r8_273;
    uint64_t rcx_276 = rax_279;
    char var_134 = *(&var_108 + rdx_313 + *(&var_108 + rcx_275)) ^ data_14000b014;
    char rdx_316 = *(&var_108 + rcx_276);
    *(&var_108 + rcx_276) = r8_273;
    char r8_274 = *var_f8[6];
    *var_f8[5] = rdx_316;
    char rax_280 = rax_279 + r8_274;
    uint64_t rcx_277 = rax_280;
    char var_133 = *(&var_108 + rdx_316 + *(&var_108 + rcx_276)) ^ data_14000b015;
    char rdx_319 = *(&var_108 + rcx_277);
    *(&var_108 + rcx_277) = r8_274;
    char r8_275 = *var_f8[7];
    *var_f8[6] = rdx_319;
    char rax_281 = rax_280 + r8_275;
    uint64_t rcx_278 = rax_281;
    char var_132 = *(&var_108 + rdx_319 + *(&var_108 + rcx_277)) ^ data_14000b016;
    char rdx_322 = *(&var_108 + rcx_278);
    *(&var_108 + rcx_278) = r8_275;
    *var_f8[7] = rdx_322;
    char r8_276 = *var_f8[8];
    char rax_282 = rax_281 + r8_276;
    char var_131 = *(&var_108 + rdx_322 + *(&var_108 + rcx_278)) ^ data_14000b017;
    uint64_t rcx_279 = rax_282;
    char rdx_325 = *(&var_108 + rcx_279);
    *(&var_108 + rcx_279) = r8_276;
    char r8_277 = *var_f8[9];
    *var_f8[8] = rdx_325;
    char rax_283 = rax_282 + r8_277;
    uint64_t rcx_280 = rax_283;
    char var_130 = *(&var_108 + rdx_325 + *(&var_108 + rcx_279)) ^ data_14000b018;
    char rdx_328 = *(&var_108 + rcx_280);
    *(&var_108 + rcx_280) = r8_277;
    char r8_278 = *var_f8[0xa];
    *var_f8[9] = rdx_328;
    char rax_284 = rax_283 + r8_278;
    uint64_t rcx_281 = rax_284;
    char var_12f = *(&var_108 + rdx_328 + *(&var_108 + rcx_280)) ^ data_14000b019;
    char rdx_331 = *(&var_108 + rcx_281);
    *(&var_108 + rcx_281) = r8_278;
    char r8_279 = *var_f8[0xb];
    *var_f8[0xa] = rdx_331;
    char rax_285 = rax_284 + r8_279;
    uint64_t rcx_282 = rax_285;
    char var_12e = *(&var_108 + rdx_331 + *(&var_108 + rcx_281)) ^ data_14000b01a;
    char rdx_334 = *(&var_108 + rcx_282);
    *(&var_108 + rcx_282) = r8_279;
    *var_f8[0xb] = rdx_334;
    char r8_280 = *var_f8[0xc];
    char rax_286 = rax_285 + r8_280;
    char var_12d = *(&var_108 + rdx_334 + *(&var_108 + rcx_282)) ^ data_14000b01b;
    uint64_t rcx_283 = rax_286;
    char rdx_337 = *(&var_108 + rcx_283);
    *(&var_108 + rcx_283) = r8_280;
    char r8_281 = *var_f8[0xd];
    *var_f8[0xc] = rdx_337;
    char rax_287 = rax_286 + r8_281;
    uint64_t rcx_284 = rax_287;
    char var_12c = *(&var_108 + rdx_337 + *(&var_108 + rcx_283)) ^ data_14000b01c;
    char rdx_340 = *(&var_108 + rcx_284);
    *(&var_108 + rcx_284) = r8_281;
    char r8_282 = *var_f8[0xe];
    *var_f8[0xd] = rdx_340;
    char rax_288 = rax_287 + r8_282;
    uint64_t rcx_285 = rax_288;
    char var_12b = *(&var_108 + rdx_340 + *(&var_108 + rcx_284)) ^ data_14000b01d;
    char rdx_343 = *(&var_108 + rcx_285);
    *(&var_108 + rcx_285) = r8_282;
    char r8_283 = *var_f8[0xf];
    *var_f8[0xe] = rdx_343;
    char rax_289 = rax_288 + r8_283;
    uint64_t rcx_286 = rax_289;
    char var_12a = *(&var_108 + rdx_343 + *(&var_108 + rcx_285)) ^ data_14000b01e;
    char rdx_346 = *(&var_108 + rcx_286);
    *(&var_108 + rcx_286) = r8_283;
    *var_f8[0xf] = rdx_346;
    char r8_284 = var_e8;
    char var_129 = *(&var_108 + rdx_346 + *(&var_108 + rcx_286)) ^ data_14000b01f;
    char rax_290 = rax_289 + r8_284;
    uint64_t rcx_287 = rax_290;
    char rdx_349 = *(&var_108 + rcx_287);
    *(&var_108 + rcx_287) = r8_284;
    char r8_285 = *var_e8[1];
    var_e8 = rdx_349;
    char rax_291 = rax_290 + r8_285;
    uint64_t rcx_288 = rax_291;
    char var_128 = *(&var_108 + rdx_349 + *(&var_108 + rcx_287)) ^ data_14000b020;
    char rdx_352 = *(&var_108 + rcx_288);
    *(&var_108 + rcx_288) = r8_285;
    char r8_286 = *var_e8[2];
    *var_e8[1] = rdx_352;
    char rax_292 = rax_291 + r8_286;
    uint64_t rcx_289 = rax_292;
    char var_127 = *(&var_108 + rdx_352 + *(&var_108 + rcx_288)) ^ data_14000b021;
    char rdx_355 = *(&var_108 + rcx_289);
    *(&var_108 + rcx_289) = r8_286;
    char r8_287 = *var_e8[3];
    *var_e8[2] = rdx_355;
    char rax_293 = rax_292 + r8_287;
    uint64_t rcx_290 = rax_293;
    char var_126 = *(&var_108 + rdx_355 + *(&var_108 + rcx_289)) ^ data_14000b022;
    char rdx_358 = *(&var_108 + rcx_290);
    *(&var_108 + rcx_290) = r8_287;
    *var_e8[3] = rdx_358;
    char r8_288 = *var_e8[4];
    char var_125 = *(&var_108 + rdx_358 + *(&var_108 + rcx_290)) ^ data_14000b023;
    char rax_294 = rax_293 + r8_288;
    uint64_t rcx_291 = rax_294;
    char rdx_361 = *(&var_108 + rcx_291);
    *(&var_108 + rcx_291) = r8_288;
    char r8_289 = *var_e8[5];
    *var_e8[4] = rdx_361;
    char rax_295 = rax_294 + r8_289;
    uint64_t rcx_292 = rax_295;
    char var_124 = *(&var_108 + rdx_361 + *(&var_108 + rcx_291)) ^ data_14000b024;
    char rdx_364 = *(&var_108 + rcx_292);
    *(&var_108 + rcx_292) = r8_289;
    char r8_290 = *var_e8[6];
    *var_e8[5] = rdx_364;
    char rax_296 = rax_295 + r8_290;
    uint64_t rcx_293 = rax_296;
    char var_123 = *(&var_108 + rdx_364 + *(&var_108 + rcx_292)) ^ data_14000b025;
    char rdx_367 = *(&var_108 + rcx_293);
    *(&var_108 + rcx_293) = r8_290;
    char r8_291 = *var_e8[7];
    *var_e8[6] = rdx_367;
    char rax_297 = rax_296 + r8_291;
    uint64_t rcx_294 = rax_297;
    char var_122 = *(&var_108 + rdx_367 + *(&var_108 + rcx_293)) ^ data_14000b026;
    char rdx_370 = *(&var_108 + rcx_294);
    *(&var_108 + rcx_294) = r8_291;
    *var_e8[7] = rdx_370;
    char r8_292 = *var_e8[8];
    char var_121 = *(&var_108 + rdx_370 + *(&var_108 + rcx_294)) ^ data_14000b027;
    char rax_298 = rax_297 + r8_292;
    uint64_t rcx_295 = rax_298;
    char rdx_373 = *(&var_108 + rcx_295);
    *(&var_108 + rcx_295) = r8_292;
    char r8_293 = *var_e8[9];
    *var_e8[8] = rdx_373;
    char rax_299 = rax_298 + r8_293;
    uint64_t rcx_296 = rax_299;
    char var_120 = *(&var_108 + rdx_373 + *(&var_108 + rcx_295)) ^ data_14000b028;
    char rdx_376 = *(&var_108 + rcx_296);
    *(&var_108 + rcx_296) = r8_293;
    char r8_294 = *var_e8[0xa];
    *var_e8[9] = rdx_376;
    char rax_300 = rax_299 + r8_294;
    uint64_t rcx_297 = rax_300;
    char var_11f = *(&var_108 + rdx_376 + *(&var_108 + rcx_296)) ^ data_14000b029;
    char rdx_379 = *(&var_108 + rcx_297);
    *(&var_108 + rcx_297) = r8_294;
    char r8_295 = *var_e8[0xb];
    *var_e8[0xa] = rdx_379;
    char rax_301 = rax_300 + r8_295;
    uint64_t rcx_298 = rax_301;
    char var_11e = *(&var_108 + rdx_379 + *(&var_108 + rcx_297)) ^ data_14000b02a;
    char rdx_382 = *(&var_108 + rcx_298);
    *(&var_108 + rcx_298) = r8_295;
    *var_e8[0xb] = rdx_382;
    char r8_296 = *var_e8[0xc];
    char var_11d = *(&var_108 + rdx_382 + *(&var_108 + rcx_298)) ^ data_14000b02b;
    char rax_302 = rax_301 + r8_296;
    uint64_t rcx_299 = rax_302;
    char rdx_385 = *(&var_108 + rcx_299);
    *(&var_108 + rcx_299) = r8_296;
    char r8_297 = *var_e8[0xd];
    *var_e8[0xc] = rdx_385;
    char rax_303 = rax_302 + r8_297;
    uint64_t rcx_300 = rax_303;
    char var_11c = *(&var_108 + rdx_385 + *(&var_108 + rcx_299)) ^ data_14000b02c;
    char rdx_388 = *(&var_108 + rcx_300);
    *(&var_108 + rcx_300) = r8_297;
    char r8_298 = *var_e8[0xe];
    *var_e8[0xd] = rdx_388;
    char rax_304 = rax_303 + r8_298;
    uint64_t rcx_301 = rax_304;
    char var_11b = *(&var_108 + rdx_388 + *(&var_108 + rcx_300)) ^ data_14000b02d;
    char rdx_391 = *(&var_108 + rcx_301);
    *(&var_108 + rcx_301) = r8_298;
    char r8_299 = *var_e8[0xf];
    *var_e8[0xe] = rdx_391;
    char rax_305 = rax_304 + r8_299;
    uint64_t rcx_302 = rax_305;
    char var_11a = *(&var_108 + rdx_391 + *(&var_108 + rcx_301)) ^ data_14000b02e;
    char rdx_394 = *(&var_108 + rcx_302);
    *(&var_108 + rcx_302) = r8_299;
    *var_e8[0xf] = rdx_394;
    char r8_300 = var_d8;
    char var_119 = *(&var_108 + rdx_394 + *(&var_108 + rcx_302)) ^ data_14000b02f;
    char rax_306 = rax_305 + r8_300;
    uint64_t rcx_303 = rax_306;
    char rdx_397 = *(&var_108 + rcx_303);
    *(&var_108 + rcx_303) = r8_300;
    char r8_301 = *var_d8[1];
    var_d8 = rdx_397;
    char rax_307 = rax_306 + r8_301;
    uint64_t rcx_304 = rax_307;
    char var_118 = *(&var_108 + rdx_397 + *(&var_108 + rcx_303)) ^ data_14000b030;
    char rdx_400 = *(&var_108 + rcx_304);
    *(&var_108 + rcx_304) = r8_301;
    char r8_302 = *var_d8[2];
    *var_d8[1] = rdx_400;
    char rax_308 = rax_307 + r8_302;
    uint64_t rcx_305 = rax_308;
    char var_117 = *(&var_108 + rdx_400 + *(&var_108 + rcx_304)) ^ data_14000b031;
    char rdx_403 = *(&var_108 + rcx_305);
    *(&var_108 + rcx_305) = r8_302;
    char r8_303 = *var_d8[3];
    *var_d8[2] = rdx_403;
    char rax_309 = rax_308 + r8_303;
    uint64_t rcx_306 = rax_309;
    char var_116 = *(&var_108 + rdx_403 + *(&var_108 + rcx_305)) ^ data_14000b032;
    char rdx_406 = *(&var_108 + rcx_306);
    *(&var_108 + rcx_306) = r8_303;
    *var_d8[3] = rdx_406;
    char r8_304 = *var_d8[4];
    char var_115 = *(&var_108 + rdx_406 + *(&var_108 + rcx_306)) ^ data_14000b033;
    char rax_310 = rax_309 + r8_304;
    uint64_t rcx_307 = rax_310;
    char rdx_409 = *(&var_108 + rcx_307);
    *(&var_108 + rcx_307) = r8_304;
    char r8_305 = *var_d8[5];
    *var_d8[4] = rdx_409;
    char rax_311 = rax_310 + r8_305;
    uint64_t rcx_308 = rax_311;
    char var_114 = *(&var_108 + rdx_409 + *(&var_108 + rcx_307)) ^ data_14000b034;
    char rdx_412 = *(&var_108 + rcx_308);
    *(&var_108 + rcx_308) = r8_305;
    char r8_306 = *var_d8[6];
    *var_d8[5] = rdx_412;
    char rax_312 = rax_311 + r8_306;
    uint64_t rcx_309 = rax_312;
    char var_113 = *(&var_108 + rdx_412 + *(&var_108 + rcx_308)) ^ data_14000b035;
    char rdx_415 = *(&var_108 + rcx_309);
    *(&var_108 + rcx_309) = r8_306;
    char r8_307 = *var_d8[7];
    *var_d8[6] = rdx_415;
    char rax_313 = rax_312 + r8_307;
    uint64_t rcx_310 = rax_313;
    char var_112 = *(&var_108 + rdx_415 + *(&var_108 + rcx_309)) ^ data_14000b036;
    char rdx_418 = *(&var_108 + rcx_310);
    *(&var_108 + rcx_310) = r8_307;
    *var_d8[7] = rdx_418;
    char r8_308 = *var_d8[8];
    char var_111 = *(&var_108 + rdx_418 + *(&var_108 + rcx_310)) ^ data_14000b037;
    char rax_314 = rax_313 + r8_308;
    uint64_t rcx_311 = rax_314;
    char rdx_421 = *(&var_108 + rcx_311);
    *(&var_108 + rcx_311) = r8_308;
    char r8_309 = *var_d8[9];
    *var_d8[8] = rdx_421;
    char rax_315 = rax_314 + r8_309;
    uint64_t rcx_312 = rax_315;
    char var_110 = *(&var_108 + rdx_421 + *(&var_108 + rcx_311)) ^ data_14000b038;
    char rdx_424 = *(&var_108 + rcx_312);
    *(&var_108 + rcx_312) = r8_309;
    char r8_310 = *var_d8[0xa];
    *var_d8[9] = rdx_424;
    char rax_316 = rax_315 + r8_310;
    uint64_t rcx_313 = rax_316;
    char var_10f = *(&var_108 + rdx_424 + *(&var_108 + rcx_312)) ^ data_14000b039;
    char rdx_427 = *(&var_108 + rcx_313);
    *(&var_108 + rcx_313) = r8_310;
    char r8_311 = *var_d8[0xb];
    *var_d8[0xa] = rdx_427;
    char rax_317 = rax_316 + r8_311;
    uint64_t rcx_314 = rax_317;
    char var_10e = *(&var_108 + rdx_427 + *(&var_108 + rcx_313)) ^ data_14000b03a;
    char rdx_430 = *(&var_108 + rcx_314);
    *(&var_108 + rcx_314) = r8_311;
    *var_d8[0xb] = rdx_430;
    char rdx_432 = *(&var_108 + rdx_430 + *(&var_108 + rcx_314)) ^ data_14000b03b;
    char var_148 = 0x20;
    char r8_312 = *var_d8[0xc];
    char var_10d = rdx_432;
    char var_109 = 0;
    char rax_318 = rax_317 + r8_312;
    uint64_t rcx_315 = rax_318;
    char rdx_433 = *(&var_108 + rcx_315);
    *(&var_108 + rcx_315) = r8_312;
    char r8_313 = *var_d8[0xd];
    *var_d8[0xc] = rdx_433;
    char rax_319 = rax_318 + r8_313;
    uint64_t rcx_316 = rax_319;
    char var_10c = *(&var_108 + rdx_433 + *(&var_108 + rcx_315)) ^ data_14000b03c;
    char rdx_436 = *(&var_108 + rcx_316);
    *(&var_108 + rcx_316) = r8_313;
    *var_d8[0xd] = rdx_436;
    char rcx_317 = *var_d8[0xe];
    char var_10b = *(&var_108 + rdx_436 + *(&var_108 + rcx_316)) ^ data_14000b03d;
    uint64_t rax_321 = rax_319 + rcx_317;
    char rdx_439 = *(&var_108 + rax_321);
    *(&var_108 + rax_321) = rcx_317;
    *var_d8[0xe] = rdx_439;
    char var_10a = *(&var_108 + rdx_439 + *(&var_108 + rax_321)) ^ data_14000b03e;
    return printf("Decrypted message: %s\n", &var_148);
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
        } while (i != ((rax_1 - (rcx - 1)) << 3) + 0x14000afb8);
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
                goto label_140004caa;
            
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
    label_140004caa:
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
                    
                    label_1400051f6:
                    
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
                        goto label_1400051f6;
                    
                    signal(8, 1);
                    return 0xffffffff;
                    break;
                }
                case 9:
                {
                    label_14000517a:
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
                goto label_14000517a;
            
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
        
        if (0x10000 >= virtualAddress && 0x10000 < virtualAddress + i_1->virtualSize)
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
                goto label_1400059e2;
            
            be = -0x403d;
            kindp = 2;
            rcx_1 = rdx_1 & 0x8000;
        }
    }
    else if (r10 != 0x7fff)
    {
        label_1400059e2:
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
                goto label_140005b50;
            
            stream->width = rax_6 - 1;
            goto label_140005bf0;
        }
        
        stream->width = rax_6 - 1;
        
        do
        {
            __pformat_putc(0x20, stream);
            width = stream->width;
            stream->width = width - 1;
        } while (width);
        
        goto label_140005b3e;
    }
    
    stream->width = 0xffffffff;
    label_140005b3e:
    
    if (count_2 <= 0)
        stream->width = 0xfffffffe;
    else
    {
        label_140005b50:
        
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
                    
                    label_140005bf0:
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
                    goto label_140005bf0;
                
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
            
            goto label_140005c93;
        }
        
        if (!count_3)
        {
            stream->width = rax_2 - 1;
            goto label_140005d11;
        }
    }
    else
    {
        stream->width = 0xffffffff;
        label_140005c93:
        
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
        label_140005d11:
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
            goto label_140005f01;
        }
        
        rcx = 4;
        
        if (stream_1[4])
            goto label_1400060a2;
        
        r12 = *(stream_1 + 0xc);
        
        if (rax_1 < r12)
            rax_1 = r12;
        
        int64_t rax_29 = (rax_1 + 0xf) & 0xfffffffffffffff0;
        _.text(rax_29);
        r8 = 0xf;
        r13 = &var_78 - rax_29 + 0x20;
        goto label_1400060df;
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
            
            goto label_140006201;
        }
        
        rcx = 3;
        label_1400060a2:
        r12 = *(stream_1 + 0xc);
        int32_t rax_18 = rax_1 + rax_1 / 3;
        
        if (rax_18 < r12)
            rax_18 = r12;
        
        int64_t rax_21 = (rax_18 + 0xf) & 0xfffffffffffffff0;
        _.text(rax_21);
        r13 = &var_78 - rax_21 + 0x20;
        
        if (fmt == 0x6f)
            goto label_140006217;
        
        r8 = 0xf;
        label_1400060df:
        rsi = r13;
        
        if (stream)
            goto label_140005f3f;
        
        goto label_1400060f6;
    }
    
    r12 = *(stream_1 + 0xc);
    
    if (r12 >= rax_1)
        rax_1 = r12;
    
    label_140006201:
    int64_t rax_26 = (rax_1 + 0xf) & 0xfffffffffffffff0;
    _.text(rax_26);
    rcx = 3;
    r13 = &var_78 - rax_26 + 0x20;
    label_140006217:
    r8 = 7;
    label_140005f01:
    rsi = r13;
    
    if (stream)
    {
        label_140005f3f:
        
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
            goto label_1400060f6;
        
        if (r15 <= 0)
            goto label_14000622c;
        
        goto label_140005f5c;
    }
    
    label_1400060f6:
    stream_1[1] = rdi & 0xfffff7ff;
    
    if (r15 <= 0)
    {
        label_14000622c:
        
        if (fmt == 0x6f && *(stream_1 + 9) & 8)
        {
            *rsi = 0x30;
            rsi = &rsi[1];
        }
        
        if (rsi != r13 || !r15)
            goto label_140005f8a;
        
        goto label_140006124;
    }
    
    label_140005f5c:
    int32_t _Size_2 = r15 - (rsi - r13);
    
    if (_Size_2 <= 0)
        goto label_14000622c;
    
    int64_t _Size = _Size_2;
    char* rcx_1 = rsi;
    rsi = &rsi[_Size];
    memset(rcx_1, 0x30, _Size);
    int32_t i;
    
    if (rsi != r13)
    {
        label_140005f8a:
        i = rsi - r13;
        
        if (i < r12)
            goto label_140006140;
        
        goto label_140005f96;
    }
    
    label_140006124:
    *rsi = 0x30;
    rsi = &rsi[1];
    i = rsi - r13;
    int32_t _Size_3;
    
    if (i >= r12)
    {
        label_140005f96:
        *(stream_1 + 0xc) = 0xffffffff;
        
        if (fmt == 0x6f)
        {
            _Size_3 = -1;
            
            if (rsi > r13)
                goto label_140005fdd;
            
            return i;
        }
        
        _Size_3 = -1;
        
        if (*(stream_1 + 9) & 8)
        {
            *rsi = fmt;
            rsi = &rsi[2];
            rsi[-1] = 0x30;
        }
        
        goto label_140005fb7;
    }
    
    label_140006140:
    _Size_3 = r12 - i;
    int32_t rdi_1 = stream_1[1];
    *(stream_1 + 0xc) = _Size_3;
    int32_t rsi_1;
    
    if (fmt == 0x6f)
    {
        if (r15 < 0 && (rdi_1 & 0x600) == 0x200)
        {
            label_140006307:
            char* rcx_2 = rsi;
            uint64_t _Size_1 = _Size_3;
            rsi = &rsi[_Size_1];
            i = memset(rcx_2, 0x30, _Size_1);
            _Size_3 = _Size_3 * 0 - 1;
            
            if (fmt == 0x6f || !(rdi_1 & 0x800))
                goto label_14000617d;
            
            goto label_140006172;
        }
        
        if (!(rdi_1 & 0x400))
        {
            label_140006195:
            int32_t i_1 = _Size_3 - 1;
            
            do
            {
                __pformat_putc(0x20, stream_1);
                i = i_1;
                i_1 -= 1;
            } while (i > 0);
            
            _Size_3 = -1;
            
            if (rsi > r13)
                goto label_140005fdd;
            
            goto label_140006015;
        }
        
        if (rsi > r13)
        {
            label_140005fe0:
            
            while (true)
            {
                rsi -= 1;
                int32_t rax_13;
                
                if (!(rdi_1 & 0x4000))
                    rax_13 = *(stream_1 + 0x24);
                
                if (!(rdi_1 & 0x4000) && stream_1[5] <= rax_13)
                    goto label_140005fd2;
                
                int32_t _Character = *rsi;
                char* _Stream = *stream_1;
                
                if (!(rdi_1 & 0x2000))
                {
                    _Stream[*(stream_1 + 0x24)] = _Character;
                    rax_13 = *(stream_1 + 0x24);
                    label_140005fd2:
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
                
                label_140005fdd:
                rdi_1 = stream_1[1];
            }
            
            label_140006015:
            rsi_1 = _Size_3 - 1;
            
            if (_Size_3 > 0)
                goto label_14000603e;
            
            return i;
        }
    }
    else
    {
        if (rdi_1 & 0x800)
        {
            _Size_3 -= 2;
            
            if (_Size_3 > 0 && r15 < 0)
                goto label_140006352;
            
            label_140006172:
            *rsi = fmt;
            rsi = &rsi[2];
            rsi[-1] = 0x30;
            label_14000617d:
            
            if (_Size_3 <= 0)
            {
                label_140005fb7:
                
                if (r13 < rsi)
                    goto label_140005fdd;
                
                return i;
            }
            
            rdi_1 = stream_1[1];
            
            if (rdi_1 & 0x400)
                goto label_140006285;
            
            goto label_140006195;
        }
        
        if (r15 < 0)
        {
            label_140006352:
            i = rdi_1 & 0x600;
            
            if (i == 0x200)
                goto label_140006307;
            
            if (rdi_1 & 0x800)
                goto label_140006172;
        }
        
        if (!(rdi_1 & 0x400))
            goto label_140006195;
        
        label_140006285:
        
        if (r13 < rsi)
            goto label_140005fe0;
    }
    
    rsi_1 = _Size_3 - 1;
    
    while (true)
    {
        int32_t rax_16;
        
        if (!(rdi_1 & 0x4000))
            rax_16 = *(stream_1 + 0x24);
        
        if (!(rdi_1 & 0x4000) && stream_1[5] <= rax_16)
            goto label_140006033;
        
        char* _Stream_1 = *stream_1;
        
        if (!(rdi_1 & 0x2000))
        {
            _Stream_1[*(stream_1 + 0x24)] = 0x20;
            rax_16 = *(stream_1 + 0x24);
            label_140006033:
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
        
        label_14000603e:
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
        goto label_140006416;
    
    void var_68;
    void* rdi_1;
    int32_t _Size_1;
    
    if (stream < 0)
    {
        stream = -(stream);
        label_14000642c:
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
                goto label_1400064d0;
            
            goto label_1400064ba;
        }
        
        if (&var_68 - rax_3 + 0x20 == rdi_1)
            goto label_140006659;
    }
    else
    {
        r12 &= 0x7f;
        stream_1[1] = r12;
        label_140006416:
        
        if (stream)
            goto label_14000642c;
        
        rdi_1 = &var_68 - rax_3 + 0x20;
        _Size_1 = _Size_2;
        
        if (_Size_2 > 0)
        {
            label_1400064ba:
            int64_t _Size = _Size_1;
            void* rcx = rdi_1;
            rdi_1 += _Size;
            memset(rcx, 0x30, _Size);
            label_1400064d0:
            
            if (&var_68 - rax_3 + 0x20 == rdi_1)
            {
                *rdi_1 = 0x30;
                rdi_1 += 1;
            }
        }
        else
        {
            label_140006659:
            
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
                    goto label_14000669a;
                
                goto label_140006502;
            }
            
            *(stream_1 + 0xc) = rsi_1 - 1;
            
            if (_Size_2 >= 0 || (r12 & 0x600) != 0x200)
            {
                label_140006502:
                
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
                label_14000669a:
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
                goto label_14000653d;
            
            int32_t _Character = *rsi_2;
            FILE* _Stream = *stream_1;
            
            if (!(r12 & 0x2000))
            {
                *(_Stream + *(stream_1 + 0x24)) = _Character;
                rax_17 = *(stream_1 + 0x24);
                label_14000653d:
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
                goto label_1400068b9;
            
            precision_2 = stream->precision;
            
            if (width <= precision_2)
                goto label_1400068b9;
            
            goto label_140006a09;
        }
        
        label_1400068b9:
        stream->width = 0xffffffff;
        
        if (*stream->flags[1] & 0x10 && stream->thousands_chr)
        {
            rax = -1;
            label_1400068de:
            uint32_t rcx_2 = (rsi + 2) / 3;
            int32_t i = rcx_2 - 1 - rax;
            
            if (rcx_2 != 1)
            {
                do
                {
                    if (rax <= 0)
                        goto label_14000693a;
                    
                    rax -= 1;
                    stream->width = rax;
                } while (i != -(rax));
            }
            
            goto label_1400068f0;
        }
        
        label_14000693a:
        
        if (!sign)
            goto label_140006942;
        
        __pformat_putc(0x2d, stream);
    }
    else
    {
        int flags;
        
        if (width <= 0)
        {
            if (!width)
                goto label_140006a6b;
            
            stream->width = 0xffffffff;
            label_140006a79:
            
            if (!sign)
            {
                label_140006942:
                flags = stream->flags;
                label_140006945:
                
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
            label_140006a6b:
            precision_2 = stream->precision;
            
            if (width <= precision_2)
            {
                stream->width = 0xffffffff;
                goto label_140006a79;
            }
            
            label_140006a09:
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
                    goto label_1400068de;
                
                label_1400068f0:
                
                if (rax <= 0)
                    goto label_14000693a;
            }
            else if (rsi > 0)
            {
                *flags_1[1] &= 0x10;
                
                if (!*flags_1[1] || !stream->thousands_chr)
                    goto label_1400068f4;
                
                goto label_1400068de;
            }
            
            label_1400068f4:
            int rax_1;
            
            if (!sign)
            {
                flags = stream->flags;
                
                if (flags & 0x1c0)
                {
                    rax_1 = rax - 1;
                    stream->width = rax_1;
                    
                    if (rax == 1 || *flags[1] & 6)
                        goto label_140006945;
                    
                    goto label_14000691b;
                }
                
                if (*flags[1] & 6)
                    goto label_140006945;
                
                int width_4 = stream->width;
                stream->width = width_4 - 1;
                
                if (width_4 <= 0)
                    goto label_140006945;
                
                goto label_140006938;
            }
            
            rax_1 = rax - 1;
            stream->width = rax_1;
            
            if (rax == 1)
                __pformat_putc(0x2d, stream);
            else
            {
                if (!(stream->flags & 0x600))
                {
                    label_14000691b:
                    stream->width = rax_1 - 1;
                    label_140006938:
                    int width_1;
                    
                    do
                    {
                        __pformat_putc(0x20, stream);
                        width_1 = stream->width;
                        stream->width = width_1 - 1;
                    } while (width_1 > 0);
                    goto label_14000693a;
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
                goto label_140006b4d;
            
            stream->precision = precision - 1;
            return precision - 1;
        }
        
        __pformat_emit_radix_point(stream);
        
        if (rsi)
        {
            precision = stream->precision;
            label_140006b4d:
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
            label_140007267:
            i_2 = precision_1 + 1;
            goto label_14000726a;
        }
        
        uint64_t stream_4 = (rax_2 * 2) >> (0xf - precision_1) << 2;
        stream_3 = stream_4;
        
        if (stream_4 || stream_2)
            goto label_140007267;
        
        goto label_14000707d;
    }
    
    char var_58;
    int flags;
    void* i_1;
    int flags_1;
    
    if (cond:0 || stream_2)
    {
        i_2 = 0x10;
        label_14000726a:
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
                
                goto label_1400072d3;
            }
            
            int precision_4;
            
            if (i_1 <= &var_58 && !(flags & 0x800))
                precision_4 = stream_1->precision;
            
            if (i_1 <= &var_58 && !(flags & 0x800) && precision_4 <= 0)
            {
                if (rax_17)
                    goto label_1400072d7;
                
                if (!precision_4)
                    goto label_14000729f;
                
                break;
            }
            
            *i_1 = 0x2e;
            i_1 += 1;
            label_1400072d3:
            
            if (rax_17)
            {
                label_1400072d7:
                
                if (rax_17 <= 9)
                    goto label_14000729f;
                
                *i_1 = (rax_17 + 0x37) | (flags & 0x20);
                i_1 += 1;
            }
            else if (i_1 > &var_58 || stream_1->precision >= 0)
            {
                label_14000729f:
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
                goto label_140007087;
            
            goto label_140007316;
        }
    }
    else
    {
        label_14000707d:
        flags = stream_1->flags;
        label_140007087:
        flags_1 = flags;
        char* rax_4 = &var_58;
        
        if (*flags[1] & 8)
        {
            label_140007316:
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
                    label_1400075bb:
                    
                    if (rax_4 - 0x30 > 9 || r14_1 > 3)
                    {
                        label_140007db5:
                        int64_t r9_29;
                        r9_29 = __pformat_putc(0x25, &stream.rpchr);
                        break;
                        break;
                    }
                    
                    if (r14_1)
                        goto label_140007d5a;
                    
                    r14_1 = 1;
                    label_1400075dc:
                    
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
                            goto label_1400075bb;
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
                                label_140007b01:
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
                                    goto label_140007aab;
                                
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
                                    label_140007aab:
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
                                goto label_140007b01;
                            
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
                                    goto label_140007db5;
                                
                                rcx = 0x30;
                                label_140007d5a:
                                
                                if (r14_1 != 2)
                                    goto label_1400075dc;
                                
                                r14_1 = 3;
                                goto label_1400075dc;
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
                                goto label_1400077cd;
                            
                            goto label_140007b52;
                        }
                        case 0x43:
                        {
                            stream.quota = 0xffffffff;
                            argv_3 = &argv_1[8];
                            label_140007bf0:
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
                                goto label_1400078d3;
                            
                            goto label_140007c3a;
                        }
                        case 0x46:
                        {
                            rdx_11 = *argv_1;
                            argv_1 = &argv_1[8];
                            
                            if (stream.thousands_chr & 4)
                                goto label_140007969;
                            
                            goto label_140007c72;
                        }
                        case 0x47:
                        {
                            rdx_13 = *argv_1;
                            argv_1 = &argv_1[8];
                            
                            if (stream.thousands_chr & 4)
                                goto label_1400079a1;
                            
                            goto label_140007caa;
                        }
                        case 0x49:
                        {
                            rax_4 = *(rsi_1 + 1);
                            
                            if (rax_4 == 0x36)
                            {
                                if (*(rsi_1 + 2) != 0x34)
                                    goto label_140007db5;
                                
                                rax_4 = *(rsi_1 + 3);
                                r15_1 = 3;
                                rsi_1 += 3;
                                r14_1 = 4;
                            }
                            else if (rax_4 == 0x33)
                            {
                                if (*(rsi_1 + 2) != 0x32)
                                    goto label_140007db5;
                                
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
                            label_140007d09:
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
                            goto label_140007d47;
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
                                label_1400077cd:
                                int16_t rbx_4 = rcx_3[1];
                                uint64_t value = *rcx_3;
                                int32_t r10_2 = rbx_4;
                                int32_t r9_9 = (value >> 0x20 & 0x7fffffff) | value;
                                
                                if ((0xfffe - ((-(r9_9) | r9_9) >> 0x1f | (r10_2 * 2))) >> 0x10)
                                    goto label_140007d75;
                                
                                if (rbx_4 < 0)
                                {
                                    rax_15 |= 0x80;
                                    stream.thousands_chr = rax_15;
                                }
                                
                                int16_t rdx_7 = rbx_4 & 0x7fff;
                                
                                if (!rdx_7)
                                {
                                    r9_26 = __pformat_emit_xfloat(value);
                                    goto label_140007d47;
                                }
                                
                                if (rdx_7 != 0x7fff || r9_9)
                                {
                                    r9_26 = __pformat_emit_xfloat(value);
                                    goto label_140007d47;
                                }
                                
                                int64_t r9_31;
                                r9_31 = __pformat_emit_inf_or_nan(r10_2 & 0x8000, "Inf", &stream.rpchr);
                                goto label_140007d47;
                            }
                            
                            label_140007b52:
                            uint32_t r8_9 = rcx_3 >> 0x20;
                            double var_c8_2;
                            var_c8_2 = rcx_3;
                            
                            if (0x7ff00000 - ((-(rcx_3) | rcx_3) >> 0x1f | (r8_9 & 0x7fffffff)) < 0)
                            {
                                label_140007d75:
                                int64_t r9_28;
                                r9_28 = __pformat_emit_inf_or_nan(0, "NaN", &stream.rpchr);
                                label_140007d47:
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
                                goto label_140007d47;
                            }
                            
                            double rax_34 = var_c8_2;
                            int32_t rdx_24;
                            rdx_24 = var_c0 & 0x7fff;
                            
                            if (!rdx_24)
                                label_140007dec:
                            else if (rdx_24 > 0x3c00)
                            {
                                if (!rdx_24)
                                    goto label_140007dec;
                                
                                rdx_24 -= 0x3ffc;
                            }
                            else
                            {
                                rax_34 u>>= (0x3c01 - rdx_24);
                                rdx_24 = (rdx_24 + 0x3c01 - rdx_24) - 0x3ffc;
                            }
                            
                            r9_26 = __pformat_emit_xfloat(rax_34 >> 3);
                            goto label_140007d47;
                        }
                        case 0x63:
                        {
                            argv_3 = &argv_1[8];
                            stream.quota = 0xffffffff;
                            
                            if (r15_1 - 2 <= 1)
                                goto label_140007bf0;
                            
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
                                label_1400078d3:
                                rbx_1 = rsi_1 + 1;
                                int80_t var_a8_1 = *rdx_8;
                                int64_t r9_11;
                                r9_11 = __pformat_efloat(x, &stream.rpchr);
                                break;
                                break;
                            }
                            
                            label_140007c3a:
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
                                label_140007969:
                                rbx_1 = rsi_1 + 1;
                                int80_t var_a8_2 = *rdx_11;
                                int64_t r9_13;
                                r9_13 = __pformat_float(x, &stream.rpchr);
                                break;
                                break;
                            }
                            
                            label_140007c72:
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
                                label_1400079a1:
                                rbx_1 = rsi_1 + 1;
                                int80_t var_a8_3 = *rdx_13;
                                int64_t r9_14;
                                r9_14 = __pformat_gfloat(x, &stream.rpchr);
                                break;
                                break;
                            }
                            
                            label_140007caa:
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
                                goto label_140007d47;
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
                                goto label_140007d09;
                            
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
            goto label_140008126;
    }
    else if (__cmp_D2A(b, S) >= 0)
    {
        label_140008126:
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
                    label_140008568:
                    e_13 = 0;
                    
                    if (e_14 < 0)
                    {
                        label_140008b75:
                        e_14 = 0;
                        e_13 = 1 - rax_25;
                    }
                    
                    if (k_10 >= 0)
                        goto label_140008811;
                    
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
                        goto label_140008568;
                    }
                    
                    var_7c_1 = 0;
                    e_13 = 0;
                    
                    if (e_14 < 0)
                        goto label_140008b75;
                    
                    label_140008811:
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
                    label_14000885a:
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
                                label_1400091c0:
                                
                                if (mode_1 <= 1)
                                    goto label_140008911;
                            }
                            else
                            {
                                label_1400088e8:
                                e_2 = be_1 - emin + 1;
                                int32_t rcx_23;
                                rcx_23 = mode_1 > 1;
                                e = e_2;
                                emin = i_1 > 0;
                                
                                if (!(rcx_23 & emin) || e_2 <= i_1)
                                    goto label_140008911;
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
                                goto label_140008925;
                            }
                            
                            e = i_1;
                            e_12 += i_1;
                            e_11 = e_13;
                            e_13 += i_1;
                            goto label_140008925;
                        }
                        
                        label_140008911:
                        e_12 += e_2;
                        k_5 = k;
                        e_11 = e_13;
                        e_13 += e_2;
                        label_140008925:
                        var_78 = e_12;
                        var_90_1 = 1;
                        e_12 = var_78;
                        r12_2 = __i2b_D2A(1);
                        label_140008956:
                        
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
                                goto label_14000966b;
                            
                            goto label_140008a2b;
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
                            label_14000966b:
                            e_13 += 1;
                            e_15 += 1;
                            var_a0_2 = 1;
                            label_140008a2b:
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
                            label_140008aa2:
                            
                            if (i_1 <= 0 && rbp_3)
                                goto label_140008ab7;
                            
                            k_12 = k_11 + 1;
                            
                            if (!var_90_1)
                                goto label_140009104;
                            
                            goto label_140008d77;
                        }
                        
                        if (__cmp_D2A(r13_1, b_9) >= 0)
                            goto label_140008aa2;
                        
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
                                label_1400097a7:
                                k_11 -= 1;
                                i_1 = i_4;
                                label_140008ab7:
                                
                                if (i_1)
                                    goto label_140008fa9;
                                
                                struct __Bigint* b = __multadd_D2A(b_9, 5, 0);
                                b_9 = b;
                                
                                if (__cmp_D2A(r13_1, b) <= 0)
                                    goto label_140008fa9;
                                
                                k_12 = k_11 + 2;
                                goto label_140008af0;
                            }
                            
                            k_12 = k_11;
                            i_1 = i_4;
                            label_140008d77:
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
                                                goto label_140009784;
                                            
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
                                            goto label_140008f33;
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
                                            goto label_140009758;
                                        
                                        label_140009727:
                                        struct __Bigint* a_2 = __lshift_D2A(r13_1, 1);
                                        r13_1 = a_2;
                                        int rax_145 = __cmp_D2A(a_2, b_9);
                                        
                                        if (rax_145 <= 0 && (rax_145 || !(var_d8 & 1)))
                                        {
                                            var_88_2 = 0x20;
                                            label_140009758:
                                            
                                            if (*(r13_1 + 0x14) > 1)
                                            {
                                                label_140009768:
                                                r8_11 = r12_2;
                                                var_b0_1 = 0x10;
                                                r12_2 = b_8;
                                                result_4 = &result_3[1];
                                                goto label_1400094e5;
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
                                            
                                            goto label_1400094e5;
                                        }
                                        
                                        if (var_d8 != 0x39)
                                        {
                                            var_88_2 = 0x20;
                                            var_d8 = rax_83 + 0x31;
                                            goto label_140009758;
                                        }
                                        
                                        label_140009784:
                                        result_4 = &result_3[1];
                                    }
                                    else
                                    {
                                        if (*(r13_1 + 0x14) <= 1 && !r13_1[3])
                                        {
                                            if (rdx_32 > 0)
                                                goto label_140009727;
                                            
                                            r8_11 = r12_2;
                                            r12_2 = b_8;
                                            result_4 = &result_3[1];
                                            label_1400094e5:
                                            result_2 = result_4;
                                            *result_3 = var_d8;
                                            goto label_140008f33;
                                        }
                                        
                                        if (var_88_2 == 2)
                                            goto label_140009768;
                                        
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
                                            goto label_1400094e5;
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
                                            goto label_140008f33;
                                        }
                                    }
                                }
                                
                                r8_11 = r12_2;
                                result_2 = result_4;
                                r12_2 = b_8;
                                rdx_42 = 0x39;
                                *result_3 = 0x39;
                                goto label_1400091a7;
                            }
                        }
                        else
                        {
                            if (rbp_5)
                                goto label_1400097a7;
                            
                            k_12 = k_11;
                            i_1 = i_4;
                            label_140009104:
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
                                label_140009183:
                                rdx_42 = result_2[-1];
                                label_1400091a7:
                                
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
                                label_1400093dd:
                                
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
                                goto label_1400093dd;
                            
                            if (*(r13_1 + 0x14) > 1 || r13_1[3])
                                goto label_140009183;
                        }
                        
                        label_140008f33:
                        var_d8 = r8_11;
                        __Bfree_D2A(b_9);
                        
                        if (!r12_2)
                            goto label_140008b18;
                        
                        struct __Bigint* v = var_d8;
                        
                        if (v && v != r12_2)
                            __Bfree_D2A(v);
                        
                        goto label_140008f60;
                    }
                    
                    if (k_11 > fpi->int_max)
                    {
                        ndigits_1 = 0;
                        var_88_2 = 0;
                        i_1 = 0xffffffff;
                        i_4 = 0xffffffff;
                        label_1400088b5:
                        int32_t r12_1 = nbits - rbp_1;
                        emin = fpi->emin;
                        e_2 = r12_1 + 1;
                        e = e_2;
                        
                        if (be_1 - r12_1 >= emin || !((mode_1 - 3) & 0xfffffffd))
                            goto label_1400091c0;
                        
                        goto label_1400088e8;
                    }
                    
                    var_88_2 = 0;
                    i_1 = 0xffffffff;
                    zmm2 = __tens_D2A[k_11];
                    label_140009228:
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
                        goto label_140008b18;
                    
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
                                goto label_140008b18;
                        }
                    }
                    
                    if (var_88_2)
                    {
                        var_b0_1 = 0x10;
                        
                        if (var_88_2 != 1)
                            goto label_140008b18;
                        
                        goto label_1400092f2;
                    }
                    
                    zmm0_3 = zmm0_3 + zmm0_3;
                    
                    if (!(zmm0_3 > zmm2))
                    {
                        zmm0_3 - zmm2;
                        var_b0_1 = 0x10;
                        
                        if (FCMP_UO(zmm0_3, zmm2) || zmm0_3 != zmm2 || !(rax_121 & 1))
                            goto label_140008b18;
                        
                        goto label_1400092f2;
                    }
                    
                    label_1400092f2:
                    i_3 = result_2[-1];
                    k_14 = k_11;
                    label_1400087d6:
                    
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
                    label_140008b18:
                    
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
                                goto label_14000885a;
                            
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
                                    goto label_140009336;
                                }
                                
                                var_90_1 = 1;
                                k_9 = k_10;
                                e_12 = e_14;
                                result = __rv_alloc_D2A(i_1);
                                goto label_140008638;
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
                        goto label_140008c60;
                    }
                    
                    int32_t i_7 = ndigits_1 + k_11;
                    i_4 = i_7;
                    i_1 = i_7 + 1;
                    e = i_7 + 1;
                    
                    if (i_7 + 1 <= 0)
                    {
                        var_90_1 = 0;
                        label_140009336:
                        e = 1;
                        i_2 = 1;
                        label_140008c60:
                        k_9 = k_10;
                        e_12 = e_14;
                        result = __rv_alloc_D2A(i_2);
                        
                        if (mode_1 > 1)
                            goto label_140008638;
                        
                        var_88_2 = 0;
                        label_14000866d:
                        void* rax_35;
                        rax_35 = i_1 <= 0xe;
                        rax_35 &= rdi_7;
                        char r8_8 = rax_35;
                        
                        if (!rax_35 || var_88_2 | k_11)
                            goto label_140008cec;
                        
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
                                goto label_140008cb0;
                            
                            i_5 = i_1;
                            k_14 = 0;
                            label_1400086ff:
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
                                    goto label_1400087d6;
                                
                                zmm0_3 = zmm0_3 - zmm4_2;
                                
                                if (zmm0_3 <= zmm1)
                                    goto label_140008cd9;
                                
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
                                            goto label_140008cd9;
                                        
                                        zmm0_3 = zmm0_3 * zmm3;
                                        result_2 = &result_2[1];
                                        zmm1 = zmm1 * zmm3;
                                        int32_t rax_46 = zmm0_3;
                                        zmm2 = rax_46;
                                        result_2[-1] = rax_46 + 0x30;
                                        zmm0_3 = zmm0_3 - zmm2;
                                        
                                        if (zmm1 > zmm0_3)
                                            goto label_1400097bb;
                                    }
                                    
                                    goto label_1400087d6;
                                }
                                
                                label_1400097bb:
                                zmm0_3 - 0.0;
                                cond:21_1 = FCMP_UO(zmm0_3, 0.0);
                                cond:22_1 = zmm0_3 != 0.0;
                            }
                            
                            uint32_t rax_131 = cond:21_1;
                            
                            if (cond:22_1)
                                rax_131 = 1;
                            
                            var_b0_1 = rax_131 << 4;
                            k_12 = k_14 + 1;
                            goto label_140008b18;
                        }
                        
                        if (!i_1)
                        {
                            zmm1 = zmm0_3 + zmm0_3;
                            zmm1 = zmm1 + 7.0;
                            rax_41 = zmm1 | ((zmm1 >> 0x20) - 0x3400000) << 0x20;
                            label_140008cb0:
                            zmm0_3 = zmm0_3 - 5.0;
                            zmm1 = rax_41;
                            
                            if (!(zmm0_3 > zmm1))
                            {
                                if (__xorpd_xmmxuq_memxuq(zmm1, data_14000c670) > zmm0_3)
                                    goto label_140008f9d;
                                
                                goto label_140008cd9;
                            }
                            
                            k_12 = 2;
                            b_9 = nullptr;
                            r12_2 = nullptr;
                            label_140008af0:
                            *result = 0x31;
                            result_2 = &result[1];
                            __Bfree_D2A(b_9);
                            var_b0_1 = 0x20;
                            
                            if (!r12_2)
                                goto label_140008b18;
                            
                            label_140008f60:
                            __Bfree_D2A(r12_2);
                            goto label_140008b18;
                        }
                        
                        i_5 = i_4;
                        
                        if (i_5 > 0)
                        {
                            zmm0_3 = zmm0_3 * 10.0;
                            k_14 = -1;
                            zmm1 = 0x4008000000000000 * zmm0_3;
                            zmm1 = zmm1 + 7.0;
                            rax_41 = zmm1 | ((zmm1 >> 0x20) - 0x3400000) << 0x20;
                            goto label_1400086ff;
                        }
                        
                        label_140008cd9:
                        var_88_2 = 0;
                    }
                    else
                    {
                        var_90_1 = 0;
                        k_9 = k_10;
                        e_12 = e_14;
                        result = __rv_alloc_D2A(i_1);
                        label_140008638:
                        int rounding = fpi->rounding;
                        var_88_2 = rounding - 1;
                        
                        if (rounding == 1)
                            goto label_14000866d;
                        
                        uint32_t rax_36 = 2;
                        
                        if (rounding - 1 >= 0)
                            rax_36 = rounding - 1;
                        
                        var_88_2 = rax_36;
                        
                        if (rsi & 8)
                        {
                            var_88_2 = 3 - rax_36;
                            goto label_14000866d;
                        }
                    }
                    
                    label_140008cec:
                    
                    if (be_1 < 0 || fpi->int_max < k_11)
                    {
                        if (var_90_1)
                            goto label_1400088b5;
                        
                        k_5 = k;
                        e_11 = e_13;
                        r12_2 = nullptr;
                        goto label_140008956;
                    }
                    
                    int64_t k_13 = k_11;
                    zmm2 = __tens_D2A[k_13];
                    
                    if (ndigits_1 >= 0 || i_1 > 0)
                        goto label_140009228;
                    
                    if (!i_1)
                    {
                        zmm2 = zmm2 * 5.0;
                        
                        if (zmm2 >= var_78)
                            goto label_140008f9d;
                        
                        b_9 = nullptr;
                        r12_2 = nullptr;
                        k_12 = k_13 + 2;
                        goto label_140008af0;
                    }
                    
                    label_140008f9d:
                    b_9 = nullptr;
                    r12_2 = nullptr;
                    label_140008fa9:
                    result_2 = result;
                    k_12 = -(ndigits_1);
                    __Bfree_D2A(b_9);
                    var_b0_1 = 0x10;
                    
                    if (r12_2)
                        goto label_140008f60;
                    
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
        rcx = &data_14000c609;
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
                goto label_1400099d0;
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
                    goto label_1400099d0;
                
                goto label_140009983;
            }
            
            b->x = r9_2;
            
            if (!r9_2)
                b->wds = 0;
            else
            {
                rax_4 = &b->x;
                label_140009983:
                rax_4 += 4;
                label_1400099d0:
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
            
            label_140009a90:
            
            do
            {
                Sleep(1);
                dtoa_CS_init_1 = dtoa_CS_init;
            } while (dtoa_CS_init_1 == 1);
            
            goto label_140009a92;
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
                goto label_140009a90;
            
            label_140009a92:
            
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
                goto label_140009bb2;
            
            pmem_next = &pmem_next_1[rcx_3];
            label_140009bbc:
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
        label_140009bb2:
        pmem_next_1 = malloc(rcx_3 << 3);
        
        if (pmem_next_1)
            goto label_140009bbc;
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
            goto label_140009d45;
        
        struct __Bigint* result_1 = __Balloc_D2A(r12->k + 1);
        result = result_1;
        
        if (result_1)
        {
            memcpy(&result_1->sign, &r12->sign, (r12->wds << 2) + 8);
            struct __Bigint* v = r12;
            r12 = result;
            __Bfree_D2A(v);
            label_140009d45:
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
            label_140009e26:
            bool cond:1_1 = dtoa_CS_init != 2;
            pmem_next_1->k = 1;
            pmem_next_1->maxwds = 2;
            
            if (cond:1_1)
                goto label_140009dcd;
            
            goto label_140009e3f;
        }
        
        pmem_next_1 = malloc(0x28);
        
        if (pmem_next_1)
            goto label_140009e26;
    }
    else
    {
        bool cond:0_1 = dtoa_CS_init == 2;
        freelist[1] = pmem_next_1->next;
        
        if (!cond:0_1)
            goto label_140009dcd;
        
        label_140009e3f:
        LeaveCriticalSection(&dtoa_CritSec);
        label_140009dcd:
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
            goto label_14000a010;
        
        int64_t* a_1 = __mult_D2A(a, p5s_1);
        
        if (!a_1)
            return 0;
        
        if (!a)
        {
            a = a_1;
            label_14000a010:
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
                
                goto label_14000a010;
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
            label_14000a4b3:
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
                    goto label_14000a4a0;
                
                *(result + 0x14) = 1;
                return result;
            }
        }
        
        if (temp1_1 < r9_1)
            goto label_14000a4b3;
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
    
    label_14000a4a0:
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
                label_14000a6fe:
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
                goto label_14000a6fe;
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
        label_14000ab7f:
        
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
                goto label_14000ab7f;
            
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

int64_t main()
{
    __main();
    multiplication_table(0x11);
    decrypt_message();
    return 0;
}

int64_t register_frame_ctor()
{
    /* tailcall */
    return __gcc_register_frame();
}

