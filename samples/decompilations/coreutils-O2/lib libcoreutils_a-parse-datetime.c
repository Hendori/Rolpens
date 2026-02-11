
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



undefined4 mktime_ok(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (-1 < (int)param_2[6]) {
    uVar1 = *param_1 ^ *param_2 | param_1[1] ^ param_2[1] | param_1[2] ^ param_2[2] |
            param_1[3] ^ param_2[3] | param_1[4] ^ param_2[4] | param_1[5] ^ param_2[5];
    uVar2 = CONCAT31((int3)(uVar1 >> 8),uVar1 == 0);
  }
  return uVar2;
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



undefined1 * lookup_zone(long param_1,char *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  
  pcVar4 = "GMT";
  puVar3 = universal_time_zone_table;
  do {
    iVar2 = strcmp(param_2,pcVar4);
    if (iVar2 == 0) {
      return puVar3;
    }
    pcVar4 = *(char **)(puVar3 + 0x10);
    puVar3 = puVar3 + 0x10;
  } while (pcVar4 != (char *)0x0);
  puVar3 = (undefined1 *)(param_1 + 0xf0);
  pcVar4 = *(char **)(param_1 + 0xf0);
  while (pcVar4 != (char *)0x0) {
    iVar2 = strcmp(param_2,pcVar4);
    if (iVar2 == 0) {
      return puVar3;
    }
    puVar1 = (undefined8 *)(puVar3 + 0x10);
    puVar3 = puVar3 + 0x10;
    pcVar4 = (char *)*puVar1;
  }
  puVar3 = time_zone_table;
  pcVar4 = "WET";
  do {
    iVar2 = strcmp(param_2,pcVar4);
    if (iVar2 == 0) {
      return puVar3;
    }
    pcVar4 = *(char **)(puVar3 + 0x10);
    puVar3 = puVar3 + 0x10;
  } while (pcVar4 != (char *)0x0);
  return (undefined1 *)0x0;
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
      uVar2 = __snprintf_chk(param_2,100,2,0xffffffffffffffff,&_LC8);
      uVar1 = *(uint *)(param_1 + 0x10);
      if (6 < uVar1) {
        return param_2;
      }
    }
    uVar3 = (ulong)(uVar2 == 0);
    lVar4 = (long)(int)(100 - uVar2);
    pcVar5 = param_2 + (int)uVar2;
  }
  __snprintf_chk(pcVar5,lVar4,2,0xffffffffffffffff,&_LC9 + uVar3,
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
  char *pcVar7;
  undefined *puVar8;
  long in_FS_OFFSET;
  undefined1 auStack_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = dcgettext("gnulib","parsed %s part: ",5);
  dbg_printf(uVar4,param_1);
  if ((*(long *)(param_2 + 0xa8) == 0) || (*(char *)(param_2 + 0xe2) != '\0')) {
    if (*(char *)(param_2 + 0xe0) != *(char *)(param_2 + 0xe7)) goto LAB_00100714;
    bVar3 = false;
  }
  else {
    __fprintf_chk(_stderr,2,"(Y-M-D) %04ld-%02ld-%02ld",*(undefined8 *)(param_2 + 0x28),
                  *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40));
    *(undefined1 *)(param_2 + 0xe2) = 1;
    if (*(char *)(param_2 + 0xe0) != *(char *)(param_2 + 0xe7)) {
      fputc(0x20,_stderr);
LAB_00100714:
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      uVar5 = dcgettext("gnulib","year: %04ld",5);
      __fprintf_chk(_stderr,2,uVar5,uVar4);
      *(undefined1 *)(param_2 + 0xe7) = *(undefined1 *)(param_2 + 0xe0);
    }
    bVar3 = true;
  }
  if ((*(long *)(param_2 + 0xd0) == 0) || (*(char *)(param_2 + 0xe5) != '\0')) {
    if ((*(long *)(param_2 + 0xb0) != 0) && (*(char *)(param_2 + 0xe3) == '\0')) {
      if (bVar3) goto LAB_00100985;
      goto LAB_00100792;
    }
  }
  else {
    __fprintf_chk(_stderr,2," %02ld:%02ld:%02ld" + !bVar3,*(undefined8 *)(param_2 + 0x48),
                  *(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
    if (*(long *)(param_2 + 0x60) != 0) {
      __fprintf_chk(_stderr,2,".%09d");
    }
    if (*(int *)(param_2 + 0x1c) == 1) {
      fwrite(&_LC19,1,2,_stderr);
    }
    *(undefined1 *)(param_2 + 0xe5) = 1;
    if ((*(long *)(param_2 + 0xb0) != 0) && (*(char *)(param_2 + 0xe3) == '\0')) {
LAB_00100985:
      fputc(0x20,_stderr);
LAB_00100792:
      uVar2 = *(undefined4 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)(param_2 + 8);
      uVar5 = str_days_constprop_0(param_2,auStack_98);
      uVar6 = dcgettext("gnulib","%s (day ordinal=%ld number=%d)",5);
      __fprintf_chk(_stderr,2,uVar6,uVar5,uVar4,uVar2);
      *(undefined1 *)(param_2 + 0xe3) = 1;
    }
    bVar3 = true;
  }
  if ((*(long *)(param_2 + 0xc0) == 0) || (*(char *)(param_2 + 0xe4) != '\0')) {
    if ((*(long *)(param_2 + 0xd8) != 0) && (*(char *)(param_2 + 0xe6) == '\0')) {
      pcVar7 = " UTC%s" + !bVar3;
      goto LAB_00100a0d;
    }
    if (*(char *)(param_2 + 0xa0) == '\0') goto LAB_001008d5;
    uVar4 = *(undefined8 *)(param_2 + 0x58);
    if (bVar3) goto LAB_0010086a;
  }
  else {
    puVar8 = &_LC11;
    if (*(long *)(param_2 + 200) != 0) {
      puVar8 = &_LC10;
    }
    __fprintf_chk(_stderr,2," isdst=%d%s" + !bVar3,*(undefined4 *)(param_2 + 0x14),puVar8);
    *(undefined1 *)(param_2 + 0xe4) = 1;
    if ((*(long *)(param_2 + 0xd8) == 0) || (*(char *)(param_2 + 0xe6) != '\0')) {
      cVar1 = *(char *)(param_2 + 0xa0);
    }
    else {
      pcVar7 = " UTC%s";
LAB_00100a0d:
      uVar4 = time_zone_str(*(undefined4 *)(param_2 + 0x18),auStack_98);
      __fprintf_chk(_stderr,2,pcVar7,uVar4);
      cVar1 = *(char *)(param_2 + 0xa0);
      *(undefined1 *)(param_2 + 0xe6) = 1;
    }
    if (cVar1 == '\0') goto LAB_001008d5;
    uVar4 = *(undefined8 *)(param_2 + 0x58);
LAB_0010086a:
    fputc(0x20,_stderr);
  }
  uVar5 = dcgettext("gnulib","number of seconds: %ld",5);
  __fprintf_chk(_stderr,2,uVar5,uVar4);
LAB_001008d5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    fputc(10,_stderr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool time_zone_hhmm_isra_0(long param_1,char param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  bool bVar2;
  
  if (param_4 < 3) {
    if (-1 < param_5) {
LAB_00100abe:
      lVar1 = param_3 * 0x3c;
      if (param_2 == '\0') {
        bVar2 = SCARRY8(param_5,lVar1);
        param_5 = param_5 + lVar1;
      }
      else {
        bVar2 = SBORROW8(lVar1,param_5);
        param_5 = lVar1 - param_5;
      }
      if (bVar2 || SEXT816(lVar1) != SEXT816(param_3) * SEXT816(0x3c)) {
        return false;
      }
      goto LAB_00100ada;
    }
    param_5 = 0;
    lVar1 = param_3;
  }
  else {
    if (-1 < param_5) goto LAB_00100abe;
    lVar1 = param_3 / 100;
    param_5 = param_3 % 100;
  }
  param_5 = param_5 + lVar1 * 0x3c;
LAB_00100ada:
  bVar2 = param_5 + 0x5a0U < 0xb41;
  if (bVar2) {
    *(int *)(param_1 + 0x18) = (int)param_5 * 0x3c;
  }
  return bVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dbg_fputs(char *param_1)

{
  fwrite("date: ",1,6,_stderr);
  fputs(param_1,_stderr);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void debug_print_relative_time_part_0(undefined8 param_1,long param_2)

{
  bool bVar1;
  FILE *__stream;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  
  uVar2 = dcgettext("gnulib","parsed %s part: ",5);
  dbg_printf(uVar2,param_1);
  __stream = _stderr;
  if (*(long *)(param_2 + 0x68) == 0) {
    lVar3 = *(long *)(param_2 + 0x70);
    if (lVar3 != 0) {
      pcVar4 = "%+ld %s";
LAB_00100bea:
      __fprintf_chk(_stderr,2,pcVar4,lVar3,"month(s)");
      goto LAB_00100c00;
    }
    lVar3 = *(long *)(param_2 + 0x78);
    if (lVar3 != 0) {
      bVar1 = false;
      goto LAB_00100dfc;
    }
    if (*(long *)(param_2 + 0x80) == 0) {
      bVar1 = false;
      if (*(long *)(param_2 + 0x88) != 0) goto LAB_00100c29;
      if ((*(long *)(param_2 + 0x90) == 0) && (*(int *)(param_2 + 0x98) == 0)) {
        pcVar4 = (char *)dcgettext("gnulib","today/this/now\n",5);
        fputs(pcVar4,__stream);
        return;
      }
      goto LAB_00100c19;
    }
    lVar3 = *(long *)(param_2 + 0x80);
    bVar1 = false;
  }
  else {
    __fprintf_chk(_stderr,2,"%+ld %s",*(long *)(param_2 + 0x68),"year(s)");
    lVar3 = *(long *)(param_2 + 0x70);
    if (lVar3 != 0) {
      pcVar4 = " %+ld %s";
      goto LAB_00100bea;
    }
LAB_00100c00:
    lVar3 = *(long *)(param_2 + 0x78);
    if (lVar3 != 0) {
      bVar1 = true;
LAB_00100dfc:
      __fprintf_chk(_stderr,2,&_LC23 + !bVar1,lVar3,"day(s)");
    }
    bVar1 = true;
LAB_00100c19:
    lVar3 = *(long *)(param_2 + 0x80);
    if (lVar3 == 0) goto LAB_00100c29;
  }
  __fprintf_chk(_stderr,2,&_LC23 + !bVar1,lVar3,"hour(s)");
  bVar1 = true;
LAB_00100c29:
  if (*(long *)(param_2 + 0x88) != 0) {
    __fprintf_chk(_stderr,2,&_LC23 + !bVar1,*(long *)(param_2 + 0x88),"minutes");
    bVar1 = true;
  }
  if (*(long *)(param_2 + 0x90) != 0) {
    __fprintf_chk(_stderr,2,&_LC23 + !bVar1,*(long *)(param_2 + 0x90),"seconds");
    bVar1 = true;
  }
  if ((long)*(int *)(param_2 + 0x98) != 0) {
    __fprintf_chk(_stderr,2,&_LC23 + !bVar1,(long)*(int *)(param_2 + 0x98),"nanoseconds");
  }
  fputc(10,_stderr);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001024da) */
/* WARNING: Removing unreachable block (ram,0x00101f69) */

undefined8 yyparse(long *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  char cVar15;
  byte *pbVar16;
  ulong uVar17;
  undefined *puVar18;
  long lVar19;
  size_t sVar20;
  undefined8 uVar21;
  uint uVar22;
  byte bVar23;
  long lVar24;
  char *pcVar25;
  ulong uVar26;
  byte *pbVar27;
  ulong *puVar28;
  ulong *puVar29;
  undefined1 *puVar30;
  uint uVar31;
  char *pcVar32;
  char *__s2;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  byte *pbVar37;
  int iVar38;
  ulong uVar39;
  uint uVar40;
  long in_FS_OFFSET;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  ulong extraout_XMM0_Qa;
  ulong extraout_XMM0_Qa_00;
  ulong extraout_XMM0_Qb;
  ulong extraout_XMM0_Qb_00;
  ulong uVar48;
  ulong local_630;
  ulong local_628;
  ulong local_618;
  ulong local_5f8;
  long local_5d8;
  long local_5b8;
  long local_5a8;
  int local_584;
  ulong local_558;
  ulong local_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong local_528;
  undefined8 local_4e8;
  ulong local_4d8 [139];
  char local_79 [20];
  char local_65 [12];
  char acStack_59 [25];
  long local_40;
  
  uVar48 = 0;
  uVar17 = 0;
  iVar34 = 0;
  cVar15 = -0xe;
  uVar40 = 0xfffffffe;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_79[1] = 0;
  local_584 = 0;
  puVar29 = local_4d8;
  pcVar25 = local_79 + 1;
LAB_00100ea0:
  uVar22 = (uint)cVar15;
  if (uVar22 != 0xffffffa5) {
    if (uVar40 != 0xfffffffe) goto LAB_00100ec1;
    pbVar16 = (byte *)*param_1;
    uVar39 = (ulong)*pbVar16;
LAB_00101216:
    bVar23 = (byte)uVar39;
    if ((char)bVar23 < '\x0e') {
      if ((char)bVar23 < '\t') goto LAB_00101228;
LAB_00101500:
      pbVar16 = pbVar16 + 1;
      *param_1 = (long)pbVar16;
      uVar39 = (ulong)*pbVar16;
      goto LAB_00101216;
    }
    if (bVar23 == 0x20) goto LAB_00101500;
    if (0x39 < bVar23) {
      if ((char)bVar23 < '[') {
        if ('@' < (char)bVar23) goto LAB_00101558;
      }
      else if ((byte)(bVar23 + 0x9f) < 0x1a) {
LAB_00101558:
        pbVar37 = (byte *)(acStack_59 + 1);
        pbVar27 = pbVar37;
        goto LAB_00101570;
      }
LAB_00101228:
      *param_1 = (long)(pbVar16 + 1);
      uVar40 = (uint)*pbVar16;
      if (*pbVar16 == 0) goto LAB_00101240;
      goto LAB_00101348;
    }
    if ((0x3ff280000000000U >> (uVar39 & 0x3f) & 1) == 0) {
      if (bVar23 != 0x28) goto LAB_00101228;
      lVar24 = 0;
      do {
        pbVar37 = pbVar16;
        pbVar16 = pbVar37 + 1;
        *param_1 = (long)pbVar16;
        bVar23 = *pbVar37;
        if (bVar23 == 0) goto LAB_00101240;
        if (bVar23 == 0x28) {
          lVar24 = lVar24 + 1;
        }
        else {
          lVar24 = lVar24 - (ulong)(bVar23 == 0x29);
        }
      } while (lVar24 != 0);
      uVar39 = (ulong)pbVar37[1];
      goto LAB_00101216;
    }
    if (((int)uVar39 - 0x2bU & 0xfd) != 0) {
      iVar33 = 0;
      goto LAB_001013f3;
    }
    iVar33 = ((bVar23 != 0x2d) - 1) + (uint)(bVar23 != 0x2d);
    do {
      pbVar16 = pbVar16 + 1;
      *param_1 = (long)pbVar16;
      bVar23 = *pbVar16;
      while (uVar39 = (ulong)bVar23, (char)bVar23 < '\x0e') {
        if ((char)bVar23 < '\t') goto LAB_00101216;
        pbVar16 = pbVar16 + 1;
        *param_1 = (long)pbVar16;
        bVar23 = *pbVar16;
      }
    } while (bVar23 == 0x20);
    if (9 < (int)(char)bVar23 - 0x30U) goto LAB_00101216;
LAB_001013f3:
    uVar26 = 0;
    do {
      pbVar37 = pbVar16;
      lVar24 = uVar26 * 10;
      if (SEXT816(lVar24) != SEXT816((long)uVar26) * SEXT816(10)) {
LAB_0010133e:
        uVar40 = 0x3f;
        goto LAB_00101348;
      }
      iVar35 = (int)uVar39 + -0x30;
      if (iVar33 == -1) {
        iVar35 = 0x30 - (int)uVar39;
      }
      uVar26 = iVar35 + lVar24;
      if (SCARRY8((long)iVar35,lVar24)) goto LAB_0010133e;
      bVar23 = pbVar37[1];
      uVar39 = (ulong)bVar23;
      pbVar16 = pbVar37 + 1;
    } while (bVar23 - 0x30 < 10);
    if (((bVar23 & 0xfd) == 0x2c) && (uVar31 = (int)(char)pbVar37[2] - 0x30, uVar31 < 10)) {
      iVar38 = (int)(char)pbVar37[3];
      pbVar37 = pbVar37 + 3;
      iVar36 = 8;
      iVar35 = iVar38;
      do {
        uVar40 = iVar38 - 0x30;
        uVar31 = uVar31 * 10;
        if (uVar40 < 10) {
          iVar38 = (int)(char)pbVar37[1];
          uVar31 = uVar31 + uVar40;
          pbVar37 = pbVar37 + 1;
          uVar40 = iVar38 - 0x30;
          iVar35 = iVar38;
        }
        iVar36 = iVar36 + -1;
      } while (iVar36 != 0);
      if (iVar33 != -1) {
        if (uVar40 < 10) {
LAB_001014ac:
          do {
            pbVar16 = pbVar37 + 1;
            pbVar37 = pbVar37 + 1;
          } while ((int)(char)*pbVar16 - 0x30U < 10);
          if ((iVar33 < 0) && (uVar31 != 0)) goto LAB_001014cd;
        }
        *param_1 = (long)pbVar37;
        iVar35 = 0x16 - (uint)(iVar33 != 0);
        uVar40 = 0x115 - (iVar33 != 0);
        uVar48 = (long)(int)uVar31;
        local_558 = uVar26;
        goto LAB_00101356;
      }
      while (uVar40 < 10) {
        if ((char)iVar35 != '0') {
          uVar31 = uVar31 + 1;
          if ((int)(char)*pbVar37 - 0x30U < 10) goto LAB_001014ac;
          break;
        }
        iVar35 = (int)(char)pbVar37[1];
        pbVar37 = pbVar37 + 1;
        uVar40 = iVar35 - 0x30;
      }
      if (uVar31 == 0) {
        *param_1 = (long)pbVar37;
        iVar35 = 0x15;
        uVar40 = 0x114;
        uVar48 = 0;
        local_558 = uVar26;
        goto LAB_00101356;
      }
LAB_001014cd:
      if (!SCARRY8(uVar26,-1)) {
        *param_1 = (long)pbVar37;
        uVar40 = 0x114;
        iVar35 = 0x15;
        uVar48 = (long)(int)(1000000000 - uVar31);
        local_558 = uVar26 - 1;
        goto LAB_00101356;
      }
      goto LAB_001028b3;
    }
    local_558 = CONCAT71(local_558._1_7_,(byte)((uint)iVar33 >> 0x1f));
    uVar17 = (long)pbVar16 - *param_1;
    *param_1 = (long)pbVar16;
    iVar35 = 0x14 - (uint)(iVar33 != 0);
    uVar40 = 0x113 - (iVar33 != 0);
    uVar48 = uVar26;
    goto LAB_00101356;
  }
  iVar35 = (int)(char)(&yydefact)[iVar34];
  if ((&yydefact)[iVar34] != '\0') goto LAB_00101000;
  if (local_584 != 3) goto LAB_001012ca;
  if (0 < (int)uVar40) {
    uVar40 = 0xfffffffe;
    goto LAB_001012ca;
  }
  if (uVar40 != 0) goto LAB_001012ca;
  goto LAB_00100fb3;
  while ((byte)(bVar23 + 0x9f) < 0x1a) {
LAB_00101570:
    if (pbVar27 < acStack_59 + 0x14) {
      *pbVar27 = (byte)uVar39;
      pbVar27 = pbVar27 + 1;
    }
    pbVar16 = pbVar16 + 1;
    *param_1 = (long)pbVar16;
    bVar23 = *pbVar16;
    uVar39 = (ulong)bVar23;
    if ((char)bVar23 < '[') {
      if (((char)bVar23 < 'A') && (bVar23 != 0x2e)) break;
      goto LAB_00101570;
    }
  }
  *pbVar27 = 0;
  pbVar16 = pbVar37;
  bVar23 = acStack_59[1];
  while (bVar23 != 0) {
    if (bVar23 - 0x61 < 0x1a) {
      bVar23 = bVar23 - 0x20;
    }
    *pbVar16 = bVar23;
    bVar23 = pbVar16[1];
    pbVar16 = pbVar16 + 1;
  }
  pcVar32 = "AM";
  puVar30 = meridian_table;
  do {
    iVar35 = strcmp((char *)pbVar37,pcVar32);
    if (iVar35 == 0) goto LAB_00102608;
    pcVar32 = *(char **)(puVar30 + 0x10);
    puVar30 = puVar30 + 0x10;
  } while (pcVar32 != (char *)0x0);
  sVar20 = strlen((char *)pbVar37);
  bVar41 = true;
  if ((sVar20 != 3) && (bVar41 = false, sVar20 == 4)) {
    bVar41 = acStack_59[4] == '.';
  }
  puVar30 = month_and_day_table;
  pcVar32 = "JANUARY";
  do {
    if (bVar41) {
      iVar35 = strncmp((char *)pbVar37,pcVar32,3);
    }
    else {
      iVar35 = strcmp((char *)pbVar37,pcVar32);
    }
    bVar42 = iVar35 == 0;
    if (bVar42) goto LAB_00102608;
    pcVar32 = *(char **)(puVar30 + 0x10);
    puVar30 = puVar30 + 0x10;
  } while (pcVar32 != (char *)0x0);
  lVar24 = lookup_zone(param_1,pbVar37);
  if (lVar24 == 0) {
    iVar35 = strcmp((char *)pbVar37,"DST");
    pcVar32 = "YEAR";
    if (iVar35 == 0) {
      local_558 = 0;
      uVar40 = 0x103;
LAB_00101348:
      iVar35 = (int)(char)yytranslate[(int)uVar40];
    }
    else {
      puVar30 = time_units_table;
      do {
        iVar35 = strcmp((char *)pbVar37,pcVar32);
        if (iVar35 == 0) goto LAB_00102608;
        pcVar32 = *(char **)(puVar30 + 0x10);
        puVar30 = puVar30 + 0x10;
      } while (pcVar32 != (char *)0x0);
      pcVar32 = acStack_59 + sVar20;
      if (*pcVar32 == 'S') {
        puVar30 = time_units_table;
        *pcVar32 = '\0';
        __s2 = "YEAR";
        do {
          iVar35 = strcmp((char *)pbVar37,__s2);
          if (iVar35 == 0) goto LAB_00102608;
          __s2 = *(char **)(puVar30 + 0x10);
          puVar30 = puVar30 + 0x10;
        } while (__s2 != (char *)0x0);
        *pcVar32 = 'S';
      }
      pcVar32 = "TOMORROW";
      puVar30 = relative_time_table;
      do {
        iVar35 = strcmp((char *)pbVar37,pcVar32);
        if (iVar35 == 0) goto LAB_00102608;
        pcVar32 = *(char **)(puVar30 + 0x10);
        puVar30 = puVar30 + 0x10;
      } while (pcVar32 != (char *)0x0);
      if (sVar20 == 1) {
        puVar30 = military_table;
        pbVar16 = &_LC36;
        do {
          if (*pbVar16 == acStack_59[1]) goto LAB_00102608;
          pbVar16 = *(byte **)(puVar30 + 0x10);
          puVar30 = puVar30 + 0x10;
        } while (pbVar16 != (byte *)0x0);
      }
      pbVar16 = pbVar37;
      pbVar27 = pbVar37;
      bVar23 = acStack_59[1];
      if (acStack_59[1] != 0) {
        do {
          if (bVar23 == 0x2e) {
            bVar42 = true;
          }
          else {
            pbVar16 = pbVar16 + 1;
          }
          bVar23 = pbVar27[1];
          pbVar27 = pbVar27 + 1;
          *pbVar16 = bVar23;
        } while (bVar23 != 0);
        if ((bVar42) &&
           (puVar30 = (undefined1 *)lookup_zone(param_1,pbVar37), puVar30 != (undefined1 *)0x0)) {
LAB_00102608:
          iVar35 = *(int *)(puVar30 + 0xc);
          uVar40 = *(uint *)(puVar30 + 8);
          goto LAB_00102610;
        }
      }
      if (*(char *)((long)param_1 + 0xe1) != '\0') {
        uVar21 = dcgettext("gnulib","error: unknown word \'%s\'\n",5);
        dbg_printf(uVar21,pbVar37);
      }
LAB_001028b3:
      iVar35 = 2;
      uVar40 = 0x3f;
    }
LAB_00101356:
    uVar22 = uVar22 + iVar35;
  }
  else {
    iVar35 = *(int *)(lVar24 + 0xc);
    uVar40 = *(uint *)(lVar24 + 8);
LAB_00102610:
    local_558 = (ulong)iVar35;
LAB_00100ec1:
    if ((int)uVar40 < 1) {
LAB_00101240:
      iVar35 = 0;
      uVar40 = 0;
    }
    else {
      if (uVar40 == 0x100) {
        uVar40 = 0x101;
        goto LAB_001012ca;
      }
      if ((int)uVar40 < 0x116) goto LAB_00101348;
      uVar22 = uVar22 + 2;
      iVar35 = 2;
    }
  }
  if ((uVar22 < 0x73) && ((char)yycheck[(int)uVar22] == iVar35)) {
    cVar15 = yytable[(int)uVar22];
    iVar34 = (int)cVar15;
    if ('\0' < cVar15) {
      uVar40 = 0xfffffffe;
      puVar29[0xd] = local_528;
      local_584 = local_584 + -1 + (uint)(local_584 == 0);
      puVar29[7] = local_558;
      puVar29[8] = uVar48;
      puVar28 = puVar29 + 7;
      puVar29[9] = uVar17;
      puVar29[10] = local_540;
      puVar29[0xb] = uStack_538;
      puVar29[0xc] = uStack_530;
      goto LAB_001011d6;
    }
    iVar35 = -iVar34;
  }
  else {
    iVar35 = (int)(char)(&yydefact)[iVar34];
    if ((&yydefact)[iVar34] == '\0') {
      if (local_584 == 3) {
        if (uVar40 == 0) goto LAB_00100fb3;
        uVar40 = 0xfffffffe;
      }
      uVar22 = (uint)(char)(&yypact)[iVar34];
LAB_001012ca:
      do {
        if (((uVar22 != 0xffffffa5) && (uVar22 = uVar22 + 1, uVar22 < 0x73)) &&
           (yycheck[(int)uVar22] == '\x01')) {
          cVar15 = yytable[(int)uVar22];
          iVar34 = (int)cVar15;
          if ('\0' < cVar15) goto code_r0x001012ed;
        }
        if (pcVar25 == local_79 + 1) goto LAB_00100fb3;
        pcVar32 = pcVar25 + -1;
        pcVar25 = pcVar25 + -1;
        puVar29 = puVar29 + -7;
        uVar22 = (uint)(char)(&yypact)[*pcVar32];
      } while( true );
    }
  }
LAB_00101000:
  cVar15 = yyr2[iVar35];
  lVar24 = (long)cVar15;
  puVar28 = puVar29 + (long)(1 - cVar15) * 7;
  local_5f8 = puVar28[2];
  local_4e8._4_4_ = (undefined4)(puVar28[6] >> 0x20);
  uVar39 = *puVar28;
  local_630 = puVar28[3];
  uVar26 = puVar28[1];
  local_618 = puVar28[4];
  local_628 = puVar28[5];
  uVar11 = (undefined4)puVar28[6];
  switch(iVar35) {
  case 4:
    uVar1 = *puVar29;
    uVar3 = puVar29[1];
    pcVar32 = "number of seconds";
    *(undefined1 *)(param_1 + 0x14) = 1;
    param_1[0xb] = uVar1;
    param_1[0xc] = uVar3;
    goto LAB_001019c0;
  case 7:
    param_1[0x1a] = param_1[0x1a] + 1;
    pcVar32 = "datetime";
    param_1[0x15] = param_1[0x15] + 1;
    goto LAB_001019c0;
  case 8:
    param_1[0x1a] = param_1[0x1a] + 1;
    pcVar32 = "time";
    goto LAB_001019c0;
  case 9:
    param_1[0x18] = param_1[0x18] + 1;
    pcVar32 = "local_zone";
    goto LAB_001019c0;
  case 10:
    param_1[0x17] = param_1[0x17] + 1;
    if (*(char *)((long)param_1 + 0xe1) == '\0') break;
    puVar18 = &_LC43;
    goto LAB_001019f9;
  case 0xb:
    param_1[0x1b] = param_1[0x1b] + 1;
    pcVar32 = "zone";
    goto LAB_001019c0;
  case 0xc:
    param_1[0x15] = param_1[0x15] + 1;
    pcVar32 = "date";
    goto LAB_001019c0;
  case 0xd:
    param_1[0x16] = param_1[0x16] + 1;
    pcVar32 = "day";
    goto LAB_001019c0;
  case 0xe:
    goto LAB_001021a3;
  case 0xf:
    pcVar32 = "number";
LAB_001019c0:
    puVar18 = (undefined *)dcgettext("gnulib",pcVar32,5);
    lVar24 = (long)cVar15;
    if (*(char *)((long)param_1 + 0xe1) != '\0') {
LAB_001019f9:
      debug_print_current_time_part_0(puVar18,param_1);
      lVar24 = (long)cVar15;
    }
    break;
  case 0x10:
    pcVar32 = "hybrid";
    goto LAB_00102108;
  case 0x13:
    uVar1 = puVar29[-6];
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[9] = uVar1;
    uVar1 = *puVar29;
    param_1[0xc] = 0;
    *(int *)((long)param_1 + 0x1c) = (int)uVar1;
    break;
  case 0x14:
    uVar3 = puVar29[-6];
    uVar1 = *puVar29;
    param_1[9] = puVar29[-0x14];
    param_1[10] = uVar3;
    *(int *)((long)param_1 + 0x1c) = (int)uVar1;
    *(undefined1 (*) [16])(param_1 + 0xb) = (undefined1  [16])0x0;
    break;
  case 0x15:
    uVar3 = puVar29[-0x22];
    uVar4 = puVar29[-0x14];
    param_1[0xb] = puVar29[-7];
    param_1[0xc] = (long)(int)puVar29[-6];
    uVar1 = *puVar29;
    param_1[9] = uVar3;
    param_1[10] = uVar4;
    *(int *)((long)param_1 + 0x1c) = (int)uVar1;
    break;
  case 0x17:
    uVar1 = puVar29[-6];
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[9] = uVar1;
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 2;
    break;
  case 0x18:
    uVar1 = puVar29[-0x14];
    *(undefined4 *)((long)param_1 + 0x1c) = 2;
    uVar3 = puVar29[-6];
    param_1[9] = uVar1;
    param_1[10] = uVar3;
    *(undefined1 (*) [16])(param_1 + 0xb) = (undefined1  [16])0x0;
    break;
  case 0x19:
    uVar1 = puVar29[-7];
    uVar3 = puVar29[-0x22];
    *(undefined4 *)((long)param_1 + 0x1c) = 2;
    uVar4 = puVar29[-0x14];
    param_1[0xb] = uVar1;
    param_1[0xc] = (long)(int)puVar29[-6];
    param_1[9] = uVar3;
    param_1[10] = uVar4;
    break;
  case 0x1c:
    param_1[0x1b] = param_1[0x1b] + 1;
    cVar15 = time_zone_hhmm_isra_0(param_1,(char)puVar29[-7],puVar29[-6],puVar29[-5],*puVar29);
    uVar48 = extraout_XMM0_Qa;
    uVar17 = extraout_XMM0_Qb;
    if (cVar15 == '\0') goto LAB_00100fb3;
    break;
  case 0x1d:
    *(int *)((long)param_1 + 0x14) = (int)*puVar29;
    break;
  case 0x1e:
    param_1[0x19] = param_1[0x19] + 1;
    *(undefined4 *)((long)param_1 + 0x14) = 1;
    break;
  case 0x1f:
    *(int *)(param_1 + 3) = (int)*puVar29;
    break;
  case 0x20:
    *(undefined4 *)(param_1 + 3) = 0xffff9d90;
    break;
  case 0x21:
    *(int *)(param_1 + 3) = (int)puVar29[-7];
    goto LAB_001022d7;
  case 0x22:
    *(undefined4 *)(param_1 + 3) = 0xffff9d90;
LAB_001022d7:
    lVar13 = param_1[0x13];
    uVar14 = puVar29[6];
    *(int *)(param_1 + 0x13) = (int)lVar13 + (int)puVar29[6];
    lVar24 = param_1[0x12];
    uVar1 = puVar29[5];
    param_1[0x12] = lVar24 + puVar29[5];
    lVar2 = param_1[0x11];
    uVar3 = puVar29[4];
    param_1[0x11] = lVar2 + puVar29[4];
    lVar19 = param_1[0x10];
    uVar4 = puVar29[3];
    param_1[0x10] = lVar19 + puVar29[3];
    lVar5 = param_1[0xf];
    uVar6 = puVar29[2];
    param_1[0xf] = lVar5 + puVar29[2];
    lVar7 = param_1[0xe];
    uVar8 = puVar29[1];
    param_1[0xe] = lVar7 + puVar29[1];
    lVar9 = param_1[0xd];
    uVar10 = *puVar29;
    param_1[0xd] = lVar9 + *puVar29;
    if ((((((SCARRY8(lVar24,uVar1) || SCARRY4((int)lVar13,(int)uVar14)) || SCARRY8(lVar2,uVar3)) ||
          SCARRY8(lVar19,uVar4)) || SCARRY8(lVar5,uVar6)) || SCARRY8(lVar7,uVar8)) ||
       (SCARRY8(lVar9,uVar10))) {
LAB_00100fb3:
      uVar21 = 1;
      goto LAB_00100fb8;
    }
    *(undefined1 *)((long)param_1 + 0xa1) = 1;
LAB_001021a3:
    pcVar32 = "relative";
LAB_00102108:
    uVar21 = dcgettext("gnulib",pcVar32,5);
    lVar24 = (long)cVar15;
    if (*(char *)((long)param_1 + 0xe1) != '\0') {
      debug_print_relative_time_part_0(uVar21,param_1);
      lVar24 = (long)cVar15;
    }
    break;
  case 0x23:
    cVar15 = time_zone_hhmm_isra_0(param_1,(char)puVar29[-7],puVar29[-6],puVar29[-5],*puVar29);
    if ((cVar15 == '\0') ||
       (lVar2 = param_1[3], uVar1 = puVar29[-0xe], lVar19 = (long)(int)lVar2 + puVar29[-0xe],
       iVar34 = (int)lVar19, *(int *)(param_1 + 3) = iVar34, uVar48 = extraout_XMM0_Qa_00,
       uVar17 = extraout_XMM0_Qb_00, lVar19 != iVar34 || SCARRY8((long)(int)lVar2,uVar1)))
    goto LAB_00100fb3;
    break;
  case 0x24:
    *(int *)(param_1 + 3) = (int)*puVar29 + 0xe10;
    break;
  case 0x25:
    *(int *)(param_1 + 3) = (int)puVar29[-7] + 0xe10;
    break;
  case 0x26:
    uVar1 = *puVar29;
    param_1[1] = 0;
    *(int *)(param_1 + 2) = (int)uVar1;
    break;
  case 0x27:
    uVar1 = puVar29[-7];
    param_1[1] = 0;
    *(int *)(param_1 + 2) = (int)uVar1;
    break;
  case 0x28:
    uVar1 = puVar29[-7];
    *(undefined1 *)(param_1 + 0x1d) = 1;
    param_1[1] = uVar1;
    *(int *)(param_1 + 2) = (int)*puVar29;
    break;
  case 0x29:
    uVar1 = puVar29[-6];
    *(undefined1 *)(param_1 + 0x1d) = 1;
    param_1[1] = uVar1;
    *(int *)(param_1 + 2) = (int)*puVar29;
    break;
  case 0x2a:
    goto switchD_001010a6_caseD_2a;
  case 0x2b:
    uVar1 = puVar29[-0x1a];
    if ((long)uVar1 < 4) {
      uVar1 = puVar29[-0x1b];
      if (*(char *)((long)param_1 + 0xe1) != '\0') {
        uVar21 = dcgettext("gnulib",
                           "warning: value %ld has less than 4 digits. Assuming MM/DD/YY[YY]\n",5);
        dbg_printf(uVar21,uVar1);
      }
      goto LAB_001024e5;
    }
    if (*(char *)((long)param_1 + 0xe1) != '\0') {
      uVar3 = puVar29[-0x1b];
      uVar21 = dcgettext("gnulib","warning: value %ld has %ld digits. Assuming YYYY/MM/DD\n",5);
      dbg_printf(uVar21,uVar3,uVar1);
    }
    uVar1 = puVar29[-0x1c];
    uVar3 = puVar29[-0x1b];
    param_1[6] = puVar29[-0x1a];
    param_1[4] = uVar1;
    param_1[5] = uVar3;
    goto switchD_001010a6_caseD_2a;
  case 0x2c:
    uVar3 = puVar29[-0xd];
    uVar1 = puVar29[1];
    param_1[7] = puVar29[-7];
    param_1[8] = uVar3;
    param_1[5] = -uVar1;
    goto LAB_0010243c;
  case 0x2d:
    uVar1 = puVar29[-6];
    param_1[7] = puVar29[-0xe];
    param_1[8] = -uVar1;
    param_1[5] = -puVar29[1];
    goto LAB_0010243c;
  case 0x2e:
    uVar1 = puVar29[1];
    param_1[7] = puVar29[-7];
    param_1[8] = uVar1;
    break;
  case 0x2f:
    uVar1 = puVar29[-0x15];
    uVar4 = puVar29[1];
    uVar3 = puVar29[-0xd];
    param_1[4] = *puVar29;
    param_1[5] = uVar4;
    param_1[7] = uVar1;
    param_1[8] = uVar3;
    param_1[6] = puVar29[2];
    break;
  case 0x30:
    uVar1 = puVar29[-6];
    param_1[7] = *puVar29;
    param_1[8] = uVar1;
    break;
  case 0x31:
    uVar1 = puVar29[-7];
LAB_001024e5:
    uVar4 = *puVar29;
    uVar6 = puVar29[1];
    uVar3 = puVar29[-0xd];
    param_1[7] = uVar1;
    param_1[8] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar6;
LAB_0010243c:
    lVar24 = (long)cVar15;
    param_1[6] = puVar29[2];
    break;
  case 0x33:
    uVar3 = puVar29[-0xe];
    uVar4 = puVar29[-0xd];
    param_1[6] = puVar29[-0xc];
    uVar1 = puVar29[-6];
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    param_1[7] = -uVar1;
    param_1[8] = -puVar29[1];
    break;
  case 0x34:
    uVar1 = puVar29[-6];
    uVar3 = puVar29[-7];
    uVar4 = puVar29[-4];
    uVar6 = puVar29[-3];
    uVar8 = puVar29[-2];
    iVar34 = (int)puVar29[-1];
    iVar33 = (int)param_1[0x13];
    uVar10 = puVar29[-5];
    lVar2 = param_1[0x12];
    local_5b8 = param_1[0x11];
    local_5a8 = param_1[0x10];
    lVar19 = param_1[0xf];
    local_5d8 = param_1[0xe];
    lVar5 = param_1[0xd];
    if ((int)*puVar29 < 0) {
      bVar42 = SBORROW4(iVar33,iVar34);
      iVar34 = -iVar34;
      bVar43 = SBORROW8(lVar2,uVar8);
      uVar8 = -uVar8;
      bVar44 = SBORROW8(local_5b8,uVar6);
      uVar6 = -uVar6;
      bVar45 = SBORROW8(local_5a8,uVar4);
      uVar4 = -uVar4;
      bVar46 = SBORROW8(lVar19,uVar10);
      uVar10 = -uVar10;
      bVar47 = SBORROW8(local_5d8,uVar1);
      uVar1 = -uVar1;
      bVar41 = SBORROW8(lVar5,uVar3);
      uVar3 = -uVar3;
      bVar41 = (((((bVar43 || bVar42) || bVar44) || bVar45) || bVar46) || bVar47) || bVar41;
    }
    else {
      bVar41 = (((((SCARRY4(iVar34,iVar33) || SCARRY8(uVar8,lVar2)) || SCARRY8(uVar6,local_5b8)) ||
                 SCARRY8(uVar4,local_5a8)) || SCARRY8(uVar10,lVar19)) || SCARRY8(uVar1,local_5d8))
               || SCARRY8(uVar3,lVar5);
    }
    local_5a8 = uVar4 + local_5a8;
    local_5b8 = uVar6 + local_5b8;
    local_5d8 = uVar1 + local_5d8;
    param_1[0x12] = uVar8 + lVar2;
    param_1[0xf] = uVar10 + lVar19;
    param_1[0x11] = local_5b8;
    *(int *)(param_1 + 0x13) = iVar34 + iVar33;
    param_1[0xe] = local_5d8;
    param_1[0x10] = local_5a8;
    param_1[0xd] = uVar3 + lVar5;
    if (bVar41) goto LAB_00100fb3;
    goto LAB_00101765;
  case 0x35:
  case 0x36:
    lVar12 = param_1[0x13];
    uVar14 = puVar29[6];
    *(int *)(param_1 + 0x13) = (int)lVar12 + (int)puVar29[6];
    lVar2 = param_1[0x12];
    uVar1 = puVar29[5];
    param_1[0x12] = lVar2 + puVar29[5];
    lVar19 = param_1[0x11];
    uVar3 = puVar29[4];
    param_1[0x11] = lVar19 + puVar29[4];
    lVar5 = param_1[0x10];
    uVar4 = puVar29[3];
    param_1[0x10] = lVar5 + puVar29[3];
    lVar7 = param_1[0xf];
    uVar6 = puVar29[2];
    param_1[0xf] = lVar7 + puVar29[2];
    lVar9 = param_1[0xe];
    uVar8 = puVar29[1];
    param_1[0xe] = lVar9 + puVar29[1];
    lVar13 = param_1[0xd];
    uVar10 = *puVar29;
    param_1[0xd] = lVar13 + *puVar29;
    if ((((((SCARRY8(lVar2,uVar1) || SCARRY4((int)lVar12,(int)uVar14)) || SCARRY8(lVar19,uVar3)) ||
          SCARRY8(lVar5,uVar4)) || SCARRY8(lVar7,uVar6)) || SCARRY8(lVar9,uVar8)) ||
       (SCARRY8(lVar13,uVar10))) goto LAB_00100fb3;
LAB_00101765:
    *(undefined1 *)((long)param_1 + 0xa1) = 1;
    break;
  case 0x37:
    uVar39 = puVar29[-7];
    goto LAB_00101674;
  case 0x38:
  case 0x4c:
    uVar39 = puVar29[-6];
LAB_00101674:
    local_4e8._4_4_ = 0;
    uVar11 = 0;
    uVar26 = 0;
    local_628 = 0;
    local_618 = 0;
    local_630 = 0;
    local_5f8 = 0;
    break;
  case 0x39:
    local_4e8._4_4_ = 0;
    uVar26 = 0;
    uVar39 = 1;
    uVar11 = 0;
    local_628 = 0;
    local_618 = 0;
    local_630 = 0;
    local_5f8 = 0;
    break;
  case 0x3a:
    uVar26 = puVar29[-7];
    goto LAB_001015c2;
  case 0x3b:
  case 0x4d:
    uVar26 = puVar29[-6];
LAB_001015c2:
    local_4e8._4_4_ = 0;
    uVar11 = 0;
    uVar39 = 0;
    local_628 = 0;
    local_618 = 0;
    local_630 = 0;
    local_5f8 = 0;
    break;
  case 0x3c:
    local_4e8._4_4_ = 0;
    uVar26 = 1;
    uVar39 = 0;
    uVar11 = 0;
    local_628 = 0;
    local_618 = 0;
    local_630 = 0;
    local_5f8 = 0;
    break;
  case 0x3d:
    uVar39 = puVar29[-7];
    goto LAB_00101821;
  case 0x3e:
  case 0x4e:
    uVar39 = puVar29[-6];
LAB_00101821:
    local_4e8._4_4_ = 0;
    local_5f8 = uVar39 * *puVar29;
    bVar41 = SEXT816((long)local_5f8) != SEXT816((long)uVar39) * SEXT816((long)*puVar29);
    uVar39 = (ulong)bVar41;
    if (bVar41) goto LAB_00100fb3;
    local_628 = 0;
    uVar26 = 0;
    local_618 = 0;
    local_630 = 0;
    uVar11 = 0;
    break;
  case 0x3f:
  case 0x52:
    local_5f8 = *puVar29;
    uVar26 = 0;
    uVar39 = 0;
    local_4e8._4_4_ = 0;
    uVar11 = 0;
    local_628 = 0;
    local_618 = 0;
    local_630 = 0;
    break;
  case 0x40:
    local_630 = puVar29[-7];
    goto LAB_00101781;
  case 0x41:
  case 0x4f:
    local_630 = puVar29[-6];
LAB_00101781:
    local_4e8._4_4_ = 0;
    uVar26 = 0;
    uVar39 = 0;
    uVar11 = 0;
    local_628 = 0;
    local_618 = 0;
    local_5f8 = 0;
    break;
  case 0x42:
    uVar11 = 0;
    uVar26 = 0;
    uVar39 = 0;
    local_4e8._4_4_ = 0;
    local_628 = 0;
    local_618 = 0;
    local_630 = 1;
    local_5f8 = 0;
    break;
  case 0x43:
    local_618 = puVar29[-7];
    goto LAB_00101611;
  case 0x44:
  case 0x50:
    local_618 = puVar29[-6];
LAB_00101611:
    local_4e8._4_4_ = 0;
    uVar26 = 0;
    uVar39 = 0;
    uVar11 = 0;
    local_628 = 0;
    local_630 = 0;
    local_5f8 = 0;
    break;
  case 0x45:
    uVar11 = 0;
    uVar26 = 0;
    uVar39 = 0;
    local_4e8._4_4_ = 0;
    local_628 = 0;
    local_618 = 1;
    local_630 = 0;
    local_5f8 = 0;
    break;
  case 0x46:
    local_628 = puVar29[-7];
    uVar11 = 0;
    goto LAB_001010c4;
  case 0x47:
  case 0x51:
    local_628 = puVar29[-6];
    uVar11 = 0;
    goto LAB_001010c4;
  case 0x48:
  case 0x49:
    local_628 = puVar29[-7];
    uVar11 = (undefined4)puVar29[-6];
    goto LAB_001010c4;
  case 0x4a:
    uVar11 = 0;
    local_628 = 1;
LAB_001010c4:
    local_4e8._4_4_ = 0;
    local_618 = 0;
    uVar26 = 0;
    uVar39 = 0;
    local_630 = 0;
    local_5f8 = 0;
    break;
  case 0x56:
  case 0x58:
    uVar39 = puVar29[1];
    uVar26 = 0;
    break;
  case 0x59:
    digits_to_date_time(param_1);
    lVar24 = (long)cVar15;
    break;
  case 0x5a:
    digits_to_date_time(param_1);
    lVar13 = param_1[0x13];
    uVar14 = puVar29[6];
    *(int *)(param_1 + 0x13) = (int)lVar13 + (int)puVar29[6];
    lVar24 = param_1[0x12];
    uVar1 = puVar29[5];
    param_1[0x12] = lVar24 + puVar29[5];
    lVar2 = param_1[0x11];
    uVar3 = puVar29[4];
    param_1[0x11] = lVar2 + puVar29[4];
    lVar19 = param_1[0x10];
    uVar4 = puVar29[3];
    param_1[0x10] = lVar19 + puVar29[3];
    lVar5 = param_1[0xf];
    uVar6 = puVar29[2];
    param_1[0xf] = lVar5 + puVar29[2];
    lVar7 = param_1[0xe];
    uVar8 = puVar29[1];
    param_1[0xe] = lVar7 + puVar29[1];
    lVar9 = param_1[0xd];
    uVar10 = *puVar29;
    param_1[0xd] = lVar9 + *puVar29;
    if ((((((SCARRY8(lVar24,uVar1) || SCARRY4((int)lVar13,(int)uVar14)) || SCARRY8(lVar2,uVar3)) ||
          SCARRY8(lVar19,uVar4)) || SCARRY8(lVar5,uVar6)) || SCARRY8(lVar7,uVar8)) ||
       (SCARRY8(lVar9,uVar10))) goto LAB_00100fb3;
    *(undefined1 *)((long)param_1 + 0xa1) = 1;
    lVar24 = (long)cVar15;
    break;
  case 0x5b:
    uVar39 = 0xffffffffffffffff;
    break;
  case 0x5c:
    uVar39 = puVar29[1];
  }
switchD_001010a6_caseD_5:
  puVar28 = puVar29 + lVar24 * -7 + 7;
  pcVar25 = pcVar25 + -lVar24;
  puVar29[lVar24 * -7 + 7] = uVar39;
  puVar29[lVar24 * -7 + 8] = uVar26;
  cVar15 = *pcVar25;
  puVar29[lVar24 * -7 + 9] = local_5f8;
  puVar29[lVar24 * -7 + 10] = local_630;
  local_4e8 = CONCAT44(local_4e8._4_4_,uVar11);
  puVar29[lVar24 * -7 + 0xb] = local_618;
  puVar29[lVar24 * -7 + 0xc] = local_628;
  puVar29[lVar24 * -7 + 0xd] = local_4e8;
  uVar22 = (int)(char)yypgoto[(char)(&yyr1)[iVar35] + -0x1d] + (int)cVar15;
  if ((uVar22 < 0x73) && (cVar15 == yycheck[(int)uVar22])) {
    cVar15 = yytable[(int)uVar22];
    iVar34 = (int)cVar15;
  }
  else {
    cVar15 = yydefgoto[(char)(&yyr1)[iVar35] + -0x1d];
    iVar34 = (int)cVar15;
  }
LAB_001011d6:
  pcVar25[1] = cVar15;
  pcVar25 = pcVar25 + 1;
  if (local_65 <= pcVar25) {
    uVar21 = 2;
    goto LAB_00100fb8;
  }
  if (iVar34 == 0xc) {
    uVar21 = 0;
LAB_00100fb8:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar21;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  cVar15 = (&yypact)[iVar34];
  puVar29 = puVar28;
  goto LAB_00100ea0;
switchD_001010a6_caseD_2a:
  lVar24 = (long)cVar15;
  uVar1 = puVar29[1];
  param_1[7] = puVar29[-0xd];
  param_1[8] = uVar1;
  goto switchD_001010a6_caseD_5;
code_r0x001012ed:
  puVar28 = puVar29 + 7;
  local_584 = 3;
  *puVar28 = local_558;
  puVar29[8] = uVar48;
  puVar29[0xd] = local_528;
  puVar29[9] = uVar17;
  puVar29[10] = local_540;
  puVar29[0xb] = uStack_538;
  puVar29[0xc] = uStack_530;
  goto LAB_001011d6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
parse_datetime_body(time_t *param_1,char *param_2,long *param_3,byte param_4,long param_5,
                   char *param_6)

{
  char *pcVar1;
  char *pcVar2;
  time_t tVar3;
  time_t tVar4;
  FILE *pFVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  size_t sVar20;
  long lVar21;
  long lVar22;
  char *pcVar23;
  undefined8 uVar24;
  undefined *puVar25;
  tm *ptVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  undefined *puVar31;
  long lVar32;
  undefined4 uVar33;
  int iVar34;
  long lVar35;
  undefined8 uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  undefined4 uVar40;
  ulong uVar41;
  undefined *puVar42;
  char *pcVar43;
  size_t __size;
  undefined *puVar44;
  ulong uVar45;
  undefined *puVar46;
  undefined4 uVar47;
  undefined *puVar48;
  ulong uVar49;
  ulong uVar50;
  char *pcVar51;
  long in_FS_OFFSET;
  bool bVar52;
  char *local_498;
  char *local_490;
  char **local_488;
  long local_470;
  char *local_460;
  int local_444;
  long local_428 [2];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  int local_400;
  int local_3fc;
  int local_3f8;
  long local_3f0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  int local_3b8;
  int local_398;
  int local_394;
  int local_390;
  int local_38c;
  int local_388;
  int local_384;
  int local_378;
  char *local_368;
  tm local_358;
  undefined1 local_318 [32];
  int local_2f8;
  undefined4 local_2f0;
  char *local_2e8;
  char *local_2d8;
  undefined8 local_2d0;
  int local_2c8 [6];
  ulong local_2b0;
  long local_2a8;
  long local_2a0;
  long local_298;
  ulong local_290;
  long local_288;
  long local_280;
  time_t tStack_278;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  long local_250;
  long local_248;
  int local_240;
  undefined2 local_238;
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  long local_200;
  undefined1 local_1f8;
  byte local_1f7;
  undefined2 local_1f6;
  undefined4 local_1f4;
  undefined1 local_1f0;
  char *local_1e8;
  undefined4 local_1e0;
  int local_1dc;
  char *local_1d8;
  undefined1 local_1b5 [13];
  undefined1 local_1a8 [32];
  char local_188 [112];
  char local_118 [111];
  char cStack_a9;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5 [101];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar20 = strlen(param_2);
  if (param_3 == (long *)0x0) {
    param_3 = local_428;
    gettime(param_3);
  }
  lVar21 = param_3[1];
  lVar28 = *param_3;
  pcVar51 = param_2;
  do {
    cVar16 = *pcVar51;
    if (cVar16 < '\x0e') {
      if (cVar16 < '\t') goto LAB_00102e45;
    }
    else if (cVar16 != ' ') goto LAB_00102e45;
    pcVar51 = pcVar51 + 1;
  } while( true );
joined_r0x00103299:
  while (cVar16 != '\"') {
    pcVar51 = pcVar51 + (cVar16 == '\\');
    cVar16 = pcVar51[1];
    *pcVar23 = *pcVar51;
    pcVar51 = pcVar51 + 1;
    pcVar23 = pcVar23 + 1;
  }
  *pcVar23 = '\0';
  lVar22 = tzalloc(local_490);
  if (lVar22 == 0) {
LAB_00103650:
    uVar36 = 0;
    goto LAB_001031ee;
  }
  do {
    while( true ) {
      pcVar51 = pcVar51 + 1;
      cVar16 = *pcVar51;
      if ('\r' < cVar16) break;
      if (cVar16 < '\t') goto LAB_00103300;
    }
  } while (cVar16 == ' ');
LAB_00103300:
  lVar32 = localtime_rz(lVar22,param_3,&local_398);
  if (lVar32 != 0) goto LAB_00102ee2;
  goto LAB_0010331c;
LAB_00102e45:
  iVar17 = strncmp(pcVar51,"TZ=\"",4);
  if (iVar17 == 0) {
    cVar16 = pcVar51[4];
    pcVar43 = pcVar51 + 4;
    if (cVar16 == '\0') goto LAB_00103240;
    __size = 1;
    pcVar23 = pcVar43;
    cVar15 = cVar16;
    do {
      if (cVar15 == '\\') {
        pcVar1 = pcVar23 + 1;
        pcVar2 = pcVar23 + 1;
        pcVar23 = pcVar1;
        if ((*pcVar2 != '\\') && (*pcVar2 != '\"')) break;
      }
      else if (cVar15 == '\"') {
        pcVar23 = local_118;
        local_498 = (char *)0x0;
        pcVar51 = pcVar43;
        local_490 = pcVar23;
        if (((long)__size < 0x65) ||
           (pcVar23 = (char *)malloc(__size), local_490 = pcVar23, local_498 = pcVar23,
           pcVar23 != (char *)0x0)) goto joined_r0x00103299;
        goto LAB_0010325e;
      }
      cVar15 = pcVar23[1];
      __size = __size + 1;
      pcVar23 = pcVar23 + 1;
    } while (cVar15 != '\0');
    local_498 = (char *)localtime_rz(param_5,param_3,&local_398);
    if (local_498 == (char *)0x0) goto LAB_00103650;
  }
  else {
LAB_00103240:
    lVar22 = localtime_rz(param_5,param_3,&local_398);
    if (lVar22 == 0) {
LAB_0010325e:
      local_498 = (char *)0x0;
      uVar36 = 0;
      goto LAB_001031ee;
    }
  }
  local_498 = (char *)0x0;
  lVar22 = param_5;
  local_490 = param_6;
LAB_00102ee2:
  if (*pcVar51 == '\0') {
    pcVar51 = "0";
  }
  local_3f8 = local_378;
  local_2b0 = (long)local_384 + 0x76c;
  local_488._0_4_ = (int)lVar21;
  tStack_278 = (time_t)(int)local_488;
  local_1f7 = param_4 & 1;
  local_2a8 = 0;
  local_2a0 = (long)(local_388 + 1);
  local_298 = (long)local_38c;
  local_2c8[3] = 2;
  local_290 = (ulong)local_390;
  local_270 = 0;
  local_288 = (long)local_394;
  local_268 = 0;
  local_280 = (long)local_398;
  local_260 = 0;
  local_238 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_230 = (undefined1  [16])0x0;
  local_220 = (undefined1  [16])0x0;
  local_1f6 = 0;
  local_1dc = local_378;
  local_200 = 0;
  local_1e8 = local_368;
  if (*local_368 == '\0') {
    local_1e8 = (char *)0x0;
  }
  local_1f8 = 0;
  local_1f4 = 0;
  local_358._0_8_ = lVar28 + 0x76a700;
  local_1f0 = 0;
  local_1e0 = 0x10d;
  local_1d8 = (char *)0x0;
  local_210 = (undefined1  [16])0x0;
  local_2d8 = pcVar51;
  if (!SCARRY8(lVar28,0x76a700)) {
    iVar17 = 0xed4e00;
    do {
      lVar21 = localtime_rz(lVar22,&local_358,local_318);
      if ((lVar21 != 0) && ((local_1e8 == (char *)0x0 || (local_2f8 != local_1dc)))) {
        bVar52 = local_1e8 != (char *)0x0;
        lVar21 = (ulong)bVar52 + 0xf;
        *(int *)((long)&local_2d0 + lVar21 * 0x10 + 4) = local_2f8;
        cVar16 = *local_2e8;
        *(undefined4 *)(&local_2d0 + lVar21 * 2) = 0x10d;
        pcVar51 = local_2e8;
        if (cVar16 == '\0') {
          pcVar51 = (char *)0x0;
        }
        (&local_2d8)[lVar21 * 2] = pcVar51;
        (local_2c8 + (long)(int)(bVar52 + 0xf) * 4)[0] = 0;
        (local_2c8 + (long)(int)(bVar52 + 0xf) * 4)[1] = 0;
        if (local_1d8 != (char *)0x0) {
          iVar17 = strcmp(local_1e8,local_1d8);
          if (iVar17 == 0) {
            local_1dc = -1;
            local_1d8 = (char *)0x0;
          }
          break;
        }
      }
      if (iVar17 == 0x1da9c00) break;
      lVar21 = (long)iVar17;
      local_358._0_8_ = lVar21 + lVar28;
      iVar17 = iVar17 + 0x76a700;
    } while (!SCARRY8(lVar21,lVar28));
  }
  local_488 = &local_2d8;
  iVar17 = yyparse(local_488);
  bVar14 = local_1f7;
  pcVar51 = local_2d8;
  if (iVar17 == 0) {
    cVar16 = (char)local_238;
    if (local_1f7 == 0) {
      if ((char)local_238 == '\0') {
        uVar41 = local_210._8_8_;
        uVar39 = local_230._8_8_;
        uVar50 = local_230._0_8_;
        lVar21 = local_220._8_8_;
        if (1 < (local_230._0_8_ | local_210._8_8_ | local_230._8_8_ | local_210._0_8_ |
                local_220._0_8_ + local_220._8_8_ + local_200)) goto LAB_0010331c;
LAB_0010373c:
        lVar28 = local_200;
        uVar45 = local_2b0;
        iVar17 = (int)local_298;
        if ((long)local_2b0 < 0) {
          bVar52 = SBORROW8(-0x76c,local_2b0);
          uVar45 = -local_2b0;
LAB_00103768:
          iVar18 = (int)(uVar45 - 0x76c);
          local_408 = CONCAT44(iVar18,(int)local_408);
          if (uVar45 - 0x76c != (long)iVar18) {
            bVar52 = true;
          }
          if (bVar52) {
            uVar49 = local_2b0;
            if (bVar14 != 0) {
LAB_00103f87:
              uVar36 = dcgettext("gnulib","error: out-of-range year %ld\n",5);
              dbg_printf(uVar36,uVar49);
LAB_00103efc:
              pcVar51 = "error: year, month, or day overflow\n";
LAB_00103f08:
              pcVar51 = (char *)dcgettext("gnulib",pcVar51,5);
              fwrite("date: ",1,6,_stderr);
              uVar36 = 0;
              fputs(pcVar51,_stderr);
              goto LAB_001031df;
            }
          }
          else {
            iVar19 = (int)(local_2a0 + -1);
            local_408 = CONCAT44(iVar18,iVar19);
            if ((local_2a0 + -1 == (long)iVar19 && !SCARRY8(local_2a0,-1)) &&
               (uStack_410 = CONCAT44(iVar17,(int)uStack_410), local_298 == iVar17))
            goto LAB_001037d4;
            if (bVar14 != 0) goto LAB_00103efc;
          }
        }
        else {
          if (local_2a8 != 2) {
            bVar52 = SBORROW8(local_2b0,0x76c);
            goto LAB_00103768;
          }
          lVar32 = 0x76c;
          if ((long)local_2b0 < 0x45) {
            lVar32 = 2000;
          }
          uVar49 = lVar32 + local_2b0;
          if (bVar14 != 0) {
            uVar36 = dcgettext("gnulib","warning: adjusting year value %ld to %ld\n",5);
            dbg_printf(uVar36,uVar45,uVar49);
            bVar52 = false;
            lVar32 = uVar49 - 0x76c;
            if (uVar49 < 0x76c) {
              bVar52 = false;
              if (-1 < lVar32) {
LAB_00104d6e:
                bVar52 = true;
              }
            }
            else if (lVar32 < 0) goto LAB_00104d6e;
            iVar17 = (int)lVar32;
            local_408 = CONCAT44(iVar17,(int)local_408);
            if (lVar32 != iVar17) {
              bVar52 = true;
            }
            if (!bVar52) {
              iVar18 = (int)(local_2a0 + -1);
              local_408 = CONCAT44(iVar17,iVar18);
              if (local_2a0 + -1 == (long)iVar18 && !SCARRY8(local_2a0,-1)) {
                uStack_410 = CONCAT44((int)local_298,(int)uStack_410);
                if (local_298 == (int)local_298) goto LAB_001037d4;
              }
              goto LAB_00103efc;
            }
            goto LAB_00103f87;
          }
          bVar52 = false;
          lVar32 = uVar49 - 0x76c;
          if (uVar49 < 0x76c) {
            bVar52 = false;
            if (-1 < lVar32) {
LAB_001048f9:
              bVar52 = true;
            }
          }
          else if (lVar32 < 0) goto LAB_001048f9;
          iVar18 = (int)lVar32;
          local_408 = CONCAT44(iVar18,(int)local_408);
          if (lVar32 != iVar18) {
            bVar52 = true;
          }
          if ((bVar52) ||
             (iVar19 = (int)(local_2a0 + -1), local_408 = CONCAT44(iVar18,iVar19),
             local_2a0 + -1 != (long)iVar19 || SCARRY8(local_2a0,-1))) goto LAB_0010331c;
          uStack_410 = CONCAT44(iVar17,(int)uStack_410);
          if (local_298 != iVar17) {
            uVar36 = 0;
            goto LAB_001031df;
          }
LAB_001037d4:
          uVar45 = local_290;
          if ((uVar41 != 0) || ((uVar50 == 0 && uVar39 == 0 && (local_238._1_1_ != '\0')))) {
            uVar49 = (ulong)(uint)local_2c8[3];
            if (local_2c8[3] == 0) {
              if (local_290 - 1 < 0xb) {
LAB_00104391:
                uVar49 = local_290 & 0xffffffff;
LAB_00104394:
                uVar47 = (undefined4)uVar49;
                uStack_410 = CONCAT44(uStack_410._4_4_,uVar47);
                uVar33 = (undefined4)local_288;
                uVar40 = (undefined4)local_280;
                local_418 = CONCAT44(uVar33,uVar40);
                if (bVar14 == 0) goto LAB_00103826;
                pcVar51 = local_188;
                __snprintf_chk(pcVar51,100,2,100,"%02d:%02d:%02d",uVar49,local_288,local_280);
                if (uVar41 == 0) {
                  uVar36 = dcgettext("gnulib","using current time as starting value: \'%s\'\n",5);
                  goto LAB_00104daf;
                }
                uVar36 = dcgettext("gnulib","using specified time as starting value: \'%s\'\n",5);
                dbg_printf(uVar36,pcVar51);
                uVar33 = (undefined4)((ulong)local_418 >> 0x20);
                uVar47 = (undefined4)uStack_410;
                uVar40 = (int)local_418;
                goto LAB_00104460;
              }
              if (local_290 == 0xc) goto LAB_00104394;
              puVar42 = &_LC53;
            }
            else if (local_2c8[3] == 1) {
              uVar49 = (ulong)((int)local_290 + 0xc);
              if ((local_290 - 1 < 0xb) || (uVar49 = 0xc, local_290 == 0xc)) goto LAB_00104394;
              puVar42 = &_LC19;
            }
            else {
              if (local_290 < 0x18) goto LAB_00104391;
              puVar42 = &_LC11;
            }
            uStack_410 = CONCAT44(uStack_410._4_4_,0xffffffff);
            if (bVar14 == 0) goto LAB_0010331c;
            uVar24 = dcgettext("gnulib","error: invalid hour %ld%s\n",5);
            uVar36 = 0;
            dbg_printf(uVar24,uVar45,puVar42);
            goto LAB_001031df;
          }
          local_418 = 0;
          uStack_410 = (ulong)uStack_410._4_4_ << 0x20;
          tStack_278 = 0;
          if (bVar14 == 0) {
            uVar47 = 0;
            uVar33 = 0;
            uVar40 = 0;
          }
          else {
            uVar36 = dcgettext("gnulib","warning: using midnight as starting time: %s\n",5);
            pcVar51 = "00:00:00";
LAB_00104daf:
            dbg_printf(uVar36,pcVar51);
            uVar33 = (undefined4)((ulong)local_418 >> 0x20);
            uVar47 = (undefined4)uStack_410;
            uVar40 = (int)local_418;
          }
LAB_00103826:
          if ((uVar41 != 0 || uVar50 != 0) || uVar39 != 0) {
LAB_00104460:
            local_3f8 = -1;
          }
          if (lVar21 != 0) {
            local_3f8 = local_2c8[1];
          }
          local_3d8 = CONCAT44(uVar33,uVar40);
          uStack_3d0 = CONCAT44(uStack_410._4_4_,uVar47);
          local_3c8 = local_408;
          local_400 = -1;
          local_3b8 = local_3f8;
          local_470 = mktime_z(lVar22,&local_418);
          cVar16 = mktime_ok(&local_3d8,&local_418);
          if (cVar16 == '\0') {
            if (lVar28 != 0) {
              local_a8 = 0x5858;
              local_a6 = 0x58;
              time_zone_str(local_2c8[2],local_a5);
              lVar21 = tzalloc(&local_a8);
              if (lVar21 == 0) {
                pcVar43 = "error: tzalloc (\"%s\") failed\n";
                pcVar51 = (char *)&local_a8;
                if (bVar14 != 0) goto LAB_001036c3;
                uVar36 = 0;
                goto LAB_001031df;
              }
              local_400 = -1;
              local_408 = local_3c8;
              local_418 = local_3d8;
              uStack_410 = uStack_3d0;
              local_3f8 = local_3b8;
              local_470 = mktime_z(lVar21,&local_418);
              cVar16 = mktime_ok(&local_3d8,&local_418);
              tzfree(lVar21);
              if (cVar16 != '\0') goto LAB_001041ad;
            }
            iVar10 = (int)uStack_3d0;
            iVar8 = (int)local_3d8;
            iVar17 = (int)local_418;
            iVar9 = local_3d8._4_4_;
            iVar19 = (int)uStack_410;
            iVar18 = local_418._4_4_;
            iVar11 = uStack_3d0._4_4_;
            iVar34 = uStack_410._4_4_;
            iVar12 = (int)local_3c8;
            iVar6 = (int)local_408;
            iVar13 = local_3c8._4_4_;
            iVar7 = local_408._4_4_;
            if (((int)local_3d8 == (int)local_418) && (local_3d8._4_4_ == local_418._4_4_)) {
              if ((uStack_3d0._4_4_ == uStack_410._4_4_) && ((int)uStack_3d0 != (int)uStack_410)) {
                bVar52 = local_3c8._4_4_ == local_408._4_4_ && (int)local_3c8 == (int)local_408;
              }
              else {
                bVar52 = false;
              }
              if (bVar14 != 0) {
                pcVar51 = (char *)dcgettext("gnulib","error: invalid date/time value:\n",5);
                fwrite("date: ",1,6,_stderr);
                fputs(pcVar51,_stderr);
                uVar36 = debug_strfdatetime_constprop_0(&local_3d8,local_488,&local_a8);
                uVar24 = dcgettext("gnulib","    user provided time: \'%s\'\n",5);
                dbg_printf(uVar24,uVar36);
                uVar36 = debug_strfdatetime_constprop_0(&local_418,local_488,&local_a8);
                uVar24 = dcgettext("gnulib","       normalized time: \'%s\'\n",5);
                dbg_printf(uVar24,uVar36);
                puVar31 = &_LC11;
                puVar42 = &_LC11;
LAB_00103a7e:
                puVar25 = &_LC54;
                puVar46 = &_LC11;
                puVar44 = &_LC11;
                if (iVar10 != iVar19) {
                  puVar46 = &_LC54;
                }
                puVar48 = &_LC55;
                if (iVar11 != iVar34) {
                  puVar44 = &_LC54;
                }
                if (iVar12 == iVar6) {
                  puVar25 = &_LC11;
                }
                if (iVar13 == iVar7) {
                  puVar48 = &_LC11;
                }
                __snprintf_chk(&local_a8,100,2,100,
                               "                                 %4s %2s %2s %2s %2s %2s",puVar48,
                               puVar25,puVar44,puVar46,puVar42,puVar31,iVar7);
                lVar21 = 0x34;
                do {
                  lVar32 = lVar21;
                  iVar17 = 0;
                  if (lVar32 == 0) goto LAB_00103b1b;
                  lVar21 = lVar32 + -1;
                } while ((&cStack_a9)[lVar32] == ' ');
                iVar17 = (int)lVar32;
LAB_00103b1b:
                *(undefined1 *)((long)&local_a8 + (long)iVar17) = 0;
                dbg_printf(&_LC89,&local_a8);
                pcVar51 = (char *)dcgettext("gnulib","     possible reasons:\n",5);
                fwrite("date: ",1,6,_stderr);
                fputs(pcVar51,_stderr);
                if (bVar52) {
                  pcVar51 = (char *)dcgettext("gnulib",
                                              "       nonexistent due to daylight-saving time;\n",5)
                  ;
                  fwrite("date: ",1,6,_stderr);
                  fputs(pcVar51,_stderr);
                }
                if ((iVar11 != iVar34) && (iVar12 != iVar6)) {
                  pcVar51 = (char *)dcgettext("gnulib","       invalid day/month combination;\n",5);
                  fwrite("date: ",1,6,_stderr);
                  fputs(pcVar51,_stderr);
                }
                pcVar51 = (char *)dcgettext("gnulib","       numeric values overflow;\n",5);
                fwrite("date: ",1,6,_stderr);
                fputs(pcVar51,_stderr);
                if (lVar28 == 0) {
                  uVar24 = dcgettext("gnulib","missing timezone",5);
                }
                else {
                  uVar24 = dcgettext("gnulib","incorrect timezone",5);
                }
                uVar36 = 0;
                dbg_printf("       %s\n",uVar24);
                goto LAB_001031df;
              }
            }
            else if (bVar14 != 0) {
              pcVar51 = (char *)dcgettext("gnulib","error: invalid date/time value:\n",5);
              fwrite("date: ",1,6,_stderr);
              fputs(pcVar51,_stderr);
              uVar36 = debug_strfdatetime_constprop_0(&local_3d8,local_488,&local_a8);
              uVar24 = dcgettext("gnulib","    user provided time: \'%s\'\n",5);
              dbg_printf(uVar24,uVar36);
              uVar36 = debug_strfdatetime_constprop_0(&local_418,local_488,&local_a8);
              uVar24 = dcgettext("gnulib","       normalized time: \'%s\'\n",5);
              dbg_printf(uVar24,uVar36);
              if (iVar8 == iVar17) {
                bVar52 = false;
                puVar31 = &_LC11;
                puVar42 = &_LC54;
              }
              else {
                puVar31 = &_LC54;
                bVar52 = false;
                puVar42 = &_LC11;
                if (iVar9 != iVar18) {
                  puVar42 = puVar31;
                }
              }
              goto LAB_00103a7e;
            }
            goto LAB_0010331c;
          }
LAB_001041ad:
          iVar17 = uStack_410._4_4_;
          if (uVar39 == 0) {
            if (bVar14 == 0) goto LAB_001045b0;
            if (uVar50 == 0) {
              iVar18 = (int)local_408 + 1;
              iVar19 = local_408._4_4_ / 100 + 0x13;
              iVar34 = (int)((long)local_408._4_4_ % 100);
              uVar41 = (ulong)(uint)-iVar34;
              if (0 < iVar34) {
                uVar41 = (long)local_408._4_4_ % 100 & 0xffffffff;
              }
              iVar34 = -iVar19;
              if (0 < iVar19) {
                iVar34 = iVar19;
              }
              __sprintf_chk(&local_a8,2,0xd,"-%02d%02d" + (-0x76d < local_408._4_4_),iVar34,uVar41);
              __snprintf_chk(local_188,100,2,100,"(Y-M-D) %s-%02d-%02d",&local_a8,iVar18,iVar17);
              uVar36 = dcgettext("gnulib","using current date as starting value: \'%s\'\n",5);
              dbg_printf(uVar36,local_188);
            }
LAB_00104212:
            local_460 = local_188;
            uVar36 = debug_strfdatetime_constprop_0(&local_418,local_488,local_460);
            uVar24 = dcgettext("gnulib","starting date/time: \'%s\'\n",5);
            dbg_printf(uVar24,uVar36);
            lVar29 = local_260;
            lVar32 = local_268;
            lVar21 = local_270;
            if (local_260 == 0 && (local_268 == 0 && local_270 == 0)) {
              if (lVar28 != 0) goto LAB_00104a0c;
LAB_00104a40:
              if (bVar14 != 0) goto LAB_00104a5d;
              goto LAB_00104717;
            }
            if ((local_268 != 0 || local_270 != 0) && (uStack_410._4_4_ != 0xf)) {
              uVar36 = dcgettext("gnulib",
                                 "warning: when adding relative months/years, it is recommended to specify the 15th of the months\n"
                                 ,5);
              dbg_fputs(uVar36);
            }
            if ((lVar29 != 0) && ((int)uStack_410 != 0xc)) {
              uVar36 = dcgettext("gnulib",
                                 "warning: when adding relative days, it is recommended to specify noon\n"
                                 ,5);
              dbg_fputs(uVar36);
            }
            lVar35 = local_408._4_4_ + lVar21;
            iVar17 = (int)lVar35;
            if ((lVar35 != iVar17) || (SCARRY8((long)local_408._4_4_,lVar21))) {
LAB_00104333:
              uVar36 = 0;
              uVar24 = dcgettext("gnulib","error: %s:%d\n",5);
              dbg_printf(uVar24,"parse-datetime.y",0x86e);
              goto LAB_001031df;
            }
            lVar35 = (int)local_408 + lVar32;
            iVar18 = (int)lVar35;
            if ((lVar35 != iVar18) || (SCARRY8((long)(int)local_408,lVar32))) goto LAB_00104333;
            lVar35 = (int)uStack_410._4_4_ + lVar29;
            local_444 = (int)lVar35;
            if ((lVar35 != local_444) || (SCARRY8((long)(int)uStack_410._4_4_,lVar29))) {
              if (bVar14 == 0) goto LAB_0010331c;
              goto LAB_00104333;
            }
LAB_00104650:
            local_400 = -1;
            uStack_410 = CONCAT44(local_444,(int)uStack_3d0);
            local_408 = CONCAT44(iVar17,iVar18);
            local_418 = local_3d8;
            local_3f8 = local_3b8;
            local_470 = mktime_z(lVar22,&local_418);
            if (local_400 < 0) {
              if (bVar14 != 0) {
                pcVar51 = (char *)debug_strfdatetime_constprop_0(&local_418,local_488,local_188);
                pcVar43 = "error: adding relative date resulted in an invalid date: \'%s\'\n";
                goto LAB_001036c3;
              }
            }
            else {
              if (bVar14 != 0) {
                uVar36 = dcgettext("gnulib",
                                   "after date adjustment (%+ld years, %+ld months, %+ld days),\n",5
                                  );
                dbg_printf(uVar36,lVar21,lVar32,lVar29);
                uVar36 = debug_strfdatetime_constprop_0(&local_418,local_488,local_188);
                uVar24 = dcgettext("gnulib","    new date/time = \'%s\'\n",5);
                dbg_printf(uVar24,uVar36);
                if ((local_3b8 != -1) && (local_3b8 != local_3f8)) {
                  uVar36 = dcgettext("gnulib",
                                     "warning: daylight saving time changed after date adjustment\n"
                                     ,5);
                  dbg_fputs(uVar36);
                }
                if (lVar29 == 0) {
                  if ((uStack_410._4_4_ != local_444) ||
                     ((lVar32 == 0 && ((int)local_408 != iVar18)))) {
                    uVar36 = dcgettext("gnulib",
                                       "warning: month/year adjustment resulted in shifted dates:\n"
                                       ,5);
                    dbg_fputs(uVar36);
                    uVar36 = tm_year_str(iVar17,local_1b5);
                    uVar24 = dcgettext("gnulib","     adjusted Y M D: %s %02d %02d\n",5);
                    dbg_printf(uVar24,uVar36,iVar18 + 1,local_444);
                    uVar33 = uStack_410._4_4_;
                    iVar17 = (int)local_408 + 1;
                    uVar36 = tm_year_str(local_408._4_4_,local_1b5);
                    uVar24 = dcgettext("gnulib","   normalized Y M D: %s %02d %02d\n",5);
                    dbg_printf(uVar24,uVar36,iVar17,uVar33);
                  }
                  if ((lVar28 != 0) &&
                     (lVar21 = local_2c8[2] - local_3f0, bVar52 = SBORROW8(local_470,lVar21),
                     local_470 = local_470 - lVar21, iVar17 = local_2c8[2],
                     bVar52 || SBORROW8((long)local_2c8[2],local_3f0))) {
LAB_00104deb:
                    uVar24 = dcgettext("gnulib","error: timezone %d caused time_t overflow\n",5);
                    uVar36 = 0;
                    dbg_printf(uVar24,iVar17);
                    goto LAB_001031df;
                  }
                }
                else if ((lVar28 != 0) &&
                        (lVar21 = local_2c8[2] - local_3f0, bVar52 = SBORROW8(local_470,lVar21),
                        local_470 = local_470 - lVar21, iVar17 = local_2c8[2],
                        SBORROW8((long)local_2c8[2],local_3f0) || bVar52)) goto LAB_00104deb;
LAB_00104a5d:
                local_460 = local_188;
                uVar36 = debug_strfdatetime_constprop_0(&local_418,local_488,local_460);
                uVar24 = dcgettext("gnulib","\'%s\' = %ld epoch-seconds\n",5);
                dbg_printf(uVar24,uVar36,local_470);
                lVar21 = local_258 * 0xe10;
                if ((SEXT816(lVar21) == SEXT816(local_258) * SEXT416(0xe10)) &&
                   (lVar28 = lVar21 + local_470, !SCARRY8(lVar21,local_470))) {
                  lVar21 = (long)local_240;
                  uVar41 = ((tStack_278 + lVar21) % 1000000000 + 1000000000) % 1000000000;
                  iVar17 = (int)((long)((tStack_278 + lVar21) - uVar41) / 1000000000);
                  goto LAB_001047c4;
                }
LAB_001049ef:
                pcVar51 = "error: adding relative time caused an overflow\n";
                goto LAB_00103f08;
              }
              if ((lVar28 == 0) ||
                 (lVar21 = local_2c8[2] - local_3f0, bVar52 = SBORROW8(local_470,lVar21),
                 local_470 = local_470 - lVar21, !SBORROW8((long)local_2c8[2],local_3f0) && !bVar52)
                 ) goto LAB_00104717;
            }
          }
          else {
            if (uVar50 == 0) {
              local_3fc = -1;
              lVar21 = local_2d0;
              if (0 < local_2d0) {
                lVar21 = local_2d0 - (ulong)(local_400 != local_2c8[0]);
              }
              lVar32 = lVar21 * 7;
              if ((SEXT816(lVar32) == SEXT816(lVar21) * SEXT816(7)) &&
                 (lVar21 = (long)(((local_2c8[0] - local_400) + 7) % 7), lVar29 = lVar21 + lVar32,
                 !SCARRY8(lVar21,lVar32))) {
                lVar32 = (long)(int)uStack_410._4_4_;
                lVar21 = lVar29 + lVar32;
                iVar17 = (int)lVar21;
                uStack_410 = CONCAT44(iVar17,(int)uStack_410);
                if (lVar21 == iVar17 && !SCARRY8(lVar29,lVar32)) {
                  local_3f8 = -1;
                  local_470 = mktime_z(lVar22,&local_418);
                  if (-1 < local_3fc) {
                    if (bVar14 != 0) {
                      uVar36 = debug_strfdatetime_constprop_0(&local_418,local_488,local_188);
                      uVar24 = str_days_constprop_0(local_488,&local_a8);
                      uVar27 = dcgettext("gnulib","new start date: \'%s\' is \'%s\'\n",5);
                      dbg_printf(uVar27,uVar24,uVar36);
                      goto LAB_00104212;
                    }
                    goto LAB_001045b0;
                  }
                }
              }
              if (bVar14 == 0) goto LAB_0010331c;
              uVar24 = debug_strfdatetime_constprop_0(&local_418,local_488,local_188);
              uVar27 = str_days_constprop_0(local_488,&local_a8);
              uVar30 = dcgettext("gnulib",
                                 "error: day \'%s\' (day ordinal=%ld number=%d) resulted in an invalid date: \'%s\'\n"
                                 ,5);
              uVar36 = 0;
              dbg_printf(uVar30,uVar27,local_2d0,local_2c8[0],uVar24);
              goto LAB_001031df;
            }
            if (bVar14 != 0) {
              uVar36 = str_days_constprop_0(local_488,&local_a8);
              uVar24 = dcgettext("gnulib",
                                 "warning: day (%s) ignored when explicit dates are given\n",5);
              dbg_printf(uVar24,uVar36);
              goto LAB_00104212;
            }
LAB_001045b0:
            if ((local_270 == 0 && local_268 == 0) && local_260 == 0) {
              if (lVar28 == 0) {
LAB_00104717:
                lVar21 = local_258 * 0xe10;
                if ((SEXT816(lVar21) == SEXT816(local_258) * SEXT416(0xe10)) &&
                   (lVar28 = lVar21 + local_470, !SCARRY8(lVar21,local_470))) {
                  lVar21 = (long)local_240;
                  uVar41 = ((tStack_278 + lVar21) % 1000000000 + 1000000000U) % 1000000000;
                  iVar17 = (int)((long)((tStack_278 + lVar21) - uVar41) / 1000000000);
LAB_001047c4:
                  iVar18 = local_240;
                  lVar35 = local_248;
                  lVar29 = local_250;
                  lVar32 = local_258;
                  lVar37 = local_250 * 0x3c;
                  if ((((SEXT816(lVar37) == SEXT816(local_250) * SEXT816(0x3c)) &&
                       (!SCARRY8(lVar37,lVar28))) &&
                      (lVar38 = lVar37 + lVar28 + local_248, !SCARRY8(lVar37 + lVar28,local_248)))
                     && (lVar28 = lVar38 + iVar17, !SCARRY8(lVar38,(long)iVar17))) {
                    *param_1 = lVar28;
                    param_1[1] = uVar41;
                    if (bVar14 != 0) {
                      if (((local_250 != 0 || local_248 != 0) || lVar21 != 0) || local_258 != 0) {
                        uVar36 = dcgettext("gnulib",
                                           "after time adjustment (%+ld hours, %+ld minutes, %+ld seconds, %+d ns),\n"
                                           ,5);
                        dbg_printf(uVar36,lVar32,lVar29,lVar35,iVar18);
                        uVar36 = dcgettext("gnulib","    new time = %ld epoch-seconds\n",5);
                        dbg_printf(uVar36,lVar28);
                        if (((local_3f8 != -1) &&
                            (lVar21 = localtime_rz(lVar22,param_1,local_318), lVar21 != 0)) &&
                           (local_3f8 != local_2f8)) {
                          uVar36 = dcgettext("gnulib",
                                             "warning: daylight saving time changed after time adjustment\n"
                                             ,5);
                          dbg_fputs(uVar36);
                        }
                      }
                      goto LAB_00103d04;
                    }
                    goto LAB_001031da;
                  }
                  if (bVar14 != 0) goto LAB_001049ef;
                }
              }
              else {
LAB_00104a0c:
                lVar21 = local_2c8[2] - local_3f0;
                bVar52 = SBORROW8(local_470,lVar21);
                local_470 = local_470 - lVar21;
                if (!SBORROW8((long)local_2c8[2],local_3f0) && !bVar52) goto LAB_00104a40;
                iVar17 = local_2c8[2];
                if (bVar14 != 0) goto LAB_00104deb;
              }
            }
            else {
              lVar21 = local_408._4_4_ + local_270;
              iVar17 = (int)lVar21;
              if ((lVar21 == iVar17) && (!SCARRY8((long)local_408._4_4_,local_270))) {
                lVar21 = (int)local_408 + local_268;
                iVar18 = (int)lVar21;
                if ((lVar21 == iVar18) && (!SCARRY8((long)(int)local_408,local_268))) {
                  lVar21 = (int)uStack_410._4_4_ + local_260;
                  local_444 = (int)lVar21;
                  if ((lVar21 == local_444) &&
                     (lVar32 = local_268, lVar29 = local_260, lVar21 = local_270,
                     !SCARRY8((long)(int)uStack_410._4_4_,local_260))) goto LAB_00104650;
                }
              }
            }
          }
        }
LAB_0010331c:
        uVar36 = 0;
        goto LAB_001031df;
      }
      *param_1 = local_280;
      param_1[1] = tStack_278;
    }
    else {
      pcVar51 = (char *)dcgettext("gnulib","input timezone: ",5);
      fwrite("date: ",1,6,_stderr);
      fputs(pcVar51,_stderr);
      lVar21 = local_200;
      pFVar5 = _stderr;
      if (cVar16 == '\0') {
        if (local_200 != 0) {
          pcVar51 = (char *)dcgettext("gnulib","parsed date/time string",5);
          fputs(pcVar51,pFVar5);
          goto LAB_00103ca0;
        }
        if (local_490 == (char *)0x0) {
          pcVar51 = "system default";
LAB_00104004:
          pFVar5 = _stderr;
          pcVar51 = (char *)dcgettext("gnulib",pcVar51,5);
          fputs(pcVar51,pFVar5);
        }
        else if (param_5 == lVar22) {
          iVar17 = strcmp(local_490,"UTC0");
          if (iVar17 == 0) {
            pcVar51 = "TZ=\"UTC0\" environment value or -u";
            goto LAB_00104004;
          }
          uVar36 = dcgettext("gnulib","TZ=\"%s\" environment value",5);
          __fprintf_chk(_stderr,2,uVar36,local_490);
        }
        else {
          uVar36 = dcgettext("gnulib","TZ=\"%s\" in date string",5);
          __fprintf_chk(_stderr,2,uVar36,local_490);
        }
        if ((local_220._8_8_ != 0) && (0 < local_2c8[1])) {
LAB_0010401c:
          fwrite(", dst",1,5,_stderr);
          goto LAB_00103cd1;
        }
        fputc(10,_stderr);
LAB_00103405:
        uVar36 = local_230._0_8_;
        uVar24 = local_230._8_8_;
        uVar45 = local_220._0_8_ + local_220._8_8_ + local_200;
        uVar27 = local_210._0_8_;
        uVar41 = local_210._8_8_;
        uVar39 = local_230._8_8_;
        uVar50 = local_230._0_8_;
        lVar21 = local_220._8_8_;
        if ((long)(local_210._8_8_ | local_230._0_8_ | local_230._8_8_ | local_210._0_8_ | uVar45) <
            2) goto LAB_0010373c;
        if (1 < (long)local_210._8_8_) {
          pcVar51 = (char *)dcgettext("gnulib","error: seen multiple time parts\n",5);
          fwrite("date: ",1,6,_stderr);
          fputs(pcVar51,_stderr);
        }
        if (1 < (long)uVar36) {
          pcVar51 = (char *)dcgettext("gnulib","error: seen multiple date parts\n",5);
          fwrite("date: ",1,6,_stderr);
          fputs(pcVar51,_stderr);
        }
        if (1 < (long)uVar24) {
          pcVar51 = (char *)dcgettext("gnulib","error: seen multiple days parts\n",5);
          fwrite("date: ",1,6,_stderr);
          fputs(pcVar51,_stderr);
        }
        if (1 < (long)uVar27) {
          pcVar51 = (char *)dcgettext("gnulib","error: seen multiple daylight-saving parts\n",5);
          fwrite("date: ",1,6,_stderr);
          fputs(pcVar51,_stderr);
        }
        if ((long)uVar45 < 2) goto LAB_0010331c;
        pcVar51 = (char *)dcgettext("gnulib","error: seen multiple time-zone parts\n",5);
        fwrite("date: ",1,6,_stderr);
        uVar36 = 0;
        fputs(pcVar51,_stderr);
        goto LAB_001031df;
      }
      pcVar51 = (char *)dcgettext("gnulib","\'@timespec\' - always UTC",5);
      fputs(pcVar51,pFVar5);
      if (local_220._8_8_ == 0) {
        if (lVar21 != 0) goto LAB_00103ca0;
LAB_00103eb3:
        fputc(10,_stderr);
      }
      else {
        if (lVar21 == 0) {
          if (local_2c8[1] < 1) goto LAB_00103eb3;
          goto LAB_0010401c;
        }
LAB_00103ca0:
        uVar36 = time_zone_str(local_2c8[2],local_1a8);
        __fprintf_chk(_stderr,2," (%s)",uVar36);
LAB_00103cd1:
        fputc(10,_stderr);
        if (cVar16 == '\0') goto LAB_00103405;
      }
      *param_1 = local_280;
      param_1[1] = tStack_278;
LAB_00103d04:
      pcVar51 = "timezone: system default\n";
      if (local_490 == (char *)0x0) {
LAB_00103d3d:
        pcVar51 = (char *)dcgettext("gnulib",pcVar51,5);
        fwrite("date: ",1,6,_stderr);
        fputs(pcVar51,_stderr);
      }
      else {
        iVar17 = strcmp(local_490,"UTC0");
        if (iVar17 == 0) {
          pcVar51 = "timezone: Universal Time\n";
          goto LAB_00103d3d;
        }
        uVar36 = dcgettext("gnulib","timezone: TZ=\"%s\" environment value\n",5);
        dbg_printf(uVar36,local_490);
      }
      tVar3 = *param_1;
      tVar4 = param_1[1];
      uVar36 = dcgettext("gnulib","final: %ld.%09d (epoch-seconds)\n",5);
      dbg_printf(uVar36,tVar3,(int)tVar4);
      ptVar26 = gmtime_r(param_1,&local_358);
      if (ptVar26 != (tm *)0x0) {
        uVar36 = debug_strfdatetime_constprop_0(&local_358,0,local_188);
        uVar24 = dcgettext("gnulib","final: %s (UTC)\n",5);
        dbg_printf(uVar24,uVar36);
      }
      lVar21 = localtime_rz(lVar22,param_1,local_318);
      if (lVar21 != 0) {
        uVar36 = time_zone_str(local_2f0,local_1a8);
        uVar24 = debug_strfdatetime_constprop_0(local_318,0,local_188);
        uVar27 = dcgettext("gnulib","final: %s (UTC%s)\n",5);
        dbg_printf(uVar27,uVar24,uVar36);
      }
    }
LAB_001031da:
    uVar36 = 1;
  }
  else {
    if (local_1f7 == 0) goto LAB_0010331c;
    if (local_2d8 < param_2 + sVar20) {
      pcVar43 = "error: parsing failed, stopped at \'%s\'\n";
LAB_001036c3:
      uVar24 = dcgettext("gnulib",pcVar43,5);
    }
    else {
      uVar24 = dcgettext("gnulib","error: parsing failed\n",5);
    }
    uVar36 = 0;
    dbg_printf(uVar24,pcVar51);
  }
LAB_001031df:
  if (param_5 != lVar22) {
    tzfree(lVar22);
  }
LAB_001031ee:
  free(local_498);
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


