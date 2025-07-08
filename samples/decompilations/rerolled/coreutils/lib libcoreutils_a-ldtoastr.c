/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */int ldtoastr(char *buf, size_t bufsize, int flags, int width, longdouble x) {
   char *pcVar1;
   long lVar2;
   int iVar3;
   ulong uVar4;
   char *pcVar5;
   int iVar6;
   long in_FS_OFFSET;
   longdouble in_ST0;
   longdouble lVar7;
   longdouble in_ST1;
   longdouble in_ST2;
   longdouble in_ST3;
   longdouble in_ST4;
   longdouble lVar8;
   longdouble lVar9;
   char format[11];
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   format[0] = '%';
   format[1] = '-';
   lVar7 = x;
   if (x <= (longdouble)0 || (longdouble)0 != x) {
      lVar7 = -x;
   }

   pcVar1 = format + ( ulong )(flags & 1) + 1;
   *pcVar1 = '+';
   pcVar1[(uint)flags >> 1 & 1] = ' ';
   pcVar5 = pcVar1 + ( (uint)flags >> 1 & 1 ) + ( (uint)flags >> 2 & 1 );
   *pcVar5 = '0';
   uVar4 = ( ulong )((uint)flags >> 3 & 1);
   pcVar1 = pcVar5 + uVar4;
   for (int i = 0; i < 4; i++) {
      pcVar1[i] = '*';
   }

   pcVar5[uVar4 + 5] = '\0';
   pcVar5[uVar4 + 4] = ( -((flags & 0x10U) == 0) & 0x20U ) + 0x47;
   iVar6 = 1;
   lVar8 = in_ST4;
   lVar9 = in_ST4;
   if (__LC3 <= lVar7) {
      iVar6 = 0x12;
   }

   while (( ( iVar3 = __snprintf_chk(buf, bufsize, 2, 0xffffffffffffffff, format, width, iVar6) ),-1 < iVar3 && ( iVar6 < 0x15 ) ) && ( ( lVar7 = in_ST0 ),bufsize <= (ulong)(long)iVar3 || ( lVar7 = in_ST1 ),in_ST1 = in_ST2,in_ST2 = in_ST3,in_ST3 = in_ST4,in_ST4 = lVar8,lVar8 = lVar9,strtold(buf, (char**)0x0),lVar9 = lVar8,in_ST0 != x )) {
      iVar6 = iVar6 + 1;
      in_ST0 = lVar7;
   }
;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

