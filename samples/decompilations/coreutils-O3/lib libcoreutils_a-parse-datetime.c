
long digits_to_date_time(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  lVar1 = *(long *)(param_1 + 0xa8);
  lVar2 = in_stack_00000010;
  if (((lVar1 == 0) || (*(long *)(param_1 + 0x30) != 0)) || (*(char *)(param_1 + 0xa1) != '\0')) {
    if (4 < in_stack_00000018) {
      *(long *)(param_1 + 0xa8) = lVar1 + 1;
      *(long *)(param_1 + 0x30) = in_stack_00000018 + -4;
      *(long *)(param_1 + 0x40) = in_stack_00000010 % 100;
      *(long *)(param_1 + 0x38) = (in_stack_00000010 / 100) % 100;
      *(long *)(param_1 + 0x28) = in_stack_00000010 / 10000;
      return in_stack_00000010 * 0x346dc5d63886594b;
    }
    lVar1 = *(long *)(param_1 + 0xd0);
    lVar3 = 0;
    lVar4 = lVar1 + 1;
    if (2 < in_stack_00000018) {
      lVar2 = (SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(in_stack_00000010),8) +
               in_stack_00000010 >> 6) - (in_stack_00000010 >> 0x3f);
      lVar1 = lVar2 * 100;
      lVar3 = in_stack_00000010 + lVar2 * -100;
    }
  }
  else {
    if ((*(long *)(param_1 + 0xd0) != 0) || (2 < in_stack_00000018)) {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      *(long *)(param_1 + 0x30) = in_stack_00000018;
      *(undefined8 *)(param_1 + 0x20) = in_stack_00000008;
      *(long *)(param_1 + 0x28) = in_stack_00000010;
      return in_stack_00000018;
    }
    lVar4 = 1;
    lVar3 = 0;
  }
  *(long *)(param_1 + 0xd0) = lVar4;
  *(long *)(param_1 + 0x50) = lVar3;
  *(long *)(param_1 + 0x48) = lVar2;
  *(undefined4 *)(param_1 + 0x1c) = 2;
  *(undefined1 (*) [16])(param_1 + 0x58) = (undefined1  [16])0x0;
  return lVar1;
}



long time_zone_str(int param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  iVar2 = param_1 / 0xe10;
  iVar3 = -iVar2;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  iVar3 = __sprintf_chk(param_2,2,0xffffffffffffffff,"%c%02d",(param_1 >> 0x1f & 2U) + 0x2b,iVar3);
  uVar5 = param_1 % 0xe10;
  if (uVar5 != 0) {
    puVar4 = (undefined1 *)(iVar3 + param_2);
    uVar1 = -uVar5;
    if (0 < (int)uVar5) {
      uVar1 = uVar5;
    }
    *puVar4 = 0x3a;
    puVar4[1] = (char)((uVar1 / 0x3c) / 10) + '0';
    puVar6 = puVar4 + 3;
    uVar5 = uVar1 % 0x3c;
    puVar4[2] = (char)(uVar1 / 0x3c) + (char)((uVar1 / 0x3c) / 10) * -10 + '0';
    if (uVar5 != 0) {
      puVar4[3] = 0x3a;
      puVar4[4] = (char)(uVar5 / 10) + '0';
      puVar6 = puVar4 + 6;
      puVar4[5] = (char)uVar5 + (char)(uVar5 / 10) * -10 + '0';
    }
    *puVar6 = 0;
  }
  return param_2;
}



