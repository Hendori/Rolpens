
int64_t __set_app_type = 0xe4c4;

void fun_140008208(int64_t rcx) {
    goto __set_app_type;
}

int32_t** g14000a790 = reinterpret_cast<int32_t**>(0x14000e294);

int32_t* fun_140007b70(int64_t rcx) {
    int32_t** rax2;

    rax2 = g14000a790;
    return *rax2;
}

int32_t** g14000a780 = reinterpret_cast<int32_t**>(0x14000e284);

int32_t* fun_140007b80(int64_t rcx) {
    int32_t** rax2;

    rax2 = g14000a780;
    return *rax2;
}

int64_t fun_140001d30(int64_t rcx) {
    return 0;
}

struct s0 {
    signed char[1] pad1;
    void** f1;
};

int64_t strlen = 0xe5ca;

struct s0* fun_1400082b8(void** rcx, ...) {
    goto strlen;
}

int64_t malloc = 0xe596;

void** fun_140008290(void** rcx, void** rdx, ...) {
    goto malloc;
}

int64_t memcpy = 0xe5a0;

void fun_140008298(void** rcx, void** rdx, void** r8) {
    goto memcpy;
}

int32_t g14000d030;

int64_t* g14000a720 = reinterpret_cast<int64_t*>(0x140008380);

uint64_t fun_140008240(int64_t rcx);

void fun_140001c60();

int64_t fun_140001d10(void** rcx, void** rdx, void** r8) {
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

    *reinterpret_cast<int32_t*>(&rax4) = g14000d030;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rax4)) {
        return rax4;
    }
    g14000d030 = 1;
    rdx5 = g14000a720;
    rax6 = *rdx5;
    ecx7 = *reinterpret_cast<int32_t*>(&rax6);
    if (*reinterpret_cast<int32_t*>(&rax6) != -1) 
        goto addr_140001cb7_5;
    *reinterpret_cast<int32_t*>(&rax8) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    do {
        *reinterpret_cast<int32_t*>(&r8_9) = static_cast<int32_t>(rax8 + 1);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
        ecx7 = *reinterpret_cast<int32_t*>(&rax8);
        rax8 = r8_9;
    } while (rdx5[r8_9]);
    addr_140001cb7_5:
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
    rax14 = fun_140008240(fun_140001c60);
    *reinterpret_cast<uint32_t*>(&rax15) = *reinterpret_cast<uint32_t*>(&rax14) - (*reinterpret_cast<uint32_t*>(&rax14) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax14) < *reinterpret_cast<uint32_t*>(&rax14) + reinterpret_cast<uint1_t>(rax14 < 1)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax15) + 4) = 0;
    return rax15;
}

int64_t fun_140001a80(int32_t ecx);

int64_t fun_140001540(int64_t rcx);

int64_t fun_140008350(void** rcx, void** rdx, void** r8) {
    fun_140001d10(rcx, rdx, r8);
    fun_140001a80(19);
    fun_140001540(19);
    return 0;
}

int64_t _amsg_exit = 0xe4ea;

void fun_140008218(void** rcx) {
    goto _amsg_exit;
}

int64_t _initterm = 0xe522;

void fun_140008230(void** rcx, void** rdx) {
    goto _initterm;
}

int64_t fun_140001410(int64_t rcx) {
    uint64_t rax2;
    int64_t rax3;

    rax2 = fun_140008240(rcx);
    *reinterpret_cast<uint32_t*>(&rax3) = *reinterpret_cast<uint32_t*>(&rax2) - (*reinterpret_cast<uint32_t*>(&rax2) + reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax2) < *reinterpret_cast<uint32_t*>(&rax2) + reinterpret_cast<uint1_t>(rax2 < 1)));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    return rax3;
}

void*** fun_140008200();

void** fun_140007c80(int32_t ecx, void** rdx, void** r8, void** r9, int64_t a5) {
    void*** rax6;
    int64_t rcx7;

    rax6 = fun_140008200();
    *reinterpret_cast<int32_t*>(&rcx7) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    return reinterpret_cast<int64_t>(rax6) + (rcx7 + rcx7 * 2 << 4);
}

int64_t fprintf = 0xe564;

void fun_140008268(void** rcx, int64_t rdx, int64_t r8, int32_t* r9, int64_t a5) {
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

struct s2* g14000a730 = reinterpret_cast<struct s2*>(0x140000000);

struct s3 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
    signed char[2] pad24;
    int16_t f18;
};

struct s1* fun_140002a10(void** rcx, void** rdx, void** r8, void** r9) {
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

    rdx5 = g14000a730;
    *reinterpret_cast<int32_t*>(&rax6) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    if (rdx5->f0 == 0x5a4d && ((r8_7 = reinterpret_cast<struct s3*>(rdx5->f3c + reinterpret_cast<uint64_t>(rdx5)), r8_7->f0 == 0x4550) && r8_7->f18 == 0x20b)) {
        *reinterpret_cast<uint32_t*>(&rax8) = r8_7->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
        rcx9 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rcx) - reinterpret_cast<uint64_t>(rdx5));
        edx10 = r8_7->f6;
        rax6 = reinterpret_cast<struct s1*>(reinterpret_cast<uint64_t>(r8_7) + reinterpret_cast<uint64_t>(rax8) + 24);
        if (!edx10) {
            addr_140002a85_3:
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
            goto addr_140002a85_3;
        }
    }
    return rax6;
}

struct s4 {
    int32_t f0;
    signed char[20] pad24;
    int16_t f18;
};

struct s2* fun_140002b40(void** rcx, void** rdx, void** r8, void** r9) {
    struct s2* rax5;
    struct s2* r8_6;
    struct s4* rdx7;

    rax5 = g14000a730;
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

void fun_140008280(int64_t rcx, void** rdx, void** r8, void** r9);

void fun_1400082c8();

void fun_140008250();

int32_t g14000d0a4;

struct s5 {
    void** f0;
    signed char[23] pad24;
    void** f18;
};

struct s5* g14000d0a8;

struct s6 {
    void** f0;
    signed char[31] pad32;
    struct s1* f20;
};

int64_t VirtualQuery = 0xe430;

int64_t VirtualProtect = 0xe41e;

int64_t GetLastError = 0xe37c;

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

int32_t g14000d0a0;

uint32_t fun_140002a90(void** rcx, void** rdx, void** r8, void** r9);

int64_t fun_140002cd0(void** rcx, ...);

struct s10 {
    void* f0;
    uint32_t f4;
    uint32_t f8;
};

struct s10* g14000a740 = reinterpret_cast<struct s10*>(0x14000adc0);

struct s10* g14000a750 = reinterpret_cast<struct s10*>(0x14000adc0);

struct s11 {
    signed char[32] pad32;
    void** f20;
    signed char[15] pad48;
    void** f30;
};

void fun_140001f90(void** rcx, ...);

struct s12 {
    signed char[32] pad32;
    int32_t f20;
    signed char[4] pad40;
    void** f28;
    signed char[47] pad88;
    int64_t f58;
};

int64_t g14000d0b0;

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

void fun_140001f20(void** rcx, void** rdx, void** r8, void** r9) {
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
    rax7 = fun_140007c80(2, rdx, r8, r9, v6);
    r9_8 = rax7;
    fun_140008280("Mingw-w64 runtime failure:\n", 1, 27, r9_8);
    rax10 = fun_140007c80(2, 1, 27, r9_8, v9);
    rdx11 = rcx;
    r8_12 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rsp5) + 88);
    fun_1400082c8();
    fun_140008250();
    rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 - 8 - 8 - 80);
    rbx14 = reinterpret_cast<void*>(static_cast<int64_t>(g14000d0a4));
    r12_15 = rax10;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx14) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx14) == 0)) {
        while (1) {
            *reinterpret_cast<int32_t*>(&rbx14) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx14) + 4) = 0;
            addr_140001fe8_4:
            rax16 = fun_140002a10(r12_15, rdx11, r8_12, r9_8);
            rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
            if (!rax16) 
                break;
            rax18 = g14000d0a8;
            rbx14 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx14) + reinterpret_cast<uint64_t>(rbx14) * 4 << 3);
            rax19 = reinterpret_cast<struct s6*>(reinterpret_cast<uint64_t>(rax18) + reinterpret_cast<uint64_t>(rbx14));
            rax19->f20 = rax16;
            rax19->f0 = reinterpret_cast<void**>(0);
            rax20 = fun_140002b40(r12_15, rdx11, r8_12, r9_8);
            *reinterpret_cast<int32_t*>(&rdx21) = rax16->fc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx21) + 4) = 0;
            rax22 = g14000d0a8;
            *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax22) + reinterpret_cast<uint64_t>(rbx14) + 24) = reinterpret_cast<uint64_t>(rax20) + rdx21;
            rax23 = reinterpret_cast<int64_t>(VirtualQuery());
            rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8 - 8 + 8);
            if (!rax23) 
                goto addr_1400020c7_6;
            *reinterpret_cast<int32_t*>(&rax24) = v25;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0;
            if (!(static_cast<uint32_t>(rax24 - 64) & 0xffffffbf)) 
                goto addr_14000205e_8;
            if (!(static_cast<uint32_t>(rax24 - 4) & 0xfffffffb)) 
                goto addr_14000205e_8;
            *reinterpret_cast<int32_t*>(&r8_12) = 4;
            *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
            if (*reinterpret_cast<int32_t*>(&rax24) != 2) {
                *reinterpret_cast<int32_t*>(&r8_12) = 64;
                *reinterpret_cast<int32_t*>(&r8_12 + 4) = 0;
            }
            tmp64_26 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbx14) + reinterpret_cast<uint64_t>(g14000d0a8));
            *reinterpret_cast<void***>(tmp64_26 + 8) = v27;
            r9_8 = tmp64_26;
            *reinterpret_cast<void***>(tmp64_26 + 16) = v28;
            eax29 = reinterpret_cast<int32_t>(VirtualProtect());
            rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
            if (eax29) 
                goto addr_14000205e_8;
            eax30 = reinterpret_cast<int32_t>(GetLastError());
            *reinterpret_cast<int32_t*>(&rdx11) = eax30;
            *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0;
            fun_140001f20("  VirtualProtect failed with code 0x%x", rdx11, r8_12, r9_8);
            rsp13 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8 - 8 + 8);
        }
    } else {
        rax31 = g14000d0a8;
        *reinterpret_cast<int32_t*>(&r9_8) = 0;
        rax32 = reinterpret_cast<struct s7*>(&rax31->f18);
        while ((r8_12 = rax32->f0, reinterpret_cast<unsigned char>(r8_12) > reinterpret_cast<unsigned char>(r12_15)) || (*reinterpret_cast<int32_t*>(&rdx11) = rax32->f8->f8, *reinterpret_cast<int32_t*>(&rdx11 + 4) = 0, r8_12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_12) + reinterpret_cast<unsigned char>(rdx11)), reinterpret_cast<unsigned char>(r12_15) >= reinterpret_cast<unsigned char>(r8_12))) {
            *reinterpret_cast<int32_t*>(&r9_8) = *reinterpret_cast<int32_t*>(&r9_8) + 1;
            *reinterpret_cast<int32_t*>(&r9_8 + 4) = 0;
            rax32 = reinterpret_cast<struct s7*>(reinterpret_cast<uint64_t>(rax32) + 40);
            if (*reinterpret_cast<int32_t*>(&r9_8) == *reinterpret_cast<int32_t*>(&rbx14)) 
                goto addr_140001fe8_4;
        }
        goto addr_140002065_17;
    }
    addr_1400020e2_18:
    fun_140001f20("Address %p has no image-section", r12_15, r8_12, r9_8);
    *reinterpret_cast<int32_t*>(&rsi33) = g14000d0a0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi33) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rsi33)) 
        goto addr_14000211f_20;
    g14000d0a0 = 1;
    fun_140002a90("Address %p has no image-section", r12_15, r8_12, r9_8);
    rax34 = fun_140002cd0("Address %p has no image-section", "Address %p has no image-section");
    rdi35 = g14000a740;
    rbx36 = g14000a750;
    g14000d0a4 = 0;
    rsp37 = reinterpret_cast<struct s11*>(reinterpret_cast<int64_t>(rsp17) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 - rax34);
    g14000d0a8 = reinterpret_cast<struct s5*>(&rsp37->f30);
    rax38 = reinterpret_cast<uint64_t>(rdi35) - reinterpret_cast<uint64_t>(rbx36);
    if (reinterpret_cast<int64_t>(rax38) <= reinterpret_cast<int64_t>(7)) 
        goto addr_14000211f_20;
    if (reinterpret_cast<int64_t>(rax38) > reinterpret_cast<int64_t>(11)) {
        if (rbx36->f0) 
            goto addr_1400023c8_24;
        eax39 = rbx36->f4;
        if (!(eax39 | rbx36->f8)) 
            goto addr_14000232e_26;
    } else {
        addr_140002195_27:
        if (rbx36->f0) 
            goto addr_1400023c8_24; else 
            goto addr_14000219f_28;
    }
    addr_1400021a2_29:
    if (eax39) {
        addr_1400023c8_24:
        if (reinterpret_cast<uint64_t>(rbx36) >= reinterpret_cast<uint64_t>(rdi35)) {
            addr_14000211f_20:
            goto v40;
        } else {
            r14_41 = g14000a730;
            do {
                *reinterpret_cast<uint32_t*>(&r12_42) = rbx36->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_42) + 4) = 0;
                rbx36 = reinterpret_cast<struct s10*>(&rbx36->f8);
                r12_43 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r12_42) + reinterpret_cast<uint64_t>(r14_41));
                r13d44 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(rbx36->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_43)));
                rsp45 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                *rsp45 = 0x1400023fa;
                fun_140001f90(r12_43, r12_43);
                rsp37 = reinterpret_cast<struct s11*>(rsp45 + 1);
                *reinterpret_cast<void***>(r12_43) = r13d44;
            } while (reinterpret_cast<uint64_t>(rbx36) < reinterpret_cast<uint64_t>(rdi35));
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rdx46) = rbx36->f8;
        *reinterpret_cast<int32_t*>(&rdx46 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx46) != 1) {
            addr_140002428_34:
            rsp47 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
            *rsp47 = 0x140002434;
            fun_140001f20("  Unknown pseudo relocation protocol version %d.\n", rdx46, r8_12, r9_8);
            rsp48 = reinterpret_cast<struct s12*>(rsp47 + 1 - 11);
            rax49 = g14000d0b0;
            if (rax49) {
                rdi35->f0 = rsi33->f0;
                rdi50 = reinterpret_cast<struct s13*>(&rdi35->f4);
                rsi51 = reinterpret_cast<struct s14*>(&rsi33->f4);
                rsp48->f20 = 0x4000a280;
                rsp48->f28 = rdx46;
                rdi50->f0 = rsi51->f0;
                rdi52 = reinterpret_cast<struct s15*>(&rdi50->f4);
                rsi53 = reinterpret_cast<struct s16*>(&rsi51->f4);
                rdi52->f0 = rsi53->f0;
                rdi52->f4 = rsi53->f4;
                rsp54 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp48) - 8);
                *rsp54 = 0x14000247b;
                rax49(&rsp48->f20);
                rsp48 = reinterpret_cast<struct s12*>(rsp54 + 1);
                goto addr_14000247c_48;
            }
        } else {
            rbx55 = rbx36 + 1;
            if (reinterpret_cast<uint64_t>(rbx55) >= reinterpret_cast<uint64_t>(rdi35)) 
                goto addr_14000211f_20;
            r15_56 = g14000a730;
            do {
                addr_140002233_51:
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
                        goto addr_1400023b1_55;
                    if (reinterpret_cast<signed char>(r13_65) <= reinterpret_cast<signed char>(0xffffffff7fffffff)) 
                        goto addr_140002414_57;
                    if (reinterpret_cast<signed char>(r13_65) > reinterpret_cast<signed char>(0xffffffff)) 
                        goto addr_140002414_57;
                    addr_1400023b1_55:
                    rsp66 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                    *rsp66 = 0x1400023b9;
                    fun_140001f90(r14_61);
                    rsp37 = reinterpret_cast<struct s11*>(rsp66 + 1);
                    *reinterpret_cast<void***>(r14_61) = r13_65;
                    continue;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rdx46) > 32) {
                        if (*reinterpret_cast<uint32_t*>(&rdx46) != 64) 
                            goto addr_140002408_61;
                        r13_65 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_61)) - reinterpret_cast<uint64_t>(rcx60) + reinterpret_cast<unsigned char>(r9_8));
                        if (*reinterpret_cast<uint32_t*>(&r8_58) & 0xc0) 
                            goto addr_140002365_63;
                        if (reinterpret_cast<signed char>(r13_65) >= reinterpret_cast<signed char>(0)) 
                            goto addr_140002414_57;
                        addr_140002365_63:
                        rsp67 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                        *rsp67 = 0x14000236d;
                        fun_140001f90(r14_61);
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
                                goto addr_14000221b_69;
                            if (reinterpret_cast<signed char>(r13_65) < reinterpret_cast<signed char>(0xffffffffffffff80)) 
                                goto addr_140002414_57;
                            if (reinterpret_cast<signed char>(r13_65) > reinterpret_cast<signed char>(0xff)) 
                                goto addr_140002414_57;
                            addr_14000221b_69:
                            rsp69 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                            *rsp69 = 0x140002223;
                            fun_140001f90(r14_61);
                            rsp37 = reinterpret_cast<struct s11*>(rsp69 + 1);
                            *reinterpret_cast<void***>(r14_61) = r13_65;
                            continue;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rdx46) != 16) 
                                goto addr_140002408_61;
                            *reinterpret_cast<uint32_t*>(&rax70) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_61));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax70) + 4) = 0;
                            if (*reinterpret_cast<int16_t*>(&rax70) >= 0) 
                                goto addr_14000227c_74;
                        }
                    }
                }
                rax70 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax70) | 0xffffffffffff0000);
                addr_14000227c_74:
                r13_65 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax70) - reinterpret_cast<uint64_t>(rcx60) + reinterpret_cast<unsigned char>(r9_8));
                if (*reinterpret_cast<uint32_t*>(&r8_58) & 0xc0) 
                    goto addr_1400022a6_76;
                if (reinterpret_cast<signed char>(r13_65) < reinterpret_cast<signed char>(0xffffffffffff8000)) 
                    goto addr_140002414_57;
                if (reinterpret_cast<signed char>(r13_65) > reinterpret_cast<signed char>(0xffff)) 
                    goto addr_140002414_57;
                addr_1400022a6_76:
                ++rbx55;
                rsp71 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                *rsp71 = 0x1400022b2;
                fun_140001f90(r14_61);
                rsp37 = reinterpret_cast<struct s11*>(rsp71 + 1);
                *reinterpret_cast<void***>(r14_61) = r13_65;
                if (reinterpret_cast<uint64_t>(rbx55) < reinterpret_cast<uint64_t>(rdi35)) 
                    goto addr_140002233_51; else 
                    goto addr_1400022bf_79;
                ++rbx55;
            } while (reinterpret_cast<uint64_t>(rbx55) < reinterpret_cast<uint64_t>(rdi35));
        }
    }
    addr_1400022c0_81:
    edx72 = g14000d0a4;
    if (!(reinterpret_cast<uint1_t>(edx72 < 0) | reinterpret_cast<uint1_t>(edx72 == 0))) {
        rdi73 = VirtualProtect;
        *reinterpret_cast<int32_t*>(&rbx74) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx74) + 4) = 0;
        do {
            rax75 = g14000d0a8;
            rax76 = reinterpret_cast<struct s17*>(reinterpret_cast<uint64_t>(rax75) + reinterpret_cast<uint64_t>(rbx74));
            if (rax76->f0) {
                rdx77 = rax76->f10;
                rcx78 = rax76->f8;
                rsp79 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
                *rsp79 = 0x1400022ff;
                rdi73(rcx78, rdx77);
                rsp37 = reinterpret_cast<struct s11*>(rsp79 + 1);
            }
            *reinterpret_cast<int32_t*>(&rsi33) = *reinterpret_cast<int32_t*>(&rsi33) + 1;
            rbx74 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx74) + 40);
            less80 = *reinterpret_cast<int32_t*>(&rsi33) < g14000d0a4;
        } while (less80);
        goto addr_14000211f_20;
    }
    addr_14000247c_48:
    goto rsp48->f58;
    addr_140002414_57:
    rsp37->f20 = r13_65;
    r8_12 = r14_61;
    rsp81 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
    *rsp81 = 0x140002428;
    fun_140001f20("%d bit pseudo relocation at %p out of range, targeting %p, yielding the value %p.\n", rdx46, r8_12, r9_8);
    rsp37 = reinterpret_cast<struct s11*>(rsp81 + 1);
    goto addr_140002428_34;
    addr_140002408_61:
    rsp82 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp37) - 8);
    *rsp82 = 0x140002414;
    fun_140001f20("  Unknown pseudo relocation bit size %d.\n", rdx46, r8_58, r9_8);
    rsp37 = reinterpret_cast<struct s11*>(rsp82 + 1);
    goto addr_140002414_57;
    addr_1400022bf_79:
    goto addr_1400022c0_81;
    addr_14000232e_26:
    ++rbx36;
    goto addr_140002195_27;
    addr_14000219f_28:
    eax39 = rbx36->f4;
    goto addr_1400021a2_29;
    addr_1400020c7_6:
    rax83 = g14000d0a8;
    *reinterpret_cast<int32_t*>(&rdx84) = rax16->f8;
    *reinterpret_cast<int32_t*>(&rdx84 + 4) = 0;
    r8_12 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax83) + reinterpret_cast<uint64_t>(rbx14) + 24);
    fun_140001f20("  VirtualQuery failed for %d bytes at address %p", rdx84, r8_12, r9_8);
    rsp17 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp13) - 8 + 8);
    goto addr_1400020e2_18;
    addr_14000205e_8:
    tmp32_85 = g14000d0a4 + 1;
    g14000d0a4 = tmp32_85;
    addr_140002065_17:
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

void fun_140001f90(void** rcx, ...) {
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
    rbx3 = reinterpret_cast<void*>(static_cast<int64_t>(g14000d0a4));
    r12_4 = rcx;
    if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx3) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbx3) == 0)) {
        while (1) {
            *reinterpret_cast<int32_t*>(&rbx3) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx3) + 4) = 0;
            addr_140001fe8_3:
            rax8 = fun_140002a10(r12_4, rdx5, r8_6, r9_7);
            rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
            if (!rax8) 
                break;
            rax10 = g14000d0a8;
            rbx3 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx3) + reinterpret_cast<uint64_t>(rbx3) * 4 << 3);
            rax11 = reinterpret_cast<struct s18*>(reinterpret_cast<uint64_t>(rax10) + reinterpret_cast<uint64_t>(rbx3));
            rax11->f20 = rax8;
            rax11->f0 = reinterpret_cast<void**>(0);
            rax12 = fun_140002b40(r12_4, rdx5, r8_6, r9_7);
            *reinterpret_cast<int32_t*>(&rdx13) = rax8->fc;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx13) + 4) = 0;
            rax14 = g14000d0a8;
            *reinterpret_cast<uint64_t*>(reinterpret_cast<uint64_t>(rax14) + reinterpret_cast<uint64_t>(rbx3) + 24) = reinterpret_cast<uint64_t>(rax12) + rdx13;
            rax15 = reinterpret_cast<int64_t>(VirtualQuery());
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8 - 8 + 8);
            if (!rax15) 
                goto addr_1400020c7_5;
            *reinterpret_cast<int32_t*>(&rax16) = v17;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax16) + 4) = 0;
            if (!(static_cast<uint32_t>(rax16 - 64) & 0xffffffbf)) 
                goto addr_14000205e_7;
            if (!(static_cast<uint32_t>(rax16 - 4) & 0xfffffffb)) 
                goto addr_14000205e_7;
            *reinterpret_cast<int32_t*>(&r8_6) = 4;
            *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
            if (*reinterpret_cast<int32_t*>(&rax16) != 2) {
                *reinterpret_cast<int32_t*>(&r8_6) = 64;
                *reinterpret_cast<int32_t*>(&r8_6 + 4) = 0;
            }
            tmp64_18 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rbx3) + reinterpret_cast<uint64_t>(g14000d0a8));
            *reinterpret_cast<void***>(tmp64_18 + 8) = v19;
            r9_7 = tmp64_18;
            *reinterpret_cast<void***>(tmp64_18 + 16) = v20;
            eax21 = reinterpret_cast<int32_t>(VirtualProtect());
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
            if (eax21) 
                goto addr_14000205e_7;
            eax22 = reinterpret_cast<int32_t>(GetLastError());
            *reinterpret_cast<int32_t*>(&rdx5) = eax22;
            *reinterpret_cast<int32_t*>(&rdx5 + 4) = 0;
            fun_140001f20("  VirtualProtect failed with code 0x%x", rdx5, r8_6, r9_7);
            rsp2 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8 - 8 + 8);
        }
    } else {
        rax23 = g14000d0a8;
        *reinterpret_cast<int32_t*>(&r9_7) = 0;
        rax24 = reinterpret_cast<struct s7*>(&rax23->f18);
        while ((r8_6 = rax24->f0, reinterpret_cast<unsigned char>(r8_6) > reinterpret_cast<unsigned char>(r12_4)) || (*reinterpret_cast<int32_t*>(&rdx5) = rax24->f8->f8, *reinterpret_cast<int32_t*>(&rdx5 + 4) = 0, r8_6 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_6) + reinterpret_cast<unsigned char>(rdx5)), reinterpret_cast<unsigned char>(r12_4) >= reinterpret_cast<unsigned char>(r8_6))) {
            *reinterpret_cast<int32_t*>(&r9_7) = *reinterpret_cast<int32_t*>(&r9_7) + 1;
            *reinterpret_cast<int32_t*>(&r9_7 + 4) = 0;
            rax24 = reinterpret_cast<struct s7*>(reinterpret_cast<uint64_t>(rax24) + 40);
            if (*reinterpret_cast<int32_t*>(&r9_7) == *reinterpret_cast<int32_t*>(&rbx3)) 
                goto addr_140001fe8_3;
        }
        goto addr_140002065_16;
    }
    addr_1400020e2_17:
    fun_140001f20("Address %p has no image-section", r12_4, r8_6, r9_7);
    *reinterpret_cast<int32_t*>(&rsi25) = g14000d0a0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi25) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rsi25)) 
        goto addr_14000211f_19;
    g14000d0a0 = 1;
    fun_140002a90("Address %p has no image-section", r12_4, r8_6, r9_7);
    rax26 = fun_140002cd0("Address %p has no image-section", "Address %p has no image-section");
    rdi27 = g14000a740;
    rbx28 = g14000a750;
    g14000d0a4 = 0;
    rsp29 = reinterpret_cast<struct s20*>(reinterpret_cast<int64_t>(rsp9) - 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 - rax26);
    g14000d0a8 = reinterpret_cast<struct s5*>(&rsp29->f30);
    rax30 = reinterpret_cast<uint64_t>(rdi27) - reinterpret_cast<uint64_t>(rbx28);
    if (reinterpret_cast<int64_t>(rax30) <= reinterpret_cast<int64_t>(7)) 
        goto addr_14000211f_19;
    if (reinterpret_cast<int64_t>(rax30) > reinterpret_cast<int64_t>(11)) {
        if (rbx28->f0) 
            goto addr_1400023c8_23;
        eax31 = rbx28->f4;
        if (!(eax31 | rbx28->f8)) 
            goto addr_14000232e_25;
    } else {
        addr_140002195_26:
        if (rbx28->f0) 
            goto addr_1400023c8_23; else 
            goto addr_14000219f_27;
    }
    addr_1400021a2_28:
    if (eax31) {
        addr_1400023c8_23:
        if (reinterpret_cast<uint64_t>(rbx28) >= reinterpret_cast<uint64_t>(rdi27)) {
            addr_14000211f_19:
            goto v32;
        } else {
            r14_33 = g14000a730;
            do {
                *reinterpret_cast<uint32_t*>(&r12_34) = rbx28->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_34) + 4) = 0;
                rbx28 = reinterpret_cast<struct s10*>(&rbx28->f8);
                r12_35 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r12_34) + reinterpret_cast<uint64_t>(r14_33));
                r13d36 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(rbx28->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_35)));
                rsp37 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                *rsp37 = 0x1400023fa;
                fun_140001f90(r12_35, r12_35);
                rsp29 = reinterpret_cast<struct s20*>(rsp37 + 1);
                *reinterpret_cast<void***>(r12_35) = r13d36;
            } while (reinterpret_cast<uint64_t>(rbx28) < reinterpret_cast<uint64_t>(rdi27));
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rdx38) = rbx28->f8;
        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx38) != 1) {
            addr_140002428_33:
            rsp39 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
            *rsp39 = 0x140002434;
            fun_140001f20("  Unknown pseudo relocation protocol version %d.\n", rdx38, r8_6, r9_7);
            rsp40 = reinterpret_cast<struct s21*>(rsp39 + 1 - 11);
            rax41 = g14000d0b0;
            if (rax41) {
                rdi27->f0 = rsi25->f0;
                rdi42 = reinterpret_cast<struct s13*>(&rdi27->f4);
                rsi43 = reinterpret_cast<struct s22*>(&rsi25->f4);
                rsp40->f20 = 0x4000a280;
                rsp40->f28 = rdx38;
                rdi42->f0 = rsi43->f0;
                rdi44 = reinterpret_cast<struct s15*>(&rdi42->f4);
                rsi45 = reinterpret_cast<struct s23*>(&rsi43->f4);
                rdi44->f0 = rsi45->f0;
                rdi44->f4 = rsi45->f4;
                rsp46 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp40) - 8);
                *rsp46 = 0x14000247b;
                rax41(&rsp40->f20);
                rsp40 = reinterpret_cast<struct s21*>(rsp46 + 1);
                goto addr_14000247c_47;
            }
        } else {
            rbx47 = rbx28 + 1;
            if (reinterpret_cast<uint64_t>(rbx47) >= reinterpret_cast<uint64_t>(rdi27)) 
                goto addr_14000211f_19;
            r15_48 = g14000a730;
            do {
                addr_140002233_50:
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
                        goto addr_1400023b1_54;
                    if (reinterpret_cast<signed char>(r13_57) <= reinterpret_cast<signed char>(0xffffffff7fffffff)) 
                        goto addr_140002414_56;
                    if (reinterpret_cast<signed char>(r13_57) > reinterpret_cast<signed char>(0xffffffff)) 
                        goto addr_140002414_56;
                    addr_1400023b1_54:
                    rsp58 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                    *rsp58 = 0x1400023b9;
                    fun_140001f90(r14_53);
                    rsp29 = reinterpret_cast<struct s20*>(rsp58 + 1);
                    *reinterpret_cast<void***>(r14_53) = r13_57;
                    continue;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rdx38) > 32) {
                        if (*reinterpret_cast<uint32_t*>(&rdx38) != 64) 
                            goto addr_140002408_60;
                        r13_57 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_53)) - reinterpret_cast<uint64_t>(rcx52) + reinterpret_cast<unsigned char>(r9_7));
                        if (*reinterpret_cast<uint32_t*>(&r8_50) & 0xc0) 
                            goto addr_140002365_62;
                        if (reinterpret_cast<signed char>(r13_57) >= reinterpret_cast<signed char>(0)) 
                            goto addr_140002414_56;
                        addr_140002365_62:
                        rsp59 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                        *rsp59 = 0x14000236d;
                        fun_140001f90(r14_53);
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
                                goto addr_14000221b_68;
                            if (reinterpret_cast<signed char>(r13_57) < reinterpret_cast<signed char>(0xffffffffffffff80)) 
                                goto addr_140002414_56;
                            if (reinterpret_cast<signed char>(r13_57) > reinterpret_cast<signed char>(0xff)) 
                                goto addr_140002414_56;
                            addr_14000221b_68:
                            rsp61 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                            *rsp61 = 0x140002223;
                            fun_140001f90(r14_53);
                            rsp29 = reinterpret_cast<struct s20*>(rsp61 + 1);
                            *reinterpret_cast<void***>(r14_53) = r13_57;
                            continue;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rdx38) != 16) 
                                goto addr_140002408_60;
                            *reinterpret_cast<uint32_t*>(&rax62) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_53));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax62) + 4) = 0;
                            if (*reinterpret_cast<int16_t*>(&rax62) >= 0) 
                                goto addr_14000227c_73;
                        }
                    }
                }
                rax62 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax62) | 0xffffffffffff0000);
                addr_14000227c_73:
                r13_57 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax62) - reinterpret_cast<uint64_t>(rcx52) + reinterpret_cast<unsigned char>(r9_7));
                if (*reinterpret_cast<uint32_t*>(&r8_50) & 0xc0) 
                    goto addr_1400022a6_75;
                if (reinterpret_cast<signed char>(r13_57) < reinterpret_cast<signed char>(0xffffffffffff8000)) 
                    goto addr_140002414_56;
                if (reinterpret_cast<signed char>(r13_57) > reinterpret_cast<signed char>(0xffff)) 
                    goto addr_140002414_56;
                addr_1400022a6_75:
                ++rbx47;
                rsp63 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                *rsp63 = 0x1400022b2;
                fun_140001f90(r14_53);
                rsp29 = reinterpret_cast<struct s20*>(rsp63 + 1);
                *reinterpret_cast<void***>(r14_53) = r13_57;
                if (reinterpret_cast<uint64_t>(rbx47) < reinterpret_cast<uint64_t>(rdi27)) 
                    goto addr_140002233_50; else 
                    goto addr_1400022bf_78;
                ++rbx47;
            } while (reinterpret_cast<uint64_t>(rbx47) < reinterpret_cast<uint64_t>(rdi27));
        }
    }
    addr_1400022c0_80:
    edx64 = g14000d0a4;
    if (!(reinterpret_cast<uint1_t>(edx64 < 0) | reinterpret_cast<uint1_t>(edx64 == 0))) {
        rdi65 = VirtualProtect;
        *reinterpret_cast<int32_t*>(&rbx66) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx66) + 4) = 0;
        do {
            rax67 = g14000d0a8;
            rax68 = reinterpret_cast<struct s24*>(reinterpret_cast<uint64_t>(rax67) + reinterpret_cast<uint64_t>(rbx66));
            if (rax68->f0) {
                rdx69 = rax68->f10;
                rcx70 = rax68->f8;
                rsp71 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
                *rsp71 = 0x1400022ff;
                rdi65(rcx70, rdx69);
                rsp29 = reinterpret_cast<struct s20*>(rsp71 + 1);
            }
            *reinterpret_cast<int32_t*>(&rsi25) = *reinterpret_cast<int32_t*>(&rsi25) + 1;
            rbx66 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx66) + 40);
            less72 = *reinterpret_cast<int32_t*>(&rsi25) < g14000d0a4;
        } while (less72);
        goto addr_14000211f_19;
    }
    addr_14000247c_47:
    goto rsp40->f58;
    addr_140002414_56:
    rsp29->f20 = r13_57;
    r8_6 = r14_53;
    rsp73 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
    *rsp73 = 0x140002428;
    fun_140001f20("%d bit pseudo relocation at %p out of range, targeting %p, yielding the value %p.\n", rdx38, r8_6, r9_7);
    rsp29 = reinterpret_cast<struct s20*>(rsp73 + 1);
    goto addr_140002428_33;
    addr_140002408_60:
    rsp74 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp29) - 8);
    *rsp74 = 0x140002414;
    fun_140001f20("  Unknown pseudo relocation bit size %d.\n", rdx38, r8_50, r9_7);
    rsp29 = reinterpret_cast<struct s20*>(rsp74 + 1);
    goto addr_140002414_56;
    addr_1400022bf_78:
    goto addr_1400022c0_80;
    addr_14000232e_25:
    ++rbx28;
    goto addr_140002195_26;
    addr_14000219f_27:
    eax31 = rbx28->f4;
    goto addr_1400021a2_28;
    addr_1400020c7_5:
    rax75 = g14000d0a8;
    *reinterpret_cast<int32_t*>(&rdx76) = rax8->f8;
    *reinterpret_cast<int32_t*>(&rdx76 + 4) = 0;
    r8_6 = *reinterpret_cast<void***>(reinterpret_cast<uint64_t>(rax75) + reinterpret_cast<uint64_t>(rbx3) + 24);
    fun_140001f20("  VirtualQuery failed for %d bytes at address %p", rdx76, r8_6, r9_7);
    rsp9 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp2) - 8 + 8);
    goto addr_1400020e2_17;
    addr_14000205e_7:
    tmp32_77 = g14000d0a4 + 1;
    g14000d0a4 = tmp32_77;
    addr_140002065_16:
    return;
}

