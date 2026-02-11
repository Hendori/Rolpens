
ulong make_dir_parents(char *param_1,uint *param_2,long param_3,undefined8 param_4,uint param_5,
                      code *param_6,uint param_7,uint param_8,uint param_9,char param_10)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  char *pcVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  char *local_f8;
  uint local_ec;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*param_1 == '/') || (*param_2 < 4)) || (uVar1 = param_2[1], uVar1 == 0)) {
    local_f8 = param_1;
    if (param_3 == 0) {
LAB_0010007f:
      if ((param_8 & param_9) == 0xffffffff) {
        if ((param_7 & 0xc00) == 0 && (param_5 & 0x200) == 0) {
          iVar2 = mkdir(local_f8,param_5);
          if (iVar2 == 0) {
            (*param_6)(param_1,param_4);
            if ((param_7 & param_5 & 0x1ff) == 0) goto LAB_001001aa;
            uVar5 = 3;
            uVar1 = 0;
            local_ec = param_5;
            goto LAB_001002b5;
          }
        }
        else {
          local_ec = param_5 & 0xffffffed;
          uVar1 = mkdir(local_f8,local_ec);
          if (uVar1 == 0) goto LAB_0010028f;
        }
LAB_001000b9:
        puVar4 = (uint *)__errno_location();
        uVar1 = *puVar4;
        if (param_10 != '\0') {
          if (uVar1 != 0) {
            uVar9 = CONCAT71((int7)((ulong)puVar4 >> 8),uVar1 != 2 && param_3 != 0) & 0xffffffff;
            if (uVar1 != 2 && param_3 != 0) {
              iVar2 = stat(local_f8,&local_d8);
              if (iVar2 == 0) {
                if ((local_d8.st_mode & 0xf000) == 0x4000) goto LAB_001001b0;
              }
              else if (((uVar1 == 0x11) && (*puVar4 != 2)) && (*puVar4 != 0x14)) {
                uVar9 = 0;
                uVar5 = quote(param_1);
                uVar6 = dcgettext("gnulib","cannot stat %s",5);
                error(0,*puVar4,uVar6,uVar5);
                goto LAB_001001b0;
              }
            }
            goto LAB_00100160;
          }
          goto LAB_001001aa;
        }
        local_ec = 0xffffffff;
        uVar5 = 2;
      }
      else {
        local_ec = param_5 & 0xffffffc0;
        uVar1 = mkdir(local_f8,local_ec);
        if (uVar1 != 0) goto LAB_001000b9;
LAB_0010028f:
        (*param_6)(param_1,param_4);
        uVar5 = 3;
      }
LAB_001002b5:
      iVar2 = savewd_chdir(param_2,local_f8,uVar5,&local_d8);
      if (-2 < iVar2) {
        pcVar8 = ".";
        if (iVar2 != 0) {
          pcVar8 = local_f8;
        }
        iVar2 = dirchownmod((undefined4)local_d8.st_dev,pcVar8,local_ec,param_8,param_9,param_5,
                            param_7);
        if (iVar2 != 0) {
          if ((uVar1 == 0) ||
             (((uVar1 != 2 && (param_3 != 0)) && (piVar7 = __errno_location(), *piVar7 != 0x14)))) {
            uVar5 = quote(param_1);
            pcVar8 = "cannot change owner and permissions of %s";
            if ((param_8 & param_9) == 0xffffffff) {
              pcVar8 = "cannot change permissions of %s";
            }
            uVar9 = 0;
            uVar6 = dcgettext("gnulib",pcVar8,5);
            piVar7 = __errno_location();
            error(0,*piVar7,uVar6,uVar5);
            goto LAB_001001b0;
          }
          goto LAB_00100160;
        }
      }
    }
    else {
      lVar3 = mkancesdirs(param_1,param_2,param_3,param_4);
      if (-1 < lVar3) {
        local_f8 = param_1 + lVar3;
        goto LAB_0010007f;
      }
      if (lVar3 == -1) {
        puVar4 = (uint *)__errno_location();
        uVar1 = *puVar4;
        goto LAB_00100160;
      }
    }
LAB_001001aa:
    uVar9 = 1;
  }
  else {
LAB_00100160:
    uVar9 = 0;
    uVar5 = quote(param_1);
    uVar6 = dcgettext("gnulib","cannot create directory %s",5);
    error(0,uVar1,uVar6,uVar5);
  }
LAB_001001b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


