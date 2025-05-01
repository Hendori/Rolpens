
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FindGridCell(float param_1,float param_2,float param_3)

{
  int iVar1;
  
  iVar1 = (int)(((param_3 - param_1) / (param_2 - param_1)) * __LC0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (0x7ff < iVar1) {
    iVar1 = 0x7ff;
  }
  return iVar1;
}



void QuickSort(long param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
LAB_0010004a:
  bVar3 = (byte)param_4 & 0x1f;
  param_4 = (param_4 << bVar3 | param_4 >> 0x20 - bVar3) + 3 + param_4;
  iVar1 = *(int *)(param_1 + (long)(int)(param_4 % ((param_3 - param_2) + 1U) + param_2) * 4);
  piVar9 = (int *)(param_1 + (long)param_2 * 4);
  lVar5 = (long)param_3;
  iVar7 = param_3;
  iVar12 = param_2;
  iVar10 = param_2;
  do {
    iVar12 = iVar12 + 1;
    iVar2 = *piVar9;
    piVar8 = (int *)(param_1 + lVar5 * 4);
    iVar6 = *piVar8;
    if (iVar1 <= iVar2) {
      if (iVar1 < iVar6) {
        piVar4 = (int *)(param_1 + -4 + lVar5 * 4);
        do {
          piVar8 = piVar4;
          iVar6 = *piVar8;
          iVar7 = iVar7 + -1;
          piVar4 = piVar8 + -1;
        } while (iVar1 < iVar6);
      }
      iVar11 = iVar10;
      if (iVar7 < iVar10) break;
      iVar7 = iVar7 + -1;
      *piVar9 = iVar6;
      *piVar8 = iVar2;
      iVar11 = iVar12;
      if (iVar7 < iVar12) break;
      lVar5 = (long)iVar7;
    }
    piVar9 = piVar9 + 1;
    iVar10 = iVar10 + 1;
  } while( true );
  if (param_2 < iVar7) {
    QuickSort(param_1,param_2,iVar7);
  }
  param_2 = iVar11;
  if (param_3 <= iVar11) {
    return;
  }
  goto LAB_0010004a;
}



void QuickSortEdges(long param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  long lVar17;
  long in_FS_OFFSET;
  
  uVar12 = (ulong)param_2;
  param_2 = -param_2;
  lVar10 = (long)param_4;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
joined_r0x0010015b:
  uVar6 = param_3 + param_2 + 1;
  if (1 < (int)uVar6) {
    if (uVar6 != 2) {
      iVar11 = (int)uVar12;
      uVar15 = uVar12 & 0xffffffff;
      bVar5 = (byte)param_5 & 0x1f;
      lVar17 = (long)param_3;
      param_5 = (param_5 << bVar5 | param_5 >> 0x20 - bVar5) + 3 + param_5;
      iVar1 = *(int *)(param_1 + (long)(int)(param_5 % uVar6 + iVar11) * 0xc + lVar10 * 4);
      puVar13 = (undefined8 *)(param_1 + (long)iVar11 * 0xc);
      iVar16 = iVar11;
      iVar9 = param_3;
      do {
        iVar16 = iVar16 + 1;
        puVar8 = (undefined8 *)(param_1 + lVar17 * 0xc);
        iVar14 = (int)uVar15;
        if (iVar1 <= *(int *)((long)puVar13 + lVar10 * 4)) {
          if (iVar1 < *(int *)((long)puVar8 + lVar10 * 4)) {
            puVar7 = (undefined8 *)(param_1 + -0xc + lVar17 * 0xc);
            do {
              puVar8 = puVar7;
              iVar9 = iVar9 + -1;
              puVar7 = (undefined8 *)((long)puVar8 + -0xc);
            } while (iVar1 < *(int *)((long)puVar8 + lVar10 * 4));
          }
          param_2 = iVar14;
          if (iVar9 < iVar14) goto LAB_001001f0;
          uVar4 = *puVar13;
          iVar9 = iVar9 + -1;
          uVar2 = *(undefined4 *)(puVar13 + 1);
          *puVar13 = *puVar8;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar8 + 1);
          *puVar8 = uVar4;
          *(undefined4 *)(puVar8 + 1) = uVar2;
          param_2 = iVar16;
          if (iVar9 < iVar16) goto LAB_001001f0;
          lVar17 = (long)iVar9;
        }
        uVar15 = (ulong)(iVar14 + 1);
        puVar13 = (undefined8 *)((long)puVar13 + 0xc);
      } while( true );
    }
    puVar13 = (undefined8 *)(param_1 + uVar12 * 0xc);
    puVar8 = (undefined8 *)(param_1 + (long)param_3 * 0xc);
    if (*(int *)((long)puVar8 + lVar10 * 4) < *(int *)((long)puVar13 + lVar10 * 4)) {
      uVar4 = *puVar13;
      uVar2 = *(undefined4 *)(puVar13 + 1);
      *puVar13 = *puVar8;
      *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar8 + 1);
      *puVar8 = uVar4;
      *(undefined4 *)(puVar8 + 1) = uVar2;
    }
  }
LAB_0010020d:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_001001f0:
  if (iVar11 < iVar9) {
    QuickSortEdges(param_1,uVar12 & 0xffffffff,iVar9,param_4,param_5);
  }
  if (param_3 <= param_2) goto LAB_0010020d;
  uVar12 = (ulong)param_2;
  param_2 = -param_2;
  goto joined_r0x0010015b;
}