int64_t signal = 0xe5b4;

int64_t fun_1400082a8(int64_t rcx, ...) {
    goto signal;
}

int64_t free = 0xe576;

void fun_140008278(void** rcx, void** rdx) {
    goto free;
}

int64_t EnterCriticalSection = 0xe364;

void** g14000d0e0;

int64_t TlsGetValue = 0xe410;

int64_t LeaveCriticalSection = 0xe3bc;

void fun_140002660() {
    void** rbx1;
    int64_t rdi2;
    int64_t rsi3;
    int64_t rcx4;
    int64_t rax5;
    int32_t eax6;
    void** rax7;

    EnterCriticalSection(0x14000d100);
    rbx1 = g14000d0e0;
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

int64_t strncmp = 0xe5d4;

int32_t fun_1400082c0(int64_t rcx, int64_t rdx, int64_t r8) {
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

void** fun_140005380(struct s28* rcx, void*** rdx, int32_t r8d);

void** fun_140006f40(void** ecx, ...);

struct s29 {
    void** f0;
    signed char[19] pad20;
    int32_t f14;
};

void* fun_140006dc0(void** rcx);

void fun_140006cc0(void** rcx, void* edx);

void fun_140007040(void** rcx, ...);

uint32_t fun_1400078c0(void** rcx, uint32_t* rdx);

void** fun_140005340(uint32_t ecx);

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

void** fun_140007160(void** ecx, ...);

void** fun_140007380(void** rcx, uint32_t edx, ...);

void** fun_140007220(void** rcx, void** rdx);

void** fun_140007590(void** rcx, uint32_t edx, ...);

uint32_t fun_1400076a0(void** rcx, void** rdx, ...);

void** fun_1400070b0(void** rcx, uint32_t edx, uint32_t r8d);

int64_t fun_140005420(void** rcx, void** rdx, ...);

void** fun_1400076f0(void** rcx, void** rdx, void** r8);

struct s33 {
    int32_t f0;
    void** f4;
};

uint64_t g14000a810 = 0x14000a5c0;

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

void** fun_140005590(struct s25* rcx, uint32_t edx, void*** r8, uint32_t* r9) {
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
                addr_140005621_5:
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
                addr_140005890_8:
                *v15 = 1;
                rax26 = fun_140005380("0", v17, 1);
                r15_25 = rax26;
                goto addr_140005621_5;
            } else {
                *reinterpret_cast<int32_t*>(&r15_25) = 0;
                *reinterpret_cast<int32_t*>(&r15_25 + 4) = 0;
                if (eax19 - 1 > 1) 
                    goto addr_140005621_5;
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
                rax30 = fun_140006f40(ecx29);
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
                        goto addr_14000572a_18;
                    rax40 = reinterpret_cast<struct s29*>(reinterpret_cast<uint64_t>(rax40) - 4);
                } while (*reinterpret_cast<void***>(&rbp39));
                goto addr_1400058e8_20;
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
    rax46 = fun_140006f40(ebx44);
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
    addr_14000572a_18:
    *reinterpret_cast<void***>(r13_32 + 20) = edx41;
    __asm__("bsr eax, [r13+rbp*4+0x18]");
    *reinterpret_cast<void***>(&rbp39) = reinterpret_cast<void**>((reinterpret_cast<unsigned char>(edx41) << 5) - (*reinterpret_cast<uint32_t*>(&rax40) ^ 31));
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = 0;
    addr_140005741_32:
    eax52 = fun_140006dc0(r13_32);
    rsp53 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp31) - 8 + 8);
    v54 = v11;
    if (eax52) {
        fun_140006cc0(r13_32, eax52);
        rsp53 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp53) - 8 + 8);
        v54 = v11 + reinterpret_cast<uint32_t>(eax52);
        *reinterpret_cast<void***>(&rbp39) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp39)) - reinterpret_cast<uint32_t>(eax52));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp39) + 4) = 0;
    }
    if (!*reinterpret_cast<void***>(r13_32 + 20)) {
        fun_140007040(r13_32, r13_32);
        goto addr_140005890_8;
    } else {
        eax55 = fun_1400078c0(r13_32, reinterpret_cast<int64_t>(rsp53) + 0x9c);
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
        __asm__("mulsd xmm1, [rip+0x4d73]");
        rax62 = rax59 | rcx61 << 32;
        r10d63 = -*reinterpret_cast<uint32_t*>(&rdx60);
        __asm__("movd xmm0, rax");
        __asm__("subsd xmm0, [rip+0x4d3e]");
        __asm__("mulsd xmm0, [rip+0x4d3e]");
        if (__intrinsic()) {
            r10d63 = *reinterpret_cast<uint32_t*>(&rdx60);
        }
        __asm__("addsd xmm0, [rip+0x4d3a]");
        r10d64 = r10d63 - 0x435;
        __asm__("addsd xmm0, xmm1");
        zf65 = reinterpret_cast<uint1_t>(r10d64 == 0);
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r10d64) < reinterpret_cast<int32_t>(0)) | zf65)) {
            __asm__("pxor xmm1, xmm1");
            __asm__("cvtsi2sd xmm1, r10d");
            __asm__("mulsd xmm1, [rip+0x4d29]");
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
            goto addr_140005850_43;
    }
    v75 = 1;
    addr_140005928_45:
    v76 = 0;
    if (reinterpret_cast<int32_t>(r10d73) < reinterpret_cast<int32_t>(0)) {
        addr_140005f30_46:
        r10d73 = 0;
        *reinterpret_cast<uint32_t*>(&rdx60) = 1 - reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&rax72));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx60) + 4) = 0;
        v76 = *reinterpret_cast<uint32_t*>(&rdx60);
        goto addr_140005939_47;
    } else {
        addr_140005939_47:
        if (reinterpret_cast<int32_t>(r11d66) >= reinterpret_cast<int32_t>(0)) {
            addr_140005bd1_48:
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
        goto addr_140005bf8_52;
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
        goto addr_14000598d_57;
    eax80 = v12 + v77;
    v81 = eax80;
    eax82 = eax80 + 1;
    v83 = eax82;
    if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax82) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax82 == 0)) {
        v84 = 0;
    } else {
        rax85 = fun_140005340(v83);
        v84 = 0;
        r11d86 = r11d66;
        r10d87 = r10d73;
        r15_25 = rax85;
        goto addr_1400059f8_61;
    }
    addr_1400066f6_62:
    ecx88 = 1;
    addr_140006009_63:
    rax85 = fun_140005340(ecx88);
    r11d86 = r11d66;
    r10d87 = r10d73;
    r15_25 = rax85;
    if (reinterpret_cast<int32_t>(v7) > reinterpret_cast<int32_t>(1)) {
        addr_1400059f8_61:
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
                goto addr_1400060a8_67;
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
        addr_1400060a8_67:
        *reinterpret_cast<uint32_t*>(&rsi94) = v54;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi94) + 4) = 0;
        if (*reinterpret_cast<int32_t*>(&rsi94) < reinterpret_cast<int32_t>(0) || reinterpret_cast<int32_t>(rbx9->f14) < reinterpret_cast<int32_t>(v77)) {
            if (v84) {
                addr_140005c71_72:
                *reinterpret_cast<uint32_t*>(&r12_95) = *reinterpret_cast<int32_t*>(&r12_27) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rbp39));
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_95) + 4) = 0;
                *reinterpret_cast<uint32_t*>(&rdx60) = rbx9->f4;
                eax96 = static_cast<uint32_t>(r12_95 + 1);
                if (reinterpret_cast<int32_t>(v54 - *reinterpret_cast<uint32_t*>(&r12_95)) >= *reinterpret_cast<int32_t*>(&rdx60)) {
                    if (reinterpret_cast<int32_t>(v7) <= reinterpret_cast<int32_t>(1)) {
                        addr_140005ccd_74:
                        r10d87 = r10d87 + eax96;
                        esi97 = v78;
                        *reinterpret_cast<uint32_t*>(&rdi98) = v76;
                        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
                        v76 = eax96 + v76;
                    } else {
                        addr_14000658b_75:
                        eax99 = v83 - 1;
                        if (reinterpret_cast<int32_t>(v78) < reinterpret_cast<int32_t>(eax99)) {
                            *reinterpret_cast<uint32_t*>(&rdx60) = eax99 - v78;
                            esi97 = 0;
                            v78 = eax99;
                            r11d86 = r11d86 + *reinterpret_cast<uint32_t*>(&rdx60);
                            goto addr_1400065a0_77;
                        } else {
                            esi97 = v78 - eax99;
                            goto addr_1400065a0_77;
                        }
                    }
                } else {
                    addr_140005c92_79:
                    *reinterpret_cast<uint32_t*>(&rsi100) = v7;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi100) + 4) = 0;
                    if (static_cast<uint32_t>(rsi100 - 3) & 0xfffffffd) {
                        eax96 = v54 - *reinterpret_cast<uint32_t*>(&rdx60) + 1;
                        if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi100) > reinterpret_cast<int32_t>(1))) & static_cast<unsigned char>(reinterpret_cast<uint1_t>(!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v83) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v83 == 0)))))) 
                            goto addr_140005ccd_74;
                        if (reinterpret_cast<int32_t>(eax96) > reinterpret_cast<int32_t>(v83)) 
                            goto addr_14000658b_75; else 
                            goto addr_140005ccd_74;
                    }
                }
            } else {
                esi97 = v78;
                *reinterpret_cast<uint32_t*>(&rdi98) = v76;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
                *reinterpret_cast<int32_t*>(&r12_101) = 0;
                *reinterpret_cast<int32_t*>(&r12_101 + 4) = 0;
                goto addr_140005d0f_83;
            }
        } else {
            rax102 = reinterpret_cast<int32_t>(v77);
            rbx103 = rax102;
            *reinterpret_cast<void***>(rdi71) = rsi94->f0;
            rdi104 = rdi71 + 4;
            rsi105 = reinterpret_cast<struct s32*>(&rsi94->f4);
            if (reinterpret_cast<int32_t>(v12) >= reinterpret_cast<int32_t>(0)) 
                goto addr_1400065e8_88;
            *reinterpret_cast<uint32_t*>(&rax102) = v83;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax102) + 4) = 0;
            zf106 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rax102) == 0);
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rax102) < reinterpret_cast<int32_t>(0)) | zf106)) 
                goto addr_1400065e8_88; else 
                goto addr_1400060ec_90;
        }
    } else {
        v107 = 0;
        *reinterpret_cast<void***>(rdi71) = rsi91->f0;
        rdi71 = rdi71 + 4;
        rsi108 = &rsi91->f4;
        zf109 = reinterpret_cast<uint1_t>(v75 == 0);
        if (zf109) 
            goto addr_140005a78_95; else 
            goto addr_140005a66_96;
    }
    addr_140005ce0_97:
    rax110 = fun_140007160(1);
    v84 = 1;
    r11d86 = r11d86;
    r10d87 = r10d87;
    r12_101 = rax110;
    addr_140005d0f_83:
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
            rax112 = fun_140007380(r13_32, *reinterpret_cast<uint32_t*>(&rdx60));
            r10d87 = r10d87;
            r11d86 = r11d86;
            r13_32 = rax112;
        } else {
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi97) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi97 == 0))) {
                rax113 = fun_140007380(r12_101, esi97);
                r12_101 = rax113;
                rax114 = fun_140007220(rax113, r13_32);
                fun_140007040(r13_32, r13_32);
                r13_32 = rax114;
                r10d87 = r10d87;
                r11d86 = r11d86;
            }
            *reinterpret_cast<uint32_t*>(&rdx60) = v78 - esi97;
            if (*reinterpret_cast<uint32_t*>(&rdx60)) {
                rax115 = fun_140007380(r13_32, *reinterpret_cast<uint32_t*>(&rdx60), r13_32, *reinterpret_cast<uint32_t*>(&rdx60));
                r11d86 = r11d86;
                r10d87 = r10d87;
                r13_32 = rax115;
            }
        }
    }
    rax116 = fun_140007160(1, 1);
    r11d117 = r11d86;
    r10d118 = r10d87;
    *reinterpret_cast<unsigned char*>(&rdx60) = reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rbp39) == 1);
    rsi119 = rax116;
    *reinterpret_cast<unsigned char*>(&rax116) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v7) <= reinterpret_cast<int32_t>(1));
    edx120 = *reinterpret_cast<uint32_t*>(&rdx60) & *reinterpret_cast<uint32_t*>(&rax116);
    ebp121 = edx120;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r11d117) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(r11d117 == 0))) {
        rax122 = fun_140007380(rsi119, r11d117, rsi119, r11d117);
        r11d117 = r11d86;
        r10d118 = r10d87;
        rsi119 = rax122;
        if (*reinterpret_cast<unsigned char*>(&ebp121)) {
            if (reinterpret_cast<int32_t>(v11) > reinterpret_cast<int32_t>(rbx9->f4 + 1)) {
                addr_140006a2b_111:
                ++v76;
                ++r10d118;
                v123 = 1;
            } else {
                goto addr_1400063b9_113;
            }
        } else {
            addr_1400063b9_113:
            v123 = 0;
            goto addr_1400063c1_114;
        }
    } else {
        v123 = 0;
        if (!*reinterpret_cast<signed char*>(&edx120)) 
            goto addr_140005deb_116;
        if (reinterpret_cast<int32_t>(rbx9->f4 + 1) < reinterpret_cast<int32_t>(v11)) 
            goto addr_140006a2b_111;
    }
    addr_140005deb_116:
    *reinterpret_cast<uint32_t*>(&rbx9) = 31;
    if (r11d117) {
        addr_1400063c1_114:
        __asm__("bsr ebx, [rsi+rax*4+0x18]");
        *reinterpret_cast<uint32_t*>(&rbx9) = *reinterpret_cast<uint32_t*>(&rbx9) ^ 31;
        goto addr_140005df9_118;
    } else {
        addr_140005df9_118:
        *reinterpret_cast<uint32_t*>(&rbx124) = *reinterpret_cast<uint32_t*>(&rbx9) - r10d118 - 4 & 31;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx124) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r8_125) = v76 + *reinterpret_cast<uint32_t*>(&rbx124);
        *reinterpret_cast<int32_t*>(&r8_125 + 4) = 0;
        edx126 = *reinterpret_cast<uint32_t*>(&rbx124);
        if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&r8_125) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&r8_125) == 0))) {
            rax127 = fun_140007590(r13_32, *reinterpret_cast<uint32_t*>(&r8_125));
            edx126 = *reinterpret_cast<uint32_t*>(&rbx124);
            r10d118 = r10d118;
            r13_32 = rax127;
        }
    }
    edx128 = edx126 + r10d118;
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx128) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx128 == 0))) {
        rax129 = fun_140007590(rsi119, edx128);
        rsi119 = rax129;
    }
    *reinterpret_cast<unsigned char*>(&ebp121) = reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v7) > reinterpret_cast<int32_t>(2));
    if (v75 && (eax130 = fun_1400076a0(r13_32, rsi119), reinterpret_cast<int32_t>(eax130) < reinterpret_cast<int32_t>(0))) {
        rax131 = fun_1400070b0(r13_32, 10, 0);
        r13_32 = rax131;
        eax132 = v81;
        *reinterpret_cast<unsigned char*>(&eax132) = reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax132) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax132 == 0));
        ebp133 = ebp121 & eax132;
        if (v84) {
            *reinterpret_cast<uint32_t*>(&r8_125) = 0;
            *reinterpret_cast<int32_t*>(&r8_125 + 4) = 0;
            rax134 = fun_1400070b0(r12_101, 10, 0);
            r12_101 = rax134;
            if (!*reinterpret_cast<signed char*>(&ebp133)) {
                v135 = v77;
                v83 = v81;
                goto addr_140006137_126;
            }
        } else {
            if (!*reinterpret_cast<signed char*>(&ebp133)) {
                v135 = v77;
                v83 = v81;
                goto addr_1400064c0_129;
            }
        }
        --v77;
        v83 = v81;
        goto addr_140005e73_131;
    }
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v83) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v83 == 0)) || !*reinterpret_cast<unsigned char*>(&ebp121)) {
        v135 = v77 + 1;
        if (!v84) {
            addr_1400064c0_129:
            ebx136 = v83;
            rdi71 = r15_25;
            eax137 = 1;
        } else {
            addr_140006137_126:
            edx138 = static_cast<uint32_t>(rbx124 + rdi98);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx138) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx138 == 0))) {
                rax139 = fun_140007590(r12_101, edx138);
                r12_101 = rax139;
                goto addr_140006149_135;
            }
        }
    } else {
        addr_140005e73_131:
        if (v83 || (rax140 = fun_1400070b0(rsi119, 5, 0), rsi119 = rax140, eax141 = fun_1400076a0(r13_32, rax140), reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax141) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax141 == 0))) {
            addr_140006362_136:
            rdi71 = r15_25;
            v135 = -v12;
            fun_140007040(rsi119, rsi119);
            v24 = 16;
            rax142 = r15_25;
            if (r12_101) {
                addr_14000631d_137:
                fun_140007040(r12_101, r12_101);
                goto addr_140005ed8_138;
            } else {
                addr_140006387_139:
                rdi71 = r15_25;
                r15_25 = rax142;
                goto addr_140005ef7_140;
            }
        } else {
            v135 = v77 + 2;
            goto addr_140005eb0_142;
        }
    }
    while (++rdi71, rax143 = fun_140005420(r13_32, rsi119), eax144 = *reinterpret_cast<int32_t*>(&rax143) + 48, *reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&eax144), reinterpret_cast<int32_t>(eax137) < reinterpret_cast<int32_t>(ebx136)) {
        rax145 = fun_1400070b0(r13_32, 10, 0);
        r13_32 = rax145;
        ++eax137;
    }
    v146 = eax144;
    *reinterpret_cast<int32_t*>(&r8_147) = 0;
    *reinterpret_cast<int32_t*>(&r8_147 + 4) = 0;
    addr_140006519_146:
    if (!v89) {
        rax148 = fun_140007590(r13_32, 1);
        r13_32 = rax148;
        eax149 = fun_1400076a0(rax148, rsi119);
        r8_147 = r8_147;
        zf150 = reinterpret_cast<uint1_t>(eax149 == 0);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax149) < reinterpret_cast<int32_t>(0)) | zf150) || zf150 && *reinterpret_cast<unsigned char*>(&v146) & 1) {
            addr_140006543_148:
            edx151 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff));
        } else {
            addr_14000679d_149:
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_32 + 20)) <= reinterpret_cast<signed char>(1)) {
                eax152 = 16;
                if (!*reinterpret_cast<void***>(r13_32 + 24)) {
                    eax152 = v24;
                }
                v24 = eax152;
                goto addr_1400062f0_153;
            } else {
                v24 = 16;
                goto addr_1400062f0_153;
            }
        }
    } else {
        if (v89 == 2) 
            goto addr_14000679d_149;
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_32 + 20)) > reinterpret_cast<signed char>(1)) 
            goto addr_140006543_148;
        if (!*reinterpret_cast<void***>(r13_32 + 24)) 
            goto addr_1400062f0_153; else 
            goto addr_140006543_148;
    }
    addr_140006560_158:
    while (rax153 = rdi71 + 0xffffffffffffffff, *reinterpret_cast<signed char*>(&edx151) == 57) {
        if (rax153 == r15_25) 
            goto addr_140006729_160;
        edx151 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax153 + 0xffffffffffffffff));
        rdi71 = rax153;
    }
    edx154 = edx151 + 1;
    v24 = 32;
    *reinterpret_cast<void***>(rax153) = *reinterpret_cast<void***>(&edx154);
    addr_1400062f0_153:
    fun_140007040(rsi119, rsi119);
    if (!r12_101) {
        addr_140005ed8_138:
        if (reinterpret_cast<unsigned char>(rdi71) > reinterpret_cast<unsigned char>(r15_25)) {
            do {
                if (*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff) != 48) 
                    break;
                --rdi71;
            } while (rdi71 != r15_25);
        } else {
            rax142 = r15_25;
            r15_25 = rdi71;
            goto addr_140006387_139;
        }
    } else {
        if (r8_147 && r8_147 != r12_101) {
            fun_140007040(r8_147, r8_147);
            goto addr_14000631d_137;
        }
    }
    addr_140005ef7_140:
    fun_140007040(r13_32, r13_32);
    *reinterpret_cast<void***>(rdi71) = reinterpret_cast<void**>(0);
    *v15 = v135;
    if (v17) {
        *v17 = rdi71;
    }
    *r14_10 = *r14_10 | v24;
    goto addr_140005621_5;
    addr_140006729_160:
    ++v135;
    *reinterpret_cast<void***>(r15_25) = reinterpret_cast<void**>(49);
    v24 = 32;
    goto addr_1400062f0_153;
    addr_140006149_135:
    rbp155 = r12_101;
    if (v123) {
        ecx156 = *reinterpret_cast<void***>(r12_101 + 8);
        rax157 = fun_140006f40(ecx156);
        r8_125 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_101 + 20)) * 4 + 8);
        fun_140008298(rax157 + 16, r12_101 + 16, r8_125);
        rax158 = fun_140007590(rax157, 1, rax157, 1);
        rbp155 = rax158;
    }
    v159 = r14_10;
    eax160 = 1;
    r14_161 = rbp155;
    rbp162 = r15_25;
    v163 = r15_25;
    while (1) {
        rax164 = fun_140005420(r13_32, rsi119, r13_32, rsi119);
        *reinterpret_cast<int32_t*>(&rdi165) = *reinterpret_cast<int32_t*>(&rax164);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi165) + 4) = 0;
        r15d166 = static_cast<int32_t>(rax164 + 48);
        eax167 = fun_1400076a0(r13_32, r12_101, r13_32, r12_101);
        rax168 = fun_1400076f0(rsi119, r14_161, r8_125);
        if (*reinterpret_cast<void***>(rax168 + 16)) {
            fun_140007040(rax168, rax168);
            edx169 = 1;
        } else {
            eax170 = fun_1400076a0(r13_32, rax168, r13_32, rax168);
            fun_140007040(rax168, rax168);
            edx169 = eax170 | v7;
            if (edx169) {
                edx169 = eax170;
            } else {
                eax171 = *v14;
                if (!(reinterpret_cast<unsigned char>(eax171) & 1 | v89)) 
                    goto addr_14000629c_178;
            }
        }
        if (reinterpret_cast<int32_t>(eax167) < reinterpret_cast<int32_t>(0)) 
            break;
        if (eax167 | v7) 
            goto addr_1400061a1_181;
        if (!(reinterpret_cast<unsigned char>(*v14) & 1)) 
            break;
        addr_1400061a1_181:
        rbx172 = rbp162 + 1;
        rdi71 = rbx172;
        if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx169) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx169 == 0)) 
            goto addr_1400061b7_183;
        if (v89 != 2) 
            goto addr_140006a53_185;
        addr_1400061b7_183:
        *reinterpret_cast<void***>(rbx172 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&r15d166);
        if (eax160 == v83) 
            goto addr_140006a98_186;
        rax173 = fun_1400070b0(r13_32, 10, 0);
        *reinterpret_cast<uint32_t*>(&r8_125) = 0;
        *reinterpret_cast<int32_t*>(&r8_125 + 4) = 0;
        r13_32 = rax173;
        if (r12_101 == r14_161) {
            rax174 = fun_1400070b0(r12_101, 10, 0);
            r12_101 = rax174;
            r14_161 = rax174;
        } else {
            rax175 = fun_1400070b0(r12_101, 10, 0);
            *reinterpret_cast<uint32_t*>(&r8_125) = 0;
            *reinterpret_cast<int32_t*>(&r8_125 + 4) = 0;
            r12_101 = rax175;
            rax176 = fun_1400070b0(r14_161, 10, 0);
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
            addr_140006b18_193:
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
                addr_140006b23_197:
                r8_147 = r12_101;
                v24 = 16;
                r12_101 = rbp179;
                rbx172 = v178 + 1;
            }
        } else {
            addr_140006adf_198:
            rax180 = fun_140007590(r13_32, 1, r13_32, 1);
            r13_32 = rax180;
            eax181 = fun_1400076a0(rax180, rsi119, rax180, rsi119);
            zf182 = reinterpret_cast<uint1_t>(eax181 == 0);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax181) < reinterpret_cast<int32_t>(0)) | zf182) || zf182 && *reinterpret_cast<unsigned char*>(&v177) & 1) {
                if (v177 == 57) {
                    addr_140006b3f_200:
                    rbx172 = v178 + 1;
                    goto addr_140006b48_201;
                } else {
                    v89 = 32;
                    v177 = static_cast<int32_t>(rdi165 + 49);
                    goto addr_140006b18_193;
                }
            } else {
                v89 = 32;
                goto addr_140006b18_193;
            }
        }
    } else {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r13_32 + 20)) > reinterpret_cast<signed char>(1) || *reinterpret_cast<void***>(r13_32 + 24)) {
            if (v89 == 2) 
                goto addr_140006b23_197;
            v183 = r14_10;
            ebx184 = v177;
            r14_185 = rbp179;
            rbp186 = rsi119;
            v187 = r15_25;
            rsi188 = v178;
            while (r15_189 = rsi188 + 1, eax190 = fun_1400076a0(rbp186, r14_185, rbp186, r14_185), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax190) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax190 == 0))) {
                *reinterpret_cast<void***>(r15_189 + 0xffffffffffffffff) = *reinterpret_cast<void***>(&ebx184);
                rsi188 = r15_189;
                rax191 = fun_1400070b0(r14_185, 10, 0);
                if (r12_101 == r14_185) {
                    r12_101 = rax191;
                }
                rax192 = fun_1400070b0(r13_32, 10, 0);
                r14_185 = rax191;
                r13_32 = rax192;
                rax193 = fun_140005420(rax192, rbp186);
                ebx184 = static_cast<int32_t>(rax193 + 48);
            }
            v178 = rsi188;
            rbx172 = r15_189;
            rsi119 = rbp186;
            r15_25 = v187;
            rbp179 = r14_185;
            r14_10 = v183;
            if (ebx184 == 57) 
                goto addr_140006b48_201; else 
                goto addr_14000688b_212;
        } else {
            if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(edx169) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(edx169 == 0))) 
                goto addr_140006adf_198;
            r8_147 = r12_101;
            r12_101 = rbp179;
            rbx172 = v178 + 1;
        }
    }
    addr_1400068a0_215:
    rdi71 = rbx172;
    ebx194 = *reinterpret_cast<unsigned char*>(&v177);
    *reinterpret_cast<void***>(v178) = *reinterpret_cast<void***>(&ebx194);
    goto addr_1400062f0_153;
    addr_14000688b_212:
    v24 = 32;
    r8_147 = r12_101;
    r12_101 = rbp179;
    v177 = ebx184 + 1;
    goto addr_1400068a0_215;
    addr_140006a53_185:
    v195 = r15d166;
    r15_25 = v163;
    v178 = rbp162;
    rbp179 = r14_161;
    r14_10 = v159;
    if (r15d166 == 57) {
        addr_140006b48_201:
        r8_147 = r12_101;
        rdi71 = rbx172;
        r12_101 = rbp179;
        edx151 = 57;
        *reinterpret_cast<void***>(v178) = reinterpret_cast<void**>(57);
        goto addr_140006560_158;
    } else {
        r8_147 = r12_101;
        v24 = 32;
        r12_101 = rbp179;
        eax196 = *reinterpret_cast<unsigned char*>(&v195) + 1;
        *reinterpret_cast<void***>(v178) = *reinterpret_cast<void***>(&eax196);
        goto addr_1400062f0_153;
    }
    addr_140006a98_186:
    v146 = r15d166;
    r8_147 = r12_101;
    r15_25 = v163;
    r14_10 = v159;
    r12_101 = r14_161;
    goto addr_140006519_146;
    addr_14000629c_178:
    v197 = r15d166;
    r15_25 = v163;
    v178 = rbp162;
    rbp179 = r14_161;
    r14_10 = v159;
    if (r15d166 == 57) 
        goto addr_140006b3f_200;
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
    goto addr_1400062f0_153;
    addr_140005eb0_142:
    *reinterpret_cast<void***>(r15_25) = reinterpret_cast<void**>(49);
    rdi71 = r15_25 + 1;
    fun_140007040(rsi119, rsi119);
    v24 = 32;
    if (!r12_101) {
        goto addr_140005ed8_138;
    }
    addr_1400065a0_77:
    if (reinterpret_cast<int32_t>(v83) < reinterpret_cast<int32_t>(0)) {
        *reinterpret_cast<uint32_t*>(&rdi98) = v76 - v83;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
        goto addr_140005ce0_97;
    } else {
        r10d87 = r10d87 + v83;
        *reinterpret_cast<uint32_t*>(&rdi98) = v76;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi98) + 4) = 0;
        v76 = v83 + v76;
        goto addr_140005ce0_97;
    }
    addr_1400065e8_88:
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
        goto addr_140006639_228;
    if (!ebx202) 
        goto addr_140005ed8_138;
    addr_140006639_228:
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
    goto addr_140005ed8_138;
    zf205 = reinterpret_cast<uint1_t>(v89 == 0);
    if (zf205) {
        __asm__("addsd xmm0, xmm0");
        __asm__("comisd xmm0, xmm2");
        if (reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf205))) {
            __asm__("ucomisd xmm0, xmm2");
            v24 = 16;
            if (__intrinsic()) 
                goto addr_140005ed8_138;
            if (!zf205) 
                goto addr_140005ed8_138;
            if (!(*reinterpret_cast<unsigned char*>(&rax102) & 1)) 
                goto addr_140005ed8_138;
        }
    } else {
        v24 = 16;
        if (v89 != 1) 
            goto addr_140005ed8_138;
    }
    *reinterpret_cast<uint32_t*>(&rax206) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff));
    *reinterpret_cast<uint32_t*>(&r9_207) = v77;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_207) + 4) = 0;
    goto addr_140005b90_243;
    addr_1400060ec_90:
    if (!zf106 || 1) {
        addr_14000635d_244:
        *reinterpret_cast<int32_t*>(&rsi119) = 0;
        *reinterpret_cast<int32_t*>(&rsi119 + 4) = 0;
        *reinterpret_cast<int32_t*>(&r12_101) = 0;
        *reinterpret_cast<int32_t*>(&r12_101 + 4) = 0;
        goto addr_140006362_136;
    } else {
        *reinterpret_cast<int32_t*>(&rsi119) = 0;
        *reinterpret_cast<int32_t*>(&rsi119 + 4) = 0;
        *reinterpret_cast<int32_t*>(&r12_101) = 0;
        *reinterpret_cast<int32_t*>(&r12_101 + 4) = 0;
        v135 = *reinterpret_cast<int32_t*>(&rbx103) + 2;
        goto addr_140005eb0_142;
    }
    addr_140005a78_95:
    __asm__("movapd xmm1, xmm0");
    __asm__("addsd xmm1, xmm0");
    __asm__("addsd xmm1, [rip+0x4ad0]");
    __asm__("movd rdx, xmm1");
    __asm__("movd rax, xmm1");
    *reinterpret_cast<uint32_t*>(&rdx60) = v83;
    zf208 = reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rdx60) == 0);
    below_or_equal209 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf208));
    if (zf208) {
        addr_140006070_246:
        __asm__("subsd xmm0, [rip+0x44e8]");
        __asm__("movd xmm1, rax");
        __asm__("comisd xmm0, xmm1");
        if (!below_or_equal209) {
            v135 = 2;
            *reinterpret_cast<int32_t*>(&rsi119) = 0;
            *reinterpret_cast<int32_t*>(&rsi119 + 4) = 0;
            *reinterpret_cast<int32_t*>(&r12_101) = 0;
            *reinterpret_cast<int32_t*>(&r12_101 + 4) = 0;
            goto addr_140005eb0_142;
        } else {
            __asm__("xorpd xmm1, [rip+0x44e1]");
            __asm__("comisd xmm1, xmm0");
            if (!below_or_equal209) 
                goto addr_14000635d_244; else 
                goto addr_140006099_249;
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rsi210) = v83;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi210) + 4) = 0;
        *reinterpret_cast<uint32_t*>(&r9_207) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_207) + 4) = 0;
    }
    addr_140005ab8_251:
    rdx60 = g14000a810;
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
            goto addr_140006919_264;
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
            goto addr_140006b7b_269; else 
            goto addr_140005b0e_270;
    }
    addr_14000691d_271:
    *reinterpret_cast<void***>(rdi215) = rsi216->f0;
    rdi71 = rdi215 + 4;
    __asm__("movapd xmm2, xmm4");
    __asm__("addsd xmm2, xmm0");
    __asm__("comisd xmm1, xmm2");
    if (!below_or_equal220) {
        addr_140005b90_243:
        while (rdx225 = rdi71 + 0xffffffffffffffff, *reinterpret_cast<void***>(&rax206) == 57) {
            if (rdx225 == r15_25) 
                goto addr_140006aca_276;
            *reinterpret_cast<uint32_t*>(&rax206) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdx225 + 0xffffffffffffffff));
            rdi71 = rdx225;
        }
    } else {
        __asm__("subsd xmm0, xmm4");
        __asm__("comisd xmm0, xmm1");
        if (below_or_equal220) {
            addr_140006099_249:
            v89 = 0;
            goto addr_1400060a8_67;
        } else {
            __asm__("ucomisd xmm1, xmm6");
            goto addr_140006949_280;
        }
    }
    addr_140005b98_281:
    eax226 = *reinterpret_cast<uint32_t*>(&rax206) + 1;
    v24 = 32;
    *reinterpret_cast<void***>(rdx225) = *reinterpret_cast<void***>(&eax226);
    v135 = static_cast<uint32_t>(r9_207 + 1);
    goto addr_140005ed8_138;
    addr_140006aca_276:
    *reinterpret_cast<void***>(r15_25) = reinterpret_cast<void**>(48);
    *reinterpret_cast<uint32_t*>(&r9_207) = *reinterpret_cast<uint32_t*>(&r9_207) + 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_207) + 4) = 0;
    *reinterpret_cast<uint32_t*>(&rax206) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff));
    goto addr_140005b98_281;
    addr_140006949_280:
    eax227 = pf218;
    if (!zf219) {
        eax227 = 1;
    }
    v24 = eax227 << 4;
    v135 = static_cast<uint32_t>(r9_207 + 1);
    goto addr_140005ed8_138;
    addr_140006919_264:
    __asm__("movapd xmm1, xmm0");
    goto addr_14000691d_271;
    addr_140006b7b_269:
    __asm__("ucomisd xmm0, xmm6");
    goto addr_140006949_280;
    addr_140005b0e_270:
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
            goto addr_140006099_249;
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
    goto addr_140006b7b_269;
    *reinterpret_cast<uint32_t*>(&rax206) = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi71 + 0xffffffffffffffff));
    goto addr_140005b90_243;
    addr_140005a66_96:
    *reinterpret_cast<void***>(rdi71) = *rsi108;
    rdi71 = rdi71 + 4;
    rsi234 = reinterpret_cast<void*>(rsi108 + 4);
    __asm__("comisd xmm4, xmm0");
    if (reinterpret_cast<uint1_t>(static_cast<uint32_t>(zf109))) 
        goto addr_140005a78_95;
    if (!*reinterpret_cast<int32_t*>(&rsi234)) {
        __asm__("movapd xmm1, xmm0");
        __asm__("addsd xmm1, xmm0");
        __asm__("addsd xmm1, [rip+0x4505]");
        __asm__("movd rdx, xmm1");
        __asm__("movd rax, xmm1");
        rdx235 = rdx60 >> 32;
        *reinterpret_cast<uint32_t*>(&rax236) = eax93;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax236) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rdx237) = *reinterpret_cast<int32_t*>(&rdx235) - 0x3400000;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx237) + 4) = 0;
        rdx60 = rdx237 << 32;
        below_or_equal209 = reinterpret_cast<uint1_t>(static_cast<uint32_t>(reinterpret_cast<uint1_t>((rax236 | rdx60) == 0)));
        goto addr_140006070_246;
    } else {
        *reinterpret_cast<uint32_t*>(&rsi238) = v81;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi238) + 4) = 0;
        if (reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rsi238) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<uint32_t*>(&rsi238) == 0)) 
            goto addr_140006099_249;
        __asm__("mulsd xmm0, [rip+0x3ba6]");
        *reinterpret_cast<void***>(rdi71) = rsi238->f0;
        rsi210 = reinterpret_cast<struct s33*>(&rsi238->f4);
        *reinterpret_cast<uint32_t*>(&r9_207) = 0xffffffff;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_207) + 4) = 0;
        __asm__("mulsd xmm1, xmm0");
        __asm__("addsd xmm1, [rip+0x3b9c]");
        __asm__("movd rdx, xmm1");
        __asm__("movd rax, xmm1");
        goto addr_140005ab8_251;
    }
    addr_14000598d_57:
    if (reinterpret_cast<int32_t>(v7) <= reinterpret_cast<int32_t>(3)) {
        if (v7 != 2) {
            addr_140005bf8_52:
            __asm__("pxor xmm0, xmm0");
            __asm__("cvtsi2sd xmm0, r12d");
            __asm__("mulsd xmm0, [rip+0x492a]");
            __asm__("cvttsd2si ecx, xmm0");
            rax239 = fun_140005340(*reinterpret_cast<int32_t*>(&rcx70) + 3);
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
                    goto addr_140005ccd_74;
                goto addr_140005c92_79;
            }
        } else {
            v84 = 0;
            goto addr_140005fe3_308;
        }
    } else {
        if (v7 == 4) {
            v84 = 1;
            goto addr_140005fe3_308;
        } else {
            eax241 = v12 + v77;
            v81 = eax241;
            eax242 = eax241 + 1;
            v83 = eax242;
            if (reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(eax242) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(eax242 == 0)) {
                v84 = 1;
                goto addr_1400066f6_62;
            } else {
                rax85 = fun_140005340(v83);
                v84 = 1;
                r11d86 = r11d66;
                r10d87 = r10d73;
                r15_25 = rax85;
                goto addr_1400059f8_61;
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
        goto addr_1400065e8_88;
    } else {
        v12 = 0;
        v89 = 0;
        v83 = 0xffffffff;
        v81 = 0xffffffff;
        goto addr_140005c71_72;
    }
    addr_140005fe3_308:
    eax243 = 1;
    if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(v12) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(v12 == 0))) {
        eax243 = v12;
    }
    v12 = eax243;
    ecx88 = eax243;
    v81 = eax243;
    v83 = eax243;
    goto addr_140006009_63;
    addr_140005850_43:
    rcx70 = g14000a810;
    rdx60 = reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r11d66)));
    __asm__("movd xmm5, rdi");
    *reinterpret_cast<void***>(rdi71) = rsi6->f0;
    rdi71 = rdi71 + 4;
    rsi6 = reinterpret_cast<struct s26*>(&rsi6->f4);
    __asm__("comisd xmm0, xmm5");
    if (!below_or_equal74) 
        goto addr_14000586e_324;
    v75 = 0;
    v76 = 0;
    if (reinterpret_cast<int32_t>(r10d73) < reinterpret_cast<int32_t>(0)) 
        goto addr_140005f30_46; else 
        goto addr_140005bd1_48;
    addr_14000586e_324:
    v75 = 0;
    --r11d66;
    goto addr_140005928_45;
    addr_1400058e8_20:
    *reinterpret_cast<void***>(r13_32 + 20) = reinterpret_cast<void**>(0);
    goto addr_140005741_32;
}

