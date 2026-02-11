
uint setChannelFlags(uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  switch(param_2) {
  default:
    return param_1;
  case 1:
  case 3:
  case 5:
  case 9:
    return param_1 | 0x40;
  case 6:
    return param_1 | 0xc0;
  case 7:
    return param_1 | 0x80;
  case 8:
    break;
  }
  uVar1 = 0x1f;
  if (param_1 != 0xf) {
    uVar1 = param_1;
  }
  return uVar1;
}



void writeHeader(int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1 * 4 + 7;
  iVar4 = iVar3 * 4;
  piVar1 = (int *)malloc((long)iVar3 << 2);
  *piVar1 = iVar4;
  piVar1[1] = 0;
  piVar1[4] = 0;
  if (param_4 == 0) {
    param_4 = 0x101;
  }
  piVar1[2] = (iVar4 + -4) * 0x10000 | 2;
  piVar1[5] = param_2;
  piVar1[6] = 0;
  uVar2 = param_4 | 0x10000;
  if (param_3 == 8) {
    uVar2 = param_4 | 0x20000;
  }
  piVar1[3] = uVar2;
  return;
}



void writeSample(long param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
                uint param_7,undefined4 param_8)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = (uint *)(param_1 + 0x1c + (long)(param_2 << 2) * 4);
  if (param_3 == 3) {
    param_3 = 0xf;
  }
  param_5 = (param_4 + -1) * 0x10000 | param_5;
  switch(param_8) {
  default:
    puVar1[1] = 0;
    *puVar1 = param_3 << 0x18 | param_5;
    switch(param_8) {
    case 2:
    case 4:
      puVar1[2] = 0;
      puVar1[3] = param_7;
      return;
    case 3:
    case 5:
      goto switchD_0010018a_caseD_3;
    case 6:
      goto switchD_0010018a_caseD_6;
    case 7:
      goto switchD_0010018a_caseD_7;
    case 9:
      goto switchD_0010018a_caseD_9;
    }
    break;
  case 1:
    puVar1[1] = 0;
    *puVar1 = param_3 << 0x18 | 0x40000000U | param_5;
    if (param_4 < 0x21) {
      if (param_6 == 0) {
        iVar3 = 1 << ((byte)param_4 & 0x1f);
        uVar2 = iVar3 - 1;
        uVar4 = -iVar3;
      }
      else {
        iVar3 = 1 << ((byte)(param_4 + -1) & 0x1f);
        uVar2 = iVar3 - 1;
        uVar4 = -iVar3;
      }
    }
    else {
      uVar4 = 0x80000000;
      uVar2 = 0x7fffffff;
    }
    puVar1[3] = uVar2;
    if (param_7 != 0) {
      uVar4 = -uVar2;
    }
    puVar1[2] = uVar4;
    return;
  case 3:
  case 5:
    puVar1[1] = 0;
    *puVar1 = param_3 << 0x18 | 0x40000000U | param_5;
switchD_0010018a_caseD_3:
    uVar2 = 0xffffffff;
    goto LAB_00100155;
  case 6:
    puVar1[1] = 0;
    *puVar1 = param_3 << 0x18 | 0xc0000000U | param_5;
switchD_0010018a_caseD_6:
    param_7 = 0x3f800000;
    uVar2 = 0xbf800000;
    goto LAB_00100155;
  case 7:
    puVar1[1] = 0;
    *puVar1 = param_3 << 0x18 | 0x80000000U | param_5;
switchD_0010018a_caseD_7:
    puVar1[2] = 0;
    puVar1[3] = 0x3f800000;
    return;
  case 8:
    if (param_3 == 0xf) {
      puVar1[1] = 0;
      *puVar1 = param_5 | 0x1f000000;
    }
    else {
      puVar1[1] = 0;
      *puVar1 = param_3 << 0x18 | param_5;
    }
    break;
  case 9:
    puVar1[1] = 0;
    *puVar1 = param_3 << 0x18 | 0x40000000U | param_5;
switchD_0010018a_caseD_9:
    puVar1[2] = 0xffffffe0;
    puVar1[3] = 0x20;
    return;
  }
  if (param_4 < 0x21) {
    param_7 = (1 << ((byte)param_4 & 0x1f)) - 1;
    uVar2 = 0;
  }
  else {
    param_7 = 0xffffffff;
    uVar2 = 0;
  }
LAB_00100155:
  puVar1[2] = uVar2;
  puVar1[3] = param_7;
  return;
}