void AssignRecur_isra_0(long param_1,long param_2,int param_3,int *param_4)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  while( true ) {
    iVar5 = param_4[4];
    lVar1 = param_2 + (long)param_3 * 0x58;
    piVar2 = (int *)(param_1 + (long)(param_3 * 3) * 4);
    iVar4 = 0;
    if ((iVar5 != *piVar2) && (iVar4 = 1, iVar5 != piVar2[1])) {
      iVar4 = (uint)(iVar5 == piVar2[2]) * 3 + -1;
    }
    lVar7 = (long)iVar4;
    if (*(long *)(lVar1 + 0x10 + lVar7 * 8) != 0) {
      return;
    }
    if (param_4 == (int *)0x0) {
      return;
    }
    uVar6 = *(uint *)(lVar1 + 0x4c);
    uVar3 = param_4[5];
    if (((((uVar6 & 4) != 0) && (*(long *)(lVar1 + 0x10) == 0)) && (*(long *)(lVar1 + 0x18) == 0))
       && (*(long *)(lVar1 + 0x20) == 0)) {
      uVar6 = uVar6 & 0xfffffff7 | (uint)(uVar3 != 0) << 3;
      *(uint *)(lVar1 + 0x4c) = uVar6;
    }
    if (((int)uVar6 >> 3 & 1U) != uVar3) break;
    *(int *)(*(long *)(param_4 + 2) + (long)*param_4 * 4) = param_3;
    *param_4 = *param_4 + 1;
    iVar5 = 2;
    if (0 < iVar4) {
      iVar5 = iVar4 + -1;
    }
    *(int **)(lVar1 + 0x10 + lVar7 * 8) = param_4;
    iVar4 = *(int *)(lVar1 + lVar7 * 4);
    param_3 = *(int *)(lVar1 + (long)iVar5 * 4);
    if (-1 < iVar4) {
      AssignRecur_isra_0(param_1,param_2,iVar4,param_4);
    }
    if (param_3 < 0) {
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalcTexArea(long *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long in_FS_OFFSET;
  float fVar4;
  float local_28;
  float local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_1 + 0x20))(param_1,&local_28,(int)*param_2 >> 2,*param_2 & 3);
  fVar2 = local_24;
  fVar4 = local_28;
  (**(code **)(*param_1 + 0x20))(param_1,&local_28,(int)param_2[1] >> 2,param_2[1] & 3);
  fVar3 = local_24;
  fVar1 = local_28;
  (**(code **)(*param_1 + 0x20))(param_1,&local_28,(int)param_2[2] >> 2,param_2[2] & 3);
  fVar4 = (fVar1 - fVar4) * (local_24 - fVar2) - (fVar3 - fVar2) * (local_28 - fVar4);
  if (fVar4 < 0.0) {
    fVar4 = (float)((uint)fVar4 ^ __LC2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar4);
}



void MergeVertsFast(long param_1,long param_2,long *param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long lVar16;
  float *pfVar17;
  undefined1 (*pauVar18) [16];
  int iVar19;
  int iVar20;
  long lVar21;
  undefined1 (*pauVar22) [16];
  long lVar23;
  int iVar24;
  uint uVar25;
  undefined8 *puVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar30 = _LC3;
  while( true ) {
    lVar21 = (long)param_4;
    puVar1 = (undefined8 *)(param_2 + lVar21 * 0x10);
    local_68 = *puVar1;
    local_58 = *puVar1;
    local_60 = *(float *)(puVar1 + 1);
    local_50 = *(float *)(puVar1 + 1);
    if (param_4 < param_5) {
      lVar16 = param_2 + 0x10 + lVar21 * 0x10;
      do {
        lVar23 = 0;
        do {
          fVar28 = *(float *)(lVar16 + lVar23);
          if (*(float *)((long)&local_68 + lVar23) <= fVar28) {
            if (*(float *)((long)&local_58 + lVar23) <= fVar28 &&
                fVar28 != *(float *)((long)&local_58 + lVar23)) {
              *(float *)((long)&local_58 + lVar23) = fVar28;
            }
          }
          else {
            *(float *)((long)&local_68 + lVar23) = fVar28;
          }
          lVar23 = lVar23 + 4;
        } while (lVar23 != 0xc);
        lVar16 = lVar16 + 0x10;
      } while (param_2 + 0x20 + ((ulong)(uint)((param_5 + -1) - param_4) + lVar21) * 0x10 != lVar16)
      ;
    }
    if ((local_58._4_4_ - local_68._4_4_ <= (float)local_58 - (float)local_68) ||
       (iVar20 = 1, fVar28 = local_58._4_4_, fVar29 = local_68._4_4_,
       local_58._4_4_ - local_68._4_4_ <= local_50 - local_60)) {
      iVar20 = (uint)((float)local_58 - (float)local_68 < local_50 - local_60) * 2;
      fVar28 = *(float *)((long)&local_58 + (long)iVar20 * 4);
      fVar29 = *(float *)((long)&local_68 + (long)iVar20 * 4);
    }
    fVar27 = (fVar28 + fVar29) * fVar30;
    if ((fVar28 <= fVar27) || (fVar27 <= fVar29)) break;
    iVar24 = param_5;
    iVar19 = param_4;
LAB_00100672:
    if (iVar19 < iVar24) {
      do {
        pfVar17 = (float *)((long)iVar19 * 0x10 + param_2 + (long)iVar20 * 4);
        if (fVar27 < *pfVar17 || fVar27 == *pfVar17) {
          bVar5 = false;
          goto LAB_00100652;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < iVar24);
      bVar5 = true;
LAB_00100652:
      if (iVar24 <= iVar19) goto LAB_001006d0;
      pfVar17 = (float *)(param_2 + ((long)iVar20 + (long)iVar24 * 4) * 4);
      do {
        if (*pfVar17 <= fVar27 && fVar27 != *pfVar17) {
          if (!bVar5) {
            lVar16 = (long)iVar19;
            lVar21 = (long)iVar24;
            iVar19 = iVar19 + 1;
            iVar24 = iVar24 + -1;
            pauVar22 = (undefined1 (*) [16])(lVar16 * 0x10 + param_2);
            pauVar18 = (undefined1 (*) [16])(lVar21 * 0x10 + param_2);
            uVar4 = *(undefined8 *)(*pauVar22 + 8);
            *pauVar22 = *pauVar18;
            *(undefined8 *)*pauVar18 = *(undefined8 *)*pauVar22;
            *(undefined8 *)(*pauVar18 + 8) = uVar4;
          }
          break;
        }
        iVar24 = iVar24 + -1;
        pfVar17 = pfVar17 + -4;
      } while (iVar19 != iVar24);
      goto LAB_00100672;
    }
LAB_001006d0:
    if (iVar19 == iVar24) {
      pfVar17 = (float *)((long)iVar19 * 0x10 + param_2 + (long)iVar20 * 4);
      if (fVar27 < *pfVar17 || fVar27 == *pfVar17) {
        iVar24 = iVar19 + -1;
      }
      else {
        iVar19 = iVar19 + 1;
      }
    }
    if (param_4 < iVar24) {
      MergeVertsFast(param_1,param_2,param_3);
      fVar30 = _LC3;
    }
    param_4 = iVar19;
    if (param_5 <= iVar19) goto LAB_00100759;
  }
  lVar16 = lVar21;
  iVar20 = param_4;
  while (iVar20 <= param_5) {
    puVar2 = (uint *)(param_1 + (long)*(int *)(param_2 + 0xc + lVar16 * 0x10) * 4);
    uVar25 = *puVar2;
    iVar20 = (int)uVar25 >> 2;
    uVar25 = uVar25 & 3;
    (**(code **)(*param_3 + 0x10))(param_3,&local_4c,iVar20,uVar25);
    fVar12 = local_44;
    fVar27 = local_48;
    fVar30 = local_4c;
    (**(code **)(*param_3 + 0x18))(param_3,&local_4c,iVar20,uVar25);
    fVar13 = local_44;
    fVar8 = local_48;
    fVar28 = local_4c;
    (**(code **)(*param_3 + 0x20))(param_3,&local_4c,iVar20,uVar25);
    fVar9 = local_48;
    fVar29 = local_4c;
    if (param_4 < (int)lVar16) {
      puVar26 = puVar1;
      do {
        puVar3 = (uint *)(param_1 + (long)*(int *)((long)puVar26 + 0xc) * 4);
        uVar25 = *puVar3;
        iVar20 = (int)uVar25 >> 2;
        uVar25 = uVar25 & 3;
        (**(code **)(*param_3 + 0x10))(param_3,&local_4c,iVar20,uVar25);
        fVar14 = local_44;
        fVar10 = local_48;
        fVar6 = local_4c;
        (**(code **)(*param_3 + 0x18))(param_3,&local_4c,iVar20,uVar25);
        fVar15 = local_44;
        fVar11 = local_48;
        fVar7 = local_4c;
        (**(code **)(*param_3 + 0x20))(param_3,&local_4c,iVar20,uVar25);
        if (((((((fVar27 == fVar10 && fVar30 == fVar6) && fVar12 == fVar14) && fVar28 == fVar7) &&
              fVar8 == fVar11) && fVar13 == fVar15) && fVar29 == local_4c) && (fVar9 == local_48)) {
          *puVar2 = *puVar3;
          break;
        }
        puVar26 = puVar26 + 2;
      } while (puVar26 !=
               (undefined8 *)(param_2 + ((ulong)(uint)((int)lVar16 - param_4) + lVar21) * 0x10));
    }
    lVar16 = lVar16 + 1;
    iVar20 = (int)lVar16;
  }
LAB_00100759:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void GenerateSharedVerticesIndexList(uint *param_1,long *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  void *__ptr;
  int *__ptr_00;
  undefined4 *__ptr_01;
  void *__ptr_02;
  long lVar16;
  int *piVar17;
  undefined8 *__ptr_03;
  int iVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  long lVar23;
  int *piVar24;
  int iVar25;
  uint *puVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  uint *puVar29;
  long in_FS_OFFSET;
  float fVar30;
  float local_f0;
  float local_e8;
  float local_e0;
  float local_d8;
  float local_c8;
  float local_50;
  float fStack_4c;
  float local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_2 + 0x10))(param_2,&local_50,0,0);
  iVar25 = param_3 * 3;
  local_f0 = local_48;
  if (1 < iVar25) {
    puVar22 = param_1 + 1;
    local_e8 = local_48;
    local_e0 = local_50;
    local_d8 = fStack_4c;
    local_c8 = local_50;
    fVar1 = fStack_4c;
    do {
      while ((**(code **)(*param_2 + 0x10))(param_2,&local_50,(int)*puVar22 >> 2,*puVar22 & 3),
            local_e0 <= local_50) {
        fVar30 = local_50;
        if (local_50 <= local_c8) {
          fVar30 = local_c8;
        }
        local_c8 = fVar30;
        if (local_d8 <= fStack_4c) goto LAB_00100b56;
LAB_00100bd5:
        local_d8 = fStack_4c;
        if (local_48 < local_f0) goto LAB_00100be6;
LAB_00100b6d:
        fVar30 = local_48;
        if (local_48 <= local_e8) {
          fVar30 = local_e8;
        }
        puVar22 = puVar22 + 1;
        local_e8 = fVar30;
        if (param_1 + (ulong)(iVar25 - 2) + 2 == puVar22) goto LAB_00100c0d;
      }
      local_e0 = local_50;
      if (fStack_4c < local_d8) goto LAB_00100bd5;
LAB_00100b56:
      fVar30 = fStack_4c;
      if (fStack_4c <= fVar1) {
        fVar30 = fVar1;
      }
      fVar1 = fVar30;
      if (local_f0 <= local_48) goto LAB_00100b6d;
LAB_00100be6:
      puVar22 = puVar22 + 1;
      local_f0 = local_48;
    } while (param_1 + (ulong)(iVar25 - 2) + 2 != puVar22);
  }
LAB_00100c0d:
  __ptr = malloc((long)param_3 * 0xc);
  __ptr_00 = (int *)calloc(0x2000,1);
  __ptr_01 = (undefined4 *)malloc(0x2000);
  __ptr_02 = calloc(0x2000,1);
  if (__ptr == (void *)0x0) {
LAB_00101704:
    if (__ptr_00 != (int *)0x0) goto LAB_001010c0;
  }
  else {
    if (__ptr_00 == (int *)0x0) {
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      goto LAB_00101704;
    }
    if ((__ptr_02 != (void *)0x0) && (__ptr_01 != (undefined4 *)0x0)) {
      if (iVar25 < 1) {
        iVar14 = 0;
      }
      else {
        puVar22 = param_1;
        do {
          (**(code **)(*param_2 + 0x10))(param_2,&local_50,(int)*puVar22 >> 2,*puVar22 & 3);
          puVar22 = puVar22 + 1;
          iVar14 = FindGridCell();
          __ptr_00[iVar14] = __ptr_00[iVar14] + 1;
        } while (param_1 + (ulong)(param_3 * 3 - 1) + 1 != puVar22);
        iVar14 = *__ptr_00;
      }
      *__ptr_01 = 0;
      lVar16 = 0;
      iVar20 = 0;
      do {
        iVar20 = iVar20 + *(int *)((long)__ptr_00 + lVar16);
        *(int *)((long)__ptr_01 + lVar16 + 4) = iVar20;
        lVar16 = lVar16 + 4;
      } while (lVar16 != 0x1ffc);
      lVar16 = 0;
      if (0 < iVar25) {
        do {
          (**(code **)(*param_2 + 0x10))
                    (param_2,&local_50,(int)param_1[lVar16] >> 2,param_1[lVar16] & 3);
          lVar23 = lVar16 + 1;
          iVar15 = FindGridCell();
          piVar17 = (int *)((long)__ptr_02 + (long)iVar15 * 4);
          iVar20 = *piVar17;
          *(int *)((long)__ptr + ((long)(int)__ptr_01[iVar15] + (long)iVar20) * 4) = (int)lVar16;
          *piVar17 = iVar20 + 1;
          lVar16 = lVar23;
        } while ((int)lVar23 < iVar25);
      }
      free(__ptr_02);
      if (iVar14 < __ptr_00[1]) {
        iVar14 = __ptr_00[1];
      }
      piVar17 = __ptr_00 + 2;
      do {
        if (iVar14 < *piVar17) {
          iVar14 = *piVar17;
        }
        if (iVar14 < piVar17[1]) {
          iVar14 = piVar17[1];
        }
        piVar17 = piVar17 + 2;
      } while (__ptr_00 + 0x800 != piVar17);
      lVar16 = 0;
      __ptr_03 = (undefined8 *)malloc((long)iVar14 << 4);
      do {
        iVar25 = *(int *)((long)__ptr_00 + lVar16);
        if (1 < iVar25) {
          piVar17 = (int *)((long)__ptr + (long)*(int *)((long)__ptr_01 + lVar16) * 4);
          if (__ptr_03 == (undefined8 *)0x0) {
            iVar14 = 0;
            piVar19 = piVar17;
            do {
              while( true ) {
                iVar20 = *piVar19;
                uVar21 = param_1[iVar20];
                iVar15 = (int)uVar21 >> 2;
                uVar21 = uVar21 & 3;
                (**(code **)(*param_2 + 0x10))(param_2,&local_50,iVar15,uVar21);
                fVar10 = local_48;
                fVar5 = fStack_4c;
                fVar1 = local_50;
                (**(code **)(*param_2 + 0x18))(param_2,&local_50,iVar15,uVar21);
                fVar11 = local_48;
                fVar6 = fStack_4c;
                fVar30 = local_50;
                (**(code **)(*param_2 + 0x20))(param_2,&local_50,iVar15,uVar21);
                fVar7 = fStack_4c;
                fVar2 = local_50;
                piVar24 = piVar17;
                if (iVar14 != 0) break;
                iVar14 = 1;
                piVar19 = piVar19 + 1;
              }
              do {
                iVar15 = *piVar24;
                uVar21 = param_1[iVar15];
                iVar18 = (int)uVar21 >> 2;
                uVar21 = uVar21 & 3;
                (**(code **)(*param_2 + 0x10))(param_2,&local_50,iVar18,uVar21);
                fVar12 = local_48;
                fVar8 = fStack_4c;
                fVar3 = local_50;
                (**(code **)(*param_2 + 0x18))(param_2,&local_50,iVar18,uVar21);
                fVar13 = local_48;
                fVar9 = fStack_4c;
                fVar4 = local_50;
                (**(code **)(*param_2 + 0x20))(param_2,&local_50,iVar18,uVar21);
                if (((((((fVar1 == fVar3 && fVar5 == fVar8) && fVar10 == fVar12) && fVar30 == fVar4)
                      && fVar6 == fVar9) && fVar11 == fVar13) && fVar2 == local_50) &&
                   (fVar7 == fStack_4c)) {
                  param_1[iVar20] = param_1[iVar15];
                  break;
                }
                piVar24 = piVar24 + 1;
              } while (piVar19 != piVar24);
              iVar14 = iVar14 + 1;
              piVar19 = piVar19 + 1;
            } while (iVar25 != iVar14);
          }
          else {
            puVar27 = __ptr_03;
            do {
              iVar14 = *piVar17;
              puVar28 = puVar27 + 2;
              piVar17 = piVar17 + 1;
              (**(code **)(*param_2 + 0x10))
                        (param_2,&local_50,(int)param_1[iVar14] >> 2,param_1[iVar14] & 3);
              *(int *)((long)puVar27 + 0xc) = iVar14;
              *puVar27 = CONCAT44(fStack_4c,local_50);
              *(float *)(puVar27 + 1) = local_48;
              puVar27 = puVar28;
            } while (__ptr_03 + (long)iVar25 * 2 != puVar28);
            MergeVertsFast(param_1,__ptr_03,param_2,0,iVar25 + -1);
          }
        }
        lVar16 = lVar16 + 4;
      } while (lVar16 != 0x2000);
      if (__ptr_03 != (undefined8 *)0x0) {
        free(__ptr_03);
      }
      free(__ptr);
      free(__ptr_00);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        free(__ptr_01);
        return;
      }
      goto LAB_001013eb;
    }
    free(__ptr);
LAB_001010c0:
    free(__ptr_00);
  }
  if (__ptr_01 != (undefined4 *)0x0) {
    free(__ptr_01);
  }
  if (__ptr_02 != (void *)0x0) {
    free(__ptr_02);
  }
  if (0 < param_3) {
    puVar22 = param_1 + 3;
    iVar25 = 0;
    do {
      puVar26 = puVar22 + -3;
      do {
        iVar14 = (int)*puVar26 >> 2;
        uVar21 = *puVar26 & 3;
        (**(code **)(*param_2 + 0x10))(param_2,&local_50,iVar14,uVar21);
        fVar10 = local_48;
        fVar5 = fStack_4c;
        fVar1 = local_50;
        (**(code **)(*param_2 + 0x18))(param_2,&local_50,iVar14,uVar21);
        fVar11 = local_48;
        fVar6 = fStack_4c;
        fVar30 = local_50;
        iVar20 = 0;
        (**(code **)(*param_2 + 0x20))(param_2,&local_50,iVar14,uVar21);
        fVar7 = fStack_4c;
        fVar2 = local_50;
        puVar29 = param_1;
        do {
          lVar16 = 0;
          do {
            iVar14 = (int)puVar29[lVar16] >> 2;
            uVar21 = puVar29[lVar16] & 3;
            (**(code **)(*param_2 + 0x10))(param_2,&local_50,iVar14,uVar21);
            fVar12 = local_48;
            fVar8 = fStack_4c;
            fVar3 = local_50;
            (**(code **)(*param_2 + 0x18))(param_2,&local_50,iVar14,uVar21);
            fVar13 = local_48;
            fVar9 = fStack_4c;
            fVar4 = local_50;
            (**(code **)(*param_2 + 0x20))(param_2,&local_50,iVar14,uVar21);
            if (((((((fVar5 == fVar8 && fVar1 == fVar3) && fVar10 == fVar12) && fVar30 == fVar4) &&
                  fVar6 == fVar9) && fVar11 == fVar13) && fVar2 == local_50) && (fVar7 == fStack_4c)
               ) goto LAB_0010138a;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 3);
          puVar29 = puVar29 + 3;
          iVar20 = iVar20 + 1;
        } while (iVar20 <= iVar25);
LAB_0010138a:
        *puVar26 = 0xffffffff;
        puVar26 = puVar26 + 1;
      } while (puVar26 != puVar22);
      puVar22 = puVar22 + 3;
      iVar25 = iVar25 + 1;
    } while (param_3 != iVar25);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001013eb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 genTangSpace(float param_1,long *param_2)

{
  ulong *puVar1;
  float *pfVar2;
  byte *pbVar3;
  size_t sVar4;
  byte bVar5;
  long *plVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint *__ptr;
  undefined1 (*__ptr_00) [16];
  undefined1 (*pauVar21) [16];
  uint *puVar22;
  int *__ptr_01;
  void *__ptr_02;
  undefined8 *puVar23;
  int *piVar24;
  int *__ptr_03;
  int *piVar25;
  void *pvVar26;
  undefined1 (*pauVar27) [16];
  undefined8 uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar33;
  code *pcVar34;
  long lVar35;
  uint *puVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  int *piVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  int iVar44;
  uint uVar45;
  long lVar46;
  long lVar47;
  int *piVar48;
  byte *pbVar49;
  int *piVar50;
  uint *puVar51;
  uint *puVar52;
  uint *puVar53;
  uint *puVar54;
  uint uVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  byte *pbVar59;
  long lVar60;
  long in_FS_OFFSET;
  float fVar61;
  undefined4 uVar62;
  ulong uVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar71;
  float fVar72;
  undefined1 auVar70 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar76 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  int local_200;
  float local_1cc;
  long local_1c8;
  long local_1b8;
  float local_1b0;
  float local_1ac;
  float local_160;
  long local_110;
  uint local_cc;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  uint uVar32;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar17 = (**(code **)*param_2)();
  plVar6 = (long *)*param_2;
  if (((((*plVar6 != 0) && (pcVar34 = (code *)plVar6[1], pcVar34 != (code *)0x0)) &&
       (plVar6[2] != 0)) && ((plVar6[3] != 0 && (plVar6[4] != 0)))) && (0 < iVar17)) {
    iVar57 = 0;
    iVar44 = 0;
    while( true ) {
      iVar18 = (*pcVar34)(param_2,iVar57);
      if (iVar18 == 3) {
        iVar44 = iVar44 + 1;
      }
      else if (iVar18 == 4) {
        iVar44 = iVar44 + 2;
      }
      if (iVar17 == iVar57 + 1) break;
      iVar57 = iVar57 + 1;
      pcVar34 = *(code **)(*param_2 + 8);
    }
    if (0 < iVar44) {
      lVar46 = (long)iVar44;
      __ptr = (uint *)malloc(lVar46 * 0xc);
      sVar4 = lVar46 * 0x58;
      __ptr_00 = (undefined1 (*) [16])malloc(sVar4);
      if (__ptr == (uint *)0x0) {
LAB_00104879:
        if (__ptr_00 == (undefined1 (*) [16])0x0) goto LAB_00101992;
      }
      else {
        if (__ptr_00 == (undefined1 (*) [16])0x0) {
          if (__ptr != (uint *)0x0) {
            free(__ptr);
          }
          goto LAB_00104879;
        }
        iVar18 = 0;
        iVar17 = 0;
        puVar23 = (undefined8 *)*param_2;
        for (iVar58 = 0; iVar19 = (*(code *)*puVar23)(param_2), iVar58 < iVar19; iVar58 = iVar58 + 1
            ) {
          iVar19 = (**(code **)(*param_2 + 8))(param_2,iVar58);
          if (iVar19 - 3U < 2) {
            uVar41 = iVar58 * 4;
            lVar60 = (long)(iVar18 * 3);
            puVar23 = (undefined8 *)*param_2;
            puVar1 = (ulong *)(__ptr + lVar60);
            lVar35 = (long)iVar18 * 0x58;
            *(int *)((long)__ptr_00 + lVar35 + 0x50) = iVar17;
            *(int *)((long)__ptr_00 + lVar35 + 0x48) = iVar58;
            uVar13 = _LC8;
            if (iVar19 == 3) {
              *(uint *)puVar1 = uVar41;
              iVar18 = iVar18 + 1;
              *(undefined1 *)((long)__ptr_00 + lVar35 + 0x56) = 2;
              *(undefined2 *)((long)__ptr_00 + lVar35 + 0x54) = uVar13;
              __ptr[lVar60 + 1] = uVar41 | 1;
              __ptr[lVar60 + 2] = uVar41 | 2;
            }
            else {
              iVar40 = (int)uVar41 >> 2;
              uVar63 = CONCAT44(uVar41,uVar41) | _LC9;
              *(int *)((long)__ptr_00 + lVar35 + 0xa0) = iVar58;
              *(int *)((long)__ptr_00 + lVar35 + 0xa8) = iVar17;
              (*(code *)puVar23[4])(param_2,local_98,iVar40,0);
              uVar62 = local_98._0_4_;
              uVar14 = local_98._4_4_;
              (**(code **)(*param_2 + 0x20))(param_2,local_98,iVar40,1);
              uVar8 = local_98._0_4_;
              uVar15 = local_98._4_4_;
              (**(code **)(*param_2 + 0x20))(param_2,local_98,iVar40,2);
              uVar9 = local_98._0_4_;
              uVar16 = local_98._4_4_;
              (**(code **)(*param_2 + 0x20))(param_2,local_98,iVar40);
              fVar67 = ((float)uVar16 - (float)uVar14) * ((float)uVar16 - (float)uVar14) +
                       ((float)uVar9 - (float)uVar62) * ((float)uVar9 - (float)uVar62) + 0.0;
              fVar61 = ((float)local_98._0_4_ - (float)uVar8) *
                       ((float)local_98._0_4_ - (float)uVar8) +
                       ((float)local_98._4_4_ - (float)uVar15) *
                       ((float)local_98._4_4_ - (float)uVar15) + 0.0;
              if (fVar67 < fVar61) {
LAB_00103779:
                uVar13 = _LC8;
                *(undefined1 *)((long)__ptr_00 + lVar35 + 0x56) = 2;
                iVar18 = iVar18 + 2;
                *(undefined2 *)((long)__ptr_00 + lVar35 + 0x54) = uVar13;
                puVar23 = (undefined8 *)*param_2;
                *(undefined2 *)((long)__ptr_00 + lVar35 + 0xac) = _LC10;
                *puVar1 = CONCAT44(uVar41,uVar41) | 0x100000000;
                puVar1[1] = CONCAT44(uVar41,uVar41) | 2;
                *(undefined1 *)((long)__ptr_00 + lVar35 + 0xae) = 3;
                *(ulong *)(__ptr + lVar60 + 4) = uVar63;
              }
              else {
                puVar23 = (undefined8 *)*param_2;
                if (fVar67 <= fVar61) {
                  (*(code *)puVar23[2])(param_2,local_98,iVar40,0);
                  uVar62 = local_98._0_4_;
                  uVar14 = local_98._4_4_;
                  fVar61 = fStack_90;
                  (**(code **)(*param_2 + 0x10))(param_2,local_98,iVar40,1);
                  uVar15 = local_98._4_4_;
                  fVar67 = fStack_90;
                  uVar8 = local_98._0_4_;
                  (**(code **)(*param_2 + 0x10))(param_2,local_98,iVar40,2);
                  uVar9 = local_98._0_4_;
                  uVar16 = local_98._4_4_;
                  fVar71 = fStack_90;
                  (**(code **)(*param_2 + 0x10))(param_2,local_98,iVar40);
                  if (((float)uVar9 - (float)uVar62) * ((float)uVar9 - (float)uVar62) +
                      ((float)uVar16 - (float)uVar14) * ((float)uVar16 - (float)uVar14) +
                      (fVar71 - fVar61) * (fVar71 - fVar61) <=
                      ((float)local_98._0_4_ - (float)uVar8) *
                      ((float)local_98._0_4_ - (float)uVar8) +
                      ((float)local_98._4_4_ - (float)uVar15) *
                      ((float)local_98._4_4_ - (float)uVar15) +
                      (fStack_90 - fVar67) * (fStack_90 - fVar67)) goto LAB_00103779;
                  puVar23 = (undefined8 *)*param_2;
                }
                *(undefined1 *)((long)__ptr_00 + lVar35 + 0x56) = 3;
                iVar18 = iVar18 + 2;
                *(undefined2 *)((long)__ptr_00 + lVar35 + 0x54) = 0x100;
                *(undefined2 *)((long)__ptr_00 + lVar35 + 0xac) = 0x201;
                *(undefined1 *)((long)__ptr_00 + lVar35 + 0xae) = 3;
                *puVar1 = CONCAT44(uVar41,uVar41) | 0x100000000;
                puVar1[1] = CONCAT44(uVar41,uVar41) | 0x100000003;
                *(ulong *)(__ptr + lVar60 + 4) = uVar63;
              }
            }
            iVar17 = iVar17 + iVar19;
          }
          else {
            puVar23 = (undefined8 *)*param_2;
          }
        }
        pauVar21 = __ptr_00;
        if ((sVar4 & 8) == 0) goto LAB_00101bbd;
        *(undefined4 *)(__ptr_00[4] + 0xc) = 0;
        for (pauVar21 = (undefined1 (*) [16])(__ptr_00[5] + 8);
            (undefined1 (*) [16])((long)__ptr_00 + sVar4) != pauVar21; pauVar21 = pauVar21 + 0xb) {
LAB_00101bbd:
          *(undefined4 *)(pauVar21[4] + 0xc) = 0;
          *(undefined4 *)(pauVar21[10] + 4) = 0;
        }
        puVar22 = (uint *)(__ptr_00[4] + 0xc);
        GenerateSharedVerticesIndexList(__ptr,param_2,iVar44);
        iVar18 = 0;
        puVar36 = __ptr;
        do {
          while( true ) {
            uVar41 = puVar36[1];
            uVar29 = puVar36[2];
            (**(code **)(*param_2 + 0x10))(param_2,local_98,(int)*puVar36 >> 2,*puVar36 & 3);
            uVar62 = local_98._0_4_;
            uVar9 = local_98._4_4_;
            fVar61 = fStack_90;
            (**(code **)(*param_2 + 0x10))(param_2,local_98,(int)uVar41 >> 2,uVar41 & 3);
            uVar8 = local_98._0_4_;
            uVar14 = local_98._4_4_;
            fVar67 = fStack_90;
            (**(code **)(*param_2 + 0x10))(param_2,local_98,(int)uVar29 >> 2,uVar29 & 3);
            if ((float)uVar8 == (float)uVar62) break;
LAB_00101d71:
            if (((float)local_98._0_4_ == (float)uVar62) &&
               (((float)local_98._4_4_ == (float)uVar9 && (fStack_90 == fVar61)))) {
LAB_00101c4a:
              *puVar22 = *puVar22 | 1;
              iVar18 = iVar18 + 1;
            }
            else {
LAB_00101d8f:
              if ((float)local_98._0_4_ == (float)uVar8) goto LAB_00101d9f;
            }
LAB_00101c52:
            puVar36 = puVar36 + 3;
            puVar22 = puVar22 + 0x16;
            if (__ptr + lVar46 * 3 == puVar36) goto LAB_00101dd4;
          }
          if ((float)uVar14 == (float)uVar9) {
            if (fVar67 != fVar61) goto LAB_00101d71;
            goto LAB_00101c4a;
          }
          if ((float)local_98._0_4_ != (float)uVar62) goto LAB_00101d8f;
          if (((float)local_98._4_4_ == (float)uVar9) && (fStack_90 == fVar61)) goto LAB_00101c4a;
LAB_00101d9f:
          if ((float)local_98._4_4_ != (float)uVar14) goto LAB_00101c52;
          if (fStack_90 == fVar67) goto LAB_00101c4a;
          puVar36 = puVar36 + 3;
          puVar22 = puVar22 + 0x16;
        } while (__ptr + lVar46 * 3 != puVar36);
LAB_00101dd4:
        uVar41 = iVar44 - iVar18;
        iVar18 = 0;
        if (iVar44 != 1) {
          do {
            while (lVar46 = (long)iVar18 * 0x58,
                  *(int *)((long)__ptr_00 + lVar46 + 0x48) ==
                  *(int *)((long)__ptr_00 + lVar46 + 0xa0)) {
              uVar29 = *(uint *)((long)__ptr_00 + lVar46 + 0x4c);
              if (((*(uint *)((long)__ptr_00 + lVar46 + 0xa4) ^ uVar29) & 1) != 0) {
                *(uint *)((long)__ptr_00 + lVar46 + 0x4c) = uVar29 | 2;
                puVar22 = (uint *)((long)__ptr_00 + lVar46 + 0xa4);
                *puVar22 = *puVar22 | 2;
              }
              iVar18 = iVar18 + 2;
              if (iVar44 + -1 <= iVar18) goto LAB_00101e48;
            }
            iVar18 = iVar18 + 1;
          } while (iVar18 < iVar44 + -1);
        }
LAB_00101e48:
        if ((int)uVar41 < 1) {
          local_1c8 = (long)(int)uVar41;
          puVar22 = (uint *)malloc(local_1c8 * 0x24);
          if (puVar22 != (uint *)0x0) {
            QuickSortEdges(puVar22,0,uVar41 * 3 + -1,0);
            local_1c8 = local_1c8 * 2;
            goto LAB_00102564;
          }
          local_1c8 = local_1c8 * 2;
        }
        else {
          iVar19 = 0;
          iVar58 = 1;
          pauVar21 = __ptr_00;
          iVar18 = 1;
          puVar22 = __ptr;
          do {
            puVar22 = puVar22 + 3;
            if ((pauVar21[4][0xc] & 1) == 0) {
              if (iVar58 <= iVar18) {
                iVar58 = iVar18 + 1;
              }
            }
            else {
              pauVar27 = (undefined1 (*) [16])((long)__ptr_00 + (long)iVar58 * 0x58);
              while( true ) {
                if (iVar44 <= iVar58) goto LAB_00101e8f;
                if ((pauVar27[4][0xc] & 1) == 0) break;
                iVar58 = iVar58 + 1;
                pauVar27 = (undefined1 (*) [16])(pauVar27[5] + 8);
              }
              puVar36 = __ptr + iVar58 * 3;
              puVar53 = __ptr + iVar19;
              do {
                uVar29 = *puVar53;
                puVar54 = puVar53 + 1;
                *puVar53 = *puVar36;
                *puVar36 = uVar29;
                puVar36 = puVar36 + 1;
                puVar53 = puVar54;
              } while (puVar22 != puVar54);
              uVar28 = *(undefined8 *)(*pauVar27 + 8);
              _local_98 = *pauVar21;
              iVar58 = iVar58 + 1;
              local_88 = *(undefined4 *)pauVar21[1];
              uStack_84 = *(undefined4 *)(pauVar21[1] + 4);
              uStack_80 = *(undefined4 *)(pauVar21[1] + 8);
              uStack_7c = *(undefined4 *)(pauVar21[1] + 0xc);
              local_78 = *(undefined8 *)pauVar21[2];
              uStack_70 = *(undefined8 *)(pauVar21[2] + 8);
              *(undefined8 *)*pauVar21 = *(undefined8 *)*pauVar27;
              *(undefined8 *)(*pauVar21 + 8) = uVar28;
              uVar28 = *(undefined8 *)(pauVar27[1] + 8);
              local_68 = pauVar21[3];
              local_58 = pauVar21[4];
              local_48 = *(undefined8 *)pauVar21[5];
              *(undefined8 *)pauVar21[1] = *(undefined8 *)pauVar27[1];
              *(undefined8 *)(pauVar21[1] + 8) = uVar28;
              uVar28 = *(undefined8 *)(pauVar27[2] + 8);
              *(undefined8 *)pauVar21[2] = *(undefined8 *)pauVar27[2];
              *(undefined8 *)(pauVar21[2] + 8) = uVar28;
              uVar62 = *(undefined4 *)(pauVar27[3] + 4);
              uVar8 = *(undefined4 *)(pauVar27[3] + 8);
              uVar9 = *(undefined4 *)(pauVar27[3] + 0xc);
              *(undefined4 *)pauVar21[3] = *(undefined4 *)pauVar27[3];
              *(undefined4 *)(pauVar21[3] + 4) = uVar62;
              *(undefined4 *)(pauVar21[3] + 8) = uVar8;
              *(undefined4 *)(pauVar21[3] + 0xc) = uVar9;
              uVar62 = *(undefined4 *)(pauVar27[4] + 4);
              uVar8 = *(undefined4 *)(pauVar27[4] + 8);
              uVar9 = *(undefined4 *)(pauVar27[4] + 0xc);
              *(undefined4 *)pauVar21[4] = *(undefined4 *)pauVar27[4];
              *(undefined4 *)(pauVar21[4] + 4) = uVar62;
              *(undefined4 *)(pauVar21[4] + 8) = uVar8;
              *(undefined4 *)(pauVar21[4] + 0xc) = uVar9;
              *(undefined8 *)pauVar21[5] = *(undefined8 *)pauVar27[5];
              *(undefined8 *)pauVar27[5] = local_48;
              *pauVar27 = _local_98;
              *(undefined4 *)pauVar27[1] = local_88;
              *(undefined4 *)(pauVar27[1] + 4) = uStack_84;
              *(undefined4 *)(pauVar27[1] + 8) = uStack_80;
              *(undefined4 *)(pauVar27[1] + 0xc) = uStack_7c;
              *(undefined8 *)pauVar27[2] = local_78;
              *(undefined8 *)(pauVar27[2] + 8) = uStack_70;
              pauVar27[3] = local_68;
              pauVar27[4] = local_58;
            }
            pauVar21 = (undefined1 (*) [16])(pauVar21[5] + 8);
            iVar19 = iVar19 + 3;
            bVar7 = iVar18 < (int)uVar41;
            iVar18 = iVar18 + 1;
          } while (bVar7);
LAB_00101e8f:
          lVar46 = (long)(int)uVar41;
          pauVar21 = __ptr_00;
          do {
            *(uint *)(pauVar21[4] + 0xc) = *(uint *)(pauVar21[4] + 0xc) | 4;
            pauVar27 = pauVar21 + 5;
            *(undefined8 *)*pauVar21 = 0xffffffffffffffff;
            *(undefined4 *)(*pauVar21 + 8) = 0xffffffff;
            pauVar21[1] = (undefined1  [16])0x0;
            *(undefined8 *)pauVar21[2] = 0;
            *(undefined1 (*) [16])(pauVar21[2] + 8) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pauVar21[3] + 8) = (undefined1  [16])0x0;
            pauVar21 = (undefined1 (*) [16])(*pauVar27 + 8);
          } while ((undefined1 (*) [16])((long)__ptr_00 + lVar46 * 0x58) !=
                   (undefined1 (*) [16])(*pauVar27 + 8));
          local_1c8 = lVar46 * 2;
          puVar23 = (undefined8 *)(__ptr_00[2] + 8);
          puVar22 = __ptr;
          do {
            while( true ) {
              (**(code **)(*param_2 + 0x10))(param_2,local_98,(int)*puVar22 >> 2,*puVar22 & 3);
              auVar66 = _local_98;
              fVar67 = fStack_90;
              (**(code **)(*param_2 + 0x10))(param_2,local_98,(int)puVar22[1] >> 2,puVar22[1] & 3);
              uVar62 = local_98._0_4_;
              uVar14 = local_98._4_4_;
              fVar71 = fStack_90;
              (**(code **)(*param_2 + 0x10))(param_2,local_98,(int)puVar22[2] >> 2,puVar22[2] & 3);
              uVar8 = local_98._0_4_;
              uVar15 = local_98._4_4_;
              fVar72 = fStack_90;
              (**(code **)(*param_2 + 0x20))(param_2,local_98,(int)*puVar22 >> 2,*puVar22 & 3);
              auVar76 = _local_98;
              (**(code **)(*param_2 + 0x20))(param_2,local_98,(int)puVar22[1] >> 2,puVar22[1] & 3);
              uVar9 = local_98._0_4_;
              uVar16 = local_98._4_4_;
              (**(code **)(*param_2 + 0x20))(param_2,local_98,(int)puVar22[2] >> 2,puVar22[2] & 3);
              uVar20 = _LC12;
              fVar61 = __LC13;
              fVar79 = auVar76._0_4_;
              fVar69 = auVar76._4_4_;
              fVar74 = (float)uVar16 - fVar69;
              fVar68 = (float)uVar9 - fVar79;
              fVar69 = (float)local_98._4_4_ - fVar69;
              fVar79 = (float)local_98._0_4_ - fVar79;
              fVar75 = fVar69 * fVar68 - fVar74 * fVar79;
              auVar76._0_4_ = (float)((uint)fVar75 & _LC12);
              uVar32 = (uint)(0.0 < fVar75);
              uVar31 = uVar32 << 3;
              uVar29 = *(uint *)((long)puVar23 + 0x24);
              *(uint *)((long)puVar23 + 0x24) = uVar31 | uVar29;
              if (fVar61 < auVar76._0_4_) break;
LAB_00101f0f:
              puVar22 = puVar22 + 3;
              puVar23 = puVar23 + 0xb;
              if (__ptr + lVar46 * 3 == puVar22) goto LAB_0010231f;
            }
            fVar79 = (float)((uint)fVar79 ^ __LC2);
            fVar75 = auVar66._0_4_;
            fVar84 = (float)uVar8 - fVar75;
            fVar86 = auVar66._4_4_;
            fVar85 = (float)uVar14 - fVar86;
            fVar82 = (float)uVar8 - fVar75;
            fVar83 = (float)uVar15 - fVar86;
            fVar80 = (float)uVar62 - fVar75;
            fVar81 = (float)uVar14 - fVar86;
            fVar75 = (float)uVar62 - fVar75;
            fVar86 = (float)uVar15 - fVar86;
            fVar77 = (fVar71 - fVar67) * fVar79 + (fVar72 - fVar67) * fVar68;
            fVar78 = _UNK_00104b34 * 0.0 + 0.0;
            fVar73 = (fVar71 - fVar67) * fVar69 - (fVar72 - fVar67) * fVar74;
            fVar87 = fVar75 * fVar79 + fVar84 * fVar68;
            fVar61 = fVar85 * fVar69 - fVar86 * fVar74;
            fVar67 = 0.0 - _UNK_00104b34 * 0.0;
            fVar75 = fVar69 * fVar75 - fVar74 * fVar84;
            fVar71 = fVar79 * fVar85 + fVar68 * fVar86;
            fVar72 = _UNK_00104b34 * 0.0 + 0.0;
            auVar66._0_4_ = fVar61 * fVar61 + fVar75 * fVar75 + fVar73 * fVar73;
            auVar66._4_4_ = fVar87 * fVar87 + fVar71 * fVar71 + fVar77 * fVar77;
            auVar66._8_4_ = fVar67 * fVar67 + 0.0 + 0.0;
            auVar66._12_4_ = fVar72 * fVar72 + 0.0 + fVar78 * fVar78;
            auVar66 = sqrtps(auVar66,auVar66);
            fVar61 = _LC5;
            if (uVar32 == 0 && (uVar29 & 8) == 0) {
              fVar61 = _LC4;
            }
            if (__LC13 < (float)((uint)auVar66._0_4_ & uVar20)) {
              fVar67 = fVar61 / auVar66._0_4_;
              *(float *)(puVar23 + 1) = fVar73 * fVar67;
              *puVar23 = CONCAT44((fVar69 * fVar81 - fVar74 * fVar83) * fVar67,
                                  (fVar69 * fVar80 - fVar74 * fVar82) * fVar67);
            }
            if (__LC13 < (float)((uint)auVar66._4_4_ & uVar20)) {
              fVar61 = fVar61 / auVar66._4_4_;
              *(float *)((long)puVar23 + 0x14) = fVar77 * fVar61;
              *(ulong *)((long)puVar23 + 0xc) =
                   CONCAT44((fVar68 * fVar83 + fVar79 * fVar81) * fVar61,
                            (fVar68 * fVar82 + fVar79 * fVar80) * fVar61);
            }
            auVar76._4_4_ = auVar76._0_4_;
            auVar76._8_8_ = _LC14;
            auVar66 = divps(auVar66,auVar76);
            puVar23[3] = auVar66._0_8_;
            if (((float)(auVar66._0_4_ & uVar20) <= __LC13) ||
               ((float)(auVar66._4_4_ & uVar20) <= __LC13)) goto LAB_00101f0f;
            puVar22 = puVar22 + 3;
            *(uint *)((long)puVar23 + 0x24) = uVar31 | uVar29 & 0xfffffffb;
            puVar23 = puVar23 + 0xb;
          } while (__ptr + lVar46 * 3 != puVar22);
LAB_0010231f:
          if (uVar41 != 1) {
            iVar18 = 0;
            do {
              while( true ) {
                lVar35 = (long)__ptr_00 + (long)iVar18 * 0x58;
                lVar60 = (long)__ptr_00 + (long)iVar18 * 0x58 + 0x58;
                if (*(int *)(lVar35 + 0x48) != *(int *)(lVar60 + 0x48)) break;
                uVar29 = *(uint *)(lVar60 + 0x4c);
                if ((((*(uint *)(lVar35 + 0x4c) | uVar29) & 1) == 0) &&
                   (((*(uint *)(lVar35 + 0x4c) ^ uVar29) & 8) != 0)) {
                  if ((uVar29 & 4) == 0) {
                    fVar61 = (float)CalcTexArea(param_2,__ptr + iVar18 * 3);
                    fVar67 = (float)CalcTexArea(param_2,__ptr + (long)(iVar18 * 3) + 3);
                    lVar47 = lVar35;
                    if (fVar67 <= fVar61) goto LAB_00102383;
                  }
                  else {
LAB_00102383:
                    lVar47 = lVar60;
                    lVar60 = lVar35;
                  }
                  uVar29 = *(uint *)(lVar47 + 0x4c) & 0xfffffff7;
                  *(uint *)(lVar47 + 0x4c) = uVar29;
                  *(uint *)(lVar47 + 0x4c) = *(uint *)(lVar60 + 0x4c) & 8 | uVar29;
                }
                iVar18 = iVar18 + 2;
                if ((int)(uVar41 - 1) <= iVar18) goto LAB_001023af;
              }
              iVar18 = iVar18 + 1;
            } while (iVar18 < (int)(uVar41 - 1));
          }
LAB_001023af:
          puVar22 = (uint *)malloc(lVar46 * 0x24);
          if (puVar22 == (uint *)0x0) {
            pauVar21 = __ptr_00;
            for (uVar29 = 0; (int)uVar29 < (int)uVar41; uVar29 = uVar29 + 1) {
              lVar46 = 0;
              do {
                if (*(int *)(*pauVar21 + lVar46 * 4) == -1) {
                  if (lVar46 == 2) {
                    iVar18 = 0;
                  }
                  else {
                    iVar18 = (int)lVar46 + 1;
                  }
                  iVar58 = 0;
                  uVar20 = 0;
                  do {
                    if (uVar29 != uVar20) {
                      lVar35 = 0;
                      while( true ) {
                        iVar19 = (int)lVar35;
                        iVar40 = 0;
                        if (iVar19 != 2) {
                          iVar40 = iVar19 + 1;
                        }
                        if (2 < iVar19) break;
                        if ((__ptr[iVar40 + iVar58] == __ptr[(int)(uVar29 * 3 + (int)lVar46)]) &&
                           (__ptr[iVar58 + iVar19] == __ptr[(int)(uVar29 * 3 + iVar18)])) {
                          *(uint *)(*pauVar21 + lVar46 * 4) = uVar20;
                          *(uint *)((long)__ptr_00 + lVar35 * 4 + (long)(int)uVar20 * 0x58) = uVar29
                          ;
                          goto LAB_001049f5;
                        }
                        lVar35 = (long)(iVar19 + 1);
                      }
                    }
                    uVar20 = uVar20 + 1;
                    iVar58 = iVar58 + 3;
                  } while (uVar41 != uVar20);
                }
LAB_001049f5:
                lVar46 = lVar46 + 1;
              } while (lVar46 != 3);
              pauVar21 = (undefined1 (*) [16])(pauVar21[5] + 8);
            }
          }
          else {
            uVar29 = 0;
            puVar36 = puVar22;
            puVar53 = __ptr;
            do {
              iVar18 = 0;
              uVar20 = *puVar53;
              uVar31 = *puVar53;
              puVar54 = puVar36;
              puVar52 = puVar53;
              do {
                puVar51 = puVar54;
                uVar32 = puVar52[1];
                iVar18 = iVar18 + 1;
                puVar51[2] = uVar29;
                uVar42 = uVar32;
                if ((int)uVar31 <= (int)uVar32) {
                  uVar42 = uVar31;
                }
                if ((int)uVar31 < (int)uVar32) {
                  uVar31 = uVar32;
                }
                puVar52 = puVar52 + 1;
                puVar51[1] = uVar31;
                uVar31 = *puVar52;
                *puVar51 = uVar42;
                puVar54 = puVar51 + 3;
              } while (iVar18 != 2);
              puVar51[5] = uVar29;
              uVar32 = uVar20;
              if ((int)uVar31 <= (int)uVar20) {
                uVar32 = uVar31;
              }
              if ((int)uVar31 < (int)uVar20) {
                uVar31 = uVar20;
              }
              uVar29 = uVar29 + 1;
              puVar53 = puVar53 + 3;
              puVar36 = puVar36 + 9;
              puVar51[3] = uVar32;
              puVar51[4] = uVar31;
            } while (uVar41 != uVar29);
            iVar18 = uVar41 * 3;
            puVar36 = puVar22 + 3;
            QuickSortEdges(puVar22,0,iVar18 + -1,0,0x26065ca);
            iVar58 = 0;
            iVar19 = 1;
            puVar53 = puVar36;
            do {
              if (puVar22[(long)iVar58 * 3] != *puVar53) {
                QuickSortEdges(puVar22,iVar58,iVar19 + -1,1,0x26065ca);
                iVar58 = iVar19;
              }
              iVar19 = iVar19 + 1;
              puVar53 = puVar53 + 3;
            } while (iVar19 != iVar18);
            iVar58 = 0;
            iVar19 = 1;
            do {
              if ((puVar22[(long)iVar58 * 3] != *puVar36) ||
                 ((puVar22 + (long)iVar58 * 3)[1] != puVar36[1])) {
                QuickSortEdges(puVar22,iVar58,iVar19 + -1,2,0x26065ca);
                iVar58 = iVar19;
              }
              iVar19 = iVar19 + 1;
              puVar36 = puVar36 + 3;
            } while (iVar19 != iVar18);
            iVar58 = 0;
            puVar36 = puVar22;
            do {
              while( true ) {
                uVar29 = puVar36[2];
                uVar20 = *puVar36;
                uVar31 = puVar36[1];
                puVar53 = __ptr + (int)(uVar29 * 3);
                uVar32 = *puVar53;
                uVar42 = puVar53[1];
                if ((uVar20 == uVar32) || (uVar31 == uVar32)) {
                  if ((uVar31 == uVar42) || (uVar20 == uVar42)) {
                    iVar19 = 0;
                    uVar30 = uVar32;
                  }
                  else {
                    iVar19 = 2;
                    uVar30 = puVar53[2];
                    uVar42 = uVar32;
                  }
                }
                else {
                  iVar19 = 1;
                  uVar30 = uVar42;
                  uVar42 = puVar53[2];
                }
                iVar58 = iVar58 + 1;
                if (*(int *)((long)__ptr_00 + (long)iVar19 * 4 + (long)(int)uVar29 * 0x58) != -1)
                break;
                if (iVar18 <= iVar58) goto LAB_00102564;
                lVar46 = 0;
                iVar56 = 1;
                iVar40 = iVar58;
                do {
                  lVar35 = (long)iVar40;
                  puVar53 = puVar22 + lVar35 * 3;
                  if ((uVar20 != *puVar53) || (uVar31 != puVar53[1])) break;
                  if (iVar56 == 0) goto LAB_0010479c;
                  puVar54 = __ptr + (int)(puVar53[2] * 3);
                  uVar32 = *puVar54;
                  uVar45 = puVar54[1];
                  if ((uVar20 == uVar32) || (uVar31 == uVar32)) {
                    if ((*puVar53 == uVar45) || (puVar53[1] == uVar45)) {
                      lVar46 = 0;
                      uVar55 = uVar45;
                      uVar45 = uVar32;
                    }
                    else {
                      lVar46 = 2;
                      uVar55 = uVar32;
                      uVar45 = puVar54[2];
                    }
                  }
                  else {
                    uVar55 = puVar54[2];
                    lVar46 = (long)iVar56;
                  }
                  if ((*(int *)((long)__ptr_00 +
                               (long)(int)lVar46 * 4 + (long)(int)puVar53[2] * 0x58) == -1) &&
                     (uVar42 == uVar45 && uVar30 == uVar55)) {
                    iVar56 = 0;
                  }
                  else {
                    iVar40 = iVar40 + 1;
                  }
                } while (iVar40 < iVar18);
                if (iVar56 == 0) {
                  lVar35 = (long)iVar40;
LAB_0010479c:
                  puVar36 = puVar36 + 3;
                  uVar20 = puVar22[lVar35 * 3 + 2];
                  *(uint *)((long)__ptr_00 + (long)iVar19 * 4 + (long)(int)uVar29 * 0x58) = uVar20;
                  *(uint *)((long)__ptr_00 + lVar46 * 4 + (long)(int)uVar20 * 0x58) = uVar29;
                }
                else {
                  puVar36 = puVar36 + 3;
                }
              }
              puVar36 = puVar36 + 3;
            } while (iVar18 != iVar58);
LAB_00102564:
            free(puVar22);
          }
        }
        local_cc = uVar41 * 3;
        local_110 = (long)(int)uVar41;
        __ptr_01 = (int *)malloc((long)(int)local_cc * 0x18);
        __ptr_02 = malloc((local_1c8 + local_110) * 4);
        if (__ptr_01 != (int *)0x0) {
          if (__ptr_02 != (void *)0x0) {
            if ((int)uVar41 < 1) {
              local_200 = 0;
            }
            else {
              iVar18 = 0;
              uVar63 = 0;
              local_200 = 0;
              pauVar21 = __ptr_00;
              do {
                lVar46 = 0;
                do {
                  uVar29 = *(uint *)(pauVar21[4] + 0xc);
                  if (((uVar29 & 4) == 0) && (*(long *)(pauVar21[1] + lVar46 * 8) == 0)) {
                    piVar25 = __ptr_01 + (long)local_200 * 6;
                    piVar24 = (int *)((long)__ptr_02 + (long)iVar18 * 4);
                    local_200 = local_200 + 1;
                    *(int **)(piVar25 + 2) = piVar24;
                    uVar20 = __ptr[(int)uVar63 * 3 + (int)lVar46];
                    *piVar24 = (int)uVar63;
                    iVar19 = (int)lVar46 + -1;
                    iVar58 = *(int *)(*pauVar21 + lVar46 * 4);
                    if (lVar46 == 0) {
                      iVar19 = 2;
                    }
                    *(int **)(pauVar21[1] + lVar46 * 8) = piVar25;
                    *piVar25 = 1;
                    iVar19 = *(int *)(*pauVar21 + (long)iVar19 * 4);
                    *(ulong *)(piVar25 + 4) = CONCAT44(uVar29 >> 3,uVar20) & 0x1ffffffff;
                    if (-1 < iVar58) {
                      AssignRecur_isra_0(__ptr,__ptr_00,iVar58);
                      piVar25 = *(int **)(pauVar21[1] + lVar46 * 8);
                    }
                    if (-1 < iVar19) {
                      AssignRecur_isra_0(__ptr,__ptr_00,iVar19);
                      piVar25 = *(int **)(pauVar21[1] + lVar46 * 8);
                    }
                    iVar18 = iVar18 + *piVar25;
                  }
                  lVar46 = lVar46 + 1;
                } while (lVar46 != 3);
                uVar29 = (int)uVar63 + 1;
                uVar63 = (ulong)uVar29;
                pauVar21 = (undefined1 (*) [16])(pauVar21[5] + 8);
              } while (uVar41 != uVar29);
            }
            sVar4 = (long)iVar17 * 0x28;
            puVar23 = (undefined8 *)malloc(sVar4);
            if (puVar23 == (undefined8 *)0x0) {
              free(__ptr);
              free(__ptr_00);
              free(__ptr_01);
              free(__ptr_02);
              goto LAB_00101992;
            }
            __memset_chk(puVar23,0,sVar4,sVar4);
            uVar12 = _UNK_00104b68;
            uVar11 = __LC16;
            uVar28 = _UNK_00104b58;
            if (0 < iVar17) {
              uVar10 = CONCAT44(_UNK_00104b54,_LC5);
              puVar37 = puVar23;
              do {
                *puVar37 = uVar10;
                puVar37[1] = uVar28;
                puVar38 = puVar37 + 5;
                puVar37[2] = uVar11;
                puVar37[3] = uVar12;
                puVar37 = puVar38;
              } while (puVar23 + (long)iVar17 * 5 != puVar38);
            }
            if (0 < local_200) {
              iVar17 = 0;
              piVar25 = __ptr_01;
              if (((long)local_200 * 3 & 1U) == 0) goto LAB_001026ed;
              iVar17 = 0;
              if (0 < *__ptr_01) {
                iVar17 = *__ptr_01;
              }
              for (piVar25 = __ptr_01 + 6; __ptr_01 + (long)local_200 * 6 != piVar25;
                  piVar25 = piVar25 + 0xc) {
LAB_001026ed:
                if (iVar17 < *piVar25) {
                  iVar17 = *piVar25;
                }
                if (iVar17 < piVar25[6]) {
                  iVar17 = piVar25[6];
                }
              }
              if (iVar17 != 0) {
                lVar46 = (long)iVar17;
                piVar24 = (int *)malloc(lVar46 * 0x28);
                __ptr_03 = (int *)malloc(lVar46 << 4);
                piVar25 = (int *)malloc(lVar46 * 4);
                if (piVar24 == (int *)0x0) {
LAB_00104940:
                  if (__ptr_03 != (int *)0x0) {
                    free(__ptr_03);
                  }
                  if (piVar25 != (int *)0x0) {
LAB_0010491c:
                    free(piVar25);
                  }
                }
                else {
                  if (__ptr_03 == (int *)0x0) {
                    if (piVar24 != (int *)0x0) {
                      free(piVar24);
                    }
                    goto LAB_00104940;
                  }
                  if (piVar25 != (int *)0x0) {
                    dVar64 = cos((double)((param_1 * __LC17) / _LC18));
                    piVar50 = __ptr_01;
                    do {
                      if (0 < *piVar50) {
                        local_1b8 = 0;
                        iVar17 = 0;
                        do {
                          iVar58 = 0;
                          iVar18 = *(int *)(*(long *)(piVar50 + 2) + local_1b8 * 4);
                          if ((*(int **)((long)__ptr_00 + (long)iVar18 * 0x58 + 0x10) != piVar50) &&
                             (iVar58 = 1,
                             *(int **)((long)__ptr_00 + (long)iVar18 * 0x58 + 0x18) != piVar50)) {
                            iVar58 = (uint)(*(int **)((long)__ptr_00 + (long)iVar18 * 0x58 + 0x20)
                                           == piVar50) * 3 + -1;
                          }
                          (**(code **)(*param_2 + 0x18))
                                    (param_2,local_98,(int)__ptr[iVar18 * 3 + iVar58] >> 2,
                                     __ptr[iVar18 * 3 + iVar58] & 3);
                          uVar29 = _LC12;
                          fVar61 = *(float *)((long)__ptr_00 + (long)iVar18 * 0x58 + 0x28);
                          fVar67 = *(float *)((long)__ptr_00 + (long)iVar18 * 0x58 + 0x2c);
                          fVar71 = *(float *)((long)__ptr_00 + (long)iVar18 * 0x58 + 0x30);
                          fVar72 = *(float *)((long)__ptr_00 + (long)iVar18 * 0x58 + 0x34);
                          fVar68 = *(float *)((long)__ptr_00 + (long)iVar18 * 0x58 + 0x38);
                          fVar69 = fVar61 * (float)local_98._0_4_ + fVar67 * (float)local_98._4_4_ +
                                   fVar71 * fStack_90;
                          fVar61 = fVar61 - fVar69 * (float)local_98._0_4_;
                          fVar71 = fVar71 - fVar69 * fStack_90;
                          fVar67 = fVar67 - fVar69 * (float)local_98._4_4_;
                          fVar69 = *(float *)((long)__ptr_00 + (long)iVar18 * 0x58 + 0x3c);
                          fVar74 = fVar72 * (float)local_98._0_4_ + fVar68 * (float)local_98._4_4_ +
                                   fVar69 * fStack_90;
                          fVar72 = fVar72 - fVar74 * (float)local_98._0_4_;
                          fVar69 = fVar69 - fVar74 * fStack_90;
                          fVar68 = fVar68 - fVar74 * (float)local_98._4_4_;
                          if (((__LC13 < (float)((uint)fVar61 & _LC12)) ||
                              (__LC13 < (float)((uint)fVar67 & _LC12))) ||
                             (__LC13 < (float)((uint)fVar71 & _LC12))) {
                            fVar74 = _LC5 / SQRT(fVar61 * fVar61 + fVar67 * fVar67 + fVar71 * fVar71
                                                );
                            fVar61 = fVar61 * fVar74;
                            fVar67 = fVar67 * fVar74;
                            fVar71 = fVar71 * fVar74;
                          }
                          if (__LC13 < (float)((uint)fVar72 & _LC12)) {
                            fVar74 = fVar72 * fVar72 + fVar68 * fVar68 + fVar69 * fVar69;
LAB_00102a38:
                            fVar74 = _LC5 / SQRT(fVar74);
                            fVar68 = fVar68 * fVar74;
                            fVar72 = fVar72 * fVar74;
                            fVar69 = fVar74 * fVar69;
                          }
                          else {
                            if (__LC13 < (float)((uint)fVar68 & _LC12)) {
                              fVar74 = fVar72 * fVar72 + fVar68 * fVar68 + fVar69 * fVar69;
                              goto LAB_00102a38;
                            }
                            if (__LC13 < (float)((uint)fVar69 & _LC12)) {
                              fVar74 = fVar72 * fVar72 + fVar68 * fVar68 + fVar69 * fVar69;
                              goto LAB_00102a38;
                            }
                          }
                          iVar19 = *(int *)((long)__ptr_00 + (long)iVar18 * 0x58 + 0x48);
                          if (*piVar50 < 1) {
                            iVar40 = 0;
                          }
                          else {
                            piVar39 = *(int **)(piVar50 + 2);
                            uVar20 = *(uint *)((long)__ptr_00 + (long)iVar18 * 0x58 + 0x4c);
                            iVar40 = 0;
                            piVar48 = piVar39 + *piVar50;
                            do {
                              iVar56 = *piVar39;
                              fVar74 = *(float *)((long)__ptr_00 + (long)iVar56 * 0x58 + 0x28);
                              fVar79 = *(float *)((long)__ptr_00 + (long)iVar56 * 0x58 + 0x2c);
                              fVar75 = *(float *)((long)__ptr_00 + (long)iVar56 * 0x58 + 0x30);
                              fVar86 = *(float *)((long)__ptr_00 + (long)iVar56 * 0x58 + 0x38);
                              fVar73 = *(float *)((long)__ptr_00 + (long)iVar56 * 0x58 + 0x3c);
                              fVar78 = fVar74 * (float)local_98._0_4_ +
                                       fVar79 * (float)local_98._4_4_ + fVar75 * fStack_90;
                              fVar74 = fVar74 - fVar78 * (float)local_98._0_4_;
                              fVar75 = fVar75 - fVar78 * fStack_90;
                              fVar77 = *(float *)((long)__ptr_00 + (long)iVar56 * 0x58 + 0x34);
                              fVar79 = fVar79 - fVar78 * (float)local_98._4_4_;
                              fVar78 = fVar86 * (float)local_98._4_4_ +
                                       fVar77 * (float)local_98._0_4_ + fVar73 * fStack_90;
                              fVar77 = fVar77 - fVar78 * (float)local_98._0_4_;
                              fVar73 = fVar73 - fVar78 * fStack_90;
                              fVar86 = fVar86 - fVar78 * (float)local_98._4_4_;
                              if (((__LC13 < (float)((uint)fVar74 & uVar29)) ||
                                  (__LC13 < (float)((uint)fVar79 & uVar29))) ||
                                 (__LC13 < (float)((uint)fVar75 & uVar29))) {
                                fVar78 = _LC5 / SQRT(fVar74 * fVar74 + fVar79 * fVar79 +
                                                     fVar75 * fVar75);
                                fVar74 = fVar74 * fVar78;
                                fVar79 = fVar79 * fVar78;
                                fVar75 = fVar75 * fVar78;
                              }
                              if (((__LC13 < (float)((uint)fVar77 & uVar29)) ||
                                  (__LC13 < (float)((uint)fVar86 & uVar29))) ||
                                 (__LC13 < (float)((uint)fVar73 & uVar29))) {
                                fVar78 = _LC5 / SQRT(fVar77 * fVar77 + fVar86 * fVar86 +
                                                     fVar73 * fVar73);
                                fVar77 = fVar77 * fVar78;
                                fVar86 = fVar86 * fVar78;
                                fVar73 = fVar73 * fVar78;
                              }
                              if ((((int)(*(uint *)((long)__ptr_00 + (long)iVar56 * 0x58 + 0x4c) |
                                         uVar20) >> 2 & 1U) != 0 ||
                                   iVar19 == *(int *)((long)__ptr_00 + (long)iVar56 * 0x58 + 0x48))
                                 || (((float)dVar64 <
                                      fVar79 * fVar67 + fVar74 * fVar61 + fVar75 * fVar71 &&
                                     ((float)dVar64 <
                                      fVar77 * fVar72 + fVar86 * fVar68 + fVar73 * fVar69)))) {
                                lVar46 = (long)iVar40;
                                iVar40 = iVar40 + 1;
                                piVar25[lVar46] = iVar56;
                              }
                              piVar39 = piVar39 + 1;
                            } while (piVar39 != piVar48);
                            if (1 < iVar40) {
                              QuickSort(piVar25,0,iVar40 + -1,0x26065ca);
                            }
                          }
                          lVar46 = 0;
                          piVar48 = __ptr_03;
                          if (0 < iVar17) {
                            do {
                              if (*piVar48 == iVar40) {
                                if (iVar40 < 1) goto LAB_001039e2;
                                iVar19 = 0;
                                while (piVar25[iVar19] ==
                                       *(int *)(*(long *)(piVar48 + 2) + (long)iVar19 * 4)) {
                                  iVar19 = iVar19 + 1;
                                  if (iVar40 <= iVar19) goto LAB_001039e2;
                                }
                              }
                              lVar46 = lVar46 + 1;
                              piVar48 = piVar48 + 4;
                            } while ((int)lVar46 < iVar17);
                          }
                          sVar4 = (long)iVar40 * 4;
                          pvVar26 = malloc(sVar4);
                          if (pvVar26 == (void *)0x0) {
                            piVar50 = __ptr_03;
                            if (0 < iVar17) {
                              do {
                                piVar48 = piVar50 + 2;
                                piVar50 = piVar50 + 4;
                                free(*(void **)piVar48);
                              } while (piVar50 != __ptr_03 + (long)iVar17 * 4);
                            }
                            free(__ptr_03);
                            free(piVar25);
                            piVar25 = piVar24;
                            goto LAB_0010491c;
                          }
                          *(void **)(__ptr_03 + (long)iVar17 * 4 + 2) = pvVar26;
                          __ptr_03[(long)iVar17 * 4] = iVar40;
                          __memcpy_chk(pvVar26,piVar25,sVar4,sVar4);
                          uVar20 = piVar50[4];
                          piVar48 = piVar24 + (long)iVar17 * 10;
                          uVar29 = _LC12;
                          if (iVar40 < 1) {
                            fVar69 = 0.0;
                            local_1b0 = 0.0;
                            local_1ac = 0.0;
                            fVar61 = 0.0;
                            fVar72 = 0.0;
                            local_1cc = 0.0;
                            local_160 = 0.0;
                            fVar67 = 0.0;
                            fVar71 = 0.0;
                            fVar68 = 0.0;
LAB_001042a3:
                            if (__LC13 < (float)((uint)fVar61 & uVar29)) {
                              fVar74 = fVar61 * fVar61 + fVar71 * fVar71 + fVar67 * fVar67;
                              goto LAB_00103de1;
                            }
                          }
                          else {
                            local_160 = 0.0;
                            local_1ac = 0.0;
                            local_1b0 = 0.0;
                            fVar68 = 0.0;
                            local_1cc = 0.0;
                            fVar72 = 0.0;
                            fVar61 = 0.0;
                            fVar71 = 0.0;
                            fVar67 = 0.0;
                            piVar39 = piVar25;
                            do {
                              iVar19 = *piVar39;
                              if ((*(uint *)((long)__ptr_00 + (long)iVar19 * 0x58 + 0x4c) & 4) == 0)
                              {
                                iVar56 = iVar19 * 3;
                                puVar22 = __ptr + iVar56;
                                uVar29 = *puVar22;
                                iVar43 = 0;
                                puVar36 = puVar22;
                                if (uVar20 != uVar29) {
                                  iVar43 = 1;
                                  puVar36 = __ptr + (long)iVar56 + 1;
                                  uVar29 = *puVar36;
                                  if (uVar20 != uVar29) {
                                    if (uVar20 == __ptr[(long)iVar56 + 2]) {
                                      iVar43 = 2;
                                      puVar36 = __ptr + (iVar56 + 2);
                                      uVar29 = *puVar36;
                                    }
                                    else {
                                      iVar43 = -1;
                                      puVar36 = __ptr + (iVar56 + -1);
                                      uVar29 = *puVar36;
                                    }
                                  }
                                }
                                (**(code **)(*param_2 + 0x18))
                                          (param_2,local_98,(int)uVar29 >> 2,uVar29 & 3);
                                fVar77 = _LC5;
                                fVar69 = *(float *)((long)__ptr_00 + (long)iVar19 * 0x58 + 0x28);
                                fVar74 = *(float *)((long)__ptr_00 + (long)iVar19 * 0x58 + 0x2c);
                                uVar62 = local_98._0_4_;
                                fVar79 = *(float *)((long)__ptr_00 + (long)iVar19 * 0x58 + 0x30);
                                fVar75 = *(float *)((long)__ptr_00 + (long)iVar19 * 0x58 + 0x34);
                                uVar8 = local_98._4_4_;
                                fVar78 = fStack_90;
                                fVar86 = *(float *)((long)__ptr_00 + (long)iVar19 * 0x58 + 0x3c);
                                fVar80 = fVar69 * (float)local_98._0_4_ +
                                         fVar74 * (float)local_98._4_4_ + fVar79 * fStack_90;
                                fVar69 = fVar69 - fVar80 * (float)local_98._0_4_;
                                fVar74 = fVar74 - fVar80 * (float)local_98._4_4_;
                                fVar73 = *(float *)((long)__ptr_00 + (long)iVar19 * 0x58 + 0x38);
                                fVar79 = fVar79 - fVar80 * fStack_90;
                                fVar80 = fVar75 * (float)local_98._0_4_ +
                                         fVar73 * (float)local_98._4_4_ + fVar86 * fStack_90;
                                fVar75 = fVar75 - fVar80 * (float)local_98._0_4_;
                                fVar86 = fVar86 - fVar80 * fStack_90;
                                fVar73 = fVar73 - fVar80 * (float)local_98._4_4_;
                                if ((float)((uint)fVar69 & _LC12) <= __LC13) {
                                  if (__LC13 < (float)((uint)fVar74 & _LC12)) {
                                    fVar80 = fVar69 * fVar69 + fVar74 * fVar74 + fVar79 * fVar79;
                                    goto LAB_00102ead;
                                  }
                                  if (__LC13 < (float)((uint)fVar79 & _LC12)) {
                                    fVar81 = fVar74 * fVar74;
                                    fVar80 = fVar69 * fVar69;
                                    goto LAB_001035c8;
                                  }
                                }
                                else {
                                  fVar81 = fVar69 * fVar69;
                                  fVar80 = fVar74 * fVar74;
LAB_001035c8:
                                  fVar80 = fVar80 + fVar81 + fVar79 * fVar79;
LAB_00102ead:
                                  fVar80 = _LC5 / SQRT(fVar80);
                                  fVar69 = fVar69 * fVar80;
                                  fVar74 = fVar74 * fVar80;
                                  fVar79 = fVar80 * fVar79;
                                }
                                if (__LC13 < (float)((uint)fVar75 & _LC12)) {
                                  fVar81 = fVar73 * fVar73;
                                  fVar80 = fVar75 * fVar75;
LAB_00103c7c:
                                  fVar80 = fVar80 + fVar81 + fVar86 * fVar86;
LAB_00102f40:
                                  fVar80 = _LC5 / SQRT(fVar80);
                                  fVar73 = fVar73 * fVar80;
                                  fVar75 = fVar75 * fVar80;
                                  fVar86 = fVar80 * fVar86;
                                }
                                else {
                                  if (__LC13 < (float)((uint)fVar73 & _LC12)) {
                                    fVar81 = fVar75 * fVar75;
                                    fVar80 = fVar73 * fVar73;
                                    goto LAB_00103c7c;
                                  }
                                  if (__LC13 < (float)((uint)fVar86 & _LC12)) {
                                    fVar80 = fVar73 * fVar73 + fVar75 * fVar75 + fVar86 * fVar86;
                                    goto LAB_00102f40;
                                  }
                                }
                                uVar29 = *puVar36;
                                if (iVar43 == 2) {
                                  uVar31 = *puVar22;
LAB_00103c3c:
                                  iVar33 = iVar43 + -1;
                                }
                                else {
                                  uVar31 = __ptr[iVar43 + 1 + iVar56];
                                  iVar33 = 2;
                                  if (iVar43 == 1) goto LAB_00103c3c;
                                }
                                (**(code **)(*param_2 + 0x10))
                                          (param_2,local_98,(int)__ptr[iVar56 + iVar33] >> 2,
                                           __ptr[iVar56 + iVar33] & 3);
                                uVar9 = local_98._0_4_;
                                uVar15 = local_98._4_4_;
                                fVar80 = fStack_90;
                                (**(code **)(*param_2 + 0x10))
                                          (param_2,local_98,(int)uVar29 >> 2,uVar29 & 3);
                                uVar14 = local_98._0_4_;
                                uVar16 = local_98._4_4_;
                                fVar81 = fStack_90;
                                (**(code **)(*param_2 + 0x10))
                                          (param_2,local_98,(int)uVar31 >> 2,uVar31 & 3);
                                fVar82 = (float)uVar9 - (float)uVar14;
                                fVar84 = (float)local_98._0_4_ - (float)uVar14;
                                fVar83 = (float)uVar15 - (float)uVar16;
                                fVar85 = (float)local_98._4_4_ - (float)uVar16;
                                fVar80 = fVar80 - fVar81;
                                fVar81 = fStack_90 - fVar81;
                                fVar87 = fVar83 * (float)uVar8 + fVar82 * (float)uVar62 +
                                         fVar80 * fVar78;
                                fVar82 = fVar82 - fVar87 * (float)uVar62;
                                fVar80 = fVar80 - fVar87 * fVar78;
                                fVar83 = fVar83 - fVar87 * (float)uVar8;
                                if (__LC13 < (float)((uint)fVar82 & _LC12)) {
LAB_001031f0:
                                  fVar87 = fVar83 * fVar83 + fVar82 * fVar82 + fVar80 * fVar80;
LAB_00103215:
                                  fVar87 = fVar77 / SQRT(fVar87);
                                  fVar82 = fVar82 * fVar87;
                                  fVar83 = fVar83 * fVar87;
                                  fVar80 = fVar80 * fVar87;
                                }
                                else {
                                  if (__LC13 < (float)((uint)fVar83 & _LC12)) {
                                    fVar87 = fVar82 * fVar82 + fVar83 * fVar83 + fVar80 * fVar80;
                                    goto LAB_00103215;
                                  }
                                  if (__LC13 < (float)((uint)fVar80 & _LC12)) goto LAB_001031f0;
                                }
                                fVar87 = fVar81 * fVar78 +
                                         fVar85 * (float)uVar8 + fVar84 * (float)uVar62;
                                fVar84 = fVar84 - (float)uVar62 * fVar87;
                                fVar85 = fVar85 - (float)uVar8 * fVar87;
                                fVar81 = fVar81 - fVar87 * fVar78;
                                if (__LC13 < (float)((uint)fVar84 & _LC12)) {
                                  fVar78 = fVar84 * fVar84 + fVar85 * fVar85 + fVar81 * fVar81;
LAB_001032d4:
                                  fVar78 = fVar77 / SQRT(fVar78);
                                  fVar84 = fVar84 * fVar78;
                                  fVar85 = fVar85 * fVar78;
                                  fVar81 = fVar81 * fVar78;
                                }
                                else if ((__LC13 < (float)((uint)fVar85 & _LC12)) ||
                                        (__LC13 < (float)((uint)fVar81 & _LC12))) {
                                  fVar78 = fVar85 * fVar85 + fVar84 * fVar84 + fVar81 * fVar81;
                                  goto LAB_001032d4;
                                }
                                fVar78 = fVar82 * fVar84 + fVar83 * fVar85 + fVar80 * fVar81;
                                dVar65 = _LC6;
                                if ((fVar78 <= fVar77) && (dVar65 = _LC7, _LC4 <= fVar78)) {
                                  dVar65 = (double)fVar78;
                                }
                                dVar65 = acos(dVar65);
                                fVar77 = (float)dVar65;
                                fVar61 = fVar79 * fVar77 + fVar61;
                                fVar67 = fVar69 * fVar77 + fVar67;
                                fVar71 = fVar74 * fVar77 + fVar71;
                                fVar72 = fVar75 * fVar77 + fVar72;
                                local_1cc = fVar73 * fVar77 + local_1cc;
                                fVar68 = fVar86 * fVar77 + fVar68;
                                local_1b0 = *(float *)((long)__ptr_00 + (long)iVar19 * 0x58 + 0x40)
                                            * fVar77 + local_1b0;
                                local_160 = fVar77 + local_160;
                                local_1ac = *(float *)((long)__ptr_00 + (long)iVar19 * 0x58 + 0x44)
                                            * fVar77 + local_1ac;
                                uVar29 = _LC12;
                              }
                              piVar39 = piVar39 + 1;
                            } while (piVar39 != piVar25 + iVar40);
                            fVar69 = (float)((uint)fVar72 & uVar29);
                            if ((float)((uint)fVar67 & uVar29) <= __LC13) {
                              if ((float)((uint)fVar71 & uVar29) <= __LC13) goto LAB_001042a3;
                              fVar79 = fVar71 * fVar71;
                              fVar74 = fVar67 * fVar67;
                            }
                            else {
                              fVar79 = fVar67 * fVar67;
                              fVar74 = fVar71 * fVar71;
                            }
                            fVar74 = fVar61 * fVar61 + fVar74 + fVar79;
LAB_00103de1:
                            fVar74 = _LC5 / SQRT(fVar74);
                            fVar67 = fVar67 * fVar74;
                            fVar71 = fVar71 * fVar74;
                            fVar61 = fVar74 * fVar61;
                          }
                          if (__LC13 < fVar69) {
                            fVar69 = fVar68 * fVar68 + local_1cc * local_1cc + fVar72 * fVar72;
LAB_00103e7d:
                            fVar69 = _LC5 / SQRT(fVar69);
                            fVar72 = fVar72 * fVar69;
                            local_1cc = local_1cc * fVar69;
                            fVar68 = fVar69 * fVar68;
                          }
                          else {
                            if (__LC13 < (float)((uint)local_1cc & uVar29)) {
                              fVar69 = fVar68 * fVar68 + local_1cc * local_1cc + fVar72 * fVar72;
                              goto LAB_00103e7d;
                            }
                            if (__LC13 < (float)((uint)fVar68 & uVar29)) {
                              fVar69 = fVar68 * fVar68 + local_1cc * local_1cc + fVar72 * fVar72;
                              goto LAB_00103e7d;
                            }
                          }
                          if (0.0 < local_160) {
                            local_1b0 = local_1b0 / local_160;
                            local_1ac = local_1ac / local_160;
                          }
                          piVar48[8] = 0;
                          piVar48[9] = 0;
                          iVar17 = iVar17 + 1;
                          *(ulong *)piVar48 = CONCAT44(fVar71,fVar67);
                          *(ulong *)(piVar48 + 2) = CONCAT44(local_1b0,fVar61);
                          *(ulong *)(piVar48 + 4) = CONCAT44(local_1cc,fVar72);
                          *(ulong *)(piVar48 + 6) = CONCAT44(local_1ac,fVar68);
LAB_001039e2:
                          iVar19 = piVar50[5];
                          pauVar21 = (undefined1 (*) [16])
                                     (puVar23 +
                                     (long)(int)((uint)*(byte *)((long)__ptr_00 +
                                                                (long)iVar58 +
                                                                (long)iVar18 * 0x58 + 0x54) +
                                                *(int *)((long)__ptr_00 + (long)iVar18 * 0x58 + 0x50
                                                        )) * 5);
                          pfVar2 = (float *)(piVar24 + lVar46 * 10);
                          if (*(int *)pauVar21[2] == 1) {
                            fVar61 = *(float *)((long)*pauVar21 + 0xc);
                            fVar67 = *(float *)((long)pauVar21[1] + 0xc);
                            fVar71 = *(float *)*pauVar21;
                            fVar72 = *(float *)((long)*pauVar21 + 4);
                            fVar68 = *(float *)((long)*pauVar21 + 8);
                            fVar69 = *(float *)pauVar21[1];
                            fVar74 = *(float *)((long)pauVar21[1] + 4);
                            fVar79 = *(float *)((long)pauVar21[1] + 8);
                            if ((((fVar61 != pfVar2[3]) || (fVar67 != pfVar2[7])) ||
                                (fVar71 != *pfVar2 || fVar72 != pfVar2[1])) ||
                               (((fVar68 != pfVar2[2] ||
                                 (fVar74 != pfVar2[5] || fVar69 != pfVar2[4])) ||
                                (fVar79 != pfVar2[6])))) {
                              fVar71 = fVar71 + *pfVar2;
                              fVar61 = (fVar61 + pfVar2[3]) * _LC3;
                              fVar72 = fVar72 + pfVar2[1];
                              fVar68 = fVar68 + pfVar2[2];
                              fVar69 = fVar69 + pfVar2[4];
                              fVar74 = fVar74 + pfVar2[5];
                              fVar79 = fVar79 + pfVar2[6];
                              fVar67 = _LC3 * (pfVar2[7] + fVar67);
                              if ((__LC13 < (float)((uint)fVar71 & uVar29)) ||
                                 (__LC13 < (float)((uint)fVar72 & uVar29))) {
                                fVar75 = fVar68 * fVar68 + fVar72 * fVar72 + fVar71 * fVar71;
LAB_001040c9:
                                fVar75 = _LC5 / SQRT(fVar75);
                                fVar71 = fVar71 * fVar75;
                                fVar72 = fVar72 * fVar75;
                                fVar68 = fVar68 * fVar75;
                              }
                              else if (__LC13 < (float)((uint)fVar68 & uVar29)) {
                                fVar75 = fVar68 * fVar68 + fVar71 * fVar71 + fVar72 * fVar72;
                                goto LAB_001040c9;
                              }
                              if (((__LC13 < (float)((uint)fVar69 & uVar29)) ||
                                  (__LC13 < (float)((uint)fVar74 & uVar29))) ||
                                 (__LC13 < (float)((uint)fVar79 & uVar29))) {
                                fVar75 = _LC5 / SQRT(fVar79 * fVar79 +
                                                     fVar74 * fVar74 + fVar69 * fVar69);
                                fVar69 = fVar69 * fVar75;
                                fVar74 = fVar74 * fVar75;
                                fVar79 = fVar79 * fVar75;
                              }
                            }
                            auVar70._12_4_ = fVar61;
                            auVar70._8_4_ = fVar68;
                            auVar70._4_4_ = fVar72;
                            auVar70._0_4_ = fVar71;
                            uVar62 = 2;
                            *pauVar21 = auVar70;
                            *(ulong *)pauVar21[1] = CONCAT44(fVar74,fVar69);
                            *(float *)((long)pauVar21[1] + 8) = fVar79;
                            *(float *)((long)pauVar21[1] + 0xc) = fVar67;
                          }
                          else {
                            uVar28 = *(undefined8 *)(pfVar2 + 2);
                            uVar62 = 1;
                            *(undefined8 *)*pauVar21 = *(undefined8 *)pfVar2;
                            *(undefined8 *)((long)*pauVar21 + 8) = uVar28;
                            fVar61 = pfVar2[4];
                            fVar67 = pfVar2[5];
                            fVar71 = pfVar2[6];
                            fVar72 = pfVar2[7];
                            *(undefined8 *)pauVar21[2] = *(undefined8 *)(pfVar2 + 8);
                            *(float *)pauVar21[1] = fVar61;
                            *(float *)((long)pauVar21[1] + 4) = fVar67;
                            *(float *)((long)pauVar21[1] + 8) = fVar71;
                            *(float *)((long)pauVar21[1] + 0xc) = fVar72;
                          }
                          local_1b8 = local_1b8 + 1;
                          *(ulong *)pauVar21[2] = CONCAT44(iVar19,uVar62);
                        } while ((int)local_1b8 < *piVar50);
                        if (0 < iVar17) {
                          piVar48 = __ptr_03;
                          do {
                            piVar39 = piVar48 + 2;
                            piVar48 = piVar48 + 4;
                            free(*(void **)piVar39);
                          } while (piVar48 != __ptr_03 + (long)iVar17 * 4);
                        }
                      }
                      piVar50 = piVar50 + 6;
                    } while (__ptr_01 + (long)local_200 * 6 != piVar50);
                    free(__ptr_03);
                    free(piVar25);
                    free(piVar24);
                    goto LAB_00103afe;
                  }
                  free(piVar24);
                  free(__ptr_03);
                }
                free(__ptr_01);
                free(__ptr_02);
                free(__ptr_00);
                free(__ptr);
                free(puVar23);
                goto LAB_00101992;
              }
            }
LAB_00103afe:
            free(__ptr_01);
            free(__ptr_02);
            if ((int)uVar41 < iVar44) {
              iVar17 = uVar41 * 3;
              lVar46 = (long)__ptr_00 + local_110 * 0x58;
              puVar22 = __ptr + local_1c8 + local_110;
              do {
                if ((*(byte *)(lVar46 + 0x4c) & 2) == 0) {
                  lVar35 = 0;
LAB_00103b8b:
                  if ((int)local_cc < 1) goto LAB_001047cf;
                  uVar29 = puVar22[lVar35];
                  while( true ) {
                    uVar63 = 0;
                    puVar36 = __ptr;
                    do {
                      if (*puVar36 == uVar29) {
                        iVar18 = (int)(uVar63 / 3);
                        puVar37 = puVar23 + (long)(int)((uint)*(byte *)(lVar46 + lVar35 + 0x54) +
                                                       *(int *)(lVar46 + 0x50)) * 5;
                        puVar38 = puVar23 + (long)(int)((uint)*(byte *)((long)__ptr_00 +
                                                                       (long)((int)uVar63 +
                                                                             (int)(uVar63 / 3) * -3)
                                                                       + (long)iVar18 * 0x58 + 0x54)
                                                       + *(int *)((long)__ptr_00 +
                                                                 (long)iVar18 * 0x58 + 0x50)) * 5;
                        uVar28 = puVar38[1];
                        *puVar37 = *puVar38;
                        puVar37[1] = uVar28;
                        uVar28 = puVar38[3];
                        puVar37[2] = puVar38[2];
                        puVar37[3] = uVar28;
                        puVar37[4] = puVar38[4];
                        if (lVar35 != 2) goto LAB_00103c30;
                        goto joined_r0x00104344;
                      }
                      uVar20 = (int)uVar63 + 1;
                      uVar63 = (ulong)uVar20;
                      puVar36 = puVar36 + 1;
                    } while (uVar20 != local_cc);
                    if (lVar35 == 2) break;
LAB_00103c30:
                    lVar35 = lVar35 + 1;
                    uVar29 = puVar22[lVar35];
                  }
                }
joined_r0x00104344:
                puVar22 = puVar22 + 3;
                lVar46 = lVar46 + 0x58;
                iVar17 = iVar17 + 3;
              } while (iVar17 != iVar44 * 3);
              if (0 < (int)uVar41) goto LAB_00104353;
            }
            else {
LAB_00104353:
              pbVar59 = __ptr_00[5] + 4;
              pbVar3 = pbVar59 + local_110 * 0x58;
LAB_00104391:
              do {
                if ((pbVar59[-8] & 2) != 0) {
                  uVar29 = 1;
                  uVar41 = 1 << (pbVar59[1] & 0x1f) | 1 << (*pbVar59 & 0x1f) |
                           1 << (pbVar59[2] & 0x1f);
                  if (((uVar41 & 2) != 0) && (uVar29 = 2, (uVar41 & 4) != 0)) {
                    uVar29 = -(uint)((uVar41 & 8) == 0) & 3;
                  }
                  iVar17 = *(int *)(pbVar59 + -0xc);
                  (**(code **)(*param_2 + 0x10))
                            (param_2,local_98,(int)(iVar17 * 4 | uVar29) >> 2,uVar29);
                  uVar62 = local_98._0_4_;
                  uVar8 = local_98._4_4_;
                  fVar61 = fStack_90;
                  pbVar49 = pbVar59;
                  do {
                    bVar5 = *pbVar49;
                    uVar41 = bVar5 & 3;
                    (**(code **)(*param_2 + 0x10))
                              (param_2,local_98,(int)(uVar41 | iVar17 * 4) >> 2,uVar41);
                    if (((float)uVar62 == (float)local_98._0_4_ &&
                         (float)uVar8 == (float)local_98._4_4_) && (fVar61 == fStack_90)) {
                      pauVar21 = (undefined1 (*) [16])(pbVar59 + -4);
                      pbVar59 = pbVar59 + 0x58;
                      puVar37 = puVar23 + (long)(int)(uVar29 + *(int *)*pauVar21) * 5;
                      puVar38 = puVar23 + (long)(int)((uint)bVar5 + *(int *)*pauVar21) * 5;
                      uVar28 = puVar38[1];
                      *puVar37 = *puVar38;
                      puVar37[1] = uVar28;
                      uVar28 = puVar38[3];
                      puVar37[2] = puVar38[2];
                      puVar37[3] = uVar28;
                      puVar37[4] = puVar38[4];
                      if (pbVar59 == pbVar3) goto LAB_00104521;
                      goto LAB_00104391;
                    }
                    pbVar49 = pbVar49 + 1;
                  } while (pbVar49 != pbVar59 + 3);
                }
                pbVar59 = pbVar59 + 0x58;
              } while (pbVar59 != pbVar3);
            }
LAB_00104521:
            iVar44 = 0;
            free(__ptr_00);
            iVar17 = 0;
            free(__ptr);
            while( true ) {
              iVar18 = (**(code **)(*param_2 + 8))(param_2,iVar44);
              if (iVar18 - 3U < 2) {
                iVar58 = 0;
                puVar37 = puVar23 + (long)iVar17 * 5;
                do {
                  local_a8 = *puVar37;
                  local_a0 = *(undefined4 *)(puVar37 + 1);
                  lVar46 = *param_2;
                  _local_98 = *(undefined1 (*) [12])(puVar37 + 2);
                  if (*(code **)(lVar46 + 0x30) != (code *)0x0) {
                    (**(code **)(lVar46 + 0x30))
                              (param_2,&local_a8,local_98,*(undefined4 *)((long)puVar37 + 0x24),
                               iVar44,iVar58);
                    lVar46 = *param_2;
                  }
                  if (*(code **)(lVar46 + 0x28) != (code *)0x0) {
                    (**(code **)(lVar46 + 0x28))(param_2,&local_a8,iVar44,iVar58);
                  }
                  iVar58 = iVar58 + 1;
                  puVar37 = puVar37 + 5;
                } while (iVar18 != iVar58);
                iVar17 = iVar17 + iVar18;
              }
              if (iVar57 <= iVar44) break;
              iVar44 = iVar44 + 1;
            }
            free(puVar23);
            uVar28 = 1;
            goto LAB_00101994;
          }
          if (__ptr_01 != (int *)0x0) {
            free(__ptr_01);
          }
        }
        if (__ptr_02 != (void *)0x0) {
          free(__ptr_02);
        }
        free(__ptr);
      }
      free(__ptr_00);
    }
  }
LAB_00101992:
  uVar28 = 0;
LAB_00101994:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar28;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001047cf:
  lVar35 = lVar35 + 1;
  if (lVar35 == 3) goto joined_r0x00104344;
  goto LAB_00103b8b;
}



void genTangSpaceDefault(void)

{
  genTangSpace(_LC18);
  return;
}


