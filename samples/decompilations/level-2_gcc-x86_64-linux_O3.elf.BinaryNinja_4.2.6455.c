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

int32_t main(int32_t argc, char** argv, char** envp)
{
    short_multiplication_table(0x13);
    count_sheep();
    return 0;
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

int64_t count_sheep()
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
    /* tailcall */
    return puts("ZzZzZz...");
}

int64_t short_multiplication_table(int32_t arg1)
{
    uint64_t rbx = arg1;
    uint32_t r13 = rbx * 2;
    uint32_t r14 = rbx << 2;
    uint32_t r12 = rbx << 3;
    printf(&data_201a, 0, arg1, 0);
    printf(&data_201a, 1, rbx, rbx);
    int32_t r13_1 = r13 + rbx;
    printf(&data_201a, 2, rbx, r13);
    printf(&data_202c, 3, rbx, r13_1);
    int32_t r14_1 = r14 + rbx;
    printf(&data_201a, 4, rbx, r14);
    int32_t r14_2 = r14_1 * 2;
    printf(&data_201a, 5, rbx, r14_1);
    printf(&data_201a, 6, rbx, r13_1 * 2);
    printf(&data_202c, 7, rbx, r12 - rbx);
    int32_t r12_1 = r12 + rbx;
    printf(&data_201a, 8, rbx, r12);
    printf(&data_201a, 9, rbx, r12_1);
    printf(&data_201a, 0xa, rbx, r14_2);
    printf(&data_202c, 0xb, rbx, r14_2 + rbx);
    int32_t r13_2 = r13_1 << 2;
    int32_t r12_2 = r12_1 * 2;
    printf(&data_201a, 0xc, rbx, r13_2);
    printf(&data_201a, 0xd, rbx, r13_2 + rbx);
    int32_t r13_4 = rbx << 4;
    printf(&data_201a, 0xe, rbx, rbx * 0xe);
    printf(&data_202c, 0xf, rbx, r13_4 - rbx);
    printf(&data_201a, 0x10, rbx, r13_4);
    printf(&data_201a, 0x11, rbx, r13_4 + rbx);
    printf(&data_201a, 0x12, rbx, r12_2);
    /* tailcall */
    return printf(&data_202c, 0x13, rbx, r12_2 + rbx);
}

int64_t _fini() __pure
{
    return;
}

