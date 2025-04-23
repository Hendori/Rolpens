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
    short_multiplication_table(0x13);
    count_sheep();
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

int32_t count_sheep()
{
    printf("%d ", nullptr);
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

int32_t short_multiplication_table(int32_t arg1)
{
    printf(&data_10bc0, nullptr, arg1, 0);
    printf(&data_10bc0, 1, arg1, arg1);
    printf(&data_10bc0, 2, arg1, arg1 << 1);
    printf(&data_10bd4, 3, arg1, 3 * arg1);
    printf(&data_10bc0, 4, arg1, arg1 << 2);
    printf(&data_10bc0, 5, arg1, 5 * arg1);
    printf(&data_10bc0, 6, arg1, 6 * arg1);
    printf(&data_10bd4, 7, arg1, 7 * arg1);
    printf(&data_10bc0, 8, arg1, arg1 << 3);
    printf(&data_10bc0, 9, arg1, 9 * arg1);
    printf(&data_10bc0, 0xa, arg1, 0xa * arg1);
    printf(&data_10bd4, 0xb, arg1, 0xb * arg1);
    printf(&data_10bc0, 0xc, arg1, 0xc * arg1);
    printf(&data_10bc0, 0xd, arg1, 0xd * arg1);
    printf(&data_10bc0, 0xe, arg1, 0xe * arg1);
    printf(&data_10bd4, 0xf, arg1, 0xf * arg1);
    printf(&data_10bc0, 0x10, arg1, arg1 << 4);
    printf(&data_10bc0, 0x11, arg1, 0x11 * arg1);
    printf(&data_10bc0, 0x12, arg1, 0x12 * arg1);
    /* tailcall */
    return printf(&data_10bd4, 0x13, arg1, 0x13 * arg1);
}

int32_t _fini() __pure
{
    return;
}

