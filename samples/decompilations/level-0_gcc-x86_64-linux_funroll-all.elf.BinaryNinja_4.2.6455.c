void _init()
{
    if (__gmon_start__)
        __gmon_start__();
}

int64_t sub_1020()
{
    int64_t var_8 = data_3ff0;
    /* jump -> data_3ff8 */
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

int64_t sub_1036()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_1020();
}

int32_t printf(char const* format, ...)
{
    /* tailcall */
    return printf();
}

int64_t sub_1046()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_1020();
}

void __cxa_finalize(void* d)
{
    /* tailcall */
    return __cxa_finalize(d);
}

void _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t stack_end_1;
    int64_t stack_end = stack_end_1;
    __libc_start_main(main, __return_addr, &ubp_av, nullptr, nullptr, arg3, &stack_end);
    /* no return */
}

void deregister_tm_clones()
{
    return;
}

void register_tm_clones()
{
    return;
}

void __do_global_dtors_aux()
{
    if (__TMC_END__)
        return;
    
    if (__cxa_finalize)
        __cxa_finalize(__dso_handle);
    
    deregister_tm_clones();
    __TMC_END__ = 1;
}

void frame_dummy()
{
    /* tailcall */
    return register_tm_clones();
}

int64_t it_crowd()
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

uint64_t some_calculation(int64_t arg1) __pure
{
    int32_t rdx = arg1;
    int32_t rsi = arg1 * arg1 + (arg1 << 1);
    int32_t rcx_3 = rsi * rsi + arg1 + rsi;
    int32_t rdi_3 = rcx_3 * rcx_3 + rdx + rcx_3;
    int32_t r8_3 = rdi_3 * rdi_3 + rdx + rdi_3;
    int32_t r9_3 = r8_3 * r8_3 + rdx + r8_3;
    int32_t r10_3 = r9_3 * r9_3 + rdx + r9_3;
    return r10_3 * r10_3 + rdx + r10_3;
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    it_crowd();
    printf("Some calculation returned %d.\n", 0x937c862f);
    return 0;
}

int64_t _fini() __pure
{
    return;
}

