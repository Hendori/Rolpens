int main(int argc, char *argv[]);
__size32 __x86.get_pc_thunk.bx();
void it_crowd();


/** address: 0x000012fc */
int main(int argc, char *argv[])
{
    int ebx; 		// r27

    __x86.get_pc_thunk.bx();
    it_crowd();
    printf(ebx + 0xd18);
    return 0;
}

/** address: 0x000010a0 */
__size32 __x86.get_pc_thunk.bx()
{
    __size32 local0; 		// m[esp]

    return local0;
}

/** address: 0x0000119d */
void it_crowd()
{
    int ebx; 		// r27

    __x86.get_pc_thunk.bx();
    puts(ebx + 0xe61);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xea0);
    puts(ebx + 0xeaf);
    puts(ebx + 0xeca);
    return;
}

