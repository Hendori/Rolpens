int64_t _all_badges()
{
    uint32_t rax_7 = data_1000020ac - data_1000020b0 + data_100002095 - data_100002099 + data_10000207e - data_100002082 + data_100002050 - data_100002054 + data_100002067 - data_10000206b;
    /* tailcall */
    return _printf("We can open every door with badg…", data_1000020c3 - data_1000020c7 + rax_7);
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
    /* tailcall */
    return _printf("P(%d) = %d\n", 0xa, 0x18b);
}

int64_t _red_herring()
{
    _puts("These are a few of my favorite n…");
    _printf(" *  %d\n", 0x10);
    _printf(" *  %d\n", 0x23);
    _printf(" *  %d\n", 0x30);
    _printf(" *  %d\n", 0x31);
    /* tailcall */
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

int64_t sub_100000ebc()
{
    int64_t var_8 = 0;
    void* var_10 = &__dyld_private;
    /* tailcall */
    return dyld_stub_binder();
}

