
bool julian_adj(int *param_1,int param_2,long param_3,long *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = param_3 / 0x15180 + (long)param_2;
  iVar2 = param_1[2] * 0xe10 + param_1[1] * 0x3c + *param_1 +
          (int)(param_3 / 0x15180) * -0x15180 + (int)param_3;
  if (iVar2 < 0x15180) {
    if (iVar2 < 0) {
      lVar3 = lVar3 + -1;
      iVar2 = iVar2 + 0x15180;
    }
  }
  else {
    lVar3 = lVar3 + 1;
    iVar2 = iVar2 + -0x15180;
  }
  iVar1 = (param_1[4] + -0xd) / 0xc;
  iVar4 = (param_1[5] + 0x1a2c + iVar1) * 0x5b5;
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar4 = ((param_1[5] + 0x1a90 + iVar1) / 100) * 3;
  iVar5 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  lVar3 = (((((param_1[4] + -1 + iVar1 * -0xc) * 0x16f) / 0xc + (iVar6 >> 2)) - (iVar5 >> 2)) +
           param_1[3] + -0x7d4b) + lVar3;
  if (-1 < lVar3) {
    *param_4 = lVar3;
    *param_5 = iVar2;
  }
  return -1 < lVar3;
}



tm * OPENSSL_gmtime(time_t *param_1,tm *param_2)

{
  tm *ptVar1;
  
  ptVar1 = gmtime_r(param_1,param_2);
  if (ptVar1 != (tm *)0x0) {
    ptVar1 = param_2;
  }
  return ptVar1;
}



undefined8 OPENSSL_gmtime_adj(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  int local_1c;
  long local_18;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = julian_adj();
  if ((int)uVar3 != 0) {
    lVar4 = ((local_18 + 0x10bd9) * 4) / 0x23ab1;
    lVar6 = lVar4 * 0x23ab1;
    lVar7 = lVar6 + 3;
    lVar6 = lVar6 + 6;
    if (-1 < lVar7) {
      lVar6 = lVar7;
    }
    lVar9 = (local_18 + 0x10bd9) - (lVar6 >> 2);
    lVar6 = ((lVar9 + 1) * 4000) / 0x164b09;
    lVar8 = lVar6 * 0x5b5;
    lVar7 = lVar8 + 3;
    if (-1 < lVar8) {
      lVar7 = lVar8;
    }
    lVar7 = (lVar9 - (lVar7 >> 2)) + 0x1f;
    lVar8 = lVar7 * 0x50;
    uVar3 = 0;
    iVar2 = (int)(lVar8 / 0x6925);
    uVar5 = ((int)lVar4 + -0x31) * 100 + (int)lVar6 + -0x76c + iVar2;
    if (uVar5 < 0x1fa4) {
      *(uint *)((long)param_1 + 0x14) = uVar5;
      lVar4 = (SUB168(SEXT816(-0x29be1739a4fb805d) * SEXT816(lVar8),8) + lVar8 >> 0xb) -
              (lVar8 >> 0x3f);
      *(int *)(param_1 + 2) = iVar2 * -0xc + 1 + (int)lVar4;
      uVar3 = 1;
      *param_1 = CONCAT44((local_1c / 0x3c) % 0x3c,local_1c % 0x3c);
      param_1[1] = CONCAT44((int)lVar7 - (int)((lVar4 * 0x98f) / 0x50),local_1c / 0xe10);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
OPENSSL_gmtime_diff(undefined4 *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = julian_adj(param_3,0,0,&local_30,&local_38);
  if (iVar1 != 0) {
    iVar1 = julian_adj(param_4,0,0,&local_28,&local_34);
    if (iVar1 != 0) {
      local_28 = local_28 - local_30;
      local_34 = local_34 - local_38;
      if ((local_28 < 1) || (-1 < local_34)) {
        if ((local_28 < 0) && (0 < local_34)) {
          local_28 = local_28 + 1;
          local_34 = local_34 + -0x15180;
        }
      }
      else {
        local_28 = local_28 + -1;
        local_34 = local_34 + 0x15180;
      }
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = (int)local_28;
      }
      if (param_2 != (int *)0x0) {
        *param_2 = local_34;
      }
      uVar2 = 1;
      goto LAB_0010039f;
    }
  }
  uVar2 = 0;
LAB_0010039f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