int32_t fun_1400081f0();

int32_t fun_1400081e8();

int32_t fun_140007ca0(signed char* rcx, uint16_t dx, int32_t r8d, int32_t r9d);

int32_t fun_140007d30(signed char* rcx, uint32_t edx, void* r8, void** r9) {
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
    eax7 = fun_1400081f0();
    eax8 = fun_1400081e8();
    edx9 = *reinterpret_cast<uint16_t*>(&ebx6);
    eax10 = fun_140007ca0(r12_5, *reinterpret_cast<uint16_t*>(&edx9), eax8, eax7);
    rax11 = eax10;
    return *reinterpret_cast<int32_t*>(&rax11);
}

int64_t fputc = 0xe56e;

void fun_140008270() {
    goto fputc;
}

void fun_140002e50(signed char cl, void** rdx, ...) {
    void** edx3;
    void** eax4;

    edx3 = *reinterpret_cast<void***>(rdx + 8);
    if (*reinterpret_cast<unsigned char*>(&edx3 + 1) & 64 || (eax4 = *reinterpret_cast<void***>(rdx + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rdx + 40)) > reinterpret_cast<signed char>(eax4))) {
        if (*reinterpret_cast<unsigned char*>(&edx3 + 1) & 32) {
            fun_140008270();
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

void** fun_140007b10(void** rcx, void* rdx);

void fun_140003150(void** rcx, void** rdx) {
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
        rax5 = fun_1400082b8(r12_3);
    } else {
        *reinterpret_cast<void***>(&rax5) = fun_140007b10(r12_3, rdx4);
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
                goto addr_1400030d1_15;
            }
        } else {
            *reinterpret_cast<void***>(rdx + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rdx11 - 1));
            do {
                fun_140002e50(32, rbx9);
                *reinterpret_cast<void***>(&rax13) = *reinterpret_cast<void***>(rbx9 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
                *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax13 - 1));
            } while (*reinterpret_cast<void***>(&rax13));
            goto addr_140003053_19;
        }
    } else {
        *reinterpret_cast<void***>(rdx + 12) = reinterpret_cast<void**>(0xffffffff);
        goto addr_140003053_19;
    }
    addr_14000305e_21:
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
                fun_140008270();
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
        addr_1400030d1_15:
        if (*reinterpret_cast<unsigned char*>(&eax12 + 1) & 64 || (edx19 = *reinterpret_cast<void***>(rbx9 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx9 + 40)) > reinterpret_cast<signed char>(edx19))) {
            if (!(*reinterpret_cast<unsigned char*>(&eax12 + 1) & 32)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx9)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx9 + 36))))) = 32;
                edx19 = *reinterpret_cast<void***>(rbx9 + 36);
            } else {
                fun_140008270();
                edx19 = *reinterpret_cast<void***>(rbx9 + 36);
            }
        }
        *reinterpret_cast<void***>(rbx9 + 36) = edx19 + 1;
    }
    addr_1400030fc_34:
    return;
    addr_140003053_19:
    if (!edi6) {
        *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xfffffffe);
        goto addr_1400030fc_34;
    } else {
        eax12 = *reinterpret_cast<void***>(rbx9 + 8);
        goto addr_14000305e_21;
    }
}

void** fun_140007b10(void** rcx, void* rdx) {
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

void fun_140003020(signed char* rcx, void** edx, void** r8) {
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
                goto addr_1400030d1_9;
            }
        } else {
            *reinterpret_cast<void***>(r8 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rdx9 - 1));
            do {
                fun_140002e50(32, rbx7);
                *reinterpret_cast<void***>(&rax11) = *reinterpret_cast<void***>(rbx7 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax11) + 4) = 0;
                *reinterpret_cast<void***>(rbx7 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax11 - 1));
            } while (*reinterpret_cast<void***>(&rax11));
            goto addr_140003053_13;
        }
    } else {
        *reinterpret_cast<void***>(r8 + 12) = reinterpret_cast<void**>(0xffffffff);
        goto addr_140003053_13;
    }
    addr_14000305e_15:
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
                fun_140008270();
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
        addr_1400030d1_9:
        if (*reinterpret_cast<unsigned char*>(&eax10 + 1) & 64 || (edx17 = *reinterpret_cast<void***>(rbx7 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx7 + 40)) > reinterpret_cast<signed char>(edx17))) {
            if (!(*reinterpret_cast<unsigned char*>(&eax10 + 1) & 32)) {
                *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx7)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx7 + 36))))) = 32;
                edx17 = *reinterpret_cast<void***>(rbx7 + 36);
            } else {
                fun_140008270();
                edx17 = *reinterpret_cast<void***>(rbx7 + 36);
            }
        }
        *reinterpret_cast<void***>(rbx7 + 36) = edx17 + 1;
    }
    addr_1400030fc_28:
    return;
    addr_140003053_13:
    if (!edi4) {
        *reinterpret_cast<void***>(rbx7 + 12) = reinterpret_cast<void**>(0xfffffffe);
        goto addr_1400030fc_28;
    } else {
        eax10 = *reinterpret_cast<void***>(rbx7 + 8);
        goto addr_14000305e_15;
    }
}

int64_t fun_140002cd0(void** rcx, ...) {
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

int64_t memset = 0xe5aa;

void** fun_1400082a0(void** rcx, ...) {
    goto memset;
}

void fun_140002eb0(uint16_t* rcx, void** edx, void** r8, void** r9, int64_t a5) {
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
    fun_140007d30(r12_8, 0, r13_7, r9);
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
                goto addr_140002fa8_9;
            }
        } else {
            *reinterpret_cast<void***>(rbx10 + 12) = eax13 - 1;
            do {
                fun_140002e50(32, rbx10, 32, rbx10);
                *reinterpret_cast<void***>(&rax14) = *reinterpret_cast<void***>(rbx10 + 12);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax14) + 4) = 0;
                *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax14 - 1));
            } while (*reinterpret_cast<void***>(&rax14));
            goto addr_140002efe_13;
        }
    } else {
        *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(0xffffffff);
        goto addr_140002efe_13;
    }
    do {
        addr_140002f10_15:
        edx15 = *rbp11;
        ++rbp11;
        eax16 = fun_140007d30(r12_8, edx15, r13_7, r9);
        if (reinterpret_cast<uint1_t>(eax16 < 0) | reinterpret_cast<uint1_t>(eax16 == 0)) 
            break;
        *reinterpret_cast<int32_t*>(&rax17) = eax16 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax17) + 4) = 0;
        rsi18 = r12_8;
        r14_19 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(r12_8) + reinterpret_cast<int64_t>(rax17) + 1);
        do {
            addr_140002f56_17:
            edx20 = *reinterpret_cast<void***>(rbx10 + 8);
            ++rsi18;
            if (*reinterpret_cast<unsigned char*>(&edx20 + 1) & 64 || (eax21 = *reinterpret_cast<void***>(rbx10 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx10 + 40)) > reinterpret_cast<signed char>(eax21))) {
                ecx22 = v23;
                if (!(*reinterpret_cast<unsigned char*>(&edx20 + 1) & 32)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx10)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx10 + 36))))) = *reinterpret_cast<signed char*>(&ecx22);
                    eax21 = *reinterpret_cast<void***>(rbx10 + 36);
                } else {
                    fun_140008270();
                    *reinterpret_cast<void***>(rbx10 + 36) = *reinterpret_cast<void***>(rbx10 + 36) + 1;
                    if (rsi18 != r14_19) 
                        goto addr_140002f56_17; else 
                        break;
                }
            }
            *reinterpret_cast<void***>(rbx10 + 36) = eax21 + 1;
        } while (rsi18 != r14_19);
        --edi9;
    } while (edi9);
    goto addr_140002f95_23;
    while (*reinterpret_cast<void***>(&rax24) = *reinterpret_cast<void***>(rbx10 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax24) + 4) = 0, *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax24 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax24)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax24) == 0))) {
        addr_140002fa8_9:
        fun_140002e50(32, rbx10, 32, rbx10);
    }
    addr_140002fc2_25:
    return;
    addr_140002f95_23:
    *reinterpret_cast<void***>(&rax25) = *reinterpret_cast<void***>(rbx10 + 12);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax25) + 4) = 0;
    *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax25 - 1));
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax25)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax25) == 0))) {
        goto addr_140002fa8_9;
    }
    addr_140002efe_13:
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edi9) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edi9 == 0)) {
        *reinterpret_cast<void***>(rbx10 + 12) = reinterpret_cast<void**>(0xfffffffe);
        goto addr_140002fc2_25;
    } else {
        goto addr_140002f10_15;
    }
}

void fun_140003af0(void** rcx, void** rdx, void** r8);

void fun_140003c50(int32_t ecx, void** rdx, void** r8, void** r9) {
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
            goto addr_140003e2b_4;
        }
        if (zf10) {
            addr_140003e2b_4:
            edx11 = *reinterpret_cast<void***>(rbx9 + 16);
            if (reinterpret_cast<signed char>(eax5) > reinterpret_cast<signed char>(edx11)) {
                addr_140003dc9_6:
                eax12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) - reinterpret_cast<unsigned char>(edx11));
                *reinterpret_cast<void***>(rbx9 + 12) = eax12;
                if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(edx11) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(edx11 == 0)) || (edx13 = *reinterpret_cast<void***>(rbx9 + 8), !!(*reinterpret_cast<unsigned char*>(&edx13 + 1) & 8))) {
                    --eax12;
                    *reinterpret_cast<void***>(rbx9 + 12) = eax12;
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0)) 
                        goto addr_140003cb0_8;
                    if (!(*reinterpret_cast<unsigned char*>(rbx9 + 9) & 16)) 
                        goto addr_140003cb0_8;
                    if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
                        goto addr_140003cb0_8;
                } else {
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0)) 
                        goto addr_140003cb4_13;
                    if (!(*reinterpret_cast<unsigned char*>(&edx13 + 1) & 16)) 
                        goto addr_140003cb4_13;
                    if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
                        goto addr_140003cb4_13;
                }
            } else {
                *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xffffffff);
                goto addr_140003e39_18;
            }
        } else {
            *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xffffffff);
            goto addr_140003e39_18;
        }
    } else {
        if (reinterpret_cast<signed char>(eax5) < reinterpret_cast<signed char>(r8)) 
            goto addr_140003c79_21;
        eax5 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax5) - reinterpret_cast<unsigned char>(r8));
        *reinterpret_cast<void***>(r9 + 12) = eax5;
        if (reinterpret_cast<signed char>(eax5) < reinterpret_cast<signed char>(0)) 
            goto addr_140003c79_21;
        edx11 = *reinterpret_cast<void***>(r9 + 16);
        if (reinterpret_cast<signed char>(eax5) > reinterpret_cast<signed char>(edx11)) 
            goto addr_140003dc9_6;
        addr_140003c79_21:
        *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(0xffffffff);
        if (!(*reinterpret_cast<unsigned char*>(rbx9 + 9) & 16)) 
            goto addr_140003cfa_24;
        if (!*reinterpret_cast<uint16_t*>(rbx9 + 32)) 
            goto addr_140003cfa_24;
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
        goto addr_140003cb0_8;
    } else {
        addr_140003cb0_8:
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax12) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax12 == 0)) {
            addr_140003cfa_24:
            if (ebp6) {
                addr_140003e41_30:
                fun_140002e50(45, rbx9);
                goto addr_140003d17_31;
            } else {
                addr_140003d02_32:
                edx17 = *reinterpret_cast<void***>(rbx9 + 8);
                goto addr_140003d05_33;
            }
        } else {
            addr_140003cb4_13:
            if (ebp6) {
                eax18 = eax12 - 1;
                *reinterpret_cast<void***>(rbx9 + 12) = eax18;
                if (!eax18) 
                    goto addr_140003e41_30;
                if (!(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx9 + 8)) & 0x600)) 
                    goto addr_140003cd8_36; else 
                    goto addr_140003eb5_37;
            } else {
                edx17 = *reinterpret_cast<void***>(rbx9 + 8);
                if (!(reinterpret_cast<unsigned char>(edx17) & 0x1c0)) {
                    if (*reinterpret_cast<unsigned char*>(&edx17 + 1) & 6 || (*reinterpret_cast<void***>(&rax19) = *reinterpret_cast<void***>(rbx9 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0, *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax19 - 1)), reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax19)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax19) == 0))) {
                        addr_140003d05_33:
                        if (*reinterpret_cast<unsigned char*>(&edx17 + 1) & 1) {
                            fun_140002e50(43, rbx9);
                            goto addr_140003d17_31;
                        } else {
                            if (reinterpret_cast<unsigned char>(edx17) & 64) {
                                fun_140002e50(32, rbx9);
                                goto addr_140003d17_31;
                            }
                        }
                    } else {
                        goto addr_140003ce0_44;
                    }
                } else {
                    eax18 = eax12 - 1;
                    *reinterpret_cast<void***>(rbx9 + 12) = eax18;
                    if (!eax18) 
                        goto addr_140003d05_33;
                    if (*reinterpret_cast<unsigned char*>(&edx17 + 1) & 6) 
                        goto addr_140003d05_33; else 
                        goto addr_140003cd8_36;
                }
            }
        }
    }
    goto addr_140003cfa_24;
    addr_140003d17_31:
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx9 + 12)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(rbx9 + 12) == 0)) && (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx9 + 8)) & 0x600) == 0x200) {
        *reinterpret_cast<void***>(rbx9 + 12) = *reinterpret_cast<void***>(rbx9 + 12) - 1;
        do {
            fun_140002e50(48, rbx9);
            *reinterpret_cast<void***>(&rax20) = *reinterpret_cast<void***>(rbx9 + 12);
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
            *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax20 - 1));
        } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax20)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax20) == 0)));
    }
    rbp21 = reinterpret_cast<uint16_t*>(rbx9 + 32);
    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rsi8)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rsi8) == 0)) {
        fun_140002e50(48, rbx9);
        eax22 = *reinterpret_cast<void***>(rbx9 + 16);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax22 == 0)) || *reinterpret_cast<unsigned char*>(rbx9 + 9) & 8) {
            fun_140003af0(rbx9, rbx9, r8);
            if (!*reinterpret_cast<void***>(&rsi8)) {
                addr_140003e83_54:
                while (*reinterpret_cast<void***>(&rax23) = *reinterpret_cast<void***>(rbx9 + 16), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax23) + 4) = 0, *reinterpret_cast<void***>(rbx9 + 16) = reinterpret_cast<void**>(static_cast<uint32_t>(rax23 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax23)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax23) == 0))) {
                    eax24 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi7));
                    ecx25 = 48;
                    if (*reinterpret_cast<signed char*>(&eax24)) {
                        ++rdi7;
                        ecx25 = *reinterpret_cast<signed char*>(&eax24);
                    }
                    fun_140002e50(*reinterpret_cast<signed char*>(&ecx25), rbx9, *reinterpret_cast<signed char*>(&ecx25), rbx9);
                }
            } else {
                eax22 = *reinterpret_cast<void***>(rbx9 + 16);
                goto addr_140003f0b_59;
            }
            return;
        }
        if (*reinterpret_cast<void***>(&rsi8)) {
            addr_140003f0b_59:
            *reinterpret_cast<void***>(rbx9 + 16) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(eax22) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&rsi8)));
        } else {
            goto addr_140003e0d_63;
        }
    } else {
        while (1) {
            eax26 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rdi7));
            ecx27 = 48;
            if (*reinterpret_cast<signed char*>(&eax26)) {
                ++rdi7;
                ecx27 = *reinterpret_cast<signed char*>(&eax26);
            }
            fun_140002e50(*reinterpret_cast<signed char*>(&ecx27), rbx9, *reinterpret_cast<signed char*>(&ecx27), rbx9);
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
            fun_140002eb0(rbp21, 1, r8, r9, v28);
        }
        eax22 = *reinterpret_cast<void***>(rbx9 + 16);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax22) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax22 == 0))) 
            goto addr_140003e58_73;
        if (*reinterpret_cast<unsigned char*>(rbx9 + 9) & 8) 
            goto addr_140003e58_73; else 
            goto addr_140003e0d_63;
    }
    do {
        fun_140002e50(48, rbx9);
        *reinterpret_cast<void***>(&rsi8) = *reinterpret_cast<void***>(&rsi8) + 1;
    } while (*reinterpret_cast<void***>(&rsi8));
    goto addr_140003e83_54;
    addr_140003e0d_63:
    *reinterpret_cast<void***>(rbx9 + 16) = eax22 - 1;
    return;
    addr_140003e58_73:
    fun_140003af0(rbx9, rbx9, r8);
    goto addr_140003e83_54;
    addr_140003cd8_36:
    *reinterpret_cast<void***>(rbx9 + 12) = eax18 - 1;
    do {
        addr_140003ce0_44:
        fun_140002e50(32, rbx9);
        *reinterpret_cast<void***>(&rax29) = *reinterpret_cast<void***>(rbx9 + 12);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax29) + 4) = 0;
        *reinterpret_cast<void***>(rbx9 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax29 - 1));
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax29)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax29) == 0)));
    goto addr_140003cfa_24;
    addr_140003eb5_37:
    fun_140002e50(45, rbx9);
    goto addr_140003d17_31;
    addr_140003e39_18:
    if (!ebp6) 
        goto addr_140003d02_32; else 
        goto addr_140003e41_30;
}