undefined8 tm_year_str(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 / 100 + 0x13;
  iVar3 = param_1 % 100;
  iVar1 = -iVar3;
  if (0 < iVar3) {
    iVar1 = iVar3;
  }
  iVar3 = -iVar2;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  __sprintf_chk(param_2,2,0xffffffffffffffff,"-%02d%02d" + (-0x76d < param_1),iVar3,iVar1);
  return param_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dbg_fputs(char *param_1)

{
  fwrite("date: ",1,6,_stderr);
  fputs(param_1,_stderr);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dbg_printf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  long in_FS_OFFSET;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_c0 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = param_10;
  local_a8 = param_11;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  fwrite("date: ",1,6,_stderr);
  local_d0 = &stack0x00000008;
  local_d8 = 8;
  local_c8 = local_b8;
  local_d4 = 0x30;
  __vfprintf_chk(_stderr,2,param_9,&local_d8);
  if (local_c0 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * debug_strfdatetime_constprop_0(tm *param_1,long param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strftime(param_3,100,"(Y-M-D) %Y-%m-%d %H:%M:%S",param_1);
  if (((param_2 != 0) && (iVar1 = (int)sVar2, iVar1 < 100)) && (*(long *)(param_2 + 0xd8) != 0)) {
    uVar3 = time_zone_str(*(undefined4 *)(param_2 + 0x18),auStack_48);
    __snprintf_chk(param_3 + iVar1,(long)(100 - iVar1),2,0xffffffffffffffff," TZ=%s",uVar3);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * str_days_constprop_0(long param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  
  if (*(char *)(param_1 + 0xe8) == '\0') {
    *param_2 = '\0';
    uVar1 = *(uint *)(param_1 + 0x10);
    if (6 < uVar1) {
      return param_2;
    }
    uVar3 = 1;
    lVar4 = 100;
    pcVar5 = param_2;
  }
  else {
    uVar3 = *(long *)(param_1 + 8) + 1;
    if (uVar3 < 0xe) {
      uVar2 = snprintf(param_2,100,"%s",&ordinal_values_1 + uVar3 * 0xb);
      uVar1 = *(uint *)(param_1 + 0x10);
      if ((6 < uVar1) || (99 < uVar2)) {
        return param_2;
      }
    }
    else {
      uVar2 = __snprintf_chk(param_2,100,2,0xffffffffffffffff,&_LC6);
      uVar1 = *(uint *)(param_1 + 0x10);
      if (6 < uVar1) {
        return param_2;
      }
    }
    uVar3 = (ulong)(uVar2 == 0);
    lVar4 = (long)(int)(100 - uVar2);
    pcVar5 = param_2 + (int)uVar2;
  }
  __snprintf_chk(pcVar5,lVar4,2,0xffffffffffffffff,&_LC7 + uVar3,
                 days_values_0 + (long)(int)uVar1 * 4);
  return param_2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void debug_print_current_time_part_0(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  undefined *puVar9;
  long in_FS_OFFSET;
  undefined1 auStack_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = dcgettext("gnulib","parsed %s part: ",5);
  dbg_printf(uVar4,param_1);
  if ((*(long *)(param_2 + 0xa8) == 0) || (*(char *)(param_2 + 0xe2) != '\0')) {
    if (*(char *)(param_2 + 0xe0) != *(char *)(param_2 + 0xe7)) goto LAB_00100644;
    lVar7 = 1;
    bVar3 = false;
  }
  else {
    __fprintf_chk(_stderr,2,"(Y-M-D) %04ld-%02ld-%02ld",*(undefined8 *)(param_2 + 0x28),
                  *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
    *(undefined1 *)(param_2 + 0xe2) = 1;
    if (*(char *)(param_2 + 0xe0) != *(char *)(param_2 + 0xe7)) {
      fputc(0x20,_stderr);
LAB_00100644:
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      uVar5 = dcgettext("gnulib","year: %04ld",5);
      __fprintf_chk(_stderr,2,uVar5,uVar4);
      *(undefined1 *)(param_2 + 0xe7) = *(undefined1 *)(param_2 + 0xe0);
    }
    lVar7 = 0;
    bVar3 = true;
  }
  if ((*(long *)(param_2 + 0xd0) == 0) || (*(char *)(param_2 + 0xe5) != '\0')) {
    if ((*(long *)(param_2 + 0xb0) != 0) && (*(char *)(param_2 + 0xe3) == '\0')) {
      if (bVar3) goto LAB_001008b2;
      goto LAB_001006c2;
    }
  }
  else {
    __fprintf_chk(_stderr,2," %02ld:%02ld:%02ld" + lVar7,*(undefined8 *)(param_2 + 0x48),
                  *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
    if (*(long *)(param_2 + 0x60) != 0) {
      __fprintf_chk(_stderr,2,".%09d");
    }
    if (*(int *)(param_2 + 0x1c) == 1) {
      fwrite(&_LC17,1,2,_stderr);
    }
    *(undefined1 *)(param_2 + 0xe5) = 1;
    if ((*(long *)(param_2 + 0xb0) != 0) && (*(char *)(param_2 + 0xe3) == '\0')) {
LAB_001008b2:
      fputc(0x20,_stderr);
LAB_001006c2:
      uVar2 = *(undefined4 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)(param_2 + 8);
      uVar5 = str_days_constprop_0(param_2,auStack_98);
      uVar6 = dcgettext("gnulib","%s (day ordinal=%ld number=%d)",5);
      __fprintf_chk(_stderr,2,uVar6,uVar5,uVar4,uVar2);
      *(undefined1 *)(param_2 + 0xe3) = 1;
    }
    lVar7 = 0;
    bVar3 = true;
  }
  if ((*(long *)(param_2 + 0xc0) == 0) || (*(char *)(param_2 + 0xe4) != '\0')) {
    if ((*(long *)(param_2 + 0xd8) != 0) && (*(char *)(param_2 + 0xe6) == '\0')) {
      pcVar8 = " UTC%s" + lVar7;
      goto LAB_0010093b;
    }
    if (*(char *)(param_2 + 0xa0) == '\0') goto LAB_00100805;
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    if (bVar3) goto LAB_00100799;
  }
  else {
    puVar9 = &_LC9;
    if (*(long *)(param_2 + 200) != 0) {
      puVar9 = &_LC8;
    }
    __fprintf_chk(_stderr,2," isdst=%d%s" + lVar7,*(undefined4 *)(param_2 + 0x14),puVar9);
    *(undefined1 *)(param_2 + 0xe4) = 1;
    if ((*(long *)(param_2 + 0xd8) == 0) || (*(char *)(param_2 + 0xe6) != '\0')) {
      cVar1 = *(char *)(param_2 + 0xa0);
    }
    else {
      pcVar8 = " UTC%s";
LAB_0010093b:
      uVar4 = time_zone_str(*(undefined4 *)(param_2 + 0x18),auStack_98);
      __fprintf_chk(_stderr,2,pcVar8,uVar4);
      cVar1 = *(char *)(param_2 + 0xa0);
      *(undefined1 *)(param_2 + 0xe6) = 1;
    }
    if (cVar1 == '\0') goto LAB_00100805;
    uVar4 = *(undefined8 *)(param_2 + 0x58);
LAB_00100799:
    fputc(0x20,_stderr);
  }
  uVar5 = dcgettext("gnulib","number of seconds: %ld",5);
  __fprintf_chk(_stderr,2,uVar5,uVar4);
LAB_00100805:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    fputc(10,_stderr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void debug_print_relative_time_part_0(undefined8 param_1,long param_2)

{
  FILE *__stream;
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  
  uVar1 = dcgettext("gnulib","parsed %s part: ",5);
  dbg_printf(uVar1,param_1);
  __stream = _stderr;
  if (*(long *)(param_2 + 0x68) == 0) {
    lVar2 = *(long *)(param_2 + 0x70);
    if (lVar2 != 0) {
      pcVar3 = "%+ld %s";
LAB_00100a3a:
      __fprintf_chk(_stderr,2,pcVar3,lVar2,"month(s)");
      goto LAB_00100a50;
    }
    lVar2 = *(long *)(param_2 + 0x78);
    if (lVar2 != 0) {
      lVar4 = 1;
      goto LAB_00100c29;
    }
    if (*(long *)(param_2 + 0x80) == 0) {
      lVar4 = 1;
      if (*(long *)(param_2 + 0x88) != 0) goto LAB_00100a76;
      if ((*(long *)(param_2 + 0x90) == 0) && (*(int *)(param_2 + 0x98) == 0)) {
        pcVar3 = (char *)dcgettext("gnulib","today/this/now\n",5);
        fputs(pcVar3,__stream);
        return;
      }
      goto LAB_00100a66;
    }
    lVar2 = *(long *)(param_2 + 0x80);
    lVar4 = 1;
  }
  else {
    __fprintf_chk(_stderr,2,"%+ld %s",*(long *)(param_2 + 0x68),"year(s)");
    lVar2 = *(long *)(param_2 + 0x70);
    if (lVar2 != 0) {
      pcVar3 = " %+ld %s";
      goto LAB_00100a3a;
    }
LAB_00100a50:
    lVar2 = *(long *)(param_2 + 0x78);
    if (lVar2 != 0) {
      lVar4 = 0;
LAB_00100c29:
      __fprintf_chk(_stderr,2,&_LC21 + lVar4,lVar2,"day(s)");
    }
    lVar4 = 0;
LAB_00100a66:
    lVar2 = *(long *)(param_2 + 0x80);
    if (lVar2 == 0) goto LAB_00100a76;
  }
  __fprintf_chk(_stderr,2,&_LC21 + lVar4,lVar2,"hour(s)");
  lVar4 = 0;
LAB_00100a76:
  if (*(long *)(param_2 + 0x88) != 0) {
    __fprintf_chk(_stderr,2,&_LC21 + lVar4,*(long *)(param_2 + 0x88),"minutes");
    lVar4 = 0;
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    __fprintf_chk(_stderr,2,&_LC21 + lVar4,*(long *)(param_2 + 0x90),"seconds");
    lVar4 = 0;
  }
  if ((long)*(int *)(param_2 + 0x98) != 0) {
    __fprintf_chk(_stderr,2,&_LC21 + lVar4,(long)*(int *)(param_2 + 0x98),"nanoseconds");
  }
  fputc(10,_stderr);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010243a) */
/* WARNING: Removing unreachable block (ram,0x00102511) */
/* WARNING: Removing unreachable block (ram,0x00102396) */

undefined8 yyparse(long *param_1)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  size_t sVar17;
  undefined8 uVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  char *pcVar22;
  long lVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  undefined1 *puVar27;
  char *pcVar28;
  char *pcVar29;
  char *__s2;
  int iVar30;
  byte *pbVar31;
  int iVar32;
  undefined4 uVar33;
  byte bVar34;
  int iVar35;
  long lVar36;
  byte *pbVar37;
  byte *pbVar38;
  ulong uVar39;
  ulong uVar40;
  char cVar41;
  uint uVar42;
  long *plVar43;
  long in_FS_OFFSET;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  ulong uVar51;
  ulong local_620;
  ulong local_618;
  ulong local_608;
  long local_5f8;
  long local_5e8;
  long local_5d8;
  long local_5c8;
  long local_5b8;
  long local_588;
  int local_568;
  ulong local_558;
  ulong local_540;
  ulong local_538;
  ulong uStack_530;
  ulong local_528;
  undefined8 local_4e8;
  ulong local_4d8 [139];
  char local_79 [20];
  char local_65 [12];
  char acStack_59 [25];
  long local_40;
  
  iVar32 = 0;
  uVar51 = 0;
  uVar15 = 0;
  cVar41 = -0xe;
  uVar42 = 0xfffffffe;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_79[1] = 0;
  local_568 = 0;
  puVar26 = local_4d8;
  pcVar22 = local_79 + 1;
LAB_00100ccd:
  uVar20 = (uint)cVar41;
  if (uVar20 != 0xffffffa5) {
    if (uVar42 != 0xfffffffe) goto LAB_00100ced;
    pbVar14 = (byte *)*param_1;
    uVar40 = (ulong)*pbVar14;
LAB_001010a0:
    bVar34 = (byte)uVar40;
    if ((char)bVar34 < '\x0e') {
      if ((char)bVar34 < '\t') goto LAB_001010b4;
LAB_00101250:
      pbVar14 = pbVar14 + 1;
      *param_1 = (long)pbVar14;
      uVar40 = (ulong)*pbVar14;
      goto LAB_001010a0;
    }
    if (bVar34 == 0x20) goto LAB_00101250;
    if (0x39 < bVar34) {
      if ('Z' < (char)bVar34) {
        if (0x19 < (byte)(bVar34 + 0x9f)) goto LAB_001010b4;
LAB_00101365:
        pbVar16 = (byte *)(acStack_59 + 1);
        pbVar31 = (byte *)(acStack_59 + 0x14);
        pbVar14 = pbVar14 + 1;
        pbVar37 = pbVar16;
        pbVar38 = pbVar16;
        if (pbVar31 <= pbVar16) goto LAB_0010138f;
LAB_00101388:
        *pbVar37 = (byte)uVar40;
        pbVar38 = pbVar37;
        pbVar37 = pbVar37 + 1;
LAB_0010138f:
        *param_1 = (long)pbVar14;
        uVar40 = (ulong)*pbVar14;
        if ('Z' < (char)*pbVar14) goto LAB_001013cf;
        while (('@' < (char)uVar40 || ((char)uVar40 == '.'))) {
          while( true ) {
            if (pbVar31 <= pbVar38) goto LAB_001013e8;
            pbVar14 = pbVar14 + 1;
            if (pbVar37 < pbVar31) goto LAB_00101388;
            *param_1 = (long)pbVar14;
            uVar40 = (ulong)*pbVar14;
            pbVar38 = pbVar37;
            if ((char)*pbVar14 < '[') break;
LAB_001013cf:
            if (0x19 < (byte)((char)uVar40 + 0x9fU)) goto LAB_00101415;
          }
        }
        goto LAB_00101415;
      }
      if ('@' < (char)bVar34) goto LAB_00101365;
LAB_001010b4:
      *param_1 = (long)(pbVar14 + 1);
      uVar42 = (uint)*pbVar14;
      if (*pbVar14 == 0) goto LAB_001010d0;
      goto LAB_001011c4;
    }
    if ((0x3ff280000000000U >> (uVar40 & 0x3f) & 1) == 0) {
      if (bVar34 != 0x28) goto LAB_001010b4;
      lVar36 = 0;
      do {
        pbVar16 = pbVar14;
        pbVar14 = pbVar16 + 1;
        *param_1 = (long)pbVar14;
        bVar34 = *pbVar16;
        if (bVar34 == 0) goto LAB_001010d0;
        if (bVar34 == 0x28) {
          lVar36 = lVar36 + 1;
        }
        else {
          lVar36 = lVar36 - (ulong)(bVar34 == 0x29);
        }
      } while (lVar36 != 0);
      uVar40 = (ulong)pbVar16[1];
      goto LAB_001010a0;
    }
    if (((int)uVar40 - 0x2bU & 0xfd) != 0) {
      iVar30 = 0;
      goto LAB_0010128f;
    }
    do {
      while( true ) {
        pbVar14 = pbVar14 + 1;
        *param_1 = (long)pbVar14;
        bVar2 = *pbVar14;
        uVar40 = (ulong)bVar2;
        if ('\r' < (char)bVar2) break;
        if ((char)bVar2 < '\t') goto LAB_001010a0;
      }
    } while (bVar2 == 0x20);
    if (9 < (int)(char)bVar2 - 0x30U) goto LAB_001010a0;
    if (((bVar34 != 0x2d) - 1) + (uint)(bVar34 != 0x2d) == -1) {
      uVar24 = 0;
      do {
        pbVar16 = pbVar14;
        lVar36 = uVar24 * 10;
        if ((SEXT816(lVar36) != SEXT816((long)uVar24) * SEXT816(10)) ||
           (lVar23 = (long)(0x30 - (int)uVar40), uVar24 = lVar36 + lVar23, SCARRY8(lVar36,lVar23)))
        goto LAB_001011be;
        bVar34 = pbVar16[1];
        uVar40 = (ulong)bVar34;
        pbVar14 = pbVar16 + 1;
      } while (bVar34 - 0x30 < 10);
      iVar30 = -1;
      if ((bVar34 & 0xfd) != 0x2c) {
        uVar15 = (long)pbVar14 - *param_1;
        *param_1 = (long)pbVar14;
        local_558 = CONCAT71(local_558._1_7_,1);
        iVar21 = 0x13;
        uVar42 = 0x112;
        uVar51 = uVar24;
        goto LAB_001011d2;
      }
LAB_0010153f:
      if (9 < (int)(char)pbVar14[1] - 0x30U) goto LAB_001012d8;
      iVar35 = ((int)(char)pbVar14[1] - 0x30U) * 10;
      if ((int)(char)pbVar16[3] - 0x30U < 10) {
        iVar35 = iVar35 + ((int)(char)pbVar16[3] - 0x30U);
        if (9 < (int)(char)pbVar16[4] - 0x30U) {
          pbVar14 = pbVar16 + 4;
          goto LAB_0010156e;
        }
        iVar35 = (((int)(char)pbVar16[4] - 0x30U) + iVar35 * 10) * 10;
        if (9 < (int)(char)pbVar16[5] - 0x30U) {
          pbVar14 = pbVar16 + 5;
          goto LAB_00101572;
        }
        iVar35 = (((int)(char)pbVar16[5] - 0x30U) + iVar35) * 10;
        if (9 < (int)(char)pbVar16[6] - 0x30U) {
          pbVar14 = pbVar16 + 6;
          goto LAB_00101579;
        }
        iVar35 = (((int)(char)pbVar16[6] - 0x30U) + iVar35) * 10;
        if (9 < (int)(char)pbVar16[7] - 0x30U) {
          pbVar14 = pbVar16 + 7;
          goto LAB_00101580;
        }
        iVar35 = (((int)(char)pbVar16[7] - 0x30U) + iVar35) * 10;
        if (9 < (int)(char)pbVar16[8] - 0x30U) {
          pbVar14 = pbVar16 + 8;
          goto LAB_00101587;
        }
        iVar35 = ((int)(char)pbVar16[8] - 0x30U) + iVar35;
        if ((int)(char)pbVar16[9] - 0x30U < 10) {
          iVar35 = (((int)(char)pbVar16[9] - 0x30U) * 5 + iVar35 * 0x32) * 2;
          if ((int)(char)pbVar16[10] - 0x30U < 10) {
            pbVar14 = pbVar16 + 0xb;
            iVar21 = (int)(char)pbVar16[0xb];
            iVar35 = iVar35 + ((int)(char)pbVar16[10] - 0x30U);
            uVar42 = iVar21 - 0x30;
            if (iVar30 == -1) {
              while (uVar42 < 10) {
                if ((char)iVar21 != '0') {
                  iVar35 = iVar35 + 1;
                  if ((int)(char)*pbVar14 - 0x30U < 10) goto LAB_0010293d;
                  goto LAB_0010295e;
                }
                iVar21 = (int)(char)pbVar14[1];
                pbVar14 = pbVar14 + 1;
                uVar42 = iVar21 - 0x30;
              }
            }
            else {
              if (9 < uVar42) goto LAB_00101594;
LAB_0010293d:
              do {
                pbVar16 = pbVar14 + 1;
                pbVar14 = pbVar14 + 1;
              } while ((int)(char)*pbVar16 - 0x30U < 10);
            }
            goto LAB_0010294d;
          }
          pbVar14 = pbVar16 + 10;
          goto joined_r0x0010315c;
        }
        iVar35 = iVar35 * 100;
        pbVar14 = pbVar16 + 9;
        if (iVar30 == -1) goto LAB_0010294d;
LAB_00101594:
        *param_1 = (long)pbVar14;
        iVar21 = 0x16 - (uint)(iVar30 != 0);
        uVar42 = 0x115 - (iVar30 != 0);
        uVar51 = (long)iVar35;
        local_558 = uVar24;
        goto LAB_001011d2;
      }
      pbVar14 = pbVar16 + 3;
LAB_0010156e:
      iVar35 = iVar35 * 100;
LAB_00101572:
      iVar35 = iVar35 * 10;
LAB_00101579:
      iVar35 = iVar35 * 10;
LAB_00101580:
      iVar35 = iVar35 * 10;
LAB_00101587:
      iVar35 = iVar35 * 100;
joined_r0x0010315c:
      if (iVar30 != -1) goto LAB_00101594;
LAB_0010294d:
      if ((-1 < iVar30) || (iVar35 == 0)) goto LAB_00101594;
LAB_0010295e:
      if (!SBORROW8(uVar24,1)) {
        *param_1 = (long)pbVar14;
        uVar42 = 0x114;
        iVar21 = 0x15;
        uVar51 = (long)(1000000000 - iVar35);
        local_558 = uVar24 - 1;
        goto LAB_001011d2;
      }
      goto LAB_001029fb;
    }
    iVar30 = 1;
LAB_0010128f:
    uVar24 = 0;
    do {
      pbVar16 = pbVar14;
      lVar36 = uVar24 * 10;
      if ((SEXT816(lVar36) != SEXT816((long)uVar24) * SEXT816(10)) ||
         (lVar23 = (long)((int)uVar40 + -0x30), uVar24 = lVar23 + lVar36, SCARRY8(lVar23,lVar36)))
      goto LAB_001011be;
      bVar34 = pbVar16[1];
      uVar40 = (ulong)bVar34;
      pbVar14 = pbVar16 + 1;
    } while (bVar34 - 0x30 < 10);
    if ((bVar34 & 0xfd) == 0x2c) goto LAB_0010153f;
LAB_001012d8:
    local_558 = CONCAT71(local_558._1_7_,(byte)((uint)iVar30 >> 0x1f));
    uVar15 = (long)pbVar14 - *param_1;
    *param_1 = (long)pbVar14;
    iVar21 = 0x14 - (uint)(iVar30 != 0);
    uVar42 = 0x113 - (iVar30 != 0);
    uVar51 = uVar24;
    goto LAB_001011d2;
  }
  iVar21 = (int)(char)(&yydefact)[iVar32];
  if (iVar21 != 0) goto LAB_00100dcf;
  if (local_568 != 3) goto LAB_0010114a;
  if (0 < (int)uVar42) {
    uVar42 = 0xfffffffe;
    goto LAB_0010114a;
  }
  if (uVar42 != 0) goto LAB_0010114a;
  goto LAB_00101065;
LAB_001013e8:
  do {
    pbVar14 = pbVar14 + 1;
    *param_1 = (long)pbVar14;
    bVar34 = *pbVar14;
    while ((char)bVar34 < '[') {
      if ('@' < (char)bVar34) goto LAB_001013e8;
      if (bVar34 != 0x2e) goto LAB_00101415;
      pbVar14 = pbVar14 + 1;
      *param_1 = (long)pbVar14;
      bVar34 = *pbVar14;
    }
  } while ((byte)(bVar34 + 0x9f) < 0x1a);
LAB_00101415:
  *pbVar37 = 0;
  pbVar14 = pbVar16;
  bVar34 = acStack_59[1];
  while (pbVar31 = pbVar14, bVar34 != 0) {
    while (bVar34 - 0x61 < 0x1a) {
      *pbVar31 = bVar34 - 0x20;
      bVar34 = pbVar31[1];
      pbVar31 = pbVar31 + 1;
      if (bVar34 == 0) goto LAB_00101455;
    }
    *pbVar31 = bVar34;
    pbVar14 = pbVar31 + 1;
    bVar34 = pbVar31[1];
  }
LAB_00101455:
  pcVar28 = "AM";
  puVar27 = meridian_table;
  do {
    iVar21 = strcmp((char *)pbVar16,pcVar28);
    if (iVar21 == 0) goto LAB_001014d6;
    pcVar28 = *(char **)((long)puVar27 + 0x10);
    puVar27 = (undefined1 *)((long)puVar27 + 0x10);
  } while (pcVar28 != (char *)0x0);
  sVar17 = strlen((char *)pbVar16);
  puVar27 = month_and_day_table;
  if (sVar17 == 3) {
LAB_0010265a:
    pcVar28 = "JANUARY";
    puVar27 = month_and_day_table;
    do {
      iVar21 = strncmp((char *)pbVar16,pcVar28,3);
      if (iVar21 == 0) goto LAB_001014d6;
      pcVar28 = *(char **)((long)puVar27 + 0x10);
      puVar27 = (undefined1 *)((long)puVar27 + 0x10);
    } while (pcVar28 != (char *)0x0);
    puVar27 = universal_time_zone_table;
    pcVar28 = "GMT";
  }
  else {
    if (sVar17 == 4) {
      pcVar28 = "JANUARY";
      if (acStack_59[4] == '.') goto LAB_0010265a;
    }
    else {
      pcVar28 = "JANUARY";
      puVar27 = month_and_day_table;
    }
    do {
      iVar21 = strcmp((char *)pbVar16,pcVar28);
      if (iVar21 == 0) goto LAB_001014d6;
      pcVar28 = *(char **)((long)puVar27 + 0x10);
      puVar27 = (undefined1 *)((long)puVar27 + 0x10);
    } while (pcVar28 != (char *)0x0);
    puVar27 = universal_time_zone_table;
    pcVar28 = "GMT";
  }
  do {
    iVar21 = strcmp((char *)pbVar16,pcVar28);
    if (iVar21 == 0) goto LAB_001014d6;
    pcVar28 = *(char **)((long)puVar27 + 0x10);
    puVar27 = (undefined1 *)((long)puVar27 + 0x10);
  } while (pcVar28 != (char *)0x0);
  plVar43 = param_1 + 0x1e;
  pcVar28 = (char *)param_1[0x1e];
  puVar27 = (undefined1 *)plVar43;
  pcVar29 = pcVar28;
  if (pcVar28 == (char *)0x0) {
    puVar27 = time_zone_table;
    pcVar29 = "WET";
  }
  else {
    do {
      iVar21 = strcmp((char *)pbVar16,pcVar29);
      if (iVar21 == 0) goto LAB_001014d6;
      plVar1 = (long *)((long)puVar27 + 0x10);
      puVar27 = (undefined1 *)((long)puVar27 + 0x10);
      pcVar29 = (char *)*plVar1;
    } while ((char *)*plVar1 != (char *)0x0);
    puVar27 = time_zone_table;
    pcVar29 = "WET";
  }
  do {
    iVar21 = strcmp((char *)pbVar16,pcVar29);
    if (iVar21 == 0) goto LAB_001014d6;
    pcVar29 = *(char **)((long)puVar27 + 0x10);
    puVar27 = (undefined1 *)((long)puVar27 + 0x10);
  } while (pcVar29 != (char *)0x0);
  iVar21 = strcmp((char *)pbVar16,"DST");
  if (iVar21 == 0) {
    local_558 = 0;
    uVar42 = 0x103;
    goto LAB_001011c4;
  }
  pcVar29 = "YEAR";
  puVar27 = time_units_table;
  do {
    iVar21 = strcmp((char *)pbVar16,pcVar29);
    if (iVar21 == 0) goto LAB_001014d6;
    pcVar29 = *(char **)((long)puVar27 + 0x10);
    puVar27 = (undefined1 *)((long)puVar27 + 0x10);
  } while (pcVar29 != (char *)0x0);
  pcVar29 = acStack_59 + sVar17;
  if (*pcVar29 == 'S') {
    puVar27 = time_units_table;
    __s2 = "YEAR";
    *pcVar29 = '\0';
    do {
      iVar21 = strcmp((char *)pbVar16,__s2);
      if (iVar21 == 0) goto LAB_001014d6;
      __s2 = *(char **)((long)puVar27 + 0x10);
      puVar27 = (undefined1 *)((long)puVar27 + 0x10);
    } while (__s2 != (char *)0x0);
    *pcVar29 = 'S';
  }
  pcVar29 = "TOMORROW";
  puVar27 = relative_time_table;
  do {
    iVar21 = strcmp((char *)pbVar16,pcVar29);
    if (iVar21 == 0) goto LAB_001014d6;
    pcVar29 = *(char **)((long)puVar27 + 0x10);
    puVar27 = (undefined1 *)((long)puVar27 + 0x10);
  } while (pcVar29 != (char *)0x0);
  if (sVar17 == 1) {
    puVar27 = military_table;
    pbVar14 = &_LC36;
    do {
      if (*pbVar14 == acStack_59[1]) goto LAB_001014d6;
      pbVar14 = *(byte **)((long)puVar27 + 0x10);
      puVar27 = (undefined1 *)((long)puVar27 + 0x10);
    } while (pbVar14 != (byte *)0x0);
  }
  bVar44 = false;
  pbVar14 = pbVar16;
  pbVar31 = pbVar16;
  bVar34 = acStack_59[1];
  if (acStack_59[1] != 0) {
    do {
      if (bVar34 == 0x2e) {
        bVar44 = true;
      }
      else {
        pbVar14 = pbVar14 + 1;
      }
      bVar34 = pbVar31[1];
      pbVar31 = pbVar31 + 1;
      *pbVar14 = bVar34;
    } while (bVar34 != 0);
    if (bVar44) {
      puVar27 = universal_time_zone_table;
      pcVar29 = "GMT";
      do {
        iVar21 = strcmp((char *)pbVar16,pcVar29);
        if (iVar21 == 0) goto LAB_001014d6;
        pcVar29 = *(char **)((long)puVar27 + 0x10);
        puVar27 = (undefined1 *)((long)puVar27 + 0x10);
      } while (pcVar29 != (char *)0x0);
      if (pcVar28 == (char *)0x0) {
        puVar27 = time_zone_table;
        pcVar28 = "WET";
      }
      else {
        do {
          iVar21 = strcmp((char *)pbVar16,pcVar28);
          puVar27 = (undefined1 *)plVar43;
          if (iVar21 == 0) goto LAB_001014d6;
          pcVar28 = (char *)plVar43[2];
          plVar43 = plVar43 + 2;
        } while (pcVar28 != (char *)0x0);
        puVar27 = time_zone_table;
        pcVar28 = "WET";
      }
      do {
        iVar21 = strcmp((char *)pbVar16,pcVar28);
        if (iVar21 == 0) goto LAB_001014d6;
        pcVar28 = *(char **)((long)puVar27 + 0x10);
        puVar27 = (undefined1 *)((long)puVar27 + 0x10);
      } while (pcVar28 != (char *)0x0);
    }
  }
  if (*(char *)((long)param_1 + 0xe1) != '\0') {
    uVar18 = dcgettext("gnulib","error: unknown word \'%s\'\n",5);
    dbg_printf(uVar18,pbVar16);
  }
LAB_001029fb:
  iVar21 = 2;
  uVar42 = 0x3f;
LAB_001011d2:
  uVar20 = uVar20 + iVar21;
LAB_00100d18:
  if ((uVar20 < 0x73) && ((char)yycheck[(int)uVar20] == iVar21)) {
    cVar41 = yytable[(int)uVar20];
    iVar32 = (int)cVar41;
    iVar21 = -iVar32;
    if (0 < iVar32) {
      uVar42 = 0xfffffffe;
      puVar26[0xd] = local_528;
      local_568 = local_568 + -1 + (uint)(local_568 == 0);
      puVar26[7] = local_558;
      puVar26[8] = uVar51;
      puVar25 = puVar26 + 7;
      puVar26[9] = uVar15;
      puVar26[10] = local_540;
      puVar26[0xb] = local_538;
      puVar26[0xc] = uStack_530;
      goto LAB_00100ffe;
    }
  }
  else {
    iVar21 = (int)(char)(&yydefact)[iVar32];
    if (iVar21 == 0) {
      if (local_568 == 3) {
        if (uVar42 == 0) goto LAB_00101065;
        uVar42 = 0xfffffffe;
      }
      uVar20 = (uint)(char)(&yypact)[iVar32];
LAB_0010114a:
      do {
        if (((uVar20 != 0xffffffa5) && (uVar20 = uVar20 + 1, uVar20 < 0x73)) &&
           (yycheck[(int)uVar20] == '\x01')) {
          cVar41 = yytable[(int)uVar20];
          iVar32 = (int)cVar41;
          if ('\0' < cVar41) goto code_r0x0010116d;
        }
        if (pcVar22 == local_79 + 1) goto LAB_00101065;
        pcVar28 = pcVar22 + -1;
        pcVar22 = pcVar22 + -1;
        puVar26 = puVar26 + -7;
        uVar20 = (uint)(char)(&yypact)[*pcVar28];
      } while( true );
    }
  }
LAB_00100dcf:
  cVar41 = yyr2[iVar21];
  puVar25 = puVar26 + (long)(1 - cVar41) * 7;
  local_620 = puVar25[3];
  local_4e8._4_4_ = (undefined4)(puVar25[6] >> 0x20);
  uVar40 = *puVar25;
  local_608 = puVar25[4];
  uVar24 = puVar25[1];
  uVar39 = puVar25[2];
  uVar33 = (undefined4)puVar25[6];
  local_618 = puVar25[5];
  switch(iVar21) {
  case 4:
    uVar19 = *puVar26;
    uVar3 = puVar26[1];
    pcVar28 = "number of seconds";
    *(undefined1 *)(param_1 + 0x14) = 1;
    param_1[0xb] = uVar19;
    param_1[0xc] = uVar3;
    goto LAB_00100eae;
  case 7:
    param_1[0x1a] = param_1[0x1a] + 1;
    pcVar28 = "datetime";
    param_1[0x15] = param_1[0x15] + 1;
    goto LAB_00100eae;
  case 8:
    param_1[0x1a] = param_1[0x1a] + 1;
    pcVar28 = "time";
    goto LAB_00100eae;
  case 9:
    param_1[0x18] = param_1[0x18] + 1;
    pcVar28 = "local_zone";
    goto LAB_00100eae;
  case 10:
    param_1[0x17] = param_1[0x17] + 1;
    if (*(char *)((long)param_1 + 0xe1) != '\0') {
      debug_print_current_time_part_0(&_LC42,param_1);
    }
    break;
  case 0xb:
    param_1[0x1b] = param_1[0x1b] + 1;
    pcVar28 = "zone";
    goto LAB_00100eae;
  case 0xc:
    param_1[0x15] = param_1[0x15] + 1;
    pcVar28 = "date";
    goto LAB_00100eae;
  case 0xd:
    param_1[0x16] = param_1[0x16] + 1;
    pcVar28 = "day";
    goto LAB_00100eae;
  case 0xe:
    goto LAB_0010198f;
  case 0xf:
    pcVar28 = "number";
LAB_00100eae:
    uVar18 = dcgettext("gnulib",pcVar28,5);
    if (*(char *)((long)param_1 + 0xe1) != '\0') {
      debug_print_current_time_part_0(uVar18,param_1);
    }
    break;
  case 0x10:
    pcVar28 = "hybrid";
    goto LAB_0010199b;
  case 0x13:
    uVar19 = puVar26[-6];
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[9] = uVar19;
    uVar19 = *puVar26;
    param_1[0xc] = 0;
    *(int *)((long)param_1 + 0x1c) = (int)uVar19;
    break;
  case 0x14:
    uVar3 = puVar26[-6];
    uVar19 = *puVar26;
    param_1[9] = puVar26[-0x14];
    param_1[10] = uVar3;
    *(int *)((long)param_1 + 0x1c) = (int)uVar19;
    *(undefined1 (*) [16])(param_1 + 0xb) = (undefined1  [16])0x0;
    break;
  case 0x15:
    uVar3 = puVar26[-0x22];
    uVar5 = puVar26[-0x14];
    param_1[0xb] = puVar26[-7];
    param_1[0xc] = (long)(int)puVar26[-6];
    uVar19 = *puVar26;
    param_1[9] = uVar3;
    param_1[10] = uVar5;
    *(int *)((long)param_1 + 0x1c) = (int)uVar19;
    break;
  case 0x17:
    uVar19 = puVar26[-6];
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[9] = uVar19;
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 2;
    break;
  case 0x18:
    uVar19 = puVar26[-0x14];
    *(undefined4 *)((long)param_1 + 0x1c) = 2;
    uVar3 = puVar26[-6];
    param_1[9] = uVar19;
    param_1[10] = uVar3;
    *(undefined1 (*) [16])(param_1 + 0xb) = (undefined1  [16])0x0;
    break;
  case 0x19:
    uVar19 = puVar26[-7];
    uVar3 = puVar26[-0x22];
    *(undefined4 *)((long)param_1 + 0x1c) = 2;
    uVar5 = puVar26[-0x14];
    param_1[0xb] = uVar19;
    param_1[0xc] = (long)(int)puVar26[-6];
    param_1[9] = uVar3;
    param_1[10] = uVar5;
    break;
  case 0x1c:
    param_1[0x1b] = param_1[0x1b] + 1;
    uVar19 = *puVar26;
    uVar3 = puVar26[-6];
    if ((long)puVar26[-5] < 3) {
      if (-1 < (long)uVar19) goto LAB_00101d62;
      lVar36 = 0;
      uVar19 = uVar3;
LAB_00102b23:
      lVar36 = lVar36 + uVar19 * 0x3c;
    }
    else {
      if ((long)uVar19 < 0) {
        uVar19 = ((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar3),8) + uVar3) >> 6
                 ) - ((long)uVar3 >> 0x3f);
        lVar36 = uVar3 + uVar19 * -100;
        goto LAB_00102b23;
      }
LAB_00101d62:
      lVar23 = uVar3 * 0x3c;
      if ((char)puVar26[-7] == '\0') {
        bVar44 = SCARRY8(uVar19,lVar23);
      }
      else {
        bVar44 = SBORROW8(lVar23,uVar19);
        uVar19 = -uVar19;
      }
      lVar36 = lVar23 + uVar19;
      if (bVar44 || SEXT816(lVar23) != SEXT816((long)uVar3) * SEXT816(0x3c)) goto LAB_00101065;
    }
    if (0xb40 < lVar36 + 0x5a0U) goto LAB_00101065;
    *(int *)(param_1 + 3) = (int)lVar36 * 0x3c;
    break;
  case 0x1d:
    *(int *)((long)param_1 + 0x14) = (int)*puVar26;
    break;
  case 0x1e:
    param_1[0x19] = param_1[0x19] + 1;
    *(undefined4 *)((long)param_1 + 0x14) = 1;
    break;
  case 0x1f:
    *(int *)(param_1 + 3) = (int)*puVar26;
    break;
  case 0x20:
    *(undefined4 *)(param_1 + 3) = 0xffff9d90;
    break;
  case 0x21:
    *(int *)(param_1 + 3) = (int)puVar26[-7];
    bVar44 = SCARRY4((int)puVar26[6],(int)param_1[0x13]);
    iVar32 = (int)puVar26[6] + (int)param_1[0x13];
    goto LAB_00101c18;
  case 0x22:
    bVar44 = SCARRY4((int)param_1[0x13],(int)puVar26[6]);
    iVar32 = (int)param_1[0x13] + (int)puVar26[6];
    *(undefined4 *)(param_1 + 3) = 0xffff9d90;
LAB_00101c18:
    *(int *)(param_1 + 0x13) = iVar32;
    lVar36 = param_1[0x12];
    uVar19 = puVar26[5];
    param_1[0x12] = lVar36 + puVar26[5];
    lVar23 = param_1[0x11];
    uVar3 = puVar26[4];
    param_1[0x11] = lVar23 + puVar26[4];
    lVar4 = param_1[0x10];
    uVar5 = puVar26[3];
    param_1[0x10] = lVar4 + puVar26[3];
    lVar6 = param_1[0xf];
    uVar7 = puVar26[2];
    param_1[0xf] = lVar6 + puVar26[2];
    lVar8 = param_1[0xe];
    uVar9 = puVar26[1];
    param_1[0xe] = lVar8 + puVar26[1];
    lVar10 = param_1[0xd];
    uVar11 = *puVar26;
    param_1[0xd] = lVar10 + *puVar26;
    if ((((((SCARRY8(lVar36,uVar19) || bVar44) || SCARRY8(lVar23,uVar3)) || SCARRY8(lVar4,uVar5)) ||
         SCARRY8(lVar6,uVar7)) || SCARRY8(lVar8,uVar9)) || (SCARRY8(lVar10,uVar11))) {
LAB_00101065:
      uVar18 = 1;
      goto LAB_0010106a;
    }
    *(undefined1 *)((long)param_1 + 0xa1) = 1;
LAB_0010198f:
    pcVar28 = "relative";
LAB_0010199b:
    uVar18 = dcgettext("gnulib",pcVar28,5);
    if (*(char *)((long)param_1 + 0xe1) != '\0') {
      debug_print_relative_time_part_0(uVar18,param_1);
    }
    break;
  case 0x23:
    uVar19 = *puVar26;
    uVar3 = puVar26[-6];
    if ((long)puVar26[-5] < 3) {
      if (-1 < (long)uVar19) goto LAB_00101b7b;
      lVar36 = 0;
      uVar19 = uVar3;
LAB_00102ad3:
      lVar36 = lVar36 + uVar19 * 0x3c;
    }
    else {
      if ((long)uVar19 < 0) {
        uVar19 = ((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar3),8) + uVar3) >> 6
                 ) - ((long)uVar3 >> 0x3f);
        lVar36 = uVar3 + uVar19 * -100;
        goto LAB_00102ad3;
      }
LAB_00101b7b:
      lVar23 = uVar3 * 0x3c;
      if ((char)puVar26[-7] == '\0') {
        bVar44 = SCARRY8(uVar19,lVar23);
      }
      else {
        bVar44 = SBORROW8(lVar23,uVar19);
        uVar19 = -uVar19;
      }
      lVar36 = lVar23 + uVar19;
      if (bVar44 || SEXT816(lVar23) != SEXT816((long)uVar3) * SEXT816(0x3c)) goto LAB_00101065;
    }
    if ((0xb40 < lVar36 + 0x5a0U) ||
       (lVar36 = (long)((int)lVar36 * 0x3c), uVar19 = puVar26[-0xe], lVar23 = lVar36 + puVar26[-0xe]
       , iVar32 = (int)lVar23, *(int *)(param_1 + 3) = iVar32,
       lVar23 != iVar32 || SCARRY8(lVar36,uVar19))) goto LAB_00101065;
    break;
  case 0x24:
    *(int *)(param_1 + 3) = (int)*puVar26 + 0xe10;
    break;
  case 0x25:
    *(int *)(param_1 + 3) = (int)puVar26[-7] + 0xe10;
    break;
  case 0x26:
    uVar19 = *puVar26;
    param_1[1] = 0;
    *(int *)(param_1 + 2) = (int)uVar19;
    break;
  case 0x27:
    uVar19 = puVar26[-7];
    param_1[1] = 0;
    *(int *)(param_1 + 2) = (int)uVar19;
    break;
  case 0x28:
    uVar19 = puVar26[-7];
    *(undefined1 *)(param_1 + 0x1d) = 1;
    param_1[1] = uVar19;
    *(int *)(param_1 + 2) = (int)*puVar26;
    break;
  case 0x29:
    uVar19 = puVar26[-6];
    *(undefined1 *)(param_1 + 0x1d) = 1;
    param_1[1] = uVar19;
    *(int *)(param_1 + 2) = (int)*puVar26;
    break;
  case 0x2a:
    goto switchD_00100e6f_caseD_2a;
  case 0x2b:
    uVar19 = puVar26[-0x1a];
    if ((long)uVar19 < 4) {
      uVar19 = puVar26[-0x1b];
      if (*(char *)((long)param_1 + 0xe1) != '\0') {
        uVar18 = dcgettext("gnulib",
                           "warning: value %ld has less than 4 digits. Assuming MM/DD/YY[YY]\n",5);
        dbg_printf(uVar18,uVar19);
      }
      goto LAB_001023a5;
    }
    if (*(char *)((long)param_1 + 0xe1) != '\0') {
      uVar3 = puVar26[-0x1b];
      uVar18 = dcgettext("gnulib","warning: value %ld has %ld digits. Assuming YYYY/MM/DD\n",5);
      dbg_printf(uVar18,uVar3,uVar19);
    }
    uVar19 = puVar26[-0x1c];
    uVar3 = puVar26[-0x1b];
    param_1[6] = puVar26[-0x1a];
    param_1[4] = uVar19;
    param_1[5] = uVar3;
    goto switchD_00100e6f_caseD_2a;
  case 0x2c:
    uVar3 = puVar26[-0xd];
    uVar19 = puVar26[1];
    param_1[7] = puVar26[-7];
    param_1[8] = uVar3;
    param_1[5] = -uVar19;
    goto LAB_001023b5;
  case 0x2d:
    uVar19 = puVar26[-6];
    param_1[7] = puVar26[-0xe];
    param_1[8] = -uVar19;
    param_1[5] = -puVar26[1];
    goto LAB_001023b5;
  case 0x2e:
    uVar19 = puVar26[1];
    param_1[7] = puVar26[-7];
    param_1[8] = uVar19;
    break;
  case 0x2f:
    uVar19 = puVar26[-0x15];
    uVar5 = puVar26[1];
    uVar3 = puVar26[-0xd];
    param_1[4] = *puVar26;
    param_1[5] = uVar5;
    param_1[7] = uVar19;
    param_1[8] = uVar3;
    param_1[6] = puVar26[2];
    break;
  case 0x30:
    uVar19 = puVar26[-6];
    param_1[7] = *puVar26;
    param_1[8] = uVar19;
    break;
  case 0x31:
    uVar19 = puVar26[-7];
LAB_001023a5:
    uVar5 = *puVar26;
    uVar7 = puVar26[1];
    uVar3 = puVar26[-0xd];
    param_1[7] = uVar19;
    param_1[8] = uVar3;
    param_1[4] = uVar5;
    param_1[5] = uVar7;
LAB_001023b5:
    param_1[6] = puVar26[2];
    break;
  case 0x33:
    uVar3 = puVar26[-0xe];
    uVar5 = puVar26[-0xd];
    param_1[6] = puVar26[-0xc];
    uVar19 = puVar26[-6];
    param_1[4] = uVar3;
    param_1[5] = uVar5;
    param_1[7] = -uVar19;
    param_1[8] = -puVar26[1];
    break;
  case 0x34:
    uVar19 = puVar26[-6];
    uVar3 = puVar26[-5];
    uVar5 = puVar26[-7];
    uVar7 = puVar26[-4];
    local_5c8 = param_1[0x12];
    iVar32 = (int)puVar26[-1];
    local_5b8 = param_1[0x11];
    uVar9 = puVar26[-3];
    local_5d8 = param_1[0x10];
    uVar11 = puVar26[-2];
    local_5e8 = param_1[0xf];
    iVar30 = (int)param_1[0x13];
    local_588 = param_1[0xe];
    local_5f8 = param_1[0xd];
    if ((int)*puVar26 < 0) {
      bVar45 = SBORROW4(iVar30,iVar32);
      iVar32 = -iVar32;
      bVar46 = SBORROW8(local_5c8,uVar11);
      uVar11 = -uVar11;
      bVar47 = SBORROW8(local_5b8,uVar9);
      uVar9 = -uVar9;
      bVar48 = SBORROW8(local_5d8,uVar7);
      uVar7 = -uVar7;
      bVar49 = SBORROW8(local_5e8,uVar3);
      uVar3 = -uVar3;
      bVar50 = SBORROW8(local_588,uVar19);
      uVar19 = -uVar19;
      bVar44 = SBORROW8(local_5f8,uVar5);
      uVar5 = -uVar5;
      bVar44 = (((((bVar46 || bVar45) || bVar47) || bVar48) || bVar49) || bVar50) || bVar44;
    }
    else {
      bVar44 = (((((SCARRY8(uVar11,local_5c8) || SCARRY4(iVar32,iVar30)) || SCARRY8(uVar9,local_5b8)
                  ) || SCARRY8(uVar7,local_5d8)) || SCARRY8(uVar3,local_5e8)) ||
               SCARRY8(uVar19,local_588)) || SCARRY8(uVar5,local_5f8);
    }
    local_588 = uVar19 + local_588;
    local_5b8 = uVar9 + local_5b8;
    local_5c8 = uVar11 + local_5c8;
    local_5d8 = uVar7 + local_5d8;
    local_5e8 = uVar3 + local_5e8;
    local_5f8 = uVar5 + local_5f8;
    *(int *)(param_1 + 0x13) = iVar32 + iVar30;
    param_1[0x12] = local_5c8;
    param_1[0x11] = local_5b8;
    param_1[0x10] = local_5d8;
    param_1[0xf] = local_5e8;
    param_1[0xe] = local_588;
    param_1[0xd] = local_5f8;
    if (bVar44) goto LAB_00101065;
    goto LAB_00101819;
  case 0x35:
  case 0x36:
    lVar12 = param_1[0x13];
    uVar13 = puVar26[6];
    *(int *)(param_1 + 0x13) = (int)lVar12 + (int)puVar26[6];
    lVar36 = param_1[0x12];
    uVar19 = puVar26[5];
    param_1[0x12] = lVar36 + puVar26[5];
    lVar23 = param_1[0x11];
    uVar3 = puVar26[4];
    param_1[0x11] = lVar23 + puVar26[4];
    lVar4 = param_1[0x10];
    uVar5 = puVar26[3];
    param_1[0x10] = lVar4 + puVar26[3];
    lVar6 = param_1[0xf];
    uVar7 = puVar26[2];
    param_1[0xf] = lVar6 + puVar26[2];
    lVar8 = param_1[0xe];
    uVar9 = puVar26[1];
    param_1[0xe] = lVar8 + puVar26[1];
    lVar10 = param_1[0xd];
    uVar11 = *puVar26;
    param_1[0xd] = lVar10 + *puVar26;
    if ((((((SCARRY8(lVar36,uVar19) || SCARRY4((int)lVar12,(int)uVar13)) || SCARRY8(lVar23,uVar3))
          || SCARRY8(lVar4,uVar5)) || SCARRY8(lVar6,uVar7)) || SCARRY8(lVar8,uVar9)) ||
       (SCARRY8(lVar10,uVar11))) goto LAB_00101065;
LAB_00101819:
    *(undefined1 *)((long)param_1 + 0xa1) = 1;
    break;
  case 0x37:
    uVar40 = puVar26[-7];
    goto LAB_00101720;
  case 0x38:
  case 0x4c:
    uVar40 = puVar26[-6];
LAB_00101720:
    local_4e8._4_4_ = 0;
    local_618 = 0;
    uVar33 = 0;
    uVar39 = 0;
    uVar24 = 0;
    local_608 = 0;
    local_620 = 0;
    break;
  case 0x39:
    local_618 = 0;
    uVar33 = 0;
    uVar39 = 0;
    uVar24 = 0;
    local_608 = 0;
    uVar40 = 1;
    local_4e8._4_4_ = 0;
    local_620 = 0;
    break;
  case 0x3a:
    uVar24 = puVar26[-7];
    goto LAB_0010186b;
  case 0x3b:
  case 0x4d:
    uVar24 = puVar26[-6];
LAB_0010186b:
    local_4e8._4_4_ = 0;
    local_618 = 0;
    uVar33 = 0;
    uVar39 = 0;
    uVar40 = 0;
    local_608 = 0;
    local_620 = 0;
    break;
  case 0x3c:
    local_618 = 0;
    uVar33 = 0;
    uVar39 = 0;
    uVar24 = 1;
    local_4e8._4_4_ = 0;
    uVar40 = 0;
    local_608 = 0;
    local_620 = 0;
    break;
  case 0x3d:
    uVar40 = puVar26[-7];
    goto LAB_0010160b;
  case 0x3e:
  case 0x4e:
    uVar40 = puVar26[-6];
LAB_0010160b:
    local_4e8._4_4_ = 0;
    uVar39 = uVar40 * *puVar26;
    bVar44 = SEXT816((long)uVar39) != SEXT816((long)uVar40) * SEXT816((long)*puVar26);
    uVar40 = (ulong)bVar44;
    if (bVar44) goto LAB_00101065;
    local_618 = 0;
    uVar24 = 0;
    uVar33 = 0;
    local_608 = 0;
    local_620 = 0;
    break;
  case 0x3f:
  case 0x52:
    local_618 = 0;
    uVar39 = *puVar26;
    uVar33 = 0;
    uVar24 = 0;
    local_4e8._4_4_ = 0;
    uVar40 = 0;
    local_608 = 0;
    local_620 = 0;
    break;
  case 0x40:
    local_620 = puVar26[-7];
    goto LAB_00101834;
  case 0x41:
  case 0x4f:
    local_620 = puVar26[-6];
LAB_00101834:
    local_4e8._4_4_ = 0;
    uVar33 = 0;
    uVar39 = 0;
    uVar24 = 0;
    local_618 = 0;
    uVar40 = 0;
    local_608 = 0;
    break;
  case 0x42:
    local_618 = 0;
    uVar33 = 0;
    uVar39 = 0;
    uVar24 = 0;
    local_4e8._4_4_ = 0;
    uVar40 = 0;
    local_608 = 0;
    local_620 = 1;
    break;
  case 0x43:
    local_608 = puVar26[-7];
    goto LAB_001016d0;
  case 0x44:
  case 0x50:
    local_608 = puVar26[-6];
LAB_001016d0:
    local_4e8._4_4_ = 0;
    uVar33 = 0;
    uVar39 = 0;
    uVar24 = 0;
    local_618 = 0;
    uVar40 = 0;
    local_620 = 0;
    break;
  case 0x45:
    local_618 = 0;
    uVar33 = 0;
    uVar39 = 0;
    uVar24 = 0;
    local_4e8._4_4_ = 0;
    uVar40 = 0;
    local_608 = 1;
    local_620 = 0;
    break;
  case 0x46:
    local_618 = puVar26[-7];
    uVar33 = 0;
    goto LAB_001016a1;
  case 0x47:
  case 0x51:
    local_618 = puVar26[-6];
    uVar33 = 0;
    goto LAB_001016a1;
  case 0x48:
  case 0x49:
    local_618 = puVar26[-7];
    uVar33 = (undefined4)puVar26[-6];
    goto LAB_001016a1;
  case 0x4a:
    uVar33 = 0;
    local_618 = 1;
LAB_001016a1:
    local_4e8._4_4_ = 0;
    local_608 = 0;
    uVar39 = 0;
    uVar24 = 0;
    uVar40 = 0;
    local_620 = 0;
    break;
  case 0x56:
  case 0x58:
    uVar40 = puVar26[1];
    uVar24 = 0;
    break;
  case 0x59:
    digits_to_date_time(param_1);
    break;
  case 0x5a:
    digits_to_date_time(param_1);
    lVar12 = param_1[0x13];
    uVar13 = puVar26[6];
    *(int *)(param_1 + 0x13) = (int)lVar12 + (int)puVar26[6];
    lVar36 = param_1[0x12];
    uVar19 = puVar26[5];
    param_1[0x12] = lVar36 + puVar26[5];
    lVar23 = param_1[0x11];
    uVar3 = puVar26[4];
    param_1[0x11] = lVar23 + puVar26[4];
    lVar4 = param_1[0x10];
    uVar5 = puVar26[3];
    param_1[0x10] = lVar4 + puVar26[3];
    lVar6 = param_1[0xf];
    uVar7 = puVar26[2];
    param_1[0xf] = lVar6 + puVar26[2];
    lVar8 = param_1[0xe];
    uVar9 = puVar26[1];
    param_1[0xe] = lVar8 + puVar26[1];
    lVar10 = param_1[0xd];
    uVar11 = *puVar26;
    param_1[0xd] = lVar10 + *puVar26;
    if ((((((SCARRY8(lVar36,uVar19) || SCARRY4((int)lVar12,(int)uVar13)) || SCARRY8(lVar23,uVar3))
          || SCARRY8(lVar4,uVar5)) || SCARRY8(lVar6,uVar7)) || SCARRY8(lVar8,uVar9)) ||
       (SCARRY8(lVar10,uVar11))) goto LAB_00101065;
    *(undefined1 *)((long)param_1 + 0xa1) = 1;
    break;
  case 0x5b:
    uVar40 = 0xffffffffffffffff;
    break;
  case 0x5c:
    uVar40 = puVar26[1];
  }
switchD_00100e6f_caseD_5:
  lVar36 = (long)cVar41;
  pcVar22 = pcVar22 + -lVar36;
  puVar25 = puVar26 + lVar36 * -7 + 7;
  puVar26[lVar36 * -7 + 7] = uVar40;
  puVar26[lVar36 * -7 + 8] = uVar24;
  cVar41 = *pcVar22;
  local_4e8 = CONCAT44(local_4e8._4_4_,uVar33);
  puVar26[lVar36 * -7 + 9] = uVar39;
  puVar26[lVar36 * -7 + 10] = local_620;
  puVar26[lVar36 * -7 + 0xd] = local_4e8;
  puVar26[lVar36 * -7 + 0xb] = local_608;
  puVar26[lVar36 * -7 + 0xc] = local_618;
  uVar20 = (int)(char)yypgoto[(char)(&yyr1)[iVar21] + -0x1d] + (int)cVar41;
  if ((uVar20 < 0x73) && (cVar41 == yycheck[(int)uVar20])) {
    cVar41 = yytable[(int)uVar20];
    iVar32 = (int)cVar41;
  }
  else {
    cVar41 = yydefgoto[(char)(&yyr1)[iVar21] + -0x1d];
    iVar32 = (int)cVar41;
  }
LAB_00100ffe:
  pcVar22[1] = cVar41;
  pcVar22 = pcVar22 + 1;
  if (local_65 <= pcVar22) {
    uVar18 = 2;
    goto LAB_0010106a;
  }
  if (iVar32 == 0xc) {
    uVar18 = 0;
LAB_0010106a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar18;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  cVar41 = (&yypact)[iVar32];
  puVar26 = puVar25;
  goto LAB_00100ccd;
LAB_001014d6:
  local_558 = (ulong)*(int *)((long)puVar27 + 0xc);
  uVar42 = *(uint *)((long)puVar27 + 8);
LAB_00100ced:
  if ((int)uVar42 < 1) {
LAB_001010d0:
    iVar21 = 0;
    uVar42 = 0;
  }
  else {
    if (uVar42 == 0x100) {
      uVar42 = 0x101;
      goto LAB_0010114a;
    }
    if ((int)uVar42 < 0x116) goto LAB_001011c4;
    uVar20 = uVar20 + 2;
    iVar21 = 2;
  }
  goto LAB_00100d18;
LAB_001011be:
  uVar42 = 0x3f;
LAB_001011c4:
  iVar21 = (int)(char)yytranslate[(int)uVar42];
  goto LAB_001011d2;
switchD_00100e6f_caseD_2a:
  uVar19 = puVar26[1];
  param_1[7] = puVar26[-0xd];
  param_1[8] = uVar19;
  goto switchD_00100e6f_caseD_5;
code_r0x0010116d:
  puVar25 = puVar26 + 7;
  local_568 = 3;
  *puVar25 = local_558;
  puVar26[8] = uVar51;
  puVar26[0xd] = local_528;
  puVar26[9] = uVar15;
  puVar26[10] = local_540;
  puVar26[0xb] = local_538;
  puVar26[0xc] = uStack_530;
  goto LAB_00100ffe;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
parse_datetime_body(time_t *param_1,char *param_2,long *param_3,byte param_4,long param_5,
                   char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  time_t tVar5;
  time_t tVar6;
  FILE *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  size_t sVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  tm *ptVar24;
  char *pcVar25;
  undefined *puVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  int iVar30;
  long lVar31;
  undefined *puVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  undefined8 uVar36;
  ulong uVar37;
  int iVar38;
  ulong uVar39;
  char *pcVar40;
  undefined *puVar41;
  size_t __size;
  undefined *puVar42;
  undefined *puVar43;
  int iVar44;
  long lVar45;
  undefined *puVar46;
  ulong uVar47;
  char *pcVar48;
  long in_FS_OFFSET;
  bool bVar49;
  char *local_4a8;
  char *local_4a0;
  char **local_498;
  ulong local_480;
  char *local_478;
  long local_470;
  ulong local_460;
  ulong local_458;
  long local_438 [2];
  tm local_428;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  int local_3d8;
  int iStack_3d4;
  int local_3c8;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  int local_398;
  int local_394;
  int local_388;
  char *local_378;
  tm local_368;
  tm local_328;
  char *local_2e8;
  undefined8 local_2e0;
  int local_2d8 [6];
  ulong local_2c0;
  long local_2b8;
  long local_2b0;
  long local_2a8;
  ulong local_2a0;
  long local_298;
  long local_290;
  time_t tStack_288;
  long local_280;
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  int local_250;
  undefined2 local_248;
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  long local_210;
  undefined1 local_208;
  byte local_207;
  undefined2 local_206;
  undefined4 local_204;
  undefined1 local_200;
  char *local_1f8;
  undefined4 local_1f0;
  int local_1ec;
  char *local_1e8;
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  char local_188 [112];
  char local_118 [111];
  char cStack_a9;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5 [101];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar19 = strlen(param_2);
  if (param_3 == (long *)0x0) {
    param_3 = local_438;
    gettime(param_3);
  }
  lVar20 = param_3[1];
  lVar4 = *param_3;
  pcVar48 = param_2;
  do {
    cVar3 = *pcVar48;
    if (cVar3 < '\x0e') {
      if (cVar3 < '\t') goto LAB_001032f5;
    }
    else if (cVar3 != ' ') goto LAB_001032f5;
    pcVar48 = pcVar48 + 1;
  } while( true );
joined_r0x00103749:
  while (cVar3 != '\"') {
    pcVar48 = pcVar48 + (cVar3 == '\\');
    cVar3 = pcVar48[1];
    *pcVar25 = *pcVar48;
    pcVar48 = pcVar48 + 1;
    pcVar25 = pcVar25 + 1;
  }
  *pcVar25 = '\0';
  lVar21 = tzalloc(local_4a0);
  if (lVar21 == 0) {
LAB_00103e20:
    uVar36 = 0;
    goto LAB_0010369e;
  }
  do {
    while( true ) {
      pcVar48 = pcVar48 + 1;
      cVar3 = *pcVar48;
      if ('\r' < cVar3) break;
      if (cVar3 < '\t') goto LAB_001037b0;
    }
  } while (cVar3 == ' ');
LAB_001037b0:
  lVar33 = localtime_rz(lVar21,param_3,&local_3a8);
  if (lVar33 != 0) goto LAB_00103392;
  goto LAB_001037cc;
LAB_001032f5:
  iVar16 = strncmp(pcVar48,"TZ=\"",4);
  if (iVar16 == 0) {
    cVar3 = pcVar48[4];
    pcVar40 = pcVar48 + 4;
    if (cVar3 == '\0') goto LAB_001036f0;
    __size = 1;
    pcVar25 = pcVar40;
    cVar15 = cVar3;
    do {
      if (cVar15 == '\\') {
        pcVar1 = pcVar25 + 1;
        pcVar2 = pcVar25 + 1;
        pcVar25 = pcVar1;
        if ((*pcVar2 != '\\') && (*pcVar2 != '\"')) break;
      }
      else if (cVar15 == '\"') {
        pcVar25 = local_118;
        local_4a8 = (char *)0x0;
        pcVar48 = pcVar40;
        local_4a0 = pcVar25;
        if (((long)__size < 0x65) ||
           (pcVar25 = (char *)malloc(__size), local_4a0 = pcVar25, local_4a8 = pcVar25,
           pcVar25 != (char *)0x0)) goto joined_r0x00103749;
        goto LAB_0010370e;
      }
      cVar15 = pcVar25[1];
      __size = __size + 1;
      pcVar25 = pcVar25 + 1;
    } while (cVar15 != '\0');
    local_4a8 = (char *)localtime_rz(param_5,param_3,&local_3a8);
    if (local_4a8 == (char *)0x0) goto LAB_00103e20;
  }
  else {
LAB_001036f0:
    lVar21 = localtime_rz(param_5,param_3,&local_3a8);
    if (lVar21 == 0) {
LAB_0010370e:
      local_4a8 = (char *)0x0;
      uVar36 = 0;
      goto LAB_0010369e;
    }
  }
  local_4a8 = (char *)0x0;
  lVar21 = param_5;
  local_4a0 = param_6;
LAB_00103392:
  if (*pcVar48 == '\0') {
    pcVar48 = "0";
  }
  local_207 = param_4 & 1;
  local_2c0 = (long)local_394 + 0x76c;
  local_498._0_4_ = (int)lVar20;
  tStack_288 = (time_t)(int)local_498;
  local_2b8 = 0;
  local_2b0 = (long)(local_398 + 1);
  local_2d8[3] = 2;
  local_2a8 = (long)local_39c;
  local_280 = 0;
  local_2a0 = (ulong)local_3a0;
  local_278 = 0;
  local_298 = (long)local_3a4;
  local_270 = 0;
  local_290 = (long)local_3a8;
  local_268 = 0;
  local_260 = 0;
  local_428.tm_isdst = local_388;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = (undefined1  [16])0x0;
  local_230 = (undefined1  [16])0x0;
  local_1ec = local_388;
  local_210 = 0;
  local_208 = 0;
  local_1f8 = local_378;
  if (*local_378 == '\0') {
    local_1f8 = (char *)0x0;
  }
  local_200 = 0;
  local_206 = 0;
  local_368._0_8_ = lVar4 + 0x76a700;
  local_204 = 0;
  local_1f0 = 0x10d;
  local_1e8 = (char *)0x0;
  local_220 = (undefined1  [16])0x0;
  local_2e8 = pcVar48;
  if (!SCARRY8(lVar4,0x76a700)) {
    iVar16 = 0xed4e00;
    do {
      lVar20 = localtime_rz(lVar21,&local_368,&local_328);
      if ((lVar20 != 0) && ((local_1f8 == (char *)0x0 || (local_1ec != local_328.tm_isdst)))) {
        bVar49 = local_1f8 != (char *)0x0;
        lVar20 = (ulong)bVar49 + 0xf;
        *(int *)((long)&local_2e0 + lVar20 * 0x10 + 4) = local_328.tm_isdst;
        *(undefined4 *)(&local_2e0 + lVar20 * 2) = 0x10d;
        pcVar48 = local_328.tm_zone;
        if (*local_328.tm_zone == '\0') {
          pcVar48 = (char *)0x0;
        }
        (&local_2e8)[lVar20 * 2] = pcVar48;
        (local_2d8 + (long)(int)(bVar49 + 0xf) * 4)[0] = 0;
        (local_2d8 + (long)(int)(bVar49 + 0xf) * 4)[1] = 0;
        if (local_1e8 != (char *)0x0) {
          iVar16 = strcmp(local_1f8,local_1e8);
          if (iVar16 == 0) {
            local_1ec = -1;
            local_1e8 = (char *)0x0;
          }
          break;
        }
      }
      if (iVar16 == 0x1da9c00) break;
      lVar20 = (long)iVar16;
      local_368._0_8_ = lVar20 + lVar4;
      iVar16 = iVar16 + 0x76a700;
    } while (!SCARRY8(lVar20,lVar4));
  }
  local_498 = &local_2e8;
  iVar16 = yyparse(local_498);
  bVar14 = local_207;
  pcVar48 = local_2e8;
  if (iVar16 == 0) {
    cVar3 = (char)local_248;
    if (local_207 == 0) {
      if ((char)local_248 == '\0') {
        local_480 = local_240._0_8_;
        uVar39 = local_240._8_8_;
        lVar20 = local_230._8_8_;
        uVar35 = local_220._8_8_;
        if (1 < (local_240._0_8_ | local_220._8_8_ | local_240._8_8_ | local_220._0_8_ |
                local_230._0_8_ + local_230._8_8_ + local_210)) goto LAB_001037cc;
LAB_0010382f:
        lVar4 = local_210;
        uVar22 = local_2c0;
        iVar16 = (int)local_2a8;
        if (-1 < (long)local_2c0) {
          if (local_2b8 != 2) {
            bVar49 = SBORROW8(local_2c0,0x76c);
            goto LAB_0010385b;
          }
          lVar33 = 2000;
          if (0x44 < (long)local_2c0) {
            lVar33 = 0x76c;
          }
          uVar37 = local_2c0 + lVar33;
          if (bVar14 != 0) {
            uVar36 = dcgettext("gnulib","warning: adjusting year value %ld to %ld\n",5);
            dbg_printf(uVar36,uVar22,uVar37);
            bVar49 = false;
            uVar47 = uVar37 - 0x76c;
            if (uVar37 < 0x76c) {
              if (-1 < (long)uVar47) {
LAB_001052f1:
                bVar49 = true;
              }
            }
            else if ((long)uVar47 < 0) goto LAB_001052f1;
            local_428.tm_year = (int)uVar47;
            uVar22 = uVar47 & 0xffffffff;
            if (uVar47 != (long)local_428.tm_year) {
              bVar49 = true;
            }
            if (!bVar49) {
              iVar30 = (int)(local_2b0 + -1);
              local_428.tm_mon = iVar30;
              if (local_2b0 + -1 == (long)iVar30 && !SCARRY8(local_2b0,-1)) {
                iVar16 = (int)local_2a8;
                local_428.tm_mday = iVar16;
                if (local_2a8 == iVar16) goto LAB_001038cc;
              }
              goto LAB_001042b9;
            }
            goto LAB_00104377;
          }
          bVar49 = false;
          uVar47 = uVar37 - 0x76c;
          if (uVar37 < 0x76c) {
            if (-1 < (long)uVar47) {
LAB_00104b51:
              bVar49 = true;
            }
          }
          else if ((long)uVar47 < 0) goto LAB_00104b51;
          local_428.tm_year = (int)uVar47;
          uVar22 = uVar47 & 0xffffffff;
          if (uVar47 != (long)local_428.tm_year) {
            bVar49 = true;
          }
          if (bVar49) goto LAB_001037cc;
          iVar30 = (int)(local_2b0 + -1);
          local_428.tm_mon = iVar30;
          if (local_2b0 + -1 != (long)iVar30 || SCARRY8(local_2b0,-1)) goto LAB_001037cc;
          local_428.tm_mday = iVar16;
          if (local_2a8 == iVar16) goto LAB_001038cc;
          uVar36 = 0;
          goto LAB_0010368f;
        }
        bVar49 = SBORROW8(-0x76c,local_2c0);
        uVar22 = -local_2c0;
LAB_0010385b:
        uVar22 = uVar22 - 0x76c;
        local_428.tm_year = (int)uVar22;
        if (uVar22 != (long)local_428.tm_year) {
          bVar49 = true;
        }
        if (bVar49) {
          uVar37 = local_2c0;
          if (bVar14 != 0) {
LAB_00104377:
            uVar36 = dcgettext("gnulib","error: out-of-range year %ld\n",5);
            dbg_printf(uVar36,uVar37);
LAB_001042b9:
            pcVar48 = "error: year, month, or day overflow\n";
            goto LAB_00104145;
          }
        }
        else {
          iVar30 = (int)(local_2b0 + -1);
          local_428.tm_mon = iVar30;
          if ((local_2b0 + -1 != (long)iVar30 || SCARRY8(local_2b0,-1)) ||
             (local_428.tm_mday = iVar16, local_2a8 != iVar16)) {
            if (bVar14 != 0) goto LAB_001042b9;
          }
          else {
LAB_001038cc:
            uVar37 = local_2a0;
            iVar17 = (int)uVar22;
            if ((uVar35 == 0) && ((local_480 != 0 || uVar39 != 0 || (local_248._1_1_ == '\0')))) {
              local_428.tm_sec = 0;
              local_428.tm_min = 0;
              local_428._8_8_ = (ulong)(uint)local_428.tm_mday << 0x20;
              tStack_288 = 0;
              if (bVar14 == 0) {
                iVar18 = 0;
                iVar38 = 0;
                iVar44 = 0;
              }
              else {
                uVar36 = dcgettext("gnulib","warning: using midnight as starting time: %s\n",5);
                dbg_printf(uVar36,"00:00:00");
                iVar17 = local_428.tm_year;
                iVar18 = local_428.tm_min;
                iVar38 = local_428.tm_sec;
                iVar16 = local_428.tm_mday;
                iVar44 = local_428.tm_hour;
                iVar30 = local_428.tm_mon;
              }
              goto LAB_00103920;
            }
            uVar47 = (ulong)(uint)local_2d8[3];
            if (local_2d8[3] != 0) {
              if (local_2d8[3] == 1) {
                uVar47 = (ulong)((int)local_2a0 + 0xc);
                if ((local_2a0 - 1 < 0xb) || (uVar47 = 0xc, local_2a0 == 0xc)) goto LAB_001044d0;
                puVar41 = &_LC17;
              }
              else {
                if (local_2a0 < 0x18) goto LAB_001044cd;
                puVar41 = &_LC9;
              }
LAB_00104c56:
              local_428.tm_hour = 0xffffffff;
              if (bVar14 != 0) {
                uVar23 = dcgettext("gnulib","error: invalid hour %ld%s\n",5);
                uVar36 = 0;
                dbg_printf(uVar23,uVar37,puVar41);
                goto LAB_0010368f;
              }
              goto LAB_001037cc;
            }
            if (local_2a0 - 1 < 0xb) {
LAB_001044cd:
              uVar47 = local_2a0 & 0xffffffff;
            }
            else if (local_2a0 != 0xc) {
              puVar41 = &_LC53;
              goto LAB_00104c56;
            }
LAB_001044d0:
            local_428.tm_hour = (int)uVar47;
            local_428._0_8_ = CONCAT44((int)local_298,(int)local_290);
            iVar18 = (int)local_298;
            iVar38 = (int)local_290;
            iVar44 = (int)uVar47;
            if (bVar14 == 0) {
LAB_00103920:
              uStack_3e0 = CONCAT44(iVar16,iVar44);
              local_3e8 = CONCAT44(iVar18,iVar38);
              iStack_3d4 = iVar17;
              local_3d8 = iVar30;
              if ((local_480 != 0 || uVar35 != 0) || uVar39 != 0) goto LAB_00104598;
            }
            else {
              __snprintf_chk(local_188,100,2,100,"%02d:%02d:%02d",uVar47,local_298,local_290);
              if (uVar35 == 0) {
                uVar36 = dcgettext("gnulib","using current time as starting value: \'%s\'\n",5);
                dbg_printf(uVar36,local_188);
                iVar17 = local_428.tm_year;
                iVar18 = local_428.tm_min;
                iVar38 = local_428.tm_sec;
                iVar16 = local_428.tm_mday;
                iVar44 = local_428.tm_hour;
                iVar30 = local_428.tm_mon;
                goto LAB_00103920;
              }
              uVar36 = dcgettext("gnulib","using specified time as starting value: \'%s\'\n",5);
              dbg_printf(uVar36,local_188);
              _local_3d8 = local_428._16_8_;
              local_3e8 = local_428._0_8_;
              uStack_3e0 = local_428._8_8_;
LAB_00104598:
              local_428.tm_isdst = -1;
            }
            if (lVar20 != 0) {
              local_428.tm_isdst = local_2d8[1];
            }
            local_428.tm_wday = -1;
            local_3c8 = local_428.tm_isdst;
            local_470 = mktime_z(lVar21,&local_428);
            if (local_428.tm_wday < 0) {
LAB_001045dc:
              if (lVar4 != 0) {
                local_a6 = 0x58;
                local_a8 = 0x5858;
                time_zone_str(local_2d8[2],local_a5);
                lVar20 = tzalloc(&local_a8);
                if (lVar20 == 0) {
                  pcVar40 = "error: tzalloc (\"%s\") failed\n";
                  pcVar48 = (char *)&local_a8;
                  if (bVar14 != 0) goto LAB_00103e7b;
                  uVar36 = 0;
                  goto LAB_0010368f;
                }
                local_428.tm_wday = -1;
                local_428.tm_mon = local_3d8;
                local_428.tm_year = iStack_3d4;
                local_428.tm_sec = (int)local_3e8;
                local_428.tm_min = local_3e8._4_4_;
                local_428.tm_hour = (int)uStack_3e0;
                local_428.tm_mday = uStack_3e0._4_4_;
                local_428.tm_isdst = local_3c8;
                local_470 = mktime_z(lVar20,&local_428);
                if (local_428.tm_wday < 0) {
                  tzfree(lVar20);
                }
                else {
                  iVar8 = (int)local_3e8;
                  iVar9 = local_3e8._4_4_;
                  iVar30 = local_428.tm_min;
                  iVar16 = local_428.tm_sec;
                  iVar10 = (int)uStack_3e0;
                  iVar17 = local_428.tm_hour;
                  iVar11 = uStack_3e0._4_4_;
                  iVar18 = local_428.tm_mday;
                  iVar12 = local_3d8;
                  iVar38 = local_428.tm_mon;
                  iVar13 = iStack_3d4;
                  iVar44 = local_428.tm_year;
                  tzfree(lVar20);
                  if (((((iVar8 == iVar16 && iVar9 == iVar30) && iVar10 == iVar17) &&
                       iVar11 == iVar18) && iVar12 == iVar38) && iVar13 == iVar44)
                  goto LAB_00103a1f;
                }
              }
              uVar39 = local_3e8;
              iVar10 = (int)uStack_3e0;
              iVar17 = local_428.tm_hour;
              iVar11 = uStack_3e0._4_4_;
              iVar18 = local_428.tm_mday;
              iVar12 = local_3d8;
              iVar38 = local_428.tm_mon;
              iVar13 = iStack_3d4;
              iVar44 = local_428.tm_year;
              iVar8 = (int)local_3e8;
              uVar35 = local_3e8 & 0xffffffff;
              iVar16 = local_428.tm_sec;
              iVar9 = local_3e8._4_4_;
              iVar30 = local_428.tm_min;
              if (((int)local_3e8 == local_428.tm_sec) && (local_3e8._4_4_ == local_428.tm_min)) {
                if ((uStack_3e0._4_4_ == local_428.tm_mday) &&
                   ((int)uStack_3e0 != local_428.tm_hour)) {
                  bVar49 = iStack_3d4 == local_428.tm_year && local_3d8 == local_428.tm_mon;
                }
                else {
                  bVar49 = false;
                }
                if (bVar14 != 0) {
                  uVar36 = dcgettext("gnulib","error: invalid date/time value:\n",5);
                  dbg_fputs(uVar36);
                  uVar36 = debug_strfdatetime_constprop_0(&local_3e8,local_498,&local_a8);
                  uVar23 = dcgettext("gnulib","    user provided time: \'%s\'\n",5);
                  dbg_printf(uVar23,uVar36);
                  uVar36 = debug_strfdatetime_constprop_0(&local_428,local_498,&local_a8);
                  uVar23 = dcgettext("gnulib","       normalized time: \'%s\'\n",5);
                  dbg_printf(uVar23,uVar36);
                  puVar32 = &_LC9;
                  puVar41 = &_LC9;
LAB_00104744:
                  puVar26 = &_LC54;
                  puVar43 = &_LC9;
                  puVar42 = &_LC9;
                  puVar46 = &_LC55;
                  if (iVar10 != iVar17) {
                    puVar43 = &_LC54;
                  }
                  if (iVar11 != iVar18) {
                    puVar42 = &_LC54;
                  }
                  if (iVar12 == iVar38) {
                    puVar26 = &_LC9;
                  }
                  if (iVar13 == iVar44) {
                    puVar46 = &_LC9;
                  }
                  __snprintf_chk(&local_a8,100,2,100,
                                 "                                 %4s %2s %2s %2s %2s %2s",puVar46,
                                 puVar26,puVar42,puVar43,puVar41,puVar32,uVar35);
                  lVar20 = 0x34;
                  do {
                    lVar33 = lVar20;
                    iVar16 = 0;
                    if (lVar33 == 0) goto LAB_001047e1;
                    lVar20 = lVar33 + -1;
                  } while ((&cStack_a9)[lVar33] == ' ');
                  iVar16 = (int)lVar33;
LAB_001047e1:
                  *(undefined1 *)((long)&local_a8 + (long)iVar16) = 0;
                  dbg_printf(&_LC89,&local_a8);
                  uVar36 = dcgettext("gnulib","     possible reasons:\n",5);
                  dbg_fputs(uVar36);
                  if (bVar49) {
                    uVar36 = dcgettext("gnulib","       nonexistent due to daylight-saving time;\n",
                                       5);
                    dbg_fputs(uVar36);
                  }
                  if ((iVar11 != iVar18) && (iVar12 != iVar38)) {
                    uVar36 = dcgettext("gnulib","       invalid day/month combination;\n",5);
                    dbg_fputs(uVar36);
                  }
                  uVar36 = dcgettext("gnulib","       numeric values overflow;\n",5);
                  dbg_fputs(uVar36);
                  if (lVar4 == 0) {
                    uVar23 = dcgettext("gnulib","missing timezone",5);
                  }
                  else {
                    uVar23 = dcgettext("gnulib","incorrect timezone",5);
                  }
                  uVar36 = 0;
                  dbg_printf("       %s\n",uVar23);
                  goto LAB_0010368f;
                }
              }
              else if (bVar14 != 0) {
                uVar36 = dcgettext("gnulib","error: invalid date/time value:\n",5);
                dbg_fputs(uVar36);
                uVar36 = debug_strfdatetime_constprop_0(&local_3e8,local_498,&local_a8);
                uVar23 = dcgettext("gnulib","    user provided time: \'%s\'\n",5);
                dbg_printf(uVar23,uVar36);
                uVar36 = debug_strfdatetime_constprop_0(&local_428,local_498,&local_a8);
                uVar23 = dcgettext("gnulib","       normalized time: \'%s\'\n",5);
                dbg_printf(uVar23,uVar36);
                uVar35 = uVar39 & 0xffffffff;
                if (iVar8 == iVar16) {
                  bVar49 = false;
                  puVar32 = &_LC9;
                  puVar41 = &_LC54;
                }
                else {
                  puVar32 = &_LC54;
                  puVar41 = &_LC9;
                  bVar49 = false;
                  if (iVar9 != iVar30) {
                    puVar41 = puVar32;
                    bVar49 = false;
                  }
                }
                goto LAB_00104744;
              }
              goto LAB_001037cc;
            }
            if ((((((int)local_3e8 != local_428.tm_sec || local_3e8._4_4_ != local_428.tm_min) ||
                  (int)uStack_3e0 != local_428.tm_hour) || uStack_3e0._4_4_ != local_428.tm_mday) ||
                local_3d8 != local_428.tm_mon) || iStack_3d4 != local_428.tm_year)
            goto LAB_001045dc;
LAB_00103a1f:
            iVar16 = local_428.tm_mday;
            if (uVar39 == 0) {
              if (bVar14 == 0) goto LAB_001049b0;
              if (local_480 == 0) {
                iVar30 = local_428.tm_mon + 1;
                iVar18 = local_428.tm_year / 100 + 0x13;
                iVar38 = local_428.tm_year % 100;
                iVar17 = -iVar38;
                if (0 < iVar38) {
                  iVar17 = iVar38;
                }
                iVar38 = -iVar18;
                if (0 < iVar18) {
                  iVar38 = iVar18;
                }
                __sprintf_chk(&local_a8,2,0xd,"-%02d%02d" + (-0x76d < local_428.tm_year),iVar38,
                              iVar17);
                __snprintf_chk(local_188,100,2,100,"(Y-M-D) %s-%02d-%02d",&local_a8,iVar30,iVar16);
                uVar36 = dcgettext("gnulib","using current date as starting value: \'%s\'\n",5);
                dbg_printf(uVar36,local_188);
              }
LAB_00103a87:
              local_478 = local_188;
              sVar19 = strftime(local_478,100,"(Y-M-D) %Y-%m-%d %H:%M:%S",&local_428);
              lVar27 = local_270;
              lVar33 = local_278;
              lVar20 = local_280;
              local_480 = local_270;
              if ((lVar4 != 0) && (iVar16 = (int)sVar19, iVar16 < 100)) {
                uVar36 = time_zone_str(local_2d8[2],local_1a8);
                uVar35 = (ulong)iVar16;
                uVar39 = 100;
                if (99 < uVar35) {
                  uVar39 = uVar35;
                }
                __snprintf_chk(local_478 + uVar35,(long)(100 - iVar16),2,uVar39 - uVar35," TZ=%s",
                               uVar36);
                uVar36 = dcgettext("gnulib","starting date/time: \'%s\'\n",5);
                dbg_printf(uVar36,local_478);
                if ((lVar20 != 0 || lVar33 != 0) || lVar27 != 0) goto LAB_00104e22;
                goto LAB_00104cc6;
              }
              uVar36 = dcgettext("gnulib","starting date/time: \'%s\'\n",5);
              dbg_printf(uVar36,local_478);
              if ((lVar20 == 0 && lVar33 == 0) && lVar27 == 0) {
                if (lVar4 != 0) goto LAB_00104cc6;
                if (bVar14 == 0) goto LAB_00104b16;
                goto LAB_00103b23;
              }
LAB_00104e22:
              if (lVar20 == 0 && lVar33 == 0) {
LAB_001052b9:
                if (local_428.tm_hour != 0xc) {
                  uVar36 = dcgettext("gnulib",
                                     "warning: when adding relative days, it is recommended to specify noon\n"
                                     ,5);
                  dbg_fputs(uVar36);
                }
              }
              else {
                if (local_428.tm_mday != 0xf) {
                  pcVar48 = (char *)dcgettext("gnulib",
                                              "warning: when adding relative months/years, it is recommended to specify the 15th of the months\n"
                                              ,5);
                  fwrite("date: ",1,6,_stderr);
                  fputs(pcVar48,_stderr);
                }
                if (lVar27 != 0) goto LAB_001052b9;
              }
              uVar39 = local_428.tm_year + lVar20;
              if ((uVar39 != (long)(int)uVar39) || (SCARRY8((long)local_428.tm_year,lVar20))) {
LAB_00104ef0:
                uVar36 = 0;
                uVar23 = dcgettext("gnulib","error: %s:%d\n",5);
                dbg_printf(uVar23,"parse-datetime.y",0x86e);
                goto LAB_0010368f;
              }
              lVar45 = local_428.tm_mon + lVar33;
              if ((lVar45 != (int)lVar45) || (SCARRY8((long)local_428.tm_mon,lVar33)))
              goto LAB_00104ef0;
              uVar35 = local_428.tm_mday + lVar27;
              iVar16 = (int)uVar35;
              if ((uVar35 != (long)iVar16) || (SCARRY8((long)local_428.tm_mday,lVar27))) {
                if (bVar14 == 0) goto LAB_001037cc;
                goto LAB_00104ef0;
              }
LAB_00104a59:
              local_458 = uVar35 & 0xffffffff;
              uVar37 = local_458;
              local_460 = uVar39 & 0xffffffff;
              uVar22 = local_460;
              local_460._0_4_ = (int)uVar39;
              iVar30 = (int)lVar45;
              local_428.tm_wday = -1;
              local_428.tm_year = (int)local_460;
              local_428.tm_mon = iVar30;
              local_428._8_8_ = CONCAT44(iVar16,(int)uStack_3e0);
              local_428._0_8_ = local_3e8;
              local_428.tm_isdst = local_3c8;
              local_470 = mktime_z(lVar21,&local_428);
              if (local_428.tm_wday < 0) {
                if (bVar14 != 0) {
                  pcVar48 = (char *)debug_strfdatetime_constprop_0(&local_428,local_498,local_188);
                  pcVar40 = "error: adding relative date resulted in an invalid date: \'%s\'\n";
                  goto LAB_00103e7b;
                }
              }
              else {
                if (bVar14 != 0) {
                  uVar36 = dcgettext("gnulib",
                                     "after date adjustment (%+ld years, %+ld months, %+ld days),\n"
                                     ,5);
                  dbg_printf(uVar36,lVar20,lVar33,local_480);
                  uVar36 = debug_strfdatetime_constprop_0(&local_428,local_498,local_188);
                  uVar23 = dcgettext("gnulib","    new date/time = \'%s\'\n",5);
                  dbg_printf(uVar23,uVar36);
                  if ((local_3c8 != -1) && (local_3c8 != local_428.tm_isdst)) {
                    uVar36 = dcgettext("gnulib",
                                       "warning: daylight saving time changed after date adjustment\n"
                                       ,5);
                    dbg_fputs(uVar36);
                  }
                  if (local_480 == 0) {
                    local_458._0_4_ = (int)uVar35;
                    if (local_428.tm_mday == (int)local_458) {
                      if (lVar33 != 0) goto LAB_0010568c;
                      if (local_428.tm_mon != iVar30) goto LAB_001055a2;
                    }
                    else {
LAB_001055a2:
                      uVar36 = dcgettext("gnulib",
                                         "warning: month/year adjustment resulted in shifted dates:\n"
                                         ,5);
                      dbg_fputs(uVar36);
                      uVar36 = tm_year_str(uVar22,local_1a8);
                      uVar23 = dcgettext("gnulib","     adjusted Y M D: %s %02d %02d\n",5);
                      dbg_printf(uVar23,uVar36,iVar30 + 1,uVar37);
                      iVar30 = local_428.tm_mday;
                      iVar16 = local_428.tm_mon + 1;
                      uVar36 = tm_year_str(local_428.tm_year,local_1a8);
                      uVar23 = dcgettext("gnulib","   normalized Y M D: %s %02d %02d\n",5);
                      dbg_printf(uVar23,uVar36,iVar16,iVar30);
                    }
                    if (lVar4 != 0) {
                      lVar20 = local_2d8[2] - local_428.tm_gmtoff;
                      bVar49 = SBORROW8(local_470,lVar20);
                      local_470 = local_470 - lVar20;
                      iVar16 = local_2d8[2];
                      if (SBORROW8((long)local_2d8[2],local_428.tm_gmtoff) || bVar49) {
LAB_00105310:
                        uVar23 = dcgettext("gnulib","error: timezone %d caused time_t overflow\n",5)
                        ;
                        uVar36 = 0;
                        dbg_printf(uVar23,iVar16);
                        goto LAB_0010368f;
                      }
                      goto LAB_00104d17;
                    }
LAB_00103b23:
                    local_478 = local_188;
                    strftime(local_478,100,"(Y-M-D) %Y-%m-%d %H:%M:%S",&local_428);
                  }
                  else {
LAB_0010568c:
                    if (lVar4 == 0) goto LAB_00103b23;
                    lVar20 = local_2d8[2] - local_428.tm_gmtoff;
                    bVar49 = SBORROW8(local_470,lVar20);
                    local_470 = local_470 - lVar20;
                    iVar16 = local_2d8[2];
                    if (bVar49 || SBORROW8((long)local_2d8[2],local_428.tm_gmtoff))
                    goto LAB_00105310;
LAB_00104d17:
                    local_478 = local_188;
                    sVar19 = strftime(local_478,100,"(Y-M-D) %Y-%m-%d %H:%M:%S",&local_428);
                    if ((lVar4 != 0) && (iVar16 = (int)sVar19, iVar16 < 100)) {
                      uVar36 = time_zone_str(local_2d8[2],local_1a8);
                      uVar35 = (ulong)iVar16;
                      uVar39 = 100;
                      if (99 < uVar35) {
                        uVar39 = uVar35;
                      }
                      __snprintf_chk(local_478 + uVar35,(long)(100 - iVar16),2,uVar39 - uVar35,
                                     " TZ=%s",uVar36);
                    }
                  }
                  local_478 = local_188;
                  uVar36 = dcgettext("gnulib","\'%s\' = %ld epoch-seconds\n",5);
                  dbg_printf(uVar36,local_478,local_470);
                  lVar20 = local_268 * 0xe10;
                  if (SEXT816(lVar20) == SEXT816(local_268) * SEXT416(0xe10)) goto LAB_00103b8b;
                  goto LAB_00104ca9;
                }
                if ((lVar4 == 0) ||
                   (lVar20 = local_2d8[2] - local_428.tm_gmtoff, bVar49 = SBORROW8(local_470,lVar20)
                   , local_470 = local_470 - lVar20,
                   !SBORROW8((long)local_2d8[2],local_428.tm_gmtoff) && !bVar49)) goto LAB_00104b16;
              }
            }
            else {
              if (local_480 == 0) {
                local_428.tm_yday = -1;
                lVar20 = local_2e0;
                if (0 < local_2e0) {
                  lVar20 = local_2e0 - (ulong)(local_428.tm_wday != local_2d8[0]);
                }
                lVar33 = lVar20 * 7;
                if ((SEXT816(lVar33) == SEXT816(lVar20) * SEXT816(7)) &&
                   (lVar20 = (long)(((local_2d8[0] - local_428.tm_wday) + 7) % 7),
                   lVar27 = lVar20 + lVar33, !SCARRY8(lVar20,lVar33))) {
                  lVar33 = (long)local_428.tm_mday;
                  lVar20 = lVar27 + lVar33;
                  iVar16 = (int)lVar20;
                  local_428.tm_mday = iVar16;
                  if (lVar20 == iVar16 && !SCARRY8(lVar27,lVar33)) {
                    local_428.tm_isdst = -1;
                    local_470 = mktime_z(lVar21,&local_428);
                    if (-1 < local_428.tm_yday) {
                      if (bVar14 != 0) {
                        uVar36 = debug_strfdatetime_constprop_0(&local_428,local_498,local_188);
                        uVar23 = str_days_constprop_0(local_498,&local_a8);
                        uVar28 = dcgettext("gnulib","new start date: \'%s\' is \'%s\'\n",5);
                        dbg_printf(uVar28,uVar23,uVar36);
                        goto LAB_00103a87;
                      }
                      goto LAB_001049b0;
                    }
                  }
                }
                if (bVar14 != 0) {
                  uVar23 = debug_strfdatetime_constprop_0(&local_428,local_498,local_188);
                  uVar28 = str_days_constprop_0(local_498,&local_a8);
                  uVar29 = dcgettext("gnulib",
                                     "error: day \'%s\' (day ordinal=%ld number=%d) resulted in an invalid date: \'%s\'\n"
                                     ,5);
                  uVar36 = 0;
                  dbg_printf(uVar29,uVar28,local_2e0,local_2d8[0],uVar23);
                  goto LAB_0010368f;
                }
                goto LAB_001037cc;
              }
              if (bVar14 != 0) {
                uVar36 = str_days_constprop_0(local_498,&local_a8);
                uVar23 = dcgettext("gnulib",
                                   "warning: day (%s) ignored when explicit dates are given\n",5);
                dbg_printf(uVar23,uVar36);
                goto LAB_00103a87;
              }
LAB_001049b0:
              local_480 = local_270;
              if ((local_280 != 0 || local_278 != 0) || local_270 != 0) {
                uVar39 = local_428.tm_year + local_280;
                if ((uVar39 == (long)(int)uVar39) && (!SCARRY8((long)local_428.tm_year,local_280)))
                {
                  lVar45 = local_428.tm_mon + local_278;
                  if ((lVar45 == (int)lVar45) && (!SCARRY8((long)local_428.tm_mon,local_278))) {
                    uVar35 = local_428.tm_mday + local_270;
                    iVar16 = (int)uVar35;
                    if ((uVar35 == (long)iVar16) &&
                       (lVar33 = local_278, lVar20 = local_280,
                       !SCARRY8((long)local_428.tm_mday,local_270))) goto LAB_00104a59;
                  }
                }
                goto LAB_001037cc;
              }
              if (lVar4 != 0) {
LAB_00104cc6:
                lVar20 = local_2d8[2] - local_428.tm_gmtoff;
                bVar49 = SBORROW8(local_470,lVar20);
                local_470 = local_470 - lVar20;
                if (SBORROW8((long)local_2d8[2],local_428.tm_gmtoff) || bVar49) {
                  iVar16 = local_2d8[2];
                  if (bVar14 == 0) goto LAB_001037cc;
                  goto LAB_00105310;
                }
                if (bVar14 != 0) goto LAB_00104d17;
              }
LAB_00104b16:
              lVar20 = local_268 * 0xe10;
              if (SEXT816(lVar20) != SEXT816(local_268) * SEXT416(0xe10)) {
                uVar36 = 0;
                goto LAB_0010368f;
              }
LAB_00103b8b:
              iVar16 = local_250;
              lVar27 = local_258;
              lVar33 = local_260;
              lVar4 = local_268;
              lVar45 = tStack_288 + local_250;
              uVar39 = (lVar45 % 1000000000 + 1000000000U) % 1000000000;
              if ((((!SCARRY8(lVar20,local_470)) &&
                   (lVar34 = local_260 * 0x3c, SEXT816(lVar34) == SEXT816(local_260) * SEXT816(0x3c)
                   )) && (lVar31 = lVar20 + local_470 + lVar34, !SCARRY8(lVar20 + local_470,lVar34))
                  ) && ((lVar20 = lVar31 + local_258, !SCARRY8(lVar31,local_258) &&
                        (lVar45 = (long)(int)((long)(lVar45 - uVar39) / 1000000000),
                        lVar34 = lVar20 + lVar45, !SCARRY8(lVar20,lVar45))))) {
                *param_1 = lVar34;
                param_1[1] = uVar39;
                if (bVar14 != 0) {
                  if (((local_260 != 0 || local_258 != 0) || (long)local_250 != 0) || local_268 != 0
                     ) {
                    uVar36 = dcgettext("gnulib",
                                       "after time adjustment (%+ld hours, %+ld minutes, %+ld seconds, %+d ns),\n"
                                       ,5);
                    dbg_printf(uVar36,lVar4,lVar33,lVar27,iVar16);
                    uVar36 = dcgettext("gnulib","    new time = %ld epoch-seconds\n",5);
                    dbg_printf(uVar36,lVar34);
                    if (((local_428.tm_isdst != -1) &&
                        (lVar20 = localtime_rz(lVar21,param_1,&local_328), lVar20 != 0)) &&
                       (local_428.tm_isdst != local_328.tm_isdst)) {
                      uVar36 = dcgettext("gnulib",
                                         "warning: daylight saving time changed after time adjustment\n"
                                         ,5);
                      dbg_fputs(uVar36);
                    }
                  }
                  goto LAB_00103c80;
                }
                goto LAB_0010368a;
              }
              if (bVar14 != 0) {
LAB_00104ca9:
                pcVar48 = "error: adding relative time caused an overflow\n";
                goto LAB_00104145;
              }
            }
          }
        }
LAB_001037cc:
        uVar36 = 0;
        goto LAB_0010368f;
      }
      *param_1 = local_290;
      param_1[1] = tStack_288;
    }
    else {
      pcVar48 = (char *)dcgettext("gnulib","input timezone: ",5);
      fwrite("date: ",1,6,_stderr);
      fputs(pcVar48,_stderr);
      lVar20 = local_210;
      pFVar7 = _stderr;
      if (cVar3 == '\0') {
        if (local_210 != 0) {
          pcVar48 = (char *)dcgettext("gnulib","parsed date/time string",5);
          fputs(pcVar48,pFVar7);
          goto LAB_0010421d;
        }
        if (local_4a0 == (char *)0x0) {
          pcVar48 = "system default";
LAB_001041c0:
          pFVar7 = _stderr;
          pcVar48 = (char *)dcgettext("gnulib",pcVar48,5);
          fputs(pcVar48,pFVar7);
        }
        else if (param_5 == lVar21) {
          iVar16 = strcmp(local_4a0,"UTC0");
          if (iVar16 == 0) {
            pcVar48 = "TZ=\"UTC0\" environment value or -u";
            goto LAB_001041c0;
          }
          uVar36 = dcgettext("gnulib","TZ=\"%s\" environment value",5);
          __fprintf_chk(_stderr,2,uVar36,local_4a0);
        }
        else {
          uVar36 = dcgettext("gnulib","TZ=\"%s\" in date string",5);
          __fprintf_chk(_stderr,2,uVar36,local_4a0);
        }
        if ((local_230._8_8_ != 0) && (0 < local_2d8[1])) {
LAB_001043c7:
          fwrite(", dst",1,5,_stderr);
          goto LAB_0010424e;
        }
        fputc(10,_stderr);
LAB_00103f8d:
        uVar36 = local_240._0_8_;
        local_480 = local_240._0_8_;
        uVar23 = local_240._8_8_;
        uVar28 = local_220._0_8_;
        uVar22 = local_230._0_8_ + local_230._8_8_ + local_210;
        uVar39 = local_240._8_8_;
        lVar20 = local_230._8_8_;
        uVar35 = local_220._8_8_;
        if ((long)(local_240._0_8_ | local_220._8_8_ | local_240._8_8_ | local_220._0_8_ | uVar22) <
            2) goto LAB_0010382f;
        if (1 < (long)local_220._8_8_) {
          pcVar48 = (char *)dcgettext("gnulib","error: seen multiple time parts\n",5);
          fwrite("date: ",1,6,_stderr);
          fputs(pcVar48,_stderr);
        }
        if (1 < (long)uVar36) {
          pcVar48 = (char *)dcgettext("gnulib","error: seen multiple date parts\n",5);
          fwrite("date: ",1,6,_stderr);
          fputs(pcVar48,_stderr);
        }
        if (1 < (long)uVar23) {
          pcVar48 = (char *)dcgettext("gnulib","error: seen multiple days parts\n",5);
          fwrite("date: ",1,6,_stderr);
          fputs(pcVar48,_stderr);
        }
        if (1 < (long)uVar28) {
          pcVar48 = (char *)dcgettext("gnulib","error: seen multiple daylight-saving parts\n",5);
          fwrite("date: ",1,6,_stderr);
          fputs(pcVar48,_stderr);
        }
        pcVar48 = "error: seen multiple time-zone parts\n";
        if ((long)uVar22 < 2) goto LAB_001037cc;
LAB_00104145:
        pcVar48 = (char *)dcgettext("gnulib",pcVar48,5);
        fwrite("date: ",1,6,_stderr);
        uVar36 = 0;
        fputs(pcVar48,_stderr);
        goto LAB_0010368f;
      }
      pcVar48 = (char *)dcgettext("gnulib","\'@timespec\' - always UTC",5);
      fputs(pcVar48,pFVar7);
      if (local_230._8_8_ == 0) {
        if (lVar20 != 0) goto LAB_0010421d;
LAB_001043a6:
        fputc(10,_stderr);
      }
      else {
        if (lVar20 == 0) {
          if (local_2d8[1] < 1) goto LAB_001043a6;
          goto LAB_001043c7;
        }
LAB_0010421d:
        uVar36 = time_zone_str(local_2d8[2],local_1c8);
        __fprintf_chk(_stderr,2," (%s)",uVar36);
LAB_0010424e:
        fputc(10,_stderr);
        if (cVar3 == '\0') goto LAB_00103f8d;
      }
      *param_1 = local_290;
      param_1[1] = tStack_288;
LAB_00103c80:
      pcVar48 = "timezone: system default\n";
      if (local_4a0 == (char *)0x0) {
LAB_00103cb9:
        pcVar48 = (char *)dcgettext("gnulib",pcVar48,5);
        fwrite("date: ",1,6,_stderr);
        fputs(pcVar48,_stderr);
      }
      else {
        iVar16 = strcmp(local_4a0,"UTC0");
        if (iVar16 == 0) {
          pcVar48 = "timezone: Universal Time\n";
          goto LAB_00103cb9;
        }
        uVar36 = dcgettext("gnulib","timezone: TZ=\"%s\" environment value\n",5);
        dbg_printf(uVar36,local_4a0);
      }
      tVar5 = *param_1;
      tVar6 = param_1[1];
      uVar36 = dcgettext("gnulib","final: %ld.%09d (epoch-seconds)\n",5);
      dbg_printf(uVar36,tVar5,(int)tVar6);
      ptVar24 = gmtime_r(param_1,&local_368);
      if (ptVar24 != (tm *)0x0) {
        strftime(local_188,100,"(Y-M-D) %Y-%m-%d %H:%M:%S",&local_368);
        uVar36 = dcgettext("gnulib","final: %s (UTC)\n",5);
        dbg_printf(uVar36,local_188);
      }
      lVar20 = localtime_rz(lVar21,param_1,&local_328);
      if (lVar20 != 0) {
        uVar36 = time_zone_str((undefined4)local_328.tm_gmtoff,local_1c8);
        strftime(local_188,100,"(Y-M-D) %Y-%m-%d %H:%M:%S",&local_328);
        uVar23 = dcgettext("gnulib","final: %s (UTC%s)\n",5);
        dbg_printf(uVar23,local_188,uVar36);
      }
    }
LAB_0010368a:
    uVar36 = 1;
  }
  else {
    if (local_207 == 0) goto LAB_001037cc;
    if (local_2e8 < param_2 + sVar19) {
      pcVar40 = "error: parsing failed, stopped at \'%s\'\n";
LAB_00103e7b:
      uVar23 = dcgettext("gnulib",pcVar40,5);
    }
    else {
      uVar23 = dcgettext("gnulib","error: parsing failed\n",5);
    }
    uVar36 = 0;
    dbg_printf(uVar23,pcVar48);
  }
LAB_0010368f:
  if (param_5 != lVar21) {
    tzfree(lVar21);
  }
LAB_0010369e:
  free(local_4a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar36;
}



void parse_datetime2(void)

{
  parse_datetime_body();
  return;
}



undefined4 parse_datetime(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  long lVar3;
  
  uVar1 = 0;
  pcVar2 = getenv("TZ");
  lVar3 = tzalloc(pcVar2);
  if (lVar3 != 0) {
    uVar1 = parse_datetime_body(param_1,param_2,param_3,0,lVar3,pcVar2);
    tzfree(lVar3);
  }
  return uVar1;
}


