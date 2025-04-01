
int64_t __set_app_type = 0x104c4;

void fun_14000ae48(int64_t rcx) {
    goto __set_app_type;
}

int32_t** g14000c890 = reinterpret_cast<int32_t**>(0x140010294);

int32_t* fun_14000a7b0(int64_t rcx) {
    int32_t** rax2;

    rax2 = g14000c890;
    return *rax2;
}

int32_t** g14000c880 = reinterpret_cast<int32_t**>(0x140010284);

int32_t* fun_14000a7c0(int64_t rcx) {
    int32_t** rax2;

    rax2 = g14000c880;
    return *rax2;
}

int64_t fun_140004970(int64_t rcx) {
    return 0;
}

struct s0 {
    signed char[1] pad1;
    void** f1;
};

int64_t strlen = 0x105ca;

struct s0* fun_14000aef8(void** rcx, ...) {
    goto strlen;
}

int64_t malloc = 0x10596;

void** fun_14000aed0(void** rcx, void** rdx, ...) {
    goto malloc;
}

int64_t memcpy = 0x105a0;

void fun_14000aed8(void** rcx, void** rdx, void** r8) {
    goto memcpy;
}

int32_t g14000f030;

int64_t* g14000c820 = reinterpret_cast<int64_t*>(0x14000afc0);

uint64_t fun_14000ae80(int64_t rcx);

void fun_1400048a0();

int64_t fun_140004950(void** rcx, void** rdx, void** r8) {
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

    *reinterpret_cast<int32_t*>(&rax4) = g14000f030;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax4)) {
        return rax4;
    }
    g14000f030 = 1;
    rdx5 = g14000c820;
    rax6 = *rdx5;
    ecx7 = *reinterpret_cast<int32_t*>(&rax6);
    if (*reinterpret_cast<int32_t*>(&rax6) != -1) 
        goto addr_1400048f7_5;
    *reinterpret_cast<int32_t*>(&rax8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    do {
        *reinterpret_cast<int32_t*>(&r8_9) = static_cast<int32_t>(rax8 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
        ecx7 = *reinterpret_cast<int32_t*>(&rax8);
        rax8 = r8_9;
    } while (rdx5[r8_9]);
    addr_1400048f7_5:
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
    rax14 = fun_14000ae80(fun_1400048a0);
    *reinterpret_cast<uint32_t*>(&rax15) = *reinterpret_cast<uint32_t*>(&rax14) - (*reinterpret_cast<uint32_t*>(&rax14) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax14) < *reinterpret_cast<uint32_t*>(&rax14) + reinterpret_cast<uint1_t>(rax14 < 1)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
    return rax15;
}

int64_t fun_1400014f0(int32_t ecx);

int64_t fun_1400016e0(int64_t rcx);

int64_t fun_14000af90(void** rcx, void** rdx, void** r8) {
    fun_140004950(rcx, rdx, r8);
    fun_1400014f0(17);
    fun_1400016e0(17);
    return 0;
}

int64_t _amsg_exit = 0x104ea;

void fun_14000ae58(void** rcx) {
    goto _amsg_exit;
}

int64_t _initterm = 0x10522;

void fun_14000ae70(void** rcx, void** rdx) {
    goto _initterm;
}

int64_t fun_140001410(int64_t rcx) {
    uint64_t rax2;
    int64_t rax3;

    rax2 = fun_14000ae80(rcx);
    *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax2) - (*reinterpret_cast<uint32_t*>(&rax2) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax2) < *reinterpret_cast<uint32_t*>(&rax2) + reinterpret_cast<uint1_t>(rax2 < 1)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    return rax3;
}

void*** fun_14000ae40();

void** fun_14000a8c0(int32_t ecx, void** rdx, void** r8, void** r9, int64_t a5) {
    void*** rax6;
    int64_t rcx7;

    rax6 = fun_14000ae40();
    *reinterpret_cast<int32_t*>(&rcx7) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    return reinterpret_cast<int64_t>(rax6) + (rcx7 + rcx7 * 2 << 4);
}

int64_t fprintf = 0x10564;

void fun_14000aea8(void** rcx, int64_t rdx, int64_t r8, int32_t* r9, int64_t a5) {
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

struct s2* g14000c830 = reinterpret_cast<struct s2*>(0x140000000);

struct s3 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
    signed char[2] pad24;
    int16_t f18;
};

struct s1* fun_140005650(void** rcx, void** rdx, void** r8, void** r9) {
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

    rdx5 = g14000c830;
    *reinterpret_cast<int32_t*>(&rax6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    if (rdx5->f0 == 0x5a4d && ((r8_7 = reinterpret_cast<struct s3*>(rdx5->f3c + reinterpret_cast<uint64_t>(rdx5)), r8_7->f0 == 0x4550) && r8_7->f18 == 0x20b)) {
        *reinterpret_cast<uint32_t*>(&rax8) = r8_7->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        rcx9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx) - reinterpret_cast<uint64_t>(rdx5));
        edx10 = r8_7->f6;
        rax6 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(r8_7) + reinterpret_cast<uint64_t>(rax8) + 24);
        if (!edx10) {
            addr_1400056c5_3:
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
            goto addr_1400056c5_3;
        }
    }
    return rax6;
}

struct s4 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f18;
};

struct s2* fun_140005780(void** rcx, void** rdx, void** r8, void** r9) {
    struct s2* rax5;
    struct s2* r8_6;
    struct s4* rdx7;

    rax5 = g14000c830;
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

void fun_14000aec0(int64_t rcx, void** rdx, void** r8, void** r9);

void fun_14000af08();

void fun_14000ae90();

int32_t g14000f0a4;

struct s5 {
    void** f0;
    signed char[23] pad24;
    void** f18;
};

struct s5* g14000f0a8;

struct s6 {
    void** f0;
    signed char[31] pad32;
    struct s1* f20;
};

int64_t VirtualQuery = 0x10430;

int64_t VirtualProtect = 0x1041e;

int64_t GetLastError = 0x1037c;

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

int32_t g14000f0a0;

uint32_t fun_1400056d0(void** rcx, void** rdx, void** r8, void** r9);

int64_t fun_140005910(void** rcx, ...);

struct s10 {
    void* f0;
    uint32_t f4;
    uint32_t f8;
};

struct s10* g14000c840 = reinterpret_cast<struct s10*>(0x14000cec0);

struct s10* g14000c850 = reinterpret_cast<struct s10*>(0x14000cec0);

struct s11 {
    signed char[32] pad32;
    void** f20;
    signed char[15] pad48;
    void** f30;
};

void fun_140004bd0(void** rcx, ...);

struct s12 {
    signed char[32] pad32;
    int32_t f20;
    signed char[4] pad40;
    void** f28;
    signed char[47] pad88;
    int64_t f58;
};

int64_t g14000f0b0;

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

void fun_140004b60(void** rcx, void** rdx, void** r8, void** r9) {
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
    rax7 = fun_14000a8c0(2, rdx, r8, r9, v6);
    r9_8 = rax7;
    fun_14000aec0("Mingw-w64 runtime failure:\n", 1, 27, r9_8);
    rax10 = fun_14000a8c0(2, 1, 27, r9_8, v9);
    rdx11 = rcx;
    r8_12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp5) + 88);
    fun_14000af08();
    fun_14000ae90();
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 - 8 - 8 - 80);
    rbx14 = reinterpret_cast<void*>(static_cast<int64_t>(g14000f0a4));
    r12_15 = rax10;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx14) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx14) == 0)) {
        while (1) {
            *reinterpret_cast<int32_t*>(&rbx14) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx14) + 4) = 0;
            addr_140004c28_4:
            rax16 = fun_140005650(r12_15, rdx11, r8_12, r9_8);
            rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
            if (!rax16) 
                break;
            rax18 = g14000f0a8;
            rbx14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx14) + reinterpret_cast<uint64_t>(rbx14) * 4 << 3);
            rax19 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(rax18) + reinterpret_cast<uint64_t>(rbx14));
            rax19->f20 = rax16;
            rax19->f0 = reinterpret_cast<void**>(0);
            rax20 = fun_140005780(r12_15, rdx11, r8_12, r9_8);
            *reinterpret_cast<int32_t*>(&rdx21) = rax16->fc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = 0;
            rax22 = g14000f0a8;
            *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax22) + reinterpret_cast<uint64_t>(rbx14) + 24) = reinterpret_cast<uint64_t>(rax20) + rdx21;
            rax23 = reinterpret_cast<int64_t>(VirtualQuery());
            rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8 - 8 + 8);
            if (!rax23) 
                goto addr_140004d07_6;
            *reinterpret_cast<int32_t*>(&rax24) = v25;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0;
            if (!(static_cast<uint32_t>(rax24 - 64) & 0xffffffbf)) 
                goto addr_140004c9e_8;
            if (!(static_cast<uint32_t>(rax24 - 4) & 0xfffffffb)) 
                goto addr_140004c9e_8;
            *reinterpret_cast<int32_t*>(&r8_12) = 4;
            *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
            if (*reinterpret_cast<int32_t*>(&rax24) != 2) {
                *reinterpret_cast<int32_t*>(&r8_12) = 64;
                *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
            }
            tmp64_26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbx14) + reinterpret_cast<uint64_t>(g14000f0a8));
            *reinterpret_cast<void***>(tmp64_26 + 8) = v27;
            r9_8 = tmp64_26;
            *reinterpret_cast<void***>(tmp64_26 + 16) = v28;
            eax29 = reinterpret_cast<int32_t>(VirtualProtect());
            rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
            if (eax29) 
                goto addr_140004c9e_8;
            eax30 = reinterpret_cast<int32_t>(GetLastError());
            *reinterpret_cast<int32_t*>(&rdx11) = eax30;
            *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
            fun_140004b60("  VirtualProtect failed with code 0x%x", rdx11, r8_12, r9_8);
            rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8 - 8 + 8);
        }
    } else {
        rax31 = g14000f0a8;
        *reinterpret_cast<int32_t*>(&r9_8) = 0;
        rax32 = reinterpret_cast<struct s7*>(&rax31->f18);
        while ((r8_12 = rax32->f0, reinterpret_cast<unsigned char>(r8_12) > reinterpret_cast<unsigned char>(r12_15)) || (*reinterpret_cast<int32_t*>(&rdx11) = rax32->f8->f8, *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0, r8_12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_12) + reinterpret_cast<unsigned char>(rdx11)), reinterpret_cast<unsigned char>(r12_15) >= reinterpret_cast<unsigned char>(r8_12))) {
            *reinterpret_cast<int32_t*>(&r9_8) = *reinterpret_cast<int32_t*>(&r9_8) + 1;
            *reinterpret_cast<int32_t*>(&r9_8 + 4) = 0;
            rax32 = reinterpret_cast<struct s7*>(reinterpret_cast<uint64_t>(rax32) + 40);
            if (*reinterpret_cast<int32_t*>(&r9_8) == *reinterpret_cast<int32_t*>(&rbx14)) 
                goto addr_140004c28_4;
        }
        goto addr_140004ca5_17;
    }
    addr_140004d22_18:
    fun_140004b60("Address %p has no image-section", r12_15, r8_12, r9_8);
    *reinterpret_cast<int32_t*>(&rsi33) = g14000f0a0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rsi33)) 
        goto addr_140004d5f_20;
    g14000f0a0 = 1;
    fun_1400056d0("Address %p has no image-section", r12_15, r8_12, r9_8);
    rax34 = fun_140005910("Address %p has no image-section", "Address %p has no image-section");
    rdi35 = g14000c840;
    rbx36 = g14000c850;
    g14000f0a4 = 0;
    rsp37 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 - rax34);
    g14000f0a8 = reinterpret_cast<struct s5*>(&rsp37->f30);
    rax38 = reinterpret_cast<uint64_t>(rdi35) - reinterpret_cast<uint64_t>(rbx36);
    if (reinterpret_cast<int64_t>(rax38) <= reinterpret_cast<int64_t>(7)) 
        goto addr_140004d5f_20;
    if (reinterpret_cast<int64_t>(rax38) > reinterpret_cast<int64_t>(11)) {
        if (rbx36->f0) 
            goto addr_140005008_24;
        eax39 = rbx36->f4;
        if (!(eax39 | rbx36->f8)) 
            goto addr_140004f6e_26;
    } else {
        addr_140004dd5_27:
        if (rbx36->f0) 
            goto addr_140005008_24; else 
            goto addr_140004ddf_28;
    }
    addr_140004de2_29:
    if (eax39) {
        addr_140005008_24:
        if (reinterpret_cast<uint64_t>(rbx36) >= reinterpret_cast<uint64_t>(rdi35)) {
            addr_140004d5f_20:
            goto v40;
        } else {
            r14_41 = g14000c830;
            do {
                *reinterpret_cast<uint32_t*>(&r12_42) = rbx36->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_42) + 4) = 0;
                rbx36 = reinterpret_cast<struct s10*>(&rbx36->f8);
                r12_43 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r12_42) + reinterpret_cast<uint64_t>(r14_41));
                r13d44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(rbx36->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_43)));
                rsp45 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                *rsp45 = 0x14000503a;
                fun_140004bd0(r12_43, r12_43);
                rsp37 = reinterpret_cast<struct s11*>(rsp45 + 1);
                *reinterpret_cast<void***>(r12_43) = r13d44;
            } while (reinterpret_cast<uint64_t>(rbx36) < reinterpret_cast<uint64_t>(rdi35));
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rdx46) = rbx36->f8;
        *reinterpret_cast<int32_t*>(&rdx46 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx46) != 1) {
            addr_140005068_34:
            rsp47 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
            *rsp47 = 0x140005074;
            fun_140004b60("  Unknown pseudo relocation protocol version %d.\n", rdx46, r8_12, r9_8);
            rsp48 = reinterpret_cast<struct s12*>(rsp47 + 1 - 11);
            rax49 = g14000f0b0;
            if (rax49) {
                rdi35->f0 = rsi33->f0;
                rdi50 = reinterpret_cast<struct s13*>(&rdi35->f4);
                rsi51 = reinterpret_cast<struct s14*>(&rsi33->f4);
                rsp48->f20 = 0x4000c380;
                rsp48->f28 = rdx46;
                rdi50->f0 = rsi51->f0;
                rdi52 = reinterpret_cast<struct s15*>(&rdi50->f4);
                rsi53 = reinterpret_cast<struct s16*>(&rsi51->f4);
                rdi52->f0 = rsi53->f0;
                rdi52->f4 = rsi53->f4;
                rsp54 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp48) - 8);
                *rsp54 = 0x1400050bb;
                rax49(&rsp48->f20);
                rsp48 = reinterpret_cast<struct s12*>(rsp54 + 1);
                goto addr_1400050bc_48;
            }
        } else {
            rbx55 = rbx36 + 1;
            if (reinterpret_cast<uint64_t>(rbx55) >= reinterpret_cast<uint64_t>(rdi35)) 
                goto addr_140004d5f_20;
            r15_56 = g14000c830;
            do {
                addr_140004e73_51:
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
                        goto addr_140004ff1_55;
                    if (reinterpret_cast<signed char>(r13_65) <= reinterpret_cast<signed char>(0xffffffff7fffffff)) 
                        goto addr_140005054_57;
                    if (reinterpret_cast<signed char>(r13_65) > reinterpret_cast<signed char>(0xffffffff)) 
                        goto addr_140005054_57;
                    addr_140004ff1_55:
                    rsp66 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                    *rsp66 = 0x140004ff9;
                    fun_140004bd0(r14_61);
                    rsp37 = reinterpret_cast<struct s11*>(rsp66 + 1);
                    *reinterpret_cast<void***>(r14_61) = r13_65;
                    continue;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rdx46) > 32) {
                        if (*reinterpret_cast<uint32_t*>(&rdx46) != 64) 
                            goto addr_140005048_61;
                        r13_65 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_61)) - reinterpret_cast<uint64_t>(rcx60) + reinterpret_cast<unsigned char>(r9_8));
                        if (*reinterpret_cast<uint32_t*>(&r8_58) & 0xc0) 
                            goto addr_140004fa5_63;
                        if (reinterpret_cast<signed char>(r13_65) >= reinterpret_cast<signed char>(0)) 
                            goto addr_140005054_57;
                        addr_140004fa5_63:
                        rsp67 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                        *rsp67 = 0x140004fad;
                        fun_140004bd0(r14_61);
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
                                goto addr_140004e5b_69;
                            if (reinterpret_cast<signed char>(r13_65) < reinterpret_cast<signed char>(0xffffffffffffff80)) 
                                goto addr_140005054_57;
                            if (reinterpret_cast<signed char>(r13_65) > reinterpret_cast<signed char>(0xff)) 
                                goto addr_140005054_57;
                            addr_140004e5b_69:
                            rsp69 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                            *rsp69 = 0x140004e63;
                            fun_140004bd0(r14_61);
                            rsp37 = reinterpret_cast<struct s11*>(rsp69 + 1);
                            *reinterpret_cast<void***>(r14_61) = r13_65;
                            continue;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rdx46) != 16) 
                                goto addr_140005048_61;
                            *reinterpret_cast<uint32_t*>(&rax70) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_61));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax70) + 4) = 0;
                            if (*reinterpret_cast<int16_t*>(&rax70) >= 0) 
                                goto addr_140004ebc_74;
                        }
                    }
                }
                rax70 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax70) | 0xffffffffffff0000);
                addr_140004ebc_74:
                r13_65 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax70) - reinterpret_cast<uint64_t>(rcx60) + reinterpret_cast<unsigned char>(r9_8));
                if (*reinterpret_cast<uint32_t*>(&r8_58) & 0xc0) 
                    goto addr_140004ee6_76;
                if (reinterpret_cast<signed char>(r13_65) < reinterpret_cast<signed char>(0xffffffffffff8000)) 
                    goto addr_140005054_57;
                if (reinterpret_cast<signed char>(r13_65) > reinterpret_cast<signed char>(0xffff)) 
                    goto addr_140005054_57;
                addr_140004ee6_76:
                ++rbx55;
                rsp71 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                *rsp71 = 0x140004ef2;
                fun_140004bd0(r14_61);
                rsp37 = reinterpret_cast<struct s11*>(rsp71 + 1);
                *reinterpret_cast<void***>(r14_61) = r13_65;
                if (reinterpret_cast<uint64_t>(rbx55) < reinterpret_cast<uint64_t>(rdi35)) 
                    goto addr_140004e73_51; else 
                    goto addr_140004eff_79;
                ++rbx55;
            } while (reinterpret_cast<uint64_t>(rbx55) < reinterpret_cast<uint64_t>(rdi35));
        }
    }
    addr_140004f00_81:
    edx72 = g14000f0a4;
    if (!(reinterpret_cast<uint1_t>(edx72 < 0) | reinterpret_cast<uint1_t>(edx72 == 0))) {
        rdi73 = VirtualProtect;
        *reinterpret_cast<int32_t*>(&rbx74) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx74) + 4) = 0;
        do {
            rax75 = g14000f0a8;
            rax76 = reinterpret_cast<struct s17*>(reinterpret_cast<uint64_t>(rax75) + reinterpret_cast<uint64_t>(rbx74));
            if (rax76->f0) {
                rdx77 = rax76->f10;
                rcx78 = rax76->f8;
                rsp79 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                *rsp79 = 0x140004f3f;
                rdi73(rcx78, rdx77);
                rsp37 = reinterpret_cast<struct s11*>(rsp79 + 1);
            }
            *reinterpret_cast<int32_t*>(&rsi33) = *reinterpret_cast<int32_t*>(&rsi33) + 1;
            rbx74 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx74) + 40);
            less80 = *reinterpret_cast<int32_t*>(&rsi33) < g14000f0a4;
        } while (less80);
        goto addr_140004d5f_20;
    }
    addr_1400050bc_48:
    goto rsp48->f58;
    addr_140005054_57:
    rsp37->f20 = r13_65;
    r8_12 = r14_61;
    rsp81 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
    *rsp81 = 0x140005068;
    fun_140004b60("%d bit pseudo relocation at %p out of range, targeting %p, yielding the value %p.\n", rdx46, r8_12, r9_8);
    rsp37 = reinterpret_cast<struct s11*>(rsp81 + 1);
    goto addr_140005068_34;
    addr_140005048_61:
    rsp82 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
    *rsp82 = 0x140005054;
    fun_140004b60("  Unknown pseudo relocation bit size %d.\n", rdx46, r8_58, r9_8);
    rsp37 = reinterpret_cast<struct s11*>(rsp82 + 1);
    goto addr_140005054_57;
    addr_140004eff_79:
    goto addr_140004f00_81;
    addr_140004f6e_26:
    ++rbx36;
    goto addr_140004dd5_27;
    addr_140004ddf_28:
    eax39 = rbx36->f4;
    goto addr_140004de2_29;
    addr_140004d07_6:
    rax83 = g14000f0a8;
    *reinterpret_cast<int32_t*>(&rdx84) = rax16->f8;
    *reinterpret_cast<int32_t*>(&rdx84 + 4) = 0;
    r8_12 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax83) + reinterpret_cast<uint64_t>(rbx14) + 24);
    fun_140004b60("  VirtualQuery failed for %d bytes at address %p", rdx84, r8_12, r9_8);
    rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
    goto addr_140004d22_18;
    addr_140004c9e_8:
    tmp32_85 = g14000f0a4 + 1;
    g14000f0a4 = tmp32_85;
    addr_140004ca5_17:
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

void fun_140004bd0(void** rcx, ...) {
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
    rbx3 = reinterpret_cast<void*>(static_cast<int64_t>(g14000f0a4));
    r12_4 = rcx;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx3) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx3) == 0)) {
        while (1) {
            *reinterpret_cast<int32_t*>(&rbx3) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx3) + 4) = 0;
            addr_140004c28_3:
            rax8 = fun_140005650(r12_4, rdx5, r8_6, r9_7);
            rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
            if (!rax8) 
                break;
            rax10 = g14000f0a8;
            rbx3 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx3) + reinterpret_cast<uint64_t>(rbx3) * 4 << 3);
            rax11 = reinterpret_cast<struct s18*>(reinterpret_cast<uint64_t>(rax10) + reinterpret_cast<uint64_t>(rbx3));
            rax11->f20 = rax8;
            rax11->f0 = reinterpret_cast<void**>(0);
            rax12 = fun_140005780(r12_4, rdx5, r8_6, r9_7);
            *reinterpret_cast<int32_t*>(&rdx13) = rax8->fc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
            rax14 = g14000f0a8;
            *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax14) + reinterpret_cast<uint64_t>(rbx3) + 24) = reinterpret_cast<uint64_t>(rax12) + rdx13;
            rax15 = reinterpret_cast<int64_t>(VirtualQuery());
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8 - 8 + 8);
            if (!rax15) 
                goto addr_140004d07_5;
            *reinterpret_cast<int32_t*>(&rax16) = v17;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
            if (!(static_cast<uint32_t>(rax16 - 64) & 0xffffffbf)) 
                goto addr_140004c9e_7;
            if (!(static_cast<uint32_t>(rax16 - 4) & 0xfffffffb)) 
                goto addr_140004c9e_7;
            *reinterpret_cast<int32_t*>(&r8_6) = 4;
            *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
            if (*reinterpret_cast<int32_t*>(&rax16) != 2) {
                *reinterpret_cast<int32_t*>(&r8_6) = 64;
                *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
            }
            tmp64_18 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbx3) + reinterpret_cast<uint64_t>(g14000f0a8));
            *reinterpret_cast<void***>(tmp64_18 + 8) = v19;
            r9_7 = tmp64_18;
            *reinterpret_cast<void***>(tmp64_18 + 16) = v20;
            eax21 = reinterpret_cast<int32_t>(VirtualProtect());
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
            if (eax21) 
                goto addr_140004c9e_7;
            eax22 = reinterpret_cast<int32_t>(GetLastError());
            *reinterpret_cast<int32_t*>(&rdx5) = eax22;
            *reinterpret_cast<int32_t*>(&rdx5 + 4) = 0;
            fun_140004b60("  VirtualProtect failed with code 0x%x", rdx5, r8_6, r9_7);
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 - 8 + 8);
        }
    } else {
        rax23 = g14000f0a8;
        *reinterpret_cast<int32_t*>(&r9_7) = 0;
        rax24 = reinterpret_cast<struct s7*>(&rax23->f18);
        while ((r8_6 = rax24->f0, reinterpret_cast<unsigned char>(r8_6) > reinterpret_cast<unsigned char>(r12_4)) || (*reinterpret_cast<int32_t*>(&rdx5) = rax24->f8->f8, *reinterpret_cast<int32_t*>(&rdx5 + 4) = 0, r8_6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_6) + reinterpret_cast<unsigned char>(rdx5)), reinterpret_cast<unsigned char>(r12_4) >= reinterpret_cast<unsigned char>(r8_6))) {
            *reinterpret_cast<int32_t*>(&r9_7) = *reinterpret_cast<int32_t*>(&r9_7) + 1;
            *reinterpret_cast<int32_t*>(&r9_7 + 4) = 0;
            rax24 = reinterpret_cast<struct s7*>(reinterpret_cast<uint64_t>(rax24) + 40);
            if (*reinterpret_cast<int32_t*>(&r9_7) == *reinterpret_cast<int32_t*>(&rbx3)) 
                goto addr_140004c28_3;
        }
        goto addr_140004ca5_16;
    }
    addr_140004d22_17:
    fun_140004b60("Address %p has no image-section", r12_4, r8_6, r9_7);
    *reinterpret_cast<int32_t*>(&rsi25) = g14000f0a0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rsi25)) 
        goto addr_140004d5f_19;
    g14000f0a0 = 1;
    fun_1400056d0("Address %p has no image-section", r12_4, r8_6, r9_7);
    rax26 = fun_140005910("Address %p has no image-section", "Address %p has no image-section");
    rdi27 = g14000c840;
    rbx28 = g14000c850;
    g14000f0a4 = 0;
    rsp29 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 - rax26);
    g14000f0a8 = reinterpret_cast<struct s5*>(&rsp29->f30);
    rax30 = reinterpret_cast<uint64_t>(rdi27) - reinterpret_cast<uint64_t>(rbx28);
    if (reinterpret_cast<int64_t>(rax30) <= reinterpret_cast<int64_t>(7)) 
        goto addr_140004d5f_19;
    if (reinterpret_cast<int64_t>(rax30) > reinterpret_cast<int64_t>(11)) {
        if (rbx28->f0) 
            goto addr_140005008_23;
        eax31 = rbx28->f4;
        if (!(eax31 | rbx28->f8)) 
            goto addr_140004f6e_25;
    } else {
        addr_140004dd5_26:
        if (rbx28->f0) 
            goto addr_140005008_23; else 
            goto addr_140004ddf_27;
    }
    addr_140004de2_28:
    if (eax31) {
        addr_140005008_23:
        if (reinterpret_cast<uint64_t>(rbx28) >= reinterpret_cast<uint64_t>(rdi27)) {
            addr_140004d5f_19:
            goto v32;
        } else {
            r14_33 = g14000c830;
            do {
                *reinterpret_cast<uint32_t*>(&r12_34) = rbx28->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_34) + 4) = 0;
                rbx28 = reinterpret_cast<struct s10*>(&rbx28->f8);
                r12_35 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r12_34) + reinterpret_cast<uint64_t>(r14_33));
                r13d36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(rbx28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_35)));
                rsp37 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                *rsp37 = 0x14000503a;
                fun_140004bd0(r12_35, r12_35);
                rsp29 = reinterpret_cast<struct s20*>(rsp37 + 1);
                *reinterpret_cast<void***>(r12_35) = r13d36;
            } while (reinterpret_cast<uint64_t>(rbx28) < reinterpret_cast<uint64_t>(rdi27));
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rdx38) = rbx28->f8;
        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx38) != 1) {
            addr_140005068_33:
            rsp39 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
            *rsp39 = 0x140005074;
            fun_140004b60("  Unknown pseudo relocation protocol version %d.\n", rdx38, r8_6, r9_7);
            rsp40 = reinterpret_cast<struct s21*>(rsp39 + 1 - 11);
            rax41 = g14000f0b0;
            if (rax41) {
                rdi27->f0 = rsi25->f0;
                rdi42 = reinterpret_cast<struct s13*>(&rdi27->f4);
                rsi43 = reinterpret_cast<struct s22*>(&rsi25->f4);
                rsp40->f20 = 0x4000c380;
                rsp40->f28 = rdx38;
                rdi42->f0 = rsi43->f0;
                rdi44 = reinterpret_cast<struct s15*>(&rdi42->f4);
                rsi45 = reinterpret_cast<struct s23*>(&rsi43->f4);
                rdi44->f0 = rsi45->f0;
                rdi44->f4 = rsi45->f4;
                rsp46 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp40) - 8);
                *rsp46 = 0x1400050bb;
                rax41(&rsp40->f20);
                rsp40 = reinterpret_cast<struct s21*>(rsp46 + 1);
                goto addr_1400050bc_47;
            }
        } else {
            rbx47 = rbx28 + 1;
            if (reinterpret_cast<uint64_t>(rbx47) >= reinterpret_cast<uint64_t>(rdi27)) 
                goto addr_140004d5f_19;
            r15_48 = g14000c830;
            do {
                addr_140004e73_50:
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
                        goto addr_140004ff1_54;
                    if (reinterpret_cast<signed char>(r13_57) <= reinterpret_cast<signed char>(0xffffffff7fffffff)) 
                        goto addr_140005054_56;
                    if (reinterpret_cast<signed char>(r13_57) > reinterpret_cast<signed char>(0xffffffff)) 
                        goto addr_140005054_56;
                    addr_140004ff1_54:
                    rsp58 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                    *rsp58 = 0x140004ff9;
                    fun_140004bd0(r14_53);
                    rsp29 = reinterpret_cast<struct s20*>(rsp58 + 1);
                    *reinterpret_cast<void***>(r14_53) = r13_57;
                    continue;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rdx38) > 32) {
                        if (*reinterpret_cast<uint32_t*>(&rdx38) != 64) 
                            goto addr_140005048_60;
                        r13_57 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_53)) - reinterpret_cast<uint64_t>(rcx52) + reinterpret_cast<unsigned char>(r9_7));
                        if (*reinterpret_cast<uint32_t*>(&r8_50) & 0xc0) 
                            goto addr_140004fa5_62;
                        if (reinterpret_cast<signed char>(r13_57) >= reinterpret_cast<signed char>(0)) 
                            goto addr_140005054_56;
                        addr_140004fa5_62:
                        rsp59 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                        *rsp59 = 0x140004fad;
                        fun_140004bd0(r14_53);
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
                                goto addr_140004e5b_68;
                            if (reinterpret_cast<signed char>(r13_57) < reinterpret_cast<signed char>(0xffffffffffffff80)) 
                                goto addr_140005054_56;
                            if (reinterpret_cast<signed char>(r13_57) > reinterpret_cast<signed char>(0xff)) 
                                goto addr_140005054_56;
                            addr_140004e5b_68:
                            rsp61 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                            *rsp61 = 0x140004e63;
                            fun_140004bd0(r14_53);
                            rsp29 = reinterpret_cast<struct s20*>(rsp61 + 1);
                            *reinterpret_cast<void***>(r14_53) = r13_57;
                            continue;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rdx38) != 16) 
                                goto addr_140005048_60;
                            *reinterpret_cast<uint32_t*>(&rax62) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_53));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax62) + 4) = 0;
                            if (*reinterpret_cast<int16_t*>(&rax62) >= 0) 
                                goto addr_140004ebc_73;
                        }
                    }
                }
                rax62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax62) | 0xffffffffffff0000);
                addr_140004ebc_73:
                r13_57 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax62) - reinterpret_cast<uint64_t>(rcx52) + reinterpret_cast<unsigned char>(r9_7));
                if (*reinterpret_cast<uint32_t*>(&r8_50) & 0xc0) 
                    goto addr_140004ee6_75;
                if (reinterpret_cast<signed char>(r13_57) < reinterpret_cast<signed char>(0xffffffffffff8000)) 
                    goto addr_140005054_56;
                if (reinterpret_cast<signed char>(r13_57) > reinterpret_cast<signed char>(0xffff)) 
                    goto addr_140005054_56;
                addr_140004ee6_75:
                ++rbx47;
                rsp63 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                *rsp63 = 0x140004ef2;
                fun_140004bd0(r14_53);
                rsp29 = reinterpret_cast<struct s20*>(rsp63 + 1);
                *reinterpret_cast<void***>(r14_53) = r13_57;
                if (reinterpret_cast<uint64_t>(rbx47) < reinterpret_cast<uint64_t>(rdi27)) 
                    goto addr_140004e73_50; else 
                    goto addr_140004eff_78;
                ++rbx47;
            } while (reinterpret_cast<uint64_t>(rbx47) < reinterpret_cast<uint64_t>(rdi27));
        }
    }
    addr_140004f00_80:
    edx64 = g14000f0a4;
    if (!(reinterpret_cast<uint1_t>(edx64 < 0) | reinterpret_cast<uint1_t>(edx64 == 0))) {
        rdi65 = VirtualProtect;
        *reinterpret_cast<int32_t*>(&rbx66) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx66) + 4) = 0;
        do {
            rax67 = g14000f0a8;
            rax68 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(rax67) + reinterpret_cast<uint64_t>(rbx66));
            if (rax68->f0) {
                rdx69 = rax68->f10;
                rcx70 = rax68->f8;
                rsp71 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                *rsp71 = 0x140004f3f;
                rdi65(rcx70, rdx69);
                rsp29 = reinterpret_cast<struct s20*>(rsp71 + 1);
            }
            *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(&rsi25) + 1;
            rbx66 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx66) + 40);
            less72 = *reinterpret_cast<int32_t*>(&rsi25) < g14000f0a4;
        } while (less72);
        goto addr_140004d5f_19;
    }
    addr_1400050bc_47:
    goto rsp40->f58;
    addr_140005054_56:
    rsp29->f20 = r13_57;
    r8_6 = r14_53;
    rsp73 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
    *rsp73 = 0x140005068;
    fun_140004b60("%d bit pseudo relocation at %p out of range, targeting %p, yielding the value %p.\n", rdx38, r8_6, r9_7);
    rsp29 = reinterpret_cast<struct s20*>(rsp73 + 1);
    goto addr_140005068_33;
    addr_140005048_60:
    rsp74 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
    *rsp74 = 0x140005054;
    fun_140004b60("  Unknown pseudo relocation bit size %d.\n", rdx38, r8_50, r9_7);
    rsp29 = reinterpret_cast<struct s20*>(rsp74 + 1);
    goto addr_140005054_56;
    addr_140004eff_78:
    goto addr_140004f00_80;
    addr_140004f6e_25:
    ++rbx28;
    goto addr_140004dd5_26;
    addr_140004ddf_27:
    eax31 = rbx28->f4;
    goto addr_140004de2_28;
    addr_140004d07_5:
    rax75 = g14000f0a8;
    *reinterpret_cast<int32_t*>(&rdx76) = rax8->f8;
    *reinterpret_cast<int32_t*>(&rdx76 + 4) = 0;
    r8_6 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax75) + reinterpret_cast<uint64_t>(rbx3) + 24);
    fun_140004b60("  VirtualQuery failed for %d bytes at address %p", rdx76, r8_6, r9_7);
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    goto addr_140004d22_17;
    addr_140004c9e_7:
    tmp32_77 = g14000f0a4 + 1;
    g14000f0a4 = tmp32_77;
    addr_140004ca5_16:
    return;
}

int64_t signal = 0x105b4;

int64_t fun_14000aee8(int64_t rcx, ...) {
    goto signal;
}

int64_t free = 0x10576;

void fun_14000aeb8(void** rcx, void** rdx) {
    goto free;
}

int64_t EnterCriticalSection = 0x10364;

void** g14000f0e0;

int64_t TlsGetValue = 0x10410;

int64_t LeaveCriticalSection = 0x103bc;

void fun_1400052a0() {
    void** rbx1;
    int64_t rdi2;
    int64_t rsi3;
    int64_t rcx4;
    int64_t rax5;
    int32_t eax6;
    void** rax7;

    EnterCriticalSection(0x14000f100);
    rbx1 = g14000f0e0;
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

int64_t strncmp = 0x105d4;

int32_t fun_14000af00(int64_t rcx, int64_t rdx, int64_t r8) {
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

void** fun_140007fc0(struct s28* rcx, void*** rdx, int32_t r8d);

void** fun_140009b80(void** ecx, ...);

struct s29 {
    void** f0;
    signed char[19] pad20;
    int32_t f14;
};

void* fun_140009a00(void** rcx);

void fun_140009900(void** rcx, void* edx);

void fun_140009c80(void** rcx, ...);

uint32_t fun_14000a500(void** rcx, uint32_t* rdx);

void** fun_140007f80(uint32_t ecx);

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

void** fun_140009da0(void** ecx, ...);

void** fun_140009fc0(void** rcx, uint32_t edx, ...);

void** fun_140009e60(void** rcx, void** rdx);

void** fun_14000a1d0(void** rcx, uint32_t edx, ...);

uint32_t fun_14000a2e0(void** rcx, void** rdx, ...);

void** fun_140009cf0(void** rcx, uint32_t edx, uint32_t r8d);

int64_t fun_140008060(void** rcx, void** rdx, ...);

void** fun_14000a330(void** rcx, void** rdx, void** r8);

struct s33 {
    int32_t f0;
    void** f4;
};

uint64_t g14000c910 = 0x14000c6c0;

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

void** fun_1400081d0(struct s25* rcx, uint32_t edx, void*** r8, uint32_t* r9) {
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
                addr_140008261_5:
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
                addr_1400084d0_8:
                *v15 = 1;
                rax26 = fun_140007fc0("0", v17, 1);
                r15_25 = rax26;
                goto addr_140008261_5;
            } else {
                *reinterpret_cast<int32_t*>(&r15_25) = 0;
                *reinterpret_cast<int32_t*>(&r15_25 + 4) = 0;
                if (eax19 - 1 > 1) 
                    goto addr_140008261_5;
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
                rax30 = fun_140009b80(ecx29);
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
                        goto addr_14000836a_18;
                    rax40 = reinterpret_cast<struct s29*>(reinterpret_cast<uint64_t>(rax40) - 4);
                } while (*reinterpret_cast<void***>(&rbp39));
                goto addr_140008528_20;
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
    rax46 = fun_140009b80(ebx44);
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
    addr_14000836a_18:
    *reinterpret_cast<void***>(r13_32 + 20) = edx41;
    __asm__("bsr eax, [r13+rbp*4+0x18]");
    *reinterpret_cast<void***>(&rbp39) = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(edx41) << 5) - (*reinterpret_cast<uint32_t*>(&rax40) ^ 31));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = 0;
    addr_140008381_32:
    eax52 = fun_140009a00(r13_32);
    rsp53 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp31) - 8 + 8);
    v54 = v11;
    if (eax52) {
        fun_140009900(r13_32, eax52);
        rsp53 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp53) - 8 + 8);
        v54 = v11 + reinterpret_cast<uint32_t>(eax52);
        *reinterpret_cast<void***>(&rbp39) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp39)) - reinterpret_cast<uint32_t>(eax52));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = 0;
    }
    if (!*reinterpret_cast<void***>(r13_32 + 20)) {
        fun_140009c80(r13_32, r13_32);
        goto addr_1400084d0_8;
    } else {
        eax55 = fun_14000a500(r13_32, reinterpret_cast<int64_t>(rsp53) + 0x9c);
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
        __asm__("mulsd xmm1, [rip+0x4233]");
        rax62 = rax59 | rcx61 << 32;
        r10d63 = -*reinterpret_cast<uint32_t*>(&rdx60);
        __asm__("movd xmm0, rax");
        __asm__("subsd xmm0, [rip+0x41fe]");
        __asm__("mulsd xmm0, [rip+0x41fe]");
        if (__intrinsic()) {
            r10d63 = *reinterpret_cast<uint32_t*>(&rdx60);
        }
        __asm__("addsd xmm0, [rip+0x41fa]");
        r10d64 = r10d63 - 0x435;
        __asm__("addsd xmm0, xmm1");
        zf65 = reinterpret_cast<uint1_t>(r10d64 == 0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r10d64) < reinterpret_cast<int32_t>(0)) | zf65)) {
            __asm__("pxor xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r10d");
            __asm__("mulsd xmm1, [rip+0x41e9]");
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
            goto addr_140008490_43;
    }
    v75 = 1;
    addr_140008568_45:
    v76 = 0;
    if (reinterpret_cast<int32_t>(r10d73) < reinterpret_cast<int32_t>(0)) {
        addr_140008b70_46:
        r10d73 = 0;
        *reinterpret_cast<uint32_t*>(&rdx60) = 1 - reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax72));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx60) + 4) = 0;
        v76 = *reinterpret_cast<uint32_t*>(&rdx60);
        goto addr_140008579_47;
    } else {
        addr_140008579_47:
        if (reinterpret_cast<int32_t>(r11d66) >= reinterpret_cast<int32_t>(0)) {
            addr_140008811_48:
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
        goto addr_140008838_52;
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
        goto addr_1400085cd_57;
    eax80 = v12 + v77;
    v81 = eax80;
    eax82 = eax80 + 1;
    v83 = eax82;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax82) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax82 == 0)) {
        v84 = 0;
    } else {
        rax85 = fun_140007f80(v83);
        v84 = 0;
        r11d86 = r11d66;
        r10d87 = r10d73;
        r15_25 = rax85;
        goto addr_140008638_61;
    }
    addr_140009336_62:
    ecx88 = 1;
    addr_140008c49_63:
    rax85 = fun_140007f80(ecx88);
    r11d86 = r11d66;
    r10d87 = r10d73;
    r15_25 = rax85;
    if (reinterpret_cast<int32_t>(v7) > reinterpret_cast<int32_t>(1)) {
        addr_140008638_61:
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
                goto addr_140008ce8_67;
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
        addr_140008ce8_67:
        *reinterpret_cast<uint32_t*>(&rsi94) = v54;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi94) + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&rsi94) < reinterpret_cast<int32_t>(0) || reinterpret_cast<int32_t>(rbx9->f14) < reinterpret_cast<int32_t>(v77)) {
            if (v84) {
                addr_1400088b1_72:
                *reinterpret_cast<uint32_t*>(&r12_95) = *reinterpret_cast<int32_t*>(&r12_27) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp39));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_95) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx60) = rbx9->f4;
                eax96 = static_cast<uint32_t>(r12_95 + 1);
                if (reinterpret_cast<int32_t>(v54 - *reinterpret_cast<uint32_t*>(&r12_95)) >= *reinterpret_cast<int32_t*>(&rdx60)) {
                    if (reinterpret_cast<int32_t>(v7) <= reinterpret_cast<int32_t>(1)) {
                        addr_14000890d_74:
                        r10d87 = r10d87 + eax96;
                        esi97 = v78;
                        *reinterpret_cast<uint32_t*>(&rdi98) = v76;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
                        v76 = eax96 + v76;
                    } else {
                        addr_1400091cb_75:
                        eax99 = v83 - 1;
                        if (reinterpret_cast<int32_t>(v78) < reinterpret_cast<int32_t>(eax99)) {
                            *reinterpret_cast<uint32_t*>(&rdx60) = eax99 - v78;
                            esi97 = 0;
                            v78 = eax99;
                            r11d86 = r11d86 + *reinterpret_cast<uint32_t*>(&rdx60);
                            goto addr_1400091e0_77;
                        } else {
                            esi97 = v78 - eax99;
                            goto addr_1400091e0_77;
                        }
                    }
                } else {
                    addr_1400088d2_79:
                    *reinterpret_cast<uint32_t*>(&rsi100) = v7;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi100) + 4) = 0;
                    if (static_cast<uint32_t>(rsi100 - 3) & 0xfffffffd) {
                        eax96 = v54 - *reinterpret_cast<uint32_t*>(&rdx60) + 1;
                        if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi100) > reinterpret_cast<int32_t>(1))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v83) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v83 == 0)))))) 
                            goto addr_14000890d_74;
                        if (reinterpret_cast<int32_t>(eax96) > reinterpret_cast<int32_t>(v83)) 
                            goto addr_1400091cb_75; else 
                            goto addr_14000890d_74;
                    }
                }
            } else {
                esi97 = v78;
                *reinterpret_cast<uint32_t*>(&rdi98) = v76;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
                *reinterpret_cast<int32_t*>(&r12_101) = 0;
                *reinterpret_cast<int32_t*>(&r12_101 + 4) = 0;
                goto addr_14000894f_83;
            }
        } else {
            rax102 = reinterpret_cast<int32_t>(v77);
            rbx103 = rax102;
            *reinterpret_cast<void***>(rdi71) = rsi94->f0;
            rdi104 = rdi71 + 4;
            rsi105 = reinterpret_cast<struct s32*>(&rsi94->f4);
            if (reinterpret_cast<int32_t>(v12) >= reinterpret_cast<int32_t>(0)) 
                goto addr_140009228_88;
            *reinterpret_cast<uint32_t*>(&rax102) = v83;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax102) + 4) = 0;
            zf106 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax102) == 0);
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax102) < reinterpret_cast<int32_t>(0)) | zf106)) 
                goto addr_140009228_88; else 
                goto addr_140008d2c_90;
        }
    } else {
        v107 = 0;
        *reinterpret_cast<void***>(rdi71) = rsi91->f0;
        rdi71 = rdi71 + 4;
        rsi108 = &rsi91->f4;
        zf109 = reinterpret_cast<uint1_t>(v75 == 0);
        if (zf109) 
            goto addr_1400086b8_95; else 
            goto addr_1400086a6_96;
    }
    addr_140008920_97:
    rax110 = fun_140009da0(1);
    v84 = 1;
    r11d86 = r11d86;
    r10d87 = r10d87;
    r12_101 = rax110;
    addr_14000894f_83:
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
            rax112 = fun_140009fc0(r13_32, *reinterpret_cast<uint32_t*>(&rdx60));
            r10d87 = r10d87;
            r11d86 = r11d86;
            r13_32 = rax112;
        } else {
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi97) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi97 == 0))) {
                rax113 = fun_140009fc0(r12_101, esi97);
                r12_101 = rax113;
                rax114 = fun_140009e60(rax113, r13_32);
                fun_140009c80(r13_32, r13_32);
                r13_32 = rax114;
                r10d87 = r10d87;
                r11d86 = r11d86;
            }
            *reinterpret_cast<uint32_t*>(&rdx60) = v78 - esi97;
            if (*reinterpret_cast<uint32_t*>(&rdx60)) {
                rax115 = fun_140009fc0(r13_32, *reinterpret_cast<uint32_t*>(&rdx60), r13_32, *reinterpret_cast<uint32_t*>(&rdx60));
                r11d86 = r11d86;
                r10d87 = r10d87;
                r13_32 = rax115;
            }
        }
    }
    rax116 = fun_140009da0(1, 1);
    r11d117 = r11d86;
    r10d118 = r10d87;
    *reinterpret_cast<unsigned char*>(&rdx60) = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rbp39) == 1);
    rsi119 = rax116;
    *reinterpret_cast<unsigned char*>(&rax116) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v7) <= reinterpret_cast<int32_t>(1));
    edx120 = *reinterpret_cast<uint32_t*>(&rdx60) & *reinterpret_cast<uint32_t*>(&rax116);
    ebp121 = edx120;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r11d117) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(r11d117 == 0))) {
        rax122 = fun_140009fc0(rsi119, r11d117, rsi119, r11d117);
        r11d117 = r11d86;
        r10d118 = r10d87;
        rsi119 = rax122;
        if (*reinterpret_cast<unsigned char*>(&ebp121)) {
            if (reinterpret_cast<int32_t>(v11) > reinterpret_cast<int32_t>(rbx9->f4 + 1)) {
                addr_14000966b_111:
                ++v76;
                ++r10d118;
                v123 = 1;
            } else {
                goto addr_140008ff9_113;
            }
        } else {
            addr_140008ff9_113:
            v123 = 0;
            goto addr_140009001_114;
        }
    } else {
        v123 = 0;
        if (!*reinterpret_cast<signed char*>(&edx120)) 
            goto addr_140008a2b_116;
        if (reinterpret_cast<int32_t>(rbx9->f4 + 1) < reinterpret_cast<int32_t>(v11)) 
            goto addr_14000966b_111;
    }
    addr_140008a2b_116:
    *reinterpret_cast<uint32_t*>(&rbx9) = 31;
    if (r11d117) {
        addr_140009001_114:
        __asm__("bsr ebx, [rsi+rax*4+0x18]");
        *reinterpret_cast<uint32_t*>(&rbx9) = *reinterpret_cast<uint32_t*>(&rbx9) ^ 31;
        goto addr_140008a39_118;
    } else {
        addr_140008a39_118:
        *reinterpret_cast<uint32_t*>(&rbx124) = *reinterpret_cast<uint32_t*>(&rbx9) - r10d118 - 4 & 31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx124) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r8_125) = v76 + *reinterpret_cast<uint32_t*>(&rbx124);
        *reinterpret_cast<int32_t*>(&r8_125 + 4) = 0;
        edx126 = *reinterpret_cast<uint32_t*>(&rbx124);
        if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r8_125) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r8_125) == 0))) {
            rax127 = fun_14000a1d0(r13_32, *reinterpret_cast<uint32_t*>(&r8_125));
            edx126 = *reinterpret_cast<uint32_t*>(&rbx124);
            r10d118 = r10d118;
            r13_32 = rax127;
        }
    }
    edx128 = edx126 + r10d118;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx128) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx128 == 0))) {
        rax129 = fun_14000a1d0(rsi119, edx128);
        rsi119 = rax129;
    }
    *reinterpret_cast<unsigned char*>(&ebp121) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v7) > reinterpret_cast<int32_t>(2));
    if (v75 && (eax130 = fun_14000a2e0(r13_32, rsi119), reinterpret_cast<int32_t>(eax130) < reinterpret_cast<int32_t>(0))) {
        rax131 = fun_140009cf0(r13_32, 10, 0);
        r13_32 = rax131;
        eax132 = v81;
        *reinterpret_cast<unsigned char*>(&eax132) = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax132) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax132 == 0));
        ebp133 = ebp121 & eax132;
        if (v84) {
            *reinterpret_cast<uint32_t*>(&r8_125) = 0;
            *reinterpret_cast<int32_t*>(&r8_125 + 4) = 0;
            rax134 = fun_140009cf0(r12_101, 10, 0);
            r12_101 = rax134;
            if (!*reinterpret_cast<signed char*>(&ebp133)) {
                v135 = v77;
                v83 = v81;
                goto addr_140008d77_126;
            }
        } else {
            if (!*reinterpret_cast<signed char*>(&ebp133)) {
                v135 = v77;
                v83 = v81;
                goto addr_140009100_129;
            }
        }
        --v77;
        v83 = v81;
        goto addr_140008ab3_131;
    }
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v83) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v83 == 0)) || !*reinterpret_cast<unsigned char*>(&ebp121)) {
        v135 = v77 + 1;
        if (!v84) {
            addr_140009100_129:
            ebx136 = v83;
            rdi71 = r15_25;
            eax137 = 1;
        } else {
            addr_140008d77_126:
            edx138 = static_cast<uint32_t>(rbx124 + rdi98);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx138) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx138 == 0))) {
                rax139 = fun_14000a1d0(r12_101, edx138);
                r12_101 = rax139;
                goto addr_140008d89_135;
            }
        }
    } else {
        addr_140008ab3_131:
        if (v83 || (rax140 = fun_140009cf0(rsi119, 5, 0), rsi119 = rax140, eax141 = fun_14000a2e0(r13_32, rax140), reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax141) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax141 == 0))) {
            addr_140008fa2_136:
            rdi71 = r15_25;
            v135 = -v12;
            fun_140009c80(rsi119, rsi119);
            v24 = 16;
            rax142 = r15_25;
            if (r12_101) {
                addr_140008f5d_137:
                fun_140009c80(r12_101, r12_101);
                goto addr_140008b18_138;
            } else {
                addr_140008fc7_139:
                rdi71 = r15_25;
                r15_25 = rax142;
                goto addr_140008b37_140;
            }
        } else {
            v135 = v77 + 2;
            goto addr_140008af0_142;
        }
    }
    while (++rdi71, rax143 = fun_140008060(r13_32, rsi119), eax144 = *reinterpret_cast<int32_t*>(&rax143) + 48, *reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&eax144), reinterpret_cast<int32_t>(eax137) < reinterpret_cast<int32_t>(ebx136)) {
        rax145 = fun_140009cf0(r13_32, 10, 0);
        r13_32 = rax145;
        ++eax137;
    }
    v146 = eax144;
    *reinterpret_cast<int32_t*>(&r8_147) = 0;
    *reinterpret_cast<int32_t*>(&r8_147 + 4) = 0;
    addr_140009159_146:
    if (!v89) {
        rax148 = fun_14000a1d0(r13_32, 1);
        r13_32 = rax148;
        eax149 = fun_14000a2e0(rax148, rsi119);
        r8_147 = r8_147;
        zf150 = reinterpret_cast<uint1_t>(eax149 == 0);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax149) < reinterpret_cast<int32_t>(0)) | zf150) || zf150 && *reinterpret_cast<unsigned char*>(&v146) & 1) {
            addr_140009183_148:
            edx151 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff));
        } else {
            addr_1400093dd_149:
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_32 + 20)) <= reinterpret_cast<signed char>(1)) {
                eax152 = 16;
                if (!*reinterpret_cast<void***>(r13_32 + 24)) {
                    eax152 = v24;
                }
                v24 = eax152;
                goto addr_140008f30_153;
            } else {
                v24 = 16;
                goto addr_140008f30_153;
            }
        }
    } else {
        if (v89 == 2) 
            goto addr_1400093dd_149;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_32 + 20)) > reinterpret_cast<signed char>(1)) 
            goto addr_140009183_148;
        if (!*reinterpret_cast<void***>(r13_32 + 24)) 
            goto addr_140008f30_153; else 
            goto addr_140009183_148;
    }
    addr_1400091a0_158:
    while (rax153 = rdi71 + 0xffffffffffffffff, *reinterpret_cast<signed char*>(&edx151) == 57) {
        if (rax153 == r15_25) 
            goto addr_140009369_160;
        edx151 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax153 + 0xffffffffffffffff));
        rdi71 = rax153;
    }
    edx154 = edx151 + 1;
    v24 = 32;
    *reinterpret_cast<void***>(rax153) = *reinterpret_cast<void***>(&edx154);
    addr_140008f30_153:
    fun_140009c80(rsi119, rsi119);
    if (!r12_101) {
        addr_140008b18_138:
        if (reinterpret_cast<unsigned char>(rdi71) > reinterpret_cast<unsigned char>(r15_25)) {
            do {
                if (*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff) != 48) 
                    break;
                --rdi71;
            } while (rdi71 != r15_25);
        } else {
            rax142 = r15_25;
            r15_25 = rdi71;
            goto addr_140008fc7_139;
        }
    } else {
        if (r8_147 && r8_147 != r12_101) {
            fun_140009c80(r8_147, r8_147);
            goto addr_140008f5d_137;
        }
    }
    addr_140008b37_140:
    fun_140009c80(r13_32, r13_32);
    *reinterpret_cast<void***>(rdi71) = reinterpret_cast<void**>(0);
    *v15 = v135;
    if (v17) {
        *v17 = rdi71;
    }
    *r14_10 = *r14_10 | v24;
    goto addr_140008261_5;
    addr_140009369_160:
    ++v135;
    *reinterpret_cast<void***>(r15_25) = reinterpret_cast<void**>(49);
    v24 = 32;
    goto addr_140008f30_153;
    addr_140008d89_135:
    rbp155 = r12_101;
    if (v123) {
        ecx156 = *reinterpret_cast<void***>(r12_101 + 8);
        rax157 = fun_140009b80(ecx156);
        r8_125 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_101 + 20)) * 4 + 8);
        fun_14000aed8(rax157 + 16, r12_101 + 16, r8_125);
        rax158 = fun_14000a1d0(rax157, 1, rax157, 1);
        rbp155 = rax158;
    }
    v159 = r14_10;
    eax160 = 1;
    r14_161 = rbp155;
    rbp162 = r15_25;
    v163 = r15_25;
    while (1) {
        rax164 = fun_140008060(r13_32, rsi119, r13_32, rsi119);
        *reinterpret_cast<int32_t*>(&rdi165) = *reinterpret_cast<int32_t*>(&rax164);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi165) + 4) = 0;
        r15d166 = static_cast<int32_t>(rax164 + 48);
        eax167 = fun_14000a2e0(r13_32, r12_101, r13_32, r12_101);
        rax168 = fun_14000a330(rsi119, r14_161, r8_125);
        if (*reinterpret_cast<void***>(rax168 + 16)) {
            fun_140009c80(rax168, rax168);
            edx169 = 1;
        } else {
            eax170 = fun_14000a2e0(r13_32, rax168, r13_32, rax168);
            fun_140009c80(rax168, rax168);
            edx169 = eax170 | v7;
            if (edx169) {
                edx169 = eax170;
            } else {
                eax171 = *v14;
                if (!(reinterpret_cast<unsigned char>(eax171) & 1 | v89)) 
                    goto addr_140008edc_178;
            }
        }
        if (reinterpret_cast<int32_t>(eax167) < reinterpret_cast<int32_t>(0)) 
            break;
        if (eax167 | v7) 
            goto addr_140008de1_181;
        if (!(reinterpret_cast<unsigned char>(*v14) & 1)) 
            break;
        addr_140008de1_181:
        rbx172 = rbp162 + 1;
        rdi71 = rbx172;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx169) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx169 == 0)) 
            goto addr_140008df7_183;
        if (v89 != 2) 
            goto addr_140009693_185;
        addr_140008df7_183:
        *reinterpret_cast<void***>(rbx172 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&r15d166);
        if (eax160 == v83) 
            goto addr_1400096d8_186;
        rax173 = fun_140009cf0(r13_32, 10, 0);
        *reinterpret_cast<uint32_t*>(&r8_125) = 0;
        *reinterpret_cast<int32_t*>(&r8_125 + 4) = 0;
        r13_32 = rax173;
        if (r12_101 == r14_161) {
            rax174 = fun_140009cf0(r12_101, 10, 0);
            r12_101 = rax174;
            r14_161 = rax174;
        } else {
            rax175 = fun_140009cf0(r12_101, 10, 0);
            *reinterpret_cast<uint32_t*>(&r8_125) = 0;
            *reinterpret_cast<int32_t*>(&r8_125 + 4) = 0;
            r12_101 = rax175;
            rax176 = fun_140009cf0(r14_161, 10, 0);
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
            addr_140009758_193:
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
                addr_140009763_197:
                r8_147 = r12_101;
                v24 = 16;
                r12_101 = rbp179;
                rbx172 = v178 + 1;
            }
        } else {
            addr_14000971f_198:
            rax180 = fun_14000a1d0(r13_32, 1, r13_32, 1);
            r13_32 = rax180;
            eax181 = fun_14000a2e0(rax180, rsi119, rax180, rsi119);
            zf182 = reinterpret_cast<uint1_t>(eax181 == 0);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax181) < reinterpret_cast<int32_t>(0)) | zf182) || zf182 && *reinterpret_cast<unsigned char*>(&v177) & 1) {
                if (v177 == 57) {
                    addr_14000977f_200:
                    rbx172 = v178 + 1;
                    goto addr_140009788_201;
                } else {
                    v89 = 32;
                    v177 = static_cast<int32_t>(rdi165 + 49);
                    goto addr_140009758_193;
                }
            } else {
                v89 = 32;
                goto addr_140009758_193;
            }
        }
    } else {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_32 + 20)) > reinterpret_cast<signed char>(1) || *reinterpret_cast<void***>(r13_32 + 24)) {
            if (v89 == 2) 
                goto addr_140009763_197;
            v183 = r14_10;
            ebx184 = v177;
            r14_185 = rbp179;
            rbp186 = rsi119;
            v187 = r15_25;
            rsi188 = v178;
            while (r15_189 = rsi188 + 1, eax190 = fun_14000a2e0(rbp186, r14_185, rbp186, r14_185), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax190) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax190 == 0))) {
                *reinterpret_cast<void***>(r15_189 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&ebx184);
                rsi188 = r15_189;
                rax191 = fun_140009cf0(r14_185, 10, 0);
                if (r12_101 == r14_185) {
                    r12_101 = rax191;
                }
                rax192 = fun_140009cf0(r13_32, 10, 0);
                r14_185 = rax191;
                r13_32 = rax192;
                rax193 = fun_140008060(rax192, rbp186);
                ebx184 = static_cast<int32_t>(rax193 + 48);
            }
            v178 = rsi188;
            rbx172 = r15_189;
            rsi119 = rbp186;
            r15_25 = v187;
            rbp179 = r14_185;
            r14_10 = v183;
            if (ebx184 == 57) 
                goto addr_140009788_201; else 
                goto addr_1400094cb_212;
        } else {
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx169) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx169 == 0))) 
                goto addr_14000971f_198;
            r8_147 = r12_101;
            r12_101 = rbp179;
            rbx172 = v178 + 1;
        }
    }
    addr_1400094e0_215:
    rdi71 = rbx172;
    ebx194 = *reinterpret_cast<unsigned char*>(&v177);
    *reinterpret_cast<void***>(v178) = *reinterpret_cast<void***>(&ebx194);
    goto addr_140008f30_153;
    addr_1400094cb_212:
    v24 = 32;
    r8_147 = r12_101;
    r12_101 = rbp179;
    v177 = ebx184 + 1;
    goto addr_1400094e0_215;
    addr_140009693_185:
    v195 = r15d166;
    r15_25 = v163;
    v178 = rbp162;
    rbp179 = r14_161;
    r14_10 = v159;
    if (r15d166 == 57) {
        addr_140009788_201:
        r8_147 = r12_101;
        rdi71 = rbx172;
        r12_101 = rbp179;
        edx151 = 57;
        *reinterpret_cast<void***>(v178) = reinterpret_cast<void**>(57);
        goto addr_1400091a0_158;
    } else {
        r8_147 = r12_101;
        v24 = 32;
        r12_101 = rbp179;
        eax196 = *reinterpret_cast<unsigned char*>(&v195) + 1;
        *reinterpret_cast<void***>(v178) = *reinterpret_cast<void***>(&eax196);
        goto addr_140008f30_153;
    }
    addr_1400096d8_186:
    v146 = r15d166;
    r8_147 = r12_101;
    r15_25 = v163;
    r14_10 = v159;
    r12_101 = r14_161;
    goto addr_140009159_146;
    addr_140008edc_178:
    v197 = r15d166;
    r15_25 = v163;
    v178 = rbp162;
    rbp179 = r14_161;
    r14_10 = v159;
    if (r15d166 == 57) 
        goto addr_14000977f_200;
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
    goto addr_140008f30_153;
    addr_140008af0_142:
    *reinterpret_cast<void***>(r15_25) = reinterpret_cast<void**>(49);
    rdi71 = r15_25 + 1;
    fun_140009c80(rsi119, rsi119);
    v24 = 32;
    if (!r12_101) {
        goto addr_140008b18_138;
    }
    addr_1400091e0_77:
    if (reinterpret_cast<int32_t>(v83) < reinterpret_cast<int32_t>(0)) {
        *reinterpret_cast<uint32_t*>(&rdi98) = v76 - v83;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
        goto addr_140008920_97;
    } else {
        r10d87 = r10d87 + v83;
        *reinterpret_cast<uint32_t*>(&rdi98) = v76;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
        v76 = v83 + v76;
        goto addr_140008920_97;
    }
    addr_140009228_88:
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
        goto addr_140009279_228;
    if (!ebx202) 
        goto addr_140008b18_138;
    addr_140009279_228:
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
    goto addr_140008b18_138;
    zf205 = reinterpret_cast<uint1_t>(v89 == 0);
    if (zf205) {
        __asm__("addsd xmm0, xmm0");
        __asm__("comisd xmm0, xmm2");
        if (reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf205))) {
            __asm__("ucomisd xmm0, xmm2");
            v24 = 16;
            if (__intrinsic()) 
                goto addr_140008b18_138;
            if (!zf205) 
                goto addr_140008b18_138;
            if (!(*reinterpret_cast<unsigned char*>(&rax102) & 1)) 
                goto addr_140008b18_138;
        }
    } else {
        v24 = 16;
        if (v89 != 1) 
            goto addr_140008b18_138;
    }
    *reinterpret_cast<uint32_t*>(&rax206) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff));
    *reinterpret_cast<uint32_t*>(&r9_207) = v77;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_207) + 4) = 0;
    goto addr_1400087d0_243;
    addr_140008d2c_90:
    if (!zf106 || 1) {
        addr_140008f9d_244:
        *reinterpret_cast<int32_t*>(&rsi119) = 0;
        *reinterpret_cast<int32_t*>(&rsi119 + 4) = 0;
        *reinterpret_cast<int32_t*>(&r12_101) = 0;
        *reinterpret_cast<int32_t*>(&r12_101 + 4) = 0;
        goto addr_140008fa2_136;
    } else {
        *reinterpret_cast<int32_t*>(&rsi119) = 0;
        *reinterpret_cast<int32_t*>(&rsi119 + 4) = 0;
        *reinterpret_cast<int32_t*>(&r12_101) = 0;
        *reinterpret_cast<int32_t*>(&r12_101 + 4) = 0;
        v135 = *reinterpret_cast<int32_t*>(&rbx103) + 2;
        goto addr_140008af0_142;
    }
    addr_1400086b8_95:
    __asm__("movapd xmm1, xmm0");
    __asm__("addsd xmm1, xmm0");
    __asm__("addsd xmm1, [rip+0x3f90]");
    __asm__("movd rdx, xmm1");
    __asm__("movd rax, xmm1");
    *reinterpret_cast<uint32_t*>(&rdx60) = v83;
    zf208 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx60) == 0);
    below_or_equal209 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf208));
    if (zf208) {
        addr_140008cb0_246:
        __asm__("subsd xmm0, [rip+0x39a8]");
        __asm__("movd xmm1, rax");
        __asm__("comisd xmm0, xmm1");
        if (!below_or_equal209) {
            v135 = 2;
            *reinterpret_cast<int32_t*>(&rsi119) = 0;
            *reinterpret_cast<int32_t*>(&rsi119 + 4) = 0;
            *reinterpret_cast<int32_t*>(&r12_101) = 0;
            *reinterpret_cast<int32_t*>(&r12_101 + 4) = 0;
            goto addr_140008af0_142;
        } else {
            __asm__("xorpd xmm1, [rip+0x39a1]");
            __asm__("comisd xmm1, xmm0");
            if (!below_or_equal209) 
                goto addr_140008f9d_244; else 
                goto addr_140008cd9_249;
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rsi210) = v83;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi210) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r9_207) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_207) + 4) = 0;
    }
    addr_1400086f8_251:
    rdx60 = g14000c910;
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
            goto addr_140009559_264;
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
            goto addr_1400097bb_269; else 
            goto addr_14000874e_270;
    }
    addr_14000955d_271:
    *reinterpret_cast<void***>(rdi215) = rsi216->f0;
    rdi71 = rdi215 + 4;
    __asm__("movapd xmm2, xmm4");
    __asm__("addsd xmm2, xmm0");
    __asm__("comisd xmm1, xmm2");
    if (!below_or_equal220) {
        addr_1400087d0_243:
        while (rdx225 = rdi71 + 0xffffffffffffffff, *reinterpret_cast<void***>(&rax206) == 57) {
            if (rdx225 == r15_25) 
                goto addr_14000970a_276;
            *reinterpret_cast<uint32_t*>(&rax206) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx225 + 0xffffffffffffffff));
            rdi71 = rdx225;
        }
    } else {
        __asm__("subsd xmm0, xmm4");
        __asm__("comisd xmm0, xmm1");
        if (below_or_equal220) {
            addr_140008cd9_249:
            v89 = 0;
            goto addr_140008ce8_67;
        } else {
            __asm__("ucomisd xmm1, xmm6");
            goto addr_140009589_280;
        }
    }
    addr_1400087d8_281:
    eax226 = *reinterpret_cast<uint32_t*>(&rax206) + 1;
    v24 = 32;
    *reinterpret_cast<void***>(rdx225) = *reinterpret_cast<void***>(&eax226);
    v135 = static_cast<uint32_t>(r9_207 + 1);
    goto addr_140008b18_138;
    addr_14000970a_276:
    *reinterpret_cast<void***>(r15_25) = reinterpret_cast<void**>(48);
    *reinterpret_cast<uint32_t*>(&r9_207) = *reinterpret_cast<uint32_t*>(&r9_207) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_207) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax206) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff));
    goto addr_1400087d8_281;
    addr_140009589_280:
    eax227 = pf218;
    if (!zf219) {
        eax227 = 1;
    }
    v24 = eax227 << 4;
    v135 = static_cast<uint32_t>(r9_207 + 1);
    goto addr_140008b18_138;
    addr_140009559_264:
    __asm__("movapd xmm1, xmm0");
    goto addr_14000955d_271;
    addr_1400097bb_269:
    __asm__("ucomisd xmm0, xmm6");
    goto addr_140009589_280;
    addr_14000874e_270:
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
            goto addr_140008cd9_249;
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
    goto addr_1400097bb_269;
    *reinterpret_cast<uint32_t*>(&rax206) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff));
    goto addr_1400087d0_243;
    addr_1400086a6_96:
    *reinterpret_cast<void***>(rdi71) = *rsi108;
    rdi71 = rdi71 + 4;
    rsi234 = reinterpret_cast<void*>(rsi108 + 4);
    __asm__("comisd xmm4, xmm0");
    if (reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf109))) 
        goto addr_1400086b8_95;
    if (!*reinterpret_cast<int32_t*>(&rsi234)) {
        __asm__("movapd xmm1, xmm0");
        __asm__("addsd xmm1, xmm0");
        __asm__("addsd xmm1, [rip+0x39c5]");
        __asm__("movd rdx, xmm1");
        __asm__("movd rax, xmm1");
        rdx235 = rdx60 >> 32;
        *reinterpret_cast<uint32_t*>(&rax236) = eax93;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax236) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx237) = *reinterpret_cast<int32_t*>(&rdx235) - 0x3400000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx237) + 4) = 0;
        rdx60 = rdx237 << 32;
        below_or_equal209 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>((rax236 | rdx60) == 0)));
        goto addr_140008cb0_246;
    } else {
        *reinterpret_cast<uint32_t*>(&rsi238) = v81;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi238) + 4) = 0;
        if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi238) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi238) == 0)) 
            goto addr_140008cd9_249;
        __asm__("mulsd xmm0, [rip+0x3066]");
        *reinterpret_cast<void***>(rdi71) = rsi238->f0;
        rsi210 = reinterpret_cast<struct s33*>(&rsi238->f4);
        *reinterpret_cast<uint32_t*>(&r9_207) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_207) + 4) = 0;
        __asm__("mulsd xmm1, xmm0");
        __asm__("addsd xmm1, [rip+0x305c]");
        __asm__("movd rdx, xmm1");
        __asm__("movd rax, xmm1");
        goto addr_1400086f8_251;
    }
    addr_1400085cd_57:
    if (reinterpret_cast<int32_t>(v7) <= reinterpret_cast<int32_t>(3)) {
        if (v7 != 2) {
            addr_140008838_52:
            __asm__("pxor xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, r12d");
            __asm__("mulsd xmm0, [rip+0x3dea]");
            __asm__("cvttsd2si ecx, xmm0");
            rax239 = fun_140007f80(*reinterpret_cast<int32_t*>(&rcx70) + 3);
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
                    goto addr_14000890d_74;
                goto addr_1400088d2_79;
            }
        } else {
            v84 = 0;
            goto addr_140008c23_308;
        }
    } else {
        if (v7 == 4) {
            v84 = 1;
            goto addr_140008c23_308;
        } else {
            eax241 = v12 + v77;
            v81 = eax241;
            eax242 = eax241 + 1;
            v83 = eax242;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax242) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax242 == 0)) {
                v84 = 1;
                goto addr_140009336_62;
            } else {
                rax85 = fun_140007f80(v83);
                v84 = 1;
                r11d86 = r11d66;
                r10d87 = r10d73;
                r15_25 = rax85;
                goto addr_140008638_61;
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
        goto addr_140009228_88;
    } else {
        v12 = 0;
        v89 = 0;
        v83 = 0xffffffff;
        v81 = 0xffffffff;
        goto addr_1400088b1_72;
    }
    addr_140008c23_308:
    eax243 = 1;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v12) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v12 == 0))) {
        eax243 = v12;
    }
    v12 = eax243;
    ecx88 = eax243;
    v81 = eax243;
    v83 = eax243;
    goto addr_140008c49_63;
    addr_140008490_43:
    rcx70 = g14000c910;
    rdx60 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r11d66)));
    __asm__("movd xmm5, rdi");
    *reinterpret_cast<void***>(rdi71) = rsi6->f0;
    rdi71 = rdi71 + 4;
    rsi6 = reinterpret_cast<struct s26*>(&rsi6->f4);
    __asm__("comisd xmm0, xmm5");
    if (!below_or_equal74) 
        goto addr_1400084ae_324;
    v75 = 0;
    v76 = 0;
    if (reinterpret_cast<int32_t>(r10d73) < reinterpret_cast<int32_t>(0)) 
        goto addr_140008b70_46; else 
        goto addr_140008811_48;
    addr_1400084ae_324:
    v75 = 0;
    --r11d66;
    goto addr_140008568_45;
    addr_140008528_20:
    *reinterpret_cast<void***>(r13_32 + 20) = reinterpret_cast<void**>(0);
    goto addr_140008381_32;
}

int32_t fun_14000ae30();

int32_t fun_14000ae28();

int32_t fun_14000a8e0(signed char* rcx, uint16_t dx, int32_t r8d, int32_t r9d);

int32_t fun_14000a970(signed char* rcx, uint32_t edx, void* r8, void** r9) {
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
    eax7 = fun_14000ae30();
    eax8 = fun_14000ae28();
    edx9 = *reinterpret_cast<uint16_t*>(&ebx6);
    eax10 = fun_14000a8e0(r12_5, *reinterpret_cast<uint16_t*>(&edx9), eax8, eax7);
    rax11 = eax10;
    return *reinterpret_cast<int32_t*>(&rax11);
}

int64_t fputc = 0x1056e;

void fun_14000aeb0() {
    goto fputc;
}

void fun_140005a90(signed char cl, void** rdx, ...) {
    void** edx3;
    void** eax4;

    edx3 = *reinterpret_cast<void***>(rdx + 8);
    if (*reinterpret_cast<unsigned char*>(&edx3 + 1) & 64 || (eax4 = *reinterpret_cast<void***>(rdx + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 40)) > reinterpret_cast<signed char>(eax4))) {
        if (*reinterpret_cast<unsigned char*>(&edx3 + 1) & 32) {
            fun_14000aeb0();
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

void** fun_14000a750(void** rcx, void* rdx);

void fun_140005d90(void** rcx, void** rdx) {
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
        rax5 = fun_14000aef8(r12_3);
    } else {
        *reinterpret_cast<void***>(&rax5) = fun_14000a750(r12_3, rdx4);
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
                goto addr_140005d11_15;
            }
        } else {
            *reinterpret_cast<void***>(rdx + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rdx11 - 1));
            do {
                fun_140005a90(32, rbx9);
                *reinterpret_cast<void***>(&rax13) = *reinterpret_cast<void***>(rbx9 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
                *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax13 - 1));
            } while (*reinterpret_cast<void***>(&rax13));
            goto addr_140005c93_19;
        }
    } else {
        *reinterpret_cast<void***>(rdx + 12) = reinterpret_cast<void**>(0xffffffff);
        goto addr_140005c93_19;
    }
    addr_140005c9e_21:
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
                fun_14000aeb0();
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
        addr_140005d11_15:
        if (*reinterpret_cast<unsigned char*>(&eax12 + 1) & 64 || (edx19 = *reinterpret_cast<void***>(rbx9 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx9 + 40)) > reinterpret_cast<signed char>(edx19))) {
            if (!(*reinterpret_cast<unsigned char*>(&eax12 + 1) & 32)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx9)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx9 + 36))))) = 32;
                edx19 = *reinterpret_cast<void***>(rbx9 + 36);
            } else {
                fun_14000aeb0();
                edx19 = *reinterpret_cast<void***>(rbx9 + 36);
            }
        }
        *reinterpret_cast<void***>(rbx9 + 36) = edx19 + 1;
    }
    addr_140005d3c_34:
    return;
    addr_140005c93_19:
    if (!edi6) {
        *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xfffffffe);
        goto addr_140005d3c_34;
    } else {
        eax12 = *reinterpret_cast<void***>(rbx9 + 8);
        goto addr_140005c9e_21;
    }
}

void** fun_14000a750(void** rcx, void* rdx) {
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

void fun_140005c60(signed char* rcx, void** edx, void** r8) {
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
                goto addr_140005d11_9;
            }
        } else {
            *reinterpret_cast<void***>(r8 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rdx9 - 1));
            do {
                fun_140005a90(32, rbx7);
                *reinterpret_cast<void***>(&rax11) = *reinterpret_cast<void***>(rbx7 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
                *reinterpret_cast<void***>(rbx7 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax11 - 1));
            } while (*reinterpret_cast<void***>(&rax11));
            goto addr_140005c93_13;
        }
    } else {
        *reinterpret_cast<void***>(r8 + 12) = reinterpret_cast<void**>(0xffffffff);
        goto addr_140005c93_13;
    }
    addr_140005c9e_15:
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
                fun_14000aeb0();
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
        addr_140005d11_9:
        if (*reinterpret_cast<unsigned char*>(&eax10 + 1) & 64 || (edx17 = *reinterpret_cast<void***>(rbx7 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx7 + 40)) > reinterpret_cast<signed char>(edx17))) {
            if (!(*reinterpret_cast<unsigned char*>(&eax10 + 1) & 32)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx7 + 36))))) = 32;
                edx17 = *reinterpret_cast<void***>(rbx7 + 36);
            } else {
                fun_14000aeb0();
                edx17 = *reinterpret_cast<void***>(rbx7 + 36);
            }
        }
        *reinterpret_cast<void***>(rbx7 + 36) = edx17 + 1;
    }
    addr_140005d3c_28:
    return;
    addr_140005c93_13:
    if (!edi4) {
        *reinterpret_cast<void***>(rbx7 + 12) = reinterpret_cast<void**>(0xfffffffe);
        goto addr_140005d3c_28;
    } else {
        eax10 = *reinterpret_cast<void***>(rbx7 + 8);
        goto addr_140005c9e_15;
    }
}

int64_t fun_140005910(void** rcx, ...) {
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

int64_t memset = 0x105aa;

void** fun_14000aee0(void** rcx, ...) {
    goto memset;
}

void fun_140005af0(uint16_t* rcx, void** edx, void** r8, void** r9, int64_t a5) {
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
    fun_14000a970(r12_8, 0, r13_7, r9);
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
                goto addr_140005be8_9;
            }
        } else {
            *reinterpret_cast<void***>(rbx10 + 12) = eax13 - 1;
            do {
                fun_140005a90(32, rbx10, 32, rbx10);
                *reinterpret_cast<void***>(&rax14) = *reinterpret_cast<void***>(rbx10 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
                *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax14 - 1));
            } while (*reinterpret_cast<void***>(&rax14));
            goto addr_140005b3e_13;
        }
    } else {
        *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(0xffffffff);
        goto addr_140005b3e_13;
    }
    do {
        addr_140005b50_15:
        edx15 = *rbp11;
        ++rbp11;
        eax16 = fun_14000a970(r12_8, edx15, r13_7, r9);
        if (reinterpret_cast<uint1_t>(eax16 < 0) | reinterpret_cast<uint1_t>(eax16 == 0)) 
            break;
        *reinterpret_cast<int32_t*>(&rax17) = eax16 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
        rsi18 = r12_8;
        r14_19 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(r12_8) + reinterpret_cast<int64_t>(rax17) + 1);
        do {
            addr_140005b96_17:
            edx20 = *reinterpret_cast<void***>(rbx10 + 8);
            ++rsi18;
            if (*reinterpret_cast<unsigned char*>(&edx20 + 1) & 64 || (eax21 = *reinterpret_cast<void***>(rbx10 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx10 + 40)) > reinterpret_cast<signed char>(eax21))) {
                ecx22 = v23;
                if (!(*reinterpret_cast<unsigned char*>(&edx20 + 1) & 32)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx10)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx10 + 36))))) = *reinterpret_cast<signed char*>(&ecx22);
                    eax21 = *reinterpret_cast<void***>(rbx10 + 36);
                } else {
                    fun_14000aeb0();
                    *reinterpret_cast<void***>(rbx10 + 36) = *reinterpret_cast<void***>(rbx10 + 36) + 1;
                    if (rsi18 != r14_19) 
                        goto addr_140005b96_17; else 
                        break;
                }
            }
            *reinterpret_cast<void***>(rbx10 + 36) = eax21 + 1;
        } while (rsi18 != r14_19);
        --edi9;
    } while (edi9);
    goto addr_140005bd5_23;
    while (*reinterpret_cast<void***>(&rax24) = *reinterpret_cast<void***>(rbx10 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0, *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax24 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax24)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax24) == 0))) {
        addr_140005be8_9:
        fun_140005a90(32, rbx10, 32, rbx10);
    }
    addr_140005c02_25:
    return;
    addr_140005bd5_23:
    *reinterpret_cast<void***>(&rax25) = *reinterpret_cast<void***>(rbx10 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
    *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax25 - 1));
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax25)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax25) == 0))) {
        goto addr_140005be8_9;
    }
    addr_140005b3e_13:
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi9 == 0)) {
        *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(0xfffffffe);
        goto addr_140005c02_25;
    } else {
        goto addr_140005b50_15;
    }
}

void fun_140006730(void** rcx, void** rdx, void** r8);

void fun_140006890(int32_t ecx, void** rdx, void** r8, void** r9) {
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
            goto addr_140006a6b_4;
        }
        if (zf10) {
            addr_140006a6b_4:
            edx11 = *reinterpret_cast<void***>(rbx9 + 16);
            if (reinterpret_cast<signed char>(eax5) > reinterpret_cast<signed char>(edx11)) {
                addr_140006a09_6:
                eax12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) - reinterpret_cast<unsigned char>(edx11));
                *reinterpret_cast<void***>(rbx9 + 12) = eax12;
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx11 == 0)) || (edx13 = *reinterpret_cast<void***>(rbx9 + 8), !!(*reinterpret_cast<unsigned char*>(&edx13 + 1) & 8))) {
                    --eax12;
                    *reinterpret_cast<void***>(rbx9 + 12) = eax12;
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0)) 
                        goto addr_1400068f0_8;
                    if (!(*reinterpret_cast<unsigned char*>(rbx9 + 9) & 16)) 
                        goto addr_1400068f0_8;
                    if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
                        goto addr_1400068f0_8;
                } else {
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0)) 
                        goto addr_1400068f4_13;
                    if (!(*reinterpret_cast<unsigned char*>(&edx13 + 1) & 16)) 
                        goto addr_1400068f4_13;
                    if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
                        goto addr_1400068f4_13;
                }
            } else {
                *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xffffffff);
                goto addr_140006a79_18;
            }
        } else {
            *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xffffffff);
            goto addr_140006a79_18;
        }
    } else {
        if (reinterpret_cast<signed char>(eax5) < reinterpret_cast<signed char>(r8)) 
            goto addr_1400068b9_21;
        eax5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) - reinterpret_cast<unsigned char>(r8));
        *reinterpret_cast<void***>(r9 + 12) = eax5;
        if (reinterpret_cast<signed char>(eax5) < reinterpret_cast<signed char>(0)) 
            goto addr_1400068b9_21;
        edx11 = *reinterpret_cast<void***>(r9 + 16);
        if (reinterpret_cast<signed char>(eax5) > reinterpret_cast<signed char>(edx11)) 
            goto addr_140006a09_6;
        addr_1400068b9_21:
        *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xffffffff);
        if (!(*reinterpret_cast<unsigned char*>(rbx9 + 9) & 16)) 
            goto addr_14000693a_24;
        if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
            goto addr_14000693a_24;
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
        goto addr_1400068f0_8;
    } else {
        addr_1400068f0_8:
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax12) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax12 == 0)) {
            addr_14000693a_24:
            if (ebp6) {
                addr_140006a81_30:
                fun_140005a90(45, rbx9);
                goto addr_140006957_31;
            } else {
                addr_140006942_32:
                edx17 = *reinterpret_cast<void***>(rbx9 + 8);
                goto addr_140006945_33;
            }
        } else {
            addr_1400068f4_13:
            if (ebp6) {
                eax18 = eax12 - 1;
                *reinterpret_cast<void***>(rbx9 + 12) = eax18;
                if (!eax18) 
                    goto addr_140006a81_30;
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx9 + 8)) & 0x600)) 
                    goto addr_140006918_36; else 
                    goto addr_140006af5_37;
            } else {
                edx17 = *reinterpret_cast<void***>(rbx9 + 8);
                if (!(reinterpret_cast<unsigned char>(edx17) & 0x1c0)) {
                    if (*reinterpret_cast<unsigned char*>(&edx17 + 1) & 6 || (*reinterpret_cast<void***>(&rax19) = *reinterpret_cast<void***>(rbx9 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0, *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax19 - 1)), reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax19)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax19) == 0))) {
                        addr_140006945_33:
                        if (*reinterpret_cast<unsigned char*>(&edx17 + 1) & 1) {
                            fun_140005a90(43, rbx9);
                            goto addr_140006957_31;
                        } else {
                            if (reinterpret_cast<unsigned char>(edx17) & 64) {
                                fun_140005a90(32, rbx9);
                                goto addr_140006957_31;
                            }
                        }
                    } else {
                        goto addr_140006920_44;
                    }
                } else {
                    eax18 = eax12 - 1;
                    *reinterpret_cast<void***>(rbx9 + 12) = eax18;
                    if (!eax18) 
                        goto addr_140006945_33;
                    if (*reinterpret_cast<unsigned char*>(&edx17 + 1) & 6) 
                        goto addr_140006945_33; else 
                        goto addr_140006918_36;
                }
            }
        }
    }
    goto addr_14000693a_24;
    addr_140006957_31:
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx9 + 12)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx9 + 12) == 0)) && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx9 + 8)) & 0x600) == 0x200) {
        *reinterpret_cast<void***>(rbx9 + 12) = *reinterpret_cast<void***>(rbx9 + 12) - 1;
        do {
            fun_140005a90(48, rbx9);
            *reinterpret_cast<void***>(&rax20) = *reinterpret_cast<void***>(rbx9 + 12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
            *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax20 - 1));
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax20)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax20) == 0)));
    }
    rbp21 = reinterpret_cast<uint16_t*>(rbx9 + 32);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0)) {
        fun_140005a90(48, rbx9);
        eax22 = *reinterpret_cast<void***>(rbx9 + 16);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax22 == 0)) || *reinterpret_cast<unsigned char*>(rbx9 + 9) & 8) {
            fun_140006730(rbx9, rbx9, r8);
            if (!*reinterpret_cast<void***>(&rsi8)) {
                addr_140006ac3_54:
                while (*reinterpret_cast<void***>(&rax23) = *reinterpret_cast<void***>(rbx9 + 16), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0, *reinterpret_cast<void***>(rbx9 + 16) = reinterpret_cast<void**>(static_cast<uint32_t>(rax23 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax23)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax23) == 0))) {
                    eax24 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi7));
                    ecx25 = 48;
                    if (*reinterpret_cast<signed char*>(&eax24)) {
                        ++rdi7;
                        ecx25 = *reinterpret_cast<signed char*>(&eax24);
                    }
                    fun_140005a90(*reinterpret_cast<signed char*>(&ecx25), rbx9, *reinterpret_cast<signed char*>(&ecx25), rbx9);
                }
            } else {
                eax22 = *reinterpret_cast<void***>(rbx9 + 16);
                goto addr_140006b4b_59;
            }
            return;
        }
        if (*reinterpret_cast<void***>(&rsi8)) {
            addr_140006b4b_59:
            *reinterpret_cast<void***>(rbx9 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rsi8)));
        } else {
            goto addr_140006a4d_63;
        }
    } else {
        while (1) {
            eax26 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi7));
            ecx27 = 48;
            if (*reinterpret_cast<signed char*>(&eax26)) {
                ++rdi7;
                ecx27 = *reinterpret_cast<signed char*>(&eax26);
            }
            fun_140005a90(*reinterpret_cast<signed char*>(&ecx27), rbx9, *reinterpret_cast<signed char*>(&ecx27), rbx9);
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
            fun_140005af0(rbp21, 1, r8, r9, v28);
        }
        eax22 = *reinterpret_cast<void***>(rbx9 + 16);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax22 == 0))) 
            goto addr_140006a98_73;
        if (*reinterpret_cast<unsigned char*>(rbx9 + 9) & 8) 
            goto addr_140006a98_73; else 
            goto addr_140006a4d_63;
    }
    do {
        fun_140005a90(48, rbx9);
        *reinterpret_cast<void***>(&rsi8) = *reinterpret_cast<void***>(&rsi8) + 1;
    } while (*reinterpret_cast<void***>(&rsi8));
    goto addr_140006ac3_54;
    addr_140006a4d_63:
    *reinterpret_cast<void***>(rbx9 + 16) = eax22 - 1;
    return;
    addr_140006a98_73:
    fun_140006730(rbx9, rbx9, r8);
    goto addr_140006ac3_54;
    addr_140006918_36:
    *reinterpret_cast<void***>(rbx9 + 12) = eax18 - 1;
    do {
        addr_140006920_44:
        fun_140005a90(32, rbx9);
        *reinterpret_cast<void***>(&rax29) = *reinterpret_cast<void***>(rbx9 + 12);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
        *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax29 - 1));
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax29)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax29) == 0)));
    goto addr_14000693a_24;
    addr_140006af5_37:
    fun_140005a90(45, rbx9);
    goto addr_140006957_31;
    addr_140006a79_18:
    if (!ebp6) 
        goto addr_140006942_32; else 
        goto addr_140006a81_30;
}

struct s38 {
    signed char[32] pad32;
    void** f20;
};

void fun_1400063a0(void** rcx, void** rdx) {
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
    rax11 = fun_140005910(rcx);
    rsp12 = reinterpret_cast<struct s38*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - rax11);
    r13_13 = reinterpret_cast<void**>(&rsp12->f20);
    if (*reinterpret_cast<unsigned char*>(&r12d5) & 0x80) {
        if (reinterpret_cast<signed char>(rcx) < reinterpret_cast<signed char>(0)) {
            rcx = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rcx));
            goto addr_14000641f_10;
        } else {
            *reinterpret_cast<unsigned char*>(&r12d5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12d5) & 0x7f);
            *reinterpret_cast<void***>(rbx6 + 8) = r12d5;
        }
    }
    if (!rcx) {
        rdi14 = r13_13;
        r8d15 = r14d4;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d4 == 0))) {
            addr_1400064ba_14:
            rcx16 = rdi14;
            rdi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi14) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d15))));
            rsp17 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp12) - 8);
            *rsp17 = 0x1400064d0;
            fun_14000aee0(rcx16, rcx16);
            rsp12 = reinterpret_cast<struct s38*>(rsp17 + 1);
        } else {
            goto addr_140006659_16;
        }
    } else {
        addr_14000641f_10:
        r8_18 = r13_13;
        r10d19 = reinterpret_cast<unsigned char>(r12d5) & 0x1000;
        goto addr_140006440_17;
    }
    addr_1400064d0_18:
    if (r13_13 == rdi14) {
        addr_140006668_19:
        *reinterpret_cast<void***>(rdi14) = reinterpret_cast<void**>(48);
        ++rdi14;
        goto addr_1400064d9_20;
    } else {
        addr_1400064d9_20:
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi10 == 0)) && (rax20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi14) - reinterpret_cast<unsigned char>(r13_13)), esi21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi10) - *reinterpret_cast<uint32_t*>(&rax20)), *reinterpret_cast<void***>(rbx6 + 12) = esi21, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi21) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi21 == 0)))) {
            if (reinterpret_cast<unsigned char>(r12d5) & 0x1c0) {
                *reinterpret_cast<void***>(rbx6 + 12) = esi21 - 1;
                if (reinterpret_cast<signed char>(r14d4) >= reinterpret_cast<signed char>(0)) 
                    goto addr_140006502_23;
            } else {
                if (reinterpret_cast<signed char>(r14d4) >= reinterpret_cast<signed char>(0)) 
                    goto addr_140006502_23;
            }
            if ((reinterpret_cast<unsigned char>(r12d5) & 0x600) != 0x200) {
                addr_140006502_23:
                if (!(reinterpret_cast<unsigned char>(r12d5) & 0x400)) {
                    *reinterpret_cast<void***>(&rax22) = *reinterpret_cast<void***>(rbx6 + 12);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
                    *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax22 - 1));
                    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax22)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax22) == 0))) {
                        do {
                            rsp23 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp12) - 8);
                            *rsp23 = 0x1400066f5;
                            fun_140005a90(32, rbx6, 32, rbx6);
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
                    *rsp28 = 0x1400066c2;
                    fun_14000aee0(rcx27, rcx27);
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
                    goto addr_14000653a_43;
                } else {
                    rsp32 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp12) - 8);
                    *rsp32 = 0x140006572;
                    fun_14000aeb0();
                    rsp12 = reinterpret_cast<struct s38*>(rsp32 + 1);
                    *reinterpret_cast<void***>(rbx6 + 36) = *reinterpret_cast<void***>(rbx6 + 36) + 1;
                    if (r13_13 == rsi29) 
                        break;
                }
            } else {
                addr_14000653a_43:
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
                *rsp37 = 0x1400065ca;
                fun_14000aeb0();
                rsp12 = reinterpret_cast<struct s38*>(rsp37 + 1);
                edx36 = *reinterpret_cast<void***>(rbx6 + 36);
                eax33 = *reinterpret_cast<void***>(rbx6 + 12);
            }
        }
        *reinterpret_cast<void***>(rbx6 + 36) = edx36 + 1;
    }
    return;
    addr_140006659_16:
    if (!r14d4) 
        goto addr_1400064d9_20;
    goto addr_140006668_19;
    addr_140006440_17:
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
            goto addr_1400064d9_20; else 
            goto addr_140006659_16;
    } else {
        rax42 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi14) - reinterpret_cast<unsigned char>(r13_13));
        r8d15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14d4) - *reinterpret_cast<uint32_t*>(&rax42));
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8d15) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r8d15 == 0)) 
            goto addr_1400064d0_18; else 
            goto addr_1400064ba_14;
    }
}

struct s39 {
    uint64_t f0;
    int32_t f8;
};

void** fun_1400059a0(int32_t ecx, struct s39* rdx, void** r8d, void* r9) {
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
            addr_1400059db_3:
            edx10 = static_cast<int32_t>(r10_8 - 0x403e);
            edx11 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&edx10)));
        } else {
            rdx12 = rax6 >> 32;
            if (!(*reinterpret_cast<uint32_t*>(&rdx12) & 0x7fffffff | *reinterpret_cast<uint32_t*>(&rax6))) {
                edx11 = 0;
                goto addr_1400059ee_6;
            } else {
                edx11 = 0;
                ecx13 = 0;
                goto addr_1400059f4_8;
            }
        }
    } else {
        rdx14 = rax6 >> 32;
        if (!(*reinterpret_cast<uint32_t*>(&rax6) | *reinterpret_cast<uint32_t*>(&rdx14))) {
            edx11 = 0;
        } else {
            if (*reinterpret_cast<int32_t*>(&rdx14) < reinterpret_cast<int32_t>(0)) 
                goto addr_1400059db_3;
            edx11 = 0xffffbfc3;
        }
    }
    addr_1400059ee_6:
    ecx13 = *reinterpret_cast<uint32_t*>(&rcx9) & 0x8000;
    addr_1400059f4_8:
    *v15 = ecx13;
    rax16 = fun_1400081d0("@", edx11, reinterpret_cast<int64_t>(rsp5) + 80, reinterpret_cast<int64_t>(rsp5) + 68);
    return rax16;
}

struct s40 {
    signed char[32] pad32;
    void** f20;
};

void fun_140006c30(int32_t ecx, void** rdx, void** r8d, void** r9) {
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
    fun_140006890(r11d8, rdx, 1, r12_9);
    ecx19 = *reinterpret_cast<void***>(r12_9 + 8);
    *reinterpret_cast<void***>(r12_9 + 16) = *reinterpret_cast<void***>(r12_9 + 44);
    ecx20 = reinterpret_cast<unsigned char>(ecx19) & 32 | 69;
    *reinterpret_cast<void***>(r12_9 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx19) | 0x1c0);
    fun_140005a90(*reinterpret_cast<signed char*>(&ecx20), r12_9, *reinterpret_cast<signed char*>(&ecx20), r12_9);
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
    rax30 = fun_140005910(rcx21, rcx21);
    rsp31 = reinterpret_cast<struct s40*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8 + 32 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - rax30);
    r13_32 = reinterpret_cast<void**>(&rsp31->f20);
    if (*reinterpret_cast<unsigned char*>(&r12d24) & 0x80) {
        if (reinterpret_cast<signed char>(rcx21) < reinterpret_cast<signed char>(0)) {
            rcx21 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rcx21));
            goto addr_14000641f_19;
        } else {
            *reinterpret_cast<unsigned char*>(&r12d24) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12d24) & 0x7f);
            *reinterpret_cast<void***>(rbx25 + 8) = r12d24;
        }
    }
    if (!rcx21) {
        rdi33 = r13_32;
        r8d34 = r14d23;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d23) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d23 == 0))) {
            addr_1400064ba_23:
            rcx35 = rdi33;
            rdi33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi33) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d34))));
            rsp36 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp31) - 8);
            *rsp36 = 0x1400064d0;
            fun_14000aee0(rcx35, rcx35);
            rsp31 = reinterpret_cast<struct s40*>(rsp36 + 1);
        } else {
            goto addr_140006659_25;
        }
    } else {
        addr_14000641f_19:
        r8_37 = r13_32;
        r10d38 = reinterpret_cast<unsigned char>(r12d24) & 0x1000;
        goto addr_140006440_26;
    }
    addr_1400064d0_27:
    if (r13_32 == rdi33) {
        addr_140006668_28:
        *reinterpret_cast<void***>(rdi33) = reinterpret_cast<void**>(48);
        ++rdi33;
        goto addr_1400064d9_29;
    } else {
        addr_1400064d9_29:
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi29) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi29 == 0)) && (rax39 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi33) - reinterpret_cast<unsigned char>(r13_32)), esi40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi29) - *reinterpret_cast<uint32_t*>(&rax39)), *reinterpret_cast<void***>(rbx25 + 12) = esi40, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi40) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi40 == 0)))) {
            if (reinterpret_cast<unsigned char>(r12d24) & 0x1c0) {
                *reinterpret_cast<void***>(rbx25 + 12) = esi40 - 1;
                if (reinterpret_cast<signed char>(r14d23) >= reinterpret_cast<signed char>(0)) 
                    goto addr_140006502_32;
            } else {
                if (reinterpret_cast<signed char>(r14d23) >= reinterpret_cast<signed char>(0)) 
                    goto addr_140006502_32;
            }
            if ((reinterpret_cast<unsigned char>(r12d24) & 0x600) != 0x200) {
                addr_140006502_32:
                if (!(reinterpret_cast<unsigned char>(r12d24) & 0x400)) {
                    *reinterpret_cast<void***>(&rax41) = *reinterpret_cast<void***>(rbx25 + 12);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
                    *reinterpret_cast<void***>(rbx25 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax41 - 1));
                    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax41)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax41) == 0))) {
                        do {
                            rsp42 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp31) - 8);
                            *rsp42 = 0x1400066f5;
                            fun_140005a90(32, rbx25, 32, rbx25);
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
                    *rsp47 = 0x1400066c2;
                    fun_14000aee0(rcx46, rcx46);
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
                    goto addr_14000653a_52;
                } else {
                    rsp51 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp31) - 8);
                    *rsp51 = 0x140006572;
                    fun_14000aeb0();
                    rsp31 = reinterpret_cast<struct s40*>(rsp51 + 1);
                    *reinterpret_cast<void***>(rbx25 + 36) = *reinterpret_cast<void***>(rbx25 + 36) + 1;
                    if (r13_32 == rsi48) 
                        break;
                }
            } else {
                addr_14000653a_52:
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
                *rsp56 = 0x1400065ca;
                fun_14000aeb0();
                rsp31 = reinterpret_cast<struct s40*>(rsp56 + 1);
                edx55 = *reinterpret_cast<void***>(rbx25 + 36);
                eax52 = *reinterpret_cast<void***>(rbx25 + 12);
            }
        }
        *reinterpret_cast<void***>(rbx25 + 36) = edx55 + 1;
    }
    return;
    addr_140006659_25:
    if (!r14d23) 
        goto addr_1400064d9_29;
    goto addr_140006668_28;
    addr_140006440_26:
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
            goto addr_1400064d9_29; else 
            goto addr_140006659_25;
    } else {
        rax61 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi33) - reinterpret_cast<unsigned char>(r13_32));
        r8d34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14d23) - *reinterpret_cast<uint32_t*>(&rax61));
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8d34) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r8d34 == 0)) 
            goto addr_1400064d0_27; else 
            goto addr_1400064ba_23;
    }
}

void fun_140009a50(int32_t ecx, ...);

int32_t g14000faf0;

void fun_140008040(void** rcx, void** rdx, ...) {
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
            fun_140009a50(0);
            rdx5 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx4 + 8));
            zf6 = g14000faf0 == 2;
            rcx7 = *reinterpret_cast<void***>(0x14000faa0 + rdx5 * 8);
            *reinterpret_cast<void***>(0x14000faa0 + rdx5 * 8) = rcx4;
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

void fun_140007000(void** rcx, int64_t rdx, void** r8) {
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
            addr_14000707d_6:
            ecx13 = *reinterpret_cast<void***>(r12_8 + 8);
            rsi14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) + 48);
            goto addr_140007087_7;
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
                goto addr_140007267_11;
            if (!r8b11) 
                goto addr_14000707d_6;
        }
        addr_140007267_11:
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
                            goto addr_14000729f_19; else 
                            goto addr_1400072f9_20;
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
                addr_14000729f_19:
                eax25 = eax24 + 48;
            } else {
                addr_1400072ac_27:
                r9_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r9_7) >> 4);
                --edx12;
                if (!edx12) 
                    break; else 
                    continue;
            }
        } else {
            if (eax24 <= 9) 
                goto addr_14000729f_19; else 
                goto addr_1400072dc_29;
        }
        addr_1400072a5_30:
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&v4) + 3) = *reinterpret_cast<signed char*>(&eax25);
        rbx20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx20) + 1);
        goto addr_1400072ac_27;
        addr_1400072dc_29:
        eax25 = eax24 + 55 | r11d22;
        goto addr_1400072a5_30;
    }
    addr_140007300_31:
    if (rbx20 != rsi14) {
        addr_14000709d_32:
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
                            fun_140005a90(32, r12_8, 32, r12_8);
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
            goto addr_140007087_7; else 
            goto addr_140007316_47;
    }
    if (*reinterpret_cast<unsigned char*>(&r8_21) & 0x80) {
        fun_140005a90(45, r12_8, 45, r12_8);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
    } else {
        if (reinterpret_cast<unsigned char>(r8_21) & 0x100) {
            fun_140005a90(43, r12_8, 43, r12_8);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        } else {
            r8_21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_21) & 64);
            *reinterpret_cast<int32_t*>(&r8_21 + 4) = 0;
            if (r8_21) {
                fun_140005a90(32, r12_8, 32, r12_8);
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            }
        }
    }
    fun_140005a90(48, r12_8, 48, r12_8);
    rdx38 = r12_8;
    ecx39 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_8 + 8)) & 32 | 88;
    fun_140005a90(*reinterpret_cast<signed char*>(&ecx39), rdx38, *reinterpret_cast<signed char*>(&ecx39), rdx38);
    rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8 - 8 + 8);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_8 + 12)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(r12_8 + 12) == 0)) && *reinterpret_cast<unsigned char*>(r12_8 + 9) & 2) {
        *reinterpret_cast<void***>(r12_8 + 12) = *reinterpret_cast<void***>(r12_8 + 12) - 1;
        do {
            fun_140005a90(48, r12_8, 48, r12_8);
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
                fun_140006730(r12_8, rdx38, r8_21);
                rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
            } else {
                if (ecx43 == 44) {
                    eax44 = *reinterpret_cast<uint16_t*>(r12_8 + 32);
                    if (*reinterpret_cast<int16_t*>(&eax44)) {
                        r8_21 = r12_8;
                        rdx38 = reinterpret_cast<void**>(1);
                        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
                        fun_140005af0(r13_42, 1, r8_21, r9_7, v45);
                        rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
                    }
                } else {
                    rdx38 = r12_8;
                    fun_140005a90(*reinterpret_cast<signed char*>(&ecx43), rdx38, *reinterpret_cast<signed char*>(&ecx43), rdx38);
                    rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
                }
            }
        } while (rbx20 != rsi14);
    }
    while (*reinterpret_cast<void***>(&rax46) = *reinterpret_cast<void***>(r12_8 + 16), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = 0, *reinterpret_cast<void***>(r12_8 + 16) = reinterpret_cast<void**>(static_cast<uint32_t>(rax46 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax46)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax46) == 0))) {
        fun_140005a90(48, r12_8, 48, r12_8);
        rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
    }
    ecx47 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_8 + 8)) & 32 | 80;
    fun_140005a90(*reinterpret_cast<signed char*>(&ecx47), r12_8, *reinterpret_cast<signed char*>(&ecx47), r12_8);
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
    rax57 = fun_140005910(rcx48);
    rsp58 = reinterpret_cast<struct s41*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8 + 88 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - rax57);
    r13_59 = reinterpret_cast<void**>(&rsp58->f20);
    if (*reinterpret_cast<unsigned char*>(&r12d51) & 0x80) {
        if (reinterpret_cast<signed char>(rcx48) < reinterpret_cast<signed char>(0)) {
            rcx48 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rcx48));
            goto addr_14000641f_78;
        } else {
            *reinterpret_cast<unsigned char*>(&r12d51) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12d51) & 0x7f);
            *reinterpret_cast<void***>(rbx52 + 8) = r12d51;
        }
    }
    if (!rcx48) {
        rdi60 = r13_59;
        r8d61 = r14d50;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d50) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d50 == 0))) {
            addr_1400064ba_82:
            rcx62 = rdi60;
            rdi60 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi60) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d61))));
            rsp63 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
            *rsp63 = 0x1400064d0;
            fun_14000aee0(rcx62, rcx62);
            rsp58 = reinterpret_cast<struct s41*>(rsp63 + 1);
        } else {
            goto addr_140006659_84;
        }
    } else {
        addr_14000641f_78:
        r8_64 = r13_59;
        r10d65 = reinterpret_cast<unsigned char>(r12d51) & 0x1000;
        goto addr_140006440_85;
    }
    addr_1400064d0_86:
    if (r13_59 == rdi60) {
        addr_140006668_87:
        *reinterpret_cast<void***>(rdi60) = reinterpret_cast<void**>(48);
        ++rdi60;
        goto addr_1400064d9_88;
    } else {
        addr_1400064d9_88:
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi56) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi56 == 0)) && (rax66 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi60) - reinterpret_cast<unsigned char>(r13_59)), esi67 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi56) - *reinterpret_cast<uint32_t*>(&rax66)), *reinterpret_cast<void***>(rbx52 + 12) = esi67, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi67) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi67 == 0)))) {
            if (reinterpret_cast<unsigned char>(r12d51) & 0x1c0) {
                *reinterpret_cast<void***>(rbx52 + 12) = esi67 - 1;
                if (reinterpret_cast<signed char>(r14d50) >= reinterpret_cast<signed char>(0)) 
                    goto addr_140006502_91;
            } else {
                if (reinterpret_cast<signed char>(r14d50) >= reinterpret_cast<signed char>(0)) 
                    goto addr_140006502_91;
            }
            if ((reinterpret_cast<unsigned char>(r12d51) & 0x600) != 0x200) {
                addr_140006502_91:
                if (!(reinterpret_cast<unsigned char>(r12d51) & 0x400)) {
                    *reinterpret_cast<void***>(&rax68) = *reinterpret_cast<void***>(rbx52 + 12);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax68) + 4) = 0;
                    *reinterpret_cast<void***>(rbx52 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax68 - 1));
                    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax68)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax68) == 0))) {
                        do {
                            rsp69 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
                            *rsp69 = 0x1400066f5;
                            fun_140005a90(32, rbx52, 32, rbx52);
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
                    *rsp74 = 0x1400066c2;
                    fun_14000aee0(rcx73, rcx73);
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
                    goto addr_14000653a_111;
                } else {
                    rsp78 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
                    *rsp78 = 0x140006572;
                    fun_14000aeb0();
                    rsp58 = reinterpret_cast<struct s41*>(rsp78 + 1);
                    *reinterpret_cast<void***>(rbx52 + 36) = *reinterpret_cast<void***>(rbx52 + 36) + 1;
                    if (r13_59 == rsi75) 
                        break;
                }
            } else {
                addr_14000653a_111:
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
                *rsp83 = 0x1400065ca;
                fun_14000aeb0();
                rsp58 = reinterpret_cast<struct s41*>(rsp83 + 1);
                edx82 = *reinterpret_cast<void***>(rbx52 + 36);
                eax79 = *reinterpret_cast<void***>(rbx52 + 12);
            }
        }
        *reinterpret_cast<void***>(rbx52 + 36) = edx82 + 1;
    }
    return;
    addr_140006659_84:
    if (!r14d50) 
        goto addr_1400064d9_88;
    goto addr_140006668_87;
    addr_140006440_85:
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
            goto addr_1400064d9_88; else 
            goto addr_140006659_84;
    } else {
        rax88 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi60) - reinterpret_cast<unsigned char>(r13_59));
        r8d61 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14d50) - *reinterpret_cast<uint32_t*>(&rax88));
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8d61) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r8d61 == 0)) 
            goto addr_1400064d0_86; else 
            goto addr_1400064ba_82;
    }
    addr_140007087_7:
    r8_21 = ecx13;
    *reinterpret_cast<int32_t*>(&r8_21 + 4) = 0;
    rax89 = rsi14;
    if (*reinterpret_cast<unsigned char*>(&ecx13 + 1) & 8) {
        addr_140007316_47:
        rax89 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) + 49);
        goto addr_140007096_130;
    } else {
        addr_140007096_130:
        rbx20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax89) + 1);
        goto addr_14000709d_32;
    }
    addr_1400072f9_20:
    goto addr_140007300_31;
}

struct s42 {
    signed char[32] pad32;
    void** f20;
};

void** fun_140005e90(void** rcx, void** rdx, void** r8) {
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
            goto addr_1400061f0_5;
    } else {
        r15d7 = *reinterpret_cast<void***>(r8 + 16);
        eax11 = reinterpret_cast<void**>(0);
        edi9 = *reinterpret_cast<void***>(r8 + 8);
        if (reinterpret_cast<signed char>(r15d7) >= reinterpret_cast<signed char>(0)) {
            eax11 = r15d7;
        }
        eax10 = eax11 + 18;
        if (reinterpret_cast<unsigned char>(edi9) & 0x1000) 
            goto addr_140006088_9; else 
            goto addr_140005ed4_10;
    }
    if (!*reinterpret_cast<uint16_t*>(r8 + 32)) {
        r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
        if (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(r12d12)) {
        }
    } else {
        *reinterpret_cast<int32_t*>(&rcx13) = 3;
        *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0;
        goto addr_140006099_16;
    }
    addr_1400061fb_17:
    rax14 = fun_140005910(rcx);
    *reinterpret_cast<int32_t*>(&rcx13) = 3;
    rsp15 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax14);
    r13_16 = reinterpret_cast<void**>(&rsp15->f20);
    goto addr_140006217_18;
    addr_1400061f0_5:
    r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
    if (reinterpret_cast<signed char>(r12d12) >= reinterpret_cast<signed char>(eax10)) {
        goto addr_1400061fb_17;
    }
    addr_140006088_9:
    *reinterpret_cast<int32_t*>(&rcx13) = 4;
    *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0;
    if (!*reinterpret_cast<uint16_t*>(r8 + 32)) {
        r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
        if (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(r12d12)) {
        }
        rax17 = fun_140005910(4);
        r8d18 = 15;
        rsp15 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax17);
        r13_16 = reinterpret_cast<void**>(&rsp15->f20);
    } else {
        addr_140006099_16:
        *reinterpret_cast<void***>(&r8_19) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_19) + 4) = 0;
        r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
        r8_20 = reinterpret_cast<uint64_t>(r8_19 * 0xaaaaaaab) >> 33;
        if (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(eax10) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r8_20))) < reinterpret_cast<signed char>(r12d12)) {
            goto addr_1400060b8_24;
        }
    }
    addr_1400060df_25:
    rsi21 = r13_16;
    if (!rdx) {
        goto addr_1400060f0_27;
    }
    addr_140005f0d_28:
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
        addr_1400060f0_27:
        *reinterpret_cast<void***>(rbx6 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi9) & 0xfffff7ff);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r15d7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r15d7 == 0))) {
            addr_140005f53_33:
            rax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi21) - reinterpret_cast<unsigned char>(r13_16));
            r8d27 = reinterpret_cast<unsigned char>(r15d7) - *reinterpret_cast<uint32_t*>(&rax26);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r8d27) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(r8d27 == 0))) {
                rcx28 = rsi21;
                rsi21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi21) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d27))));
                rsp29 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                *rsp29 = 0x140005f7e;
                fun_14000aee0(rcx28, rcx28);
                rsp15 = reinterpret_cast<struct s42*>(rsp29 + 1);
                if (rsi21 == r13_16) 
                    goto addr_140006124_35; else 
                    goto addr_140005f87_36;
            }
        }
    } else {
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r15d7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r15d7 == 0))) 
            goto addr_140005f53_33;
    }
    if (r14d5 == 0x6f && *reinterpret_cast<unsigned char*>(rbx6 + 9) & 8) {
        *reinterpret_cast<void***>(rsi21) = reinterpret_cast<void**>(48);
        ++rsi21;
    }
    if (rsi21 != r13_16 || !r15d7) {
        addr_140005f87_36:
        rax30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi21) - reinterpret_cast<unsigned char>(r13_16));
        if (reinterpret_cast<signed char>(rax30) < reinterpret_cast<signed char>(r12d12)) {
            addr_140006140_42:
            *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12d12) - reinterpret_cast<unsigned char>(rax30));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
            edi32 = *reinterpret_cast<void***>(rbx6 + 8);
            *reinterpret_cast<void***>(rbx6 + 12) = *reinterpret_cast<void***>(&r12_31);
            if (r14d5 == 0x6f) {
                if (reinterpret_cast<signed char>(r15d7) >= reinterpret_cast<signed char>(0) || (reinterpret_cast<unsigned char>(edi32) & 0x600) != 0x200) {
                    if (!(reinterpret_cast<unsigned char>(edi32) & 0x400)) {
                        addr_140006195_45:
                        r12d33 = *reinterpret_cast<void***>(&r12_31) - 1;
                    } else {
                        if (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16)) 
                            goto addr_140005fe0_47; else 
                            goto addr_14000625e_48;
                    }
                } else {
                    addr_140006302_49:
                    *reinterpret_cast<void**>(&r9_34) = reinterpret_cast<void*>(static_cast<int32_t>(r12_31 - 1));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_34) + 4) = 0;
                    rcx35 = rsi21;
                    rsi21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi21) + reinterpret_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(r9_34 + 1))));
                    rsp36 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                    *rsp36 = 0x140006325;
                    rax30 = fun_14000aee0(rcx35, rcx35);
                    rsp15 = reinterpret_cast<struct s42*>(rsp36 + 1);
                    *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&r9_34)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r12_31)));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
                    if (r14d5 == 0x6f || !(reinterpret_cast<unsigned char>(edi32) & 0x800)) {
                        addr_14000617d_50:
                        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r12_31)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r12_31) == 0)) {
                            addr_140005fb7_51:
                            if (reinterpret_cast<unsigned char>(r13_16) < reinterpret_cast<unsigned char>(rsi21)) 
                                goto addr_140005fdd_52; else 
                                goto addr_140005fbc_53;
                        } else {
                            edi32 = *reinterpret_cast<void***>(rbx6 + 8);
                            if (reinterpret_cast<unsigned char>(edi32) & 0x400) 
                                goto addr_140006285_55; else 
                                goto addr_140006195_45;
                        }
                    } else {
                        goto addr_140006172_57;
                    }
                }
            } else {
                if (reinterpret_cast<unsigned char>(edi32) & 0x800) {
                    *reinterpret_cast<void***>(&r12_31) = *reinterpret_cast<void***>(&r12_31) - 2;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r12_31)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r12_31) == 0)) 
                        goto addr_140006172_57;
                    if (reinterpret_cast<signed char>(r15d7) < reinterpret_cast<signed char>(0)) 
                        goto addr_140006350_61; else 
                        goto addr_140006172_57;
                }
                if (reinterpret_cast<signed char>(r15d7) < reinterpret_cast<signed char>(0)) {
                    addr_140006350_61:
                    rax30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi32) & 0x600);
                    *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
                    if (rax30 == 0x200) 
                        goto addr_140006302_49; else 
                        goto addr_14000635e_63;
                } else {
                    addr_140006279_64:
                    if (!(reinterpret_cast<unsigned char>(edi32) & 0x400)) 
                        goto addr_140006195_45; else 
                        goto addr_140006285_55;
                }
            }
        } else {
            addr_140005f96_65:
            *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(0xffffffff);
            if (r14d5 == 0x6f) {
                *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(0xffffffff);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
                if (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16)) 
                    goto addr_140005fdd_52;
                goto addr_140006074_68;
            } else {
                *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(0xffffffff);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
                if (*reinterpret_cast<unsigned char*>(rbx6 + 9) & 8) {
                    *reinterpret_cast<void***>(rsi21) = *reinterpret_cast<void***>(&r14d5);
                    rsi21 = rsi21 + 2;
                    *reinterpret_cast<void***>(rsi21 + 0xffffffffffffffff) = reinterpret_cast<void**>(48);
                    goto addr_140005fb7_51;
                }
            }
        }
    } else {
        addr_140006124_35:
        *reinterpret_cast<void***>(rsi21) = reinterpret_cast<void**>(48);
        ++rsi21;
        rax30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi21) - reinterpret_cast<unsigned char>(r13_16));
        if (reinterpret_cast<signed char>(rax30) >= reinterpret_cast<signed char>(r12d12)) 
            goto addr_140005f96_65; else 
            goto addr_14000613a_71;
    }
    do {
        rsp37 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
        *rsp37 = 0x1400061ad;
        fun_140005a90(32, rbx6, 32, rbx6);
        rsp15 = reinterpret_cast<struct s42*>(rsp37 + 1);
        rax30 = r12d33;
        *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
        --r12d33;
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rax30) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rax30 == 0)));
    *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
    if (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16)) {
        do {
            addr_140005fdd_52:
            edi32 = *reinterpret_cast<void***>(rbx6 + 8);
            addr_140005fe0_47:
            --rsi21;
            if (reinterpret_cast<unsigned char>(edi32) & 0x4000 || (eax38 = *reinterpret_cast<void***>(rbx6 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx6 + 40)) > reinterpret_cast<signed char>(eax38))) {
                ecx39 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi21));
                if (!(reinterpret_cast<unsigned char>(edi32) & 0x2000)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx6 + 36))))) = *reinterpret_cast<signed char*>(&ecx39);
                    eax38 = *reinterpret_cast<void***>(rbx6 + 36);
                } else {
                    rsp40 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                    *rsp40 = 0x140006007;
                    fun_14000aeb0();
                    rsp15 = reinterpret_cast<struct s42*>(rsp40 + 1);
                    rax30 = *reinterpret_cast<void***>(rbx6 + 36) + 1;
                    *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
                    *reinterpret_cast<void***>(rbx6 + 36) = rax30;
                    if (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16)) 
                        goto addr_140005fdd_52; else 
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
            addr_14000603e_80:
            edi32 = *reinterpret_cast<void***>(rbx6 + 8);
            addr_140006041_81:
            if (reinterpret_cast<unsigned char>(edi32) & 0x4000 || (eax42 = *reinterpret_cast<void***>(rbx6 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx6 + 40)) > reinterpret_cast<signed char>(eax42))) {
                if (!(reinterpret_cast<unsigned char>(edi32) & 0x2000)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx6 + 36))))) = 32;
                    eax42 = *reinterpret_cast<void***>(rbx6 + 36);
                } else {
                    rsp43 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                    *rsp43 = 0x140006066;
                    fun_14000aeb0();
                    rsp15 = reinterpret_cast<struct s42*>(rsp43 + 1);
                    rax30 = *reinterpret_cast<void***>(rbx6 + 36) + 1;
                    *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
                    *reinterpret_cast<void***>(rbx6 + 36) = rax30;
                    cf44 = esi41 < 1;
                    --esi41;
                    if (!cf44) 
                        goto addr_14000603e_80; else 
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
    addr_140006074_68:
    return rax30;
    addr_14000625e_48:
    esi41 = static_cast<uint32_t>(r12_31 - 1);
    goto addr_140006041_81;
    addr_140005fbc_53:
    goto addr_140006074_68;
    addr_140006285_55:
    if (reinterpret_cast<unsigned char>(r13_16) < reinterpret_cast<unsigned char>(rsi21)) 
        goto addr_140005fe0_47;
    goto addr_14000625e_48;
    addr_14000635e_63:
    if (reinterpret_cast<unsigned char>(edi32) & 0x800) {
        addr_140006172_57:
        *reinterpret_cast<void***>(rsi21) = *reinterpret_cast<void***>(&r14d5);
        rsi21 = rsi21 + 2;
        *reinterpret_cast<void***>(rsi21 + 0xffffffffffffffff) = reinterpret_cast<void**>(48);
        goto addr_14000617d_50;
    } else {
        goto addr_140006279_64;
    }
    addr_14000613a_71:
    goto addr_140006140_42;
    addr_1400060b8_24:
    rax46 = fun_140005910(rcx13);
    rsp15 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax46);
    r13_16 = reinterpret_cast<void**>(&rsp15->f20);
    if (r14d5 == 0x6f) {
        addr_140006217_18:
        r8d18 = 7;
    } else {
        r8d18 = 15;
        goto addr_1400060df_25;
    }
    addr_140005f01_90:
    rsi21 = r13_16;
    if (!rdx) 
        goto addr_1400060f0_27; else 
        goto addr_140005f0d_28;
    addr_140005ed4_10:
    r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
    if (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(r12d12)) {
    }
    rax47 = fun_140005910(rcx);
    *reinterpret_cast<int32_t*>(&rcx13) = 4;
    r8d18 = 15;
    rsp15 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax47);
    r13_16 = reinterpret_cast<void**>(&rsp15->f20);
    goto addr_140005f01_90;
}

void fun_140005de0(uint32_t ecx, void** rdx, void** r8, ...);

void fun_140006d10(void* rcx, void** rdx) {
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
    rax5 = fun_1400059a0(2, reinterpret_cast<int64_t>(rsp3) + 48, r8d4, reinterpret_cast<int64_t>(rsp3) + 76);
    if (v6 == 0xffff8000) {
        fun_140005de0(v7, rax5, rdx, v7, rax5, rdx);
        fun_140008040(rax5, rax5, rax5, rax5);
        return;
    } else {
        fun_140006c30(v8, rax5, v6, rdx);
        fun_140008040(rax5, rax5);
        return;
    }
}

void fun_140006db0(void* rcx, void** rdx) {
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
    rax6 = fun_1400059a0(3, reinterpret_cast<int64_t>(rsp3) + 48, r8d4, reinterpret_cast<int64_t>(rsp3) + 76);
    *reinterpret_cast<int32_t*>(&r8_7) = v8;
    *reinterpret_cast<int32_t*>(&r8_7 + 4) = 0;
    r12_9 = rax6;
    if (*reinterpret_cast<int32_t*>(&r8_7) == 0xffff8000) {
        rdx10 = rax6;
        fun_140005de0(v11, rdx10, rbx5, v11, rdx10, rbx5);
    } else {
        fun_140006890(v12, rax6, r8_7, rbx5);
        eax13 = *reinterpret_cast<void***>(rbx5 + 12);
        while (rdx10 = eax13, *reinterpret_cast<int32_t*>(&rdx10 + 4) = 0, --eax13, *reinterpret_cast<void***>(rbx5 + 12) = eax13, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rdx10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rdx10 == 0))) {
            ecx14 = *reinterpret_cast<void***>(rbx5 + 8);
            if (*reinterpret_cast<unsigned char*>(&ecx14 + 1) & 64 || (edx15 = *reinterpret_cast<void***>(rbx5 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx5 + 40)) > reinterpret_cast<signed char>(edx15))) {
                if (!(*reinterpret_cast<unsigned char*>(&ecx14 + 1) & 32)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx5 + 36))))) = 32;
                    edx15 = *reinterpret_cast<void***>(rbx5 + 36);
                    eax13 = *reinterpret_cast<void***>(rbx5 + 12);
                } else {
                    fun_14000aeb0();
                    edx15 = *reinterpret_cast<void***>(rbx5 + 36);
                    eax13 = *reinterpret_cast<void***>(rbx5 + 12);
                }
            }
            *reinterpret_cast<void***>(rbx5 + 36) = edx15 + 1;
        }
    }
    fun_140008040(r12_9, rdx10, r12_9, rdx10);
    return;
}

void fun_140006e90(void* rcx, void** rdx) {
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
    rax6 = fun_1400059a0(2, reinterpret_cast<int64_t>(rsp3) + 48, r8d4, reinterpret_cast<int64_t>(rsp3) + 76);
    r12_7 = rax6;
    if (v8 == 0xffff8000) {
        rdx9 = rax6;
        fun_140005de0(v10, rdx9, rbx5, v10, rdx9, rbx5);
    } else {
        eax11 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5 + 8)) & 0x800;
        if (reinterpret_cast<signed char>(v8) < reinterpret_cast<signed char>(0xfffffffd) || reinterpret_cast<signed char>(v8) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx5 + 16))) {
            if (eax11) {
                eax12 = *reinterpret_cast<void***>(rbx5 + 16) - 1;
            } else {
                rax13 = fun_14000aef8(r12_7, r12_7);
                eax12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rax13)) - 1);
            }
            *reinterpret_cast<void***>(rbx5 + 16) = eax12;
            rdx9 = r12_7;
            fun_140006c30(v14, rdx9, v8, rbx5);
        } else {
            if (!eax11) {
                rax15 = fun_14000aef8(r12_7);
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
            fun_140006890(v18, r12_7, r8_17, rbx5);
            while (*reinterpret_cast<void***>(&rax19) = *reinterpret_cast<void***>(rbx5 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0, rdx9 = reinterpret_cast<void**>(static_cast<uint32_t>(rax19 - 1)), *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0, *reinterpret_cast<void***>(rbx5 + 12) = rdx9, !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax19)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax19) == 0))) {
                fun_140005a90(32, rbx5, 32, rbx5);
            }
        }
    }
    fun_140008040(r12_7, rdx9, r12_7, rdx9);
    return;
}

struct s43 {
    unsigned char* f0;
    unsigned char* f8;
};

int64_t localeconv = 0x10588;

struct s43* fun_14000aec8() {
    goto localeconv;
}

int32_t fun_14000aac0(void** rcx, unsigned char* rdx, uint64_t r8, void** r9);

void** fun_14000ac40(void** rcx, unsigned char* rdx, uint64_t r8, void** r9, int64_t a5) {
    void** r12_6;
    void** r9_7;
    int32_t eax8;
    int64_t rax9;

    r12_6 = rcx;
    if (!rcx) {
        r12_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 64 + 62);
    }
    fun_14000ae30();
    fun_14000ae28();
    r9_7 = reinterpret_cast<void**>(0x14000fb78);
    if (r9) {
        r9_7 = r9;
    }
    eax8 = fun_14000aac0(r12_6, rdx, r8, r9_7);
    rax9 = eax8;
    return *reinterpret_cast<void***>(&rax9);
}

void fun_140005de0(uint32_t ecx, void** rdx, void** r8, ...) {
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
    fun_140005c60(r11_6, reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rdx11)) - reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r11_6)), r8);
    return;
}

void** fun_14000a780(uint16_t* rcx, int64_t rdx) {
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
        goto addr_14000a7a4_4;
    } else {
        goto addr_14000a7a4_4;
    }
    rax4 = r8_3;
    addr_14000a7a4_4:
    return *reinterpret_cast<void***>(&rax4);
}

void** g14000b1c0 = reinterpret_cast<void**>(0xa0);

void** fun_140009b80(void** ecx, ...) {
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

    fun_140009a50(0);
    if (reinterpret_cast<signed char>(ecx) <= reinterpret_cast<signed char>(9)) {
        rcx2 = reinterpret_cast<int32_t>(ecx);
        rax3 = *reinterpret_cast<void***>(0x14000faa0 + rcx2 * 8);
        if (rax3) {
            zf4 = g14000faf0 == 2;
            *reinterpret_cast<void***>(0x14000faa0 + rcx2 * 8) = *reinterpret_cast<void***>(rax3);
            if (!zf4) 
                goto addr_140009bcb_4; else 
                goto addr_140009c03_5;
        }
        ecx5 = ecx;
        *reinterpret_cast<void***>(&rsi6) = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx5));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
        rax3 = g14000b1c0;
        rcx7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(static_cast<int32_t>(rsi6 + 9) * 4 - 1) >> 3);
        rdx8 = reinterpret_cast<void**>((reinterpret_cast<int64_t>(rax3 - 0x14000f1a0) >> 3) + reinterpret_cast<uint64_t>(rcx7));
        if (reinterpret_cast<unsigned char>(rdx8) <= reinterpret_cast<unsigned char>(0x120)) 
            goto addr_140009c62_7;
    } else {
        ecx9 = ecx;
        *reinterpret_cast<void***>(&rsi6) = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx9));
        rcx10 = reinterpret_cast<uint64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(&rsi6)) * 4 + 35) >> 3;
        *reinterpret_cast<int32_t*>(&rcx7) = *reinterpret_cast<int32_t*>(&rcx10);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    }
    rax3 = fun_14000aed0(reinterpret_cast<uint64_t>(rcx7) << 3, rdx8);
    if (!rax3) {
        addr_140009bd3_10:
        return rax3;
    } else {
        addr_140009bbc_11:
        zf11 = g14000faf0 == 2;
        *reinterpret_cast<void***>(rax3 + 8) = ecx;
        *reinterpret_cast<void***>(rax3 + 12) = *reinterpret_cast<void***>(&rsi6);
        if (zf11) {
            addr_140009c03_5:
            LeaveCriticalSection(0x14000fb00);
            rax3 = rax3;
            goto addr_140009bcb_4;
        } else {
            addr_140009bcb_4:
            *reinterpret_cast<void***>(rax3 + 16) = reinterpret_cast<void**>(0);
            goto addr_140009bd3_10;
        }
    }
    addr_140009c62_7:
    g14000b1c0 = rax3 + reinterpret_cast<uint64_t>(rcx7) * 8;
    goto addr_140009bbc_11;
}

uint32_t fun_14000a2e0(void** rcx, void** rdx, ...) {
    int64_t rax3;
    uint32_t r9d4;
    void* r8_5;
    void** rcx6;
    void** rax7;
    void*** rdx8;

    rax3 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdx + 20));
    r9d4 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 20)) - *reinterpret_cast<uint32_t*>(&rax3);
    if (r9d4) {
        addr_14000a324_2:
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
        goto addr_14000a324_2;
    }
    r9d4 = r9d4 - (r9d4 + reinterpret_cast<uint1_t>(r9d4 < r9d4 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax7)) < reinterpret_cast<unsigned char>(*rdx8)))) | 1;
    goto addr_14000a324_2;
}

void** fun_140007fc0(struct s28* rcx, void*** rdx, int32_t r8d) {
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
    rax8 = fun_140009b80(ebx6);
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

void* fun_140009a00(void** rcx) {
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
        goto addr_140009a3f_4;
    } else {
        goto addr_140009a3f_4;
    }
    if (reinterpret_cast<unsigned char>(rcx4) > reinterpret_cast<unsigned char>(rax3)) {
        __asm__("rep bsf edx, edx");
        r8d2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8d2) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax3)));
    }
    addr_140009a3f_4:
    return r8d2;
}

uint32_t fun_14000a500(void** rcx, uint32_t* rdx) {
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

void** fun_140007f80(uint32_t ecx) {
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
    rax4 = fun_140009b80(ebx2);
    *reinterpret_cast<void***>(rax4) = ebx2;
    return rax4 + 4;
}

void** g14000faa8;

void** fun_140009da0(void** ecx, ...) {
    void** rax2;
    int1_t zf3;
    void** rdx4;
    int1_t zf5;

    fun_140009a50(0);
    rax2 = g14000faa8;
    if (rax2) {
        zf3 = g14000faf0 == 2;
        g14000faa8 = *reinterpret_cast<void***>(rax2);
        if (zf3) 
            goto addr_140009e33_3; else 
            goto addr_140009dcd_4;
    }
    rax2 = g14000b1c0;
    rdx4 = reinterpret_cast<void**>((reinterpret_cast<int64_t>(rax2 - 0x14000f1a0) >> 3) + 5);
    if (reinterpret_cast<unsigned char>(rdx4) <= reinterpret_cast<unsigned char>(0x120)) {
        g14000b1c0 = rax2 + 40;
        goto addr_140009e1c_7;
    } else {
        rax2 = fun_14000aed0(40, rdx4);
        if (!rax2) {
            addr_140009dde_9:
            return rax2;
        } else {
            addr_140009e1c_7:
            zf5 = g14000faf0 == 2;
            *reinterpret_cast<void***>(rax2 + 8) = reinterpret_cast<void**>(0x200000001);
            if (!zf5) {
                addr_140009dcd_4:
                *reinterpret_cast<void***>(rax2 + 24) = ecx;
                *reinterpret_cast<void***>(rax2 + 16) = reinterpret_cast<void**>(0x100000000);
                goto addr_140009dde_9;
            } else {
                addr_140009e33_3:
                LeaveCriticalSection(0x14000fb00);
                rax2 = rax2;
                goto addr_140009dcd_4;
            }
        }
    }
}

void** g14000f180;

void** fun_140009fc0(void** rcx, uint32_t edx, ...) {
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
    if (!eax5 || (*reinterpret_cast<uint32_t*>(&rdx2) = *reinterpret_cast<uint32_t*>(0x14000c6a0 + (eax5 - 1) * 4), *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0, rax6 = fun_140009cf0(rcx, *reinterpret_cast<uint32_t*>(&rdx2), 0), r13_3 = rax6, !!rax6)) {
        ebx7 = reinterpret_cast<int32_t>(ebx4) >> 2;
        r12_8 = r13_3;
        if (!ebx7) {
            addr_14000a05b_3:
            return r12_8;
        } else {
            rdi9 = g14000f180;
            if (!rdi9) {
                fun_140009a50(1, 1);
                rdi9 = g14000f180;
                if (!rdi9) {
                    rax10 = fun_140009b80(1, 1);
                    rdi9 = rax10;
                    if (!rax10) {
                        g14000f180 = reinterpret_cast<void**>(0);
                        *reinterpret_cast<int32_t*>(&r12_8) = 0;
                        *reinterpret_cast<int32_t*>(&r12_8 + 4) = 0;
                        goto addr_14000a05b_3;
                    } else {
                        g14000f180 = rdi9;
                        *reinterpret_cast<void***>(rdi9 + 20) = reinterpret_cast<void**>(0x27100000001);
                        *reinterpret_cast<void***>(rdi9) = reinterpret_cast<void**>(0);
                        goto addr_14000a164_9;
                    }
                } else {
                    addr_14000a164_9:
                    zf11 = g14000faf0 == 2;
                    if (zf11) {
                        LeaveCriticalSection(0x14000fb28, rdx2);
                        goto addr_140009ff4_11;
                    }
                }
            } else {
                addr_140009ff4_11:
                r12_8 = r13_3;
            }
        }
        while (1) {
            if (!(*reinterpret_cast<unsigned char*>(&ebx7) & 1)) {
                addr_14000a010_13:
                ebx7 = ebx7 >> 1;
                if (!ebx7) 
                    goto addr_14000a05b_3;
            } else {
                rdx2 = rdi9;
                rax12 = fun_140009e60(r12_8, rdx2);
                if (!rax12) 
                    break;
                if (!r12_8) 
                    goto addr_14000a0e0_16; else 
                    goto addr_14000a044_17;
            }
            addr_14000a014_18:
            rsi13 = *reinterpret_cast<void***>(rdi9);
            if (!rsi13) {
                fun_140009a50(1, 1);
                rsi13 = *reinterpret_cast<void***>(rdi9);
                if (!rsi13) {
                    rdx2 = rdi9;
                    rax14 = fun_140009e60(rdi9, rdx2);
                    *reinterpret_cast<void***>(rdi9) = rax14;
                    rsi13 = rax14;
                    if (!rax14) 
                        break;
                    *reinterpret_cast<void***>(rax14) = reinterpret_cast<void**>(0);
                }
                zf15 = g14000faf0 == 2;
                if (zf15) {
                    LeaveCriticalSection(0x14000fb28, rdx2);
                }
            }
            rdi9 = rsi13;
            continue;
            addr_14000a0e0_16:
            r12_8 = rax12;
            goto addr_14000a010_13;
            addr_14000a044_17:
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_8 + 8)) <= reinterpret_cast<signed char>(9)) {
                fun_140009a50(0, 0);
                rax16 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_8 + 8));
                zf17 = g14000faf0 == 2;
                rdx2 = *reinterpret_cast<void***>(0x14000faa0 + rax16 * 8);
                *reinterpret_cast<void***>(0x14000faa0 + rax16 * 8) = r12_8;
                *reinterpret_cast<void***>(r12_8) = rdx2;
                r12_8 = rax12;
                if (zf17) {
                    LeaveCriticalSection(0x14000fb00);
                    goto addr_14000a010_13;
                }
            } else {
                rcx18 = r12_8;
                r12_8 = rax12;
                fun_14000aeb8(rcx18, rdx2);
                ebx7 = ebx7 >> 1;
                if (ebx7) 
                    goto addr_14000a014_18; else 
                    goto addr_14000a05b_3;
            }
        }
    }
    return 0;
}

void** fun_140009e60(void** rcx, void** rdx) {
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
    rax11 = fun_140009b80(ecx10);
    r12_12 = rax11;
    if (rax11) {
        r11_13 = rax11 + 24;
        rsi14 = r11_13 + reinterpret_cast<int32_t>(ebx9) * 4;
        if (reinterpret_cast<unsigned char>(r11_13) < reinterpret_cast<unsigned char>(rsi14)) {
            rax15 = fun_14000aee0(r11_13);
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

void fun_140009c80(void** rcx, ...) {
    int64_t rdx2;
    int1_t zf3;
    void** rcx4;

    if (rcx) {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rcx + 8)) <= reinterpret_cast<signed char>(9)) {
            fun_140009a50(0);
            rdx2 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 8));
            zf3 = g14000faf0 == 2;
            rcx4 = *reinterpret_cast<void***>(0x14000faa0 + rdx2 * 8);
            *reinterpret_cast<void***>(0x14000faa0 + rdx2 * 8) = rcx;
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

void** fun_14000a1d0(void** rcx, uint32_t edx, ...) {
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
    rax10 = fun_140009b80(ecx4);
    r14_11 = rax10;
    if (!rax10) {
        addr_14000a2bd_4:
        return r14_11;
    } else {
        rdi12 = rax10 + 24;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi6) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi6 == 0))) {
            rcx13 = rdi12;
            rdi12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi12) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(esi6))) << 2));
            fun_14000aee0(rcx13);
        }
        rsi14 = r12_3 + 24;
        r9_15 = rsi14 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_3 + 20)) * 4;
        ebx16 = ebx5 & 31;
        if (ebx16) 
            goto addr_14000a251_8;
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
    goto addr_14000a2dc_17;
    addr_14000a2b1_18:
    *reinterpret_cast<void***>(r14_11 + 20) = *reinterpret_cast<void***>(&rbp8);
    fun_140009c80(r12_3, r12_3);
    goto addr_14000a2bd_4;
    addr_14000a2dc_17:
    goto addr_14000a2b1_18;
    addr_14000a251_8:
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
        goto addr_14000a2a8_21;
    rax24 = reinterpret_cast<void*>(4);
    addr_14000a2a8_21:
    if (edx20) {
        *reinterpret_cast<void***>(&rbp8) = r13d9;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rdi12) + reinterpret_cast<uint64_t>(rax24)) = edx20;
    goto addr_14000a2b1_18;
}

void** fun_140009cf0(void** rcx, uint32_t edx, uint32_t r8d) {
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
        goto addr_140009d52_4;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_5 + 12)) <= reinterpret_cast<signed char>(esi4)) {
        *reinterpret_cast<void***>(&rax12) = *reinterpret_cast<void***>(r12_5 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        rax13 = fun_140009b80(static_cast<uint32_t>(rax12 + 1));
        r13_11 = rax13;
        if (!rax13) {
            addr_140009d52_4:
            return r13_11;
        } else {
            r8_14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_5 + 20)) * 4 + 8);
            fun_14000aed8(rax13 + 16, r12_5 + 16, r8_14);
            rcx15 = r12_5;
            r12_5 = r13_11;
            fun_140009c80(rcx15, rcx15);
        }
    }
    r13_11 = r12_5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_5 + reinterpret_cast<int32_t>(esi4) * 4) + 24) = *reinterpret_cast<int32_t*>(&rbx6);
    *reinterpret_cast<void***>(r12_5 + 20) = esi4 + 1;
    goto addr_140009d52_4;
}

int64_t fun_140008060(void** rcx, void** rdx, ...) {
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
        addr_140008168_2:
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
            addr_140008113_4:
            eax18 = fun_14000a2e0(r12_4, r11_5);
            if (reinterpret_cast<int32_t>(eax18) < reinterpret_cast<int32_t>(0)) {
                addr_140008164_5:
                *reinterpret_cast<uint32_t*>(&rax3) = v16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
                goto addr_140008168_2;
            } else {
                addr_140008122_6:
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
                goto addr_1400081ab_10; else 
                goto addr_140008113_4;
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
        goto addr_140008164_5;
    }
    addr_1400081ab_10:
    while ((r10_11 = r10_11 - 4, reinterpret_cast<unsigned char>(rbp8) < reinterpret_cast<unsigned char>(r10_11)) && !*reinterpret_cast<void***>(r10_11)) {
        --esi6;
    }
    *reinterpret_cast<void***>(r12_4 + 20) = esi6;
    eax37 = fun_14000a2e0(r12_4, r11_5);
    if (reinterpret_cast<int32_t>(eax37) >= reinterpret_cast<int32_t>(0)) 
        goto addr_140008122_6;
    goto addr_140008164_5;
}

int64_t _errno = 0x1050e;

int32_t* fun_14000ae68(int64_t rcx, ...) {
    goto _errno;
}

int64_t ___mb_cur_max_func = 0x10484;

int32_t fun_14000ae30() {
    goto ___mb_cur_max_func;
}

int64_t ___lc_codepage_func = 0x1046e;

int32_t fun_14000ae28() {
    goto ___lc_codepage_func;
}

int64_t WideCharToMultiByte = 0x10440;

int32_t fun_14000a8e0(signed char* rcx, uint16_t dx, int32_t r8d, int32_t r9d) {
    int64_t rcx5;
    int32_t eax6;
    int32_t* rax7;

    *reinterpret_cast<int32_t*>(&rcx5) = r8d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    if (r8d) {
        eax6 = reinterpret_cast<int32_t>(WideCharToMultiByte(rcx5));
        if (!eax6 || !1) {
            addr_14000a954_3:
            rax7 = fun_14000ae68(rcx5, rcx5);
            *rax7 = 42;
            return -1;
        } else {
            addr_14000a902_4:
            return eax6;
        }
    } else {
        if (dx > 0xff) 
            goto addr_14000a954_3;
        *rcx = *reinterpret_cast<signed char*>(&dx);
        eax6 = 1;
        goto addr_14000a902_4;
    }
}

int64_t MultiByteToWideChar = 0x103d4;

int64_t IsDBCSLeadByteEx = 0x103a8;

int32_t fun_14000aac0(void** rcx, unsigned char* rdx, uint64_t r8, void** r9) {
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
                goto addr_14000ab78_8;
            if (*reinterpret_cast<signed char*>(&eax6)) 
                goto addr_14000abb0_10; else 
                goto addr_14000ab09_11;
        }
    }
    addr_14000ab9f_12:
    return eax5;
    addr_14000abb0_10:
    r8_9 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 72 + 60);
    addr_14000ab4e_13:
    *reinterpret_cast<int32_t*>(&rcx10) = v11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    eax12 = reinterpret_cast<int32_t>(MultiByteToWideChar(rcx10, 8, r8_9, 2));
    if (eax12) {
        return 2;
    }
    addr_14000ab09_11:
    *reinterpret_cast<int32_t*>(&rcx13) = v14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
    eax15 = reinterpret_cast<int32_t>(IsDBCSLeadByteEx(rcx13));
    if (!eax15) {
        addr_14000ab78_8:
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
            goto addr_14000ab9f_12;
        } else {
            r8_9 = rdx;
            goto addr_14000ab4e_13;
        }
    }
    *reinterpret_cast<int32_t*>(&rcx10) = v19;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    eax20 = reinterpret_cast<int32_t>(MultiByteToWideChar(rcx10, 8, rdx, 1));
    if (!eax20) {
        rax21 = fun_14000ae68(rcx10, rcx10);
        *rax21 = 42;
        eax5 = -1;
        goto addr_14000ab9f_12;
    } else {
        eax5 = 1;
        goto addr_14000ab9f_12;
    }
}

int64_t __setusermatherr = 0x104d6;

void fun_1400050d0(int64_t rcx) {
    g14000f0b0 = rcx;
    goto __setusermatherr;
}

int64_t __getmainargs = 0x1049a;

void fun_14000ae38(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
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

void fun_140004d40(void** rcx, void** rdx, void** r8, void** r9) {
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

    *reinterpret_cast<int32_t*>(&rsi5) = g14000f0a0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rsi5)) 
        goto addr_140004d5f_2;
    g14000f0a0 = 1;
    fun_1400056d0(rcx, rdx, r8, r9);
    rax6 = fun_140005910(rcx);
    rdi7 = g14000c840;
    rbx8 = g14000c850;
    g14000f0a4 = 0;
    rsp9 = reinterpret_cast<struct s45*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 - rax6);
    g14000f0a8 = reinterpret_cast<struct s5*>(&rsp9->f30);
    rax10 = reinterpret_cast<uint64_t>(rdi7) - reinterpret_cast<uint64_t>(rbx8);
    if (reinterpret_cast<int64_t>(rax10) <= reinterpret_cast<int64_t>(7)) 
        goto addr_140004d5f_2;
    if (reinterpret_cast<int64_t>(rax10) > reinterpret_cast<int64_t>(11)) {
        if (rbx8->f0) 
            goto addr_140005008_6;
        eax11 = rbx8->f4;
        if (!(eax11 | rbx8->f8)) 
            goto addr_140004f6e_8;
    } else {
        addr_140004dd5_9:
        if (rbx8->f0) 
            goto addr_140005008_6; else 
            goto addr_140004ddf_10;
    }
    addr_140004de2_11:
    if (eax11) {
        addr_140005008_6:
        if (reinterpret_cast<uint64_t>(rbx8) >= reinterpret_cast<uint64_t>(rdi7)) {
            addr_140004d5f_2:
            return;
        } else {
            r14_12 = g14000c830;
            do {
                *reinterpret_cast<uint32_t*>(&r12_13) = rbx8->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = 0;
                rbx8 = reinterpret_cast<struct s10*>(&rbx8->f8);
                r12_14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r12_13) + reinterpret_cast<uint64_t>(r14_12));
                r13d15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(rbx8->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_14)));
                rsp16 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                *rsp16 = 0x14000503a;
                fun_140004bd0(r12_14);
                rsp9 = reinterpret_cast<struct s45*>(rsp16 + 1);
                *reinterpret_cast<void***>(r12_14) = r13d15;
            } while (reinterpret_cast<uint64_t>(rbx8) < reinterpret_cast<uint64_t>(rdi7));
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rdx17) = rbx8->f8;
        *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx17) != 1) {
            addr_140005068_16:
            rsp18 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
            *rsp18 = 0x140005074;
            fun_140004b60("  Unknown pseudo relocation protocol version %d.\n", rdx17, r8, r9);
            rsp19 = reinterpret_cast<struct s46*>(rsp18 + 1 - 11);
            rax20 = g14000f0b0;
            if (rax20) {
                rdi7->f0 = rsi5->f0;
                rdi21 = reinterpret_cast<struct s13*>(&rdi7->f4);
                rsi22 = reinterpret_cast<struct s47*>(&rsi5->f4);
                rsp19->f20 = 0x4000c380;
                rsp19->f28 = rdx17;
                rdi21->f0 = rsi22->f0;
                rdi23 = reinterpret_cast<struct s15*>(&rdi21->f4);
                rsi24 = reinterpret_cast<struct s48*>(&rsi22->f4);
                rdi23->f0 = rsi24->f0;
                rdi23->f4 = rsi24->f4;
                rsp25 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp19) - 8);
                *rsp25 = 0x1400050bb;
                rax20(&rsp19->f20);
                rsp19 = reinterpret_cast<struct s46*>(rsp25 + 1);
                goto addr_1400050bc_30;
            }
        } else {
            rbx26 = rbx8 + 1;
            if (reinterpret_cast<uint64_t>(rbx26) >= reinterpret_cast<uint64_t>(rdi7)) 
                goto addr_140004d5f_2;
            r15_27 = g14000c830;
            do {
                addr_140004e73_33:
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
                        goto addr_140004ff1_37;
                    if (reinterpret_cast<signed char>(r13_36) <= reinterpret_cast<signed char>(0xffffffff7fffffff)) 
                        goto addr_140005054_39;
                    if (reinterpret_cast<signed char>(r13_36) > reinterpret_cast<signed char>(0xffffffff)) 
                        goto addr_140005054_39;
                    addr_140004ff1_37:
                    rsp37 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                    *rsp37 = 0x140004ff9;
                    fun_140004bd0(r14_32);
                    rsp9 = reinterpret_cast<struct s45*>(rsp37 + 1);
                    *reinterpret_cast<void***>(r14_32) = r13_36;
                    continue;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rdx17) > 32) {
                        if (*reinterpret_cast<uint32_t*>(&rdx17) != 64) 
                            goto addr_140005048_43;
                        r13_36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_32)) - reinterpret_cast<uint64_t>(rcx31) + reinterpret_cast<unsigned char>(r9));
                        if (*reinterpret_cast<uint32_t*>(&r8_29) & 0xc0) 
                            goto addr_140004fa5_45;
                        if (reinterpret_cast<signed char>(r13_36) >= reinterpret_cast<signed char>(0)) 
                            goto addr_140005054_39;
                        addr_140004fa5_45:
                        rsp38 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                        *rsp38 = 0x140004fad;
                        fun_140004bd0(r14_32);
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
                                goto addr_140004e5b_51;
                            if (reinterpret_cast<signed char>(r13_36) < reinterpret_cast<signed char>(0xffffffffffffff80)) 
                                goto addr_140005054_39;
                            if (reinterpret_cast<signed char>(r13_36) > reinterpret_cast<signed char>(0xff)) 
                                goto addr_140005054_39;
                            addr_140004e5b_51:
                            rsp40 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                            *rsp40 = 0x140004e63;
                            fun_140004bd0(r14_32);
                            rsp9 = reinterpret_cast<struct s45*>(rsp40 + 1);
                            *reinterpret_cast<void***>(r14_32) = r13_36;
                            continue;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rdx17) != 16) 
                                goto addr_140005048_43;
                            *reinterpret_cast<uint32_t*>(&rax41) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_32));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
                            if (*reinterpret_cast<int16_t*>(&rax41) >= 0) 
                                goto addr_140004ebc_56;
                        }
                    }
                }
                rax41 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax41) | 0xffffffffffff0000);
                addr_140004ebc_56:
                r13_36 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax41) - reinterpret_cast<uint64_t>(rcx31) + reinterpret_cast<unsigned char>(r9));
                if (*reinterpret_cast<uint32_t*>(&r8_29) & 0xc0) 
                    goto addr_140004ee6_58;
                if (reinterpret_cast<signed char>(r13_36) < reinterpret_cast<signed char>(0xffffffffffff8000)) 
                    goto addr_140005054_39;
                if (reinterpret_cast<signed char>(r13_36) > reinterpret_cast<signed char>(0xffff)) 
                    goto addr_140005054_39;
                addr_140004ee6_58:
                ++rbx26;
                rsp42 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                *rsp42 = 0x140004ef2;
                fun_140004bd0(r14_32);
                rsp9 = reinterpret_cast<struct s45*>(rsp42 + 1);
                *reinterpret_cast<void***>(r14_32) = r13_36;
                if (reinterpret_cast<uint64_t>(rbx26) < reinterpret_cast<uint64_t>(rdi7)) 
                    goto addr_140004e73_33; else 
                    goto addr_140004eff_61;
                ++rbx26;
            } while (reinterpret_cast<uint64_t>(rbx26) < reinterpret_cast<uint64_t>(rdi7));
        }
    }
    addr_140004f00_63:
    edx43 = g14000f0a4;
    if (!(reinterpret_cast<uint1_t>(edx43 < 0) | reinterpret_cast<uint1_t>(edx43 == 0))) {
        rdi44 = VirtualProtect;
        *reinterpret_cast<int32_t*>(&rbx45) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx45) + 4) = 0;
        do {
            rax46 = g14000f0a8;
            rax47 = reinterpret_cast<struct s49*>(reinterpret_cast<uint64_t>(rax46) + reinterpret_cast<uint64_t>(rbx45));
            if (rax47->f0) {
                rdx48 = rax47->f10;
                rcx49 = rax47->f8;
                rsp50 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                *rsp50 = 0x140004f3f;
                rdi44(rcx49, rdx48);
                rsp9 = reinterpret_cast<struct s45*>(rsp50 + 1);
            }
            *reinterpret_cast<int32_t*>(&rsi5) = *reinterpret_cast<int32_t*>(&rsi5) + 1;
            rbx45 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx45) + 40);
            less51 = *reinterpret_cast<int32_t*>(&rsi5) < g14000f0a4;
        } while (less51);
        goto addr_140004d5f_2;
    }
    addr_1400050bc_30:
    goto rsp19->f58;
    addr_140005054_39:
    rsp9->f20 = r13_36;
    r8 = r14_32;
    rsp52 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
    *rsp52 = 0x140005068;
    fun_140004b60("%d bit pseudo relocation at %p out of range, targeting %p, yielding the value %p.\n", rdx17, r8, r9);
    rsp9 = reinterpret_cast<struct s45*>(rsp52 + 1);
    goto addr_140005068_16;
    addr_140005048_43:
    rsp53 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
    *rsp53 = 0x140005054;
    fun_140004b60("  Unknown pseudo relocation bit size %d.\n", rdx17, r8_29, r9);
    rsp9 = reinterpret_cast<struct s45*>(rsp53 + 1);
    goto addr_140005054_39;
    addr_140004eff_61:
    goto addr_140004f00_63;
    addr_140004f6e_8:
    ++rbx8;
    goto addr_140004dd5_9;
    addr_140004ddf_10:
    eax11 = rbx8->f4;
    goto addr_140004de2_11;
}

int64_t g14000fb60;

int64_t fun_14000a8b0(int64_t rcx) {
    int64_t tmp64_2;

    tmp64_2 = g14000fb60;
    g14000fb60 = rcx;
    return tmp64_2;
}

void fun_140004b50(int64_t rcx, void** rdx) {
    __asm__("fninit ");
    return;
}

int64_t fun_1400014a0(int64_t rcx, int64_t rdx, int64_t r8, void** r9);

int64_t g14000b210 = 0x14000a8c0;

int64_t fun_140005950(void** rcx, void** rdx, void** r8, void** r9);

int64_t fun_1400014f0(int32_t ecx) {
    int64_t rbx2;
    int64_t r8_3;
    int32_t edi4;
    void** r9_5;
    int64_t r8_6;
    int32_t ebp7;
    void** r9_8;
    int64_t r8_9;
    int64_t rdi10;
    int32_t esi11;
    void** r9_12;
    int64_t r8_13;
    void** r9_14;
    int64_t r8_15;
    int64_t rbp16;
    int64_t r13_17;
    void** r9_18;
    int64_t r8_19;
    void** r9_20;
    int64_t r8_21;
    int64_t rdi22;
    int64_t r8_23;
    void** r9_24;
    void** r9_25;
    int64_t r8_26;
    int32_t esi27;
    void** r9_28;
    int64_t r8_29;
    int64_t rsi30;
    void** r9_31;
    int64_t r8_32;
    void** r9_33;
    int64_t r8_34;
    void** r9_35;
    int64_t r8_36;
    void** r9_37;
    int64_t r8_38;
    void** r9_39;
    int64_t rdi40;
    int64_t r8_41;
    int64_t r8_42;
    void** r9_43;
    void** r9_44;
    int64_t r8_45;
    void** r9_46;
    int64_t r8_47;
    void** r9_48;
    int64_t r8_49;
    void** r9_50;
    int64_t r8_51;
    void** r9_52;
    void** rax53;
    int64_t rax54;

    *reinterpret_cast<int32_t*>(&rbx2) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_3) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_3) + 4) = 0;
    fun_1400014a0(0x14000c000, 0, r8_3, 0);
    edi4 = static_cast<int32_t>(rbx2 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_5) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(&r9_5 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_6) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_6) + 4) = 0;
    ebp7 = static_cast<int32_t>(rbx2 * 4);
    fun_1400014a0(0x14000c000, 1, r8_6, r9_5);
    *reinterpret_cast<int32_t*>(&r9_8) = edi4;
    *reinterpret_cast<int32_t*>(&r9_8 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_9) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi10) = edi4 + *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = 0;
    esi11 = static_cast<int32_t>(rbx2 * 8);
    fun_1400014a0(0x14000c000, 2, r8_9, r9_8);
    *reinterpret_cast<int32_t*>(&r9_12) = *reinterpret_cast<int32_t*>(&rdi10);
    *reinterpret_cast<int32_t*>(&r9_12 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_13) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = 0;
    fun_1400014a0(0x14000c000, 3, r8_13, r9_12);
    *reinterpret_cast<int32_t*>(&r9_14) = ebp7;
    *reinterpret_cast<int32_t*>(&r9_14 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_15) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rbp16) = ebp7 + *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp16) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r13_17) = static_cast<int32_t>(rbp16 + rbp16);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r13_17) + 4) = 0;
    fun_1400014a0(0x14000c000, 4, r8_15, r9_14);
    *reinterpret_cast<int32_t*>(&r9_18) = *reinterpret_cast<int32_t*>(&rbp16);
    *reinterpret_cast<int32_t*>(&r9_18 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_19) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_19) + 4) = 0;
    fun_1400014a0(0x14000c000, 5, r8_19, r9_18);
    *reinterpret_cast<int32_t*>(&r9_20) = static_cast<int32_t>(rdi10 + rdi10);
    *reinterpret_cast<int32_t*>(&r9_20 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_21) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_21) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi22) = *reinterpret_cast<int32_t*>(&rdi10) << 2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = 0;
    fun_1400014a0(0x14000c000, 6, r8_21, r9_20);
    *reinterpret_cast<int32_t*>(&r8_23) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_23) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_24) = esi11 - *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(&r9_24 + 4) = 0;
    fun_1400014a0(0x14000c000, 7, r8_23, r9_24);
    *reinterpret_cast<int32_t*>(&r9_25) = esi11;
    *reinterpret_cast<int32_t*>(&r9_25 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_26) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_26) + 4) = 0;
    esi27 = esi11 + *reinterpret_cast<int32_t*>(&rbx2);
    fun_1400014a0(0x14000c000, 8, r8_26, r9_25);
    *reinterpret_cast<int32_t*>(&r9_28) = esi27;
    *reinterpret_cast<int32_t*>(&r9_28 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_29) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_29) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi30) = esi27 + esi27;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = 0;
    fun_1400014a0(0x14000c000, 9, r8_29, r9_28);
    *reinterpret_cast<int32_t*>(&r9_31) = *reinterpret_cast<int32_t*>(&r13_17);
    *reinterpret_cast<int32_t*>(&r9_31 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_32) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_32) + 4) = 0;
    fun_1400014a0(0x14000c000, 10, r8_32, r9_31);
    *reinterpret_cast<int32_t*>(&r9_33) = static_cast<int32_t>(r13_17 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_33 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_34) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_34) + 4) = 0;
    fun_1400014a0(0x14000c000, 11, r8_34, r9_33);
    *reinterpret_cast<int32_t*>(&r9_35) = *reinterpret_cast<int32_t*>(&rdi22);
    *reinterpret_cast<int32_t*>(&r9_35 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_36) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_36) + 4) = 0;
    fun_1400014a0(0x14000c000, 12, r8_36, r9_35);
    *reinterpret_cast<int32_t*>(&r9_37) = static_cast<int32_t>(rdi22 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_37 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_38) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_38) + 4) = 0;
    fun_1400014a0(0x14000c000, 13, r8_38, r9_37);
    *reinterpret_cast<int32_t*>(&r9_39) = *reinterpret_cast<int32_t*>(&rbx2) * 14;
    *reinterpret_cast<int32_t*>(&r9_39 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi40) = *reinterpret_cast<int32_t*>(&rbx2) << 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_41) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_41) + 4) = 0;
    fun_1400014a0(0x14000c000, 14, r8_41, r9_39);
    *reinterpret_cast<int32_t*>(&r8_42) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_42) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_43) = *reinterpret_cast<int32_t*>(&rdi40) - *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(&r9_43 + 4) = 0;
    fun_1400014a0(0x14000c000, 15, r8_42, r9_43);
    *reinterpret_cast<int32_t*>(&r9_44) = *reinterpret_cast<int32_t*>(&rdi40);
    *reinterpret_cast<int32_t*>(&r9_44 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_45) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_45) + 4) = 0;
    fun_1400014a0(0x14000c000, 16, r8_45, r9_44);
    *reinterpret_cast<int32_t*>(&r9_46) = static_cast<int32_t>(rdi40 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_46 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_47) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_47) + 4) = 0;
    fun_1400014a0(0x14000c000, 17, r8_47, r9_46);
    *reinterpret_cast<int32_t*>(&r9_48) = *reinterpret_cast<int32_t*>(&rsi30);
    *reinterpret_cast<int32_t*>(&r9_48 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_49) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_49) + 4) = 0;
    fun_1400014a0(0x14000c000, 18, r8_49, r9_48);
    *reinterpret_cast<int32_t*>(&r9_50) = static_cast<int32_t>(rsi30 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_50 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_51) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_51) + 4) = 0;
    fun_1400014a0(0x14000c000, 19, r8_51, r9_50);
    *reinterpret_cast<int32_t*>(&r9_52) = static_cast<int32_t>(rbp16 * 4);
    *reinterpret_cast<int32_t*>(&r9_52 + 4) = 0;
    rax53 = reinterpret_cast<void**>(g14000b210(1));
    rax54 = fun_140005950(rax53, 0x14000c000, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 + 40 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 48 + 72, r9_52);
    return rax54;
}

unsigned char g14000b040 = 73;

unsigned char g14000b041 = 0x6e;

signed char g14000b042 = 32;

signed char g14000b043 = 99;

signed char g14000b044 = 0x72;

signed char g14000b045 = 0x79;

signed char g14000b046 = 0x70;

signed char g14000b047 = 0x74;

signed char g14000b048 = 0x6f;

signed char g14000b049 = 0x67;

signed char g14000b04a = 0x72;

signed char g14000b04b = 97;

signed char g14000b04c = 0x70;

signed char g14000b04d = 0x68;

signed char g14000b04e = 0x79;

signed char g14000b04f = 44;

signed char g14000b050 = 32;

signed char g14000b051 = 82;

signed char g14000b052 = 67;

signed char g14000b053 = 52;

signed char g14000b054 = 32;

signed char g14000b055 = 40;

signed char g14000b056 = 82;

signed char g14000b057 = 0x69;

signed char g14000b058 = 0x76;

signed char g14000b059 = 0x65;

signed char g14000b05a = 0x73;

signed char g14000b05b = 0x74;

signed char g14000b05c = 32;

signed char g14000b05d = 67;

signed char g14000b05e = 0x69;

signed char g14000b05f = 0x70;

signed char g14000b060 = 0x68;

signed char g14000b061 = 0x65;

signed char g14000b062 = 0x72;

signed char g14000b063 = 32;

signed char g14000b064 = 52;

signed char g14000b065 = 44;

signed char g14000b066 = 32;

signed char g14000b067 = 97;

signed char g14000b068 = 0x6c;

signed char g14000b069 = 0x73;

signed char g14000b06a = 0x6f;

signed char g14000b06b = 32;

signed char g14000b06c = 0x6b;

signed char g14000b06d = 0x6e;

signed char g14000b06e = 0x6f;

signed char g14000b06f = 0x77;

signed char g14000b070 = 0x6e;

signed char g14000b071 = 32;

signed char g14000b072 = 97;

signed char g14000b073 = 0x73;

signed char g14000b074 = 32;

signed char g14000b075 = 65;

signed char g14000b076 = 82;

signed char g14000b077 = 67;

signed char g14000b078 = 52;

signed char g14000b079 = 32;

signed char g14000b07a = 0x6f;

signed char g14000b07b = 0x72;

signed char g14000b07c = 32;

signed char g14000b07d = 65;

signed char g14000b07e = 82;

signed char g14000b07f = 67;

signed char g14000b080 = 70;

signed char g14000b081 = 79;

signed char g14000b082 = 85;

signed char g14000b083 = 82;

signed char g14000b084 = 44;

signed char g14000b085 = 32;

signed char g14000b086 = 0x6d;

signed char g14000b087 = 0x65;

signed char g14000b088 = 97;

signed char g14000b089 = 0x6e;

signed char g14000b08a = 0x69;

signed char g14000b08b = 0x6e;

signed char g14000b08c = 0x67;

signed char g14000b08d = 32;

signed char g14000b08e = 65;

signed char g14000b08f = 0x6c;

signed char g14000b090 = 0x6c;

signed char g14000b091 = 0x65;

signed char g14000b092 = 0x67;

signed char g14000b093 = 0x65;

signed char g14000b094 = 100;

signed char g14000b095 = 32;

signed char g14000b096 = 82;

signed char g14000b097 = 67;

signed char g14000b098 = 52;

signed char g14000b099 = 44;

signed char g14000b09a = 32;

signed char g14000b09b = 0x73;

signed char g14000b09c = 0x65;

signed char g14000b09d = 0x65;

signed char g14000b09e = 32;

signed char g14000b09f = 98;

signed char g14000b0a0 = 0x65;

signed char g14000b0a1 = 0x6c;

signed char g14000b0a2 = 0x6f;

signed char g14000b0a3 = 0x77;

signed char g14000b0a4 = 41;

signed char g14000b0a5 = 32;

signed char g14000b0a6 = 0x69;

signed char g14000b0a7 = 0x73;

signed char g14000b0a8 = 32;

signed char g14000b0a9 = 97;

signed char g14000b0aa = 32;

signed char g14000b0ab = 0x73;

signed char g14000b0ac = 0x74;

signed char g14000b0ad = 0x72;

signed char g14000b0ae = 0x65;

signed char g14000b0af = 97;

signed char g14000b0b0 = 0x6d;

signed char g14000b0b1 = 32;

signed char g14000b0b2 = 99;

signed char g14000b0b3 = 0x69;

signed char g14000b0b4 = 0x70;

signed char g14000b0b5 = 0x68;

signed char g14000b0b6 = 0x65;

signed char g14000b0b7 = 0x72;

signed char g14000b0b8 = 46;

signed char g14000b0b9 = 32;

signed char g14000b0ba = 87;

signed char g14000b0bb = 0x68;

signed char g14000b0bc = 0x69;

signed char g14000b0bd = 0x6c;

signed char g14000b0be = 0x65;

signed char g14000b0bf = 32;

signed char g14000b0c0 = 0x69;

signed char g14000b0c1 = 0x74;

signed char g14000b0c2 = 32;

signed char g14000b0c3 = 0x69;

signed char g14000b0c4 = 0x73;

signed char g14000b0c5 = 32;

signed char g14000b0c6 = 0x72;

signed char g14000b0c7 = 0x65;

signed char g14000b0c8 = 0x6d;

signed char g14000b0c9 = 97;

signed char g14000b0ca = 0x72;

signed char g14000b0cb = 0x6b;

signed char g14000b0cc = 97;

signed char g14000b0cd = 98;

signed char g14000b0ce = 0x6c;

signed char g14000b0cf = 0x65;

signed char g14000b0d0 = 32;

signed char g14000b0d1 = 0x66;

signed char g14000b0d2 = 0x6f;

signed char g14000b0d3 = 0x72;

signed char g14000b0d4 = 32;

signed char g14000b0d5 = 0x69;

signed char g14000b0d6 = 0x74;

signed char g14000b0d7 = 0x73;

signed char g14000b0d8 = 32;

signed char g14000b0d9 = 0x73;

signed char g14000b0da = 0x69;

signed char g14000b0db = 0x6d;

signed char g14000b0dc = 0x70;

signed char g14000b0dd = 0x6c;

signed char g14000b0de = 0x69;

signed char g14000b0df = 99;

signed char g14000b0e0 = 0x69;

signed char g14000b0e1 = 0x74;

signed char g14000b0e2 = 0x79;

signed char g14000b0e3 = 32;

signed char g14000b0e4 = 97;

signed char g14000b0e5 = 0x6e;

signed char g14000b0e6 = 100;

signed char g14000b0e7 = 32;

signed char g14000b0e8 = 0x73;

signed char g14000b0e9 = 0x70;

signed char g14000b0ea = 0x65;

signed char g14000b0eb = 0x65;

signed char g14000b0ec = 100;

signed char g14000b0ed = 32;

signed char g14000b0ee = 0x69;

signed char g14000b0ef = 0x6e;

signed char g14000b0f0 = 32;

signed char g14000b0f1 = 0x73;

signed char g14000b0f2 = 0x6f;

signed char g14000b0f3 = 0x66;

signed char g14000b0f4 = 0x74;

signed char g14000b0f5 = 0x77;

signed char g14000b0f6 = 97;

signed char g14000b0f7 = 0x72;

signed char g14000b0f8 = 0x65;

signed char g14000b0f9 = 44;

signed char g14000b0fa = 32;

signed char g14000b0fb = 0x6d;

signed char g14000b0fc = 0x75;

signed char g14000b0fd = 0x6c;

signed char g14000b0fe = 0x74;

signed char g14000b0ff = 0x69;

signed char g14000b100 = 0x70;

signed char g14000b101 = 0x6c;

signed char g14000b102 = 0x65;

signed char g14000b103 = 32;

signed char g14000b104 = 0x76;

signed char g14000b105 = 0x75;

signed char g14000b106 = 0x6c;

signed char g14000b107 = 0x6e;

signed char g14000b108 = 0x65;

signed char g14000b109 = 0x72;

signed char g14000b10a = 97;

signed char g14000b10b = 98;

signed char g14000b10c = 0x69;

signed char g14000b10d = 0x6c;

signed char g14000b10e = 0x69;

signed char g14000b10f = 0x74;

signed char g14000b110 = 0x69;

signed char g14000b111 = 0x65;

signed char g14000b112 = 0x73;

signed char g14000b113 = 32;

signed char g14000b114 = 0x68;

signed char g14000b115 = 97;

signed char g14000b116 = 0x76;

signed char g14000b117 = 0x65;

signed char g14000b118 = 32;

signed char g14000b119 = 98;

signed char g14000b11a = 0x65;

signed char g14000b11b = 0x65;

signed char g14000b11c = 0x6e;

signed char g14000b11d = 32;

signed char g14000b11e = 100;

signed char g14000b11f = 0x69;

signed char g14000b120 = 0x73;

signed char g14000b121 = 99;

signed char g14000b122 = 0x6f;

signed char g14000b123 = 0x76;

signed char g14000b124 = 0x65;

signed char g14000b125 = 0x72;

signed char g14000b126 = 0x65;

signed char g14000b127 = 100;

signed char g14000b128 = 32;

signed char g14000b129 = 0x69;

signed char g14000b12a = 0x6e;

signed char g14000b12b = 32;

signed char g14000b12c = 82;

signed char g14000b12d = 67;

signed char g14000b12e = 52;

signed char g14000b12f = 44;

signed char g14000b130 = 32;

signed char g14000b131 = 0x72;

signed char g14000b132 = 0x65;

signed char g14000b133 = 0x6e;

signed char g14000b134 = 100;

signed char g14000b135 = 0x65;

signed char g14000b136 = 0x72;

signed char g14000b137 = 0x69;

signed char g14000b138 = 0x6e;

signed char g14000b139 = 0x67;

signed char g14000b13a = 32;

signed char g14000b13b = 0x69;

signed char g14000b13c = 0x74;

signed char g14000b13d = 32;

signed char g14000b13e = 0x69;

signed char g14000b13f = 0x6e;

int64_t fun_140001450(void** rcx, void* rdx, int64_t r8, void** r9);

int64_t fun_1400016e0(int64_t rcx) {
    void* rsp2;
    int64_t rax3;
    int64_t rdx4;
    uint32_t eax5;
    uint32_t ecx6;
    unsigned char v7;
    uint32_t eax8;
    int64_t rdx9;
    unsigned char tmp8_10;
    uint32_t r8d11;
    uint32_t ecx12;
    unsigned char v13;
    uint32_t eax14;
    int64_t rdx15;
    unsigned char tmp8_16;
    uint32_t r8d17;
    uint32_t ecx18;
    unsigned char v19;
    uint32_t eax20;
    int64_t rdx21;
    unsigned char tmp8_22;
    uint32_t r8d23;
    uint32_t ecx24;
    unsigned char v25;
    uint32_t eax26;
    int64_t rdx27;
    unsigned char tmp8_28;
    uint32_t r8d29;
    uint32_t ecx30;
    unsigned char v31;
    uint32_t eax32;
    int64_t rdx33;
    unsigned char tmp8_34;
    uint32_t r8d35;
    uint32_t ecx36;
    unsigned char v37;
    uint32_t eax38;
    int64_t rdx39;
    uint32_t r8d40;
    uint32_t ecx41;
    unsigned char v42;
    unsigned char tmp8_43;
    uint32_t eax44;
    int64_t rdx45;
    unsigned char tmp8_46;
    uint32_t r8d47;
    uint32_t ecx48;
    unsigned char v49;
    uint32_t eax50;
    int64_t rdx51;
    unsigned char tmp8_52;
    uint32_t r8d53;
    uint32_t ecx54;
    unsigned char v55;
    uint32_t eax56;
    int64_t rdx57;
    unsigned char tmp8_58;
    uint32_t r8d59;
    uint32_t ecx60;
    unsigned char v61;
    uint32_t eax62;
    int64_t rdx63;
    unsigned char tmp8_64;
    uint32_t r8d65;
    uint32_t ecx66;
    unsigned char v67;
    uint32_t eax68;
    int64_t rdx69;
    unsigned char tmp8_70;
    uint32_t r8d71;
    uint32_t ecx72;
    unsigned char v73;
    uint32_t eax74;
    int64_t rdx75;
    uint32_t r8d76;
    uint32_t ecx77;
    unsigned char v78;
    unsigned char tmp8_79;
    uint32_t eax80;
    int64_t rdx81;
    unsigned char tmp8_82;
    uint32_t r8d83;
    uint32_t ecx84;
    unsigned char v85;
    uint32_t eax86;
    int64_t rdx87;
    unsigned char tmp8_88;
    uint32_t r8d89;
    uint32_t ecx90;
    unsigned char v91;
    uint32_t eax92;
    int64_t rdx93;
    unsigned char tmp8_94;
    uint32_t r8d95;
    uint32_t ecx96;
    unsigned char v97;
    uint32_t eax98;
    int64_t rdx99;
    unsigned char tmp8_100;
    uint32_t r8d101;
    uint32_t ecx102;
    unsigned char v103;
    uint32_t eax104;
    int64_t rdx105;
    unsigned char tmp8_106;
    uint32_t r8d107;
    uint32_t ecx108;
    unsigned char v109;
    uint32_t eax110;
    int64_t rdx111;
    unsigned char tmp8_112;
    uint32_t r8d113;
    uint32_t ecx114;
    unsigned char v115;
    uint32_t eax116;
    int64_t rdx117;
    uint32_t r8d118;
    uint32_t ecx119;
    unsigned char v120;
    unsigned char tmp8_121;
    uint32_t eax122;
    int64_t rdx123;
    unsigned char tmp8_124;
    uint32_t r8d125;
    uint32_t ecx126;
    unsigned char v127;
    uint32_t eax128;
    int64_t rdx129;
    unsigned char tmp8_130;
    uint32_t r8d131;
    uint32_t ecx132;
    unsigned char v133;
    uint32_t eax134;
    int64_t rdx135;
    unsigned char tmp8_136;
    uint32_t r8d137;
    uint32_t ecx138;
    unsigned char v139;
    uint32_t eax140;
    int64_t rdx141;
    unsigned char tmp8_142;
    uint32_t r8d143;
    uint32_t ecx144;
    unsigned char v145;
    uint32_t eax146;
    int64_t rdx147;
    unsigned char tmp8_148;
    uint32_t r8d149;
    uint32_t ecx150;
    unsigned char v151;
    uint32_t eax152;
    int64_t rdx153;
    uint32_t r8d154;
    uint32_t ecx155;
    unsigned char v156;
    unsigned char tmp8_157;
    uint32_t eax158;
    int64_t rdx159;
    unsigned char tmp8_160;
    uint32_t r8d161;
    uint32_t ecx162;
    unsigned char v163;
    uint32_t eax164;
    int64_t rdx165;
    unsigned char tmp8_166;
    uint32_t r8d167;
    uint32_t ecx168;
    unsigned char v169;
    uint32_t eax170;
    int64_t rdx171;
    unsigned char tmp8_172;
    uint32_t r8d173;
    uint32_t ecx174;
    unsigned char v175;
    uint32_t eax176;
    int64_t rdx177;
    unsigned char tmp8_178;
    uint32_t r8d179;
    uint32_t ecx180;
    unsigned char v181;
    uint32_t eax182;
    int64_t rdx183;
    unsigned char tmp8_184;
    uint32_t r8d185;
    uint32_t ecx186;
    unsigned char v187;
    uint32_t eax188;
    int64_t rdx189;
    unsigned char tmp8_190;
    uint32_t r8d191;
    uint32_t ecx192;
    unsigned char v193;
    uint32_t eax194;
    int64_t rdx195;
    uint32_t r8d196;
    uint32_t ecx197;
    unsigned char v198;
    unsigned char tmp8_199;
    uint32_t eax200;
    int64_t rdx201;
    unsigned char tmp8_202;
    uint32_t r8d203;
    uint32_t ecx204;
    unsigned char v205;
    uint32_t eax206;
    int64_t rdx207;
    unsigned char tmp8_208;
    uint32_t r8d209;
    uint32_t ecx210;
    unsigned char v211;
    uint32_t eax212;
    int64_t rdx213;
    unsigned char tmp8_214;
    uint32_t r8d215;
    uint32_t ecx216;
    unsigned char v217;
    uint32_t eax218;
    int64_t rdx219;
    unsigned char tmp8_220;
    uint32_t r8d221;
    uint32_t ecx222;
    unsigned char v223;
    uint32_t eax224;
    int64_t rdx225;
    unsigned char tmp8_226;
    uint32_t r8d227;
    uint32_t ecx228;
    unsigned char v229;
    uint32_t eax230;
    int64_t rdx231;
    uint32_t r8d232;
    uint32_t ecx233;
    unsigned char v234;
    unsigned char tmp8_235;
    uint32_t eax236;
    int64_t rdx237;
    unsigned char tmp8_238;
    uint32_t r8d239;
    uint32_t ecx240;
    unsigned char v241;
    uint32_t eax242;
    int64_t rdx243;
    unsigned char tmp8_244;
    uint32_t r8d245;
    uint32_t ecx246;
    unsigned char v247;
    uint32_t eax248;
    int64_t rdx249;
    unsigned char tmp8_250;
    uint32_t r8d251;
    uint32_t ecx252;
    unsigned char v253;
    uint32_t eax254;
    int64_t rdx255;
    unsigned char tmp8_256;
    uint32_t r8d257;
    uint32_t ecx258;
    unsigned char v259;
    uint32_t eax260;
    int64_t rdx261;
    unsigned char tmp8_262;
    uint32_t r8d263;
    uint32_t ecx264;
    unsigned char v265;
    uint32_t eax266;
    int64_t rdx267;
    unsigned char tmp8_268;
    uint32_t r8d269;
    uint32_t ecx270;
    unsigned char v271;
    uint32_t eax272;
    int64_t rdx273;
    uint32_t r8d274;
    uint32_t ecx275;
    unsigned char v276;
    unsigned char tmp8_277;
    uint32_t eax278;
    int64_t rdx279;
    unsigned char tmp8_280;
    uint32_t r8d281;
    uint32_t ecx282;
    unsigned char v283;
    uint32_t eax284;
    int64_t rdx285;
    unsigned char tmp8_286;
    uint32_t r8d287;
    uint32_t ecx288;
    unsigned char v289;
    uint32_t eax290;
    int64_t rdx291;
    unsigned char tmp8_292;
    uint32_t r8d293;
    uint32_t ecx294;
    unsigned char v295;
    uint32_t eax296;
    int64_t rdx297;
    unsigned char tmp8_298;
    uint32_t r8d299;
    uint32_t ecx300;
    unsigned char v301;
    uint32_t eax302;
    int64_t rdx303;
    unsigned char tmp8_304;
    uint32_t r8d305;
    uint32_t ecx306;
    unsigned char v307;
    uint32_t eax308;
    int64_t rdx309;
    uint32_t r8d310;
    uint32_t ecx311;
    unsigned char v312;
    unsigned char tmp8_313;
    uint32_t eax314;
    int64_t rdx315;
    unsigned char tmp8_316;
    uint32_t r8d317;
    uint32_t ecx318;
    unsigned char v319;
    uint32_t eax320;
    int64_t rdx321;
    unsigned char tmp8_322;
    uint32_t r8d323;
    uint32_t ecx324;
    unsigned char v325;
    uint32_t eax326;
    int64_t rdx327;
    unsigned char tmp8_328;
    uint32_t r8d329;
    uint32_t ecx330;
    unsigned char v331;
    uint32_t eax332;
    int64_t rdx333;
    unsigned char tmp8_334;
    uint32_t r8d335;
    uint32_t ecx336;
    unsigned char v337;
    uint32_t eax338;
    int64_t rdx339;
    unsigned char tmp8_340;
    uint32_t r8d341;
    uint32_t ecx342;
    unsigned char v343;
    uint32_t eax344;
    int64_t rdx345;
    unsigned char tmp8_346;
    uint32_t r8d347;
    uint32_t ecx348;
    unsigned char v349;
    uint32_t eax350;
    int64_t rdx351;
    uint32_t r8d352;
    uint32_t ecx353;
    unsigned char v354;
    unsigned char tmp8_355;
    uint32_t eax356;
    int64_t rdx357;
    unsigned char tmp8_358;
    uint32_t r8d359;
    uint32_t ecx360;
    unsigned char v361;
    uint32_t eax362;
    int64_t rdx363;
    unsigned char tmp8_364;
    uint32_t r8d365;
    uint32_t ecx366;
    unsigned char v367;
    uint32_t eax368;
    int64_t rdx369;
    unsigned char tmp8_370;
    uint32_t r8d371;
    uint32_t ecx372;
    unsigned char v373;
    uint32_t eax374;
    int64_t rdx375;
    unsigned char tmp8_376;
    uint32_t r8d377;
    uint32_t ecx378;
    unsigned char v379;
    uint32_t eax380;
    int64_t rdx381;
    unsigned char tmp8_382;
    uint32_t ecx383;
    unsigned char v384;
    uint32_t eax385;
    int64_t rdx386;
    uint32_t ecx387;
    unsigned char v388;
    unsigned char tmp8_389;
    uint32_t eax390;
    int64_t rdx391;
    unsigned char tmp8_392;
    uint32_t ecx393;
    unsigned char v394;
    uint32_t eax395;
    int64_t rdx396;
    unsigned char tmp8_397;
    uint32_t ecx398;
    unsigned char v399;
    uint32_t eax400;
    int64_t rdx401;
    unsigned char tmp8_402;
    uint32_t ecx403;
    unsigned char v404;
    uint32_t eax405;
    int64_t rdx406;
    unsigned char tmp8_407;
    uint32_t ecx408;
    unsigned char v409;
    uint32_t eax410;
    int64_t rdx411;
    unsigned char tmp8_412;
    uint32_t ecx413;
    unsigned char v414;
    uint32_t eax415;
    int64_t rdx416;
    unsigned char tmp8_417;
    uint32_t ecx418;
    unsigned char v419;
    uint32_t eax420;
    int64_t rdx421;
    uint32_t ecx422;
    unsigned char v423;
    unsigned char tmp8_424;
    uint32_t eax425;
    int64_t rdx426;
    unsigned char tmp8_427;
    uint32_t ecx428;
    unsigned char v429;
    uint32_t eax430;
    int64_t rdx431;
    unsigned char tmp8_432;
    uint32_t ecx433;
    unsigned char v434;
    uint32_t eax435;
    int64_t rdx436;
    unsigned char tmp8_437;
    uint32_t ecx438;
    unsigned char v439;
    uint32_t eax440;
    int64_t rdx441;
    unsigned char tmp8_442;
    uint32_t ecx443;
    unsigned char v444;
    uint32_t eax445;
    int64_t rdx446;
    unsigned char tmp8_447;
    uint32_t ecx448;
    unsigned char v449;
    uint32_t eax450;
    int64_t rdx451;
    uint32_t ecx452;
    unsigned char v453;
    unsigned char tmp8_454;
    uint32_t eax455;
    int64_t rdx456;
    unsigned char tmp8_457;
    uint32_t ecx458;
    unsigned char v459;
    uint32_t eax460;
    int64_t rdx461;
    unsigned char tmp8_462;
    uint32_t ecx463;
    unsigned char v464;
    uint32_t eax465;
    int64_t rdx466;
    unsigned char tmp8_467;
    uint32_t ecx468;
    unsigned char v469;
    uint32_t eax470;
    int64_t rdx471;
    unsigned char tmp8_472;
    uint32_t ecx473;
    unsigned char v474;
    uint32_t eax475;
    int64_t rdx476;
    unsigned char tmp8_477;
    uint32_t ecx478;
    unsigned char v479;
    uint32_t eax480;
    int64_t rdx481;
    unsigned char tmp8_482;
    uint32_t ecx483;
    unsigned char v484;
    uint32_t eax485;
    int64_t rdx486;
    uint32_t ecx487;
    unsigned char v488;
    unsigned char tmp8_489;
    uint32_t eax490;
    int64_t rdx491;
    unsigned char tmp8_492;
    uint32_t ecx493;
    unsigned char v494;
    uint32_t eax495;
    int64_t rdx496;
    unsigned char tmp8_497;
    uint32_t ecx498;
    unsigned char v499;
    uint32_t eax500;
    int64_t rdx501;
    unsigned char tmp8_502;
    uint32_t ecx503;
    unsigned char v504;
    uint32_t eax505;
    int64_t rdx506;
    unsigned char tmp8_507;
    uint32_t ecx508;
    unsigned char v509;
    uint32_t eax510;
    int64_t rdx511;
    unsigned char tmp8_512;
    uint32_t ecx513;
    unsigned char v514;
    uint32_t eax515;
    int64_t rdx516;
    uint32_t ecx517;
    unsigned char v518;
    unsigned char tmp8_519;
    uint32_t eax520;
    int64_t rdx521;
    unsigned char tmp8_522;
    uint32_t ecx523;
    unsigned char v524;
    uint32_t eax525;
    int64_t rdx526;
    unsigned char tmp8_527;
    uint32_t ecx528;
    unsigned char v529;
    uint32_t eax530;
    int64_t rdx531;
    unsigned char tmp8_532;
    uint32_t ecx533;
    unsigned char v534;
    uint32_t eax535;
    int64_t rdx536;
    unsigned char tmp8_537;
    uint32_t ecx538;
    unsigned char v539;
    uint32_t eax540;
    int64_t rdx541;
    unsigned char tmp8_542;
    uint32_t ecx543;
    unsigned char v544;
    uint32_t eax545;
    int64_t rdx546;
    unsigned char tmp8_547;
    uint32_t ecx548;
    unsigned char v549;
    uint32_t eax550;
    int64_t rdx551;
    uint32_t ecx552;
    unsigned char v553;
    unsigned char tmp8_554;
    uint32_t eax555;
    int64_t rdx556;
    unsigned char tmp8_557;
    uint32_t ecx558;
    unsigned char v559;
    uint32_t eax560;
    int64_t rdx561;
    unsigned char tmp8_562;
    uint32_t ecx563;
    unsigned char v564;
    uint32_t eax565;
    int64_t rdx566;
    unsigned char tmp8_567;
    uint32_t ecx568;
    unsigned char v569;
    uint32_t eax570;
    int64_t rdx571;
    unsigned char tmp8_572;
    uint32_t ecx573;
    unsigned char v574;
    uint32_t eax575;
    int64_t rdx576;
    unsigned char tmp8_577;
    uint32_t ecx578;
    unsigned char v579;
    uint32_t eax580;
    int64_t rdx581;
    uint32_t ecx582;
    unsigned char v583;
    unsigned char tmp8_584;
    uint32_t eax585;
    int64_t rdx586;
    unsigned char tmp8_587;
    uint32_t ecx588;
    unsigned char v589;
    uint32_t eax590;
    int64_t rdx591;
    unsigned char tmp8_592;
    uint32_t ecx593;
    unsigned char v594;
    uint32_t eax595;
    int64_t rdx596;
    unsigned char tmp8_597;
    uint32_t ecx598;
    unsigned char v599;
    uint32_t eax600;
    int64_t rdx601;
    unsigned char tmp8_602;
    uint32_t ecx603;
    unsigned char v604;
    uint32_t eax605;
    int64_t rdx606;
    unsigned char tmp8_607;
    uint32_t ecx608;
    unsigned char v609;
    uint32_t eax610;
    int64_t rdx611;
    unsigned char tmp8_612;
    uint32_t ecx613;
    unsigned char v614;
    uint32_t eax615;
    int64_t rdx616;
    uint32_t ecx617;
    unsigned char v618;
    unsigned char tmp8_619;
    uint32_t eax620;
    int64_t rdx621;
    unsigned char tmp8_622;
    uint32_t ecx623;
    unsigned char v624;
    uint32_t eax625;
    int64_t rdx626;
    unsigned char tmp8_627;
    uint32_t ecx628;
    unsigned char v629;
    uint32_t eax630;
    int64_t rdx631;
    unsigned char tmp8_632;
    uint32_t ecx633;
    unsigned char v634;
    uint32_t eax635;
    int64_t rdx636;
    unsigned char tmp8_637;
    uint32_t ecx638;
    unsigned char v639;
    uint32_t eax640;
    int64_t rdx641;
    unsigned char tmp8_642;
    uint32_t ecx643;
    unsigned char v644;
    uint32_t eax645;
    int64_t rdx646;
    uint32_t ecx647;
    unsigned char v648;
    unsigned char tmp8_649;
    uint32_t eax650;
    int64_t rdx651;
    unsigned char tmp8_652;
    uint32_t ecx653;
    unsigned char v654;
    uint32_t eax655;
    int64_t rdx656;
    unsigned char tmp8_657;
    uint32_t ecx658;
    unsigned char v659;
    uint32_t eax660;
    int64_t rdx661;
    unsigned char tmp8_662;
    uint32_t ecx663;
    unsigned char v664;
    uint32_t eax665;
    int64_t rdx666;
    unsigned char tmp8_667;
    uint32_t ecx668;
    unsigned char v669;
    uint32_t eax670;
    int64_t rdx671;
    unsigned char tmp8_672;
    uint32_t ecx673;
    unsigned char v674;
    uint32_t eax675;
    int64_t rdx676;
    unsigned char tmp8_677;
    uint32_t ecx678;
    unsigned char v679;
    uint32_t eax680;
    int64_t rdx681;
    uint32_t ecx682;
    unsigned char v683;
    unsigned char tmp8_684;
    uint32_t eax685;
    int64_t rdx686;
    unsigned char tmp8_687;
    uint32_t ecx688;
    unsigned char v689;
    uint32_t eax690;
    int64_t rdx691;
    unsigned char tmp8_692;
    uint32_t ecx693;
    unsigned char v694;
    uint32_t eax695;
    int64_t rdx696;
    unsigned char tmp8_697;
    uint32_t ecx698;
    unsigned char v699;
    uint32_t eax700;
    int64_t rdx701;
    unsigned char tmp8_702;
    uint32_t ecx703;
    unsigned char v704;
    uint32_t eax705;
    int64_t rdx706;
    unsigned char tmp8_707;
    uint32_t ecx708;
    unsigned char v709;
    uint32_t eax710;
    int64_t rdx711;
    uint32_t ecx712;
    unsigned char v713;
    unsigned char tmp8_714;
    uint32_t eax715;
    int64_t rdx716;
    unsigned char tmp8_717;
    uint32_t ecx718;
    unsigned char v719;
    uint32_t eax720;
    int64_t rdx721;
    unsigned char tmp8_722;
    uint32_t ecx723;
    unsigned char v724;
    uint32_t eax725;
    int64_t rdx726;
    unsigned char tmp8_727;
    uint32_t ecx728;
    unsigned char v729;
    uint32_t eax730;
    int64_t rdx731;
    unsigned char tmp8_732;
    uint32_t ecx733;
    unsigned char v734;
    uint32_t eax735;
    int64_t rdx736;
    unsigned char tmp8_737;
    uint32_t ecx738;
    unsigned char v739;
    uint32_t eax740;
    int64_t rdx741;
    unsigned char tmp8_742;
    uint32_t ecx743;
    unsigned char v744;
    uint32_t eax745;
    int64_t rdx746;
    uint32_t ecx747;
    unsigned char v748;
    unsigned char tmp8_749;
    uint32_t eax750;
    int64_t rdx751;
    unsigned char tmp8_752;
    uint32_t ecx753;
    unsigned char v754;
    uint32_t eax755;
    int64_t rdx756;
    unsigned char tmp8_757;
    uint32_t ecx758;
    unsigned char v759;
    uint32_t eax760;
    int64_t rdx761;
    unsigned char tmp8_762;
    uint32_t ecx763;
    unsigned char v764;
    uint32_t eax765;
    int64_t rdx766;
    unsigned char tmp8_767;
    uint32_t ecx768;
    unsigned char v769;
    uint32_t eax770;
    int64_t rdx771;
    unsigned char tmp8_772;
    uint32_t ecx773;
    unsigned char v774;
    uint32_t eax775;
    int64_t rdx776;
    uint32_t ecx777;
    unsigned char v778;
    unsigned char tmp8_779;
    uint32_t eax780;
    int64_t rdx781;
    unsigned char tmp8_782;
    uint32_t ecx783;
    unsigned char v784;
    uint32_t eax785;
    int64_t rdx786;
    unsigned char tmp8_787;
    uint32_t ecx788;
    unsigned char v789;
    uint32_t eax790;
    int64_t rdx791;
    unsigned char tmp8_792;
    uint32_t ecx793;
    unsigned char v794;
    uint32_t eax795;
    int64_t rdx796;
    unsigned char tmp8_797;
    uint32_t ecx798;
    unsigned char v799;
    uint32_t eax800;
    int64_t rdx801;
    unsigned char tmp8_802;
    uint32_t ecx803;
    unsigned char v804;
    uint32_t eax805;
    int64_t rdx806;
    unsigned char tmp8_807;
    uint32_t ecx808;
    unsigned char v809;
    uint32_t eax810;
    int64_t rdx811;
    uint32_t ecx812;
    unsigned char v813;
    unsigned char tmp8_814;
    uint32_t eax815;
    int64_t rdx816;
    unsigned char tmp8_817;
    uint32_t ecx818;
    unsigned char v819;
    uint32_t eax820;
    int64_t rdx821;
    unsigned char tmp8_822;
    uint32_t ecx823;
    unsigned char v824;
    uint32_t eax825;
    int64_t rdx826;
    unsigned char tmp8_827;
    uint32_t ecx828;
    unsigned char v829;
    uint32_t eax830;
    int64_t rdx831;
    unsigned char tmp8_832;
    uint32_t ecx833;
    unsigned char v834;
    uint32_t eax835;
    int64_t rdx836;
    unsigned char tmp8_837;
    uint32_t ecx838;
    unsigned char v839;
    uint32_t eax840;
    int64_t rdx841;
    uint32_t ecx842;
    unsigned char v843;
    unsigned char tmp8_844;
    uint32_t eax845;
    int64_t rdx846;
    unsigned char tmp8_847;
    uint32_t ecx848;
    unsigned char v849;
    uint32_t eax850;
    int64_t rdx851;
    unsigned char tmp8_852;
    uint32_t ecx853;
    unsigned char v854;
    uint32_t eax855;
    int64_t rdx856;
    unsigned char tmp8_857;
    uint32_t ecx858;
    unsigned char v859;
    uint32_t eax860;
    int64_t rdx861;
    unsigned char tmp8_862;
    uint32_t ecx863;
    unsigned char v864;
    uint32_t eax865;
    int64_t rdx866;
    unsigned char tmp8_867;
    uint32_t ecx868;
    unsigned char v869;
    uint32_t eax870;
    int64_t rdx871;
    unsigned char tmp8_872;
    uint32_t ecx873;
    unsigned char v874;
    uint32_t eax875;
    int64_t rdx876;
    uint32_t ecx877;
    unsigned char v878;
    unsigned char tmp8_879;
    uint32_t eax880;
    int64_t rdx881;
    unsigned char tmp8_882;
    uint32_t ecx883;
    unsigned char v884;
    uint32_t eax885;
    int64_t rdx886;
    unsigned char tmp8_887;
    uint32_t ecx888;
    unsigned char v889;
    uint32_t eax890;
    int64_t rdx891;
    unsigned char tmp8_892;
    uint32_t ecx893;
    unsigned char v894;
    uint32_t eax895;
    int64_t rdx896;
    unsigned char tmp8_897;
    uint32_t ecx898;
    unsigned char v899;
    uint32_t eax900;
    int64_t rdx901;
    unsigned char tmp8_902;
    uint32_t ecx903;
    unsigned char v904;
    uint32_t eax905;
    int64_t rdx906;
    uint32_t ecx907;
    unsigned char v908;
    unsigned char tmp8_909;
    uint32_t eax910;
    int64_t rdx911;
    unsigned char tmp8_912;
    uint32_t ecx913;
    unsigned char v914;
    uint32_t eax915;
    int64_t rdx916;
    unsigned char tmp8_917;
    uint32_t ecx918;
    unsigned char v919;
    uint32_t eax920;
    int64_t rdx921;
    unsigned char tmp8_922;
    uint32_t ecx923;
    unsigned char v924;
    uint32_t eax925;
    int64_t rdx926;
    unsigned char tmp8_927;
    uint32_t ecx928;
    unsigned char v929;
    uint32_t eax930;
    int64_t rdx931;
    unsigned char tmp8_932;
    uint32_t ecx933;
    unsigned char v934;
    uint32_t eax935;
    int64_t rdx936;
    unsigned char tmp8_937;
    uint32_t ecx938;
    unsigned char v939;
    uint32_t eax940;
    int64_t rdx941;
    uint32_t ecx942;
    unsigned char v943;
    unsigned char tmp8_944;
    uint32_t eax945;
    int64_t rdx946;
    unsigned char tmp8_947;
    uint32_t ecx948;
    unsigned char v949;
    uint32_t eax950;
    int64_t rdx951;
    unsigned char tmp8_952;
    uint32_t ecx953;
    unsigned char v954;
    uint32_t eax955;
    int64_t rdx956;
    unsigned char tmp8_957;
    uint32_t ecx958;
    unsigned char v959;
    uint32_t eax960;
    int64_t rdx961;
    unsigned char tmp8_962;
    uint32_t ecx963;
    unsigned char v964;
    uint32_t eax965;
    int64_t rdx966;
    unsigned char tmp8_967;
    uint32_t ecx968;
    unsigned char v969;
    uint32_t eax970;
    int64_t rdx971;
    uint32_t ecx972;
    unsigned char v973;
    unsigned char tmp8_974;
    uint32_t eax975;
    int64_t rdx976;
    unsigned char tmp8_977;
    uint32_t ecx978;
    unsigned char v979;
    uint32_t eax980;
    int64_t rdx981;
    unsigned char tmp8_982;
    uint32_t ecx983;
    unsigned char v984;
    uint32_t eax985;
    int64_t rdx986;
    unsigned char tmp8_987;
    uint32_t ecx988;
    unsigned char v989;
    uint32_t eax990;
    int64_t rdx991;
    unsigned char tmp8_992;
    uint32_t ecx993;
    unsigned char v994;
    uint32_t eax995;
    int64_t rdx996;
    unsigned char tmp8_997;
    uint32_t ecx998;
    unsigned char v999;
    uint32_t eax1000;
    int64_t rdx1001;
    unsigned char tmp8_1002;
    uint32_t ecx1003;
    unsigned char v1004;
    uint32_t eax1005;
    int64_t rdx1006;
    uint32_t ecx1007;
    unsigned char v1008;
    unsigned char tmp8_1009;
    uint32_t eax1010;
    int64_t rdx1011;
    unsigned char tmp8_1012;
    uint32_t ecx1013;
    unsigned char v1014;
    uint32_t eax1015;
    int64_t rdx1016;
    unsigned char tmp8_1017;
    uint32_t ecx1018;
    unsigned char v1019;
    uint32_t eax1020;
    int64_t rdx1021;
    unsigned char tmp8_1022;
    uint32_t ecx1023;
    unsigned char v1024;
    uint32_t eax1025;
    int64_t rdx1026;
    unsigned char tmp8_1027;
    uint32_t ecx1028;
    unsigned char v1029;
    uint32_t eax1030;
    int64_t rdx1031;
    unsigned char tmp8_1032;
    uint32_t ecx1033;
    unsigned char v1034;
    uint32_t eax1035;
    int64_t rdx1036;
    uint32_t ecx1037;
    unsigned char v1038;
    unsigned char tmp8_1039;
    uint32_t eax1040;
    int64_t rdx1041;
    unsigned char tmp8_1042;
    uint32_t ecx1043;
    unsigned char v1044;
    uint32_t eax1045;
    int64_t rdx1046;
    unsigned char tmp8_1047;
    uint32_t ecx1048;
    unsigned char v1049;
    uint32_t eax1050;
    int64_t rdx1051;
    unsigned char tmp8_1052;
    uint32_t ecx1053;
    unsigned char v1054;
    uint32_t eax1055;
    int64_t rdx1056;
    unsigned char tmp8_1057;
    uint32_t ecx1058;
    unsigned char v1059;
    uint32_t eax1060;
    int64_t rdx1061;
    unsigned char tmp8_1062;
    uint32_t ecx1063;
    unsigned char v1064;
    uint32_t eax1065;
    int64_t rdx1066;
    unsigned char tmp8_1067;
    uint32_t ecx1068;
    unsigned char v1069;
    uint32_t eax1070;
    int64_t rdx1071;
    uint32_t ecx1072;
    unsigned char v1073;
    unsigned char tmp8_1074;
    uint32_t eax1075;
    int64_t rdx1076;
    unsigned char tmp8_1077;
    uint32_t ecx1078;
    unsigned char v1079;
    uint32_t eax1080;
    int64_t rdx1081;
    unsigned char tmp8_1082;
    uint32_t ecx1083;
    unsigned char v1084;
    uint32_t eax1085;
    int64_t rdx1086;
    unsigned char tmp8_1087;
    uint32_t ecx1088;
    unsigned char v1089;
    uint32_t eax1090;
    int64_t rdx1091;
    unsigned char tmp8_1092;
    uint32_t ecx1093;
    unsigned char v1094;
    uint32_t eax1095;
    int64_t rdx1096;
    unsigned char tmp8_1097;
    uint32_t ecx1098;
    unsigned char v1099;
    uint32_t eax1100;
    int64_t rdx1101;
    uint32_t ecx1102;
    unsigned char v1103;
    unsigned char tmp8_1104;
    uint32_t eax1105;
    int64_t rdx1106;
    unsigned char tmp8_1107;
    uint32_t ecx1108;
    unsigned char v1109;
    uint32_t eax1110;
    int64_t rdx1111;
    unsigned char tmp8_1112;
    uint32_t ecx1113;
    unsigned char v1114;
    uint32_t eax1115;
    int64_t rdx1116;
    unsigned char tmp8_1117;
    uint32_t ecx1118;
    unsigned char v1119;
    uint32_t eax1120;
    int64_t rdx1121;
    unsigned char tmp8_1122;
    uint32_t ecx1123;
    unsigned char v1124;
    uint32_t eax1125;
    int64_t rdx1126;
    unsigned char tmp8_1127;
    uint32_t ecx1128;
    unsigned char v1129;
    uint32_t eax1130;
    int64_t rdx1131;
    unsigned char tmp8_1132;
    uint32_t ecx1133;
    unsigned char v1134;
    uint32_t eax1135;
    int64_t rdx1136;
    uint32_t ecx1137;
    unsigned char v1138;
    unsigned char tmp8_1139;
    uint32_t eax1140;
    int64_t rdx1141;
    unsigned char tmp8_1142;
    uint32_t ecx1143;
    unsigned char v1144;
    uint32_t eax1145;
    int64_t rdx1146;
    unsigned char tmp8_1147;
    uint32_t ecx1148;
    unsigned char v1149;
    uint32_t eax1150;
    int64_t rdx1151;
    unsigned char tmp8_1152;
    uint32_t ecx1153;
    unsigned char v1154;
    uint32_t eax1155;
    int64_t rdx1156;
    unsigned char tmp8_1157;
    uint32_t ecx1158;
    unsigned char v1159;
    uint32_t eax1160;
    int64_t rdx1161;
    unsigned char tmp8_1162;
    uint32_t ecx1163;
    unsigned char v1164;
    uint32_t eax1165;
    int64_t rdx1166;
    uint32_t ecx1167;
    unsigned char v1168;
    unsigned char tmp8_1169;
    uint32_t eax1170;
    int64_t rdx1171;
    unsigned char tmp8_1172;
    uint32_t ecx1173;
    unsigned char v1174;
    uint32_t eax1175;
    int64_t rdx1176;
    unsigned char tmp8_1177;
    uint32_t ecx1178;
    unsigned char v1179;
    uint32_t eax1180;
    int64_t rdx1181;
    unsigned char tmp8_1182;
    uint32_t ecx1183;
    unsigned char v1184;
    uint32_t eax1185;
    int64_t rdx1186;
    unsigned char tmp8_1187;
    uint32_t ecx1188;
    unsigned char v1189;
    uint32_t eax1190;
    int64_t rdx1191;
    unsigned char tmp8_1192;
    uint32_t ecx1193;
    unsigned char v1194;
    uint32_t eax1195;
    int64_t rdx1196;
    unsigned char tmp8_1197;
    uint32_t ecx1198;
    unsigned char v1199;
    uint32_t eax1200;
    int64_t rdx1201;
    uint32_t ecx1202;
    unsigned char v1203;
    unsigned char tmp8_1204;
    uint32_t eax1205;
    int64_t rdx1206;
    unsigned char tmp8_1207;
    uint32_t ecx1208;
    unsigned char v1209;
    uint32_t eax1210;
    int64_t rdx1211;
    unsigned char tmp8_1212;
    uint32_t ecx1213;
    unsigned char v1214;
    uint32_t eax1215;
    int64_t rdx1216;
    unsigned char tmp8_1217;
    uint32_t ecx1218;
    unsigned char v1219;
    uint32_t eax1220;
    int64_t rdx1221;
    unsigned char tmp8_1222;
    uint32_t ecx1223;
    unsigned char v1224;
    uint32_t eax1225;
    int64_t rdx1226;
    unsigned char tmp8_1227;
    uint32_t ecx1228;
    unsigned char v1229;
    uint32_t eax1230;
    int64_t rdx1231;
    uint32_t ecx1232;
    unsigned char v1233;
    unsigned char tmp8_1234;
    uint32_t eax1235;
    int64_t rdx1236;
    unsigned char tmp8_1237;
    uint32_t ecx1238;
    unsigned char v1239;
    uint32_t eax1240;
    int64_t rdx1241;
    unsigned char tmp8_1242;
    uint32_t ecx1243;
    unsigned char v1244;
    uint32_t eax1245;
    int64_t rdx1246;
    unsigned char tmp8_1247;
    uint32_t ecx1248;
    unsigned char v1249;
    uint32_t eax1250;
    int64_t rdx1251;
    unsigned char tmp8_1252;
    uint32_t ecx1253;
    unsigned char v1254;
    uint32_t eax1255;
    int64_t rdx1256;
    unsigned char tmp8_1257;
    uint32_t ecx1258;
    unsigned char v1259;
    uint32_t eax1260;
    int64_t rdx1261;
    unsigned char tmp8_1262;
    uint32_t ecx1263;
    unsigned char v1264;
    uint32_t eax1265;
    int64_t rdx1266;
    uint32_t ecx1267;
    unsigned char v1268;
    unsigned char tmp8_1269;
    uint32_t eax1270;
    int64_t rdx1271;
    unsigned char tmp8_1272;
    uint32_t ecx1273;
    unsigned char v1274;
    uint32_t eax1275;
    int64_t rdx1276;
    unsigned char tmp8_1277;
    uint32_t ecx1278;
    unsigned char v1279;
    uint32_t eax1280;
    int64_t rdx1281;
    unsigned char tmp8_1282;
    uint32_t ecx1283;
    unsigned char v1284;
    uint32_t eax1285;
    int64_t rdx1286;
    unsigned char tmp8_1287;
    uint32_t ecx1288;
    unsigned char v1289;
    uint32_t eax1290;
    int64_t rdx1291;
    unsigned char tmp8_1292;
    uint32_t ecx1293;
    unsigned char v1294;
    uint32_t eax1295;
    int64_t rdx1296;
    uint32_t ecx1297;
    unsigned char v1298;
    unsigned char tmp8_1299;
    uint32_t eax1300;
    int64_t rdx1301;
    unsigned char tmp8_1302;
    uint32_t ecx1303;
    unsigned char v1304;
    uint32_t eax1305;
    int64_t rdx1306;
    unsigned char tmp8_1307;
    uint32_t ecx1308;
    unsigned char v1309;
    uint32_t eax1310;
    int64_t rdx1311;
    unsigned char tmp8_1312;
    uint32_t ecx1313;
    unsigned char v1314;
    uint32_t eax1315;
    int64_t rdx1316;
    unsigned char tmp8_1317;
    uint32_t ecx1318;
    unsigned char v1319;
    uint32_t eax1320;
    int64_t rdx1321;
    unsigned char tmp8_1322;
    uint32_t ecx1323;
    unsigned char v1324;
    uint32_t eax1325;
    int64_t rdx1326;
    unsigned char tmp8_1327;
    uint32_t ecx1328;
    unsigned char v1329;
    uint32_t eax1330;
    int64_t rdx1331;
    uint32_t ecx1332;
    unsigned char v1333;
    unsigned char tmp8_1334;
    uint32_t eax1335;
    int64_t rdx1336;
    unsigned char tmp8_1337;
    uint32_t edx1338;
    unsigned char v1339;
    uint32_t eax1340;
    int64_t rax1341;
    int64_t rcx1342;
    int64_t rax1343;
    uint32_t r8d1344;
    uint32_t eax1345;
    int64_t rcx1346;
    uint32_t r8d1347;
    uint32_t eax1348;
    int64_t rcx1349;
    uint32_t r8d1350;
    uint32_t eax1351;
    int64_t rcx1352;
    uint32_t r8d1353;
    uint32_t eax1354;
    int64_t rcx1355;
    uint32_t r8d1356;
    uint32_t eax1357;
    int64_t rcx1358;
    uint32_t r8d1359;
    uint32_t eax1360;
    int64_t rcx1361;
    uint32_t r8d1362;
    uint32_t eax1363;
    int64_t rcx1364;
    uint32_t r8d1365;
    uint32_t eax1366;
    int64_t rcx1367;
    uint32_t r8d1368;
    uint32_t eax1369;
    int64_t rcx1370;
    uint32_t r8d1371;
    uint32_t eax1372;
    int64_t rcx1373;
    uint32_t r8d1374;
    uint32_t eax1375;
    int64_t rcx1376;
    uint32_t r8d1377;
    uint32_t eax1378;
    int64_t rcx1379;
    uint32_t r8d1380;
    uint32_t eax1381;
    int64_t rcx1382;
    uint32_t r8d1383;
    uint32_t eax1384;
    int64_t rcx1385;
    uint32_t r8d1386;
    uint32_t eax1387;
    int64_t rcx1388;
    uint32_t r8d1389;
    uint32_t eax1390;
    int64_t rcx1391;
    uint32_t r8d1392;
    uint32_t eax1393;
    int64_t rcx1394;
    uint32_t r8d1395;
    uint32_t eax1396;
    int64_t rcx1397;
    uint32_t r8d1398;
    uint32_t eax1399;
    int64_t rcx1400;
    uint32_t r8d1401;
    uint32_t eax1402;
    int64_t rcx1403;
    uint32_t r8d1404;
    uint32_t eax1405;
    int64_t rcx1406;
    uint32_t r8d1407;
    uint32_t eax1408;
    int64_t rcx1409;
    uint32_t r8d1410;
    uint32_t eax1411;
    int64_t rcx1412;
    uint32_t r8d1413;
    uint32_t eax1414;
    int64_t rcx1415;
    uint32_t r8d1416;
    uint32_t eax1417;
    int64_t rcx1418;
    uint32_t r8d1419;
    uint32_t eax1420;
    int64_t rcx1421;
    uint32_t r8d1422;
    uint32_t eax1423;
    int64_t rcx1424;
    uint32_t r8d1425;
    uint32_t eax1426;
    int64_t rcx1427;
    uint32_t r8d1428;
    uint32_t eax1429;
    int64_t rcx1430;
    uint32_t r8d1431;
    uint32_t eax1432;
    int64_t rcx1433;
    uint32_t r8d1434;
    uint32_t eax1435;
    int64_t rcx1436;
    uint32_t r8d1437;
    uint32_t eax1438;
    int64_t rcx1439;
    uint32_t r8d1440;
    uint32_t eax1441;
    int64_t rcx1442;
    uint32_t r8d1443;
    uint32_t eax1444;
    int64_t rcx1445;
    uint32_t r8d1446;
    uint32_t eax1447;
    int64_t rcx1448;
    uint32_t r8d1449;
    uint32_t eax1450;
    int64_t rcx1451;
    uint32_t r8d1452;
    uint32_t eax1453;
    int64_t rcx1454;
    uint32_t r8d1455;
    uint32_t eax1456;
    int64_t rcx1457;
    uint32_t r8d1458;
    uint32_t eax1459;
    int64_t rcx1460;
    uint32_t r8d1461;
    uint32_t eax1462;
    int64_t rcx1463;
    uint32_t r8d1464;
    uint32_t eax1465;
    int64_t rcx1466;
    uint32_t r8d1467;
    uint32_t eax1468;
    int64_t rcx1469;
    uint32_t r8d1470;
    uint32_t eax1471;
    int64_t rcx1472;
    uint32_t r8d1473;
    uint32_t eax1474;
    int64_t rcx1475;
    uint32_t r8d1476;
    uint32_t eax1477;
    int64_t rcx1478;
    uint32_t r8d1479;
    uint32_t eax1480;
    int64_t rcx1481;
    uint32_t r8d1482;
    uint32_t eax1483;
    int64_t rcx1484;
    uint32_t r8d1485;
    uint32_t eax1486;
    int64_t rcx1487;
    uint32_t r8d1488;
    uint32_t eax1489;
    int64_t rcx1490;
    uint32_t r8d1491;
    uint32_t eax1492;
    int64_t rcx1493;
    uint32_t r8d1494;
    uint32_t eax1495;
    int64_t rcx1496;
    uint32_t r8d1497;
    uint32_t eax1498;
    int64_t rcx1499;
    uint32_t r8d1500;
    uint32_t eax1501;
    int64_t rcx1502;
    uint32_t r8d1503;
    uint32_t eax1504;
    int64_t rcx1505;
    uint32_t r8d1506;
    uint32_t eax1507;
    int64_t rcx1508;
    uint32_t r8d1509;
    uint32_t eax1510;
    int64_t rcx1511;
    uint32_t r8d1512;
    uint32_t eax1513;
    int64_t rcx1514;
    uint32_t r8d1515;
    uint32_t eax1516;
    int64_t rcx1517;
    uint32_t r8d1518;
    uint32_t eax1519;
    int64_t rcx1520;
    int64_t r8_1521;
    uint32_t eax1522;
    int64_t rcx1523;
    uint32_t ecx1524;
    uint32_t eax1525;
    int64_t rax1526;
    void** r9_1527;
    int64_t rax1528;

    rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 0x168);
    __asm__("movdqa xmm0, [rip+0xa941]");
    __asm__("movaps [rsp+0x60], xmm0");
    __asm__("movdqa xmm0, [rip+0xa944]");
    __asm__("movaps [rsp+0x70], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0x80], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0x90], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0xa0], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0xb0], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0xc0], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0xd0], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0xe0], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0xf0], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0x100], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0x110], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0x120], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0x130], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0x140], xmm0");
    __asm__("movdqa xmm0, [rip+0xa947]");
    __asm__("movaps [rsp+0x150], xmm0");
    *reinterpret_cast<uint32_t*>(&rax3) = g14000b040;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    rdx4 = rax3;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rax3 + 96) = 0;
    eax5 = g14000b041;
    ecx6 = v7;
    eax8 = eax5 + ecx6 + *reinterpret_cast<int32_t*>(&rdx4);
    *reinterpret_cast<uint32_t*>(&rdx9) = *reinterpret_cast<unsigned char*>(&eax8);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx9) + 4) = 0;
    tmp8_10 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax8) + g14000b042);
    *reinterpret_cast<unsigned char*>(&eax8) = tmp8_10;
    r8d11 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx9 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx9 + 96) = *reinterpret_cast<signed char*>(&ecx6);
    ecx12 = v13;
    eax14 = eax8 + ecx12;
    *reinterpret_cast<uint32_t*>(&rdx15) = *reinterpret_cast<unsigned char*>(&eax14);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx15) + 4) = 0;
    tmp8_16 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax14) + g14000b043);
    *reinterpret_cast<unsigned char*>(&eax14) = tmp8_16;
    r8d17 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx15 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx15 + 96) = *reinterpret_cast<signed char*>(&ecx12);
    ecx18 = v19;
    eax20 = eax14 + ecx18;
    *reinterpret_cast<uint32_t*>(&rdx21) = *reinterpret_cast<unsigned char*>(&eax20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = 0;
    tmp8_22 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax20) + g14000b044);
    *reinterpret_cast<unsigned char*>(&eax20) = tmp8_22;
    r8d23 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx21 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx21 + 96) = *reinterpret_cast<signed char*>(&ecx18);
    ecx24 = v25;
    eax26 = eax20 + ecx24;
    *reinterpret_cast<uint32_t*>(&rdx27) = *reinterpret_cast<unsigned char*>(&eax26);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx27) + 4) = 0;
    tmp8_28 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax26) + g14000b045);
    *reinterpret_cast<unsigned char*>(&eax26) = tmp8_28;
    r8d29 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx27 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx27 + 96) = *reinterpret_cast<signed char*>(&ecx24);
    ecx30 = v31;
    eax32 = eax26 + ecx30;
    *reinterpret_cast<uint32_t*>(&rdx33) = *reinterpret_cast<unsigned char*>(&eax32);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx33) + 4) = 0;
    tmp8_34 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax32) + g14000b046);
    *reinterpret_cast<unsigned char*>(&eax32) = tmp8_34;
    r8d35 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx33 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx33 + 96) = *reinterpret_cast<signed char*>(&ecx30);
    ecx36 = v37;
    eax38 = eax32 + ecx36;
    *reinterpret_cast<uint32_t*>(&rdx39) = *reinterpret_cast<unsigned char*>(&eax38);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx39) + 4) = 0;
    r8d40 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx39 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx39 + 96) = *reinterpret_cast<signed char*>(&ecx36);
    ecx41 = v42;
    tmp8_43 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax38) + g14000b047);
    *reinterpret_cast<unsigned char*>(&eax38) = tmp8_43;
    eax44 = eax38 + ecx41;
    *reinterpret_cast<uint32_t*>(&rdx45) = *reinterpret_cast<unsigned char*>(&eax44);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx45) + 4) = 0;
    tmp8_46 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax44) + g14000b048);
    *reinterpret_cast<unsigned char*>(&eax44) = tmp8_46;
    r8d47 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx45 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx45 + 96) = *reinterpret_cast<signed char*>(&ecx41);
    ecx48 = v49;
    eax50 = eax44 + ecx48;
    *reinterpret_cast<uint32_t*>(&rdx51) = *reinterpret_cast<unsigned char*>(&eax50);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx51) + 4) = 0;
    tmp8_52 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax50) + g14000b049);
    *reinterpret_cast<unsigned char*>(&eax50) = tmp8_52;
    r8d53 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx51 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx51 + 96) = *reinterpret_cast<signed char*>(&ecx48);
    ecx54 = v55;
    eax56 = eax50 + ecx54;
    *reinterpret_cast<uint32_t*>(&rdx57) = *reinterpret_cast<unsigned char*>(&eax56);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx57) + 4) = 0;
    tmp8_58 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax56) + g14000b04a);
    *reinterpret_cast<unsigned char*>(&eax56) = tmp8_58;
    r8d59 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx57 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx57 + 96) = *reinterpret_cast<signed char*>(&ecx54);
    ecx60 = v61;
    eax62 = eax56 + ecx60;
    *reinterpret_cast<uint32_t*>(&rdx63) = *reinterpret_cast<unsigned char*>(&eax62);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx63) + 4) = 0;
    tmp8_64 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax62) + g14000b04b);
    *reinterpret_cast<unsigned char*>(&eax62) = tmp8_64;
    r8d65 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx63 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx63 + 96) = *reinterpret_cast<signed char*>(&ecx60);
    ecx66 = v67;
    eax68 = eax62 + ecx66;
    *reinterpret_cast<uint32_t*>(&rdx69) = *reinterpret_cast<unsigned char*>(&eax68);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx69) + 4) = 0;
    tmp8_70 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax68) + g14000b04c);
    *reinterpret_cast<unsigned char*>(&eax68) = tmp8_70;
    r8d71 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx69 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx69 + 96) = *reinterpret_cast<signed char*>(&ecx66);
    ecx72 = v73;
    eax74 = eax68 + ecx72;
    *reinterpret_cast<uint32_t*>(&rdx75) = *reinterpret_cast<unsigned char*>(&eax74);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx75) + 4) = 0;
    r8d76 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx75 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx75 + 96) = *reinterpret_cast<signed char*>(&ecx72);
    ecx77 = v78;
    tmp8_79 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax74) + g14000b04d);
    *reinterpret_cast<unsigned char*>(&eax74) = tmp8_79;
    eax80 = eax74 + ecx77;
    *reinterpret_cast<uint32_t*>(&rdx81) = *reinterpret_cast<unsigned char*>(&eax80);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx81) + 4) = 0;
    tmp8_82 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax80) + g14000b04e);
    *reinterpret_cast<unsigned char*>(&eax80) = tmp8_82;
    r8d83 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx81 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx81 + 96) = *reinterpret_cast<signed char*>(&ecx77);
    ecx84 = v85;
    eax86 = eax80 + ecx84;
    *reinterpret_cast<uint32_t*>(&rdx87) = *reinterpret_cast<unsigned char*>(&eax86);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx87) + 4) = 0;
    tmp8_88 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax86) + g14000b04f);
    *reinterpret_cast<unsigned char*>(&eax86) = tmp8_88;
    r8d89 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx87 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx87 + 96) = *reinterpret_cast<signed char*>(&ecx84);
    ecx90 = v91;
    eax92 = eax86 + ecx90;
    *reinterpret_cast<uint32_t*>(&rdx93) = *reinterpret_cast<unsigned char*>(&eax92);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx93) + 4) = 0;
    tmp8_94 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax92) + g14000b050);
    *reinterpret_cast<unsigned char*>(&eax92) = tmp8_94;
    r8d95 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx93 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx93 + 96) = *reinterpret_cast<signed char*>(&ecx90);
    ecx96 = v97;
    eax98 = eax92 + ecx96;
    *reinterpret_cast<uint32_t*>(&rdx99) = *reinterpret_cast<unsigned char*>(&eax98);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx99) + 4) = 0;
    tmp8_100 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax98) + g14000b051);
    *reinterpret_cast<unsigned char*>(&eax98) = tmp8_100;
    r8d101 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx99 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx99 + 96) = *reinterpret_cast<signed char*>(&ecx96);
    ecx102 = v103;
    eax104 = eax98 + ecx102;
    *reinterpret_cast<uint32_t*>(&rdx105) = *reinterpret_cast<unsigned char*>(&eax104);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx105) + 4) = 0;
    tmp8_106 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax104) + g14000b052);
    *reinterpret_cast<unsigned char*>(&eax104) = tmp8_106;
    r8d107 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx105 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx105 + 96) = *reinterpret_cast<signed char*>(&ecx102);
    ecx108 = v109;
    eax110 = eax104 + ecx108;
    *reinterpret_cast<uint32_t*>(&rdx111) = *reinterpret_cast<unsigned char*>(&eax110);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx111) + 4) = 0;
    tmp8_112 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax110) + g14000b053);
    *reinterpret_cast<unsigned char*>(&eax110) = tmp8_112;
    r8d113 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx111 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx111 + 96) = *reinterpret_cast<signed char*>(&ecx108);
    ecx114 = v115;
    eax116 = eax110 + ecx114;
    *reinterpret_cast<uint32_t*>(&rdx117) = *reinterpret_cast<unsigned char*>(&eax116);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx117) + 4) = 0;
    r8d118 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx117 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx117 + 96) = *reinterpret_cast<signed char*>(&ecx114);
    ecx119 = v120;
    tmp8_121 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax116) + g14000b054);
    *reinterpret_cast<unsigned char*>(&eax116) = tmp8_121;
    eax122 = eax116 + ecx119;
    *reinterpret_cast<uint32_t*>(&rdx123) = *reinterpret_cast<unsigned char*>(&eax122);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx123) + 4) = 0;
    tmp8_124 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax122) + g14000b055);
    *reinterpret_cast<unsigned char*>(&eax122) = tmp8_124;
    r8d125 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx123 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx123 + 96) = *reinterpret_cast<signed char*>(&ecx119);
    ecx126 = v127;
    eax128 = eax122 + ecx126;
    *reinterpret_cast<uint32_t*>(&rdx129) = *reinterpret_cast<unsigned char*>(&eax128);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx129) + 4) = 0;
    tmp8_130 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax128) + g14000b056);
    *reinterpret_cast<unsigned char*>(&eax128) = tmp8_130;
    r8d131 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx129 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx129 + 96) = *reinterpret_cast<signed char*>(&ecx126);
    ecx132 = v133;
    eax134 = eax128 + ecx132;
    *reinterpret_cast<uint32_t*>(&rdx135) = *reinterpret_cast<unsigned char*>(&eax134);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx135) + 4) = 0;
    tmp8_136 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax134) + g14000b057);
    *reinterpret_cast<unsigned char*>(&eax134) = tmp8_136;
    r8d137 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx135 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx135 + 96) = *reinterpret_cast<signed char*>(&ecx132);
    ecx138 = v139;
    eax140 = eax134 + ecx138;
    *reinterpret_cast<uint32_t*>(&rdx141) = *reinterpret_cast<unsigned char*>(&eax140);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx141) + 4) = 0;
    tmp8_142 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax140) + g14000b058);
    *reinterpret_cast<unsigned char*>(&eax140) = tmp8_142;
    r8d143 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx141 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx141 + 96) = *reinterpret_cast<signed char*>(&ecx138);
    ecx144 = v145;
    eax146 = eax140 + ecx144;
    *reinterpret_cast<uint32_t*>(&rdx147) = *reinterpret_cast<unsigned char*>(&eax146);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx147) + 4) = 0;
    tmp8_148 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax146) + g14000b059);
    *reinterpret_cast<unsigned char*>(&eax146) = tmp8_148;
    r8d149 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx147 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx147 + 96) = *reinterpret_cast<signed char*>(&ecx144);
    ecx150 = v151;
    eax152 = eax146 + ecx150;
    *reinterpret_cast<uint32_t*>(&rdx153) = *reinterpret_cast<unsigned char*>(&eax152);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx153) + 4) = 0;
    r8d154 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx153 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx153 + 96) = *reinterpret_cast<signed char*>(&ecx150);
    ecx155 = v156;
    tmp8_157 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax152) + g14000b05a);
    *reinterpret_cast<unsigned char*>(&eax152) = tmp8_157;
    eax158 = eax152 + ecx155;
    *reinterpret_cast<uint32_t*>(&rdx159) = *reinterpret_cast<unsigned char*>(&eax158);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx159) + 4) = 0;
    tmp8_160 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax158) + g14000b05b);
    *reinterpret_cast<unsigned char*>(&eax158) = tmp8_160;
    r8d161 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx159 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx159 + 96) = *reinterpret_cast<signed char*>(&ecx155);
    ecx162 = v163;
    eax164 = eax158 + ecx162;
    *reinterpret_cast<uint32_t*>(&rdx165) = *reinterpret_cast<unsigned char*>(&eax164);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx165) + 4) = 0;
    tmp8_166 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax164) + g14000b05c);
    *reinterpret_cast<unsigned char*>(&eax164) = tmp8_166;
    r8d167 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx165 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx165 + 96) = *reinterpret_cast<signed char*>(&ecx162);
    ecx168 = v169;
    eax170 = eax164 + ecx168;
    *reinterpret_cast<uint32_t*>(&rdx171) = *reinterpret_cast<unsigned char*>(&eax170);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx171) + 4) = 0;
    tmp8_172 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax170) + g14000b05d);
    *reinterpret_cast<unsigned char*>(&eax170) = tmp8_172;
    r8d173 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx171 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx171 + 96) = *reinterpret_cast<signed char*>(&ecx168);
    ecx174 = v175;
    eax176 = eax170 + ecx174;
    *reinterpret_cast<uint32_t*>(&rdx177) = *reinterpret_cast<unsigned char*>(&eax176);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx177) + 4) = 0;
    tmp8_178 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax176) + g14000b05e);
    *reinterpret_cast<unsigned char*>(&eax176) = tmp8_178;
    r8d179 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx177 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx177 + 96) = *reinterpret_cast<signed char*>(&ecx174);
    ecx180 = v181;
    eax182 = eax176 + ecx180;
    *reinterpret_cast<uint32_t*>(&rdx183) = *reinterpret_cast<unsigned char*>(&eax182);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx183) + 4) = 0;
    tmp8_184 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax182) + g14000b05f);
    *reinterpret_cast<unsigned char*>(&eax182) = tmp8_184;
    r8d185 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx183 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx183 + 96) = *reinterpret_cast<signed char*>(&ecx180);
    ecx186 = v187;
    eax188 = eax182 + ecx186;
    *reinterpret_cast<uint32_t*>(&rdx189) = *reinterpret_cast<unsigned char*>(&eax188);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx189) + 4) = 0;
    tmp8_190 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax188) + g14000b060);
    *reinterpret_cast<unsigned char*>(&eax188) = tmp8_190;
    r8d191 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx189 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx189 + 96) = *reinterpret_cast<signed char*>(&ecx186);
    ecx192 = v193;
    eax194 = eax188 + ecx192;
    *reinterpret_cast<uint32_t*>(&rdx195) = *reinterpret_cast<unsigned char*>(&eax194);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx195) + 4) = 0;
    r8d196 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx195 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx195 + 96) = *reinterpret_cast<signed char*>(&ecx192);
    ecx197 = v198;
    tmp8_199 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax194) + g14000b061);
    *reinterpret_cast<unsigned char*>(&eax194) = tmp8_199;
    eax200 = eax194 + ecx197;
    *reinterpret_cast<uint32_t*>(&rdx201) = *reinterpret_cast<unsigned char*>(&eax200);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx201) + 4) = 0;
    tmp8_202 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax200) + g14000b062);
    *reinterpret_cast<unsigned char*>(&eax200) = tmp8_202;
    r8d203 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx201 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx201 + 96) = *reinterpret_cast<signed char*>(&ecx197);
    ecx204 = v205;
    eax206 = eax200 + ecx204;
    *reinterpret_cast<uint32_t*>(&rdx207) = *reinterpret_cast<unsigned char*>(&eax206);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx207) + 4) = 0;
    tmp8_208 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax206) + g14000b063);
    *reinterpret_cast<unsigned char*>(&eax206) = tmp8_208;
    r8d209 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx207 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx207 + 96) = *reinterpret_cast<signed char*>(&ecx204);
    ecx210 = v211;
    eax212 = eax206 + ecx210;
    *reinterpret_cast<uint32_t*>(&rdx213) = *reinterpret_cast<unsigned char*>(&eax212);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx213) + 4) = 0;
    tmp8_214 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax212) + g14000b064);
    *reinterpret_cast<unsigned char*>(&eax212) = tmp8_214;
    r8d215 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx213 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx213 + 96) = *reinterpret_cast<signed char*>(&ecx210);
    ecx216 = v217;
    eax218 = eax212 + ecx216;
    *reinterpret_cast<uint32_t*>(&rdx219) = *reinterpret_cast<unsigned char*>(&eax218);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx219) + 4) = 0;
    tmp8_220 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax218) + g14000b065);
    *reinterpret_cast<unsigned char*>(&eax218) = tmp8_220;
    r8d221 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx219 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx219 + 96) = *reinterpret_cast<signed char*>(&ecx216);
    ecx222 = v223;
    eax224 = eax218 + ecx222;
    *reinterpret_cast<uint32_t*>(&rdx225) = *reinterpret_cast<unsigned char*>(&eax224);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx225) + 4) = 0;
    tmp8_226 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax224) + g14000b066);
    *reinterpret_cast<unsigned char*>(&eax224) = tmp8_226;
    r8d227 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx225 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx225 + 96) = *reinterpret_cast<signed char*>(&ecx222);
    ecx228 = v229;
    eax230 = eax224 + ecx228;
    *reinterpret_cast<uint32_t*>(&rdx231) = *reinterpret_cast<unsigned char*>(&eax230);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx231) + 4) = 0;
    r8d232 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx231 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx231 + 96) = *reinterpret_cast<signed char*>(&ecx228);
    ecx233 = v234;
    tmp8_235 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax230) + g14000b067);
    *reinterpret_cast<unsigned char*>(&eax230) = tmp8_235;
    eax236 = eax230 + ecx233;
    *reinterpret_cast<uint32_t*>(&rdx237) = *reinterpret_cast<unsigned char*>(&eax236);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx237) + 4) = 0;
    tmp8_238 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax236) + g14000b068);
    *reinterpret_cast<unsigned char*>(&eax236) = tmp8_238;
    r8d239 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx237 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx237 + 96) = *reinterpret_cast<signed char*>(&ecx233);
    ecx240 = v241;
    eax242 = eax236 + ecx240;
    *reinterpret_cast<uint32_t*>(&rdx243) = *reinterpret_cast<unsigned char*>(&eax242);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx243) + 4) = 0;
    tmp8_244 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax242) + g14000b069);
    *reinterpret_cast<unsigned char*>(&eax242) = tmp8_244;
    r8d245 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx243 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx243 + 96) = *reinterpret_cast<signed char*>(&ecx240);
    ecx246 = v247;
    eax248 = eax242 + ecx246;
    *reinterpret_cast<uint32_t*>(&rdx249) = *reinterpret_cast<unsigned char*>(&eax248);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx249) + 4) = 0;
    tmp8_250 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax248) + g14000b06a);
    *reinterpret_cast<unsigned char*>(&eax248) = tmp8_250;
    r8d251 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx249 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx249 + 96) = *reinterpret_cast<signed char*>(&ecx246);
    ecx252 = v253;
    eax254 = eax248 + ecx252;
    *reinterpret_cast<uint32_t*>(&rdx255) = *reinterpret_cast<unsigned char*>(&eax254);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx255) + 4) = 0;
    tmp8_256 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax254) + g14000b06b);
    *reinterpret_cast<unsigned char*>(&eax254) = tmp8_256;
    r8d257 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx255 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx255 + 96) = *reinterpret_cast<signed char*>(&ecx252);
    ecx258 = v259;
    eax260 = eax254 + ecx258;
    *reinterpret_cast<uint32_t*>(&rdx261) = *reinterpret_cast<unsigned char*>(&eax260);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx261) + 4) = 0;
    tmp8_262 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax260) + g14000b06c);
    *reinterpret_cast<unsigned char*>(&eax260) = tmp8_262;
    r8d263 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx261 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx261 + 96) = *reinterpret_cast<signed char*>(&ecx258);
    ecx264 = v265;
    eax266 = eax260 + ecx264;
    *reinterpret_cast<uint32_t*>(&rdx267) = *reinterpret_cast<unsigned char*>(&eax266);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx267) + 4) = 0;
    tmp8_268 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax266) + g14000b06d);
    *reinterpret_cast<unsigned char*>(&eax266) = tmp8_268;
    r8d269 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx267 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx267 + 96) = *reinterpret_cast<signed char*>(&ecx264);
    ecx270 = v271;
    eax272 = eax266 + ecx270;
    *reinterpret_cast<uint32_t*>(&rdx273) = *reinterpret_cast<unsigned char*>(&eax272);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx273) + 4) = 0;
    r8d274 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx273 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx273 + 96) = *reinterpret_cast<signed char*>(&ecx270);
    ecx275 = v276;
    tmp8_277 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax272) + g14000b06e);
    *reinterpret_cast<unsigned char*>(&eax272) = tmp8_277;
    eax278 = eax272 + ecx275;
    *reinterpret_cast<uint32_t*>(&rdx279) = *reinterpret_cast<unsigned char*>(&eax278);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx279) + 4) = 0;
    tmp8_280 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax278) + g14000b06f);
    *reinterpret_cast<unsigned char*>(&eax278) = tmp8_280;
    r8d281 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx279 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx279 + 96) = *reinterpret_cast<signed char*>(&ecx275);
    ecx282 = v283;
    eax284 = eax278 + ecx282;
    *reinterpret_cast<uint32_t*>(&rdx285) = *reinterpret_cast<unsigned char*>(&eax284);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx285) + 4) = 0;
    tmp8_286 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax284) + g14000b070);
    *reinterpret_cast<unsigned char*>(&eax284) = tmp8_286;
    r8d287 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx285 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx285 + 96) = *reinterpret_cast<signed char*>(&ecx282);
    ecx288 = v289;
    eax290 = eax284 + ecx288;
    *reinterpret_cast<uint32_t*>(&rdx291) = *reinterpret_cast<unsigned char*>(&eax290);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx291) + 4) = 0;
    tmp8_292 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax290) + g14000b071);
    *reinterpret_cast<unsigned char*>(&eax290) = tmp8_292;
    r8d293 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx291 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx291 + 96) = *reinterpret_cast<signed char*>(&ecx288);
    ecx294 = v295;
    eax296 = eax290 + ecx294;
    *reinterpret_cast<uint32_t*>(&rdx297) = *reinterpret_cast<unsigned char*>(&eax296);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx297) + 4) = 0;
    tmp8_298 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax296) + g14000b072);
    *reinterpret_cast<unsigned char*>(&eax296) = tmp8_298;
    r8d299 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx297 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx297 + 96) = *reinterpret_cast<signed char*>(&ecx294);
    ecx300 = v301;
    eax302 = eax296 + ecx300;
    *reinterpret_cast<uint32_t*>(&rdx303) = *reinterpret_cast<unsigned char*>(&eax302);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx303) + 4) = 0;
    tmp8_304 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax302) + g14000b073);
    *reinterpret_cast<unsigned char*>(&eax302) = tmp8_304;
    r8d305 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx303 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx303 + 96) = *reinterpret_cast<signed char*>(&ecx300);
    ecx306 = v307;
    eax308 = eax302 + ecx306;
    *reinterpret_cast<uint32_t*>(&rdx309) = *reinterpret_cast<unsigned char*>(&eax308);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx309) + 4) = 0;
    r8d310 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx309 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx309 + 96) = *reinterpret_cast<signed char*>(&ecx306);
    ecx311 = v312;
    tmp8_313 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax308) + g14000b074);
    *reinterpret_cast<unsigned char*>(&eax308) = tmp8_313;
    eax314 = eax308 + ecx311;
    *reinterpret_cast<uint32_t*>(&rdx315) = *reinterpret_cast<unsigned char*>(&eax314);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx315) + 4) = 0;
    tmp8_316 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax314) + g14000b075);
    *reinterpret_cast<unsigned char*>(&eax314) = tmp8_316;
    r8d317 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx315 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx315 + 96) = *reinterpret_cast<signed char*>(&ecx311);
    ecx318 = v319;
    eax320 = eax314 + ecx318;
    *reinterpret_cast<uint32_t*>(&rdx321) = *reinterpret_cast<unsigned char*>(&eax320);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx321) + 4) = 0;
    tmp8_322 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax320) + g14000b076);
    *reinterpret_cast<unsigned char*>(&eax320) = tmp8_322;
    r8d323 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx321 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx321 + 96) = *reinterpret_cast<signed char*>(&ecx318);
    ecx324 = v325;
    eax326 = eax320 + ecx324;
    *reinterpret_cast<uint32_t*>(&rdx327) = *reinterpret_cast<unsigned char*>(&eax326);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx327) + 4) = 0;
    tmp8_328 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax326) + g14000b077);
    *reinterpret_cast<unsigned char*>(&eax326) = tmp8_328;
    r8d329 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx327 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx327 + 96) = *reinterpret_cast<signed char*>(&ecx324);
    ecx330 = v331;
    eax332 = eax326 + ecx330;
    *reinterpret_cast<uint32_t*>(&rdx333) = *reinterpret_cast<unsigned char*>(&eax332);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx333) + 4) = 0;
    tmp8_334 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax332) + g14000b078);
    *reinterpret_cast<unsigned char*>(&eax332) = tmp8_334;
    r8d335 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx333 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx333 + 96) = *reinterpret_cast<signed char*>(&ecx330);
    ecx336 = v337;
    eax338 = eax332 + ecx336;
    *reinterpret_cast<uint32_t*>(&rdx339) = *reinterpret_cast<unsigned char*>(&eax338);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx339) + 4) = 0;
    tmp8_340 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax338) + g14000b079);
    *reinterpret_cast<unsigned char*>(&eax338) = tmp8_340;
    r8d341 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx339 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx339 + 96) = *reinterpret_cast<signed char*>(&ecx336);
    ecx342 = v343;
    eax344 = eax338 + ecx342;
    *reinterpret_cast<uint32_t*>(&rdx345) = *reinterpret_cast<unsigned char*>(&eax344);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx345) + 4) = 0;
    tmp8_346 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax344) + g14000b07a);
    *reinterpret_cast<unsigned char*>(&eax344) = tmp8_346;
    r8d347 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx345 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx345 + 96) = *reinterpret_cast<signed char*>(&ecx342);
    ecx348 = v349;
    eax350 = eax344 + ecx348;
    *reinterpret_cast<uint32_t*>(&rdx351) = *reinterpret_cast<unsigned char*>(&eax350);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx351) + 4) = 0;
    r8d352 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx351 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx351 + 96) = *reinterpret_cast<signed char*>(&ecx348);
    ecx353 = v354;
    tmp8_355 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax350) + g14000b07b);
    *reinterpret_cast<unsigned char*>(&eax350) = tmp8_355;
    eax356 = eax350 + ecx353;
    *reinterpret_cast<uint32_t*>(&rdx357) = *reinterpret_cast<unsigned char*>(&eax356);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx357) + 4) = 0;
    tmp8_358 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax356) + g14000b07c);
    *reinterpret_cast<unsigned char*>(&eax356) = tmp8_358;
    r8d359 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx357 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx357 + 96) = *reinterpret_cast<signed char*>(&ecx353);
    ecx360 = v361;
    eax362 = eax356 + ecx360;
    *reinterpret_cast<uint32_t*>(&rdx363) = *reinterpret_cast<unsigned char*>(&eax362);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx363) + 4) = 0;
    tmp8_364 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax362) + g14000b07d);
    *reinterpret_cast<unsigned char*>(&eax362) = tmp8_364;
    r8d365 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx363 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx363 + 96) = *reinterpret_cast<signed char*>(&ecx360);
    ecx366 = v367;
    eax368 = eax362 + ecx366;
    *reinterpret_cast<uint32_t*>(&rdx369) = *reinterpret_cast<unsigned char*>(&eax368);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx369) + 4) = 0;
    tmp8_370 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax368) + g14000b07e);
    *reinterpret_cast<unsigned char*>(&eax368) = tmp8_370;
    r8d371 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx369 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx369 + 96) = *reinterpret_cast<signed char*>(&ecx366);
    ecx372 = v373;
    eax374 = eax368 + ecx372;
    *reinterpret_cast<uint32_t*>(&rdx375) = *reinterpret_cast<unsigned char*>(&eax374);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx375) + 4) = 0;
    tmp8_376 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax374) + g14000b07f);
    *reinterpret_cast<unsigned char*>(&eax374) = tmp8_376;
    r8d377 = *reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(rsp2) + rdx375 + 96);
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx375 + 96) = *reinterpret_cast<signed char*>(&ecx372);
    ecx378 = v379;
    eax380 = eax374 + ecx378;
    *reinterpret_cast<uint32_t*>(&rdx381) = *reinterpret_cast<unsigned char*>(&eax380);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx381) + 4) = 0;
    tmp8_382 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax380) + g14000b080);
    *reinterpret_cast<unsigned char*>(&eax380) = tmp8_382;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx381 + 96) = *reinterpret_cast<signed char*>(&ecx378);
    ecx383 = v384;
    eax385 = eax380 + ecx383;
    *reinterpret_cast<uint32_t*>(&rdx386) = *reinterpret_cast<unsigned char*>(&eax385);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx386) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx386 + 96) = *reinterpret_cast<signed char*>(&ecx383);
    ecx387 = v388;
    tmp8_389 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax385) + g14000b081);
    *reinterpret_cast<unsigned char*>(&eax385) = tmp8_389;
    eax390 = eax385 + ecx387;
    *reinterpret_cast<uint32_t*>(&rdx391) = *reinterpret_cast<unsigned char*>(&eax390);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx391) + 4) = 0;
    tmp8_392 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax390) + g14000b082);
    *reinterpret_cast<unsigned char*>(&eax390) = tmp8_392;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx391 + 96) = *reinterpret_cast<signed char*>(&ecx387);
    ecx393 = v394;
    eax395 = eax390 + ecx393;
    *reinterpret_cast<uint32_t*>(&rdx396) = *reinterpret_cast<unsigned char*>(&eax395);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx396) + 4) = 0;
    tmp8_397 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax395) + g14000b083);
    *reinterpret_cast<unsigned char*>(&eax395) = tmp8_397;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx396 + 96) = *reinterpret_cast<signed char*>(&ecx393);
    ecx398 = v399;
    eax400 = eax395 + ecx398;
    *reinterpret_cast<uint32_t*>(&rdx401) = *reinterpret_cast<unsigned char*>(&eax400);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx401) + 4) = 0;
    tmp8_402 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax400) + g14000b084);
    *reinterpret_cast<unsigned char*>(&eax400) = tmp8_402;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx401 + 96) = *reinterpret_cast<signed char*>(&ecx398);
    ecx403 = v404;
    eax405 = eax400 + ecx403;
    *reinterpret_cast<uint32_t*>(&rdx406) = *reinterpret_cast<unsigned char*>(&eax405);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx406) + 4) = 0;
    tmp8_407 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax405) + g14000b085);
    *reinterpret_cast<unsigned char*>(&eax405) = tmp8_407;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx406 + 96) = *reinterpret_cast<signed char*>(&ecx403);
    ecx408 = v409;
    eax410 = eax405 + ecx408;
    *reinterpret_cast<uint32_t*>(&rdx411) = *reinterpret_cast<unsigned char*>(&eax410);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx411) + 4) = 0;
    tmp8_412 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax410) + g14000b086);
    *reinterpret_cast<unsigned char*>(&eax410) = tmp8_412;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx411 + 96) = *reinterpret_cast<signed char*>(&ecx408);
    ecx413 = v414;
    eax415 = eax410 + ecx413;
    *reinterpret_cast<uint32_t*>(&rdx416) = *reinterpret_cast<unsigned char*>(&eax415);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx416) + 4) = 0;
    tmp8_417 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax415) + g14000b087);
    *reinterpret_cast<unsigned char*>(&eax415) = tmp8_417;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx416 + 96) = *reinterpret_cast<signed char*>(&ecx413);
    ecx418 = v419;
    eax420 = eax415 + ecx418;
    *reinterpret_cast<uint32_t*>(&rdx421) = *reinterpret_cast<unsigned char*>(&eax420);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx421) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx421 + 96) = *reinterpret_cast<signed char*>(&ecx418);
    ecx422 = v423;
    tmp8_424 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax420) + g14000b088);
    *reinterpret_cast<unsigned char*>(&eax420) = tmp8_424;
    eax425 = eax420 + ecx422;
    *reinterpret_cast<uint32_t*>(&rdx426) = *reinterpret_cast<unsigned char*>(&eax425);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx426) + 4) = 0;
    tmp8_427 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax425) + g14000b089);
    *reinterpret_cast<unsigned char*>(&eax425) = tmp8_427;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx426 + 96) = *reinterpret_cast<signed char*>(&ecx422);
    ecx428 = v429;
    eax430 = eax425 + ecx428;
    *reinterpret_cast<uint32_t*>(&rdx431) = *reinterpret_cast<unsigned char*>(&eax430);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx431) + 4) = 0;
    tmp8_432 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax430) + g14000b08a);
    *reinterpret_cast<unsigned char*>(&eax430) = tmp8_432;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx431 + 96) = *reinterpret_cast<signed char*>(&ecx428);
    ecx433 = v434;
    eax435 = eax430 + ecx433;
    *reinterpret_cast<uint32_t*>(&rdx436) = *reinterpret_cast<unsigned char*>(&eax435);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx436) + 4) = 0;
    tmp8_437 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax435) + g14000b08b);
    *reinterpret_cast<unsigned char*>(&eax435) = tmp8_437;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx436 + 96) = *reinterpret_cast<signed char*>(&ecx433);
    ecx438 = v439;
    eax440 = eax435 + ecx438;
    *reinterpret_cast<uint32_t*>(&rdx441) = *reinterpret_cast<unsigned char*>(&eax440);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx441) + 4) = 0;
    tmp8_442 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax440) + g14000b08c);
    *reinterpret_cast<unsigned char*>(&eax440) = tmp8_442;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx441 + 96) = *reinterpret_cast<signed char*>(&ecx438);
    ecx443 = v444;
    eax445 = eax440 + ecx443;
    *reinterpret_cast<uint32_t*>(&rdx446) = *reinterpret_cast<unsigned char*>(&eax445);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx446) + 4) = 0;
    tmp8_447 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax445) + g14000b08d);
    *reinterpret_cast<unsigned char*>(&eax445) = tmp8_447;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx446 + 96) = *reinterpret_cast<signed char*>(&ecx443);
    ecx448 = v449;
    eax450 = eax445 + ecx448;
    *reinterpret_cast<uint32_t*>(&rdx451) = *reinterpret_cast<unsigned char*>(&eax450);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx451) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx451 + 96) = *reinterpret_cast<signed char*>(&ecx448);
    ecx452 = v453;
    tmp8_454 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax450) + g14000b08e);
    *reinterpret_cast<unsigned char*>(&eax450) = tmp8_454;
    eax455 = eax450 + ecx452;
    *reinterpret_cast<uint32_t*>(&rdx456) = *reinterpret_cast<unsigned char*>(&eax455);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx456) + 4) = 0;
    tmp8_457 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax455) + g14000b08f);
    *reinterpret_cast<unsigned char*>(&eax455) = tmp8_457;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx456 + 96) = *reinterpret_cast<signed char*>(&ecx452);
    ecx458 = v459;
    eax460 = eax455 + ecx458;
    *reinterpret_cast<uint32_t*>(&rdx461) = *reinterpret_cast<unsigned char*>(&eax460);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx461) + 4) = 0;
    tmp8_462 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax460) + g14000b090);
    *reinterpret_cast<unsigned char*>(&eax460) = tmp8_462;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx461 + 96) = *reinterpret_cast<signed char*>(&ecx458);
    ecx463 = v464;
    eax465 = eax460 + ecx463;
    *reinterpret_cast<uint32_t*>(&rdx466) = *reinterpret_cast<unsigned char*>(&eax465);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx466) + 4) = 0;
    tmp8_467 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax465) + g14000b091);
    *reinterpret_cast<unsigned char*>(&eax465) = tmp8_467;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx466 + 96) = *reinterpret_cast<signed char*>(&ecx463);
    ecx468 = v469;
    eax470 = eax465 + ecx468;
    *reinterpret_cast<uint32_t*>(&rdx471) = *reinterpret_cast<unsigned char*>(&eax470);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx471) + 4) = 0;
    tmp8_472 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax470) + g14000b092);
    *reinterpret_cast<unsigned char*>(&eax470) = tmp8_472;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx471 + 96) = *reinterpret_cast<signed char*>(&ecx468);
    ecx473 = v474;
    eax475 = eax470 + ecx473;
    *reinterpret_cast<uint32_t*>(&rdx476) = *reinterpret_cast<unsigned char*>(&eax475);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx476) + 4) = 0;
    tmp8_477 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax475) + g14000b093);
    *reinterpret_cast<unsigned char*>(&eax475) = tmp8_477;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx476 + 96) = *reinterpret_cast<signed char*>(&ecx473);
    ecx478 = v479;
    eax480 = eax475 + ecx478;
    *reinterpret_cast<uint32_t*>(&rdx481) = *reinterpret_cast<unsigned char*>(&eax480);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx481) + 4) = 0;
    tmp8_482 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax480) + g14000b094);
    *reinterpret_cast<unsigned char*>(&eax480) = tmp8_482;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx481 + 96) = *reinterpret_cast<signed char*>(&ecx478);
    ecx483 = v484;
    eax485 = eax480 + ecx483;
    *reinterpret_cast<uint32_t*>(&rdx486) = *reinterpret_cast<unsigned char*>(&eax485);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx486) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx486 + 96) = *reinterpret_cast<signed char*>(&ecx483);
    ecx487 = v488;
    tmp8_489 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax485) + g14000b095);
    *reinterpret_cast<unsigned char*>(&eax485) = tmp8_489;
    eax490 = eax485 + ecx487;
    *reinterpret_cast<uint32_t*>(&rdx491) = *reinterpret_cast<unsigned char*>(&eax490);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx491) + 4) = 0;
    tmp8_492 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax490) + g14000b096);
    *reinterpret_cast<unsigned char*>(&eax490) = tmp8_492;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx491 + 96) = *reinterpret_cast<signed char*>(&ecx487);
    ecx493 = v494;
    eax495 = eax490 + ecx493;
    *reinterpret_cast<uint32_t*>(&rdx496) = *reinterpret_cast<unsigned char*>(&eax495);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx496) + 4) = 0;
    tmp8_497 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax495) + g14000b097);
    *reinterpret_cast<unsigned char*>(&eax495) = tmp8_497;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx496 + 96) = *reinterpret_cast<signed char*>(&ecx493);
    ecx498 = v499;
    eax500 = eax495 + ecx498;
    *reinterpret_cast<uint32_t*>(&rdx501) = *reinterpret_cast<unsigned char*>(&eax500);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx501) + 4) = 0;
    tmp8_502 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax500) + g14000b098);
    *reinterpret_cast<unsigned char*>(&eax500) = tmp8_502;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx501 + 96) = *reinterpret_cast<signed char*>(&ecx498);
    ecx503 = v504;
    eax505 = eax500 + ecx503;
    *reinterpret_cast<uint32_t*>(&rdx506) = *reinterpret_cast<unsigned char*>(&eax505);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx506) + 4) = 0;
    tmp8_507 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax505) + g14000b099);
    *reinterpret_cast<unsigned char*>(&eax505) = tmp8_507;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx506 + 96) = *reinterpret_cast<signed char*>(&ecx503);
    ecx508 = v509;
    eax510 = eax505 + ecx508;
    *reinterpret_cast<uint32_t*>(&rdx511) = *reinterpret_cast<unsigned char*>(&eax510);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx511) + 4) = 0;
    tmp8_512 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax510) + g14000b09a);
    *reinterpret_cast<unsigned char*>(&eax510) = tmp8_512;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx511 + 96) = *reinterpret_cast<signed char*>(&ecx508);
    ecx513 = v514;
    eax515 = eax510 + ecx513;
    *reinterpret_cast<uint32_t*>(&rdx516) = *reinterpret_cast<unsigned char*>(&eax515);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx516) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx516 + 96) = *reinterpret_cast<signed char*>(&ecx513);
    ecx517 = v518;
    tmp8_519 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax515) + g14000b09b);
    *reinterpret_cast<unsigned char*>(&eax515) = tmp8_519;
    eax520 = eax515 + ecx517;
    *reinterpret_cast<uint32_t*>(&rdx521) = *reinterpret_cast<unsigned char*>(&eax520);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx521) + 4) = 0;
    tmp8_522 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax520) + g14000b09c);
    *reinterpret_cast<unsigned char*>(&eax520) = tmp8_522;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx521 + 96) = *reinterpret_cast<signed char*>(&ecx517);
    ecx523 = v524;
    eax525 = eax520 + ecx523;
    *reinterpret_cast<uint32_t*>(&rdx526) = *reinterpret_cast<unsigned char*>(&eax525);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx526) + 4) = 0;
    tmp8_527 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax525) + g14000b09d);
    *reinterpret_cast<unsigned char*>(&eax525) = tmp8_527;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx526 + 96) = *reinterpret_cast<signed char*>(&ecx523);
    ecx528 = v529;
    eax530 = eax525 + ecx528;
    *reinterpret_cast<uint32_t*>(&rdx531) = *reinterpret_cast<unsigned char*>(&eax530);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx531) + 4) = 0;
    tmp8_532 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax530) + g14000b09e);
    *reinterpret_cast<unsigned char*>(&eax530) = tmp8_532;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx531 + 96) = *reinterpret_cast<signed char*>(&ecx528);
    ecx533 = v534;
    eax535 = eax530 + ecx533;
    *reinterpret_cast<uint32_t*>(&rdx536) = *reinterpret_cast<unsigned char*>(&eax535);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx536) + 4) = 0;
    tmp8_537 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax535) + g14000b09f);
    *reinterpret_cast<unsigned char*>(&eax535) = tmp8_537;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx536 + 96) = *reinterpret_cast<signed char*>(&ecx533);
    ecx538 = v539;
    eax540 = eax535 + ecx538;
    *reinterpret_cast<uint32_t*>(&rdx541) = *reinterpret_cast<unsigned char*>(&eax540);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx541) + 4) = 0;
    tmp8_542 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax540) + g14000b0a0);
    *reinterpret_cast<unsigned char*>(&eax540) = tmp8_542;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx541 + 96) = *reinterpret_cast<signed char*>(&ecx538);
    ecx543 = v544;
    eax545 = eax540 + ecx543;
    *reinterpret_cast<uint32_t*>(&rdx546) = *reinterpret_cast<unsigned char*>(&eax545);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx546) + 4) = 0;
    tmp8_547 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax545) + g14000b0a1);
    *reinterpret_cast<unsigned char*>(&eax545) = tmp8_547;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx546 + 96) = *reinterpret_cast<signed char*>(&ecx543);
    ecx548 = v549;
    eax550 = eax545 + ecx548;
    *reinterpret_cast<uint32_t*>(&rdx551) = *reinterpret_cast<unsigned char*>(&eax550);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx551) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx551 + 96) = *reinterpret_cast<signed char*>(&ecx548);
    ecx552 = v553;
    tmp8_554 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax550) + g14000b0a2);
    *reinterpret_cast<unsigned char*>(&eax550) = tmp8_554;
    eax555 = eax550 + ecx552;
    *reinterpret_cast<uint32_t*>(&rdx556) = *reinterpret_cast<unsigned char*>(&eax555);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx556) + 4) = 0;
    tmp8_557 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax555) + g14000b0a3);
    *reinterpret_cast<unsigned char*>(&eax555) = tmp8_557;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx556 + 96) = *reinterpret_cast<signed char*>(&ecx552);
    ecx558 = v559;
    eax560 = eax555 + ecx558;
    *reinterpret_cast<uint32_t*>(&rdx561) = *reinterpret_cast<unsigned char*>(&eax560);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx561) + 4) = 0;
    tmp8_562 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax560) + g14000b0a4);
    *reinterpret_cast<unsigned char*>(&eax560) = tmp8_562;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx561 + 96) = *reinterpret_cast<signed char*>(&ecx558);
    ecx563 = v564;
    eax565 = eax560 + ecx563;
    *reinterpret_cast<uint32_t*>(&rdx566) = *reinterpret_cast<unsigned char*>(&eax565);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx566) + 4) = 0;
    tmp8_567 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax565) + g14000b0a5);
    *reinterpret_cast<unsigned char*>(&eax565) = tmp8_567;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx566 + 96) = *reinterpret_cast<signed char*>(&ecx563);
    ecx568 = v569;
    eax570 = eax565 + ecx568;
    *reinterpret_cast<uint32_t*>(&rdx571) = *reinterpret_cast<unsigned char*>(&eax570);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx571) + 4) = 0;
    tmp8_572 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax570) + g14000b0a6);
    *reinterpret_cast<unsigned char*>(&eax570) = tmp8_572;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx571 + 96) = *reinterpret_cast<signed char*>(&ecx568);
    ecx573 = v574;
    eax575 = eax570 + ecx573;
    *reinterpret_cast<uint32_t*>(&rdx576) = *reinterpret_cast<unsigned char*>(&eax575);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx576) + 4) = 0;
    tmp8_577 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax575) + g14000b0a7);
    *reinterpret_cast<unsigned char*>(&eax575) = tmp8_577;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx576 + 96) = *reinterpret_cast<signed char*>(&ecx573);
    ecx578 = v579;
    eax580 = eax575 + ecx578;
    *reinterpret_cast<uint32_t*>(&rdx581) = *reinterpret_cast<unsigned char*>(&eax580);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx581) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx581 + 96) = *reinterpret_cast<signed char*>(&ecx578);
    ecx582 = v583;
    tmp8_584 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax580) + g14000b0a8);
    *reinterpret_cast<unsigned char*>(&eax580) = tmp8_584;
    eax585 = eax580 + ecx582;
    *reinterpret_cast<uint32_t*>(&rdx586) = *reinterpret_cast<unsigned char*>(&eax585);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx586) + 4) = 0;
    tmp8_587 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax585) + g14000b0a9);
    *reinterpret_cast<unsigned char*>(&eax585) = tmp8_587;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx586 + 96) = *reinterpret_cast<signed char*>(&ecx582);
    ecx588 = v589;
    eax590 = eax585 + ecx588;
    *reinterpret_cast<uint32_t*>(&rdx591) = *reinterpret_cast<unsigned char*>(&eax590);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx591) + 4) = 0;
    tmp8_592 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax590) + g14000b0aa);
    *reinterpret_cast<unsigned char*>(&eax590) = tmp8_592;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx591 + 96) = *reinterpret_cast<signed char*>(&ecx588);
    ecx593 = v594;
    eax595 = eax590 + ecx593;
    *reinterpret_cast<uint32_t*>(&rdx596) = *reinterpret_cast<unsigned char*>(&eax595);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx596) + 4) = 0;
    tmp8_597 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax595) + g14000b0ab);
    *reinterpret_cast<unsigned char*>(&eax595) = tmp8_597;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx596 + 96) = *reinterpret_cast<signed char*>(&ecx593);
    ecx598 = v599;
    eax600 = eax595 + ecx598;
    *reinterpret_cast<uint32_t*>(&rdx601) = *reinterpret_cast<unsigned char*>(&eax600);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx601) + 4) = 0;
    tmp8_602 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax600) + g14000b0ac);
    *reinterpret_cast<unsigned char*>(&eax600) = tmp8_602;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx601 + 96) = *reinterpret_cast<signed char*>(&ecx598);
    ecx603 = v604;
    eax605 = eax600 + ecx603;
    *reinterpret_cast<uint32_t*>(&rdx606) = *reinterpret_cast<unsigned char*>(&eax605);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx606) + 4) = 0;
    tmp8_607 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax605) + g14000b0ad);
    *reinterpret_cast<unsigned char*>(&eax605) = tmp8_607;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx606 + 96) = *reinterpret_cast<signed char*>(&ecx603);
    ecx608 = v609;
    eax610 = eax605 + ecx608;
    *reinterpret_cast<uint32_t*>(&rdx611) = *reinterpret_cast<unsigned char*>(&eax610);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx611) + 4) = 0;
    tmp8_612 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax610) + g14000b0ae);
    *reinterpret_cast<unsigned char*>(&eax610) = tmp8_612;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx611 + 96) = *reinterpret_cast<signed char*>(&ecx608);
    ecx613 = v614;
    eax615 = eax610 + ecx613;
    *reinterpret_cast<uint32_t*>(&rdx616) = *reinterpret_cast<unsigned char*>(&eax615);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx616) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx616 + 96) = *reinterpret_cast<signed char*>(&ecx613);
    ecx617 = v618;
    tmp8_619 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax615) + g14000b0af);
    *reinterpret_cast<unsigned char*>(&eax615) = tmp8_619;
    eax620 = eax615 + ecx617;
    *reinterpret_cast<uint32_t*>(&rdx621) = *reinterpret_cast<unsigned char*>(&eax620);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx621) + 4) = 0;
    tmp8_622 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax620) + g14000b0b0);
    *reinterpret_cast<unsigned char*>(&eax620) = tmp8_622;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx621 + 96) = *reinterpret_cast<signed char*>(&ecx617);
    ecx623 = v624;
    eax625 = eax620 + ecx623;
    *reinterpret_cast<uint32_t*>(&rdx626) = *reinterpret_cast<unsigned char*>(&eax625);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx626) + 4) = 0;
    tmp8_627 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax625) + g14000b0b1);
    *reinterpret_cast<unsigned char*>(&eax625) = tmp8_627;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx626 + 96) = *reinterpret_cast<signed char*>(&ecx623);
    ecx628 = v629;
    eax630 = eax625 + ecx628;
    *reinterpret_cast<uint32_t*>(&rdx631) = *reinterpret_cast<unsigned char*>(&eax630);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx631) + 4) = 0;
    tmp8_632 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax630) + g14000b0b2);
    *reinterpret_cast<unsigned char*>(&eax630) = tmp8_632;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx631 + 96) = *reinterpret_cast<signed char*>(&ecx628);
    ecx633 = v634;
    eax635 = eax630 + ecx633;
    *reinterpret_cast<uint32_t*>(&rdx636) = *reinterpret_cast<unsigned char*>(&eax635);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx636) + 4) = 0;
    tmp8_637 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax635) + g14000b0b3);
    *reinterpret_cast<unsigned char*>(&eax635) = tmp8_637;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx636 + 96) = *reinterpret_cast<signed char*>(&ecx633);
    ecx638 = v639;
    eax640 = eax635 + ecx638;
    *reinterpret_cast<uint32_t*>(&rdx641) = *reinterpret_cast<unsigned char*>(&eax640);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx641) + 4) = 0;
    tmp8_642 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax640) + g14000b0b4);
    *reinterpret_cast<unsigned char*>(&eax640) = tmp8_642;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx641 + 96) = *reinterpret_cast<signed char*>(&ecx638);
    ecx643 = v644;
    eax645 = eax640 + ecx643;
    *reinterpret_cast<uint32_t*>(&rdx646) = *reinterpret_cast<unsigned char*>(&eax645);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx646) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx646 + 96) = *reinterpret_cast<signed char*>(&ecx643);
    ecx647 = v648;
    tmp8_649 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax645) + g14000b0b5);
    *reinterpret_cast<unsigned char*>(&eax645) = tmp8_649;
    eax650 = eax645 + ecx647;
    *reinterpret_cast<uint32_t*>(&rdx651) = *reinterpret_cast<unsigned char*>(&eax650);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx651) + 4) = 0;
    tmp8_652 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax650) + g14000b0b6);
    *reinterpret_cast<unsigned char*>(&eax650) = tmp8_652;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx651 + 96) = *reinterpret_cast<signed char*>(&ecx647);
    ecx653 = v654;
    eax655 = eax650 + ecx653;
    *reinterpret_cast<uint32_t*>(&rdx656) = *reinterpret_cast<unsigned char*>(&eax655);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx656) + 4) = 0;
    tmp8_657 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax655) + g14000b0b7);
    *reinterpret_cast<unsigned char*>(&eax655) = tmp8_657;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx656 + 96) = *reinterpret_cast<signed char*>(&ecx653);
    ecx658 = v659;
    eax660 = eax655 + ecx658;
    *reinterpret_cast<uint32_t*>(&rdx661) = *reinterpret_cast<unsigned char*>(&eax660);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx661) + 4) = 0;
    tmp8_662 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax660) + g14000b0b8);
    *reinterpret_cast<unsigned char*>(&eax660) = tmp8_662;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx661 + 96) = *reinterpret_cast<signed char*>(&ecx658);
    ecx663 = v664;
    eax665 = eax660 + ecx663;
    *reinterpret_cast<uint32_t*>(&rdx666) = *reinterpret_cast<unsigned char*>(&eax665);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx666) + 4) = 0;
    tmp8_667 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax665) + g14000b0b9);
    *reinterpret_cast<unsigned char*>(&eax665) = tmp8_667;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx666 + 96) = *reinterpret_cast<signed char*>(&ecx663);
    ecx668 = v669;
    eax670 = eax665 + ecx668;
    *reinterpret_cast<uint32_t*>(&rdx671) = *reinterpret_cast<unsigned char*>(&eax670);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx671) + 4) = 0;
    tmp8_672 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax670) + g14000b0ba);
    *reinterpret_cast<unsigned char*>(&eax670) = tmp8_672;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx671 + 96) = *reinterpret_cast<signed char*>(&ecx668);
    ecx673 = v674;
    eax675 = eax670 + ecx673;
    *reinterpret_cast<uint32_t*>(&rdx676) = *reinterpret_cast<unsigned char*>(&eax675);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx676) + 4) = 0;
    tmp8_677 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax675) + g14000b0bb);
    *reinterpret_cast<unsigned char*>(&eax675) = tmp8_677;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx676 + 96) = *reinterpret_cast<signed char*>(&ecx673);
    ecx678 = v679;
    eax680 = eax675 + ecx678;
    *reinterpret_cast<uint32_t*>(&rdx681) = *reinterpret_cast<unsigned char*>(&eax680);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx681) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx681 + 96) = *reinterpret_cast<signed char*>(&ecx678);
    ecx682 = v683;
    tmp8_684 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax680) + g14000b0bc);
    *reinterpret_cast<unsigned char*>(&eax680) = tmp8_684;
    eax685 = eax680 + ecx682;
    *reinterpret_cast<uint32_t*>(&rdx686) = *reinterpret_cast<unsigned char*>(&eax685);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx686) + 4) = 0;
    tmp8_687 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax685) + g14000b0bd);
    *reinterpret_cast<unsigned char*>(&eax685) = tmp8_687;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx686 + 96) = *reinterpret_cast<signed char*>(&ecx682);
    ecx688 = v689;
    eax690 = eax685 + ecx688;
    *reinterpret_cast<uint32_t*>(&rdx691) = *reinterpret_cast<unsigned char*>(&eax690);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx691) + 4) = 0;
    tmp8_692 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax690) + g14000b0be);
    *reinterpret_cast<unsigned char*>(&eax690) = tmp8_692;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx691 + 96) = *reinterpret_cast<signed char*>(&ecx688);
    ecx693 = v694;
    eax695 = eax690 + ecx693;
    *reinterpret_cast<uint32_t*>(&rdx696) = *reinterpret_cast<unsigned char*>(&eax695);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx696) + 4) = 0;
    tmp8_697 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax695) + g14000b0bf);
    *reinterpret_cast<unsigned char*>(&eax695) = tmp8_697;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx696 + 96) = *reinterpret_cast<signed char*>(&ecx693);
    ecx698 = v699;
    eax700 = eax695 + ecx698;
    *reinterpret_cast<uint32_t*>(&rdx701) = *reinterpret_cast<unsigned char*>(&eax700);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx701) + 4) = 0;
    tmp8_702 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax700) + g14000b0c0);
    *reinterpret_cast<unsigned char*>(&eax700) = tmp8_702;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx701 + 96) = *reinterpret_cast<signed char*>(&ecx698);
    ecx703 = v704;
    eax705 = eax700 + ecx703;
    *reinterpret_cast<uint32_t*>(&rdx706) = *reinterpret_cast<unsigned char*>(&eax705);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx706) + 4) = 0;
    tmp8_707 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax705) + g14000b0c1);
    *reinterpret_cast<unsigned char*>(&eax705) = tmp8_707;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx706 + 96) = *reinterpret_cast<signed char*>(&ecx703);
    ecx708 = v709;
    eax710 = eax705 + ecx708;
    *reinterpret_cast<uint32_t*>(&rdx711) = *reinterpret_cast<unsigned char*>(&eax710);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx711) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx711 + 96) = *reinterpret_cast<signed char*>(&ecx708);
    ecx712 = v713;
    tmp8_714 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax710) + g14000b0c2);
    *reinterpret_cast<unsigned char*>(&eax710) = tmp8_714;
    eax715 = eax710 + ecx712;
    *reinterpret_cast<uint32_t*>(&rdx716) = *reinterpret_cast<unsigned char*>(&eax715);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx716) + 4) = 0;
    tmp8_717 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax715) + g14000b0c3);
    *reinterpret_cast<unsigned char*>(&eax715) = tmp8_717;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx716 + 96) = *reinterpret_cast<signed char*>(&ecx712);
    ecx718 = v719;
    eax720 = eax715 + ecx718;
    *reinterpret_cast<uint32_t*>(&rdx721) = *reinterpret_cast<unsigned char*>(&eax720);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx721) + 4) = 0;
    tmp8_722 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax720) + g14000b0c4);
    *reinterpret_cast<unsigned char*>(&eax720) = tmp8_722;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx721 + 96) = *reinterpret_cast<signed char*>(&ecx718);
    ecx723 = v724;
    eax725 = eax720 + ecx723;
    *reinterpret_cast<uint32_t*>(&rdx726) = *reinterpret_cast<unsigned char*>(&eax725);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx726) + 4) = 0;
    tmp8_727 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax725) + g14000b0c5);
    *reinterpret_cast<unsigned char*>(&eax725) = tmp8_727;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx726 + 96) = *reinterpret_cast<signed char*>(&ecx723);
    ecx728 = v729;
    eax730 = eax725 + ecx728;
    *reinterpret_cast<uint32_t*>(&rdx731) = *reinterpret_cast<unsigned char*>(&eax730);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx731) + 4) = 0;
    tmp8_732 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax730) + g14000b0c6);
    *reinterpret_cast<unsigned char*>(&eax730) = tmp8_732;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx731 + 96) = *reinterpret_cast<signed char*>(&ecx728);
    ecx733 = v734;
    eax735 = eax730 + ecx733;
    *reinterpret_cast<uint32_t*>(&rdx736) = *reinterpret_cast<unsigned char*>(&eax735);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx736) + 4) = 0;
    tmp8_737 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax735) + g14000b0c7);
    *reinterpret_cast<unsigned char*>(&eax735) = tmp8_737;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx736 + 96) = *reinterpret_cast<signed char*>(&ecx733);
    ecx738 = v739;
    eax740 = eax735 + ecx738;
    *reinterpret_cast<uint32_t*>(&rdx741) = *reinterpret_cast<unsigned char*>(&eax740);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx741) + 4) = 0;
    tmp8_742 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax740) + g14000b0c8);
    *reinterpret_cast<unsigned char*>(&eax740) = tmp8_742;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx741 + 96) = *reinterpret_cast<signed char*>(&ecx738);
    ecx743 = v744;
    eax745 = eax740 + ecx743;
    *reinterpret_cast<uint32_t*>(&rdx746) = *reinterpret_cast<unsigned char*>(&eax745);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx746) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx746 + 96) = *reinterpret_cast<signed char*>(&ecx743);
    ecx747 = v748;
    tmp8_749 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax745) + g14000b0c9);
    *reinterpret_cast<unsigned char*>(&eax745) = tmp8_749;
    eax750 = eax745 + ecx747;
    *reinterpret_cast<uint32_t*>(&rdx751) = *reinterpret_cast<unsigned char*>(&eax750);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx751) + 4) = 0;
    tmp8_752 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax750) + g14000b0ca);
    *reinterpret_cast<unsigned char*>(&eax750) = tmp8_752;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx751 + 96) = *reinterpret_cast<signed char*>(&ecx747);
    ecx753 = v754;
    eax755 = eax750 + ecx753;
    *reinterpret_cast<uint32_t*>(&rdx756) = *reinterpret_cast<unsigned char*>(&eax755);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx756) + 4) = 0;
    tmp8_757 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax755) + g14000b0cb);
    *reinterpret_cast<unsigned char*>(&eax755) = tmp8_757;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx756 + 96) = *reinterpret_cast<signed char*>(&ecx753);
    ecx758 = v759;
    eax760 = eax755 + ecx758;
    *reinterpret_cast<uint32_t*>(&rdx761) = *reinterpret_cast<unsigned char*>(&eax760);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx761) + 4) = 0;
    tmp8_762 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax760) + g14000b0cc);
    *reinterpret_cast<unsigned char*>(&eax760) = tmp8_762;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx761 + 96) = *reinterpret_cast<signed char*>(&ecx758);
    ecx763 = v764;
    eax765 = eax760 + ecx763;
    *reinterpret_cast<uint32_t*>(&rdx766) = *reinterpret_cast<unsigned char*>(&eax765);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx766) + 4) = 0;
    tmp8_767 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax765) + g14000b0cd);
    *reinterpret_cast<unsigned char*>(&eax765) = tmp8_767;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx766 + 96) = *reinterpret_cast<signed char*>(&ecx763);
    ecx768 = v769;
    eax770 = eax765 + ecx768;
    *reinterpret_cast<uint32_t*>(&rdx771) = *reinterpret_cast<unsigned char*>(&eax770);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx771) + 4) = 0;
    tmp8_772 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax770) + g14000b0ce);
    *reinterpret_cast<unsigned char*>(&eax770) = tmp8_772;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx771 + 96) = *reinterpret_cast<signed char*>(&ecx768);
    ecx773 = v774;
    eax775 = eax770 + ecx773;
    *reinterpret_cast<uint32_t*>(&rdx776) = *reinterpret_cast<unsigned char*>(&eax775);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx776) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx776 + 96) = *reinterpret_cast<signed char*>(&ecx773);
    ecx777 = v778;
    tmp8_779 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax775) + g14000b0cf);
    *reinterpret_cast<unsigned char*>(&eax775) = tmp8_779;
    eax780 = eax775 + ecx777;
    *reinterpret_cast<uint32_t*>(&rdx781) = *reinterpret_cast<unsigned char*>(&eax780);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx781) + 4) = 0;
    tmp8_782 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax780) + g14000b0d0);
    *reinterpret_cast<unsigned char*>(&eax780) = tmp8_782;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx781 + 96) = *reinterpret_cast<signed char*>(&ecx777);
    ecx783 = v784;
    eax785 = eax780 + ecx783;
    *reinterpret_cast<uint32_t*>(&rdx786) = *reinterpret_cast<unsigned char*>(&eax785);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx786) + 4) = 0;
    tmp8_787 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax785) + g14000b0d1);
    *reinterpret_cast<unsigned char*>(&eax785) = tmp8_787;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx786 + 96) = *reinterpret_cast<signed char*>(&ecx783);
    ecx788 = v789;
    eax790 = eax785 + ecx788;
    *reinterpret_cast<uint32_t*>(&rdx791) = *reinterpret_cast<unsigned char*>(&eax790);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx791) + 4) = 0;
    tmp8_792 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax790) + g14000b0d2);
    *reinterpret_cast<unsigned char*>(&eax790) = tmp8_792;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx791 + 96) = *reinterpret_cast<signed char*>(&ecx788);
    ecx793 = v794;
    eax795 = eax790 + ecx793;
    *reinterpret_cast<uint32_t*>(&rdx796) = *reinterpret_cast<unsigned char*>(&eax795);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx796) + 4) = 0;
    tmp8_797 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax795) + g14000b0d3);
    *reinterpret_cast<unsigned char*>(&eax795) = tmp8_797;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx796 + 96) = *reinterpret_cast<signed char*>(&ecx793);
    ecx798 = v799;
    eax800 = eax795 + ecx798;
    *reinterpret_cast<uint32_t*>(&rdx801) = *reinterpret_cast<unsigned char*>(&eax800);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx801) + 4) = 0;
    tmp8_802 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax800) + g14000b0d4);
    *reinterpret_cast<unsigned char*>(&eax800) = tmp8_802;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx801 + 96) = *reinterpret_cast<signed char*>(&ecx798);
    ecx803 = v804;
    eax805 = eax800 + ecx803;
    *reinterpret_cast<uint32_t*>(&rdx806) = *reinterpret_cast<unsigned char*>(&eax805);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx806) + 4) = 0;
    tmp8_807 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax805) + g14000b0d5);
    *reinterpret_cast<unsigned char*>(&eax805) = tmp8_807;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx806 + 96) = *reinterpret_cast<signed char*>(&ecx803);
    ecx808 = v809;
    eax810 = eax805 + ecx808;
    *reinterpret_cast<uint32_t*>(&rdx811) = *reinterpret_cast<unsigned char*>(&eax810);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx811) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx811 + 96) = *reinterpret_cast<signed char*>(&ecx808);
    ecx812 = v813;
    tmp8_814 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax810) + g14000b0d6);
    *reinterpret_cast<unsigned char*>(&eax810) = tmp8_814;
    eax815 = eax810 + ecx812;
    *reinterpret_cast<uint32_t*>(&rdx816) = *reinterpret_cast<unsigned char*>(&eax815);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx816) + 4) = 0;
    tmp8_817 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax815) + g14000b0d7);
    *reinterpret_cast<unsigned char*>(&eax815) = tmp8_817;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx816 + 96) = *reinterpret_cast<signed char*>(&ecx812);
    ecx818 = v819;
    eax820 = eax815 + ecx818;
    *reinterpret_cast<uint32_t*>(&rdx821) = *reinterpret_cast<unsigned char*>(&eax820);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx821) + 4) = 0;
    tmp8_822 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax820) + g14000b0d8);
    *reinterpret_cast<unsigned char*>(&eax820) = tmp8_822;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx821 + 96) = *reinterpret_cast<signed char*>(&ecx818);
    ecx823 = v824;
    eax825 = eax820 + ecx823;
    *reinterpret_cast<uint32_t*>(&rdx826) = *reinterpret_cast<unsigned char*>(&eax825);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx826) + 4) = 0;
    tmp8_827 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax825) + g14000b0d9);
    *reinterpret_cast<unsigned char*>(&eax825) = tmp8_827;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx826 + 96) = *reinterpret_cast<signed char*>(&ecx823);
    ecx828 = v829;
    eax830 = eax825 + ecx828;
    *reinterpret_cast<uint32_t*>(&rdx831) = *reinterpret_cast<unsigned char*>(&eax830);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx831) + 4) = 0;
    tmp8_832 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax830) + g14000b0da);
    *reinterpret_cast<unsigned char*>(&eax830) = tmp8_832;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx831 + 96) = *reinterpret_cast<signed char*>(&ecx828);
    ecx833 = v834;
    eax835 = eax830 + ecx833;
    *reinterpret_cast<uint32_t*>(&rdx836) = *reinterpret_cast<unsigned char*>(&eax835);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx836) + 4) = 0;
    tmp8_837 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax835) + g14000b0db);
    *reinterpret_cast<unsigned char*>(&eax835) = tmp8_837;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx836 + 96) = *reinterpret_cast<signed char*>(&ecx833);
    ecx838 = v839;
    eax840 = eax835 + ecx838;
    *reinterpret_cast<uint32_t*>(&rdx841) = *reinterpret_cast<unsigned char*>(&eax840);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx841) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx841 + 96) = *reinterpret_cast<signed char*>(&ecx838);
    ecx842 = v843;
    tmp8_844 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax840) + g14000b0dc);
    *reinterpret_cast<unsigned char*>(&eax840) = tmp8_844;
    eax845 = eax840 + ecx842;
    *reinterpret_cast<uint32_t*>(&rdx846) = *reinterpret_cast<unsigned char*>(&eax845);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx846) + 4) = 0;
    tmp8_847 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax845) + g14000b0dd);
    *reinterpret_cast<unsigned char*>(&eax845) = tmp8_847;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx846 + 96) = *reinterpret_cast<signed char*>(&ecx842);
    ecx848 = v849;
    eax850 = eax845 + ecx848;
    *reinterpret_cast<uint32_t*>(&rdx851) = *reinterpret_cast<unsigned char*>(&eax850);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx851) + 4) = 0;
    tmp8_852 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax850) + g14000b0de);
    *reinterpret_cast<unsigned char*>(&eax850) = tmp8_852;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx851 + 96) = *reinterpret_cast<signed char*>(&ecx848);
    ecx853 = v854;
    eax855 = eax850 + ecx853;
    *reinterpret_cast<uint32_t*>(&rdx856) = *reinterpret_cast<unsigned char*>(&eax855);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx856) + 4) = 0;
    tmp8_857 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax855) + g14000b0df);
    *reinterpret_cast<unsigned char*>(&eax855) = tmp8_857;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx856 + 96) = *reinterpret_cast<signed char*>(&ecx853);
    ecx858 = v859;
    eax860 = eax855 + ecx858;
    *reinterpret_cast<uint32_t*>(&rdx861) = *reinterpret_cast<unsigned char*>(&eax860);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx861) + 4) = 0;
    tmp8_862 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax860) + g14000b0e0);
    *reinterpret_cast<unsigned char*>(&eax860) = tmp8_862;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx861 + 96) = *reinterpret_cast<signed char*>(&ecx858);
    ecx863 = v864;
    eax865 = eax860 + ecx863;
    *reinterpret_cast<uint32_t*>(&rdx866) = *reinterpret_cast<unsigned char*>(&eax865);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx866) + 4) = 0;
    tmp8_867 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax865) + g14000b0e1);
    *reinterpret_cast<unsigned char*>(&eax865) = tmp8_867;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx866 + 96) = *reinterpret_cast<signed char*>(&ecx863);
    ecx868 = v869;
    eax870 = eax865 + ecx868;
    *reinterpret_cast<uint32_t*>(&rdx871) = *reinterpret_cast<unsigned char*>(&eax870);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx871) + 4) = 0;
    tmp8_872 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax870) + g14000b0e2);
    *reinterpret_cast<unsigned char*>(&eax870) = tmp8_872;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx871 + 96) = *reinterpret_cast<signed char*>(&ecx868);
    ecx873 = v874;
    eax875 = eax870 + ecx873;
    *reinterpret_cast<uint32_t*>(&rdx876) = *reinterpret_cast<unsigned char*>(&eax875);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx876) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx876 + 96) = *reinterpret_cast<signed char*>(&ecx873);
    ecx877 = v878;
    tmp8_879 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax875) + g14000b0e3);
    *reinterpret_cast<unsigned char*>(&eax875) = tmp8_879;
    eax880 = eax875 + ecx877;
    *reinterpret_cast<uint32_t*>(&rdx881) = *reinterpret_cast<unsigned char*>(&eax880);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx881) + 4) = 0;
    tmp8_882 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax880) + g14000b0e4);
    *reinterpret_cast<unsigned char*>(&eax880) = tmp8_882;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx881 + 96) = *reinterpret_cast<signed char*>(&ecx877);
    ecx883 = v884;
    eax885 = eax880 + ecx883;
    *reinterpret_cast<uint32_t*>(&rdx886) = *reinterpret_cast<unsigned char*>(&eax885);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx886) + 4) = 0;
    tmp8_887 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax885) + g14000b0e5);
    *reinterpret_cast<unsigned char*>(&eax885) = tmp8_887;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx886 + 96) = *reinterpret_cast<signed char*>(&ecx883);
    ecx888 = v889;
    eax890 = eax885 + ecx888;
    *reinterpret_cast<uint32_t*>(&rdx891) = *reinterpret_cast<unsigned char*>(&eax890);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx891) + 4) = 0;
    tmp8_892 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax890) + g14000b0e6);
    *reinterpret_cast<unsigned char*>(&eax890) = tmp8_892;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx891 + 96) = *reinterpret_cast<signed char*>(&ecx888);
    ecx893 = v894;
    eax895 = eax890 + ecx893;
    *reinterpret_cast<uint32_t*>(&rdx896) = *reinterpret_cast<unsigned char*>(&eax895);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx896) + 4) = 0;
    tmp8_897 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax895) + g14000b0e7);
    *reinterpret_cast<unsigned char*>(&eax895) = tmp8_897;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx896 + 96) = *reinterpret_cast<signed char*>(&ecx893);
    ecx898 = v899;
    eax900 = eax895 + ecx898;
    *reinterpret_cast<uint32_t*>(&rdx901) = *reinterpret_cast<unsigned char*>(&eax900);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx901) + 4) = 0;
    tmp8_902 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax900) + g14000b0e8);
    *reinterpret_cast<unsigned char*>(&eax900) = tmp8_902;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx901 + 96) = *reinterpret_cast<signed char*>(&ecx898);
    ecx903 = v904;
    eax905 = eax900 + ecx903;
    *reinterpret_cast<uint32_t*>(&rdx906) = *reinterpret_cast<unsigned char*>(&eax905);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx906) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx906 + 96) = *reinterpret_cast<signed char*>(&ecx903);
    ecx907 = v908;
    tmp8_909 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax905) + g14000b0e9);
    *reinterpret_cast<unsigned char*>(&eax905) = tmp8_909;
    eax910 = eax905 + ecx907;
    *reinterpret_cast<uint32_t*>(&rdx911) = *reinterpret_cast<unsigned char*>(&eax910);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx911) + 4) = 0;
    tmp8_912 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax910) + g14000b0ea);
    *reinterpret_cast<unsigned char*>(&eax910) = tmp8_912;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx911 + 96) = *reinterpret_cast<signed char*>(&ecx907);
    ecx913 = v914;
    eax915 = eax910 + ecx913;
    *reinterpret_cast<uint32_t*>(&rdx916) = *reinterpret_cast<unsigned char*>(&eax915);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx916) + 4) = 0;
    tmp8_917 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax915) + g14000b0eb);
    *reinterpret_cast<unsigned char*>(&eax915) = tmp8_917;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx916 + 96) = *reinterpret_cast<signed char*>(&ecx913);
    ecx918 = v919;
    eax920 = eax915 + ecx918;
    *reinterpret_cast<uint32_t*>(&rdx921) = *reinterpret_cast<unsigned char*>(&eax920);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx921) + 4) = 0;
    tmp8_922 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax920) + g14000b0ec);
    *reinterpret_cast<unsigned char*>(&eax920) = tmp8_922;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx921 + 96) = *reinterpret_cast<signed char*>(&ecx918);
    ecx923 = v924;
    eax925 = eax920 + ecx923;
    *reinterpret_cast<uint32_t*>(&rdx926) = *reinterpret_cast<unsigned char*>(&eax925);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx926) + 4) = 0;
    tmp8_927 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax925) + g14000b0ed);
    *reinterpret_cast<unsigned char*>(&eax925) = tmp8_927;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx926 + 96) = *reinterpret_cast<signed char*>(&ecx923);
    ecx928 = v929;
    eax930 = eax925 + ecx928;
    *reinterpret_cast<uint32_t*>(&rdx931) = *reinterpret_cast<unsigned char*>(&eax930);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx931) + 4) = 0;
    tmp8_932 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax930) + g14000b0ee);
    *reinterpret_cast<unsigned char*>(&eax930) = tmp8_932;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx931 + 96) = *reinterpret_cast<signed char*>(&ecx928);
    ecx933 = v934;
    eax935 = eax930 + ecx933;
    *reinterpret_cast<uint32_t*>(&rdx936) = *reinterpret_cast<unsigned char*>(&eax935);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx936) + 4) = 0;
    tmp8_937 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax935) + g14000b0ef);
    *reinterpret_cast<unsigned char*>(&eax935) = tmp8_937;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx936 + 96) = *reinterpret_cast<signed char*>(&ecx933);
    ecx938 = v939;
    eax940 = eax935 + ecx938;
    *reinterpret_cast<uint32_t*>(&rdx941) = *reinterpret_cast<unsigned char*>(&eax940);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx941) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx941 + 96) = *reinterpret_cast<signed char*>(&ecx938);
    ecx942 = v943;
    tmp8_944 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax940) + g14000b0f0);
    *reinterpret_cast<unsigned char*>(&eax940) = tmp8_944;
    eax945 = eax940 + ecx942;
    *reinterpret_cast<uint32_t*>(&rdx946) = *reinterpret_cast<unsigned char*>(&eax945);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx946) + 4) = 0;
    tmp8_947 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax945) + g14000b0f1);
    *reinterpret_cast<unsigned char*>(&eax945) = tmp8_947;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx946 + 96) = *reinterpret_cast<signed char*>(&ecx942);
    ecx948 = v949;
    eax950 = eax945 + ecx948;
    *reinterpret_cast<uint32_t*>(&rdx951) = *reinterpret_cast<unsigned char*>(&eax950);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx951) + 4) = 0;
    tmp8_952 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax950) + g14000b0f2);
    *reinterpret_cast<unsigned char*>(&eax950) = tmp8_952;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx951 + 96) = *reinterpret_cast<signed char*>(&ecx948);
    ecx953 = v954;
    eax955 = eax950 + ecx953;
    *reinterpret_cast<uint32_t*>(&rdx956) = *reinterpret_cast<unsigned char*>(&eax955);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx956) + 4) = 0;
    tmp8_957 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax955) + g14000b0f3);
    *reinterpret_cast<unsigned char*>(&eax955) = tmp8_957;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx956 + 96) = *reinterpret_cast<signed char*>(&ecx953);
    ecx958 = v959;
    eax960 = eax955 + ecx958;
    *reinterpret_cast<uint32_t*>(&rdx961) = *reinterpret_cast<unsigned char*>(&eax960);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx961) + 4) = 0;
    tmp8_962 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax960) + g14000b0f4);
    *reinterpret_cast<unsigned char*>(&eax960) = tmp8_962;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx961 + 96) = *reinterpret_cast<signed char*>(&ecx958);
    ecx963 = v964;
    eax965 = eax960 + ecx963;
    *reinterpret_cast<uint32_t*>(&rdx966) = *reinterpret_cast<unsigned char*>(&eax965);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx966) + 4) = 0;
    tmp8_967 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax965) + g14000b0f5);
    *reinterpret_cast<unsigned char*>(&eax965) = tmp8_967;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx966 + 96) = *reinterpret_cast<signed char*>(&ecx963);
    ecx968 = v969;
    eax970 = eax965 + ecx968;
    *reinterpret_cast<uint32_t*>(&rdx971) = *reinterpret_cast<unsigned char*>(&eax970);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx971) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx971 + 96) = *reinterpret_cast<signed char*>(&ecx968);
    ecx972 = v973;
    tmp8_974 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax970) + g14000b0f6);
    *reinterpret_cast<unsigned char*>(&eax970) = tmp8_974;
    eax975 = eax970 + ecx972;
    *reinterpret_cast<uint32_t*>(&rdx976) = *reinterpret_cast<unsigned char*>(&eax975);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx976) + 4) = 0;
    tmp8_977 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax975) + g14000b0f7);
    *reinterpret_cast<unsigned char*>(&eax975) = tmp8_977;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx976 + 96) = *reinterpret_cast<signed char*>(&ecx972);
    ecx978 = v979;
    eax980 = eax975 + ecx978;
    *reinterpret_cast<uint32_t*>(&rdx981) = *reinterpret_cast<unsigned char*>(&eax980);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx981) + 4) = 0;
    tmp8_982 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax980) + g14000b0f8);
    *reinterpret_cast<unsigned char*>(&eax980) = tmp8_982;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx981 + 96) = *reinterpret_cast<signed char*>(&ecx978);
    ecx983 = v984;
    eax985 = eax980 + ecx983;
    *reinterpret_cast<uint32_t*>(&rdx986) = *reinterpret_cast<unsigned char*>(&eax985);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx986) + 4) = 0;
    tmp8_987 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax985) + g14000b0f9);
    *reinterpret_cast<unsigned char*>(&eax985) = tmp8_987;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx986 + 96) = *reinterpret_cast<signed char*>(&ecx983);
    ecx988 = v989;
    eax990 = eax985 + ecx988;
    *reinterpret_cast<uint32_t*>(&rdx991) = *reinterpret_cast<unsigned char*>(&eax990);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx991) + 4) = 0;
    tmp8_992 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax990) + g14000b0fa);
    *reinterpret_cast<unsigned char*>(&eax990) = tmp8_992;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx991 + 96) = *reinterpret_cast<signed char*>(&ecx988);
    ecx993 = v994;
    eax995 = eax990 + ecx993;
    *reinterpret_cast<uint32_t*>(&rdx996) = *reinterpret_cast<unsigned char*>(&eax995);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx996) + 4) = 0;
    tmp8_997 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax995) + g14000b0fb);
    *reinterpret_cast<unsigned char*>(&eax995) = tmp8_997;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx996 + 96) = *reinterpret_cast<signed char*>(&ecx993);
    ecx998 = v999;
    eax1000 = eax995 + ecx998;
    *reinterpret_cast<uint32_t*>(&rdx1001) = *reinterpret_cast<unsigned char*>(&eax1000);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1001) + 4) = 0;
    tmp8_1002 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1000) + g14000b0fc);
    *reinterpret_cast<unsigned char*>(&eax1000) = tmp8_1002;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1001 + 96) = *reinterpret_cast<signed char*>(&ecx998);
    ecx1003 = v1004;
    eax1005 = eax1000 + ecx1003;
    *reinterpret_cast<uint32_t*>(&rdx1006) = *reinterpret_cast<unsigned char*>(&eax1005);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1006) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1006 + 96) = *reinterpret_cast<signed char*>(&ecx1003);
    ecx1007 = v1008;
    tmp8_1009 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1005) + g14000b0fd);
    *reinterpret_cast<unsigned char*>(&eax1005) = tmp8_1009;
    eax1010 = eax1005 + ecx1007;
    *reinterpret_cast<uint32_t*>(&rdx1011) = *reinterpret_cast<unsigned char*>(&eax1010);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1011) + 4) = 0;
    tmp8_1012 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1010) + g14000b0fe);
    *reinterpret_cast<unsigned char*>(&eax1010) = tmp8_1012;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1011 + 96) = *reinterpret_cast<signed char*>(&ecx1007);
    ecx1013 = v1014;
    eax1015 = eax1010 + ecx1013;
    *reinterpret_cast<uint32_t*>(&rdx1016) = *reinterpret_cast<unsigned char*>(&eax1015);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1016) + 4) = 0;
    tmp8_1017 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1015) + g14000b0ff);
    *reinterpret_cast<unsigned char*>(&eax1015) = tmp8_1017;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1016 + 96) = *reinterpret_cast<signed char*>(&ecx1013);
    ecx1018 = v1019;
    eax1020 = eax1015 + ecx1018;
    *reinterpret_cast<uint32_t*>(&rdx1021) = *reinterpret_cast<unsigned char*>(&eax1020);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1021) + 4) = 0;
    tmp8_1022 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1020) + g14000b100);
    *reinterpret_cast<unsigned char*>(&eax1020) = tmp8_1022;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1021 + 96) = *reinterpret_cast<signed char*>(&ecx1018);
    ecx1023 = v1024;
    eax1025 = eax1020 + ecx1023;
    *reinterpret_cast<uint32_t*>(&rdx1026) = *reinterpret_cast<unsigned char*>(&eax1025);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1026) + 4) = 0;
    tmp8_1027 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1025) + g14000b101);
    *reinterpret_cast<unsigned char*>(&eax1025) = tmp8_1027;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1026 + 96) = *reinterpret_cast<signed char*>(&ecx1023);
    ecx1028 = v1029;
    eax1030 = eax1025 + ecx1028;
    *reinterpret_cast<uint32_t*>(&rdx1031) = *reinterpret_cast<unsigned char*>(&eax1030);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1031) + 4) = 0;
    tmp8_1032 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1030) + g14000b102);
    *reinterpret_cast<unsigned char*>(&eax1030) = tmp8_1032;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1031 + 96) = *reinterpret_cast<signed char*>(&ecx1028);
    ecx1033 = v1034;
    eax1035 = eax1030 + ecx1033;
    *reinterpret_cast<uint32_t*>(&rdx1036) = *reinterpret_cast<unsigned char*>(&eax1035);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1036) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1036 + 96) = *reinterpret_cast<signed char*>(&ecx1033);
    ecx1037 = v1038;
    tmp8_1039 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1035) + g14000b103);
    *reinterpret_cast<unsigned char*>(&eax1035) = tmp8_1039;
    eax1040 = eax1035 + ecx1037;
    *reinterpret_cast<uint32_t*>(&rdx1041) = *reinterpret_cast<unsigned char*>(&eax1040);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1041) + 4) = 0;
    tmp8_1042 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1040) + g14000b104);
    *reinterpret_cast<unsigned char*>(&eax1040) = tmp8_1042;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1041 + 96) = *reinterpret_cast<signed char*>(&ecx1037);
    ecx1043 = v1044;
    eax1045 = eax1040 + ecx1043;
    *reinterpret_cast<uint32_t*>(&rdx1046) = *reinterpret_cast<unsigned char*>(&eax1045);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1046) + 4) = 0;
    tmp8_1047 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1045) + g14000b105);
    *reinterpret_cast<unsigned char*>(&eax1045) = tmp8_1047;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1046 + 96) = *reinterpret_cast<signed char*>(&ecx1043);
    ecx1048 = v1049;
    eax1050 = eax1045 + ecx1048;
    *reinterpret_cast<uint32_t*>(&rdx1051) = *reinterpret_cast<unsigned char*>(&eax1050);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1051) + 4) = 0;
    tmp8_1052 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1050) + g14000b106);
    *reinterpret_cast<unsigned char*>(&eax1050) = tmp8_1052;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1051 + 96) = *reinterpret_cast<signed char*>(&ecx1048);
    ecx1053 = v1054;
    eax1055 = eax1050 + ecx1053;
    *reinterpret_cast<uint32_t*>(&rdx1056) = *reinterpret_cast<unsigned char*>(&eax1055);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1056) + 4) = 0;
    tmp8_1057 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1055) + g14000b107);
    *reinterpret_cast<unsigned char*>(&eax1055) = tmp8_1057;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1056 + 96) = *reinterpret_cast<signed char*>(&ecx1053);
    ecx1058 = v1059;
    eax1060 = eax1055 + ecx1058;
    *reinterpret_cast<uint32_t*>(&rdx1061) = *reinterpret_cast<unsigned char*>(&eax1060);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1061) + 4) = 0;
    tmp8_1062 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1060) + g14000b108);
    *reinterpret_cast<unsigned char*>(&eax1060) = tmp8_1062;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1061 + 96) = *reinterpret_cast<signed char*>(&ecx1058);
    ecx1063 = v1064;
    eax1065 = eax1060 + ecx1063;
    *reinterpret_cast<uint32_t*>(&rdx1066) = *reinterpret_cast<unsigned char*>(&eax1065);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1066) + 4) = 0;
    tmp8_1067 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1065) + g14000b109);
    *reinterpret_cast<unsigned char*>(&eax1065) = tmp8_1067;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1066 + 96) = *reinterpret_cast<signed char*>(&ecx1063);
    ecx1068 = v1069;
    eax1070 = eax1065 + ecx1068;
    *reinterpret_cast<uint32_t*>(&rdx1071) = *reinterpret_cast<unsigned char*>(&eax1070);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1071) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1071 + 96) = *reinterpret_cast<signed char*>(&ecx1068);
    ecx1072 = v1073;
    tmp8_1074 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1070) + g14000b10a);
    *reinterpret_cast<unsigned char*>(&eax1070) = tmp8_1074;
    eax1075 = eax1070 + ecx1072;
    *reinterpret_cast<uint32_t*>(&rdx1076) = *reinterpret_cast<unsigned char*>(&eax1075);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1076) + 4) = 0;
    tmp8_1077 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1075) + g14000b10b);
    *reinterpret_cast<unsigned char*>(&eax1075) = tmp8_1077;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1076 + 96) = *reinterpret_cast<signed char*>(&ecx1072);
    ecx1078 = v1079;
    eax1080 = eax1075 + ecx1078;
    *reinterpret_cast<uint32_t*>(&rdx1081) = *reinterpret_cast<unsigned char*>(&eax1080);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1081) + 4) = 0;
    tmp8_1082 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1080) + g14000b10c);
    *reinterpret_cast<unsigned char*>(&eax1080) = tmp8_1082;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1081 + 96) = *reinterpret_cast<signed char*>(&ecx1078);
    ecx1083 = v1084;
    eax1085 = eax1080 + ecx1083;
    *reinterpret_cast<uint32_t*>(&rdx1086) = *reinterpret_cast<unsigned char*>(&eax1085);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1086) + 4) = 0;
    tmp8_1087 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1085) + g14000b10d);
    *reinterpret_cast<unsigned char*>(&eax1085) = tmp8_1087;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1086 + 96) = *reinterpret_cast<signed char*>(&ecx1083);
    ecx1088 = v1089;
    eax1090 = eax1085 + ecx1088;
    *reinterpret_cast<uint32_t*>(&rdx1091) = *reinterpret_cast<unsigned char*>(&eax1090);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1091) + 4) = 0;
    tmp8_1092 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1090) + g14000b10e);
    *reinterpret_cast<unsigned char*>(&eax1090) = tmp8_1092;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1091 + 96) = *reinterpret_cast<signed char*>(&ecx1088);
    ecx1093 = v1094;
    eax1095 = eax1090 + ecx1093;
    *reinterpret_cast<uint32_t*>(&rdx1096) = *reinterpret_cast<unsigned char*>(&eax1095);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1096) + 4) = 0;
    tmp8_1097 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1095) + g14000b10f);
    *reinterpret_cast<unsigned char*>(&eax1095) = tmp8_1097;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1096 + 96) = *reinterpret_cast<signed char*>(&ecx1093);
    ecx1098 = v1099;
    eax1100 = eax1095 + ecx1098;
    *reinterpret_cast<uint32_t*>(&rdx1101) = *reinterpret_cast<unsigned char*>(&eax1100);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1101) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1101 + 96) = *reinterpret_cast<signed char*>(&ecx1098);
    ecx1102 = v1103;
    tmp8_1104 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1100) + g14000b110);
    *reinterpret_cast<unsigned char*>(&eax1100) = tmp8_1104;
    eax1105 = eax1100 + ecx1102;
    *reinterpret_cast<uint32_t*>(&rdx1106) = *reinterpret_cast<unsigned char*>(&eax1105);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1106) + 4) = 0;
    tmp8_1107 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1105) + g14000b111);
    *reinterpret_cast<unsigned char*>(&eax1105) = tmp8_1107;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1106 + 96) = *reinterpret_cast<signed char*>(&ecx1102);
    ecx1108 = v1109;
    eax1110 = eax1105 + ecx1108;
    *reinterpret_cast<uint32_t*>(&rdx1111) = *reinterpret_cast<unsigned char*>(&eax1110);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1111) + 4) = 0;
    tmp8_1112 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1110) + g14000b112);
    *reinterpret_cast<unsigned char*>(&eax1110) = tmp8_1112;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1111 + 96) = *reinterpret_cast<signed char*>(&ecx1108);
    ecx1113 = v1114;
    eax1115 = eax1110 + ecx1113;
    *reinterpret_cast<uint32_t*>(&rdx1116) = *reinterpret_cast<unsigned char*>(&eax1115);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1116) + 4) = 0;
    tmp8_1117 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1115) + g14000b113);
    *reinterpret_cast<unsigned char*>(&eax1115) = tmp8_1117;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1116 + 96) = *reinterpret_cast<signed char*>(&ecx1113);
    ecx1118 = v1119;
    eax1120 = eax1115 + ecx1118;
    *reinterpret_cast<uint32_t*>(&rdx1121) = *reinterpret_cast<unsigned char*>(&eax1120);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1121) + 4) = 0;
    tmp8_1122 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1120) + g14000b114);
    *reinterpret_cast<unsigned char*>(&eax1120) = tmp8_1122;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1121 + 96) = *reinterpret_cast<signed char*>(&ecx1118);
    ecx1123 = v1124;
    eax1125 = eax1120 + ecx1123;
    *reinterpret_cast<uint32_t*>(&rdx1126) = *reinterpret_cast<unsigned char*>(&eax1125);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1126) + 4) = 0;
    tmp8_1127 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1125) + g14000b115);
    *reinterpret_cast<unsigned char*>(&eax1125) = tmp8_1127;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1126 + 96) = *reinterpret_cast<signed char*>(&ecx1123);
    ecx1128 = v1129;
    eax1130 = eax1125 + ecx1128;
    *reinterpret_cast<uint32_t*>(&rdx1131) = *reinterpret_cast<unsigned char*>(&eax1130);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1131) + 4) = 0;
    tmp8_1132 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1130) + g14000b116);
    *reinterpret_cast<unsigned char*>(&eax1130) = tmp8_1132;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1131 + 96) = *reinterpret_cast<signed char*>(&ecx1128);
    ecx1133 = v1134;
    eax1135 = eax1130 + ecx1133;
    *reinterpret_cast<uint32_t*>(&rdx1136) = *reinterpret_cast<unsigned char*>(&eax1135);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1136) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1136 + 96) = *reinterpret_cast<signed char*>(&ecx1133);
    ecx1137 = v1138;
    tmp8_1139 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1135) + g14000b117);
    *reinterpret_cast<unsigned char*>(&eax1135) = tmp8_1139;
    eax1140 = eax1135 + ecx1137;
    *reinterpret_cast<uint32_t*>(&rdx1141) = *reinterpret_cast<unsigned char*>(&eax1140);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1141) + 4) = 0;
    tmp8_1142 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1140) + g14000b118);
    *reinterpret_cast<unsigned char*>(&eax1140) = tmp8_1142;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1141 + 96) = *reinterpret_cast<signed char*>(&ecx1137);
    ecx1143 = v1144;
    eax1145 = eax1140 + ecx1143;
    *reinterpret_cast<uint32_t*>(&rdx1146) = *reinterpret_cast<unsigned char*>(&eax1145);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1146) + 4) = 0;
    tmp8_1147 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1145) + g14000b119);
    *reinterpret_cast<unsigned char*>(&eax1145) = tmp8_1147;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1146 + 96) = *reinterpret_cast<signed char*>(&ecx1143);
    ecx1148 = v1149;
    eax1150 = eax1145 + ecx1148;
    *reinterpret_cast<uint32_t*>(&rdx1151) = *reinterpret_cast<unsigned char*>(&eax1150);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1151) + 4) = 0;
    tmp8_1152 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1150) + g14000b11a);
    *reinterpret_cast<unsigned char*>(&eax1150) = tmp8_1152;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1151 + 96) = *reinterpret_cast<signed char*>(&ecx1148);
    ecx1153 = v1154;
    eax1155 = eax1150 + ecx1153;
    *reinterpret_cast<uint32_t*>(&rdx1156) = *reinterpret_cast<unsigned char*>(&eax1155);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1156) + 4) = 0;
    tmp8_1157 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1155) + g14000b11b);
    *reinterpret_cast<unsigned char*>(&eax1155) = tmp8_1157;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1156 + 96) = *reinterpret_cast<signed char*>(&ecx1153);
    ecx1158 = v1159;
    eax1160 = eax1155 + ecx1158;
    *reinterpret_cast<uint32_t*>(&rdx1161) = *reinterpret_cast<unsigned char*>(&eax1160);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1161) + 4) = 0;
    tmp8_1162 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1160) + g14000b11c);
    *reinterpret_cast<unsigned char*>(&eax1160) = tmp8_1162;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1161 + 96) = *reinterpret_cast<signed char*>(&ecx1158);
    ecx1163 = v1164;
    eax1165 = eax1160 + ecx1163;
    *reinterpret_cast<uint32_t*>(&rdx1166) = *reinterpret_cast<unsigned char*>(&eax1165);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1166) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1166 + 96) = *reinterpret_cast<signed char*>(&ecx1163);
    ecx1167 = v1168;
    tmp8_1169 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1165) + g14000b11d);
    *reinterpret_cast<unsigned char*>(&eax1165) = tmp8_1169;
    eax1170 = eax1165 + ecx1167;
    *reinterpret_cast<uint32_t*>(&rdx1171) = *reinterpret_cast<unsigned char*>(&eax1170);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1171) + 4) = 0;
    tmp8_1172 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1170) + g14000b11e);
    *reinterpret_cast<unsigned char*>(&eax1170) = tmp8_1172;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1171 + 96) = *reinterpret_cast<signed char*>(&ecx1167);
    ecx1173 = v1174;
    eax1175 = eax1170 + ecx1173;
    *reinterpret_cast<uint32_t*>(&rdx1176) = *reinterpret_cast<unsigned char*>(&eax1175);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1176) + 4) = 0;
    tmp8_1177 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1175) + g14000b11f);
    *reinterpret_cast<unsigned char*>(&eax1175) = tmp8_1177;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1176 + 96) = *reinterpret_cast<signed char*>(&ecx1173);
    ecx1178 = v1179;
    eax1180 = eax1175 + ecx1178;
    *reinterpret_cast<uint32_t*>(&rdx1181) = *reinterpret_cast<unsigned char*>(&eax1180);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1181) + 4) = 0;
    tmp8_1182 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1180) + g14000b120);
    *reinterpret_cast<unsigned char*>(&eax1180) = tmp8_1182;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1181 + 96) = *reinterpret_cast<signed char*>(&ecx1178);
    ecx1183 = v1184;
    eax1185 = eax1180 + ecx1183;
    *reinterpret_cast<uint32_t*>(&rdx1186) = *reinterpret_cast<unsigned char*>(&eax1185);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1186) + 4) = 0;
    tmp8_1187 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1185) + g14000b121);
    *reinterpret_cast<unsigned char*>(&eax1185) = tmp8_1187;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1186 + 96) = *reinterpret_cast<signed char*>(&ecx1183);
    ecx1188 = v1189;
    eax1190 = eax1185 + ecx1188;
    *reinterpret_cast<uint32_t*>(&rdx1191) = *reinterpret_cast<unsigned char*>(&eax1190);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1191) + 4) = 0;
    tmp8_1192 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1190) + g14000b122);
    *reinterpret_cast<unsigned char*>(&eax1190) = tmp8_1192;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1191 + 96) = *reinterpret_cast<signed char*>(&ecx1188);
    ecx1193 = v1194;
    eax1195 = eax1190 + ecx1193;
    *reinterpret_cast<uint32_t*>(&rdx1196) = *reinterpret_cast<unsigned char*>(&eax1195);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1196) + 4) = 0;
    tmp8_1197 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1195) + g14000b123);
    *reinterpret_cast<unsigned char*>(&eax1195) = tmp8_1197;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1196 + 96) = *reinterpret_cast<signed char*>(&ecx1193);
    ecx1198 = v1199;
    eax1200 = eax1195 + ecx1198;
    *reinterpret_cast<uint32_t*>(&rdx1201) = *reinterpret_cast<unsigned char*>(&eax1200);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1201) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1201 + 96) = *reinterpret_cast<signed char*>(&ecx1198);
    ecx1202 = v1203;
    tmp8_1204 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1200) + g14000b124);
    *reinterpret_cast<unsigned char*>(&eax1200) = tmp8_1204;
    eax1205 = eax1200 + ecx1202;
    *reinterpret_cast<uint32_t*>(&rdx1206) = *reinterpret_cast<unsigned char*>(&eax1205);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1206) + 4) = 0;
    tmp8_1207 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1205) + g14000b125);
    *reinterpret_cast<unsigned char*>(&eax1205) = tmp8_1207;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1206 + 96) = *reinterpret_cast<signed char*>(&ecx1202);
    ecx1208 = v1209;
    eax1210 = eax1205 + ecx1208;
    *reinterpret_cast<uint32_t*>(&rdx1211) = *reinterpret_cast<unsigned char*>(&eax1210);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1211) + 4) = 0;
    tmp8_1212 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1210) + g14000b126);
    *reinterpret_cast<unsigned char*>(&eax1210) = tmp8_1212;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1211 + 96) = *reinterpret_cast<signed char*>(&ecx1208);
    ecx1213 = v1214;
    eax1215 = eax1210 + ecx1213;
    *reinterpret_cast<uint32_t*>(&rdx1216) = *reinterpret_cast<unsigned char*>(&eax1215);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1216) + 4) = 0;
    tmp8_1217 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1215) + g14000b127);
    *reinterpret_cast<unsigned char*>(&eax1215) = tmp8_1217;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1216 + 96) = *reinterpret_cast<signed char*>(&ecx1213);
    ecx1218 = v1219;
    eax1220 = eax1215 + ecx1218;
    *reinterpret_cast<uint32_t*>(&rdx1221) = *reinterpret_cast<unsigned char*>(&eax1220);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1221) + 4) = 0;
    tmp8_1222 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1220) + g14000b128);
    *reinterpret_cast<unsigned char*>(&eax1220) = tmp8_1222;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1221 + 96) = *reinterpret_cast<signed char*>(&ecx1218);
    ecx1223 = v1224;
    eax1225 = eax1220 + ecx1223;
    *reinterpret_cast<uint32_t*>(&rdx1226) = *reinterpret_cast<unsigned char*>(&eax1225);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1226) + 4) = 0;
    tmp8_1227 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1225) + g14000b129);
    *reinterpret_cast<unsigned char*>(&eax1225) = tmp8_1227;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1226 + 96) = *reinterpret_cast<signed char*>(&ecx1223);
    ecx1228 = v1229;
    eax1230 = eax1225 + ecx1228;
    *reinterpret_cast<uint32_t*>(&rdx1231) = *reinterpret_cast<unsigned char*>(&eax1230);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1231) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1231 + 96) = *reinterpret_cast<signed char*>(&ecx1228);
    ecx1232 = v1233;
    tmp8_1234 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1230) + g14000b12a);
    *reinterpret_cast<unsigned char*>(&eax1230) = tmp8_1234;
    eax1235 = eax1230 + ecx1232;
    *reinterpret_cast<uint32_t*>(&rdx1236) = *reinterpret_cast<unsigned char*>(&eax1235);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1236) + 4) = 0;
    tmp8_1237 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1235) + g14000b12b);
    *reinterpret_cast<unsigned char*>(&eax1235) = tmp8_1237;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1236 + 96) = *reinterpret_cast<signed char*>(&ecx1232);
    ecx1238 = v1239;
    eax1240 = eax1235 + ecx1238;
    *reinterpret_cast<uint32_t*>(&rdx1241) = *reinterpret_cast<unsigned char*>(&eax1240);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1241) + 4) = 0;
    tmp8_1242 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1240) + g14000b12c);
    *reinterpret_cast<unsigned char*>(&eax1240) = tmp8_1242;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1241 + 96) = *reinterpret_cast<signed char*>(&ecx1238);
    ecx1243 = v1244;
    eax1245 = eax1240 + ecx1243;
    *reinterpret_cast<uint32_t*>(&rdx1246) = *reinterpret_cast<unsigned char*>(&eax1245);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1246) + 4) = 0;
    tmp8_1247 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1245) + g14000b12d);
    *reinterpret_cast<unsigned char*>(&eax1245) = tmp8_1247;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1246 + 96) = *reinterpret_cast<signed char*>(&ecx1243);
    ecx1248 = v1249;
    eax1250 = eax1245 + ecx1248;
    *reinterpret_cast<uint32_t*>(&rdx1251) = *reinterpret_cast<unsigned char*>(&eax1250);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1251) + 4) = 0;
    tmp8_1252 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1250) + g14000b12e);
    *reinterpret_cast<unsigned char*>(&eax1250) = tmp8_1252;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1251 + 96) = *reinterpret_cast<signed char*>(&ecx1248);
    ecx1253 = v1254;
    eax1255 = eax1250 + ecx1253;
    *reinterpret_cast<uint32_t*>(&rdx1256) = *reinterpret_cast<unsigned char*>(&eax1255);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1256) + 4) = 0;
    tmp8_1257 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1255) + g14000b12f);
    *reinterpret_cast<unsigned char*>(&eax1255) = tmp8_1257;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1256 + 96) = *reinterpret_cast<signed char*>(&ecx1253);
    ecx1258 = v1259;
    eax1260 = eax1255 + ecx1258;
    *reinterpret_cast<uint32_t*>(&rdx1261) = *reinterpret_cast<unsigned char*>(&eax1260);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1261) + 4) = 0;
    tmp8_1262 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1260) + g14000b130);
    *reinterpret_cast<unsigned char*>(&eax1260) = tmp8_1262;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1261 + 96) = *reinterpret_cast<signed char*>(&ecx1258);
    ecx1263 = v1264;
    eax1265 = eax1260 + ecx1263;
    *reinterpret_cast<uint32_t*>(&rdx1266) = *reinterpret_cast<unsigned char*>(&eax1265);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1266) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1266 + 96) = *reinterpret_cast<signed char*>(&ecx1263);
    ecx1267 = v1268;
    tmp8_1269 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1265) + g14000b131);
    *reinterpret_cast<unsigned char*>(&eax1265) = tmp8_1269;
    eax1270 = eax1265 + ecx1267;
    *reinterpret_cast<uint32_t*>(&rdx1271) = *reinterpret_cast<unsigned char*>(&eax1270);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1271) + 4) = 0;
    tmp8_1272 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1270) + g14000b132);
    *reinterpret_cast<unsigned char*>(&eax1270) = tmp8_1272;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1271 + 96) = *reinterpret_cast<signed char*>(&ecx1267);
    ecx1273 = v1274;
    eax1275 = eax1270 + ecx1273;
    *reinterpret_cast<uint32_t*>(&rdx1276) = *reinterpret_cast<unsigned char*>(&eax1275);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1276) + 4) = 0;
    tmp8_1277 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1275) + g14000b133);
    *reinterpret_cast<unsigned char*>(&eax1275) = tmp8_1277;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1276 + 96) = *reinterpret_cast<signed char*>(&ecx1273);
    ecx1278 = v1279;
    eax1280 = eax1275 + ecx1278;
    *reinterpret_cast<uint32_t*>(&rdx1281) = *reinterpret_cast<unsigned char*>(&eax1280);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1281) + 4) = 0;
    tmp8_1282 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1280) + g14000b134);
    *reinterpret_cast<unsigned char*>(&eax1280) = tmp8_1282;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1281 + 96) = *reinterpret_cast<signed char*>(&ecx1278);
    ecx1283 = v1284;
    eax1285 = eax1280 + ecx1283;
    *reinterpret_cast<uint32_t*>(&rdx1286) = *reinterpret_cast<unsigned char*>(&eax1285);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1286) + 4) = 0;
    tmp8_1287 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1285) + g14000b135);
    *reinterpret_cast<unsigned char*>(&eax1285) = tmp8_1287;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1286 + 96) = *reinterpret_cast<signed char*>(&ecx1283);
    ecx1288 = v1289;
    eax1290 = eax1285 + ecx1288;
    *reinterpret_cast<uint32_t*>(&rdx1291) = *reinterpret_cast<unsigned char*>(&eax1290);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1291) + 4) = 0;
    tmp8_1292 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1290) + g14000b136);
    *reinterpret_cast<unsigned char*>(&eax1290) = tmp8_1292;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1291 + 96) = *reinterpret_cast<signed char*>(&ecx1288);
    ecx1293 = v1294;
    eax1295 = eax1290 + ecx1293;
    *reinterpret_cast<uint32_t*>(&rdx1296) = *reinterpret_cast<unsigned char*>(&eax1295);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1296) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1296 + 96) = *reinterpret_cast<signed char*>(&ecx1293);
    ecx1297 = v1298;
    tmp8_1299 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1295) + g14000b137);
    *reinterpret_cast<unsigned char*>(&eax1295) = tmp8_1299;
    eax1300 = eax1295 + ecx1297;
    *reinterpret_cast<uint32_t*>(&rdx1301) = *reinterpret_cast<unsigned char*>(&eax1300);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1301) + 4) = 0;
    tmp8_1302 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1300) + g14000b138);
    *reinterpret_cast<unsigned char*>(&eax1300) = tmp8_1302;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1301 + 96) = *reinterpret_cast<signed char*>(&ecx1297);
    ecx1303 = v1304;
    eax1305 = eax1300 + ecx1303;
    *reinterpret_cast<uint32_t*>(&rdx1306) = *reinterpret_cast<unsigned char*>(&eax1305);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1306) + 4) = 0;
    tmp8_1307 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1305) + g14000b139);
    *reinterpret_cast<unsigned char*>(&eax1305) = tmp8_1307;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1306 + 96) = *reinterpret_cast<signed char*>(&ecx1303);
    ecx1308 = v1309;
    eax1310 = eax1305 + ecx1308;
    *reinterpret_cast<uint32_t*>(&rdx1311) = *reinterpret_cast<unsigned char*>(&eax1310);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1311) + 4) = 0;
    tmp8_1312 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1310) + g14000b13a);
    *reinterpret_cast<unsigned char*>(&eax1310) = tmp8_1312;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1311 + 96) = *reinterpret_cast<signed char*>(&ecx1308);
    ecx1313 = v1314;
    eax1315 = eax1310 + ecx1313;
    *reinterpret_cast<uint32_t*>(&rdx1316) = *reinterpret_cast<unsigned char*>(&eax1315);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1316) + 4) = 0;
    tmp8_1317 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1315) + g14000b13b);
    *reinterpret_cast<unsigned char*>(&eax1315) = tmp8_1317;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1316 + 96) = *reinterpret_cast<signed char*>(&ecx1313);
    ecx1318 = v1319;
    eax1320 = eax1315 + ecx1318;
    *reinterpret_cast<uint32_t*>(&rdx1321) = *reinterpret_cast<unsigned char*>(&eax1320);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1321) + 4) = 0;
    tmp8_1322 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1320) + g14000b13c);
    *reinterpret_cast<unsigned char*>(&eax1320) = tmp8_1322;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1321 + 96) = *reinterpret_cast<signed char*>(&ecx1318);
    ecx1323 = v1324;
    eax1325 = eax1320 + ecx1323;
    *reinterpret_cast<uint32_t*>(&rdx1326) = *reinterpret_cast<unsigned char*>(&eax1325);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1326) + 4) = 0;
    tmp8_1327 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1325) + g14000b13d);
    *reinterpret_cast<unsigned char*>(&eax1325) = tmp8_1327;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1326 + 96) = *reinterpret_cast<signed char*>(&ecx1323);
    ecx1328 = v1329;
    eax1330 = eax1325 + ecx1328;
    *reinterpret_cast<uint32_t*>(&rdx1331) = *reinterpret_cast<unsigned char*>(&eax1330);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1331) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1331 + 96) = *reinterpret_cast<signed char*>(&ecx1328);
    ecx1332 = v1333;
    tmp8_1334 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1330) + g14000b13e);
    *reinterpret_cast<unsigned char*>(&eax1330) = tmp8_1334;
    eax1335 = eax1330 + ecx1332;
    *reinterpret_cast<uint32_t*>(&rdx1336) = *reinterpret_cast<unsigned char*>(&eax1335);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx1336) + 4) = 0;
    tmp8_1337 = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&eax1335) + g14000b13f);
    *reinterpret_cast<unsigned char*>(&eax1335) = tmp8_1337;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rdx1336 + 96) = *reinterpret_cast<signed char*>(&ecx1332);
    edx1338 = v1339;
    eax1340 = eax1335 + edx1338;
    *reinterpret_cast<uint32_t*>(&rax1341) = *reinterpret_cast<unsigned char*>(&eax1340);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1341) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rax1341 + 96) = *reinterpret_cast<signed char*>(&edx1338);
    *reinterpret_cast<uint32_t*>(&rcx1342) = *reinterpret_cast<unsigned char*>(&r8d11);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1342) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1342 + 96) = *reinterpret_cast<signed char*>(&rcx1342);
    rax1343 = rcx1342;
    r8d1344 = *reinterpret_cast<unsigned char*>(&r8d17);
    eax1345 = *reinterpret_cast<int32_t*>(&rax1343) + r8d1344;
    *reinterpret_cast<uint32_t*>(&rcx1346) = *reinterpret_cast<unsigned char*>(&eax1345);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1346) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1346 + 96) = *reinterpret_cast<signed char*>(&r8d1344);
    r8d1347 = *reinterpret_cast<unsigned char*>(&r8d23);
    eax1348 = eax1345 + r8d1347;
    *reinterpret_cast<uint32_t*>(&rcx1349) = *reinterpret_cast<unsigned char*>(&eax1348);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1349) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1349 + 96) = *reinterpret_cast<signed char*>(&r8d1347);
    r8d1350 = *reinterpret_cast<unsigned char*>(&r8d29);
    eax1351 = eax1348 + r8d1350;
    *reinterpret_cast<uint32_t*>(&rcx1352) = *reinterpret_cast<unsigned char*>(&eax1351);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1352) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1352 + 96) = *reinterpret_cast<signed char*>(&r8d1350);
    r8d1353 = *reinterpret_cast<unsigned char*>(&r8d35);
    eax1354 = eax1351 + r8d1353;
    *reinterpret_cast<uint32_t*>(&rcx1355) = *reinterpret_cast<unsigned char*>(&eax1354);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1355) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1355 + 96) = *reinterpret_cast<signed char*>(&r8d1353);
    r8d1356 = *reinterpret_cast<unsigned char*>(&r8d40);
    eax1357 = eax1354 + r8d1356;
    *reinterpret_cast<uint32_t*>(&rcx1358) = *reinterpret_cast<unsigned char*>(&eax1357);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1358) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1358 + 96) = *reinterpret_cast<signed char*>(&r8d1356);
    r8d1359 = *reinterpret_cast<unsigned char*>(&r8d47);
    eax1360 = eax1357 + r8d1359;
    *reinterpret_cast<uint32_t*>(&rcx1361) = *reinterpret_cast<unsigned char*>(&eax1360);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1361) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1361 + 96) = *reinterpret_cast<signed char*>(&r8d1359);
    r8d1362 = *reinterpret_cast<unsigned char*>(&r8d53);
    eax1363 = eax1360 + r8d1362;
    *reinterpret_cast<uint32_t*>(&rcx1364) = *reinterpret_cast<unsigned char*>(&eax1363);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1364) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1364 + 96) = *reinterpret_cast<signed char*>(&r8d1362);
    r8d1365 = *reinterpret_cast<unsigned char*>(&r8d59);
    eax1366 = eax1363 + r8d1365;
    *reinterpret_cast<uint32_t*>(&rcx1367) = *reinterpret_cast<unsigned char*>(&eax1366);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1367) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1367 + 96) = *reinterpret_cast<signed char*>(&r8d1365);
    r8d1368 = *reinterpret_cast<unsigned char*>(&r8d65);
    eax1369 = eax1366 + r8d1368;
    *reinterpret_cast<uint32_t*>(&rcx1370) = *reinterpret_cast<unsigned char*>(&eax1369);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1370) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1370 + 96) = *reinterpret_cast<signed char*>(&r8d1368);
    r8d1371 = *reinterpret_cast<unsigned char*>(&r8d71);
    eax1372 = eax1369 + r8d1371;
    *reinterpret_cast<uint32_t*>(&rcx1373) = *reinterpret_cast<unsigned char*>(&eax1372);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1373) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1373 + 96) = *reinterpret_cast<signed char*>(&r8d1371);
    r8d1374 = *reinterpret_cast<unsigned char*>(&r8d76);
    eax1375 = eax1372 + r8d1374;
    *reinterpret_cast<uint32_t*>(&rcx1376) = *reinterpret_cast<unsigned char*>(&eax1375);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1376) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1376 + 96) = *reinterpret_cast<signed char*>(&r8d1374);
    r8d1377 = *reinterpret_cast<unsigned char*>(&r8d83);
    eax1378 = eax1375 + r8d1377;
    *reinterpret_cast<uint32_t*>(&rcx1379) = *reinterpret_cast<unsigned char*>(&eax1378);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1379) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1379 + 96) = *reinterpret_cast<signed char*>(&r8d1377);
    r8d1380 = *reinterpret_cast<unsigned char*>(&r8d89);
    eax1381 = eax1378 + r8d1380;
    *reinterpret_cast<uint32_t*>(&rcx1382) = *reinterpret_cast<unsigned char*>(&eax1381);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1382) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1382 + 96) = *reinterpret_cast<signed char*>(&r8d1380);
    r8d1383 = *reinterpret_cast<unsigned char*>(&r8d95);
    eax1384 = eax1381 + r8d1383;
    *reinterpret_cast<uint32_t*>(&rcx1385) = *reinterpret_cast<unsigned char*>(&eax1384);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1385) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1385 + 96) = *reinterpret_cast<signed char*>(&r8d1383);
    r8d1386 = *reinterpret_cast<unsigned char*>(&r8d101);
    eax1387 = eax1384 + r8d1386;
    *reinterpret_cast<uint32_t*>(&rcx1388) = *reinterpret_cast<unsigned char*>(&eax1387);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1388) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1388 + 96) = *reinterpret_cast<signed char*>(&r8d1386);
    r8d1389 = *reinterpret_cast<unsigned char*>(&r8d107);
    eax1390 = eax1387 + r8d1389;
    *reinterpret_cast<uint32_t*>(&rcx1391) = *reinterpret_cast<unsigned char*>(&eax1390);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1391) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1391 + 96) = *reinterpret_cast<signed char*>(&r8d1389);
    r8d1392 = *reinterpret_cast<unsigned char*>(&r8d113);
    eax1393 = eax1390 + r8d1392;
    *reinterpret_cast<uint32_t*>(&rcx1394) = *reinterpret_cast<unsigned char*>(&eax1393);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1394) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1394 + 96) = *reinterpret_cast<signed char*>(&r8d1392);
    r8d1395 = *reinterpret_cast<unsigned char*>(&r8d118);
    eax1396 = eax1393 + r8d1395;
    *reinterpret_cast<uint32_t*>(&rcx1397) = *reinterpret_cast<unsigned char*>(&eax1396);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1397) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1397 + 96) = *reinterpret_cast<signed char*>(&r8d1395);
    r8d1398 = *reinterpret_cast<unsigned char*>(&r8d125);
    eax1399 = eax1396 + r8d1398;
    *reinterpret_cast<uint32_t*>(&rcx1400) = *reinterpret_cast<unsigned char*>(&eax1399);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1400) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1400 + 96) = *reinterpret_cast<signed char*>(&r8d1398);
    r8d1401 = *reinterpret_cast<unsigned char*>(&r8d131);
    eax1402 = eax1399 + r8d1401;
    *reinterpret_cast<uint32_t*>(&rcx1403) = *reinterpret_cast<unsigned char*>(&eax1402);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1403) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1403 + 96) = *reinterpret_cast<signed char*>(&r8d1401);
    r8d1404 = *reinterpret_cast<unsigned char*>(&r8d137);
    eax1405 = eax1402 + r8d1404;
    *reinterpret_cast<uint32_t*>(&rcx1406) = *reinterpret_cast<unsigned char*>(&eax1405);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1406) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1406 + 96) = *reinterpret_cast<signed char*>(&r8d1404);
    r8d1407 = *reinterpret_cast<unsigned char*>(&r8d143);
    eax1408 = eax1405 + r8d1407;
    *reinterpret_cast<uint32_t*>(&rcx1409) = *reinterpret_cast<unsigned char*>(&eax1408);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1409) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1409 + 96) = *reinterpret_cast<signed char*>(&r8d1407);
    r8d1410 = *reinterpret_cast<unsigned char*>(&r8d149);
    eax1411 = eax1408 + r8d1410;
    *reinterpret_cast<uint32_t*>(&rcx1412) = *reinterpret_cast<unsigned char*>(&eax1411);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1412) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1412 + 96) = *reinterpret_cast<signed char*>(&r8d1410);
    r8d1413 = *reinterpret_cast<unsigned char*>(&r8d154);
    eax1414 = eax1411 + r8d1413;
    *reinterpret_cast<uint32_t*>(&rcx1415) = *reinterpret_cast<unsigned char*>(&eax1414);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1415) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1415 + 96) = *reinterpret_cast<signed char*>(&r8d1413);
    r8d1416 = *reinterpret_cast<unsigned char*>(&r8d161);
    eax1417 = eax1414 + r8d1416;
    *reinterpret_cast<uint32_t*>(&rcx1418) = *reinterpret_cast<unsigned char*>(&eax1417);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1418) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1418 + 96) = *reinterpret_cast<signed char*>(&r8d1416);
    r8d1419 = *reinterpret_cast<unsigned char*>(&r8d167);
    eax1420 = eax1417 + r8d1419;
    *reinterpret_cast<uint32_t*>(&rcx1421) = *reinterpret_cast<unsigned char*>(&eax1420);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1421) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1421 + 96) = *reinterpret_cast<signed char*>(&r8d1419);
    r8d1422 = *reinterpret_cast<unsigned char*>(&r8d173);
    eax1423 = eax1420 + r8d1422;
    *reinterpret_cast<uint32_t*>(&rcx1424) = *reinterpret_cast<unsigned char*>(&eax1423);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1424) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1424 + 96) = *reinterpret_cast<signed char*>(&r8d1422);
    r8d1425 = *reinterpret_cast<unsigned char*>(&r8d179);
    eax1426 = eax1423 + r8d1425;
    *reinterpret_cast<uint32_t*>(&rcx1427) = *reinterpret_cast<unsigned char*>(&eax1426);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1427) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1427 + 96) = *reinterpret_cast<signed char*>(&r8d1425);
    r8d1428 = *reinterpret_cast<unsigned char*>(&r8d185);
    eax1429 = eax1426 + r8d1428;
    *reinterpret_cast<uint32_t*>(&rcx1430) = *reinterpret_cast<unsigned char*>(&eax1429);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1430) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1430 + 96) = *reinterpret_cast<signed char*>(&r8d1428);
    r8d1431 = *reinterpret_cast<unsigned char*>(&r8d191);
    eax1432 = eax1429 + r8d1431;
    *reinterpret_cast<uint32_t*>(&rcx1433) = *reinterpret_cast<unsigned char*>(&eax1432);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1433) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1433 + 96) = *reinterpret_cast<signed char*>(&r8d1431);
    r8d1434 = *reinterpret_cast<unsigned char*>(&r8d196);
    eax1435 = eax1432 + r8d1434;
    *reinterpret_cast<uint32_t*>(&rcx1436) = *reinterpret_cast<unsigned char*>(&eax1435);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1436) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1436 + 96) = *reinterpret_cast<signed char*>(&r8d1434);
    r8d1437 = *reinterpret_cast<unsigned char*>(&r8d203);
    eax1438 = eax1435 + r8d1437;
    *reinterpret_cast<uint32_t*>(&rcx1439) = *reinterpret_cast<unsigned char*>(&eax1438);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1439) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1439 + 96) = *reinterpret_cast<signed char*>(&r8d1437);
    r8d1440 = *reinterpret_cast<unsigned char*>(&r8d209);
    eax1441 = eax1438 + r8d1440;
    *reinterpret_cast<uint32_t*>(&rcx1442) = *reinterpret_cast<unsigned char*>(&eax1441);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1442) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1442 + 96) = *reinterpret_cast<signed char*>(&r8d1440);
    r8d1443 = *reinterpret_cast<unsigned char*>(&r8d215);
    eax1444 = eax1441 + r8d1443;
    *reinterpret_cast<uint32_t*>(&rcx1445) = *reinterpret_cast<unsigned char*>(&eax1444);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1445) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1445 + 96) = *reinterpret_cast<signed char*>(&r8d1443);
    r8d1446 = *reinterpret_cast<unsigned char*>(&r8d221);
    eax1447 = eax1444 + r8d1446;
    *reinterpret_cast<uint32_t*>(&rcx1448) = *reinterpret_cast<unsigned char*>(&eax1447);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1448) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1448 + 96) = *reinterpret_cast<signed char*>(&r8d1446);
    r8d1449 = *reinterpret_cast<unsigned char*>(&r8d227);
    eax1450 = eax1447 + r8d1449;
    *reinterpret_cast<uint32_t*>(&rcx1451) = *reinterpret_cast<unsigned char*>(&eax1450);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1451) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1451 + 96) = *reinterpret_cast<signed char*>(&r8d1449);
    r8d1452 = *reinterpret_cast<unsigned char*>(&r8d232);
    eax1453 = eax1450 + r8d1452;
    *reinterpret_cast<uint32_t*>(&rcx1454) = *reinterpret_cast<unsigned char*>(&eax1453);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1454) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1454 + 96) = *reinterpret_cast<signed char*>(&r8d1452);
    r8d1455 = *reinterpret_cast<unsigned char*>(&r8d239);
    eax1456 = eax1453 + r8d1455;
    *reinterpret_cast<uint32_t*>(&rcx1457) = *reinterpret_cast<unsigned char*>(&eax1456);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1457) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1457 + 96) = *reinterpret_cast<signed char*>(&r8d1455);
    r8d1458 = *reinterpret_cast<unsigned char*>(&r8d245);
    eax1459 = eax1456 + r8d1458;
    *reinterpret_cast<uint32_t*>(&rcx1460) = *reinterpret_cast<unsigned char*>(&eax1459);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1460) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1460 + 96) = *reinterpret_cast<signed char*>(&r8d1458);
    r8d1461 = *reinterpret_cast<unsigned char*>(&r8d251);
    eax1462 = eax1459 + r8d1461;
    *reinterpret_cast<uint32_t*>(&rcx1463) = *reinterpret_cast<unsigned char*>(&eax1462);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1463) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1463 + 96) = *reinterpret_cast<signed char*>(&r8d1461);
    r8d1464 = *reinterpret_cast<unsigned char*>(&r8d257);
    eax1465 = eax1462 + r8d1464;
    *reinterpret_cast<uint32_t*>(&rcx1466) = *reinterpret_cast<unsigned char*>(&eax1465);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1466) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1466 + 96) = *reinterpret_cast<signed char*>(&r8d1464);
    r8d1467 = *reinterpret_cast<unsigned char*>(&r8d263);
    eax1468 = eax1465 + r8d1467;
    *reinterpret_cast<uint32_t*>(&rcx1469) = *reinterpret_cast<unsigned char*>(&eax1468);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1469) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1469 + 96) = *reinterpret_cast<signed char*>(&r8d1467);
    r8d1470 = *reinterpret_cast<unsigned char*>(&r8d269);
    eax1471 = eax1468 + r8d1470;
    *reinterpret_cast<uint32_t*>(&rcx1472) = *reinterpret_cast<unsigned char*>(&eax1471);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1472) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1472 + 96) = *reinterpret_cast<signed char*>(&r8d1470);
    r8d1473 = *reinterpret_cast<unsigned char*>(&r8d274);
    eax1474 = eax1471 + r8d1473;
    *reinterpret_cast<uint32_t*>(&rcx1475) = *reinterpret_cast<unsigned char*>(&eax1474);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1475) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1475 + 96) = *reinterpret_cast<signed char*>(&r8d1473);
    r8d1476 = *reinterpret_cast<unsigned char*>(&r8d281);
    eax1477 = eax1474 + r8d1476;
    *reinterpret_cast<uint32_t*>(&rcx1478) = *reinterpret_cast<unsigned char*>(&eax1477);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1478) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1478 + 96) = *reinterpret_cast<signed char*>(&r8d1476);
    r8d1479 = *reinterpret_cast<unsigned char*>(&r8d287);
    eax1480 = eax1477 + r8d1479;
    *reinterpret_cast<uint32_t*>(&rcx1481) = *reinterpret_cast<unsigned char*>(&eax1480);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1481) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1481 + 96) = *reinterpret_cast<signed char*>(&r8d1479);
    r8d1482 = *reinterpret_cast<unsigned char*>(&r8d293);
    eax1483 = eax1480 + r8d1482;
    *reinterpret_cast<uint32_t*>(&rcx1484) = *reinterpret_cast<unsigned char*>(&eax1483);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1484) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1484 + 96) = *reinterpret_cast<signed char*>(&r8d1482);
    r8d1485 = *reinterpret_cast<unsigned char*>(&r8d299);
    eax1486 = eax1483 + r8d1485;
    *reinterpret_cast<uint32_t*>(&rcx1487) = *reinterpret_cast<unsigned char*>(&eax1486);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1487) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1487 + 96) = *reinterpret_cast<signed char*>(&r8d1485);
    r8d1488 = *reinterpret_cast<unsigned char*>(&r8d305);
    eax1489 = eax1486 + r8d1488;
    *reinterpret_cast<uint32_t*>(&rcx1490) = *reinterpret_cast<unsigned char*>(&eax1489);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1490) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1490 + 96) = *reinterpret_cast<signed char*>(&r8d1488);
    r8d1491 = *reinterpret_cast<unsigned char*>(&r8d310);
    eax1492 = eax1489 + r8d1491;
    *reinterpret_cast<uint32_t*>(&rcx1493) = *reinterpret_cast<unsigned char*>(&eax1492);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1493) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1493 + 96) = *reinterpret_cast<signed char*>(&r8d1491);
    r8d1494 = *reinterpret_cast<unsigned char*>(&r8d317);
    eax1495 = eax1492 + r8d1494;
    *reinterpret_cast<uint32_t*>(&rcx1496) = *reinterpret_cast<unsigned char*>(&eax1495);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1496) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1496 + 96) = *reinterpret_cast<signed char*>(&r8d1494);
    r8d1497 = *reinterpret_cast<unsigned char*>(&r8d323);
    eax1498 = eax1495 + r8d1497;
    *reinterpret_cast<uint32_t*>(&rcx1499) = *reinterpret_cast<unsigned char*>(&eax1498);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1499) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1499 + 96) = *reinterpret_cast<signed char*>(&r8d1497);
    r8d1500 = *reinterpret_cast<unsigned char*>(&r8d329);
    eax1501 = eax1498 + r8d1500;
    *reinterpret_cast<uint32_t*>(&rcx1502) = *reinterpret_cast<unsigned char*>(&eax1501);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1502) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1502 + 96) = *reinterpret_cast<signed char*>(&r8d1500);
    r8d1503 = *reinterpret_cast<unsigned char*>(&r8d335);
    eax1504 = eax1501 + r8d1503;
    *reinterpret_cast<uint32_t*>(&rcx1505) = *reinterpret_cast<unsigned char*>(&eax1504);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1505) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1505 + 96) = *reinterpret_cast<signed char*>(&r8d1503);
    r8d1506 = *reinterpret_cast<unsigned char*>(&r8d341);
    eax1507 = eax1504 + r8d1506;
    *reinterpret_cast<uint32_t*>(&rcx1508) = *reinterpret_cast<unsigned char*>(&eax1507);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1508) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1508 + 96) = *reinterpret_cast<signed char*>(&r8d1506);
    r8d1509 = *reinterpret_cast<unsigned char*>(&r8d347);
    eax1510 = eax1507 + r8d1509;
    *reinterpret_cast<uint32_t*>(&rcx1511) = *reinterpret_cast<unsigned char*>(&eax1510);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1511) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1511 + 96) = *reinterpret_cast<signed char*>(&r8d1509);
    r8d1512 = *reinterpret_cast<unsigned char*>(&r8d352);
    eax1513 = eax1510 + r8d1512;
    *reinterpret_cast<uint32_t*>(&rcx1514) = *reinterpret_cast<unsigned char*>(&eax1513);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1514) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1514 + 96) = *reinterpret_cast<signed char*>(&r8d1512);
    r8d1515 = *reinterpret_cast<unsigned char*>(&r8d359);
    eax1516 = eax1513 + r8d1515;
    *reinterpret_cast<uint32_t*>(&rcx1517) = *reinterpret_cast<unsigned char*>(&eax1516);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1517) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1517 + 96) = *reinterpret_cast<signed char*>(&r8d1515);
    r8d1518 = *reinterpret_cast<unsigned char*>(&r8d365);
    eax1519 = eax1516 + r8d1518;
    *reinterpret_cast<uint32_t*>(&rcx1520) = *reinterpret_cast<unsigned char*>(&eax1519);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1520) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1520 + 96) = *reinterpret_cast<signed char*>(&r8d1518);
    *reinterpret_cast<uint32_t*>(&r8_1521) = *reinterpret_cast<unsigned char*>(&r8d371);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_1521) + 4) = 0;
    eax1522 = eax1519 + *reinterpret_cast<uint32_t*>(&r8_1521);
    *reinterpret_cast<uint32_t*>(&rcx1523) = *reinterpret_cast<unsigned char*>(&eax1522);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1523) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rcx1523 + 96) = *reinterpret_cast<signed char*>(&r8_1521);
    ecx1524 = *reinterpret_cast<unsigned char*>(&r8d377);
    eax1525 = eax1522 + ecx1524;
    *reinterpret_cast<uint32_t*>(&rax1526) = *reinterpret_cast<unsigned char*>(&eax1525);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax1526) + 4) = 0;
    *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp2) + rax1526 + 96) = *reinterpret_cast<signed char*>(&ecx1524);
    rax1528 = fun_140001450("Decrypted message: %s\n", reinterpret_cast<int64_t>(rsp2) + 32, r8_1521, r9_1527);
    return rax1528;
}

int64_t exit = 0x1055c;

void fun_14000aea0(void** rcx, void** rdx) {
    goto exit;
}

int64_t* g14000c8f0 = reinterpret_cast<int64_t*>(0x14000f040);

int64_t Sleep = 0x10408;

struct s50 {
    signed char[8] pad8;
    int64_t f8;
};

struct s50* g30;

int32_t* g14000c900 = reinterpret_cast<int32_t*>(0x14000f048);

int64_t* g14000c860 = reinterpret_cast<int64_t*>(0x14000c140);

void** g14000c930 = reinterpret_cast<void**>(16);

void** g14000c920 = reinterpret_cast<void**>(0);

void** g14000c950 = reinterpret_cast<void**>(40);

void** g14000c940 = reinterpret_cast<void**>(24);

int32_t g14000f008;

int64_t g14000c990 = 0x1400050e0;

int64_t SetUnhandledExceptionFilter = 0x103ea;

void** g14000c8e0 = reinterpret_cast<void**>(0xd0);

void fun_140001000();

int32_t g14000f028;

void** g14000f020;

void**** g14000c870 = reinterpret_cast<void****>(0x140010254);

void** g14000f018;

int32_t g14000f00c;

int32_t g14000f010;

int32_t* g14000c8a0 = reinterpret_cast<int32_t*>(0x14000f090);

void fun_14000ae60();

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

    rbx3 = g14000c8f0;
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
    rsi8 = g14000c900;
    edi9 = 0;
    if (*rsi8 == 1) {
        addr_140001337_9:
        *reinterpret_cast<int32_t*>(&rcx) = 31;
        *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
        fun_14000ae58(31);
        if (*rsi8 != 1) {
            addr_140001200_10:
            if (!edi9) {
                addr_14000136d_11:
                *rbx3 = 0;
                goto addr_140001208_12;
            } else {
                addr_140001208_12:
                rax10 = g14000c860;
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
            rdx = g14000c930;
            rcx = g14000c920;
            fun_14000ae70(rcx, rdx);
            *rsi8 = 2;
            if (edi9) 
                goto addr_140001208_12; else 
                goto addr_14000136d_11;
        }
    } else {
        addr_1400011e1_15:
        if (!*rsi8) {
            rdx = g14000c950;
            rcx = g14000c940;
            *rsi8 = 1;
            fun_14000ae70(rcx, rdx);
            goto addr_1400011f5_17;
        } else {
            g14000f008 = 1;
            goto addr_1400011f5_17;
        }
    }
    fun_140004d40(rcx, rdx, 0, r9_13);
    rcx14 = g14000c990;
    rax15 = reinterpret_cast<void**>(SetUnhandledExceptionFilter(rcx14, rdx));
    rdx16 = g14000c8e0;
    *reinterpret_cast<void***>(rdx16) = rax15;
    fun_14000a8b0(fun_140001000);
    fun_140004b50(fun_140001000, rdx16);
    rbp17 = g14000f028;
    r12_18 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(rbp17 + 1))) << 3);
    rcx19 = r12_18;
    rax20 = fun_14000aed0(rcx19, rdx16);
    r13_21 = g14000f020;
    rdi22 = rax20;
    if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbp17) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbp17) == 0))) {
        *reinterpret_cast<int32_t*>(&rbx23) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx23) + 4) = 0;
        do {
            rcx24 = *reinterpret_cast<void***>(r13_21 + rbx23 * 8);
            rax25 = fun_14000aef8(rcx24, rcx24);
            rsi26 = reinterpret_cast<void**>(&rax25->f1);
            rax27 = fun_14000aed0(rsi26, rdx16, rsi26, rdx16);
            r8_12 = rsi26;
            *reinterpret_cast<void***>(rdi22 + rbx23 * 8) = rax27;
            rdx16 = *reinterpret_cast<void***>(r13_21 + rbx23 * 8);
            rcx19 = rax27;
            ++rbx23;
            fun_14000aed8(rcx19, rdx16, r8_12);
        } while (rbp17 != rbx23);
        rax20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi22) + reinterpret_cast<unsigned char>(r12_18) + 0xfffffffffffffff8);
    }
    *reinterpret_cast<void***>(rax20) = reinterpret_cast<void**>(0);
    g14000f020 = rdi22;
    fun_140004950(rcx19, rdx16, r8_12);
    rax28 = g14000c870;
    r8_29 = g14000f018;
    *reinterpret_cast<int32_t*>(&rcx30) = g14000f028;
    *reinterpret_cast<int32_t*>(&rcx30 + 4) = 0;
    **rax28 = r8_29;
    rdx31 = g14000f020;
    rax32 = fun_14000af90(rcx30, rdx31, r8_29);
    ecx33 = g14000f00c;
    g14000f010 = *reinterpret_cast<int32_t*>(&rax32);
    if (!ecx33) {
        *reinterpret_cast<int32_t*>(&rcx34) = *reinterpret_cast<int32_t*>(&rax32);
        *reinterpret_cast<int32_t*>(&rcx34 + 4) = 0;
        fun_14000aea0(rcx34, rdx31);
        rax35 = g14000c8a0;
        *rax35 = 1;
        fun_140001180(rcx34, rdx31);
        goto v36;
    } else {
        edx37 = g14000f008;
        if (!edx37) {
            fun_14000ae60();
            *reinterpret_cast<int32_t*>(&rax38) = g14000f010;
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
    rsi8 = g14000c900;
    edi9 = 1;
    if (*rsi8 != 1) 
        goto addr_1400011e1_15; else 
        goto addr_140001337_9;
}

int64_t _cexit = 0x104f8;

void fun_14000ae60() {
    goto _cexit;
}

int64_t _onexit = 0x10536;

uint64_t fun_14000ae80(int64_t rcx) {
    goto _onexit;
}

uint32_t g14000f0e8;

int64_t DeleteCriticalSection = 0x1034c;

int64_t InitializeCriticalSection = 0x1038c;

int64_t fun_140005440(int64_t rcx, void** rdx) {
    uint32_t eax3;
    uint32_t eax4;
    uint32_t eax5;
    void** rbx6;
    void** rcx7;
    uint32_t eax8;

    if (*reinterpret_cast<uint32_t*>(&rdx) == 2) {
        fun_140004b50(rcx, rdx);
        return 1;
    } else {
        if (*reinterpret_cast<uint32_t*>(&rdx) > 2) {
            if (*reinterpret_cast<uint32_t*>(&rdx) == 3 && (eax3 = g14000f0e8, !!eax3)) {
                fun_1400052a0();
            }
        } else {
            if (!*reinterpret_cast<uint32_t*>(&rdx)) {
                eax4 = g14000f0e8;
                if (eax4) {
                    fun_1400052a0();
                }
                eax5 = g14000f0e8;
                if (eax5 == 1) {
                    rbx6 = g14000f0e0;
                    if (rbx6) {
                        do {
                            rcx7 = rbx6;
                            rbx6 = *reinterpret_cast<void***>(rbx6 + 16);
                            fun_14000aeb8(rcx7, rdx);
                        } while (rbx6);
                    }
                    g14000f0e0 = reinterpret_cast<void**>(0);
                    g14000f0e8 = 0;
                    DeleteCriticalSection(0x14000f100);
                }
            } else {
                eax8 = g14000f0e8;
                if (!eax8) {
                    InitializeCriticalSection(0x14000f100);
                }
                g14000f0e8 = 1;
            }
        }
        return 1;
    }
}

int64_t __iob_func = 0x104b6;

void*** fun_14000ae40() {
    goto __iob_func;
}

int64_t fwrite = 0x1057e;

void fun_14000aec0(int64_t rcx, void** rdx, void** r8, void** r9) {
    goto fwrite;
}

int64_t vfprintf = 0x105de;

void fun_14000af08() {
    goto vfprintf;
}

int64_t abort = 0x1054a;

void fun_14000ae90() {
    goto abort;
}

struct s51 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[16] pad24;
    int16_t f18;
};

uint32_t fun_1400056d0(void** rcx, void** rdx, void** r8, void** r9) {
    struct s2* rax5;
    struct s51* rax6;

    rax5 = g14000c830;
    if (rax5->f0 != 0x5a4d || ((rax6 = reinterpret_cast<struct s51*>(reinterpret_cast<uint64_t>(rax5) + static_cast<int64_t>(rax5->f3c)), rax6->f0 != 0x4550) || rax6->f18 != 0x20b)) {
        return 0;
    } else {
        return static_cast<uint32_t>(rax6->f6);
    }
}

void fun_14000ae78(int64_t rcx);

void fun_14000a7d0(void** rcx, void** rdx, void** r8, void** r9) {
    int64_t v5;
    void** rax6;
    int64_t v7;
    void** rax8;
    int64_t v9;
    void** rax10;
    int64_t rax11;
    int64_t rax12;
    int64_t rcx13;

    rax6 = fun_14000a8c0(0, rdx, r8, r9, v5);
    if (reinterpret_cast<unsigned char>(rcx) < reinterpret_cast<unsigned char>(rax6) || (rax8 = fun_14000a8c0(19, rdx, r8, r9, v7), reinterpret_cast<unsigned char>(rcx) > reinterpret_cast<unsigned char>(rax8))) {
        goto EnterCriticalSection;
    } else {
        rax10 = fun_14000a8c0(0, rdx, r8, r9, v9);
        rax11 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rcx) - reinterpret_cast<unsigned char>(rax10)) >> 4;
        *reinterpret_cast<int32_t*>(&rax12) = *reinterpret_cast<int32_t*>(&rax11) * 0xaaaaaaab;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx13) = static_cast<int32_t>(rax12 + 16);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
        fun_14000ae78(rcx13);
        *reinterpret_cast<void***>(rcx + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 24)) | 0x8000);
        return;
    }
}

uint32_t fun_140007440(int64_t rcx, void** rdx, uint32_t r8d, void** r9) {
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

    fun_14000ae68(rcx);
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
        addr_140007617_2:
        return ecx6;
    } else {
        do {
            if (ecx6 != 37) {
                if (v12 & 0x4000 || (eax14 = v13, reinterpret_cast<int32_t>(v8) > reinterpret_cast<int32_t>(eax14))) {
                    if (v12 & 0x2000) {
                        fun_14000aeb0();
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
                        goto addr_14000758f_13;
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
                        addr_140007600_22:
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
                            goto addr_140007600_22;
                        }
                    }
                } while (*reinterpret_cast<signed char*>(&rax15));
                goto addr_14000760f_27;
                fun_140005a90(37, reinterpret_cast<int64_t>(rsp5) + 0x70);
                rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
            }
            edx9 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx10));
            ++rbx10;
            ecx6 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&edx9)));
        } while (ecx6);
    }
    addr_140007610_30:
    ecx6 = v13;
    goto addr_140007617_2;
    addr_14000758f_13:
    *reinterpret_cast<uint32_t*>(&rdx26) = *reinterpret_cast<unsigned char*>(&edx20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = 0;
    goto *reinterpret_cast<int32_t*>(0x14000c490 + rdx26 * 4) + 0x14000c490;
    addr_14000760f_27:
    goto addr_140007610_30;
}

int64_t _unlock = 0x10540;

void fun_14000a840(void** rcx, void** rdx, void** r8, void** r9) {
    int64_t v5;
    void** rax6;
    int64_t v7;
    void** rax8;
    int64_t v9;

    rax6 = fun_14000a8c0(0, rdx, r8, r9, v5);
    if (reinterpret_cast<unsigned char>(rcx) < reinterpret_cast<unsigned char>(rax6) || (rax8 = fun_14000a8c0(19, rdx, r8, r9, v7), reinterpret_cast<unsigned char>(rcx) > reinterpret_cast<unsigned char>(rax8))) {
        goto LeaveCriticalSection;
    } else {
        *reinterpret_cast<void***>(rcx + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 24)) & 0xffff7fff);
        fun_14000a8c0(0, rdx, r8, r9, v9);
        goto _unlock;
    }
}

struct s52 {
    signed char[32] pad32;
    signed char f20;
};

void fun_140006730(void** rcx, void** rdx, void** r8) {
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
        rax7 = fun_14000aec8();
        rcx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffff6);
        r9_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffff8);
        rdx9 = rax7->f0;
        eax11 = fun_14000ac40(rcx, rdx9, 16, r9_8, v10);
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
        fun_140005a90(46, r12_6, 46, r12_6);
        return;
    } else {
        rax14 = fun_140005910(rcx, rcx);
        rsp15 = reinterpret_cast<struct s52*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax14);
        rbx16 = &rsp15->f20;
        rsp17 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
        *rsp17 = 0x14000678a;
        eax18 = fun_14000a970(rbx16, edx12, reinterpret_cast<int64_t>(rbp5) - 8, r9_8);
        rsp19 = reinterpret_cast<void*>(rsp17 + 1);
        if (reinterpret_cast<uint1_t>(eax18 < 0) | reinterpret_cast<uint1_t>(eax18 == 0)) {
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp19) - 8) = 0x14000687d;
            fun_140005a90(46, r12_6, 46, r12_6);
        } else {
            *reinterpret_cast<int32_t*>(&rax20) = eax18 - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
            rdi21 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rbx16) + reinterpret_cast<int64_t>(rax20) + 1);
            do {
                addr_1400067bb_12:
                edx22 = *reinterpret_cast<void***>(r12_6 + 8);
                ++rbx16;
                if (*reinterpret_cast<unsigned char*>(&edx22 + 1) & 64 || (eax23 = *reinterpret_cast<void***>(r12_6 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_6 + 40)) > reinterpret_cast<signed char>(eax23))) {
                    ecx24 = *(rbx16 - 1);
                    if (!(*reinterpret_cast<unsigned char*>(&edx22 + 1) & 32)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_6)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_6 + 36))))) = *reinterpret_cast<signed char*>(&ecx24);
                        eax23 = *reinterpret_cast<void***>(r12_6 + 36);
                    } else {
                        rsp25 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp19) - 8);
                        *rsp25 = 0x1400067ea;
                        fun_14000aeb0();
                        rsp19 = reinterpret_cast<void*>(rsp25 + 1);
                        *reinterpret_cast<void***>(r12_6 + 36) = *reinterpret_cast<void***>(r12_6 + 36) + 1;
                        if (rdi21 != rbx16) 
                            goto addr_1400067bb_12; else 
                            break;
                    }
                }
                *reinterpret_cast<void***>(r12_6 + 36) = eax23 + 1;
            } while (rdi21 != rbx16);
        }
        return;
    }
}

int64_t strerror = 0x105be;

void** fun_14000aef0(int64_t rcx) {
    goto strerror;
}

int64_t wcslen = 0x105ea;

void** fun_14000af10(uint16_t* rcx) {
    goto wcslen;
}

void fun_140009b30();

void fun_140009a50(int32_t ecx, ...) {
    int32_t eax2;
    int32_t tmp32_3;
    int64_t rdi4;
    int32_t eax5;
    int64_t rbx6;

    eax2 = g14000faf0;
    if (eax2 == 2) 
        goto addr_140009b20_2;
    if (eax2) {
        if (eax2 != 1) 
            goto addr_140009a9b_5; else 
            goto addr_140009a71_6;
    }
    tmp32_3 = g14000faf0;
    g14000faf0 = 1;
    if (!tmp32_3) {
        rdi4 = InitializeCriticalSection;
        rdi4(0x14000fb00);
        rdi4(0x14000fb28);
        fun_140001410(fun_140009b30);
        goto addr_140009adc_9;
    }
    if (tmp32_3 == 2) {
        addr_140009adc_9:
        g14000faf0 = 2;
    } else {
        eax5 = g14000faf0;
        if (eax5 == 1) {
            addr_140009a71_6:
            rbx6 = Sleep;
            goto addr_140009a80_12;
        } else {
            goto addr_140009a92_14;
        }
    }
    addr_140009ae6_15:
    goto EnterCriticalSection;
    do {
        addr_140009a80_12:
        rbx6(1);
        eax5 = g14000faf0;
    } while (eax5 == 1);
    addr_140009a92_14:
    if (eax5 == 2) {
        addr_140009b20_2:
        goto addr_140009ae6_15;
    } else {
        addr_140009a9b_5:
        return;
    }
}

void fun_140009900(void** rcx, void* edx) {
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
        goto addr_140009990_2;
    r12_6 = rcx + 24;
    rbp7 = ebp5;
    r11_8 = reinterpret_cast<void***>(r12_6 + rbx3 * 4);
    rsi9 = reinterpret_cast<void***>(r12_6 + rbp7 * 4);
    edx10 = reinterpret_cast<uint32_t>(edx) & 31;
    if (!edx10) {
        rdi11 = r12_6;
        if (reinterpret_cast<uint64_t>(r11_8) <= reinterpret_cast<uint64_t>(rsi9)) {
            addr_140009990_2:
            *reinterpret_cast<void***>(r10_4 + 20) = reinterpret_cast<void**>(0);
        } else {
            do {
                *reinterpret_cast<void***>(rdi11) = *rsi9;
                rdi11 = rdi11 + 4;
                rsi9 = rsi9 + 4;
            } while (reinterpret_cast<uint64_t>(r11_8) > reinterpret_cast<uint64_t>(rsi9));
            rax12 = r12_6 + (rbx3 - rbp7) * 4;
            goto addr_1400099cd_11;
        }
    } else {
        ecx13 = edx10;
        r8_14 = rsi9 + 4;
        edi15 = 32 - edx10;
        r9d16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*rsi9) >> *reinterpret_cast<signed char*>(&ecx13));
        if (reinterpret_cast<uint64_t>(r11_8) <= reinterpret_cast<uint64_t>(r8_14)) {
            *reinterpret_cast<void***>(r10_4 + 24) = r9d16;
            if (!r9d16) 
                goto addr_140009990_2;
            rax12 = r12_6;
            goto addr_140009983_15;
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
                goto addr_1400099cd_11; else 
                goto addr_140009983_15;
        }
    }
    *reinterpret_cast<void***>(r10_4 + 24) = reinterpret_cast<void**>(0);
    return;
    addr_1400099cd_11:
    rax20 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rax12) - reinterpret_cast<unsigned char>(r12_6)) >> 2;
    *reinterpret_cast<void***>(r10_4 + 20) = *reinterpret_cast<void***>(&rax20);
    if (*reinterpret_cast<void***>(&rax20)) {
        return;
    }
    addr_140009983_15:
    rax12 = rax12 + 4;
    goto addr_1400099cd_11;
}

void** fun_14000a330(void** rcx, void** rdx, void** r8) {
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
            addr_14000a38f_3:
            ecx9 = *reinterpret_cast<void***>(rsi5 + 8);
            rax10 = fun_140009b80(ecx9);
            r8_11 = rax10;
            if (!rax10) {
                addr_14000a493_4:
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
                    goto addr_14000a41c_8;
            }
        } else {
            addr_14000a4b3_9:
            rax28 = rsi5;
            edi7 = reinterpret_cast<void**>(1);
            rsi5 = rbx6;
            rbx6 = rax28;
            goto addr_14000a38f_3;
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
                goto addr_14000a389_12;
        } while (reinterpret_cast<unsigned char>(rcx30) < reinterpret_cast<unsigned char>(rax31));
        goto addr_14000a4d0_14;
    }
    rax27 = reinterpret_cast<void*>(0);
    addr_14000a41c_8:
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
    goto addr_14000a493_4;
    addr_14000a389_12:
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax31)) < reinterpret_cast<unsigned char>(*rdx32)) 
        goto addr_14000a4b3_9; else 
        goto addr_14000a38f_3;
    addr_14000a4d0_14:
    rax42 = fun_140009b80(0);
    r8_11 = rax42;
    if (rax42) {
        *reinterpret_cast<void***>(r8_11 + 20) = reinterpret_cast<void**>(1);
        return r8_11;
    }
}

int64_t _lock = 0x1052e;

void fun_14000ae78(int64_t rcx) {
    goto _lock;
}

int64_t fun_1400014a0(int64_t rcx, int64_t rdx, int64_t r8, void** r9) {
    void** rax5;
    int64_t rax6;

    rax5 = reinterpret_cast<void**>(g14000b210(1));
    rax6 = fun_140005950(rax5, 0x14000c000, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 48 + 72, r9);
    return rax6;
}

int64_t fun_140001450(void** rcx, void* rdx, int64_t r8, void** r9) {
    void** rax5;
    int64_t rax6;

    rax5 = reinterpret_cast<void**>(g14000b210(1));
    rax6 = fun_140005950(rax5, rcx, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 56 + 88, r9);
    return rax6;
}

int64_t calloc = 0x10552;

void** fun_14000ae98(int64_t rcx, int64_t rdx) {
    goto calloc;
}

int64_t fun_140005950(void** rcx, void** rdx, void** r8, void** r9) {
    uint32_t eax5;
    int64_t rax6;

    fun_14000a7d0(rcx, rdx, r8, r9);
    eax5 = fun_140007440(0x6000, rcx, 0, rdx);
    fun_14000a840(rcx, rcx, 0, rdx);
    *reinterpret_cast<uint32_t*>(&rax6) = eax5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    return rax6;
}

void fun_140001000() {
    return;
}

void fun_14000afc7() {
    signed char* rax1;
    signed char* rax2;
    signed char al3;
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

    *rax1 = reinterpret_cast<signed char>(*rax2 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    *rax13 = reinterpret_cast<signed char>(*rax14 + al15);
}

void fun_14000afdf() {
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
}

int32_t* g14000c8b0 = reinterpret_cast<int32_t*>(0x14000f078);

int32_t* g14000c8c0 = reinterpret_cast<int32_t*>(0x14000f074);

int32_t* g14000c8d0 = reinterpret_cast<int32_t*>(0x14000f070);

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

int32_t* g14000c980 = reinterpret_cast<int32_t*>(0x14000f0c0);

int32_t* g14000c960 = reinterpret_cast<int32_t*>(0x14000f080);

int32_t* g14000c810 = reinterpret_cast<int32_t*>(0x14000b190);

int64_t g14000c9a0 = 0x140004a50;

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

    rax1 = g14000c8b0;
    ecx2 = 0;
    *rax1 = 1;
    rax3 = g14000c8c0;
    *rax3 = 1;
    rax4 = g14000c8d0;
    *rax4 = 1;
    rax5 = g14000c830;
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
    rax8 = g14000c8a0;
    g14000f00c = ecx2;
    if (!*rax8) {
        *reinterpret_cast<int32_t*>(&rcx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        fun_14000ae48(1);
    } else {
        *reinterpret_cast<int32_t*>(&rcx9) = 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        fun_14000ae48(2);
    }
    rax10 = fun_14000a7b0(rcx9);
    rdx11 = g14000c980;
    *rax10 = *rdx11;
    rax12 = fun_14000a7c0(rcx9);
    rdx13 = g14000c960;
    *rax12 = *rdx13;
    fun_140004970(rcx9);
    rax14 = g14000c810;
    if (*rax14 == 1) {
        rcx15 = g14000c9a0;
        fun_1400050d0(rcx15);
        return 0;
    } else {
        return 0;
    }
}

int32_t* g14000c9b0 = reinterpret_cast<int32_t*>(0x14000f060);

int32_t g14000f004;

int32_t* g14000c970 = reinterpret_cast<int32_t*>(0x14000f050);

void fun_140001130() {
    int32_t* rax1;
    int32_t* rax2;
    int64_t r9_3;

    rax1 = g14000c9b0;
    g14000f004 = *rax1;
    rax2 = g14000c970;
    *reinterpret_cast<int32_t*>(&r9_3) = *rax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_3) + 4) = 0;
    fun_14000ae38(0x14000f028, 0x14000f020, 0x14000f018, r9_3);
    return;
}

void fun_140004997(int64_t rcx, void** rdx) {
    int64_t v3;

    fun_140005440(rcx, rdx);
    goto v3;
}

void fun_1400049de() {
    int64_t* rbx1;
    int64_t v2;
    int64_t rax3;
    int64_t v4;

    rbx1 = reinterpret_cast<int64_t*>(0x140011058);
    if (1) {
        goto v2;
    } else {
        do {
            rax3 = *rbx1;
            if (rax3) {
                rax3();
            }
            ++rbx1;
        } while (!reinterpret_cast<int1_t>(0x140011058 == rbx1));
        goto v4;
    }
}

void fun_140004a17(int64_t rcx, void** rdx) {
    int64_t v3;

    fun_140005440(rcx, rdx);
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

void fun_140004a88(struct s54* rcx, void** rdx, void** r8, void** r9) {
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
    rax14 = fun_14000a8c0(2, rdx, r8, r9, __return_address());
    rdi12->f0 = rsi13->f0;
    rdi15 = reinterpret_cast<struct s62*>(&rdi12->f4);
    rsi16 = reinterpret_cast<struct s63*>(&rsi13->f4);
    rdi15->f0 = rsi16->f0;
    rsi17 = &rsi16->f4;
    rdi15->f4 = *rsi17;
    fun_14000aea8(rax14, "_matherr(): %s in %s(%g, %g)  (retval=%g)\n", "Argument singularity (SIGN)", rsi17, __return_address());
    __asm__("movaps xmm6, [rsp+0x40]");
    __asm__("movaps xmm7, [rsp+0x50]");
    __asm__("movaps xmm8, [rsp+0x60]");
    goto v18;
}

void fun_140004af0() {
    goto 0x140004a8f;
}

void fun_14000512e() {
    int64_t v1;

    fun_14000aee8(8, 8);
    fun_140004b50(8, 1);
    goto v1;
}

int64_t g14000f0d0;

void fun_14000519c() {
    int32_t eax1;
    int64_t rax2;
    int64_t v3;

    if (eax1 == 0x80000002) 
        goto 0x140005148;
    rax2 = g14000f0d0;
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

void fun_1400051bf() {
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
        goto 0x140005148;
    }
    if (eax2 > 0xc0000096) 
        goto 0x1400051a7;
    if (eax3 > 0xc000008b) 
        goto addr_140005114_6;
    if (eax4 == 0xc0000005) {
        rax5 = fun_14000aee8(11);
        if (rax5 == 1) {
            fun_14000aee8(11, 11);
            goto 0x14000514d;
        } else {
            if (!rax5) 
                goto 0x1400051a7;
            rax5(11);
            goto 0x14000514d;
        }
    }
    if (eax6 <= 0xc0000005) 
        goto 0x1400051a0;
    if (eax7 == 0xc0000008) 
        goto 0x140005148;
    if (eax8 != 0xc000001d) 
        goto 0x1400051a7;
    rax9 = fun_14000aee8(4);
    if (rax9 != 1) 
        goto addr_140005189_16;
    fun_14000aee8(4, 4);
    goto 0x14000514d;
    addr_140005189_16:
    if (!rax9) 
        goto 0x1400051a7;
    rax9(4);
    goto 0x14000514d;
    addr_140005114_6:
    *reinterpret_cast<uint32_t*>(&rax10) = reinterpret_cast<uint32_t>(eax11 + 0x3fffff73);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax10) > 9) 
        goto 0x140005148;
    goto *reinterpret_cast<int32_t*>(0x14000c440 + rax10 * 4) + 0x14000c440;
}

void fun_140005210() {
    int64_t rax1;

    rax1 = fun_14000aee8(8);
    if (rax1 != 1) {
        if (!rax1) 
            goto 0x1400051a7;
        rax1(8);
        goto 0x14000514d;
    } else {
        fun_14000aee8(8, 8);
        goto 0x14000514d;
    }
}

int64_t fun_140005320(void** ecx, void** rdx) {
    int64_t rax3;
    void** rax4;
    void** rax5;

    *reinterpret_cast<uint32_t*>(&rax3) = g14000f0e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax3)) {
        rax4 = fun_14000ae98(1, 24);
        if (!rax4) {
            *reinterpret_cast<uint32_t*>(&rax3) = 0xffffffff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        } else {
            *reinterpret_cast<void***>(rax4) = ecx;
            *reinterpret_cast<void***>(rax4 + 8) = rdx;
            EnterCriticalSection(0x14000f100, 24);
            rax5 = g14000f0e0;
            g14000f0e0 = rax4;
            *reinterpret_cast<void***>(rax4 + 16) = rax5;
            LeaveCriticalSection(0x14000f100, 24);
            return 0;
        }
    }
    return rax3;
}

void fun_1400053cd() {
    void** rcx1;
    int64_t v2;
    void** rdx3;
    void** ebx4;

    EnterCriticalSection(0x14000f100);
    rcx1 = g14000f0e0;
    if (!rcx1) {
        addr_140005413_3:
        LeaveCriticalSection(0x14000f100);
        goto v2;
    } else {
        *reinterpret_cast<int32_t*>(&rdx3) = 0;
        *reinterpret_cast<int32_t*>(&rdx3 + 4) = 0;
        while (*reinterpret_cast<void***>(rcx1) != ebx4) {
            rdx3 = rcx1;
            if (!*reinterpret_cast<void***>(rcx1 + 16)) 
                goto addr_140005413_3;
            rcx1 = *reinterpret_cast<void***>(rcx1 + 16);
        }
    }
    if (!rdx3) {
        g14000f0e0 = *reinterpret_cast<void***>(rcx1 + 16);
    } else {
        *reinterpret_cast<void***>(rdx3 + 16) = *reinterpret_cast<void***>(rcx1 + 16);
    }
    fun_14000aeb8(rcx1, rdx3);
    goto addr_140005413_3;
}

struct s65 {
    signed char[24] pad24;
    int16_t f18;
};

int64_t fun_140005549(struct s65* rcx) {
    int64_t rax2;

    *reinterpret_cast<int32_t*>(&rax2) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax2) = reinterpret_cast<uint1_t>(rcx->f18 == 0x20b);
    return rax2;
}

void fun_14000560d() {
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
        eax5 = fun_14000af00(r12_1, rbx4, 8);
    } while (eax5);
    goto addr_14000562e_4;
    goto v6;
    addr_14000562e_4:
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

struct s66* fun_140005710() {
    struct s2* r8_1;
    struct s66* rax2;
    struct s67* rdx3;
    void* rax4;
    uint32_t edx5;
    int64_t rdx6;
    struct s66* rdx7;
    int64_t rcx8;

    r8_1 = g14000c830;
    *reinterpret_cast<int32_t*>(&rax2) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    if (r8_1->f0 == 0x5a4d && ((rdx3 = reinterpret_cast<struct s67*>(r8_1->f3c + reinterpret_cast<uint64_t>(r8_1)), rdx3->f0 == 0x4550) && rdx3->f18 == 0x20b)) {
        *reinterpret_cast<uint32_t*>(&rax4) = rdx3->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        rax2 = reinterpret_cast<struct s66*>(reinterpret_cast<uint64_t>(rdx3) + reinterpret_cast<uint64_t>(rax4) + 24);
        edx5 = rdx3->f6;
        if (!edx5) {
            addr_140005778_3:
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
            goto addr_140005778_3;
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

int64_t fun_1400057c0(int64_t rcx) {
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

    rdx2 = g14000c830;
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
    goto addr_140005835_7;
    *reinterpret_cast<uint32_t*>(&rax13) = reinterpret_cast<uint32_t>(~rdx6->f24) >> 31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
    return rax13;
    addr_140005835_7:
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

int64_t fun_140005876() {
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
    goto addr_1400058d6_8;
    rax16 = reinterpret_cast<struct s75*>(rax2 + r11_17);
    while (rax16->f4 || rax16->fc) {
        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(ecx18 < 0) | reinterpret_cast<uint1_t>(ecx18 == 0))) 
            goto addr_140005903_12;
        --ecx18;
        rax16 = reinterpret_cast<struct s75*>(reinterpret_cast<uint64_t>(rax16) + 20);
    }
    addr_1400058d6_8:
    return 0;
    addr_140005903_12:
    *reinterpret_cast<int32_t*>(&r9_19) = rax16->fc;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_19) + 4) = 0;
    return r9_19 + r11_20;
}

void fun_140007690() {
    goto 0x140007607;
}

void fun_14000772f() {
    int32_t r15d1;
    void** r9_2;

    if (reinterpret_cast<uint32_t>(r15d1 - 2) <= 1) {
        fun_140005af0(reinterpret_cast<int64_t>(__zero_stack_offset()) + 96, 1, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70, r9_2, __return_address());
        goto 0x14000753d;
    } else {
        fun_140005c60(reinterpret_cast<int64_t>(__zero_stack_offset()) + 96, 1, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x14000753d;
    }
}

void fun_140007774() {
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
        goto 0x14000753d;
    } else {
        if (r15d5 == 1) {
            **r12_4 = rax1;
            goto 0x14000753d;
        } else {
            if (r15d6 == 2 || r15d7 != 3) {
                **r12_4 = rax1;
                goto 0x14000753d;
            } else {
                **r12_4 = rax1;
                goto 0x14000753d;
            }
        }
    }
}

struct s76 {
    void** f0;
    signed char[7] pad8;
    int32_t f8;
};

void fun_1400077b2() {
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
            addr_140007d67_3:
            fun_140005de0(0, "NaN", reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
            goto 0x140007d47;
        } else {
            rdx6 = v7;
            if (*reinterpret_cast<int16_t*>(&rdx6) < reinterpret_cast<int16_t>(0)) {
            }
            r8d8 = *reinterpret_cast<uint32_t*>(&r8_5) & 0x7ff00000;
            eax9 = *reinterpret_cast<uint32_t*>(&r8_5) & 0xfffff | *reinterpret_cast<uint32_t*>(&rcx1);
            if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!eax9)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d8 != 0x7ff00000))) && eax9 | r8d8) {
                fun_140005de0(*reinterpret_cast<uint32_t*>(&rdx6) & 0x8000, "Inf", reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
                goto 0x140007d47;
            }
            rax10 = rcx1;
            *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx6) & 0x7fff);
            if (!*reinterpret_cast<uint16_t*>(&rdx6)) 
                goto addr_140007dec_9;
            if (*reinterpret_cast<int16_t*>(&rdx6) <= reinterpret_cast<int16_t>(0x3c00)) 
                goto addr_140007cdb_11;
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
            goto addr_140007d67_3;
        if (*reinterpret_cast<int16_t*>(&rbx11) < 0) {
        }
        *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx6) & 0x7fff);
        if (!*reinterpret_cast<uint16_t*>(&rdx6)) {
            if (rcx12) {
                *reinterpret_cast<uint32_t*>(&rdx6) = 0xffffc002;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
            }
            goto addr_140007cf8_19;
        } else {
            if (*reinterpret_cast<uint16_t*>(&rdx6) != 0x7fff || r9d16) {
                *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx6) - 0x3fff);
                goto addr_140007cf8_19;
            } else {
                fun_140005de0(*reinterpret_cast<uint32_t*>(&r10_13) & 0x8000, "Inf", reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
                goto 0x140007d47;
            }
        }
    }
    if (*reinterpret_cast<uint16_t*>(&rdx6)) {
        addr_140007cec_24:
        *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx6) - 0x3ffc);
    } else {
        addr_140007dec_9:
        if (rax10) {
            *reinterpret_cast<uint32_t*>(&rdx6) = 0xfffffc05;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
            goto addr_140007df7_26;
        }
    }
    addr_140007cf1_27:
    rcx12 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax10) >> 3);
    addr_140007cf8_19:
    fun_140007000(rcx12, rdx6, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
    goto 0x140007d47;
    addr_140007df7_26:
    goto addr_140007cf1_27;
    addr_140007cdb_11:
    ecx17 = 0x3c01 - *reinterpret_cast<int16_t*>(&rdx6);
    rax10 = reinterpret_cast<struct s76*>(reinterpret_cast<uint64_t>(rax10) >> *reinterpret_cast<signed char*>(&ecx17));
    *reinterpret_cast<uint32_t*>(&rdx6) = *reinterpret_cast<uint32_t*>(&rdx6) + ecx17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
    goto addr_140007cec_24;
}

void fun_140007844() {
    int32_t r14d1;
    int32_t v2;
    int32_t edi3;
    void** rdx4;
    void*** r12_5;

    if (!r14d1 && v2 == edi3) {
    }
    rdx4 = *r12_5;
    fun_140005e90(0x78, rdx4, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
    goto 0x14000753d;
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

void fun_140007884() {
    uint32_t eax1;
    struct s77* rsi2;
    struct s78* rsi3;
    struct s79* rsi4;

    eax1 = rsi2->f1;
    if (*reinterpret_cast<signed char*>(&eax1) == 54) {
        if (rsi3->f2 != 52) 
            goto 0x140007dab;
        goto 0x140007607;
    } else {
        if (*reinterpret_cast<signed char*>(&eax1) == 51) {
            if (rsi4->f2 != 50) 
                goto "???";
            goto 0x140007607;
        } else {
            goto 0x140007607;
        }
    }
}

void fun_1400078ac() {
    uint32_t eax1;
    uint32_t v2;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) {
        __asm__("fld qword [rsp+0x20]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140006d10(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x14000753d;
    } else {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140006d10(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x14000753d;
    }
}

struct s80 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_1400078e4() {
    uint32_t eax1;
    struct s80* rsi2;

    eax1 = rsi2->f1;
    if (*reinterpret_cast<signed char*>(&eax1) == 0x68) {
        goto 0x140007607;
    } else {
        goto 0x140007607;
    }
}

struct s81 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_140007904() {
    uint32_t eax1;
    struct s81* rsi2;

    eax1 = rsi2->f1;
    if (*reinterpret_cast<signed char*>(&eax1) == 0x6c) {
        goto 0x140007607;
    } else {
        goto 0x140007607;
    }
}

void fun_140007924() {
    int64_t rcx1;
    int32_t v2;
    void** rax3;

    *reinterpret_cast<int32_t*>(&rcx1) = v2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    rax3 = fun_14000aef0(rcx1);
    fun_140005d90(rax3, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 0x70);
    goto 0x14000753d;
}

void fun_14000797a() {
    uint32_t eax1;
    uint32_t v2;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) {
        __asm__("fld qword [rsp+0x20]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140006e90(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x14000753d;
    } else {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140006e90(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x14000753d;
    }
}

void fun_1400079b2() {
    goto 0x140007607;
}

void fun_1400079e3() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x140007600;
    goto 0x140007607;
}

void fun_140007a00() {
    fun_140005a90(37, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
    goto 0x14000753d;
}

void fun_140007abd() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x140007600;
    goto 0x140007607;
}

void fun_140007ada() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x140007600;
    goto 0x140007607;
}

void fun_140007af7() {
    uint32_t r14d1;

    if (r14d1 <= 1) {
        goto 0x140007607;
    } else {
        goto 0x140007607;
    }
}

void fun_140007b13() {
    int32_t r14d1;
    uint32_t r14d2;

    if (r14d1) {
        if (r14d2 > 3) 
            goto 0x140007dab;
    } else {
        goto 0x140007607;
    }
}

void fun_140007b30() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) 
        goto 0x1400077cd; else 
        goto "???";
}

void fun_140007be0() {
}

void fun_140007c50() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140006db0(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x14000753d;
    } else {
        __asm__("fld qword [rsp+0x20]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140006db0(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x14000753d;
    }
}

void fun_140007c88() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) 
        goto 0x140007995; else 
        goto "???";
}

void fun_140009b4b() {
    int64_t rbx1;

    rbx1 = DeleteCriticalSection;
    rbx1(0x14000fb00);
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

void fun_14000a6d1() {
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

void fun_14000a720(signed char* rcx, struct s84* rdx) {
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

uint64_t fun_14000a9c0(signed char* rcx, uint16_t** rdx, uint64_t r8) {
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
    eax8 = fun_14000ae28();
    edi9 = eax8;
    eax10 = fun_14000ae30();
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 48 - 8 + 8 - 8 + 8);
    rsi12 = *r12_5;
    r13d13 = eax10;
    if (!rsi12) {
        addr_14000aa3f_2:
        return r14_4;
    } else {
        if (!rbx6) {
            rbp14 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp11) + 43);
            while (edx15 = *rsi12, eax16 = fun_14000a8e0(rbp14, *reinterpret_cast<uint16_t*>(&edx15), edi9, r13d13), rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax16 < 0) | reinterpret_cast<uint1_t>(eax16 == 0))) {
                r14_4 = r14_4 + static_cast<int64_t>(eax16);
                if (!*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp11) + (eax16 - 1) + 43)) 
                    goto addr_14000aab0_7;
                ++rsi12;
            }
        } else {
            if (rbp7) {
                do {
                    edx17 = *rsi12;
                    eax18 = fun_14000a8e0(rbx6, *reinterpret_cast<uint16_t*>(&edx17), edi9, r13d13);
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax18 < 0) | reinterpret_cast<uint1_t>(eax18 == 0))) 
                        goto addr_14000aa38_11;
                    rax19 = reinterpret_cast<void*>(static_cast<int64_t>(eax18));
                    rbx6 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rbx6) + reinterpret_cast<uint64_t>(rax19));
                    r14_4 = r14_4 + reinterpret_cast<uint64_t>(rax19);
                    if (!*(rbx6 - 1)) 
                        goto addr_14000aaa0_13;
                    ++rsi12;
                } while (rbp7 > r14_4);
                goto addr_14000aa90_15;
            } else {
                goto addr_14000aa90_15;
            }
        }
    }
    addr_14000aa38_11:
    r14_4 = 0xffffffffffffffff;
    goto addr_14000aa3f_2;
    addr_14000aab0_7:
    --r14_4;
    goto addr_14000aa3f_2;
    addr_14000aaa0_13:
    *r12_5 = reinterpret_cast<uint16_t*>(0);
    --r14_4;
    goto addr_14000aa3f_2;
    addr_14000aa90_15:
    *r12_5 = rsi12;
    goto addr_14000aa3f_2;
}

uint64_t fun_14000acb0(void** rcx, unsigned char** rdx, uint64_t r8, void** r9) {
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
        r13_5 = reinterpret_cast<void**>(0x14000fb74);
    }
    rsi8 = r8;
    fun_14000ae28();
    eax9 = fun_14000ae30();
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
            while (eax14 = fun_14000aac0(rsi13, reinterpret_cast<uint64_t>(rdx10) + r12_11, r14_12, r13_5), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax14 < 0) | reinterpret_cast<uint1_t>(eax14 == 0))) {
                rdx10 = *rbx7;
                r12_11 = r12_11 + static_cast<int64_t>(eax14);
            }
        } else {
            *reinterpret_cast<int32_t*>(&r12_11) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_11) + 4) = 0;
            if (rsi8) {
                do {
                    eax15 = fun_14000aac0(r14_6, rdx10, rsi8 - r12_11, r13_5);
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax15 < 0) | reinterpret_cast<uint1_t>(eax15 == 0))) 
                        goto addr_14000ad44_12;
                    rax16 = reinterpret_cast<uint64_t>(static_cast<int64_t>(eax15));
                    r14_6 = r14_6 + 2;
                    r12_11 = r12_11 + rax16;
                    rdx10 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(*rbx7) + rax16);
                    *rbx7 = rdx10;
                } while (rsi8 > r12_11);
            }
        }
    }
    addr_14000ad54_15:
    return r12_11;
    addr_14000ad44_12:
    if (rsi8 > r12_11 && !eax15) {
        *rbx7 = reinterpret_cast<unsigned char*>(0);
        goto addr_14000ad54_15;
    }
}

int64_t __C_specific_handler = 0x10456;

void fun_14000ae20() {
    goto __C_specific_handler;
}

int64_t fun_140004980() {
    int32_t edx1;
    int32_t edx2;

    if (edx1 == 3) 
        goto 0x1400049a0;
    if (!edx2) 
        goto 0x1400049a0;
    return 1;
}

void fun_14000afb0() {
    goto fun_140001410;
}

int64_t fun_1400013f0(void** rcx, void** rdx) {
    int32_t* rax3;
    int64_t rax4;

    rax3 = g14000c8a0;
    *rax3 = 0;
    rax4 = fun_140001180(rcx, rdx);
    return rax4;
}

int32_t* g14000c800 = reinterpret_cast<int32_t*>(0x14000b180);

void fun_1400049b0() {
    int32_t* rax1;
    int32_t edx2;
    int32_t edx3;

    rax1 = g14000c800;
    if (*rax1 != 2) {
        *rax1 = 2;
    }
    if (edx2 == 2) 
        goto 0x1400049e0;
    if (edx3 == 1) 
        goto 0x140004a20; else 
        goto "???";
}

int64_t fun_140004a40() {
    return 0;
}

void fun_140004b00() {
    goto 0x140004a8f;
}

void fun_1400051e0() {
    int64_t rax1;

    rax1 = fun_14000aee8(8);
    if (rax1 == 1) 
        goto 0x140005130; else 
        goto "???";
}

int64_t fun_1400053b0(int32_t ecx) {
    uint32_t eax2;

    eax2 = g14000f0e8;
    if (eax2) 
        goto 0x1400053d0;
    return 0;
}

struct s85 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f3c;
};

int64_t fun_140005530(struct s85* rcx) {
    if (rcx->f0 == 0x5a4d) {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx) + rcx->f3c) == 0x4550) 
            goto 0x140005550;
    }
    return 0;
}

struct s86 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
};

struct s87 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s88 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
};

struct s86* fun_140005560(struct s87* rcx, uint64_t rdx) {
    struct s88* rcx3;
    int64_t rax4;
    struct s86* rax5;
    uint32_t ecx6;
    int64_t rcx7;
    struct s86* r9_8;
    uint64_t r8_9;
    uint64_t rcx10;
    uint64_t rcx11;

    rcx3 = reinterpret_cast<struct s88*>(reinterpret_cast<int64_t>(rcx) + rcx->f3c);
    *reinterpret_cast<uint32_t*>(&rax4) = rcx3->f14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    rax5 = reinterpret_cast<struct s86*>(reinterpret_cast<int64_t>(rcx3) + rax4 + 24);
    ecx6 = rcx3->f6;
    if (!ecx6) {
        addr_1400055a5_2:
        *reinterpret_cast<int32_t*>(&rax5) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx7) = ecx6 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        r9_8 = reinterpret_cast<struct s86*>(reinterpret_cast<int64_t>(rax5) + (rcx7 + rcx7 * 4) * 8 + 40);
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
            rax5 = reinterpret_cast<struct s86*>(reinterpret_cast<int64_t>(rax5) + 40);
        } while (rax5 != r9_8);
        goto addr_1400055a5_2;
    }
    return rax5;
}

struct s89 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[16] pad24;
    int16_t f18;
};

void fun_1400055b0(void** rcx) {
    struct s0* rax2;
    struct s2* rdx3;
    struct s89* rax4;

    rax2 = fun_14000aef8(rcx);
    if (reinterpret_cast<uint64_t>(rax2) > 8) 
        goto 0x140005640;
    rdx3 = g14000c830;
    if (rdx3->f0 != 0x5a4d) 
        goto 0x14000562e;
    rax4 = reinterpret_cast<struct s89*>(rdx3->f3c + reinterpret_cast<uint64_t>(rdx3));
    if (rax4->f0 != 0x4550) 
        goto 0x14000562e;
    if (rax4->f18 != 0x20b) 
        goto 0x14000562e;
    if (!rax4->f6) 
        goto 0x140005640;
    goto 0x140005619;
}

void fun_140005850() {
    struct s2* r11_1;

    r11_1 = g14000c830;
    if (r11_1->f0 != 0x5a4d) 
        goto 0x140005872;
    if (*reinterpret_cast<int32_t*>(r11_1->f3c + reinterpret_cast<uint64_t>(r11_1)) == 0x4550) 
        goto 0x140005880; else 
        goto "???";
}

void fun_140007630(void** rcx) {
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
            addr_140007665_4:
        } else {
            if (r15d7 == 1) {
                *reinterpret_cast<uint32_t*>(&r9_3) = *reinterpret_cast<uint16_t*>(&r9_3);
                *reinterpret_cast<int32_t*>(&r9_3 + 4) = 0;
            } else {
                if (r15d8 == 5) {
                    *reinterpret_cast<uint32_t*>(&r9_3) = *reinterpret_cast<unsigned char*>(&r9_3);
                    *reinterpret_cast<int32_t*>(&r9_3 + 4) = 0;
                    goto addr_140007665_4;
                }
            }
        }
    }
    if (*reinterpret_cast<int32_t*>(&rcx) == 0x75) {
        fun_1400063a0(r9_3, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x14000753d;
    } else {
        fun_140005e90(rcx, r9_3, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x14000753d;
    }
}

void fun_1400076a8() {
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
            addr_1400076dd_4:
        } else {
            if (r15d6 == 1) {
                rcx2 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&rcx2)));
            } else {
                if (r15d7 == 5) {
                    rcx2 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&rcx2)));
                    goto addr_1400076dd_4;
                }
            }
        }
    }
    fun_1400063a0(rcx2, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
    goto 0x14000753d;
}

void fun_140007703() {
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
            eax7 = fun_14000af10(r12_4);
            rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
        } else {
            eax7 = fun_14000a780(r12_4, static_cast<int64_t>(v6));
            rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
        }
        fun_140005af0(r12_4, eax7, reinterpret_cast<int64_t>(rsp8) + 0x70, r9_9, __return_address());
    } else {
        fun_140005d90(rcx1, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x14000753d;
    }
}

void fun_140007d04() {
}

void fun_140007942() {
    uint32_t eax1;
    uint32_t v2;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) 
        goto 0x140007c64; else 
        goto "???";
}

void fun_1400079c9() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x140007600;
    goto 0x140007607;
}

void fun_140007a17() {
    int32_t r14d1;
    struct s43* rax2;
    unsigned char* rdx3;
    void** eax4;

    if (r14d1) 
        goto 0x140007600;
    rax2 = fun_14000aec8();
    rdx3 = rax2->f8;
    eax4 = fun_14000ac40(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 94, rdx3, 16, reinterpret_cast<int64_t>(__zero_stack_offset()) + 96, __return_address());
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax4 == 0))) {
    }
    goto 0x140007600;
}

void fun_140007a85() {
    int64_t r10_1;
    uint32_t r14d2;
    int32_t eax3;
    int32_t* r12_4;
    int32_t* r10_5;
    int32_t r14d6;

    if (!r10_1) 
        goto 0x140007b01;
    if (r14d2 & 0xfffffffd) {
        goto 0x140007607;
    } else {
        eax3 = *r12_4;
        *r10_5 = eax3;
        if (eax3 < 0) {
            if (r14d6) {
                goto 0x140007607;
            }
        }
        goto 0x140007607;
    }
}

void fun_140009b30() {
    int32_t tmp32_1;

    tmp32_1 = g14000faf0;
    g14000faf0 = 3;
    if (tmp32_1 == 2) 
        goto 0x140009b50;
    return;
}

int64_t fun_14000a8a0() {
    int64_t rax1;

    rax1 = g14000fb60;
    return rax1;
}

int64_t fun_14000adc0(unsigned char* rcx, uint64_t rdx, void** r8) {
    void** rbx4;
    int32_t eax5;

    rbx4 = r8;
    fun_14000ae30();
    fun_14000ae28();
    if (!rbx4) {
        rbx4 = reinterpret_cast<void**>(0x14000fb70);
    }
    eax5 = fun_14000aac0(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 + 62, rcx, rdx, rbx4);
    return static_cast<int64_t>(eax5);
}

void fun_1400050e0(uint32_t** rcx) {
    if ((**rcx & 0x20ffffff) == 0x20474343) 
        goto 0x1400051c0; else 
        goto "???";
}

struct s90 {
    int64_t f0;
    int64_t f8;
};

struct s90* g14000b160 = reinterpret_cast<struct s90*>(0x14000afe0);

void fun_1400048a0() {
    struct s90* rax1;
    int64_t rax2;
    struct s90* rax3;

    rax1 = g14000b160;
    rax2 = rax1->f0;
    if (rax2) {
        do {
            rax2();
            rax3 = g14000b160;
            rax2 = rax3->f8;
            g14000b160 = reinterpret_cast<struct s90*>(&rax3->f8);
        } while (rax2);
    }
    return;
}

void fun_140004a50(uint32_t* rcx) {
    int64_t rax2;

    __asm__("movaps [rsp+0x40], xmm6");
    __asm__("movaps [rsp+0x50], xmm7");
    __asm__("movaps [rsp+0x60], xmm8");
    if (*rcx > 6) {
        goto 0x140004a8f;
    } else {
        *reinterpret_cast<uint32_t*>(&rax2) = *rcx;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
        goto *reinterpret_cast<int32_t*>(0x14000c2c4 + rax2 * 4) + 0x14000c2c4;
    }
}

void fun_140004b10() {
    goto 0x140004a8f;
}

void fun_140007c18() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) 
        goto 0x1400078c7; else 
        goto "???";
}

void fun_14000af20() {
    goto WideCharToMultiByte;
}

void fun_14000a610() {
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
    rax1 = fun_140009b80(1);
    if (!rax1) 
        goto 0x14000a6c6;
    rax2 = rbx3;
    rcx4 = rbx5 >> 32;
    edx6 = *reinterpret_cast<uint32_t*>(&rcx4) & 0xfffff;
    ecx7 = *reinterpret_cast<uint32_t*>(&rcx4) >> 20 & 0x7ff;
    if (ecx7) {
        edx6 = edx6 | 0x100000;
    }
    if (!ebx8) 
        goto 0x14000a6d8;
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
        goto 0x14000a6f6; else 
        goto "???";
}

void fun_140001440() {
    return;
}

void fun_140004b20() {
    goto 0x140004a8f;
}

void fun_14000af28() {
    goto VirtualQuery;
}

void fun_140004b30() {
    goto 0x140004a8f;
}

void fun_14000af30() {
    goto VirtualProtect;
}

void fun_14000af38() {
    goto TlsGetValue;
}

void fun_14000af40() {
    goto Sleep;
}

void fun_14000af48() {
    goto SetUnhandledExceptionFilter;
}

void fun_14000af50() {
    goto MultiByteToWideChar;
}

void fun_14000af58() {
    goto LeaveCriticalSection;
}

void fun_14000af60() {
    goto IsDBCSLeadByteEx;
}

void fun_14000af68() {
    goto InitializeCriticalSection;
}

void fun_14000af70() {
    goto GetLastError;
}

void fun_14000af78() {
    goto EnterCriticalSection;
}

void fun_14000af80() {
    goto DeleteCriticalSection;
}
