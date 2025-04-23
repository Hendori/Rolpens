
int32_t __libc_start_main = 0x1033c;

/* $a */
void a(int32_t r0) {
    int32_t pc2;

    pc2 = __libc_start_main;
    goto pc2;
}

/* $d */
int32_t d = 0x10c34;

int32_t g103dc = 32;

int32_t __gmon_start__ = 0x1033c;

void call_weak_fn() {
    int32_t r3_1;
    int32_t r2_2;
    int32_t pc3;

    r3_1 = d;
    r2_2 = g103dc;
    if (!*reinterpret_cast<int32_t*>(0x103cc + r3_1 + r2_2)) {
        return;
    } else {
        pc3 = __gmon_start__;
        goto pc3;
    }
}

/* $d */
uint32_t d = 0x210b8;

uint32_t g10404 = 0x210b8;

int32_t g10408 = 0;

uint32_t deregister_tm_clones() {
    uint32_t r0_1;
    uint32_t r3_2;
    int32_t r3_3;

    r0_1 = d;
    r3_2 = g10404;
    if (r3_2 == r0_1) {
        return r0_1;
    } else {
        r3_3 = g10408;
        if (!r3_3) {
            return r0_1;
        } else {
            goto r3_3;
        }
    }
}

int32_t printf = 0x1033c;

void fun_1035c(int32_t r0, uint32_t r1, uint32_t r2) {
    int32_t pc4;

    pc4 = printf;
    goto pc4;
}

uint16_t g2103c = 0x19a5;

unsigned char g21040 = 42;

uint16_t g21053 = 0xdc8e;

unsigned char g21057 = 45;

uint16_t g2106a = 0x916f;

unsigned char g2106e = 44;

uint16_t g21081 = 0xa291;

unsigned char g21085 = 40;

uint16_t g21098 = 0x17d9;

unsigned char g2109c = 43;

uint16_t g210af = 0xc4b6;

unsigned char g210b3 = 42;

void all_badges() {
    uint32_t r1_1;
    uint32_t r2_2;
    uint32_t lr3;
    uint32_t r0_4;
    uint32_t r2_5;
    uint32_t lr6;
    uint32_t r1_7;
    uint32_t r2_8;
    uint32_t r1_9;
    uint32_t r0_10;
    uint32_t r2_11;
    uint32_t r12_12;
    uint32_t r3_13;

    r1_1 = g2103c;
    r2_2 = g21040;
    lr3 = g21053;
    r0_4 = g21057;
    r2_5 = g2106a;
    lr6 = g2106e;
    r1_7 = g21081;
    r2_8 = g21085;
    r1_9 = g21098;
    r0_10 = g2109c;
    r2_11 = r1_9 - r0_10;
    r12_12 = g210af;
    r3_13 = g210b3;
    fun_1035c("We can open every door with badge #%d\n", r12_12 - r3_13 + (r2_11 + (r1_7 - r2_8 + (r2_5 - lr6 + (r1_1 - r2_2 + (lr3 - r0_4))))), r2_11);
    return;
}

int32_t puts = 0x1033c;

void fun_10368(int32_t r0) {
    int32_t pc2;

    pc2 = puts;
    goto pc2;
}

int32_t abort = 0x1033c;

int32_t fun_10380() {
    int32_t pc1;

    pc1 = abort;
    goto pc1;
}

void polynome_table() {
    fun_1035c("P(%d) = %d\n", 0, 5);
    fun_1035c("P(%d) = %d\n", 1, 0xffffffc9);
    fun_1035c("P(%d) = %d\n", 2, 0xffffffa3);
    fun_1035c("P(%d) = %d\n", 3, 0xffffff93);
    fun_1035c("P(%d) = %d\n", 4, 0xffffff99);
    fun_1035c("P(%d) = %d\n", 5, 0xffffffb5);
    fun_1035c("P(%d) = %d\n", 6, 0xffffffe7);
    fun_1035c("P(%d) = %d\n", 7, 47);
    fun_1035c("P(%d) = %d\n", 8, 0x8d);
    fun_1035c("P(%d) = %d\n", 9, 0x101);
    fun_1035c("P(%d) = %d\n", 10, 0x18b);
    return;
}

void red_herring() {
    uint32_t r2_1;
    uint32_t r2_2;
    uint32_t r2_3;
    uint32_t r2_4;
    uint32_t r2_5;

    fun_10368("These are a few of my favorite numbers:");
    fun_1035c(" *  %d\n", 16, r2_1);
    fun_1035c(" *  %d\n", 35, r2_2);
    fun_1035c(" *  %d\n", 48, r2_3);
    fun_1035c(" *  %d\n", 49, r2_4);
    fun_1035c(" *  %d\n", 32, r2_5);
    return;
}

void _init() {
    call_weak_fn();
    return;
}

/* $d */
int32_t d = 0x10cb4;

/* $d */
void d(int32_t r0, int16_t* r1);

/* $a */
void a() {
    int32_t lr1;

    lr1 = d;
    goto *reinterpret_cast<int32_t*>(reinterpret_cast<int32_t>(d) + lr1 + 8);
}

/* $d */
void d() {
    int1_t z1;
    int1_t z2;

    if (z1) {
    }
    if (!z2) 
        goto "???";
}

/* $d */
int32_t d = 0x210b8;

int32_t g10440 = 0;

/* $d */
int32_t d(int32_t r0, int32_t r1, int16_t* r2) {
    int1_t z4;
    int32_t r8_5;
    int1_t z6;
    int1_t z7;
    int32_t r0_8;
    int1_t z9;
    int32_t r3_10;

    if (z4) {
        *r2 = static_cast<int16_t>(r1);
        r2 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(r2) - r8_5);
    }
    if (z6) {
        *r2 = static_cast<int16_t>(r1);
    }
    if (z7) {
    }
    r0_8 = d;
    if (z9) {
        return r0_8;
    } else {
        r3_10 = g10440;
        if (!r3_10) {
            return r0_8;
        } else {
            goto r3_10;
        }
    }
}

/* $d */
unsigned char* d = reinterpret_cast<unsigned char*>(0x210b6);

/* $d */
uint32_t d(uint32_t r0, int32_t r1, int16_t* r2) {
    int1_t z4;
    int32_t r8_5;
    int1_t z6;
    int1_t z7;
    unsigned char* r4_8;
    uint32_t r0_9;

    if (z4) {
        *r2 = static_cast<int16_t>(r1);
        r2 = reinterpret_cast<int16_t*>(reinterpret_cast<int32_t>(r2) - r8_5);
    }
    if (z6) {
        *r2 = static_cast<int16_t>(r1);
    }
    if (z7) {
        r0 = r0 & r0;
    }
    r4_8 = d;
    if (*r4_8) {
        return r0;
    } else {
        r0_9 = deregister_tm_clones();
        *r4_8 = 1;
        return r0_9;
    }
}

/* $d */
void d() {
    int1_t z1;
    int16_t* r2_2;
    int32_t r1_3;

    if (z1) {
        *r2_2 = static_cast<int16_t>(r1_3);
    }
    goto "$";
}

/* $d */
void d(int32_t r0, int16_t* r1) {
    int1_t z3;

    if (!z3) 
        goto "???";
    *r1 = static_cast<int16_t>(r0);
}

/* $d */
int32_t d = 0x10600;

void _start(int32_t r0) {
    int32_t r0_2;
    int1_t z3;

    r0_2 = d;
    a(r0_2);
    fun_10380();
    if (!z3) 
        goto "???";
}

int32_t main() {
    all_badges();
    polynome_table();
    red_herring();
    return 0;
}

void _fini() {
    return;
}
