
void fun_1040(int64_t rdi, ...);

int64_t printf = 0x1046;

void short_multiplication_table(int32_t edi) {
    fun_1040(0x201a);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x202c, 0x202c);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x202c, 0x202c);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x202c, 0x202c);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x202c, 0x202c);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x201a, 0x201a);
    fun_1040(0x201a, 0x201a);
    goto printf;
}

int64_t puts = 0x1036;

void count_sheep(int64_t rdi) {
    fun_1040("%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("(nice) ", "(nice) ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    fun_1040("%d ", "%d ");
    goto puts;
}

int64_t __cxa_finalize = 0;

void fun_1050(int64_t rdi) {
    goto __cxa_finalize;
}

void fun_1040(int64_t rdi, ...) {
    goto printf;
}

int64_t _ITM_deregisterTMCloneTable = 0;

int64_t deregister_tm_clones(int64_t rdi) {
    int64_t rax2;

    rax2 = 0x4020;
    if (1 || (rax2 = _ITM_deregisterTMCloneTable, rax2 == 0)) {
        return rax2;
    } else {
        goto rax2;
    }
}

int64_t __gmon_start__ = 0;

void _init() {
    int64_t rax1;

    rax1 = __gmon_start__;
    if (rax1) {
        rax1();
    }
    return;
}

int64_t main() {
    short_multiplication_table(19);
    count_sheep(19);
    return 0;
}

signed char __TMC_END__ = 0;

int64_t __dso_handle = 0x4018;

int64_t fun_1123() {
    int1_t zf1;
    int64_t rax2;
    int1_t zf3;
    int64_t rdi4;
    int64_t rax5;

    __asm__("cli ");
    zf1 = __TMC_END__ == 0;
    if (!zf1) {
        return rax2;
    } else {
        zf3 = __cxa_finalize == 0;
        if (!zf3) {
            rdi4 = __dso_handle;
            fun_1050(rdi4);
        }
        rax5 = deregister_tm_clones(rdi4);
        __TMC_END__ = 1;
        return rax5;
    }
}

int64_t _ITM_registerTMCloneTable = 0;

int64_t fun_1163() {
    int64_t rax1;

    __asm__("cli ");
    rax1 = 0;
    if (1 || (rax1 = _ITM_registerTMCloneTable, rax1 == 0)) {
        return rax1;
    } else {
        goto rax1;
    }
}

void _fini() {
    return;
}

int64_t __libc_start_main = 0;

void _start() {
    __libc_start_main(main, __return_address(), reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __asm__("hlt ");
}

int64_t g3ff8 = 0;

void fun_1036() {
    goto g3ff8;
}

void fun_1046() {
    goto 0x1020;
}
