void proc_0x00001181();
void proc_0x00008241();
void proc_0x00002d11(__size32 param1, union { int; void *; } param2, __size32 param3);
void _start(int param1);
void proc_0x00007b91(__size32 param1);
void proc_0x00004801(union { int; void *; } param1, __size32 param2, __size32 param3, __size32 param4);
void proc_0x00007c01(__size32 param1);
void proc_0x00007c81(__size32 param1, __size32 param2);
void proc_0x00008239();
void proc_0x00008229();
void proc_0x00008201();


/** address: 0x00001181 */
void proc_0x00001181()
{
}

/** address: 0x00008241 */
void proc_0x00008241()
{
/* goto m[0x6066] */
}

/** address: 0x00002d11 */
void proc_0x00002d11(__size32 param1, union { int; void *; } param2, __size32 param3)
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esp; 		// r28

    proc_0x00007b91(param1 - 1);
    *(__size32*)(param2 + 29) = param1 - 1;
    proc_0x00004801(0, 0x6000, param2 - 4, param1 - 1, param3, INCDECFLAGS32(param2 - 4), param2 == 4, INCDECFLAGS32(param2 - 4), param2 < 4, 0, ebp, esp - 4, ebx);
}

/** address: 0x000013f1 */
void _start(int param1)
{
    __size32 *eax_1; 		// r24{2}

    eax_1 = *0x93a5;
    *(__size32*)eax_1 = 0;
    proc_0x00001181(eax_1, INCDECFLAGS32(param1 - 2), param1 == 2, INCDECFLAGS32(param1 - 2), param1 < 2, 0, pc);
    return;
}

/** address: 0x00007b91 */
void proc_0x00007b91(__size32 param1)
{
    proc_0x00007c81(param1 - 2, 0);
}

/** address: 0x00004801 */
void proc_0x00004801(union { int; void *; } param1, __size32 param2, __size32 param3, __size32 param4)
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 esi; 		// r30
    __size32 esp; 		// r28

    proc_0x00008229(param2 - 2, param3 + 4, param2 - 2, param4, param3 + 4, param3 + 4, INCDECFLAGS32(param1), param1 == 0, INCDECFLAGS32(param1), param1 < 0, 0, param4, param1, edi, esi, ebp, esp - 12, ebp, edi, esi, ebx);
}

/** address: 0x00007c01 */
void proc_0x00007c01(__size32 param1)
{
    proc_0x00007c81(param1 - 2, 0);
}

/** address: 0x00007c81 */
void proc_0x00007c81(__size32 param1, __size32 param2)
{
    __size32 ebx; 		// r27
    unsigned int esp; 		// r28

    proc_0x00008201(param1 - 1, param2, SUBFLAGS32(esp - 4, 32, (esp - 36)), esp == 36, (unsigned int)(esp - 4) < 32, (int)esp < 36, (int)esp < 4 && (int)esp >= 36, param2, ebx, pc);
    return;
}

/** address: 0x00008239 */
void proc_0x00008239()
{
/* goto m[0x6066] */
}

/** address: 0x00008229 */
void proc_0x00008229()
{
/* goto m[0x605e] */
}

/** address: 0x00008201 */
void proc_0x00008201()
{
/* goto m[0x6056] */
}