struct s38 {
    signed char[32] pad32;
    void** f20;
};

void fun_140003760(void** rcx, void** rdx) {
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
    rax11 = fun_140002cd0(rcx);
    rsp12 = reinterpret_cast<struct s38*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - rax11);
    r13_13 = reinterpret_cast<void**>(&rsp12->f20);
    if (*reinterpret_cast<unsigned char*>(&r12d5) & 0x80) {
        if (reinterpret_cast<signed char>(rcx) < reinterpret_cast<signed char>(0)) {
            rcx = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rcx));
            goto addr_1400037df_10;
        } else {
            *reinterpret_cast<unsigned char*>(&r12d5) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12d5) & 0x7f);
            *reinterpret_cast<void***>(rbx6 + 8) = r12d5;
        }
    }
    if (!rcx) {
        rdi14 = r13_13;
        r8d15 = r14d4;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d4 == 0))) {
            addr_14000387a_14:
            rcx16 = rdi14;
            rdi14 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi14) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d15))));
            rsp17 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp12) - 8);
            *rsp17 = 0x140003890;
            fun_1400082a0(rcx16, rcx16);
            rsp12 = reinterpret_cast<struct s38*>(rsp17 + 1);
        } else {
            goto addr_140003a19_16;
        }
    } else {
        addr_1400037df_10:
        r8_18 = r13_13;
        r10d19 = reinterpret_cast<unsigned char>(r12d5) & 0x1000;
        goto addr_140003800_17;
    }
    addr_140003890_18:
    if (r13_13 == rdi14) {
        addr_140003a28_19:
        *reinterpret_cast<void***>(rdi14) = reinterpret_cast<void**>(48);
        ++rdi14;
        goto addr_140003899_20;
    } else {
        addr_140003899_20:
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi10 == 0)) && (rax20 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi14) - reinterpret_cast<unsigned char>(r13_13)), esi21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi10) - *reinterpret_cast<uint32_t*>(&rax20)), *reinterpret_cast<void***>(rbx6 + 12) = esi21, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi21) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi21 == 0)))) {
            if (reinterpret_cast<unsigned char>(r12d5) & 0x1c0) {
                *reinterpret_cast<void***>(rbx6 + 12) = esi21 - 1;
                if (reinterpret_cast<signed char>(r14d4) >= reinterpret_cast<signed char>(0)) 
                    goto addr_1400038c2_23;
            } else {
                if (reinterpret_cast<signed char>(r14d4) >= reinterpret_cast<signed char>(0)) 
                    goto addr_1400038c2_23;
            }
            if ((reinterpret_cast<unsigned char>(r12d5) & 0x600) != 0x200) {
                addr_1400038c2_23:
                if (!(reinterpret_cast<unsigned char>(r12d5) & 0x400)) {
                    *reinterpret_cast<void***>(&rax22) = *reinterpret_cast<void***>(rbx6 + 12);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax22) + 4) = 0;
                    *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax22 - 1));
                    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax22)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax22) == 0))) {
                        do {
                            rsp23 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp12) - 8);
                            *rsp23 = 0x140003ab5;
                            fun_140002e50(32, rbx6, 32, rbx6);
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
                    *rsp28 = 0x140003a82;
                    fun_1400082a0(rcx27, rcx27);
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
                    goto addr_1400038fa_43;
                } else {
                    rsp32 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp12) - 8);
                    *rsp32 = 0x140003932;
                    fun_140008270();
                    rsp12 = reinterpret_cast<struct s38*>(rsp32 + 1);
                    *reinterpret_cast<void***>(rbx6 + 36) = *reinterpret_cast<void***>(rbx6 + 36) + 1;
                    if (r13_13 == rsi29) 
                        break;
                }
            } else {
                addr_1400038fa_43:
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
                *rsp37 = 0x14000398a;
                fun_140008270();
                rsp12 = reinterpret_cast<struct s38*>(rsp37 + 1);
                edx36 = *reinterpret_cast<void***>(rbx6 + 36);
                eax33 = *reinterpret_cast<void***>(rbx6 + 12);
            }
        }
        *reinterpret_cast<void***>(rbx6 + 36) = edx36 + 1;
    }
    return;
    addr_140003a19_16:
    if (!r14d4) 
        goto addr_140003899_20;
    goto addr_140003a28_19;
    addr_140003800_17:
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
            goto addr_140003899_20; else 
            goto addr_140003a19_16;
    } else {
        rax42 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi14) - reinterpret_cast<unsigned char>(r13_13));
        r8d15 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14d4) - *reinterpret_cast<uint32_t*>(&rax42));
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8d15) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r8d15 == 0)) 
            goto addr_140003890_18; else 
            goto addr_14000387a_14;
    }
}

struct s39 {
    uint64_t f0;
    int32_t f8;
};

void** fun_140002d60(int32_t ecx, struct s39* rdx, void** r8d, void* r9) {
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
            addr_140002d9b_3:
            edx10 = static_cast<int32_t>(r10_8 - 0x403e);
            edx11 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<int16_t*>(&edx10)));
        } else {
            rdx12 = rax6 >> 32;
            if (!(*reinterpret_cast<uint32_t*>(&rdx12) & 0x7fffffff | *reinterpret_cast<uint32_t*>(&rax6))) {
                edx11 = 0;
                goto addr_140002dae_6;
            } else {
                edx11 = 0;
                ecx13 = 0;
                goto addr_140002db4_8;
            }
        }
    } else {
        rdx14 = rax6 >> 32;
        if (!(*reinterpret_cast<uint32_t*>(&rax6) | *reinterpret_cast<uint32_t*>(&rdx14))) {
            edx11 = 0;
        } else {
            if (*reinterpret_cast<int32_t*>(&rdx14) < reinterpret_cast<int32_t>(0)) 
                goto addr_140002d9b_3;
            edx11 = 0xffffbfc3;
        }
    }
    addr_140002dae_6:
    ecx13 = *reinterpret_cast<uint32_t*>(&rcx9) & 0x8000;
    addr_140002db4_8:
    *v15 = ecx13;
    rax16 = fun_140005590("@", edx11, reinterpret_cast<int64_t>(rsp5) + 80, reinterpret_cast<int64_t>(rsp5) + 68);
    return rax16;
}

struct s40 {
    signed char[32] pad32;
    void** f20;
};

void fun_140003ff0(int32_t ecx, void** rdx, void** r8d, void** r9) {
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
    fun_140003c50(r11d8, rdx, 1, r12_9);
    ecx19 = *reinterpret_cast<void***>(r12_9 + 8);
    *reinterpret_cast<void***>(r12_9 + 16) = *reinterpret_cast<void***>(r12_9 + 44);
    ecx20 = reinterpret_cast<unsigned char>(ecx19) & 32 | 69;
    *reinterpret_cast<void***>(r12_9 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(ecx19) | 0x1c0);
    fun_140002e50(*reinterpret_cast<signed char*>(&ecx20), r12_9, *reinterpret_cast<signed char*>(&ecx20), r12_9);
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
    rax30 = fun_140002cd0(rcx21, rcx21);
    rsp31 = reinterpret_cast<struct s40*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8 - 8 + 8 + 32 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - rax30);
    r13_32 = reinterpret_cast<void**>(&rsp31->f20);
    if (*reinterpret_cast<unsigned char*>(&r12d24) & 0x80) {
        if (reinterpret_cast<signed char>(rcx21) < reinterpret_cast<signed char>(0)) {
            rcx21 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rcx21));
            goto addr_1400037df_19;
        } else {
            *reinterpret_cast<unsigned char*>(&r12d24) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12d24) & 0x7f);
            *reinterpret_cast<void***>(rbx25 + 8) = r12d24;
        }
    }
    if (!rcx21) {
        rdi33 = r13_32;
        r8d34 = r14d23;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d23) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d23 == 0))) {
            addr_14000387a_23:
            rcx35 = rdi33;
            rdi33 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi33) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d34))));
            rsp36 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp31) - 8);
            *rsp36 = 0x140003890;
            fun_1400082a0(rcx35, rcx35);
            rsp31 = reinterpret_cast<struct s40*>(rsp36 + 1);
        } else {
            goto addr_140003a19_25;
        }
    } else {
        addr_1400037df_19:
        r8_37 = r13_32;
        r10d38 = reinterpret_cast<unsigned char>(r12d24) & 0x1000;
        goto addr_140003800_26;
    }
    addr_140003890_27:
    if (r13_32 == rdi33) {
        addr_140003a28_28:
        *reinterpret_cast<void***>(rdi33) = reinterpret_cast<void**>(48);
        ++rdi33;
        goto addr_140003899_29;
    } else {
        addr_140003899_29:
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi29) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi29 == 0)) && (rax39 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi33) - reinterpret_cast<unsigned char>(r13_32)), esi40 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi29) - *reinterpret_cast<uint32_t*>(&rax39)), *reinterpret_cast<void***>(rbx25 + 12) = esi40, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi40) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi40 == 0)))) {
            if (reinterpret_cast<unsigned char>(r12d24) & 0x1c0) {
                *reinterpret_cast<void***>(rbx25 + 12) = esi40 - 1;
                if (reinterpret_cast<signed char>(r14d23) >= reinterpret_cast<signed char>(0)) 
                    goto addr_1400038c2_32;
            } else {
                if (reinterpret_cast<signed char>(r14d23) >= reinterpret_cast<signed char>(0)) 
                    goto addr_1400038c2_32;
            }
            if ((reinterpret_cast<unsigned char>(r12d24) & 0x600) != 0x200) {
                addr_1400038c2_32:
                if (!(reinterpret_cast<unsigned char>(r12d24) & 0x400)) {
                    *reinterpret_cast<void***>(&rax41) = *reinterpret_cast<void***>(rbx25 + 12);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
                    *reinterpret_cast<void***>(rbx25 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax41 - 1));
                    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax41)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax41) == 0))) {
                        do {
                            rsp42 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp31) - 8);
                            *rsp42 = 0x140003ab5;
                            fun_140002e50(32, rbx25, 32, rbx25);
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
                    *rsp47 = 0x140003a82;
                    fun_1400082a0(rcx46, rcx46);
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
                    goto addr_1400038fa_52;
                } else {
                    rsp51 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp31) - 8);
                    *rsp51 = 0x140003932;
                    fun_140008270();
                    rsp31 = reinterpret_cast<struct s40*>(rsp51 + 1);
                    *reinterpret_cast<void***>(rbx25 + 36) = *reinterpret_cast<void***>(rbx25 + 36) + 1;
                    if (r13_32 == rsi48) 
                        break;
                }
            } else {
                addr_1400038fa_52:
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
                *rsp56 = 0x14000398a;
                fun_140008270();
                rsp31 = reinterpret_cast<struct s40*>(rsp56 + 1);
                edx55 = *reinterpret_cast<void***>(rbx25 + 36);
                eax52 = *reinterpret_cast<void***>(rbx25 + 12);
            }
        }
        *reinterpret_cast<void***>(rbx25 + 36) = edx55 + 1;
    }
    return;
    addr_140003a19_25:
    if (!r14d23) 
        goto addr_140003899_29;
    goto addr_140003a28_28;
    addr_140003800_26:
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
            goto addr_140003899_29; else 
            goto addr_140003a19_25;
    } else {
        rax61 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi33) - reinterpret_cast<unsigned char>(r13_32));
        r8d34 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14d23) - *reinterpret_cast<uint32_t*>(&rax61));
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8d34) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r8d34 == 0)) 
            goto addr_140003890_27; else 
            goto addr_14000387a_23;
    }
}

void fun_140006e10(int32_t ecx, ...);

int32_t g14000daf0;

void fun_140005400(void** rcx, void** rdx, ...) {
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
            fun_140006e10(0);
            rdx5 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx4 + 8));
            zf6 = g14000daf0 == 2;
            rcx7 = *reinterpret_cast<void***>(0x14000daa0 + rdx5 * 8);
            *reinterpret_cast<void***>(0x14000daa0 + rdx5 * 8) = rcx4;
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

void fun_1400043c0(void** rcx, int64_t rdx, void** r8) {
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
            addr_14000443d_6:
            ecx13 = *reinterpret_cast<void***>(r12_8 + 8);
            rsi14 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) + 48);
            goto addr_140004447_7;
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
                goto addr_140004627_11;
            if (!r8b11) 
                goto addr_14000443d_6;
        }
        addr_140004627_11:
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
                            goto addr_14000465f_19; else 
                            goto addr_1400046b9_20;
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
                addr_14000465f_19:
                eax25 = eax24 + 48;
            } else {
                addr_14000466c_27:
                r9_7 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r9_7) >> 4);
                --edx12;
                if (!edx12) 
                    break; else 
                    continue;
            }
        } else {
            if (eax24 <= 9) 
                goto addr_14000465f_19; else 
                goto addr_14000469c_29;
        }
        addr_140004665_30:
        *reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(&v4) + 3) = *reinterpret_cast<signed char*>(&eax25);
        rbx20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx20) + 1);
        goto addr_14000466c_27;
        addr_14000469c_29:
        eax25 = eax24 + 55 | r11d22;
        goto addr_140004665_30;
    }
    addr_1400046c0_31:
    if (rbx20 != rsi14) {
        addr_14000445d_32:
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
                            fun_140002e50(32, r12_8, 32, r12_8);
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
            goto addr_140004447_7; else 
            goto addr_1400046d6_47;
    }
    if (*reinterpret_cast<unsigned char*>(&r8_21) & 0x80) {
        fun_140002e50(45, r12_8, 45, r12_8);
        rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
    } else {
        if (reinterpret_cast<unsigned char>(r8_21) & 0x100) {
            fun_140002e50(43, r12_8, 43, r12_8);
            rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
        } else {
            r8_21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r8_21) & 64);
            *reinterpret_cast<int32_t*>(&r8_21 + 4) = 0;
            if (r8_21) {
                fun_140002e50(32, r12_8, 32, r12_8);
                rsp6 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8);
            }
        }
    }
    fun_140002e50(48, r12_8, 48, r12_8);
    rdx38 = r12_8;
    ecx39 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_8 + 8)) & 32 | 88;
    fun_140002e50(*reinterpret_cast<signed char*>(&ecx39), rdx38, *reinterpret_cast<signed char*>(&ecx39), rdx38);
    rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) - 8 + 8 - 8 + 8);
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_8 + 12)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(r12_8 + 12) == 0)) && *reinterpret_cast<unsigned char*>(r12_8 + 9) & 2) {
        *reinterpret_cast<void***>(r12_8 + 12) = *reinterpret_cast<void***>(r12_8 + 12) - 1;
        do {
            fun_140002e50(48, r12_8, 48, r12_8);
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
                fun_140003af0(r12_8, rdx38, r8_21);
                rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
            } else {
                if (ecx43 == 44) {
                    eax44 = *reinterpret_cast<uint16_t*>(r12_8 + 32);
                    if (*reinterpret_cast<int16_t*>(&eax44)) {
                        r8_21 = r12_8;
                        rdx38 = reinterpret_cast<void**>(1);
                        *reinterpret_cast<int32_t*>(&rdx38 + 4) = 0;
                        fun_140002eb0(r13_42, 1, r8_21, r9_7, v45);
                        rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
                    }
                } else {
                    rdx38 = r12_8;
                    fun_140002e50(*reinterpret_cast<signed char*>(&ecx43), rdx38, *reinterpret_cast<signed char*>(&ecx43), rdx38);
                    rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
                }
            }
        } while (rbx20 != rsi14);
    }
    while (*reinterpret_cast<void***>(&rax46) = *reinterpret_cast<void***>(r12_8 + 16), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax46) + 4) = 0, *reinterpret_cast<void***>(r12_8 + 16) = reinterpret_cast<void**>(static_cast<uint32_t>(rax46 - 1)), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax46)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax46) == 0))) {
        fun_140002e50(48, r12_8, 48, r12_8);
        rsp40 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8);
    }
    ecx47 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_8 + 8)) & 32 | 80;
    fun_140002e50(*reinterpret_cast<signed char*>(&ecx47), r12_8, *reinterpret_cast<signed char*>(&ecx47), r12_8);
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
    rax57 = fun_140002cd0(rcx48);
    rsp58 = reinterpret_cast<struct s41*>(reinterpret_cast<int64_t>(rsp40) - 8 + 8 + 88 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - rax57);
    r13_59 = reinterpret_cast<void**>(&rsp58->f20);
    if (*reinterpret_cast<unsigned char*>(&r12d51) & 0x80) {
        if (reinterpret_cast<signed char>(rcx48) < reinterpret_cast<signed char>(0)) {
            rcx48 = reinterpret_cast<void**>(-reinterpret_cast<unsigned char>(rcx48));
            goto addr_1400037df_78;
        } else {
            *reinterpret_cast<unsigned char*>(&r12d51) = reinterpret_cast<unsigned char>(*reinterpret_cast<unsigned char*>(&r12d51) & 0x7f);
            *reinterpret_cast<void***>(rbx52 + 8) = r12d51;
        }
    }
    if (!rcx48) {
        rdi60 = r13_59;
        r8d61 = r14d50;
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r14d50) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r14d50 == 0))) {
            addr_14000387a_82:
            rcx62 = rdi60;
            rdi60 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi60) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d61))));
            rsp63 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
            *rsp63 = 0x140003890;
            fun_1400082a0(rcx62, rcx62);
            rsp58 = reinterpret_cast<struct s41*>(rsp63 + 1);
        } else {
            goto addr_140003a19_84;
        }
    } else {
        addr_1400037df_78:
        r8_64 = r13_59;
        r10d65 = reinterpret_cast<unsigned char>(r12d51) & 0x1000;
        goto addr_140003800_85;
    }
    addr_140003890_86:
    if (r13_59 == rdi60) {
        addr_140003a28_87:
        *reinterpret_cast<void***>(rdi60) = reinterpret_cast<void**>(48);
        ++rdi60;
        goto addr_140003899_88;
    } else {
        addr_140003899_88:
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi56) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi56 == 0)) && (rax66 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi60) - reinterpret_cast<unsigned char>(r13_59)), esi67 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(esi56) - *reinterpret_cast<uint32_t*>(&rax66)), *reinterpret_cast<void***>(rbx52 + 12) = esi67, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(esi67) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(esi67 == 0)))) {
            if (reinterpret_cast<unsigned char>(r12d51) & 0x1c0) {
                *reinterpret_cast<void***>(rbx52 + 12) = esi67 - 1;
                if (reinterpret_cast<signed char>(r14d50) >= reinterpret_cast<signed char>(0)) 
                    goto addr_1400038c2_91;
            } else {
                if (reinterpret_cast<signed char>(r14d50) >= reinterpret_cast<signed char>(0)) 
                    goto addr_1400038c2_91;
            }
            if ((reinterpret_cast<unsigned char>(r12d51) & 0x600) != 0x200) {
                addr_1400038c2_91:
                if (!(reinterpret_cast<unsigned char>(r12d51) & 0x400)) {
                    *reinterpret_cast<void***>(&rax68) = *reinterpret_cast<void***>(rbx52 + 12);
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax68) + 4) = 0;
                    *reinterpret_cast<void***>(rbx52 + 12) = reinterpret_cast<void**>(static_cast<uint32_t>(rax68 - 1));
                    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax68)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax68) == 0))) {
                        do {
                            rsp69 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
                            *rsp69 = 0x140003ab5;
                            fun_140002e50(32, rbx52, 32, rbx52);
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
                    *rsp74 = 0x140003a82;
                    fun_1400082a0(rcx73, rcx73);
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
                    goto addr_1400038fa_111;
                } else {
                    rsp78 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp58) - 8);
                    *rsp78 = 0x140003932;
                    fun_140008270();
                    rsp58 = reinterpret_cast<struct s41*>(rsp78 + 1);
                    *reinterpret_cast<void***>(rbx52 + 36) = *reinterpret_cast<void***>(rbx52 + 36) + 1;
                    if (r13_59 == rsi75) 
                        break;
                }
            } else {
                addr_1400038fa_111:
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
                *rsp83 = 0x14000398a;
                fun_140008270();
                rsp58 = reinterpret_cast<struct s41*>(rsp83 + 1);
                edx82 = *reinterpret_cast<void***>(rbx52 + 36);
                eax79 = *reinterpret_cast<void***>(rbx52 + 12);
            }
        }
        *reinterpret_cast<void***>(rbx52 + 36) = edx82 + 1;
    }
    return;
    addr_140003a19_84:
    if (!r14d50) 
        goto addr_140003899_88;
    goto addr_140003a28_87;
    addr_140003800_85:
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
            goto addr_140003899_88; else 
            goto addr_140003a19_84;
    } else {
        rax88 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rdi60) - reinterpret_cast<unsigned char>(r13_59));
        r8d61 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r14d50) - *reinterpret_cast<uint32_t*>(&rax88));
        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r8d61) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r8d61 == 0)) 
            goto addr_140003890_86; else 
            goto addr_14000387a_82;
    }
    addr_140004447_7:
    r8_21 = ecx13;
    *reinterpret_cast<int32_t*>(&r8_21 + 4) = 0;
    rax89 = rsi14;
    if (*reinterpret_cast<unsigned char*>(&ecx13 + 1) & 8) {
        addr_1400046d6_47:
        rax89 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp6) + 49);
        goto addr_140004456_130;
    } else {
        addr_140004456_130:
        rbx20 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax89) + 1);
        goto addr_14000445d_32;
    }
    addr_1400046b9_20:
    goto addr_1400046c0_31;
}

struct s42 {
    signed char[32] pad32;
    void** f20;
};

void** fun_140003250(void** rcx, void** rdx, void** r8) {
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
            goto addr_1400035b0_5;
    } else {
        r15d7 = *reinterpret_cast<void***>(r8 + 16);
        eax11 = reinterpret_cast<void**>(0);
        edi9 = *reinterpret_cast<void***>(r8 + 8);
        if (reinterpret_cast<signed char>(r15d7) >= reinterpret_cast<signed char>(0)) {
            eax11 = r15d7;
        }
        eax10 = eax11 + 18;
        if (reinterpret_cast<unsigned char>(edi9) & 0x1000) 
            goto addr_140003448_9; else 
            goto addr_140003294_10;
    }
    if (!*reinterpret_cast<uint16_t*>(r8 + 32)) {
        r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
        if (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(r12d12)) {
        }
    } else {
        *reinterpret_cast<int32_t*>(&rcx13) = 3;
        *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0;
        goto addr_140003459_16;
    }
    addr_1400035bb_17:
    rax14 = fun_140002cd0(rcx);
    *reinterpret_cast<int32_t*>(&rcx13) = 3;
    rsp15 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax14);
    r13_16 = reinterpret_cast<void**>(&rsp15->f20);
    goto addr_1400035d7_18;
    addr_1400035b0_5:
    r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
    if (reinterpret_cast<signed char>(r12d12) >= reinterpret_cast<signed char>(eax10)) {
        goto addr_1400035bb_17;
    }
    addr_140003448_9:
    *reinterpret_cast<int32_t*>(&rcx13) = 4;
    *reinterpret_cast<int32_t*>(&rcx13 + 4) = 0;
    if (!*reinterpret_cast<uint16_t*>(r8 + 32)) {
        r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
        if (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(r12d12)) {
        }
        rax17 = fun_140002cd0(4);
        r8d18 = 15;
        rsp15 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax17);
        r13_16 = reinterpret_cast<void**>(&rsp15->f20);
    } else {
        addr_140003459_16:
        *reinterpret_cast<void***>(&r8_19) = eax10;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_19) + 4) = 0;
        r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
        r8_20 = reinterpret_cast<uint64_t>(r8_19 * 0xaaaaaaab) >> 33;
        if (reinterpret_cast<signed char>(reinterpret_cast<unsigned char>(eax10) + reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r8_20))) < reinterpret_cast<signed char>(r12d12)) {
            goto addr_140003478_24;
        }
    }
    addr_14000349f_25:
    rsi21 = r13_16;
    if (!rdx) {
        goto addr_1400034b0_27;
    }
    addr_1400032cd_28:
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
        addr_1400034b0_27:
        *reinterpret_cast<void***>(rbx6 + 8) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi9) & 0xfffff7ff);
        if (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r15d7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r15d7 == 0))) {
            addr_140003313_33:
            rax26 = reinterpret_cast<void*>(reinterpret_cast<unsigned char>(rsi21) - reinterpret_cast<unsigned char>(r13_16));
            r8d27 = reinterpret_cast<unsigned char>(r15d7) - *reinterpret_cast<uint32_t*>(&rax26);
            if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(r8d27) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(r8d27 == 0))) {
                rcx28 = rsi21;
                rsi21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi21) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(r8d27))));
                rsp29 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                *rsp29 = 0x14000333e;
                fun_1400082a0(rcx28, rcx28);
                rsp15 = reinterpret_cast<struct s42*>(rsp29 + 1);
                if (rsi21 == r13_16) 
                    goto addr_1400034e4_35; else 
                    goto addr_140003347_36;
            }
        }
    } else {
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(r15d7) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(r15d7 == 0))) 
            goto addr_140003313_33;
    }
    if (r14d5 == 0x6f && *reinterpret_cast<unsigned char*>(rbx6 + 9) & 8) {
        *reinterpret_cast<void***>(rsi21) = reinterpret_cast<void**>(48);
        ++rsi21;
    }
    if (rsi21 != r13_16 || !r15d7) {
        addr_140003347_36:
        rax30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi21) - reinterpret_cast<unsigned char>(r13_16));
        if (reinterpret_cast<signed char>(rax30) < reinterpret_cast<signed char>(r12d12)) {
            addr_140003500_42:
            *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(r12d12) - reinterpret_cast<unsigned char>(rax30));
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
            edi32 = *reinterpret_cast<void***>(rbx6 + 8);
            *reinterpret_cast<void***>(rbx6 + 12) = *reinterpret_cast<void***>(&r12_31);
            if (r14d5 == 0x6f) {
                if (reinterpret_cast<signed char>(r15d7) >= reinterpret_cast<signed char>(0) || (reinterpret_cast<unsigned char>(edi32) & 0x600) != 0x200) {
                    if (!(reinterpret_cast<unsigned char>(edi32) & 0x400)) {
                        addr_140003555_45:
                        r12d33 = *reinterpret_cast<void***>(&r12_31) - 1;
                    } else {
                        if (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16)) 
                            goto addr_1400033a0_47; else 
                            goto addr_14000361e_48;
                    }
                } else {
                    addr_1400036c2_49:
                    *reinterpret_cast<void**>(&r9_34) = reinterpret_cast<void*>(static_cast<int32_t>(r12_31 - 1));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_34) + 4) = 0;
                    rcx35 = rsi21;
                    rsi21 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi21) + reinterpret_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(r9_34 + 1))));
                    rsp36 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                    *rsp36 = 0x1400036e5;
                    rax30 = fun_1400082a0(rcx35, rcx35);
                    rsp15 = reinterpret_cast<struct s42*>(rsp36 + 1);
                    *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&r9_34)) - reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(&r12_31)));
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
                    if (r14d5 == 0x6f || !(reinterpret_cast<unsigned char>(edi32) & 0x800)) {
                        addr_14000353d_50:
                        if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r12_31)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r12_31) == 0)) {
                            addr_140003377_51:
                            if (reinterpret_cast<unsigned char>(r13_16) < reinterpret_cast<unsigned char>(rsi21)) 
                                goto addr_14000339d_52; else 
                                goto addr_14000337c_53;
                        } else {
                            edi32 = *reinterpret_cast<void***>(rbx6 + 8);
                            if (reinterpret_cast<unsigned char>(edi32) & 0x400) 
                                goto addr_140003645_55; else 
                                goto addr_140003555_45;
                        }
                    } else {
                        goto addr_140003532_57;
                    }
                }
            } else {
                if (reinterpret_cast<unsigned char>(edi32) & 0x800) {
                    *reinterpret_cast<void***>(&r12_31) = *reinterpret_cast<void***>(&r12_31) - 2;
                    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&r12_31)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&r12_31) == 0)) 
                        goto addr_140003532_57;
                    if (reinterpret_cast<signed char>(r15d7) < reinterpret_cast<signed char>(0)) 
                        goto addr_140003710_61; else 
                        goto addr_140003532_57;
                }
                if (reinterpret_cast<signed char>(r15d7) < reinterpret_cast<signed char>(0)) {
                    addr_140003710_61:
                    rax30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(edi32) & 0x600);
                    *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
                    if (rax30 == 0x200) 
                        goto addr_1400036c2_49; else 
                        goto addr_14000371e_63;
                } else {
                    addr_140003639_64:
                    if (!(reinterpret_cast<unsigned char>(edi32) & 0x400)) 
                        goto addr_140003555_45; else 
                        goto addr_140003645_55;
                }
            }
        } else {
            addr_140003356_65:
            *reinterpret_cast<void***>(rbx6 + 12) = reinterpret_cast<void**>(0xffffffff);
            if (r14d5 == 0x6f) {
                *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(0xffffffff);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
                if (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16)) 
                    goto addr_14000339d_52;
                goto addr_140003434_68;
            } else {
                *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(0xffffffff);
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
                if (*reinterpret_cast<unsigned char*>(rbx6 + 9) & 8) {
                    *reinterpret_cast<void***>(rsi21) = *reinterpret_cast<void***>(&r14d5);
                    rsi21 = rsi21 + 2;
                    *reinterpret_cast<void***>(rsi21 + 0xffffffffffffffff) = reinterpret_cast<void**>(48);
                    goto addr_140003377_51;
                }
            }
        }
    } else {
        addr_1400034e4_35:
        *reinterpret_cast<void***>(rsi21) = reinterpret_cast<void**>(48);
        ++rsi21;
        rax30 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rsi21) - reinterpret_cast<unsigned char>(r13_16));
        if (reinterpret_cast<signed char>(rax30) >= reinterpret_cast<signed char>(r12d12)) 
            goto addr_140003356_65; else 
            goto addr_1400034fa_71;
    }
    do {
        rsp37 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
        *rsp37 = 0x14000356d;
        fun_140002e50(32, rbx6, 32, rbx6);
        rsp15 = reinterpret_cast<struct s42*>(rsp37 + 1);
        rax30 = r12d33;
        *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
        --r12d33;
    } while (!reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rax30) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rax30 == 0)));
    *reinterpret_cast<void***>(&r12_31) = reinterpret_cast<void**>(0xffffffff);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_31) + 4) = 0;
    if (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16)) {
        do {
            addr_14000339d_52:
            edi32 = *reinterpret_cast<void***>(rbx6 + 8);
            addr_1400033a0_47:
            --rsi21;
            if (reinterpret_cast<unsigned char>(edi32) & 0x4000 || (eax38 = *reinterpret_cast<void***>(rbx6 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx6 + 40)) > reinterpret_cast<signed char>(eax38))) {
                ecx39 = reinterpret_cast<signed char>(*reinterpret_cast<void***>(rsi21));
                if (!(reinterpret_cast<unsigned char>(edi32) & 0x2000)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx6 + 36))))) = *reinterpret_cast<signed char*>(&ecx39);
                    eax38 = *reinterpret_cast<void***>(rbx6 + 36);
                } else {
                    rsp40 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                    *rsp40 = 0x1400033c7;
                    fun_140008270();
                    rsp15 = reinterpret_cast<struct s42*>(rsp40 + 1);
                    rax30 = *reinterpret_cast<void***>(rbx6 + 36) + 1;
                    *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
                    *reinterpret_cast<void***>(rbx6 + 36) = rax30;
                    if (reinterpret_cast<unsigned char>(rsi21) > reinterpret_cast<unsigned char>(r13_16)) 
                        goto addr_14000339d_52; else 
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
            addr_1400033fe_80:
            edi32 = *reinterpret_cast<void***>(rbx6 + 8);
            addr_140003401_81:
            if (reinterpret_cast<unsigned char>(edi32) & 0x4000 || (eax42 = *reinterpret_cast<void***>(rbx6 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx6 + 40)) > reinterpret_cast<signed char>(eax42))) {
                if (!(reinterpret_cast<unsigned char>(edi32) & 0x2000)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx6)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx6 + 36))))) = 32;
                    eax42 = *reinterpret_cast<void***>(rbx6 + 36);
                } else {
                    rsp43 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
                    *rsp43 = 0x140003426;
                    fun_140008270();
                    rsp15 = reinterpret_cast<struct s42*>(rsp43 + 1);
                    rax30 = *reinterpret_cast<void***>(rbx6 + 36) + 1;
                    *reinterpret_cast<int32_t*>(&rax30 + 4) = 0;
                    *reinterpret_cast<void***>(rbx6 + 36) = rax30;
                    cf44 = esi41 < 1;
                    --esi41;
                    if (!cf44) 
                        goto addr_1400033fe_80; else 
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
    addr_140003434_68:
    return rax30;
    addr_14000361e_48:
    esi41 = static_cast<uint32_t>(r12_31 - 1);
    goto addr_140003401_81;
    addr_14000337c_53:
    goto addr_140003434_68;
    addr_140003645_55:
    if (reinterpret_cast<unsigned char>(r13_16) < reinterpret_cast<unsigned char>(rsi21)) 
        goto addr_1400033a0_47;
    goto addr_14000361e_48;
    addr_14000371e_63:
    if (reinterpret_cast<unsigned char>(edi32) & 0x800) {
        addr_140003532_57:
        *reinterpret_cast<void***>(rsi21) = *reinterpret_cast<void***>(&r14d5);
        rsi21 = rsi21 + 2;
        *reinterpret_cast<void***>(rsi21 + 0xffffffffffffffff) = reinterpret_cast<void**>(48);
        goto addr_14000353d_50;
    } else {
        goto addr_140003639_64;
    }
    addr_1400034fa_71:
    goto addr_140003500_42;
    addr_140003478_24:
    rax46 = fun_140002cd0(rcx13);
    rsp15 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax46);
    r13_16 = reinterpret_cast<void**>(&rsp15->f20);
    if (r14d5 == 0x6f) {
        addr_1400035d7_18:
        r8d18 = 7;
    } else {
        r8d18 = 15;
        goto addr_14000349f_25;
    }
    addr_1400032c1_90:
    rsi21 = r13_16;
    if (!rdx) 
        goto addr_1400034b0_27; else 
        goto addr_1400032cd_28;
    addr_140003294_10:
    r12d12 = *reinterpret_cast<void***>(rbx6 + 12);
    if (reinterpret_cast<signed char>(eax10) < reinterpret_cast<signed char>(r12d12)) {
    }
    rax47 = fun_140002cd0(rcx);
    *reinterpret_cast<int32_t*>(&rcx13) = 4;
    r8d18 = 15;
    rsp15 = reinterpret_cast<struct s42*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax47);
    r13_16 = reinterpret_cast<void**>(&rsp15->f20);
    goto addr_1400032c1_90;
}

