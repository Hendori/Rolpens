
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
  lVar2 = (long)&switchD_001000d9::switchdataD_00100e70 +
          (long)(int)(&switchD_001000d9::switchdataD_00100e70)[param_6];
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
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  long local_68 [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *param_5;
  if (uVar3 < 0x30) {
    lVar9 = *(long *)(param_5 + 4);
    uVar1 = uVar3 + 8;
    *param_5 = uVar1;
    local_68[0] = *(long *)(lVar9 + (ulong)uVar3);
    if (local_68[0] != 0) {
      if (uVar1 < 0x30) {
        uVar2 = uVar3 + 0x10;
        *param_5 = uVar2;
        local_68[1] = *(long *)(lVar9 + (ulong)uVar1);
        if (local_68[1] != 0) {
          if (uVar2 < 0x30) {
            uVar1 = uVar3 + 0x18;
            *param_5 = uVar1;
            local_68[2] = *(long *)(lVar9 + (ulong)uVar2);
            if (local_68[2] != 0) {
              if (uVar1 < 0x30) {
                uVar2 = uVar3 + 0x20;
                *param_5 = uVar2;
                local_68[3] = *(long *)(lVar9 + (ulong)uVar1);
                if (local_68[3] != 0) {
                  if (0x2f < uVar2) {
                    plVar6 = *(long **)(param_5 + 2);
                    lVar9 = 5;
                    *(long **)(param_5 + 2) = plVar6 + 1;
                    local_68[4] = *plVar6;
                    if (local_68[4] == 0) {
                      lVar10 = 4;
                      goto LAB_00100648;
                    }
                    goto LAB_00100510;
                  }
                  uVar1 = uVar3 + 0x28;
                  *param_5 = uVar1;
                  local_68[4] = *(long *)(lVar9 + (ulong)uVar2);
                  lVar10 = 4;
                  if (local_68[4] == 0) goto LAB_00100648;
                  if (uVar1 < 0x30) {
                    *param_5 = uVar3 + 0x30;
                    local_68[5] = *(long *)(lVar9 + (ulong)uVar1);
                    if (local_68[5] != 0) {
                      plVar5 = *(long **)(param_5 + 2);
                      plVar6 = plVar5 + 1;
                      *(long **)(param_5 + 2) = plVar6;
                      local_68[6] = *plVar5;
                      lVar10 = 6;
                      if (local_68[6] == 0) goto LAB_00100648;
                      plVar7 = plVar5 + 2;
                      *(long **)(param_5 + 2) = plVar7;
                      local_68[7] = plVar5[1];
                      if (local_68[7] == 0) {
                        lVar10 = 7;
                        goto LAB_00100648;
                      }
                      lVar8 = 8;
                      lVar9 = 7;
                      goto LAB_00100530;
                    }
                  }
                  else {
                    plVar6 = *(long **)(param_5 + 2);
                    lVar9 = 6;
                    *(long **)(param_5 + 2) = plVar6 + 1;
                    local_68[5] = *plVar6;
                    if (local_68[5] != 0) goto LAB_00100510;
                  }
                  lVar10 = 5;
                  goto LAB_00100648;
                }
              }
              else {
                plVar6 = *(long **)(param_5 + 2);
                lVar9 = 4;
                *(long **)(param_5 + 2) = plVar6 + 1;
                local_68[3] = *plVar6;
                if (local_68[3] != 0) {
LAB_00100510:
                  plVar6 = *(long **)(param_5 + 2);
                  lVar8 = lVar9 + 1;
                  plVar7 = plVar6 + 1;
                  *(long **)(param_5 + 2) = plVar7;
                  lVar4 = *plVar6;
                  local_68[lVar9] = lVar4;
                  lVar10 = lVar9;
                  if (lVar4 == 0) goto LAB_00100648;
LAB_00100530:
                  *(long **)(param_5 + 2) = plVar6 + 2;
                  lVar4 = *plVar7;
                  local_68[lVar8] = lVar4;
                  lVar10 = lVar8;
                  if (lVar4 != 0) {
                    lVar10 = lVar9 + 2;
                    *(long **)(param_5 + 2) = plVar6 + 3;
                    lVar8 = plVar6[2];
                    local_68[lVar10] = lVar8;
                    if (lVar8 != 0) {
                      lVar10 = lVar9 + 3;
                      if (lVar9 != 7) {
                        *(long **)(param_5 + 2) = plVar6 + 4;
                        lVar8 = plVar6[3];
                        local_68[lVar10] = lVar8;
                        if (lVar8 == 0) goto LAB_00100648;
                        lVar10 = lVar9 + 4;
                        if (lVar9 != 6) {
                          *(long **)(param_5 + 2) = plVar6 + 5;
                          lVar8 = plVar6[4];
                          local_68[lVar10] = lVar8;
                          if (lVar8 == 0) goto LAB_00100648;
                          lVar10 = lVar9 + 5;
                          if (lVar9 != 5) {
                            *(long **)(param_5 + 2) = plVar6 + 6;
                            lVar8 = plVar6[5];
                            local_68[lVar10] = lVar8;
                            if (lVar8 == 0) goto LAB_00100648;
                            lVar10 = lVar9 + 6;
                            if (lVar9 != 4) {
                              *(long **)(param_5 + 2) = plVar6 + 7;
                              lVar8 = plVar6[6];
                              local_68[lVar10] = lVar8;
                              if (lVar8 == 0) goto LAB_00100648;
                              lVar10 = lVar9 + 7;
                              if (lVar9 != 3) {
                                *(long **)(param_5 + 2) = plVar6 + 8;
                                lVar8 = plVar6[7];
                                local_68[lVar10] = lVar8;
                                if (lVar8 == 0) goto LAB_00100648;
                                if (lVar9 != 2) {
                                  *(long **)(param_5 + 2) = plVar6 + 9;
                                  local_68[9] = plVar6[8];
                                  lVar10 = 9;
                                  if (local_68[9] == 0) goto LAB_00100648;
                                }
                              }
                            }
                          }
                        }
                      }
                      lVar10 = 10;
                    }
                  }
                  goto LAB_00100648;
                }
              }
              lVar10 = 3;
              goto LAB_00100648;
            }
          }
          else {
            plVar6 = *(long **)(param_5 + 2);
            lVar9 = 3;
            *(long **)(param_5 + 2) = plVar6 + 1;
            local_68[2] = *plVar6;
            if (local_68[2] != 0) goto LAB_00100510;
          }
          lVar10 = 2;
          goto LAB_00100648;
        }
      }
      else {
        plVar6 = *(long **)(param_5 + 2);
        lVar9 = 2;
        *(long **)(param_5 + 2) = plVar6 + 1;
        local_68[1] = *plVar6;
        if (local_68[1] != 0) goto LAB_00100510;
      }
      lVar10 = 1;
      goto LAB_00100648;
    }
  }
  else {
    plVar6 = *(long **)(param_5 + 2);
    lVar9 = 1;
    *(long **)(param_5 + 2) = plVar6 + 1;
    local_68[0] = *plVar6;
    if (local_68[0] != 0) goto LAB_00100510;
  }
  lVar10 = 0;
LAB_00100648:
  version_etc_arn(param_1,param_2,param_3,param_4,local_68,lVar10);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void version_etc(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  version_etc_arn();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
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


