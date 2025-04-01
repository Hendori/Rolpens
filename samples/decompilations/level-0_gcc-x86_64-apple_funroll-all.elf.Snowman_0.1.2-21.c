
void _puts(int64_t rdi);

void _it_crowd() {
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
    _puts("Well done, Jen.\n");
    return;
}

int64_t _puts = 0x100000ee6;

void _puts(int64_t rdi) {
    goto _puts;
}

int64_t _printf = 0x100000edc;

void _printf(int64_t rdi, int64_t rsi) {
    goto _printf;
}

int64_t _some_calculation(int64_t rdi) {
    int64_t rax2;
    int32_t esi3;
    int32_t ecx4;
    int32_t edi5;
    int32_t r8d6;
    int32_t r9d7;
    int32_t r10d8;
    int64_t rax9;

    *reinterpret_cast<int32_t*>(&rax2) = *reinterpret_cast<int32_t*>(&rdi) * *reinterpret_cast<int32_t*>(&rdi);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    esi3 = static_cast<int32_t>(rax2 + rdi * 2);
    ecx4 = esi3 * esi3 + *reinterpret_cast<int32_t*>(&rdi) + esi3;
    edi5 = ecx4 * ecx4 + *reinterpret_cast<int32_t*>(&rdi) + ecx4;
    r8d6 = edi5 * edi5 + *reinterpret_cast<int32_t*>(&rdi) + edi5;
    r9d7 = r8d6 * r8d6 + *reinterpret_cast<int32_t*>(&rdi) + r8d6;
    r10d8 = r9d7 * r9d7 + *reinterpret_cast<int32_t*>(&rdi) + r9d7;
    *reinterpret_cast<int32_t*>(&rax9) = r10d8 * r10d8 + *reinterpret_cast<int32_t*>(&rdi) + r10d8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
    return rax9;
}

int64_t _main() {
    _it_crowd();
    _printf("Some calculation returned %d.\n", 0x937c862f);
    return 0;
}

int64_t dyld_stub_binder = 0;

void fun_100000edc() {
    goto dyld_stub_binder;
}

void fun_100000ee6() {
    goto 0x100000ecc;
}
