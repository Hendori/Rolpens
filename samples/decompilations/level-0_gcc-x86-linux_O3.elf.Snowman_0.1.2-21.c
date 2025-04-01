
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_1050(int32_t a1);

void it_crowd() {
    int32_t ebx1;
    int32_t ebx2;
    int32_t esi3;

    __x86_get_pc_thunk_bx();
    ebx1 = ebx2 + 0x2dfd;
    esi3 = ebx1 - 0x1fad;
    fun_1050(ebx1 - 0x1fec);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(esi3);
    fun_1050(ebx1 - 0x1f9e);
    fun_1050(ebx1 - 0x1f83);
    return;
}

struct s0 {
    signed char[16] pad16;
    int32_t f10;
};

void fun_1040(int32_t a1, int32_t a2) {
    struct s0* ebx3;

    goto ebx3->f10;
}

void fun_1060(int32_t a1) {
    int32_t ebx2;

    goto *reinterpret_cast<int32_t*>(ebx2 - 16);
}

/* __x86.get_pc_thunk.dx */
void __x86_get_pc_thunk_dx() {
    return;
}

struct s1 {
    signed char[20] pad20;
    int32_t f14;
};

void fun_1050(int32_t a1) {
    struct s1* ebx2;

    goto ebx2->f14;
}

void fun_10e8(int32_t a1, void** a2, int32_t a3) {
    return;
}

struct s2 {
    signed char[12] pad12;
    int32_t fc;
};

void fun_1030(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    struct s2* ebx9;

    goto ebx9->fc;
}

void deregister_tm_clones(int32_t a1) {
    int32_t edx2;
    int32_t edx3;
    int32_t ecx4;
    int32_t eax5;

    __x86_get_pc_thunk_dx();
    edx2 = edx3 + 0x2eef;
    ecx4 = edx2 + 32;
    if (edx2 + 32 == ecx4 || (eax5 = *reinterpret_cast<int32_t*>(edx2 - 20), eax5 == 0)) {
        return;
    } else {
        eax5(ecx4);
        return;
    }
}

void _init() {
    int32_t eax1;
    int32_t ebx2;

    __x86_get_pc_thunk_bx();
    eax1 = *reinterpret_cast<int32_t*>(ebx2 + 0x2feb - 12);
    if (eax1) {
        eax1();
    }
    return;
}

int32_t main() {
    int32_t ebx1;

    __x86_get_pc_thunk_bx();
    it_crowd();
    fun_1040(ebx1 + 0x2f71 - 0x1fcc, 0x937c862f);
    return 0;
}

struct s3 {
    signed char[28] pad28;
    int32_t f1c;
    signed char f20;
};

void fun_1192() {
    uint48_t v1;
    int16_t ds2;
    struct s3* ebx3;
    void* ebx4;
    int32_t v5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    ebx3 = reinterpret_cast<struct s3*>(reinterpret_cast<int32_t>(ebx4) + 0x2e57);
    if (!ebx3->f20) {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx3) - 16)) {
            v5 = ebx3->f1c;
            fun_1060(v5);
        }
        deregister_tm_clones(0x119d);
        ebx3->f20 = 1;
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_11e2() {
    uint48_t v1;
    int16_t ds2;
    int32_t edx3;
    int32_t edx4;
    uint32_t ecx5;
    uint32_t eax6;
    int32_t eax7;
    int32_t edx8;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_dx();
    edx3 = edx4 + 0x2eaf;
    ecx5 = edx3 + 32;
    eax6 = edx3 + 32 - ecx5;
    eax7 = reinterpret_cast<int32_t>((eax6 >> 31) + (reinterpret_cast<int32_t>(eax6) >> 2)) >> 1;
    if (eax7 && (edx8 = *reinterpret_cast<int32_t*>(edx3 - 4), !!edx8)) {
        edx8(ecx5, eax7);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}

void _start() {
    void* esp1;
    void** v2;
    int32_t edx3;
    int32_t eax4;
    int32_t v5;
    int32_t ebx6;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    v2 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4);
    fun_10e8(edx3, v2, eax4);
    v5 = *reinterpret_cast<int32_t*>(ebx6 + 0x2f24 - 8);
    fun_1030(v5, __return_address(), esp1, 0, 0, edx3, v2, eax4);
    __asm__("hlt ");
}

void fun_1133() {
}

int32_t fun_130c(int32_t a1) {
    int32_t eax2;
    int32_t ecx3;
    int32_t eax4;
    int32_t ecx5;
    int32_t eax6;
    int32_t ecx7;

    eax2 = a1 * a1 + a1 * 2;
    ecx3 = eax2 * eax2 + a1 + eax2;
    eax4 = ecx3 * ecx3 + a1 + ecx3;
    ecx5 = eax4 * eax4 + a1 + eax4;
    eax6 = ecx5 * ecx5 + a1 + ecx5;
    ecx7 = eax6 * eax6 + a1 + eax6;
    return ecx7 * ecx7 + a1 + ecx7;
}

struct s4 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_1046() {
    struct s4* ebx1;

    goto ebx1->f8;
}

void fun_1139() {
}

void fun_1187() {
}

void fun_11db() {
}

void fun_102c() {
    signed char* eax1;
    signed char* eax2;
    signed char al3;
    signed char* eax4;
    signed char* eax5;
    signed char al6;

    *eax1 = reinterpret_cast<signed char>(*eax2 + al3);
    *eax4 = reinterpret_cast<signed char>(*eax5 + al6);
}

void fun_1056() {
    goto 0x1020;
}

void fun_1036() {
    goto 0x1020;
}