undefined8 createDFDUnpacked(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  
  iVar5 = param_2 * param_3;
  if (param_1 == 0) {
    uVar3 = writeHeader(param_2,iVar5,param_5,0);
    if (0 < (int)param_2) {
      iVar5 = 0;
      uVar2 = 0;
      do {
        uVar6 = uVar2;
        if (param_4 != 0) {
          uVar6 = (uint)((uVar2 & 0xfffffffd) == 0) * 2 ^ uVar2;
        }
        uVar4 = uVar2 + 1;
        writeSample(uVar3,uVar2,uVar6,param_3 * 8,iVar5,1,1,param_5);
        iVar5 = iVar5 + param_3 * 8;
        uVar2 = uVar4;
      } while (param_2 != uVar4);
    }
  }
  else {
    uVar3 = writeHeader(iVar5,iVar5,param_5,0);
    if (0 < (int)param_2) {
      uVar2 = 0;
      iVar5 = 0;
      do {
        uVar6 = uVar2;
        if (param_4 != 0) {
          uVar6 = (uint)((uVar2 & 0xfffffffd) == 0) * 2 ^ uVar2;
        }
        if (0 < param_3) {
          iVar7 = 0;
          iVar8 = param_3 * 8 + -8 + iVar5 * 8;
          do {
            bVar9 = param_3 + -1 == iVar7;
            iVar1 = iVar7 + iVar5;
            bVar10 = iVar7 == 0;
            iVar7 = iVar7 + 1;
            writeSample(uVar3,iVar1,uVar6,8,iVar8,bVar9,bVar10,param_5);
            iVar8 = iVar8 + -8;
          } while (param_3 != iVar7);
        }
        uVar2 = uVar2 + 1;
        iVar5 = iVar5 + param_3;
      } while (param_2 != uVar2);
    }
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
createDFDPackedShifted
          (int param_1,int param_2,long param_3,long param_4,long param_5,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  uint local_d8 [4];
  int aiStack_c8 [34];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 6) {
    puVar11 = (undefined8 *)malloc(0x7c);
    uVar8 = _LC7;
    uVar7 = _UNK_00101118;
    uVar6 = __LC0;
    *(undefined4 *)(puVar11 + 0xf) = 0x1f;
    *puVar11 = uVar6;
    puVar11[1] = uVar7;
    uVar7 = _UNK_00101128;
    uVar6 = __LC1;
    puVar11[0xe] = uVar8;
    puVar11[2] = uVar6;
    puVar11[3] = uVar7;
    uVar6 = _UNK_00101138;
    puVar11[4] = __LC2;
    puVar11[5] = uVar6;
    uVar6 = _UNK_00101148;
    puVar11[6] = _LC7;
    puVar11[7] = uVar6;
    uVar6 = _UNK_00101158;
    puVar11[8] = __LC4;
    puVar11[9] = uVar6;
    uVar6 = _UNK_00101168;
    puVar11[10] = __LC5;
    puVar11[0xb] = uVar6;
    uVar6 = _UNK_00101178;
    puVar11[0xc] = __LC6;
    puVar11[0xd] = uVar6;
  }
  else if (param_1 == 0) {
    if (param_2 < 1) goto LAB_00100800;
    lVar10 = 0;
    iVar17 = 0;
    do {
      piVar3 = (int *)(param_3 + lVar10);
      piVar4 = (int *)(param_4 + lVar10);
      lVar10 = lVar10 + 4;
      iVar17 = iVar17 + *piVar3 + *piVar4;
    } while ((long)param_2 * 4 - lVar10 != 0);
    uVar19 = 0;
    puVar11 = (undefined8 *)writeHeader(param_2,iVar17 >> 3,param_6,0);
    iVar17 = 0;
    do {
      iVar17 = iVar17 + *(int *)(param_4 + uVar19 * 4);
      writeSample(puVar11,uVar19 & 0xffffffff,*(undefined4 *)(param_5 + uVar19 * 4),
                  *(undefined4 *)(param_3 + uVar19 * 4),iVar17,1,1,param_6);
      iVar17 = iVar17 + *(int *)(param_3 + uVar19 * 4);
      uVar19 = uVar19 + 1;
    } while ((long)param_2 != uVar19);
  }
  else {
    if (param_2 < 1) {
LAB_00100800:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        puVar11 = (undefined8 *)writeHeader(param_2,0,param_6,0);
        return puVar11;
      }
      goto LAB_00100831;
    }
    lVar15 = (long)param_2;
    lVar10 = 0;
    uVar18 = 0;
    do {
      local_d8[lVar10] = uVar18;
      lVar1 = lVar10 * 4;
      lVar2 = lVar10 * 4;
      lVar10 = lVar10 + 1;
      uVar18 = uVar18 + *(int *)(param_3 + lVar1) + *(int *)(param_4 + lVar2);
    } while (lVar10 != lVar15);
    iVar17 = 0;
    uVar9 = uVar18 - 1 & 0x18;
    lVar10 = 0;
    do {
      uVar13 = *(int *)(param_4 + lVar10 * 4) + iVar17;
      iVar17 = *(int *)(param_3 + lVar10 * 4) + uVar13;
      aiStack_c8[(int)(uVar9 ^ uVar13)] = (int)lVar10;
      if (7 < (uVar13 ^ iVar17 - 1U)) {
        param_2 = param_2 + 1;
        aiStack_c8[(int)(iVar17 - 1U & 0xfffffff8 ^ uVar9)] = (int)lVar10;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar15);
    puVar11 = (undefined8 *)writeHeader(param_2,(int)uVar18 >> 3,param_6,0);
    if (0 < (int)uVar18) {
      iVar17 = 0;
      uVar9 = 0;
      do {
        while (iVar16 = aiStack_c8[(int)uVar9], iVar16 != -1) {
          lVar10 = (long)iVar16 * 4;
          piVar3 = (int *)(param_3 + lVar10);
          uVar13 = uVar18 - 1 & 0x18 ^ local_d8[iVar16];
          iVar14 = *piVar3;
          puVar12 = (undefined4 *)(lVar10 + param_5);
          uVar5 = *puVar12;
          if (uVar13 == uVar9) {
            writeSample(puVar11,iVar17,uVar5,iVar14,uVar9,1,1,param_6);
            iVar14 = *piVar3;
            iVar17 = iVar17 + 1;
          }
          else {
            iVar16 = 8 - (local_d8[iVar16] & 7);
            iVar14 = iVar14 - iVar16;
            writeSample(puVar11,iVar17,uVar5,iVar16,uVar13,0,1,param_6);
            aiStack_c8[(int)uVar13] = -1;
            writeSample(puVar11,iVar17 + 1,*puVar12,iVar14,uVar9,1,0,param_6);
            iVar17 = iVar17 + 2;
          }
          uVar9 = uVar9 + iVar14;
          if ((int)uVar18 <= (int)uVar9) goto LAB_00100735;
        }
        uVar9 = uVar9 + 8 & 0xfffffff8;
      } while ((int)uVar9 < (int)uVar18);
    }
  }
LAB_00100735:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar11;
  }
LAB_00100831:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void createDFDPacked(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  createDFDPackedShifted();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint * createDFD422(undefined8 param_1,int param_2,long param_3,long param_4,long param_5,
                   long param_6,long param_7)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  uint *puVar7;
  int iVar8;
  ulong __size;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  if (param_2 < 1) {
    uVar12 = 0;
  }
  else {
    lVar5 = 0;
    iVar8 = 0;
    do {
      piVar1 = (int *)(param_3 + lVar5);
      piVar3 = (int *)(param_4 + lVar5);
      lVar5 = lVar5 + 4;
      iVar8 = iVar8 + *piVar1 + *piVar3;
    } while (lVar5 != (long)param_2 * 4);
    iVar11 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar11 = iVar8;
    }
    uVar12 = iVar11 >> 3 & 0xff;
  }
  iVar8 = param_2 * 4 + 6;
  uVar10 = iVar8 * 4 + 4;
  __size = (ulong)uVar10;
  pvVar6 = malloc(__size);
  puVar7 = (uint *)__memset_chk(pvVar6,0,__size,__size);
  puVar7[1] = 0;
  *puVar7 = uVar10;
  puVar7[2] = iVar8 * 0x40000 | 2;
  puVar7[3] = 0x10002;
  puVar7[4] = 1;
  puVar7[5] = uVar12;
  puVar7[6] = 0;
  if (0 < param_2) {
    lVar5 = 0;
    iVar8 = 0;
    puVar9 = puVar7 + 7;
    do {
      iVar11 = *(int *)(param_3 + lVar5);
      uVar12 = *(uint *)(param_5 + lVar5);
      puVar9[2] = 0;
      uVar10 = iVar8 + *(int *)(param_4 + lVar5);
      iVar8 = uVar10 + iVar11;
      bVar4 = *(byte *)(param_6 + lVar5);
      *puVar9 = uVar10 & 0xffff | (iVar11 + -1) * 0x10000 & 0xff0000U | (uVar12 & 0xf) << 0x18;
      puVar2 = (uint *)(param_7 + lVar5);
      lVar5 = lVar5 + 4;
      puVar9[1] = (*puVar2 & 0xff) << 8 | (uint)bVar4;
      puVar9[3] = ~(-1 << ((byte)iVar11 & 0x1f));
      puVar9 = puVar9 + 4;
    } while (lVar5 != (long)param_2 * 4);
  }
  return puVar7;
}



