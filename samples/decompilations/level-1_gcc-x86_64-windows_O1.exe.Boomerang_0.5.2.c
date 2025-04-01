void proc_0x00001181();
void proc_0x0000b4e1();
void proc_0x00005fb1(__size32 param1, union { int; void *; } param2, __size32 param3);
void _start(int param1);
void proc_0x0000ae31(__size32 param1);
void proc_0x00007aa1(union { int; void *; } param1, __size32 param2, __size32 param3, __size32 param4);
void proc_0x0000aea1(__size32 param1);
void proc_0x0000af21(__size32 param1, __size32 param2);
void proc_0x0000b4d9();
void proc_0x0000b4c9();
void proc_0x0000b4a1();


/** address: 0x00001181 */
void proc_0x00001181()
{
}

/** address: 0x0000b4e1 */
void proc_0x0000b4e1()
{
/* goto m[0x5dc6] */
}

/** address: 0x00005fb1 */
void proc_0x00005fb1(__size32 param1, union { int; void *; } param2, __size32 param3)
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esp; 		// r28

    proc_0x0000ae31(param1 - 1);
    *(__size32*)(param2 + 29) = param1 - 1;
    proc_0x00007aa1(0, 0x6000, param2 - 4, param1 - 1, param3, INCDECFLAGS32(param2 - 4), param2 == 4, INCDECFLAGS32(param2 - 4), param2 < 4, 0, ebp, esp - 4, ebx);
}

/** address: 0x000013f1 */
void _start(int param1)
{
    __size32 *eax_1; 		// r24{2}

    eax_1 = *0xc3a5;
    *(__size32*)eax_1 = 0;
    proc_0x00001181(eax_1, INCDECFLAGS32(param1 - 2), param1 == 2, INCDECFLAGS32(param1 - 2), param1 < 2, 0, pc);
    return;
}

/** address: 0x0000ae31 */
void proc_0x0000ae31(__size32 param1)
{
    proc_0x0000af21(param1 - 2, 0);
}

/** address: 0x00007aa1 */
void proc_0x00007aa1(union { int; void *; } param1, __size32 param2, __size32 param3, __size32 param4)
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 esi; 		// r30
    __size32 esp; 		// r28

    proc_0x0000b4c9(param2 - 2, param3 + 4, param2 - 2, param4, param3 + 4, param3 + 4, INCDECFLAGS32(param1), param1 == 0, INCDECFLAGS32(param1), param1 < 0, 0, param4, param1, edi, esi, ebp, esp - 12, ebp, edi, esi, ebx);
}

/** address: 0x0000aea1 */
void proc_0x0000aea1(__size32 param1)
{
    proc_0x0000af21(param1 - 2, 0);
}

/** address: 0x0000af21 */
void proc_0x0000af21(__size32 param1, __size32 param2)
{
    __size32 ebx; 		// r27
    unsigned int esp; 		// r28

    proc_0x0000b4a1(param1 - 1, param2, SUBFLAGS32(esp - 4, 32, (esp - 36)), esp == 36, (unsigned int)(esp - 4) < 32, (int)esp < 36, (int)esp < 4 && (int)esp >= 36, param2, ebx, pc);
    return;
}

/** address: 0x0000b4d9 */
void proc_0x0000b4d9()
{
/* goto m[0x5dc6] */
}

/** address: 0x0000b4c9 */
void proc_0x0000b4c9()
{
/* goto m[0x5dbe] */
}

/** address: 0x0000b4a1 */
void proc_0x0000b4a1()
{
/* goto m[0x5db6] */
}

