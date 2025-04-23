int32_t (* const)() _init()
{
    if (!__gmon_start__)
        return __gmon_start__;
    
    return __gmon_start__();
}

int32_t sub_1020()
{
    int32_t var_4 = data_3ff8;
    /* jump -> data_3ffc */
}

void __libc_start_main(int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc, char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(), void* stack_end) __noreturn
{
    /* tailcall */
    return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
}

int32_t sub_1036()
{
    /* tailcall */
    return sub_1020(0);
}

int32_t printf(char const* format, ...)
{
    /* tailcall */
    return printf();
}

int32_t sub_1046()
{
    /* tailcall */
    return sub_1020(8);
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

int32_t sub_1056()
{
    /* tailcall */
    return sub_1020(0x10);
}

void __cxa_finalize(void* d)
{
    /* tailcall */
    return __cxa_finalize(d);
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    void* const __return_addr_1 = __return_addr;
    int32_t* var_c = &argc;
    short_multiplication_table(0x13);
    count_sheep();
    return 0;
}

void __convention("regparm") _start(int32_t arg1, void (* arg2)()) __noreturn
{
    int32_t stack_end = arg1;
    __libc_start_main(main, __return_addr, &ubp_av, nullptr, nullptr, arg2, &stack_end);
    /* no return */
}

int32_t sub_10c8() __pure
{
    return;
}

int32_t __x86.get_pc_thunk.bx() __pure
{
    return;
}

void* deregister_tm_clones()
{
    return &__TMC_END__;
}

int32_t register_tm_clones()
{
    return 0;
}

void __do_global_dtors_aux()
{
    if (!__TMC_END__)
    {
        if (__cxa_finalize)
            __cxa_finalize(__dso_handle);
        
        deregister_tm_clones();
        __TMC_END__ = 1;
    }
}

int32_t frame_dummy()
{
    /* tailcall */
    return register_tm_clones();
}

int32_t __x86.get_pc_thunk.dx() __pure
{
    return;
}

int32_t count_sheep()
{
    printf("%d ", 0);
    printf("%d ", 1);
    printf("%d ", 2);
    printf("%d ", 3);
    printf("%d ", 4);
    printf("%d ", 5);
    printf("%d ", 6);
    printf("%d ", 7);
    printf("%d ", 8);
    printf("%d ", 9);
    printf("%d ", 0xa);
    printf("%d ", 0xb);
    printf("%d ", 0xc);
    printf("%d ", 0xd);
    printf("%d ", 0xe);
    printf("%d ", 0xf);
    printf("%d ", 0x10);
    printf("%d ", 0x11);
    printf("%d ", 0x12);
    printf("%d ", 0x13);
    printf("%d ", 0x14);
    printf("%d ", 0x15);
    printf("%d ", 0x16);
    printf("%d ", 0x17);
    printf("%d ", 0x18);
    printf("%d ", 0x19);
    printf("%d ", 0x1a);
    printf("%d ", 0x1b);
    printf("%d ", 0x1c);
    printf("%d ", 0x1d);
    printf("%d ", 0x1e);
    printf("%d ", 0x1f);
    printf("%d ", 0x20);
    printf("%d ", 0x21);
    printf("%d ", 0x22);
    printf("%d ", 0x23);
    printf("%d ", 0x24);
    printf("%d ", 0x25);
    printf("%d ", 0x26);
    printf("%d ", 0x27);
    printf("%d ", 0x28);
    printf("%d ", 0x29);
    printf("%d ", 0x2a);
    printf("%d ", 0x2b);
    printf("%d ", 0x2c);
    printf("%d ", 0x2d);
    printf("%d ", 0x2e);
    printf("%d ", 0x2f);
    printf("%d ", 0x30);
    printf("%d ", 0x31);
    printf("%d ", 0x32);
    printf("%d ", 0x33);
    printf("%d ", 0x34);
    printf("%d ", 0x35);
    printf("%d ", 0x36);
    printf("%d ", 0x37);
    printf("%d ", 0x38);
    printf("%d ", 0x39);
    printf("%d ", 0x3a);
    printf("%d ", 0x3b);
    printf("%d ", 0x3c);
    printf("%d ", 0x3d);
    printf("%d ", 0x3e);
    printf("%d ", 0x3f);
    printf("%d ", 0x40);
    printf("%d ", 0x41);
    printf("%d ", 0x42);
    printf("%d ", 0x43);
    printf("%d ", 0x44);
    printf("%d ", 0x45);
    printf("(nice) ");
    printf("%d ", 0x46);
    printf("%d ", 0x47);
    printf("%d ", 0x48);
    printf("%d ", 0x49);
    printf("%d ", 0x4a);
    printf("%d ", 0x4b);
    printf("%d ", 0x4c);
    printf("%d ", 0x4d);
    printf("%d ", 0x4e);
    printf("%d ", 0x4f);
    printf("%d ", 0x50);
    printf("%d ", 0x51);
    printf("%d ", 0x52);
    printf("%d ", 0x53);
    printf("%d ", 0x54);
    printf("%d ", 0x55);
    printf("%d ", 0x56);
    printf("%d ", 0x57);
    printf("%d ", 0x58);
    printf("%d ", 0x59);
    printf("%d ", 0x5a);
    printf("%d ", 0x5b);
    printf("%d ", 0x5c);
    printf("%d ", 0x5d);
    printf("%d ", 0x5e);
    printf("%d ", 0x5f);
    printf("%d ", 0x60);
    printf("%d ", 0x61);
    printf("%d ", 0x62);
    printf("%d ", 0x63);
    return puts("ZzZzZz...");
}

int32_t short_multiplication_table(int32_t arg1)
{
    int32_t ebp = arg1 * 2;
    printf(&data_201e, 0, arg1, 0);
    printf(&data_201e, 1, arg1, arg1);
    printf(&data_201e, 2, arg1, ebp);
    int32_t eax = ebp + arg1;
    int32_t ebp_1 = arg1 << 2;
    printf(&data_2030, 3, arg1, eax);
    printf(&data_201e, 4, arg1, ebp_1, &data_2030, eax);
    int32_t ecx = ebp_1 + arg1;
    int32_t ebp_2 = arg1 << 3;
    printf(&data_201e, 5, arg1, ecx);
    printf(&data_201e, 6, arg1, eax * 2);
    printf(&data_2030, 7, arg1, ebp_2 - arg1);
    printf(&data_201e, 8, arg1, ebp_2);
    int32_t edx_1 = ebp_2 + arg1;
    printf(&data_201e, 9, arg1, edx_1);
    int32_t ebp_3 = ecx * 2;
    printf(&data_201e, 0xa, arg1, ebp_3);
    printf(&data_2030, 0xb, arg1, ebp_3 + arg1);
    int32_t ebp_5 = eax << 2;
    printf(&data_201e, 0xc, arg1, ebp_5);
    int32_t ebp_8 = arg1 << 4;
    printf(&data_201e, 0xd, arg1, ebp_5 + arg1);
    printf(&data_201e, 0xe, arg1, arg1 * 0xe);
    printf(&data_2030, 0xf, arg1, ebp_8 - arg1);
    printf(&data_201e, 0x10, arg1, ebp_8);
    printf(&data_201e, 0x11, arg1, ebp_8 + arg1);
    int32_t ebp_10 = edx_1 * 2;
    printf(&data_201e, 0x12, arg1, ebp_10);
    return printf(&data_2030, 0x13, arg1, ebp_10 + arg1);
}

int32_t _fini()
{
    return;
}

