int64_t _all_badges()
{
    uint32_t x3_4 = data_100008084 - data_100008088 + data_10000806d - data_100008071 + data_100008056 - data_10000805a + data_100008028 - data_10000802c + data_10000803f - data_100008043;
    return _printf("We can open every door with badg…", data_10000809b - data_10000809f + x3_4);
}

int64_t _polynome_table()
{
    _printf("P(%d) = %d\n", 0, 5);
    _printf("P(%d) = %d\n", 1, 0xffffffc9);
    _printf("P(%d) = %d\n", 2, 0xffffffa3);
    _printf("P(%d) = %d\n", 3, 0xffffff93);
    _printf("P(%d) = %d\n", 4, 0xffffff99);
    _printf("P(%d) = %d\n", 5, 0xffffffb5);
    _printf("P(%d) = %d\n", 6, 0xffffffe7);
    _printf("P(%d) = %d\n", 7, 0x2f);
    _printf("P(%d) = %d\n", 8, 0x8d);
    _printf("P(%d) = %d\n", 9, 0x101);
    return _printf("P(%d) = %d\n", 0xa, 0x18b);
}

int64_t _red_herring()
{
    _puts("These are a few of my favorite n…");
    _printf(" *  %d\n", 0x10);
    _printf(" *  %d\n", 0x23);
    _printf(" *  %d\n", 0x30);
    _printf(" *  %d\n", 0x31);
    return _printf(" *  %d\n", 0x20);
}

int64_t _main()
{
    _all_badges();
    _polynome_table();
    _red_herring();
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

int64_t sub_100003e38()
{
    void* var_8 = &__dyld_private;
    /* tailcall */
    return dyld_stub_binder();
}

int64_t sub_100003e50()
{
    /* tailcall */
    return sub_100003e38();
}

int64_t sub_100003e5c()
{
    /* tailcall */
    return sub_100003e38();
}

