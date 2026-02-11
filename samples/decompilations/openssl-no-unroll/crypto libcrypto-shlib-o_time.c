
tm * OPENSSL_gmtime(time_t *param_1,tm *param_2)

{
  tm *ptVar1;
  
  ptVar1 = gmtime_r(param_1,param_2);
  if (ptVar1 != (tm *)0x0) {
    ptVar1 = param_2;
  }
  return ptVar1;
}



bool OPENSSL_gmtime_adj(int *param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  
  lVar10 = (long)param_2 + param_3 / 0x15180;
  iVar8 = param_1[2] * 0xe10 + param_1[1] * 0x3c + *param_1 +
          (int)(param_3 / 0x15180) * -0x15180 + (int)param_3;
  if (iVar8 < 0x15180) {
    if (iVar8 < 0) {
      lVar10 = lVar10 + -1;
      iVar8 = iVar8 + 0x15180;
    }
  }
  else {
    lVar10 = lVar10 + 1;
    iVar8 = iVar8 + -0x15180;
  }
  iVar1 = (param_1[4] + -0xd) / 0xc;
  iVar11 = (param_1[5] + 0x1a2c + iVar1) * 0x5b5;
  iVar3 = iVar11 + 3;
  if (-1 < iVar11) {
    iVar3 = iVar11;
  }
  iVar11 = ((param_1[5] + 0x1a90 + iVar1) / 100) * 3;
  iVar2 = iVar11 + 3;
  if (-1 < iVar11) {
    iVar2 = iVar11;
  }
  lVar10 = (((((param_1[4] + -1 + iVar1 * -0xc) * 0x16f) / 0xc + (iVar3 >> 2)) - (iVar2 >> 2)) +
            param_1[3] + -0x7d4b) + lVar10;
  if (-1 < lVar10) {
    lVar10 = lVar10 + 0x10bd9;
    uVar4 = (ulong)(lVar10 * 4) / 0x23ab1;
    lVar5 = uVar4 * 0x23ab1;
    lVar6 = lVar5 + 3;
    lVar5 = lVar5 + 6;
    if (-1 < lVar6) {
      lVar5 = lVar6;
    }
    lVar10 = lVar10 - (lVar5 >> 2);
    lVar5 = ((lVar10 + 1) * 4000) / 0x164b09;
    lVar7 = lVar5 * 0x5b5;
    lVar6 = lVar7 + 3;
    if (-1 < lVar7) {
      lVar6 = lVar7;
    }
    lVar10 = (lVar10 - (lVar6 >> 2)) + 0x1f;
    lVar6 = lVar10 * 0x50;
    iVar1 = (int)(lVar6 / 0x6925);
    uVar9 = ((int)uVar4 + -0x31) * 100 + (int)lVar5 + -0x76c + iVar1;
    if (uVar9 < 0x1fa4) {
      param_1[5] = uVar9;
      lVar5 = (SUB168(SEXT816(-0x29be1739a4fb805d) * SEXT816(lVar6),8) + lVar6 >> 0xb) -
              (lVar6 >> 0x3f);
      param_1[4] = iVar1 * -0xc + 1 + (int)lVar5;
      *(ulong *)param_1 = CONCAT44((iVar8 / 0x3c) % 0x3c,iVar8 % 0x3c);
      *(ulong *)(param_1 + 2) = CONCAT44((int)lVar10 - (int)((lVar5 * 0x98f) / 0x50),iVar8 / 0xe10);
    }
    return uVar9 < 0x1fa4;
  }
  return false;
}



undefined4 OPENSSL_gmtime_diff(undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  
  iVar1 = param_3[2] * 0xe10 + param_3[1] * 0x3c + *param_3;
  if (iVar1 < 0x15180) {
    lVar4 = 0;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x15180;
      lVar4 = -1;
    }
  }
  else {
    iVar1 = iVar1 + -0x15180;
    lVar4 = 1;
  }
  iVar3 = (param_3[4] + -0xd) / 0xc;
  iVar2 = (param_3[5] + 0x1a2c + iVar3) * 0x5b5;
  iVar7 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar7 = iVar2;
  }
  iVar2 = ((param_3[5] + 0x1a90 + iVar3) / 100) * 3;
  iVar9 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar9 = iVar2;
  }
  uVar6 = 0;
  lVar4 = (((((param_3[4] + -1 + iVar3 * -0xc) * 0x16f) / 0xc + (iVar7 >> 2)) - (iVar9 >> 2)) +
           param_3[3] + -0x7d4b) + lVar4;
  if (-1 < lVar4) {
    iVar3 = param_4[2] * 0xe10 + param_4[1] * 0x3c + *param_4;
    if (iVar3 < 0x15180) {
      lVar8 = 0;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x15180;
        lVar8 = -1;
      }
    }
    else {
      iVar3 = iVar3 + -0x15180;
      lVar8 = 1;
    }
    iVar7 = (param_4[4] + -0xd) / 0xc;
    iVar9 = (param_4[5] + 0x1a2c + iVar7) * 0x5b5;
    iVar2 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar2 = iVar9;
    }
    iVar9 = ((param_4[5] + 0x1a90 + iVar7) / 100) * 3;
    iVar5 = iVar9 + 3;
    if (-1 < iVar9) {
      iVar5 = iVar9;
    }
    uVar6 = 0;
    lVar8 = (((((param_4[4] + -1 + iVar7 * -0xc) * 0x16f) / 0xc + (iVar2 >> 2)) - (iVar5 >> 2)) +
             param_4[3] + -0x7d4b) + lVar8;
    if (-1 < lVar8) {
      lVar8 = lVar8 - lVar4;
      iVar3 = iVar3 - iVar1;
      if ((lVar8 < 1) || (-1 < iVar3)) {
        if ((lVar8 < 0) && (0 < iVar3)) {
          lVar8 = lVar8 + 1;
          iVar3 = iVar3 + -0x15180;
        }
      }
      else {
        lVar8 = lVar8 + -1;
        iVar3 = iVar3 + 0x15180;
      }
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = (int)lVar8;
      }
      if (param_2 != (int *)0x0) {
        *param_2 = iVar3;
      }
      uVar6 = 1;
    }
  }
  return uVar6;
}


