
ulong make_dir_parents(char *param_1,uint *param_2,long param_3,undefined8 param_4,uint param_5,
                      code *param_6,uint param_7,uint param_8,uint param_9,char param_10)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  char *local_f8;
  uint local_ec;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*param_1 == '/') || (*param_2 < 4)) || (uVar7 = param_2[1], uVar7 == 0)) {
    local_f8 = param_1;
    if (param_3 == 0) {
LAB_0010007f:
      if ((param_8 & param_9) == 0xffffffff) {
        if ((param_7 & 0xc00) != 0 || (param_5 & 0x200) != 0) {
          local_ec = param_5 & 0xffffffed;
          goto LAB_001000a4;
        }
        iVar1 = mkdir(local_f8,param_5);
        if (iVar1 != 0) goto LAB_001000bb;
        (*param_6)(param_1,param_4);
        if ((param_7 & param_5 & 0x1ff) == 0) goto LAB_001001aa;
        uVar4 = 3;
        uVar7 = 0;
        local_ec = param_5;
      }
      else {
        local_ec = param_5 & 0xffffffc0;
LAB_001000a4:
        iVar1 = mkdir(local_f8,local_ec);
        if (iVar1 == 0) {
          (*param_6)(param_1,param_4);
          uVar4 = 3;
          uVar7 = 0;
        }
        else {
LAB_001000bb:
          puVar3 = (uint *)__errno_location();
          uVar7 = *puVar3;
          if (param_10 != '\0') {
            if (uVar7 != 0) {
              uVar9 = CONCAT71((int7)((ulong)puVar3 >> 8),uVar7 != 2 && param_3 != 0) & 0xffffffff;
              if (uVar7 != 2 && param_3 != 0) {
                iVar1 = stat(local_f8,&local_d8);
                if (iVar1 == 0) {
                  if ((local_d8.st_mode & 0xf000) == 0x4000) goto LAB_001001b0;
                }
                else if (((uVar7 == 0x11) && (*puVar3 != 2)) && (*puVar3 != 0x14)) {
                  uVar9 = 0;
                  uVar4 = quote(param_1);
                  uVar5 = dcgettext("gnulib","cannot stat %s",5);
                  error(0,*puVar3,uVar5,uVar4);
                  goto LAB_001001b0;
                }
              }
              goto LAB_00100160;
            }
            goto LAB_001001aa;
          }
          local_ec = 0xffffffff;
          uVar4 = 2;
        }
      }
      iVar1 = savewd_chdir(param_2,local_f8,uVar4,&local_d8);
      if (-2 < iVar1) {
        pcVar8 = ".";
        if (iVar1 != 0) {
          pcVar8 = local_f8;
        }
        iVar1 = dirchownmod((undefined4)local_d8.st_dev,pcVar8,local_ec,param_8,param_9,param_5,
                            param_7);
        if (iVar1 != 0) {
          if ((uVar7 == 0) ||
             (((uVar7 != 2 && (param_3 != 0)) && (piVar6 = __errno_location(), *piVar6 != 0x14)))) {
            uVar4 = quote(param_1);
            pcVar8 = "cannot change owner and permissions of %s";
            if ((param_8 & param_9) == 0xffffffff) {
              pcVar8 = "cannot change permissions of %s";
            }
            uVar9 = 0;
            uVar5 = dcgettext("gnulib",pcVar8,5);
            piVar6 = __errno_location();
            error(0,*piVar6,uVar5,uVar4);
            goto LAB_001001b0;
          }
          goto LAB_00100160;
        }
      }
    }
    else {
      lVar2 = mkancesdirs(param_1,param_2,param_3,param_4);
      if (-1 < lVar2) {
        local_f8 = param_1 + lVar2;
        goto LAB_0010007f;
      }
      if (lVar2 == -1) {
        puVar3 = (uint *)__errno_location();
        uVar7 = *puVar3;
        goto LAB_00100160;
      }
    }
LAB_001001aa:
    uVar9 = 1;
  }
  else {
LAB_00100160:
    uVar9 = 0;
    uVar4 = quote(param_1);
    uVar5 = dcgettext("gnulib","cannot create directory %s",5);
    error(0,uVar7,uVar5,uVar4);
  }
LAB_001001b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