void fun_1400031a0(uint32_t ecx, void** rdx, void** r8, ...);

void fun_1400040d0(void* rcx, void** rdx) {
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
    rax5 = fun_140002d60(2, reinterpret_cast<int64_t>(rsp3) + 48, r8d4, reinterpret_cast<int64_t>(rsp3) + 76);
    if (v6 == 0xffff8000) {
        fun_1400031a0(v7, rax5, rdx, v7, rax5, rdx);
        fun_140005400(rax5, rax5, rax5, rax5);
        return;
    } else {
        fun_140003ff0(v8, rax5, v6, rdx);
        fun_140005400(rax5, rax5);
        return;
    }
}

void fun_140004170(void* rcx, void** rdx) {
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
    rax6 = fun_140002d60(3, reinterpret_cast<int64_t>(rsp3) + 48, r8d4, reinterpret_cast<int64_t>(rsp3) + 76);
    *reinterpret_cast<int32_t*>(&r8_7) = v8;
    *reinterpret_cast<int32_t*>(&r8_7 + 4) = 0;
    r12_9 = rax6;
    if (*reinterpret_cast<int32_t*>(&r8_7) == 0xffff8000) {
        rdx10 = rax6;
        fun_1400031a0(v11, rdx10, rbx5, v11, rdx10, rbx5);
    } else {
        fun_140003c50(v12, rax6, r8_7, rbx5);
        eax13 = *reinterpret_cast<void***>(rbx5 + 12);
        while (rdx10 = eax13, *reinterpret_cast<int32_t*>(&rdx10 + 4) = 0, --eax13, *reinterpret_cast<void***>(rbx5 + 12) = eax13, !(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(rdx10) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(rdx10 == 0))) {
            ecx14 = *reinterpret_cast<void***>(rbx5 + 8);
            if (*reinterpret_cast<unsigned char*>(&ecx14 + 1) & 64 || (edx15 = *reinterpret_cast<void***>(rbx5 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx5 + 40)) > reinterpret_cast<signed char>(edx15))) {
                if (!(*reinterpret_cast<unsigned char*>(&ecx14 + 1) & 32)) {
                    *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rbx5 + 36))))) = 32;
                    edx15 = *reinterpret_cast<void***>(rbx5 + 36);
                    eax13 = *reinterpret_cast<void***>(rbx5 + 12);
                } else {
                    fun_140008270();
                    edx15 = *reinterpret_cast<void***>(rbx5 + 36);
                    eax13 = *reinterpret_cast<void***>(rbx5 + 12);
                }
            }
            *reinterpret_cast<void***>(rbx5 + 36) = edx15 + 1;
        }
    }
    fun_140005400(r12_9, rdx10, r12_9, rdx10);
    return;
}

void fun_140004250(void* rcx, void** rdx) {
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
    rax6 = fun_140002d60(2, reinterpret_cast<int64_t>(rsp3) + 48, r8d4, reinterpret_cast<int64_t>(rsp3) + 76);
    r12_7 = rax6;
    if (v8 == 0xffff8000) {
        rdx9 = rax6;
        fun_1400031a0(v10, rdx9, rbx5, v10, rdx9, rbx5);
    } else {
        eax11 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx5 + 8)) & 0x800;
        if (reinterpret_cast<signed char>(v8) < reinterpret_cast<signed char>(0xfffffffd) || reinterpret_cast<signed char>(v8) > reinterpret_cast<signed char>(*reinterpret_cast<void***>(rbx5 + 16))) {
            if (eax11) {
                eax12 = *reinterpret_cast<void***>(rbx5 + 16) - 1;
            } else {
                rax13 = fun_1400082b8(r12_7, r12_7);
                eax12 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rax13)) - 1);
            }
            *reinterpret_cast<void***>(rbx5 + 16) = eax12;
            rdx9 = r12_7;
            fun_140003ff0(v14, rdx9, v8, rbx5);
        } else {
            if (!eax11) {
                rax15 = fun_1400082b8(r12_7);
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
            fun_140003c50(v18, r12_7, r8_17, rbx5);
            while (*reinterpret_cast<void***>(&rax19) = *reinterpret_cast<void***>(rbx5 + 12), *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax19) + 4) = 0, rdx9 = reinterpret_cast<void**>(static_cast<uint32_t>(rax19 - 1)), *reinterpret_cast<int32_t*>(&rdx9 + 4) = 0, *reinterpret_cast<void***>(rbx5 + 12) = rdx9, !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(*reinterpret_cast<void***>(&rax19)) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(*reinterpret_cast<void***>(&rax19) == 0))) {
                fun_140002e50(32, rbx5, 32, rbx5);
            }
        }
    }
    fun_140005400(r12_7, rdx9, r12_7, rdx9);
    return;
}

struct s43 {
    unsigned char* f0;
    unsigned char* f8;
};

int64_t localeconv = 0xe588;

struct s43* fun_140008288() {
    goto localeconv;
}

int32_t fun_140007e80(void** rcx, unsigned char* rdx, uint64_t r8, void** r9);

void** fun_140008000(void** rcx, unsigned char* rdx, uint64_t r8, void** r9, int64_t a5) {
    void** r12_6;
    void** r9_7;
    int32_t eax8;
    int64_t rax9;

    r12_6 = rcx;
    if (!rcx) {
        r12_6 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 64 + 62);
    }
    fun_1400081f0();
    fun_1400081e8();
    r9_7 = reinterpret_cast<void**>(0x14000db78);
    if (r9) {
        r9_7 = r9;
    }
    eax8 = fun_140007e80(r12_6, rdx, r8, r9_7);
    rax9 = eax8;
    return *reinterpret_cast<void***>(&rax9);
}

void fun_1400031a0(uint32_t ecx, void** rdx, void** r8, ...) {
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
    fun_140003020(r11_6, reinterpret_cast<int32_t>(*reinterpret_cast<void**>(&rdx11)) - reinterpret_cast<uint32_t>(*reinterpret_cast<void**>(&r11_6)), r8);
    return;
}

void** fun_140007b40(uint16_t* rcx, int64_t rdx) {
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
        goto addr_140007b64_4;
    } else {
        goto addr_140007b64_4;
    }
    rax4 = r8_3;
    addr_140007b64_4:
    return *reinterpret_cast<void***>(&rax4);
}

void** g140009060 = reinterpret_cast<void**>(0xa0);

void** fun_140006f40(void** ecx, ...) {
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

    fun_140006e10(0);
    if (reinterpret_cast<signed char>(ecx) <= reinterpret_cast<signed char>(9)) {
        rcx2 = reinterpret_cast<int32_t>(ecx);
        rax3 = *reinterpret_cast<void***>(0x14000daa0 + rcx2 * 8);
        if (rax3) {
            zf4 = g14000daf0 == 2;
            *reinterpret_cast<void***>(0x14000daa0 + rcx2 * 8) = *reinterpret_cast<void***>(rax3);
            if (!zf4) 
                goto addr_140006f8b_4; else 
                goto addr_140006fc3_5;
        }
        ecx5 = ecx;
        *reinterpret_cast<void***>(&rsi6) = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx5));
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi6) + 4) = 0;
        rax3 = g140009060;
        rcx7 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(static_cast<int32_t>(rsi6 + 9) * 4 - 1) >> 3);
        rdx8 = reinterpret_cast<void**>((reinterpret_cast<int64_t>(rax3 - 0x14000d1a0) >> 3) + reinterpret_cast<uint64_t>(rcx7));
        if (reinterpret_cast<unsigned char>(rdx8) <= reinterpret_cast<unsigned char>(0x120)) 
            goto addr_140007022_7;
    } else {
        ecx9 = ecx;
        *reinterpret_cast<void***>(&rsi6) = reinterpret_cast<void**>(1 << *reinterpret_cast<unsigned char*>(&ecx9));
        rcx10 = reinterpret_cast<uint64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(&rsi6)) * 4 + 35) >> 3;
        *reinterpret_cast<int32_t*>(&rcx7) = *reinterpret_cast<int32_t*>(&rcx10);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
    }
    rax3 = fun_140008290(reinterpret_cast<uint64_t>(rcx7) << 3, rdx8);
    if (!rax3) {
        addr_140006f93_10:
        return rax3;
    } else {
        addr_140006f7c_11:
        zf11 = g14000daf0 == 2;
        *reinterpret_cast<void***>(rax3 + 8) = ecx;
        *reinterpret_cast<void***>(rax3 + 12) = *reinterpret_cast<void***>(&rsi6);
        if (zf11) {
            addr_140006fc3_5:
            LeaveCriticalSection(0x14000db00);
            rax3 = rax3;
            goto addr_140006f8b_4;
        } else {
            addr_140006f8b_4:
            *reinterpret_cast<void***>(rax3 + 16) = reinterpret_cast<void**>(0);
            goto addr_140006f93_10;
        }
    }
    addr_140007022_7:
    g140009060 = rax3 + reinterpret_cast<uint64_t>(rcx7) * 8;
    goto addr_140006f7c_11;
}

uint32_t fun_1400076a0(void** rcx, void** rdx, ...) {
    int64_t rax3;
    uint32_t r9d4;
    void* r8_5;
    void** rcx6;
    void** rax7;
    void*** rdx8;

    rax3 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rdx + 20));
    r9d4 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 20)) - *reinterpret_cast<uint32_t*>(&rax3);
    if (r9d4) {
        addr_1400076e4_2:
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
        goto addr_1400076e4_2;
    }
    r9d4 = r9d4 - (r9d4 + reinterpret_cast<uint1_t>(r9d4 < r9d4 + reinterpret_cast<uint1_t>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax7)) < reinterpret_cast<unsigned char>(*rdx8)))) | 1;
    goto addr_1400076e4_2;
}

void** fun_140005380(struct s28* rcx, void*** rdx, int32_t r8d) {
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
    rax8 = fun_140006f40(ebx6);
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

void* fun_140006dc0(void** rcx) {
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
        goto addr_140006dff_4;
    } else {
        goto addr_140006dff_4;
    }
    if (reinterpret_cast<unsigned char>(rcx4) > reinterpret_cast<unsigned char>(rax3)) {
        __asm__("rep bsf edx, edx");
        r8d2 = reinterpret_cast<void*>(reinterpret_cast<uint32_t>(r8d2) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax3)));
    }
    addr_140006dff_4:
    return r8d2;
}

uint32_t fun_1400078c0(void** rcx, uint32_t* rdx) {
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

void** fun_140005340(uint32_t ecx) {
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
    rax4 = fun_140006f40(ebx2);
    *reinterpret_cast<void***>(rax4) = ebx2;
    return rax4 + 4;
}

void** g14000daa8;

void** fun_140007160(void** ecx, ...) {
    void** rax2;
    int1_t zf3;
    void** rdx4;
    int1_t zf5;

    fun_140006e10(0);
    rax2 = g14000daa8;
    if (rax2) {
        zf3 = g14000daf0 == 2;
        g14000daa8 = *reinterpret_cast<void***>(rax2);
        if (zf3) 
            goto addr_1400071f3_3; else 
            goto addr_14000718d_4;
    }
    rax2 = g140009060;
    rdx4 = reinterpret_cast<void**>((reinterpret_cast<int64_t>(rax2 - 0x14000d1a0) >> 3) + 5);
    if (reinterpret_cast<unsigned char>(rdx4) <= reinterpret_cast<unsigned char>(0x120)) {
        g140009060 = rax2 + 40;
        goto addr_1400071dc_7;
    } else {
        rax2 = fun_140008290(40, rdx4);
        if (!rax2) {
            addr_14000719e_9:
            return rax2;
        } else {
            addr_1400071dc_7:
            zf5 = g14000daf0 == 2;
            *reinterpret_cast<void***>(rax2 + 8) = reinterpret_cast<void**>(0x200000001);
            if (!zf5) {
                addr_14000718d_4:
                *reinterpret_cast<void***>(rax2 + 24) = ecx;
                *reinterpret_cast<void***>(rax2 + 16) = reinterpret_cast<void**>(0x100000000);
                goto addr_14000719e_9;
            } else {
                addr_1400071f3_3:
                LeaveCriticalSection(0x14000db00);
                rax2 = rax2;
                goto addr_14000718d_4;
            }
        }
    }
}

void** g14000d180;

void** fun_140007380(void** rcx, uint32_t edx, ...) {
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
    if (!eax5 || (*reinterpret_cast<uint32_t*>(&rdx2) = *reinterpret_cast<uint32_t*>(0x14000a5a0 + (eax5 - 1) * 4), *reinterpret_cast<int32_t*>(&rdx2 + 4) = 0, rax6 = fun_1400070b0(rcx, *reinterpret_cast<uint32_t*>(&rdx2), 0), r13_3 = rax6, !!rax6)) {
        ebx7 = reinterpret_cast<int32_t>(ebx4) >> 2;
        r12_8 = r13_3;
        if (!ebx7) {
            addr_14000741b_3:
            return r12_8;
        } else {
            rdi9 = g14000d180;
            if (!rdi9) {
                fun_140006e10(1, 1);
                rdi9 = g14000d180;
                if (!rdi9) {
                    rax10 = fun_140006f40(1, 1);
                    rdi9 = rax10;
                    if (!rax10) {
                        g14000d180 = reinterpret_cast<void**>(0);
                        *reinterpret_cast<int32_t*>(&r12_8) = 0;
                        *reinterpret_cast<int32_t*>(&r12_8 + 4) = 0;
                        goto addr_14000741b_3;
                    } else {
                        g14000d180 = rdi9;
                        *reinterpret_cast<void***>(rdi9 + 20) = reinterpret_cast<void**>(0x27100000001);
                        *reinterpret_cast<void***>(rdi9) = reinterpret_cast<void**>(0);
                        goto addr_140007524_9;
                    }
                } else {
                    addr_140007524_9:
                    zf11 = g14000daf0 == 2;
                    if (zf11) {
                        LeaveCriticalSection(0x14000db28, rdx2);
                        goto addr_1400073b4_11;
                    }
                }
            } else {
                addr_1400073b4_11:
                r12_8 = r13_3;
            }
        }
        while (1) {
            if (!(*reinterpret_cast<unsigned char*>(&ebx7) & 1)) {
                addr_1400073d0_13:
                ebx7 = ebx7 >> 1;
                if (!ebx7) 
                    goto addr_14000741b_3;
            } else {
                rdx2 = rdi9;
                rax12 = fun_140007220(r12_8, rdx2);
                if (!rax12) 
                    break;
                if (!r12_8) 
                    goto addr_1400074a0_16; else 
                    goto addr_140007404_17;
            }
            addr_1400073d4_18:
            rsi13 = *reinterpret_cast<void***>(rdi9);
            if (!rsi13) {
                fun_140006e10(1, 1);
                rsi13 = *reinterpret_cast<void***>(rdi9);
                if (!rsi13) {
                    rdx2 = rdi9;
                    rax14 = fun_140007220(rdi9, rdx2);
                    *reinterpret_cast<void***>(rdi9) = rax14;
                    rsi13 = rax14;
                    if (!rax14) 
                        break;
                    *reinterpret_cast<void***>(rax14) = reinterpret_cast<void**>(0);
                }
                zf15 = g14000daf0 == 2;
                if (zf15) {
                    LeaveCriticalSection(0x14000db28, rdx2);
                }
            }
            rdi9 = rsi13;
            continue;
            addr_1400074a0_16:
            r12_8 = rax12;
            goto addr_1400073d0_13;
            addr_140007404_17:
            if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_8 + 8)) <= reinterpret_cast<signed char>(9)) {
                fun_140006e10(0, 0);
                rax16 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_8 + 8));
                zf17 = g14000daf0 == 2;
                rdx2 = *reinterpret_cast<void***>(0x14000daa0 + rax16 * 8);
                *reinterpret_cast<void***>(0x14000daa0 + rax16 * 8) = r12_8;
                *reinterpret_cast<void***>(r12_8) = rdx2;
                r12_8 = rax12;
                if (zf17) {
                    LeaveCriticalSection(0x14000db00);
                    goto addr_1400073d0_13;
                }
            } else {
                rcx18 = r12_8;
                r12_8 = rax12;
                fun_140008278(rcx18, rdx2);
                ebx7 = ebx7 >> 1;
                if (ebx7) 
                    goto addr_1400073d4_18; else 
                    goto addr_14000741b_3;
            }
        }
    }
    return 0;
}

void** fun_140007220(void** rcx, void** rdx) {
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
    rax11 = fun_140006f40(ecx10);
    r12_12 = rax11;
    if (rax11) {
        r11_13 = rax11 + 24;
        rsi14 = r11_13 + reinterpret_cast<int32_t>(ebx9) * 4;
        if (reinterpret_cast<unsigned char>(r11_13) < reinterpret_cast<unsigned char>(rsi14)) {
            rax15 = fun_1400082a0(r11_13);
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

void fun_140007040(void** rcx, ...) {
    int64_t rdx2;
    int1_t zf3;
    void** rcx4;

    if (rcx) {
        if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(rcx + 8)) <= reinterpret_cast<signed char>(9)) {
            fun_140006e10(0);
            rdx2 = reinterpret_cast<int32_t>(*reinterpret_cast<void***>(rcx + 8));
            zf3 = g14000daf0 == 2;
            rcx4 = *reinterpret_cast<void***>(0x14000daa0 + rdx2 * 8);
            *reinterpret_cast<void***>(0x14000daa0 + rdx2 * 8) = rcx;
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

void** fun_140007590(void** rcx, uint32_t edx, ...) {
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
    rax10 = fun_140006f40(ecx4);
    r14_11 = rax10;
    if (!rax10) {
        addr_14000767d_4:
        return r14_11;
    } else {
        rdi12 = rax10 + 24;
        if (!(reinterpret_cast<uint1_t>(reinterpret_cast<int32_t>(esi6) < reinterpret_cast<int32_t>(0)) | reinterpret_cast<uint1_t>(esi6 == 0))) {
            rcx13 = rdi12;
            rdi12 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi12) + (reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(esi6))) << 2));
            fun_1400082a0(rcx13);
        }
        rsi14 = r12_3 + 24;
        r9_15 = rsi14 + reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_3 + 20)) * 4;
        ebx16 = ebx5 & 31;
        if (ebx16) 
            goto addr_140007611_8;
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
    goto addr_14000769c_17;
    addr_140007671_18:
    *reinterpret_cast<void***>(r14_11 + 20) = *reinterpret_cast<void***>(&rbp8);
    fun_140007040(r12_3, r12_3);
    goto addr_14000767d_4;
    addr_14000769c_17:
    goto addr_140007671_18;
    addr_140007611_8:
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
        goto addr_140007668_21;
    rax24 = reinterpret_cast<void*>(4);
    addr_140007668_21:
    if (edx20) {
        *reinterpret_cast<void***>(&rbp8) = r13d9;
    }
    *reinterpret_cast<uint32_t*>(reinterpret_cast<unsigned char>(rdi12) + reinterpret_cast<uint64_t>(rax24)) = edx20;
    goto addr_140007671_18;
}

void** fun_1400070b0(void** rcx, uint32_t edx, uint32_t r8d) {
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
        goto addr_140007112_4;
    if (reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_5 + 12)) <= reinterpret_cast<signed char>(esi4)) {
        *reinterpret_cast<void***>(&rax12) = *reinterpret_cast<void***>(r12_5 + 8);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        rax13 = fun_140006f40(static_cast<uint32_t>(rax12 + 1));
        r13_11 = rax13;
        if (!rax13) {
            addr_140007112_4:
            return r13_11;
        } else {
            r8_14 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_5 + 20)) * 4 + 8);
            fun_140008298(rax13 + 16, r12_5 + 16, r8_14);
            rcx15 = r12_5;
            r12_5 = r13_11;
            fun_140007040(rcx15, rcx15);
        }
    }
    r13_11 = r12_5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<uint64_t>(r12_5 + reinterpret_cast<int32_t>(esi4) * 4) + 24) = *reinterpret_cast<int32_t*>(&rbx6);
    *reinterpret_cast<void***>(r12_5 + 20) = esi4 + 1;
    goto addr_140007112_4;
}

int64_t fun_140005420(void** rcx, void** rdx, ...) {
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
        addr_140005528_2:
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
            addr_1400054d3_4:
            eax18 = fun_1400076a0(r12_4, r11_5);
            if (reinterpret_cast<int32_t>(eax18) < reinterpret_cast<int32_t>(0)) {
                addr_140005524_5:
                *reinterpret_cast<uint32_t*>(&rax3) = v16;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
                goto addr_140005528_2;
            } else {
                addr_1400054e2_6:
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
                goto addr_14000556b_10; else 
                goto addr_1400054d3_4;
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
        goto addr_140005524_5;
    }
    addr_14000556b_10:
    while ((r10_11 = r10_11 - 4, reinterpret_cast<unsigned char>(rbp8) < reinterpret_cast<unsigned char>(r10_11)) && !*reinterpret_cast<void***>(r10_11)) {
        --esi6;
    }
    *reinterpret_cast<void***>(r12_4 + 20) = esi6;
    eax37 = fun_1400076a0(r12_4, r11_5);
    if (reinterpret_cast<int32_t>(eax37) >= reinterpret_cast<int32_t>(0)) 
        goto addr_1400054e2_6;
    goto addr_140005524_5;
}

int64_t _errno = 0xe50e;

int32_t* fun_140008228(int64_t rcx, ...) {
    goto _errno;
}

int64_t ___mb_cur_max_func = 0xe484;

int32_t fun_1400081f0() {
    goto ___mb_cur_max_func;
}

int64_t ___lc_codepage_func = 0xe46e;

int32_t fun_1400081e8() {
    goto ___lc_codepage_func;
}

int64_t WideCharToMultiByte = 0xe440;

int32_t fun_140007ca0(signed char* rcx, uint16_t dx, int32_t r8d, int32_t r9d) {
    int64_t rcx5;
    int32_t eax6;
    int32_t* rax7;

    *reinterpret_cast<int32_t*>(&rcx5) = r8d;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx5) + 4) = 0;
    if (r8d) {
        eax6 = reinterpret_cast<int32_t>(WideCharToMultiByte(rcx5));
        if (!eax6 || !1) {
            addr_140007d14_3:
            rax7 = fun_140008228(rcx5, rcx5);
            *rax7 = 42;
            return -1;
        } else {
            addr_140007cc2_4:
            return eax6;
        }
    } else {
        if (dx > 0xff) 
            goto addr_140007d14_3;
        *rcx = *reinterpret_cast<signed char*>(&dx);
        eax6 = 1;
        goto addr_140007cc2_4;
    }
}

int64_t MultiByteToWideChar = 0xe3d4;

int64_t IsDBCSLeadByteEx = 0xe3a8;

int32_t fun_140007e80(void** rcx, unsigned char* rdx, uint64_t r8, void** r9) {
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
                goto addr_140007f38_8;
            if (*reinterpret_cast<signed char*>(&eax6)) 
                goto addr_140007f70_10; else 
                goto addr_140007ec9_11;
        }
    }
    addr_140007f5f_12:
    return eax5;
    addr_140007f70_10:
    r8_9 = reinterpret_cast<unsigned char*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 72 + 60);
    addr_140007f0e_13:
    *reinterpret_cast<int32_t*>(&rcx10) = v11;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    eax12 = reinterpret_cast<int32_t>(MultiByteToWideChar(rcx10, 8, r8_9, 2));
    if (eax12) {
        return 2;
    }
    addr_140007ec9_11:
    *reinterpret_cast<int32_t*>(&rcx13) = v14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
    eax15 = reinterpret_cast<int32_t>(IsDBCSLeadByteEx(rcx13));
    if (!eax15) {
        addr_140007f38_8:
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
            goto addr_140007f5f_12;
        } else {
            r8_9 = rdx;
            goto addr_140007f0e_13;
        }
    }
    *reinterpret_cast<int32_t*>(&rcx10) = v19;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx10) + 4) = 0;
    eax20 = reinterpret_cast<int32_t>(MultiByteToWideChar(rcx10, 8, rdx, 1));
    if (!eax20) {
        rax21 = fun_140008228(rcx10, rcx10);
        *rax21 = 42;
        eax5 = -1;
        goto addr_140007f5f_12;
    } else {
        eax5 = 1;
        goto addr_140007f5f_12;
    }
}

int64_t __setusermatherr = 0xe4d6;

void fun_140002490(int64_t rcx) {
    g14000d0b0 = rcx;
    goto __setusermatherr;
}

int64_t __getmainargs = 0xe49a;

