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
    return _puts("ZzZzZz...");
}

int64_t _short_multiplication_table(int32_t arg1)
{
    _printf(&data_100003ee0, 0, arg1, 0);
    _printf(&data_100003ee0, 1, arg1, arg1);
    int32_t x21 = arg1 << 1;
    _printf(&data_100003ee0, 2, arg1, x21);
    int32_t x21_1 = x21 + arg1;
    _printf(&data_100003ef8, 3, arg1, x21_1);
    int32_t x23 = arg1 << 2;
    _printf(&data_100003ee0, 4, arg1, x23);
    int32_t x23_1 = x23 + arg1;
    _printf(&data_100003ee0, 5, arg1, x23_1);
    _printf(&data_100003ee0, 6, arg1, x21_1 << 1);
    int32_t x22 = arg1 << 3;
    _printf(&data_100003ef8, 7, arg1, x22 - arg1);
    _printf(&data_100003ee0, 8, arg1, x22);
    int32_t x22_1 = x22 + arg1;
    _printf(&data_100003ee0, 9, arg1, x22_1);
    int32_t x23_2 = x23_1 << 1;
    _printf(&data_100003ee0, 0xa, arg1, x23_2);
    _printf(&data_100003ef8, 0xb, arg1, x23_2 + arg1);
    int32_t x21_2 = x21_1 << 2;
    _printf(&data_100003ee0, 0xc, arg1, x21_2);
    _printf(&data_100003ee0, 0xd, arg1, x21_2 + arg1);
    _printf(&data_100003ee0, 0xe, arg1, arg1 * 0xe);
    int32_t x23_3 = arg1 << 4;
    _printf(&data_100003ef8, 0xf, arg1, x23_3 - arg1);
    _printf(&data_100003ee0, 0x10, arg1, x23_3);
    _printf(&data_100003ee0, 0x11, arg1, x23_3 + arg1);
    int32_t x22_2 = x22_1 << 1;
    _printf(&data_100003ee0, 0x12, arg1, x22_2);
    return _printf(&data_100003ef8, 0x13, arg1, x22_2 + arg1);
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

int64_t sub_100003e90()
{
    void* var_8 = &__dyld_private;
    /* tailcall */
    return dyld_stub_binder();
}

int64_t sub_100003ea8()
{
    /* tailcall */
    return sub_100003e90();
}

int64_t sub_100003eb4()
{
    /* tailcall */
    return sub_100003e90();
}

