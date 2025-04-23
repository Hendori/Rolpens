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
    if (__bss_start)
        return;
    
    if (__cxa_finalize)
        __cxa_finalize(__dso_handle);
    
    deregister_tm_clones();
    __bss_start = 1;
}

void frame_dummy()
{
    /* tailcall */
    return register_tm_clones();
}

int64_t all_badges()
{
    uint32_t r11_2 = data_40ac - data_40b0 + data_4095 - data_4099 + data_407e - data_4082 + data_4050 - data_4054 + data_4067 - data_406b;
    return printf("We can open every door with badg…", data_40c3 - data_40c7 + r11_2);
}

int64_t polynome_table()
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

int64_t red_herring()
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

int64_t _fini() __pure
{
    return;
}

