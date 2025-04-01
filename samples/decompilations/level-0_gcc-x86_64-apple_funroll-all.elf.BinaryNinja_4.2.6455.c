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

uint64_t _some_calculation(int64_t arg1) __pure
{
    int32_t rdx = arg1;
    int32_t rsi = arg1 * arg1 + (arg1 << 1);
    int32_t rcx_3 = rsi * rsi + arg1 + rsi;
    int32_t rdi_3 = rcx_3 * rcx_3 + rdx + rcx_3;
    int32_t r8_3 = rdi_3 * rdi_3 + rdx + rdi_3;
    int32_t r9_3 = r8_3 * r8_3 + rdx + r8_3;
    int32_t r10_3 = r9_3 * r9_3 + rdx + r9_3;
    return r10_3 * r10_3 + rdx + r10_3;
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

int64_t sub_100000edc()
{
    int64_t var_8 = 0;
    void* var_10 = &__dyld_private;
    /* tailcall */
    return dyld_stub_binder();
}