int * createDFDCompressed(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  
  uVar8 = (ulong)param_1;
  uVar1 = *(uint *)(compSampleCount + uVar8 * 4);
  piVar5 = (int *)malloc((ulong)(uVar1 * 4 + 7) << 2);
  piVar5[1] = 0;
  piVar5[6] = 0;
  *piVar5 = uVar1 * 0x10 + 0x1c;
  piVar5[2] = (uVar1 * 0x10 + 0x18) * 0x10000 | 2;
  uVar3 = *(uint *)(compModelMapping + uVar8 * 4) | 0x10100;
  if (param_5 == 8) {
    uVar3 = *(uint *)(compModelMapping + uVar8 * 4) | 0x20100;
  }
  piVar5[3] = uVar3;
  iVar2 = *(int *)(compBytes + uVar8 * 4);
  piVar5[4] = (param_3 + -1) * 0x100 | param_2 - 1U | (param_4 + -1) * 0x10000;
  piVar5[5] = iVar2;
  iVar2 = setChannelFlags(*(undefined4 *)(compFirstChannel + uVar8 * 4),param_5);
  piVar5[8] = 0;
  uVar6 = (*(int *)(compChannelBits + uVar8 * 4) + -1) * 0x10000;
  piVar5[7] = iVar2 << 0x18 | uVar6;
  uVar3 = param_5 - 1;
  if (uVar3 < 7) {
    iVar2 = *(int *)(CSWTCH_28 + (ulong)uVar3 * 4);
    iVar7 = *(int *)(CSWTCH_29 + (ulong)uVar3 * 4);
  }
  else {
    iVar7 = -1;
    iVar2 = 0;
  }
  piVar5[9] = iVar2;
  piVar5[10] = iVar7;
  if (1 < uVar1) {
    iVar4 = setChannelFlags(*(undefined4 *)(compSecondChannel + uVar8 * 4),param_5);
    piVar5[0xc] = 0;
    uVar1 = *(uint *)(compSecondChannelOffset + uVar8 * 4);
    piVar5[0xd] = iVar2;
    piVar5[0xe] = iVar7;
    piVar5[0xb] = uVar6 | uVar1 | iVar4 << 0x18;
  }
  return piVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void createDFDDepthStencil(uint param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = writeHeader((0 < (int)param_1) + (0 < param_2),param_3,0,1);
  uVar1 = _UNK_00101188;
  if (param_1 == 0x20) {
    *(undefined8 *)(lVar2 + 0x1c) = __LC8;
    *(undefined8 *)(lVar2 + 0x24) = uVar1;
  }
  else {
    if ((int)param_1 < 1) {
      if (param_2 < 1) {
        return;
      }
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined4 *)(lVar2 + 0x28) = 1;
      *(uint *)(lVar2 + 0x1c) = (param_2 + -1) * 0x10000 | 0xd000000;
      return;
    }
    *(undefined4 *)(lVar2 + 0x20) = 0;
    *(uint *)(lVar2 + 0x1c) = (param_1 - 1) * 0x10000 | 0xe000000;
    if ((int)param_1 < 0x21) {
      *(undefined4 *)(lVar2 + 0x24) = 0;
      *(int *)(lVar2 + 0x28) = (1 << ((byte)param_1 & 0x1f)) + -1;
      if (param_2 < 1) {
        return;
      }
      goto LAB_00100c36;
    }
    *(undefined4 *)(lVar2 + 0x24) = 0;
    *(undefined4 *)(lVar2 + 0x28) = 0xffffffff;
  }
  if (param_2 < 1) {
    return;
  }
LAB_00100c36:
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined4 *)(lVar2 + 0x38) = 1;
  *(uint *)(lVar2 + 0x2c) = (param_2 + -1) * 0x10000 | param_1 | 0xd000000;
  return;
}



