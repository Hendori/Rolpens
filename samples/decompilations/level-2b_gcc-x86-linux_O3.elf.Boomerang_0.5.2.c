int main(int argc, char *argv[]);
void all_badges();
void polynome_table();
void red_herring();
__size32 __x86.get_pc_thunk.bx();


/** address: 0x00001070 */
int main(int argc, char *argv[])
{
    all_badges();
    polynome_table();
    red_herring();
    return 0;
}

/** address: 0x000011c0 */
void all_badges()
{
    int ebx; 		// r27

    __x86.get_pc_thunk.bx();
    printf(ebx + 0xe42);
    return;
}

/** address: 0x00001250 */
void polynome_table()
{
    int ebx; 		// r27

    __x86.get_pc_thunk.bx();
    printf(ebx + 0xe01, 0);
    printf(ebx + 0xe01);
    printf(ebx + 0xe01);
    printf(ebx + 0xe01);
    printf(ebx + 0xe01);
    printf(ebx + 0xe01);
    printf(ebx + 0xe01);
    printf(ebx + 0xe01);
    printf(ebx + 0xe01);
    printf(ebx + 0xe01);
    printf(ebx + 0xe01);
    return;
}

/** address: 0x00001310 */
void red_herring()
{
    int ebx; 		// r27

    __x86.get_pc_thunk.bx();
    puts(ebx + 0xd19);
    printf(ebx + 0xd4d);
    printf(ebx + 0xd4d);
    printf(ebx + 0xd4d);
    printf(ebx + 0xd4d);
    printf(ebx + 0xd4d);
    return;
}

/** address: 0x000010c0 */
__size32 __x86.get_pc_thunk.bx()
{
    __size32 local0; 		// m[esp]

    return local0;
}

