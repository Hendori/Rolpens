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
    int32_t x2 = arg1 * 2 + arg1 * arg1;
    int32_t x1_1 = arg1 + x2 * x2 + x2;
    int32_t x2_2 = arg1 + x1_1 * x1_1 + x1_1;
    int32_t x1_3 = arg1 + x2_2 * x2_2 + x2_2;
    int32_t x2_4 = arg1 + x1_3 * x1_3 + x1_3;
    int32_t x1_5 = arg1 + x2_4 * x2_4 + x2_4;
    return arg1 + x1_5 * x1_5 + x1_5;
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

