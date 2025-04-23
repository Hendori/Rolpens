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

int32_t all_badges()
{
    uint32_t r2_8 = data_21098 - data_2109c + data_21081 - data_21085 + data_2106a - data_2106e + data_2103c - data_21040 + data_21053 - data_21057;
    return printf("We can open every door with badg…", data_210af - data_210b3 + r2_8);
}

int32_t polynome_table()
{
    printf("P(%d) = %d\n", nullptr, 5);
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

int32_t main(int32_t argc, char** argv, char** envp)
{
    all_badges();
    polynome_table();
    red_herring();
    return 0;
}

int32_t _fini() __pure
{
    return;
}

