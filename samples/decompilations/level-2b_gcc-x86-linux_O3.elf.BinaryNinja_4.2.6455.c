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
    all_badges();
    polynome_table();
    red_herring();
    return 0;
}

void __convention("regparm") _start(int32_t arg1, void (* arg2)()) __noreturn
{
    int32_t stack_end = arg1;
    __libc_start_main(main, __return_addr, &ubp_av, nullptr, nullptr, arg2, &stack_end);
    /* no return */
}

int32_t sub_10b8() __pure
{
    return;
}

int32_t __x86.get_pc_thunk.bx() __pure
{
    return;
}

void* const deregister_tm_clones()
{
    return &data_40cc;
}

int32_t register_tm_clones()
{
    return 0;
}

void __do_global_dtors_aux()
{
    if (!__bss_start)
    {
        if (__cxa_finalize)
            __cxa_finalize(__dso_handle);
        
        deregister_tm_clones();
        __bss_start = 1;
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

int32_t all_badges()
{
    uint32_t edx_8 = data_40ac - data_40b0 + data_4095 - data_4099 + data_407e - data_4082 + data_4050 - data_4054 + data_4067 - data_406b;
    return printf("We can open every door with badg…", data_40c3 - data_40c7 + edx_8);
}

int32_t polynome_table()
{
    printf("P(%d) = %d\n", 0, 5);
    printf("P(%d) = %d\n", 1, 0xffffffc9);
    printf("P(%d) = %d\n", 2, 0xffffffa3);
    printf("P(%d) = %d\n", 3, 0xffffff93);
    printf("P(%d) = %d\n", 4, 0xffffff99);
    printf("P(%d) = %d\n", 5, 0xffffffb5);
    printf("P(%d) = %d\n", 6, 0xffffffe7);
    printf("P(%d) = %d\n", 7, 0x2f);
    printf("P(%d) = %d\n", 8, 0x8d);
    printf("P(%d) = %d\n", 9, 0x101);
    return printf("P(%d) = %d\n", 0xa, 0x18b);
}

int32_t red_herring()
{
    puts("These are a few of my favorite n…");
    printf(" *  %d\n", 0x10);
    printf(" *  %d\n", 0x23);
    printf(" *  %d\n", 0x30);
    printf(" *  %d\n", 0x31);
    return printf(" *  %d\n", 0x20);
}

int32_t _fini()
{
    return;
}

