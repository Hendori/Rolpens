
/* __x86.get_pc_thunk.bx */
void __x86_get_pc_thunk_bx() {
    return;
}

void fun_1098(int32_t a1, void** a2, int32_t a3) {
    return;
}

struct s0 {
    signed char[12] pad12;
    int32_t fc;
};

void fun_1030(int32_t a1, int32_t a2, void* a3, int32_t a4, int32_t a5, int32_t a6, void** a7, int32_t a8) {
    struct s0* ebx9;

    goto ebx9->fc;
}

void fun_1060(int32_t a1) {
    int32_t ebx2;

    goto *reinterpret_cast<int32_t*>(ebx2 - 16);
}

/* __x86.get_pc_thunk.dx */
void __x86_get_pc_thunk_dx() {
    return;
}

void deregister_tm_clones(int32_t a1) {
    int32_t edx2;
    int32_t edx3;
    int32_t ecx4;
    int32_t eax5;

    __x86_get_pc_thunk_dx();
    edx2 = edx3 + 0x2f3f;
    ecx4 = edx2 + 0xd8;
    if (edx2 + 0xd8 == ecx4 || (eax5 = *reinterpret_cast<int32_t*>(edx2 - 20), eax5 == 0)) {
        return;
    } else {
        eax5(ecx4);
        return;
    }
}

struct s1 {
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

void fun_1040(int32_t a1, uint32_t a2, int32_t a3);

void all_badges() {
    struct s1* ebx1;
    int32_t ebx2;
    uint32_t v3;
    int32_t v4;

    __x86_get_pc_thunk_bx();
    ebx1 = reinterpret_cast<struct s1*>(ebx2 + 0x2e4e);
    v3 = ebx1->fcf - ebx1->fd3 + (ebx1->fb8 - ebx1->fbc + (ebx1->fa1 - ebx1->fa5 + (ebx1->f8a - ebx1->f8e + (ebx1->f5c - ebx1->f60 + (ebx1->f73 - ebx1->f77)))));
    fun_1040(reinterpret_cast<int32_t>(ebx1) - 0x1fec, v3, v4);
    return;
}

struct s2 {
    signed char[16] pad16;
    int32_t f10;
};

void fun_1040(int32_t a1, uint32_t a2, int32_t a3) {
    struct s2* ebx4;

    goto ebx4->f10;
}

void polynome_table() {
    int32_t esi1;
    int32_t ebx2;

    __x86_get_pc_thunk_bx();
    esi1 = ebx2 + 0x2dc2 - 0x1f9c;
    fun_1040(esi1, 0, 5);
    fun_1040(esi1, 1, 0xc9);
    fun_1040(esi1, 2, 0xa3);
    fun_1040(esi1, 3, 0x93);
    fun_1040(esi1, 4, 0x99);
    fun_1040(esi1, 5, 0xb5);
    fun_1040(esi1, 6, 0xe7);
    fun_1040(esi1, 7, 47);
    fun_1040(esi1, 8, 0x8d);
    fun_1040(esi1, 9, 0x101);
    fun_1040(esi1, 10, 0x18b);
    return;
}

void fun_1050(int32_t a1);

void red_herring() {
    int32_t ebx1;
    int32_t ebx2;
    int32_t esi3;
    int32_t v4;
    int32_t v5;
    int32_t v6;
    int32_t v7;
    int32_t v8;

    __x86_get_pc_thunk_bx();
    ebx1 = ebx2 + 0x2d11;
    fun_1050(ebx1 - 0x1fc4);
    esi3 = ebx1 - 0x1f90;
    fun_1040(esi3, 16, v4);
    fun_1040(esi3, 35, v5);
    fun_1040(esi3, 48, v6);
    fun_1040(esi3, 49, v7);
    fun_1040(esi3, 32, v8);
    return;
}

struct s3 {
    signed char[20] pad20;
    int32_t f14;
};

void fun_1050(int32_t a1) {
    struct s3* ebx2;

    goto ebx2->f14;
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

void _start() {
    void* esp1;
    void** v2;
    int32_t edx3;
    int32_t eax4;
    int32_t v5;
    int32_t ebx6;

    esp1 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(__zero_stack_offset()) + 4);
    v2 = reinterpret_cast<void**>((reinterpret_cast<uint32_t>(esp1) & 0xfffffff0) - 4 - 4);
    fun_1098(edx3, v2, eax4);
    v5 = *reinterpret_cast<int32_t*>(ebx6 + 0x2f74 - 8);
    fun_1030(v5, __return_address(), esp1, 0, 0, edx3, v2, eax4);
    __asm__("hlt ");
}

struct s4 {
    signed char[48] pad48;
    int32_t f30;
    signed char[162] pad214;
    signed char fd6;
};

void fun_1142() {
    uint48_t v1;
    int16_t ds2;
    struct s4* ebx3;
    void* ebx4;
    int32_t v5;

    *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(&v1) + 2) = reinterpret_cast<int32_t>(__return_address());
    *reinterpret_cast<int16_t*>(&v1) = ds2;
    __asm__("sti ");
    __x86_get_pc_thunk_bx();
    ebx3 = reinterpret_cast<struct s4*>(reinterpret_cast<int32_t>(ebx4) + 0x2ea7);
    if (!ebx3->fd6) {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(ebx3) - 16)) {
            v5 = ebx3->f30;
            fun_1060(v5);
        }
        deregister_tm_clones(0x114d);
        ebx3->fd6 = 1;
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_1192() {
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
    edx3 = edx4 + 0x2eff;
    ecx5 = edx3 + 0xd8;
    eax6 = edx3 + 0xd8 - ecx5;
    eax7 = reinterpret_cast<int32_t>((eax6 >> 31) + (reinterpret_cast<int32_t>(eax6) >> 2)) >> 1;
    if (eax7 && (edx8 = *reinterpret_cast<int32_t*>(edx3 - 4), !!edx8)) {
        edx8(ecx5, eax7);
    }
    goto *reinterpret_cast<int32_t*>(&v1);
}

void fun_10e3() {
}

struct s5 {
    signed char[8] pad8;
    int32_t f8;
};

void fun_1036() {
    struct s5* ebx1;

    goto ebx1->f8;
}

void fun_10e9() {
}

void fun_1137() {
}

void fun_118b() {
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

void fun_1046() {
    goto 0x1020;
}

int32_t main() {
    all_badges();
    polynome_table();
    red_herring();
    return 0;
}

void fun_1056() {
    goto 0x1020;
}

void _fini() {
    __x86_get_pc_thunk_bx();
    return;
}
