int main(int argc, char *argv[]);
__size32 __x86.get_pc_thunk.bx();
void it_crowd();


/** address: 0x00001070 */
int main(int argc, char *argv[])
{
    int ebx; 		// r27

    __x86.get_pc_thunk.bx();
    it_crowd();
    printf(ebx + 0xfa5);
    return 0;
}

/** address: 0x000010f0 */
__size32 __x86.get_pc_thunk.bx()
{
    __size32 local0; 		// m[esp]

    return local0;
}

/** address: 0x000011f0 */
void it_crowd()
{
    int ebx; 		// r27

    __x86.get_pc_thunk.bx();
    puts(ebx + 0xe11);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe50);
    puts(ebx + 0xe5f);
    puts(ebx + 0xe7a);
    return;
}

