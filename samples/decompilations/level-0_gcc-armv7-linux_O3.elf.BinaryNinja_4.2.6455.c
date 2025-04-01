int32_t _init(int32_t arg1, int32_t arg2)
{
    return call_weak_fn(arg1, arg2);
}

int32_t sub_1033c()
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

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
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

int32_t main(int32_t argc, char** argv, char** envp)
{
    it_crowd();
    printf("Some calculation returned %d.\n", 0x937c862f);
    return 0;
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
    uint32_t __TMC_END___1 = __TMC_END__;
    
    if (__TMC_END___1)
        return;
    
    deregister_tm_clones(arg1, arg2, arg3, __TMC_END___1);
    __TMC_END__ = 1;
}

void frame_dummy()
{
    /* tailcall */
    return register_tm_clones();
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
    /* tailcall */
    return puts("Well done, Jen.\n");
}

int32_t some_calculation(int32_t arg1) __pure
{
    int32_t r2 = arg1 * 2 + arg1 * arg1;
    int32_t r3_1 = arg1 + r2 * r2 + r2;
    int32_t r2_2 = arg1 + r3_1 * r3_1 + r3_1;
    int32_t r3_3 = arg1 + r2_2 * r2_2 + r2_2;
    int32_t r2_4 = arg1 + r3_3 * r3_3 + r3_3;
    int32_t r3_5 = arg1 + r2_4 * r2_4 + r2_4;
    return arg1 + r3_5 * r3_5 + r3_5;
}

int32_t _fini() __pure
{
    return;
}

