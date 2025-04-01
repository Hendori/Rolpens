int64_t _it_crowd()
{
    _puts("Are you feeling stressed, Jen?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Are you sure?\n");
    _puts("Well, I guess you're not.\n");
    return _puts("Well done, Jen.\n");
}

uint64_t _some_calculation(int32_t arg1) __pure
{
    int32_t x3 = arg1 * 2 + arg1 * arg1;
    int32_t x4 = arg1 + x3 * x3 + x3;
    int32_t x6 = arg1 + x4 * x4 + x4;
    int32_t x8 = arg1 + x6 * x6 + x6;
    int32_t x10 = arg1 + x8 * x8 + x8;
    int32_t x12 = arg1 + x10 * x10 + x10;
    return arg1 + x12 * x12 + x12;
}

int64_t _main()
{
    _it_crowd();
    _printf("Some calculation returned %d.\n", 0x937c862f);
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