void fun_1400081f8(int64_t rcx, int64_t rdx, int64_t r8, int64_t r9) {
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

void fun_140002100(void** rcx, void** rdx, void** r8, void** r9) {
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

    *reinterpret_cast<int32_t*>(&rsi5) = g14000d0a0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi5) + 4) = 0;
    if (*reinterpret_cast<int32_t*>(&rsi5)) 
        goto addr_14000211f_2;
    g14000d0a0 = 1;
    fun_140002a90(rcx, rdx, r8, r9);
    rax6 = fun_140002cd0(rcx);
    rdi7 = g14000a740;
    rbx8 = g14000a750;
    g14000d0a4 = 0;
    rsp9 = reinterpret_cast<struct s45*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 - rax6);
    g14000d0a8 = reinterpret_cast<struct s5*>(&rsp9->f30);
    rax10 = reinterpret_cast<uint64_t>(rdi7) - reinterpret_cast<uint64_t>(rbx8);
    if (reinterpret_cast<int64_t>(rax10) <= reinterpret_cast<int64_t>(7)) 
        goto addr_14000211f_2;
    if (reinterpret_cast<int64_t>(rax10) > reinterpret_cast<int64_t>(11)) {
        if (rbx8->f0) 
            goto addr_1400023c8_6;
        eax11 = rbx8->f4;
        if (!(eax11 | rbx8->f8)) 
            goto addr_14000232e_8;
    } else {
        addr_140002195_9:
        if (rbx8->f0) 
            goto addr_1400023c8_6; else 
            goto addr_14000219f_10;
    }
    addr_1400021a2_11:
    if (eax11) {
        addr_1400023c8_6:
        if (reinterpret_cast<uint64_t>(rbx8) >= reinterpret_cast<uint64_t>(rdi7)) {
            addr_14000211f_2:
            return;
        } else {
            r14_12 = g14000a730;
            do {
                *reinterpret_cast<uint32_t*>(&r12_13) = rbx8->f4;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_13) + 4) = 0;
                rbx8 = reinterpret_cast<struct s10*>(&rbx8->f8);
                r12_14 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(r12_13) + reinterpret_cast<uint64_t>(r14_12));
                r13d15 = reinterpret_cast<void**>(reinterpret_cast<int32_t>(rbx8->f0) + reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_14)));
                rsp16 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                *rsp16 = 0x1400023fa;
                fun_140001f90(r12_14);
                rsp9 = reinterpret_cast<struct s45*>(rsp16 + 1);
                *reinterpret_cast<void***>(r12_14) = r13d15;
            } while (reinterpret_cast<uint64_t>(rbx8) < reinterpret_cast<uint64_t>(rdi7));
        }
    } else {
        *reinterpret_cast<uint32_t*>(&rdx17) = rbx8->f8;
        *reinterpret_cast<int32_t*>(&rdx17 + 4) = 0;
        if (*reinterpret_cast<uint32_t*>(&rdx17) != 1) {
            addr_140002428_16:
            rsp18 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
            *rsp18 = 0x140002434;
            fun_140001f20("  Unknown pseudo relocation protocol version %d.\n", rdx17, r8, r9);
            rsp19 = reinterpret_cast<struct s46*>(rsp18 + 1 - 11);
            rax20 = g14000d0b0;
            if (rax20) {
                rdi7->f0 = rsi5->f0;
                rdi21 = reinterpret_cast<struct s13*>(&rdi7->f4);
                rsi22 = reinterpret_cast<struct s47*>(&rsi5->f4);
                rsp19->f20 = 0x4000a280;
                rsp19->f28 = rdx17;
                rdi21->f0 = rsi22->f0;
                rdi23 = reinterpret_cast<struct s15*>(&rdi21->f4);
                rsi24 = reinterpret_cast<struct s48*>(&rsi22->f4);
                rdi23->f0 = rsi24->f0;
                rdi23->f4 = rsi24->f4;
                rsp25 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp19) - 8);
                *rsp25 = 0x14000247b;
                rax20(&rsp19->f20);
                rsp19 = reinterpret_cast<struct s46*>(rsp25 + 1);
                goto addr_14000247c_30;
            }
        } else {
            rbx26 = rbx8 + 1;
            if (reinterpret_cast<uint64_t>(rbx26) >= reinterpret_cast<uint64_t>(rdi7)) 
                goto addr_14000211f_2;
            r15_27 = g14000a730;
            do {
                addr_140002233_33:
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
                        goto addr_1400023b1_37;
                    if (reinterpret_cast<signed char>(r13_36) <= reinterpret_cast<signed char>(0xffffffff7fffffff)) 
                        goto addr_140002414_39;
                    if (reinterpret_cast<signed char>(r13_36) > reinterpret_cast<signed char>(0xffffffff)) 
                        goto addr_140002414_39;
                    addr_1400023b1_37:
                    rsp37 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                    *rsp37 = 0x1400023b9;
                    fun_140001f90(r14_32);
                    rsp9 = reinterpret_cast<struct s45*>(rsp37 + 1);
                    *reinterpret_cast<void***>(r14_32) = r13_36;
                    continue;
                } else {
                    if (*reinterpret_cast<uint32_t*>(&rdx17) > 32) {
                        if (*reinterpret_cast<uint32_t*>(&rdx17) != 64) 
                            goto addr_140002408_43;
                        r13_36 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r14_32)) - reinterpret_cast<uint64_t>(rcx31) + reinterpret_cast<unsigned char>(r9));
                        if (*reinterpret_cast<uint32_t*>(&r8_29) & 0xc0) 
                            goto addr_140002365_45;
                        if (reinterpret_cast<signed char>(r13_36) >= reinterpret_cast<signed char>(0)) 
                            goto addr_140002414_39;
                        addr_140002365_45:
                        rsp38 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                        *rsp38 = 0x14000236d;
                        fun_140001f90(r14_32);
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
                                goto addr_14000221b_51;
                            if (reinterpret_cast<signed char>(r13_36) < reinterpret_cast<signed char>(0xffffffffffffff80)) 
                                goto addr_140002414_39;
                            if (reinterpret_cast<signed char>(r13_36) > reinterpret_cast<signed char>(0xff)) 
                                goto addr_140002414_39;
                            addr_14000221b_51:
                            rsp40 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                            *rsp40 = 0x140002223;
                            fun_140001f90(r14_32);
                            rsp9 = reinterpret_cast<struct s45*>(rsp40 + 1);
                            *reinterpret_cast<void***>(r14_32) = r13_36;
                            continue;
                        } else {
                            if (*reinterpret_cast<uint32_t*>(&rdx17) != 16) 
                                goto addr_140002408_43;
                            *reinterpret_cast<uint32_t*>(&rax41) = reinterpret_cast<uint16_t>(*reinterpret_cast<void***>(r14_32));
                            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax41) + 4) = 0;
                            if (*reinterpret_cast<int16_t*>(&rax41) >= 0) 
                                goto addr_14000227c_56;
                        }
                    }
                }
                rax41 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rax41) | 0xffffffffffff0000);
                addr_14000227c_56:
                r13_36 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax41) - reinterpret_cast<uint64_t>(rcx31) + reinterpret_cast<unsigned char>(r9));
                if (*reinterpret_cast<uint32_t*>(&r8_29) & 0xc0) 
                    goto addr_1400022a6_58;
                if (reinterpret_cast<signed char>(r13_36) < reinterpret_cast<signed char>(0xffffffffffff8000)) 
                    goto addr_140002414_39;
                if (reinterpret_cast<signed char>(r13_36) > reinterpret_cast<signed char>(0xffff)) 
                    goto addr_140002414_39;
                addr_1400022a6_58:
                ++rbx26;
                rsp42 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                *rsp42 = 0x1400022b2;
                fun_140001f90(r14_32);
                rsp9 = reinterpret_cast<struct s45*>(rsp42 + 1);
                *reinterpret_cast<void***>(r14_32) = r13_36;
                if (reinterpret_cast<uint64_t>(rbx26) < reinterpret_cast<uint64_t>(rdi7)) 
                    goto addr_140002233_33; else 
                    goto addr_1400022bf_61;
                ++rbx26;
            } while (reinterpret_cast<uint64_t>(rbx26) < reinterpret_cast<uint64_t>(rdi7));
        }
    }
    addr_1400022c0_63:
    edx43 = g14000d0a4;
    if (!(reinterpret_cast<uint1_t>(edx43 < 0) | reinterpret_cast<uint1_t>(edx43 == 0))) {
        rdi44 = VirtualProtect;
        *reinterpret_cast<int32_t*>(&rbx45) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx45) + 4) = 0;
        do {
            rax46 = g14000d0a8;
            rax47 = reinterpret_cast<struct s49*>(reinterpret_cast<uint64_t>(rax46) + reinterpret_cast<uint64_t>(rbx45));
            if (rax47->f0) {
                rdx48 = rax47->f10;
                rcx49 = rax47->f8;
                rsp50 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
                *rsp50 = 0x1400022ff;
                rdi44(rcx49, rdx48);
                rsp9 = reinterpret_cast<struct s45*>(rsp50 + 1);
            }
            *reinterpret_cast<int32_t*>(&rsi5) = *reinterpret_cast<int32_t*>(&rsi5) + 1;
            rbx45 = reinterpret_cast<void*>(reinterpret_cast<uint64_t>(rbx45) + 40);
            less51 = *reinterpret_cast<int32_t*>(&rsi5) < g14000d0a4;
        } while (less51);
        goto addr_14000211f_2;
    }
    addr_14000247c_30:
    goto rsp19->f58;
    addr_140002414_39:
    rsp9->f20 = r13_36;
    r8 = r14_32;
    rsp52 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
    *rsp52 = 0x140002428;
    fun_140001f20("%d bit pseudo relocation at %p out of range, targeting %p, yielding the value %p.\n", rdx17, r8, r9);
    rsp9 = reinterpret_cast<struct s45*>(rsp52 + 1);
    goto addr_140002428_16;
    addr_140002408_43:
    rsp53 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp9) - 8);
    *rsp53 = 0x140002414;
    fun_140001f20("  Unknown pseudo relocation bit size %d.\n", rdx17, r8_29, r9);
    rsp9 = reinterpret_cast<struct s45*>(rsp53 + 1);
    goto addr_140002414_39;
    addr_1400022bf_61:
    goto addr_1400022c0_63;
    addr_14000232e_8:
    ++rbx8;
    goto addr_140002195_9;
    addr_14000219f_10:
    eax11 = rbx8->f4;
    goto addr_1400021a2_11;
}

int64_t g14000db60;

int64_t fun_140007c70(int64_t rcx) {
    int64_t tmp64_2;

    tmp64_2 = g14000db60;
    g14000db60 = rcx;
    return tmp64_2;
}

void fun_140001f10(int64_t rcx, void** rdx) {
    __asm__("fninit ");
    return;
}

int64_t fun_1400014a0(int64_t rcx, int64_t rdx, int64_t r8, void** r9);

int64_t fun_140001450(void** rcx, int64_t rdx, int64_t r8, void** r9);

int64_t g1400090b0 = 0x140007c80;

int64_t fun_140002d10(void** rcx, void** rdx, void** r8, void** r9);

int64_t fun_140001a80(int32_t ecx) {
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
    int32_t ebp16;
    void** r9_17;
    int64_t r8_18;
    int64_t rbp19;
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
    void** rax51;
    int64_t rax52;

    *reinterpret_cast<int32_t*>(&rbx2) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx2) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_3) = ecx;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_3) + 4) = 0;
    fun_1400014a0(0x14000a000, 0, r8_3, 0);
    edi4 = static_cast<int32_t>(rbx2 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_5) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(&r9_5 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_6) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_6) + 4) = 0;
    ebp7 = static_cast<int32_t>(rbx2 * 4);
    fun_1400014a0(0x14000a000, 1, r8_6, r9_5);
    *reinterpret_cast<int32_t*>(&r9_8) = edi4;
    *reinterpret_cast<int32_t*>(&r9_8 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_9) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_9) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi10) = edi4 + *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi10) + 4) = 0;
    esi11 = static_cast<int32_t>(rbx2 * 8);
    fun_1400014a0(0x14000a000, 2, r8_9, r9_8);
    *reinterpret_cast<int32_t*>(&r9_12) = *reinterpret_cast<int32_t*>(&rdi10);
    *reinterpret_cast<int32_t*>(&r9_12 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_13) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_13) + 4) = 0;
    fun_140001450(0x14000a029, 3, r8_13, r9_12);
    *reinterpret_cast<int32_t*>(&r9_14) = ebp7;
    *reinterpret_cast<int32_t*>(&r9_14 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_15) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_15) + 4) = 0;
    ebp16 = ebp7 + *reinterpret_cast<int32_t*>(&rbx2);
    fun_1400014a0(0x14000a000, 4, r8_15, r9_14);
    *reinterpret_cast<int32_t*>(&r9_17) = ebp16;
    *reinterpret_cast<int32_t*>(&r9_17 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_18) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_18) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rbp19) = ebp16 + ebp16;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbp19) + 4) = 0;
    fun_1400014a0(0x14000a000, 5, r8_18, r9_17);
    *reinterpret_cast<int32_t*>(&r9_20) = static_cast<int32_t>(rdi10 + rdi10);
    *reinterpret_cast<int32_t*>(&r9_20 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_21) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_21) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi22) = *reinterpret_cast<int32_t*>(&rdi10) << 2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi22) + 4) = 0;
    fun_1400014a0(0x14000a000, 6, r8_21, r9_20);
    *reinterpret_cast<int32_t*>(&r8_23) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_23) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_24) = esi11 - *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(&r9_24 + 4) = 0;
    fun_140001450(0x14000a029, 7, r8_23, r9_24);
    *reinterpret_cast<int32_t*>(&r9_25) = esi11;
    *reinterpret_cast<int32_t*>(&r9_25 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_26) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_26) + 4) = 0;
    esi27 = esi11 + *reinterpret_cast<int32_t*>(&rbx2);
    fun_1400014a0(0x14000a000, 8, r8_26, r9_25);
    *reinterpret_cast<int32_t*>(&r9_28) = esi27;
    *reinterpret_cast<int32_t*>(&r9_28 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_29) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_29) + 4) = 0;
    *reinterpret_cast<int32_t*>(&rsi30) = esi27 + esi27;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rsi30) + 4) = 0;
    fun_1400014a0(0x14000a000, 9, r8_29, r9_28);
    *reinterpret_cast<int32_t*>(&r9_31) = *reinterpret_cast<int32_t*>(&rbp19);
    *reinterpret_cast<int32_t*>(&r9_31 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_32) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_32) + 4) = 0;
    fun_1400014a0(0x14000a000, 10, r8_32, r9_31);
    *reinterpret_cast<int32_t*>(&r9_33) = static_cast<int32_t>(rbp19 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_33 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_34) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_34) + 4) = 0;
    fun_140001450(0x14000a029, 11, r8_34, r9_33);
    *reinterpret_cast<int32_t*>(&r9_35) = *reinterpret_cast<int32_t*>(&rdi22);
    *reinterpret_cast<int32_t*>(&r9_35 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_36) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_36) + 4) = 0;
    fun_1400014a0(0x14000a000, 12, r8_36, r9_35);
    *reinterpret_cast<int32_t*>(&r9_37) = static_cast<int32_t>(rdi22 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_37 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_38) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_38) + 4) = 0;
    fun_1400014a0(0x14000a000, 13, r8_38, r9_37);
    *reinterpret_cast<int32_t*>(&r9_39) = *reinterpret_cast<int32_t*>(&rbx2) * 14;
    *reinterpret_cast<int32_t*>(&r9_39 + 4) = 0;
    *reinterpret_cast<int32_t*>(&rdi40) = *reinterpret_cast<int32_t*>(&rbx2) << 4;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdi40) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_41) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_41) + 4) = 0;
    fun_1400014a0(0x14000a000, 14, r8_41, r9_39);
    *reinterpret_cast<int32_t*>(&r8_42) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_42) + 4) = 0;
    *reinterpret_cast<int32_t*>(&r9_43) = *reinterpret_cast<int32_t*>(&rdi40) - *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(&r9_43 + 4) = 0;
    fun_140001450(0x14000a029, 15, r8_42, r9_43);
    *reinterpret_cast<int32_t*>(&r9_44) = *reinterpret_cast<int32_t*>(&rdi40);
    *reinterpret_cast<int32_t*>(&r9_44 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_45) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_45) + 4) = 0;
    fun_1400014a0(0x14000a000, 16, r8_45, r9_44);
    *reinterpret_cast<int32_t*>(&r9_46) = static_cast<int32_t>(rdi40 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_46 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_47) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_47) + 4) = 0;
    fun_1400014a0(0x14000a000, 17, r8_47, r9_46);
    *reinterpret_cast<int32_t*>(&r9_48) = *reinterpret_cast<int32_t*>(&rsi30);
    *reinterpret_cast<int32_t*>(&r9_48 + 4) = 0;
    *reinterpret_cast<int32_t*>(&r8_49) = *reinterpret_cast<int32_t*>(&rbx2);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_49) + 4) = 0;
    fun_1400014a0(0x14000a000, 18, r8_49, r9_48);
    *reinterpret_cast<int32_t*>(&r9_50) = static_cast<int32_t>(rsi30 + rbx2);
    *reinterpret_cast<int32_t*>(&r9_50 + 4) = 0;
    rax51 = reinterpret_cast<void**>(g1400090b0(1));
    rax52 = fun_140002d10(rax51, 0x14000a029, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 40 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 + 40 + 8 + 8 + 8 + 8 + 8 + 8 - 8 - 8 - 56 + 88, r9_50);
    return rax52;
}

int64_t fun_1400014f0(int64_t rcx, int64_t rdx, int64_t r8, void** r9);

int64_t fun_140001540(int64_t rcx) {
    int64_t r8_2;
    void** r9_3;
    int64_t r8_4;
    void** r9_5;
    int64_t r8_6;
    void** r9_7;
    int64_t r8_8;
    void** r9_9;
    int64_t r8_10;
    void** r9_11;
    int64_t r8_12;
    void** r9_13;
    int64_t r8_14;
    void** r9_15;
    int64_t r8_16;
    void** r9_17;
    int64_t r8_18;
    void** r9_19;
    int64_t r8_20;
    void** r9_21;
    int64_t r8_22;
    void** r9_23;
    int64_t r8_24;
    void** r9_25;
    int64_t r8_26;
    void** r9_27;
    int64_t r8_28;
    void** r9_29;
    int64_t r8_30;
    void** r9_31;
    int64_t r8_32;
    void** r9_33;
    int64_t r8_34;
    void** r9_35;
    int64_t r8_36;
    void** r9_37;
    int64_t r8_38;
    void** r9_39;
    int64_t r8_40;
    void** r9_41;
    int64_t r8_42;
    void** r9_43;
    int64_t r8_44;
    void** r9_45;
    int64_t r8_46;
    void** r9_47;
    int64_t r8_48;
    void** r9_49;
    int64_t r8_50;
    void** r9_51;
    int64_t r8_52;
    void** r9_53;
    int64_t r8_54;
    void** r9_55;
    int64_t r8_56;
    void** r9_57;
    int64_t r8_58;
    void** r9_59;
    int64_t r8_60;
    void** r9_61;
    int64_t r8_62;
    void** r9_63;
    int64_t r8_64;
    void** r9_65;
    int64_t r8_66;
    void** r9_67;
    int64_t r8_68;
    void** r9_69;
    int64_t r8_70;
    void** r9_71;
    int64_t r8_72;
    void** r9_73;
    int64_t r8_74;
    void** r9_75;
    int64_t r8_76;
    void** r9_77;
    int64_t r8_78;
    void** r9_79;
    int64_t r8_80;
    void** r9_81;
    int64_t r8_82;
    void** r9_83;
    int64_t r8_84;
    void** r9_85;
    int64_t r8_86;
    void** r9_87;
    int64_t r8_88;
    void** r9_89;
    int64_t r8_90;
    void** r9_91;
    int64_t r8_92;
    void** r9_93;
    int64_t r8_94;
    void** r9_95;
    int64_t r8_96;
    void** r9_97;
    int64_t r8_98;
    void** r9_99;
    int64_t r8_100;
    void** r9_101;
    int64_t r8_102;
    void** r9_103;
    int64_t r8_104;
    void** r9_105;
    int64_t r8_106;
    void** r9_107;
    int64_t r8_108;
    void** r9_109;
    int64_t r8_110;
    void** r9_111;
    int64_t r8_112;
    void** r9_113;
    int64_t r8_114;
    void** r9_115;
    int64_t r8_116;
    void** r9_117;
    int64_t r8_118;
    void** r9_119;
    int64_t r8_120;
    void** r9_121;
    int64_t r8_122;
    void** r9_123;
    int64_t r8_124;
    void** r9_125;
    int64_t r8_126;
    void** r9_127;
    int64_t r8_128;
    void** r9_129;
    int64_t r8_130;
    void** r9_131;
    int64_t r8_132;
    void** r9_133;
    int64_t r8_134;
    void** r9_135;
    int64_t r8_136;
    void** r9_137;
    int64_t r8_138;
    void** r9_139;
    int64_t r8_140;
    void** r9_141;
    int64_t r8_142;
    void** r9_143;
    int64_t r8_144;
    void** r9_145;
    int64_t r8_146;
    void** r9_147;
    int64_t r8_148;
    void** r9_149;
    int64_t r8_150;
    void** r9_151;
    int64_t r8_152;
    void** r9_153;
    int64_t r8_154;
    void** r9_155;
    int64_t r8_156;
    void** r9_157;
    int64_t r8_158;
    void** r9_159;
    int64_t r8_160;
    void** r9_161;
    int64_t r8_162;
    void** r9_163;
    int64_t r8_164;
    void** r9_165;
    int64_t r8_166;
    void** r9_167;
    int64_t r8_168;
    void** r9_169;
    int64_t r8_170;
    void** r9_171;
    int64_t r8_172;
    void** r9_173;
    int64_t r8_174;
    void** r9_175;
    int64_t r8_176;
    void** r9_177;
    int64_t r8_178;
    void** r9_179;
    int64_t r8_180;
    void** r9_181;
    int64_t r8_182;
    void** r9_183;
    int64_t r8_184;
    void** r9_185;
    int64_t r8_186;
    void** r9_187;
    int64_t r8_188;
    void** r9_189;
    int64_t r8_190;
    void** r9_191;
    int64_t r8_192;
    void** r9_193;
    int64_t r8_194;
    void** r9_195;
    int64_t r8_196;
    void** r9_197;
    int64_t r8_198;
    void** r9_199;
    int64_t r8_200;
    void** r9_201;
    int64_t r8_202;
    void** r9_203;
    void** rax204;
    void** r9_205;
    int64_t rax206;

    fun_1400014f0("%d ", 0, r8_2, r9_3);
    fun_1400014f0("%d ", 1, r8_4, r9_5);
    fun_1400014f0("%d ", 2, r8_6, r9_7);
    fun_1400014f0("%d ", 3, r8_8, r9_9);
    fun_1400014f0("%d ", 4, r8_10, r9_11);
    fun_1400014f0("%d ", 5, r8_12, r9_13);
    fun_1400014f0("%d ", 6, r8_14, r9_15);
    fun_1400014f0("%d ", 7, r8_16, r9_17);
    fun_1400014f0("%d ", 8, r8_18, r9_19);
    fun_1400014f0("%d ", 9, r8_20, r9_21);
    fun_1400014f0("%d ", 10, r8_22, r9_23);
    fun_1400014f0("%d ", 11, r8_24, r9_25);
    fun_1400014f0("%d ", 12, r8_26, r9_27);
    fun_1400014f0("%d ", 13, r8_28, r9_29);
    fun_1400014f0("%d ", 14, r8_30, r9_31);
    fun_1400014f0("%d ", 15, r8_32, r9_33);
    fun_1400014f0("%d ", 16, r8_34, r9_35);
    fun_1400014f0("%d ", 17, r8_36, r9_37);
    fun_1400014f0("%d ", 18, r8_38, r9_39);
    fun_1400014f0("%d ", 19, r8_40, r9_41);
    fun_1400014f0("%d ", 20, r8_42, r9_43);
    fun_1400014f0("%d ", 21, r8_44, r9_45);
    fun_1400014f0("%d ", 22, r8_46, r9_47);
    fun_1400014f0("%d ", 23, r8_48, r9_49);
    fun_1400014f0("%d ", 24, r8_50, r9_51);
    fun_1400014f0("%d ", 25, r8_52, r9_53);
    fun_1400014f0("%d ", 26, r8_54, r9_55);
    fun_1400014f0("%d ", 27, r8_56, r9_57);
    fun_1400014f0("%d ", 28, r8_58, r9_59);
    fun_1400014f0("%d ", 29, r8_60, r9_61);
    fun_1400014f0("%d ", 30, r8_62, r9_63);
    fun_1400014f0("%d ", 31, r8_64, r9_65);
    fun_1400014f0("%d ", 32, r8_66, r9_67);
    fun_1400014f0("%d ", 33, r8_68, r9_69);
    fun_1400014f0("%d ", 34, r8_70, r9_71);
    fun_1400014f0("%d ", 35, r8_72, r9_73);
    fun_1400014f0("%d ", 36, r8_74, r9_75);
    fun_1400014f0("%d ", 37, r8_76, r9_77);
    fun_1400014f0("%d ", 38, r8_78, r9_79);
    fun_1400014f0("%d ", 39, r8_80, r9_81);
    fun_1400014f0("%d ", 40, r8_82, r9_83);
    fun_1400014f0("%d ", 41, r8_84, r9_85);
    fun_1400014f0("%d ", 42, r8_86, r9_87);
    fun_1400014f0("%d ", 43, r8_88, r9_89);
    fun_1400014f0("%d ", 44, r8_90, r9_91);
    fun_1400014f0("%d ", 45, r8_92, r9_93);
    fun_1400014f0("%d ", 46, r8_94, r9_95);
    fun_1400014f0("%d ", 47, r8_96, r9_97);
    fun_1400014f0("%d ", 48, r8_98, r9_99);
    fun_1400014f0("%d ", 49, r8_100, r9_101);
    fun_1400014f0("%d ", 50, r8_102, r9_103);
    fun_1400014f0("%d ", 51, r8_104, r9_105);
    fun_1400014f0("%d ", 52, r8_106, r9_107);
    fun_1400014f0("%d ", 53, r8_108, r9_109);
    fun_1400014f0("%d ", 54, r8_110, r9_111);
    fun_1400014f0("%d ", 55, r8_112, r9_113);
    fun_1400014f0("%d ", 56, r8_114, r9_115);
    fun_1400014f0("%d ", 57, r8_116, r9_117);
    fun_1400014f0("%d ", 58, r8_118, r9_119);
    fun_1400014f0("%d ", 59, r8_120, r9_121);
    fun_1400014f0("%d ", 60, r8_122, r9_123);
    fun_1400014f0("%d ", 61, r8_124, r9_125);
    fun_1400014f0("%d ", 62, r8_126, r9_127);
    fun_1400014f0("%d ", 63, r8_128, r9_129);
    fun_1400014f0("%d ", 64, r8_130, r9_131);
    fun_1400014f0("%d ", 65, r8_132, r9_133);
    fun_1400014f0("%d ", 66, r8_134, r9_135);
    fun_1400014f0("%d ", 67, r8_136, r9_137);
    fun_1400014f0("%d ", 68, r8_138, r9_139);
    fun_1400014f0("%d ", 69, r8_140, r9_141);
    fun_140001450("(nice) ", 69, r8_142, r9_143);
    fun_1400014f0("%d ", 70, r8_144, r9_145);
    fun_1400014f0("%d ", 71, r8_146, r9_147);
    fun_1400014f0("%d ", 72, r8_148, r9_149);
    fun_1400014f0("%d ", 73, r8_150, r9_151);
    fun_1400014f0("%d ", 74, r8_152, r9_153);
    fun_1400014f0("%d ", 75, r8_154, r9_155);
    fun_1400014f0("%d ", 76, r8_156, r9_157);
    fun_1400014f0("%d ", 77, r8_158, r9_159);
    fun_1400014f0("%d ", 78, r8_160, r9_161);
    fun_1400014f0("%d ", 79, r8_162, r9_163);
    fun_1400014f0("%d ", 80, r8_164, r9_165);
    fun_1400014f0("%d ", 81, r8_166, r9_167);
    fun_1400014f0("%d ", 82, r8_168, r9_169);
    fun_1400014f0("%d ", 83, r8_170, r9_171);
    fun_1400014f0("%d ", 84, r8_172, r9_173);
    fun_1400014f0("%d ", 85, r8_174, r9_175);
    fun_1400014f0("%d ", 86, r8_176, r9_177);
    fun_1400014f0("%d ", 87, r8_178, r9_179);
    fun_1400014f0("%d ", 88, r8_180, r9_181);
    fun_1400014f0("%d ", 89, r8_182, r9_183);
    fun_1400014f0("%d ", 90, r8_184, r9_185);
    fun_1400014f0("%d ", 91, r8_186, r9_187);
    fun_1400014f0("%d ", 92, r8_188, r9_189);
    fun_1400014f0("%d ", 93, r8_190, r9_191);
    fun_1400014f0("%d ", 94, r8_192, r9_193);
    fun_1400014f0("%d ", 95, r8_194, r9_195);
    fun_1400014f0("%d ", 96, r8_196, r9_197);
    fun_1400014f0("%d ", 97, r8_198, r9_199);
    fun_1400014f0("%d ", 98, r8_200, r9_201);
    fun_1400014f0("%d ", 99, r8_202, r9_203);
    rax204 = reinterpret_cast<void**>(g1400090b0(1));
    rax206 = fun_140002d10(rax204, "ZzZzZz...\n", reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 32 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 - 8 + 8 + 32 + 8 - 8 - 8 - 56 + 88, r9_205);
    return rax206;
}

int64_t exit = 0xe55c;

void fun_140008260(void** rcx, void** rdx) {
    goto exit;
}

int64_t* g14000a7f0 = reinterpret_cast<int64_t*>(0x14000d040);

int64_t Sleep = 0xe408;

struct s50 {
    signed char[8] pad8;
    int64_t f8;
};

struct s50* g30;

int32_t* g14000a800 = reinterpret_cast<int32_t*>(0x14000d048);

int64_t* g14000a760 = reinterpret_cast<int64_t*>(0x14000a040);

void** g14000a830 = reinterpret_cast<void**>(16);

void** g14000a820 = reinterpret_cast<void**>(0);

void** g14000a850 = reinterpret_cast<void**>(40);

void** g14000a840 = reinterpret_cast<void**>(24);

int32_t g14000d008;

int64_t g14000a890 = 0x1400024a0;

int64_t SetUnhandledExceptionFilter = 0xe3ea;

void** g14000a7e0 = reinterpret_cast<void**>(0xd0);

void fun_140001000();

int32_t g14000d028;

void** g14000d020;

void**** g14000a770 = reinterpret_cast<void****>(0x14000e254);

void** g14000d018;

int32_t g14000d00c;

int32_t g14000d010;

int32_t* g14000a7a0 = reinterpret_cast<int32_t*>(0x14000d090);

