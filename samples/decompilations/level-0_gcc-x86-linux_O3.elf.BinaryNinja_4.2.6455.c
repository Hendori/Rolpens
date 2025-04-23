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
    int32_t* var_10 = &argc;
    it_crowd();
    printf("Some calculation returned %d.\n", 0x937c862f);
    return 0;
}

void __convention("regparm") _start(int32_t arg1, void (* arg2)()) __noreturn
{
    int32_t stack_end = arg1;
    __libc_start_main(main, __return_addr, &ubp_av, nullptr, nullptr, arg2, &stack_end);
    /* no return */
}

int32_t sub_10e8() __pure
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

int32_t it_crowd()
{
    puts("Are you feeling stressed, Jen?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Are you sure?\n");
    puts("Well, I guess you're not.\n");
    return puts("Well done, Jen.\n");
}

int32_t some_calculation(int32_t arg1) __pure
{
    int32_t eax_2 = arg1 * arg1 + (arg1 << 1);
    int32_t ecx_3 = eax_2 * eax_2 + arg1 + eax_2;
    int32_t eax_6 = ecx_3 * ecx_3 + arg1 + ecx_3;
    int32_t ecx_7 = eax_6 * eax_6 + arg1 + eax_6;
    int32_t eax_10 = ecx_7 * ecx_7 + arg1 + ecx_7;
    int32_t ecx_11 = eax_10 * eax_10 + arg1 + eax_10;
    return ecx_11 * ecx_11 + arg1 + ecx_11;
}

int32_t _fini()
{
    return;
}

