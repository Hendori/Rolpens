int64_t _count_sheep()
{
    _printf("%d ", 0);
    _printf("%d ", 1);
    _printf("%d ", 2);
    _printf("%d ", 3);
    _printf("%d ", 4);
    _printf("%d ", 5);
    _printf("%d ", 6);
    _printf("%d ", 7);
    _printf("%d ", 8);
    _printf("%d ", 9);
    _printf("%d ", 0xa);
    _printf("%d ", 0xb);
    _printf("%d ", 0xc);
    _printf("%d ", 0xd);
    _printf("%d ", 0xe);
    _printf("%d ", 0xf);
    _printf("%d ", 0x10);
    _printf("%d ", 0x11);
    _printf("%d ", 0x12);
    _printf("%d ", 0x13);
    _printf("%d ", 0x14);
    _printf("%d ", 0x15);
    _printf("%d ", 0x16);
    _printf("%d ", 0x17);
    _printf("%d ", 0x18);
    _printf("%d ", 0x19);
    _printf("%d ", 0x1a);
    _printf("%d ", 0x1b);
    _printf("%d ", 0x1c);
    _printf("%d ", 0x1d);
    _printf("%d ", 0x1e);
    _printf("%d ", 0x1f);
    _printf("%d ", 0x20);
    _printf("%d ", 0x21);
    _printf("%d ", 0x22);
    _printf("%d ", 0x23);
    _printf("%d ", 0x24);
    _printf("%d ", 0x25);
    _printf("%d ", 0x26);
    _printf("%d ", 0x27);
    _printf("%d ", 0x28);
    _printf("%d ", 0x29);
    _printf("%d ", 0x2a);
    _printf("%d ", 0x2b);
    _printf("%d ", 0x2c);
    _printf("%d ", 0x2d);
    _printf("%d ", 0x2e);
    _printf("%d ", 0x2f);
    _printf("%d ", 0x30);
    _printf("%d ", 0x31);
    _printf("%d ", 0x32);
    _printf("%d ", 0x33);
    _printf("%d ", 0x34);
    _printf("%d ", 0x35);
    _printf("%d ", 0x36);
    _printf("%d ", 0x37);
    _printf("%d ", 0x38);
    _printf("%d ", 0x39);
    _printf("%d ", 0x3a);
    _printf("%d ", 0x3b);
    _printf("%d ", 0x3c);
    _printf("%d ", 0x3d);
    _printf("%d ", 0x3e);
    _printf("%d ", 0x3f);
    _printf("%d ", 0x40);
    _printf("%d ", 0x41);
    _printf("%d ", 0x42);
    _printf("%d ", 0x43);
    _printf("%d ", 0x44);
    _printf("%d ", 0x45);
    _printf("(nice) ");
    _printf("%d ", 0x46);
    _printf("%d ", 0x47);
    _printf("%d ", 0x48);
    _printf("%d ", 0x49);
    _printf("%d ", 0x4a);
    _printf("%d ", 0x4b);
    _printf("%d ", 0x4c);
    _printf("%d ", 0x4d);
    _printf("%d ", 0x4e);
    _printf("%d ", 0x4f);
    _printf("%d ", 0x50);
    _printf("%d ", 0x51);
    _printf("%d ", 0x52);
    _printf("%d ", 0x53);
    _printf("%d ", 0x54);
    _printf("%d ", 0x55);
    _printf("%d ", 0x56);
    _printf("%d ", 0x57);
    _printf("%d ", 0x58);
    _printf("%d ", 0x59);
    _printf("%d ", 0x5a);
    _printf("%d ", 0x5b);
    _printf("%d ", 0x5c);
    _printf("%d ", 0x5d);
    _printf("%d ", 0x5e);
    _printf("%d ", 0x5f);
    _printf("%d ", 0x60);
    _printf("%d ", 0x61);
    _printf("%d ", 0x62);
    _printf("%d ", 0x63);
    /* tailcall */
    return _puts("ZzZzZz...");
}

int64_t _short_multiplication_table(int32_t arg1)
{
    uint64_t rbx = arg1;
    uint32_t r15 = rbx * 2;
    _printf(&data_100000ee2, 0, arg1, 0);
    uint32_t r13 = rbx << 2;
    _printf(&data_100000ee2, 1, rbx, rbx);
    int32_t r15_1 = r15 + rbx;
    _printf(&data_100000ee2, 2, rbx, r15);
    uint32_t r12 = rbx << 3;
    _printf(&data_100000ef4, 3, rbx, r15_1);
    int32_t r13_1 = r13 + rbx;
    _printf(&data_100000ee2, 4, rbx, r13);
    int32_t r13_2 = r13_1 * 2;
    _printf(&data_100000ee2, 5, rbx, r13_1);
    _printf(&data_100000ee2, 6, rbx, r15_1 * 2);
    _printf(&data_100000ef4, 7, rbx, r12 - rbx);
    int32_t r12_1 = r12 + rbx;
    _printf(&data_100000ee2, 8, rbx, r12);
    _printf(&data_100000ee2, 9, rbx, r12_1);
    _printf(&data_100000ee2, 0xa, rbx, r13_2);
    _printf(&data_100000ef4, 0xb, rbx, r13_2 + rbx);
    int32_t r15_2 = r15_1 << 2;
    _printf(&data_100000ee2, 0xc, rbx, r15_2);
    int32_t r13_4 = rbx << 4;
    _printf(&data_100000ee2, 0xd, rbx, r15_2 + rbx);
    int32_t r12_2 = r12_1 * 2;
    _printf(&data_100000ee2, 0xe, rbx, rbx * 0xe);
    _printf(&data_100000ef4, 0xf, rbx, r13_4 - rbx);
    _printf(&data_100000ee2, 0x10, rbx, r13_4);
    _printf(&data_100000ee2, 0x11, rbx, r13_4 + rbx);
    _printf(&data_100000ee2, 0x12, rbx, r12_2);
    /* tailcall */
    return _printf(&data_100000ef4, 0x13, rbx, r12_2 + rbx);
}

int64_t _main()
{
    _short_multiplication_table(0x13);
    _count_sheep();
    return 0;
}

int32_t _printf(char const* arg1, ...)
{
    /* tailcall */
    return _printf();
}

int32_t _puts(char const* arg1)
{
    /* tailcall */
    return _puts(arg1);
}

int64_t sub_100000eb8()
{
    int64_t var_8 = 0;
    void* var_10 = &__dyld_private;
    /* tailcall */
    return dyld_stub_binder();
}

