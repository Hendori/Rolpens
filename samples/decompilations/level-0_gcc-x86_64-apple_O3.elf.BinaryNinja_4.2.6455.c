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
    /* tailcall */
    return _puts("Well done, Jen.\n");
}

uint64_t _some_calculation(int64_t arg1) __pure
{
    int32_t rax_1 = arg1 * arg1 + (arg1 << 1);
    int32_t rcx_3 = rax_1 * rax_1 + arg1 + rax_1;
    int32_t rax_5 = rcx_3 * rcx_3 + arg1 + rcx_3;
    int32_t rcx_7 = rax_5 * rax_5 + arg1 + rax_5;
    int32_t rax_9 = rcx_7 * rcx_7 + arg1 + rcx_7;
    int32_t rcx_11 = rax_9 * rax_9 + arg1 + rax_9;
    return rcx_11 * rcx_11 + arg1 + rcx_11;
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

int64_t sub_100000ed4()
{
    int64_t var_8 = 0;
    void* var_10 = &__dyld_private;
    /* tailcall */
    return dyld_stub_binder();
}

