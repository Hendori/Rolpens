
long version_etc_arn(FILE *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 *param_5,ulong param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (param_2 == 0) {
    __fprintf_chk(param_1,2,"%s %s\n",param_3,param_4);
  }
  else {
    __fprintf_chk(param_1,2,"%s (%s) %s\n",param_2,param_3,param_4);
  }
  uVar1 = dcgettext("gnulib",&_LC2,5);
  __fprintf_chk(param_1,2,&version_etc_copyright,uVar1,0x7e9);
  fputc_unlocked(10,param_1);
  uVar1 = dcgettext("gnulib",
                    "License GPLv3+: GNU GPL version 3 or later <%s>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n"
                    ,5);
  __fprintf_chk(param_1,2,uVar1,"https://gnu.org/licenses/gpl.html");
  fputc_unlocked(10,param_1);
  if (9 < param_6) {
    local_48 = param_5[7];
    pcVar9 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    local_50 = param_5[6];
    local_60 = param_5[2];
    local_58 = param_5[1];
    uVar1 = param_5[5];
    uVar4 = param_5[4];
    uVar5 = param_5[3];
    uVar6 = *param_5;
LAB_001001e9:
    uVar3 = dcgettext("gnulib",pcVar9,5);
LAB_0010012f:
    lVar2 = __fprintf_chk(param_1,2,uVar3,uVar6,local_58,local_60,uVar5,uVar4,uVar1,local_50,
                          local_48);
switchD_001000d9_caseD_0:
    return lVar2;
  }
  lVar2 = (long)&switchD_001000d9::switchdataD_00100a20 +
          (long)(int)(&switchD_001000d9::switchdataD_00100a20)[param_6];
  switch(param_6) {
  case 0:
    goto switchD_001000d9_caseD_0;
  case 1:
    uVar1 = *param_5;
    uVar4 = dcgettext("gnulib","Written by %s.\n",5);
    lVar2 = __fprintf_chk(param_1,2,uVar4,uVar1);
    return lVar2;
  case 2:
    uVar1 = param_5[1];
    uVar4 = *param_5;
    uVar5 = dcgettext("gnulib","Written by %s and %s.\n",5);
    lVar2 = __fprintf_chk(param_1,2,uVar5,uVar4,uVar1);
    return lVar2;
  case 3:
    uVar1 = param_5[2];
    uVar4 = param_5[1];
    uVar5 = *param_5;
    uVar6 = dcgettext("gnulib","Written by %s, %s, and %s.\n",5);
    lVar2 = __fprintf_chk(param_1,2,uVar6,uVar5,uVar4,uVar1);
    return lVar2;
  case 4:
    lVar2 = param_5[3];
    uVar4 = param_5[2];
    uVar1 = param_5[1];
    uVar5 = *param_5;
    uVar6 = dcgettext("gnulib","Written by %s, %s, %s,\nand %s.\n",5);
    break;
  case 5:
    uVar1 = param_5[1];
    lVar2 = param_5[3];
    uVar4 = param_5[2];
    uVar5 = *param_5;
    uVar6 = dcgettext("gnulib","Written by %s, %s, %s,\n%s, and %s.\n",5);
    break;
  case 6:
    uVar4 = param_5[2];
    uVar1 = param_5[1];
    uVar5 = param_5[5];
    uVar6 = param_5[4];
    uVar3 = param_5[3];
    uVar8 = *param_5;
    uVar7 = dcgettext("gnulib","Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    goto LAB_001003bd;
  case 7:
    uVar1 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[5];
    uVar6 = param_5[4];
    uVar3 = param_5[3];
    uVar8 = *param_5;
    uVar7 = dcgettext("gnulib","Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_001003bd:
    lVar2 = __fprintf_chk(param_1,2,uVar7,uVar8,uVar1,uVar4,uVar3,uVar6,uVar5);
    return lVar2;
  case 8:
    local_48 = param_5[7];
    local_50 = param_5[6];
    local_60 = param_5[2];
    local_58 = param_5[1];
    uVar1 = param_5[5];
    uVar4 = param_5[4];
    uVar5 = param_5[3];
    uVar6 = *param_5;
    uVar3 = dcgettext("gnulib","Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
    goto LAB_0010012f;
  case 9:
    local_48 = param_5[7];
    pcVar9 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    local_50 = param_5[6];
    local_60 = param_5[2];
    local_58 = param_5[1];
    uVar1 = param_5[5];
    uVar4 = param_5[4];
    uVar5 = param_5[3];
    uVar6 = *param_5;
    goto LAB_001001e9;
  }
  __fprintf_chk(param_1,2,uVar6,uVar5,uVar1,uVar4);
  return lVar2;
}



void version_etc_ar(void)

{
  long lVar1;
  long *in_R8;
  long lVar2;
  
  lVar2 = 0;
  lVar1 = *in_R8;
  while (lVar1 != 0) {
    lVar2 = lVar2 + 1;
    lVar1 = in_R8[lVar2];
  }
  version_etc_arn();
  return;
}



void version_etc_va(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   uint *param_5)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_68 [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = 0;
  do {
    uVar1 = *param_5;
    if (uVar1 < 0x30) {
      *param_5 = uVar1 + 8;
      lVar3 = *(long *)((ulong)uVar1 + *(long *)(param_5 + 4));
      local_68[lVar4] = lVar3;
    }
    else {
      plVar2 = *(long **)(param_5 + 2);
      *(long **)(param_5 + 2) = plVar2 + 1;
      lVar3 = *plVar2;
      local_68[lVar4] = lVar3;
    }
  } while ((lVar3 != 0) && (lVar4 = lVar4 + 1, lVar4 != 10));
  version_etc_arn(param_1,param_2,param_3,param_4);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void version_etc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_98 [11];
  long local_40;
  long local_38 [4];
  long local_18 [2];
  
  uVar2 = 0x20;
  local_18[0] = param_5;
  plVar3 = (long *)&stack0x00000008;
  local_18[1] = param_6;
  lVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if ((uint)uVar2 < 0x30) {
      lVar1 = *(long *)((long)local_38 + uVar2);
      local_98[lVar4] = lVar1;
      uVar2 = (ulong)((uint)uVar2 + 8);
    }
    else {
      lVar1 = *plVar3;
      local_98[lVar4] = lVar1;
      plVar3 = plVar3 + 1;
    }
  } while ((lVar1 != 0) && (lVar4 = lVar4 + 1, lVar4 != 10));
  version_etc_arn(param_1,param_2,param_3);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void emit_bug_reporting_address(void)

{
  undefined8 uVar1;
  
  fputc_unlocked(10,_stdout);
  uVar1 = dcgettext("gnulib","Report bugs to: %s\n",5);
  __printf_chk(2,uVar1,"bug-coreutils@gnu.org");
  uVar1 = dcgettext("gnulib","%s home page: <%s>\n",5);
  __printf_chk(2,uVar1,"GNU coreutils","https://www.gnu.org/software/coreutils/");
  uVar1 = dcgettext("gnulib","General help using GNU software: <%s>\n",5);
  __printf_chk(2,uVar1,"https://www.gnu.org/gethelp/");
  return;
}


