void proc_0x00001181();
void proc_0x00007c11();
void proc_0x000026e1(__size32 param1, union { int; void *; } param2, __size32 param3);
void proc_0x00007c79();
void _start(int param1);
void proc_0x00007561(__size32 param1);
void proc_0x000041d1(union { int; void *; } param1, __size32 param2, __size32 param3, __size32 param4);
void proc_0x000075d1(__size32 param1);
void proc_0x00007651(__size32 param1, __size32 param2);
void proc_0x00007c09();
void proc_0x00007bf9();
void proc_0x00007bd1();


/** address: 0x00001181 */
void proc_0x00001181()
{
}

/** address: 0x00007c11 */
void proc_0x00007c11()
{
/* goto m[0x569e] */
}

/** address: 0x000026e1 */
void proc_0x000026e1(__size32 param1, union { int; void *; } param2, __size32 param3)
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 esp; 		// r28

    proc_0x00007561(param1 - 1);
    *(__size32*)(param2 + 29) = param1 - 1;
    proc_0x000041d1(0, 0x6000, param2 - 4, param1 - 1, param3, INCDECFLAGS32(param2 - 4), param2 == 4, INCDECFLAGS32(param2 - 4), param2 < 4, 0, ebp, esp - 4, ebx);
}

/** address: 0x00007c79 */
void proc_0x00007c79()
{
/* goto m[0x569e] */
}

/** address: 0x000013f1 */
void _start(int param1)
{
    __size32 *eax_1; 		// r24{2}

    eax_1 = *0x83e5;
    *(__size32*)eax_1 = 0;
    proc_0x00001181(eax_1, INCDECFLAGS32(param1 - 2), param1 == 2, INCDECFLAGS32(param1 - 2), param1 < 2, 0, pc);
    return;
}

/** address: 0x00007561 */
void proc_0x00007561(__size32 param1)
{
    proc_0x00007651(param1 - 2, 0);
}

/** address: 0x000041d1 */
void proc_0x000041d1(union { int; void *; } param1, __size32 param2, __size32 param3, __size32 param4)
{
    __size32 ebp; 		// r29
    __size32 ebx; 		// r27
    __size32 edi; 		// r31
    __size32 esi; 		// r30
    __size32 esp; 		// r28

    proc_0x00007bf9(param2 - 2, param3 + 4, param2 - 2, param4, param3 + 4, param3 + 4, INCDECFLAGS32(param1), param1 == 0, INCDECFLAGS32(param1), param1 < 0, 0, param4, param1, edi, esi, ebp, esp - 12, ebp, edi, esi, ebx);
}

/** address: 0x000075d1 */
void proc_0x000075d1(__size32 param1)
{
    proc_0x00007651(param1 - 2, 0);
}

/** address: 0x00007651 */
void proc_0x00007651(__size32 param1, __size32 param2)
{
    __size32 ebx; 		// r27
    unsigned int esp; 		// r28

    proc_0x00007bd1(param1 - 1, param2, SUBFLAGS32(esp - 4, 32, (esp - 36)), esp == 36, (unsigned int)(esp - 4) < 32, (int)esp < 36, (int)esp < 4 && (int)esp >= 36, param2, ebx, pc);
    return;
}

/** address: 0x00007c09 */
void proc_0x00007c09()
{
/* goto m[0x569e] */
}

/** address: 0x00007bf9 */
void proc_0x00007bf9()
{
/* goto m[0x5696] */
}

/** address: 0x00007bd1 */
void proc_0x00007bd1()
{
/* goto m[0x568e] */
}

