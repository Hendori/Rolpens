int main(int argc, char *argv[]);
void all_badges();
void polynome_table();
void red_herring();
__size32 __x86.get_pc_thunk.bx();


/** address: 0x00001338 */
int main(int argc, char *argv[])
{
    all_badges();
    polynome_table();
    red_herring();
    return 0;
}

/** address: 0x0000119d */
void all_badges()
{
    int ebx; 		// r27

    __x86.get_pc_thunk.bx();
    printf(ebx + 0xe62);
    return;
}

/** address: 0x00001228 */
void polynome_table()
{
    int ebx; 		// r27

    __x86.get_pc_thunk.bx();
    printf(ebx + 0xe26, 0);
    printf(ebx + 0xe26);
    printf(ebx + 0xe26);
    printf(ebx + 0xe26);
    printf(ebx + 0xe26);
    printf(ebx + 0xe26);
    printf(ebx + 0xe26);
    printf(ebx + 0xe26);
    printf(ebx + 0xe26);
    printf(ebx + 0xe26);
    printf(ebx + 0xe26);
    return;
}

/** address: 0x000012d9 */
void red_herring()
{
    int ebx; 		// r27

    __x86.get_pc_thunk.bx();
    puts(ebx + 0xd4d);
    printf(ebx + 0xd81);
    printf(ebx + 0xd81);
    printf(ebx + 0xd81);
    printf(ebx + 0xd81);
    printf(ebx + 0xd81);
    return;
}

/** address: 0x000010a0 */
__size32 __x86.get_pc_thunk.bx()
{
    __size32 local0; 		// m[esp]

    return local0;
}

