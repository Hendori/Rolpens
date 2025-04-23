
int64_t __set_app_type = 0x114c4;

void fun_14000b4a8(int64_t rcx) {
    goto __set_app_type;
}

int32_t** g14000d790 = reinterpret_cast<int32_t**>(0x140011294);

int32_t* fun_14000ae10(int64_t rcx) {
    int32_t** rax2;

    rax2 = g14000d790;
    return *rax2;
}

int32_t** g14000d780 = reinterpret_cast<int32_t**>(0x140011284);

int32_t* fun_14000ae20(int64_t rcx) {
    int32_t** rax2;

    rax2 = g14000d780;
    return *rax2;
}

int64_t fun_140004fd0(int64_t rcx) {
    return 0;
}

struct s0 {
    signed char[1] pad1;
    void** f1;
};

int64_t strlen = 0x115ca;

struct s0* fun_14000b558(void** rcx, ...) {
    goto strlen;
}

int64_t malloc = 0x11596;

void** fun_14000b530(void** rcx, void** rdx, ...) {
    goto malloc;
}

int64_t memcpy = 0x115a0;

void fun_14000b538(void** rcx, void** rdx, void** r8) {
    goto memcpy;
}

int32_t g140010030;

int64_t* g14000d720 = reinterpret_cast<int64_t*>(0x14000b600);

uint64_t fun_14000b4e0(int64_t rcx);

void fun_140004f00();

int64_t fun_140004fb0(void** rcx, void** rdx, void** r8) {
    int64_t rax4;
    int64_t* rdx5;
    int64_t rax6;
    int32_t ecx7;
    int64_t rax8;
    int64_t r8_9;
    int64_t rax10;
    int64_t rcx11;
    int64_t* rbx12;
    int64_t* rsi13;
    uint64_t rax14;
    int64_t rax15;

    *reinterpret_cast<int32_t*>(&rax4) = g140010030;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax4)) {
        return rax4;
    }
    g140010030 = 1;
    rdx5 = g14000d720;
    rax6 = *rdx5;
    ecx7 = *reinterpret_cast<int32_t*>(&rax6);
    if (*reinterpret_cast<int32_t*>(&rax6) != -1) 
        goto addr_140004f57_5;
    *reinterpret_cast<int32_t*>(&rax8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    do {
        *reinterpret_cast<int32_t*>(&r8_9) = static_cast<int32_t>(rax8 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
        ecx7 = *reinterpret_cast<int32_t*>(&rax8);
        rax8 = r8_9;
    } while (rdx5[r8_9]);
    addr_140004f57_5:
    if (ecx7) {
        *reinterpret_cast<int32_t*>(&rax10) = ecx7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx11) = ecx7 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
        rbx12 = rdx5 + rax10;
        rsi13 = rdx5 + (rax10 - rcx11) - 1;
        do {
            *rbx12();
            --rbx12;
        } while (rbx12 != rsi13);
    }
    rax14 = fun_14000b4e0(fun_140004f00);
    *reinterpret_cast<uint32_t*>(&rax15) = *reinterpret_cast<uint32_t*>(&rax14) - (*reinterpret_cast<uint32_t*>(&rax14) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax14) < *reinterpret_cast<uint32_t*>(&rax14) + reinterpret_cast<uint1_t>(rax14 < 1)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
    return rax15;
}

int64_t fun_140001492(int32_t ecx);

int64_t fun_140001683(int64_t rcx);

int64_t fun_140004ed9(void** rcx, void** rdx, void** r8) {
    fun_140004fb0(rcx, rdx, r8);
    fun_140001492(17);
    fun_140001683(17);
    return 0;
}

int64_t _amsg_exit = 0x114ea;

void fun_14000b4b8(void** rcx) {
    goto _amsg_exit;
}

int64_t _initterm = 0x11522;

void fun_14000b4d0(void** rcx, void** rdx) {
    goto _initterm;
}

int64_t fun_140001410(int64_t rcx) {
    uint64_t rax2;
    int64_t rax3;

    rax2 = fun_14000b4e0(rcx);
    *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax2) - (*reinterpret_cast<uint32_t*>(&rax2) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax2) < *reinterpret_cast<uint32_t*>(&rax2) + reinterpret_cast<uint1_t>(rax2 < 1)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    return rax3;
}

void*** fun_14000b4a0();

void** fun_14000af20(int32_t ecx, void** rdx, void** r8, void** r9, int64_t a5) {
    void*** rax6;
    int64_t rcx7;

    rax6 = fun_14000b4a0();
    *reinterpret_cast<int32_t*>(&rcx7) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    return reinterpret_cast<int64_t>(rax6) + (rcx7 + rcx7 * 2 << 4);
}

int64_t fprintf = 0x11564;

void fun_14000b508(void** rcx, int64_t rdx, int64_t r8, int32_t* r9, int64_t a5) {
    goto fprintf;
}

struct s1 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
};

struct s2 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f3c;
};

struct s2* g14000d730 = reinterpret_cast<struct s2*>(0x140000000);

struct s3 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
    signed char[2] pad24;
    int16_t f18;
};

struct s1* fun_140005cb0(void** rcx, void** rdx, void** r8, void** r9) {
    struct s2* rdx5;
    struct s1* rax6;
    struct s3* r8_7;
    void* rax8;
    void* rcx9;
    uint32_t edx10;
    int64_t rdx11;
    struct s1* r9_12;
    void* r8_13;
    void* rdx14;
    void* rdx15;

    rdx5 = g14000d730;
    *reinterpret_cast<int32_t*>(&rax6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    if (rdx5->f0 == 0x5a4d && ((r8_7 = reinterpret_cast<struct s3*>(rdx5->f3c + reinterpret_cast<uint64_t>(rdx5)), r8_7->f0 == 0x4550) && r8_7->f18 == 0x20b)) {
        *reinterpret_cast<uint32_t*>(&rax8) = r8_7->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        rcx9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx) - reinterpret_cast<uint64_t>(rdx5));
        edx10 = r8_7->f6;
        rax6 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(r8_7) + reinterpret_cast<uint64_t>(rax8) + 24);
        if (!edx10) {
            addr_140005d25_3:
            return 0;
        } else {
            *reinterpret_cast<uint32_t*>(&rdx11) = edx10 - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = 0;
            r9_12 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rax6) + (rdx11 + rdx11 * 4) * 8 + 40);
            do {
                *reinterpret_cast<int32_t*>(&r8_13) = rax6->fc;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = 0;
                rdx14 = r8_13;
                if (reinterpret_cast<uint64_t>(rcx9) < reinterpret_cast<uint64_t>(r8_13)) 
                    continue;
                *reinterpret_cast<int32_t*>(&rdx15) = *reinterpret_cast<int32_t*>(&rdx14) + rax6->f8;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
                if (reinterpret_cast<uint64_t>(rcx9) < reinterpret_cast<uint64_t>(rdx15)) 
                    break;
                rax6 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(rax6) + 40);
            } while (rax6 != r9_12);
            goto addr_140005d25_3;
        }
    }
    return rax6;
}

struct s4 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f18;
};

struct s2* fun_140005de0(void** rcx, void** rdx, void** r8, void** r9) {
    struct s2* rax5;
    struct s2* r8_6;
    struct s4* rdx7;

    rax5 = g14000d730;
    *reinterpret_cast<int32_t*>(&r8_6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_6) + 4) = 0;
    if (rax5->f0 != 0x5a4d || (rdx7 = reinterpret_cast<struct s4*>(rax5->f3c + reinterpret_cast<uint64_t>(rax5)), rdx7->f0 != 0x4550)) {
        return 0;
    } else {
        if (rdx7->f18 == 0x20b) {
            r8_6 = rax5;
        }
        return r8_6;
    }
}

void fun_14000b520(int64_t rcx, void** rdx, void** r8, void** r9);

void fun_14000b568();

void fun_14000b4f0();

int32_t g1400100a4;

struct s5 {
    void** f0;
    signed char[23] pad24;
    void** f18;
};

struct s5* g1400100a8;

struct s6 {
    void** f0;
    signed char[31] pad32;
    struct s1* f20;
};

int64_t VirtualQuery = 0x11430;

int64_t VirtualProtect = 0x1141e;

int64_t GetLastError = 0x1137c;

struct s8 {
    signed char[8] pad8;
    int32_t f8;
};

struct s7 {
    void** f0;
    signed char[7] pad8;
    struct s8* f8;
};

struct s9 {
    void* f0;
    uint32_t f4;
};

int32_t g1400100a0;

uint32_t fun_140005d30(void** rcx, void** rdx, void** r8, void** r9);

int64_t fun_140005f70(void** rcx, ...);

struct s10 {
    void* f0;
    uint32_t f4;
    uint32_t f8;
};

struct s10* g14000d740 = reinterpret_cast<struct s10*>(0x14000ddc0);

struct s10* g14000d750 = reinterpret_cast<struct s10*>(0x14000ddc0);

struct s11 {
    signed char[32] pad32;
    void** f20;
    signed char[15] pad48;
    void** f30;
};

void fun_140005230(void** rcx, ...);

struct s12 {
    signed char[32] pad32;
    int32_t f20;
    signed char[4] pad40;
    void** f28;
    signed char[47] pad88;
    int64_t f58;
};

int64_t g1400100b0;

struct s13 {
    uint32_t f0;
    int32_t f4;
};

struct s14 {
    uint32_t f0;
    int32_t f4;
};

struct s15 {
    int32_t f0;
    int32_t f4;
};

struct s16 {
    int32_t f0;
    int32_t f4;
};

struct s17 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int64_t f10;
};

void fun_1400051c0(void** rcx, void** rdx, void** r8, void** r9) {
    void* rsp5;
    int64_t v6;
    void** rax7;
    void** r9_8;
    int64_t v9;
    void** rax10;
    void** rdx11;
    void** r8_12;
    void* rsp13;
    void* rbx14;
    void** r12_15;
    struct s1* rax16;
    void* rsp17;
    struct s5* rax18;
    struct s6* rax19;
    struct s2* rax20;
    uint64_t rdx21;
    struct s5* rax22;
    int64_t rax23;
    int64_t rax24;
    int32_t v25;
    void** tmp64_26;
    void** v27;
    void** v28;
    int32_t eax29;
    int32_t eax30;
    struct s5* rax31;
    struct s7* rax32;
    struct s9* rsi33;
    int64_t rax34;
    struct s10* rdi35;
    struct s10* rbx36;
    struct s11* rsp37;
    uint64_t rax38;
    uint32_t eax39;
    int64_t v40;
    struct s2* r14_41;
    void* r12_42;
    void** r12_43;
    void** r13d44;
    int64_t* rsp45;
    void** rdx46;
    int64_t* rsp47;
    struct s12* rsp48;
    int64_t rax49;
    struct s13* rdi50;
    struct s14* rsi51;
    struct s15* rdi52;
    struct s16* rsi53;
    int64_t* rsp54;
    struct s10* rbx55;
    struct s2* r15_56;
    void* rcx57;
    void** r8_58;
    void* r14_59;
    void*** rcx60;
    void** r14_61;
    void* rax62;
    void* r10_63;
    void* rax64;
    void** r13_65;
    int64_t* rsp66;
    int64_t* rsp67;
    void* rax68;
    int64_t* rsp69;
    void* rax70;
    int64_t* rsp71;
    int32_t edx72;
    int64_t rdi73;
    void* rbx74;
    struct s5* rax75;
    struct s17* rax76;
    int64_t rdx77;
    int64_t rcx78;
    int64_t* rsp79;
    int1_t less80;
    int64_t* rsp81;
    int64_t* rsp82;
    struct s5* rax83;
    void** rdx84;
    int32_t tmp32_85;
    int64_t v86;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 56);
    rax7 = fun_14000af20(2, rdx, r8, r9, v6);
    r9_8 = rax7;
    fun_14000b520("Mingw-w64 runtime failure:\n", 1, 27, r9_8);
    rax10 = fun_14000af20(2, 1, 27, r9_8, v9);
    rdx11 = rcx;
    r8_12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp5) + 88);
    fun_14000b568();
    fun_14000b4f0();
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 - 8 - 8 - 80);
    rbx14 = reinterpret_cast<void*>(static_cast<int64_t>(g1400100a4));
    r12_15 = rax10;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx14) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx14) == 0)) {
        while (1) {
            *reinterpret_cast<int32_t*>(&rbx14) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx14) + 4) = 0;
            addr_140005288_4:
            rax16 = fun_140005cb0(r12_15, rdx11, r8_12, r9_8);
            rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
            if (!rax16) 
                break;
            rax18 = g1400100a8;
            rbx14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx14) + reinterpret_cast<uint64_t>(rbx14) * 4 << 3);
            rax19 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(rax18) + reinterpret_cast<uint64_t>(rbx14));
            rax19->f20 = rax16;
            rax19->f0 = reinterpret_cast<void**>(0);
            rax20 = fun_140005de0(r12_15, rdx11, r8_12, r9_8);
            *reinterpret_cast<int32_t*>(&rdx21) = rax16->fc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = 0;
            rax22 = g1400100a8;
            *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax22) + reinterpret_cast<uint64_t>(rbx14) + 24) = reinterpret_cast<uint64_t>(rax20) + rdx21;
            rax23 = reinterpret_cast<int64_t>(VirtualQuery());
            rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8 - 8 + 8);
            if (!rax23) 
                goto addr_140005367_6;
            *reinterpret_cast<int32_t*>(&rax24) = v25;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0;
            if (!(static_cast<uint32_t>(rax24 - 64) & 0xffffffbf)) 
                goto addr_1400052fe_8;
            if (!(static_cast<uint32_t>(rax24 - 4) & 0xfffffffb)) 
                goto addr_1400052fe_8;
            *reinterpret_cast<int32_t*>(&r8_12) = 4;
            *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
            if (*reinterpret_cast<int32_t*>(&rax24) != 2) {
                *reinterpret_cast<int32_t*>(&r8_12) = 64;
                *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
            }
            tmp64_26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbx14) + reinterpret_cast<uint64_t>(g1400100a8));
            *reinterpret_cast<void***>(tmp64_26 + 8) = v27;
            r9_8 = tmp64_26;
            *reinterpret_cast<void***>(tmp64_26 + 16) = v28;
            eax29 = reinterpret_cast<int32_t>(VirtualProtect());
            rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
            if (eax29) 
                goto addr_1400052fe_8;
            eax30 = reinterpret_cast<int32_t>(GetLastError());
            *reinterpret_cast<int32_t*>(&rdx11) = eax30;
            *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
            fun_1400051c0("  VirtualProtect failed with code 0x%x", rdx11, r8_12, r9_8);
            rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8 - 8 + 8);
        }
    } else {
        rax31 = g1400100a8;
        *reinterpret_cast<int32_t*>(&r9_8) = 0;
        rax32 = reinterpret_cast<struct s7*>(&rax31->f18);
        while ((r8_12 = rax32->f0, reinterpret_cast<unsigned char>(r8_12) > reinterpret_cast<unsigned char>(r12_15)) || (*reinterpret_cast<int32_t*>(&rdx11) = rax32->f8->f8, *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0, r8_12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_12) + reinterpret_cast<unsigned char>(rdx11)), reinterpret_cast<unsigned char>(r12_15) >= reinterpret_cast<unsigned char>(r8_12))) {
            *reinterpret_cast<int32_t*>(&r9_8) = *reinterpret_cast<int32_t*>(&r9_8) + 1;
            *reinterpret_cast<int32_t*>(&r9_8 + 4) = 0;
            rax32 = reinterpret_cast<struct s7*>(reinterpret_cast<uint64_t>(rax32) + 40);
            if (*reinterpret_cast<int32_t*>(&r9_8) == *reinterpret_cast<int32_t*>(&rbx14)) 
                goto addr_140005288_4;
        }
        goto addr_140005305_17;
    }
    addr_140005382_18:
    fun_1400051c0("Address %p has no image-section", r12_15, r8_12, r9_8);
    *reinterpret_cast<int32_t*>(&rsi33) = g1400100a0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rsi33)) 
        goto addr_1400053bf_20;
    g1400100a0 = 1;
    fun_140005d30("Address %p has no image-section", r12_15, r8_12, r9_8);
    rax34 = fun_140005f70("Address %p has no image-section", "Address %p has no image-section");
    rdi35 = g14000d740;
    rbx36 = g14000d750;
    g1400100a4 = 0;
    rsp37 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 - rax34);
    g1400100a8 = reinterpret_cast<struct s5*>(&rsp37->f30);
    rax38 = reinterpret_cast<uint64_t>(rdi35) - reinterpret_cast<uint64_t>(rbx36);
    if (reinterpret_cast<int64_t>(rax38) <= reinterpret_cast<int64_t>(7)) 
        goto addr_1400053bf_20;
    if (reinterpret_cast<int64_t>(rax38) > reinterpret_cast<int64_t>(11)) {
        if (rbx36->f0) 
            goto addr_140005668_24;
        eax39 = rbx36->f4;
        if (!(eax39 | rbx36->f8)) 
            goto addr_1400055ce_26;
    } else {
        addr_140005435_27:
        if (rbx36->f0) 
            goto addr_140005668_24; else 
            goto addr_14000543f_28;
    }
    addr_140005442_29:
    if (eax39) {
        addr_140005668_24:
        if (reinterpret_cast<uint64_t>(rbx36) >= reinterpret_cast<uint64_t>(rdi35)) {
            addr_1400053bf_20:
            goto v40;
        } else {
            r14_41 = g14000d730;
            do {
                *reinterpret_cast<uint32_t*>(&r12_42) = rbx36->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_42) + 4) = 0;
                rbx36 = reinterpret_cast<struct s10*>(&rbx36->f8);
                r12_43 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r12_42) + reinterpret_cast<uint64_t>(r14_41));
                r13d44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(rbx36->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_43)));
                rsp45 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                *rsp45 = 0x14000569a;
                fun_140005230(r12_43, r12_43);
                rsp37 = reinterpret_cast<struct s11*>(rsp45 + 1);
                *reinterpret_cast<void***>(r12_43) = r13d44;
            } while (reinterpret_cast<uint64_t>(rbx36) < reinterpret_cast<uint64_t>(rdi35));
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rdx46) = rbx36->f8;
        *reinterpret_cast<int32_t*>(&rdx46 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx46) != 1) {
            addr_1400056c8_34:
            rsp47 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
            *rsp47 = 0x1400056d4;
            fun_1400051c0("  Unknown pseudo relocation protocol version %d.\n", rdx46, r8_12, r9_8);
            rsp48 = reinterpret_cast<struct s12*>(rsp47 + 1 - 11);
            rax49 = g1400100b0;
            if (rax49) {
                rdi35->f0 = rsi33->f0;
                rdi50 = reinterpret_cast<struct s13*>(&rdi35->f4);
                rsi51 = reinterpret_cast<struct s14*>(&rsi33->f4);
                rsp48->f20 = 0x4000d280;
                rsp48->f28 = rdx46;
                rdi50->f0 = rsi51->f0;
                rdi52 = reinterpret_cast<struct s15*>(&rdi50->f4);
                rsi53 = reinterpret_cast<struct s16*>(&rsi51->f4);
                rdi52->f0 = rsi53->f0;
                rdi52->f4 = rsi53->f4;
                rsp54 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp48) - 8);
                *rsp54 = 0x14000571b;
                rax49(&rsp48->f20);
                rsp48 = reinterpret_cast<struct s12*>(rsp54 + 1);
                goto addr_14000571c_48;
            }
        } else {
            rbx55 = rbx36 + 1;
            if (reinterpret_cast<uint64_t>(rbx55) >= reinterpret_cast<uint64_t>(rdi35)) 
                goto addr_1400053bf_20;
            r15_56 = g14000d730;
            do {
                addr_1400054d3_51:
                *reinterpret_cast<void**>(&rcx57) = rbx55->f0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx57) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&r8_58) = rbx55->f8;
                *reinterpret_cast<int32_t*>(&r8_58 + 4) = 0;
                *reinterpret_cast<uint32_t*>(&r14_59) = rbx55->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_59) + 4) = 0;
                rcx60 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rcx57) + reinterpret_cast<uint64_t>(r15_56));
                *reinterpret_cast<uint32_t*>(&rdx46) = *reinterpret_cast<unsigned char*>(&r8_58);
                *reinterpret_cast<int32_t*>(&rdx46 + 4) = 0;
                r9_8 = *rcx60;
                r14_61 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r14_59) + reinterpret_cast<uint64_t>(r15_56));
                if (*reinterpret_cast<uint32_t*>(&rdx46) == 32) {
                    *reinterpret_cast<void***>(&rax62) = *reinterpret_cast<void***>(r14_61);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax62) + 4) = 0;
                    r10_63 = rax62;
                    rax64 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax62) | 0xffffffff00000000);
                    if (*reinterpret_cast<int32_t*>(&r10_63) >= 0) {
                        rax64 = r10_63;
                    }
                    r13_65 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax64) - reinterpret_cast<uint64_t>(rcx60) + reinterpret_cast<unsigned char>(r9_8));
                    if (*reinterpret_cast<uint32_t*>(&r8_58) & 0xc0) 
                        goto addr_140005651_55;
                    if (reinterpret_cast<signed char>(r13_65) <= reinterpret_cast<signed char>(0xffffffff7fffffff)) 
                        goto addr_1400056b4_57;
                    if (reinterpret_cast<signed char>(r13_65) > reinterpret_cast<signed char>(0xffffffff)) 
                        goto addr_1400056b4_57;
                    addr_140005651_55:
                    rsp66 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                    *rsp66 = 0x140005659;
                    fun_140005230(r14_61);
                    rsp37 = reinterpret_cast<struct s11*>(rsp66 + 1);
                    *reinterpret_cast<void***>(r14_61) = r13_65;
                    continue;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rdx46) > 32) {
                        if (*reinterpret_cast<uint32_t*>(&rdx46) != 64) 
                            goto addr_1400056a8_61;
                        r13_65 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_61)) - reinterpret_cast<uint64_t>(rcx60) + reinterpret_cast<unsigned char>(r9_8));
                        if (*reinterpret_cast<uint32_t*>(&r8_58) & 0xc0) 
                            goto addr_140005605_63;
                        if (reinterpret_cast<signed char>(r13_65) >= reinterpret_cast<signed char>(0)) 
                            goto addr_1400056b4_57;
                        addr_140005605_63:
                        rsp67 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                        *rsp67 = 0x14000560d;
                        fun_140005230(r14_61);
                        rsp37 = reinterpret_cast<struct s11*>(rsp67 + 1);
                        *reinterpret_cast<void***>(r14_61) = r13_65;
                        continue;
                    } else {
                        if (*reinterpret_cast<uint32_t*>(&rdx46) == 8) {
                            *reinterpret_cast<uint32_t*>(&rax68) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_61));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax68) + 4) = 0;
                            if (*reinterpret_cast<signed char*>(&rax68) < 0) {
                                rax68 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax68) | 0xffffffffffffff00);
                            }
                            r13_65 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax68) - reinterpret_cast<uint64_t>(rcx60) + reinterpret_cast<unsigned char>(r9_8));
                            if (*reinterpret_cast<uint32_t*>(&r8_58) & 0xc0) 
                                goto addr_1400054bb_69;
                            if (reinterpret_cast<signed char>(r13_65) < reinterpret_cast<signed char>(0xffffffffffffff80)) 
                                goto addr_1400056b4_57;
                            if (reinterpret_cast<signed char>(r13_65) > reinterpret_cast<signed char>(0xff)) 
                                goto addr_1400056b4_57;
                            addr_1400054bb_69:
                            rsp69 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                            *rsp69 = 0x1400054c3;
                            fun_140005230(r14_61);
                            rsp37 = reinterpret_cast<struct s11*>(rsp69 + 1);
                            *reinterpret_cast<void***>(r14_61) = r13_65;
                            continue;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rdx46) != 16) 
                                goto addr_1400056a8_61;
                            *reinterpret_cast<uint32_t*>(&rax70) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_61));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax70) + 4) = 0;
                            if (*reinterpret_cast<int16_t*>(&rax70) >= 0) 
                                goto addr_14000551c_74;
                        }
                    }
                }
                rax70 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax70) | 0xffffffffffff0000);
                addr_14000551c_74:
                r13_65 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax70) - reinterpret_cast<uint64_t>(rcx60) + reinterpret_cast<unsigned char>(r9_8));
                if (*reinterpret_cast<uint32_t*>(&r8_58) & 0xc0) 
                    goto addr_140005546_76;
                if (reinterpret_cast<signed char>(r13_65) < reinterpret_cast<signed char>(0xffffffffffff8000)) 
                    goto addr_1400056b4_57;
                if (reinterpret_cast<signed char>(r13_65) > reinterpret_cast<signed char>(0xffff)) 
                    goto addr_1400056b4_57;
                addr_140005546_76:
                ++rbx55;
                rsp71 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                *rsp71 = 0x140005552;
                fun_140005230(r14_61);
                rsp37 = reinterpret_cast<struct s11*>(rsp71 + 1);
                *reinterpret_cast<void***>(r14_61) = r13_65;
                if (reinterpret_cast<uint64_t>(rbx55) < reinterpret_cast<uint64_t>(rdi35)) 
                    goto addr_1400054d3_51; else 
                    goto addr_14000555f_79;
                ++rbx55;
            } while (reinterpret_cast<uint64_t>(rbx55) < reinterpret_cast<uint64_t>(rdi35));
        }
    }
    addr_140005560_81:
    edx72 = g1400100a4;
    if (!(reinterpret_cast<uint1_t>(edx72 < 0) | reinterpret_cast<uint1_t>(edx72 == 0))) {
        rdi73 = VirtualProtect;
        *reinterpret_cast<int32_t*>(&rbx74) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx74) + 4) = 0;
        do {
            rax75 = g1400100a8;
            rax76 = reinterpret_cast<struct s17*>(reinterpret_cast<uint64_t>(rax75) + reinterpret_cast<uint64_t>(rbx74));
            if (rax76->f0) {
                rdx77 = rax76->f10;
                rcx78 = rax76->f8;
                rsp79 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                *rsp79 = 0x14000559f;
                rdi73(rcx78, rdx77);
                rsp37 = reinterpret_cast<struct s11*>(rsp79 + 1);
            }
            *reinterpret_cast<int32_t*>(&rsi33) = *reinterpret_cast<int32_t*>(&rsi33) + 1;
            rbx74 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx74) + 40);
            less80 = *reinterpret_cast<int32_t*>(&rsi33) < g1400100a4;
        } while (less80);
        goto addr_1400053bf_20;
    }
    addr_14000571c_48:
    goto rsp48->f58;
    addr_1400056b4_57:
    rsp37->f20 = r13_65;
    r8_12 = r14_61;
    rsp81 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
    *rsp81 = 0x1400056c8;
    fun_1400051c0("%d bit pseudo relocation at %p out of range, targeting %p, yielding the value %p.\n", rdx46, r8_12, r9_8);
    rsp37 = reinterpret_cast<struct s11*>(rsp81 + 1);
    goto addr_1400056c8_34;
    addr_1400056a8_61:
    rsp82 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
    *rsp82 = 0x1400056b4;
    fun_1400051c0("  Unknown pseudo relocation bit size %d.\n", rdx46, r8_58, r9_8);
    rsp37 = reinterpret_cast<struct s11*>(rsp82 + 1);
    goto addr_1400056b4_57;
    addr_14000555f_79:
    goto addr_140005560_81;
    addr_1400055ce_26:
    ++rbx36;
    goto addr_140005435_27;
    addr_14000543f_28:
    eax39 = rbx36->f4;
    goto addr_140005442_29;
    addr_140005367_6:
    rax83 = g1400100a8;
    *reinterpret_cast<int32_t*>(&rdx84) = rax16->f8;
    *reinterpret_cast<int32_t*>(&rdx84 + 4) = 0;
    r8_12 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax83) + reinterpret_cast<uint64_t>(rbx14) + 24);
    fun_1400051c0("  VirtualQuery failed for %d bytes at address %p", rdx84, r8_12, r9_8);
    rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
    goto addr_140005382_18;
    addr_1400052fe_8:
    tmp32_85 = g1400100a4 + 1;
    g1400100a4 = tmp32_85;
    addr_140005305_17:
    goto v86;
}

struct s18 {
    void** f0;
    signed char[31] pad32;
    struct s1* f20;
};

struct s19 {
    void* f0;
    uint32_t f4;
};

struct s20 {
    signed char[32] pad32;
    void** f20;
    signed char[15] pad48;
    void** f30;
};

struct s21 {
    signed char[32] pad32;
    int32_t f20;
    signed char[4] pad40;
    void** f28;
    signed char[47] pad88;
    int64_t f58;
};

struct s22 {
    uint32_t f0;
    int32_t f4;
};

struct s23 {
    int32_t f0;
    int32_t f4;
};

struct s24 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int64_t f10;
};

void fun_140005230(void** rcx, ...) {
    void* rsp2;
    void* rbx3;
    void** r12_4;
    void** rdx5;
    void** r8_6;
    void** r9_7;
    struct s1* rax8;
    void* rsp9;
    struct s5* rax10;
    struct s18* rax11;
    struct s2* rax12;
    uint64_t rdx13;
    struct s5* rax14;
    int64_t rax15;
    int64_t rax16;
    int32_t v17;
    void** tmp64_18;
    void** v19;
    void** v20;
    int32_t eax21;
    int32_t eax22;
    struct s5* rax23;
    struct s7* rax24;
    struct s19* rsi25;
    int64_t rax26;
    struct s10* rdi27;
    struct s10* rbx28;
    struct s20* rsp29;
    uint64_t rax30;
    uint32_t eax31;
    int64_t v32;
    struct s2* r14_33;
    void* r12_34;
    void** r12_35;
    void** r13d36;
    int64_t* rsp37;
    void** rdx38;
    int64_t* rsp39;
    struct s21* rsp40;
    int64_t rax41;
    struct s13* rdi42;
    struct s22* rsi43;
    struct s15* rdi44;
    struct s23* rsi45;
    int64_t* rsp46;
    struct s10* rbx47;
    struct s2* r15_48;
    void* rcx49;
    void** r8_50;
    void* r14_51;
    void*** rcx52;
    void** r14_53;
    void* rax54;
    void* r10_55;
    void* rax56;
    void** r13_57;
    int64_t* rsp58;
    int64_t* rsp59;
    void* rax60;
    int64_t* rsp61;
    void* rax62;
    int64_t* rsp63;
    int32_t edx64;
    int64_t rdi65;
    void* rbx66;
    struct s5* rax67;
    struct s24* rax68;
    int64_t rdx69;
    int64_t rcx70;
    int64_t* rsp71;
    int1_t less72;
    int64_t* rsp73;
    int64_t* rsp74;
    struct s5* rax75;
    void** rdx76;
    int32_t tmp32_77;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 80);
    rbx3 = reinterpret_cast<void*>(static_cast<int64_t>(g1400100a4));
    r12_4 = rcx;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx3) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx3) == 0)) {
        while (1) {
            *reinterpret_cast<int32_t*>(&rbx3) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx3) + 4) = 0;
            addr_140005288_3:
            rax8 = fun_140005cb0(r12_4, rdx5, r8_6, r9_7);
            rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
            if (!rax8) 
                break;
            rax10 = g1400100a8;
            rbx3 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx3) + reinterpret_cast<uint64_t>(rbx3) * 4 << 3);
            rax11 = reinterpret_cast<struct s18*>(reinterpret_cast<uint64_t>(rax10) + reinterpret_cast<uint64_t>(rbx3));
            rax11->f20 = rax8;
            rax11->f0 = reinterpret_cast<void**>(0);
            rax12 = fun_140005de0(r12_4, rdx5, r8_6, r9_7);
            *reinterpret_cast<int32_t*>(&rdx13) = rax8->fc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
            rax14 = g1400100a8;
            *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax14) + reinterpret_cast<uint64_t>(rbx3) + 24) = reinterpret_cast<uint64_t>(rax12) + rdx13;
            rax15 = reinterpret_cast<int64_t>(VirtualQuery());
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8 - 8 + 8);
            if (!rax15) 
                goto addr_140005367_5;
            *reinterpret_cast<int32_t*>(&rax16) = v17;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
            if (!(static_cast<uint32_t>(rax16 - 64) & 0xffffffbf)) 
                goto addr_1400052fe_7;
            if (!(static_cast<uint32_t>(rax16 - 4) & 0xfffffffb)) 
                goto addr_1400052fe_7;
            *reinterpret_cast<int32_t*>(&r8_6) = 4;
            *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
            if (*reinterpret_cast<int32_t*>(&rax16) != 2) {
                *reinterpret_cast<int32_t*>(&r8_6) = 64;
                *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
            }
            tmp64_18 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbx3) + reinterpret_cast<uint64_t>(g1400100a8));
            *reinterpret_cast<void***>(tmp64_18 + 8) = v19;
            r9_7 = tmp64_18;
            *reinterpret_cast<void***>(tmp64_18 + 16) = v20;
            eax21 = reinterpret_cast<int32_t>(VirtualProtect());
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
            if (eax21) 
                goto addr_1400052fe_7;
            eax22 = reinterpret_cast<int32_t>(GetLastError());
            *reinterpret_cast<int32_t*>(&rdx5) = eax22;
            *reinterpret_cast<int32_t*>(&rdx5 + 4) = 0;
            fun_1400051c0("  VirtualProtect failed with code 0x%x", rdx5, r8_6, r9_7);
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 - 8 + 8);
        }
    } else {
        rax23 = g1400100a8;
        *reinterpret_cast<int32_t*>(&r9_7) = 0;
        rax24 = reinterpret_cast<struct s7*>(&rax23->f18);
        while ((r8_6 = rax24->f0, reinterpret_cast<unsigned char>(r8_6) > reinterpret_cast<unsigned char>(r12_4)) || (*reinterpret_cast<int32_t*>(&rdx5) = rax24->f8->f8, *reinterpret_cast<int32_t*>(&rdx5 + 4) = 0, r8_6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_6) + reinterpret_cast<unsigned char>(rdx5)), reinterpret_cast<unsigned char>(r12_4) >= reinterpret_cast<unsigned char>(r8_6))) {
            *reinterpret_cast<int32_t*>(&r9_7) = *reinterpret_cast<int32_t*>(&r9_7) + 1;
            *reinterpret_cast<int32_t*>(&r9_7 + 4) = 0;
            rax24 = reinterpret_cast<struct s7*>(reinterpret_cast<uint64_t>(rax24) + 40);
            if (*reinterpret_cast<int32_t*>(&r9_7) == *reinterpret_cast<int32_t*>(&rbx3)) 
                goto addr_140005288_3;
        }
        goto addr_140005305_16;
    }
    addr_140005382_17:
    fun_1400051c0("Address %p has no image-section", r12_4, r8_6, r9_7);
    *reinterpret_cast<int32_t*>(&rsi25) = g1400100a0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rsi25)) 
        goto addr_1400053bf_19;
    g1400100a0 = 1;
    fun_140005d30("Address %p has no image-section", r12_4, r8_6, r9_7);
    rax26 = fun_140005f70("Address %p has no image-section", "Address %p has no image-section");
    rdi27 = g14000d740;
    rbx28 = g14000d750;
    g1400100a4 = 0;
    rsp29 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 - rax26);
    g1400100a8 = reinterpret_cast<struct s5*>(&rsp29->f30);
    rax30 = reinterpret_cast<uint64_t>(rdi27) - reinterpret_cast<uint64_t>(rbx28);
    if (reinterpret_cast<int64_t>(rax30) <= reinterpret_cast<int64_t>(7)) 
        goto addr_1400053bf_19;
    if (reinterpret_cast<int64_t>(rax30) > reinterpret_cast<int64_t>(11)) {
        if (rbx28->f0) 
            goto addr_140005668_23;
        eax31 = rbx28->f4;
        if (!(eax31 | rbx28->f8)) 
            goto addr_1400055ce_25;
    } else {
        addr_140005435_26:
        if (rbx28->f0) 
            goto addr_140005668_23; else 
            goto addr_14000543f_27;
    }
    addr_140005442_28:
    if (eax31) {
        addr_140005668_23:
        if (reinterpret_cast<uint64_t>(rbx28) >= reinterpret_cast<uint64_t>(rdi27)) {
            addr_1400053bf_19:
            goto v32;
        } else {
            r14_33 = g14000d730;
            do {
                *reinterpret_cast<uint32_t*>(&r12_34) = rbx28->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_34) + 4) = 0;
                rbx28 = reinterpret_cast<struct s10*>(&rbx28->f8);
                r12_35 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r12_34) + reinterpret_cast<uint64_t>(r14_33));
                r13d36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(rbx28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_35)));
                rsp37 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                *rsp37 = 0x14000569a;
                fun_140005230(r12_35, r12_35);
                rsp29 = reinterpret_cast<struct s20*>(rsp37 + 1);
                *reinterpret_cast<void***>(r12_35) = r13d36;
            } while (reinterpret_cast<uint64_t>(rbx28) < reinterpret_cast<uint64_t>(rdi27));
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rdx38) = rbx28->f8;
        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx38) != 1) {
            addr_1400056c8_33:
            rsp39 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
            *rsp39 = 0x1400056d4;
            fun_1400051c0("  Unknown pseudo relocation protocol version %d.\n", rdx38, r8_6, r9_7);
            rsp40 = reinterpret_cast<struct s21*>(rsp39 + 1 - 11);
            rax41 = g1400100b0;
            if (rax41) {
                rdi27->f0 = rsi25->f0;
                rdi42 = reinterpret_cast<struct s13*>(&rdi27->f4);
                rsi43 = reinterpret_cast<struct s22*>(&rsi25->f4);
                rsp40->f20 = 0x4000d280;
                rsp40->f28 = rdx38;
                rdi42->f0 = rsi43->f0;
                rdi44 = reinterpret_cast<struct s15*>(&rdi42->f4);
                rsi45 = reinterpret_cast<struct s23*>(&rsi43->f4);
                rdi44->f0 = rsi45->f0;
                rdi44->f4 = rsi45->f4;
                rsp46 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp40) - 8);
                *rsp46 = 0x14000571b;
                rax41(&rsp40->f20);
                rsp40 = reinterpret_cast<struct s21*>(rsp46 + 1);
                goto addr_14000571c_47;
            }
        } else {
            rbx47 = rbx28 + 1;
            if (reinterpret_cast<uint64_t>(rbx47) >= reinterpret_cast<uint64_t>(rdi27)) 
                goto addr_1400053bf_19;
            r15_48 = g14000d730;
            do {
                addr_1400054d3_50:
                *reinterpret_cast<void**>(&rcx49) = rbx47->f0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx49) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&r8_50) = rbx47->f8;
                *reinterpret_cast<int32_t*>(&r8_50 + 4) = 0;
                *reinterpret_cast<uint32_t*>(&r14_51) = rbx47->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_51) + 4) = 0;
                rcx52 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rcx49) + reinterpret_cast<uint64_t>(r15_48));
                *reinterpret_cast<uint32_t*>(&rdx38) = *reinterpret_cast<unsigned char*>(&r8_50);
                *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
                r9_7 = *rcx52;
                r14_53 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r14_51) + reinterpret_cast<uint64_t>(r15_48));
                if (*reinterpret_cast<uint32_t*>(&rdx38) == 32) {
                    *reinterpret_cast<void***>(&rax54) = *reinterpret_cast<void***>(r14_53);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax54) + 4) = 0;
                    r10_55 = rax54;
                    rax56 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax54) | 0xffffffff00000000);
                    if (*reinterpret_cast<int32_t*>(&r10_55) >= 0) {
                        rax56 = r10_55;
                    }
                    r13_57 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax56) - reinterpret_cast<uint64_t>(rcx52) + reinterpret_cast<unsigned char>(r9_7));
                    if (*reinterpret_cast<uint32_t*>(&r8_50) & 0xc0) 
                        goto addr_140005651_54;
                    if (reinterpret_cast<signed char>(r13_57) <= reinterpret_cast<signed char>(0xffffffff7fffffff)) 
                        goto addr_1400056b4_56;
                    if (reinterpret_cast<signed char>(r13_57) > reinterpret_cast<signed char>(0xffffffff)) 
                        goto addr_1400056b4_56;
                    addr_140005651_54:
                    rsp58 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                    *rsp58 = 0x140005659;
                    fun_140005230(r14_53);
                    rsp29 = reinterpret_cast<struct s20*>(rsp58 + 1);
                    *reinterpret_cast<void***>(r14_53) = r13_57;
                    continue;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rdx38) > 32) {
                        if (*reinterpret_cast<uint32_t*>(&rdx38) != 64) 
                            goto addr_1400056a8_60;
                        r13_57 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_53)) - reinterpret_cast<uint64_t>(rcx52) + reinterpret_cast<unsigned char>(r9_7));
                        if (*reinterpret_cast<uint32_t*>(&r8_50) & 0xc0) 
                            goto addr_140005605_62;
                        if (reinterpret_cast<signed char>(r13_57) >= reinterpret_cast<signed char>(0)) 
                            goto addr_1400056b4_56;
                        addr_140005605_62:
                        rsp59 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                        *rsp59 = 0x14000560d;
                        fun_140005230(r14_53);
                        rsp29 = reinterpret_cast<struct s20*>(rsp59 + 1);
                        *reinterpret_cast<void***>(r14_53) = r13_57;
                        continue;
                    } else {
                        if (*reinterpret_cast<uint32_t*>(&rdx38) == 8) {
                            *reinterpret_cast<uint32_t*>(&rax60) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_53));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax60) + 4) = 0;
                            if (*reinterpret_cast<signed char*>(&rax60) < 0) {
                                rax60 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax60) | 0xffffffffffffff00);
                            }
                            r13_57 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax60) - reinterpret_cast<uint64_t>(rcx52) + reinterpret_cast<unsigned char>(r9_7));
                            if (*reinterpret_cast<uint32_t*>(&r8_50) & 0xc0) 
                                goto addr_1400054bb_68;
                            if (reinterpret_cast<signed char>(r13_57) < reinterpret_cast<signed char>(0xffffffffffffff80)) 
                                goto addr_1400056b4_56;
                            if (reinterpret_cast<signed char>(r13_57) > reinterpret_cast<signed char>(0xff)) 
                                goto addr_1400056b4_56;
                            addr_1400054bb_68:
                            rsp61 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                            *rsp61 = 0x1400054c3;
                            fun_140005230(r14_53);
                            rsp29 = reinterpret_cast<struct s20*>(rsp61 + 1);
                            *reinterpret_cast<void***>(r14_53) = r13_57;
                            continue;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rdx38) != 16) 
                                goto addr_1400056a8_60;
                            *reinterpret_cast<uint32_t*>(&rax62) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_53));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax62) + 4) = 0;
                            if (*reinterpret_cast<int16_t*>(&rax62) >= 0) 
                                goto addr_14000551c_73;
                        }
                    }
                }
                rax62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax62) | 0xffffffffffff0000);
                addr_14000551c_73:
                r13_57 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax62) - reinterpret_cast<uint64_t>(rcx52) + reinterpret_cast<unsigned char>(r9_7));
                if (*reinterpret_cast<uint32_t*>(&r8_50) & 0xc0) 
                    goto addr_140005546_75;
                if (reinterpret_cast<signed char>(r13_57) < reinterpret_cast<signed char>(0xffffffffffff8000)) 
                    goto addr_1400056b4_56;
                if (reinterpret_cast<signed char>(r13_57) > reinterpret_cast<signed char>(0xffff)) 
                    goto addr_1400056b4_56;
                addr_140005546_75:
                ++rbx47;
                rsp63 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                *rsp63 = 0x140005552;
                fun_140005230(r14_53);
                rsp29 = reinterpret_cast<struct s20*>(rsp63 + 1);
                *reinterpret_cast<void***>(r14_53) = r13_57;
                if (reinterpret_cast<uint64_t>(rbx47) < reinterpret_cast<uint64_t>(rdi27)) 
                    goto addr_1400054d3_50; else 
                    goto addr_14000555f_78;
                ++rbx47;
            } while (reinterpret_cast<uint64_t>(rbx47) < reinterpret_cast<uint64_t>(rdi27));
        }
    }
    addr_140005560_80:
    edx64 = g1400100a4;
    if (!(reinterpret_cast<uint1_t>(edx64 < 0) | reinterpret_cast<uint1_t>(edx64 == 0))) {
        rdi65 = VirtualProtect;
        *reinterpret_cast<int32_t*>(&rbx66) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx66) + 4) = 0;
        do {
            rax67 = g1400100a8;
            rax68 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(rax67) + reinterpret_cast<uint64_t>(rbx66));
            if (rax68->f0) {
                rdx69 = rax68->f10;
                rcx70 = rax68->f8;
                rsp71 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                *rsp71 = 0x14000559f;
                rdi65(rcx70, rdx69);
                rsp29 = reinterpret_cast<struct s20*>(rsp71 + 1);
            }
            *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(&rsi25) + 1;
            rbx66 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx66) + 40);
            less72 = *reinterpret_cast<int32_t*>(&rsi25) < g1400100a4;
        } while (less72);
        goto addr_1400053bf_19;
    }
    addr_14000571c_47:
    goto rsp40->f58;
    addr_1400056b4_56:
    rsp29->f20 = r13_57;
    r8_6 = r14_53;
    rsp73 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
    *rsp73 = 0x1400056c8;
    fun_1400051c0("%d bit pseudo relocation at %p out of range, targeting %p, yielding the value %p.\n", rdx38, r8_6, r9_7);
    rsp29 = reinterpret_cast<struct s20*>(rsp73 + 1);
    goto addr_1400056c8_33;
    addr_1400056a8_60:
    rsp74 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
    *rsp74 = 0x1400056b4;
    fun_1400051c0("  Unknown pseudo relocation bit size %d.\n", rdx38, r8_50, r9_7);
    rsp29 = reinterpret_cast<struct s20*>(rsp74 + 1);
    goto addr_1400056b4_56;
    addr_14000555f_78:
    goto addr_140005560_80;
    addr_1400055ce_25:
    ++rbx28;
    goto addr_140005435_26;
    addr_14000543f_27:
    eax31 = rbx28->f4;
    goto addr_140005442_28;
    addr_140005367_5:
    rax75 = g1400100a8;
    *reinterpret_cast<int32_t*>(&rdx76) = rax8->f8;
    *reinterpret_cast<int32_t*>(&rdx76 + 4) = 0;
    r8_6 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax75) + reinterpret_cast<uint64_t>(rbx3) + 24);
    fun_1400051c0("  VirtualQuery failed for %d bytes at address %p", rdx76, r8_6, r9_7);
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    goto addr_140005382_17;
    addr_1400052fe_7:
    tmp32_77 = g1400100a4 + 1;
    g1400100a4 = tmp32_77;
    addr_140005305_16:
    return;
}

int64_t signal = 0x115b4;

int64_t fun_14000b548(int64_t rcx, ...) {
    goto signal;
}

int64_t free = 0x11576;

void fun_14000b518(void** rcx, void** rdx) {
    goto free;
}

int64_t EnterCriticalSection = 0x11364;

void** g1400100e0;

int64_t TlsGetValue = 0x11410;

int64_t LeaveCriticalSection = 0x113bc;

void fun_140005900() {
    void** rbx1;
    int64_t rdi2;
    int64_t rsi3;
    int64_t rcx4;
    int64_t rax5;
    int32_t eax6;
    void** rax7;

    EnterCriticalSection(0x140010100);
    rbx1 = g1400100e0;
    if (rbx1) {
        rdi2 = TlsGetValue;
        rsi3 = GetLastError;
        do {
            *reinterpret_cast<void***>(&rcx4) = *reinterpret_cast<void***>(rbx1);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx4) + 4) = 0;
            rax5 = reinterpret_cast<int64_t>(rdi2(rcx4));
            eax6 = reinterpret_cast<int32_t>(rsi3(rcx4));
            if (!eax6 && rax5) {
                rax7 = *reinterpret_cast<void***>(rbx1 + 8);
                rax7(rax5);
            }
            rbx1 = *reinterpret_cast<void***>(rbx1 + 16);
        } while (rbx1);
    }
    goto LeaveCriticalSection;
}

int64_t strncmp = 0x115d4;

int32_t fun_14000b560(int64_t rcx, int64_t rdx, int64_t r8) {
    goto strncmp;
}

struct s25 {
    int32_t f0;
    uint32_t f4;
    signed char[4] pad12;
    int32_t fc;
    signed char[4] pad20;
    uint32_t f14;
};

struct s26 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s27 {
    unsigned char f0;
    unsigned char f1;
};

struct s28 {
    unsigned char f0;
    unsigned char f1;
};

void** fun_140008620(struct s28* rcx, void*** rdx, int32_t r8d);

void** fun_14000a1e0(void** ecx, ...);

struct s29 {
    void** f0;
    signed char[19] pad20;
    int32_t f14;
};

void* fun_14000a060(void** rcx);

void fun_140009f60(void** rcx, void* edx);

void fun_14000a2e0(void** rcx, ...);

uint32_t fun_14000ab60(void** rcx, uint32_t* rdx);

void** fun_1400085e0(uint32_t ecx);

struct s30 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s31 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s32 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

void** fun_14000a400(void** ecx, ...);

void** fun_14000a620(void** rcx, uint32_t edx, ...);

void** fun_14000a4c0(void** rcx, void** rdx);

void** fun_14000a830(void** rcx, uint32_t edx, ...);

uint32_t fun_14000a940(void** rcx, void** rdx, ...);

void** fun_14000a350(void** rcx, uint32_t edx, uint32_t r8d);

int64_t fun_1400086c0(void** rcx, void** rdx, ...);

void** fun_14000a990(void** rcx, void** rdx, void** r8);

struct s33 {
    int32_t f0;
    void** f4;
};

uint64_t g14000d810 = 0x14000d5c0;

struct s34 {
    int32_t f0;
    void** f4;
};

struct s35 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s36 {
    void** f0;
    signed char[3] pad4;
    void** f4;
};

struct s37 {
    void** f0;
    signed char[3] pad4;
    int32_t f4;
};

void** fun_140008830(struct s25* rcx, uint32_t edx, void*** r8, uint32_t* r9) {
    void* rsp5;
    struct s26* rsi6;
    uint32_t v7;
    uint32_t v8;
    struct s25* rbx9;
    uint32_t* r14_10;
    uint32_t v11;
    uint32_t v12;
    uint32_t v13;
    void*** v14;
    uint32_t* v15;
    uint32_t* v16;
    void*** v17;
    void*** v18;
    uint32_t eax19;
    void*** rdx20;
    int32_t r8d21;
    struct s27* rcx22;
    uint32_t edi23;
    uint32_t v24;
    void** r15_25;
    void** rax26;
    int64_t r12_27;
    int32_t eax28;
    void** ecx29;
    void** rax30;
    void* rsp31;
    void** r13_32;
    void*** rax33;
    void** rdx34;
    uint64_t r8_35;
    void*** rcx36;
    uint64_t rax37;
    int64_t rax38;
    int64_t rbp39;
    struct s29* rax40;
    void** edx41;
    struct s27* rsi42;
    void*** rdi43;
    void** ebx44;
    int64_t rax45;
    void** rax46;
    unsigned char* rdx47;
    uint32_t ecx48;
    void** r8_49;
    void** rax50;
    uint32_t ecx51;
    void* eax52;
    void* rsp53;
    uint32_t v54;
    uint32_t eax55;
    int64_t rdi56;
    uint64_t rcx57;
    int64_t r8_58;
    uint64_t rax59;
    uint64_t rdx60;
    uint64_t rcx61;
    uint64_t rax62;
    uint32_t r10d63;
    uint32_t r10d64;
    uint1_t zf65;
    uint32_t r11d66;
    int32_t r11d67;
    uint64_t rax68;
    uint64_t rcx69;
    uint64_t rcx70;
    void** rdi71;
    int64_t rax72;
    uint32_t r10d73;
    int1_t below_or_equal74;
    int32_t v75;
    uint32_t v76;
    uint32_t v77;
    uint32_t v78;
    uint32_t eax79;
    uint32_t eax80;
    uint32_t v81;
    uint32_t eax82;
    uint32_t v83;
    int32_t v84;
    void** rax85;
    uint32_t r11d86;
    uint32_t r10d87;
    uint32_t ecx88;
    uint32_t v89;
    uint32_t eax90;
    struct s30* rsi91;
    uint32_t r8d92;
    uint32_t eax93;
    struct s31* rsi94;
    int64_t r12_95;
    uint32_t eax96;
    uint32_t esi97;
    int64_t rdi98;
    uint32_t eax99;
    int64_t rsi100;
    void** r12_101;
    int64_t rax102;
    int64_t rbx103;
    void** rdi104;
    struct s32* rsi105;
    uint1_t zf106;
    uint32_t v107;
    void*** rsi108;
    uint1_t zf109;
    void** rax110;
    uint32_t eax111;
    void** rax112;
    void** rax113;
    void** rax114;
    void** rax115;
    void** rax116;
    uint32_t r11d117;
    uint32_t r10d118;
    void** rsi119;
    uint32_t edx120;
    uint32_t ebp121;
    void** rax122;
    int32_t v123;
    int64_t rbx124;
    void** r8_125;
    uint32_t edx126;
    void** rax127;
    uint32_t edx128;
    void** rax129;
    uint32_t eax130;
    void** rax131;
    uint32_t eax132;
    uint32_t ebp133;
    void** rax134;
    uint32_t v135;
    uint32_t ebx136;
    uint32_t eax137;
    uint32_t edx138;
    void** rax139;
    void** rax140;
    uint32_t eax141;
    void** rax142;
    int64_t rax143;
    int32_t eax144;
    void** rax145;
    int32_t v146;
    void** r8_147;
    void** rax148;
    uint32_t eax149;
    uint1_t zf150;
    uint32_t edx151;
    uint32_t eax152;
    void** rax153;
    uint32_t edx154;
    void** rbp155;
    void** ecx156;
    void** rax157;
    void** rax158;
    uint32_t* v159;
    uint32_t eax160;
    void** r14_161;
    void** rbp162;
    void** v163;
    int64_t rax164;
    int64_t rdi165;
    int32_t r15d166;
    uint32_t eax167;
    void** rax168;
    uint32_t edx169;
    uint32_t eax170;
    void** eax171;
    void** rbx172;
    void** rax173;
    void** rax174;
    void** rax175;
    void** rax176;
    int32_t v177;
    void** v178;
    void** rbp179;
    void** rax180;
    uint32_t eax181;
    uint1_t zf182;
    uint32_t* v183;
    int32_t ebx184;
    void** r14_185;
    void** rbp186;
    void** v187;
    void** rsi188;
    void** r15_189;
    uint32_t eax190;
    void** rax191;
    void** rax192;
    int64_t rax193;
    uint32_t ebx194;
    int32_t v195;
    uint32_t eax196;
    int32_t v197;
    int1_t less_or_equal198;
    uint32_t eax199;
    uint32_t ebx200;
    uint32_t v201;
    uint32_t ebx202;
    int32_t edx203;
    int32_t edx204;
    uint1_t zf205;
    int64_t rax206;
    int64_t r9_207;
    uint1_t zf208;
    uint1_t below_or_equal209;
    struct s33* rsi210;
    struct s34* rdi211;
    void*** rdi212;
    struct s35* rsi213;
    uint32_t edx214;
    void** rdi215;
    struct s36* rsi216;
    uint32_t ecx217;
    uint1_t pf218;
    uint1_t zf219;
    uint1_t below_or_equal220;
    struct s36* rsi221;
    uint32_t tmp32_222;
    uint32_t eax223;
    uint1_t below_or_equal224;
    void** rdx225;
    uint32_t eax226;
    uint32_t eax227;
    void** rdi228;
    void*** rsi229;
    void* rsi230;
    uint32_t eax231;
    uint32_t tmp32_232;
    uint32_t eax233;
    void* rsi234;
    uint64_t rdx235;
    uint64_t rax236;
    uint64_t rdx237;
    struct s37* rsi238;
    void** rax239;
    int64_t r12_240;
    uint32_t eax241;
    uint32_t eax242;
    uint32_t eax243;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xb8);
    __asm__("movaps [rsp+0xa0], xmm6");
    *reinterpret_cast<uint32_t*>(&rsi6) = *r9;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
    v7 = v8;
    rbx9 = rcx;
    r14_10 = r9;
    v11 = edx;
    v12 = v13;
    v14 = r8;
    v15 = v16;
    v17 = v18;
    *r9 = *reinterpret_cast<uint32_t*>(&rsi6) & 0xffffffcf;
    eax19 = *reinterpret_cast<uint32_t*>(&rsi6) & 7;
    if (eax19 == 3) {
        rdx20 = v17;
        r8d21 = 8;
        rcx22 = reinterpret_cast<struct s27*>("Infinity");
        *v15 = 0xffff8000;
    } else {
        edi23 = *reinterpret_cast<uint32_t*>(&rsi6) & 4;
        v24 = edi23;
        if (edi23) {
            *reinterpret_cast<int32_t*>(&r15_25) = 0;
            *reinterpret_cast<int32_t*>(&r15_25 + 4) = 0;
            if (eax19 != 4) {
                addr_1400088c1_5:
                __asm__("movaps xmm6, [rsp+0xa0]");
                return r15_25;
            } else {
                rdx20 = v17;
                r8d21 = 3;
                rcx22 = reinterpret_cast<struct s27*>("NaN");
                *v15 = 0xffff8000;
            }
        } else {
            if (!eax19) {
                addr_140008b30_8:
                *v15 = 1;
                rax26 = fun_140008620("0", v17, 1);
                r15_25 = rax26;
                goto addr_1400088c1_5;
            } else {
                *reinterpret_cast<int32_t*>(&r15_25) = 0;
                *reinterpret_cast<int32_t*>(&r15_25 + 4) = 0;
                if (eax19 - 1 > 1) 
                    goto addr_1400088c1_5;
                *reinterpret_cast<int32_t*>(&r12_27) = rcx->f0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_27) + 4) = 0;
                eax28 = 32;
                ecx29 = reinterpret_cast<void**>(0);
                if (*reinterpret_cast<int32_t*>(&r12_27) > 32) {
                    do {
                        eax28 = eax28 + eax28;
                        ++ecx29;
                    } while (*reinterpret_cast<int32_t*>(&r12_27) > eax28);
                }
                rax30 = fun_14000a1e0(ecx29);
                rsp31 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
                r13_32 = rax30;
                rax33 = v14;
                rdx34 = r13_32 + 24;
                r8_35 = reinterpret_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(r12_27 - 1) >> 5)) << 2;
                rcx36 = reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax33) + r8_35);
                do {
                    rax33 = rax33 + 4;
                    rdx34 = rdx34 + 4;
                    *reinterpret_cast<void***>(rdx34 + 0xfffffffffffffffc) = *rax33;
                } while (reinterpret_cast<uint64_t>(rcx36) >= reinterpret_cast<uint64_t>(rax33));
                rax37 = r8_35 + 4;
                if (reinterpret_cast<uint64_t>(rcx36 + 1) < reinterpret_cast<uint64_t>(v14 + 1)) {
                    rax37 = 4;
                }
                rax38 = reinterpret_cast<int64_t>(rax37) >> 2;
                *reinterpret_cast<void***>(&rbp39) = *reinterpret_cast<void***>(&rax38);
                rax40 = reinterpret_cast<struct s29*>(r13_32 + rax38 * 4);
                do {
                    edx41 = *reinterpret_cast<void***>(&rbp39);
                    *reinterpret_cast<void***>(&rbp39) = *reinterpret_cast<void***>(&rbp39) - 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = 0;
                    if (rax40->f14) 
                        goto addr_1400089ca_18;
                    rax40 = reinterpret_cast<struct s29*>(reinterpret_cast<uint64_t>(rax40) - 4);
                } while (*reinterpret_cast<void***>(&rbp39));
                goto addr_140008b88_20;
            }
        }
    }
    __asm__("movaps xmm6, [rsp+0xa0]");
    rsi42 = rcx22;
    rdi43 = rdx20;
    if (r8d21 <= 27) {
        ebx44 = reinterpret_cast<void**>(0);
    } else {
        *reinterpret_cast<int32_t*>(&rax45) = 4;
        ebx44 = reinterpret_cast<void**>(0);
        do {
            *reinterpret_cast<int32_t*>(&rax45) = *reinterpret_cast<int32_t*>(&rax45) + *reinterpret_cast<int32_t*>(&rax45);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax45) + 4) = 0;
            ++ebx44;
        } while (r8d21 > static_cast<int32_t>(rax45 + 23));
    }
    rax46 = fun_14000a1e0(ebx44);
    rdx47 = &rsi42->f1;
    *reinterpret_cast<void***>(rax46) = ebx44;
    ecx48 = rsi42->f0;
    r8_49 = rax46 + 4;
    *reinterpret_cast<void***>(rax46 + 4) = *reinterpret_cast<void***>(&ecx48);
    rax50 = r8_49;
    if (*reinterpret_cast<void***>(&ecx48)) {
        do {
            ecx51 = *rdx47;
            ++rax50;
            ++rdx47;
            *reinterpret_cast<void***>(rax50) = *reinterpret_cast<void***>(&ecx51);
        } while (*reinterpret_cast<void***>(&ecx51));
    }
    if (rdi43) {
        *rdi43 = rax50;
    }
    return r8_49;
    addr_1400089ca_18:
    *reinterpret_cast<void***>(r13_32 + 20) = edx41;
    __asm__("bsr eax, [r13+rbp*4+0x18]");
    *reinterpret_cast<void***>(&rbp39) = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(edx41) << 5) - (*reinterpret_cast<uint32_t*>(&rax40) ^ 31));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = 0;
    addr_1400089e1_32:
    eax52 = fun_14000a060(r13_32);
    rsp53 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp31) - 8 + 8);
    v54 = v11;
    if (eax52) {
        fun_140009f60(r13_32, eax52);
        rsp53 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp53) - 8 + 8);
        v54 = v11 + reinterpret_cast<uint32_t>(eax52);
        *reinterpret_cast<void***>(&rbp39) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp39)) - reinterpret_cast<uint32_t>(eax52));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = 0;
    }
    if (!*reinterpret_cast<void***>(r13_32 + 20)) {
        fun_14000a2e0(r13_32, r13_32);
        goto addr_140008b30_8;
    } else {
        eax55 = fun_14000ab60(r13_32, reinterpret_cast<int64_t>(rsp53) + 0x9c);
        *reinterpret_cast<uint32_t*>(&rdi56) = v54;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi56) + 4) = 0;
        __asm__("pxor xmm1, xmm1");
        __asm__("movd rcx, xmm0");
        __asm__("movd rax, xmm0");
        rcx57 = reinterpret_cast<unsigned char>(r13_32) >> 32;
        *reinterpret_cast<int32_t*>(&r8_58) = static_cast<int32_t>(rdi56 + rbp39);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_58) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rax59) = eax55;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax59) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rdx60) = static_cast<uint32_t>(r8_58 - 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx60) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rcx61) = *reinterpret_cast<uint32_t*>(&rcx57) & 0xfffff | 0x3ff00000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx61) + 4) = 0;
        __asm__("cvtsi2sd xmm1, edx");
        __asm__("mulsd xmm1, [rip+0x4ad3]");
        rax62 = rax59 | rcx61 << 32;
        r10d63 = -*reinterpret_cast<uint32_t*>(&rdx60);
        __asm__("movd xmm0, rax");
        __asm__("subsd xmm0, [rip+0x4a9e]");
        __asm__("mulsd xmm0, [rip+0x4a9e]");
        if (__intrinsic()) {
            r10d63 = *reinterpret_cast<uint32_t*>(&rdx60);
        }
        __asm__("addsd xmm0, [rip+0x4a9a]");
        r10d64 = r10d63 - 0x435;
        __asm__("addsd xmm0, xmm1");
        zf65 = reinterpret_cast<uint1_t>(r10d64 == 0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r10d64) < reinterpret_cast<int32_t>(0)) | zf65)) {
            __asm__("pxor xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r10d");
            __asm__("mulsd xmm1, [rip+0x4a89]");
            __asm__("addsd xmm0, xmm1");
        }
        __asm__("pxor xmm6, xmm6");
        __asm__("cvttsd2si r11d, xmm0");
        __asm__("comisd xmm6, xmm0");
        if (!reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf65)) && (__intrinsic() || !zf65)) {
            r11d66 = r11d67 - 1;
        }
        *reinterpret_cast<int32_t*>(&rax68) = *reinterpret_cast<int32_t*>(&rax62);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax68) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&rcx69) = *reinterpret_cast<uint32_t*>(&rcx61) + (*reinterpret_cast<uint32_t*>(&rdx60) << 20);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx69) + 4) = 0;
        rcx70 = rcx69 << 32;
        rdi71 = reinterpret_cast<void**>(rax68 | rcx70);
        *reinterpret_cast<void**>(&rax72) = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp39)) - *reinterpret_cast<uint32_t*>(&rdx60));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax72) + 4) = 0;
        r10d73 = static_cast<uint32_t>(rax72 - 1);
        below_or_equal74 = r11d66 <= 22;
        if (below_or_equal74) 
            goto addr_140008af0_43;
    }
    v75 = 1;
    addr_140008bc8_45:
    v76 = 0;
    if (reinterpret_cast<int32_t>(r10d73) < reinterpret_cast<int32_t>(0)) {
        addr_1400091d0_46:
        r10d73 = 0;
        *reinterpret_cast<uint32_t*>(&rdx60) = 1 - reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax72));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx60) + 4) = 0;
        v76 = *reinterpret_cast<uint32_t*>(&rdx60);
        goto addr_140008bd9_47;
    } else {
        addr_140008bd9_47:
        if (reinterpret_cast<int32_t>(r11d66) >= reinterpret_cast<int32_t>(0)) {
            addr_140008e71_48:
            v77 = r11d66;
            r10d73 = r10d73 + r11d66;
            v78 = 0;
        } else {
            v76 = v76 - r11d66;
            eax79 = -r11d66;
            v77 = r11d66;
            r11d66 = 0;
            v78 = eax79;
        }
    }
    if (v7 > 9) {
        v7 = 0;
        goto addr_140008e98_52;
    }
    if (reinterpret_cast<int32_t>(v7) > reinterpret_cast<int32_t>(5)) {
        *reinterpret_cast<int32_t*>(&rdi71) = 0;
        *reinterpret_cast<int32_t*>(&rdi71 + 4) = 0;
        v7 = v7 - 4;
    } else {
        *reinterpret_cast<int32_t*>(&rdi71) = 0;
        *reinterpret_cast<int32_t*>(&rdi71 + 4) = 0;
        *reinterpret_cast<unsigned char*>(&rdi71) = reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(*reinterpret_cast<int32_t*>(&r8_58) + 0x3fd) <= 0x7f7);
    }
    if (v7 != 3) 
        goto addr_140008c2d_57;
    eax80 = v12 + v77;
    v81 = eax80;
    eax82 = eax80 + 1;
    v83 = eax82;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax82) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax82 == 0)) {
        v84 = 0;
    } else {
        rax85 = fun_1400085e0(v83);
        v84 = 0;
        r11d86 = r11d66;
        r10d87 = r10d73;
        r15_25 = rax85;
        goto addr_140008c98_61;
    }
    addr_140009996_62:
    ecx88 = 1;
    addr_1400092a9_63:
    rax85 = fun_1400085e0(ecx88);
    r11d86 = r11d66;
    r10d87 = r10d73;
    r15_25 = rax85;
    if (reinterpret_cast<int32_t>(v7) > reinterpret_cast<int32_t>(1)) {
        addr_140008c98_61:
        *reinterpret_cast<uint32_t*>(&rdx60) = rbx9->fc - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx60) + 4) = 0;
        v89 = *reinterpret_cast<uint32_t*>(&rdx60);
        if (*reinterpret_cast<uint32_t*>(&rdx60)) {
            eax90 = 2;
            if (*reinterpret_cast<int32_t*>(&rdx60) >= reinterpret_cast<int32_t>(0)) {
                eax90 = *reinterpret_cast<uint32_t*>(&rdx60);
            }
            v89 = eax90;
            if (!(*reinterpret_cast<uint32_t*>(&rsi6) & 8)) 
                goto addr_140009348_67;
            *reinterpret_cast<uint32_t*>(&rax85) = 3 - eax90;
            v89 = *reinterpret_cast<uint32_t*>(&rax85);
        }
    } else {
        v89 = 0;
    }
    *reinterpret_cast<uint32_t*>(&rsi91) = v83;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi91) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax85) = reinterpret_cast<unsigned char>(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi91) <= 14)) & *reinterpret_cast<unsigned char*>(&rdi71));
    r8d92 = *reinterpret_cast<uint32_t*>(&rax85);
    if (!*reinterpret_cast<unsigned char*>(&rax85) || (eax93 = v89 | v77, !!eax93)) {
        addr_140009348_67:
        *reinterpret_cast<uint32_t*>(&rsi94) = v54;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi94) + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&rsi94) < reinterpret_cast<int32_t>(0) || reinterpret_cast<int32_t>(rbx9->f14) < reinterpret_cast<int32_t>(v77)) {
            if (v84) {
                addr_140008f11_72:
                *reinterpret_cast<uint32_t*>(&r12_95) = *reinterpret_cast<int32_t*>(&r12_27) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp39));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_95) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx60) = rbx9->f4;
                eax96 = static_cast<uint32_t>(r12_95 + 1);
                if (reinterpret_cast<int32_t>(v54 - *reinterpret_cast<uint32_t*>(&r12_95)) >= *reinterpret_cast<int32_t*>(&rdx60)) {
                    if (reinterpret_cast<int32_t>(v7) <= reinterpret_cast<int32_t>(1)) {
                        addr_140008f6d_74:
                        r10d87 = r10d87 + eax96;
                        esi97 = v78;
                        *reinterpret_cast<uint32_t*>(&rdi98) = v76;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
                        v76 = eax96 + v76;
                    } else {
                        addr_14000982b_75:
                        eax99 = v83 - 1;
                        if (reinterpret_cast<int32_t>(v78) < reinterpret_cast<int32_t>(eax99)) {
                            *reinterpret_cast<uint32_t*>(&rdx60) = eax99 - v78;
                            esi97 = 0;
                            v78 = eax99;
                            r11d86 = r11d86 + *reinterpret_cast<uint32_t*>(&rdx60);
                            goto addr_140009840_77;
                        } else {
                            esi97 = v78 - eax99;
                            goto addr_140009840_77;
                        }
                    }
                } else {
                    addr_140008f32_79:
                    *reinterpret_cast<uint32_t*>(&rsi100) = v7;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi100) + 4) = 0;
                    if (static_cast<uint32_t>(rsi100 - 3) & 0xfffffffd) {
                        eax96 = v54 - *reinterpret_cast<uint32_t*>(&rdx60) + 1;
                        if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi100) > reinterpret_cast<int32_t>(1))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v83) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v83 == 0)))))) 
                            goto addr_140008f6d_74;
                        if (reinterpret_cast<int32_t>(eax96) > reinterpret_cast<int32_t>(v83)) 
                            goto addr_14000982b_75; else 
                            goto addr_140008f6d_74;
                    }
                }
            } else {
                esi97 = v78;
                *reinterpret_cast<uint32_t*>(&rdi98) = v76;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
                *reinterpret_cast<int32_t*>(&r12_101) = 0;
                *reinterpret_cast<int32_t*>(&r12_101 + 4) = 0;
                goto addr_140008faf_83;
            }
        } else {
            rax102 = reinterpret_cast<int32_t>(v77);
            rbx103 = rax102;
            *reinterpret_cast<void***>(rdi71) = rsi94->f0;
            rdi104 = rdi71 + 4;
            rsi105 = reinterpret_cast<struct s32*>(&rsi94->f4);
            if (reinterpret_cast<int32_t>(v12) >= reinterpret_cast<int32_t>(0)) 
                goto addr_140009888_88;
            *reinterpret_cast<uint32_t*>(&rax102) = v83;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax102) + 4) = 0;
            zf106 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax102) == 0);
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax102) < reinterpret_cast<int32_t>(0)) | zf106)) 
                goto addr_140009888_88; else 
                goto addr_14000938c_90;
        }
    } else {
        v107 = 0;
        *reinterpret_cast<void***>(rdi71) = rsi91->f0;
        rdi71 = rdi71 + 4;
        rsi108 = &rsi91->f4;
        zf109 = reinterpret_cast<uint1_t>(v75 == 0);
        if (zf109) 
            goto addr_140008d18_95; else 
            goto addr_140008d06_96;
    }
    addr_140008f80_97:
    rax110 = fun_14000a400(1);
    v84 = 1;
    r11d86 = r11d86;
    r10d87 = r10d87;
    r12_101 = rax110;
    addr_140008faf_83:
    if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rdi98) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdi98) == 0)) && !(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r10d87) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(r10d87 == 0))) {
        eax111 = r10d87;
        if (*reinterpret_cast<int32_t*>(&rdi98) <= reinterpret_cast<int32_t>(r10d87)) {
            eax111 = *reinterpret_cast<uint32_t*>(&rdi98);
        }
        v76 = v76 - eax111;
        *reinterpret_cast<uint32_t*>(&rdi98) = *reinterpret_cast<uint32_t*>(&rdi98) - eax111;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
        r10d87 = r10d87 - eax111;
    }
    if (v78) {
        if (!v84) {
            *reinterpret_cast<uint32_t*>(&rdx60) = v78;
            rax112 = fun_14000a620(r13_32, *reinterpret_cast<uint32_t*>(&rdx60));
            r10d87 = r10d87;
            r11d86 = r11d86;
            r13_32 = rax112;
        } else {
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi97) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi97 == 0))) {
                rax113 = fun_14000a620(r12_101, esi97);
                r12_101 = rax113;
                rax114 = fun_14000a4c0(rax113, r13_32);
                fun_14000a2e0(r13_32, r13_32);
                r13_32 = rax114;
                r10d87 = r10d87;
                r11d86 = r11d86;
            }
            *reinterpret_cast<uint32_t*>(&rdx60) = v78 - esi97;
            if (*reinterpret_cast<uint32_t*>(&rdx60)) {
                rax115 = fun_14000a620(r13_32, *reinterpret_cast<uint32_t*>(&rdx60), r13_32, *reinterpret_cast<uint32_t*>(&rdx60));
                r11d86 = r11d86;
                r10d87 = r10d87;
                r13_32 = rax115;
            }
        }
    }
    rax116 = fun_14000a400(1, 1);
    r11d117 = r11d86;
    r10d118 = r10d87;
    *reinterpret_cast<unsigned char*>(&rdx60) = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rbp39) == 1);
    rsi119 = rax116;
    *reinterpret_cast<unsigned char*>(&rax116) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v7) <= reinterpret_cast<int32_t>(1));
    edx120 = *reinterpret_cast<uint32_t*>(&rdx60) & *reinterpret_cast<uint32_t*>(&rax116);
    ebp121 = edx120;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r11d117) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(r11d117 == 0))) {
        rax122 = fun_14000a620(rsi119, r11d117, rsi119, r11d117);
        r11d117 = r11d86;
        r10d118 = r10d87;
        rsi119 = rax122;
        if (*reinterpret_cast<unsigned char*>(&ebp121)) {
            if (reinterpret_cast<int32_t>(v11) > reinterpret_cast<int32_t>(rbx9->f4 + 1)) {
                addr_140009ccb_111:
                ++v76;
                ++r10d118;
                v123 = 1;
            } else {
                goto addr_140009659_113;
            }
        } else {
            addr_140009659_113:
            v123 = 0;
            goto addr_140009661_114;
        }
    } else {
        v123 = 0;
        if (!*reinterpret_cast<signed char*>(&edx120)) 
            goto addr_14000908b_116;
        if (reinterpret_cast<int32_t>(rbx9->f4 + 1) < reinterpret_cast<int32_t>(v11)) 
            goto addr_140009ccb_111;
    }
    addr_14000908b_116:
    *reinterpret_cast<uint32_t*>(&rbx9) = 31;
    if (r11d117) {
        addr_140009661_114:
        __asm__("bsr ebx, [rsi+rax*4+0x18]");
        *reinterpret_cast<uint32_t*>(&rbx9) = *reinterpret_cast<uint32_t*>(&rbx9) ^ 31;
        goto addr_140009099_118;
    } else {
        addr_140009099_118:
        *reinterpret_cast<uint32_t*>(&rbx124) = *reinterpret_cast<uint32_t*>(&rbx9) - r10d118 - 4 & 31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx124) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r8_125) = v76 + *reinterpret_cast<uint32_t*>(&rbx124);
        *reinterpret_cast<int32_t*>(&r8_125 + 4) = 0;
        edx126 = *reinterpret_cast<uint32_t*>(&rbx124);
        if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r8_125) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r8_125) == 0))) {
            rax127 = fun_14000a830(r13_32, *reinterpret_cast<uint32_t*>(&r8_125));
            edx126 = *reinterpret_cast<uint32_t*>(&rbx124);
            r10d118 = r10d118;
            r13_32 = rax127;
        }
    }
    edx128 = edx126 + r10d118;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx128) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx128 == 0))) {
        rax129 = fun_14000a830(rsi119, edx128);
        rsi119 = rax129;
    }
    *reinterpret_cast<unsigned char*>(&ebp121) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v7) > reinterpret_cast<int32_t>(2));
    if (v75 && (eax130 = fun_14000a940(r13_32, rsi119), reinterpret_cast<int32_t>(eax130) < reinterpret_cast<int32_t>(0))) {
        rax131 = fun_14000a350(r13_32, 10, 0);
        r13_32 = rax131;
        eax132 = v81;
        *reinterpret_cast<unsigned char*>(&eax132) = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax132) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax132 == 0));
        ebp133 = ebp121 & eax132;
        if (v84) {
            *reinterpret_cast<uint32_t*>(&r8_125) = 0;
            *reinterpret_cast<int32_t*>(&r8_125 + 4) = 0;
            rax134 = fun_14000a350(r12_101, 10, 0);
            r12_101 = rax134;
            if (!*reinterpret_cast<signed char*>(&ebp133)) {
                v135 = v77;
                v83 = v81;
                goto addr_1400093d7_126;
            }
        } else {
            if (!*reinterpret_cast<signed char*>(&ebp133)) {
                v135 = v77;
                v83 = v81;
                goto addr_140009760_129;
            }
        }
        --v77;
        v83 = v81;
        goto addr_140009113_131;
    }
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v83) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v83 == 0)) || !*reinterpret_cast<unsigned char*>(&ebp121)) {
        v135 = v77 + 1;
        if (!v84) {
            addr_140009760_129:
            ebx136 = v83;
            rdi71 = r15_25;
            eax137 = 1;
        } else {
            addr_1400093d7_126:
            edx138 = static_cast<uint32_t>(rbx124 + rdi98);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx138) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx138 == 0))) {
                rax139 = fun_14000a830(r12_101, edx138);
                r12_101 = rax139;
                goto addr_1400093e9_135;
            }
        }
    } else {
        addr_140009113_131:
        if (v83 || (rax140 = fun_14000a350(rsi119, 5, 0), rsi119 = rax140, eax141 = fun_14000a940(r13_32, rax140), reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax141) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax141 == 0))) {
            addr_140009602_136:
            rdi71 = r15_25;
            v135 = -v12;
            fun_14000a2e0(rsi119, rsi119);
            v24 = 16;
            rax142 = r15_25;
            if (r12_101) {
                addr_1400095bd_137:
                fun_14000a2e0(r12_101, r12_101);
                goto addr_140009178_138;
            } else {
                addr_140009627_139:
                rdi71 = r15_25;
                r15_25 = rax142;
                goto addr_140009197_140;
            }
        } else {
            v135 = v77 + 2;
            goto addr_140009150_142;
        }
    }
    while (++rdi71, rax143 = fun_1400086c0(r13_32, rsi119), eax144 = *reinterpret_cast<int32_t*>(&rax143) + 48, *reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&eax144), reinterpret_cast<int32_t>(eax137) < reinterpret_cast<int32_t>(ebx136)) {
        rax145 = fun_14000a350(r13_32, 10, 0);
        r13_32 = rax145;
        ++eax137;
    }
    v146 = eax144;
    *reinterpret_cast<int32_t*>(&r8_147) = 0;
    *reinterpret_cast<int32_t*>(&r8_147 + 4) = 0;
    addr_1400097b9_146:
    if (!v89) {
        rax148 = fun_14000a830(r13_32, 1);
        r13_32 = rax148;
        eax149 = fun_14000a940(rax148, rsi119);
        r8_147 = r8_147;
        zf150 = reinterpret_cast<uint1_t>(eax149 == 0);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax149) < reinterpret_cast<int32_t>(0)) | zf150) || zf150 && *reinterpret_cast<unsigned char*>(&v146) & 1) {
            addr_1400097e3_148:
            edx151 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff));
        } else {
            addr_140009a3d_149:
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_32 + 20)) <= reinterpret_cast<signed char>(1)) {
                eax152 = 16;
                if (!*reinterpret_cast<void***>(r13_32 + 24)) {
                    eax152 = v24;
                }
                v24 = eax152;
                goto addr_140009590_153;
            } else {
                v24 = 16;
                goto addr_140009590_153;
            }
        }
    } else {
        if (v89 == 2) 
            goto addr_140009a3d_149;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_32 + 20)) > reinterpret_cast<signed char>(1)) 
            goto addr_1400097e3_148;
        if (!*reinterpret_cast<void***>(r13_32 + 24)) 
            goto addr_140009590_153; else 
            goto addr_1400097e3_148;
    }
    addr_140009800_158:
    while (rax153 = rdi71 + 0xffffffffffffffff, *reinterpret_cast<signed char*>(&edx151) == 57) {
        if (rax153 == r15_25) 
            goto addr_1400099c9_160;
        edx151 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax153 + 0xffffffffffffffff));
        rdi71 = rax153;
    }
    edx154 = edx151 + 1;
    v24 = 32;
    *reinterpret_cast<void***>(rax153) = *reinterpret_cast<void***>(&edx154);
    addr_140009590_153:
    fun_14000a2e0(rsi119, rsi119);
    if (!r12_101) {
        addr_140009178_138:
        if (reinterpret_cast<unsigned char>(rdi71) > reinterpret_cast<unsigned char>(r15_25)) {
            do {
                if (*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff) != 48) 
                    break;
                --rdi71;
            } while (rdi71 != r15_25);
        } else {
            rax142 = r15_25;
            r15_25 = rdi71;
            goto addr_140009627_139;
        }
    } else {
        if (r8_147 && r8_147 != r12_101) {
            fun_14000a2e0(r8_147, r8_147);
            goto addr_1400095bd_137;
        }
    }
    addr_140009197_140:
    fun_14000a2e0(r13_32, r13_32);
    *reinterpret_cast<void***>(rdi71) = reinterpret_cast<void**>(0);
    *v15 = v135;
    if (v17) {
        *v17 = rdi71;
    }
    *r14_10 = *r14_10 | v24;
    goto addr_1400088c1_5;
    addr_1400099c9_160:
    ++v135;
    *reinterpret_cast<void***>(r15_25) = reinterpret_cast<void**>(49);
    v24 = 32;
    goto addr_140009590_153;
    addr_1400093e9_135:
    rbp155 = r12_101;
    if (v123) {
        ecx156 = *reinterpret_cast<void***>(r12_101 + 8);
        rax157 = fun_14000a1e0(ecx156);
        r8_125 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_101 + 20)) * 4 + 8);
        fun_14000b538(rax157 + 16, r12_101 + 16, r8_125);
        rax158 = fun_14000a830(rax157, 1, rax157, 1);
        rbp155 = rax158;
    }
    v159 = r14_10;
    eax160 = 1;
    r14_161 = rbp155;
    rbp162 = r15_25;
    v163 = r15_25;
    while (1) {
        rax164 = fun_1400086c0(r13_32, rsi119, r13_32, rsi119);
        *reinterpret_cast<int32_t*>(&rdi165) = *reinterpret_cast<int32_t*>(&rax164);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi165) + 4) = 0;
        r15d166 = static_cast<int32_t>(rax164 + 48);
        eax167 = fun_14000a940(r13_32, r12_101, r13_32, r12_101);
        rax168 = fun_14000a990(rsi119, r14_161, r8_125);
        if (*reinterpret_cast<void***>(rax168 + 16)) {
            fun_14000a2e0(rax168, rax168);
            edx169 = 1;
        } else {
            eax170 = fun_14000a940(r13_32, rax168, r13_32, rax168);
            fun_14000a2e0(rax168, rax168);
            edx169 = eax170 | v7;
            if (edx169) {
                edx169 = eax170;
            } else {
                eax171 = *v14;
                if (!(reinterpret_cast<unsigned char>(eax171) & 1 | v89)) 
                    goto addr_14000953c_178;
            }
        }
        if (reinterpret_cast<int32_t>(eax167) < reinterpret_cast<int32_t>(0)) 
            break;
        if (eax167 | v7) 
            goto addr_140009441_181;
        if (!(reinterpret_cast<unsigned char>(*v14) & 1)) 
            break;
        addr_140009441_181:
        rbx172 = rbp162 + 1;
        rdi71 = rbx172;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx169) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx169 == 0)) 
            goto addr_140009457_183;
        if (v89 != 2) 
            goto addr_140009cf3_185;
        addr_140009457_183:
        *reinterpret_cast<void***>(rbx172 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&r15d166);
        if (eax160 == v83) 
            goto addr_140009d38_186;
        rax173 = fun_14000a350(r13_32, 10, 0);
        *reinterpret_cast<uint32_t*>(&r8_125) = 0;
        *reinterpret_cast<int32_t*>(&r8_125 + 4) = 0;
        r13_32 = rax173;
        if (r12_101 == r14_161) {
            rax174 = fun_14000a350(r12_101, 10, 0);
            r12_101 = rax174;
            r14_161 = rax174;
        } else {
            rax175 = fun_14000a350(r12_101, 10, 0);
            *reinterpret_cast<uint32_t*>(&r8_125) = 0;
            *reinterpret_cast<int32_t*>(&r8_125 + 4) = 0;
            r12_101 = rax175;
            rax176 = fun_14000a350(r14_161, 10, 0);
            r14_161 = rax176;
        }
        rbp162 = rbx172;
        ++eax160;
    }
    v177 = r15d166;
    v178 = rbp162;
    r15_25 = v163;
    rbp179 = r14_161;
    r14_10 = v159;
    if (!v89) {
        if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx169) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx169 == 0)) {
            addr_140009db8_193:
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_32 + 20)) <= reinterpret_cast<signed char>(1)) {
                r8_147 = r12_101;
                r12_101 = rbp179;
                if (!*reinterpret_cast<void***>(r13_32 + 24)) {
                    v24 = v89;
                    rbx172 = v178 + 1;
                } else {
                    v24 = 16;
                    rbx172 = v178 + 1;
                }
            } else {
                addr_140009dc3_197:
                r8_147 = r12_101;
                v24 = 16;
                r12_101 = rbp179;
                rbx172 = v178 + 1;
            }
        } else {
            addr_140009d7f_198:
            rax180 = fun_14000a830(r13_32, 1, r13_32, 1);
            r13_32 = rax180;
            eax181 = fun_14000a940(rax180, rsi119, rax180, rsi119);
            zf182 = reinterpret_cast<uint1_t>(eax181 == 0);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax181) < reinterpret_cast<int32_t>(0)) | zf182) || zf182 && *reinterpret_cast<unsigned char*>(&v177) & 1) {
                if (v177 == 57) {
                    addr_140009ddf_200:
                    rbx172 = v178 + 1;
                    goto addr_140009de8_201;
                } else {
                    v89 = 32;
                    v177 = static_cast<int32_t>(rdi165 + 49);
                    goto addr_140009db8_193;
                }
            } else {
                v89 = 32;
                goto addr_140009db8_193;
            }
        }
    } else {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_32 + 20)) > reinterpret_cast<signed char>(1) || *reinterpret_cast<void***>(r13_32 + 24)) {
            if (v89 == 2) 
                goto addr_140009dc3_197;
            v183 = r14_10;
            ebx184 = v177;
            r14_185 = rbp179;
            rbp186 = rsi119;
            v187 = r15_25;
            rsi188 = v178;
            while (r15_189 = rsi188 + 1, eax190 = fun_14000a940(rbp186, r14_185, rbp186, r14_185), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax190) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax190 == 0))) {
                *reinterpret_cast<void***>(r15_189 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&ebx184);
                rsi188 = r15_189;
                rax191 = fun_14000a350(r14_185, 10, 0);
                if (r12_101 == r14_185) {
                    r12_101 = rax191;
                }
                rax192 = fun_14000a350(r13_32, 10, 0);
                r14_185 = rax191;
                r13_32 = rax192;
                rax193 = fun_1400086c0(rax192, rbp186);
                ebx184 = static_cast<int32_t>(rax193 + 48);
            }
            v178 = rsi188;
            rbx172 = r15_189;
            rsi119 = rbp186;
            r15_25 = v187;
            rbp179 = r14_185;
            r14_10 = v183;
            if (ebx184 == 57) 
                goto addr_140009de8_201; else 
                goto addr_140009b2b_212;
        } else {
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx169) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx169 == 0))) 
                goto addr_140009d7f_198;
            r8_147 = r12_101;
            r12_101 = rbp179;
            rbx172 = v178 + 1;
        }
    }
    addr_140009b40_215:
    rdi71 = rbx172;
    ebx194 = *reinterpret_cast<unsigned char*>(&v177);
    *reinterpret_cast<void***>(v178) = *reinterpret_cast<void***>(&ebx194);
    goto addr_140009590_153;
    addr_140009b2b_212:
    v24 = 32;
    r8_147 = r12_101;
    r12_101 = rbp179;
    v177 = ebx184 + 1;
    goto addr_140009b40_215;
    addr_140009cf3_185:
    v195 = r15d166;
    r15_25 = v163;
    v178 = rbp162;
    rbp179 = r14_161;
    r14_10 = v159;
    if (r15d166 == 57) {
        addr_140009de8_201:
        r8_147 = r12_101;
        rdi71 = rbx172;
        r12_101 = rbp179;
        edx151 = 57;
        *reinterpret_cast<void***>(v178) = reinterpret_cast<void**>(57);
        goto addr_140009800_158;
    } else {
        r8_147 = r12_101;
        v24 = 32;
        r12_101 = rbp179;
        eax196 = *reinterpret_cast<unsigned char*>(&v195) + 1;
        *reinterpret_cast<void***>(v178) = *reinterpret_cast<void***>(&eax196);
        goto addr_140009590_153;
    }
    addr_140009d38_186:
    v146 = r15d166;
    r8_147 = r12_101;
    r15_25 = v163;
    r14_10 = v159;
    r12_101 = r14_161;
    goto addr_1400097b9_146;
    addr_14000953c_178:
    v197 = r15d166;
    r15_25 = v163;
    v178 = rbp162;
    rbp179 = r14_161;
    r14_10 = v159;
    if (r15d166 == 57) 
        goto addr_140009ddf_200;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax167) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax167 == 0)) {
        less_or_equal198 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_32 + 20)) <= reinterpret_cast<signed char>(1);
        v24 = 16;
        if (less_or_equal198) {
            eax199 = 0;
            *reinterpret_cast<unsigned char*>(&eax199) = reinterpret_cast<uint1_t>(!!*reinterpret_cast<void***>(r13_32 + 24));
            v24 = eax199 << 4;
        }
    } else {
        v24 = 32;
        v197 = static_cast<int32_t>(rdi165 + 49);
    }
    ebx200 = *reinterpret_cast<unsigned char*>(&v197);
    r8_147 = r12_101;
    r12_101 = rbp179;
    *reinterpret_cast<void***>(v178) = *reinterpret_cast<void***>(&ebx200);
    rdi71 = v178 + 1;
    goto addr_140009590_153;
    addr_140009150_142:
    *reinterpret_cast<void***>(r15_25) = reinterpret_cast<void**>(49);
    rdi71 = r15_25 + 1;
    fun_14000a2e0(rsi119, rsi119);
    v24 = 32;
    if (!r12_101) {
        goto addr_140009178_138;
    }
    addr_140009840_77:
    if (reinterpret_cast<int32_t>(v83) < reinterpret_cast<int32_t>(0)) {
        *reinterpret_cast<uint32_t*>(&rdi98) = v76 - v83;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
        goto addr_140008f80_97;
    } else {
        r10d87 = r10d87 + v83;
        *reinterpret_cast<uint32_t*>(&rdi98) = v76;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
        v76 = v83 + v76;
        goto addr_140008f80_97;
    }
    addr_140009888_88:
    *reinterpret_cast<void***>(rdi104) = rsi105->f0;
    rdi71 = r15_25 + 1;
    v201 = 1;
    __asm__("movapd xmm1, xmm0");
    ebx202 = v77 + 1;
    __asm__("divsd xmm1, xmm2");
    v135 = ebx202;
    __asm__("cvttsd2si eax, xmm1");
    __asm__("pxor xmm1, xmm1");
    __asm__("cvtsi2sd xmm1, eax");
    edx203 = static_cast<int32_t>(rax102 + 48);
    *reinterpret_cast<void***>(r15_25) = *reinterpret_cast<void***>(&edx203);
    __asm__("mulsd xmm1, xmm2");
    __asm__("subsd xmm0, xmm1");
    __asm__("ucomisd xmm0, xmm6");
    if (__intrinsic()) 
        goto addr_1400098d9_228;
    if (!ebx202) 
        goto addr_140009178_138;
    addr_1400098d9_228:
    *reinterpret_cast<void***>(rdi71) = rsi105->f4;
    rdi71 = rdi71 + 4;
    do {
        if (v201 == v83) 
            break;
        __asm__("mulsd xmm0, xmm3");
        ++rdi71;
        ++v201;
        __asm__("movapd xmm1, xmm0");
        __asm__("divsd xmm1, xmm2");
        __asm__("cvttsd2si eax, xmm1");
        __asm__("pxor xmm1, xmm1");
        __asm__("cvtsi2sd xmm1, eax");
        edx204 = static_cast<int32_t>(rax102 + 48);
        *reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&edx204);
        __asm__("mulsd xmm1, xmm2");
        __asm__("subsd xmm0, xmm1");
        __asm__("ucomisd xmm0, xmm6");
    } while (__intrinsic() || rdi71);
    goto addr_140009178_138;
    zf205 = reinterpret_cast<uint1_t>(v89 == 0);
    if (zf205) {
        __asm__("addsd xmm0, xmm0");
        __asm__("comisd xmm0, xmm2");
        if (reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf205))) {
            __asm__("ucomisd xmm0, xmm2");
            v24 = 16;
            if (__intrinsic()) 
                goto addr_140009178_138;
            if (!zf205) 
                goto addr_140009178_138;
            if (!(*reinterpret_cast<unsigned char*>(&rax102) & 1)) 
                goto addr_140009178_138;
        }
    } else {
        v24 = 16;
        if (v89 != 1) 
            goto addr_140009178_138;
    }
    *reinterpret_cast<uint32_t*>(&rax206) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff));
    *reinterpret_cast<uint32_t*>(&r9_207) = v77;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_207) + 4) = 0;
    goto addr_140008e30_243;
    addr_14000938c_90:
    if (!zf106 || 1) {
        addr_1400095fd_244:
        *reinterpret_cast<int32_t*>(&rsi119) = 0;
        *reinterpret_cast<int32_t*>(&rsi119 + 4) = 0;
        *reinterpret_cast<int32_t*>(&r12_101) = 0;
        *reinterpret_cast<int32_t*>(&r12_101 + 4) = 0;
        goto addr_140009602_136;
    } else {
        *reinterpret_cast<int32_t*>(&rsi119) = 0;
        *reinterpret_cast<int32_t*>(&rsi119 + 4) = 0;
        *reinterpret_cast<int32_t*>(&r12_101) = 0;
        *reinterpret_cast<int32_t*>(&r12_101 + 4) = 0;
        v135 = *reinterpret_cast<int32_t*>(&rbx103) + 2;
        goto addr_140009150_142;
    }
    addr_140008d18_95:
    __asm__("movapd xmm1, xmm0");
    __asm__("addsd xmm1, xmm0");
    __asm__("addsd xmm1, [rip+0x4830]");
    __asm__("movd rdx, xmm1");
    __asm__("movd rax, xmm1");
    *reinterpret_cast<uint32_t*>(&rdx60) = v83;
    zf208 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx60) == 0);
    below_or_equal209 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf208));
    if (zf208) {
        addr_140009310_246:
        __asm__("subsd xmm0, [rip+0x4248]");
        __asm__("movd xmm1, rax");
        __asm__("comisd xmm0, xmm1");
        if (!below_or_equal209) {
            v135 = 2;
            *reinterpret_cast<int32_t*>(&rsi119) = 0;
            *reinterpret_cast<int32_t*>(&rsi119 + 4) = 0;
            *reinterpret_cast<int32_t*>(&r12_101) = 0;
            *reinterpret_cast<int32_t*>(&r12_101 + 4) = 0;
            goto addr_140009150_142;
        } else {
            __asm__("xorpd xmm1, [rip+0x4241]");
            __asm__("comisd xmm1, xmm0");
            if (!below_or_equal209) 
                goto addr_1400095fd_244; else 
                goto addr_140009339_249;
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rsi210) = v83;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi210) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r9_207) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_207) + 4) = 0;
    }
    addr_140008d58_251:
    rdx60 = g14000d810;
    __asm__("movd xmm2, rax");
    *reinterpret_cast<int32_t*>(&rdi211) = v84;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi211) + 4) = 0;
    rax206 = reinterpret_cast<int64_t>(rsi210) - 1;
    rdi211->f0 = rsi210->f0;
    rdi212 = &rdi211->f4;
    rsi213 = reinterpret_cast<struct s35*>(&rsi210->f4);
    if (!*reinterpret_cast<int32_t*>(&rdi212)) {
        __asm__("movapd xmm4, xmm2");
        __asm__("movapd xmm1, xmm0");
        edx214 = 1;
        __asm__("mulsd xmm4, xmm3");
        *reinterpret_cast<void***>(r15_25) = rsi213->f0;
        rdi215 = r15_25 + 4;
        rsi216 = reinterpret_cast<struct s36*>(&rsi213->f4);
        ecx217 = 0;
        while (1) {
            __asm__("cvttsd2si eax, xmm1");
            if (*reinterpret_cast<uint32_t*>(&rax206)) {
                __asm__("pxor xmm3, xmm3");
                ecx217 = r8d92;
                __asm__("cvtsi2sd xmm3, eax");
                __asm__("subsd xmm1, xmm3");
            }
            ++rdi215;
            *reinterpret_cast<uint32_t*>(&rax206) = *reinterpret_cast<uint32_t*>(&rax206) + 48;
            *reinterpret_cast<void***>(rdi215 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&rax206);
            *reinterpret_cast<uint32_t*>(&rdx60) = edx214;
            if (*reinterpret_cast<uint32_t*>(&rdx60) == *reinterpret_cast<uint32_t*>(&rsi216)) 
                break;
            __asm__("mulsd xmm1, xmm2");
            edx214 = *reinterpret_cast<uint32_t*>(&rdx60) + 1;
            ecx217 = r8d92;
        }
        pf218 = __intrinsic();
        zf219 = reinterpret_cast<uint1_t>(*reinterpret_cast<signed char*>(&ecx217) == 0);
        below_or_equal220 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf219));
        if (zf219) 
            goto addr_140009bb9_264;
    } else {
        *rdi212 = rsi213->f0;
        rsi221 = reinterpret_cast<struct s36*>(&rsi213->f4);
        __asm__("cvttsd2si eax, xmm0");
        rdi71 = r15_25 + 1;
        __asm__("divsd xmm1, xmm3");
        __asm__("subsd xmm1, xmm2");
        __asm__("pxor xmm2, xmm2");
        __asm__("cvtsi2sd xmm2, eax");
        tmp32_222 = *reinterpret_cast<uint32_t*>(&rax206) + 48;
        eax223 = tmp32_222;
        pf218 = __intrinsic();
        zf219 = reinterpret_cast<uint1_t>(eax223 == 0);
        below_or_equal224 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp32_222 < *reinterpret_cast<uint32_t*>(&rax206)) | zf219);
        *reinterpret_cast<void***>(r15_25) = *reinterpret_cast<void***>(&eax223);
        __asm__("subsd xmm0, xmm2");
        __asm__("comisd xmm1, xmm0");
        if (!below_or_equal224) 
            goto addr_140009e1b_269; else 
            goto addr_140008dae_270;
    }
    addr_140009bbd_271:
    *reinterpret_cast<void***>(rdi215) = rsi216->f0;
    rdi71 = rdi215 + 4;
    __asm__("movapd xmm2, xmm4");
    __asm__("addsd xmm2, xmm0");
    __asm__("comisd xmm1, xmm2");
    if (!below_or_equal220) {
        addr_140008e30_243:
        while (rdx225 = rdi71 + 0xffffffffffffffff, *reinterpret_cast<void***>(&rax206) == 57) {
            if (rdx225 == r15_25) 
                goto addr_140009d6a_276;
            *reinterpret_cast<uint32_t*>(&rax206) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx225 + 0xffffffffffffffff));
            rdi71 = rdx225;
        }
    } else {
        __asm__("subsd xmm0, xmm4");
        __asm__("comisd xmm0, xmm1");
        if (below_or_equal220) {
            addr_140009339_249:
            v89 = 0;
            goto addr_140009348_67;
        } else {
            __asm__("ucomisd xmm1, xmm6");
            goto addr_140009be9_280;
        }
    }
    addr_140008e38_281:
    eax226 = *reinterpret_cast<uint32_t*>(&rax206) + 1;
    v24 = 32;
    *reinterpret_cast<void***>(rdx225) = *reinterpret_cast<void***>(&eax226);
    v135 = static_cast<uint32_t>(r9_207 + 1);
    goto addr_140009178_138;
    addr_140009d6a_276:
    *reinterpret_cast<void***>(r15_25) = reinterpret_cast<void**>(48);
    *reinterpret_cast<uint32_t*>(&r9_207) = *reinterpret_cast<uint32_t*>(&r9_207) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_207) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax206) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff));
    goto addr_140008e38_281;
    addr_140009be9_280:
    eax227 = pf218;
    if (!zf219) {
        eax227 = 1;
    }
    v24 = eax227 << 4;
    v135 = static_cast<uint32_t>(r9_207 + 1);
    goto addr_140009178_138;
    addr_140009bb9_264:
    __asm__("movapd xmm1, xmm0");
    goto addr_140009bbd_271;
    addr_140009e1b_269:
    __asm__("ucomisd xmm0, xmm6");
    goto addr_140009be9_280;
    addr_140008dae_270:
    *reinterpret_cast<void***>(rdi71) = rsi221->f0;
    rdi228 = rdi71 + 4;
    rsi229 = &rsi221->f4;
    *reinterpret_cast<void***>(rdi228) = *rsi229;
    rdi71 = rdi228 + 4;
    rsi230 = reinterpret_cast<void*>(rsi229 + 4);
    do {
        __asm__("movapd xmm2, xmm4");
        __asm__("subsd xmm2, xmm0");
        __asm__("comisd xmm1, xmm2");
        if (!below_or_equal224) 
            break;
        eax231 = v107 + 1;
        v107 = eax231;
        if (reinterpret_cast<int32_t>(eax231) >= *reinterpret_cast<int32_t*>(&rsi230)) 
            goto addr_140009339_249;
        __asm__("mulsd xmm0, xmm3");
        __asm__("pxor xmm2, xmm2");
        ++rdi71;
        __asm__("mulsd xmm1, xmm3");
        __asm__("cvttsd2si eax, xmm0");
        __asm__("cvtsi2sd xmm2, eax");
        tmp32_232 = eax231 + 48;
        eax233 = tmp32_232;
        pf218 = __intrinsic();
        zf219 = reinterpret_cast<uint1_t>(eax233 == 0);
        below_or_equal224 = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(tmp32_232 < eax231) | zf219);
        *reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&eax233);
        __asm__("subsd xmm0, xmm2");
        __asm__("comisd xmm1, xmm0");
    } while (below_or_equal224);
    goto addr_140009e1b_269;
    *reinterpret_cast<uint32_t*>(&rax206) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff));
    goto addr_140008e30_243;
    addr_140008d06_96:
    *reinterpret_cast<void***>(rdi71) = *rsi108;
    rdi71 = rdi71 + 4;
    rsi234 = reinterpret_cast<void*>(rsi108 + 4);
    __asm__("comisd xmm4, xmm0");
    if (reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf109))) 
        goto addr_140008d18_95;
    if (!*reinterpret_cast<int32_t*>(&rsi234)) {
        __asm__("movapd xmm1, xmm0");
        __asm__("addsd xmm1, xmm0");
        __asm__("addsd xmm1, [rip+0x4265]");
        __asm__("movd rdx, xmm1");
        __asm__("movd rax, xmm1");
        rdx235 = rdx60 >> 32;
        *reinterpret_cast<uint32_t*>(&rax236) = eax93;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax236) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx237) = *reinterpret_cast<int32_t*>(&rdx235) - 0x3400000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx237) + 4) = 0;
        rdx60 = rdx237 << 32;
        below_or_equal209 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>((rax236 | rdx60) == 0)));
        goto addr_140009310_246;
    } else {
        *reinterpret_cast<uint32_t*>(&rsi238) = v81;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi238) + 4) = 0;
        if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi238) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi238) == 0)) 
            goto addr_140009339_249;
        __asm__("mulsd xmm0, [rip+0x3906]");
        *reinterpret_cast<void***>(rdi71) = rsi238->f0;
        rsi210 = reinterpret_cast<struct s33*>(&rsi238->f4);
        *reinterpret_cast<uint32_t*>(&r9_207) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_207) + 4) = 0;
        __asm__("mulsd xmm1, xmm0");
        __asm__("addsd xmm1, [rip+0x38fc]");
        __asm__("movd rdx, xmm1");
        __asm__("movd rax, xmm1");
        goto addr_140008d58_251;
    }
    addr_140008c2d_57:
    if (reinterpret_cast<int32_t>(v7) <= reinterpret_cast<int32_t>(3)) {
        if (v7 != 2) {
            addr_140008e98_52:
            __asm__("pxor xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, r12d");
            __asm__("mulsd xmm0, [rip+0x468a]");
            __asm__("cvttsd2si ecx, xmm0");
            rax239 = fun_1400085e0(*reinterpret_cast<int32_t*>(&rcx70) + 3);
            r11d86 = r11d66;
            r10d87 = r10d73;
            r15_25 = rax239;
            if (reinterpret_cast<int32_t>(v54) < reinterpret_cast<int32_t>(0)) {
                *reinterpret_cast<uint32_t*>(&r12_240) = *reinterpret_cast<int32_t*>(&r12_27) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp39));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_240) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx60) = rbx9->f4;
                v12 = 0;
                eax96 = static_cast<uint32_t>(r12_240 + 1);
                v89 = 0;
                v83 = 0xffffffff;
                v81 = 0xffffffff;
                if (reinterpret_cast<int32_t>(v54 - *reinterpret_cast<uint32_t*>(&r12_240)) >= *reinterpret_cast<int32_t*>(&rdx60)) 
                    goto addr_140008f6d_74;
                goto addr_140008f32_79;
            }
        } else {
            v84 = 0;
            goto addr_140009283_308;
        }
    } else {
        if (v7 == 4) {
            v84 = 1;
            goto addr_140009283_308;
        } else {
            eax241 = v12 + v77;
            v81 = eax241;
            eax242 = eax241 + 1;
            v83 = eax242;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax242) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax242 == 0)) {
                v84 = 1;
                goto addr_140009996_62;
            } else {
                rax85 = fun_1400085e0(v83);
                v84 = 1;
                r11d86 = r11d66;
                r10d87 = r10d73;
                r15_25 = rax85;
                goto addr_140008c98_61;
            }
        }
    }
    if (reinterpret_cast<int32_t>(v77) <= reinterpret_cast<int32_t>(rbx9->f14)) {
        rax102 = reinterpret_cast<int32_t>(v77);
        v89 = 0;
        v83 = 0xffffffff;
        *reinterpret_cast<void***>(rdi71) = rsi6->f0;
        rdi104 = rdi71 + 4;
        rsi105 = reinterpret_cast<struct s32*>(&rsi6->f4);
        goto addr_140009888_88;
    } else {
        v12 = 0;
        v89 = 0;
        v83 = 0xffffffff;
        v81 = 0xffffffff;
        goto addr_140008f11_72;
    }
    addr_140009283_308:
    eax243 = 1;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v12) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v12 == 0))) {
        eax243 = v12;
    }
    v12 = eax243;
    ecx88 = eax243;
    v81 = eax243;
    v83 = eax243;
    goto addr_1400092a9_63;
    addr_140008af0_43:
    rcx70 = g14000d810;
    rdx60 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r11d66)));
    __asm__("movd xmm5, rdi");
    *reinterpret_cast<void***>(rdi71) = rsi6->f0;
    rdi71 = rdi71 + 4;
    rsi6 = reinterpret_cast<struct s26*>(&rsi6->f4);
    __asm__("comisd xmm0, xmm5");
    if (!below_or_equal74) 
        goto addr_140008b0e_324;
    v75 = 0;
    v76 = 0;
    if (reinterpret_cast<int32_t>(r10d73) < reinterpret_cast<int32_t>(0)) 
        goto addr_1400091d0_46; else 
        goto addr_140008e71_48;
    addr_140008b0e_324:
    v75 = 0;
    --r11d66;
    goto addr_140008bc8_45;
    addr_140008b88_20:
    *reinterpret_cast<void***>(r13_32 + 20) = reinterpret_cast<void**>(0);
    goto addr_1400089e1_32;
}

int32_t fun_14000b490();

int32_t fun_14000b488();

int32_t fun_14000af40(signed char* rcx, uint16_t dx, int32_t r8d, int32_t r9d);

int32_t fun_14000afd0(signed char* rcx, uint32_t edx, void* r8, void** r9) {
    signed char* r12_5;
    uint32_t ebx6;
    int32_t eax7;
    int32_t eax8;
    uint32_t edx9;
    int32_t eax10;
    int64_t rax11;

    r12_5 = rcx;
    ebx6 = edx;
    if (!rcx) {
        r12_5 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 48 + 43);
    }
    eax7 = fun_14000b490();
    eax8 = fun_14000b488();
    edx9 = *reinterpret_cast<uint16_t*>(&ebx6);
    eax10 = fun_14000af40(r12_5, *reinterpret_cast<uint16_t*>(&edx9), eax8, eax7);
    rax11 = eax10;
    return *reinterpret_cast<int32_t*>(&rax11);
}

int64_t fputc = 0x1156e;

void fun_14000b510() {
    goto fputc;
}

void fun_1400060f0(signed char cl, void** rdx, ...) {
    void** edx3;
    void** eax4;

    edx3 = *reinterpret_cast<void***>(rdx + 8);
    if (*reinterpret_cast<unsigned char*>(&edx3 + 1) & 64 || (eax4 = *reinterpret_cast<void***>(rdx + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 40)) > reinterpret_cast<signed char>(eax4))) {
        if (*reinterpret_cast<unsigned char*>(&edx3 + 1) & 32) {
            fun_14000b510();
            *reinterpret_cast<void***>(rdx + 36) = *reinterpret_cast<void***>(rdx + 36) + 1;
            return;
        } else {
            *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdx + 36))))) = cl;
            eax4 = *reinterpret_cast<void***>(rdx + 36);
        }
    }
    *reinterpret_cast<void***>(rdx + 36) = eax4 + 1;
    return;
}

void** fun_14000adb0(void** rcx, void* rdx);

void fun_1400063f0(void** rcx, void** rdx) {
    void** r12_3;
    void* rdx4;
    struct s0* rax5;
    void** edi6;
    void** edx7;
    void** rsi8;
    void** rbx9;
    void** eax10;
    int64_t rdx11;
    void** eax12;
    int64_t rax13;
    void* rdi14;
    void** rdi15;
    void** edx16;
    int32_t ecx17;
    int64_t rax18;
    void** edx19;

    r12_3 = rcx;
    rdx4 = reinterpret_cast<void*>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdx + 16))));
    if (!rcx) {
        r12_3 = reinterpret_cast<void**>("(null)");
    }
    if (*reinterpret_cast<int32_t*>(&rdx4) < 0) {
        rax5 = fun_14000b558(r12_3);
    } else {
        *reinterpret_cast<void***>(&rax5) = fun_14000adb0(r12_3, rdx4);
    }
    edi6 = *reinterpret_cast<void***>(&rax5);
    edx7 = *reinterpret_cast<void***>(rdx + 16);
    rsi8 = r12_3;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax5)) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 16))) {
        edx7 = edi6;
    }
    rbx9 = rdx;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 16)) >= reinterpret_cast<signed char>(0)) {
        edi6 = edx7;
    }
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 12)) > reinterpret_cast<signed char>(edi6)) {
        eax10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx + 12)) - reinterpret_cast<unsigned char>(edi6));
        *reinterpret_cast<void***>(rdx + 12) = eax10;
        *reinterpret_cast<void***>(&rdx11) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = 0;
        eax12 = *reinterpret_cast<void***>(rdx + 8);
        if (*reinterpret_cast<unsigned char*>(&eax12 + 1) & 4) {
            if (!edi6) {
                *reinterpret_cast<void***>(rbx9 + 12) = *reinterpret_cast<void***>(&rdx11) - 1;
                goto addr_140006371_15;
            }
        } else {
            *reinterpret_cast<void***>(rdx + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rdx11 - 1));
            do {
                fun_1400060f0(32, rbx9);
                *reinterpret_cast<void***>(&rax13) = *reinterpret_cast<void***>(rbx9 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
                *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax13 - 1));
            } while (*reinterpret_cast<void***>(&rax13));
            goto addr_1400062f3_19;
        }
    } else {
        *reinterpret_cast<void***>(rdx + 12) = reinterpret_cast<void**>(0xffffffff);
        goto addr_1400062f3_19;
    }
    addr_1400062fe_21:
    *reinterpret_cast<void***>(&rdi14) = edi6 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi14) + 4) = 0;
    rdi15 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rdi14) + reinterpret_cast<unsigned char>(rsi8));
    while (1) {
        if (*reinterpret_cast<unsigned char*>(&eax12 + 1) & 64 || (edx16 = *reinterpret_cast<void***>(rbx9 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx9 + 40)) > reinterpret_cast<signed char>(edx16))) {
            ecx17 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi8));
            if (!(*reinterpret_cast<unsigned char*>(&eax12 + 1) & 32)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx9)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx9 + 36))))) = *reinterpret_cast<signed char*>(&ecx17);
                edx16 = *reinterpret_cast<void***>(rbx9 + 36);
            } else {
                fun_14000b510();
                edx16 = *reinterpret_cast<void***>(rbx9 + 36);
            }
        }
        *reinterpret_cast<void***>(rbx9 + 36) = edx16 + 1;
        if (rdi15 == rsi8) 
            break;
        eax12 = *reinterpret_cast<void***>(rbx9 + 8);
        ++rsi8;
    }
    while (*reinterpret_cast<void***>(&rax18) = *reinterpret_cast<void***>(rbx9 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax18) + 4) = 0, *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax18 - 1)), !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax18)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax18) == 0))) {
        eax12 = *reinterpret_cast<void***>(rbx9 + 8);
        addr_140006371_15:
        if (*reinterpret_cast<unsigned char*>(&eax12 + 1) & 64 || (edx19 = *reinterpret_cast<void***>(rbx9 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx9 + 40)) > reinterpret_cast<signed char>(edx19))) {
            if (!(*reinterpret_cast<unsigned char*>(&eax12 + 1) & 32)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx9)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx9 + 36))))) = 32;
                edx19 = *reinterpret_cast<void***>(rbx9 + 36);
            } else {
                fun_14000b510();
                edx19 = *reinterpret_cast<void***>(rbx9 + 36);
            }
        }
        *reinterpret_cast<void***>(rbx9 + 36) = edx19 + 1;
    }
    addr_14000639c_34:
    return;
    addr_1400062f3_19:
    if (!edi6) {
        *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xfffffffe);
        goto addr_14000639c_34;
    } else {
        eax12 = *reinterpret_cast<void***>(rbx9 + 8);
        goto addr_1400062fe_21;
    }
}

void** fun_14000adb0(void** rcx, void* rdx) {
    void* r8_3;
    void** rax4;
    void* rax5;

    *reinterpret_cast<int32_t*>(&r8_3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_3) + 4) = 0;
    rax4 = rcx;
    if (rdx) {
        do {
            if (!*reinterpret_cast<void***>(rax4)) 
                break;
            ++rax4;
            r8_3 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rax4) - reinterpret_cast<unsigned char>(rcx));
        } while (reinterpret_cast<uint64_t>(r8_3) < reinterpret_cast<uint64_t>(rdx));
    }
    rax5 = r8_3;
    return *reinterpret_cast<void***>(&rax5);
}

void fun_1400062c0(signed char* rcx, void** edx, void** r8) {
    void** edi4;
    void** edx5;
    signed char* rsi6;
    void** rbx7;
    void** eax8;
    int64_t rdx9;
    void** eax10;
    int64_t rax11;
    void* rdi12;
    signed char* rdi13;
    void** edx14;
    int32_t ecx15;
    int64_t rax16;
    void** edx17;

    edi4 = edx;
    edx5 = *reinterpret_cast<void***>(r8 + 16);
    rsi6 = rcx;
    if (reinterpret_cast<signed char>(edx) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(r8 + 16))) {
        edx5 = edi4;
    }
    rbx7 = r8;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r8 + 16)) >= reinterpret_cast<signed char>(0)) {
        edi4 = edx5;
    }
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r8 + 12)) > reinterpret_cast<signed char>(edi4)) {
        eax8 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r8 + 12)) - reinterpret_cast<unsigned char>(edi4));
        *reinterpret_cast<void***>(r8 + 12) = eax8;
        *reinterpret_cast<void***>(&rdx9) = eax8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
        eax10 = *reinterpret_cast<void***>(r8 + 8);
        if (*reinterpret_cast<unsigned char*>(&eax10 + 1) & 4) {
            if (!edi4) {
                *reinterpret_cast<void***>(rbx7 + 12) = *reinterpret_cast<void***>(&rdx9) - 1;
                goto addr_140006371_9;
            }
        } else {
            *reinterpret_cast<void***>(r8 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rdx9 - 1));
            do {
                fun_1400060f0(32, rbx7);
                *reinterpret_cast<void***>(&rax11) = *reinterpret_cast<void***>(rbx7 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
                *reinterpret_cast<void***>(rbx7 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax11 - 1));
            } while (*reinterpret_cast<void***>(&rax11));
            goto addr_1400062f3_13;
        }
    } else {
        *reinterpret_cast<void***>(r8 + 12) = reinterpret_cast<void**>(0xffffffff);
        goto addr_1400062f3_13;
    }
    addr_1400062fe_15:
    *reinterpret_cast<void***>(&rdi12) = edi4 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi12) + 4) = 0;
    rdi13 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rdi12) + reinterpret_cast<int64_t>(rsi6));
    while (1) {
        if (*reinterpret_cast<unsigned char*>(&eax10 + 1) & 64 || (edx14 = *reinterpret_cast<void***>(rbx7 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx7 + 40)) > reinterpret_cast<signed char>(edx14))) {
            ecx15 = *rsi6;
            if (!(*reinterpret_cast<unsigned char*>(&eax10 + 1) & 32)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx7 + 36))))) = *reinterpret_cast<signed char*>(&ecx15);
                edx14 = *reinterpret_cast<void***>(rbx7 + 36);
            } else {
                fun_14000b510();
                edx14 = *reinterpret_cast<void***>(rbx7 + 36);
            }
        }
        *reinterpret_cast<void***>(rbx7 + 36) = edx14 + 1;
        if (rdi13 == rsi6) 
            break;
        eax10 = *reinterpret_cast<void***>(rbx7 + 8);
        ++rsi6;
    }
    while (*reinterpret_cast<void***>(&rax16) = *reinterpret_cast<void***>(rbx7 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0, *reinterpret_cast<void***>(rbx7 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax16 - 1)), !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax16)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax16) == 0))) {
        eax10 = *reinterpret_cast<void***>(rbx7 + 8);
        addr_140006371_9:
        if (*reinterpret_cast<unsigned char*>(&eax10 + 1) & 64 || (edx17 = *reinterpret_cast<void***>(rbx7 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx7 + 40)) > reinterpret_cast<signed char>(edx17))) {
            if (!(*reinterpret_cast<unsigned char*>(&eax10 + 1) & 32)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx7 + 36))))) = 32;
                edx17 = *reinterpret_cast<void***>(rbx7 + 36);
            } else {
                fun_14000b510();
                edx17 = *reinterpret_cast<void***>(rbx7 + 36);
            }
        }
        *reinterpret_cast<void***>(rbx7 + 36) = edx17 + 1;
    }
    addr_14000639c_28:
    return;
    addr_1400062f3_13:
    if (!edi4) {
        *reinterpret_cast<void***>(rbx7 + 12) = reinterpret_cast<void**>(0xfffffffe);
        goto addr_14000639c_28;
    } else {
        eax10 = *reinterpret_cast<void***>(rbx7 + 8);
        goto addr_1400062fe_15;
    }
}

int64_t fun_140005f70(void** rcx, ...) {
    int64_t v2;
    int64_t rax3;
    void* rcx4;
    uint64_t rax5;
    uint64_t rax6;
    uint64_t* rcx7;

    v2 = rax3;
    rcx4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 + 24);
    if (rax5 >= 0x1000) {
        do {
            rcx4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rcx4) - 0x1000);
            rax6 = rax6 - 0x1000;
        } while (rax6 > 0x1000);
    }
    rcx7 = reinterpret_cast<uint64_t*>(reinterpret_cast<int64_t>(rcx4) - rax6);
    *rcx7 = *rcx7;
    return v2;
}

int64_t memset = 0x115aa;

void** fun_14000b540(void** rcx, ...) {
    goto memset;
}

void fun_140006150(uint16_t* rcx, void** edx, void** r8, void** r9, int64_t a5) {
    void* rsp6;
    void* r13_7;
    signed char* r12_8;
    void** edi9;
    void** rbx10;
    uint16_t* rbp11;
    void** edx12;
    void** eax13;
    int64_t rax14;
    uint32_t edx15;
    int32_t eax16;
    void* rax17;
    signed char* rsi18;
    signed char* r14_19;
    void** edx20;
    void** eax21;
    int32_t ecx22;
    signed char v23;
    int64_t rax24;
    int64_t rax25;

    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 64);
    r13_7 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) + 40);
    r12_8 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp6) + 48);
    edi9 = edx;
    rbx10 = r8;
    rbp11 = rcx;
    fun_14000afd0(r12_8, 0, r13_7, r9);
    edx12 = *reinterpret_cast<void***>(rbx10 + 16);
    if (reinterpret_cast<signed char>(edi9) <= reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx10 + 16))) {
        edx12 = edi9;
    }
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx10 + 16)) >= reinterpret_cast<signed char>(0)) {
        edi9 = edx12;
    }
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx10 + 12)) > reinterpret_cast<signed char>(edi9)) {
        eax13 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx10 + 12)) - reinterpret_cast<unsigned char>(edi9));
        *reinterpret_cast<void***>(rbx10 + 12) = eax13;
        if (*reinterpret_cast<unsigned char*>(rbx10 + 9) & 4) {
            if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi9 == 0))) {
                *reinterpret_cast<void***>(rbx10 + 12) = eax13 - 1;
                goto addr_140006248_9;
            }
        } else {
            *reinterpret_cast<void***>(rbx10 + 12) = eax13 - 1;
            do {
                fun_1400060f0(32, rbx10, 32, rbx10);
                *reinterpret_cast<void***>(&rax14) = *reinterpret_cast<void***>(rbx10 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
                *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax14 - 1));
            } while (*reinterpret_cast<void***>(&rax14));
            goto addr_14000619e_13;
        }
    } else {
        *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(0xffffffff);
        goto addr_14000619e_13;
    }
    do {
        addr_1400061b0_15:
        edx15 = *rbp11;
        ++rbp11;
        eax16 = fun_14000afd0(r12_8, edx15, r13_7, r9);
        if (reinterpret_cast<uint1_t>(eax16 < 0) | reinterpret_cast<uint1_t>(eax16 == 0)) 
            break;
        *reinterpret_cast<int32_t*>(&rax17) = eax16 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
        rsi18 = r12_8;
        r14_19 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(r12_8) + reinterpret_cast<int64_t>(rax17) + 1);
        do {
            addr_1400061f6_17:
            edx20 = *reinterpret_cast<void***>(rbx10 + 8);
            ++rsi18;
            if (*reinterpret_cast<unsigned char*>(&edx20 + 1) & 64 || (eax21 = *reinterpret_cast<void***>(rbx10 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx10 + 40)) > reinterpret_cast<signed char>(eax21))) {
                ecx22 = v23;
                if (!(*reinterpret_cast<unsigned char*>(&edx20 + 1) & 32)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx10)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx10 + 36))))) = *reinterpret_cast<signed char*>(&ecx22);
                    eax21 = *reinterpret_cast<void***>(rbx10 + 36);
                } else {
                    fun_14000b510();
                    *reinterpret_cast<void***>(rbx10 + 36) = *reinterpret_cast<void***>(rbx10 + 36) + 1;
                    if (rsi18 != r14_19) 
                        goto addr_1400061f6_17; else 
                        break;
                }
            }
            *reinterpret_cast<void***>(rbx10 + 36) = eax21 + 1;
        } while (rsi18 != r14_19);
        --edi9;
    } while (edi9);
    goto addr_140006235_23;
    while (*reinterpret_cast<void***>(&rax24) = *reinterpret_cast<void***>(rbx10 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0, *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax24 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax24)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax24) == 0))) {
        addr_140006248_9:
        fun_1400060f0(32, rbx10, 32, rbx10);
    }
    addr_140006262_25:
    return;
    addr_140006235_23:
    *reinterpret_cast<void***>(&rax25) = *reinterpret_cast<void***>(rbx10 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
    *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax25 - 1));
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax25)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax25) == 0))) {
        goto addr_140006248_9;
    }
    addr_14000619e_13:
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi9 == 0)) {
        *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(0xfffffffe);
        goto addr_140006262_25;
    } else {
        goto addr_1400061b0_15;
    }
}

void fun_140006d90(void** rcx, void** rdx, void** r8);

void fun_140006ef0(int32_t ecx, void** rdx, void** r8, void** r9) {
    void** eax5;
    int32_t ebp6;
    void** rdi7;
    int64_t rsi8;
    void** rbx9;
    uint1_t zf10;
    void** edx11;
    void** eax12;
    void** edx13;
    int64_t rcx14;
    uint64_t rcx15;
    uint32_t edx16;
    void** edx17;
    void** eax18;
    int64_t rax19;
    int64_t rax20;
    uint16_t* rbp21;
    void** eax22;
    int64_t rax23;
    uint32_t eax24;
    int32_t ecx25;
    uint32_t eax26;
    int32_t ecx27;
    int64_t v28;
    int64_t rax29;

    eax5 = *reinterpret_cast<void***>(r9 + 12);
    ebp6 = ecx;
    rdi7 = rdx;
    *reinterpret_cast<void***>(&rsi8) = r8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi8) + 4) = 0;
    rbx9 = r9;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r8 == 0)) {
        zf10 = reinterpret_cast<uint1_t>(eax5 == 0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax5) < reinterpret_cast<signed char>(0)) | zf10)) {
            --eax5;
            goto addr_1400070cb_4;
        }
        if (zf10) {
            addr_1400070cb_4:
            edx11 = *reinterpret_cast<void***>(rbx9 + 16);
            if (reinterpret_cast<signed char>(eax5) > reinterpret_cast<signed char>(edx11)) {
                addr_140007069_6:
                eax12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) - reinterpret_cast<unsigned char>(edx11));
                *reinterpret_cast<void***>(rbx9 + 12) = eax12;
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx11 == 0)) || (edx13 = *reinterpret_cast<void***>(rbx9 + 8), !!(*reinterpret_cast<unsigned char*>(&edx13 + 1) & 8))) {
                    --eax12;
                    *reinterpret_cast<void***>(rbx9 + 12) = eax12;
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0)) 
                        goto addr_140006f50_8;
                    if (!(*reinterpret_cast<unsigned char*>(rbx9 + 9) & 16)) 
                        goto addr_140006f50_8;
                    if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
                        goto addr_140006f50_8;
                } else {
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0)) 
                        goto addr_140006f54_13;
                    if (!(*reinterpret_cast<unsigned char*>(&edx13 + 1) & 16)) 
                        goto addr_140006f54_13;
                    if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
                        goto addr_140006f54_13;
                }
            } else {
                *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xffffffff);
                goto addr_1400070d9_18;
            }
        } else {
            *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xffffffff);
            goto addr_1400070d9_18;
        }
    } else {
        if (reinterpret_cast<signed char>(eax5) < reinterpret_cast<signed char>(r8)) 
            goto addr_140006f19_21;
        eax5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) - reinterpret_cast<unsigned char>(r8));
        *reinterpret_cast<void***>(r9 + 12) = eax5;
        if (reinterpret_cast<signed char>(eax5) < reinterpret_cast<signed char>(0)) 
            goto addr_140006f19_21;
        edx11 = *reinterpret_cast<void***>(r9 + 16);
        if (reinterpret_cast<signed char>(eax5) > reinterpret_cast<signed char>(edx11)) 
            goto addr_140007069_6;
        addr_140006f19_21:
        *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xffffffff);
        if (!(*reinterpret_cast<unsigned char*>(rbx9 + 9) & 16)) 
            goto addr_140006f9a_24;
        if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
            goto addr_140006f9a_24;
        eax12 = reinterpret_cast<void**>(0xffffffff);
    }
    *reinterpret_cast<int32_t*>(&rcx14) = static_cast<int32_t>(rsi8 + 2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx14) + 4) = 0;
    rcx15 = reinterpret_cast<uint64_t>(rcx14 * 0xaaaaaaab) >> 33;
    edx16 = static_cast<int32_t>(rcx15 - 1) - reinterpret_cast<unsigned char>(eax12);
    if (*reinterpret_cast<int32_t*>(&rcx15) != 1) {
        do {
            if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax12) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax12 == 0))) 
                break;
            --eax12;
            *reinterpret_cast<void***>(rbx9 + 12) = eax12;
        } while (edx16 + reinterpret_cast<unsigned char>(eax12));
        goto addr_140006f50_8;
    } else {
        addr_140006f50_8:
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax12) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax12 == 0)) {
            addr_140006f9a_24:
            if (ebp6) {
                addr_1400070e1_30:
                fun_1400060f0(45, rbx9);
                goto addr_140006fb7_31;
            } else {
                addr_140006fa2_32:
                edx17 = *reinterpret_cast<void***>(rbx9 + 8);
                goto addr_140006fa5_33;
            }
        } else {
            addr_140006f54_13:
            if (ebp6) {
                eax18 = eax12 - 1;
                *reinterpret_cast<void***>(rbx9 + 12) = eax18;
                if (!eax18) 
                    goto addr_1400070e1_30;
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx9 + 8)) & 0x600)) 
                    goto addr_140006f78_36; else 
                    goto addr_140007155_37;
            } else {
                edx17 = *reinterpret_cast<void***>(rbx9 + 8);
                if (!(reinterpret_cast<unsigned char>(edx17) & 0x1c0)) {
                    if (*reinterpret_cast<unsigned char*>(&edx17 + 1) & 6 || (*reinterpret_cast<void***>(&rax19) = *reinterpret_cast<void***>(rbx9 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0, *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax19 - 1)), reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax19)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax19) == 0))) {
                        addr_140006fa5_33:
                        if (*reinterpret_cast<unsigned char*>(&edx17 + 1) & 1) {
                            fun_1400060f0(43, rbx9);
                            goto addr_140006fb7_31;
                        } else {
                            if (reinterpret_cast<unsigned char>(edx17) & 64) {
                                fun_1400060f0(32, rbx9);
                                goto addr_140006fb7_31;
                            }
                        }
                    } else {
                        goto addr_140006f80_44;
                    }
                } else {
                    eax18 = eax12 - 1;
                    *reinterpret_cast<void***>(rbx9 + 12) = eax18;
                    if (!eax18) 
                        goto addr_140006fa5_33;
                    if (*reinterpret_cast<unsigned char*>(&edx17 + 1) & 6) 
                        goto addr_140006fa5_33; else 
                        goto addr_140006f78_36;
                }
            }
        }
    }
    goto addr_140006f9a_24;
    addr_140006fb7_31:
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx9 + 12)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx9 + 12) == 0)) && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx9 + 8)) & 0x600) == 0x200) {
        *reinterpret_cast<void***>(rbx9 + 12) = *reinterpret_cast<void***>(rbx9 + 12) - 1;
        do {
            fun_1400060f0(48, rbx9);
            *reinterpret_cast<void***>(&rax20) = *reinterpret_cast<void***>(rbx9 + 12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
            *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax20 - 1));
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax20)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax20) == 0)));
    }
    rbp21 = reinterpret_cast<uint16_t*>(rbx9 + 32);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0)) {
        fun_1400060f0(48, rbx9);
        eax22 = *reinterpret_cast<void***>(rbx9 + 16);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax22 == 0)) || *reinterpret_cast<unsigned char*>(rbx9 + 9) & 8) {
            fun_140006d90(rbx9, rbx9, r8);
            if (!*reinterpret_cast<void***>(&rsi8)) {
                addr_140007123_54:
                while (*reinterpret_cast<void***>(&rax23) = *reinterpret_cast<void***>(rbx9 + 16), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0, *reinterpret_cast<void***>(rbx9 + 16) = reinterpret_cast<void**>(static_cast<uint32_t>(rax23 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax23)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax23) == 0))) {
                    eax24 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi7));
                    ecx25 = 48;
                    if (*reinterpret_cast<signed char*>(&eax24)) {
                        ++rdi7;
                        ecx25 = *reinterpret_cast<signed char*>(&eax24);
                    }
                    fun_1400060f0(*reinterpret_cast<signed char*>(&ecx25), rbx9, *reinterpret_cast<signed char*>(&ecx25), rbx9);
                }
            } else {
                eax22 = *reinterpret_cast<void***>(rbx9 + 16);
                goto addr_1400071ab_59;
            }
            return;
        }
        if (*reinterpret_cast<void***>(&rsi8)) {
            addr_1400071ab_59:
            *reinterpret_cast<void***>(rbx9 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rsi8)));
        } else {
            goto addr_1400070ad_63;
        }
    } else {
        while (1) {
            eax26 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi7));
            ecx27 = 48;
            if (*reinterpret_cast<signed char*>(&eax26)) {
                ++rdi7;
                ecx27 = *reinterpret_cast<signed char*>(&eax26);
            }
            fun_1400060f0(*reinterpret_cast<signed char*>(&ecx27), rbx9, *reinterpret_cast<signed char*>(&ecx27), rbx9);
            *reinterpret_cast<void***>(&rsi8) = *reinterpret_cast<void***>(&rsi8) - 1;
            if (!*reinterpret_cast<void***>(&rsi8)) 
                break;
            if (!(*reinterpret_cast<unsigned char*>(rbx9 + 9) & 16)) 
                continue;
            if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
                continue;
            if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rsi8)) * 0xaaaaaaab > 0x55555555) 
                continue;
            r8 = rbx9;
            fun_140006150(rbp21, 1, r8, r9, v28);
        }
        eax22 = *reinterpret_cast<void***>(rbx9 + 16);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax22 == 0))) 
            goto addr_1400070f8_73;
        if (*reinterpret_cast<unsigned char*>(rbx9 + 9) & 8) 
            goto addr_1400070f8_73; else 
            goto addr_1400070ad_63;
    }
    do {
        fun_1400060f0(48, rbx9);
        *reinterpret_cast<void***>(&rsi8) = *reinterpret_cast<void***>(&rsi8) + 1;
    } while (*reinterpret_cast<void***>(&rsi8));
    goto addr_140007123_54;
    addr_1400070ad_63:
    *reinterpret_cast<void***>(rbx9 + 16) = eax22 - 1;
    return;
    addr_1400070f8_73:
    fun_140006d90(rbx9, rbx9, r8);
    goto addr_140007123_54;
    addr_140006f78_36:
    *reinterpret_cast<void***>(rbx9 + 12) = eax18 - 1;
    do {
        addr_140006f80_44:
        fun_1400060f0(32, rbx9);
        *reinterpret_cast<void***>(&rax29) = *reinterpret_cast<void***>(rbx9 + 12);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
        *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax29 - 1));
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax29)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax29) == 0)));
    goto addr_140006f9a_24;
    addr_140007155_37:
    fun_1400060f0(45, rbx9);
    goto addr_140006fb7_31;
    addr_1400070d9_18:
    if (!ebp6) 
        goto addr_140006fa2_32; else 
        goto addr_1400070e1_30;
}

struct s38 {
    signed char[32] pad32;
    void** f20;
};

void fun_140006a00(void** rcx, void** rdx) {
    void** eax3;
    void** r14d4;
    void** r12d5;
    void** rbx6;
    void** eax7;
    int64_t rdx8;
    uint64_t rdx9;
    void** esi10;
    int64_t rax11;
    struct s38* rsp12;
    void** r13_13;
    void** rdi14;
    void** r8d15;
    void** rcx16;
    int64_t* rsp17;
    void** r8_18;
    uint32_t r10d19;
    void* rax20;
    void** esi21;
    int64_t rax22;
    int64_t* rsp23;
    int64_t rax24;
    int64_t rdx25;
    void* rax26;
    void** rcx27;
    int64_t* rsp28;
    void** rsi29;
    void** eax30;
    int32_t ecx31;
    int64_t* rsp32;
    void** eax33;
    void** edx34;
    void** ecx35;
    void** edx36;
    int64_t* rsp37;
    void** rdx38;
    void*** r15_39;
    void* rax40;
    int32_t eax41;
    void* rax42;

    eax3 = reinterpret_cast<void**>(0);
    r14d4 = *reinterpret_cast<void***>(rdx + 16);
    r12d5 = *reinterpret_cast<void***>(rdx + 8);
    if (reinterpret_cast<signed char>(r14d4) >= reinterpret_cast<signed char>(0)) {
        eax3 = r14d4;
    }
    rbx6 = rdx;
    eax7 = eax3 + 23;
    if (reinterpret_cast<unsigned char>(r12d5) & 0x1000 && *reinterpret_cast<uint16_t*>(rdx + 32)) {
        *reinterpret_cast<void***>(&rdx8) = eax7;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx8) + 4) = 0;
        rdx9 = reinterpret_cast<uint64_t>(rdx8 * 0xaaaaaaab) >> 33;
        eax7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rdx9)));
    }
    esi10 = *reinterpret_cast<void***>(rbx6 + 12);
    if (reinterpret_cast<signed char>(esi10) >= reinterpret_cast<signed char>(eax7)) {
    }
    rax11 = fun_140005f70(rcx);
    rsp12 = reinterpret_cast<struct s38*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - rax11);
    r13_13 = reinterpret_cast<void**>(&rsp12->f20);
    if (*reinterpret_cast<unsigned char*>(&r12d5) & 0x80) {
        if (reinterpret_cast<signed char>(rcx) < reinterpret_cast<signed char>(0)) {
            rcx = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rcx));
            goto addr_140006a7f_10;
        } else {
            *reinterpret_cast<unsigned char*>(&r12d5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12d5) & 0x7f);
            *reinterpret_cast<void***>(rbx6 + 8) = r12d5;
        }
    }
    if (!rcx) {
        rdi14 = r13_13;
        r8d15 = r14d4;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d4 == 0))) {
            addr_140006b1a_14:
            rcx16 = rdi14;
            rdi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi14) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d15))));
            rsp17 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp12) - 8);
            *rsp17 = 0x140006b30;
            fun_14000b540(rcx16, rcx16);
            rsp12 = reinterpret_cast<struct s38*>(rsp17 + 1);
        } else {
            goto addr_140006cb9_16;
        }
    } else {
        addr_140006a7f_10:
        r8_18 = r13_13;
        r10d19 = reinterpret_cast<unsigned char>(r12d5) & 0x1000;
        goto addr_140006aa0_17;
    }
    addr_140006b30_18:
    if (r13_13 == rdi14) {
        addr_140006cc8_19:
        *reinterpret_cast<void***>(rdi14) = reinterpret_cast<void**>(48);
        ++rdi14;
        goto addr_140006b39_20;
    } else {
        addr_140006b39_20:
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi10 == 0)) && (rax20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi14) - reinterpret_cast<unsigned char>(r13_13)), esi21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi10) - *reinterpret_cast<uint32_t*>(&rax20)), *reinterpret_cast<void***>(rbx6 + 12) = esi21, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi21) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi21 == 0)))) {
            if (reinterpret_cast<unsigned char>(r12d5) & 0x1c0) {
                *reinterpret_cast<void***>(rbx6 + 12) = esi21 - 1;
                if (reinterpret_cast<signed char>(r14d4) >= reinterpret_cast<signed char>(0)) 
                    goto addr_140006b62_23;
            } else {
                if (reinterpret_cast<signed char>(r14d4) >= reinterpret_cast<signed char>(0)) 
                    goto addr_140006b62_23;
            }
            if ((reinterpret_cast<unsigned char>(r12d5) & 0x600) != 0x200) {
                addr_140006b62_23:
                if (!(reinterpret_cast<unsigned char>(r12d5) & 0x400)) {
                    *reinterpret_cast<void***>(&rax22) = *reinterpret_cast<void***>(rbx6 + 12);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
                    *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax22 - 1));
                    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax22)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax22) == 0))) {
                        do {
                            rsp23 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp12) - 8);
                            *rsp23 = 0x140006d55;
                            fun_1400060f0(32, rbx6, 32, rbx6);
                            rsp12 = reinterpret_cast<struct s38*>(rsp23 + 1);
                            *reinterpret_cast<void***>(&rax24) = *reinterpret_cast<void***>(rbx6 + 12);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0;
                            *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax24 - 1));
                        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax24)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax24) == 0)));
                        r12d5 = *reinterpret_cast<void***>(rbx6 + 8);
                    }
                }
            } else {
                *reinterpret_cast<void***>(&rdx25) = *reinterpret_cast<void***>(rbx6 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
                *reinterpret_cast<void***>(&rax26) = reinterpret_cast<void**>(static_cast<uint32_t>(rdx25 - 1));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
                *reinterpret_cast<void***>(rbx6 + 12) = *reinterpret_cast<void***>(&rax26);
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx25)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rdx25) == 0))) {
                    rcx27 = rdi14;
                    rdi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi14) + (reinterpret_cast<int64_t>(rax26) + 1));
                    rsp28 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp12) - 8);
                    *rsp28 = 0x140006d22;
                    fun_14000b540(rcx27, rcx27);
                    rsp12 = reinterpret_cast<struct s38*>(rsp28 + 1);
                    *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(0xffffffff);
                }
            }
        }
    }
    if (!(*reinterpret_cast<unsigned char*>(&r12d5) & 0x80)) {
        if (!(reinterpret_cast<unsigned char>(r12d5) & 0x100)) {
            rsi29 = rdi14;
            if (*reinterpret_cast<unsigned char*>(&r12d5) & 64) {
                *reinterpret_cast<void***>(rdi14) = reinterpret_cast<void**>(32);
                ++rsi29;
            }
        } else {
            *reinterpret_cast<void***>(rdi14) = reinterpret_cast<void**>(43);
            rsi29 = rdi14 + 1;
        }
    } else {
        *reinterpret_cast<void***>(rdi14) = reinterpret_cast<void**>(45);
        rsi29 = rdi14 + 1;
    }
    if (reinterpret_cast<unsigned char>(r13_13) < reinterpret_cast<unsigned char>(rsi29)) {
        while (1) {
            --rsi29;
            if (reinterpret_cast<unsigned char>(r12d5) & 0x4000 || (eax30 = *reinterpret_cast<void***>(rbx6 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx6 + 40)) > reinterpret_cast<signed char>(eax30))) {
                ecx31 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi29));
                if (!(reinterpret_cast<unsigned char>(r12d5) & 0x2000)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx6 + 36))))) = *reinterpret_cast<signed char*>(&ecx31);
                    eax30 = *reinterpret_cast<void***>(rbx6 + 36);
                    goto addr_140006b9a_43;
                } else {
                    rsp32 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp12) - 8);
                    *rsp32 = 0x140006bd2;
                    fun_14000b510();
                    rsp12 = reinterpret_cast<struct s38*>(rsp32 + 1);
                    *reinterpret_cast<void***>(rbx6 + 36) = *reinterpret_cast<void***>(rbx6 + 36) + 1;
                    if (r13_13 == rsi29) 
                        break;
                }
            } else {
                addr_140006b9a_43:
                *reinterpret_cast<void***>(rbx6 + 36) = eax30 + 1;
                if (r13_13 == rsi29) 
                    break;
            }
            r12d5 = *reinterpret_cast<void***>(rbx6 + 8);
        }
    }
    eax33 = *reinterpret_cast<void***>(rbx6 + 12);
    while (edx34 = eax33, --eax33, *reinterpret_cast<void***>(rbx6 + 12) = eax33, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx34) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx34 == 0))) {
        ecx35 = *reinterpret_cast<void***>(rbx6 + 8);
        if (*reinterpret_cast<unsigned char*>(&ecx35 + 1) & 64 || (edx36 = *reinterpret_cast<void***>(rbx6 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx6 + 40)) > reinterpret_cast<signed char>(edx36))) {
            if (!(*reinterpret_cast<unsigned char*>(&ecx35 + 1) & 32)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx6 + 36))))) = 32;
                edx36 = *reinterpret_cast<void***>(rbx6 + 36);
                eax33 = *reinterpret_cast<void***>(rbx6 + 12);
            } else {
                rsp37 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp12) - 8);
                *rsp37 = 0x140006c2a;
                fun_14000b510();
                rsp12 = reinterpret_cast<struct s38*>(rsp37 + 1);
                edx36 = *reinterpret_cast<void***>(rbx6 + 36);
                eax33 = *reinterpret_cast<void***>(rbx6 + 12);
            }
        }
        *reinterpret_cast<void***>(rbx6 + 36) = edx36 + 1;
    }
    return;
    addr_140006cb9_16:
    if (!r14d4) 
        goto addr_140006b39_20;
    goto addr_140006cc8_19;
    addr_140006aa0_17:
    while (rdi14 = r8_18 + 1, rdx38 = reinterpret_cast<void**>(__intrinsic() >> 3), r15_39 = reinterpret_cast<void***>(rdx38 + reinterpret_cast<unsigned char>(rdx38) * 4), rax40 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx) - (reinterpret_cast<uint64_t>(r15_39) + reinterpret_cast<uint64_t>(r15_39))), eax41 = *reinterpret_cast<int32_t*>(&rax40) + 48, *reinterpret_cast<void***>(r8_18) = *reinterpret_cast<void***>(&eax41), reinterpret_cast<unsigned char>(rcx) > reinterpret_cast<unsigned char>(9)) {
        if (r13_13 != rdi14 && (r10d19 && (*reinterpret_cast<uint16_t*>(rbx6 + 32) && (reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdi14) - reinterpret_cast<unsigned char>(r13_13)) & 0x8000000000000003) == 3))) {
            *reinterpret_cast<void***>(r8_18 + 1) = reinterpret_cast<void**>(44);
            rdi14 = r8_18 + 2;
        }
        rcx = rdx38;
        r8_18 = rdi14;
    }
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d4 == 0)) {
        if (r13_13 != rdi14) 
            goto addr_140006b39_20; else 
            goto addr_140006cb9_16;
    } else {
        rax42 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi14) - reinterpret_cast<unsigned char>(r13_13));
        r8d15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14d4) - *reinterpret_cast<uint32_t*>(&rax42));
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8d15) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r8d15 == 0)) 
            goto addr_140006b30_18; else 
            goto addr_140006b1a_14;
    }
}

struct s39 {
    uint64_t f0;
    int32_t f8;
};

void** fun_140006000(int32_t ecx, struct s39* rdx, void** r8d, void* r9) {
    void* rsp5;
    uint64_t rax6;
    int64_t rdx7;
    int64_t r10_8;
    int64_t rcx9;
    int32_t edx10;
    uint32_t edx11;
    uint64_t rdx12;
    uint32_t ecx13;
    uint64_t rdx14;
    uint32_t* v15;
    void** rax16;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x68);
    rax6 = rdx->f0;
    *reinterpret_cast<int32_t*>(&rdx7) = rdx->f8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r10_8) = *reinterpret_cast<int32_t*>(&rdx7);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_8) + 4) = 0;
    rcx9 = rdx7;
    *reinterpret_cast<uint16_t*>(&r10_8) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&r10_8) & 0x7fff);
    if (*reinterpret_cast<uint16_t*>(&r10_8)) {
        if (*reinterpret_cast<uint16_t*>(&r10_8) != 0x7fff) {
            addr_14000603b_3:
            edx10 = static_cast<int32_t>(r10_8 - 0x403e);
            edx11 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&edx10)));
        } else {
            rdx12 = rax6 >> 32;
            if (!(*reinterpret_cast<uint32_t*>(&rdx12) & 0x7fffffff | *reinterpret_cast<uint32_t*>(&rax6))) {
                edx11 = 0;
                goto addr_14000604e_6;
            } else {
                edx11 = 0;
                ecx13 = 0;
                goto addr_140006054_8;
            }
        }
    } else {
        rdx14 = rax6 >> 32;
        if (!(*reinterpret_cast<uint32_t*>(&rax6) | *reinterpret_cast<uint32_t*>(&rdx14))) {
            edx11 = 0;
        } else {
            if (*reinterpret_cast<int32_t*>(&rdx14) < reinterpret_cast<int32_t>(0)) 
                goto addr_14000603b_3;
            edx11 = 0xffffbfc3;
        }
    }
    addr_14000604e_6:
    ecx13 = *reinterpret_cast<uint32_t*>(&rcx9) & 0x8000;
    addr_140006054_8:
    *v15 = ecx13;
    rax16 = fun_140008830("@", edx11, reinterpret_cast<int64_t>(rsp5) + 80, reinterpret_cast<int64_t>(rsp5) + 68);
    return rax16;
}

struct s40 {
    signed char[32] pad32;
    void** f20;
};

void fun_140007290(int32_t ecx, void** rdx, void** r8d, void** r9) {
    void* rsp5;
    void** r10d6;
    void** r8d7;
    int32_t r11d8;
    void** r12_9;
    void** r13_10;
    int64_t rcx11;
    int32_t ecx12;
    int64_t rax13;
    int32_t eax14;
    void** eax15;
    int64_t rbx16;
    void** ecx17;
    void** eax18;
    void** ecx19;
    uint32_t ecx20;
    void** rcx21;
    void** eax22;
    void** r14d23;
    void** r12d24;
    void** rbx25;
    void** eax26;
    int64_t rdx27;
    uint64_t rdx28;
    void** esi29;
    int64_t rax30;
    struct s40* rsp31;
    void** r13_32;
    void** rdi33;
    void** r8d34;
    void** rcx35;
    int64_t* rsp36;
    void** r8_37;
    uint32_t r10d38;
    void* rax39;
    void** esi40;
    int64_t rax41;
    int64_t* rsp42;
    int64_t rax43;
    int64_t rdx44;
    void* rax45;
    void** rcx46;
    int64_t* rsp47;
    void** rsi48;
    void** eax49;
    int32_t ecx50;
    int64_t* rsp51;
    void** eax52;
    void** edx53;
    void** ecx54;
    void** edx55;
    int64_t* rsp56;
    void** rdx57;
    void*** r15_58;
    void* rax59;
    int32_t eax60;
    void* rax61;

    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 32);
    r10d6 = reinterpret_cast<void**>(1);
    r8d7 = r8d - 1;
    r11d8 = ecx;
    r12_9 = r9;
    r13_10 = reinterpret_cast<void**>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d7)));
    rcx11 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(r13_10) * 0x66666667) >> 34;
    ecx12 = *reinterpret_cast<int32_t*>(&rcx11) - (reinterpret_cast<signed char>(r8d7) >> 31);
    if (ecx12) {
        do {
            ++r10d6;
            rax13 = ecx12 * 0x66666667 >> 34;
            eax14 = *reinterpret_cast<int32_t*>(&rax13) - (ecx12 >> 31);
            ecx12 = eax14;
        } while (eax14);
    }
    eax15 = *reinterpret_cast<void***>(r12_9 + 44);
    if (reinterpret_cast<int1_t>(eax15 == 0xffffffff)) {
        *reinterpret_cast<void***>(r12_9 + 44) = reinterpret_cast<void**>(2);
        eax15 = reinterpret_cast<void**>(2);
    }
    *reinterpret_cast<void***>(&rbx16) = r10d6;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx16) + 4) = 0;
    if (reinterpret_cast<signed char>(eax15) >= reinterpret_cast<signed char>(r10d6)) {
        *reinterpret_cast<void***>(&rbx16) = eax15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx16) + 4) = 0;
    }
    ecx17 = reinterpret_cast<void**>(static_cast<uint32_t>(rbx16 + 2));
    eax18 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_9 + 12)) - reinterpret_cast<unsigned char>(ecx17));
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_9 + 12)) <= reinterpret_cast<signed char>(ecx17)) {
        eax18 = reinterpret_cast<void**>(0xffffffff);
    }
    *reinterpret_cast<void***>(r12_9 + 12) = eax18;
    fun_140006ef0(r11d8, rdx, 1, r12_9);
    ecx19 = *reinterpret_cast<void***>(r12_9 + 8);
    *reinterpret_cast<void***>(r12_9 + 16) = *reinterpret_cast<void***>(r12_9 + 44);
    ecx20 = reinterpret_cast<unsigned char>(ecx19) & 32 | 69;
    *reinterpret_cast<void***>(r12_9 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx19) | 0x1c0);
    fun_1400060f0(*reinterpret_cast<signed char*>(&ecx20), r12_9, *reinterpret_cast<signed char*>(&ecx20), r12_9);
    *reinterpret_cast<void***>(r12_9 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_9 + 12)) + static_cast<uint32_t>(rbx16 + 1));
    rcx21 = r13_10;
    eax22 = reinterpret_cast<void**>(0);
    r14d23 = *reinterpret_cast<void***>(r12_9 + 16);
    r12d24 = *reinterpret_cast<void***>(r12_9 + 8);
    if (reinterpret_cast<signed char>(r14d23) >= reinterpret_cast<signed char>(0)) {
        eax22 = r14d23;
    }
    rbx25 = r12_9;
    eax26 = eax22 + 23;
    if (reinterpret_cast<unsigned char>(r12d24) & 0x1000 && *reinterpret_cast<uint16_t*>(r12_9 + 32)) {
        *reinterpret_cast<void***>(&rdx27) = eax26;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = 0;
        rdx28 = reinterpret_cast<uint64_t>(rdx27 * 0xaaaaaaab) >> 33;
        eax26 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax26) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rdx28)));
    }
    esi29 = *reinterpret_cast<void***>(rbx25 + 12);
    if (reinterpret_cast<signed char>(esi29) >= reinterpret_cast<signed char>(eax26)) {
    }
    rax30 = fun_140005f70(rcx21, rcx21);
    rsp31 = reinterpret_cast<struct s40*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8 + 32 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - rax30);
    r13_32 = reinterpret_cast<void**>(&rsp31->f20);
    if (*reinterpret_cast<unsigned char*>(&r12d24) & 0x80) {
        if (reinterpret_cast<signed char>(rcx21) < reinterpret_cast<signed char>(0)) {
            rcx21 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rcx21));
            goto addr_140006a7f_19;
        } else {
            *reinterpret_cast<unsigned char*>(&r12d24) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12d24) & 0x7f);
            *reinterpret_cast<void***>(rbx25 + 8) = r12d24;
        }
    }
    if (!rcx21) {
        rdi33 = r13_32;
        r8d34 = r14d23;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d23) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d23 == 0))) {
            addr_140006b1a_23:
            rcx35 = rdi33;
            rdi33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi33) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d34))));
            rsp36 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp31) - 8);
            *rsp36 = 0x140006b30;
            fun_14000b540(rcx35, rcx35);
            rsp31 = reinterpret_cast<struct s40*>(rsp36 + 1);
        } else {
            goto addr_140006cb9_25;
        }
    } else {
        addr_140006a7f_19:
        r8_37 = r13_32;
        r10d38 = reinterpret_cast<unsigned char>(r12d24) & 0x1000;
        goto addr_140006aa0_26;
    }
    addr_140006b30_27:
    if (r13_32 == rdi33) {
        addr_140006cc8_28:
        *reinterpret_cast<void***>(rdi33) = reinterpret_cast<void**>(48);
        ++rdi33;
        goto addr_140006b39_29;
    } else {
        addr_140006b39_29:
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi29) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi29 == 0)) && (rax39 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi33) - reinterpret_cast<unsigned char>(r13_32)), esi40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi29) - *reinterpret_cast<uint32_t*>(&rax39)), *reinterpret_cast<void***>(rbx25 + 12) = esi40, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi40) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi40 == 0)))) {
            if (reinterpret_cast<unsigned char>(r12d24) & 0x1c0) {
                *reinterpret_cast<void***>(rbx25 + 12) = esi40 - 1;
                if (reinterpret_cast<signed char>(r14d23) >= reinterpret_cast<signed char>(0)) 
                    goto addr_140006b62_32;
            } else {
                if (reinterpret_cast<signed char>(r14d23) >= reinterpret_cast<signed char>(0)) 
                    goto addr_140006b62_32;
            }
            if ((reinterpret_cast<unsigned char>(r12d24) & 0x600) != 0x200) {
                addr_140006b62_32:
                if (!(reinterpret_cast<unsigned char>(r12d24) & 0x400)) {
                    *reinterpret_cast<void***>(&rax41) = *reinterpret_cast<void***>(rbx25 + 12);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
                    *reinterpret_cast<void***>(rbx25 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax41 - 1));
                    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax41)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax41) == 0))) {
                        do {
                            rsp42 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp31) - 8);
                            *rsp42 = 0x140006d55;
                            fun_1400060f0(32, rbx25, 32, rbx25);
                            rsp31 = reinterpret_cast<struct s40*>(rsp42 + 1);
                            *reinterpret_cast<void***>(&rax43) = *reinterpret_cast<void***>(rbx25 + 12);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax43) + 4) = 0;
                            *reinterpret_cast<void***>(rbx25 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax43 - 1));
                        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax43)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax43) == 0)));
                        r12d24 = *reinterpret_cast<void***>(rbx25 + 8);
                    }
                }
            } else {
                *reinterpret_cast<void***>(&rdx44) = *reinterpret_cast<void***>(rbx25 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx44) + 4) = 0;
                *reinterpret_cast<void***>(&rax45) = reinterpret_cast<void**>(static_cast<uint32_t>(rdx44 - 1));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax45) + 4) = 0;
                *reinterpret_cast<void***>(rbx25 + 12) = *reinterpret_cast<void***>(&rax45);
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx44)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rdx44) == 0))) {
                    rcx46 = rdi33;
                    rdi33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi33) + (reinterpret_cast<int64_t>(rax45) + 1));
                    rsp47 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp31) - 8);
                    *rsp47 = 0x140006d22;
                    fun_14000b540(rcx46, rcx46);
                    rsp31 = reinterpret_cast<struct s40*>(rsp47 + 1);
                    *reinterpret_cast<void***>(rbx25 + 12) = reinterpret_cast<void**>(0xffffffff);
                }
            }
        }
    }
    if (!(*reinterpret_cast<unsigned char*>(&r12d24) & 0x80)) {
        if (!(reinterpret_cast<unsigned char>(r12d24) & 0x100)) {
            rsi48 = rdi33;
            if (*reinterpret_cast<unsigned char*>(&r12d24) & 64) {
                *reinterpret_cast<void***>(rdi33) = reinterpret_cast<void**>(32);
                ++rsi48;
            }
        } else {
            *reinterpret_cast<void***>(rdi33) = reinterpret_cast<void**>(43);
            rsi48 = rdi33 + 1;
        }
    } else {
        *reinterpret_cast<void***>(rdi33) = reinterpret_cast<void**>(45);
        rsi48 = rdi33 + 1;
    }
    if (reinterpret_cast<unsigned char>(r13_32) < reinterpret_cast<unsigned char>(rsi48)) {
        while (1) {
            --rsi48;
            if (reinterpret_cast<unsigned char>(r12d24) & 0x4000 || (eax49 = *reinterpret_cast<void***>(rbx25 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx25 + 40)) > reinterpret_cast<signed char>(eax49))) {
                ecx50 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi48));
                if (!(reinterpret_cast<unsigned char>(r12d24) & 0x2000)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx25 + 36))))) = *reinterpret_cast<signed char*>(&ecx50);
                    eax49 = *reinterpret_cast<void***>(rbx25 + 36);
                    goto addr_140006b9a_52;
                } else {
                    rsp51 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp31) - 8);
                    *rsp51 = 0x140006bd2;
                    fun_14000b510();
                    rsp31 = reinterpret_cast<struct s40*>(rsp51 + 1);
                    *reinterpret_cast<void***>(rbx25 + 36) = *reinterpret_cast<void***>(rbx25 + 36) + 1;
                    if (r13_32 == rsi48) 
                        break;
                }
            } else {
                addr_140006b9a_52:
                *reinterpret_cast<void***>(rbx25 + 36) = eax49 + 1;
                if (r13_32 == rsi48) 
                    break;
            }
            r12d24 = *reinterpret_cast<void***>(rbx25 + 8);
        }
    }
    eax52 = *reinterpret_cast<void***>(rbx25 + 12);
    while (edx53 = eax52, --eax52, *reinterpret_cast<void***>(rbx25 + 12) = eax52, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx53) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx53 == 0))) {
        ecx54 = *reinterpret_cast<void***>(rbx25 + 8);
        if (*reinterpret_cast<unsigned char*>(&ecx54 + 1) & 64 || (edx55 = *reinterpret_cast<void***>(rbx25 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx25 + 40)) > reinterpret_cast<signed char>(edx55))) {
            if (!(*reinterpret_cast<unsigned char*>(&ecx54 + 1) & 32)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx25)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx25 + 36))))) = 32;
                edx55 = *reinterpret_cast<void***>(rbx25 + 36);
                eax52 = *reinterpret_cast<void***>(rbx25 + 12);
            } else {
                rsp56 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp31) - 8);
                *rsp56 = 0x140006c2a;
                fun_14000b510();
                rsp31 = reinterpret_cast<struct s40*>(rsp56 + 1);
                edx55 = *reinterpret_cast<void***>(rbx25 + 36);
                eax52 = *reinterpret_cast<void***>(rbx25 + 12);
            }
        }
        *reinterpret_cast<void***>(rbx25 + 36) = edx55 + 1;
    }
    return;
    addr_140006cb9_25:
    if (!r14d23) 
        goto addr_140006b39_29;
    goto addr_140006cc8_28;
    addr_140006aa0_26:
    while (rdi33 = r8_37 + 1, rdx57 = reinterpret_cast<void**>(__intrinsic() >> 3), r15_58 = reinterpret_cast<void***>(rdx57 + reinterpret_cast<unsigned char>(rdx57) * 4), rax59 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx21) - (reinterpret_cast<uint64_t>(r15_58) + reinterpret_cast<uint64_t>(r15_58))), eax60 = *reinterpret_cast<int32_t*>(&rax59) + 48, *reinterpret_cast<void***>(r8_37) = *reinterpret_cast<void***>(&eax60), reinterpret_cast<unsigned char>(rcx21) > reinterpret_cast<unsigned char>(9)) {
        if (r13_32 != rdi33 && (r10d38 && (*reinterpret_cast<uint16_t*>(rbx25 + 32) && (reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdi33) - reinterpret_cast<unsigned char>(r13_32)) & 0x8000000000000003) == 3))) {
            *reinterpret_cast<void***>(r8_37 + 1) = reinterpret_cast<void**>(44);
            rdi33 = r8_37 + 2;
        }
        rcx21 = rdx57;
        r8_37 = rdi33;
    }
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d23) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d23 == 0)) {
        if (r13_32 != rdi33) 
            goto addr_140006b39_29; else 
            goto addr_140006cb9_25;
    } else {
        rax61 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi33) - reinterpret_cast<unsigned char>(r13_32));
        r8d34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14d23) - *reinterpret_cast<uint32_t*>(&rax61));
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8d34) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r8d34 == 0)) 
            goto addr_140006b30_27; else 
            goto addr_140006b1a_23;
    }
}

void fun_14000a0b0(int32_t ecx, ...);

int32_t g140010af0;

void fun_1400086a0(void** rcx, void** rdx, ...) {
    void** ecx3;
    void** rcx4;
    int64_t rdx5;
    int1_t zf6;
    void** rcx7;

    ecx3 = *reinterpret_cast<void***>(rcx + 0xfffffffffffffffc);
    *reinterpret_cast<void***>(rcx + 4) = ecx3;
    rcx4 = rcx + 0xfffffffffffffffc;
    *reinterpret_cast<void***>(rcx + 8) = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx3));
    if (rcx4) {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rcx4 + 8)) <= reinterpret_cast<signed char>(9)) {
            fun_14000a0b0(0);
            rdx5 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx4 + 8));
            zf6 = g140010af0 == 2;
            rcx7 = *reinterpret_cast<void***>(0x140010aa0 + rdx5 * 8);
            *reinterpret_cast<void***>(0x140010aa0 + rdx5 * 8) = rcx4;
            *reinterpret_cast<void***>(rcx4) = rcx7;
            if (zf6) {
                goto LeaveCriticalSection;
            }
        } else {
            goto free;
        }
    }
    return;
}

struct s41 {
    signed char[32] pad32;
    void** f20;
};

void fun_140007660(void** rcx, int64_t rdx, void** r8) {
    int64_t v4;
    int64_t rdi5;
    void* rsp6;
    void** r9_7;
    void** r12_8;
    unsigned char al9;
    int32_t edi10;
    unsigned char r8b11;
    void** edx12;
    void** ecx13;
    void* rsi14;
    uint32_t ecx15;
    uint64_t rax16;
    uint32_t ecx17;
    uint32_t ecx18;
    void** rax19;
    void* rbx20;
    void** r8_21;
    uint32_t r11d22;
    uint32_t ebp23;
    uint32_t eax24;
    uint32_t eax25;
    void** r11d26;
    void* ebp27;
    int64_t rdx28;
    uint64_t r10_29;
    void** r10d30;
    int64_t rdx31;
    int32_t edx32;
    uint32_t ebp33;
    int64_t rax34;
    int32_t eax35;
    int64_t r11_36;
    int64_t rax37;
    void** rdx38;
    uint32_t ecx39;
    void* rsp40;
    int64_t rax41;
    uint16_t* r13_42;
    int32_t ecx43;
    uint32_t eax44;
    int64_t v45;
    int64_t rax46;
    uint32_t ecx47;
    void** rcx48;
    void** eax49;
    void** r14d50;
    void** r12d51;
    void** rbx52;
    void** eax53;
    int64_t rdx54;
    uint64_t rdx55;
    void** esi56;
    int64_t rax57;
    struct s41* rsp58;
    void** r13_59;
    void** rdi60;
    void** r8d61;
    void** rcx62;
    int64_t* rsp63;
    void** r8_64;
    uint32_t r10d65;
    void* rax66;
    void** esi67;
    int64_t rax68;
    int64_t* rsp69;
    int64_t rax70;
    int64_t rdx71;
    void* rax72;
    void** rcx73;
    int64_t* rsp74;
    void** rsi75;
    void** eax76;
    int32_t ecx77;
    int64_t* rsp78;
    void** eax79;
    void** edx80;
    void** ecx81;
    void** edx82;
    int64_t* rsp83;
    void** rdx84;
    void*** r15_85;
    void* rax86;
    int32_t eax87;
    void* rax88;
    void* rax89;

    v4 = rdi5;
    rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 88);
    r9_7 = rcx;
    r12_8 = r8;
    al9 = reinterpret_cast<uint1_t>(!!rcx);
    if (*reinterpret_cast<int16_t*>(&rdx) || (edi10 = 0, !!al9)) {
        edi10 = static_cast<int32_t>(rdx - 3);
    }
    r8b11 = reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_8 + 16)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(r12_8 + 16) == 0)));
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_8 + 16)) > reinterpret_cast<unsigned char>(14)) {
        if (al9 || r8b11) {
            edx12 = reinterpret_cast<void**>(16);
        } else {
            addr_1400076dd_6:
            ecx13 = *reinterpret_cast<void***>(r12_8 + 8);
            rsi14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) + 48);
            goto addr_1400076e7_7;
        }
    } else {
        ecx15 = 14 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_8 + 16)) << 2;
        rax16 = (4 << *reinterpret_cast<unsigned char*>(&ecx15)) + reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(r9_7) >> 1);
        if (reinterpret_cast<int64_t>(rax16) < reinterpret_cast<int64_t>(0)) {
            edi10 = edi10 + 4;
            ecx17 = 15 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_8 + 16)) << 2;
            r9_7 = reinterpret_cast<void**>(rax16 >> 3 >> *reinterpret_cast<signed char*>(&ecx17));
        } else {
            ecx18 = 15 - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_8 + 16)) << 2;
            rax19 = reinterpret_cast<void**>(rax16 + rax16 >> *reinterpret_cast<signed char*>(&ecx18));
            r9_7 = rax19;
            if (rax19) 
                goto addr_1400078c7_11;
            if (!r8b11) 
                goto addr_1400076dd_6;
        }
        addr_1400078c7_11:
        edx12 = *reinterpret_cast<void***>(r12_8 + 16) + 1;
    }
    ecx13 = *reinterpret_cast<void***>(r12_8 + 8);
    rsi14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) + 48);
    rbx20 = rsi14;
    r8_21 = ecx13;
    *reinterpret_cast<int32_t*>(&r8_21 + 4) = 0;
    r11d22 = reinterpret_cast<unsigned char>(ecx13) & 32;
    ebp23 = reinterpret_cast<unsigned char>(ecx13) & 0x800;
    while (1) {
        eax24 = reinterpret_cast<unsigned char>(r9_7) & 15;
        if (edx12 == 1) {
            if (reinterpret_cast<uint64_t>(rbx20) <= reinterpret_cast<uint64_t>(rsi14) && !ebp23) {
                if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_8 + 16)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(r12_8 + 16) == 0)) {
                    if (!eax24) {
                        if (!*reinterpret_cast<void***>(r12_8 + 16)) 
                            goto addr_1400078ff_19; else 
                            goto addr_140007959_20;
                    }
                }
            }
            rbx20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx20) + 1);
        } else {
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_8 + 16)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(r12_8 + 16) == 0))) {
                *reinterpret_cast<void***>(r12_8 + 16) = *reinterpret_cast<void***>(r12_8 + 16) - 1;
            }
        }
        if (!eax24) {
            if (reinterpret_cast<uint64_t>(rbx20) > reinterpret_cast<uint64_t>(rsi14) || reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_8 + 16)) >= reinterpret_cast<signed char>(0)) {
                addr_1400078ff_19:
                eax25 = eax24 + 48;
            } else {
                addr_14000790c_27:
                r9_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r9_7) >> 4);
                --edx12;
                if (!edx12) 
                    break; else 
                    continue;
            }
        } else {
            if (eax24 <= 9) 
                goto addr_1400078ff_19; else 
                goto addr_14000793c_29;
        }
        addr_140007905_30:
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&v4) + 3) = *reinterpret_cast<signed char*>(&eax25);
        rbx20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx20) + 1);
        goto addr_14000790c_27;
        addr_14000793c_29:
        eax25 = eax24 + 55 | r11d22;
        goto addr_140007905_30;
    }
    addr_140007960_31:
    if (rbx20 != rsi14) {
        addr_1400076fd_32:
        r11d26 = *reinterpret_cast<void***>(r12_8 + 12);
        ebp27 = reinterpret_cast<void*>(2);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r11d26) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r11d26 == 0))) {
            *reinterpret_cast<void***>(&rdx28) = *reinterpret_cast<void***>(r12_8 + 16);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx28) + 4) = 0;
            r10_29 = reinterpret_cast<uint64_t>(rbx20) - reinterpret_cast<uint64_t>(rsi14);
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx28)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rdx28) == 0))) {
                *reinterpret_cast<void**>(&r10_29) = reinterpret_cast<void*>(static_cast<uint32_t>(rdx28 + r10_29));
            }
            r10d30 = reinterpret_cast<void**>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r10_29)) - (6 - reinterpret_cast<uint1_t>(reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r10_29)) < 6 - reinterpret_cast<uint1_t>((reinterpret_cast<unsigned char>(ecx13) & 0x1c0) < 1))));
            r9_7 = r10d30;
            *reinterpret_cast<int32_t*>(&r9_7 + 4) = 0;
            rdx31 = *reinterpret_cast<int16_t*>(&edi10) * 0x66666667 >> 34;
            edx32 = *reinterpret_cast<int32_t*>(&rdx31) - (static_cast<int32_t>(*reinterpret_cast<int16_t*>(&edi10)) >> 31);
            if (edx32) {
                do {
                    ++r9_7;
                    *reinterpret_cast<int32_t*>(&r9_7 + 4) = 0;
                    ebp33 = static_cast<int32_t>(reinterpret_cast<uint64_t>(r9_7 + 2)) - reinterpret_cast<unsigned char>(r10d30);
                    rax34 = edx32 * 0x66666667 >> 34;
                    eax35 = *reinterpret_cast<int32_t*>(&rax34) - (edx32 >> 31);
                    edx32 = eax35;
                } while (eax35);
                ebp27 = reinterpret_cast<void*>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&ebp33)));
            }
            if (reinterpret_cast<signed char>(r11d26) <= reinterpret_cast<signed char>(r9_7)) {
                *reinterpret_cast<void***>(r12_8 + 12) = reinterpret_cast<void**>(0xffffffff);
            } else {
                *reinterpret_cast<void***>(&r11_36) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r11d26) - reinterpret_cast<unsigned char>(r9_7));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r11_36) + 4) = 0;
                if (*reinterpret_cast<unsigned char*>(&ecx13 + 1) & 6) {
                    *reinterpret_cast<void***>(r12_8 + 12) = *reinterpret_cast<void***>(&r11_36);
                } else {
                    *reinterpret_cast<void***>(r12_8 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(r11_36 - 1));
                    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r11_36)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r11_36) == 0))) {
                        do {
                            fun_1400060f0(32, r12_8, 32, r12_8);
                            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
                            *reinterpret_cast<void***>(&rax37) = *reinterpret_cast<void***>(r12_8 + 12);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax37) + 4) = 0;
                            *reinterpret_cast<void***>(r12_8 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax37 - 1));
                        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax37)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax37) == 0)));
                        r8_21 = *reinterpret_cast<void***>(r12_8 + 8);
                        *reinterpret_cast<int32_t*>(&r8_21 + 4) = 0;
                    }
                }
            }
        }
    } else {
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_8 + 16)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(r12_8 + 16) == 0)) 
            goto addr_1400076e7_7; else 
            goto addr_140007976_47;
    }
    if (*reinterpret_cast<unsigned char*>(&r8_21) & 0x80) {
        fun_1400060f0(45, r12_8, 45, r12_8);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
    } else {
        if (reinterpret_cast<unsigned char>(r8_21) & 0x100) {
            fun_1400060f0(43, r12_8, 43, r12_8);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        } else {
            r8_21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_21) & 64);
            *reinterpret_cast<int32_t*>(&r8_21 + 4) = 0;
            if (r8_21) {
                fun_1400060f0(32, r12_8, 32, r12_8);
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            }
        }
    }
    fun_1400060f0(48, r12_8, 48, r12_8);
    rdx38 = r12_8;
    ecx39 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_8 + 8)) & 32 | 88;
    fun_1400060f0(*reinterpret_cast<signed char*>(&ecx39), rdx38, *reinterpret_cast<signed char*>(&ecx39), rdx38);
    rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8 - 8 + 8);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_8 + 12)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(r12_8 + 12) == 0)) && *reinterpret_cast<unsigned char*>(r12_8 + 9) & 2) {
        *reinterpret_cast<void***>(r12_8 + 12) = *reinterpret_cast<void***>(r12_8 + 12) - 1;
        do {
            fun_1400060f0(48, r12_8, 48, r12_8);
            rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
            *reinterpret_cast<void***>(&rax41) = *reinterpret_cast<void***>(r12_8 + 12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
            rdx38 = reinterpret_cast<void**>(static_cast<uint32_t>(rax41 - 1));
            *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
            *reinterpret_cast<void***>(r12_8 + 12) = rdx38;
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax41)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax41) == 0)));
    }
    r13_42 = reinterpret_cast<uint16_t*>(reinterpret_cast<int64_t>(rsp40) + 46);
    if (reinterpret_cast<uint64_t>(rbx20) > reinterpret_cast<uint64_t>(rsi14)) {
        do {
            ecx43 = *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&v4) + 3);
            rbx20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx20) - 1);
            if (ecx43 == 46) {
                fun_140006d90(r12_8, rdx38, r8_21);
                rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
            } else {
                if (ecx43 == 44) {
                    eax44 = *reinterpret_cast<uint16_t*>(r12_8 + 32);
                    if (*reinterpret_cast<int16_t*>(&eax44)) {
                        r8_21 = r12_8;
                        rdx38 = reinterpret_cast<void**>(1);
                        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
                        fun_140006150(r13_42, 1, r8_21, r9_7, v45);
                        rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
                    }
                } else {
                    rdx38 = r12_8;
                    fun_1400060f0(*reinterpret_cast<signed char*>(&ecx43), rdx38, *reinterpret_cast<signed char*>(&ecx43), rdx38);
                    rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
                }
            }
        } while (rbx20 != rsi14);
    }
    while (*reinterpret_cast<void***>(&rax46) = *reinterpret_cast<void***>(r12_8 + 16), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = 0, *reinterpret_cast<void***>(r12_8 + 16) = reinterpret_cast<void**>(static_cast<uint32_t>(rax46 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax46)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax46) == 0))) {
        fun_1400060f0(48, r12_8, 48, r12_8);
        rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
    }
    ecx47 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_8 + 8)) & 32 | 80;
    fun_1400060f0(*reinterpret_cast<signed char*>(&ecx47), r12_8, *reinterpret_cast<signed char*>(&ecx47), r12_8);
    *reinterpret_cast<void***>(r12_8 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_8 + 12)) + reinterpret_cast<uint32_t>(ebp27));
    rcx48 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&edi10)));
    *reinterpret_cast<void***>(r12_8 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_8 + 8)) | 0x1c0);
    eax49 = reinterpret_cast<void**>(0);
    r14d50 = *reinterpret_cast<void***>(r12_8 + 16);
    r12d51 = *reinterpret_cast<void***>(r12_8 + 8);
    if (reinterpret_cast<signed char>(r14d50) >= reinterpret_cast<signed char>(0)) {
        eax49 = r14d50;
    }
    rbx52 = r12_8;
    eax53 = eax49 + 23;
    if (reinterpret_cast<unsigned char>(r12d51) & 0x1000 && *reinterpret_cast<uint16_t*>(r12_8 + 32)) {
        *reinterpret_cast<void***>(&rdx54) = eax53;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx54) + 4) = 0;
        rdx55 = reinterpret_cast<uint64_t>(rdx54 * 0xaaaaaaab) >> 33;
        eax53 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax53) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rdx55)));
    }
    esi56 = *reinterpret_cast<void***>(rbx52 + 12);
    if (reinterpret_cast<signed char>(esi56) >= reinterpret_cast<signed char>(eax53)) {
    }
    rax57 = fun_140005f70(rcx48);
    rsp58 = reinterpret_cast<struct s41*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8 + 88 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - rax57);
    r13_59 = reinterpret_cast<void**>(&rsp58->f20);
    if (*reinterpret_cast<unsigned char*>(&r12d51) & 0x80) {
        if (reinterpret_cast<signed char>(rcx48) < reinterpret_cast<signed char>(0)) {
            rcx48 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rcx48));
            goto addr_140006a7f_78;
        } else {
            *reinterpret_cast<unsigned char*>(&r12d51) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12d51) & 0x7f);
            *reinterpret_cast<void***>(rbx52 + 8) = r12d51;
        }
    }
    if (!rcx48) {
        rdi60 = r13_59;
        r8d61 = r14d50;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d50) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d50 == 0))) {
            addr_140006b1a_82:
            rcx62 = rdi60;
            rdi60 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi60) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d61))));
            rsp63 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
            *rsp63 = 0x140006b30;
            fun_14000b540(rcx62, rcx62);
            rsp58 = reinterpret_cast<struct s41*>(rsp63 + 1);
        } else {
            goto addr_140006cb9_84;
        }
    } else {
        addr_140006a7f_78:
        r8_64 = r13_59;
        r10d65 = reinterpret_cast<unsigned char>(r12d51) & 0x1000;
        goto addr_140006aa0_85;
    }
    addr_140006b30_86:
    if (r13_59 == rdi60) {
        addr_140006cc8_87:
        *reinterpret_cast<void***>(rdi60) = reinterpret_cast<void**>(48);
        ++rdi60;
        goto addr_140006b39_88;
    } else {
        addr_140006b39_88:
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi56) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi56 == 0)) && (rax66 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi60) - reinterpret_cast<unsigned char>(r13_59)), esi67 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi56) - *reinterpret_cast<uint32_t*>(&rax66)), *reinterpret_cast<void***>(rbx52 + 12) = esi67, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi67) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi67 == 0)))) {
            if (reinterpret_cast<unsigned char>(r12d51) & 0x1c0) {
                *reinterpret_cast<void***>(rbx52 + 12) = esi67 - 1;
                if (reinterpret_cast<signed char>(r14d50) >= reinterpret_cast<signed char>(0)) 
                    goto addr_140006b62_91;
            } else {
                if (reinterpret_cast<signed char>(r14d50) >= reinterpret_cast<signed char>(0)) 
                    goto addr_140006b62_91;
            }
            if ((reinterpret_cast<unsigned char>(r12d51) & 0x600) != 0x200) {
                addr_140006b62_91:
                if (!(reinterpret_cast<unsigned char>(r12d51) & 0x400)) {
                    *reinterpret_cast<void***>(&rax68) = *reinterpret_cast<void***>(rbx52 + 12);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax68) + 4) = 0;
                    *reinterpret_cast<void***>(rbx52 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax68 - 1));
                    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax68)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax68) == 0))) {
                        do {
                            rsp69 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
                            *rsp69 = 0x140006d55;
                            fun_1400060f0(32, rbx52, 32, rbx52);
                            rsp58 = reinterpret_cast<struct s41*>(rsp69 + 1);
                            *reinterpret_cast<void***>(&rax70) = *reinterpret_cast<void***>(rbx52 + 12);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax70) + 4) = 0;
                            *reinterpret_cast<void***>(rbx52 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax70 - 1));
                        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax70)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax70) == 0)));
                        r12d51 = *reinterpret_cast<void***>(rbx52 + 8);
                    }
                }
            } else {
                *reinterpret_cast<void***>(&rdx71) = *reinterpret_cast<void***>(rbx52 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx71) + 4) = 0;
                *reinterpret_cast<void***>(&rax72) = reinterpret_cast<void**>(static_cast<uint32_t>(rdx71 - 1));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax72) + 4) = 0;
                *reinterpret_cast<void***>(rbx52 + 12) = *reinterpret_cast<void***>(&rax72);
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rdx71)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rdx71) == 0))) {
                    rcx73 = rdi60;
                    rdi60 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi60) + (reinterpret_cast<int64_t>(rax72) + 1));
                    rsp74 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
                    *rsp74 = 0x140006d22;
                    fun_14000b540(rcx73, rcx73);
                    rsp58 = reinterpret_cast<struct s41*>(rsp74 + 1);
                    *reinterpret_cast<void***>(rbx52 + 12) = reinterpret_cast<void**>(0xffffffff);
                }
            }
        }
    }
    if (!(*reinterpret_cast<unsigned char*>(&r12d51) & 0x80)) {
        if (!(reinterpret_cast<unsigned char>(r12d51) & 0x100)) {
            rsi75 = rdi60;
            if (*reinterpret_cast<unsigned char*>(&r12d51) & 64) {
                *reinterpret_cast<void***>(rdi60) = reinterpret_cast<void**>(32);
                ++rsi75;
            }
        } else {
            *reinterpret_cast<void***>(rdi60) = reinterpret_cast<void**>(43);
            rsi75 = rdi60 + 1;
        }
    } else {
        *reinterpret_cast<void***>(rdi60) = reinterpret_cast<void**>(45);
        rsi75 = rdi60 + 1;
    }
    if (reinterpret_cast<unsigned char>(r13_59) < reinterpret_cast<unsigned char>(rsi75)) {
        while (1) {
            --rsi75;
            if (reinterpret_cast<unsigned char>(r12d51) & 0x4000 || (eax76 = *reinterpret_cast<void***>(rbx52 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx52 + 40)) > reinterpret_cast<signed char>(eax76))) {
                ecx77 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi75));
                if (!(reinterpret_cast<unsigned char>(r12d51) & 0x2000)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx52)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx52 + 36))))) = *reinterpret_cast<signed char*>(&ecx77);
                    eax76 = *reinterpret_cast<void***>(rbx52 + 36);
                    goto addr_140006b9a_111;
                } else {
                    rsp78 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
                    *rsp78 = 0x140006bd2;
                    fun_14000b510();
                    rsp58 = reinterpret_cast<struct s41*>(rsp78 + 1);
                    *reinterpret_cast<void***>(rbx52 + 36) = *reinterpret_cast<void***>(rbx52 + 36) + 1;
                    if (r13_59 == rsi75) 
                        break;
                }
            } else {
                addr_140006b9a_111:
                *reinterpret_cast<void***>(rbx52 + 36) = eax76 + 1;
                if (r13_59 == rsi75) 
                    break;
            }
            r12d51 = *reinterpret_cast<void***>(rbx52 + 8);
        }
    }
    eax79 = *reinterpret_cast<void***>(rbx52 + 12);
    while (edx80 = eax79, --eax79, *reinterpret_cast<void***>(rbx52 + 12) = eax79, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx80) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx80 == 0))) {
        ecx81 = *reinterpret_cast<void***>(rbx52 + 8);
        if (*reinterpret_cast<unsigned char*>(&ecx81 + 1) & 64 || (edx82 = *reinterpret_cast<void***>(rbx52 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx52 + 40)) > reinterpret_cast<signed char>(edx82))) {
            if (!(*reinterpret_cast<unsigned char*>(&ecx81 + 1) & 32)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx52)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx52 + 36))))) = 32;
                edx82 = *reinterpret_cast<void***>(rbx52 + 36);
                eax79 = *reinterpret_cast<void***>(rbx52 + 12);
            } else {
                rsp83 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
                *rsp83 = 0x140006c2a;
                fun_14000b510();
                rsp58 = reinterpret_cast<struct s41*>(rsp83 + 1);
                edx82 = *reinterpret_cast<void***>(rbx52 + 36);
                eax79 = *reinterpret_cast<void***>(rbx52 + 12);
            }
        }
        *reinterpret_cast<void***>(rbx52 + 36) = edx82 + 1;
    }
    return;
    addr_140006cb9_84:
    if (!r14d50) 
        goto addr_140006b39_88;
    goto addr_140006cc8_87;
    addr_140006aa0_85:
    while (rdi60 = r8_64 + 1, rdx84 = reinterpret_cast<void**>(__intrinsic() >> 3), r15_85 = reinterpret_cast<void***>(rdx84 + reinterpret_cast<unsigned char>(rdx84) * 4), rax86 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx48) - (reinterpret_cast<uint64_t>(r15_85) + reinterpret_cast<uint64_t>(r15_85))), eax87 = *reinterpret_cast<int32_t*>(&rax86) + 48, *reinterpret_cast<void***>(r8_64) = *reinterpret_cast<void***>(&eax87), reinterpret_cast<unsigned char>(rcx48) > reinterpret_cast<unsigned char>(9)) {
        if (r13_59 != rdi60 && (r10d65 && (*reinterpret_cast<uint16_t*>(rbx52 + 32) && (reinterpret_cast<uint64_t>(reinterpret_cast<unsigned char>(rdi60) - reinterpret_cast<unsigned char>(r13_59)) & 0x8000000000000003) == 3))) {
            *reinterpret_cast<void***>(r8_64 + 1) = reinterpret_cast<void**>(44);
            rdi60 = r8_64 + 2;
        }
        rcx48 = rdx84;
        r8_64 = rdi60;
    }
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d50) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d50 == 0)) {
        if (r13_59 != rdi60) 
            goto addr_140006b39_88; else 
            goto addr_140006cb9_84;
    } else {
        rax88 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi60) - reinterpret_cast<unsigned char>(r13_59));
        r8d61 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14d50) - *reinterpret_cast<uint32_t*>(&rax88));
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8d61) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r8d61 == 0)) 
            goto addr_140006b30_86; else 
            goto addr_140006b1a_82;
    }
    addr_1400076e7_7:
    r8_21 = ecx13;
    *reinterpret_cast<int32_t*>(&r8_21 + 4) = 0;
    rax89 = rsi14;
    if (*reinterpret_cast<unsigned char*>(&ecx13 + 1) & 8) {
        addr_140007976_47:
        rax89 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) + 49);
        goto addr_1400076f6_130;
    } else {
        addr_1400076f6_130:
        rbx20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax89) + 1);
        goto addr_1400076fd_32;
    }
    addr_140007959_20:
    goto addr_140007960_31;
}

struct s42 {
    signed char[32] pad32;
    void** f20;
};

void** fun_1400064f0(void** rcx, void** rdx, void** r8) {
    void* rsp4;
    uint32_t r14d5;
    void** rbx6;
    void** r15d7;
    void** eax8;
    void** edi9;
    void** eax10;
    void** eax11;
    void** r12d12;
    void** rcx13;
    int64_t rax14;
    struct s42* rsp15;
    void** r13_16;
    int64_t rax17;
    uint32_t r8d18;
    int64_t r8_19;
    uint64_t r8_20;
    void** rsi21;
    uint32_t r9d22;
    int64_t rax23;
    uint32_t r10d24;
    uint32_t eax25;
    void* rax26;
    uint32_t r8d27;
    void** rcx28;
    int64_t* rsp29;
    void** rax30;
    int64_t r12_31;
    void** edi32;
    void** r12d33;
    int64_t r9_34;
    void** rcx35;
    int64_t* rsp36;
    int64_t* rsp37;
    void** eax38;
    int32_t ecx39;
    int64_t* rsp40;
    uint32_t esi41;
    void** eax42;
    int64_t* rsp43;
    int1_t cf44;
    int1_t cf45;
    int64_t rax46;
    int64_t rax47;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 56);
    r14d5 = *reinterpret_cast<uint32_t*>(&rcx);
    rbx6 = r8;
    if (*reinterpret_cast<uint32_t*>(&rcx) == 0x6f) {
        r15d7 = *reinterpret_cast<void***>(r8 + 16);
        eax8 = reinterpret_cast<void**>(0);
        edi9 = *reinterpret_cast<void***>(r8 + 8);
        if (reinterpret_cast<signed char>(r15d7) >= reinterpret_cast<signed char>(0)) {
            eax8 = r15d7;
        }
        eax10 = eax8 + 24;
        if (!(reinterpret_cast<unsigned char>(edi9) & 0x1000)) 
            goto addr_140006850_5;
    } else {
        r15d7 = *reinterpret_cast<void***>(r8 + 16);
        eax11 = reinterpret_cast<void**>(0);
        edi9 = *reinterpret_cast<void***>(r8 + 8);
        if (reinterpret_cast<signed char>(r15d7) >= reinterpret_cast<signed char>(0)) {
            eax11 = r15d7;
        }
        eax10 = eax11 + 18;
        if (reinterpret_cast<unsigned char>(edi9) & 0x1000) 
            goto addr_1400066e8_9; else 
            goto addr_140006534_10;
    }
    if (!*reinterpret_cast<uint16_t*>(r8 + 32)) {
        r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
        if (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(r12d12)) {
        }
    } else {
        *reinterpret_cast<int32_t*>(&rcx13) = 3;
        *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0;
        goto addr_1400066f9_16;
    }
    addr_14000685b_17:
    rax14 = fun_140005f70(rcx);
    *reinterpret_cast<int32_t*>(&rcx13) = 3;
    rsp15 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax14);
    r13_16 = reinterpret_cast<void**>(&rsp15->f20);
    goto addr_140006877_18;
    addr_140006850_5:
    r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
    if (reinterpret_cast<signed char>(r12d12) >= reinterpret_cast<signed char>(eax10)) {
        goto addr_14000685b_17;
    }
    addr_1400066e8_9:
    *reinterpret_cast<int32_t*>(&rcx13) = 4;
    *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0;
    if (!*reinterpret_cast<uint16_t*>(r8 + 32)) {
        r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
        if (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(r12d12)) {
        }
        rax17 = fun_140005f70(4);
        r8d18 = 15;
        rsp15 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax17);
        r13_16 = reinterpret_cast<void**>(&rsp15->f20);
    } else {
        addr_1400066f9_16:
        *reinterpret_cast<void***>(&r8_19) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_19) + 4) = 0;
        r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
        r8_20 = reinterpret_cast<uint64_t>(r8_19 * 0xaaaaaaab) >> 33;
        if (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(eax10) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r8_20))) < reinterpret_cast<signed char>(r12d12)) {
            goto addr_140006718_24;
        }
    }
    addr_14000673f_25:
    rsi21 = r13_16;
    if (!rdx) {
        goto addr_140006750_27;
    }
    addr_14000656d_28:
    r9d22 = r14d5 & 32;
    do {
        ++rsi21;
        *reinterpret_cast<uint32_t*>(&rax23) = r8d18 & *reinterpret_cast<uint32_t*>(&rdx);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0;
        r10d24 = static_cast<uint32_t>(rax23 + 48);
        eax25 = *reinterpret_cast<uint32_t*>(&rax23) + 55 | r9d22;
        if (*reinterpret_cast<unsigned char*>(&r10d24) < 58) {
            eax25 = r10d24;
        }
        rdx = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdx) >> *reinterpret_cast<signed char*>(&rcx13));
        *reinterpret_cast<void***>(rsi21 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&eax25);
    } while (rdx);
    if (rsi21 == r13_16) {
        addr_140006750_27:
        *reinterpret_cast<void***>(rbx6 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi9) & 0xfffff7ff);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r15d7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r15d7 == 0))) {
            addr_1400065b3_33:
            rax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi21) - reinterpret_cast<unsigned char>(r13_16));
            r8d27 = reinterpret_cast<unsigned char>(r15d7) - *reinterpret_cast<uint32_t*>(&rax26);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r8d27) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(r8d27 == 0))) {
                rcx28 = rsi21;
                rsi21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi21) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d27))));
                rsp29 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                *rsp29 = 0x1400065de;
                fun_14000b540(rcx28, rcx28);
                rsp15 = reinterpret_cast<struct s42*>(rsp29 + 1);
                if (rsi21 == r13_16) 
                    goto addr_140006784_35; else 
                    goto addr_1400065e7_36;
            }
        }
    } else {
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r15d7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r15d7 == 0))) 
            goto addr_1400065b3_33;
    }
    if (r14d5 == 0x6f && *reinterpret_cast<unsigned char*>(rbx6 + 9) & 8) {
        *reinterpret_cast<void***>(rsi21) = reinterpret_cast<void**>(48);
        ++rsi21;
    }
    if (rsi21 != r13_16 || !r15d7) {
        addr_1400065e7_36:
        rax30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi21) - reinterpret_cast<unsigned char>(r13_16));
        if (reinterpret_cast<signed char>(rax30) < reinterpret_cast<signed char>(r12d12)) {
            addr_1400067a0_42:
            *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12d12) - reinterpret_cast<unsigned char>(rax30));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
            edi32 = *reinterpret_cast<void***>(rbx6 + 8);
            *reinterpret_cast<void***>(rbx6 + 12) = *reinterpret_cast<void***>(&r12_31);
            if (r14d5 == 0x6f) {
                if (reinterpret_cast<signed char>(r15d7) >= reinterpret_cast<signed char>(0) || (reinterpret_cast<unsigned char>(edi32) & 0x600) != 0x200) {
                    if (!(reinterpret_cast<unsigned char>(edi32) & 0x400)) {
                        addr_1400067f5_45:
                        r12d33 = *reinterpret_cast<void***>(&r12_31) - 1;
                    } else {
                        if (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16)) 
                            goto addr_140006640_47; else 
                            goto addr_1400068be_48;
                    }
                } else {
                    addr_140006962_49:
                    *reinterpret_cast<void**>(&r9_34) = reinterpret_cast<void*>(static_cast<int32_t>(r12_31 - 1));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_34) + 4) = 0;
                    rcx35 = rsi21;
                    rsi21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi21) + reinterpret_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(r9_34 + 1))));
                    rsp36 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                    *rsp36 = 0x140006985;
                    rax30 = fun_14000b540(rcx35, rcx35);
                    rsp15 = reinterpret_cast<struct s42*>(rsp36 + 1);
                    *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&r9_34)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r12_31)));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
                    if (r14d5 == 0x6f || !(reinterpret_cast<unsigned char>(edi32) & 0x800)) {
                        addr_1400067dd_50:
                        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r12_31)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r12_31) == 0)) {
                            addr_140006617_51:
                            if (reinterpret_cast<unsigned char>(r13_16) < reinterpret_cast<unsigned char>(rsi21)) 
                                goto addr_14000663d_52; else 
                                goto addr_14000661c_53;
                        } else {
                            edi32 = *reinterpret_cast<void***>(rbx6 + 8);
                            if (reinterpret_cast<unsigned char>(edi32) & 0x400) 
                                goto addr_1400068e5_55; else 
                                goto addr_1400067f5_45;
                        }
                    } else {
                        goto addr_1400067d2_57;
                    }
                }
            } else {
                if (reinterpret_cast<unsigned char>(edi32) & 0x800) {
                    *reinterpret_cast<void***>(&r12_31) = *reinterpret_cast<void***>(&r12_31) - 2;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r12_31)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r12_31) == 0)) 
                        goto addr_1400067d2_57;
                    if (reinterpret_cast<signed char>(r15d7) < reinterpret_cast<signed char>(0)) 
                        goto addr_1400069b0_61; else 
                        goto addr_1400067d2_57;
                }
                if (reinterpret_cast<signed char>(r15d7) < reinterpret_cast<signed char>(0)) {
                    addr_1400069b0_61:
                    rax30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi32) & 0x600);
                    *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
                    if (rax30 == 0x200) 
                        goto addr_140006962_49; else 
                        goto addr_1400069be_63;
                } else {
                    addr_1400068d9_64:
                    if (!(reinterpret_cast<unsigned char>(edi32) & 0x400)) 
                        goto addr_1400067f5_45; else 
                        goto addr_1400068e5_55;
                }
            }
        } else {
            addr_1400065f6_65:
            *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(0xffffffff);
            if (r14d5 == 0x6f) {
                *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(0xffffffff);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
                if (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16)) 
                    goto addr_14000663d_52;
                goto addr_1400066d4_68;
            } else {
                *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(0xffffffff);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
                if (*reinterpret_cast<unsigned char*>(rbx6 + 9) & 8) {
                    *reinterpret_cast<void***>(rsi21) = *reinterpret_cast<void***>(&r14d5);
                    rsi21 = rsi21 + 2;
                    *reinterpret_cast<void***>(rsi21 + 0xffffffffffffffff) = reinterpret_cast<void**>(48);
                    goto addr_140006617_51;
                }
            }
        }
    } else {
        addr_140006784_35:
        *reinterpret_cast<void***>(rsi21) = reinterpret_cast<void**>(48);
        ++rsi21;
        rax30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi21) - reinterpret_cast<unsigned char>(r13_16));
        if (reinterpret_cast<signed char>(rax30) >= reinterpret_cast<signed char>(r12d12)) 
            goto addr_1400065f6_65; else 
            goto addr_14000679a_71;
    }
    do {
        rsp37 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
        *rsp37 = 0x14000680d;
        fun_1400060f0(32, rbx6, 32, rbx6);
        rsp15 = reinterpret_cast<struct s42*>(rsp37 + 1);
        rax30 = r12d33;
        *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
        --r12d33;
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rax30) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rax30 == 0)));
    *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
    if (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16)) {
        do {
            addr_14000663d_52:
            edi32 = *reinterpret_cast<void***>(rbx6 + 8);
            addr_140006640_47:
            --rsi21;
            if (reinterpret_cast<unsigned char>(edi32) & 0x4000 || (eax38 = *reinterpret_cast<void***>(rbx6 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx6 + 40)) > reinterpret_cast<signed char>(eax38))) {
                ecx39 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi21));
                if (!(reinterpret_cast<unsigned char>(edi32) & 0x2000)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx6 + 36))))) = *reinterpret_cast<signed char*>(&ecx39);
                    eax38 = *reinterpret_cast<void***>(rbx6 + 36);
                } else {
                    rsp40 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                    *rsp40 = 0x140006667;
                    fun_14000b510();
                    rsp15 = reinterpret_cast<struct s42*>(rsp40 + 1);
                    rax30 = *reinterpret_cast<void***>(rbx6 + 36) + 1;
                    *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
                    *reinterpret_cast<void***>(rbx6 + 36) = rax30;
                    if (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16)) 
                        goto addr_14000663d_52; else 
                        break;
                }
            }
            rax30 = eax38 + 1;
            *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
            *reinterpret_cast<void***>(rbx6 + 36) = rax30;
        } while (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16));
    }
    esi41 = static_cast<uint32_t>(r12_31 - 1);
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r12_31)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r12_31) == 0))) {
        do {
            addr_14000669e_80:
            edi32 = *reinterpret_cast<void***>(rbx6 + 8);
            addr_1400066a1_81:
            if (reinterpret_cast<unsigned char>(edi32) & 0x4000 || (eax42 = *reinterpret_cast<void***>(rbx6 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx6 + 40)) > reinterpret_cast<signed char>(eax42))) {
                if (!(reinterpret_cast<unsigned char>(edi32) & 0x2000)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx6 + 36))))) = 32;
                    eax42 = *reinterpret_cast<void***>(rbx6 + 36);
                } else {
                    rsp43 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                    *rsp43 = 0x1400066c6;
                    fun_14000b510();
                    rsp15 = reinterpret_cast<struct s42*>(rsp43 + 1);
                    rax30 = *reinterpret_cast<void***>(rbx6 + 36) + 1;
                    *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
                    *reinterpret_cast<void***>(rbx6 + 36) = rax30;
                    cf44 = esi41 < 1;
                    --esi41;
                    if (!cf44) 
                        goto addr_14000669e_80; else 
                        break;
                }
            }
            rax30 = eax42 + 1;
            *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
            *reinterpret_cast<void***>(rbx6 + 36) = rax30;
            cf45 = esi41 < 1;
            --esi41;
        } while (!cf45);
    }
    addr_1400066d4_68:
    return rax30;
    addr_1400068be_48:
    esi41 = static_cast<uint32_t>(r12_31 - 1);
    goto addr_1400066a1_81;
    addr_14000661c_53:
    goto addr_1400066d4_68;
    addr_1400068e5_55:
    if (reinterpret_cast<unsigned char>(r13_16) < reinterpret_cast<unsigned char>(rsi21)) 
        goto addr_140006640_47;
    goto addr_1400068be_48;
    addr_1400069be_63:
    if (reinterpret_cast<unsigned char>(edi32) & 0x800) {
        addr_1400067d2_57:
        *reinterpret_cast<void***>(rsi21) = *reinterpret_cast<void***>(&r14d5);
        rsi21 = rsi21 + 2;
        *reinterpret_cast<void***>(rsi21 + 0xffffffffffffffff) = reinterpret_cast<void**>(48);
        goto addr_1400067dd_50;
    } else {
        goto addr_1400068d9_64;
    }
    addr_14000679a_71:
    goto addr_1400067a0_42;
    addr_140006718_24:
    rax46 = fun_140005f70(rcx13);
    rsp15 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax46);
    r13_16 = reinterpret_cast<void**>(&rsp15->f20);
    if (r14d5 == 0x6f) {
        addr_140006877_18:
        r8d18 = 7;
    } else {
        r8d18 = 15;
        goto addr_14000673f_25;
    }
    addr_140006561_90:
    rsi21 = r13_16;
    if (!rdx) 
        goto addr_140006750_27; else 
        goto addr_14000656d_28;
    addr_140006534_10:
    r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
    if (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(r12d12)) {
    }
    rax47 = fun_140005f70(rcx);
    *reinterpret_cast<int32_t*>(&rcx13) = 4;
    r8d18 = 15;
    rsp15 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax47);
    r13_16 = reinterpret_cast<void**>(&rsp15->f20);
    goto addr_140006561_90;
}

void fun_140006440(uint32_t ecx, void** rdx, void** r8, ...);

void fun_140007370(void* rcx, void** rdx) {
    void* rsp3;
    void** r8d4;
    void** rax5;
    void** v6;
    uint32_t v7;
    int32_t v8;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 88);
    __asm__("fld tword [rcx]");
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 16)) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<void***>(rdx + 16) = reinterpret_cast<void**>(6);
        r8d4 = reinterpret_cast<void**>(7);
    } else {
        r8d4 = *reinterpret_cast<void***>(rdx + 16) + 1;
    }
    __asm__("fstp tword [rsp+0x30]");
    rax5 = fun_140006000(2, reinterpret_cast<int64_t>(rsp3) + 48, r8d4, reinterpret_cast<int64_t>(rsp3) + 76);
    if (v6 == 0xffff8000) {
        fun_140006440(v7, rax5, rdx, v7, rax5, rdx);
        fun_1400086a0(rax5, rax5, rax5, rax5);
        return;
    } else {
        fun_140007290(v8, rax5, v6, rdx);
        fun_1400086a0(rax5, rax5);
        return;
    }
}

void fun_140007410(void* rcx, void** rdx) {
    void* rsp3;
    void** r8d4;
    void** rbx5;
    void** rax6;
    void** r8_7;
    int32_t v8;
    void** r12_9;
    void** rdx10;
    uint32_t v11;
    int32_t v12;
    void** eax13;
    void** ecx14;
    void** edx15;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 88);
    r8d4 = *reinterpret_cast<void***>(rdx + 16);
    __asm__("fld tword [rcx]");
    rbx5 = rdx;
    if (reinterpret_cast<signed char>(r8d4) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<void***>(rdx + 16) = reinterpret_cast<void**>(6);
        r8d4 = reinterpret_cast<void**>(6);
    }
    __asm__("fstp tword [rsp+0x30]");
    rax6 = fun_140006000(3, reinterpret_cast<int64_t>(rsp3) + 48, r8d4, reinterpret_cast<int64_t>(rsp3) + 76);
    *reinterpret_cast<int32_t*>(&r8_7) = v8;
    *reinterpret_cast<int32_t*>(&r8_7 + 4) = 0;
    r12_9 = rax6;
    if (*reinterpret_cast<int32_t*>(&r8_7) == 0xffff8000) {
        rdx10 = rax6;
        fun_140006440(v11, rdx10, rbx5, v11, rdx10, rbx5);
    } else {
        fun_140006ef0(v12, rax6, r8_7, rbx5);
        eax13 = *reinterpret_cast<void***>(rbx5 + 12);
        while (rdx10 = eax13, *reinterpret_cast<int32_t*>(&rdx10 + 4) = 0, --eax13, *reinterpret_cast<void***>(rbx5 + 12) = eax13, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rdx10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rdx10 == 0))) {
            ecx14 = *reinterpret_cast<void***>(rbx5 + 8);
            if (*reinterpret_cast<unsigned char*>(&ecx14 + 1) & 64 || (edx15 = *reinterpret_cast<void***>(rbx5 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx5 + 40)) > reinterpret_cast<signed char>(edx15))) {
                if (!(*reinterpret_cast<unsigned char*>(&ecx14 + 1) & 32)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx5 + 36))))) = 32;
                    edx15 = *reinterpret_cast<void***>(rbx5 + 36);
                    eax13 = *reinterpret_cast<void***>(rbx5 + 12);
                } else {
                    fun_14000b510();
                    edx15 = *reinterpret_cast<void***>(rbx5 + 36);
                    eax13 = *reinterpret_cast<void***>(rbx5 + 12);
                }
            }
            *reinterpret_cast<void***>(rbx5 + 36) = edx15 + 1;
        }
    }
    fun_1400086a0(r12_9, rdx10, r12_9, rdx10);
    return;
}

void fun_1400074f0(void* rcx, void** rdx) {
    void* rsp3;
    void** r8d4;
    void** rbx5;
    void** rax6;
    void** r12_7;
    void** v8;
    void** rdx9;
    uint32_t v10;
    uint32_t eax11;
    void** eax12;
    struct s0* rax13;
    int32_t v14;
    struct s0* rax15;
    void** eax16;
    void** r8_17;
    int32_t v18;
    int64_t rax19;

    rsp3 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 80);
    r8d4 = *reinterpret_cast<void***>(rdx + 16);
    __asm__("fld tword [rcx]");
    rbx5 = rdx;
    if (reinterpret_cast<signed char>(r8d4) < reinterpret_cast<signed char>(0)) {
        *reinterpret_cast<void***>(rdx + 16) = reinterpret_cast<void**>(6);
        r8d4 = reinterpret_cast<void**>(6);
    } else {
        if (!r8d4) {
            *reinterpret_cast<void***>(rdx + 16) = reinterpret_cast<void**>(1);
            r8d4 = reinterpret_cast<void**>(1);
        }
    }
    __asm__("fstp tword [rsp+0x30]");
    rax6 = fun_140006000(2, reinterpret_cast<int64_t>(rsp3) + 48, r8d4, reinterpret_cast<int64_t>(rsp3) + 76);
    r12_7 = rax6;
    if (v8 == 0xffff8000) {
        rdx9 = rax6;
        fun_140006440(v10, rdx9, rbx5, v10, rdx9, rbx5);
    } else {
        eax11 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5 + 8)) & 0x800;
        if (reinterpret_cast<signed char>(v8) < reinterpret_cast<signed char>(0xfffffffd) || reinterpret_cast<signed char>(v8) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx5 + 16))) {
            if (eax11) {
                eax12 = *reinterpret_cast<void***>(rbx5 + 16) - 1;
            } else {
                rax13 = fun_14000b558(r12_7, r12_7);
                eax12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rax13)) - 1);
            }
            *reinterpret_cast<void***>(rbx5 + 16) = eax12;
            rdx9 = r12_7;
            fun_140007290(v14, rdx9, v8, rbx5);
        } else {
            if (!eax11) {
                rax15 = fun_14000b558(r12_7);
                eax16 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rax15)) - reinterpret_cast<unsigned char>(v8));
                *reinterpret_cast<void***>(rbx5 + 16) = eax16;
                if (reinterpret_cast<signed char>(eax16) < reinterpret_cast<signed char>(0) && !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx5 + 12)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx5 + 12) == 0))) {
                    *reinterpret_cast<void***>(rbx5 + 12) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax16) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5 + 12)));
                }
            } else {
                *reinterpret_cast<void***>(rbx5 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5 + 16)) - reinterpret_cast<unsigned char>(v8));
            }
            r8_17 = v8;
            *reinterpret_cast<int32_t*>(&r8_17 + 4) = 0;
            fun_140006ef0(v18, r12_7, r8_17, rbx5);
            while (*reinterpret_cast<void***>(&rax19) = *reinterpret_cast<void***>(rbx5 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0, rdx9 = reinterpret_cast<void**>(static_cast<uint32_t>(rax19 - 1)), *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0, *reinterpret_cast<void***>(rbx5 + 12) = rdx9, !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax19)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax19) == 0))) {
                fun_1400060f0(32, rbx5, 32, rbx5);
            }
        }
    }
    fun_1400086a0(r12_7, rdx9, r12_7, rdx9);
    return;
}

struct s43 {
    unsigned char* f0;
    unsigned char* f8;
};

int64_t localeconv = 0x11588;

struct s43* fun_14000b528() {
    goto localeconv;
}

int32_t fun_14000b120(void** rcx, unsigned char* rdx, uint64_t r8, void** r9);

void** fun_14000b2a0(void** rcx, unsigned char* rdx, uint64_t r8, void** r9, int64_t a5) {
    void** r12_6;
    void** r9_7;
    int32_t eax8;
    int64_t rax9;

    r12_6 = rcx;
    if (!rcx) {
        r12_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 64 + 62);
    }
    fun_14000b490();
    fun_14000b488();
    r9_7 = reinterpret_cast<void**>(0x140010b78);
    if (r9) {
        r9_7 = r9;
    }
    eax8 = fun_14000b120(r12_6, rdx, r8, r9_7);
    rax9 = eax8;
    return *reinterpret_cast<void***>(&rax9);
}

void fun_140006440(uint32_t ecx, void** rdx, void** r8, ...) {
    void* rsp4;
    void** r10d5;
    signed char* r11_6;
    signed char* r9_7;
    uint32_t r10d8;
    void* rcx9;
    uint32_t eax10;
    void* rdx11;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 56);
    r10d5 = *reinterpret_cast<void***>(r8 + 8);
    *reinterpret_cast<void***>(r8 + 16) = reinterpret_cast<void**>(0xffffffff);
    if (!ecx) {
        if (!(reinterpret_cast<unsigned char>(r10d5) & 0x100)) {
            if (!(*reinterpret_cast<unsigned char*>(&r10d5) & 64)) {
                r11_6 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp4) + 44);
                r9_7 = r11_6;
            } else {
                r9_7 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp4) + 45);
                r11_6 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp4) + 44);
            }
        } else {
            r9_7 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp4) + 45);
            r11_6 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp4) + 44);
        }
    } else {
        r9_7 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp4) + 45);
        r11_6 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp4) + 44);
    }
    r10d8 = reinterpret_cast<unsigned char>(r10d5) & 32;
    *reinterpret_cast<int32_t*>(&rcx9) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
    do {
        eax10 = static_cast<uint32_t>(*reinterpret_cast<unsigned char*>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint64_t>(rcx9))) & 0xffffffdf | r10d8;
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(r9_7) + reinterpret_cast<uint64_t>(rcx9)) = *reinterpret_cast<signed char*>(&eax10);
        rcx9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx9) + 1);
    } while (!reinterpret_cast<int1_t>(rcx9 == 3));
    rdx11 = reinterpret_cast<void*>(r9_7 + 3);
    fun_1400062c0(r11_6, reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rdx11)) - reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r11_6)), r8);
    return;
}

void** fun_14000ade0(uint16_t* rcx, int64_t rdx) {
    int64_t r8_3;
    int64_t rax4;

    *reinterpret_cast<int32_t*>(&r8_3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_3) + 4) = 0;
    rax4 = rdx;
    if (rdx) {
        do {
            if (!rcx[r8_3]) 
                break;
            ++r8_3;
        } while (rax4 != r8_3);
        goto addr_14000ae04_4;
    } else {
        goto addr_14000ae04_4;
    }
    rax4 = r8_3;
    addr_14000ae04_4:
    return *reinterpret_cast<void***>(&rax4);
}

void** g14000c1c0 = reinterpret_cast<void**>(0xa0);

void** fun_14000a1e0(void** ecx, ...) {
    int64_t rcx2;
    void** rax3;
    int1_t zf4;
    void** ecx5;
    int64_t rsi6;
    void* rcx7;
    void** rdx8;
    void** ecx9;
    uint64_t rcx10;
    int1_t zf11;

    fun_14000a0b0(0);
    if (reinterpret_cast<signed char>(ecx) <= reinterpret_cast<signed char>(9)) {
        rcx2 = reinterpret_cast<int32_t>(ecx);
        rax3 = *reinterpret_cast<void***>(0x140010aa0 + rcx2 * 8);
        if (rax3) {
            zf4 = g140010af0 == 2;
            *reinterpret_cast<void***>(0x140010aa0 + rcx2 * 8) = *reinterpret_cast<void***>(rax3);
            if (!zf4) 
                goto addr_14000a22b_4; else 
                goto addr_14000a263_5;
        }
        ecx5 = ecx;
        *reinterpret_cast<void***>(&rsi6) = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx5));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
        rax3 = g14000c1c0;
        rcx7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(static_cast<int32_t>(rsi6 + 9) * 4 - 1) >> 3);
        rdx8 = reinterpret_cast<void**>((reinterpret_cast<int64_t>(rax3 - 0x1400101a0) >> 3) + reinterpret_cast<uint64_t>(rcx7));
        if (reinterpret_cast<unsigned char>(rdx8) <= reinterpret_cast<unsigned char>(0x120)) 
            goto addr_14000a2c2_7;
    } else {
        ecx9 = ecx;
        *reinterpret_cast<void***>(&rsi6) = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx9));
        rcx10 = reinterpret_cast<uint64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(&rsi6)) * 4 + 35) >> 3;
        *reinterpret_cast<int32_t*>(&rcx7) = *reinterpret_cast<int32_t*>(&rcx10);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    }
    rax3 = fun_14000b530(reinterpret_cast<uint64_t>(rcx7) << 3, rdx8);
    if (!rax3) {
        addr_14000a233_10:
        return rax3;
    } else {
        addr_14000a21c_11:
        zf11 = g140010af0 == 2;
        *reinterpret_cast<void***>(rax3 + 8) = ecx;
        *reinterpret_cast<void***>(rax3 + 12) = *reinterpret_cast<void***>(&rsi6);
        if (zf11) {
            addr_14000a263_5:
            LeaveCriticalSection(0x140010b00);
            rax3 = rax3;
            goto addr_14000a22b_4;
        } else {
            addr_14000a22b_4:
            *reinterpret_cast<void***>(rax3 + 16) = reinterpret_cast<void**>(0);
            goto addr_14000a233_10;
        }
    }
    addr_14000a2c2_7:
    g14000c1c0 = rax3 + reinterpret_cast<uint64_t>(rcx7) * 8;
    goto addr_14000a21c_11;
}

uint32_t fun_14000a940(void** rcx, void** rdx, ...) {
    int64_t rax3;
    uint32_t r9d4;
    void* r8_5;
    void** rcx6;
    void** rax7;
    void*** rdx8;

    rax3 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdx + 20));
    r9d4 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 20)) - *reinterpret_cast<uint32_t*>(&rax3);
    if (r9d4) {
        addr_14000a984_2:
        return r9d4;
    } else {
        r8_5 = reinterpret_cast<void*>(rax3 * 4);
        rcx6 = rcx + 24;
        rax7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx6) + reinterpret_cast<uint64_t>(r8_5));
        rdx8 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rdx) + reinterpret_cast<uint64_t>(r8_5) + 24);
        do {
            rax7 = rax7 - 4;
            rdx8 = rdx8 - 4;
            if (*reinterpret_cast<void***>(rax7) != *rdx8) 
                break;
        } while (reinterpret_cast<unsigned char>(rcx6) < reinterpret_cast<unsigned char>(rax7));
        goto addr_14000a984_2;
    }
    r9d4 = r9d4 - (r9d4 + reinterpret_cast<uint1_t>(r9d4 < r9d4 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax7)) < reinterpret_cast<unsigned char>(*rdx8)))) | 1;
    goto addr_14000a984_2;
}

void** fun_140008620(struct s28* rcx, void*** rdx, int32_t r8d) {
    struct s28* rsi4;
    void*** rdi5;
    void** ebx6;
    int64_t rax7;
    void** rax8;
    unsigned char* rdx9;
    uint32_t ecx10;
    void** r8_11;
    void** rax12;
    uint32_t ecx13;

    rsi4 = rcx;
    rdi5 = rdx;
    if (r8d <= 27) {
        ebx6 = reinterpret_cast<void**>(0);
    } else {
        *reinterpret_cast<int32_t*>(&rax7) = 4;
        ebx6 = reinterpret_cast<void**>(0);
        do {
            *reinterpret_cast<int32_t*>(&rax7) = *reinterpret_cast<int32_t*>(&rax7) + *reinterpret_cast<int32_t*>(&rax7);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax7) + 4) = 0;
            ++ebx6;
        } while (r8d > static_cast<int32_t>(rax7 + 23));
    }
    rax8 = fun_14000a1e0(ebx6);
    rdx9 = &rsi4->f1;
    *reinterpret_cast<void***>(rax8) = ebx6;
    ecx10 = rsi4->f0;
    r8_11 = rax8 + 4;
    *reinterpret_cast<void***>(rax8 + 4) = *reinterpret_cast<void***>(&ecx10);
    rax12 = r8_11;
    if (*reinterpret_cast<void***>(&ecx10)) {
        do {
            ecx13 = *rdx9;
            ++rax12;
            ++rdx9;
            *reinterpret_cast<void***>(rax12) = *reinterpret_cast<void***>(&ecx13);
        } while (*reinterpret_cast<void***>(&ecx13));
    }
    if (rdi5) {
        *rdi5 = rax12;
    }
    return r8_11;
}

void* fun_14000a060(void** rcx) {
    void* r8d2;
    void** rax3;
    void** rcx4;

    r8d2 = reinterpret_cast<void*>(0);
    rax3 = rcx + 24;
    rcx4 = rax3 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 20)) * 4;
    if (reinterpret_cast<unsigned char>(rax3) < reinterpret_cast<unsigned char>(rcx4)) {
        do {
            if (*reinterpret_cast<void***>(rax3)) 
                break;
            rax3 = rax3 + 4;
            r8d2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8d2) + 32);
        } while (reinterpret_cast<unsigned char>(rcx4) > reinterpret_cast<unsigned char>(rax3));
        goto addr_14000a09f_4;
    } else {
        goto addr_14000a09f_4;
    }
    if (reinterpret_cast<unsigned char>(rcx4) > reinterpret_cast<unsigned char>(rax3)) {
        __asm__("rep bsf edx, edx");
        r8d2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8d2) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax3)));
    }
    addr_14000a09f_4:
    return r8d2;
}

uint32_t fun_14000ab60(void** rcx, uint32_t* rdx) {
    int64_t rax3;
    void** r10_4;
    void*** rbx5;
    void** r8_6;
    int64_t rax7;
    void** rax8;
    uint32_t r9d9;
    uint32_t ecx10;

    rax3 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 20));
    r10_4 = rcx + 24;
    rbx5 = reinterpret_cast<void***>(r10_4 + rax3 * 4);
    r8_6 = reinterpret_cast<void**>(rbx5 + 0xfffffffffffffffc);
    __asm__("bsr eax, r11d");
    *reinterpret_cast<uint32_t*>(&rax7) = *reinterpret_cast<uint32_t*>(&rax3) ^ 31;
    *rdx = 32 - *reinterpret_cast<uint32_t*>(&rax7);
    if (*reinterpret_cast<int32_t*>(&rax7) <= reinterpret_cast<int32_t>(10)) {
        if (reinterpret_cast<unsigned char>(r10_4) < reinterpret_cast<unsigned char>(r8_6)) {
        }
        __asm__("movd xmm0, rdx");
        return *reinterpret_cast<uint32_t*>(&rax7);
    }
    *reinterpret_cast<uint32_t*>(&rax8) = *reinterpret_cast<uint32_t*>(&rax7) - 11;
    if (reinterpret_cast<unsigned char>(r10_4) >= reinterpret_cast<unsigned char>(r8_6)) {
        if (*reinterpret_cast<uint32_t*>(&rax8)) {
            __asm__("movd xmm0, rdx");
            return *reinterpret_cast<uint32_t*>(&rax8);
        }
    } else {
        if (*reinterpret_cast<uint32_t*>(&rax8)) {
            r9d9 = 32 - *reinterpret_cast<uint32_t*>(&rax8);
            rax8 = reinterpret_cast<void**>(rbx5 + 0xfffffffffffffff8);
            if (reinterpret_cast<unsigned char>(r10_4) < reinterpret_cast<unsigned char>(rax8)) {
                ecx10 = r9d9;
                __asm__("movd xmm0, rdx");
                return *reinterpret_cast<uint32_t*>(rbx5 + 0xfffffffffffffff4) >> *reinterpret_cast<signed char*>(&ecx10);
            }
        }
        __asm__("movd xmm0, rdx");
        return *reinterpret_cast<uint32_t*>(&rax8);
    }
}

void** fun_1400085e0(uint32_t ecx) {
    void** ebx2;
    int64_t rax3;
    void** rax4;

    ebx2 = reinterpret_cast<void**>(0);
    if (reinterpret_cast<int32_t>(ecx) > reinterpret_cast<int32_t>(27)) {
        *reinterpret_cast<int32_t*>(&rax3) = 4;
        do {
            *reinterpret_cast<int32_t*>(&rax3) = *reinterpret_cast<int32_t*>(&rax3) + *reinterpret_cast<int32_t*>(&rax3);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
            ++ebx2;
        } while (reinterpret_cast<int32_t>(static_cast<uint32_t>(rax3 + 23)) < reinterpret_cast<int32_t>(ecx));
    }
    rax4 = fun_14000a1e0(ebx2);
    *reinterpret_cast<void***>(rax4) = ebx2;
    return rax4 + 4;
}

void** g140010aa8;

void** fun_14000a400(void** ecx, ...) {
    void** rax2;
    int1_t zf3;
    void** rdx4;
    int1_t zf5;

    fun_14000a0b0(0);
    rax2 = g140010aa8;
    if (rax2) {
        zf3 = g140010af0 == 2;
        g140010aa8 = *reinterpret_cast<void***>(rax2);
        if (zf3) 
            goto addr_14000a493_3; else 
            goto addr_14000a42d_4;
    }
    rax2 = g14000c1c0;
    rdx4 = reinterpret_cast<void**>((reinterpret_cast<int64_t>(rax2 - 0x1400101a0) >> 3) + 5);
    if (reinterpret_cast<unsigned char>(rdx4) <= reinterpret_cast<unsigned char>(0x120)) {
        g14000c1c0 = rax2 + 40;
        goto addr_14000a47c_7;
    } else {
        rax2 = fun_14000b530(40, rdx4);
        if (!rax2) {
            addr_14000a43e_9:
            return rax2;
        } else {
            addr_14000a47c_7:
            zf5 = g140010af0 == 2;
            *reinterpret_cast<void***>(rax2 + 8) = reinterpret_cast<void**>(0x200000001);
            if (!zf5) {
                addr_14000a42d_4:
                *reinterpret_cast<void***>(rax2 + 24) = ecx;
                *reinterpret_cast<void***>(rax2 + 16) = reinterpret_cast<void**>(0x100000000);
                goto addr_14000a43e_9;
            } else {
                addr_14000a493_3:
                LeaveCriticalSection(0x140010b00);
                rax2 = rax2;
                goto addr_14000a42d_4;
            }
        }
    }
}

void** g140010180;

void** fun_14000a620(void** rcx, uint32_t edx, ...) {
    void** rdx2;
    void** r13_3;
    uint32_t ebx4;
    uint32_t eax5;
    void** rax6;
    int32_t ebx7;
    void** r12_8;
    void** rdi9;
    void** rax10;
    int1_t zf11;
    void** rax12;
    void** rsi13;
    void** rax14;
    int1_t zf15;
    int64_t rax16;
    int1_t zf17;
    void** rcx18;

    *reinterpret_cast<uint32_t*>(&rdx2) = edx;
    r13_3 = rcx;
    ebx4 = *reinterpret_cast<uint32_t*>(&rdx2);
    eax5 = *reinterpret_cast<uint32_t*>(&rdx2) & 3;
    if (!eax5 || (*reinterpret_cast<uint32_t*>(&rdx2) = *reinterpret_cast<uint32_t*>(0x14000d5a0 + (eax5 - 1) * 4), *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0, rax6 = fun_14000a350(rcx, *reinterpret_cast<uint32_t*>(&rdx2), 0), r13_3 = rax6, !!rax6)) {
        ebx7 = reinterpret_cast<int32_t>(ebx4) >> 2;
        r12_8 = r13_3;
        if (!ebx7) {
            addr_14000a6bb_3:
            return r12_8;
        } else {
            rdi9 = g140010180;
            if (!rdi9) {
                fun_14000a0b0(1, 1);
                rdi9 = g140010180;
                if (!rdi9) {
                    rax10 = fun_14000a1e0(1, 1);
                    rdi9 = rax10;
                    if (!rax10) {
                        g140010180 = reinterpret_cast<void**>(0);
                        *reinterpret_cast<int32_t*>(&r12_8) = 0;
                        *reinterpret_cast<int32_t*>(&r12_8 + 4) = 0;
                        goto addr_14000a6bb_3;
                    } else {
                        g140010180 = rdi9;
                        *reinterpret_cast<void***>(rdi9 + 20) = reinterpret_cast<void**>(0x27100000001);
                        *reinterpret_cast<void***>(rdi9) = reinterpret_cast<void**>(0);
                        goto addr_14000a7c4_9;
                    }
                } else {
                    addr_14000a7c4_9:
                    zf11 = g140010af0 == 2;
                    if (zf11) {
                        LeaveCriticalSection(0x140010b28, rdx2);
                        goto addr_14000a654_11;
                    }
                }
            } else {
                addr_14000a654_11:
                r12_8 = r13_3;
            }
        }
        while (1) {
            if (!(*reinterpret_cast<unsigned char*>(&ebx7) & 1)) {
                addr_14000a670_13:
                ebx7 = ebx7 >> 1;
                if (!ebx7) 
                    goto addr_14000a6bb_3;
            } else {
                rdx2 = rdi9;
                rax12 = fun_14000a4c0(r12_8, rdx2);
                if (!rax12) 
                    break;
                if (!r12_8) 
                    goto addr_14000a740_16; else 
                    goto addr_14000a6a4_17;
            }
            addr_14000a674_18:
            rsi13 = *reinterpret_cast<void***>(rdi9);
            if (!rsi13) {
                fun_14000a0b0(1, 1);
                rsi13 = *reinterpret_cast<void***>(rdi9);
                if (!rsi13) {
                    rdx2 = rdi9;
                    rax14 = fun_14000a4c0(rdi9, rdx2);
                    *reinterpret_cast<void***>(rdi9) = rax14;
                    rsi13 = rax14;
                    if (!rax14) 
                        break;
                    *reinterpret_cast<void***>(rax14) = reinterpret_cast<void**>(0);
                }
                zf15 = g140010af0 == 2;
                if (zf15) {
                    LeaveCriticalSection(0x140010b28, rdx2);
                }
            }
            rdi9 = rsi13;
            continue;
            addr_14000a740_16:
            r12_8 = rax12;
            goto addr_14000a670_13;
            addr_14000a6a4_17:
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_8 + 8)) <= reinterpret_cast<signed char>(9)) {
                fun_14000a0b0(0, 0);
                rax16 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_8 + 8));
                zf17 = g140010af0 == 2;
                rdx2 = *reinterpret_cast<void***>(0x140010aa0 + rax16 * 8);
                *reinterpret_cast<void***>(0x140010aa0 + rax16 * 8) = r12_8;
                *reinterpret_cast<void***>(r12_8) = rdx2;
                r12_8 = rax12;
                if (zf17) {
                    LeaveCriticalSection(0x140010b00);
                    goto addr_14000a670_13;
                }
            } else {
                rcx18 = r12_8;
                r12_8 = rax12;
                fun_14000b518(rcx18, rdx2);
                ebx7 = ebx7 >> 1;
                if (ebx7) 
                    goto addr_14000a674_18; else 
                    goto addr_14000a6bb_3;
            }
        }
    }
    return 0;
}

void** fun_14000a4c0(void** rcx, void** rdx) {
    int64_t rbp3;
    int64_t rdi4;
    void** r13_5;
    void** r15_6;
    int32_t eax7;
    void* ecx8;
    void** ebx9;
    void** ecx10;
    void** rax11;
    void** r12_12;
    void** r11_13;
    void** rsi14;
    void** rax15;
    void** r9_16;
    void** r14_17;
    void** rbp18;
    void** rdi19;
    void* r13_20;
    int64_t r10_21;
    void** rcx22;
    void** rdx23;
    uint64_t r8_24;
    int64_t rax25;
    int64_t r15_26;
    uint64_t rax27;

    rbp3 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 20));
    rdi4 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdx + 20));
    r13_5 = rcx;
    r15_6 = rdx;
    if (*reinterpret_cast<int32_t*>(&rbp3) >= *reinterpret_cast<int32_t*>(&rdi4)) {
        eax7 = *reinterpret_cast<int32_t*>(&rdi4);
        r15_6 = rcx;
        rdi4 = *reinterpret_cast<int32_t*>(&rbp3);
        r13_5 = rdx;
        rbp3 = eax7;
    }
    ecx8 = reinterpret_cast<void*>(0);
    ebx9 = reinterpret_cast<void**>(static_cast<uint32_t>(rdi4 + rbp3));
    *reinterpret_cast<unsigned char*>(&ecx8) = reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r15_6 + 12)) < reinterpret_cast<signed char>(ebx9));
    ecx10 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(ecx8) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r15_6 + 8)));
    rax11 = fun_14000a1e0(ecx10);
    r12_12 = rax11;
    if (rax11) {
        r11_13 = rax11 + 24;
        rsi14 = r11_13 + reinterpret_cast<int32_t>(ebx9) * 4;
        if (reinterpret_cast<unsigned char>(r11_13) < reinterpret_cast<unsigned char>(rsi14)) {
            rax15 = fun_14000b540(r11_13);
            r11_13 = rax15;
        }
        r9_16 = r13_5 + 24;
        r14_17 = r15_6 + 24;
        rbp18 = r9_16 + rbp3 * 4;
        rdi19 = r14_17 + rdi4 * 4;
        if (reinterpret_cast<unsigned char>(r9_16) < reinterpret_cast<unsigned char>(rbp18)) {
            r13_20 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(rdi19) - reinterpret_cast<unsigned char>(r15_6) - 25 >> 2) * 4 + 4);
            if (reinterpret_cast<unsigned char>(rdi19) < reinterpret_cast<unsigned char>(r15_6 + 25)) {
                r13_20 = reinterpret_cast<void*>(4);
            }
            while (1) {
                *reinterpret_cast<void***>(&r10_21) = *reinterpret_cast<void***>(r9_16);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_21) + 4) = 0;
                r9_16 = r9_16 + 4;
                if (!*reinterpret_cast<void***>(&r10_21)) {
                    r11_13 = r11_13 + 4;
                    if (reinterpret_cast<unsigned char>(rbp18) <= reinterpret_cast<unsigned char>(r9_16)) 
                        break;
                } else {
                    rcx22 = r11_13;
                    rdx23 = r14_17;
                    *reinterpret_cast<int32_t*>(&r8_24) = 0;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = 0;
                    do {
                        *reinterpret_cast<void***>(&rax25) = *reinterpret_cast<void***>(rdx23);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
                        *reinterpret_cast<void***>(&r15_26) = *reinterpret_cast<void***>(rcx22);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_26) + 4) = 0;
                        rdx23 = rdx23 + 4;
                        rcx22 = rcx22 + 4;
                        rax27 = rax25 * r10_21 + r15_26 + r8_24;
                        *reinterpret_cast<void***>(rcx22 + 0xfffffffffffffffc) = *reinterpret_cast<void***>(&rax27);
                        r8_24 = rax27 >> 32;
                    } while (reinterpret_cast<unsigned char>(rdi19) > reinterpret_cast<unsigned char>(rdx23));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r11_13) + reinterpret_cast<uint64_t>(r13_20)) = *reinterpret_cast<int32_t*>(&r8_24);
                    r11_13 = r11_13 + 4;
                    if (reinterpret_cast<unsigned char>(rbp18) <= reinterpret_cast<unsigned char>(r9_16)) 
                        break;
                }
            }
        }
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(ebx9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(ebx9 == 0))) {
            do {
                rsi14 = rsi14 - 4;
                if (*reinterpret_cast<void***>(rsi14 + 0xfffffffffffffffc)) 
                    break;
                --ebx9;
            } while (ebx9);
        }
        *reinterpret_cast<void***>(r12_12 + 20) = ebx9;
    }
    return r12_12;
}

void fun_14000a2e0(void** rcx, ...) {
    int64_t rdx2;
    int1_t zf3;
    void** rcx4;

    if (rcx) {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rcx + 8)) <= reinterpret_cast<signed char>(9)) {
            fun_14000a0b0(0);
            rdx2 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 8));
            zf3 = g140010af0 == 2;
            rcx4 = *reinterpret_cast<void***>(0x140010aa0 + rdx2 * 8);
            *reinterpret_cast<void***>(0x140010aa0 + rdx2 * 8) = rcx;
            *reinterpret_cast<void***>(rcx) = rcx4;
            if (zf3) {
                goto LeaveCriticalSection;
            }
        } else {
            goto free;
        }
    }
    return;
}

void** fun_14000a830(void** rcx, uint32_t edx, ...) {
    void** r12_3;
    void** ecx4;
    uint32_t ebx5;
    void* esi6;
    void** eax7;
    int64_t rbp8;
    void** r13d9;
    void** rax10;
    void** r14_11;
    void** rdi12;
    void** rcx13;
    void** rsi14;
    void** r9_15;
    uint32_t ebx16;
    void** rdi17;
    void** rsi18;
    void** r8_19;
    uint32_t edx20;
    uint32_t r10d21;
    uint32_t ecx22;
    uint32_t ecx23;
    void* rax24;

    r12_3 = rcx;
    ecx4 = *reinterpret_cast<void***>(rcx + 8);
    ebx5 = edx;
    esi6 = reinterpret_cast<void*>(reinterpret_cast<int32_t>(edx) >> 5);
    eax7 = *reinterpret_cast<void***>(r12_3 + 12);
    *reinterpret_cast<void***>(&rbp8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_3 + 20)) + reinterpret_cast<uint32_t>(esi6));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp8) + 4) = 0;
    r13d9 = reinterpret_cast<void**>(static_cast<uint32_t>(rbp8 + 1));
    if (reinterpret_cast<signed char>(r13d9) > reinterpret_cast<signed char>(eax7)) {
        do {
            eax7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax7) + reinterpret_cast<unsigned char>(eax7));
            ++ecx4;
        } while (reinterpret_cast<signed char>(r13d9) > reinterpret_cast<signed char>(eax7));
    }
    rax10 = fun_14000a1e0(ecx4);
    r14_11 = rax10;
    if (!rax10) {
        addr_14000a91d_4:
        return r14_11;
    } else {
        rdi12 = rax10 + 24;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi6) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi6 == 0))) {
            rcx13 = rdi12;
            rdi12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi12) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(esi6))) << 2));
            fun_14000b540(rcx13);
        }
        rsi14 = r12_3 + 24;
        r9_15 = rsi14 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_3 + 20)) * 4;
        ebx16 = ebx5 & 31;
        if (ebx16) 
            goto addr_14000a8b1_8;
    }
    do {
        *reinterpret_cast<void***>(rdi12) = *reinterpret_cast<void***>(rsi14);
        rdi17 = rdi12 + 4;
        rsi18 = rsi14 + 4;
        if (reinterpret_cast<unsigned char>(r9_15) <= reinterpret_cast<unsigned char>(rsi18)) 
            break;
        *reinterpret_cast<void***>(rdi17) = *reinterpret_cast<void***>(rsi18);
        rdi12 = rdi17 + 4;
        rsi14 = rsi18 + 4;
    } while (reinterpret_cast<unsigned char>(r9_15) > reinterpret_cast<unsigned char>(rsi14));
    goto addr_14000a93c_17;
    addr_14000a911_18:
    *reinterpret_cast<void***>(r14_11 + 20) = *reinterpret_cast<void***>(&rbp8);
    fun_14000a2e0(r12_3, r12_3);
    goto addr_14000a91d_4;
    addr_14000a93c_17:
    goto addr_14000a911_18;
    addr_14000a8b1_8:
    r8_19 = rdi12;
    edx20 = 0;
    r10d21 = 32 - ebx16;
    do {
        ecx22 = ebx16;
        r8_19 = r8_19 + 4;
        rsi14 = rsi14 + 4;
        ecx23 = r10d21;
        *reinterpret_cast<void***>(r8_19 + 0xfffffffffffffffc) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi14)) << *reinterpret_cast<unsigned char*>(&ecx22) | edx20);
        edx20 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi14 + 0xfffffffffffffffc)) >> *reinterpret_cast<signed char*>(&ecx23);
    } while (reinterpret_cast<unsigned char>(r9_15) > reinterpret_cast<unsigned char>(rsi14));
    rax24 = reinterpret_cast<void*>((reinterpret_cast<unsigned char>(r9_15) - reinterpret_cast<unsigned char>(r12_3) - 25 >> 2) * 4 + 4);
    if (reinterpret_cast<unsigned char>(r9_15) >= reinterpret_cast<unsigned char>(r12_3 + 25)) 
        goto addr_14000a908_21;
    rax24 = reinterpret_cast<void*>(4);
    addr_14000a908_21:
    if (edx20) {
        *reinterpret_cast<void***>(&rbp8) = r13d9;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rdi12) + reinterpret_cast<uint64_t>(rax24)) = edx20;
    goto addr_14000a911_18;
}

void** fun_14000a350(void** rcx, uint32_t edx, uint32_t r8d) {
    void** esi4;
    void** r12_5;
    uint64_t rbx6;
    int64_t rdx7;
    int64_t rcx8;
    int64_t rax9;
    uint64_t rax10;
    void** r13_11;
    int64_t rax12;
    void** rax13;
    void** r8_14;
    void** rcx15;

    esi4 = *reinterpret_cast<void***>(rcx + 20);
    r12_5 = rcx;
    rbx6 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d)));
    rdx7 = reinterpret_cast<int32_t>(edx);
    *reinterpret_cast<void***>(&rcx8) = reinterpret_cast<void**>(0);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx8) + 4) = 0;
    do {
        *reinterpret_cast<int32_t*>(&rax9) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r12_5) + reinterpret_cast<uint64_t>(rcx8 * 4) + 24);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax9) + 4) = 0;
        rax10 = rax9 * rdx7 + rbx6;
        *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r12_5) + reinterpret_cast<uint64_t>(rcx8 * 4) + 24) = *reinterpret_cast<int32_t*>(&rax10);
        ++rcx8;
        rbx6 = rax10 >> 32;
    } while (reinterpret_cast<signed char>(esi4) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rcx8)));
    r13_11 = r12_5;
    if (!rbx6) 
        goto addr_14000a3b2_4;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_5 + 12)) <= reinterpret_cast<signed char>(esi4)) {
        *reinterpret_cast<void***>(&rax12) = *reinterpret_cast<void***>(r12_5 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        rax13 = fun_14000a1e0(static_cast<uint32_t>(rax12 + 1));
        r13_11 = rax13;
        if (!rax13) {
            addr_14000a3b2_4:
            return r13_11;
        } else {
            r8_14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_5 + 20)) * 4 + 8);
            fun_14000b538(rax13 + 16, r12_5 + 16, r8_14);
            rcx15 = r12_5;
            r12_5 = r13_11;
            fun_14000a2e0(rcx15, rcx15);
        }
    }
    r13_11 = r12_5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_5 + reinterpret_cast<int32_t>(esi4) * 4) + 24) = *reinterpret_cast<int32_t*>(&rbx6);
    *reinterpret_cast<void***>(r12_5 + 20) = esi4 + 1;
    goto addr_14000a3b2_4;
}

int64_t fun_1400086c0(void** rcx, void** rdx, ...) {
    int64_t rax3;
    void** r12_4;
    void** r11_5;
    void** esi6;
    void** rbx7;
    void** rbp8;
    void* r10_9;
    void** rdi10;
    void** r10_11;
    int64_t rax12;
    void** r8d13;
    void** ecx14;
    uint32_t eax15;
    uint32_t v16;
    int64_t r13_17;
    uint32_t eax18;
    void** r8_19;
    int64_t rax20;
    int64_t r15_21;
    void** r9_22;
    void** r8_23;
    uint64_t r14_24;
    int64_t rdx25;
    int64_t rax26;
    int64_t rcx27;
    uint64_t rax28;
    int64_t rax29;
    uint64_t rcx30;
    uint64_t rdx31;
    int64_t rcx32;
    int64_t rdx33;
    uint64_t rdx34;
    uint64_t rax35;
    void** rax36;
    uint32_t eax37;

    *reinterpret_cast<uint32_t*>(&rax3) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    r12_4 = rcx;
    r11_5 = rdx;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rcx + 20)) < reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 20))) {
        addr_1400087c8_2:
        return rax3;
    } else {
        esi6 = *reinterpret_cast<void***>(rdx + 20) - 1;
        rbx7 = rdx + 24;
        rbp8 = rcx + 24;
        r10_9 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(esi6))) << 2);
        rdi10 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rbx7) + reinterpret_cast<uint64_t>(r10_9));
        r10_11 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r10_9) + reinterpret_cast<unsigned char>(rbp8));
        *reinterpret_cast<void***>(&rax12) = *reinterpret_cast<void***>(rdi10);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        r8d13 = *reinterpret_cast<void***>(r10_11);
        ecx14 = reinterpret_cast<void**>(static_cast<uint32_t>(rax12 + 1));
        eax15 = reinterpret_cast<unsigned char>(r8d13) / reinterpret_cast<unsigned char>(ecx14);
        v16 = eax15;
        *reinterpret_cast<uint32_t*>(&r13_17) = eax15;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_17) + 4) = 0;
        if (reinterpret_cast<unsigned char>(r8d13) < reinterpret_cast<unsigned char>(ecx14)) {
            addr_140008773_4:
            eax18 = fun_14000a940(r12_4, r11_5);
            if (reinterpret_cast<int32_t>(eax18) < reinterpret_cast<int32_t>(0)) {
                addr_1400087c4_5:
                *reinterpret_cast<uint32_t*>(&rax3) = v16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
                goto addr_1400087c8_2;
            } else {
                addr_140008782_6:
                r8_19 = rbp8;
                v16 = static_cast<uint32_t>(r13_17 + 1);
                *reinterpret_cast<uint32_t*>(&rax20) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
            }
        } else {
            *reinterpret_cast<uint32_t*>(&r15_21) = eax15;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r15_21) + 4) = 0;
            r9_22 = rbx7;
            r8_23 = rbp8;
            *reinterpret_cast<int32_t*>(&r14_24) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_24) + 4) = 0;
            *reinterpret_cast<uint32_t*>(&rdx25) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
            do {
                *reinterpret_cast<void***>(&rax26) = *reinterpret_cast<void***>(r9_22);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax26) + 4) = 0;
                *reinterpret_cast<void***>(&rcx27) = *reinterpret_cast<void***>(r8_23);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx27) + 4) = 0;
                r9_22 = r9_22 + 4;
                r8_23 = r8_23 + 4;
                rax28 = rax26 * r15_21 + r14_24;
                *reinterpret_cast<int32_t*>(&rax29) = *reinterpret_cast<int32_t*>(&rax28);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
                r14_24 = rax28 >> 32;
                rcx30 = reinterpret_cast<uint64_t>(rcx27 - (rax29 + rdx25));
                *reinterpret_cast<void***>(r8_23 + 0xfffffffffffffffc) = *reinterpret_cast<void***>(&rcx30);
                rdx31 = rcx30 >> 32;
                *reinterpret_cast<uint32_t*>(&rdx25) = *reinterpret_cast<uint32_t*>(&rdx31) & 1;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx25) + 4) = 0;
            } while (reinterpret_cast<unsigned char>(rdi10) >= reinterpret_cast<unsigned char>(r9_22));
            if (!*reinterpret_cast<void***>(r10_11)) 
                goto addr_14000880b_10; else 
                goto addr_140008773_4;
        }
    }
    do {
        *reinterpret_cast<void***>(&rcx32) = *reinterpret_cast<void***>(rbx7);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx32) + 4) = 0;
        *reinterpret_cast<void***>(&rdx33) = *reinterpret_cast<void***>(r8_19);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = 0;
        rbx7 = rbx7 + 4;
        r8_19 = r8_19 + 4;
        rdx34 = reinterpret_cast<uint64_t>(rdx33 - (rax20 + rcx32));
        *reinterpret_cast<void***>(r8_19 + 0xfffffffffffffffc) = *reinterpret_cast<void***>(&rdx34);
        rax35 = rdx34 >> 32;
        *reinterpret_cast<uint32_t*>(&rax20) = *reinterpret_cast<uint32_t*>(&rax35) & 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
    } while (reinterpret_cast<unsigned char>(rdi10) >= reinterpret_cast<unsigned char>(rbx7));
    rax36 = rbp8 + reinterpret_cast<int32_t>(esi6) * 4;
    if (!*reinterpret_cast<void***>(rax36)) {
        while ((rax36 = rax36 - 4, reinterpret_cast<unsigned char>(rbp8) < reinterpret_cast<unsigned char>(rax36)) && !*reinterpret_cast<void***>(rax36)) {
            --esi6;
        }
        *reinterpret_cast<void***>(r12_4 + 20) = esi6;
        goto addr_1400087c4_5;
    }
    addr_14000880b_10:
    while ((r10_11 = r10_11 - 4, reinterpret_cast<unsigned char>(rbp8) < reinterpret_cast<unsigned char>(r10_11)) && !*reinterpret_cast<void***>(r10_11)) {
        --esi6;
    }
    *reinterpret_cast<void***>(r12_4 + 20) = esi6;
    eax37 = fun_14000a940(r12_4, r11_5);
    if (reinterpret_cast<int32_t>(eax37) >= reinterpret_cast<int32_t>(0)) 
        goto addr_140008782_6;
    goto addr_1400087c4_5;
}

int64_t _errno = 0x1150e;

int32_t* fun_14000b4c8(int64_t rcx, ...) {
    goto _errno;
}

int64_t ___mb_cur_max_func = 0x11484;

int32_t fun_14000b490() {
    goto ___mb_cur_max_func;
}

int64_t ___lc_codepage_func = 0x1146e;

int32_t fun_14000b488() {
    goto ___lc_codepage_func;
}

int64_t WideCharToMultiByte = 0x11440;

int32_t fun_14000af40(signed char* rcx, uint16_t dx, int32_t r8d, int32_t r9d) {
    int64_t rcx5;
    int32_t eax6;
    int32_t* rax7;

    *reinterpret_cast<int32_t*>(&rcx5) = r8d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    if (r8d) {
        eax6 = reinterpret_cast<int32_t>(WideCharToMultiByte(rcx5));
        if (!eax6 || !1) {
            addr_14000afb4_3:
            rax7 = fun_14000b4c8(rcx5, rcx5);
            *rax7 = 42;
            return -1;
        } else {
            addr_14000af62_4:
            return eax6;
        }
    } else {
        if (dx > 0xff) 
            goto addr_14000afb4_3;
        *rcx = *reinterpret_cast<signed char*>(&dx);
        eax6 = 1;
        goto addr_14000af62_4;
    }
}

int64_t MultiByteToWideChar = 0x113d4;

int64_t IsDBCSLeadByteEx = 0x113a8;

int32_t fun_14000b120(void** rcx, unsigned char* rdx, uint64_t r8, void** r9) {
    int32_t eax5;
    void** eax6;
    uint32_t edx7;
    uint32_t v8;
    unsigned char* r8_9;
    int64_t rcx10;
    int32_t v11;
    int32_t eax12;
    int64_t rcx13;
    int32_t v14;
    int32_t eax15;
    int32_t v16;
    uint32_t eax17;
    uint32_t eax18;
    int32_t v19;
    int32_t eax20;
    int32_t* rax21;

    if (!rdx) {
        return 0;
    }
    if (!r8) {
        eax5 = -2;
    } else {
        eax6 = *reinterpret_cast<void***>(r9);
        edx7 = *rdx;
        *reinterpret_cast<void***>(r9) = reinterpret_cast<void**>(0);
        if (!*reinterpret_cast<signed char*>(&edx7)) {
            eax5 = 0;
            *reinterpret_cast<void***>(rcx) = reinterpret_cast<void**>(0);
        } else {
            if (v8 <= 1) 
                goto addr_14000b1d8_8;
            if (*reinterpret_cast<signed char*>(&eax6)) 
                goto addr_14000b210_10; else 
                goto addr_14000b169_11;
        }
    }
    addr_14000b1ff_12:
    return eax5;
    addr_14000b210_10:
    r8_9 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 72 + 60);
    addr_14000b1ae_13:
    *reinterpret_cast<int32_t*>(&rcx10) = v11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    eax12 = reinterpret_cast<int32_t>(MultiByteToWideChar(rcx10, 8, r8_9, 2));
    if (eax12) {
        return 2;
    }
    addr_14000b169_11:
    *reinterpret_cast<int32_t*>(&rcx13) = v14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
    eax15 = reinterpret_cast<int32_t>(IsDBCSLeadByteEx(rcx13));
    if (!eax15) {
        addr_14000b1d8_8:
        if (!v16) {
            eax17 = *rdx;
            *reinterpret_cast<void***>(rcx) = *reinterpret_cast<void***>(&eax17);
            return 1;
        }
    } else {
        if (r8 == 1) {
            eax18 = *rdx;
            *reinterpret_cast<void***>(r9) = *reinterpret_cast<void***>(&eax18);
            eax5 = -2;
            goto addr_14000b1ff_12;
        } else {
            r8_9 = rdx;
            goto addr_14000b1ae_13;
        }
    }
    *reinterpret_cast<int32_t*>(&rcx10) = v19;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    eax20 = reinterpret_cast<int32_t>(MultiByteToWideChar(rcx10, 8, rdx, 1));
    if (!eax20) {
        rax21 = fun_14000b4c8(rcx10, rcx10);
        *rax21 = 42;
        eax5 = -1;
        goto addr_14000b1ff_12;
    } else {
        eax5 = 1;
        goto addr_14000b1ff_12;
    }
}

int64_t __setusermatherr = 0x114d6;

void fun_140005730(int64_t rcx) {
    g1400100b0 = rcx;
    goto __setusermatherr;
}

int64_t __getmainargs = 0x1149a;

void fun_14000b498(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
    goto __getmainargs;
}

struct s44 {
    void* f0;
    uint32_t f4;
};

struct s45 {
    signed char[32] pad32;
    void** f20;
    signed char[15] pad48;
    void** f30;
};

struct s46 {
    signed char[32] pad32;
    int32_t f20;
    signed char[4] pad40;
    void** f28;
    signed char[47] pad88;
    int64_t f58;
};

struct s47 {
    uint32_t f0;
    int32_t f4;
};

struct s48 {
    int32_t f0;
    int32_t f4;
};

struct s49 {
    int32_t f0;
    signed char[4] pad8;
    int64_t f8;
    int64_t f10;
};

void fun_1400053a0(void** rcx, void** rdx, void** r8, void** r9) {
    struct s44* rsi5;
    int64_t rax6;
    struct s10* rdi7;
    struct s10* rbx8;
    struct s45* rsp9;
    uint64_t rax10;
    uint32_t eax11;
    struct s2* r14_12;
    void* r12_13;
    void** r12_14;
    void** r13d15;
    int64_t* rsp16;
    void** rdx17;
    int64_t* rsp18;
    struct s46* rsp19;
    int64_t rax20;
    struct s13* rdi21;
    struct s47* rsi22;
    struct s15* rdi23;
    struct s48* rsi24;
    int64_t* rsp25;
    struct s10* rbx26;
    struct s2* r15_27;
    void* rcx28;
    void** r8_29;
    void* r14_30;
    void*** rcx31;
    void** r14_32;
    void* rax33;
    void* r10_34;
    void* rax35;
    void** r13_36;
    int64_t* rsp37;
    int64_t* rsp38;
    void* rax39;
    int64_t* rsp40;
    void* rax41;
    int64_t* rsp42;
    int32_t edx43;
    int64_t rdi44;
    void* rbx45;
    struct s5* rax46;
    struct s49* rax47;
    int64_t rdx48;
    int64_t rcx49;
    int64_t* rsp50;
    int1_t less51;
    int64_t* rsp52;
    int64_t* rsp53;

    *reinterpret_cast<int32_t*>(&rsi5) = g1400100a0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rsi5)) 
        goto addr_1400053bf_2;
    g1400100a0 = 1;
    fun_140005d30(rcx, rdx, r8, r9);
    rax6 = fun_140005f70(rcx);
    rdi7 = g14000d740;
    rbx8 = g14000d750;
    g1400100a4 = 0;
    rsp9 = reinterpret_cast<struct s45*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 - rax6);
    g1400100a8 = reinterpret_cast<struct s5*>(&rsp9->f30);
    rax10 = reinterpret_cast<uint64_t>(rdi7) - reinterpret_cast<uint64_t>(rbx8);
    if (reinterpret_cast<int64_t>(rax10) <= reinterpret_cast<int64_t>(7)) 
        goto addr_1400053bf_2;
    if (reinterpret_cast<int64_t>(rax10) > reinterpret_cast<int64_t>(11)) {
        if (rbx8->f0) 
            goto addr_140005668_6;
        eax11 = rbx8->f4;
        if (!(eax11 | rbx8->f8)) 
            goto addr_1400055ce_8;
    } else {
        addr_140005435_9:
        if (rbx8->f0) 
            goto addr_140005668_6; else 
            goto addr_14000543f_10;
    }
    addr_140005442_11:
    if (eax11) {
        addr_140005668_6:
        if (reinterpret_cast<uint64_t>(rbx8) >= reinterpret_cast<uint64_t>(rdi7)) {
            addr_1400053bf_2:
            return;
        } else {
            r14_12 = g14000d730;
            do {
                *reinterpret_cast<uint32_t*>(&r12_13) = rbx8->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = 0;
                rbx8 = reinterpret_cast<struct s10*>(&rbx8->f8);
                r12_14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r12_13) + reinterpret_cast<uint64_t>(r14_12));
                r13d15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(rbx8->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_14)));
                rsp16 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                *rsp16 = 0x14000569a;
                fun_140005230(r12_14);
                rsp9 = reinterpret_cast<struct s45*>(rsp16 + 1);
                *reinterpret_cast<void***>(r12_14) = r13d15;
            } while (reinterpret_cast<uint64_t>(rbx8) < reinterpret_cast<uint64_t>(rdi7));
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rdx17) = rbx8->f8;
        *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx17) != 1) {
            addr_1400056c8_16:
            rsp18 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
            *rsp18 = 0x1400056d4;
            fun_1400051c0("  Unknown pseudo relocation protocol version %d.\n", rdx17, r8, r9);
            rsp19 = reinterpret_cast<struct s46*>(rsp18 + 1 - 11);
            rax20 = g1400100b0;
            if (rax20) {
                rdi7->f0 = rsi5->f0;
                rdi21 = reinterpret_cast<struct s13*>(&rdi7->f4);
                rsi22 = reinterpret_cast<struct s47*>(&rsi5->f4);
                rsp19->f20 = 0x4000d280;
                rsp19->f28 = rdx17;
                rdi21->f0 = rsi22->f0;
                rdi23 = reinterpret_cast<struct s15*>(&rdi21->f4);
                rsi24 = reinterpret_cast<struct s48*>(&rsi22->f4);
                rdi23->f0 = rsi24->f0;
                rdi23->f4 = rsi24->f4;
                rsp25 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp19) - 8);
                *rsp25 = 0x14000571b;
                rax20(&rsp19->f20);
                rsp19 = reinterpret_cast<struct s46*>(rsp25 + 1);
                goto addr_14000571c_30;
            }
        } else {
            rbx26 = rbx8 + 1;
            if (reinterpret_cast<uint64_t>(rbx26) >= reinterpret_cast<uint64_t>(rdi7)) 
                goto addr_1400053bf_2;
            r15_27 = g14000d730;
            do {
                addr_1400054d3_33:
                *reinterpret_cast<void**>(&rcx28) = rbx26->f0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx28) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&r8_29) = rbx26->f8;
                *reinterpret_cast<int32_t*>(&r8_29 + 4) = 0;
                *reinterpret_cast<uint32_t*>(&r14_30) = rbx26->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_30) + 4) = 0;
                rcx31 = reinterpret_cast<void***>(reinterpret_cast<int64_t>(rcx28) + reinterpret_cast<uint64_t>(r15_27));
                *reinterpret_cast<uint32_t*>(&rdx17) = *reinterpret_cast<unsigned char*>(&r8_29);
                *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
                r9 = *rcx31;
                r14_32 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r14_30) + reinterpret_cast<uint64_t>(r15_27));
                if (*reinterpret_cast<uint32_t*>(&rdx17) == 32) {
                    *reinterpret_cast<void***>(&rax33) = *reinterpret_cast<void***>(r14_32);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax33) + 4) = 0;
                    r10_34 = rax33;
                    rax35 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax33) | 0xffffffff00000000);
                    if (*reinterpret_cast<int32_t*>(&r10_34) >= 0) {
                        rax35 = r10_34;
                    }
                    r13_36 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax35) - reinterpret_cast<uint64_t>(rcx31) + reinterpret_cast<unsigned char>(r9));
                    if (*reinterpret_cast<uint32_t*>(&r8_29) & 0xc0) 
                        goto addr_140005651_37;
                    if (reinterpret_cast<signed char>(r13_36) <= reinterpret_cast<signed char>(0xffffffff7fffffff)) 
                        goto addr_1400056b4_39;
                    if (reinterpret_cast<signed char>(r13_36) > reinterpret_cast<signed char>(0xffffffff)) 
                        goto addr_1400056b4_39;
                    addr_140005651_37:
                    rsp37 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                    *rsp37 = 0x140005659;
                    fun_140005230(r14_32);
                    rsp9 = reinterpret_cast<struct s45*>(rsp37 + 1);
                    *reinterpret_cast<void***>(r14_32) = r13_36;
                    continue;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rdx17) > 32) {
                        if (*reinterpret_cast<uint32_t*>(&rdx17) != 64) 
                            goto addr_1400056a8_43;
                        r13_36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_32)) - reinterpret_cast<uint64_t>(rcx31) + reinterpret_cast<unsigned char>(r9));
                        if (*reinterpret_cast<uint32_t*>(&r8_29) & 0xc0) 
                            goto addr_140005605_45;
                        if (reinterpret_cast<signed char>(r13_36) >= reinterpret_cast<signed char>(0)) 
                            goto addr_1400056b4_39;
                        addr_140005605_45:
                        rsp38 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                        *rsp38 = 0x14000560d;
                        fun_140005230(r14_32);
                        rsp9 = reinterpret_cast<struct s45*>(rsp38 + 1);
                        *reinterpret_cast<void***>(r14_32) = r13_36;
                        continue;
                    } else {
                        if (*reinterpret_cast<uint32_t*>(&rdx17) == 8) {
                            *reinterpret_cast<uint32_t*>(&rax39) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_32));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = 0;
                            if (*reinterpret_cast<signed char*>(&rax39) < 0) {
                                rax39 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax39) | 0xffffffffffffff00);
                            }
                            r13_36 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax39) - reinterpret_cast<uint64_t>(rcx31) + reinterpret_cast<unsigned char>(r9));
                            if (*reinterpret_cast<uint32_t*>(&r8_29) & 0xc0) 
                                goto addr_1400054bb_51;
                            if (reinterpret_cast<signed char>(r13_36) < reinterpret_cast<signed char>(0xffffffffffffff80)) 
                                goto addr_1400056b4_39;
                            if (reinterpret_cast<signed char>(r13_36) > reinterpret_cast<signed char>(0xff)) 
                                goto addr_1400056b4_39;
                            addr_1400054bb_51:
                            rsp40 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                            *rsp40 = 0x1400054c3;
                            fun_140005230(r14_32);
                            rsp9 = reinterpret_cast<struct s45*>(rsp40 + 1);
                            *reinterpret_cast<void***>(r14_32) = r13_36;
                            continue;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rdx17) != 16) 
                                goto addr_1400056a8_43;
                            *reinterpret_cast<uint32_t*>(&rax41) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_32));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
                            if (*reinterpret_cast<int16_t*>(&rax41) >= 0) 
                                goto addr_14000551c_56;
                        }
                    }
                }
                rax41 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax41) | 0xffffffffffff0000);
                addr_14000551c_56:
                r13_36 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax41) - reinterpret_cast<uint64_t>(rcx31) + reinterpret_cast<unsigned char>(r9));
                if (*reinterpret_cast<uint32_t*>(&r8_29) & 0xc0) 
                    goto addr_140005546_58;
                if (reinterpret_cast<signed char>(r13_36) < reinterpret_cast<signed char>(0xffffffffffff8000)) 
                    goto addr_1400056b4_39;
                if (reinterpret_cast<signed char>(r13_36) > reinterpret_cast<signed char>(0xffff)) 
                    goto addr_1400056b4_39;
                addr_140005546_58:
                ++rbx26;
                rsp42 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                *rsp42 = 0x140005552;
                fun_140005230(r14_32);
                rsp9 = reinterpret_cast<struct s45*>(rsp42 + 1);
                *reinterpret_cast<void***>(r14_32) = r13_36;
                if (reinterpret_cast<uint64_t>(rbx26) < reinterpret_cast<uint64_t>(rdi7)) 
                    goto addr_1400054d3_33; else 
                    goto addr_14000555f_61;
                ++rbx26;
            } while (reinterpret_cast<uint64_t>(rbx26) < reinterpret_cast<uint64_t>(rdi7));
        }
    }
    addr_140005560_63:
    edx43 = g1400100a4;
    if (!(reinterpret_cast<uint1_t>(edx43 < 0) | reinterpret_cast<uint1_t>(edx43 == 0))) {
        rdi44 = VirtualProtect;
        *reinterpret_cast<int32_t*>(&rbx45) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx45) + 4) = 0;
        do {
            rax46 = g1400100a8;
            rax47 = reinterpret_cast<struct s49*>(reinterpret_cast<uint64_t>(rax46) + reinterpret_cast<uint64_t>(rbx45));
            if (rax47->f0) {
                rdx48 = rax47->f10;
                rcx49 = rax47->f8;
                rsp50 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                *rsp50 = 0x14000559f;
                rdi44(rcx49, rdx48);
                rsp9 = reinterpret_cast<struct s45*>(rsp50 + 1);
            }
            *reinterpret_cast<int32_t*>(&rsi5) = *reinterpret_cast<int32_t*>(&rsi5) + 1;
            rbx45 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx45) + 40);
            less51 = *reinterpret_cast<int32_t*>(&rsi5) < g1400100a4;
        } while (less51);
        goto addr_1400053bf_2;
    }
    addr_14000571c_30:
    goto rsp19->f58;
    addr_1400056b4_39:
    rsp9->f20 = r13_36;
    r8 = r14_32;
    rsp52 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
    *rsp52 = 0x1400056c8;
    fun_1400051c0("%d bit pseudo relocation at %p out of range, targeting %p, yielding the value %p.\n", rdx17, r8, r9);
    rsp9 = reinterpret_cast<struct s45*>(rsp52 + 1);
    goto addr_1400056c8_16;
    addr_1400056a8_43:
    rsp53 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
    *rsp53 = 0x1400056b4;
    fun_1400051c0("  Unknown pseudo relocation bit size %d.\n", rdx17, r8_29, r9);
    rsp9 = reinterpret_cast<struct s45*>(rsp53 + 1);
    goto addr_1400056b4_39;
    addr_14000555f_61:
    goto addr_140005560_63;
    addr_1400055ce_8:
    ++rbx8;
    goto addr_140005435_9;
    addr_14000543f_10:
    eax11 = rbx8->f4;
    goto addr_140005442_11;
}

int64_t g140010b60;

int64_t fun_14000af10(int64_t rcx) {
    int64_t tmp64_2;

    tmp64_2 = g140010b60;
    g140010b60 = rcx;
    return tmp64_2;
}

void fun_1400051b0(int64_t rcx, void** rdx) {
    __asm__("fninit ");
    return;
}

int64_t fun_140001450(void** rcx, void* rdx, int64_t r8, void** r9);

int64_t fun_140001492(int32_t ecx) {
    int64_t rbx2;
    int64_t r8_3;
    void** r9_4;
    int64_t r8_5;
    int32_t ebp6;
    void** r9_7;
    int64_t r8_8;
    int64_t rbp9;
    void** r9_10;
    int64_t r8_11;
    int32_t r12d12;
    void** r9_13;
    int64_t r8_14;
    int64_t r12_15;
    void** r9_16;
    int64_t r8_17;
    void** r9_18;
    int64_t r8_19;
    int32_t edi20;
    void** r9_21;
    int64_t r8_22;
    void** r9_23;
    int64_t r8_24;
    int32_t edi25;
    void** r9_26;
    int64_t r8_27;
    int64_t r13_28;
    void** r9_29;
    int64_t r8_30;
    void** r9_31;
    int64_t r8_32;
    int64_t rbp33;
    void** r9_34;
    int64_t r8_35;
    void** r9_36;
    int64_t r8_37;
    void** r9_38;
    int64_t r8_39;
    int64_t rbp40;
    void** r9_41;
    int64_t r8_42;
    void** r9_43;
    int64_t r8_44;
    void** r9_45;
    int64_t r8_46;
    int64_t rdi47;
    void** r9_48;
    int64_t r8_49;
    void** r9_50;
    int64_t r8_51;
    void** r9_52;
    int64_t r8_53;
    int64_t rax54;

    *reinterpret_cast<int32_t*>(&rbx2) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_3) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_3) + 4) = 0;
    fun_140001450(0x14000d000, 0, r8_3, 0);
    *reinterpret_cast<int32_t*>(&r9_4) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(&r9_4 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_5) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_5) + 4) = 0;
    fun_140001450(0x14000d000, 1, r8_5, r9_4);
    ebp6 = static_cast<int32_t>(rbx2 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_7) = ebp6;
    *reinterpret_cast<int32_t*>(&r9_7 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_8) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_8) + 4) = 0;
    fun_140001450(0x14000d000, 2, r8_8, r9_7);
    *reinterpret_cast<int32_t*>(&rbp9) = ebp6 + *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp9) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_10) = *reinterpret_cast<int32_t*>(&rbp9);
    *reinterpret_cast<int32_t*>(&r9_10 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_11) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = 0;
    fun_140001450(0x14000d000, 3, r8_11, r9_10);
    r12d12 = static_cast<int32_t>(rbx2 * 4);
    *reinterpret_cast<int32_t*>(&r9_13) = r12d12;
    *reinterpret_cast<int32_t*>(&r9_13 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_14) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_14) + 4) = 0;
    fun_140001450(0x14000d000, 4, r8_14, r9_13);
    *reinterpret_cast<int32_t*>(&r12_15) = r12d12 + *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_15) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_16) = *reinterpret_cast<int32_t*>(&r12_15);
    *reinterpret_cast<int32_t*>(&r9_16 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_17) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_17) + 4) = 0;
    fun_140001450(0x14000d000, 5, r8_17, r9_16);
    *reinterpret_cast<int32_t*>(&r9_18) = static_cast<int32_t>(rbp9 + rbp9);
    *reinterpret_cast<int32_t*>(&r9_18 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_19) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_19) + 4) = 0;
    fun_140001450(0x14000d000, 6, r8_19, r9_18);
    edi20 = static_cast<int32_t>(rbx2 * 8);
    *reinterpret_cast<int32_t*>(&r9_21) = edi20 - *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(&r9_21 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_22) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_22) + 4) = 0;
    fun_140001450(0x14000d000, 7, r8_22, r9_21);
    *reinterpret_cast<int32_t*>(&r9_23) = edi20;
    *reinterpret_cast<int32_t*>(&r9_23 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_24) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_24) + 4) = 0;
    fun_140001450(0x14000d000, 8, r8_24, r9_23);
    edi25 = edi20 + *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(&r9_26) = edi25;
    *reinterpret_cast<int32_t*>(&r9_26 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_27) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_27) + 4) = 0;
    fun_140001450(0x14000d000, 9, r8_27, r9_26);
    *reinterpret_cast<int32_t*>(&r13_28) = static_cast<int32_t>(r12_15 + r12_15);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_28) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_29) = *reinterpret_cast<int32_t*>(&r13_28);
    *reinterpret_cast<int32_t*>(&r9_29 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_30) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_30) + 4) = 0;
    fun_140001450(0x14000d000, 10, r8_30, r9_29);
    *reinterpret_cast<int32_t*>(&r9_31) = static_cast<int32_t>(r13_28 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_31 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_32) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_32) + 4) = 0;
    fun_140001450(0x14000d000, 11, r8_32, r9_31);
    *reinterpret_cast<int32_t*>(&rbp33) = *reinterpret_cast<int32_t*>(&rbp9) << 2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp33) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_34) = *reinterpret_cast<int32_t*>(&rbp33);
    *reinterpret_cast<int32_t*>(&r9_34 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_35) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_35) + 4) = 0;
    fun_140001450(0x14000d000, 12, r8_35, r9_34);
    *reinterpret_cast<int32_t*>(&r9_36) = static_cast<int32_t>(rbp33 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_36 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_37) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_37) + 4) = 0;
    fun_140001450(0x14000d000, 13, r8_37, r9_36);
    *reinterpret_cast<int32_t*>(&r9_38) = *reinterpret_cast<int32_t*>(&rbx2) * 14;
    *reinterpret_cast<int32_t*>(&r9_38 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_39) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_39) + 4) = 0;
    fun_140001450(0x14000d000, 14, r8_39, r9_38);
    *reinterpret_cast<int32_t*>(&rbp40) = *reinterpret_cast<int32_t*>(&rbx2) << 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp40) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_41) = *reinterpret_cast<int32_t*>(&rbp40) - *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(&r9_41 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_42) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_42) + 4) = 0;
    fun_140001450(0x14000d000, 15, r8_42, r9_41);
    *reinterpret_cast<int32_t*>(&r9_43) = *reinterpret_cast<int32_t*>(&rbp40);
    *reinterpret_cast<int32_t*>(&r9_43 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_44) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_44) + 4) = 0;
    fun_140001450(0x14000d000, 16, r8_44, r9_43);
    *reinterpret_cast<int32_t*>(&r9_45) = static_cast<int32_t>(rbp40 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_45 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_46) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_46) + 4) = 0;
    fun_140001450(0x14000d000, 17, r8_46, r9_45);
    *reinterpret_cast<int32_t*>(&rdi47) = edi25 + edi25;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi47) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_48) = *reinterpret_cast<int32_t*>(&rdi47);
    *reinterpret_cast<int32_t*>(&r9_48 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_49) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_49) + 4) = 0;
    fun_140001450(0x14000d000, 18, r8_49, r9_48);
    *reinterpret_cast<int32_t*>(&r9_50) = static_cast<int32_t>(rdi47 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_50 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_51) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_51) + 4) = 0;
    fun_140001450(0x14000d000, 19, r8_51, r9_50);
    *reinterpret_cast<int32_t*>(&r9_52) = static_cast<int32_t>(r12_15 * 4);
    *reinterpret_cast<int32_t*>(&r9_52 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_53) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_53) + 4) = 0;
    rax54 = fun_140001450(0x14000d000, 20, r8_53, r9_52);
    return rax54;
}

unsigned char g14000c040 = 73;

signed char g14000c041 = 0x6e;

signed char g14000c042 = 32;

signed char g14000c043 = 99;

signed char g14000c044 = 0x72;

signed char g14000c045 = 0x79;

signed char g14000c046 = 0x70;

signed char g14000c047 = 0x74;

signed char g14000c048 = 0x6f;

signed char g14000c049 = 0x67;

signed char g14000c04a = 0x72;

signed char g14000c04b = 97;

signed char g14000c04c = 0x70;

signed char g14000c04d = 0x68;

signed char g14000c04e = 0x79;

signed char g14000c04f = 44;

signed char g14000c050 = 32;

signed char g14000c051 = 82;

signed char g14000c052 = 67;

signed char g14000c053 = 52;

signed char g14000c054 = 32;

signed char g14000c055 = 40;

signed char g14000c056 = 82;

signed char g14000c057 = 0x69;

signed char g14000c058 = 0x76;

signed char g14000c059 = 0x65;

signed char g14000c05a = 0x73;

signed char g14000c05b = 0x74;

signed char g14000c05c = 32;

signed char g14000c05d = 67;

signed char g14000c05e = 0x69;

signed char g14000c05f = 0x70;

signed char g14000c060 = 0x68;

signed char g14000c061 = 0x65;

signed char g14000c062 = 0x72;

signed char g14000c063 = 32;

signed char g14000c064 = 52;

signed char g14000c065 = 44;

signed char g14000c066 = 32;

signed char g14000c067 = 97;

signed char g14000c068 = 0x6c;

signed char g14000c069 = 0x73;

signed char g14000c06a = 0x6f;

signed char g14000c06b = 32;

signed char g14000c06c = 0x6b;

signed char g14000c06d = 0x6e;

signed char g14000c06e = 0x6f;

signed char g14000c06f = 0x77;

signed char g14000c070 = 0x6e;

signed char g14000c071 = 32;

signed char g14000c072 = 97;

signed char g14000c073 = 0x73;

signed char g14000c074 = 32;

signed char g14000c075 = 65;

signed char g14000c076 = 82;

signed char g14000c077 = 67;

signed char g14000c078 = 52;

signed char g14000c079 = 32;

signed char g14000c07a = 0x6f;

signed char g14000c07b = 0x72;

signed char g14000c07c = 32;

signed char g14000c07d = 65;

signed char g14000c07e = 82;

signed char g14000c07f = 67;

signed char g14000c080 = 70;

signed char g14000c081 = 79;

signed char g14000c082 = 85;

signed char g14000c083 = 82;

signed char g14000c084 = 44;

signed char g14000c085 = 32;

signed char g14000c086 = 0x6d;

signed char g14000c087 = 0x65;

signed char g14000c088 = 97;

signed char g14000c089 = 0x6e;

signed char g14000c08a = 0x69;

signed char g14000c08b = 0x6e;

signed char g14000c08c = 0x67;

signed char g14000c08d = 32;

signed char g14000c08e = 65;

signed char g14000c08f = 0x6c;

signed char g14000c090 = 0x6c;

signed char g14000c091 = 0x65;

signed char g14000c092 = 0x67;

signed char g14000c093 = 0x65;

signed char g14000c094 = 100;

signed char g14000c095 = 32;

signed char g14000c096 = 82;

signed char g14000c097 = 67;

signed char g14000c098 = 52;

signed char g14000c099 = 44;

signed char g14000c09a = 32;

signed char g14000c09b = 0x73;

signed char g14000c09c = 0x65;

signed char g14000c09d = 0x65;

signed char g14000c09e = 32;

signed char g14000c09f = 98;

signed char g14000c0a0 = 0x65;

signed char g14000c0a1 = 0x6c;

signed char g14000c0a2 = 0x6f;

signed char g14000c0a3 = 0x77;

signed char g14000c0a4 = 41;

signed char g14000c0a5 = 32;

signed char g14000c0a6 = 0x69;

signed char g14000c0a7 = 0x73;

signed char g14000c0a8 = 32;

signed char g14000c0a9 = 97;

signed char g14000c0aa = 32;

signed char g14000c0ab = 0x73;

signed char g14000c0ac = 0x74;

signed char g14000c0ad = 0x72;

signed char g14000c0ae = 0x65;

signed char g14000c0af = 97;

signed char g14000c0b0 = 0x6d;

signed char g14000c0b1 = 32;

signed char g14000c0b2 = 99;

signed char g14000c0b3 = 0x69;

signed char g14000c0b4 = 0x70;

signed char g14000c0b5 = 0x68;

signed char g14000c0b6 = 0x65;

signed char g14000c0b7 = 0x72;

signed char g14000c0b8 = 46;

signed char g14000c0b9 = 32;

signed char g14000c0ba = 87;

signed char g14000c0bb = 0x68;

signed char g14000c0bc = 0x69;

signed char g14000c0bd = 0x6c;

signed char g14000c0be = 0x65;

signed char g14000c0bf = 32;

signed char g14000c0c0 = 0x69;

signed char g14000c0c1 = 0x74;

signed char g14000c0c2 = 32;

signed char g14000c0c3 = 0x69;

signed char g14000c0c4 = 0x73;

signed char g14000c0c5 = 32;

signed char g14000c0c6 = 0x72;

signed char g14000c0c7 = 0x65;

signed char g14000c0c8 = 0x6d;

signed char g14000c0c9 = 97;

signed char g14000c0ca = 0x72;

signed char g14000c0cb = 0x6b;

signed char g14000c0cc = 97;

signed char g14000c0cd = 98;

signed char g14000c0ce = 0x6c;

signed char g14000c0cf = 0x65;

signed char g14000c0d0 = 32;

signed char g14000c0d1 = 0x66;

signed char g14000c0d2 = 0x6f;

signed char g14000c0d3 = 0x72;

signed char g14000c0d4 = 32;

signed char g14000c0d5 = 0x69;

signed char g14000c0d6 = 0x74;

signed char g14000c0d7 = 0x73;

signed char g14000c0d8 = 32;

signed char g14000c0d9 = 0x73;

signed char g14000c0da = 0x69;

signed char g14000c0db = 0x6d;

signed char g14000c0dc = 0x70;

signed char g14000c0dd = 0x6c;

signed char g14000c0de = 0x69;

signed char g14000c0df = 99;

signed char g14000c0e0 = 0x69;

signed char g14000c0e1 = 0x74;

signed char g14000c0e2 = 0x79;

signed char g14000c0e3 = 32;

signed char g14000c0e4 = 97;

signed char g14000c0e5 = 0x6e;

signed char g14000c0e6 = 100;

signed char g14000c0e7 = 32;

signed char g14000c0e8 = 0x73;

signed char g14000c0e9 = 0x70;

signed char g14000c0ea = 0x65;

signed char g14000c0eb = 0x65;

signed char g14000c0ec = 100;

signed char g14000c0ed = 32;

signed char g14000c0ee = 0x69;

signed char g14000c0ef = 0x6e;

signed char g14000c0f0 = 32;

signed char g14000c0f1 = 0x73;

signed char g14000c0f2 = 0x6f;

signed char g14000c0f3 = 0x66;

signed char g14000c0f4 = 0x74;

signed char g14000c0f5 = 0x77;

signed char g14000c0f6 = 97;

signed char g14000c0f7 = 0x72;

signed char g14000c0f8 = 0x65;

signed char g14000c0f9 = 44;

signed char g14000c0fa = 32;

signed char g14000c0fb = 0x6d;

signed char g14000c0fc = 0x75;

signed char g14000c0fd = 0x6c;

signed char g14000c0fe = 0x74;

signed char g14000c0ff = 0x69;

signed char g14000c100 = 0x70;

signed char g14000c101 = 0x6c;

signed char g14000c102 = 0x65;

signed char g14000c103 = 32;

signed char g14000c104 = 0x76;

signed char g14000c105 = 0x75;

signed char g14000c106 = 0x6c;

signed char g14000c107 = 0x6e;

signed char g14000c108 = 0x65;

signed char g14000c109 = 0x72;

signed char g14000c10a = 97;

signed char g14000c10b = 98;

signed char g14000c10c = 0x69;

signed char g14000c10d = 0x6c;

signed char g14000c10e = 0x69;

signed char g14000c10f = 0x74;

signed char g14000c110 = 0x69;

signed char g14000c111 = 0x65;

signed char g14000c112 = 0x73;

signed char g14000c113 = 32;

signed char g14000c114 = 0x68;

signed char g14000c115 = 97;

signed char g14000c116 = 0x76;

signed char g14000c117 = 0x65;

signed char g14000c118 = 32;

signed char g14000c119 = 98;

signed char g14000c11a = 0x65;

signed char g14000c11b = 0x65;

signed char g14000c11c = 0x6e;

signed char g14000c11d = 32;

signed char g14000c11e = 100;

signed char g14000c11f = 0x69;

signed char g14000c120 = 0x73;

signed char g14000c121 = 99;

signed char g14000c122 = 0x6f;

signed char g14000c123 = 0x76;

signed char g14000c124 = 0x65;

signed char g14000c125 = 0x72;

signed char g14000c126 = 0x65;

signed char g14000c127 = 100;

signed char g14000c128 = 32;

signed char g14000c129 = 0x69;

signed char g14000c12a = 0x6e;

signed char g14000c12b = 32;

signed char g14000c12c = 82;

signed char g14000c12d = 67;

signed char g14000c12e = 52;

signed char g14000c12f = 44;

signed char g14000c130 = 32;

signed char g14000c131 = 0x72;

signed char g14000c132 = 0x65;

signed char g14000c133 = 0x6e;

signed char g14000c134 = 100;

signed char g14000c135 = 0x65;

signed char g14000c136 = 0x72;

signed char g14000c137 = 0x69;

signed char g14000c138 = 0x6e;

signed char g14000c139 = 0x67;

signed char g14000c13a = 32;

signed char g14000c13b = 0x69;

signed char g14000c13c = 0x74;

signed char g14000c13d = 32;

signed char g14000c13e = 0x69;

signed char g14000c13f = 0x6e;

int64_t fun_140001683(int64_t rcx) {
    void* rsp2;
    uint32_t edx3;
    int32_t eax4;
    signed char tmp8_5;
    uint32_t eax6;
    int64_t rdx7;
    uint32_t r8d8;
    unsigned char tmp8_9;
    uint32_t eax10;
    int64_t rdx11;
    uint32_t r8d12;
    unsigned char tmp8_13;
    uint32_t eax14;
    int64_t rdx15;
    uint32_t r8d16;
    unsigned char tmp8_17;
    uint32_t eax18;
    int64_t rdx19;
    uint32_t r8d20;
    unsigned char tmp8_21;
    uint32_t eax22;
    int64_t rdx23;
    uint32_t r8d24;
    unsigned char tmp8_25;
    uint32_t eax26;
    int64_t rdx27;
    uint32_t r8d28;
    unsigned char tmp8_29;
    uint32_t eax30;
    int64_t rdx31;
    uint32_t r8d32;
    unsigned char tmp8_33;
    uint32_t eax34;
    int64_t rdx35;
    uint32_t r8d36;
    unsigned char tmp8_37;
    uint32_t eax38;
    int64_t rdx39;
    uint32_t r8d40;
    unsigned char tmp8_41;
    uint32_t eax42;
    int64_t rdx43;
    uint32_t r8d44;
    unsigned char tmp8_45;
    uint32_t eax46;
    int64_t rdx47;
    uint32_t r8d48;
    unsigned char tmp8_49;
    uint32_t eax50;
    int64_t rdx51;
    uint32_t r8d52;
    unsigned char tmp8_53;
    uint32_t eax54;
    int64_t rdx55;
    uint32_t r8d56;
    unsigned char tmp8_57;
    uint32_t eax58;
    int64_t rdx59;
    uint32_t r8d60;
    unsigned char tmp8_61;
    uint32_t eax62;
    int64_t rdx63;
    uint32_t r8d64;
    unsigned char tmp8_65;
    uint32_t eax66;
    int64_t rdx67;
    uint32_t r8d68;
    unsigned char tmp8_69;
    uint32_t eax70;
    int64_t rdx71;
    uint32_t r8d72;
    unsigned char tmp8_73;
    uint32_t eax74;
    int64_t rdx75;
    uint32_t r8d76;
    unsigned char tmp8_77;
    uint32_t eax78;
    int64_t rdx79;
    uint32_t r8d80;
    unsigned char tmp8_81;
    uint32_t eax82;
    int64_t rdx83;
    uint32_t r8d84;
    unsigned char tmp8_85;
    uint32_t eax86;
    int64_t rdx87;
    uint32_t r8d88;
    unsigned char tmp8_89;
    uint32_t eax90;
    int64_t rdx91;
    uint32_t r8d92;
    unsigned char tmp8_93;
    uint32_t eax94;
    int64_t rdx95;
    uint32_t r8d96;
    unsigned char tmp8_97;
    uint32_t eax98;
    int64_t rdx99;
    uint32_t r8d100;
    unsigned char tmp8_101;
    uint32_t eax102;
    int64_t rdx103;
    uint32_t r8d104;
    unsigned char tmp8_105;
    uint32_t eax106;
    int64_t rdx107;
    uint32_t r8d108;
    unsigned char tmp8_109;
    uint32_t eax110;
    int64_t rdx111;
    uint32_t r8d112;
    unsigned char tmp8_113;
    uint32_t eax114;
    int64_t rdx115;
    uint32_t r8d116;
    unsigned char tmp8_117;
    uint32_t eax118;
    int64_t rdx119;
    uint32_t r8d120;
    unsigned char tmp8_121;
    uint32_t eax122;
    int64_t rdx123;
    uint32_t r8d124;
    unsigned char tmp8_125;
    uint32_t eax126;
    int64_t rdx127;
    uint32_t r8d128;
    unsigned char tmp8_129;
    uint32_t eax130;
    int64_t rdx131;
    uint32_t r8d132;
    unsigned char tmp8_133;
    uint32_t eax134;
    int64_t rdx135;
    uint32_t r8d136;
    unsigned char tmp8_137;
    uint32_t eax138;
    int64_t rdx139;
    uint32_t r8d140;
    unsigned char tmp8_141;
    uint32_t eax142;
    int64_t rdx143;
    uint32_t r8d144;
    unsigned char tmp8_145;
    uint32_t eax146;
    int64_t rdx147;
    uint32_t r8d148;
    unsigned char tmp8_149;
    uint32_t eax150;
    int64_t rdx151;
    uint32_t r8d152;
    unsigned char tmp8_153;
    uint32_t eax154;
    int64_t rdx155;
    uint32_t r8d156;
    unsigned char tmp8_157;
    uint32_t eax158;
    int64_t rdx159;
    uint32_t r8d160;
    unsigned char tmp8_161;
    uint32_t eax162;
    int64_t rdx163;
    uint32_t r8d164;
    unsigned char tmp8_165;
    uint32_t eax166;
    int64_t rdx167;
    uint32_t r8d168;
    unsigned char tmp8_169;
    uint32_t eax170;
    int64_t rdx171;
    uint32_t r8d172;
    unsigned char tmp8_173;
    uint32_t eax174;
    int64_t rdx175;
    uint32_t r8d176;
    unsigned char tmp8_177;
    uint32_t eax178;
    int64_t rdx179;
    uint32_t r8d180;
    unsigned char tmp8_181;
    uint32_t eax182;
    int64_t rdx183;
    uint32_t r8d184;
    unsigned char tmp8_185;
    uint32_t eax186;
    int64_t rdx187;
    uint32_t r8d188;
    unsigned char tmp8_189;
    uint32_t eax190;
    int64_t rdx191;
    uint32_t r8d192;
    unsigned char tmp8_193;
    uint32_t eax194;
    int64_t rdx195;
    uint32_t r8d196;
    unsigned char tmp8_197;
    uint32_t eax198;
    int64_t rdx199;
    uint32_t r8d200;
    unsigned char tmp8_201;
    uint32_t eax202;
    int64_t rdx203;
    uint32_t r8d204;
    unsigned char tmp8_205;
    uint32_t eax206;
    int64_t rdx207;
    uint32_t r8d208;
    unsigned char tmp8_209;
    uint32_t eax210;
    int64_t rdx211;
    uint32_t r8d212;
    unsigned char tmp8_213;
    uint32_t eax214;
    int64_t rdx215;
    uint32_t r8d216;
    unsigned char tmp8_217;
    uint32_t eax218;
    int64_t rdx219;
    uint32_t r8d220;
    unsigned char tmp8_221;
    uint32_t eax222;
    int64_t rdx223;
    uint32_t r8d224;
    unsigned char tmp8_225;
    uint32_t eax226;
    int64_t rdx227;
    uint32_t r8d228;
    unsigned char tmp8_229;
    uint32_t eax230;
    int64_t rdx231;
    uint32_t r8d232;
    unsigned char tmp8_233;
    uint32_t eax234;
    int64_t rdx235;
    uint32_t r8d236;
    unsigned char tmp8_237;
    uint32_t eax238;
    int64_t rdx239;
    uint32_t r8d240;
    unsigned char tmp8_241;
    uint32_t eax242;
    int64_t rdx243;
    uint32_t r8d244;
    unsigned char tmp8_245;
    uint32_t eax246;
    int64_t rdx247;
    uint32_t r8d248;
    unsigned char tmp8_249;
    uint32_t eax250;
    int64_t rdx251;
    uint32_t r8d252;
    unsigned char tmp8_253;
    uint32_t eax254;
    int64_t rdx255;
    unsigned char tmp8_256;
    uint32_t eax257;
    int64_t rdx258;
    unsigned char tmp8_259;
    uint32_t eax260;
    int64_t rdx261;
    unsigned char tmp8_262;
    uint32_t eax263;
    int64_t rdx264;
    unsigned char tmp8_265;
    uint32_t eax266;
    int64_t rdx267;
    unsigned char tmp8_268;
    uint32_t eax269;
    int64_t rdx270;
    unsigned char tmp8_271;
    uint32_t eax272;
    int64_t rdx273;
    unsigned char tmp8_274;
    uint32_t eax275;
    int64_t rdx276;
    unsigned char tmp8_277;
    uint32_t eax278;
    int64_t rdx279;
    unsigned char tmp8_280;
    uint32_t eax281;
    int64_t rdx282;
    unsigned char tmp8_283;
    uint32_t eax284;
    int64_t rdx285;
    unsigned char tmp8_286;
    uint32_t eax287;
    int64_t rdx288;
    unsigned char tmp8_289;
    uint32_t eax290;
    int64_t rdx291;
    unsigned char tmp8_292;
    uint32_t eax293;
    int64_t rdx294;
    unsigned char tmp8_295;
    uint32_t eax296;
    int64_t rdx297;
    unsigned char tmp8_298;
    uint32_t eax299;
    int64_t rdx300;
    unsigned char tmp8_301;
    uint32_t eax302;
    int64_t rdx303;
    unsigned char tmp8_304;
    uint32_t eax305;
    int64_t rdx306;
    unsigned char tmp8_307;
    uint32_t eax308;
    int64_t rdx309;
    unsigned char tmp8_310;
    uint32_t eax311;
    int64_t rdx312;
    unsigned char tmp8_313;
    uint32_t eax314;
    int64_t rdx315;
    unsigned char tmp8_316;
    uint32_t eax317;
    int64_t rdx318;
    unsigned char tmp8_319;
    uint32_t eax320;
    int64_t rdx321;
    unsigned char tmp8_322;
    uint32_t eax323;
    int64_t rdx324;
    unsigned char tmp8_325;
    uint32_t eax326;
    int64_t rdx327;
    unsigned char tmp8_328;
    uint32_t eax329;
    int64_t rdx330;
    unsigned char tmp8_331;
    uint32_t eax332;
    int64_t rdx333;
    unsigned char tmp8_334;
    uint32_t eax335;
    int64_t rdx336;
    unsigned char tmp8_337;
    uint32_t eax338;
    int64_t rdx339;
    unsigned char tmp8_340;
    uint32_t eax341;
    int64_t rdx342;
    unsigned char tmp8_343;
    uint32_t eax344;
    int64_t rdx345;
    unsigned char tmp8_346;
    uint32_t eax347;
    int64_t rdx348;
    unsigned char tmp8_349;
    uint32_t eax350;
    int64_t rdx351;
    unsigned char tmp8_352;
    uint32_t eax353;
    int64_t rdx354;
    unsigned char tmp8_355;
    uint32_t eax356;
    int64_t rdx357;
    unsigned char tmp8_358;
    uint32_t eax359;
    int64_t rdx360;
    unsigned char tmp8_361;
    uint32_t eax362;
    int64_t rdx363;
    unsigned char tmp8_364;
    uint32_t eax365;
    int64_t rdx366;
    unsigned char tmp8_367;
    uint32_t eax368;
    int64_t rdx369;
    unsigned char tmp8_370;
    uint32_t eax371;
    int64_t rdx372;
    unsigned char tmp8_373;
    uint32_t eax374;
    int64_t rdx375;
    unsigned char tmp8_376;
    uint32_t eax377;
    int64_t rdx378;
    unsigned char tmp8_379;
    uint32_t eax380;
    int64_t rdx381;
    unsigned char tmp8_382;
    uint32_t eax383;
    int64_t rdx384;
    unsigned char tmp8_385;
    uint32_t eax386;
    int64_t rdx387;
    unsigned char tmp8_388;
    uint32_t eax389;
    int64_t rdx390;
    unsigned char tmp8_391;
    uint32_t eax392;
    int64_t rdx393;
    unsigned char tmp8_394;
    uint32_t eax395;
    int64_t rdx396;
    unsigned char tmp8_397;
    uint32_t eax398;
    int64_t rdx399;
    unsigned char tmp8_400;
    uint32_t eax401;
    int64_t rdx402;
    unsigned char tmp8_403;
    uint32_t eax404;
    int64_t rdx405;
    unsigned char tmp8_406;
    uint32_t eax407;
    int64_t rdx408;
    unsigned char tmp8_409;
    uint32_t eax410;
    int64_t rdx411;
    unsigned char tmp8_412;
    uint32_t eax413;
    int64_t rdx414;
    unsigned char tmp8_415;
    uint32_t eax416;
    int64_t rdx417;
    unsigned char tmp8_418;
    uint32_t eax419;
    int64_t rdx420;
    unsigned char tmp8_421;
    uint32_t eax422;
    int64_t rdx423;
    unsigned char tmp8_424;
    uint32_t eax425;
    int64_t rdx426;
    unsigned char tmp8_427;
    uint32_t eax428;
    int64_t rdx429;
    unsigned char tmp8_430;
    uint32_t eax431;
    int64_t rdx432;
    unsigned char tmp8_433;
    uint32_t eax434;
    int64_t rdx435;
    unsigned char tmp8_436;
    uint32_t eax437;
    int64_t rdx438;
    unsigned char tmp8_439;
    uint32_t eax440;
    int64_t rdx441;
    unsigned char tmp8_442;
    uint32_t eax443;
    int64_t rdx444;
    unsigned char tmp8_445;
    uint32_t eax446;
    int64_t rdx447;
    unsigned char tmp8_448;
    uint32_t eax449;
    int64_t rdx450;
    unsigned char tmp8_451;
    uint32_t eax452;
    int64_t rdx453;
    unsigned char tmp8_454;
    uint32_t eax455;
    int64_t rdx456;
    unsigned char tmp8_457;
    uint32_t eax458;
    int64_t rdx459;
    unsigned char tmp8_460;
    uint32_t eax461;
    int64_t rdx462;
    unsigned char tmp8_463;
    uint32_t eax464;
    int64_t rdx465;
    unsigned char tmp8_466;
    uint32_t eax467;
    int64_t rdx468;
    unsigned char tmp8_469;
    uint32_t eax470;
    int64_t rdx471;
    unsigned char tmp8_472;
    uint32_t eax473;
    int64_t rdx474;
    unsigned char tmp8_475;
    uint32_t eax476;
    int64_t rdx477;
    unsigned char tmp8_478;
    uint32_t eax479;
    int64_t rdx480;
    unsigned char tmp8_481;
    uint32_t eax482;
    int64_t rdx483;
    unsigned char tmp8_484;
    uint32_t eax485;
    int64_t rdx486;
    unsigned char tmp8_487;
    uint32_t eax488;
    int64_t rdx489;
    unsigned char tmp8_490;
    uint32_t eax491;
    int64_t rdx492;
    unsigned char tmp8_493;
    uint32_t eax494;
    int64_t rdx495;
    unsigned char tmp8_496;
    uint32_t eax497;
    int64_t rdx498;
    unsigned char tmp8_499;
    uint32_t eax500;
    int64_t rdx501;
    unsigned char tmp8_502;
    uint32_t eax503;
    int64_t rdx504;
    unsigned char tmp8_505;
    uint32_t eax506;
    int64_t rdx507;
    unsigned char tmp8_508;
    uint32_t eax509;
    int64_t rdx510;
    unsigned char tmp8_511;
    uint32_t eax512;
    int64_t rdx513;
    unsigned char tmp8_514;
    uint32_t eax515;
    int64_t rdx516;
    unsigned char tmp8_517;
    uint32_t eax518;
    int64_t rdx519;
    unsigned char tmp8_520;
    uint32_t eax521;
    int64_t rdx522;
    unsigned char tmp8_523;
    uint32_t eax524;
    int64_t rdx525;
    unsigned char tmp8_526;
    uint32_t eax527;
    int64_t rdx528;
    unsigned char tmp8_529;
    uint32_t eax530;
    int64_t rdx531;
    unsigned char tmp8_532;
    uint32_t eax533;
    int64_t rdx534;
    unsigned char tmp8_535;
    uint32_t eax536;
    int64_t rdx537;
    unsigned char tmp8_538;
    uint32_t eax539;
    int64_t rdx540;
    unsigned char tmp8_541;
    uint32_t eax542;
    int64_t rdx543;
    unsigned char tmp8_544;
    uint32_t eax545;
    int64_t rdx546;
    unsigned char tmp8_547;
    uint32_t eax548;
    int64_t rdx549;
    unsigned char tmp8_550;
    uint32_t eax551;
    int64_t rdx552;
    unsigned char tmp8_553;
    uint32_t eax554;
    int64_t rdx555;
    unsigned char tmp8_556;
    uint32_t eax557;
    int64_t rdx558;
    unsigned char tmp8_559;
    uint32_t eax560;
    int64_t rdx561;
    unsigned char tmp8_562;
    uint32_t eax563;
    int64_t rdx564;
    unsigned char tmp8_565;
    uint32_t eax566;
    int64_t rdx567;
    unsigned char tmp8_568;
    uint32_t eax569;
    int64_t rdx570;
    unsigned char tmp8_571;
    uint32_t eax572;
    int64_t rdx573;
    unsigned char tmp8_574;
    uint32_t eax575;
    int64_t rdx576;
    unsigned char tmp8_577;
    uint32_t eax578;
    int64_t rdx579;
    unsigned char tmp8_580;
    uint32_t eax581;
    int64_t rdx582;
    unsigned char tmp8_583;
    uint32_t eax584;
    int64_t rdx585;
    unsigned char tmp8_586;
    uint32_t eax587;
    int64_t rdx588;
    unsigned char tmp8_589;
    uint32_t eax590;
    int64_t rdx591;
    unsigned char tmp8_592;
    uint32_t eax593;
    int64_t rdx594;
    unsigned char tmp8_595;
    uint32_t eax596;
    int64_t rdx597;
    unsigned char tmp8_598;
    uint32_t eax599;
    int64_t rdx600;
    unsigned char tmp8_601;
    uint32_t eax602;
    int64_t rdx603;
    unsigned char tmp8_604;
    uint32_t eax605;
    int64_t rdx606;
    unsigned char tmp8_607;
    uint32_t eax608;
    int64_t rdx609;
    unsigned char tmp8_610;
    uint32_t eax611;
    int64_t rdx612;
    unsigned char tmp8_613;
    uint32_t eax614;
    int64_t rdx615;
    unsigned char tmp8_616;
    uint32_t eax617;
    int64_t rdx618;
    unsigned char tmp8_619;
    uint32_t eax620;
    int64_t rdx621;
    unsigned char tmp8_622;
    uint32_t eax623;
    int64_t rdx624;
    unsigned char tmp8_625;
    uint32_t eax626;
    int64_t rdx627;
    unsigned char tmp8_628;
    uint32_t eax629;
    int64_t rdx630;
    unsigned char tmp8_631;
    uint32_t eax632;
    int64_t rdx633;
    unsigned char tmp8_634;
    uint32_t eax635;
    int64_t rdx636;
    unsigned char tmp8_637;
    uint32_t eax638;
    int64_t rdx639;
    unsigned char tmp8_640;
    uint32_t eax641;
    int64_t rdx642;
    unsigned char tmp8_643;
    uint32_t eax644;
    int64_t rdx645;
    unsigned char tmp8_646;
    uint32_t eax647;
    int64_t rdx648;
    unsigned char tmp8_649;
    uint32_t eax650;
    int64_t rdx651;
    unsigned char tmp8_652;
    uint32_t eax653;
    int64_t rdx654;
    unsigned char tmp8_655;
    uint32_t eax656;
    int64_t rdx657;
    unsigned char tmp8_658;
    uint32_t eax659;
    int64_t rdx660;
    unsigned char tmp8_661;
    uint32_t eax662;
    int64_t rdx663;
    unsigned char tmp8_664;
    uint32_t eax665;
    int64_t rdx666;
    unsigned char tmp8_667;
    uint32_t eax668;
    int64_t rdx669;
    unsigned char tmp8_670;
    uint32_t eax671;
    int64_t rdx672;
    unsigned char tmp8_673;
    uint32_t eax674;
    int64_t rdx675;
    unsigned char tmp8_676;
    uint32_t eax677;
    int64_t rdx678;
    unsigned char tmp8_679;
    uint32_t eax680;
    int64_t rdx681;
    unsigned char tmp8_682;
    uint32_t eax683;
    int64_t rdx684;
    unsigned char tmp8_685;
    uint32_t eax686;
    int64_t rdx687;
    unsigned char tmp8_688;
    uint32_t eax689;
    int64_t rdx690;
    unsigned char tmp8_691;
    uint32_t eax692;
    int64_t rdx693;
    unsigned char tmp8_694;
    uint32_t eax695;
    int64_t rdx696;
    unsigned char tmp8_697;
    uint32_t eax698;
    int64_t rdx699;
    unsigned char tmp8_700;
    uint32_t eax701;
    int64_t rdx702;
    unsigned char tmp8_703;
    uint32_t eax704;
    int64_t rdx705;
    unsigned char tmp8_706;
    uint32_t eax707;
    int64_t rdx708;
    unsigned char tmp8_709;
    uint32_t eax710;
    int64_t rdx711;
    unsigned char tmp8_712;
    uint32_t eax713;
    int64_t rdx714;
    unsigned char tmp8_715;
    uint32_t eax716;
    int64_t rdx717;
    unsigned char tmp8_718;
    uint32_t eax719;
    int64_t rdx720;
    unsigned char tmp8_721;
    uint32_t eax722;
    int64_t rdx723;
    unsigned char tmp8_724;
    uint32_t eax725;
    int64_t rdx726;
    unsigned char tmp8_727;
    uint32_t eax728;
    int64_t rdx729;
    unsigned char tmp8_730;
    uint32_t eax731;
    int64_t rdx732;
    unsigned char tmp8_733;
    uint32_t eax734;
    int64_t rdx735;
    unsigned char tmp8_736;
    uint32_t eax737;
    int64_t rdx738;
    unsigned char tmp8_739;
    uint32_t eax740;
    int64_t rdx741;
    unsigned char tmp8_742;
    uint32_t eax743;
    int64_t rdx744;
    unsigned char tmp8_745;
    uint32_t eax746;
    int64_t rdx747;
    unsigned char tmp8_748;
    uint32_t eax749;
    int64_t rdx750;
    unsigned char tmp8_751;
    uint32_t eax752;
    int64_t rdx753;
    unsigned char tmp8_754;
    uint32_t eax755;
    int64_t rdx756;
    unsigned char tmp8_757;
    uint32_t eax758;
    int64_t rdx759;
    unsigned char tmp8_760;
    uint32_t eax761;
    int64_t rdx762;
    unsigned char tmp8_763;
    uint32_t eax764;
    int64_t rdx765;
    unsigned char tmp8_766;
    uint32_t eax767;
    int64_t rdx768;
    unsigned char tmp8_769;
    uint32_t eax770;
    int64_t rdx771;
    unsigned char tmp8_772;
    uint32_t eax773;
    int64_t rdx774;
    unsigned char tmp8_775;
    uint32_t eax776;
    int64_t rdx777;
    unsigned char tmp8_778;
    uint32_t eax779;
    int64_t rdx780;
    unsigned char tmp8_781;
    uint32_t eax782;
    int64_t rdx783;
    unsigned char tmp8_784;
    uint32_t eax785;
    int64_t rdx786;
    unsigned char tmp8_787;
    uint32_t eax788;
    int64_t rdx789;
    unsigned char tmp8_790;
    uint32_t eax791;
    int64_t rdx792;
    unsigned char tmp8_793;
    uint32_t eax794;
    int64_t rdx795;
    unsigned char tmp8_796;
    uint32_t eax797;
    int64_t rdx798;
    unsigned char tmp8_799;
    uint32_t eax800;
    int64_t rdx801;
    unsigned char tmp8_802;
    uint32_t eax803;
    int64_t rdx804;
    unsigned char tmp8_805;
    uint32_t eax806;
    int64_t rdx807;
    unsigned char tmp8_808;
    uint32_t eax809;
    int64_t rdx810;
    unsigned char tmp8_811;
    uint32_t eax812;
    int64_t rdx813;
    unsigned char tmp8_814;
    uint32_t eax815;
    int64_t rdx816;
    unsigned char tmp8_817;
    uint32_t eax818;
    int64_t rdx819;
    unsigned char tmp8_820;
    uint32_t eax821;
    int64_t rdx822;
    unsigned char tmp8_823;
    uint32_t eax824;
    int64_t rdx825;
    unsigned char tmp8_826;
    uint32_t eax827;
    int64_t rdx828;
    unsigned char tmp8_829;
    uint32_t eax830;
    int64_t rax831;
    uint32_t eax832;
    int64_t rcx833;
    uint32_t r8d834;
    uint32_t eax835;
    int64_t rcx836;
    uint32_t r8d837;
    uint32_t eax838;
    int64_t rcx839;
    uint32_t r8d840;
    uint32_t eax841;
    int64_t rcx842;
    uint32_t r8d843;
    uint32_t eax844;
    int64_t rcx845;
    uint32_t r8d846;
    uint32_t eax847;
    int64_t rcx848;
    uint32_t r8d849;
    uint32_t eax850;
    int64_t rcx851;
    uint32_t r8d852;
    uint32_t eax853;
    int64_t rcx854;
    uint32_t r8d855;
    uint32_t eax856;
    int64_t rcx857;
    uint32_t r8d858;
    uint32_t eax859;
    int64_t rcx860;
    uint32_t r8d861;
    uint32_t eax862;
    int64_t rcx863;
    uint32_t r8d864;
    uint32_t eax865;
    int64_t rcx866;
    uint32_t r8d867;
    uint32_t eax868;
    int64_t rcx869;
    uint32_t r8d870;
    uint32_t eax871;
    int64_t rcx872;
    uint32_t r8d873;
    uint32_t eax874;
    int64_t rcx875;
    uint32_t r8d876;
    uint32_t eax877;
    int64_t rcx878;
    uint32_t r8d879;
    uint32_t eax880;
    int64_t rcx881;
    uint32_t r8d882;
    uint32_t eax883;
    int64_t rcx884;
    uint32_t r8d885;
    uint32_t eax886;
    int64_t rcx887;
    uint32_t r8d888;
    uint32_t eax889;
    int64_t rcx890;
    uint32_t r8d891;
    uint32_t eax892;
    int64_t rcx893;
    uint32_t r8d894;
    uint32_t eax895;
    int64_t rcx896;
    uint32_t r8d897;
    uint32_t eax898;
    int64_t rcx899;
    uint32_t r8d900;
    uint32_t eax901;
    int64_t rcx902;
    uint32_t r8d903;
    uint32_t eax904;
    int64_t rcx905;
    uint32_t r8d906;
    uint32_t eax907;
    int64_t rcx908;
    uint32_t r8d909;
    uint32_t eax910;
    int64_t rcx911;
    uint32_t r8d912;
    uint32_t eax913;
    int64_t rcx914;
    uint32_t r8d915;
    uint32_t eax916;
    int64_t rcx917;
    uint32_t r8d918;
    uint32_t eax919;
    int64_t rcx920;
    uint32_t r8d921;
    uint32_t eax922;
    int64_t rcx923;
    uint32_t r8d924;
    uint32_t eax925;
    int64_t rcx926;
    uint32_t r8d927;
    uint32_t eax928;
    int64_t rcx929;
    uint32_t r8d930;
    uint32_t eax931;
    int64_t rcx932;
    uint32_t r8d933;
    uint32_t eax934;
    int64_t rcx935;
    uint32_t r8d936;
    uint32_t eax937;
    int64_t rcx938;
    uint32_t r8d939;
    uint32_t eax940;
    int64_t rcx941;
    uint32_t r8d942;
    uint32_t eax943;
    int64_t rcx944;
    uint32_t r8d945;
    uint32_t eax946;
    int64_t rcx947;
    uint32_t r8d948;
    uint32_t eax949;
    int64_t rcx950;
    uint32_t r8d951;
    uint32_t eax952;
    int64_t rcx953;
    uint32_t r8d954;
    uint32_t eax955;
    int64_t rcx956;
    uint32_t r8d957;
    uint32_t eax958;
    int64_t rcx959;
    uint32_t r8d960;
    uint32_t eax961;
    int64_t rcx962;
    uint32_t r8d963;
    uint32_t eax964;
    int64_t rcx965;
    uint32_t r8d966;
    uint32_t eax967;
    int64_t rcx968;
    uint32_t r8d969;
    uint32_t eax970;
    int64_t rcx971;
    uint32_t r8d972;
    uint32_t eax973;
    int64_t rcx974;
    uint32_t r8d975;
    uint32_t eax976;
    int64_t rcx977;
    uint32_t r8d978;
    uint32_t eax979;
    int64_t rcx980;
    uint32_t r8d981;
    uint32_t eax982;
    int64_t rcx983;
    uint32_t r8d984;
    uint32_t eax985;
    int64_t rcx986;
    uint32_t r8d987;
    uint32_t eax988;
    int64_t rcx989;
    uint32_t r8d990;
    uint32_t eax991;
    int64_t rcx992;
    uint32_t r8d993;
    uint32_t eax994;
    int64_t rcx995;
    uint32_t r8d996;
    uint32_t eax997;
    int64_t rcx998;
    uint32_t r8d999;
    uint32_t eax1000;
    int64_t rcx1001;
    uint32_t r8d1002;
    uint32_t eax1003;
    int64_t rcx1004;
    uint32_t r8d1005;
    uint32_t eax1006;
    int64_t rcx1007;
    uint32_t r8d1008;
    uint32_t eax1009;
    int64_t rcx1010;
    int64_t r8_1011;
    uint32_t eax1012;
    int64_t rcx1013;
    uint32_t ecx1014;
    uint32_t eax1015;
    int64_t rax1016;
    void** r9_1017;
    int64_t rax1018;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x168);
    edx3 = g14000c040;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + reinterpret_cast<int32_t>(edx3) + 96) = 0;
    eax4 = 1;
    tmp8_5 = reinterpret_cast<signed char>(1 + g14000c041);
    *reinterpret_cast<signed char*>(&eax4) = tmp8_5;
    eax6 = eax4 + edx3;
    *reinterpret_cast<uint32_t*>(&rdx7) = *reinterpret_cast<unsigned char*>(&eax6);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx7) + 4) = 0;
    r8d8 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx7 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx7 + 96) = 1;
    tmp8_9 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax6) + g14000c042);
    *reinterpret_cast<unsigned char*>(&eax6) = tmp8_9;
    eax10 = eax6 + 2;
    *reinterpret_cast<uint32_t*>(&rdx11) = *reinterpret_cast<unsigned char*>(&eax10);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx11) + 4) = 0;
    r8d12 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx11 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx11 + 96) = 2;
    tmp8_13 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax10) + g14000c043);
    *reinterpret_cast<unsigned char*>(&eax10) = tmp8_13;
    eax14 = eax10 + 3;
    *reinterpret_cast<uint32_t*>(&rdx15) = *reinterpret_cast<unsigned char*>(&eax14);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
    r8d16 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx15 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx15 + 96) = 3;
    tmp8_17 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax14) + g14000c044);
    *reinterpret_cast<unsigned char*>(&eax14) = tmp8_17;
    eax18 = eax14 + 4;
    *reinterpret_cast<uint32_t*>(&rdx19) = *reinterpret_cast<unsigned char*>(&eax18);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx19) + 4) = 0;
    r8d20 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx19 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx19 + 96) = 4;
    tmp8_21 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax18) + g14000c045);
    *reinterpret_cast<unsigned char*>(&eax18) = tmp8_21;
    eax22 = eax18 + 5;
    *reinterpret_cast<uint32_t*>(&rdx23) = *reinterpret_cast<unsigned char*>(&eax22);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx23) + 4) = 0;
    r8d24 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx23 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx23 + 96) = 5;
    tmp8_25 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax22) + g14000c046);
    *reinterpret_cast<unsigned char*>(&eax22) = tmp8_25;
    eax26 = eax22 + 6;
    *reinterpret_cast<uint32_t*>(&rdx27) = *reinterpret_cast<unsigned char*>(&eax26);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = 0;
    r8d28 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx27 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx27 + 96) = 6;
    tmp8_29 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax26) + g14000c047);
    *reinterpret_cast<unsigned char*>(&eax26) = tmp8_29;
    eax30 = eax26 + 7;
    *reinterpret_cast<uint32_t*>(&rdx31) = *reinterpret_cast<unsigned char*>(&eax30);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx31) + 4) = 0;
    r8d32 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx31 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx31 + 96) = 7;
    tmp8_33 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax30) + g14000c048);
    *reinterpret_cast<unsigned char*>(&eax30) = tmp8_33;
    eax34 = eax30 + 8;
    *reinterpret_cast<uint32_t*>(&rdx35) = *reinterpret_cast<unsigned char*>(&eax34);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx35) + 4) = 0;
    r8d36 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx35 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx35 + 96) = 8;
    tmp8_37 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax34) + g14000c049);
    *reinterpret_cast<unsigned char*>(&eax34) = tmp8_37;
    eax38 = eax34 + 9;
    *reinterpret_cast<uint32_t*>(&rdx39) = *reinterpret_cast<unsigned char*>(&eax38);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = 0;
    r8d40 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx39 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx39 + 96) = 9;
    tmp8_41 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax38) + g14000c04a);
    *reinterpret_cast<unsigned char*>(&eax38) = tmp8_41;
    eax42 = eax38 + 10;
    *reinterpret_cast<uint32_t*>(&rdx43) = *reinterpret_cast<unsigned char*>(&eax42);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx43) + 4) = 0;
    r8d44 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx43 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx43 + 96) = 10;
    tmp8_45 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax42) + g14000c04b);
    *reinterpret_cast<unsigned char*>(&eax42) = tmp8_45;
    eax46 = eax42 + 11;
    *reinterpret_cast<uint32_t*>(&rdx47) = *reinterpret_cast<unsigned char*>(&eax46);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx47) + 4) = 0;
    r8d48 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx47 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx47 + 96) = 11;
    tmp8_49 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax46) + g14000c04c);
    *reinterpret_cast<unsigned char*>(&eax46) = tmp8_49;
    eax50 = eax46 + 12;
    *reinterpret_cast<uint32_t*>(&rdx51) = *reinterpret_cast<unsigned char*>(&eax50);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx51) + 4) = 0;
    r8d52 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx51 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx51 + 96) = 12;
    tmp8_53 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax50) + g14000c04d);
    *reinterpret_cast<unsigned char*>(&eax50) = tmp8_53;
    eax54 = eax50 + 13;
    *reinterpret_cast<uint32_t*>(&rdx55) = *reinterpret_cast<unsigned char*>(&eax54);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx55) + 4) = 0;
    r8d56 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx55 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx55 + 96) = 13;
    tmp8_57 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax54) + g14000c04e);
    *reinterpret_cast<unsigned char*>(&eax54) = tmp8_57;
    eax58 = eax54 + 14;
    *reinterpret_cast<uint32_t*>(&rdx59) = *reinterpret_cast<unsigned char*>(&eax58);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx59) + 4) = 0;
    r8d60 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx59 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx59 + 96) = 14;
    tmp8_61 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax58) + g14000c04f);
    *reinterpret_cast<unsigned char*>(&eax58) = tmp8_61;
    eax62 = eax58 + 15;
    *reinterpret_cast<uint32_t*>(&rdx63) = *reinterpret_cast<unsigned char*>(&eax62);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx63) + 4) = 0;
    r8d64 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx63 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx63 + 96) = 15;
    tmp8_65 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax62) + g14000c050);
    *reinterpret_cast<unsigned char*>(&eax62) = tmp8_65;
    eax66 = eax62 + 16;
    *reinterpret_cast<uint32_t*>(&rdx67) = *reinterpret_cast<unsigned char*>(&eax66);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx67) + 4) = 0;
    r8d68 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx67 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx67 + 96) = 16;
    tmp8_69 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax66) + g14000c051);
    *reinterpret_cast<unsigned char*>(&eax66) = tmp8_69;
    eax70 = eax66 + 17;
    *reinterpret_cast<uint32_t*>(&rdx71) = *reinterpret_cast<unsigned char*>(&eax70);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx71) + 4) = 0;
    r8d72 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx71 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx71 + 96) = 17;
    tmp8_73 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax70) + g14000c052);
    *reinterpret_cast<unsigned char*>(&eax70) = tmp8_73;
    eax74 = eax70 + 18;
    *reinterpret_cast<uint32_t*>(&rdx75) = *reinterpret_cast<unsigned char*>(&eax74);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx75) + 4) = 0;
    r8d76 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx75 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx75 + 96) = 18;
    tmp8_77 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax74) + g14000c053);
    *reinterpret_cast<unsigned char*>(&eax74) = tmp8_77;
    eax78 = eax74 + 19;
    *reinterpret_cast<uint32_t*>(&rdx79) = *reinterpret_cast<unsigned char*>(&eax78);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx79) + 4) = 0;
    r8d80 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx79 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx79 + 96) = 19;
    tmp8_81 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax78) + g14000c054);
    *reinterpret_cast<unsigned char*>(&eax78) = tmp8_81;
    eax82 = eax78 + 20;
    *reinterpret_cast<uint32_t*>(&rdx83) = *reinterpret_cast<unsigned char*>(&eax82);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx83) + 4) = 0;
    r8d84 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx83 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx83 + 96) = 20;
    tmp8_85 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax82) + g14000c055);
    *reinterpret_cast<unsigned char*>(&eax82) = tmp8_85;
    eax86 = eax82 + 21;
    *reinterpret_cast<uint32_t*>(&rdx87) = *reinterpret_cast<unsigned char*>(&eax86);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx87) + 4) = 0;
    r8d88 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx87 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx87 + 96) = 21;
    tmp8_89 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax86) + g14000c056);
    *reinterpret_cast<unsigned char*>(&eax86) = tmp8_89;
    eax90 = eax86 + 22;
    *reinterpret_cast<uint32_t*>(&rdx91) = *reinterpret_cast<unsigned char*>(&eax90);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx91) + 4) = 0;
    r8d92 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx91 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx91 + 96) = 22;
    tmp8_93 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax90) + g14000c057);
    *reinterpret_cast<unsigned char*>(&eax90) = tmp8_93;
    eax94 = eax90 + 23;
    *reinterpret_cast<uint32_t*>(&rdx95) = *reinterpret_cast<unsigned char*>(&eax94);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx95) + 4) = 0;
    r8d96 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx95 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx95 + 96) = 23;
    tmp8_97 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax94) + g14000c058);
    *reinterpret_cast<unsigned char*>(&eax94) = tmp8_97;
    eax98 = eax94 + 24;
    *reinterpret_cast<uint32_t*>(&rdx99) = *reinterpret_cast<unsigned char*>(&eax98);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx99) + 4) = 0;
    r8d100 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx99 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx99 + 96) = 24;
    tmp8_101 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax98) + g14000c059);
    *reinterpret_cast<unsigned char*>(&eax98) = tmp8_101;
    eax102 = eax98 + 25;
    *reinterpret_cast<uint32_t*>(&rdx103) = *reinterpret_cast<unsigned char*>(&eax102);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx103) + 4) = 0;
    r8d104 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx103 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx103 + 96) = 25;
    tmp8_105 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax102) + g14000c05a);
    *reinterpret_cast<unsigned char*>(&eax102) = tmp8_105;
    eax106 = eax102 + 26;
    *reinterpret_cast<uint32_t*>(&rdx107) = *reinterpret_cast<unsigned char*>(&eax106);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx107) + 4) = 0;
    r8d108 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx107 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx107 + 96) = 26;
    tmp8_109 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax106) + g14000c05b);
    *reinterpret_cast<unsigned char*>(&eax106) = tmp8_109;
    eax110 = eax106 + 27;
    *reinterpret_cast<uint32_t*>(&rdx111) = *reinterpret_cast<unsigned char*>(&eax110);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx111) + 4) = 0;
    r8d112 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx111 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx111 + 96) = 27;
    tmp8_113 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax110) + g14000c05c);
    *reinterpret_cast<unsigned char*>(&eax110) = tmp8_113;
    eax114 = eax110 + 28;
    *reinterpret_cast<uint32_t*>(&rdx115) = *reinterpret_cast<unsigned char*>(&eax114);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx115) + 4) = 0;
    r8d116 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx115 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx115 + 96) = 28;
    tmp8_117 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax114) + g14000c05d);
    *reinterpret_cast<unsigned char*>(&eax114) = tmp8_117;
    eax118 = eax114 + 29;
    *reinterpret_cast<uint32_t*>(&rdx119) = *reinterpret_cast<unsigned char*>(&eax118);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx119) + 4) = 0;
    r8d120 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx119 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx119 + 96) = 29;
    tmp8_121 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax118) + g14000c05e);
    *reinterpret_cast<unsigned char*>(&eax118) = tmp8_121;
    eax122 = eax118 + 30;
    *reinterpret_cast<uint32_t*>(&rdx123) = *reinterpret_cast<unsigned char*>(&eax122);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx123) + 4) = 0;
    r8d124 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx123 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx123 + 96) = 30;
    tmp8_125 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax122) + g14000c05f);
    *reinterpret_cast<unsigned char*>(&eax122) = tmp8_125;
    eax126 = eax122 + 31;
    *reinterpret_cast<uint32_t*>(&rdx127) = *reinterpret_cast<unsigned char*>(&eax126);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx127) + 4) = 0;
    r8d128 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx127 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx127 + 96) = 31;
    tmp8_129 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax126) + g14000c060);
    *reinterpret_cast<unsigned char*>(&eax126) = tmp8_129;
    eax130 = eax126 + 32;
    *reinterpret_cast<uint32_t*>(&rdx131) = *reinterpret_cast<unsigned char*>(&eax130);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx131) + 4) = 0;
    r8d132 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx131 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx131 + 96) = 32;
    tmp8_133 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax130) + g14000c061);
    *reinterpret_cast<unsigned char*>(&eax130) = tmp8_133;
    eax134 = eax130 + 33;
    *reinterpret_cast<uint32_t*>(&rdx135) = *reinterpret_cast<unsigned char*>(&eax134);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx135) + 4) = 0;
    r8d136 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx135 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx135 + 96) = 33;
    tmp8_137 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax134) + g14000c062);
    *reinterpret_cast<unsigned char*>(&eax134) = tmp8_137;
    eax138 = eax134 + 34;
    *reinterpret_cast<uint32_t*>(&rdx139) = *reinterpret_cast<unsigned char*>(&eax138);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx139) + 4) = 0;
    r8d140 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx139 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx139 + 96) = 34;
    tmp8_141 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax138) + g14000c063);
    *reinterpret_cast<unsigned char*>(&eax138) = tmp8_141;
    eax142 = eax138 + 35;
    *reinterpret_cast<uint32_t*>(&rdx143) = *reinterpret_cast<unsigned char*>(&eax142);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx143) + 4) = 0;
    r8d144 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx143 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx143 + 96) = 35;
    tmp8_145 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax142) + g14000c064);
    *reinterpret_cast<unsigned char*>(&eax142) = tmp8_145;
    eax146 = eax142 + 36;
    *reinterpret_cast<uint32_t*>(&rdx147) = *reinterpret_cast<unsigned char*>(&eax146);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx147) + 4) = 0;
    r8d148 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx147 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx147 + 96) = 36;
    tmp8_149 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax146) + g14000c065);
    *reinterpret_cast<unsigned char*>(&eax146) = tmp8_149;
    eax150 = eax146 + 37;
    *reinterpret_cast<uint32_t*>(&rdx151) = *reinterpret_cast<unsigned char*>(&eax150);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx151) + 4) = 0;
    r8d152 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx151 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx151 + 96) = 37;
    tmp8_153 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax150) + g14000c066);
    *reinterpret_cast<unsigned char*>(&eax150) = tmp8_153;
    eax154 = eax150 + 38;
    *reinterpret_cast<uint32_t*>(&rdx155) = *reinterpret_cast<unsigned char*>(&eax154);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx155) + 4) = 0;
    r8d156 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx155 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx155 + 96) = 38;
    tmp8_157 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax154) + g14000c067);
    *reinterpret_cast<unsigned char*>(&eax154) = tmp8_157;
    eax158 = eax154 + 39;
    *reinterpret_cast<uint32_t*>(&rdx159) = *reinterpret_cast<unsigned char*>(&eax158);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx159) + 4) = 0;
    r8d160 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx159 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx159 + 96) = 39;
    tmp8_161 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax158) + g14000c068);
    *reinterpret_cast<unsigned char*>(&eax158) = tmp8_161;
    eax162 = eax158 + 40;
    *reinterpret_cast<uint32_t*>(&rdx163) = *reinterpret_cast<unsigned char*>(&eax162);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx163) + 4) = 0;
    r8d164 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx163 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx163 + 96) = 40;
    tmp8_165 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax162) + g14000c069);
    *reinterpret_cast<unsigned char*>(&eax162) = tmp8_165;
    eax166 = eax162 + 41;
    *reinterpret_cast<uint32_t*>(&rdx167) = *reinterpret_cast<unsigned char*>(&eax166);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx167) + 4) = 0;
    r8d168 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx167 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx167 + 96) = 41;
    tmp8_169 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax166) + g14000c06a);
    *reinterpret_cast<unsigned char*>(&eax166) = tmp8_169;
    eax170 = eax166 + 42;
    *reinterpret_cast<uint32_t*>(&rdx171) = *reinterpret_cast<unsigned char*>(&eax170);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx171) + 4) = 0;
    r8d172 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx171 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx171 + 96) = 42;
    tmp8_173 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax170) + g14000c06b);
    *reinterpret_cast<unsigned char*>(&eax170) = tmp8_173;
    eax174 = eax170 + 43;
    *reinterpret_cast<uint32_t*>(&rdx175) = *reinterpret_cast<unsigned char*>(&eax174);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx175) + 4) = 0;
    r8d176 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx175 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx175 + 96) = 43;
    tmp8_177 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax174) + g14000c06c);
    *reinterpret_cast<unsigned char*>(&eax174) = tmp8_177;
    eax178 = eax174 + 44;
    *reinterpret_cast<uint32_t*>(&rdx179) = *reinterpret_cast<unsigned char*>(&eax178);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx179) + 4) = 0;
    r8d180 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx179 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx179 + 96) = 44;
    tmp8_181 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax178) + g14000c06d);
    *reinterpret_cast<unsigned char*>(&eax178) = tmp8_181;
    eax182 = eax178 + 45;
    *reinterpret_cast<uint32_t*>(&rdx183) = *reinterpret_cast<unsigned char*>(&eax182);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx183) + 4) = 0;
    r8d184 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx183 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx183 + 96) = 45;
    tmp8_185 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax182) + g14000c06e);
    *reinterpret_cast<unsigned char*>(&eax182) = tmp8_185;
    eax186 = eax182 + 46;
    *reinterpret_cast<uint32_t*>(&rdx187) = *reinterpret_cast<unsigned char*>(&eax186);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx187) + 4) = 0;
    r8d188 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx187 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx187 + 96) = 46;
    tmp8_189 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax186) + g14000c06f);
    *reinterpret_cast<unsigned char*>(&eax186) = tmp8_189;
    eax190 = eax186 + 47;
    *reinterpret_cast<uint32_t*>(&rdx191) = *reinterpret_cast<unsigned char*>(&eax190);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx191) + 4) = 0;
    r8d192 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx191 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx191 + 96) = 47;
    tmp8_193 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax190) + g14000c070);
    *reinterpret_cast<unsigned char*>(&eax190) = tmp8_193;
    eax194 = eax190 + 48;
    *reinterpret_cast<uint32_t*>(&rdx195) = *reinterpret_cast<unsigned char*>(&eax194);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx195) + 4) = 0;
    r8d196 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx195 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx195 + 96) = 48;
    tmp8_197 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax194) + g14000c071);
    *reinterpret_cast<unsigned char*>(&eax194) = tmp8_197;
    eax198 = eax194 + 49;
    *reinterpret_cast<uint32_t*>(&rdx199) = *reinterpret_cast<unsigned char*>(&eax198);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx199) + 4) = 0;
    r8d200 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx199 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx199 + 96) = 49;
    tmp8_201 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax198) + g14000c072);
    *reinterpret_cast<unsigned char*>(&eax198) = tmp8_201;
    eax202 = eax198 + 50;
    *reinterpret_cast<uint32_t*>(&rdx203) = *reinterpret_cast<unsigned char*>(&eax202);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx203) + 4) = 0;
    r8d204 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx203 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx203 + 96) = 50;
    tmp8_205 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax202) + g14000c073);
    *reinterpret_cast<unsigned char*>(&eax202) = tmp8_205;
    eax206 = eax202 + 51;
    *reinterpret_cast<uint32_t*>(&rdx207) = *reinterpret_cast<unsigned char*>(&eax206);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx207) + 4) = 0;
    r8d208 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx207 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx207 + 96) = 51;
    tmp8_209 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax206) + g14000c074);
    *reinterpret_cast<unsigned char*>(&eax206) = tmp8_209;
    eax210 = eax206 + 52;
    *reinterpret_cast<uint32_t*>(&rdx211) = *reinterpret_cast<unsigned char*>(&eax210);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx211) + 4) = 0;
    r8d212 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx211 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx211 + 96) = 52;
    tmp8_213 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax210) + g14000c075);
    *reinterpret_cast<unsigned char*>(&eax210) = tmp8_213;
    eax214 = eax210 + 53;
    *reinterpret_cast<uint32_t*>(&rdx215) = *reinterpret_cast<unsigned char*>(&eax214);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx215) + 4) = 0;
    r8d216 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx215 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx215 + 96) = 53;
    tmp8_217 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax214) + g14000c076);
    *reinterpret_cast<unsigned char*>(&eax214) = tmp8_217;
    eax218 = eax214 + 54;
    *reinterpret_cast<uint32_t*>(&rdx219) = *reinterpret_cast<unsigned char*>(&eax218);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx219) + 4) = 0;
    r8d220 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx219 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx219 + 96) = 54;
    tmp8_221 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax218) + g14000c077);
    *reinterpret_cast<unsigned char*>(&eax218) = tmp8_221;
    eax222 = eax218 + 55;
    *reinterpret_cast<uint32_t*>(&rdx223) = *reinterpret_cast<unsigned char*>(&eax222);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx223) + 4) = 0;
    r8d224 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx223 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx223 + 96) = 55;
    tmp8_225 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax222) + g14000c078);
    *reinterpret_cast<unsigned char*>(&eax222) = tmp8_225;
    eax226 = eax222 + 56;
    *reinterpret_cast<uint32_t*>(&rdx227) = *reinterpret_cast<unsigned char*>(&eax226);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx227) + 4) = 0;
    r8d228 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx227 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx227 + 96) = 56;
    tmp8_229 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax226) + g14000c079);
    *reinterpret_cast<unsigned char*>(&eax226) = tmp8_229;
    eax230 = eax226 + 57;
    *reinterpret_cast<uint32_t*>(&rdx231) = *reinterpret_cast<unsigned char*>(&eax230);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx231) + 4) = 0;
    r8d232 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx231 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx231 + 96) = 57;
    tmp8_233 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax230) + g14000c07a);
    *reinterpret_cast<unsigned char*>(&eax230) = tmp8_233;
    eax234 = eax230 + 58;
    *reinterpret_cast<uint32_t*>(&rdx235) = *reinterpret_cast<unsigned char*>(&eax234);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx235) + 4) = 0;
    r8d236 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx235 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx235 + 96) = 58;
    tmp8_237 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax234) + g14000c07b);
    *reinterpret_cast<unsigned char*>(&eax234) = tmp8_237;
    eax238 = eax234 + 59;
    *reinterpret_cast<uint32_t*>(&rdx239) = *reinterpret_cast<unsigned char*>(&eax238);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx239) + 4) = 0;
    r8d240 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx239 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx239 + 96) = 59;
    tmp8_241 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax238) + g14000c07c);
    *reinterpret_cast<unsigned char*>(&eax238) = tmp8_241;
    eax242 = eax238 + 60;
    *reinterpret_cast<uint32_t*>(&rdx243) = *reinterpret_cast<unsigned char*>(&eax242);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx243) + 4) = 0;
    r8d244 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx243 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx243 + 96) = 60;
    tmp8_245 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax242) + g14000c07d);
    *reinterpret_cast<unsigned char*>(&eax242) = tmp8_245;
    eax246 = eax242 + 61;
    *reinterpret_cast<uint32_t*>(&rdx247) = *reinterpret_cast<unsigned char*>(&eax246);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx247) + 4) = 0;
    r8d248 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx247 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx247 + 96) = 61;
    tmp8_249 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax246) + g14000c07e);
    *reinterpret_cast<unsigned char*>(&eax246) = tmp8_249;
    eax250 = eax246 + 62;
    *reinterpret_cast<uint32_t*>(&rdx251) = *reinterpret_cast<unsigned char*>(&eax250);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx251) + 4) = 0;
    r8d252 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx251 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx251 + 96) = 62;
    tmp8_253 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax250) + g14000c07f);
    *reinterpret_cast<unsigned char*>(&eax250) = tmp8_253;
    eax254 = eax250 + 63;
    *reinterpret_cast<uint32_t*>(&rdx255) = *reinterpret_cast<unsigned char*>(&eax254);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx255) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx255 + 96) = 63;
    tmp8_256 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax254) + g14000c080);
    *reinterpret_cast<unsigned char*>(&eax254) = tmp8_256;
    eax257 = eax254 + 64;
    *reinterpret_cast<uint32_t*>(&rdx258) = *reinterpret_cast<unsigned char*>(&eax257);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx258) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx258 + 96) = 64;
    tmp8_259 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax257) + g14000c081);
    *reinterpret_cast<unsigned char*>(&eax257) = tmp8_259;
    eax260 = eax257 + 65;
    *reinterpret_cast<uint32_t*>(&rdx261) = *reinterpret_cast<unsigned char*>(&eax260);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx261) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx261 + 96) = 65;
    tmp8_262 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax260) + g14000c082);
    *reinterpret_cast<unsigned char*>(&eax260) = tmp8_262;
    eax263 = eax260 + 66;
    *reinterpret_cast<uint32_t*>(&rdx264) = *reinterpret_cast<unsigned char*>(&eax263);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx264) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx264 + 96) = 66;
    tmp8_265 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax263) + g14000c083);
    *reinterpret_cast<unsigned char*>(&eax263) = tmp8_265;
    eax266 = eax263 + 67;
    *reinterpret_cast<uint32_t*>(&rdx267) = *reinterpret_cast<unsigned char*>(&eax266);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx267) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx267 + 96) = 67;
    tmp8_268 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax266) + g14000c084);
    *reinterpret_cast<unsigned char*>(&eax266) = tmp8_268;
    eax269 = eax266 + 68;
    *reinterpret_cast<uint32_t*>(&rdx270) = *reinterpret_cast<unsigned char*>(&eax269);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx270) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx270 + 96) = 68;
    tmp8_271 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax269) + g14000c085);
    *reinterpret_cast<unsigned char*>(&eax269) = tmp8_271;
    eax272 = eax269 + 69;
    *reinterpret_cast<uint32_t*>(&rdx273) = *reinterpret_cast<unsigned char*>(&eax272);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx273) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx273 + 96) = 69;
    tmp8_274 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax272) + g14000c086);
    *reinterpret_cast<unsigned char*>(&eax272) = tmp8_274;
    eax275 = eax272 + 70;
    *reinterpret_cast<uint32_t*>(&rdx276) = *reinterpret_cast<unsigned char*>(&eax275);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx276) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx276 + 96) = 70;
    tmp8_277 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax275) + g14000c087);
    *reinterpret_cast<unsigned char*>(&eax275) = tmp8_277;
    eax278 = eax275 + 71;
    *reinterpret_cast<uint32_t*>(&rdx279) = *reinterpret_cast<unsigned char*>(&eax278);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx279) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx279 + 96) = 71;
    tmp8_280 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax278) + g14000c088);
    *reinterpret_cast<unsigned char*>(&eax278) = tmp8_280;
    eax281 = eax278 + 72;
    *reinterpret_cast<uint32_t*>(&rdx282) = *reinterpret_cast<unsigned char*>(&eax281);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx282) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx282 + 96) = 72;
    tmp8_283 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax281) + g14000c089);
    *reinterpret_cast<unsigned char*>(&eax281) = tmp8_283;
    eax284 = eax281 + 73;
    *reinterpret_cast<uint32_t*>(&rdx285) = *reinterpret_cast<unsigned char*>(&eax284);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx285) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx285 + 96) = 73;
    tmp8_286 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax284) + g14000c08a);
    *reinterpret_cast<unsigned char*>(&eax284) = tmp8_286;
    eax287 = eax284 + 74;
    *reinterpret_cast<uint32_t*>(&rdx288) = *reinterpret_cast<unsigned char*>(&eax287);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx288) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx288 + 96) = 74;
    tmp8_289 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax287) + g14000c08b);
    *reinterpret_cast<unsigned char*>(&eax287) = tmp8_289;
    eax290 = eax287 + 75;
    *reinterpret_cast<uint32_t*>(&rdx291) = *reinterpret_cast<unsigned char*>(&eax290);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx291) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx291 + 96) = 75;
    tmp8_292 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax290) + g14000c08c);
    *reinterpret_cast<unsigned char*>(&eax290) = tmp8_292;
    eax293 = eax290 + 76;
    *reinterpret_cast<uint32_t*>(&rdx294) = *reinterpret_cast<unsigned char*>(&eax293);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx294) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx294 + 96) = 76;
    tmp8_295 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax293) + g14000c08d);
    *reinterpret_cast<unsigned char*>(&eax293) = tmp8_295;
    eax296 = eax293 + 77;
    *reinterpret_cast<uint32_t*>(&rdx297) = *reinterpret_cast<unsigned char*>(&eax296);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx297) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx297 + 96) = 77;
    tmp8_298 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax296) + g14000c08e);
    *reinterpret_cast<unsigned char*>(&eax296) = tmp8_298;
    eax299 = eax296 + 78;
    *reinterpret_cast<uint32_t*>(&rdx300) = *reinterpret_cast<unsigned char*>(&eax299);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx300) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx300 + 96) = 78;
    tmp8_301 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax299) + g14000c08f);
    *reinterpret_cast<unsigned char*>(&eax299) = tmp8_301;
    eax302 = eax299 + 79;
    *reinterpret_cast<uint32_t*>(&rdx303) = *reinterpret_cast<unsigned char*>(&eax302);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx303) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx303 + 96) = 79;
    tmp8_304 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax302) + g14000c090);
    *reinterpret_cast<unsigned char*>(&eax302) = tmp8_304;
    eax305 = eax302 + 80;
    *reinterpret_cast<uint32_t*>(&rdx306) = *reinterpret_cast<unsigned char*>(&eax305);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx306) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx306 + 96) = 80;
    tmp8_307 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax305) + g14000c091);
    *reinterpret_cast<unsigned char*>(&eax305) = tmp8_307;
    eax308 = eax305 + 81;
    *reinterpret_cast<uint32_t*>(&rdx309) = *reinterpret_cast<unsigned char*>(&eax308);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx309) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx309 + 96) = 81;
    tmp8_310 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax308) + g14000c092);
    *reinterpret_cast<unsigned char*>(&eax308) = tmp8_310;
    eax311 = eax308 + 82;
    *reinterpret_cast<uint32_t*>(&rdx312) = *reinterpret_cast<unsigned char*>(&eax311);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx312) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx312 + 96) = 82;
    tmp8_313 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax311) + g14000c093);
    *reinterpret_cast<unsigned char*>(&eax311) = tmp8_313;
    eax314 = eax311 + 83;
    *reinterpret_cast<uint32_t*>(&rdx315) = *reinterpret_cast<unsigned char*>(&eax314);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx315) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx315 + 96) = 83;
    tmp8_316 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax314) + g14000c094);
    *reinterpret_cast<unsigned char*>(&eax314) = tmp8_316;
    eax317 = eax314 + 84;
    *reinterpret_cast<uint32_t*>(&rdx318) = *reinterpret_cast<unsigned char*>(&eax317);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx318) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx318 + 96) = 84;
    tmp8_319 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax317) + g14000c095);
    *reinterpret_cast<unsigned char*>(&eax317) = tmp8_319;
    eax320 = eax317 + 85;
    *reinterpret_cast<uint32_t*>(&rdx321) = *reinterpret_cast<unsigned char*>(&eax320);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx321) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx321 + 96) = 85;
    tmp8_322 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax320) + g14000c096);
    *reinterpret_cast<unsigned char*>(&eax320) = tmp8_322;
    eax323 = eax320 + 86;
    *reinterpret_cast<uint32_t*>(&rdx324) = *reinterpret_cast<unsigned char*>(&eax323);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx324) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx324 + 96) = 86;
    tmp8_325 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax323) + g14000c097);
    *reinterpret_cast<unsigned char*>(&eax323) = tmp8_325;
    eax326 = eax323 + 87;
    *reinterpret_cast<uint32_t*>(&rdx327) = *reinterpret_cast<unsigned char*>(&eax326);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx327) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx327 + 96) = 87;
    tmp8_328 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax326) + g14000c098);
    *reinterpret_cast<unsigned char*>(&eax326) = tmp8_328;
    eax329 = eax326 + 88;
    *reinterpret_cast<uint32_t*>(&rdx330) = *reinterpret_cast<unsigned char*>(&eax329);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx330) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx330 + 96) = 88;
    tmp8_331 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax329) + g14000c099);
    *reinterpret_cast<unsigned char*>(&eax329) = tmp8_331;
    eax332 = eax329 + 89;
    *reinterpret_cast<uint32_t*>(&rdx333) = *reinterpret_cast<unsigned char*>(&eax332);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx333) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx333 + 96) = 89;
    tmp8_334 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax332) + g14000c09a);
    *reinterpret_cast<unsigned char*>(&eax332) = tmp8_334;
    eax335 = eax332 + 90;
    *reinterpret_cast<uint32_t*>(&rdx336) = *reinterpret_cast<unsigned char*>(&eax335);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx336) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx336 + 96) = 90;
    tmp8_337 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax335) + g14000c09b);
    *reinterpret_cast<unsigned char*>(&eax335) = tmp8_337;
    eax338 = eax335 + 91;
    *reinterpret_cast<uint32_t*>(&rdx339) = *reinterpret_cast<unsigned char*>(&eax338);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx339) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx339 + 96) = 91;
    tmp8_340 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax338) + g14000c09c);
    *reinterpret_cast<unsigned char*>(&eax338) = tmp8_340;
    eax341 = eax338 + 92;
    *reinterpret_cast<uint32_t*>(&rdx342) = *reinterpret_cast<unsigned char*>(&eax341);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx342) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx342 + 96) = 92;
    tmp8_343 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax341) + g14000c09d);
    *reinterpret_cast<unsigned char*>(&eax341) = tmp8_343;
    eax344 = eax341 + 93;
    *reinterpret_cast<uint32_t*>(&rdx345) = *reinterpret_cast<unsigned char*>(&eax344);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx345) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx345 + 96) = 93;
    tmp8_346 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax344) + g14000c09e);
    *reinterpret_cast<unsigned char*>(&eax344) = tmp8_346;
    eax347 = eax344 + 94;
    *reinterpret_cast<uint32_t*>(&rdx348) = *reinterpret_cast<unsigned char*>(&eax347);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx348) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx348 + 96) = 94;
    tmp8_349 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax347) + g14000c09f);
    *reinterpret_cast<unsigned char*>(&eax347) = tmp8_349;
    eax350 = eax347 + 95;
    *reinterpret_cast<uint32_t*>(&rdx351) = *reinterpret_cast<unsigned char*>(&eax350);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx351) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx351 + 96) = 95;
    tmp8_352 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax350) + g14000c0a0);
    *reinterpret_cast<unsigned char*>(&eax350) = tmp8_352;
    eax353 = eax350 + 96;
    *reinterpret_cast<uint32_t*>(&rdx354) = *reinterpret_cast<unsigned char*>(&eax353);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx354) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx354 + 96) = 96;
    tmp8_355 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax353) + g14000c0a1);
    *reinterpret_cast<unsigned char*>(&eax353) = tmp8_355;
    eax356 = eax353 + 97;
    *reinterpret_cast<uint32_t*>(&rdx357) = *reinterpret_cast<unsigned char*>(&eax356);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx357) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx357 + 96) = 97;
    tmp8_358 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax356) + g14000c0a2);
    *reinterpret_cast<unsigned char*>(&eax356) = tmp8_358;
    eax359 = eax356 + 98;
    *reinterpret_cast<uint32_t*>(&rdx360) = *reinterpret_cast<unsigned char*>(&eax359);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx360) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx360 + 96) = 98;
    tmp8_361 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax359) + g14000c0a3);
    *reinterpret_cast<unsigned char*>(&eax359) = tmp8_361;
    eax362 = eax359 + 99;
    *reinterpret_cast<uint32_t*>(&rdx363) = *reinterpret_cast<unsigned char*>(&eax362);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx363) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx363 + 96) = 99;
    tmp8_364 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax362) + g14000c0a4);
    *reinterpret_cast<unsigned char*>(&eax362) = tmp8_364;
    eax365 = eax362 + 100;
    *reinterpret_cast<uint32_t*>(&rdx366) = *reinterpret_cast<unsigned char*>(&eax365);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx366) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx366 + 96) = 100;
    tmp8_367 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax365) + g14000c0a5);
    *reinterpret_cast<unsigned char*>(&eax365) = tmp8_367;
    eax368 = eax365 + 0x65;
    *reinterpret_cast<uint32_t*>(&rdx369) = *reinterpret_cast<unsigned char*>(&eax368);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx369) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx369 + 96) = 0x65;
    tmp8_370 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax368) + g14000c0a6);
    *reinterpret_cast<unsigned char*>(&eax368) = tmp8_370;
    eax371 = eax368 + 0x66;
    *reinterpret_cast<uint32_t*>(&rdx372) = *reinterpret_cast<unsigned char*>(&eax371);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx372) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx372 + 96) = 0x66;
    tmp8_373 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax371) + g14000c0a7);
    *reinterpret_cast<unsigned char*>(&eax371) = tmp8_373;
    eax374 = eax371 + 0x67;
    *reinterpret_cast<uint32_t*>(&rdx375) = *reinterpret_cast<unsigned char*>(&eax374);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx375) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx375 + 96) = 0x67;
    tmp8_376 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax374) + g14000c0a8);
    *reinterpret_cast<unsigned char*>(&eax374) = tmp8_376;
    eax377 = eax374 + 0x68;
    *reinterpret_cast<uint32_t*>(&rdx378) = *reinterpret_cast<unsigned char*>(&eax377);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx378) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx378 + 96) = 0x68;
    tmp8_379 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax377) + g14000c0a9);
    *reinterpret_cast<unsigned char*>(&eax377) = tmp8_379;
    eax380 = eax377 + 0x69;
    *reinterpret_cast<uint32_t*>(&rdx381) = *reinterpret_cast<unsigned char*>(&eax380);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx381) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx381 + 96) = 0x69;
    tmp8_382 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax380) + g14000c0aa);
    *reinterpret_cast<unsigned char*>(&eax380) = tmp8_382;
    eax383 = eax380 + 0x6a;
    *reinterpret_cast<uint32_t*>(&rdx384) = *reinterpret_cast<unsigned char*>(&eax383);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx384) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx384 + 96) = 0x6a;
    tmp8_385 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax383) + g14000c0ab);
    *reinterpret_cast<unsigned char*>(&eax383) = tmp8_385;
    eax386 = eax383 + 0x6b;
    *reinterpret_cast<uint32_t*>(&rdx387) = *reinterpret_cast<unsigned char*>(&eax386);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx387) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx387 + 96) = 0x6b;
    tmp8_388 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax386) + g14000c0ac);
    *reinterpret_cast<unsigned char*>(&eax386) = tmp8_388;
    eax389 = eax386 + 0x6c;
    *reinterpret_cast<uint32_t*>(&rdx390) = *reinterpret_cast<unsigned char*>(&eax389);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx390) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx390 + 96) = 0x6c;
    tmp8_391 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax389) + g14000c0ad);
    *reinterpret_cast<unsigned char*>(&eax389) = tmp8_391;
    eax392 = eax389 + 0x6d;
    *reinterpret_cast<uint32_t*>(&rdx393) = *reinterpret_cast<unsigned char*>(&eax392);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx393) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx393 + 96) = 0x6d;
    tmp8_394 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax392) + g14000c0ae);
    *reinterpret_cast<unsigned char*>(&eax392) = tmp8_394;
    eax395 = eax392 + 0x6e;
    *reinterpret_cast<uint32_t*>(&rdx396) = *reinterpret_cast<unsigned char*>(&eax395);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx396) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx396 + 96) = 0x6e;
    tmp8_397 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax395) + g14000c0af);
    *reinterpret_cast<unsigned char*>(&eax395) = tmp8_397;
    eax398 = eax395 + 0x6f;
    *reinterpret_cast<uint32_t*>(&rdx399) = *reinterpret_cast<unsigned char*>(&eax398);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx399) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx399 + 96) = 0x6f;
    tmp8_400 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax398) + g14000c0b0);
    *reinterpret_cast<unsigned char*>(&eax398) = tmp8_400;
    eax401 = eax398 + 0x70;
    *reinterpret_cast<uint32_t*>(&rdx402) = *reinterpret_cast<unsigned char*>(&eax401);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx402) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx402 + 96) = 0x70;
    tmp8_403 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax401) + g14000c0b1);
    *reinterpret_cast<unsigned char*>(&eax401) = tmp8_403;
    eax404 = eax401 + 0x71;
    *reinterpret_cast<uint32_t*>(&rdx405) = *reinterpret_cast<unsigned char*>(&eax404);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx405) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx405 + 96) = 0x71;
    tmp8_406 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax404) + g14000c0b2);
    *reinterpret_cast<unsigned char*>(&eax404) = tmp8_406;
    eax407 = eax404 + 0x72;
    *reinterpret_cast<uint32_t*>(&rdx408) = *reinterpret_cast<unsigned char*>(&eax407);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx408) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx408 + 96) = 0x72;
    tmp8_409 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax407) + g14000c0b3);
    *reinterpret_cast<unsigned char*>(&eax407) = tmp8_409;
    eax410 = eax407 + 0x73;
    *reinterpret_cast<uint32_t*>(&rdx411) = *reinterpret_cast<unsigned char*>(&eax410);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx411) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx411 + 96) = 0x73;
    tmp8_412 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax410) + g14000c0b4);
    *reinterpret_cast<unsigned char*>(&eax410) = tmp8_412;
    eax413 = eax410 + 0x74;
    *reinterpret_cast<uint32_t*>(&rdx414) = *reinterpret_cast<unsigned char*>(&eax413);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx414) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx414 + 96) = 0x74;
    tmp8_415 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax413) + g14000c0b5);
    *reinterpret_cast<unsigned char*>(&eax413) = tmp8_415;
    eax416 = eax413 + 0x75;
    *reinterpret_cast<uint32_t*>(&rdx417) = *reinterpret_cast<unsigned char*>(&eax416);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx417) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx417 + 96) = 0x75;
    tmp8_418 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax416) + g14000c0b6);
    *reinterpret_cast<unsigned char*>(&eax416) = tmp8_418;
    eax419 = eax416 + 0x76;
    *reinterpret_cast<uint32_t*>(&rdx420) = *reinterpret_cast<unsigned char*>(&eax419);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx420) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx420 + 96) = 0x76;
    tmp8_421 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax419) + g14000c0b7);
    *reinterpret_cast<unsigned char*>(&eax419) = tmp8_421;
    eax422 = eax419 + 0x77;
    *reinterpret_cast<uint32_t*>(&rdx423) = *reinterpret_cast<unsigned char*>(&eax422);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx423) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx423 + 96) = 0x77;
    tmp8_424 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax422) + g14000c0b8);
    *reinterpret_cast<unsigned char*>(&eax422) = tmp8_424;
    eax425 = eax422 + 0x78;
    *reinterpret_cast<uint32_t*>(&rdx426) = *reinterpret_cast<unsigned char*>(&eax425);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx426) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx426 + 96) = 0x78;
    tmp8_427 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax425) + g14000c0b9);
    *reinterpret_cast<unsigned char*>(&eax425) = tmp8_427;
    eax428 = eax425 + 0x79;
    *reinterpret_cast<uint32_t*>(&rdx429) = *reinterpret_cast<unsigned char*>(&eax428);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx429) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx429 + 96) = 0x79;
    tmp8_430 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax428) + g14000c0ba);
    *reinterpret_cast<unsigned char*>(&eax428) = tmp8_430;
    eax431 = eax428 + 0x7a;
    *reinterpret_cast<uint32_t*>(&rdx432) = *reinterpret_cast<unsigned char*>(&eax431);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx432) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx432 + 96) = 0x7a;
    tmp8_433 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax431) + g14000c0bb);
    *reinterpret_cast<unsigned char*>(&eax431) = tmp8_433;
    eax434 = eax431 + 0x7b;
    *reinterpret_cast<uint32_t*>(&rdx435) = *reinterpret_cast<unsigned char*>(&eax434);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx435) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx435 + 96) = 0x7b;
    tmp8_436 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax434) + g14000c0bc);
    *reinterpret_cast<unsigned char*>(&eax434) = tmp8_436;
    eax437 = eax434 + 0x7c;
    *reinterpret_cast<uint32_t*>(&rdx438) = *reinterpret_cast<unsigned char*>(&eax437);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx438) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx438 + 96) = 0x7c;
    tmp8_439 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax437) + g14000c0bd);
    *reinterpret_cast<unsigned char*>(&eax437) = tmp8_439;
    eax440 = eax437 + 0x7d;
    *reinterpret_cast<uint32_t*>(&rdx441) = *reinterpret_cast<unsigned char*>(&eax440);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx441) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx441 + 96) = 0x7d;
    tmp8_442 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax440) + g14000c0be);
    *reinterpret_cast<unsigned char*>(&eax440) = tmp8_442;
    eax443 = eax440 + 0x7e;
    *reinterpret_cast<uint32_t*>(&rdx444) = *reinterpret_cast<unsigned char*>(&eax443);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx444) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx444 + 96) = 0x7e;
    tmp8_445 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax443) + g14000c0bf);
    *reinterpret_cast<unsigned char*>(&eax443) = tmp8_445;
    eax446 = eax443 + 0x7f;
    *reinterpret_cast<uint32_t*>(&rdx447) = *reinterpret_cast<unsigned char*>(&eax446);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx447) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx447 + 96) = 0x7f;
    tmp8_448 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax446) + g14000c0c0);
    *reinterpret_cast<unsigned char*>(&eax446) = tmp8_448;
    eax449 = eax446 + 0x80;
    *reinterpret_cast<uint32_t*>(&rdx450) = *reinterpret_cast<unsigned char*>(&eax449);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx450) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx450 + 96) = 0x80;
    tmp8_451 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax449) + g14000c0c1);
    *reinterpret_cast<unsigned char*>(&eax449) = tmp8_451;
    eax452 = eax449 + 0x81;
    *reinterpret_cast<uint32_t*>(&rdx453) = *reinterpret_cast<unsigned char*>(&eax452);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx453) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx453 + 96) = 0x81;
    tmp8_454 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax452) + g14000c0c2);
    *reinterpret_cast<unsigned char*>(&eax452) = tmp8_454;
    eax455 = eax452 + 0x82;
    *reinterpret_cast<uint32_t*>(&rdx456) = *reinterpret_cast<unsigned char*>(&eax455);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx456) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx456 + 96) = 0x82;
    tmp8_457 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax455) + g14000c0c3);
    *reinterpret_cast<unsigned char*>(&eax455) = tmp8_457;
    eax458 = eax455 + 0x83;
    *reinterpret_cast<uint32_t*>(&rdx459) = *reinterpret_cast<unsigned char*>(&eax458);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx459) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx459 + 96) = 0x83;
    tmp8_460 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax458) + g14000c0c4);
    *reinterpret_cast<unsigned char*>(&eax458) = tmp8_460;
    eax461 = eax458 + 0x84;
    *reinterpret_cast<uint32_t*>(&rdx462) = *reinterpret_cast<unsigned char*>(&eax461);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx462) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx462 + 96) = 0x84;
    tmp8_463 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax461) + g14000c0c5);
    *reinterpret_cast<unsigned char*>(&eax461) = tmp8_463;
    eax464 = eax461 + 0x85;
    *reinterpret_cast<uint32_t*>(&rdx465) = *reinterpret_cast<unsigned char*>(&eax464);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx465) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx465 + 96) = 0x85;
    tmp8_466 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax464) + g14000c0c6);
    *reinterpret_cast<unsigned char*>(&eax464) = tmp8_466;
    eax467 = eax464 + 0x86;
    *reinterpret_cast<uint32_t*>(&rdx468) = *reinterpret_cast<unsigned char*>(&eax467);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx468) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx468 + 96) = 0x86;
    tmp8_469 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax467) + g14000c0c7);
    *reinterpret_cast<unsigned char*>(&eax467) = tmp8_469;
    eax470 = eax467 + 0x87;
    *reinterpret_cast<uint32_t*>(&rdx471) = *reinterpret_cast<unsigned char*>(&eax470);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx471) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx471 + 96) = 0x87;
    tmp8_472 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax470) + g14000c0c8);
    *reinterpret_cast<unsigned char*>(&eax470) = tmp8_472;
    eax473 = eax470 + 0x88;
    *reinterpret_cast<uint32_t*>(&rdx474) = *reinterpret_cast<unsigned char*>(&eax473);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx474) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx474 + 96) = 0x88;
    tmp8_475 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax473) + g14000c0c9);
    *reinterpret_cast<unsigned char*>(&eax473) = tmp8_475;
    eax476 = eax473 + 0x89;
    *reinterpret_cast<uint32_t*>(&rdx477) = *reinterpret_cast<unsigned char*>(&eax476);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx477) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx477 + 96) = 0x89;
    tmp8_478 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax476) + g14000c0ca);
    *reinterpret_cast<unsigned char*>(&eax476) = tmp8_478;
    eax479 = eax476 + 0x8a;
    *reinterpret_cast<uint32_t*>(&rdx480) = *reinterpret_cast<unsigned char*>(&eax479);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx480) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx480 + 96) = 0x8a;
    tmp8_481 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax479) + g14000c0cb);
    *reinterpret_cast<unsigned char*>(&eax479) = tmp8_481;
    eax482 = eax479 + 0x8b;
    *reinterpret_cast<uint32_t*>(&rdx483) = *reinterpret_cast<unsigned char*>(&eax482);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx483) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx483 + 96) = 0x8b;
    tmp8_484 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax482) + g14000c0cc);
    *reinterpret_cast<unsigned char*>(&eax482) = tmp8_484;
    eax485 = eax482 + 0x8c;
    *reinterpret_cast<uint32_t*>(&rdx486) = *reinterpret_cast<unsigned char*>(&eax485);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx486) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx486 + 96) = 0x8c;
    tmp8_487 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax485) + g14000c0cd);
    *reinterpret_cast<unsigned char*>(&eax485) = tmp8_487;
    eax488 = eax485 + 0x8d;
    *reinterpret_cast<uint32_t*>(&rdx489) = *reinterpret_cast<unsigned char*>(&eax488);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx489) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx489 + 96) = 0x8d;
    tmp8_490 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax488) + g14000c0ce);
    *reinterpret_cast<unsigned char*>(&eax488) = tmp8_490;
    eax491 = eax488 + 0x8e;
    *reinterpret_cast<uint32_t*>(&rdx492) = *reinterpret_cast<unsigned char*>(&eax491);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx492) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx492 + 96) = 0x8e;
    tmp8_493 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax491) + g14000c0cf);
    *reinterpret_cast<unsigned char*>(&eax491) = tmp8_493;
    eax494 = eax491 + 0x8f;
    *reinterpret_cast<uint32_t*>(&rdx495) = *reinterpret_cast<unsigned char*>(&eax494);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx495) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx495 + 96) = 0x8f;
    tmp8_496 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax494) + g14000c0d0);
    *reinterpret_cast<unsigned char*>(&eax494) = tmp8_496;
    eax497 = eax494 + 0x90;
    *reinterpret_cast<uint32_t*>(&rdx498) = *reinterpret_cast<unsigned char*>(&eax497);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx498) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx498 + 96) = 0x90;
    tmp8_499 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax497) + g14000c0d1);
    *reinterpret_cast<unsigned char*>(&eax497) = tmp8_499;
    eax500 = eax497 + 0x91;
    *reinterpret_cast<uint32_t*>(&rdx501) = *reinterpret_cast<unsigned char*>(&eax500);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx501) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx501 + 96) = 0x91;
    tmp8_502 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax500) + g14000c0d2);
    *reinterpret_cast<unsigned char*>(&eax500) = tmp8_502;
    eax503 = eax500 + 0x92;
    *reinterpret_cast<uint32_t*>(&rdx504) = *reinterpret_cast<unsigned char*>(&eax503);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx504) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx504 + 96) = 0x92;
    tmp8_505 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax503) + g14000c0d3);
    *reinterpret_cast<unsigned char*>(&eax503) = tmp8_505;
    eax506 = eax503 + 0x93;
    *reinterpret_cast<uint32_t*>(&rdx507) = *reinterpret_cast<unsigned char*>(&eax506);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx507) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx507 + 96) = 0x93;
    tmp8_508 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax506) + g14000c0d4);
    *reinterpret_cast<unsigned char*>(&eax506) = tmp8_508;
    eax509 = eax506 + 0x94;
    *reinterpret_cast<uint32_t*>(&rdx510) = *reinterpret_cast<unsigned char*>(&eax509);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx510) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx510 + 96) = 0x94;
    tmp8_511 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax509) + g14000c0d5);
    *reinterpret_cast<unsigned char*>(&eax509) = tmp8_511;
    eax512 = eax509 + 0x95;
    *reinterpret_cast<uint32_t*>(&rdx513) = *reinterpret_cast<unsigned char*>(&eax512);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx513) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx513 + 96) = 0x95;
    tmp8_514 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax512) + g14000c0d6);
    *reinterpret_cast<unsigned char*>(&eax512) = tmp8_514;
    eax515 = eax512 + 0x96;
    *reinterpret_cast<uint32_t*>(&rdx516) = *reinterpret_cast<unsigned char*>(&eax515);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx516) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx516 + 96) = 0x96;
    tmp8_517 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax515) + g14000c0d7);
    *reinterpret_cast<unsigned char*>(&eax515) = tmp8_517;
    eax518 = eax515 + 0x97;
    *reinterpret_cast<uint32_t*>(&rdx519) = *reinterpret_cast<unsigned char*>(&eax518);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx519) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx519 + 96) = 0x97;
    tmp8_520 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax518) + g14000c0d8);
    *reinterpret_cast<unsigned char*>(&eax518) = tmp8_520;
    eax521 = eax518 + 0x98;
    *reinterpret_cast<uint32_t*>(&rdx522) = *reinterpret_cast<unsigned char*>(&eax521);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx522) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx522 + 96) = 0x98;
    tmp8_523 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax521) + g14000c0d9);
    *reinterpret_cast<unsigned char*>(&eax521) = tmp8_523;
    eax524 = eax521 + 0x99;
    *reinterpret_cast<uint32_t*>(&rdx525) = *reinterpret_cast<unsigned char*>(&eax524);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx525) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx525 + 96) = 0x99;
    tmp8_526 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax524) + g14000c0da);
    *reinterpret_cast<unsigned char*>(&eax524) = tmp8_526;
    eax527 = eax524 + 0x9a;
    *reinterpret_cast<uint32_t*>(&rdx528) = *reinterpret_cast<unsigned char*>(&eax527);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx528) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx528 + 96) = 0x9a;
    tmp8_529 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax527) + g14000c0db);
    *reinterpret_cast<unsigned char*>(&eax527) = tmp8_529;
    eax530 = eax527 + 0x9b;
    *reinterpret_cast<uint32_t*>(&rdx531) = *reinterpret_cast<unsigned char*>(&eax530);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx531) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx531 + 96) = 0x9b;
    tmp8_532 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax530) + g14000c0dc);
    *reinterpret_cast<unsigned char*>(&eax530) = tmp8_532;
    eax533 = eax530 + 0x9c;
    *reinterpret_cast<uint32_t*>(&rdx534) = *reinterpret_cast<unsigned char*>(&eax533);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx534) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx534 + 96) = -100;
    tmp8_535 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax533) + g14000c0dd);
    *reinterpret_cast<unsigned char*>(&eax533) = tmp8_535;
    eax536 = eax533 + 0x9d;
    *reinterpret_cast<uint32_t*>(&rdx537) = *reinterpret_cast<unsigned char*>(&eax536);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx537) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx537 + 96) = -99;
    tmp8_538 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax536) + g14000c0de);
    *reinterpret_cast<unsigned char*>(&eax536) = tmp8_538;
    eax539 = eax536 + 0x9e;
    *reinterpret_cast<uint32_t*>(&rdx540) = *reinterpret_cast<unsigned char*>(&eax539);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx540) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx540 + 96) = -98;
    tmp8_541 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax539) + g14000c0df);
    *reinterpret_cast<unsigned char*>(&eax539) = tmp8_541;
    eax542 = eax539 + 0x9f;
    *reinterpret_cast<uint32_t*>(&rdx543) = *reinterpret_cast<unsigned char*>(&eax542);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx543) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx543 + 96) = -97;
    tmp8_544 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax542) + g14000c0e0);
    *reinterpret_cast<unsigned char*>(&eax542) = tmp8_544;
    eax545 = eax542 + 0xa0;
    *reinterpret_cast<uint32_t*>(&rdx546) = *reinterpret_cast<unsigned char*>(&eax545);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx546) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx546 + 96) = -96;
    tmp8_547 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax545) + g14000c0e1);
    *reinterpret_cast<unsigned char*>(&eax545) = tmp8_547;
    eax548 = eax545 + 0xa1;
    *reinterpret_cast<uint32_t*>(&rdx549) = *reinterpret_cast<unsigned char*>(&eax548);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx549) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx549 + 96) = -95;
    tmp8_550 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax548) + g14000c0e2);
    *reinterpret_cast<unsigned char*>(&eax548) = tmp8_550;
    eax551 = eax548 + 0xa2;
    *reinterpret_cast<uint32_t*>(&rdx552) = *reinterpret_cast<unsigned char*>(&eax551);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx552) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx552 + 96) = -94;
    tmp8_553 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax551) + g14000c0e3);
    *reinterpret_cast<unsigned char*>(&eax551) = tmp8_553;
    eax554 = eax551 + 0xa3;
    *reinterpret_cast<uint32_t*>(&rdx555) = *reinterpret_cast<unsigned char*>(&eax554);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx555) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx555 + 96) = -93;
    tmp8_556 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax554) + g14000c0e4);
    *reinterpret_cast<unsigned char*>(&eax554) = tmp8_556;
    eax557 = eax554 + 0xa4;
    *reinterpret_cast<uint32_t*>(&rdx558) = *reinterpret_cast<unsigned char*>(&eax557);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx558) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx558 + 96) = -92;
    tmp8_559 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax557) + g14000c0e5);
    *reinterpret_cast<unsigned char*>(&eax557) = tmp8_559;
    eax560 = eax557 + 0xa5;
    *reinterpret_cast<uint32_t*>(&rdx561) = *reinterpret_cast<unsigned char*>(&eax560);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx561) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx561 + 96) = -91;
    tmp8_562 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax560) + g14000c0e6);
    *reinterpret_cast<unsigned char*>(&eax560) = tmp8_562;
    eax563 = eax560 + 0xa6;
    *reinterpret_cast<uint32_t*>(&rdx564) = *reinterpret_cast<unsigned char*>(&eax563);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx564) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx564 + 96) = -90;
    tmp8_565 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax563) + g14000c0e7);
    *reinterpret_cast<unsigned char*>(&eax563) = tmp8_565;
    eax566 = eax563 + 0xa7;
    *reinterpret_cast<uint32_t*>(&rdx567) = *reinterpret_cast<unsigned char*>(&eax566);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx567) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx567 + 96) = -89;
    tmp8_568 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax566) + g14000c0e8);
    *reinterpret_cast<unsigned char*>(&eax566) = tmp8_568;
    eax569 = eax566 + 0xa8;
    *reinterpret_cast<uint32_t*>(&rdx570) = *reinterpret_cast<unsigned char*>(&eax569);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx570) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx570 + 96) = -88;
    tmp8_571 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax569) + g14000c0e9);
    *reinterpret_cast<unsigned char*>(&eax569) = tmp8_571;
    eax572 = eax569 + 0xa9;
    *reinterpret_cast<uint32_t*>(&rdx573) = *reinterpret_cast<unsigned char*>(&eax572);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx573) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx573 + 96) = -87;
    tmp8_574 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax572) + g14000c0ea);
    *reinterpret_cast<unsigned char*>(&eax572) = tmp8_574;
    eax575 = eax572 + 0xaa;
    *reinterpret_cast<uint32_t*>(&rdx576) = *reinterpret_cast<unsigned char*>(&eax575);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx576) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx576 + 96) = -86;
    tmp8_577 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax575) + g14000c0eb);
    *reinterpret_cast<unsigned char*>(&eax575) = tmp8_577;
    eax578 = eax575 + 0xab;
    *reinterpret_cast<uint32_t*>(&rdx579) = *reinterpret_cast<unsigned char*>(&eax578);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx579) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx579 + 96) = -85;
    tmp8_580 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax578) + g14000c0ec);
    *reinterpret_cast<unsigned char*>(&eax578) = tmp8_580;
    eax581 = eax578 + 0xac;
    *reinterpret_cast<uint32_t*>(&rdx582) = *reinterpret_cast<unsigned char*>(&eax581);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx582) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx582 + 96) = -84;
    tmp8_583 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax581) + g14000c0ed);
    *reinterpret_cast<unsigned char*>(&eax581) = tmp8_583;
    eax584 = eax581 + 0xad;
    *reinterpret_cast<uint32_t*>(&rdx585) = *reinterpret_cast<unsigned char*>(&eax584);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx585) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx585 + 96) = -83;
    tmp8_586 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax584) + g14000c0ee);
    *reinterpret_cast<unsigned char*>(&eax584) = tmp8_586;
    eax587 = eax584 + 0xae;
    *reinterpret_cast<uint32_t*>(&rdx588) = *reinterpret_cast<unsigned char*>(&eax587);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx588) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx588 + 96) = -82;
    tmp8_589 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax587) + g14000c0ef);
    *reinterpret_cast<unsigned char*>(&eax587) = tmp8_589;
    eax590 = eax587 + 0xaf;
    *reinterpret_cast<uint32_t*>(&rdx591) = *reinterpret_cast<unsigned char*>(&eax590);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx591) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx591 + 96) = -81;
    tmp8_592 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax590) + g14000c0f0);
    *reinterpret_cast<unsigned char*>(&eax590) = tmp8_592;
    eax593 = eax590 + 0xb0;
    *reinterpret_cast<uint32_t*>(&rdx594) = *reinterpret_cast<unsigned char*>(&eax593);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx594) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx594 + 96) = -80;
    tmp8_595 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax593) + g14000c0f1);
    *reinterpret_cast<unsigned char*>(&eax593) = tmp8_595;
    eax596 = eax593 + 0xb1;
    *reinterpret_cast<uint32_t*>(&rdx597) = *reinterpret_cast<unsigned char*>(&eax596);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx597) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx597 + 96) = -79;
    tmp8_598 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax596) + g14000c0f2);
    *reinterpret_cast<unsigned char*>(&eax596) = tmp8_598;
    eax599 = eax596 + 0xb2;
    *reinterpret_cast<uint32_t*>(&rdx600) = *reinterpret_cast<unsigned char*>(&eax599);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx600) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx600 + 96) = -78;
    tmp8_601 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax599) + g14000c0f3);
    *reinterpret_cast<unsigned char*>(&eax599) = tmp8_601;
    eax602 = eax599 + 0xb3;
    *reinterpret_cast<uint32_t*>(&rdx603) = *reinterpret_cast<unsigned char*>(&eax602);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx603) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx603 + 96) = -77;
    tmp8_604 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax602) + g14000c0f4);
    *reinterpret_cast<unsigned char*>(&eax602) = tmp8_604;
    eax605 = eax602 + 0xb4;
    *reinterpret_cast<uint32_t*>(&rdx606) = *reinterpret_cast<unsigned char*>(&eax605);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx606) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx606 + 96) = -76;
    tmp8_607 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax605) + g14000c0f5);
    *reinterpret_cast<unsigned char*>(&eax605) = tmp8_607;
    eax608 = eax605 + 0xb5;
    *reinterpret_cast<uint32_t*>(&rdx609) = *reinterpret_cast<unsigned char*>(&eax608);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx609) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx609 + 96) = -75;
    tmp8_610 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax608) + g14000c0f6);
    *reinterpret_cast<unsigned char*>(&eax608) = tmp8_610;
    eax611 = eax608 + 0xb6;
    *reinterpret_cast<uint32_t*>(&rdx612) = *reinterpret_cast<unsigned char*>(&eax611);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx612) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx612 + 96) = -74;
    tmp8_613 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax611) + g14000c0f7);
    *reinterpret_cast<unsigned char*>(&eax611) = tmp8_613;
    eax614 = eax611 + 0xb7;
    *reinterpret_cast<uint32_t*>(&rdx615) = *reinterpret_cast<unsigned char*>(&eax614);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx615) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx615 + 96) = -73;
    tmp8_616 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax614) + g14000c0f8);
    *reinterpret_cast<unsigned char*>(&eax614) = tmp8_616;
    eax617 = eax614 + 0xb8;
    *reinterpret_cast<uint32_t*>(&rdx618) = *reinterpret_cast<unsigned char*>(&eax617);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx618) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx618 + 96) = -72;
    tmp8_619 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax617) + g14000c0f9);
    *reinterpret_cast<unsigned char*>(&eax617) = tmp8_619;
    eax620 = eax617 + 0xb9;
    *reinterpret_cast<uint32_t*>(&rdx621) = *reinterpret_cast<unsigned char*>(&eax620);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx621) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx621 + 96) = -71;
    tmp8_622 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax620) + g14000c0fa);
    *reinterpret_cast<unsigned char*>(&eax620) = tmp8_622;
    eax623 = eax620 + 0xba;
    *reinterpret_cast<uint32_t*>(&rdx624) = *reinterpret_cast<unsigned char*>(&eax623);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx624) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx624 + 96) = -70;
    tmp8_625 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax623) + g14000c0fb);
    *reinterpret_cast<unsigned char*>(&eax623) = tmp8_625;
    eax626 = eax623 + 0xbb;
    *reinterpret_cast<uint32_t*>(&rdx627) = *reinterpret_cast<unsigned char*>(&eax626);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx627) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx627 + 96) = -69;
    tmp8_628 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax626) + g14000c0fc);
    *reinterpret_cast<unsigned char*>(&eax626) = tmp8_628;
    eax629 = eax626 + 0xbc;
    *reinterpret_cast<uint32_t*>(&rdx630) = *reinterpret_cast<unsigned char*>(&eax629);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx630) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx630 + 96) = -68;
    tmp8_631 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax629) + g14000c0fd);
    *reinterpret_cast<unsigned char*>(&eax629) = tmp8_631;
    eax632 = eax629 + 0xbd;
    *reinterpret_cast<uint32_t*>(&rdx633) = *reinterpret_cast<unsigned char*>(&eax632);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx633) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx633 + 96) = -67;
    tmp8_634 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax632) + g14000c0fe);
    *reinterpret_cast<unsigned char*>(&eax632) = tmp8_634;
    eax635 = eax632 + 0xbe;
    *reinterpret_cast<uint32_t*>(&rdx636) = *reinterpret_cast<unsigned char*>(&eax635);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx636) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx636 + 96) = -66;
    tmp8_637 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax635) + g14000c0ff);
    *reinterpret_cast<unsigned char*>(&eax635) = tmp8_637;
    eax638 = eax635 + 0xbf;
    *reinterpret_cast<uint32_t*>(&rdx639) = *reinterpret_cast<unsigned char*>(&eax638);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx639) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx639 + 96) = -65;
    tmp8_640 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax638) + g14000c100);
    *reinterpret_cast<unsigned char*>(&eax638) = tmp8_640;
    eax641 = eax638 + 0xc0;
    *reinterpret_cast<uint32_t*>(&rdx642) = *reinterpret_cast<unsigned char*>(&eax641);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx642) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx642 + 96) = -64;
    tmp8_643 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax641) + g14000c101);
    *reinterpret_cast<unsigned char*>(&eax641) = tmp8_643;
    eax644 = eax641 + 0xc1;
    *reinterpret_cast<uint32_t*>(&rdx645) = *reinterpret_cast<unsigned char*>(&eax644);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx645) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx645 + 96) = -63;
    tmp8_646 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax644) + g14000c102);
    *reinterpret_cast<unsigned char*>(&eax644) = tmp8_646;
    eax647 = eax644 + 0xc2;
    *reinterpret_cast<uint32_t*>(&rdx648) = *reinterpret_cast<unsigned char*>(&eax647);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx648) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx648 + 96) = -62;
    tmp8_649 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax647) + g14000c103);
    *reinterpret_cast<unsigned char*>(&eax647) = tmp8_649;
    eax650 = eax647 + 0xc3;
    *reinterpret_cast<uint32_t*>(&rdx651) = *reinterpret_cast<unsigned char*>(&eax650);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx651) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx651 + 96) = -61;
    tmp8_652 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax650) + g14000c104);
    *reinterpret_cast<unsigned char*>(&eax650) = tmp8_652;
    eax653 = eax650 + 0xc4;
    *reinterpret_cast<uint32_t*>(&rdx654) = *reinterpret_cast<unsigned char*>(&eax653);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx654) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx654 + 96) = -60;
    tmp8_655 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax653) + g14000c105);
    *reinterpret_cast<unsigned char*>(&eax653) = tmp8_655;
    eax656 = eax653 + 0xc5;
    *reinterpret_cast<uint32_t*>(&rdx657) = *reinterpret_cast<unsigned char*>(&eax656);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx657) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx657 + 96) = -59;
    tmp8_658 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax656) + g14000c106);
    *reinterpret_cast<unsigned char*>(&eax656) = tmp8_658;
    eax659 = eax656 + 0xc6;
    *reinterpret_cast<uint32_t*>(&rdx660) = *reinterpret_cast<unsigned char*>(&eax659);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx660) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx660 + 96) = -58;
    tmp8_661 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax659) + g14000c107);
    *reinterpret_cast<unsigned char*>(&eax659) = tmp8_661;
    eax662 = eax659 + 0xc7;
    *reinterpret_cast<uint32_t*>(&rdx663) = *reinterpret_cast<unsigned char*>(&eax662);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx663) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx663 + 96) = -57;
    tmp8_664 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax662) + g14000c108);
    *reinterpret_cast<unsigned char*>(&eax662) = tmp8_664;
    eax665 = eax662 + 0xc8;
    *reinterpret_cast<uint32_t*>(&rdx666) = *reinterpret_cast<unsigned char*>(&eax665);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx666) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx666 + 96) = -56;
    tmp8_667 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax665) + g14000c109);
    *reinterpret_cast<unsigned char*>(&eax665) = tmp8_667;
    eax668 = eax665 + 0xc9;
    *reinterpret_cast<uint32_t*>(&rdx669) = *reinterpret_cast<unsigned char*>(&eax668);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx669) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx669 + 96) = -55;
    tmp8_670 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax668) + g14000c10a);
    *reinterpret_cast<unsigned char*>(&eax668) = tmp8_670;
    eax671 = eax668 + 0xca;
    *reinterpret_cast<uint32_t*>(&rdx672) = *reinterpret_cast<unsigned char*>(&eax671);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx672) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx672 + 96) = -54;
    tmp8_673 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax671) + g14000c10b);
    *reinterpret_cast<unsigned char*>(&eax671) = tmp8_673;
    eax674 = eax671 + 0xcb;
    *reinterpret_cast<uint32_t*>(&rdx675) = *reinterpret_cast<unsigned char*>(&eax674);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx675) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx675 + 96) = -53;
    tmp8_676 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax674) + g14000c10c);
    *reinterpret_cast<unsigned char*>(&eax674) = tmp8_676;
    eax677 = eax674 + 0xcc;
    *reinterpret_cast<uint32_t*>(&rdx678) = *reinterpret_cast<unsigned char*>(&eax677);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx678) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx678 + 96) = -52;
    tmp8_679 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax677) + g14000c10d);
    *reinterpret_cast<unsigned char*>(&eax677) = tmp8_679;
    eax680 = eax677 + 0xcd;
    *reinterpret_cast<uint32_t*>(&rdx681) = *reinterpret_cast<unsigned char*>(&eax680);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx681) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx681 + 96) = -51;
    tmp8_682 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax680) + g14000c10e);
    *reinterpret_cast<unsigned char*>(&eax680) = tmp8_682;
    eax683 = eax680 + 0xce;
    *reinterpret_cast<uint32_t*>(&rdx684) = *reinterpret_cast<unsigned char*>(&eax683);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx684) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx684 + 96) = -50;
    tmp8_685 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax683) + g14000c10f);
    *reinterpret_cast<unsigned char*>(&eax683) = tmp8_685;
    eax686 = eax683 + 0xcf;
    *reinterpret_cast<uint32_t*>(&rdx687) = *reinterpret_cast<unsigned char*>(&eax686);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx687) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx687 + 96) = -49;
    tmp8_688 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax686) + g14000c110);
    *reinterpret_cast<unsigned char*>(&eax686) = tmp8_688;
    eax689 = eax686 + 0xd0;
    *reinterpret_cast<uint32_t*>(&rdx690) = *reinterpret_cast<unsigned char*>(&eax689);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx690) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx690 + 96) = -48;
    tmp8_691 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax689) + g14000c111);
    *reinterpret_cast<unsigned char*>(&eax689) = tmp8_691;
    eax692 = eax689 + 0xd1;
    *reinterpret_cast<uint32_t*>(&rdx693) = *reinterpret_cast<unsigned char*>(&eax692);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx693) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx693 + 96) = -47;
    tmp8_694 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax692) + g14000c112);
    *reinterpret_cast<unsigned char*>(&eax692) = tmp8_694;
    eax695 = eax692 + 0xd2;
    *reinterpret_cast<uint32_t*>(&rdx696) = *reinterpret_cast<unsigned char*>(&eax695);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx696) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx696 + 96) = -46;
    tmp8_697 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax695) + g14000c113);
    *reinterpret_cast<unsigned char*>(&eax695) = tmp8_697;
    eax698 = eax695 + 0xd3;
    *reinterpret_cast<uint32_t*>(&rdx699) = *reinterpret_cast<unsigned char*>(&eax698);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx699) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx699 + 96) = -45;
    tmp8_700 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax698) + g14000c114);
    *reinterpret_cast<unsigned char*>(&eax698) = tmp8_700;
    eax701 = eax698 + 0xd4;
    *reinterpret_cast<uint32_t*>(&rdx702) = *reinterpret_cast<unsigned char*>(&eax701);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx702) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx702 + 96) = -44;
    tmp8_703 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax701) + g14000c115);
    *reinterpret_cast<unsigned char*>(&eax701) = tmp8_703;
    eax704 = eax701 + 0xd5;
    *reinterpret_cast<uint32_t*>(&rdx705) = *reinterpret_cast<unsigned char*>(&eax704);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx705) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx705 + 96) = -43;
    tmp8_706 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax704) + g14000c116);
    *reinterpret_cast<unsigned char*>(&eax704) = tmp8_706;
    eax707 = eax704 + 0xd6;
    *reinterpret_cast<uint32_t*>(&rdx708) = *reinterpret_cast<unsigned char*>(&eax707);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx708) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx708 + 96) = -42;
    tmp8_709 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax707) + g14000c117);
    *reinterpret_cast<unsigned char*>(&eax707) = tmp8_709;
    eax710 = eax707 + 0xd7;
    *reinterpret_cast<uint32_t*>(&rdx711) = *reinterpret_cast<unsigned char*>(&eax710);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx711) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx711 + 96) = -41;
    tmp8_712 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax710) + g14000c118);
    *reinterpret_cast<unsigned char*>(&eax710) = tmp8_712;
    eax713 = eax710 + 0xd8;
    *reinterpret_cast<uint32_t*>(&rdx714) = *reinterpret_cast<unsigned char*>(&eax713);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx714) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx714 + 96) = -40;
    tmp8_715 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax713) + g14000c119);
    *reinterpret_cast<unsigned char*>(&eax713) = tmp8_715;
    eax716 = eax713 + 0xd9;
    *reinterpret_cast<uint32_t*>(&rdx717) = *reinterpret_cast<unsigned char*>(&eax716);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx717) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx717 + 96) = -39;
    tmp8_718 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax716) + g14000c11a);
    *reinterpret_cast<unsigned char*>(&eax716) = tmp8_718;
    eax719 = eax716 + 0xda;
    *reinterpret_cast<uint32_t*>(&rdx720) = *reinterpret_cast<unsigned char*>(&eax719);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx720) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx720 + 96) = -38;
    tmp8_721 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax719) + g14000c11b);
    *reinterpret_cast<unsigned char*>(&eax719) = tmp8_721;
    eax722 = eax719 + 0xdb;
    *reinterpret_cast<uint32_t*>(&rdx723) = *reinterpret_cast<unsigned char*>(&eax722);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx723) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx723 + 96) = -37;
    tmp8_724 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax722) + g14000c11c);
    *reinterpret_cast<unsigned char*>(&eax722) = tmp8_724;
    eax725 = eax722 + 0xdc;
    *reinterpret_cast<uint32_t*>(&rdx726) = *reinterpret_cast<unsigned char*>(&eax725);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx726) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx726 + 96) = -36;
    tmp8_727 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax725) + g14000c11d);
    *reinterpret_cast<unsigned char*>(&eax725) = tmp8_727;
    eax728 = eax725 + 0xdd;
    *reinterpret_cast<uint32_t*>(&rdx729) = *reinterpret_cast<unsigned char*>(&eax728);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx729) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx729 + 96) = -35;
    tmp8_730 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax728) + g14000c11e);
    *reinterpret_cast<unsigned char*>(&eax728) = tmp8_730;
    eax731 = eax728 + 0xde;
    *reinterpret_cast<uint32_t*>(&rdx732) = *reinterpret_cast<unsigned char*>(&eax731);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx732) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx732 + 96) = -34;
    tmp8_733 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax731) + g14000c11f);
    *reinterpret_cast<unsigned char*>(&eax731) = tmp8_733;
    eax734 = eax731 + 0xdf;
    *reinterpret_cast<uint32_t*>(&rdx735) = *reinterpret_cast<unsigned char*>(&eax734);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx735) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx735 + 96) = -33;
    tmp8_736 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax734) + g14000c120);
    *reinterpret_cast<unsigned char*>(&eax734) = tmp8_736;
    eax737 = eax734 + 0xe0;
    *reinterpret_cast<uint32_t*>(&rdx738) = *reinterpret_cast<unsigned char*>(&eax737);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx738) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx738 + 96) = -32;
    tmp8_739 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax737) + g14000c121);
    *reinterpret_cast<unsigned char*>(&eax737) = tmp8_739;
    eax740 = eax737 + 0xe1;
    *reinterpret_cast<uint32_t*>(&rdx741) = *reinterpret_cast<unsigned char*>(&eax740);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx741) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx741 + 96) = -31;
    tmp8_742 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax740) + g14000c122);
    *reinterpret_cast<unsigned char*>(&eax740) = tmp8_742;
    eax743 = eax740 + 0xe2;
    *reinterpret_cast<uint32_t*>(&rdx744) = *reinterpret_cast<unsigned char*>(&eax743);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx744) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx744 + 96) = -30;
    tmp8_745 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax743) + g14000c123);
    *reinterpret_cast<unsigned char*>(&eax743) = tmp8_745;
    eax746 = eax743 + 0xe3;
    *reinterpret_cast<uint32_t*>(&rdx747) = *reinterpret_cast<unsigned char*>(&eax746);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx747) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx747 + 96) = -29;
    tmp8_748 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax746) + g14000c124);
    *reinterpret_cast<unsigned char*>(&eax746) = tmp8_748;
    eax749 = eax746 + 0xe4;
    *reinterpret_cast<uint32_t*>(&rdx750) = *reinterpret_cast<unsigned char*>(&eax749);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx750) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx750 + 96) = -28;
    tmp8_751 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax749) + g14000c125);
    *reinterpret_cast<unsigned char*>(&eax749) = tmp8_751;
    eax752 = eax749 + 0xe5;
    *reinterpret_cast<uint32_t*>(&rdx753) = *reinterpret_cast<unsigned char*>(&eax752);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx753) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx753 + 96) = -27;
    tmp8_754 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax752) + g14000c126);
    *reinterpret_cast<unsigned char*>(&eax752) = tmp8_754;
    eax755 = eax752 + 0xe6;
    *reinterpret_cast<uint32_t*>(&rdx756) = *reinterpret_cast<unsigned char*>(&eax755);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx756) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx756 + 96) = -26;
    tmp8_757 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax755) + g14000c127);
    *reinterpret_cast<unsigned char*>(&eax755) = tmp8_757;
    eax758 = eax755 + 0xe7;
    *reinterpret_cast<uint32_t*>(&rdx759) = *reinterpret_cast<unsigned char*>(&eax758);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx759) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx759 + 96) = -25;
    tmp8_760 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax758) + g14000c128);
    *reinterpret_cast<unsigned char*>(&eax758) = tmp8_760;
    eax761 = eax758 + 0xe8;
    *reinterpret_cast<uint32_t*>(&rdx762) = *reinterpret_cast<unsigned char*>(&eax761);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx762) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx762 + 96) = -24;
    tmp8_763 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax761) + g14000c129);
    *reinterpret_cast<unsigned char*>(&eax761) = tmp8_763;
    eax764 = eax761 + 0xe9;
    *reinterpret_cast<uint32_t*>(&rdx765) = *reinterpret_cast<unsigned char*>(&eax764);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx765) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx765 + 96) = -23;
    tmp8_766 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax764) + g14000c12a);
    *reinterpret_cast<unsigned char*>(&eax764) = tmp8_766;
    eax767 = eax764 + 0xea;
    *reinterpret_cast<uint32_t*>(&rdx768) = *reinterpret_cast<unsigned char*>(&eax767);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx768) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx768 + 96) = -22;
    tmp8_769 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax767) + g14000c12b);
    *reinterpret_cast<unsigned char*>(&eax767) = tmp8_769;
    eax770 = eax767 + 0xeb;
    *reinterpret_cast<uint32_t*>(&rdx771) = *reinterpret_cast<unsigned char*>(&eax770);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx771) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx771 + 96) = -21;
    tmp8_772 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax770) + g14000c12c);
    *reinterpret_cast<unsigned char*>(&eax770) = tmp8_772;
    eax773 = eax770 + 0xec;
    *reinterpret_cast<uint32_t*>(&rdx774) = *reinterpret_cast<unsigned char*>(&eax773);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx774) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx774 + 96) = -20;
    tmp8_775 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax773) + g14000c12d);
    *reinterpret_cast<unsigned char*>(&eax773) = tmp8_775;
    eax776 = eax773 + 0xed;
    *reinterpret_cast<uint32_t*>(&rdx777) = *reinterpret_cast<unsigned char*>(&eax776);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx777) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx777 + 96) = -19;
    tmp8_778 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax776) + g14000c12e);
    *reinterpret_cast<unsigned char*>(&eax776) = tmp8_778;
    eax779 = eax776 + 0xee;
    *reinterpret_cast<uint32_t*>(&rdx780) = *reinterpret_cast<unsigned char*>(&eax779);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx780) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx780 + 96) = -18;
    tmp8_781 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax779) + g14000c12f);
    *reinterpret_cast<unsigned char*>(&eax779) = tmp8_781;
    eax782 = eax779 + 0xef;
    *reinterpret_cast<uint32_t*>(&rdx783) = *reinterpret_cast<unsigned char*>(&eax782);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx783) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx783 + 96) = -17;
    tmp8_784 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax782) + g14000c130);
    *reinterpret_cast<unsigned char*>(&eax782) = tmp8_784;
    eax785 = eax782 + 0xf0;
    *reinterpret_cast<uint32_t*>(&rdx786) = *reinterpret_cast<unsigned char*>(&eax785);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx786) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx786 + 96) = -16;
    tmp8_787 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax785) + g14000c131);
    *reinterpret_cast<unsigned char*>(&eax785) = tmp8_787;
    eax788 = eax785 + 0xf1;
    *reinterpret_cast<uint32_t*>(&rdx789) = *reinterpret_cast<unsigned char*>(&eax788);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx789) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx789 + 96) = -15;
    tmp8_790 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax788) + g14000c132);
    *reinterpret_cast<unsigned char*>(&eax788) = tmp8_790;
    eax791 = eax788 + 0xf2;
    *reinterpret_cast<uint32_t*>(&rdx792) = *reinterpret_cast<unsigned char*>(&eax791);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx792) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx792 + 96) = -14;
    tmp8_793 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax791) + g14000c133);
    *reinterpret_cast<unsigned char*>(&eax791) = tmp8_793;
    eax794 = eax791 + 0xf3;
    *reinterpret_cast<uint32_t*>(&rdx795) = *reinterpret_cast<unsigned char*>(&eax794);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx795) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx795 + 96) = -13;
    tmp8_796 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax794) + g14000c134);
    *reinterpret_cast<unsigned char*>(&eax794) = tmp8_796;
    eax797 = eax794 + 0xf4;
    *reinterpret_cast<uint32_t*>(&rdx798) = *reinterpret_cast<unsigned char*>(&eax797);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx798) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx798 + 96) = -12;
    tmp8_799 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax797) + g14000c135);
    *reinterpret_cast<unsigned char*>(&eax797) = tmp8_799;
    eax800 = eax797 + 0xf5;
    *reinterpret_cast<uint32_t*>(&rdx801) = *reinterpret_cast<unsigned char*>(&eax800);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx801) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx801 + 96) = -11;
    tmp8_802 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax800) + g14000c136);
    *reinterpret_cast<unsigned char*>(&eax800) = tmp8_802;
    eax803 = eax800 + 0xf6;
    *reinterpret_cast<uint32_t*>(&rdx804) = *reinterpret_cast<unsigned char*>(&eax803);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx804) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx804 + 96) = -10;
    tmp8_805 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax803) + g14000c137);
    *reinterpret_cast<unsigned char*>(&eax803) = tmp8_805;
    eax806 = eax803 + 0xf7;
    *reinterpret_cast<uint32_t*>(&rdx807) = *reinterpret_cast<unsigned char*>(&eax806);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx807) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx807 + 96) = -9;
    tmp8_808 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax806) + g14000c138);
    *reinterpret_cast<unsigned char*>(&eax806) = tmp8_808;
    eax809 = eax806 + 0xf8;
    *reinterpret_cast<uint32_t*>(&rdx810) = *reinterpret_cast<unsigned char*>(&eax809);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx810) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx810 + 96) = -8;
    tmp8_811 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax809) + g14000c139);
    *reinterpret_cast<unsigned char*>(&eax809) = tmp8_811;
    eax812 = eax809 + 0xf9;
    *reinterpret_cast<uint32_t*>(&rdx813) = *reinterpret_cast<unsigned char*>(&eax812);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx813) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx813 + 96) = -7;
    tmp8_814 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax812) + g14000c13a);
    *reinterpret_cast<unsigned char*>(&eax812) = tmp8_814;
    eax815 = eax812 + 0xfa;
    *reinterpret_cast<uint32_t*>(&rdx816) = *reinterpret_cast<unsigned char*>(&eax815);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx816) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx816 + 96) = -6;
    tmp8_817 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax815) + g14000c13b);
    *reinterpret_cast<unsigned char*>(&eax815) = tmp8_817;
    eax818 = eax815 + 0xfb;
    *reinterpret_cast<uint32_t*>(&rdx819) = *reinterpret_cast<unsigned char*>(&eax818);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx819) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx819 + 96) = -5;
    tmp8_820 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax818) + g14000c13c);
    *reinterpret_cast<unsigned char*>(&eax818) = tmp8_820;
    eax821 = eax818 + 0xfc;
    *reinterpret_cast<uint32_t*>(&rdx822) = *reinterpret_cast<unsigned char*>(&eax821);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx822) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx822 + 96) = -4;
    tmp8_823 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax821) + g14000c13d);
    *reinterpret_cast<unsigned char*>(&eax821) = tmp8_823;
    eax824 = eax821 + 0xfd;
    *reinterpret_cast<uint32_t*>(&rdx825) = *reinterpret_cast<unsigned char*>(&eax824);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx825) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx825 + 96) = -3;
    tmp8_826 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax824) + g14000c13e);
    *reinterpret_cast<unsigned char*>(&eax824) = tmp8_826;
    eax827 = eax824 + 0xfe;
    *reinterpret_cast<uint32_t*>(&rdx828) = *reinterpret_cast<unsigned char*>(&eax827);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx828) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx828 + 96) = -2;
    tmp8_829 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax827) + g14000c13f);
    *reinterpret_cast<unsigned char*>(&eax827) = tmp8_829;
    eax830 = eax827 + 0xff;
    *reinterpret_cast<uint32_t*>(&rax831) = *reinterpret_cast<unsigned char*>(&eax830);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax831) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rax831 + 96) = -1;
    eax832 = *reinterpret_cast<unsigned char*>(&r8d8);
    *reinterpret_cast<uint32_t*>(&rcx833) = *reinterpret_cast<unsigned char*>(&eax832);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx833) + 4) = 0;
    *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rcx833 + 96) = *reinterpret_cast<unsigned char*>(&eax832);
    r8d834 = *reinterpret_cast<unsigned char*>(&r8d12);
    eax835 = eax832 + r8d834;
    *reinterpret_cast<uint32_t*>(&rcx836) = *reinterpret_cast<unsigned char*>(&eax835);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx836) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx836 + 96) = *reinterpret_cast<signed char*>(&r8d834);
    r8d837 = *reinterpret_cast<unsigned char*>(&r8d16);
    eax838 = eax835 + r8d837;
    *reinterpret_cast<uint32_t*>(&rcx839) = *reinterpret_cast<unsigned char*>(&eax838);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx839) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx839 + 96) = *reinterpret_cast<signed char*>(&r8d837);
    r8d840 = *reinterpret_cast<unsigned char*>(&r8d20);
    eax841 = eax838 + r8d840;
    *reinterpret_cast<uint32_t*>(&rcx842) = *reinterpret_cast<unsigned char*>(&eax841);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx842) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx842 + 96) = *reinterpret_cast<signed char*>(&r8d840);
    r8d843 = *reinterpret_cast<unsigned char*>(&r8d24);
    eax844 = eax841 + r8d843;
    *reinterpret_cast<uint32_t*>(&rcx845) = *reinterpret_cast<unsigned char*>(&eax844);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx845) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx845 + 96) = *reinterpret_cast<signed char*>(&r8d843);
    r8d846 = *reinterpret_cast<unsigned char*>(&r8d28);
    eax847 = eax844 + r8d846;
    *reinterpret_cast<uint32_t*>(&rcx848) = *reinterpret_cast<unsigned char*>(&eax847);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx848) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx848 + 96) = *reinterpret_cast<signed char*>(&r8d846);
    r8d849 = *reinterpret_cast<unsigned char*>(&r8d32);
    eax850 = eax847 + r8d849;
    *reinterpret_cast<uint32_t*>(&rcx851) = *reinterpret_cast<unsigned char*>(&eax850);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx851) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx851 + 96) = *reinterpret_cast<signed char*>(&r8d849);
    r8d852 = *reinterpret_cast<unsigned char*>(&r8d36);
    eax853 = eax850 + r8d852;
    *reinterpret_cast<uint32_t*>(&rcx854) = *reinterpret_cast<unsigned char*>(&eax853);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx854) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx854 + 96) = *reinterpret_cast<signed char*>(&r8d852);
    r8d855 = *reinterpret_cast<unsigned char*>(&r8d40);
    eax856 = eax853 + r8d855;
    *reinterpret_cast<uint32_t*>(&rcx857) = *reinterpret_cast<unsigned char*>(&eax856);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx857) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx857 + 96) = *reinterpret_cast<signed char*>(&r8d855);
    r8d858 = *reinterpret_cast<unsigned char*>(&r8d44);
    eax859 = eax856 + r8d858;
    *reinterpret_cast<uint32_t*>(&rcx860) = *reinterpret_cast<unsigned char*>(&eax859);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx860) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx860 + 96) = *reinterpret_cast<signed char*>(&r8d858);
    r8d861 = *reinterpret_cast<unsigned char*>(&r8d48);
    eax862 = eax859 + r8d861;
    *reinterpret_cast<uint32_t*>(&rcx863) = *reinterpret_cast<unsigned char*>(&eax862);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx863) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx863 + 96) = *reinterpret_cast<signed char*>(&r8d861);
    r8d864 = *reinterpret_cast<unsigned char*>(&r8d52);
    eax865 = eax862 + r8d864;
    *reinterpret_cast<uint32_t*>(&rcx866) = *reinterpret_cast<unsigned char*>(&eax865);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx866) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx866 + 96) = *reinterpret_cast<signed char*>(&r8d864);
    r8d867 = *reinterpret_cast<unsigned char*>(&r8d56);
    eax868 = eax865 + r8d867;
    *reinterpret_cast<uint32_t*>(&rcx869) = *reinterpret_cast<unsigned char*>(&eax868);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx869) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx869 + 96) = *reinterpret_cast<signed char*>(&r8d867);
    r8d870 = *reinterpret_cast<unsigned char*>(&r8d60);
    eax871 = eax868 + r8d870;
    *reinterpret_cast<uint32_t*>(&rcx872) = *reinterpret_cast<unsigned char*>(&eax871);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx872) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx872 + 96) = *reinterpret_cast<signed char*>(&r8d870);
    r8d873 = *reinterpret_cast<unsigned char*>(&r8d64);
    eax874 = eax871 + r8d873;
    *reinterpret_cast<uint32_t*>(&rcx875) = *reinterpret_cast<unsigned char*>(&eax874);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx875) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx875 + 96) = *reinterpret_cast<signed char*>(&r8d873);
    r8d876 = *reinterpret_cast<unsigned char*>(&r8d68);
    eax877 = eax874 + r8d876;
    *reinterpret_cast<uint32_t*>(&rcx878) = *reinterpret_cast<unsigned char*>(&eax877);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx878) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx878 + 96) = *reinterpret_cast<signed char*>(&r8d876);
    r8d879 = *reinterpret_cast<unsigned char*>(&r8d72);
    eax880 = eax877 + r8d879;
    *reinterpret_cast<uint32_t*>(&rcx881) = *reinterpret_cast<unsigned char*>(&eax880);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx881) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx881 + 96) = *reinterpret_cast<signed char*>(&r8d879);
    r8d882 = *reinterpret_cast<unsigned char*>(&r8d76);
    eax883 = eax880 + r8d882;
    *reinterpret_cast<uint32_t*>(&rcx884) = *reinterpret_cast<unsigned char*>(&eax883);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx884) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx884 + 96) = *reinterpret_cast<signed char*>(&r8d882);
    r8d885 = *reinterpret_cast<unsigned char*>(&r8d80);
    eax886 = eax883 + r8d885;
    *reinterpret_cast<uint32_t*>(&rcx887) = *reinterpret_cast<unsigned char*>(&eax886);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx887) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx887 + 96) = *reinterpret_cast<signed char*>(&r8d885);
    r8d888 = *reinterpret_cast<unsigned char*>(&r8d84);
    eax889 = eax886 + r8d888;
    *reinterpret_cast<uint32_t*>(&rcx890) = *reinterpret_cast<unsigned char*>(&eax889);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx890) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx890 + 96) = *reinterpret_cast<signed char*>(&r8d888);
    r8d891 = *reinterpret_cast<unsigned char*>(&r8d88);
    eax892 = eax889 + r8d891;
    *reinterpret_cast<uint32_t*>(&rcx893) = *reinterpret_cast<unsigned char*>(&eax892);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx893) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx893 + 96) = *reinterpret_cast<signed char*>(&r8d891);
    r8d894 = *reinterpret_cast<unsigned char*>(&r8d92);
    eax895 = eax892 + r8d894;
    *reinterpret_cast<uint32_t*>(&rcx896) = *reinterpret_cast<unsigned char*>(&eax895);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx896) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx896 + 96) = *reinterpret_cast<signed char*>(&r8d894);
    r8d897 = *reinterpret_cast<unsigned char*>(&r8d96);
    eax898 = eax895 + r8d897;
    *reinterpret_cast<uint32_t*>(&rcx899) = *reinterpret_cast<unsigned char*>(&eax898);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx899) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx899 + 96) = *reinterpret_cast<signed char*>(&r8d897);
    r8d900 = *reinterpret_cast<unsigned char*>(&r8d100);
    eax901 = eax898 + r8d900;
    *reinterpret_cast<uint32_t*>(&rcx902) = *reinterpret_cast<unsigned char*>(&eax901);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx902) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx902 + 96) = *reinterpret_cast<signed char*>(&r8d900);
    r8d903 = *reinterpret_cast<unsigned char*>(&r8d104);
    eax904 = eax901 + r8d903;
    *reinterpret_cast<uint32_t*>(&rcx905) = *reinterpret_cast<unsigned char*>(&eax904);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx905) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx905 + 96) = *reinterpret_cast<signed char*>(&r8d903);
    r8d906 = *reinterpret_cast<unsigned char*>(&r8d108);
    eax907 = eax904 + r8d906;
    *reinterpret_cast<uint32_t*>(&rcx908) = *reinterpret_cast<unsigned char*>(&eax907);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx908) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx908 + 96) = *reinterpret_cast<signed char*>(&r8d906);
    r8d909 = *reinterpret_cast<unsigned char*>(&r8d112);
    eax910 = eax907 + r8d909;
    *reinterpret_cast<uint32_t*>(&rcx911) = *reinterpret_cast<unsigned char*>(&eax910);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx911) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx911 + 96) = *reinterpret_cast<signed char*>(&r8d909);
    r8d912 = *reinterpret_cast<unsigned char*>(&r8d116);
    eax913 = eax910 + r8d912;
    *reinterpret_cast<uint32_t*>(&rcx914) = *reinterpret_cast<unsigned char*>(&eax913);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx914) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx914 + 96) = *reinterpret_cast<signed char*>(&r8d912);
    r8d915 = *reinterpret_cast<unsigned char*>(&r8d120);
    eax916 = eax913 + r8d915;
    *reinterpret_cast<uint32_t*>(&rcx917) = *reinterpret_cast<unsigned char*>(&eax916);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx917) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx917 + 96) = *reinterpret_cast<signed char*>(&r8d915);
    r8d918 = *reinterpret_cast<unsigned char*>(&r8d124);
    eax919 = eax916 + r8d918;
    *reinterpret_cast<uint32_t*>(&rcx920) = *reinterpret_cast<unsigned char*>(&eax919);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx920) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx920 + 96) = *reinterpret_cast<signed char*>(&r8d918);
    r8d921 = *reinterpret_cast<unsigned char*>(&r8d128);
    eax922 = eax919 + r8d921;
    *reinterpret_cast<uint32_t*>(&rcx923) = *reinterpret_cast<unsigned char*>(&eax922);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx923) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx923 + 96) = *reinterpret_cast<signed char*>(&r8d921);
    r8d924 = *reinterpret_cast<unsigned char*>(&r8d132);
    eax925 = eax922 + r8d924;
    *reinterpret_cast<uint32_t*>(&rcx926) = *reinterpret_cast<unsigned char*>(&eax925);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx926) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx926 + 96) = *reinterpret_cast<signed char*>(&r8d924);
    r8d927 = *reinterpret_cast<unsigned char*>(&r8d136);
    eax928 = eax925 + r8d927;
    *reinterpret_cast<uint32_t*>(&rcx929) = *reinterpret_cast<unsigned char*>(&eax928);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx929) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx929 + 96) = *reinterpret_cast<signed char*>(&r8d927);
    r8d930 = *reinterpret_cast<unsigned char*>(&r8d140);
    eax931 = eax928 + r8d930;
    *reinterpret_cast<uint32_t*>(&rcx932) = *reinterpret_cast<unsigned char*>(&eax931);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx932) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx932 + 96) = *reinterpret_cast<signed char*>(&r8d930);
    r8d933 = *reinterpret_cast<unsigned char*>(&r8d144);
    eax934 = eax931 + r8d933;
    *reinterpret_cast<uint32_t*>(&rcx935) = *reinterpret_cast<unsigned char*>(&eax934);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx935) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx935 + 96) = *reinterpret_cast<signed char*>(&r8d933);
    r8d936 = *reinterpret_cast<unsigned char*>(&r8d148);
    eax937 = eax934 + r8d936;
    *reinterpret_cast<uint32_t*>(&rcx938) = *reinterpret_cast<unsigned char*>(&eax937);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx938) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx938 + 96) = *reinterpret_cast<signed char*>(&r8d936);
    r8d939 = *reinterpret_cast<unsigned char*>(&r8d152);
    eax940 = eax937 + r8d939;
    *reinterpret_cast<uint32_t*>(&rcx941) = *reinterpret_cast<unsigned char*>(&eax940);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx941) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx941 + 96) = *reinterpret_cast<signed char*>(&r8d939);
    r8d942 = *reinterpret_cast<unsigned char*>(&r8d156);
    eax943 = eax940 + r8d942;
    *reinterpret_cast<uint32_t*>(&rcx944) = *reinterpret_cast<unsigned char*>(&eax943);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx944) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx944 + 96) = *reinterpret_cast<signed char*>(&r8d942);
    r8d945 = *reinterpret_cast<unsigned char*>(&r8d160);
    eax946 = eax943 + r8d945;
    *reinterpret_cast<uint32_t*>(&rcx947) = *reinterpret_cast<unsigned char*>(&eax946);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx947) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx947 + 96) = *reinterpret_cast<signed char*>(&r8d945);
    r8d948 = *reinterpret_cast<unsigned char*>(&r8d164);
    eax949 = eax946 + r8d948;
    *reinterpret_cast<uint32_t*>(&rcx950) = *reinterpret_cast<unsigned char*>(&eax949);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx950) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx950 + 96) = *reinterpret_cast<signed char*>(&r8d948);
    r8d951 = *reinterpret_cast<unsigned char*>(&r8d168);
    eax952 = eax949 + r8d951;
    *reinterpret_cast<uint32_t*>(&rcx953) = *reinterpret_cast<unsigned char*>(&eax952);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx953) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx953 + 96) = *reinterpret_cast<signed char*>(&r8d951);
    r8d954 = *reinterpret_cast<unsigned char*>(&r8d172);
    eax955 = eax952 + r8d954;
    *reinterpret_cast<uint32_t*>(&rcx956) = *reinterpret_cast<unsigned char*>(&eax955);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx956) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx956 + 96) = *reinterpret_cast<signed char*>(&r8d954);
    r8d957 = *reinterpret_cast<unsigned char*>(&r8d176);
    eax958 = eax955 + r8d957;
    *reinterpret_cast<uint32_t*>(&rcx959) = *reinterpret_cast<unsigned char*>(&eax958);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx959) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx959 + 96) = *reinterpret_cast<signed char*>(&r8d957);
    r8d960 = *reinterpret_cast<unsigned char*>(&r8d180);
    eax961 = eax958 + r8d960;
    *reinterpret_cast<uint32_t*>(&rcx962) = *reinterpret_cast<unsigned char*>(&eax961);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx962) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx962 + 96) = *reinterpret_cast<signed char*>(&r8d960);
    r8d963 = *reinterpret_cast<unsigned char*>(&r8d184);
    eax964 = eax961 + r8d963;
    *reinterpret_cast<uint32_t*>(&rcx965) = *reinterpret_cast<unsigned char*>(&eax964);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx965) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx965 + 96) = *reinterpret_cast<signed char*>(&r8d963);
    r8d966 = *reinterpret_cast<unsigned char*>(&r8d188);
    eax967 = eax964 + r8d966;
    *reinterpret_cast<uint32_t*>(&rcx968) = *reinterpret_cast<unsigned char*>(&eax967);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx968) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx968 + 96) = *reinterpret_cast<signed char*>(&r8d966);
    r8d969 = *reinterpret_cast<unsigned char*>(&r8d192);
    eax970 = eax967 + r8d969;
    *reinterpret_cast<uint32_t*>(&rcx971) = *reinterpret_cast<unsigned char*>(&eax970);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx971) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx971 + 96) = *reinterpret_cast<signed char*>(&r8d969);
    r8d972 = *reinterpret_cast<unsigned char*>(&r8d196);
    eax973 = eax970 + r8d972;
    *reinterpret_cast<uint32_t*>(&rcx974) = *reinterpret_cast<unsigned char*>(&eax973);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx974) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx974 + 96) = *reinterpret_cast<signed char*>(&r8d972);
    r8d975 = *reinterpret_cast<unsigned char*>(&r8d200);
    eax976 = eax973 + r8d975;
    *reinterpret_cast<uint32_t*>(&rcx977) = *reinterpret_cast<unsigned char*>(&eax976);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx977) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx977 + 96) = *reinterpret_cast<signed char*>(&r8d975);
    r8d978 = *reinterpret_cast<unsigned char*>(&r8d204);
    eax979 = eax976 + r8d978;
    *reinterpret_cast<uint32_t*>(&rcx980) = *reinterpret_cast<unsigned char*>(&eax979);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx980) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx980 + 96) = *reinterpret_cast<signed char*>(&r8d978);
    r8d981 = *reinterpret_cast<unsigned char*>(&r8d208);
    eax982 = eax979 + r8d981;
    *reinterpret_cast<uint32_t*>(&rcx983) = *reinterpret_cast<unsigned char*>(&eax982);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx983) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx983 + 96) = *reinterpret_cast<signed char*>(&r8d981);
    r8d984 = *reinterpret_cast<unsigned char*>(&r8d212);
    eax985 = eax982 + r8d984;
    *reinterpret_cast<uint32_t*>(&rcx986) = *reinterpret_cast<unsigned char*>(&eax985);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx986) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx986 + 96) = *reinterpret_cast<signed char*>(&r8d984);
    r8d987 = *reinterpret_cast<unsigned char*>(&r8d216);
    eax988 = eax985 + r8d987;
    *reinterpret_cast<uint32_t*>(&rcx989) = *reinterpret_cast<unsigned char*>(&eax988);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx989) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx989 + 96) = *reinterpret_cast<signed char*>(&r8d987);
    r8d990 = *reinterpret_cast<unsigned char*>(&r8d220);
    eax991 = eax988 + r8d990;
    *reinterpret_cast<uint32_t*>(&rcx992) = *reinterpret_cast<unsigned char*>(&eax991);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx992) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx992 + 96) = *reinterpret_cast<signed char*>(&r8d990);
    r8d993 = *reinterpret_cast<unsigned char*>(&r8d224);
    eax994 = eax991 + r8d993;
    *reinterpret_cast<uint32_t*>(&rcx995) = *reinterpret_cast<unsigned char*>(&eax994);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx995) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx995 + 96) = *reinterpret_cast<signed char*>(&r8d993);
    r8d996 = *reinterpret_cast<unsigned char*>(&r8d228);
    eax997 = eax994 + r8d996;
    *reinterpret_cast<uint32_t*>(&rcx998) = *reinterpret_cast<unsigned char*>(&eax997);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx998) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx998 + 96) = *reinterpret_cast<signed char*>(&r8d996);
    r8d999 = *reinterpret_cast<unsigned char*>(&r8d232);
    eax1000 = eax997 + r8d999;
    *reinterpret_cast<uint32_t*>(&rcx1001) = *reinterpret_cast<unsigned char*>(&eax1000);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1001) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1001 + 96) = *reinterpret_cast<signed char*>(&r8d999);
    r8d1002 = *reinterpret_cast<unsigned char*>(&r8d236);
    eax1003 = eax1000 + r8d1002;
    *reinterpret_cast<uint32_t*>(&rcx1004) = *reinterpret_cast<unsigned char*>(&eax1003);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1004) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1004 + 96) = *reinterpret_cast<signed char*>(&r8d1002);
    r8d1005 = *reinterpret_cast<unsigned char*>(&r8d240);
    eax1006 = eax1003 + r8d1005;
    *reinterpret_cast<uint32_t*>(&rcx1007) = *reinterpret_cast<unsigned char*>(&eax1006);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1007) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1007 + 96) = *reinterpret_cast<signed char*>(&r8d1005);
    r8d1008 = *reinterpret_cast<unsigned char*>(&r8d244);
    eax1009 = eax1006 + r8d1008;
    *reinterpret_cast<uint32_t*>(&rcx1010) = *reinterpret_cast<unsigned char*>(&eax1009);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1010) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1010 + 96) = *reinterpret_cast<signed char*>(&r8d1008);
    *reinterpret_cast<uint32_t*>(&r8_1011) = *reinterpret_cast<unsigned char*>(&r8d248);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_1011) + 4) = 0;
    eax1012 = eax1009 + *reinterpret_cast<uint32_t*>(&r8_1011);
    *reinterpret_cast<uint32_t*>(&rcx1013) = *reinterpret_cast<unsigned char*>(&eax1012);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1013) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1013 + 96) = *reinterpret_cast<signed char*>(&r8_1011);
    ecx1014 = *reinterpret_cast<unsigned char*>(&r8d252);
    eax1015 = eax1012 + ecx1014;
    *reinterpret_cast<uint32_t*>(&rax1016) = *reinterpret_cast<unsigned char*>(&eax1015);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1016) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rax1016 + 96) = *reinterpret_cast<signed char*>(&ecx1014);
    rax1018 = fun_140001450("Decrypted message: %s\n", reinterpret_cast<int64_t>(rsp2) + 32, r8_1011, r9_1017);
    return rax1018;
}

int64_t exit = 0x1155c;

void fun_14000b500(void** rcx, void** rdx) {
    goto exit;
}

int64_t* g14000d7f0 = reinterpret_cast<int64_t*>(0x140010040);

int64_t Sleep = 0x11408;

struct s50 {
    signed char[8] pad8;
    int64_t f8;
};

struct s50* g30;

int32_t* g14000d800 = reinterpret_cast<int32_t*>(0x140010048);

int64_t* g14000d760 = reinterpret_cast<int64_t*>(0x14000d040);

void** g14000d830 = reinterpret_cast<void**>(16);

void** g14000d820 = reinterpret_cast<void**>(0);

void** g14000d850 = reinterpret_cast<void**>(40);

void** g14000d840 = reinterpret_cast<void**>(24);

int32_t g140010008;

int64_t g14000d890 = 0x140005740;

int64_t SetUnhandledExceptionFilter = 0x113ea;

void** g14000d7e0 = reinterpret_cast<void**>(0xd0);

void fun_140001000();

int32_t g140010028;

void** g140010020;

void**** g14000d770 = reinterpret_cast<void****>(0x140011254);

void** g140010018;

int32_t g14001000c;

int32_t g140010010;

int32_t* g14000d7a0 = reinterpret_cast<int32_t*>(0x140010090);

void fun_14000b4c0();

int64_t fun_140001180(void** rcx, void** rdx) {
    int64_t* rbx3;
    int64_t rbp4;
    struct s50* rax5;
    int64_t rsi6;
    int64_t tmp64_7;
    int32_t* rsi8;
    int32_t edi9;
    int64_t* rax10;
    int64_t rax11;
    void** r8_12;
    void** r9_13;
    int64_t rcx14;
    void** rax15;
    void** rdx16;
    int64_t rbp17;
    void** r12_18;
    void** rcx19;
    void** rax20;
    void** r13_21;
    void** rdi22;
    int64_t rbx23;
    void** rcx24;
    struct s0* rax25;
    void** rsi26;
    void** rax27;
    void**** rax28;
    void** r8_29;
    void** rcx30;
    void** rdx31;
    int64_t rax32;
    int32_t ecx33;
    void** rcx34;
    int32_t* rax35;
    int64_t v36;
    int32_t edx37;
    int64_t rax38;

    rbx3 = g14000d7f0;
    rbp4 = Sleep;
    rax5 = g30;
    rsi6 = rax5->f8;
    while (1) {
        if (*rbx3 == rsi6) {
            tmp64_7 = *rbx3;
            *rbx3 = rsi6;
            rsi6 = tmp64_7;
        }
        if (!0) 
            break;
        if (!rsi6) 
            goto addr_140001320_6;
        *reinterpret_cast<int32_t*>(&rcx) = 0x3e8;
        *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
        rbp4(0x3e8);
    }
    rsi8 = g14000d800;
    edi9 = 0;
    if (*rsi8 == 1) {
        addr_140001337_9:
        *reinterpret_cast<int32_t*>(&rcx) = 31;
        *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
        fun_14000b4b8(31);
        if (*rsi8 != 1) {
            addr_140001200_10:
            if (!edi9) {
                addr_14000136d_11:
                *rbx3 = 0;
                goto addr_140001208_12;
            } else {
                addr_140001208_12:
                rax10 = g14000d760;
                rax11 = *rax10;
                if (rax11) {
                    *reinterpret_cast<int32_t*>(&r8_12) = 0;
                    *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdx) = 2;
                    *reinterpret_cast<int32_t*>(&rdx + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rcx) = 0;
                    *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
                    rax11();
                }
            }
        } else {
            addr_14000134c_14:
            rdx = g14000d830;
            rcx = g14000d820;
            fun_14000b4d0(rcx, rdx);
            *rsi8 = 2;
            if (edi9) 
                goto addr_140001208_12; else 
                goto addr_14000136d_11;
        }
    } else {
        addr_1400011e1_15:
        if (!*rsi8) {
            rdx = g14000d850;
            rcx = g14000d840;
            *rsi8 = 1;
            fun_14000b4d0(rcx, rdx);
            goto addr_1400011f5_17;
        } else {
            g140010008 = 1;
            goto addr_1400011f5_17;
        }
    }
    fun_1400053a0(rcx, rdx, 0, r9_13);
    rcx14 = g14000d890;
    rax15 = reinterpret_cast<void**>(SetUnhandledExceptionFilter(rcx14, rdx));
    rdx16 = g14000d7e0;
    *reinterpret_cast<void***>(rdx16) = rax15;
    fun_14000af10(fun_140001000);
    fun_1400051b0(fun_140001000, rdx16);
    rbp17 = g140010028;
    r12_18 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(rbp17 + 1))) << 3);
    rcx19 = r12_18;
    rax20 = fun_14000b530(rcx19, rdx16);
    r13_21 = g140010020;
    rdi22 = rax20;
    if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbp17) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbp17) == 0))) {
        *reinterpret_cast<int32_t*>(&rbx23) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx23) + 4) = 0;
        do {
            rcx24 = *reinterpret_cast<void***>(r13_21 + rbx23 * 8);
            rax25 = fun_14000b558(rcx24, rcx24);
            rsi26 = reinterpret_cast<void**>(&rax25->f1);
            rax27 = fun_14000b530(rsi26, rdx16, rsi26, rdx16);
            r8_12 = rsi26;
            *reinterpret_cast<void***>(rdi22 + rbx23 * 8) = rax27;
            rdx16 = *reinterpret_cast<void***>(r13_21 + rbx23 * 8);
            rcx19 = rax27;
            ++rbx23;
            fun_14000b538(rcx19, rdx16, r8_12);
        } while (rbp17 != rbx23);
        rax20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi22) + reinterpret_cast<unsigned char>(r12_18) + 0xfffffffffffffff8);
    }
    *reinterpret_cast<void***>(rax20) = reinterpret_cast<void**>(0);
    g140010020 = rdi22;
    fun_140004fb0(rcx19, rdx16, r8_12);
    rax28 = g14000d770;
    r8_29 = g140010018;
    *reinterpret_cast<int32_t*>(&rcx30) = g140010028;
    *reinterpret_cast<int32_t*>(&rcx30 + 4) = 0;
    **rax28 = r8_29;
    rdx31 = g140010020;
    rax32 = fun_140004ed9(rcx30, rdx31, r8_29);
    ecx33 = g14001000c;
    g140010010 = *reinterpret_cast<int32_t*>(&rax32);
    if (!ecx33) {
        *reinterpret_cast<int32_t*>(&rcx34) = *reinterpret_cast<int32_t*>(&rax32);
        *reinterpret_cast<int32_t*>(&rcx34 + 4) = 0;
        fun_14000b500(rcx34, rdx31);
        rax35 = g14000d7a0;
        *rax35 = 1;
        fun_140001180(rcx34, rdx31);
        goto v36;
    } else {
        edx37 = g140010008;
        if (!edx37) {
            fun_14000b4c0();
            *reinterpret_cast<int32_t*>(&rax38) = g140010010;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax38) + 4) = 0;
            return rax38;
        } else {
            return rax32;
        }
    }
    addr_1400011f5_17:
    if (*rsi8 == 1) 
        goto addr_14000134c_14; else 
        goto addr_140001200_10;
    addr_140001320_6:
    rsi8 = g14000d800;
    edi9 = 1;
    if (*rsi8 != 1) 
        goto addr_1400011e1_15; else 
        goto addr_140001337_9;
}

int64_t _cexit = 0x114f8;

void fun_14000b4c0() {
    goto _cexit;
}

int64_t _onexit = 0x11536;

uint64_t fun_14000b4e0(int64_t rcx) {
    goto _onexit;
}

uint32_t g1400100e8;

int64_t DeleteCriticalSection = 0x1134c;

int64_t InitializeCriticalSection = 0x1138c;

int64_t fun_140005aa0(int64_t rcx, void** rdx) {
    uint32_t eax3;
    uint32_t eax4;
    uint32_t eax5;
    void** rbx6;
    void** rcx7;
    uint32_t eax8;

    if (*reinterpret_cast<uint32_t*>(&rdx) == 2) {
        fun_1400051b0(rcx, rdx);
        return 1;
    } else {
        if (*reinterpret_cast<uint32_t*>(&rdx) > 2) {
            if (*reinterpret_cast<uint32_t*>(&rdx) == 3 && (eax3 = g1400100e8, !!eax3)) {
                fun_140005900();
            }
        } else {
            if (!*reinterpret_cast<uint32_t*>(&rdx)) {
                eax4 = g1400100e8;
                if (eax4) {
                    fun_140005900();
                }
                eax5 = g1400100e8;
                if (eax5 == 1) {
                    rbx6 = g1400100e0;
                    if (rbx6) {
                        do {
                            rcx7 = rbx6;
                            rbx6 = *reinterpret_cast<void***>(rbx6 + 16);
                            fun_14000b518(rcx7, rdx);
                        } while (rbx6);
                    }
                    g1400100e0 = reinterpret_cast<void**>(0);
                    g1400100e8 = 0;
                    DeleteCriticalSection(0x140010100);
                }
            } else {
                eax8 = g1400100e8;
                if (!eax8) {
                    InitializeCriticalSection(0x140010100);
                }
                g1400100e8 = 1;
            }
        }
        return 1;
    }
}

int64_t __iob_func = 0x114b6;

void*** fun_14000b4a0() {
    goto __iob_func;
}

int64_t fwrite = 0x1157e;

void fun_14000b520(int64_t rcx, void** rdx, void** r8, void** r9) {
    goto fwrite;
}

int64_t vfprintf = 0x115de;

void fun_14000b568() {
    goto vfprintf;
}

int64_t abort = 0x1154a;

void fun_14000b4f0() {
    goto abort;
}

struct s51 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[16] pad24;
    int16_t f18;
};

uint32_t fun_140005d30(void** rcx, void** rdx, void** r8, void** r9) {
    struct s2* rax5;
    struct s51* rax6;

    rax5 = g14000d730;
    if (rax5->f0 != 0x5a4d || ((rax6 = reinterpret_cast<struct s51*>(reinterpret_cast<uint64_t>(rax5) + static_cast<int64_t>(rax5->f3c)), rax6->f0 != 0x4550) || rax6->f18 != 0x20b)) {
        return 0;
    } else {
        return static_cast<uint32_t>(rax6->f6);
    }
}

void fun_14000b4d8(int64_t rcx);

void fun_14000ae30(void** rcx, void** rdx, void** r8, void** r9) {
    int64_t v5;
    void** rax6;
    int64_t v7;
    void** rax8;
    int64_t v9;
    void** rax10;
    int64_t rax11;
    int64_t rax12;
    int64_t rcx13;

    rax6 = fun_14000af20(0, rdx, r8, r9, v5);
    if (reinterpret_cast<unsigned char>(rcx) < reinterpret_cast<unsigned char>(rax6) || (rax8 = fun_14000af20(19, rdx, r8, r9, v7), reinterpret_cast<unsigned char>(rcx) > reinterpret_cast<unsigned char>(rax8))) {
        goto EnterCriticalSection;
    } else {
        rax10 = fun_14000af20(0, rdx, r8, r9, v9);
        rax11 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rcx) - reinterpret_cast<unsigned char>(rax10)) >> 4;
        *reinterpret_cast<int32_t*>(&rax12) = *reinterpret_cast<int32_t*>(&rax11) * 0xaaaaaaab;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx13) = static_cast<int32_t>(rax12 + 16);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
        fun_14000b4d8(rcx13);
        *reinterpret_cast<void***>(rcx + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 24)) | 0x8000);
        return;
    }
}

uint32_t fun_140007aa0(int64_t rcx, void** rdx, uint32_t r8d, void** r9) {
    void* rsp5;
    uint32_t ecx6;
    uint32_t edi7;
    uint32_t v8;
    uint32_t edx9;
    void** rbx10;
    void** v11;
    uint32_t v12;
    uint32_t v13;
    uint32_t eax14;
    int64_t rax15;
    int64_t v16;
    void** rsi17;
    int32_t* r10_18;
    uint32_t r14d19;
    int32_t edx20;
    void** rbp21;
    int64_t rcx22;
    uint32_t eax23;
    int64_t rax24;
    int64_t rax25;
    int64_t rdx26;

    fun_14000b4c8(rcx);
    rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 0xa8 - 8 + 8);
    ecx6 = reinterpret_cast<uint32_t>(static_cast<int32_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r9))));
    edi7 = *reinterpret_cast<uint32_t*>(&rcx) & 0x6000;
    v8 = r8d;
    edx9 = ecx6;
    rbx10 = r9 + 1;
    v11 = rdx;
    v12 = edi7;
    v13 = 0;
    if (!ecx6) {
        addr_140007c77_2:
        return ecx6;
    } else {
        do {
            if (ecx6 != 37) {
                if (v12 & 0x4000 || (eax14 = v13, reinterpret_cast<int32_t>(v8) > reinterpret_cast<int32_t>(eax14))) {
                    if (v12 & 0x2000) {
                        fun_14000b510();
                        rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
                        eax14 = v13;
                    } else {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(v11) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(v13)))) = *reinterpret_cast<signed char*>(&edx9);
                        eax14 = v13;
                    }
                }
                v13 = eax14 + 1;
            } else {
                *reinterpret_cast<uint32_t*>(&rax15) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx10));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
                v12 = edi7;
                v16 = -1;
                if (!*reinterpret_cast<signed char*>(&rax15)) 
                    break;
                rsi17 = rbx10;
                r10_18 = reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rsp5) + 0x7c);
                r14d19 = 0;
                do {
                    edx20 = static_cast<int32_t>(rax15 - 32);
                    rbp21 = rsi17 + 1;
                    *reinterpret_cast<int32_t*>(&rcx22) = *reinterpret_cast<signed char*>(&rax15);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx22) + 4) = 0;
                    if (*reinterpret_cast<unsigned char*>(&edx20) <= 90) 
                        goto addr_140007bef_13;
                    eax23 = *reinterpret_cast<uint32_t*>(&rax15) - 48;
                    if (*reinterpret_cast<unsigned char*>(&eax23) > 9) 
                        break;
                    if (r14d19 > 3) 
                        break;
                    if (r14d19) {
                        if (r14d19 == 2) {
                            r14d19 = 3;
                        }
                    } else {
                        r14d19 = 1;
                    }
                    if (!r10_18) {
                        addr_140007c60_22:
                        *reinterpret_cast<uint32_t*>(&rax15) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi17 + 1));
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
                        rsi17 = rbp21;
                    } else {
                        *reinterpret_cast<int32_t*>(&rax24) = *reinterpret_cast<int32_t*>(&v16);
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0;
                        if (*reinterpret_cast<int32_t*>(&rax24) < 0) {
                            *reinterpret_cast<uint32_t*>(&rax15) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rsi17 + 1));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
                            rsi17 = rbp21;
                            *reinterpret_cast<int32_t*>(&v16) = *reinterpret_cast<int32_t*>(&rcx22) - 48;
                        } else {
                            *reinterpret_cast<int32_t*>(&rax25) = static_cast<int32_t>(rax24 + rax24 * 4);
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
                            *reinterpret_cast<int32_t*>(&v16) = static_cast<int32_t>(rcx22 + rax25 * 2 - 48);
                            goto addr_140007c60_22;
                        }
                    }
                } while (*reinterpret_cast<signed char*>(&rax15));
                goto addr_140007c6f_27;
                fun_1400060f0(37, reinterpret_cast<int64_t>(rsp5) + 0x70);
                rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
            }
            edx9 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx10));
            ++rbx10;
            ecx6 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&edx9)));
        } while (ecx6);
    }
    addr_140007c70_30:
    ecx6 = v13;
    goto addr_140007c77_2;
    addr_140007bef_13:
    *reinterpret_cast<uint32_t*>(&rdx26) = *reinterpret_cast<unsigned char*>(&edx20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = 0;
    goto *reinterpret_cast<int32_t*>(0x14000d390 + rdx26 * 4) + 0x14000d390;
    addr_140007c6f_27:
    goto addr_140007c70_30;
}

int64_t _unlock = 0x11540;

void fun_14000aea0(void** rcx, void** rdx, void** r8, void** r9) {
    int64_t v5;
    void** rax6;
    int64_t v7;
    void** rax8;
    int64_t v9;

    rax6 = fun_14000af20(0, rdx, r8, r9, v5);
    if (reinterpret_cast<unsigned char>(rcx) < reinterpret_cast<unsigned char>(rax6) || (rax8 = fun_14000af20(19, rdx, r8, r9, v7), reinterpret_cast<unsigned char>(rcx) > reinterpret_cast<unsigned char>(rax8))) {
        goto LeaveCriticalSection;
    } else {
        *reinterpret_cast<void***>(rcx + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 24)) & 0xffff7fff);
        fun_14000af20(0, rdx, r8, r9, v9);
        goto _unlock;
    }
}

struct s52 {
    signed char[32] pad32;
    signed char f20;
};

void fun_140006d90(void** rcx, void** rdx, void** r8) {
    void* rsp4;
    void* rbp5;
    void** r12_6;
    struct s43* rax7;
    void** r9_8;
    unsigned char* rdx9;
    int64_t v10;
    void** eax11;
    uint32_t edx12;
    uint16_t v13;
    int64_t rax14;
    struct s52* rsp15;
    signed char* rbx16;
    int64_t* rsp17;
    int32_t eax18;
    void* rsp19;
    void* rax20;
    signed char* rdi21;
    void** edx22;
    void** eax23;
    int32_t ecx24;
    int64_t* rsp25;

    rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 48);
    rbp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) + 48);
    r12_6 = rcx;
    if (*reinterpret_cast<void***>(rcx + 20) == 0xfffffffd) {
        rax7 = fun_14000b528();
        rcx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffff6);
        r9_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffff8);
        rdx9 = rax7->f0;
        eax11 = fun_14000b2a0(rcx, rdx9, 16, r9_8, v10);
        rsp4 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - 8 + 8);
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax11 == 0)) {
            edx12 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r12_6 + 24));
        } else {
            edx12 = v13;
            *reinterpret_cast<void***>(r12_6 + 24) = *reinterpret_cast<void***>(&edx12);
        }
        *reinterpret_cast<void***>(r12_6 + 20) = eax11;
    } else {
        edx12 = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(rcx + 24));
    }
    if (!*reinterpret_cast<void***>(&edx12)) {
        fun_1400060f0(46, r12_6, 46, r12_6);
        return;
    } else {
        rax14 = fun_140005f70(rcx, rcx);
        rsp15 = reinterpret_cast<struct s52*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax14);
        rbx16 = &rsp15->f20;
        rsp17 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
        *rsp17 = 0x140006dea;
        eax18 = fun_14000afd0(rbx16, edx12, reinterpret_cast<int64_t>(rbp5) - 8, r9_8);
        rsp19 = reinterpret_cast<void*>(rsp17 + 1);
        if (reinterpret_cast<uint1_t>(eax18 < 0) | reinterpret_cast<uint1_t>(eax18 == 0)) {
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp19) - 8) = 0x140006edd;
            fun_1400060f0(46, r12_6, 46, r12_6);
        } else {
            *reinterpret_cast<int32_t*>(&rax20) = eax18 - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
            rdi21 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rbx16) + reinterpret_cast<int64_t>(rax20) + 1);
            do {
                addr_140006e1b_12:
                edx22 = *reinterpret_cast<void***>(r12_6 + 8);
                ++rbx16;
                if (*reinterpret_cast<unsigned char*>(&edx22 + 1) & 64 || (eax23 = *reinterpret_cast<void***>(r12_6 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_6 + 40)) > reinterpret_cast<signed char>(eax23))) {
                    ecx24 = *(rbx16 - 1);
                    if (!(*reinterpret_cast<unsigned char*>(&edx22 + 1) & 32)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_6)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_6 + 36))))) = *reinterpret_cast<signed char*>(&ecx24);
                        eax23 = *reinterpret_cast<void***>(r12_6 + 36);
                    } else {
                        rsp25 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp19) - 8);
                        *rsp25 = 0x140006e4a;
                        fun_14000b510();
                        rsp19 = reinterpret_cast<void*>(rsp25 + 1);
                        *reinterpret_cast<void***>(r12_6 + 36) = *reinterpret_cast<void***>(r12_6 + 36) + 1;
                        if (rdi21 != rbx16) 
                            goto addr_140006e1b_12; else 
                            break;
                    }
                }
                *reinterpret_cast<void***>(r12_6 + 36) = eax23 + 1;
            } while (rdi21 != rbx16);
        }
        return;
    }
}

int64_t strerror = 0x115be;

void** fun_14000b550(int64_t rcx) {
    goto strerror;
}

int64_t wcslen = 0x115ea;

void** fun_14000b570(uint16_t* rcx) {
    goto wcslen;
}

void fun_14000a190();

void fun_14000a0b0(int32_t ecx, ...) {
    int32_t eax2;
    int32_t tmp32_3;
    int64_t rdi4;
    int32_t eax5;
    int64_t rbx6;

    eax2 = g140010af0;
    if (eax2 == 2) 
        goto addr_14000a180_2;
    if (eax2) {
        if (eax2 != 1) 
            goto addr_14000a0fb_5; else 
            goto addr_14000a0d1_6;
    }
    tmp32_3 = g140010af0;
    g140010af0 = 1;
    if (!tmp32_3) {
        rdi4 = InitializeCriticalSection;
        rdi4(0x140010b00);
        rdi4(0x140010b28);
        fun_140001410(fun_14000a190);
        goto addr_14000a13c_9;
    }
    if (tmp32_3 == 2) {
        addr_14000a13c_9:
        g140010af0 = 2;
    } else {
        eax5 = g140010af0;
        if (eax5 == 1) {
            addr_14000a0d1_6:
            rbx6 = Sleep;
            goto addr_14000a0e0_12;
        } else {
            goto addr_14000a0f2_14;
        }
    }
    addr_14000a146_15:
    goto EnterCriticalSection;
    do {
        addr_14000a0e0_12:
        rbx6(1);
        eax5 = g140010af0;
    } while (eax5 == 1);
    addr_14000a0f2_14:
    if (eax5 == 2) {
        addr_14000a180_2:
        goto addr_14000a146_15;
    } else {
        addr_14000a0fb_5:
        return;
    }
}

void fun_140009f60(void** rcx, void* edx) {
    int64_t rbx3;
    void** r10_4;
    int32_t ebp5;
    void** r12_6;
    int64_t rbp7;
    void*** r11_8;
    void*** rsi9;
    uint32_t edx10;
    void** rdi11;
    void** rax12;
    uint32_t ecx13;
    void*** r8_14;
    uint32_t edi15;
    void** r9d16;
    void** rsi17;
    uint32_t ecx18;
    uint32_t ecx19;
    int64_t rax20;

    rbx3 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 20));
    r10_4 = rcx;
    ebp5 = reinterpret_cast<int32_t>(edx) >> 5;
    if (*reinterpret_cast<int32_t*>(&rbx3) <= ebp5) 
        goto addr_140009ff0_2;
    r12_6 = rcx + 24;
    rbp7 = ebp5;
    r11_8 = reinterpret_cast<void***>(r12_6 + rbx3 * 4);
    rsi9 = reinterpret_cast<void***>(r12_6 + rbp7 * 4);
    edx10 = reinterpret_cast<uint32_t>(edx) & 31;
    if (!edx10) {
        rdi11 = r12_6;
        if (reinterpret_cast<uint64_t>(r11_8) <= reinterpret_cast<uint64_t>(rsi9)) {
            addr_140009ff0_2:
            *reinterpret_cast<void***>(r10_4 + 20) = reinterpret_cast<void**>(0);
        } else {
            do {
                *reinterpret_cast<void***>(rdi11) = *rsi9;
                rdi11 = rdi11 + 4;
                rsi9 = rsi9 + 4;
            } while (reinterpret_cast<uint64_t>(r11_8) > reinterpret_cast<uint64_t>(rsi9));
            rax12 = r12_6 + (rbx3 - rbp7) * 4;
            goto addr_14000a02d_11;
        }
    } else {
        ecx13 = edx10;
        r8_14 = rsi9 + 4;
        edi15 = 32 - edx10;
        r9d16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*rsi9) >> *reinterpret_cast<signed char*>(&ecx13));
        if (reinterpret_cast<uint64_t>(r11_8) <= reinterpret_cast<uint64_t>(r8_14)) {
            *reinterpret_cast<void***>(r10_4 + 24) = r9d16;
            if (!r9d16) 
                goto addr_140009ff0_2;
            rax12 = r12_6;
            goto addr_140009fe3_15;
        } else {
            rsi17 = r12_6;
            do {
                ecx18 = edi15;
                rsi17 = rsi17 + 4;
                r8_14 = r8_14 + 4;
                ecx19 = edx10;
                *reinterpret_cast<void***>(rsi17 + 0xfffffffffffffffc) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*r8_14) << *reinterpret_cast<unsigned char*>(&ecx18) | reinterpret_cast<unsigned char>(r9d16));
                r9d16 = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(r8_14 - 4) >> *reinterpret_cast<signed char*>(&ecx19));
            } while (reinterpret_cast<uint64_t>(r11_8) > reinterpret_cast<uint64_t>(r8_14));
            rax12 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(r12_6 + (rbx3 - rbp7) * 4) + 0xfffffffffffffffc);
            *reinterpret_cast<void***>(rax12) = r9d16;
            if (!r9d16) 
                goto addr_14000a02d_11; else 
                goto addr_140009fe3_15;
        }
    }
    *reinterpret_cast<void***>(r10_4 + 24) = reinterpret_cast<void**>(0);
    return;
    addr_14000a02d_11:
    rax20 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rax12) - reinterpret_cast<unsigned char>(r12_6)) >> 2;
    *reinterpret_cast<void***>(r10_4 + 20) = *reinterpret_cast<void***>(&rax20);
    if (*reinterpret_cast<void***>(&rax20)) {
        return;
    }
    addr_140009fe3_15:
    rax12 = rax12 + 4;
    goto addr_14000a02d_11;
}

void** fun_14000a990(void** rcx, void** rdx, void** r8) {
    int64_t rax4;
    void** rsi5;
    void** rbx6;
    void** edi7;
    int1_t sf8;
    void** ecx9;
    void** rax10;
    void** r8_11;
    int64_t rax12;
    void** rbp13;
    void** r12_14;
    void* rcx15;
    int64_t rdx16;
    int64_t r9_17;
    void*** r11_18;
    void** rdi19;
    int64_t rax20;
    int64_t rdx21;
    uint64_t rax22;
    int32_t r10d23;
    uint64_t rdx24;
    void** rcx25;
    uint64_t rax26;
    void* rax27;
    void** rax28;
    void* rdx29;
    void** rcx30;
    void** rax31;
    void*** rdx32;
    void* rsi33;
    void* rax34;
    void*** rbp35;
    void* rsi36;
    void* rbx37;
    void*** rcx38;
    int64_t rax39;
    uint64_t rax40;
    uint64_t rdx41;
    void** rax42;

    rax4 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdx + 20));
    rsi5 = rcx;
    rbx6 = rdx;
    edi7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 20)) - *reinterpret_cast<uint32_t*>(&rax4));
    sf8 = reinterpret_cast<signed char>(edi7) < reinterpret_cast<signed char>(0);
    if (edi7) {
        edi7 = reinterpret_cast<void**>(0);
        if (!sf8) {
            addr_14000a9ef_3:
            ecx9 = *reinterpret_cast<void***>(rsi5 + 8);
            rax10 = fun_14000a1e0(ecx9);
            r8_11 = rax10;
            if (!rax10) {
                addr_14000aaf3_4:
                return r8_11;
            } else {
                *reinterpret_cast<void***>(rax10 + 16) = edi7;
                rax12 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rsi5 + 20));
                rbp13 = rsi5 + 24;
                r12_14 = r8_11 + 24;
                *reinterpret_cast<int32_t*>(&rcx15) = 24;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx15) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx16) = 0;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
                r9_17 = rax12;
                r11_18 = reinterpret_cast<void***>(rbp13 + rax12 * 4);
                rdi19 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbx6 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx6 + 20)) * 4) + 24);
                do {
                    *reinterpret_cast<int32_t*>(&rax20) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rsi5) + reinterpret_cast<uint64_t>(rcx15));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
                    *reinterpret_cast<int32_t*>(&rdx21) = *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(rbx6) + reinterpret_cast<uint64_t>(rcx15));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = 0;
                    rax22 = reinterpret_cast<uint64_t>(rax20 - rdx16 - rdx21);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<unsigned char>(r8_11) + reinterpret_cast<uint64_t>(rcx15)) = *reinterpret_cast<int32_t*>(&rax22);
                    rcx15 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rcx15) + 4);
                    r10d23 = *reinterpret_cast<int32_t*>(&rax22);
                    rdx24 = rax22 >> 32;
                    *reinterpret_cast<uint32_t*>(&rdx16) = *reinterpret_cast<uint32_t*>(&rdx24) & 1;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
                } while (reinterpret_cast<unsigned char>(rdi19) > reinterpret_cast<unsigned char>(reinterpret_cast<uint64_t>(rcx15) + reinterpret_cast<unsigned char>(rbx6)));
                rcx25 = rbx6 + 25;
                rax26 = reinterpret_cast<unsigned char>(rdi19) - reinterpret_cast<unsigned char>(rbx6) - 25;
                rax27 = reinterpret_cast<void*>(rax26 & 0xfffffffffffffffc);
                if (reinterpret_cast<unsigned char>(rdi19) >= reinterpret_cast<unsigned char>(rcx25)) 
                    goto addr_14000aa7c_8;
            }
        } else {
            addr_14000ab13_9:
            rax28 = rsi5;
            edi7 = reinterpret_cast<void**>(1);
            rsi5 = rbx6;
            rbx6 = rax28;
            goto addr_14000a9ef_3;
        }
    } else {
        rdx29 = reinterpret_cast<void*>(rax4 * 4);
        rcx30 = rcx + 24;
        rax31 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rcx30) + reinterpret_cast<uint64_t>(rdx29));
        rdx32 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbx6) + reinterpret_cast<uint64_t>(rdx29) + 24);
        do {
            rax31 = rax31 - 4;
            rdx32 = rdx32 - 4;
            if (*reinterpret_cast<void***>(rax31) != *rdx32) 
                goto addr_14000a9e9_12;
        } while (reinterpret_cast<unsigned char>(rcx30) < reinterpret_cast<unsigned char>(rax31));
        goto addr_14000ab30_14;
    }
    rax27 = reinterpret_cast<void*>(0);
    addr_14000aa7c_8:
    rsi33 = reinterpret_cast<void*>((rax26 >> 2) * 4 + 4);
    rax34 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax27) + reinterpret_cast<unsigned char>(r12_14));
    if (reinterpret_cast<unsigned char>(rdi19) < reinterpret_cast<unsigned char>(rcx25)) {
        rsi33 = reinterpret_cast<void*>(4);
    }
    rbp35 = reinterpret_cast<void***>(reinterpret_cast<unsigned char>(rbp13) + reinterpret_cast<uint64_t>(rsi33));
    rsi36 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi33) + reinterpret_cast<unsigned char>(r12_14));
    if (reinterpret_cast<uint64_t>(r11_18) > reinterpret_cast<uint64_t>(rbp35)) {
        rbx37 = rsi36;
        rcx38 = rbp35;
        do {
            *reinterpret_cast<void***>(&rax39) = *rcx38;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax39) + 4) = 0;
            rcx38 = rcx38 + 4;
            rbx37 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx37) + 4);
            rax40 = reinterpret_cast<uint64_t>(rax39 - rdx16);
            *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rbx37) - 4) = *reinterpret_cast<int32_t*>(&rax40);
            r10d23 = *reinterpret_cast<int32_t*>(&rax40);
            rdx41 = rax40 >> 32;
            *reinterpret_cast<uint32_t*>(&rdx16) = *reinterpret_cast<uint32_t*>(&rdx41) & 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx16) + 4) = 0;
        } while (reinterpret_cast<uint64_t>(r11_18) > reinterpret_cast<uint64_t>(rcx38));
        rax34 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rsi36) + (reinterpret_cast<uint64_t>(r11_18 - 1) - reinterpret_cast<uint64_t>(rbp35) & 0xfffffffffffffffc));
    }
    if (!r10d23) {
        do {
            rax34 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax34) - 4);
            *reinterpret_cast<void***>(&r9_17) = *reinterpret_cast<void***>(&r9_17) - 1;
        } while (!*reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(rax34) - 4));
    }
    *reinterpret_cast<void***>(r8_11 + 20) = *reinterpret_cast<void***>(&r9_17);
    goto addr_14000aaf3_4;
    addr_14000a9e9_12:
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax31)) < reinterpret_cast<unsigned char>(*rdx32)) 
        goto addr_14000ab13_9; else 
        goto addr_14000a9ef_3;
    addr_14000ab30_14:
    rax42 = fun_14000a1e0(0);
    r8_11 = rax42;
    if (rax42) {
        *reinterpret_cast<void***>(r8_11 + 20) = reinterpret_cast<void**>(1);
        return r8_11;
    }
}

int64_t _lock = 0x1152e;

void fun_14000b4d8(int64_t rcx) {
    goto _lock;
}

int64_t g14000c210 = 0x14000af20;

int64_t fun_140005fb0(void** rcx, void** rdx, void** r8, void** r9);

int64_t fun_140001450(void** rcx, void* rdx, int64_t r8, void** r9) {
    void** rax5;
    int64_t rax6;

    rax5 = reinterpret_cast<void**>(g14000c210(1));
    rax6 = fun_140005fb0(rax5, rcx, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 56 + 88, r9);
    return rax6;
}

int64_t calloc = 0x11552;

void** fun_14000b4f8(int64_t rcx, int64_t rdx) {
    goto calloc;
}

int64_t fun_140005fb0(void** rcx, void** rdx, void** r8, void** r9) {
    uint32_t eax5;
    int64_t rax6;

    fun_14000ae30(rcx, rdx, r8, r9);
    eax5 = fun_140007aa0(0x6000, rcx, 0, rdx);
    fun_14000aea0(rcx, rcx, 0, rdx);
    *reinterpret_cast<uint32_t*>(&rax6) = eax5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    return rax6;
}

void fun_140001000() {
    return;
}

void fun_14000b607() {
    int32_t* rax1;
    int32_t* rax2;
    int32_t eax3;
    signed char* rax4;
    signed char* rax5;
    signed char al6;
    signed char* rax7;
    signed char* rax8;
    signed char al9;
    signed char* rax10;
    signed char* rax11;
    signed char al12;
    signed char* rax13;
    signed char* rax14;
    signed char al15;
    signed char* rax16;
    signed char* rax17;
    signed char al18;

    *rax1 = *rax2 + eax3;
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    *rax13 = reinterpret_cast<signed char>(*rax14 + al15);
    *rax16 = reinterpret_cast<signed char>(*rax17 + al18);
}

void fun_14000b61f() {
    int32_t* rax1;
    int32_t* rax2;
    signed char* rax3;
    signed char* rax4;
    signed char al5;
    signed char* rax6;
    signed char* rax7;
    signed char al8;
    signed char* rax9;
    signed char* rax10;
    signed char al11;
    signed char* rax12;
    signed char* rax13;
    signed char al14;
    signed char* rax15;
    signed char* rax16;
    signed char al17;
    signed char* rax18;
    signed char* rax19;
    signed char al20;
    signed char* rax21;
    signed char* rax22;
    signed char al23;
    signed char* rax24;
    signed char* rax25;
    signed char al26;
    signed char* rax27;
    signed char* rax28;
    signed char al29;
    signed char* rax30;
    signed char* rax31;
    signed char al32;
    signed char* rax33;
    signed char* rax34;
    signed char al35;
    signed char* rax36;
    signed char* rax37;
    signed char al38;
    signed char* rax39;
    signed char* rax40;
    signed char al41;
    signed char* rax42;
    signed char* rax43;
    signed char al44;
    signed char* rax45;
    signed char* rax46;
    signed char al47;
    signed char* rax48;
    signed char* rax49;
    signed char al50;
    signed char* rax51;
    signed char* rax52;
    signed char al53;
    signed char* rax54;
    signed char* rax55;
    signed char al56;
    signed char* rax57;
    signed char* rax58;
    signed char al59;
    signed char* rax60;
    signed char* rax61;
    signed char al62;
    signed char* rax63;
    signed char* rax64;
    signed char al65;
    signed char* rax66;
    signed char* rax67;
    signed char al68;
    signed char* rax69;
    signed char* rax70;
    signed char al71;
    signed char* rax72;
    signed char* rax73;
    signed char al74;
    signed char* rax75;
    signed char* rax76;
    signed char al77;
    signed char* rax78;
    signed char* rax79;
    signed char al80;
    signed char* rax81;
    signed char* rax82;
    signed char al83;
    signed char* rax84;
    signed char* rax85;
    signed char al86;
    signed char* rax87;
    signed char* rax88;
    signed char al89;
    signed char* rax90;
    signed char* rax91;
    signed char al92;
    signed char* rax93;
    signed char* rax94;
    signed char al95;
    signed char* rax96;
    signed char* rax97;
    signed char al98;
    signed char* rax99;
    signed char* rax100;
    signed char al101;
    signed char* rax102;
    signed char* rax103;
    signed char al104;
    signed char* rax105;
    signed char* rax106;
    signed char al107;
    signed char* rax108;
    signed char* rax109;
    signed char al110;
    signed char* rax111;
    signed char* rax112;
    signed char al113;
    signed char* rax114;
    signed char* rax115;
    signed char al116;
    signed char* rax117;
    signed char* rax118;
    signed char al119;
    signed char* rax120;
    signed char* rax121;
    signed char al122;
    signed char* rax123;
    signed char* rax124;
    signed char al125;
    signed char* rax126;
    signed char* rax127;
    signed char al128;
    signed char* rax129;
    signed char* rax130;
    signed char al131;
    signed char* rax132;
    signed char* rax133;
    signed char al134;
    signed char* rax135;
    signed char* rax136;
    signed char al137;
    signed char* rax138;
    signed char* rax139;
    signed char al140;
    signed char* rax141;
    signed char* rax142;
    signed char al143;
    signed char* rax144;
    signed char* rax145;
    signed char al146;
    signed char* rax147;
    signed char* rax148;
    signed char al149;
    signed char* rax150;
    signed char* rax151;
    signed char al152;
    signed char* rax153;
    signed char* rax154;
    signed char al155;
    signed char* rax156;
    signed char* rax157;
    signed char al158;
    signed char* rax159;
    signed char* rax160;
    signed char al161;
    signed char* rax162;
    signed char* rax163;
    signed char al164;
    signed char* rax165;
    signed char* rax166;
    signed char al167;
    signed char* rax168;
    signed char* rax169;
    signed char al170;
    signed char* rax171;
    signed char* rax172;
    signed char al173;
    signed char* rax174;
    signed char* rax175;
    signed char al176;
    signed char* rax177;
    signed char* rax178;
    signed char al179;
    signed char* rax180;
    signed char* rax181;
    signed char al182;
    signed char* rax183;
    signed char* rax184;
    signed char al185;
    signed char* rax186;
    signed char* rax187;
    signed char al188;
    signed char* rax189;
    signed char* rax190;
    signed char al191;
    signed char* rax192;
    signed char* rax193;
    signed char al194;
    signed char* rax195;
    signed char* rax196;
    signed char al197;
    signed char* rax198;
    signed char* rax199;
    signed char al200;
    signed char* rax201;
    signed char* rax202;
    signed char al203;
    signed char* rax204;
    signed char* rax205;
    signed char al206;
    signed char* rax207;
    signed char* rax208;
    signed char al209;
    signed char* rax210;
    signed char* rax211;
    signed char al212;
    signed char* rax213;
    signed char* rax214;
    signed char al215;
    signed char* rax216;
    signed char* rax217;
    signed char al218;
    signed char* rax219;
    signed char* rax220;
    signed char al221;
    signed char* rax222;
    signed char* rax223;
    signed char al224;
    signed char* rax225;
    signed char* rax226;
    signed char al227;
    signed char* rax228;
    signed char* rax229;
    signed char al230;
    signed char* rax231;
    signed char* rax232;
    signed char al233;
    signed char* rax234;
    signed char* rax235;
    signed char al236;
    signed char* rax237;
    signed char* rax238;
    signed char al239;
    signed char* rax240;
    signed char* rax241;
    signed char al242;
    signed char* rax243;
    signed char* rax244;
    signed char al245;
    signed char* rax246;
    signed char* rax247;
    signed char al248;
    signed char* rax249;
    signed char* rax250;
    signed char al251;
    signed char* rax252;
    signed char* rax253;
    signed char al254;
    signed char* rax255;
    signed char* rax256;
    signed char al257;
    signed char* rax258;
    signed char* rax259;
    signed char al260;
    signed char* rax261;
    signed char* rax262;
    signed char al263;
    signed char* rax264;
    signed char* rax265;
    signed char al266;
    signed char* rax267;
    signed char* rax268;
    signed char al269;
    signed char* rax270;
    signed char* rax271;
    signed char al272;
    signed char* rax273;
    signed char* rax274;
    signed char al275;
    signed char* rax276;
    signed char* rax277;
    signed char al278;
    signed char* rax279;
    signed char* rax280;
    signed char al281;
    signed char* rax282;
    signed char* rax283;
    signed char al284;
    signed char* rax285;
    signed char* rax286;
    signed char al287;
    signed char* rax288;
    signed char* rax289;
    signed char al290;
    signed char* rax291;
    signed char* rax292;
    signed char al293;
    signed char* rax294;
    signed char* rax295;
    signed char al296;
    signed char* rax297;
    signed char* rax298;
    signed char al299;
    signed char* rax300;
    signed char* rax301;
    signed char al302;
    signed char* rax303;
    signed char* rax304;
    signed char al305;
    signed char* rax306;
    signed char* rax307;
    signed char al308;
    signed char* rax309;
    signed char* rax310;
    signed char al311;
    signed char* rax312;
    signed char* rax313;
    signed char al314;
    signed char* rax315;
    signed char* rax316;
    signed char al317;
    signed char* rax318;
    signed char* rax319;
    signed char al320;
    signed char* rax321;
    signed char* rax322;
    signed char al323;
    signed char* rax324;
    signed char* rax325;
    signed char al326;
    signed char* rax327;
    signed char* rax328;
    signed char al329;
    signed char* rax330;
    signed char* rax331;
    signed char al332;
    signed char* rax333;
    signed char* rax334;
    signed char al335;
    signed char* rax336;
    signed char* rax337;
    signed char al338;
    signed char* rax339;
    signed char* rax340;
    signed char al341;
    signed char* rax342;
    signed char* rax343;
    signed char al344;
    signed char* rax345;
    signed char* rax346;
    signed char al347;
    signed char* rax348;
    signed char* rax349;
    signed char al350;
    signed char* rax351;
    signed char* rax352;
    signed char al353;
    signed char* rax354;
    signed char* rax355;
    signed char al356;
    signed char* rax357;
    signed char* rax358;
    signed char al359;
    signed char* rax360;
    signed char* rax361;
    signed char al362;
    signed char* rax363;
    signed char* rax364;
    signed char al365;
    signed char* rax366;
    signed char* rax367;
    signed char al368;
    signed char* rax369;
    signed char* rax370;
    signed char al371;
    signed char* rax372;
    signed char* rax373;
    signed char al374;
    signed char* rax375;
    signed char* rax376;
    signed char al377;
    signed char* rax378;
    signed char* rax379;
    signed char al380;
    signed char* rax381;
    signed char* rax382;
    signed char al383;
    signed char* rax384;
    signed char* rax385;
    signed char al386;
    signed char* rax387;
    signed char* rax388;
    signed char al389;
    signed char* rax390;
    signed char* rax391;
    signed char al392;
    signed char* rax393;
    signed char* rax394;
    signed char al395;
    signed char* rax396;
    signed char* rax397;
    signed char al398;
    signed char* rax399;
    signed char* rax400;
    signed char al401;
    signed char* rax402;
    signed char* rax403;
    signed char al404;
    signed char* rax405;
    signed char* rax406;
    signed char al407;
    signed char* rax408;
    signed char* rax409;
    signed char al410;
    signed char* rax411;
    signed char* rax412;
    signed char al413;
    signed char* rax414;
    signed char* rax415;
    signed char al416;
    signed char* rax417;
    signed char* rax418;
    signed char al419;
    signed char* rax420;
    signed char* rax421;
    signed char al422;
    signed char* rax423;
    signed char* rax424;
    signed char al425;
    signed char* rax426;
    signed char* rax427;
    signed char al428;
    signed char* rax429;
    signed char* rax430;
    signed char al431;
    signed char* rax432;
    signed char* rax433;
    signed char al434;
    signed char* rax435;
    signed char* rax436;
    signed char al437;
    signed char* rax438;
    signed char* rax439;
    signed char al440;
    signed char* rax441;
    signed char* rax442;
    signed char al443;
    signed char* rax444;
    signed char* rax445;
    signed char al446;
    signed char* rax447;
    signed char* rax448;
    signed char al449;
    signed char* rax450;
    signed char* rax451;
    signed char al452;
    signed char* rax453;
    signed char* rax454;
    signed char al455;
    signed char* rax456;
    signed char* rax457;
    signed char al458;
    signed char* rax459;
    signed char* rax460;
    signed char al461;
    signed char* rax462;
    signed char* rax463;
    signed char al464;
    signed char* rax465;
    signed char* rax466;
    signed char al467;
    signed char* rax468;
    signed char* rax469;
    signed char al470;
    signed char* rax471;
    signed char* rax472;
    signed char al473;
    signed char* rax474;
    signed char* rax475;
    signed char al476;
    signed char* rax477;
    signed char* rax478;
    signed char al479;
    signed char* rax480;
    signed char* rax481;
    signed char al482;
    signed char* rax483;
    signed char* rax484;
    signed char al485;
    signed char* rax486;
    signed char* rax487;
    signed char al488;
    signed char* rax489;
    signed char* rax490;
    signed char al491;
    signed char* rax492;
    signed char* rax493;
    signed char al494;
    signed char* rax495;
    signed char* rax496;
    signed char al497;
    signed char* rax498;
    signed char* rax499;
    signed char al500;
    signed char* rax501;
    signed char* rax502;
    signed char al503;
    signed char* rax504;
    signed char* rax505;
    signed char al506;
    signed char* rax507;
    signed char* rax508;
    signed char al509;
    signed char* rax510;
    signed char* rax511;
    signed char al512;
    signed char* rax513;
    signed char* rax514;
    signed char al515;
    signed char* rax516;
    signed char* rax517;
    signed char al518;
    signed char* rax519;
    signed char* rax520;
    signed char al521;
    signed char* rax522;
    signed char* rax523;
    signed char al524;
    signed char* rax525;
    signed char* rax526;
    signed char al527;
    signed char* rax528;
    signed char* rax529;
    signed char al530;
    signed char* rax531;
    signed char* rax532;
    signed char al533;
    signed char* rax534;
    signed char* rax535;
    signed char al536;
    signed char* rax537;
    signed char* rax538;
    signed char al539;
    signed char* rax540;
    signed char* rax541;
    signed char al542;
    signed char* rax543;
    signed char* rax544;
    signed char al545;
    signed char* rax546;
    signed char* rax547;
    signed char al548;
    signed char* rax549;
    signed char* rax550;
    signed char al551;
    signed char* rax552;
    signed char* rax553;
    signed char al554;
    signed char* rax555;
    signed char* rax556;
    signed char al557;
    signed char* rax558;
    signed char* rax559;
    signed char al560;
    signed char* rax561;
    signed char* rax562;
    signed char al563;
    signed char* rax564;
    signed char* rax565;
    signed char al566;
    signed char* rax567;
    signed char* rax568;
    signed char al569;
    signed char* rax570;
    signed char* rax571;
    signed char al572;
    signed char* rax573;
    signed char* rax574;
    signed char al575;
    signed char* rax576;
    signed char* rax577;
    signed char al578;
    signed char* rax579;
    signed char* rax580;
    signed char al581;
    signed char* rax582;
    signed char* rax583;
    signed char al584;
    signed char* rax585;
    signed char* rax586;
    signed char al587;
    signed char* rax588;
    signed char* rax589;
    signed char al590;
    signed char* rax591;
    signed char* rax592;
    signed char al593;
    signed char* rax594;
    signed char* rax595;
    signed char al596;
    signed char* rax597;
    signed char* rax598;
    signed char al599;
    signed char* rax600;
    signed char* rax601;
    signed char al602;
    signed char* rax603;
    signed char* rax604;
    signed char al605;
    signed char* rax606;
    signed char* rax607;
    signed char al608;
    signed char* rax609;
    signed char* rax610;
    signed char al611;
    signed char* rax612;
    signed char* rax613;
    signed char al614;
    signed char* rax615;
    signed char* rax616;
    signed char al617;
    signed char* rax618;
    signed char* rax619;
    signed char al620;
    signed char* rax621;
    signed char* rax622;
    signed char al623;
    signed char* rax624;
    signed char* rax625;
    signed char al626;
    signed char* rax627;
    signed char* rax628;
    signed char al629;
    signed char* rax630;
    signed char* rax631;
    signed char al632;
    signed char* rax633;
    signed char* rax634;
    signed char al635;
    signed char* rax636;
    signed char* rax637;
    signed char al638;
    signed char* rax639;
    signed char* rax640;
    signed char al641;
    signed char* rax642;
    signed char* rax643;
    signed char al644;
    signed char* rax645;
    signed char* rax646;
    signed char al647;
    signed char* rax648;
    signed char* rax649;
    signed char al650;
    signed char* rax651;
    signed char* rax652;
    signed char al653;
    signed char* rax654;
    signed char* rax655;
    signed char al656;
    signed char* rax657;
    signed char* rax658;
    signed char al659;
    signed char* rax660;
    signed char* rax661;
    signed char al662;
    signed char* rax663;
    signed char* rax664;
    signed char al665;
    signed char* rax666;
    signed char* rax667;
    signed char al668;
    signed char* rax669;
    signed char* rax670;
    signed char al671;
    signed char* rax672;
    signed char* rax673;
    signed char al674;
    signed char* rax675;
    signed char* rax676;
    signed char al677;
    signed char* rax678;
    signed char* rax679;
    signed char al680;
    signed char* rax681;
    signed char* rax682;
    signed char al683;
    signed char* rax684;
    signed char* rax685;
    signed char al686;
    signed char* rax687;
    signed char* rax688;
    signed char al689;
    signed char* rax690;
    signed char* rax691;
    signed char al692;
    signed char* rax693;
    signed char* rax694;
    signed char al695;
    signed char* rax696;
    signed char* rax697;
    signed char al698;
    signed char* rax699;
    signed char* rax700;
    signed char al701;
    signed char* rax702;
    signed char* rax703;
    signed char al704;
    signed char* rax705;
    signed char* rax706;
    signed char al707;
    signed char* rax708;
    signed char* rax709;
    signed char al710;
    signed char* rax711;
    signed char* rax712;
    signed char al713;
    signed char* rax714;
    signed char* rax715;
    signed char al716;
    signed char* rax717;
    signed char* rax718;
    signed char al719;

    *rax1 = *rax2 + 1;
    *rax3 = reinterpret_cast<signed char>(*rax4 + al5);
    *rax6 = reinterpret_cast<signed char>(*rax7 + al8);
    *rax9 = reinterpret_cast<signed char>(*rax10 + al11);
    *rax12 = reinterpret_cast<signed char>(*rax13 + al14);
    *rax15 = reinterpret_cast<signed char>(*rax16 + al17);
    *rax18 = reinterpret_cast<signed char>(*rax19 + al20);
    *rax21 = reinterpret_cast<signed char>(*rax22 + al23);
    *rax24 = reinterpret_cast<signed char>(*rax25 + al26);
    *rax27 = reinterpret_cast<signed char>(*rax28 + al29);
    *rax30 = reinterpret_cast<signed char>(*rax31 + al32);
    *rax33 = reinterpret_cast<signed char>(*rax34 + al35);
    *rax36 = reinterpret_cast<signed char>(*rax37 + al38);
    *rax39 = reinterpret_cast<signed char>(*rax40 + al41);
    *rax42 = reinterpret_cast<signed char>(*rax43 + al44);
    *rax45 = reinterpret_cast<signed char>(*rax46 + al47);
    *rax48 = reinterpret_cast<signed char>(*rax49 + al50);
    *rax51 = reinterpret_cast<signed char>(*rax52 + al53);
    *rax54 = reinterpret_cast<signed char>(*rax55 + al56);
    *rax57 = reinterpret_cast<signed char>(*rax58 + al59);
    *rax60 = reinterpret_cast<signed char>(*rax61 + al62);
    *rax63 = reinterpret_cast<signed char>(*rax64 + al65);
    *rax66 = reinterpret_cast<signed char>(*rax67 + al68);
    *rax69 = reinterpret_cast<signed char>(*rax70 + al71);
    *rax72 = reinterpret_cast<signed char>(*rax73 + al74);
    *rax75 = reinterpret_cast<signed char>(*rax76 + al77);
    *rax78 = reinterpret_cast<signed char>(*rax79 + al80);
    *rax81 = reinterpret_cast<signed char>(*rax82 + al83);
    *rax84 = reinterpret_cast<signed char>(*rax85 + al86);
    *rax87 = reinterpret_cast<signed char>(*rax88 + al89);
    *rax90 = reinterpret_cast<signed char>(*rax91 + al92);
    *rax93 = reinterpret_cast<signed char>(*rax94 + al95);
    *rax96 = reinterpret_cast<signed char>(*rax97 + al98);
    *rax99 = reinterpret_cast<signed char>(*rax100 + al101);
    *rax102 = reinterpret_cast<signed char>(*rax103 + al104);
    *rax105 = reinterpret_cast<signed char>(*rax106 + al107);
    *rax108 = reinterpret_cast<signed char>(*rax109 + al110);
    *rax111 = reinterpret_cast<signed char>(*rax112 + al113);
    *rax114 = reinterpret_cast<signed char>(*rax115 + al116);
    *rax117 = reinterpret_cast<signed char>(*rax118 + al119);
    *rax120 = reinterpret_cast<signed char>(*rax121 + al122);
    *rax123 = reinterpret_cast<signed char>(*rax124 + al125);
    *rax126 = reinterpret_cast<signed char>(*rax127 + al128);
    *rax129 = reinterpret_cast<signed char>(*rax130 + al131);
    *rax132 = reinterpret_cast<signed char>(*rax133 + al134);
    *rax135 = reinterpret_cast<signed char>(*rax136 + al137);
    *rax138 = reinterpret_cast<signed char>(*rax139 + al140);
    *rax141 = reinterpret_cast<signed char>(*rax142 + al143);
    *rax144 = reinterpret_cast<signed char>(*rax145 + al146);
    *rax147 = reinterpret_cast<signed char>(*rax148 + al149);
    *rax150 = reinterpret_cast<signed char>(*rax151 + al152);
    *rax153 = reinterpret_cast<signed char>(*rax154 + al155);
    *rax156 = reinterpret_cast<signed char>(*rax157 + al158);
    *rax159 = reinterpret_cast<signed char>(*rax160 + al161);
    *rax162 = reinterpret_cast<signed char>(*rax163 + al164);
    *rax165 = reinterpret_cast<signed char>(*rax166 + al167);
    *rax168 = reinterpret_cast<signed char>(*rax169 + al170);
    *rax171 = reinterpret_cast<signed char>(*rax172 + al173);
    *rax174 = reinterpret_cast<signed char>(*rax175 + al176);
    *rax177 = reinterpret_cast<signed char>(*rax178 + al179);
    *rax180 = reinterpret_cast<signed char>(*rax181 + al182);
    *rax183 = reinterpret_cast<signed char>(*rax184 + al185);
    *rax186 = reinterpret_cast<signed char>(*rax187 + al188);
    *rax189 = reinterpret_cast<signed char>(*rax190 + al191);
    *rax192 = reinterpret_cast<signed char>(*rax193 + al194);
    *rax195 = reinterpret_cast<signed char>(*rax196 + al197);
    *rax198 = reinterpret_cast<signed char>(*rax199 + al200);
    *rax201 = reinterpret_cast<signed char>(*rax202 + al203);
    *rax204 = reinterpret_cast<signed char>(*rax205 + al206);
    *rax207 = reinterpret_cast<signed char>(*rax208 + al209);
    *rax210 = reinterpret_cast<signed char>(*rax211 + al212);
    *rax213 = reinterpret_cast<signed char>(*rax214 + al215);
    *rax216 = reinterpret_cast<signed char>(*rax217 + al218);
    *rax219 = reinterpret_cast<signed char>(*rax220 + al221);
    *rax222 = reinterpret_cast<signed char>(*rax223 + al224);
    *rax225 = reinterpret_cast<signed char>(*rax226 + al227);
    *rax228 = reinterpret_cast<signed char>(*rax229 + al230);
    *rax231 = reinterpret_cast<signed char>(*rax232 + al233);
    *rax234 = reinterpret_cast<signed char>(*rax235 + al236);
    *rax237 = reinterpret_cast<signed char>(*rax238 + al239);
    *rax240 = reinterpret_cast<signed char>(*rax241 + al242);
    *rax243 = reinterpret_cast<signed char>(*rax244 + al245);
    *rax246 = reinterpret_cast<signed char>(*rax247 + al248);
    *rax249 = reinterpret_cast<signed char>(*rax250 + al251);
    *rax252 = reinterpret_cast<signed char>(*rax253 + al254);
    *rax255 = reinterpret_cast<signed char>(*rax256 + al257);
    *rax258 = reinterpret_cast<signed char>(*rax259 + al260);
    *rax261 = reinterpret_cast<signed char>(*rax262 + al263);
    *rax264 = reinterpret_cast<signed char>(*rax265 + al266);
    *rax267 = reinterpret_cast<signed char>(*rax268 + al269);
    *rax270 = reinterpret_cast<signed char>(*rax271 + al272);
    *rax273 = reinterpret_cast<signed char>(*rax274 + al275);
    *rax276 = reinterpret_cast<signed char>(*rax277 + al278);
    *rax279 = reinterpret_cast<signed char>(*rax280 + al281);
    *rax282 = reinterpret_cast<signed char>(*rax283 + al284);
    *rax285 = reinterpret_cast<signed char>(*rax286 + al287);
    *rax288 = reinterpret_cast<signed char>(*rax289 + al290);
    *rax291 = reinterpret_cast<signed char>(*rax292 + al293);
    *rax294 = reinterpret_cast<signed char>(*rax295 + al296);
    *rax297 = reinterpret_cast<signed char>(*rax298 + al299);
    *rax300 = reinterpret_cast<signed char>(*rax301 + al302);
    *rax303 = reinterpret_cast<signed char>(*rax304 + al305);
    *rax306 = reinterpret_cast<signed char>(*rax307 + al308);
    *rax309 = reinterpret_cast<signed char>(*rax310 + al311);
    *rax312 = reinterpret_cast<signed char>(*rax313 + al314);
    *rax315 = reinterpret_cast<signed char>(*rax316 + al317);
    *rax318 = reinterpret_cast<signed char>(*rax319 + al320);
    *rax321 = reinterpret_cast<signed char>(*rax322 + al323);
    *rax324 = reinterpret_cast<signed char>(*rax325 + al326);
    *rax327 = reinterpret_cast<signed char>(*rax328 + al329);
    *rax330 = reinterpret_cast<signed char>(*rax331 + al332);
    *rax333 = reinterpret_cast<signed char>(*rax334 + al335);
    *rax336 = reinterpret_cast<signed char>(*rax337 + al338);
    *rax339 = reinterpret_cast<signed char>(*rax340 + al341);
    *rax342 = reinterpret_cast<signed char>(*rax343 + al344);
    *rax345 = reinterpret_cast<signed char>(*rax346 + al347);
    *rax348 = reinterpret_cast<signed char>(*rax349 + al350);
    *rax351 = reinterpret_cast<signed char>(*rax352 + al353);
    *rax354 = reinterpret_cast<signed char>(*rax355 + al356);
    *rax357 = reinterpret_cast<signed char>(*rax358 + al359);
    *rax360 = reinterpret_cast<signed char>(*rax361 + al362);
    *rax363 = reinterpret_cast<signed char>(*rax364 + al365);
    *rax366 = reinterpret_cast<signed char>(*rax367 + al368);
    *rax369 = reinterpret_cast<signed char>(*rax370 + al371);
    *rax372 = reinterpret_cast<signed char>(*rax373 + al374);
    *rax375 = reinterpret_cast<signed char>(*rax376 + al377);
    *rax378 = reinterpret_cast<signed char>(*rax379 + al380);
    *rax381 = reinterpret_cast<signed char>(*rax382 + al383);
    *rax384 = reinterpret_cast<signed char>(*rax385 + al386);
    *rax387 = reinterpret_cast<signed char>(*rax388 + al389);
    *rax390 = reinterpret_cast<signed char>(*rax391 + al392);
    *rax393 = reinterpret_cast<signed char>(*rax394 + al395);
    *rax396 = reinterpret_cast<signed char>(*rax397 + al398);
    *rax399 = reinterpret_cast<signed char>(*rax400 + al401);
    *rax402 = reinterpret_cast<signed char>(*rax403 + al404);
    *rax405 = reinterpret_cast<signed char>(*rax406 + al407);
    *rax408 = reinterpret_cast<signed char>(*rax409 + al410);
    *rax411 = reinterpret_cast<signed char>(*rax412 + al413);
    *rax414 = reinterpret_cast<signed char>(*rax415 + al416);
    *rax417 = reinterpret_cast<signed char>(*rax418 + al419);
    *rax420 = reinterpret_cast<signed char>(*rax421 + al422);
    *rax423 = reinterpret_cast<signed char>(*rax424 + al425);
    *rax426 = reinterpret_cast<signed char>(*rax427 + al428);
    *rax429 = reinterpret_cast<signed char>(*rax430 + al431);
    *rax432 = reinterpret_cast<signed char>(*rax433 + al434);
    *rax435 = reinterpret_cast<signed char>(*rax436 + al437);
    *rax438 = reinterpret_cast<signed char>(*rax439 + al440);
    *rax441 = reinterpret_cast<signed char>(*rax442 + al443);
    *rax444 = reinterpret_cast<signed char>(*rax445 + al446);
    *rax447 = reinterpret_cast<signed char>(*rax448 + al449);
    *rax450 = reinterpret_cast<signed char>(*rax451 + al452);
    *rax453 = reinterpret_cast<signed char>(*rax454 + al455);
    *rax456 = reinterpret_cast<signed char>(*rax457 + al458);
    *rax459 = reinterpret_cast<signed char>(*rax460 + al461);
    *rax462 = reinterpret_cast<signed char>(*rax463 + al464);
    *rax465 = reinterpret_cast<signed char>(*rax466 + al467);
    *rax468 = reinterpret_cast<signed char>(*rax469 + al470);
    *rax471 = reinterpret_cast<signed char>(*rax472 + al473);
    *rax474 = reinterpret_cast<signed char>(*rax475 + al476);
    *rax477 = reinterpret_cast<signed char>(*rax478 + al479);
    *rax480 = reinterpret_cast<signed char>(*rax481 + al482);
    *rax483 = reinterpret_cast<signed char>(*rax484 + al485);
    *rax486 = reinterpret_cast<signed char>(*rax487 + al488);
    *rax489 = reinterpret_cast<signed char>(*rax490 + al491);
    *rax492 = reinterpret_cast<signed char>(*rax493 + al494);
    *rax495 = reinterpret_cast<signed char>(*rax496 + al497);
    *rax498 = reinterpret_cast<signed char>(*rax499 + al500);
    *rax501 = reinterpret_cast<signed char>(*rax502 + al503);
    *rax504 = reinterpret_cast<signed char>(*rax505 + al506);
    *rax507 = reinterpret_cast<signed char>(*rax508 + al509);
    *rax510 = reinterpret_cast<signed char>(*rax511 + al512);
    *rax513 = reinterpret_cast<signed char>(*rax514 + al515);
    *rax516 = reinterpret_cast<signed char>(*rax517 + al518);
    *rax519 = reinterpret_cast<signed char>(*rax520 + al521);
    *rax522 = reinterpret_cast<signed char>(*rax523 + al524);
    *rax525 = reinterpret_cast<signed char>(*rax526 + al527);
    *rax528 = reinterpret_cast<signed char>(*rax529 + al530);
    *rax531 = reinterpret_cast<signed char>(*rax532 + al533);
    *rax534 = reinterpret_cast<signed char>(*rax535 + al536);
    *rax537 = reinterpret_cast<signed char>(*rax538 + al539);
    *rax540 = reinterpret_cast<signed char>(*rax541 + al542);
    *rax543 = reinterpret_cast<signed char>(*rax544 + al545);
    *rax546 = reinterpret_cast<signed char>(*rax547 + al548);
    *rax549 = reinterpret_cast<signed char>(*rax550 + al551);
    *rax552 = reinterpret_cast<signed char>(*rax553 + al554);
    *rax555 = reinterpret_cast<signed char>(*rax556 + al557);
    *rax558 = reinterpret_cast<signed char>(*rax559 + al560);
    *rax561 = reinterpret_cast<signed char>(*rax562 + al563);
    *rax564 = reinterpret_cast<signed char>(*rax565 + al566);
    *rax567 = reinterpret_cast<signed char>(*rax568 + al569);
    *rax570 = reinterpret_cast<signed char>(*rax571 + al572);
    *rax573 = reinterpret_cast<signed char>(*rax574 + al575);
    *rax576 = reinterpret_cast<signed char>(*rax577 + al578);
    *rax579 = reinterpret_cast<signed char>(*rax580 + al581);
    *rax582 = reinterpret_cast<signed char>(*rax583 + al584);
    *rax585 = reinterpret_cast<signed char>(*rax586 + al587);
    *rax588 = reinterpret_cast<signed char>(*rax589 + al590);
    *rax591 = reinterpret_cast<signed char>(*rax592 + al593);
    *rax594 = reinterpret_cast<signed char>(*rax595 + al596);
    *rax597 = reinterpret_cast<signed char>(*rax598 + al599);
    *rax600 = reinterpret_cast<signed char>(*rax601 + al602);
    *rax603 = reinterpret_cast<signed char>(*rax604 + al605);
    *rax606 = reinterpret_cast<signed char>(*rax607 + al608);
    *rax609 = reinterpret_cast<signed char>(*rax610 + al611);
    *rax612 = reinterpret_cast<signed char>(*rax613 + al614);
    *rax615 = reinterpret_cast<signed char>(*rax616 + al617);
    *rax618 = reinterpret_cast<signed char>(*rax619 + al620);
    *rax621 = reinterpret_cast<signed char>(*rax622 + al623);
    *rax624 = reinterpret_cast<signed char>(*rax625 + al626);
    *rax627 = reinterpret_cast<signed char>(*rax628 + al629);
    *rax630 = reinterpret_cast<signed char>(*rax631 + al632);
    *rax633 = reinterpret_cast<signed char>(*rax634 + al635);
    *rax636 = reinterpret_cast<signed char>(*rax637 + al638);
    *rax639 = reinterpret_cast<signed char>(*rax640 + al641);
    *rax642 = reinterpret_cast<signed char>(*rax643 + al644);
    *rax645 = reinterpret_cast<signed char>(*rax646 + al647);
    *rax648 = reinterpret_cast<signed char>(*rax649 + al650);
    *rax651 = reinterpret_cast<signed char>(*rax652 + al653);
    *rax654 = reinterpret_cast<signed char>(*rax655 + al656);
    *rax657 = reinterpret_cast<signed char>(*rax658 + al659);
    *rax660 = reinterpret_cast<signed char>(*rax661 + al662);
    *rax663 = reinterpret_cast<signed char>(*rax664 + al665);
    *rax666 = reinterpret_cast<signed char>(*rax667 + al668);
    *rax669 = reinterpret_cast<signed char>(*rax670 + al671);
    *rax672 = reinterpret_cast<signed char>(*rax673 + al674);
    *rax675 = reinterpret_cast<signed char>(*rax676 + al677);
    *rax678 = reinterpret_cast<signed char>(*rax679 + al680);
    *rax681 = reinterpret_cast<signed char>(*rax682 + al683);
    *rax684 = reinterpret_cast<signed char>(*rax685 + al686);
    *rax687 = reinterpret_cast<signed char>(*rax688 + al689);
    *rax690 = reinterpret_cast<signed char>(*rax691 + al692);
    *rax693 = reinterpret_cast<signed char>(*rax694 + al695);
    *rax696 = reinterpret_cast<signed char>(*rax697 + al698);
    *rax699 = reinterpret_cast<signed char>(*rax700 + al701);
    *rax702 = reinterpret_cast<signed char>(*rax703 + al704);
    *rax705 = reinterpret_cast<signed char>(*rax706 + al707);
    *rax708 = reinterpret_cast<signed char>(*rax709 + al710);
    *rax711 = reinterpret_cast<signed char>(*rax712 + al713);
    *rax714 = reinterpret_cast<signed char>(*rax715 + al716);
    *rax717 = reinterpret_cast<signed char>(*rax718 + al719);
}

int32_t* g14000d7b0 = reinterpret_cast<int32_t*>(0x140010078);

int32_t* g14000d7c0 = reinterpret_cast<int32_t*>(0x140010074);

int32_t* g14000d7d0 = reinterpret_cast<int32_t*>(0x140010070);

struct s53 {
    int32_t f0;
    signed char[20] pad24;
    uint16_t f18;
    signed char[90] pad116;
    uint32_t f74;
    signed char[12] pad132;
    uint32_t f84;
    signed char[96] pad232;
    int32_t fe8;
    signed char[12] pad248;
    int32_t ff8;
};

int32_t* g14000d880 = reinterpret_cast<int32_t*>(0x1400100c0);

int32_t* g14000d860 = reinterpret_cast<int32_t*>(0x140010080);

int32_t* g14000d710 = reinterpret_cast<int32_t*>(0x14000c190);

int64_t g14000d8a0 = 0x1400050b0;

int64_t fun_140001010() {
    int32_t* rax1;
    int32_t ecx2;
    int32_t* rax3;
    int32_t* rax4;
    struct s2* rax5;
    struct s53* rax6;
    uint32_t edx7;
    int32_t* rax8;
    int64_t rcx9;
    int32_t* rax10;
    int32_t* rdx11;
    int32_t* rax12;
    int32_t* rdx13;
    int32_t* rax14;
    int64_t rcx15;

    rax1 = g14000d7b0;
    ecx2 = 0;
    *rax1 = 1;
    rax3 = g14000d7c0;
    *rax3 = 1;
    rax4 = g14000d7d0;
    *rax4 = 1;
    rax5 = g14000d730;
    if (rax5->f0 == 0x5a4d && (rax6 = reinterpret_cast<struct s53*>(reinterpret_cast<uint64_t>(rax5) + static_cast<int64_t>(rax5->f3c)), rax6->f0 == 0x4550)) {
        edx7 = rax6->f18;
        if (*reinterpret_cast<int16_t*>(&edx7) == 0x10b) {
            if (rax6->f74 > 14) {
                ecx2 = 0;
                *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<uint1_t>(!!rax6->fe8);
            }
        } else {
            if (*reinterpret_cast<int16_t*>(&edx7) == 0x20b && rax6->f84 > 14) {
                ecx2 = 0;
                *reinterpret_cast<unsigned char*>(&ecx2) = reinterpret_cast<uint1_t>(!!rax6->ff8);
            }
        }
    }
    rax8 = g14000d7a0;
    g14001000c = ecx2;
    if (!*rax8) {
        *reinterpret_cast<int32_t*>(&rcx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        fun_14000b4a8(1);
    } else {
        *reinterpret_cast<int32_t*>(&rcx9) = 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        fun_14000b4a8(2);
    }
    rax10 = fun_14000ae10(rcx9);
    rdx11 = g14000d880;
    *rax10 = *rdx11;
    rax12 = fun_14000ae20(rcx9);
    rdx13 = g14000d860;
    *rax12 = *rdx13;
    fun_140004fd0(rcx9);
    rax14 = g14000d710;
    if (*rax14 == 1) {
        rcx15 = g14000d8a0;
        fun_140005730(rcx15);
        return 0;
    } else {
        return 0;
    }
}

int32_t* g14000d8b0 = reinterpret_cast<int32_t*>(0x140010060);

int32_t g140010004;

int32_t* g14000d870 = reinterpret_cast<int32_t*>(0x140010050);

void fun_140001130() {
    int32_t* rax1;
    int32_t* rax2;
    int64_t r9_3;

    rax1 = g14000d8b0;
    g140010004 = *rax1;
    rax2 = g14000d870;
    *reinterpret_cast<int32_t*>(&r9_3) = *rax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_3) + 4) = 0;
    fun_14000b498(0x140010028, 0x140010020, 0x140010018, r9_3);
    return;
}

void fun_140004ff7(int64_t rcx, void** rdx) {
    int64_t v3;

    fun_140005aa0(rcx, rdx);
    goto v3;
}

void fun_14000503e() {
    int64_t* rbx1;
    int64_t v2;
    int64_t rax3;
    int64_t v4;

    rbx1 = reinterpret_cast<int64_t*>(0x140012058);
    if (1) {
        goto v2;
    } else {
        do {
            rax3 = *rbx1;
            if (rax3) {
                rax3();
            }
            ++rbx1;
        } while (!reinterpret_cast<int1_t>(0x140012058 == rbx1));
        goto v4;
    }
}

void fun_140005077(int64_t rcx, void** rdx) {
    int64_t v3;

    fun_140005aa0(rcx, rdx);
    goto v3;
}

struct s55 {
    int32_t f0;
    int32_t f4;
};

struct s54 {
    signed char[8] pad8;
    struct s55* f8;
};

struct s56 {
    int32_t f0;
    int32_t f4;
};

struct s57 {
    signed char[4] pad4;
    int32_t f4;
};

struct s58 {
    int32_t f0;
    int32_t f4;
};

struct s59 {
    signed char[4] pad4;
    int32_t f4;
};

struct s60 {
    int32_t f0;
    int32_t f4;
};

struct s61 {
    int32_t f0;
    int32_t f4;
};

struct s62 {
    int32_t f0;
    int32_t f4;
};

struct s63 {
    int32_t f0;
    int32_t f4;
};

void fun_1400050e8(struct s54* rcx, void** rdx, void** r8, void** r9) {
    int32_t* rdi5;
    int32_t* rsi6;
    struct s56* rdi7;
    struct s57* rdi8;
    struct s58* rsi9;
    struct s59* rsi10;
    struct s60* rdi11;
    struct s61* rdi12;
    struct s55* rsi13;
    void** rax14;
    struct s62* rdi15;
    struct s63* rsi16;
    int32_t* rsi17;
    int64_t v18;

    *rdi5 = *rsi6;
    rdi7 = reinterpret_cast<struct s56*>(&rdi8->f4);
    rsi9 = reinterpret_cast<struct s58*>(&rsi10->f4);
    rdi7->f0 = rsi9->f0;
    rdi11 = reinterpret_cast<struct s60*>(&rdi7->f4);
    rdi11->f0 = rsi9->f4;
    rdi12 = reinterpret_cast<struct s61*>(&rdi11->f4);
    rsi13 = rcx->f8;
    rax14 = fun_14000af20(2, rdx, r8, r9, __return_address());
    rdi12->f0 = rsi13->f0;
    rdi15 = reinterpret_cast<struct s62*>(&rdi12->f4);
    rsi16 = reinterpret_cast<struct s63*>(&rsi13->f4);
    rdi15->f0 = rsi16->f0;
    rsi17 = &rsi16->f4;
    rdi15->f4 = *rsi17;
    fun_14000b508(rax14, "_matherr(): %s in %s(%g, %g)  (retval=%g)\n", "Argument singularity (SIGN)", rsi17, __return_address());
    __asm__("movaps xmm6, [rsp+0x40]");
    __asm__("movaps xmm7, [rsp+0x50]");
    __asm__("movaps xmm8, [rsp+0x60]");
    goto v18;
}

void fun_140005150() {
    goto 0x1400050ef;
}

void fun_14000578e() {
    int64_t v1;

    fun_14000b548(8, 8);
    fun_1400051b0(8, 1);
    goto v1;
}

int64_t g1400100d0;

void fun_1400057fc() {
    int32_t eax1;
    int64_t rax2;
    int64_t v3;

    if (eax1 == 0x80000002) 
        goto 0x1400057a8;
    rax2 = g1400100d0;
    if (!rax2) {
        goto v3;
    } else {
        goto rax2;
    }
}

struct s64 {
    signed char[4] pad4;
    unsigned char f4;
};

void fun_14000581f() {
    struct s64* rdx1;
    uint32_t eax2;
    uint32_t eax3;
    int32_t eax4;
    int64_t rax5;
    uint32_t eax6;
    int32_t eax7;
    int32_t eax8;
    int64_t rax9;
    int64_t rax10;
    int32_t eax11;

    if (!(rdx1->f4 & 1)) {
        goto 0x1400057a8;
    }
    if (eax2 > 0xc0000096) 
        goto 0x140005807;
    if (eax3 > 0xc000008b) 
        goto addr_140005774_6;
    if (eax4 == 0xc0000005) {
        rax5 = fun_14000b548(11);
        if (rax5 == 1) {
            fun_14000b548(11, 11);
            goto 0x1400057ad;
        } else {
            if (!rax5) 
                goto 0x140005807;
            rax5(11);
            goto 0x1400057ad;
        }
    }
    if (eax6 <= 0xc0000005) 
        goto 0x140005800;
    if (eax7 == 0xc0000008) 
        goto 0x1400057a8;
    if (eax8 != 0xc000001d) 
        goto 0x140005807;
    rax9 = fun_14000b548(4);
    if (rax9 != 1) 
        goto addr_1400057e9_16;
    fun_14000b548(4, 4);
    goto 0x1400057ad;
    addr_1400057e9_16:
    if (!rax9) 
        goto 0x140005807;
    rax9(4);
    goto 0x1400057ad;
    addr_140005774_6:
    *reinterpret_cast<uint32_t*>(&rax10) = reinterpret_cast<uint32_t>(eax11 + 0x3fffff73);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax10) > 9) 
        goto 0x1400057a8;
    goto *reinterpret_cast<int32_t*>(0x14000d340 + rax10 * 4) + 0x14000d340;
}

void fun_140005870() {
    int64_t rax1;

    rax1 = fun_14000b548(8);
    if (rax1 != 1) {
        if (!rax1) 
            goto 0x140005807;
        rax1(8);
        goto 0x1400057ad;
    } else {
        fun_14000b548(8, 8);
        goto 0x1400057ad;
    }
}

int64_t fun_140005980(void** ecx, void** rdx) {
    int64_t rax3;
    void** rax4;
    void** rax5;

    *reinterpret_cast<uint32_t*>(&rax3) = g1400100e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax3)) {
        rax4 = fun_14000b4f8(1, 24);
        if (!rax4) {
            *reinterpret_cast<uint32_t*>(&rax3) = 0xffffffff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        } else {
            *reinterpret_cast<void***>(rax4) = ecx;
            *reinterpret_cast<void***>(rax4 + 8) = rdx;
            EnterCriticalSection(0x140010100, 24);
            rax5 = g1400100e0;
            g1400100e0 = rax4;
            *reinterpret_cast<void***>(rax4 + 16) = rax5;
            LeaveCriticalSection(0x140010100, 24);
            return 0;
        }
    }
    return rax3;
}

void fun_140005a2d() {
    void** rcx1;
    int64_t v2;
    void** rdx3;
    void** ebx4;

    EnterCriticalSection(0x140010100);
    rcx1 = g1400100e0;
    if (!rcx1) {
        addr_140005a73_3:
        LeaveCriticalSection(0x140010100);
        goto v2;
    } else {
        *reinterpret_cast<int32_t*>(&rdx3) = 0;
        *reinterpret_cast<int32_t*>(&rdx3 + 4) = 0;
        while (*reinterpret_cast<void***>(rcx1) != ebx4) {
            rdx3 = rcx1;
            if (!*reinterpret_cast<void***>(rcx1 + 16)) 
                goto addr_140005a73_3;
            rcx1 = *reinterpret_cast<void***>(rcx1 + 16);
        }
    }
    if (!rdx3) {
        g1400100e0 = *reinterpret_cast<void***>(rcx1 + 16);
    } else {
        *reinterpret_cast<void***>(rdx3 + 16) = *reinterpret_cast<void***>(rcx1 + 16);
    }
    fun_14000b518(rcx1, rdx3);
    goto addr_140005a73_3;
}

struct s65 {
    signed char[24] pad24;
    int16_t f18;
};

int64_t fun_140005ba9(struct s65* rcx) {
    int64_t rax2;

    *reinterpret_cast<int32_t*>(&rax2) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax2) = reinterpret_cast<uint1_t>(rcx->f18 == 0x20b);
    return rax2;
}

void fun_140005c6d() {
    int64_t r12_1;
    int64_t tmp64_2;
    int64_t rsi3;
    int64_t rbx4;
    int32_t eax5;
    int64_t v6;
    int64_t v7;

    do {
        r12_1 = tmp64_2;
        if (r12_1 == rsi3) 
            break;
        eax5 = fun_14000b560(r12_1, rbx4, 8);
    } while (eax5);
    goto addr_140005c8e_4;
    goto v6;
    addr_140005c8e_4:
    goto v7;
}

struct s66 {
    signed char[39] pad39;
    unsigned char f27;
};

struct s67 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
    signed char[2] pad24;
    int16_t f18;
};

struct s66* fun_140005d70() {
    struct s2* r8_1;
    struct s66* rax2;
    struct s67* rdx3;
    void* rax4;
    uint32_t edx5;
    int64_t rdx6;
    struct s66* rdx7;
    int64_t rcx8;

    r8_1 = g14000d730;
    *reinterpret_cast<int32_t*>(&rax2) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    if (r8_1->f0 == 0x5a4d && ((rdx3 = reinterpret_cast<struct s67*>(r8_1->f3c + reinterpret_cast<uint64_t>(r8_1)), rdx3->f0 == 0x4550) && rdx3->f18 == 0x20b)) {
        *reinterpret_cast<uint32_t*>(&rax4) = rdx3->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        rax2 = reinterpret_cast<struct s66*>(reinterpret_cast<uint64_t>(rdx3) + reinterpret_cast<uint64_t>(rax4) + 24);
        edx5 = rdx3->f6;
        if (!edx5) {
            addr_140005dd8_3:
            return 0;
        } else {
            *reinterpret_cast<uint32_t*>(&rdx6) = edx5 - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
            rdx7 = reinterpret_cast<struct s66*>(reinterpret_cast<uint64_t>(rax2) + (rdx6 + rdx6 * 4) * 8 + 40);
            do {
                if (rax2->f27 & 32) {
                    if (!rcx8) 
                        break;
                    --rcx8;
                }
                ++rax2;
            } while (rax2 != rdx7);
            goto addr_140005dd8_3;
        }
    }
    return rax2;
}

struct s68 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
    signed char[2] pad24;
    int16_t f18;
};

struct s69 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
    signed char[20] pad36;
    int32_t f24;
};

int64_t fun_140005e20(int64_t rcx) {
    struct s2* rdx2;
    struct s68* r8_3;
    uint64_t rcx4;
    void* rdx5;
    struct s69* rdx6;
    int64_t r8_7;
    int64_t rax8;
    struct s69* r9_9;
    uint64_t r8_10;
    uint64_t rax11;
    uint64_t rax12;
    int64_t rax13;

    rdx2 = g14000d730;
    if (rdx2->f0 != 0x5a4d || ((r8_3 = reinterpret_cast<struct s68*>(rdx2->f3c + reinterpret_cast<uint64_t>(rdx2)), r8_3->f0 != 0x4550) || (r8_3->f18 != 0x20b || (rcx4 = rcx - reinterpret_cast<uint64_t>(rdx2), *reinterpret_cast<uint32_t*>(&rdx5) = r8_3->f14, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0, rdx6 = reinterpret_cast<struct s69*>(reinterpret_cast<uint64_t>(r8_3) + reinterpret_cast<uint64_t>(rdx5) + 24), *reinterpret_cast<uint32_t*>(&r8_7) = r8_3->f6, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_7) + 4) = 0, *reinterpret_cast<uint32_t*>(&r8_7) == 0)))) {
        return 0;
    }
    *reinterpret_cast<int32_t*>(&rax8) = static_cast<int32_t>(r8_7 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    r9_9 = reinterpret_cast<struct s69*>(reinterpret_cast<uint64_t>(rdx6) + (rax8 + rax8 * 4) * 8 + 40);
    do {
        *reinterpret_cast<int32_t*>(&r8_10) = rdx6->fc;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_10) + 4) = 0;
        rax11 = r8_10;
        if (rcx4 < r8_10) 
            continue;
        *reinterpret_cast<int32_t*>(&rax12) = *reinterpret_cast<int32_t*>(&rax11) + rdx6->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        if (rcx4 < rax12) 
            break;
        ++rdx6;
    } while (rdx6 != r9_9);
    goto addr_140005e95_7;
    *reinterpret_cast<uint32_t*>(&rax13) = reinterpret_cast<uint32_t>(~rdx6->f24) >> 31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
    return rax13;
    addr_140005e95_7:
    return 0;
}

struct s70 {
    signed char[24] pad24;
    int16_t f18;
};

struct s71 {
    signed char[144] pad144;
    int32_t f90;
};

struct s72 {
    signed char[20] pad20;
    uint16_t f14;
};

struct s73 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
};

struct s74 {
    signed char[6] pad6;
    uint16_t f6;
};

struct s75 {
    signed char[4] pad4;
    int32_t f4;
    signed char[4] pad12;
    int32_t fc;
};

int64_t fun_140005ed6() {
    struct s70* r8_1;
    uint64_t rax2;
    struct s71* r8_3;
    int64_t rdx4;
    struct s72* r8_5;
    struct s73* rdx6;
    int64_t r8_7;
    uint32_t r8d8;
    struct s74* r8_9;
    int64_t r9_10;
    int64_t r8_11;
    struct s73* r10_12;
    uint64_t r9_13;
    uint64_t r8_14;
    uint64_t r8_15;
    struct s75* rax16;
    int64_t r11_17;
    int32_t ecx18;
    int64_t r9_19;
    int64_t r11_20;

    if (r8_1->f18 != 0x20b || ((*reinterpret_cast<int32_t*>(&rax2) = r8_3->f90, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0, *reinterpret_cast<int32_t*>(&rax2) == 0) || (*reinterpret_cast<uint32_t*>(&rdx4) = r8_5->f14, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0, rdx6 = reinterpret_cast<struct s73*>(r8_7 + rdx4 + 24), r8d8 = r8_9->f6, r8d8 == 0))) {
        return r9_10;
    }
    *reinterpret_cast<uint32_t*>(&r8_11) = r8d8 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = 0;
    r10_12 = reinterpret_cast<struct s73*>(reinterpret_cast<int64_t>(rdx6) + (r8_11 + r8_11 * 4) * 8 + 40);
    do {
        *reinterpret_cast<int32_t*>(&r9_13) = rdx6->fc;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_13) + 4) = 0;
        r8_14 = r9_13;
        if (rax2 < r9_13) 
            continue;
        *reinterpret_cast<int32_t*>(&r8_15) = *reinterpret_cast<int32_t*>(&r8_14) + rdx6->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = 0;
        if (rax2 < r8_15) 
            break;
        rdx6 = reinterpret_cast<struct s73*>(reinterpret_cast<int64_t>(rdx6) + 40);
    } while (r10_12 != rdx6);
    goto addr_140005f36_8;
    rax16 = reinterpret_cast<struct s75*>(rax2 + r11_17);
    while (rax16->f4 || rax16->fc) {
        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(ecx18 < 0) | reinterpret_cast<uint1_t>(ecx18 == 0))) 
            goto addr_140005f63_12;
        --ecx18;
        rax16 = reinterpret_cast<struct s75*>(reinterpret_cast<uint64_t>(rax16) + 20);
    }
    addr_140005f36_8:
    return 0;
    addr_140005f63_12:
    *reinterpret_cast<int32_t*>(&r9_19) = rax16->fc;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_19) + 4) = 0;
    return r9_19 + r11_20;
}

void fun_140007cf0() {
    goto 0x140007c67;
}

void fun_140007d8f() {
    int32_t r15d1;
    void** r9_2;

    if (reinterpret_cast<uint32_t>(r15d1 - 2) <= 1) {
        fun_140006150(reinterpret_cast<int64_t>(__zero_stack_offset()) + 96, 1, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70, r9_2, __return_address());
        goto 0x140007b9d;
    } else {
        fun_1400062c0(reinterpret_cast<int64_t>(__zero_stack_offset()) + 96, 1, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x140007b9d;
    }
}

void fun_140007dd4() {
    signed char rax1;
    int32_t v2;
    int32_t r15d3;
    signed char** r12_4;
    int32_t r15d5;
    int32_t r15d6;
    int32_t r15d7;

    rax1 = reinterpret_cast<signed char>(static_cast<int64_t>(v2));
    if (r15d3 == 5) {
        **r12_4 = rax1;
        goto 0x140007b9d;
    } else {
        if (r15d5 == 1) {
            **r12_4 = rax1;
            goto 0x140007b9d;
        } else {
            if (r15d6 == 2 || r15d7 != 3) {
                **r12_4 = rax1;
                goto 0x140007b9d;
            } else {
                **r12_4 = rax1;
                goto 0x140007b9d;
            }
        }
    }
}

struct s76 {
    void** f0;
    signed char[7] pad8;
    int32_t f8;
};

void fun_140007e12() {
    struct s76* rcx1;
    struct s76** r12_2;
    uint32_t eax3;
    uint32_t v4;
    uint64_t r8_5;
    int64_t rdx6;
    int64_t v7;
    uint32_t r8d8;
    uint32_t eax9;
    struct s76* rax10;
    int64_t rbx11;
    void** rcx12;
    int64_t r10_13;
    uint64_t r9_14;
    int32_t r11d15;
    uint32_t r9d16;
    int32_t ecx17;

    rcx1 = *r12_2;
    eax3 = v4 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax3) & 4)) {
        __asm__("fld qword [rsp+0x20]");
        r8_5 = reinterpret_cast<uint64_t>(rcx1) >> 32;
        __asm__("fstp tword [rsp+0x20]");
        if (reinterpret_cast<int32_t>(0x7ff00000) < reinterpret_cast<int32_t>((-*reinterpret_cast<uint32_t*>(&rcx1) | *reinterpret_cast<uint32_t*>(&rcx1)) >> 31 | *reinterpret_cast<uint32_t*>(&r8_5) & 0x7fffffff)) {
            addr_1400083c7_3:
            fun_140006440(0, "NaN", reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
            goto 0x1400083a7;
        } else {
            rdx6 = v7;
            if (*reinterpret_cast<int16_t*>(&rdx6) < reinterpret_cast<int16_t>(0)) {
            }
            r8d8 = *reinterpret_cast<uint32_t*>(&r8_5) & 0x7ff00000;
            eax9 = *reinterpret_cast<uint32_t*>(&r8_5) & 0xfffff | *reinterpret_cast<uint32_t*>(&rcx1);
            if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!eax9)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d8 != 0x7ff00000))) && eax9 | r8d8) {
                fun_140006440(*reinterpret_cast<uint32_t*>(&rdx6) & 0x8000, "Inf", reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
                goto 0x1400083a7;
            }
            rax10 = rcx1;
            *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx6) & 0x7fff);
            if (!*reinterpret_cast<uint16_t*>(&rdx6)) 
                goto addr_14000844c_9;
            if (*reinterpret_cast<int16_t*>(&rdx6) <= reinterpret_cast<int16_t>(0x3c00)) 
                goto addr_14000833b_11;
        }
    } else {
        *reinterpret_cast<int32_t*>(&rbx11) = rcx1->f8;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx11) + 4) = 0;
        rcx12 = rcx1->f0;
        *reinterpret_cast<uint32_t*>(&r10_13) = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&rbx11)));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r10_13) + 4) = 0;
        rdx6 = rbx11;
        r9_14 = reinterpret_cast<unsigned char>(rcx12) >> 32;
        r11d15 = static_cast<int32_t>(r10_13 + r10_13);
        r9d16 = *reinterpret_cast<uint32_t*>(&r9_14) & 0x7fffffff | *reinterpret_cast<uint32_t*>(&rcx12);
        if (0xfffe - ((-r9d16 | r9d16) >> 31 | static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(&r11d15))) >> 16) 
            goto addr_1400083c7_3;
        if (*reinterpret_cast<int16_t*>(&rbx11) < 0) {
        }
        *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx6) & 0x7fff);
        if (!*reinterpret_cast<uint16_t*>(&rdx6)) {
            if (rcx12) {
                *reinterpret_cast<uint32_t*>(&rdx6) = 0xffffc002;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
            }
            goto addr_140008358_19;
        } else {
            if (*reinterpret_cast<uint16_t*>(&rdx6) != 0x7fff || r9d16) {
                *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx6) - 0x3fff);
                goto addr_140008358_19;
            } else {
                fun_140006440(*reinterpret_cast<uint32_t*>(&r10_13) & 0x8000, "Inf", reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
                goto 0x1400083a7;
            }
        }
    }
    if (*reinterpret_cast<uint16_t*>(&rdx6)) {
        addr_14000834c_24:
        *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx6) - 0x3ffc);
    } else {
        addr_14000844c_9:
        if (rax10) {
            *reinterpret_cast<uint32_t*>(&rdx6) = 0xfffffc05;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
            goto addr_140008457_26;
        }
    }
    addr_140008351_27:
    rcx12 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax10) >> 3);
    addr_140008358_19:
    fun_140007660(rcx12, rdx6, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
    goto 0x1400083a7;
    addr_140008457_26:
    goto addr_140008351_27;
    addr_14000833b_11:
    ecx17 = 0x3c01 - *reinterpret_cast<int16_t*>(&rdx6);
    rax10 = reinterpret_cast<struct s76*>(reinterpret_cast<uint64_t>(rax10) >> *reinterpret_cast<signed char*>(&ecx17));
    *reinterpret_cast<uint32_t*>(&rdx6) = *reinterpret_cast<uint32_t*>(&rdx6) + ecx17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
    goto addr_14000834c_24;
}

void fun_140007ea4() {
    int32_t r14d1;
    int32_t v2;
    int32_t edi3;
    void** rdx4;
    void*** r12_5;

    if (!r14d1 && v2 == edi3) {
    }
    rdx4 = *r12_5;
    fun_1400064f0(0x78, rdx4, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
    goto 0x140007b9d;
}

struct s77 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s78 {
    signed char[2] pad2;
    signed char f2;
};

struct s79 {
    signed char[2] pad2;
    signed char f2;
};

void fun_140007ee4() {
    uint32_t eax1;
    struct s77* rsi2;
    struct s78* rsi3;
    struct s79* rsi4;

    eax1 = rsi2->f1;
    if (*reinterpret_cast<signed char*>(&eax1) == 54) {
        if (rsi3->f2 != 52) 
            goto 0x14000840b;
        goto 0x140007c67;
    } else {
        if (*reinterpret_cast<signed char*>(&eax1) == 51) {
            if (rsi4->f2 != 50) 
                goto "???";
            goto 0x140007c67;
        } else {
            goto 0x140007c67;
        }
    }
}

void fun_140007f0c() {
    uint32_t eax1;
    uint32_t v2;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) {
        __asm__("fld qword [rsp+0x20]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140007370(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x140007b9d;
    } else {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140007370(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x140007b9d;
    }
}

struct s80 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_140007f44() {
    uint32_t eax1;
    struct s80* rsi2;

    eax1 = rsi2->f1;
    if (*reinterpret_cast<signed char*>(&eax1) == 0x68) {
        goto 0x140007c67;
    } else {
        goto 0x140007c67;
    }
}

struct s81 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_140007f64() {
    uint32_t eax1;
    struct s81* rsi2;

    eax1 = rsi2->f1;
    if (*reinterpret_cast<signed char*>(&eax1) == 0x6c) {
        goto 0x140007c67;
    } else {
        goto 0x140007c67;
    }
}

void fun_140007f84() {
    int64_t rcx1;
    int32_t v2;
    void** rax3;

    *reinterpret_cast<int32_t*>(&rcx1) = v2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    rax3 = fun_14000b550(rcx1);
    fun_1400063f0(rax3, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 0x70);
    goto 0x140007b9d;
}

void fun_140007fda() {
    uint32_t eax1;
    uint32_t v2;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) {
        __asm__("fld qword [rsp+0x20]");
        __asm__("fstp tword [rsp+0x40]");
        fun_1400074f0(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x140007b9d;
    } else {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        fun_1400074f0(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x140007b9d;
    }
}

void fun_140008012() {
    goto 0x140007c67;
}

void fun_140008043() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x140007c60;
    goto 0x140007c67;
}

void fun_140008060() {
    fun_1400060f0(37, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
    goto 0x140007b9d;
}

void fun_14000811d() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x140007c60;
    goto 0x140007c67;
}

void fun_14000813a() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x140007c60;
    goto 0x140007c67;
}

void fun_140008157() {
    uint32_t r14d1;

    if (r14d1 <= 1) {
        goto 0x140007c67;
    } else {
        goto 0x140007c67;
    }
}

void fun_140008173() {
    int32_t r14d1;
    uint32_t r14d2;

    if (r14d1) {
        if (r14d2 > 3) 
            goto 0x14000840b;
    } else {
        goto 0x140007c67;
    }
}

void fun_140008190() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) 
        goto 0x140007e2d; else 
        goto "???";
}

void fun_140008240() {
}

void fun_1400082b0() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140007410(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x140007b9d;
    } else {
        __asm__("fld qword [rsp+0x20]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140007410(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x140007b9d;
    }
}

void fun_1400082e8() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) 
        goto 0x140007ff5; else 
        goto "???";
}

void fun_14000a1ab() {
    int64_t rbx1;

    rbx1 = DeleteCriticalSection;
    rbx1(0x140010b00);
    goto rbx1;
}

struct s82 {
    signed char[20] pad20;
    int32_t f14;
};

struct s83 {
    signed char[24] pad24;
    uint32_t f18;
};

void fun_14000ad31() {
    struct s82* r9_1;
    struct s83* r9_2;
    uint32_t edx3;
    int32_t r10d4;
    int32_t* rdi5;
    int32_t* rsi6;
    int64_t v7;
    int32_t* rdi8;
    int64_t r10_9;
    int32_t* rsi10;
    int64_t v11;

    __asm__("rep bsf ecx, edx");
    r9_1->f14 = 1;
    r9_2->f18 = edx3;
    if (!r10d4) {
        __asm__("bsr edx, [r9+rdx*4+0x14]");
        *rdi5 = 0xfffffbee;
        *rsi6 = 2;
        goto v7;
    } else {
        *rdi8 = static_cast<int32_t>(r10_9 + 32 - 0x433);
        *rsi10 = 21;
        goto v11;
    }
}

struct s84 {
    unsigned char f0;
    unsigned char f1;
};

void fun_14000ad80(signed char* rcx, struct s84* rdx) {
    signed char* rax3;
    unsigned char* rcx4;
    uint32_t edx5;
    uint32_t edx6;

    rax3 = rcx;
    rcx4 = &rdx->f1;
    edx5 = rdx->f0;
    *rax3 = *reinterpret_cast<signed char*>(&edx5);
    if (*reinterpret_cast<signed char*>(&edx5)) {
        do {
            edx6 = *rcx4;
            ++rax3;
            ++rcx4;
            *rax3 = *reinterpret_cast<signed char*>(&edx6);
        } while (*reinterpret_cast<signed char*>(&edx6));
    }
    return;
}

uint64_t fun_14000b020(signed char* rcx, uint16_t** rdx, uint64_t r8) {
    uint64_t r14_4;
    uint16_t** r12_5;
    signed char* rbx6;
    uint64_t rbp7;
    int32_t eax8;
    int32_t edi9;
    int32_t eax10;
    void* rsp11;
    uint16_t* rsi12;
    int32_t r13d13;
    signed char* rbp14;
    uint32_t edx15;
    int32_t eax16;
    uint32_t edx17;
    int32_t eax18;
    void* rax19;

    *reinterpret_cast<int32_t*>(&r14_4) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_4) + 4) = 0;
    r12_5 = rdx;
    rbx6 = rcx;
    rbp7 = r8;
    eax8 = fun_14000b488();
    edi9 = eax8;
    eax10 = fun_14000b490();
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 48 - 8 + 8 - 8 + 8);
    rsi12 = *r12_5;
    r13d13 = eax10;
    if (!rsi12) {
        addr_14000b09f_2:
        return r14_4;
    } else {
        if (!rbx6) {
            rbp14 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp11) + 43);
            while (edx15 = *rsi12, eax16 = fun_14000af40(rbp14, *reinterpret_cast<uint16_t*>(&edx15), edi9, r13d13), rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax16 < 0) | reinterpret_cast<uint1_t>(eax16 == 0))) {
                r14_4 = r14_4 + static_cast<int64_t>(eax16);
                if (!*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp11) + (eax16 - 1) + 43)) 
                    goto addr_14000b110_7;
                ++rsi12;
            }
        } else {
            if (rbp7) {
                do {
                    edx17 = *rsi12;
                    eax18 = fun_14000af40(rbx6, *reinterpret_cast<uint16_t*>(&edx17), edi9, r13d13);
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax18 < 0) | reinterpret_cast<uint1_t>(eax18 == 0))) 
                        goto addr_14000b098_11;
                    rax19 = reinterpret_cast<void*>(static_cast<int64_t>(eax18));
                    rbx6 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rbx6) + reinterpret_cast<uint64_t>(rax19));
                    r14_4 = r14_4 + reinterpret_cast<uint64_t>(rax19);
                    if (!*(rbx6 - 1)) 
                        goto addr_14000b100_13;
                    ++rsi12;
                } while (rbp7 > r14_4);
                goto addr_14000b0f0_15;
            } else {
                goto addr_14000b0f0_15;
            }
        }
    }
    addr_14000b098_11:
    r14_4 = 0xffffffffffffffff;
    goto addr_14000b09f_2;
    addr_14000b110_7:
    --r14_4;
    goto addr_14000b09f_2;
    addr_14000b100_13:
    *r12_5 = reinterpret_cast<uint16_t*>(0);
    --r14_4;
    goto addr_14000b09f_2;
    addr_14000b0f0_15:
    *r12_5 = rsi12;
    goto addr_14000b09f_2;
}

uint64_t fun_14000b310(void** rcx, unsigned char** rdx, uint64_t r8, void** r9) {
    void** r13_5;
    void** r14_6;
    unsigned char** rbx7;
    uint64_t rsi8;
    int32_t eax9;
    unsigned char* rdx10;
    uint64_t r12_11;
    uint64_t r14_12;
    void** rsi13;
    int32_t eax14;
    int32_t eax15;
    uint64_t rax16;

    r13_5 = r9;
    r14_6 = rcx;
    rbx7 = rdx;
    if (!r9) {
        r13_5 = reinterpret_cast<void**>(0x140010b74);
    }
    rsi8 = r8;
    fun_14000b488();
    eax9 = fun_14000b490();
    if (!rbx7 || (rdx10 = *rbx7, rdx10 == 0)) {
        *reinterpret_cast<int32_t*>(&r12_11) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_11) + 4) = 0;
    } else {
        if (!r14_6) {
            *reinterpret_cast<int32_t*>(&r14_12) = eax9;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r14_12) + 4) = 0;
            rsi13 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 64 - 8 + 8 - 8 + 8 + 62);
            *reinterpret_cast<int32_t*>(&r12_11) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_11) + 4) = 0;
            while (eax14 = fun_14000b120(rsi13, reinterpret_cast<uint64_t>(rdx10) + r12_11, r14_12, r13_5), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax14 < 0) | reinterpret_cast<uint1_t>(eax14 == 0))) {
                rdx10 = *rbx7;
                r12_11 = r12_11 + static_cast<int64_t>(eax14);
            }
        } else {
            *reinterpret_cast<int32_t*>(&r12_11) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_11) + 4) = 0;
            if (rsi8) {
                do {
                    eax15 = fun_14000b120(r14_6, rdx10, rsi8 - r12_11, r13_5);
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax15 < 0) | reinterpret_cast<uint1_t>(eax15 == 0))) 
                        goto addr_14000b3a4_12;
                    rax16 = reinterpret_cast<uint64_t>(static_cast<int64_t>(eax15));
                    r14_6 = r14_6 + 2;
                    r12_11 = r12_11 + rax16;
                    rdx10 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(*rbx7) + rax16);
                    *rbx7 = rdx10;
                } while (rsi8 > r12_11);
            }
        }
    }
    addr_14000b3b4_15:
    return r12_11;
    addr_14000b3a4_12:
    if (rsi8 > r12_11 && !eax15) {
        *rbx7 = reinterpret_cast<unsigned char*>(0);
        goto addr_14000b3b4_15;
    }
}

int64_t __C_specific_handler = 0x11456;

void fun_14000b480() {
    goto __C_specific_handler;
}

int64_t fun_140004fe0() {
    int32_t edx1;
    int32_t edx2;

    if (edx1 == 3) 
        goto 0x140005000;
    if (!edx2) 
        goto 0x140005000;
    return 1;
}

struct s85 {
    int64_t f0;
    int64_t f8;
};

struct s85* g14000c160 = reinterpret_cast<struct s85*>(0x14000b620);

void fun_140004f00() {
    struct s85* rax1;
    int64_t rax2;
    struct s85* rax3;

    rax1 = g14000c160;
    rax2 = rax1->f0;
    if (rax2) {
        do {
            rax2();
            rax3 = g14000c160;
            rax2 = rax3->f8;
            g14000c160 = reinterpret_cast<struct s85*>(&rax3->f8);
        } while (rax2);
    }
    return;
}

int64_t fun_1400013f0(void** rcx, void** rdx) {
    int32_t* rax3;
    int64_t rax4;

    rax3 = g14000d7a0;
    *rax3 = 0;
    rax4 = fun_140001180(rcx, rdx);
    return rax4;
}

void fun_140001424() {
    goto fun_140001410;
}

int32_t* g14000d700 = reinterpret_cast<int32_t*>(0x14000c180);

void fun_140005010() {
    int32_t* rax1;
    int32_t edx2;
    int32_t edx3;

    rax1 = g14000d700;
    if (*rax1 != 2) {
        *rax1 = 2;
    }
    if (edx2 == 2) 
        goto 0x140005040;
    if (edx3 == 1) 
        goto 0x140005080; else 
        goto "???";
}

int64_t fun_1400050a0() {
    return 0;
}

void fun_140005160() {
    goto 0x1400050ef;
}

void fun_140005840() {
    int64_t rax1;

    rax1 = fun_14000b548(8);
    if (rax1 == 1) 
        goto 0x140005790; else 
        goto "???";
}

int64_t fun_140005a10(int32_t ecx) {
    uint32_t eax2;

    eax2 = g1400100e8;
    if (eax2) 
        goto 0x140005a30;
    return 0;
}

struct s86 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f3c;
};

int64_t fun_140005b90(struct s86* rcx) {
    if (rcx->f0 == 0x5a4d) {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx) + rcx->f3c) == 0x4550) 
            goto 0x140005bb0;
    }
    return 0;
}

struct s87 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
};

struct s88 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s89 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
};

struct s87* fun_140005bc0(struct s88* rcx, uint64_t rdx) {
    struct s89* rcx3;
    int64_t rax4;
    struct s87* rax5;
    uint32_t ecx6;
    int64_t rcx7;
    struct s87* r9_8;
    uint64_t r8_9;
    uint64_t rcx10;
    uint64_t rcx11;

    rcx3 = reinterpret_cast<struct s89*>(reinterpret_cast<int64_t>(rcx) + rcx->f3c);
    *reinterpret_cast<uint32_t*>(&rax4) = rcx3->f14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    rax5 = reinterpret_cast<struct s87*>(reinterpret_cast<int64_t>(rcx3) + rax4 + 24);
    ecx6 = rcx3->f6;
    if (!ecx6) {
        addr_140005c05_2:
        *reinterpret_cast<int32_t*>(&rax5) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx7) = ecx6 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        r9_8 = reinterpret_cast<struct s87*>(reinterpret_cast<int64_t>(rax5) + (rcx7 + rcx7 * 4) * 8 + 40);
        do {
            *reinterpret_cast<int32_t*>(&r8_9) = rax5->fc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
            rcx10 = r8_9;
            if (r8_9 > rdx) 
                continue;
            *reinterpret_cast<int32_t*>(&rcx11) = *reinterpret_cast<int32_t*>(&rcx10) + rax5->f8;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx11) + 4) = 0;
            if (rcx11 > rdx) 
                break;
            rax5 = reinterpret_cast<struct s87*>(reinterpret_cast<int64_t>(rax5) + 40);
        } while (rax5 != r9_8);
        goto addr_140005c05_2;
    }
    return rax5;
}

struct s90 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[16] pad24;
    int16_t f18;
};

void fun_140005c10(void** rcx) {
    struct s0* rax2;
    struct s2* rdx3;
    struct s90* rax4;

    rax2 = fun_14000b558(rcx);
    if (reinterpret_cast<uint64_t>(rax2) > 8) 
        goto 0x140005ca0;
    rdx3 = g14000d730;
    if (rdx3->f0 != 0x5a4d) 
        goto 0x140005c8e;
    rax4 = reinterpret_cast<struct s90*>(rdx3->f3c + reinterpret_cast<uint64_t>(rdx3));
    if (rax4->f0 != 0x4550) 
        goto 0x140005c8e;
    if (rax4->f18 != 0x20b) 
        goto 0x140005c8e;
    if (!rax4->f6) 
        goto 0x140005ca0;
    goto 0x140005c79;
}

void fun_140005eb0() {
    struct s2* r11_1;

    r11_1 = g14000d730;
    if (r11_1->f0 != 0x5a4d) 
        goto 0x140005ed2;
    if (*reinterpret_cast<int32_t*>(r11_1->f3c + reinterpret_cast<uint64_t>(r11_1)) == 0x4550) 
        goto 0x140005ee0; else 
        goto "???";
}

void fun_140007c90(void** rcx) {
    int32_t r15d2;
    void** r9_3;
    void*** r12_4;
    uint32_t* r12_5;
    int32_t r15d6;
    int32_t r15d7;
    int32_t r15d8;

    if (r15d2 == 3) {
        r9_3 = *r12_4;
    } else {
        *reinterpret_cast<uint32_t*>(&r9_3) = *r12_5;
        *reinterpret_cast<int32_t*>(&r9_3 + 4) = 0;
        if (r15d6 == 2) {
            addr_140007cc5_4:
        } else {
            if (r15d7 == 1) {
                *reinterpret_cast<uint32_t*>(&r9_3) = *reinterpret_cast<uint16_t*>(&r9_3);
                *reinterpret_cast<int32_t*>(&r9_3 + 4) = 0;
            } else {
                if (r15d8 == 5) {
                    *reinterpret_cast<uint32_t*>(&r9_3) = *reinterpret_cast<unsigned char*>(&r9_3);
                    *reinterpret_cast<int32_t*>(&r9_3 + 4) = 0;
                    goto addr_140007cc5_4;
                }
            }
        }
    }
    if (*reinterpret_cast<int32_t*>(&rcx) == 0x75) {
        fun_140006a00(r9_3, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x140007b9d;
    } else {
        fun_1400064f0(rcx, r9_3, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x140007b9d;
    }
}

void fun_140007d08() {
    int32_t r15d1;
    void** rcx2;
    void*** r12_3;
    int32_t* r12_4;
    int32_t r15d5;
    int32_t r15d6;
    int32_t r15d7;

    if (r15d1 == 3) {
        rcx2 = *r12_3;
    } else {
        rcx2 = reinterpret_cast<void**>(static_cast<int64_t>(*r12_4));
        if (r15d5 == 2) {
            addr_140007d3d_4:
        } else {
            if (r15d6 == 1) {
                rcx2 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&rcx2)));
            } else {
                if (r15d7 == 5) {
                    rcx2 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&rcx2)));
                    goto addr_140007d3d_4;
                }
            }
        }
    }
    fun_140006a00(rcx2, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
    goto 0x140007b9d;
}

void fun_140007d63() {
    void** rcx1;
    void*** r12_2;
    int32_t r15d3;
    uint16_t* r12_4;
    uint16_t** r12_5;
    int32_t v6;
    void** eax7;
    void* rsp8;
    void** r9_9;

    rcx1 = *r12_2;
    if (reinterpret_cast<uint32_t>(r15d3 - 2) <= 1) {
        r12_4 = *r12_5;
        if (!r12_4) {
            r12_4 = reinterpret_cast<uint16_t*>("(");
        }
        if (v6 < 0) {
            eax7 = fun_14000b570(r12_4);
            rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
        } else {
            eax7 = fun_14000ade0(r12_4, static_cast<int64_t>(v6));
            rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
        }
        fun_140006150(r12_4, eax7, reinterpret_cast<int64_t>(rsp8) + 0x70, r9_9, __return_address());
    } else {
        fun_1400063f0(rcx1, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x140007b9d;
    }
}

void fun_140008364() {
}

void fun_140007fa2() {
    uint32_t eax1;
    uint32_t v2;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) 
        goto 0x1400082c4; else 
        goto "???";
}

void fun_140008029() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x140007c60;
    goto 0x140007c67;
}

void fun_140008077() {
    int32_t r14d1;
    struct s43* rax2;
    unsigned char* rdx3;
    void** eax4;

    if (r14d1) 
        goto 0x140007c60;
    rax2 = fun_14000b528();
    rdx3 = rax2->f8;
    eax4 = fun_14000b2a0(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 94, rdx3, 16, reinterpret_cast<int64_t>(__zero_stack_offset()) + 96, __return_address());
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax4 == 0))) {
    }
    goto 0x140007c60;
}

void fun_1400080e5() {
    int64_t r10_1;
    uint32_t r14d2;
    int32_t eax3;
    int32_t* r12_4;
    int32_t* r10_5;
    int32_t r14d6;

    if (!r10_1) 
        goto 0x140008161;
    if (r14d2 & 0xfffffffd) {
        goto 0x140007c67;
    } else {
        eax3 = *r12_4;
        *r10_5 = eax3;
        if (eax3 < 0) {
            if (r14d6) {
                goto 0x140007c67;
            }
        }
        goto 0x140007c67;
    }
}

void fun_14000a190() {
    int32_t tmp32_1;

    tmp32_1 = g140010af0;
    g140010af0 = 3;
    if (tmp32_1 == 2) 
        goto 0x14000a1b0;
    return;
}

int64_t fun_14000af00() {
    int64_t rax1;

    rax1 = g140010b60;
    return rax1;
}

int64_t fun_14000b420(unsigned char* rcx, uint64_t rdx, void** r8) {
    void** rbx4;
    int32_t eax5;

    rbx4 = r8;
    fun_14000b490();
    fun_14000b488();
    if (!rbx4) {
        rbx4 = reinterpret_cast<void**>(0x140010b70);
    }
    eax5 = fun_14000b120(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 + 62, rcx, rdx, rbx4);
    return static_cast<int64_t>(eax5);
}

void fun_140005740(uint32_t** rcx) {
    if ((**rcx & 0x20ffffff) == 0x20474343) 
        goto 0x140005820; else 
        goto "???";
}

void fun_140001440() {
    return;
}

void fun_1400050b0(uint32_t* rcx) {
    int64_t rax2;

    __asm__("movaps [rsp+0x40], xmm6");
    __asm__("movaps [rsp+0x50], xmm7");
    __asm__("movaps [rsp+0x60], xmm8");
    if (*rcx > 6) {
        goto 0x1400050ef;
    } else {
        *reinterpret_cast<uint32_t*>(&rax2) = *rcx;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
        goto *reinterpret_cast<int32_t*>(0x14000d1c4 + rax2 * 4) + 0x14000d1c4;
    }
}

void fun_140005170() {
    goto 0x1400050ef;
}

void fun_140008278() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) 
        goto 0x140007f27; else 
        goto "???";
}

void fun_14000b580() {
    goto WideCharToMultiByte;
}

void fun_14000ac70() {
    void** rax1;
    int64_t rax2;
    int64_t rbx3;
    uint64_t rcx4;
    uint64_t rbx5;
    uint32_t edx6;
    uint32_t ecx7;
    int32_t ebx8;
    void** eax9;

    __asm__("movd rbx, xmm0");
    rax1 = fun_14000a1e0(1);
    if (!rax1) 
        goto 0x14000ad26;
    rax2 = rbx3;
    rcx4 = rbx5 >> 32;
    edx6 = *reinterpret_cast<uint32_t*>(&rcx4) & 0xfffff;
    ecx7 = *reinterpret_cast<uint32_t*>(&rcx4) >> 20 & 0x7ff;
    if (ecx7) {
        edx6 = edx6 | 0x100000;
    }
    if (!ebx8) 
        goto 0x14000ad38;
    __asm__("rep bsf r8d, ebx");
    eax9 = reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(&rax2));
    if (!1) {
        eax9 = reinterpret_cast<void**>(static_cast<uint32_t>(reinterpret_cast<unsigned char>(eax9)));
        edx6 = edx6;
    }
    *reinterpret_cast<void***>(rax1 + 24) = eax9;
    *reinterpret_cast<uint32_t*>(rax1 + 28) = edx6;
    *reinterpret_cast<void***>(rax1 + 20) = reinterpret_cast<void**>(1 - (1 - reinterpret_cast<uint1_t>(1 < 1 - reinterpret_cast<uint1_t>(edx6 < 1))));
    if (ecx7) 
        goto 0x14000ad56; else 
        goto "???";
}

void fun_140005180() {
    goto 0x1400050ef;
}

void fun_14000b588() {
    goto VirtualQuery;
}

void fun_140005190() {
    goto 0x1400050ef;
}

void fun_14000b590() {
    goto VirtualProtect;
}

void fun_14000b598() {
    goto TlsGetValue;
}

void fun_14000b5a0() {
    goto Sleep;
}

void fun_14000b5a8() {
    goto SetUnhandledExceptionFilter;
}

void fun_14000b5b0() {
    goto MultiByteToWideChar;
}

void fun_14000b5b8() {
    goto LeaveCriticalSection;
}

void fun_14000b5c0() {
    goto IsDBCSLeadByteEx;
}

void fun_14000b5c8() {
    goto InitializeCriticalSection;
}

void fun_14000b5d0() {
    goto GetLastError;
}

void fun_14000b5d8() {
    goto EnterCriticalSection;
}

void fun_14000b5e0() {
    goto DeleteCriticalSection;
}

void fun_14000b5f0() {
    goto 0x140001430;
}
