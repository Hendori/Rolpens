
undefined1 ktxCheckHeader1_(long *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long in_FS_OFFSET;
  undefined1 uVar9;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 != -0x44cecedfa7abb455) || ((int)param_1[1] != 0xa1a0a0d)) {
    uVar9 = 0xf;
    goto LAB_00100039;
  }
  if (*(int *)((long)param_1 + 0xc) == 0x1020304) {
    _ktxSwapEndian32(param_1 + 2,0xc);
    if ((*(int *)((long)param_1 + 0x14) - 1U < 2) || (*(int *)((long)param_1 + 0x14) == 4))
    goto LAB_00100080;
  }
  else if (*(int *)((long)param_1 + 0xc) == 0x4030201) {
LAB_00100080:
    *param_2 = 0;
    iVar7 = (int)param_1[3];
    if ((int)param_1[2] == 0) {
      if (iVar7 == 0) {
        *param_2 = 1;
LAB_00100098:
        if ((*(int *)((long)param_1 + 0x1c) != iVar7) &&
           (uVar8 = *(uint *)((long)param_1 + 0x24), uVar8 != 0)) {
          uVar1 = *(uint *)((long)param_1 + 0x2c);
          uVar2 = *(uint *)(param_1 + 5);
          if (uVar1 == 0) {
            if (uVar2 != 0) {
              iVar7 = *(int *)((long)param_1 + 0x34);
              *(undefined2 *)(param_2 + 2) = 2;
              if (iVar7 != 6) goto LAB_00100167;
LAB_001000cf:
              lVar4 = param_1[7];
              if ((int)lVar4 == 0) {
                param_2[1] = 1;
                uVar6 = 1;
                *(undefined4 *)(param_1 + 7) = 1;
              }
              else {
                param_2[1] = 0;
                uVar6 = 1 << ((char)(int)lVar4 - 1U & 0x1f);
              }
              if (uVar8 < uVar1) {
                uVar8 = uVar1;
              }
              if (uVar8 < uVar2) {
                uVar8 = uVar2;
              }
              uVar9 = uVar8 < uVar6;
              goto LAB_00100039;
            }
            uVar5 = 1;
LAB_0010015b:
            *(undefined2 *)(param_2 + 2) = uVar5;
            iVar7 = *(int *)((long)param_1 + 0x34);
            if (iVar7 != 6) {
LAB_00100167:
              if (iVar7 == 1) goto LAB_001000cf;
            }
          }
          else if (uVar2 != 0) {
            uVar9 = 0x11;
            if ((int)param_1[6] != 0) goto LAB_00100039;
            uVar5 = 3;
            goto LAB_0010015b;
          }
        }
      }
    }
    else if (iVar7 != 0) goto LAB_00100098;
  }
  uVar9 = 1;
LAB_00100039:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



undefined1 ktxCheckHeader2_(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined1 uVar8;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 != -0x44cfcddfa7abb455) || ((int)param_1[1] != 0xa1a0a0d)) {
    uVar8 = 0xf;
    goto LAB_001001d9;
  }
  cVar5 = isProhibitedFormat(*(undefined4 *)((long)param_1 + 0xc));
  if (cVar5 == '\0') {
    cVar5 = isValidFormat(*(undefined4 *)((long)param_1 + 0xc));
    if (cVar5 == '\0') {
LAB_00100280:
      uVar8 = 0x11;
      goto LAB_001001d9;
    }
    uVar1 = *(uint *)((long)param_1 + 0x2c);
    if (((uVar1 != 1) || (*(int *)((long)param_1 + 0xc) == 0)) &&
       (uVar6 = *(uint *)((long)param_1 + 0x14), uVar6 != 0)) {
      uVar2 = *(uint *)((long)param_1 + 0x1c);
      uVar3 = *(uint *)(param_1 + 3);
      if (uVar2 == 0) {
        iVar7 = *(int *)((long)param_1 + 0x24);
        if (uVar3 != 0) {
          *(undefined2 *)(param_2 + 2) = 2;
          if (iVar7 != 6) goto LAB_001002b3;
          if (uVar6 != uVar3) goto LAB_00100260;
LAB_001002b8:
          if ((int)param_1[5] == 0) {
            *(undefined1 *)(param_2 + 1) = 1;
            *(undefined4 *)(param_1 + 5) = 1;
          }
          else {
            *(undefined1 *)(param_2 + 1) = 0;
          }
          if (uVar1 < 4) {
            if (uVar6 < uVar2) {
              uVar6 = uVar2;
            }
            if (uVar6 < uVar3) {
              uVar6 = uVar3;
            }
            uVar8 = uVar6 < (uint)(1 << ((char)(int)param_1[5] - 1U & 0x1f));
            goto LAB_001001d9;
          }
          goto LAB_00100280;
        }
        *(undefined2 *)(param_2 + 2) = 1;
joined_r0x001002b1:
        if (iVar7 != 6) {
LAB_001002b3:
          if (iVar7 == 1) goto LAB_001002b8;
        }
      }
      else if (uVar3 != 0) {
        if ((int)param_1[4] != 0) goto LAB_00100280;
        iVar7 = *(int *)((long)param_1 + 0x24);
        *(undefined2 *)(param_2 + 2) = 3;
        goto joined_r0x001002b1;
      }
    }
  }
LAB_00100260:
  uVar8 = 1;
LAB_001001d9:
  if (lVar4 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


