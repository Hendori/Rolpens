
int64_t __cxa_finalize = 0;

void fun_1050(int64_t rdi) {
    goto __cxa_finalize;
}

void fun_1030(int64_t rdi);

void it_crowd() {
    fun_1030("Are you feeling stressed, Jen?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Are you sure?\n");
    fun_1030("Well, I guess you're not.\n");
    fun_1030("Well done, Jen.\n");
    return;
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

int64_t puts = 0x1036;

void fun_1030(int64_t rdi) {
    goto puts;
}

int64_t printf = 0x1046;

void fun_1040(int64_t rdi, int64_t rsi) {
    goto printf;
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

int64_t __libc_start_main = 0;

int64_t main();

void _start() {
    __libc_start_main(main, __return_address(), reinterpret_cast<int64_t>(__zero_stack_offset()) + 8);
    __asm__("hlt ");
}

signed char __TMC_END__ = 0;

int64_t __dso_handle = 0x4018;

int64_t fun_1103() {
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

int64_t fun_1143() {
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

int64_t g3ff8 = 0;

void fun_1036() {
    goto g3ff8;
}

int64_t some_calculation(int64_t rdi) {
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

int64_t main() {
    it_crowd();
    fun_1040("Some calculation returned %d.\n", 0x937c862f);
    return 0;
}

void fun_1046() {
    goto 0x1020;
}
