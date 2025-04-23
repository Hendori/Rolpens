
void _printf(int64_t rdi, ...);

int64_t _puts = 0x100000ec2;

void _count_sheep(int64_t rdi) {
    _printf("%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("(nice) ", "(nice) ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    _printf("%d ", "%d ");
    goto _puts;
}

int64_t _printf = 0x100000eb8;

void _printf(int64_t rdi, ...) {
    goto _printf;
}

void _short_multiplication_table(int32_t edi) {
    _printf(0x100000ee2);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ef4, 0x100000ef4);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ef4, 0x100000ef4);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ef4, 0x100000ef4);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ef4, 0x100000ef4);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ee2, 0x100000ee2);
    _printf(0x100000ee2, 0x100000ee2);
    goto _printf;
}

int64_t _main() {
    _short_multiplication_table(19);
    _count_sheep(19);
    return 0;
}

int64_t dyld_stub_binder = 0;

void fun_100000eb8() {
    goto dyld_stub_binder;
}

void fun_100000ec2() {
    goto 0x100000ea8;
}
