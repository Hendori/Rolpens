
int32_t __libc_start_main = 0x1033c;

/* $a */
void a(int32_t r0) {
    int32_t pc2;

    pc2 = __libc_start_main;
    goto pc2;
}

/* $d */
int32_t d = 0x10c10;

int32_t g10400 = 32;

int32_t __gmon_start__ = 0x1033c;

void call_weak_fn() {
    int32_t r3_1;
    int32_t r2_2;
    int32_t pc3;

    r3_1 = d;
    r2_2 = g10400;
    if (!*reinterpret_cast<int32_t*>(0x103f0 + r3_1 + r2_2)) {
        return;
    } else {
        pc3 = __gmon_start__;
        goto pc3;
    }
}

/* $d */
uint32_t d = 0x2102c;

uint32_t g10428 = 0x2102c;

int32_t g1042c = 0;

uint32_t deregister_tm_clones() {
    uint32_t r0_1;
    uint32_t r3_2;
    int32_t r3_3;

    r0_1 = d;
    r3_2 = g10428;
    if (r3_2 == r0_1) {
        return r0_1;
    } else {
        r3_3 = g1042c;
        if (!r3_3) {
            return r0_1;
        } else {
            goto r3_3;
        }
    }
}

int32_t printf = 0x1033c;

void fun_1035c(int32_t r0, int32_t r1) {
    int32_t pc3;

    pc3 = printf;
    goto pc3;
}

void fun_10368(int32_t r0);

int32_t puts = 0x1033c;

void it_crowd() {
    int32_t pc1;

    fun_10368("Are you feeling stressed, Jen?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Are you sure?\n");
    fun_10368("Well, I guess you're not.\n");
    pc1 = puts;
    goto pc1;
}

void fun_10368(int32_t r0) {
    int32_t pc2;

    pc2 = puts;
    goto pc2;
}

int32_t abort = 0x1033c;

void fun_10380() {
    int32_t pc1;

    pc1 = abort;
    goto pc1;
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
void d(int32_t r0, int32_t r1) {
    int1_t z3;
    int1_t z4;

    if (z3) {
    }
    if (!z4) 
        goto "???";
}

/* $d */
int32_t d = 0x2102c;

int32_t g10464 = 0;

/* $d */
int32_t d(int32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    int32_t r0_5;
    int1_t z6;
    int32_t r3_7;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
    }
    r0_5 = d;
    if (z6) {
        return r0_5;
    } else {
        r3_7 = g10464;
        if (!r3_7) {
            return r0_5;
        } else {
            goto r3_7;
        }
    }
}

/* $d */
unsigned char* d = reinterpret_cast<unsigned char*>(0x2102c);

/* $d */
uint32_t d(uint32_t r0) {
    int1_t z2;
    int1_t z3;
    int1_t z4;
    unsigned char* r4_5;
    uint32_t r0_6;

    if (z2) {
    }
    if (z3) {
    }
    if (z4) {
        r0 = r0 & r0;
    }
    r4_5 = d;
    if (*r4_5) {
        return r0;
    } else {
        r0_6 = deregister_tm_clones();
        *r4_5 = 1;
        return r0_6;
    }
}

/* $d */
void d() {
    int1_t z1;

    if (z1) {
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

int32_t some_calculation(int32_t r0) {
    int32_t r2_2;
    int32_t r3_3;
    int32_t r2_4;
    int32_t r3_5;
    int32_t r2_6;
    int32_t r3_7;

    r2_2 = r0 * r0 + r0 + r0;
    r3_3 = r2_2 * r2_2 + r0 + r2_2;
    r2_4 = r3_3 * r3_3 + r0 + r3_3;
    r3_5 = r2_4 * r2_4 + r0 + r2_4;
    r2_6 = r3_5 * r3_5 + r0 + r3_5;
    r3_7 = r2_6 * r2_6 + r0 + r2_6;
    return r3_7 * r3_7 + r0 + r3_7;
}

int32_t main() {
    it_crowd();
    fun_1035c("Some calculation returned %d.\n", 0x937c862f);
    return 0;
}

void _fini() {
    return;
}

/* $d */
int32_t d = 0x1038c;

void _start(int32_t r0) {
    int32_t r0_2;
    int1_t z3;

    r0_2 = d;
    a(r0_2);
    fun_10380();
    if (!z3) 
        goto "???";
}