void fun_140008220();

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

    rbx3 = g14000a7f0;
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
    rsi8 = g14000a800;
    edi9 = 0;
    if (*rsi8 == 1) {
        addr_140001337_9:
        *reinterpret_cast<int32_t*>(&rcx) = 31;
        *reinterpret_cast<int32_t*>(&rcx + 4) = 0;
        fun_140008218(31);
        if (*rsi8 != 1) {
            addr_140001200_10:
            if (!edi9) {
                addr_14000136d_11:
                *rbx3 = 0;
                goto addr_140001208_12;
            } else {
                addr_140001208_12:
                rax10 = g14000a760;
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
            rdx = g14000a830;
            rcx = g14000a820;
            fun_140008230(rcx, rdx);
            *rsi8 = 2;
            if (edi9) 
                goto addr_140001208_12; else 
                goto addr_14000136d_11;
        }
    } else {
        addr_1400011e1_15:
        if (!*rsi8) {
            rdx = g14000a850;
            rcx = g14000a840;
            *rsi8 = 1;
            fun_140008230(rcx, rdx);
            goto addr_1400011f5_17;
        } else {
            g14000d008 = 1;
            goto addr_1400011f5_17;
        }
    }
    fun_140002100(rcx, rdx, 0, r9_13);
    rcx14 = g14000a890;
    rax15 = reinterpret_cast<void**>(SetUnhandledExceptionFilter(rcx14, rdx));
    rdx16 = g14000a7e0;
    *reinterpret_cast<void***>(rdx16) = rax15;
    fun_140007c70(fun_140001000);
    fun_140001f10(fun_140001000, rdx16);
    rbp17 = g14000d028;
    r12_18 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(static_cast<int64_t>(static_cast<int32_t>(rbp17 + 1))) << 3);
    rcx19 = r12_18;
    rax20 = fun_140008290(rcx19, rdx16);
    r13_21 = g14000d020;
    rdi22 = rax20;
    if (!(reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbp17) < 0) | reinterpret_cast<uint1_t>(*reinterpret_cast<int32_t*>(&rbp17) == 0))) {
        *reinterpret_cast<int32_t*>(&rbx23) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rbx23) + 4) = 0;
        do {
            rcx24 = *reinterpret_cast<void***>(r13_21 + rbx23 * 8);
            rax25 = fun_1400082b8(rcx24, rcx24);
            rsi26 = reinterpret_cast<void**>(&rax25->f1);
            rax27 = fun_140008290(rsi26, rdx16, rsi26, rdx16);
            r8_12 = rsi26;
            *reinterpret_cast<void***>(rdi22 + rbx23 * 8) = rax27;
            rdx16 = *reinterpret_cast<void***>(r13_21 + rbx23 * 8);
            rcx19 = rax27;
            ++rbx23;
            fun_140008298(rcx19, rdx16, r8_12);
        } while (rbp17 != rbx23);
        rax20 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(rdi22) + reinterpret_cast<unsigned char>(r12_18) + 0xfffffffffffffff8);
    }
    *reinterpret_cast<void***>(rax20) = reinterpret_cast<void**>(0);
    g14000d020 = rdi22;
    fun_140001d10(rcx19, rdx16, r8_12);
    rax28 = g14000a770;
    r8_29 = g14000d018;
    *reinterpret_cast<int32_t*>(&rcx30) = g14000d028;
    *reinterpret_cast<int32_t*>(&rcx30 + 4) = 0;
    **rax28 = r8_29;
    rdx31 = g14000d020;
    rax32 = fun_140008350(rcx30, rdx31, r8_29);
    ecx33 = g14000d00c;
    g14000d010 = *reinterpret_cast<int32_t*>(&rax32);
    if (!ecx33) {
        *reinterpret_cast<int32_t*>(&rcx34) = *reinterpret_cast<int32_t*>(&rax32);
        *reinterpret_cast<int32_t*>(&rcx34 + 4) = 0;
        fun_140008260(rcx34, rdx31);
        rax35 = g14000a7a0;
        *rax35 = 1;
        fun_140001180(rcx34, rdx31);
        goto v36;
    } else {
        edx37 = g14000d008;
        if (!edx37) {
            fun_140008220();
            *reinterpret_cast<int32_t*>(&rax38) = g14000d010;
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
    rsi8 = g14000a800;
    edi9 = 1;
    if (*rsi8 != 1) 
        goto addr_1400011e1_15; else 
        goto addr_140001337_9;
}

int64_t _cexit = 0xe4f8;

void fun_140008220() {
    goto _cexit;
}

int64_t _onexit = 0xe536;

uint64_t fun_140008240(int64_t rcx) {
    goto _onexit;
}

uint32_t g14000d0e8;

int64_t DeleteCriticalSection = 0xe34c;

int64_t InitializeCriticalSection = 0xe38c;

int64_t fun_140002800(int64_t rcx, void** rdx) {
    uint32_t eax3;
    uint32_t eax4;
    uint32_t eax5;
    void** rbx6;
    void** rcx7;
    uint32_t eax8;

    if (*reinterpret_cast<uint32_t*>(&rdx) == 2) {
        fun_140001f10(rcx, rdx);
        return 1;
    } else {
        if (*reinterpret_cast<uint32_t*>(&rdx) > 2) {
            if (*reinterpret_cast<uint32_t*>(&rdx) == 3 && (eax3 = g14000d0e8, !!eax3)) {
                fun_140002660();
            }
        } else {
            if (!*reinterpret_cast<uint32_t*>(&rdx)) {
                eax4 = g14000d0e8;
                if (eax4) {
                    fun_140002660();
                }
                eax5 = g14000d0e8;
                if (eax5 == 1) {
                    rbx6 = g14000d0e0;
                    if (rbx6) {
                        do {
                            rcx7 = rbx6;
                            rbx6 = *reinterpret_cast<void***>(rbx6 + 16);
                            fun_140008278(rcx7, rdx);
                        } while (rbx6);
                    }
                    g14000d0e0 = reinterpret_cast<void**>(0);
                    g14000d0e8 = 0;
                    DeleteCriticalSection(0x14000d100);
                }
            } else {
                eax8 = g14000d0e8;
                if (!eax8) {
                    InitializeCriticalSection(0x14000d100);
                }
                g14000d0e8 = 1;
            }
        }
        return 1;
    }
}

int64_t __iob_func = 0xe4b6;

void*** fun_140008200() {
    goto __iob_func;
}

int64_t fwrite = 0xe57e;

void fun_140008280(int64_t rcx, void** rdx, void** r8, void** r9) {
    goto fwrite;
}

int64_t vfprintf = 0xe5de;

void fun_1400082c8() {
    goto vfprintf;
}

int64_t abort = 0xe54a;

void fun_140008250() {
    goto abort;
}

struct s51 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[16] pad24;
    int16_t f18;
};

uint32_t fun_140002a90(void** rcx, void** rdx, void** r8, void** r9) {
    struct s2* rax5;
    struct s51* rax6;

    rax5 = g14000a730;
    if (rax5->f0 != 0x5a4d || ((rax6 = reinterpret_cast<struct s51*>(reinterpret_cast<uint64_t>(rax5) + static_cast<int64_t>(rax5->f3c)), rax6->f0 != 0x4550) || rax6->f18 != 0x20b)) {
        return 0;
    } else {
        return static_cast<uint32_t>(rax6->f6);
    }
}

void fun_140008238(int64_t rcx);

void fun_140007b90(void** rcx, void** rdx, void** r8, void** r9) {
    int64_t v5;
    void** rax6;
    int64_t v7;
    void** rax8;
    int64_t v9;
    void** rax10;
    int64_t rax11;
    int64_t rax12;
    int64_t rcx13;

    rax6 = fun_140007c80(0, rdx, r8, r9, v5);
    if (reinterpret_cast<unsigned char>(rcx) < reinterpret_cast<unsigned char>(rax6) || (rax8 = fun_140007c80(19, rdx, r8, r9, v7), reinterpret_cast<unsigned char>(rcx) > reinterpret_cast<unsigned char>(rax8))) {
        goto EnterCriticalSection;
    } else {
        rax10 = fun_140007c80(0, rdx, r8, r9, v9);
        rax11 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rcx) - reinterpret_cast<unsigned char>(rax10)) >> 4;
        *reinterpret_cast<int32_t*>(&rax12) = *reinterpret_cast<int32_t*>(&rax11) * 0xaaaaaaab;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax12) + 4) = 0;
        *reinterpret_cast<int32_t*>(&rcx13) = static_cast<int32_t>(rax12 + 16);
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx13) + 4) = 0;
        fun_140008238(rcx13);
        *reinterpret_cast<void***>(rcx + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 24)) | 0x8000);
        return;
    }
}

uint32_t fun_140004800(int64_t rcx, void** rdx, uint32_t r8d, void** r9) {
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

    fun_140008228(rcx);
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
        addr_1400049d7_2:
        return ecx6;
    } else {
        do {
            if (ecx6 != 37) {
                if (v12 & 0x4000 || (eax14 = v13, reinterpret_cast<int32_t>(v8) > reinterpret_cast<int32_t>(eax14))) {
                    if (v12 & 0x2000) {
                        fun_140008270();
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
                        goto addr_14000494f_13;
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
                        addr_1400049c0_22:
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
                            goto addr_1400049c0_22;
                        }
                    }
                } while (*reinterpret_cast<signed char*>(&rax15));
                goto addr_1400049cf_27;
                fun_140002e50(37, reinterpret_cast<int64_t>(rsp5) + 0x70);
                rsp5 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp5) - 8 + 8);
            }
            edx9 = reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rbx10));
            ++rbx10;
            ecx6 = reinterpret_cast<uint32_t>(static_cast<int32_t>(*reinterpret_cast<signed char*>(&edx9)));
        } while (ecx6);
    }
    addr_1400049d0_30:
    ecx6 = v13;
    goto addr_1400049d7_2;
    addr_14000494f_13:
    *reinterpret_cast<uint32_t*>(&rdx26) = *reinterpret_cast<unsigned char*>(&edx20);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx26) + 4) = 0;
    goto *reinterpret_cast<int32_t*>(0x14000a390 + rdx26 * 4) + 0x14000a390;
    addr_1400049cf_27:
    goto addr_1400049d0_30;
}

int64_t _unlock = 0xe540;

void fun_140007c00(void** rcx, void** rdx, void** r8, void** r9) {
    int64_t v5;
    void** rax6;
    int64_t v7;
    void** rax8;
    int64_t v9;

    rax6 = fun_140007c80(0, rdx, r8, r9, v5);
    if (reinterpret_cast<unsigned char>(rcx) < reinterpret_cast<unsigned char>(rax6) || (rax8 = fun_140007c80(19, rdx, r8, r9, v7), reinterpret_cast<unsigned char>(rcx) > reinterpret_cast<unsigned char>(rax8))) {
        goto LeaveCriticalSection;
    } else {
        *reinterpret_cast<void***>(rcx + 24) = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rcx + 24)) & 0xffff7fff);
        fun_140007c80(0, rdx, r8, r9, v9);
        goto _unlock;
    }
}

struct s52 {
    signed char[32] pad32;
    signed char f20;
};

void fun_140003af0(void** rcx, void** rdx, void** r8) {
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
        rax7 = fun_140008288();
        rcx = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffff6);
        r9_8 = reinterpret_cast<void**>(reinterpret_cast<int64_t>(rbp5) + 0xfffffffffffffff8);
        rdx9 = rax7->f0;
        eax11 = fun_140008000(rcx, rdx9, 16, r9_8, v10);
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
        fun_140002e50(46, r12_6, 46, r12_6);
        return;
    } else {
        rax14 = fun_140002cd0(rcx, rcx);
        rsp15 = reinterpret_cast<struct s52*>(reinterpret_cast<int64_t>(rsp4) - 8 + 8 - rax14);
        rbx16 = &rsp15->f20;
        rsp17 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp15) - 8);
        *rsp17 = 0x140003b4a;
        eax18 = fun_140007d30(rbx16, edx12, reinterpret_cast<int64_t>(rbp5) - 8, r9_8);
        rsp19 = reinterpret_cast<void*>(rsp17 + 1);
        if (reinterpret_cast<uint1_t>(eax18 < 0) | reinterpret_cast<uint1_t>(eax18 == 0)) {
            *reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp19) - 8) = 0x140003c3d;
            fun_140002e50(46, r12_6, 46, r12_6);
        } else {
            *reinterpret_cast<int32_t*>(&rax20) = eax18 - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax20) + 4) = 0;
            rdi21 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rbx16) + reinterpret_cast<int64_t>(rax20) + 1);
            do {
                addr_140003b7b_12:
                edx22 = *reinterpret_cast<void***>(r12_6 + 8);
                ++rbx16;
                if (*reinterpret_cast<unsigned char*>(&edx22 + 1) & 64 || (eax23 = *reinterpret_cast<void***>(r12_6 + 36), reinterpret_cast<signed char>(*reinterpret_cast<void***>(r12_6 + 40)) > reinterpret_cast<signed char>(eax23))) {
                    ecx24 = *(rbx16 - 1);
                    if (!(*reinterpret_cast<unsigned char*>(&edx22 + 1) & 32)) {
                        *reinterpret_cast<signed char*>(reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(r12_6)) + reinterpret_cast<uint64_t>(static_cast<int64_t>(reinterpret_cast<int32_t>(*reinterpret_cast<void***>(r12_6 + 36))))) = *reinterpret_cast<signed char*>(&ecx24);
                        eax23 = *reinterpret_cast<void***>(r12_6 + 36);
                    } else {
                        rsp25 = reinterpret_cast<int64_t*>(reinterpret_cast<int64_t>(rsp19) - 8);
                        *rsp25 = 0x140003baa;
                        fun_140008270();
                        rsp19 = reinterpret_cast<void*>(rsp25 + 1);
                        *reinterpret_cast<void***>(r12_6 + 36) = *reinterpret_cast<void***>(r12_6 + 36) + 1;
                        if (rdi21 != rbx16) 
                            goto addr_140003b7b_12; else 
                            break;
                    }
                }
                *reinterpret_cast<void***>(r12_6 + 36) = eax23 + 1;
            } while (rdi21 != rbx16);
        }
        return;
    }
}

int64_t strerror = 0xe5be;

void** fun_1400082b0(int64_t rcx) {
    goto strerror;
}

int64_t wcslen = 0xe5ea;

void** fun_1400082d0(uint16_t* rcx) {
    goto wcslen;
}

void fun_140006ef0();

void fun_140006e10(int32_t ecx, ...) {
    int32_t eax2;
    int32_t tmp32_3;
    int64_t rdi4;
    int32_t eax5;
    int64_t rbx6;

    eax2 = g14000daf0;
    if (eax2 == 2) 
        goto addr_140006ee0_2;
    if (eax2) {
        if (eax2 != 1) 
            goto addr_140006e5b_5; else 
            goto addr_140006e31_6;
    }
    tmp32_3 = g14000daf0;
    g14000daf0 = 1;
    if (!tmp32_3) {
        rdi4 = InitializeCriticalSection;
        rdi4(0x14000db00);
        rdi4(0x14000db28);
        fun_140001410(fun_140006ef0);
        goto addr_140006e9c_9;
    }
    if (tmp32_3 == 2) {
        addr_140006e9c_9:
        g14000daf0 = 2;
    } else {
        eax5 = g14000daf0;
        if (eax5 == 1) {
            addr_140006e31_6:
            rbx6 = Sleep;
            goto addr_140006e40_12;
        } else {
            goto addr_140006e52_14;
        }
    }
    addr_140006ea6_15:
    goto EnterCriticalSection;
    do {
        addr_140006e40_12:
        rbx6(1);
        eax5 = g14000daf0;
    } while (eax5 == 1);
    addr_140006e52_14:
    if (eax5 == 2) {
        addr_140006ee0_2:
        goto addr_140006ea6_15;
    } else {
        addr_140006e5b_5:
        return;
    }
}

void fun_140006cc0(void** rcx, void* edx) {
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
        goto addr_140006d50_2;
    r12_6 = rcx + 24;
    rbp7 = ebp5;
    r11_8 = reinterpret_cast<void***>(r12_6 + rbx3 * 4);
    rsi9 = reinterpret_cast<void***>(r12_6 + rbp7 * 4);
    edx10 = reinterpret_cast<uint32_t>(edx) & 31;
    if (!edx10) {
        rdi11 = r12_6;
        if (reinterpret_cast<uint64_t>(r11_8) <= reinterpret_cast<uint64_t>(rsi9)) {
            addr_140006d50_2:
            *reinterpret_cast<void***>(r10_4 + 20) = reinterpret_cast<void**>(0);
        } else {
            do {
                *reinterpret_cast<void***>(rdi11) = *rsi9;
                rdi11 = rdi11 + 4;
                rsi9 = rsi9 + 4;
            } while (reinterpret_cast<uint64_t>(r11_8) > reinterpret_cast<uint64_t>(rsi9));
            rax12 = r12_6 + (rbx3 - rbp7) * 4;
            goto addr_140006d8d_11;
        }
    } else {
        ecx13 = edx10;
        r8_14 = rsi9 + 4;
        edi15 = 32 - edx10;
        r9d16 = reinterpret_cast<void**>(reinterpret_cast<unsigned char>(*rsi9) >> *reinterpret_cast<signed char*>(&ecx13));
        if (reinterpret_cast<uint64_t>(r11_8) <= reinterpret_cast<uint64_t>(r8_14)) {
            *reinterpret_cast<void***>(r10_4 + 24) = r9d16;
            if (!r9d16) 
                goto addr_140006d50_2;
            rax12 = r12_6;
            goto addr_140006d43_15;
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
                goto addr_140006d8d_11; else 
                goto addr_140006d43_15;
        }
    }
    *reinterpret_cast<void***>(r10_4 + 24) = reinterpret_cast<void**>(0);
    return;
    addr_140006d8d_11:
    rax20 = reinterpret_cast<int64_t>(reinterpret_cast<unsigned char>(rax12) - reinterpret_cast<unsigned char>(r12_6)) >> 2;
    *reinterpret_cast<void***>(r10_4 + 20) = *reinterpret_cast<void***>(&rax20);
    if (*reinterpret_cast<void***>(&rax20)) {
        return;
    }
    addr_140006d43_15:
    rax12 = rax12 + 4;
    goto addr_140006d8d_11;
}

void** fun_1400076f0(void** rcx, void** rdx, void** r8) {
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
            addr_14000774f_3:
            ecx9 = *reinterpret_cast<void***>(rsi5 + 8);
            rax10 = fun_140006f40(ecx9);
            r8_11 = rax10;
            if (!rax10) {
                addr_140007853_4:
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
                    goto addr_1400077dc_8;
            }
        } else {
            addr_140007873_9:
            rax28 = rsi5;
            edi7 = reinterpret_cast<void**>(1);
            rsi5 = rbx6;
            rbx6 = rax28;
            goto addr_14000774f_3;
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
                goto addr_140007749_12;
        } while (reinterpret_cast<unsigned char>(rcx30) < reinterpret_cast<unsigned char>(rax31));
        goto addr_140007890_14;
    }
    rax27 = reinterpret_cast<void*>(0);
    addr_1400077dc_8:
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
    goto addr_140007853_4;
    addr_140007749_12:
    if (reinterpret_cast<unsigned char>(*reinterpret_cast<void***>(rax31)) < reinterpret_cast<unsigned char>(*rdx32)) 
        goto addr_140007873_9; else 
        goto addr_14000774f_3;
    addr_140007890_14:
    rax42 = fun_140006f40(0);
    r8_11 = rax42;
    if (rax42) {
        *reinterpret_cast<void***>(r8_11 + 20) = reinterpret_cast<void**>(1);
        return r8_11;
    }
}

int64_t _lock = 0xe52e;

void fun_140008238(int64_t rcx) {
    goto _lock;
}

int64_t fun_1400014a0(int64_t rcx, int64_t rdx, int64_t r8, void** r9) {
    void** rax5;
    int64_t rax6;

    rax5 = reinterpret_cast<void**>(g1400090b0(1));
    rax6 = fun_140002d10(rax5, 0x14000a000, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 48 + 72, r9);
    return rax6;
}

int64_t fun_140001450(void** rcx, int64_t rdx, int64_t r8, void** r9) {
    void** rax5;
    int64_t rax6;

    rax5 = reinterpret_cast<void**>(g1400090b0(1));
    rax6 = fun_140002d10(rax5, rcx, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 56 + 88, r9);
    return rax6;
}

int64_t fun_1400014f0(int64_t rcx, int64_t rdx, int64_t r8, void** r9) {
    void** rax5;
    int64_t rax6;

    rax5 = reinterpret_cast<void**>(g1400090b0(1));
    rax6 = fun_140002d10(rax5, "%d ", reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 48 + 72, r9);
    return rax6;
}

int64_t calloc = 0xe552;

void** fun_140008258(int64_t rcx, int64_t rdx) {
    goto calloc;
}

int64_t fun_140002d10(void** rcx, void** rdx, void** r8, void** r9) {
    uint32_t eax5;
    int64_t rax6;

    fun_140007b90(rcx, rdx, r8, r9);
    eax5 = fun_140004800(0x6000, rcx, 0, rdx);
    fun_140007c00(rcx, rcx, 0, rdx);
    *reinterpret_cast<uint32_t*>(&rax6) = eax5;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax6) + 4) = 0;
    return rax6;
}

void fun_140001000() {
    return;
}

struct s53 {
    signed char[1] pad1;
    signed char f1;
};

struct s54 {
    signed char[1] pad1;
    signed char f1;
};

void fun_140008387() {
    struct s53* rax1;
    struct s54* rax2;
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
    signed char* rax16;
    signed char* rax17;
    signed char al18;

    rax1->f1 = reinterpret_cast<signed char>(rax2->f1 + al3);
    *rax4 = reinterpret_cast<signed char>(*rax5 + al6);
    *rax7 = reinterpret_cast<signed char>(*rax8 + al9);
    *rax10 = reinterpret_cast<signed char>(*rax11 + al12);
    *rax13 = reinterpret_cast<signed char>(*rax14 + al15);
    *rax16 = reinterpret_cast<signed char>(*rax17 + al18);
}

void fun_14000839f() {
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
}

int32_t* g14000a7b0 = reinterpret_cast<int32_t*>(0x14000d078);

int32_t* g14000a7c0 = reinterpret_cast<int32_t*>(0x14000d074);

int32_t* g14000a7d0 = reinterpret_cast<int32_t*>(0x14000d070);

struct s55 {
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

int32_t* g14000a880 = reinterpret_cast<int32_t*>(0x14000d0c0);

int32_t* g14000a860 = reinterpret_cast<int32_t*>(0x14000d080);

int32_t* g14000a710 = reinterpret_cast<int32_t*>(0x140009030);

int64_t g14000a8a0 = 0x140001e10;

int64_t fun_140001010() {
    int32_t* rax1;
    int32_t ecx2;
    int32_t* rax3;
    int32_t* rax4;
    struct s2* rax5;
    struct s55* rax6;
    uint32_t edx7;
    int32_t* rax8;
    int64_t rcx9;
    int32_t* rax10;
    int32_t* rdx11;
    int32_t* rax12;
    int32_t* rdx13;
    int32_t* rax14;
    int64_t rcx15;

    rax1 = g14000a7b0;
    ecx2 = 0;
    *rax1 = 1;
    rax3 = g14000a7c0;
    *rax3 = 1;
    rax4 = g14000a7d0;
    *rax4 = 1;
    rax5 = g14000a730;
    if (rax5->f0 == 0x5a4d && (rax6 = reinterpret_cast<struct s55*>(reinterpret_cast<uint64_t>(rax5) + static_cast<int64_t>(rax5->f3c)), rax6->f0 == 0x4550)) {
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
    rax8 = g14000a7a0;
    g14000d00c = ecx2;
    if (!*rax8) {
        *reinterpret_cast<int32_t*>(&rcx9) = 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        fun_140008208(1);
    } else {
        *reinterpret_cast<int32_t*>(&rcx9) = 2;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx9) + 4) = 0;
        fun_140008208(2);
    }
    rax10 = fun_140007b70(rcx9);
    rdx11 = g14000a880;
    *rax10 = *rdx11;
    rax12 = fun_140007b80(rcx9);
    rdx13 = g14000a860;
    *rax12 = *rdx13;
    fun_140001d30(rcx9);
    rax14 = g14000a710;
    if (*rax14 == 1) {
        rcx15 = g14000a8a0;
        fun_140002490(rcx15);
        return 0;
    } else {
        return 0;
    }
}

int32_t* g14000a8b0 = reinterpret_cast<int32_t*>(0x14000d060);

int32_t g14000d004;

int32_t* g14000a870 = reinterpret_cast<int32_t*>(0x14000d050);

void fun_140001130() {
    int32_t* rax1;
    int32_t* rax2;
    int64_t r9_3;

    rax1 = g14000a8b0;
    g14000d004 = *rax1;
    rax2 = g14000a870;
    *reinterpret_cast<int32_t*>(&r9_3) = *rax2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_3) + 4) = 0;
    fun_1400081f8(0x14000d028, 0x14000d020, 0x14000d018, r9_3);
    return;
}

void fun_140001d57(int64_t rcx, void** rdx) {
    int64_t v3;

    fun_140002800(rcx, rdx);
    goto v3;
}

void fun_140001d9e() {
    int64_t* rbx1;
    int64_t v2;
    int64_t rax3;
    int64_t v4;

    rbx1 = reinterpret_cast<int64_t*>(0x14000f058);
    if (1) {
        goto v2;
    } else {
        do {
            rax3 = *rbx1;
            if (rax3) {
                rax3();
            }
            ++rbx1;
        } while (!reinterpret_cast<int1_t>(0x14000f058 == rbx1));
        goto v4;
    }
}

void fun_140001dd7(int64_t rcx, void** rdx) {
    int64_t v3;

    fun_140002800(rcx, rdx);
    goto v3;
}

struct s57 {
    int32_t f0;
    int32_t f4;
};

struct s56 {
    signed char[8] pad8;
    struct s57* f8;
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
    signed char[4] pad4;
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

struct s64 {
    int32_t f0;
    int32_t f4;
};

struct s65 {
    int32_t f0;
    int32_t f4;
};

void fun_140001e48(struct s56* rcx, void** rdx, void** r8, void** r9) {
    int32_t* rdi5;
    int32_t* rsi6;
    struct s58* rdi7;
    struct s59* rdi8;
    struct s60* rsi9;
    struct s61* rsi10;
    struct s62* rdi11;
    struct s63* rdi12;
    struct s57* rsi13;
    void** rax14;
    struct s64* rdi15;
    struct s65* rsi16;
    int32_t* rsi17;
    int64_t v18;

    *rdi5 = *rsi6;
    rdi7 = reinterpret_cast<struct s58*>(&rdi8->f4);
    rsi9 = reinterpret_cast<struct s60*>(&rsi10->f4);
    rdi7->f0 = rsi9->f0;
    rdi11 = reinterpret_cast<struct s62*>(&rdi7->f4);
    rdi11->f0 = rsi9->f4;
    rdi12 = reinterpret_cast<struct s63*>(&rdi11->f4);
    rsi13 = rcx->f8;
    rax14 = fun_140007c80(2, rdx, r8, r9, __return_address());
    rdi12->f0 = rsi13->f0;
    rdi15 = reinterpret_cast<struct s64*>(&rdi12->f4);
    rsi16 = reinterpret_cast<struct s65*>(&rsi13->f4);
    rdi15->f0 = rsi16->f0;
    rsi17 = &rsi16->f4;
    rdi15->f4 = *rsi17;
    fun_140008268(rax14, "_matherr(): %s in %s(%g, %g)  (retval=%g)\n", "Argument singularity (SIGN)", rsi17, __return_address());
    __asm__("movaps xmm6, [rsp+0x40]");
    __asm__("movaps xmm7, [rsp+0x50]");
    __asm__("movaps xmm8, [rsp+0x60]");
    goto v18;
}

void fun_140001eb0() {
    goto 0x140001e4f;
}

void fun_1400024ee() {
    int64_t v1;

    fun_1400082a8(8, 8);
    fun_140001f10(8, 1);
    goto v1;
}

int64_t g14000d0d0;

void fun_14000255c() {
    int32_t eax1;
    int64_t rax2;
    int64_t v3;

    if (eax1 == 0x80000002) 
        goto 0x140002508;
    rax2 = g14000d0d0;
    if (!rax2) {
        goto v3;
    } else {
        goto rax2;
    }
}

struct s66 {
    signed char[4] pad4;
    unsigned char f4;
};

void fun_14000257f() {
    struct s66* rdx1;
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
        goto 0x140002508;
    }
    if (eax2 > 0xc0000096) 
        goto 0x140002567;
    if (eax3 > 0xc000008b) 
        goto addr_1400024d4_6;
    if (eax4 == 0xc0000005) {
        rax5 = fun_1400082a8(11);
        if (rax5 == 1) {
            fun_1400082a8(11, 11);
            goto 0x14000250d;
        } else {
            if (!rax5) 
                goto 0x140002567;
            rax5(11);
            goto 0x14000250d;
        }
    }
    if (eax6 <= 0xc0000005) 
        goto 0x140002560;
    if (eax7 == 0xc0000008) 
        goto 0x140002508;
    if (eax8 != 0xc000001d) 
        goto 0x140002567;
    rax9 = fun_1400082a8(4);
    if (rax9 != 1) 
        goto addr_140002549_16;
    fun_1400082a8(4, 4);
    goto 0x14000250d;
    addr_140002549_16:
    if (!rax9) 
        goto 0x140002567;
    rax9(4);
    goto 0x14000250d;
    addr_1400024d4_6:
    *reinterpret_cast<uint32_t*>(&rax10) = reinterpret_cast<uint32_t>(eax11 + 0x3fffff73);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax10) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax10) > 9) 
        goto 0x140002508;
    goto *reinterpret_cast<int32_t*>(0x14000a340 + rax10 * 4) + 0x14000a340;
}

void fun_1400025d0() {
    int64_t rax1;

    rax1 = fun_1400082a8(8);
    if (rax1 != 1) {
        if (!rax1) 
            goto 0x140002567;
        rax1(8);
        goto 0x14000250d;
    } else {
        fun_1400082a8(8, 8);
        goto 0x14000250d;
    }
}

int64_t fun_1400026e0(void** ecx, void** rdx) {
    int64_t rax3;
    void** rax4;
    void** rax5;

    *reinterpret_cast<uint32_t*>(&rax3) = g14000d0e8;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
    if (*reinterpret_cast<uint32_t*>(&rax3)) {
        rax4 = fun_140008258(1, 24);
        if (!rax4) {
            *reinterpret_cast<uint32_t*>(&rax3) = 0xffffffff;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax3) + 4) = 0;
        } else {
            *reinterpret_cast<void***>(rax4) = ecx;
            *reinterpret_cast<void***>(rax4 + 8) = rdx;
            EnterCriticalSection(0x14000d100, 24);
            rax5 = g14000d0e0;
            g14000d0e0 = rax4;
            *reinterpret_cast<void***>(rax4 + 16) = rax5;
            LeaveCriticalSection(0x14000d100, 24);
            return 0;
        }
    }
    return rax3;
}

void fun_14000278d() {
    void** rcx1;
    int64_t v2;
    void** rdx3;
    void** ebx4;

    EnterCriticalSection(0x14000d100);
    rcx1 = g14000d0e0;
    if (!rcx1) {
        addr_1400027d3_3:
        LeaveCriticalSection(0x14000d100);
        goto v2;
    } else {
        *reinterpret_cast<int32_t*>(&rdx3) = 0;
        *reinterpret_cast<int32_t*>(&rdx3 + 4) = 0;
        while (*reinterpret_cast<void***>(rcx1) != ebx4) {
            rdx3 = rcx1;
            if (!*reinterpret_cast<void***>(rcx1 + 16)) 
                goto addr_1400027d3_3;
            rcx1 = *reinterpret_cast<void***>(rcx1 + 16);
        }
    }
    if (!rdx3) {
        g14000d0e0 = *reinterpret_cast<void***>(rcx1 + 16);
    } else {
        *reinterpret_cast<void***>(rdx3 + 16) = *reinterpret_cast<void***>(rcx1 + 16);
    }
    fun_140008278(rcx1, rdx3);
    goto addr_1400027d3_3;
}

struct s67 {
    signed char[24] pad24;
    int16_t f18;
};

int64_t fun_140002909(struct s67* rcx) {
    int64_t rax2;

    *reinterpret_cast<int32_t*>(&rax2) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    *reinterpret_cast<unsigned char*>(&rax2) = reinterpret_cast<uint1_t>(rcx->f18 == 0x20b);
    return rax2;
}

void fun_1400029cd() {
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
        eax5 = fun_1400082c0(r12_1, rbx4, 8);
    } while (eax5);
    goto addr_1400029ee_4;
    goto v6;
    addr_1400029ee_4:
    goto v7;
}

struct s68 {
    signed char[39] pad39;
    unsigned char f27;
};

struct s69 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
    signed char[2] pad24;
    int16_t f18;
};

struct s68* fun_140002ad0() {
    struct s2* r8_1;
    struct s68* rax2;
    struct s69* rdx3;
    void* rax4;
    uint32_t edx5;
    int64_t rdx6;
    struct s68* rdx7;
    int64_t rcx8;

    r8_1 = g14000a730;
    *reinterpret_cast<int32_t*>(&rax2) = 0;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
    if (r8_1->f0 == 0x5a4d && ((rdx3 = reinterpret_cast<struct s69*>(r8_1->f3c + reinterpret_cast<uint64_t>(r8_1)), rdx3->f0 == 0x4550) && rdx3->f18 == 0x20b)) {
        *reinterpret_cast<uint32_t*>(&rax4) = rdx3->f14;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
        rax2 = reinterpret_cast<struct s68*>(reinterpret_cast<uint64_t>(rdx3) + reinterpret_cast<uint64_t>(rax4) + 24);
        edx5 = rdx3->f6;
        if (!edx5) {
            addr_140002b38_3:
            return 0;
        } else {
            *reinterpret_cast<uint32_t*>(&rdx6) = edx5 - 1;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
            rdx7 = reinterpret_cast<struct s68*>(reinterpret_cast<uint64_t>(rax2) + (rdx6 + rdx6 * 4) * 8 + 40);
            do {
                if (rax2->f27 & 32) {
                    if (!rcx8) 
                        break;
                    --rcx8;
                }
                ++rax2;
            } while (rax2 != rdx7);
            goto addr_140002b38_3;
        }
    }
    return rax2;
}

