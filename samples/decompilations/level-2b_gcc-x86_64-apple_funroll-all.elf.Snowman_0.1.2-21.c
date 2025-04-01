
void _printf(int64_t rdi, ...);

void _all_badges() {
    _printf("We can open every door with badge #%d\n");
    return;
}

int64_t _printf = 0x100000ebc;

void _printf(int64_t rdi, ...) {
    goto _printf;
}

void _polynome_table() {
    _printf("P(%d) = %d\n", "P(%d) = %d\n");
    _printf("P(%d) = %d\n", "P(%d) = %d\n");
    _printf("P(%d) = %d\n", "P(%d) = %d\n");
    _printf("P(%d) = %d\n", "P(%d) = %d\n");
    _printf("P(%d) = %d\n", "P(%d) = %d\n");
    _printf("P(%d) = %d\n", "P(%d) = %d\n");
    _printf("P(%d) = %d\n", "P(%d) = %d\n");
    _printf("P(%d) = %d\n", "P(%d) = %d\n");
    _printf("P(%d) = %d\n", "P(%d) = %d\n");
    _printf("P(%d) = %d\n", "P(%d) = %d\n");
    _printf("P(%d) = %d\n", "P(%d) = %d\n");
    return;
}

int64_t _puts = 0x100000ec6;

void _puts(int64_t rdi) {
    goto _puts;
}

void _red_herring() {
    _puts("These are a few of my favorite numbers:");
    _printf(" *  %d\n", " *  %d\n");
    _printf(" *  %d\n", " *  %d\n");
    _printf(" *  %d\n", " *  %d\n");
    _printf(" *  %d\n", " *  %d\n");
    _printf(" *  %d\n", " *  %d\n");
    return;
}

int64_t _main() {
    _all_badges();
    _polynome_table();
    _red_herring();
    return 0;
}

int64_t dyld_stub_binder = 0;

void fun_100000ebc() {
    goto dyld_stub_binder;
}

void fun_100000ec6() {
    goto 0x100000eac;
}