undefined8 * createDFDAlpha(int param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_2;
  if (param_1 == 0) {
    puVar3 = (undefined8 *)malloc(0x2c);
    *puVar3 = 0x2c;
    *(undefined4 *)(puVar3 + 1) = 0x280002;
    uVar2 = 0x10101;
    if ((int)param_3 == 8) {
      uVar2 = 0x20101;
    }
    *(int *)((long)puVar3 + 0x14) = iVar6;
    *(undefined4 *)(puVar3 + 2) = 0;
    *(undefined4 *)((long)puVar3 + 0xc) = uVar2;
    *(undefined4 *)(puVar3 + 3) = 0;
    writeSample(puVar3,0,3,iVar6 * 8,0,1,1,param_3 & 0xffffffff);
  }
  else {
    puVar3 = (undefined8 *)writeHeader(param_2 & 0xffffffff,param_2,param_3,0);
    if (0 < iVar6) {
      iVar4 = 0;
      iVar1 = (iVar6 + -1) * 8;
      do {
        iVar5 = iVar4 + 1;
        writeSample(puVar3,iVar4,3,8,iVar1,iVar6 + -1 == iVar4,iVar4 == 0,param_3 & 0xffffffff);
        iVar4 = iVar5;
        iVar1 = iVar1 + -8;
      } while (iVar6 != iVar5);
    }
  }
  return puVar3;
}