struct s70 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
    signed char[2] pad24;
    int16_t f18;
};

struct s71 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
    signed char[20] pad36;
    int32_t f24;
};

int64_t fun_140002b80(int64_t rcx) {
    struct s2* rdx2;
    struct s70* r8_3;
    uint64_t rcx4;
    void* rdx5;
    struct s71* rdx6;
    int64_t r8_7;
    int64_t rax8;
    struct s71* r9_9;
    uint64_t r8_10;
    uint64_t rax11;
    uint64_t rax12;
    int64_t rax13;

    rdx2 = g14000a730;
    if (rdx2->f0 != 0x5a4d || ((r8_3 = reinterpret_cast<struct s70*>(rdx2->f3c + reinterpret_cast<uint64_t>(rdx2)), r8_3->f0 != 0x4550) || (r8_3->f18 != 0x20b || (rcx4 = rcx - reinterpret_cast<uint64_t>(rdx2), *reinterpret_cast<uint32_t*>(&rdx5) = r8_3->f14, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx5) + 4) = 0, rdx6 = reinterpret_cast<struct s71*>(reinterpret_cast<uint64_t>(r8_3) + reinterpret_cast<uint64_t>(rdx5) + 24), *reinterpret_cast<uint32_t*>(&r8_7) = r8_3->f6, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_7) + 4) = 0, *reinterpret_cast<uint32_t*>(&r8_7) == 0)))) {
        return 0;
    }
    *reinterpret_cast<int32_t*>(&rax8) = static_cast<int32_t>(r8_7 - 1);
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax8) + 4) = 0;
    r9_9 = reinterpret_cast<struct s71*>(reinterpret_cast<uint64_t>(rdx6) + (rax8 + rax8 * 4) * 8 + 40);
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
    goto addr_140002bf5_7;
    *reinterpret_cast<uint32_t*>(&rax13) = reinterpret_cast<uint32_t>(~rdx6->f24) >> 31;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax13) + 4) = 0;
    return rax13;
    addr_140002bf5_7:
    return 0;
}

struct s72 {
    signed char[24] pad24;
    int16_t f18;
};

struct s73 {
    signed char[144] pad144;
    int32_t f90;
};

struct s74 {
    signed char[20] pad20;
    uint16_t f14;
};

struct s75 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
};

struct s76 {
    signed char[6] pad6;
    uint16_t f6;
};

struct s77 {
    signed char[4] pad4;
    int32_t f4;
    signed char[4] pad12;
    int32_t fc;
};

int64_t fun_140002c36() {
    struct s72* r8_1;
    uint64_t rax2;
    struct s73* r8_3;
    int64_t rdx4;
    struct s74* r8_5;
    struct s75* rdx6;
    int64_t r8_7;
    uint32_t r8d8;
    struct s76* r8_9;
    int64_t r9_10;
    int64_t r8_11;
    struct s75* r10_12;
    uint64_t r9_13;
    uint64_t r8_14;
    uint64_t r8_15;
    struct s77* rax16;
    int64_t r11_17;
    int32_t ecx18;
    int64_t r9_19;
    int64_t r11_20;

    if (r8_1->f18 != 0x20b || ((*reinterpret_cast<int32_t*>(&rax2) = r8_3->f90, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0, *reinterpret_cast<int32_t*>(&rax2) == 0) || (*reinterpret_cast<uint32_t*>(&rdx4) = r8_5->f14, *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx4) + 4) = 0, rdx6 = reinterpret_cast<struct s75*>(r8_7 + rdx4 + 24), r8d8 = r8_9->f6, r8d8 == 0))) {
        return r9_10;
    }
    *reinterpret_cast<uint32_t*>(&r8_11) = r8d8 - 1;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r8_11) + 4) = 0;
    r10_12 = reinterpret_cast<struct s75*>(reinterpret_cast<int64_t>(rdx6) + (r8_11 + r8_11 * 4) * 8 + 40);
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
        rdx6 = reinterpret_cast<struct s75*>(reinterpret_cast<int64_t>(rdx6) + 40);
    } while (r10_12 != rdx6);
    goto addr_140002c96_8;
    rax16 = reinterpret_cast<struct s77*>(rax2 + r11_17);
    while (rax16->f4 || rax16->fc) {
        if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(ecx18 < 0) | reinterpret_cast<uint1_t>(ecx18 == 0))) 
            goto addr_140002cc3_12;
        --ecx18;
        rax16 = reinterpret_cast<struct s77*>(reinterpret_cast<uint64_t>(rax16) + 20);
    }
    addr_140002c96_8:
    return 0;
    addr_140002cc3_12:
    *reinterpret_cast<int32_t*>(&r9_19) = rax16->fc;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r9_19) + 4) = 0;
    return r9_19 + r11_20;
}

void fun_140004a50() {
    goto 0x1400049c7;
}

void fun_140004aef() {
    int32_t r15d1;
    void** r9_2;

    if (reinterpret_cast<uint32_t>(r15d1 - 2) <= 1) {
        fun_140002eb0(reinterpret_cast<int64_t>(__zero_stack_offset()) + 96, 1, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70, r9_2, __return_address());
        goto 0x1400048fd;
    } else {
        fun_140003020(reinterpret_cast<int64_t>(__zero_stack_offset()) + 96, 1, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x1400048fd;
    }
}

void fun_140004b34() {
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
        goto 0x1400048fd;
    } else {
        if (r15d5 == 1) {
            **r12_4 = rax1;
            goto 0x1400048fd;
        } else {
            if (r15d6 == 2 || r15d7 != 3) {
                **r12_4 = rax1;
                goto 0x1400048fd;
            } else {
                **r12_4 = rax1;
                goto 0x1400048fd;
            }
        }
    }
}

struct s78 {
    void** f0;
    signed char[7] pad8;
    int32_t f8;
};

void fun_140004b72() {
    struct s78* rcx1;
    struct s78** r12_2;
    uint32_t eax3;
    uint32_t v4;
    uint64_t r8_5;
    int64_t rdx6;
    int64_t v7;
    uint32_t r8d8;
    uint32_t eax9;
    struct s78* rax10;
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
            addr_140005127_3:
            fun_1400031a0(0, "NaN", reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
            goto 0x140005107;
        } else {
            rdx6 = v7;
            if (*reinterpret_cast<int16_t*>(&rdx6) < reinterpret_cast<int16_t>(0)) {
            }
            r8d8 = *reinterpret_cast<uint32_t*>(&r8_5) & 0x7ff00000;
            eax9 = *reinterpret_cast<uint32_t*>(&r8_5) & 0xfffff | *reinterpret_cast<uint32_t*>(&rcx1);
            if (!(static_cast<unsigned char>(reinterpret_cast<uint1_t>(!!eax9)) | static_cast<unsigned char>(reinterpret_cast<uint1_t>(r8d8 != 0x7ff00000))) && eax9 | r8d8) {
                fun_1400031a0(*reinterpret_cast<uint32_t*>(&rdx6) & 0x8000, "Inf", reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
                goto 0x140005107;
            }
            rax10 = rcx1;
            *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx6) & 0x7fff);
            if (!*reinterpret_cast<uint16_t*>(&rdx6)) 
                goto addr_1400051ac_9;
            if (*reinterpret_cast<int16_t*>(&rdx6) <= reinterpret_cast<int16_t>(0x3c00)) 
                goto addr_14000509b_11;
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
            goto addr_140005127_3;
        if (*reinterpret_cast<int16_t*>(&rbx11) < 0) {
        }
        *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx6) & 0x7fff);
        if (!*reinterpret_cast<uint16_t*>(&rdx6)) {
            if (rcx12) {
                *reinterpret_cast<uint32_t*>(&rdx6) = 0xffffc002;
                *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
            }
            goto addr_1400050b8_19;
        } else {
            if (*reinterpret_cast<uint16_t*>(&rdx6) != 0x7fff || r9d16) {
                *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx6) - 0x3fff);
                goto addr_1400050b8_19;
            } else {
                fun_1400031a0(*reinterpret_cast<uint32_t*>(&r10_13) & 0x8000, "Inf", reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
                goto 0x140005107;
            }
        }
    }
    if (*reinterpret_cast<uint16_t*>(&rdx6)) {
        addr_1400050ac_24:
        *reinterpret_cast<uint16_t*>(&rdx6) = reinterpret_cast<uint16_t>(*reinterpret_cast<uint16_t*>(&rdx6) - 0x3ffc);
    } else {
        addr_1400051ac_9:
        if (rax10) {
            *reinterpret_cast<uint32_t*>(&rdx6) = 0xfffffc05;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
            goto addr_1400051b7_26;
        }
    }
    addr_1400050b1_27:
    rcx12 = reinterpret_cast<void**>(reinterpret_cast<uint64_t>(rax10) >> 3);
    addr_1400050b8_19:
    fun_1400043c0(rcx12, rdx6, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
    goto 0x140005107;
    addr_1400051b7_26:
    goto addr_1400050b1_27;
    addr_14000509b_11:
    ecx17 = 0x3c01 - *reinterpret_cast<int16_t*>(&rdx6);
    rax10 = reinterpret_cast<struct s78*>(reinterpret_cast<uint64_t>(rax10) >> *reinterpret_cast<signed char*>(&ecx17));
    *reinterpret_cast<uint32_t*>(&rdx6) = *reinterpret_cast<uint32_t*>(&rdx6) + ecx17;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rdx6) + 4) = 0;
    goto addr_1400050ac_24;
}

void fun_140004c04() {
    int32_t r14d1;
    int32_t v2;
    int32_t edi3;
    void** rdx4;
    void*** r12_5;

    if (!r14d1 && v2 == edi3) {
    }
    rdx4 = *r12_5;
    fun_140003250(0x78, rdx4, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
    goto 0x1400048fd;
}

struct s79 {
    signed char[1] pad1;
    unsigned char f1;
};

struct s80 {
    signed char[2] pad2;
    signed char f2;
};

struct s81 {
    signed char[2] pad2;
    signed char f2;
};

void fun_140004c44() {
    uint32_t eax1;
    struct s79* rsi2;
    struct s80* rsi3;
    struct s81* rsi4;

    eax1 = rsi2->f1;
    if (*reinterpret_cast<signed char*>(&eax1) == 54) {
        if (rsi3->f2 != 52) 
            goto 0x14000516b;
        goto 0x1400049c7;
    } else {
        if (*reinterpret_cast<signed char*>(&eax1) == 51) {
            if (rsi4->f2 != 50) 
                goto "???";
            goto 0x1400049c7;
        } else {
            goto 0x1400049c7;
        }
    }
}

void fun_140004c6c() {
    uint32_t eax1;
    uint32_t v2;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) {
        __asm__("fld qword [rsp+0x20]");
        __asm__("fstp tword [rsp+0x40]");
        fun_1400040d0(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x1400048fd;
    } else {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        fun_1400040d0(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x1400048fd;
    }
}

struct s82 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_140004ca4() {
    uint32_t eax1;
    struct s82* rsi2;

    eax1 = rsi2->f1;
    if (*reinterpret_cast<signed char*>(&eax1) == 0x68) {
        goto 0x1400049c7;
    } else {
        goto 0x1400049c7;
    }
}

struct s83 {
    signed char[1] pad1;
    unsigned char f1;
};

void fun_140004cc4() {
    uint32_t eax1;
    struct s83* rsi2;

    eax1 = rsi2->f1;
    if (*reinterpret_cast<signed char*>(&eax1) == 0x6c) {
        goto 0x1400049c7;
    } else {
        goto 0x1400049c7;
    }
}

void fun_140004ce4() {
    int64_t rcx1;
    int32_t v2;
    void** rax3;

    *reinterpret_cast<int32_t*>(&rcx1) = v2;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx1) + 4) = 0;
    rax3 = fun_1400082b0(rcx1);
    fun_140003150(rax3, reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 0x70);
    goto 0x1400048fd;
}

void fun_140004d3a() {
    uint32_t eax1;
    uint32_t v2;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) {
        __asm__("fld qword [rsp+0x20]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140004250(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x1400048fd;
    } else {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140004250(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x1400048fd;
    }
}

void fun_140004d72() {
    goto 0x1400049c7;
}

void fun_140004da3() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x1400049c0;
    goto 0x1400049c7;
}

void fun_140004dc0() {
    fun_140002e50(37, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
    goto 0x1400048fd;
}

void fun_140004e7d() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x1400049c0;
    goto 0x1400049c7;
}

void fun_140004e9a() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x1400049c0;
    goto 0x1400049c7;
}

void fun_140004eb7() {
    uint32_t r14d1;

    if (r14d1 <= 1) {
        goto 0x1400049c7;
    } else {
        goto 0x1400049c7;
    }
}

void fun_140004ed3() {
    int32_t r14d1;
    uint32_t r14d2;

    if (r14d1) {
        if (r14d2 > 3) 
            goto 0x14000516b;
    } else {
        goto 0x1400049c7;
    }
}

void fun_140004ef0() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) 
        goto 0x140004b8d; else 
        goto "???";
}

void fun_140004fa0() {
}

void fun_140005010() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) {
        __asm__("fld tword [rdx]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140004170(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x1400048fd;
    } else {
        __asm__("fld qword [rsp+0x20]");
        __asm__("fstp tword [rsp+0x40]");
        fun_140004170(reinterpret_cast<int64_t>(__zero_stack_offset()) + 64, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x1400048fd;
    }
}

void fun_140005048() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) 
        goto 0x140004d55; else 
        goto "???";
}

void fun_140006f0b() {
    int64_t rbx1;

    rbx1 = DeleteCriticalSection;
    rbx1(0x14000db00);
    goto rbx1;
}

struct s84 {
    signed char[20] pad20;
    int32_t f14;
};

struct s85 {
    signed char[24] pad24;
    uint32_t f18;
};

void fun_140007a91() {
    struct s84* r9_1;
    struct s85* r9_2;
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

struct s86 {
    unsigned char f0;
    unsigned char f1;
};

void fun_140007ae0(signed char* rcx, struct s86* rdx) {
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

uint64_t fun_140007d80(signed char* rcx, uint16_t** rdx, uint64_t r8) {
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
    eax8 = fun_1400081e8();
    edi9 = eax8;
    eax10 = fun_1400081f0();
    rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 8 - 8 - 8 - 48 - 8 + 8 - 8 + 8);
    rsi12 = *r12_5;
    r13d13 = eax10;
    if (!rsi12) {
        addr_140007dff_2:
        return r14_4;
    } else {
        if (!rbx6) {
            rbp14 = reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp11) + 43);
            while (edx15 = *rsi12, eax16 = fun_140007ca0(rbp14, *reinterpret_cast<uint16_t*>(&edx15), edi9, r13d13), rsp11 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(rsp11) - 8 + 8), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax16 < 0) | reinterpret_cast<uint1_t>(eax16 == 0))) {
                r14_4 = r14_4 + static_cast<int64_t>(eax16);
                if (!*reinterpret_cast<signed char*>(reinterpret_cast<int64_t>(rsp11) + (eax16 - 1) + 43)) 
                    goto addr_140007e70_7;
                ++rsi12;
            }
        } else {
            if (rbp7) {
                do {
                    edx17 = *rsi12;
                    eax18 = fun_140007ca0(rbx6, *reinterpret_cast<uint16_t*>(&edx17), edi9, r13d13);
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax18 < 0) | reinterpret_cast<uint1_t>(eax18 == 0))) 
                        goto addr_140007df8_11;
                    rax19 = reinterpret_cast<void*>(static_cast<int64_t>(eax18));
                    rbx6 = reinterpret_cast<signed char*>(reinterpret_cast<uint64_t>(rbx6) + reinterpret_cast<uint64_t>(rax19));
                    r14_4 = r14_4 + reinterpret_cast<uint64_t>(rax19);
                    if (!*(rbx6 - 1)) 
                        goto addr_140007e60_13;
                    ++rsi12;
                } while (rbp7 > r14_4);
                goto addr_140007e50_15;
            } else {
                goto addr_140007e50_15;
            }
        }
    }
    addr_140007df8_11:
    r14_4 = 0xffffffffffffffff;
    goto addr_140007dff_2;
    addr_140007e70_7:
    --r14_4;
    goto addr_140007dff_2;
    addr_140007e60_13:
    *r12_5 = reinterpret_cast<uint16_t*>(0);
    --r14_4;
    goto addr_140007dff_2;
    addr_140007e50_15:
    *r12_5 = rsi12;
    goto addr_140007dff_2;
}

uint64_t fun_140008070(void** rcx, unsigned char** rdx, uint64_t r8, void** r9) {
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
        r13_5 = reinterpret_cast<void**>(0x14000db74);
    }
    rsi8 = r8;
    fun_1400081e8();
    eax9 = fun_1400081f0();
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
            while (eax14 = fun_140007e80(rsi13, reinterpret_cast<uint64_t>(rdx10) + r12_11, r14_12, r13_5), !reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax14 < 0) | reinterpret_cast<uint1_t>(eax14 == 0))) {
                rdx10 = *rbx7;
                r12_11 = r12_11 + static_cast<int64_t>(eax14);
            }
        } else {
            *reinterpret_cast<int32_t*>(&r12_11) = 0;
            *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&r12_11) + 4) = 0;
            if (rsi8) {
                do {
                    eax15 = fun_140007e80(r14_6, rdx10, rsi8 - r12_11, r13_5);
                    if (reinterpret_cast<uint1_t>(reinterpret_cast<uint1_t>(eax15 < 0) | reinterpret_cast<uint1_t>(eax15 == 0))) 
                        goto addr_140008104_12;
                    rax16 = reinterpret_cast<uint64_t>(static_cast<int64_t>(eax15));
                    r14_6 = r14_6 + 2;
                    r12_11 = r12_11 + rax16;
                    rdx10 = reinterpret_cast<unsigned char*>(reinterpret_cast<uint64_t>(*rbx7) + rax16);
                    *rbx7 = rdx10;
                } while (rsi8 > r12_11);
            }
        }
    }
    addr_140008114_15:
    return r12_11;
    addr_140008104_12:
    if (rsi8 > r12_11 && !eax15) {
        *rbx7 = reinterpret_cast<unsigned char*>(0);
        goto addr_140008114_15;
    }
}

int64_t __C_specific_handler = 0xe456;

void fun_1400081e0() {
    goto __C_specific_handler;
}

int64_t fun_140001d40() {
    int32_t edx1;
    int32_t edx2;

    if (edx1 == 3) 
        goto 0x140001d60;
    if (!edx2) 
        goto 0x140001d60;
    return 1;
}

void fun_140008370() {
    goto fun_140001410;
}

int64_t fun_1400013f0(void** rcx, void** rdx) {
    int32_t* rax3;
    int64_t rax4;

    rax3 = g14000a7a0;
    *rax3 = 0;
    rax4 = fun_140001180(rcx, rdx);
    return rax4;
}

int32_t* g14000a700 = reinterpret_cast<int32_t*>(0x140009020);

void fun_140001d70() {
    int32_t* rax1;
    int32_t edx2;
    int32_t edx3;

    rax1 = g14000a700;
    if (*rax1 != 2) {
        *rax1 = 2;
    }
    if (edx2 == 2) 
        goto 0x140001da0;
    if (edx3 == 1) 
        goto 0x140001de0; else 
        goto "???";
}

int64_t fun_140001e00() {
    return 0;
}

void fun_140001ec0() {
    goto 0x140001e4f;
}

void fun_1400025a0() {
    int64_t rax1;

    rax1 = fun_1400082a8(8);
    if (rax1 == 1) 
        goto 0x1400024f0; else 
        goto "???";
}

int64_t fun_140002770(int32_t ecx) {
    uint32_t eax2;

    eax2 = g14000d0e8;
    if (eax2) 
        goto 0x140002790;
    return 0;
}

struct s87 {
    int16_t f0;
    signed char[58] pad60;
    int32_t f3c;
};

int64_t fun_1400028f0(struct s87* rcx) {
    if (rcx->f0 == 0x5a4d) {
        if (*reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(rcx) + rcx->f3c) == 0x4550) 
            goto 0x140002910;
    }
    return 0;
}

struct s88 {
    signed char[8] pad8;
    int32_t f8;
    int32_t fc;
};

struct s89 {
    signed char[60] pad60;
    int32_t f3c;
};

struct s90 {
    signed char[6] pad6;
    uint16_t f6;
    signed char[12] pad20;
    uint16_t f14;
};

struct s88* fun_140002920(struct s89* rcx, uint64_t rdx) {
    struct s90* rcx3;
    int64_t rax4;
    struct s88* rax5;
    uint32_t ecx6;
    int64_t rcx7;
    struct s88* r9_8;
    uint64_t r8_9;
    uint64_t rcx10;
    uint64_t rcx11;

    rcx3 = reinterpret_cast<struct s90*>(reinterpret_cast<int64_t>(rcx) + rcx->f3c);
    *reinterpret_cast<uint32_t*>(&rax4) = rcx3->f14;
    *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax4) + 4) = 0;
    rax5 = reinterpret_cast<struct s88*>(reinterpret_cast<int64_t>(rcx3) + rax4 + 24);
    ecx6 = rcx3->f6;
    if (!ecx6) {
        addr_140002965_2:
        *reinterpret_cast<int32_t*>(&rax5) = 0;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax5) + 4) = 0;
    } else {
        *reinterpret_cast<uint32_t*>(&rcx7) = ecx6 - 1;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rcx7) + 4) = 0;
        r9_8 = reinterpret_cast<struct s88*>(reinterpret_cast<int64_t>(rax5) + (rcx7 + rcx7 * 4) * 8 + 40);
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
            rax5 = reinterpret_cast<struct s88*>(reinterpret_cast<int64_t>(rax5) + 40);
        } while (rax5 != r9_8);
        goto addr_140002965_2;
    }
    return rax5;
}

struct s91 {
    int32_t f0;
    signed char[2] pad6;
    uint16_t f6;
    signed char[16] pad24;
    int16_t f18;
};

void fun_140002970(void** rcx) {
    struct s0* rax2;
    struct s2* rdx3;
    struct s91* rax4;

    rax2 = fun_1400082b8(rcx);
    if (reinterpret_cast<uint64_t>(rax2) > 8) 
        goto 0x140002a00;
    rdx3 = g14000a730;
    if (rdx3->f0 != 0x5a4d) 
        goto 0x1400029ee;
    rax4 = reinterpret_cast<struct s91*>(rdx3->f3c + reinterpret_cast<uint64_t>(rdx3));
    if (rax4->f0 != 0x4550) 
        goto 0x1400029ee;
    if (rax4->f18 != 0x20b) 
        goto 0x1400029ee;
    if (!rax4->f6) 
        goto 0x140002a00;
    goto 0x1400029d9;
}

void fun_140002c10() {
    struct s2* r11_1;

    r11_1 = g14000a730;
    if (r11_1->f0 != 0x5a4d) 
        goto 0x140002c32;
    if (*reinterpret_cast<int32_t*>(r11_1->f3c + reinterpret_cast<uint64_t>(r11_1)) == 0x4550) 
        goto 0x140002c40; else 
        goto "???";
}

void fun_1400049f0(void** rcx) {
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
            addr_140004a25_4:
        } else {
            if (r15d7 == 1) {
                *reinterpret_cast<uint32_t*>(&r9_3) = *reinterpret_cast<uint16_t*>(&r9_3);
                *reinterpret_cast<int32_t*>(&r9_3 + 4) = 0;
            } else {
                if (r15d8 == 5) {
                    *reinterpret_cast<uint32_t*>(&r9_3) = *reinterpret_cast<unsigned char*>(&r9_3);
                    *reinterpret_cast<int32_t*>(&r9_3 + 4) = 0;
                    goto addr_140004a25_4;
                }
            }
        }
    }
    if (*reinterpret_cast<int32_t*>(&rcx) == 0x75) {
        fun_140003760(r9_3, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x1400048fd;
    } else {
        fun_140003250(rcx, r9_3, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x1400048fd;
    }
}

void fun_140004a68() {
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
            addr_140004a9d_4:
        } else {
            if (r15d6 == 1) {
                rcx2 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<int16_t*>(&rcx2)));
            } else {
                if (r15d7 == 5) {
                    rcx2 = reinterpret_cast<void**>(static_cast<int64_t>(*reinterpret_cast<signed char*>(&rcx2)));
                    goto addr_140004a9d_4;
                }
            }
        }
    }
    fun_140003760(rcx2, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
    goto 0x1400048fd;
}

void fun_140004ac3() {
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
            eax7 = fun_1400082d0(r12_4);
            rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
        } else {
            eax7 = fun_140007b40(r12_4, static_cast<int64_t>(v6));
            rsp8 = reinterpret_cast<void*>(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8);
        }
        fun_140002eb0(r12_4, eax7, reinterpret_cast<int64_t>(rsp8) + 0x70, r9_9, __return_address());
    } else {
        fun_140003150(rcx1, reinterpret_cast<int64_t>(__zero_stack_offset()) + 0x70);
        goto 0x1400048fd;
    }
}

void fun_1400050c4() {
}

void fun_140004d02() {
    uint32_t eax1;
    uint32_t v2;

    eax1 = v2 | 32;
    if (!(*reinterpret_cast<unsigned char*>(&eax1) & 4)) 
        goto 0x140005024; else 
        goto "???";
}

void fun_140004d89() {
    int32_t r14d1;

    if (r14d1) 
        goto 0x1400049c0;
    goto 0x1400049c7;
}

void fun_140004dd7() {
    int32_t r14d1;
    struct s43* rax2;
    unsigned char* rdx3;
    void** eax4;

    if (r14d1) 
        goto 0x1400049c0;
    rax2 = fun_140008288();
    rdx3 = rax2->f8;
    eax4 = fun_140008000(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 + 8 + 94, rdx3, 16, reinterpret_cast<int64_t>(__zero_stack_offset()) + 96, __return_address());
    if (!(reinterpret_cast<uint1_t>(reinterpret_cast<signed char>(eax4) < reinterpret_cast<signed char>(0)) | reinterpret_cast<uint1_t>(eax4 == 0))) {
    }
    goto 0x1400049c0;
}

void fun_140004e45() {
    int64_t r10_1;
    uint32_t r14d2;
    int32_t eax3;
    int32_t* r12_4;
    int32_t* r10_5;
    int32_t r14d6;

    if (!r10_1) 
        goto 0x140004ec1;
    if (r14d2 & 0xfffffffd) {
        goto 0x1400049c7;
    } else {
        eax3 = *r12_4;
        *r10_5 = eax3;
        if (eax3 < 0) {
            if (r14d6) {
                goto 0x1400049c7;
            }
        }
        goto 0x1400049c7;
    }
}

void fun_140006ef0() {
    int32_t tmp32_1;

    tmp32_1 = g14000daf0;
    g14000daf0 = 3;
    if (tmp32_1 == 2) 
        goto 0x140006f10;
    return;
}

int64_t fun_140007c60() {
    int64_t rax1;

    rax1 = g14000db60;
    return rax1;
}

int64_t fun_140008180(unsigned char* rcx, uint64_t rdx, void** r8) {
    void** rbx4;
    int32_t eax5;

    rbx4 = r8;
    fun_1400081f0();
    fun_1400081e8();
    if (!rbx4) {
        rbx4 = reinterpret_cast<void**>(0x14000db70);
    }
    eax5 = fun_140007e80(reinterpret_cast<int64_t>(__zero_stack_offset()) - 8 - 8 - 8 - 8 - 72 - 8 + 8 - 8 + 8 + 62, rcx, rdx, rbx4);
    return static_cast<int64_t>(eax5);
}

void fun_1400024a0(uint32_t** rcx) {
    if ((**rcx & 0x20ffffff) == 0x20474343) 
        goto 0x140002580; else 
        goto "???";
}

struct s92 {
    int64_t f0;
    int64_t f8;
};

struct s92* g140009000 = reinterpret_cast<struct s92*>(0x1400083a0);

void fun_140001c60() {
    struct s92* rax1;
    int64_t rax2;
    struct s92* rax3;

    rax1 = g140009000;
    rax2 = rax1->f0;
    if (rax2) {
        do {
            rax2();
            rax3 = g140009000;
            rax2 = rax3->f8;
            g140009000 = reinterpret_cast<struct s92*>(&rax3->f8);
        } while (rax2);
    }
    return;
}

void fun_140001e10(uint32_t* rcx) {
    int64_t rax2;

    __asm__("movaps [rsp+0x40], xmm6");
    __asm__("movaps [rsp+0x50], xmm7");
    __asm__("movaps [rsp+0x60], xmm8");
    if (*rcx > 6) {
        goto 0x140001e4f;
    } else {
        *reinterpret_cast<uint32_t*>(&rax2) = *rcx;
        *reinterpret_cast<int32_t*>(reinterpret_cast<int64_t>(&rax2) + 4) = 0;
        goto *reinterpret_cast<int32_t*>(0x14000a1c4 + rax2 * 4) + 0x14000a1c4;
    }
}

void fun_140001ed0() {
    goto 0x140001e4f;
}

void fun_140004fd8() {
    int32_t eax1;
    int32_t v2;

    eax1 = v2;
    if (*reinterpret_cast<unsigned char*>(&eax1) & 4) 
        goto 0x140004c87; else 
        goto "???";
}

void fun_1400082e0() {
    goto WideCharToMultiByte;
}

void fun_1400079d0() {
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
    rax1 = fun_140006f40(1);
    if (!rax1) 
        goto 0x140007a86;
    rax2 = rbx3;
    rcx4 = rbx5 >> 32;
    edx6 = *reinterpret_cast<uint32_t*>(&rcx4) & 0xfffff;
    ecx7 = *reinterpret_cast<uint32_t*>(&rcx4) >> 20 & 0x7ff;
    if (ecx7) {
        edx6 = edx6 | 0x100000;
    }
    if (!ebx8) 
        goto 0x140007a98;
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
        goto 0x140007ab6; else 
        goto "???";
}

void fun_140001440() {
    return;
}

void fun_140001ee0() {
    goto 0x140001e4f;
}

void fun_1400082e8() {
    goto VirtualQuery;
}

void fun_140001ef0() {
    goto 0x140001e4f;
}

void fun_1400082f0() {
    goto VirtualProtect;
}

void fun_1400082f8() {
    goto TlsGetValue;
}

void fun_140008300() {
    goto Sleep;
}

void fun_140008308() {
    goto SetUnhandledExceptionFilter;
}

void fun_140008310() {
    goto MultiByteToWideChar;
}

void fun_140008318() {
    goto LeaveCriticalSection;
}

void fun_140008320() {
    goto IsDBCSLeadByteEx;
}

void fun_140008328() {
    goto InitializeCriticalSection;
}

void fun_140008330() {
    goto GetLastError;
}

void fun_140008338() {
    goto EnterCriticalSection;
}

void fun_140008340() {
    goto DeleteCriticalSection;
}
