
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

struct s0 {
    signed char[92] pad92;
    uint16_t f5c;
    signed char[2] pad96;
    unsigned char f60;
    signed char[18] pad115;
    uint16_t f73;
    signed char[2] pad119;
    unsigned char f77;
    signed char[18] pad138;
    uint16_t f8a;
    signed char[2] pad142;
    unsigned char f8e;
    signed char[18] pad161;
    uint16_t fa1;
    signed char[2] pad165;
    unsigned char fa5;
    signed char[18] pad184;
    uint16_t fb8;
    signed char[2] pad188;
    unsigned char fbc;
    signed char[18] pad207;
    uint16_t fcf;
    signed char[2] pad211;
    unsigned char fd3;
};

void fun_1040(uint32_t ecx, uint32_t a2, uint32_t a3, int32_t a4);

void all_badges() {
    struct s0* ebx1;
    int32_t ebx2;
    uint32_t ecx3;
    uint32_t v4;
    int32_t v5;

    __x86_get_pc_thunk_bx();
    ebx1 = reinterpret_cast<struct s0*>(ebx2 + 0x2e2e);
    ecx3 = ebx1->fd3;
    v4 = ebx1->fcf - ecx3 + (ebx1->fb8 - ebx1->fbc + (ebx1->fa1 - ebx1->fa5 + (ebx1->f8a - ebx1->f8e + (ebx1->f5c - ebx1->f60 + (ebx1->f73 - ebx1->f77)))));
    fun_1040(ecx3, reinterpret_cast<int32_t>(ebx1) - 0x1fec, v4, v5);
    return;
}

void polynome_table(uint32_t ecx) {
    uint32_t esi2;
    int32_t ebx3;

    __x86_get_pc_thunk_bx();
    esi2 = reinterpret_cast<uint32_t>(ebx3 + 0x2d9d - 0x1f9c);
    fun_1040(ecx, esi2, 0, 5);
    fun_1040(ecx, esi2, 1, 0xc9);
    fun_1040(ecx, esi2, 2, 0xa3);
    fun_1040(ecx, esi2, 3, 0x93);
    fun_1040(ecx, esi2, 4, 0x99);
    fun_1040(ecx, esi2, 5, 0xb5);
    fun_1040(ecx, esi2, 6, 0xe7);
    fun_1040(ecx, esi2, 7, 47);
    fun_1040(ecx, esi2, 8, 0x8d);
    fun_1040(ecx, esi2, 9, 0x101);
    fun_1040(ecx, esi2, 10, 0x18b);
    return;
}

void fun_1050();

void red_herring(uint32_t ecx) {
    uint32_t esi2;
    int32_t ebx3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;

    __x86_get_pc_thunk_bx();
    esi2 = reinterpret_cast<uint32_t>(ebx3 + 0x2cdd - 0x1f90);
    fun_1050();
    fun_1040(ecx, esi2, 16, v4);
    fun_1040(esi2, esi2, 35, v5);
    fun_1040(esi2, esi2, 48, v6);
    fun_1040(esi2, esi2, 49, v7);
    fun_1040(esi2, esi2, 32, v8);
    return;
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
    signed char[16] pad16;
    int32_t f10;
};

void fun_1040(uint32_t ecx, uint32_t a2, uint32_t a3, int32_t a4) {
    struct s1* ebx5;

    goto ebx5->f10;
}

struct s2 {
    signed char[20] pad20;
    int32_t f14;
};

void fun_1050() {
    struct s2* ebx1;

    goto ebx1->f14;
}

void fun_10b8(int32_t a1, void** a2, int32_t a3) {
    return;
}

struct s3 {
    signed char[12] pad12;
    int32_t fc;
};

void fun_1030(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    struct s3* ebx9;

    goto ebx9->fc;
}

void deregister_tm_clones(int32_t a1) {
    int32_t edx2;
    int32_t edx3;
    int32_t ecx4;
    int32_t eax5;

    __x86_get_pc_thunk_dx();
    edx2 = edx3 + 0x2f1f;
    ecx4 = edx2 + 0xd8;
    if (edx2 + 0xd8 == ecx4 || (eax5 = *reinterpret_cast<int32_t*>(edx2 - 20), eax5 == 0)) {
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

int32_t main(uint32_t ecx) {
    all_badges();
    polynome_table(ecx);
    red_herring(ecx);
    return 0;
}

struct s4 {
    signed char[48] pad48;
    int32_t f30;
    signed char[162] pad214;
    signed char fd6;
};

void fun_1162() {
    uint48_t v1;
    int16_t ds2;
    struct s4* ebx3;
    void* ebx4;
    int32_t v5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    ebx3 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(ebx4) + 0x2e87);
    if (!ebx3->fd6) {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx3) - 16)) {
            v5 = ebx3->f30;
            fun_1060(v5);
        }
        deregister_tm_clones(0x116d);
        ebx3->fd6 = 1;
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_11b2() {
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
    edx3 = edx4 + 0x2edf;
    ecx5 = edx3 + 0xd8;
    eax6 = edx3 + 0xd8 - ecx5;
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
    fun_10b8(edx3, v2, eax4);
    v5 = *reinterpret_cast<int32_t*>(ebx6 + 0x2f54 - 8);
    fun_1030(v5, __return_address(), esp1, 0, 0, edx3, v2, eax4);
    __asm__("hlt ");
}

void fun_1103() {
}

void fun_124b() {
}

void fun_1301() {
}

void fun_1109() {
}

void fun_1157() {
}

void fun_11ab() {
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

struct s5 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_1046() {
    struct s5* ebx1;

    goto ebx1->f8;
}

void fun_1056() {
    goto 0x1020;
}

void fun_1036() {
    goto 0x1020;
}
