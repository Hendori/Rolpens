
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
LAB_001016f4:
    if (__ptr_00 != (int *)0x0) goto LAB_001010b0;
  }
  else {
    if (__ptr_00 == (int *)0x0) {
      if (__ptr != (void *)0x0) {
        free(__ptr);
      }
      goto LAB_001016f4;
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
      piVar17 = __ptr_00 + 1;
      do {
        if (iVar14 < *piVar17) {
          iVar14 = *piVar17;
        }
        piVar17 = piVar17 + 1;
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
      goto LAB_001013db;
    }
    free(__ptr);
LAB_001010b0:
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
               ) goto LAB_0010137a;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 3);
          puVar29 = puVar29 + 3;
          iVar20 = iVar20 + 1;
        } while (iVar20 <= iVar25);
LAB_0010137a:
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
LAB_001013db:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 genTangSpace(float param_1,long *param_2)

{
  ulong *puVar1;
  float *pfVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint *__ptr;
  undefined1 (*__ptr_00) [16];
  undefined1 (*pauVar22) [16];
  uint *puVar23;
  int *__ptr_01;
  void *__ptr_02;
  size_t sVar24;
  undefined8 *puVar25;
  int *piVar26;
  int *__ptr_03;
  int *piVar27;
  void *pvVar28;
  undefined1 (*pauVar29) [16];
  undefined8 uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  code *pcVar35;
  long lVar36;
  uint *puVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  int *piVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  int iVar44;
  uint *puVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  int *piVar49;
  byte *pbVar50;
  uint *puVar51;
  uint *puVar52;
  uint *puVar53;
  uint uVar54;
  int *piVar55;
  uint uVar56;
  int iVar57;
  int iVar58;
  byte *pbVar59;
  int iVar60;
  long lVar61;
  long in_FS_OFFSET;
  float fVar62;
  undefined4 uVar63;
  ulong uVar64;
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar72;
  float fVar73;
  undefined1 auVar71 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar77 [16];
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
  float fVar88;
  uint *local_1f8;
  long local_1d8;
  float local_1d0;
  float local_1cc;
  long local_1c0;
  float local_1b8;
  float local_1b4;
  float local_168;
  long local_118;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar18 = (**(code **)*param_2)();
  plVar7 = (long *)*param_2;
  if (((((*plVar7 != 0) && (pcVar35 = (code *)plVar7[1], pcVar35 != (code *)0x0)) &&
       (plVar7[2] != 0)) && ((plVar7[3] != 0 && (plVar7[4] != 0)))) && (0 < iVar18)) {
    iVar57 = 0;
    iVar46 = 0;
    while( true ) {
      iVar19 = (*pcVar35)(param_2,iVar57);
      if (iVar19 == 3) {
        iVar46 = iVar46 + 1;
      }
      else if (iVar19 == 4) {
        iVar46 = iVar46 + 2;
      }
      if (iVar18 == iVar57 + 1) break;
      iVar57 = iVar57 + 1;
      pcVar35 = *(code **)(*param_2 + 8);
    }
    if (0 < iVar46) {
      lVar47 = (long)iVar46;
      __ptr = (uint *)malloc(lVar47 * 0xc);
      __ptr_00 = (undefined1 (*) [16])malloc(lVar47 * 0x58);
      if (__ptr == (uint *)0x0) {
LAB_001047e6:
        if (__ptr_00 == (undefined1 (*) [16])0x0) goto LAB_00101982;
      }
      else {
        if (__ptr_00 == (undefined1 (*) [16])0x0) {
          if (__ptr != (uint *)0x0) {
            free(__ptr);
          }
          goto LAB_001047e6;
        }
        iVar19 = 0;
        iVar18 = 0;
        puVar25 = (undefined8 *)*param_2;
        for (iVar58 = 0; iVar20 = (*(code *)*puVar25)(param_2), iVar58 < iVar20; iVar58 = iVar58 + 1
            ) {
          iVar20 = (**(code **)(*param_2 + 8))(param_2,iVar58);
          if (iVar20 - 3U < 2) {
            uVar42 = iVar58 * 4;
            lVar61 = (long)(iVar19 * 3);
            puVar25 = (undefined8 *)*param_2;
            puVar1 = (ulong *)(__ptr + lVar61);
            lVar36 = (long)iVar19 * 0x58;
            *(int *)((long)__ptr_00 + lVar36 + 0x50) = iVar18;
            *(int *)((long)__ptr_00 + lVar36 + 0x48) = iVar58;
            uVar14 = _LC8;
            if (iVar20 == 3) {
              *(uint *)puVar1 = uVar42;
              iVar19 = iVar19 + 1;
              *(undefined1 *)((long)__ptr_00 + lVar36 + 0x56) = 2;
              *(undefined2 *)((long)__ptr_00 + lVar36 + 0x54) = uVar14;
              __ptr[lVar61 + 1] = uVar42 | 1;
              __ptr[lVar61 + 2] = uVar42 | 2;
            }
            else {
              iVar41 = (int)uVar42 >> 2;
              uVar64 = CONCAT44(uVar42,uVar42) | _LC9;
              *(int *)((long)__ptr_00 + lVar36 + 0xa0) = iVar58;
              *(int *)((long)__ptr_00 + lVar36 + 0xa8) = iVar18;
              (*(code *)puVar25[4])(param_2,local_98,iVar41,0);
              uVar63 = local_98._0_4_;
              uVar15 = local_98._4_4_;
              (**(code **)(*param_2 + 0x20))(param_2,local_98,iVar41,1);
              uVar9 = local_98._0_4_;
              uVar16 = local_98._4_4_;
              (**(code **)(*param_2 + 0x20))(param_2,local_98,iVar41,2);
              uVar10 = local_98._0_4_;
              uVar17 = local_98._4_4_;
              (**(code **)(*param_2 + 0x20))(param_2,local_98,iVar41);
              fVar68 = ((float)uVar17 - (float)uVar15) * ((float)uVar17 - (float)uVar15) +
                       ((float)uVar10 - (float)uVar63) * ((float)uVar10 - (float)uVar63) + 0.0;
              fVar62 = ((float)local_98._0_4_ - (float)uVar9) *
                       ((float)local_98._0_4_ - (float)uVar9) +
                       ((float)local_98._4_4_ - (float)uVar16) *
                       ((float)local_98._4_4_ - (float)uVar16) + 0.0;
              if (fVar68 < fVar62) {
LAB_00103717:
                uVar14 = _LC8;
                *(undefined1 *)((long)__ptr_00 + lVar36 + 0x56) = 2;
                iVar19 = iVar19 + 2;
                *(undefined2 *)((long)__ptr_00 + lVar36 + 0x54) = uVar14;
                puVar25 = (undefined8 *)*param_2;
                *(undefined2 *)((long)__ptr_00 + lVar36 + 0xac) = _LC10;
                *puVar1 = CONCAT44(uVar42,uVar42) | 0x100000000;
                puVar1[1] = CONCAT44(uVar42,uVar42) | 2;
                *(undefined1 *)((long)__ptr_00 + lVar36 + 0xae) = 3;
                *(ulong *)(__ptr + lVar61 + 4) = uVar64;
              }
              else {
                puVar25 = (undefined8 *)*param_2;
                if (fVar68 <= fVar62) {
                  (*(code *)puVar25[2])(param_2,local_98,iVar41,0);
                  uVar63 = local_98._0_4_;
                  uVar15 = local_98._4_4_;
                  fVar62 = fStack_90;
                  (**(code **)(*param_2 + 0x10))(param_2,local_98,iVar41,1);
                  uVar16 = local_98._4_4_;
                  fVar68 = fStack_90;
                  uVar9 = local_98._0_4_;
                  (**(code **)(*param_2 + 0x10))(param_2,local_98,iVar41,2);
                  uVar10 = local_98._0_4_;
                  uVar17 = local_98._4_4_;
                  fVar72 = fStack_90;
                  (**(code **)(*param_2 + 0x10))(param_2,local_98,iVar41);
                  if (((float)uVar10 - (float)uVar63) * ((float)uVar10 - (float)uVar63) +
                      ((float)uVar17 - (float)uVar15) * ((float)uVar17 - (float)uVar15) +
                      (fVar72 - fVar62) * (fVar72 - fVar62) <=
                      ((float)local_98._0_4_ - (float)uVar9) *
                      ((float)local_98._0_4_ - (float)uVar9) +
                      ((float)local_98._4_4_ - (float)uVar16) *
                      ((float)local_98._4_4_ - (float)uVar16) +
                      (fStack_90 - fVar68) * (fStack_90 - fVar68)) goto LAB_00103717;
                  puVar25 = (undefined8 *)*param_2;
                }
                *(undefined1 *)((long)__ptr_00 + lVar36 + 0x56) = 3;
                *(undefined2 *)((long)__ptr_00 + lVar36 + 0x54) = 0x100;
                *(undefined2 *)((long)__ptr_00 + lVar36 + 0xac) = 0x201;
                iVar19 = iVar19 + 2;
                *(undefined1 *)((long)__ptr_00 + lVar36 + 0xae) = 3;
                *puVar1 = CONCAT44(uVar42,uVar42) | 0x100000000;
                puVar1[1] = CONCAT44(uVar42,uVar42) | 0x100000003;
                *(ulong *)(__ptr + lVar61 + 4) = uVar64;
              }
            }
            iVar18 = iVar18 + iVar20;
          }
          else {
            puVar25 = (undefined8 *)*param_2;
          }
        }
        pauVar22 = __ptr_00;
        do {
          *(undefined4 *)(pauVar22[4] + 0xc) = 0;
          pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 8);
        } while ((undefined1 (*) [16])(lVar47 * 0x58 + (long)__ptr_00) != pauVar22);
        puVar23 = (uint *)(__ptr_00[4] + 0xc);
        GenerateSharedVerticesIndexList(__ptr,param_2,iVar46);
        iVar19 = 0;
        puVar37 = __ptr;
        do {
          while( true ) {
            uVar42 = puVar37[1];
            uVar31 = puVar37[2];
            (**(code **)(*param_2 + 0x10))(param_2,local_98,(int)*puVar37 >> 2,*puVar37 & 3);
            uVar63 = local_98._0_4_;
            uVar10 = local_98._4_4_;
            fVar62 = fStack_90;
            (**(code **)(*param_2 + 0x10))(param_2,local_98,(int)uVar42 >> 2,uVar42 & 3);
            uVar9 = local_98._0_4_;
            uVar15 = local_98._4_4_;
            fVar68 = fStack_90;
            (**(code **)(*param_2 + 0x10))(param_2,local_98,(int)uVar31 >> 2,uVar31 & 3);
            if ((float)uVar9 == (float)uVar63) break;
LAB_00101d3b:
            if (((float)local_98._0_4_ == (float)uVar63) &&
               (((float)local_98._4_4_ == (float)uVar10 && (fStack_90 == fVar62)))) {
LAB_00101c14:
              *puVar23 = *puVar23 | 1;
              iVar19 = iVar19 + 1;
            }
            else {
LAB_00101d59:
              if ((float)local_98._0_4_ == (float)uVar9) goto LAB_00101d69;
            }
LAB_00101c1c:
            puVar37 = puVar37 + 3;
            puVar23 = puVar23 + 0x16;
            if (__ptr + lVar47 * 3 == puVar37) goto LAB_00101d9e;
          }
          if ((float)uVar15 == (float)uVar10) {
            if (fVar68 != fVar62) goto LAB_00101d3b;
            goto LAB_00101c14;
          }
          if ((float)local_98._0_4_ != (float)uVar63) goto LAB_00101d59;
          if (((float)local_98._4_4_ == (float)uVar10) && (fStack_90 == fVar62)) goto LAB_00101c14;
LAB_00101d69:
          if ((float)local_98._4_4_ != (float)uVar15) goto LAB_00101c1c;
          if (fStack_90 == fVar68) goto LAB_00101c14;
          puVar37 = puVar37 + 3;
          puVar23 = puVar23 + 0x16;
        } while (__ptr + lVar47 * 3 != puVar37);
LAB_00101d9e:
        uVar42 = iVar46 - iVar19;
        iVar19 = 0;
        if (iVar46 != 1) {
          do {
            while (lVar47 = (long)iVar19 * 0x58,
                  *(int *)((long)__ptr_00 + lVar47 + 0x48) ==
                  *(int *)((long)__ptr_00 + lVar47 + 0xa0)) {
              uVar31 = *(uint *)((long)__ptr_00 + lVar47 + 0x4c);
              if (((*(uint *)((long)__ptr_00 + lVar47 + 0xa4) ^ uVar31) & 1) != 0) {
                *(uint *)((long)__ptr_00 + lVar47 + 0x4c) = uVar31 | 2;
                puVar23 = (uint *)((long)__ptr_00 + lVar47 + 0xa4);
                *puVar23 = *puVar23 | 2;
              }
              iVar19 = iVar19 + 2;
              if (iVar46 + -1 <= iVar19) goto LAB_00101e08;
            }
            iVar19 = iVar19 + 1;
          } while (iVar19 < iVar46 + -1);
        }
LAB_00101e08:
        if ((int)uVar42 < 1) {
          local_1d8 = (long)(int)uVar42;
          puVar23 = (uint *)malloc(local_1d8 * 0x24);
          if (puVar23 != (uint *)0x0) {
            QuickSortEdges(puVar23,0,uVar42 * 3 + -1,0);
            local_1d8 = local_1d8 * 2;
            goto LAB_00102537;
          }
          local_1d8 = local_1d8 * 2;
        }
        else {
          iVar20 = 0;
          iVar58 = 1;
          pauVar22 = __ptr_00;
          iVar19 = 1;
          puVar23 = __ptr;
          do {
            puVar23 = puVar23 + 3;
            if ((pauVar22[4][0xc] & 1) == 0) {
              if (iVar58 <= iVar19) {
                iVar58 = iVar19 + 1;
              }
            }
            else {
              pauVar29 = (undefined1 (*) [16])((long)__ptr_00 + (long)iVar58 * 0x58);
              while( true ) {
                if (iVar46 <= iVar58) goto LAB_00101e4f;
                if ((pauVar29[4][0xc] & 1) == 0) break;
                iVar58 = iVar58 + 1;
                pauVar29 = (undefined1 (*) [16])(pauVar29[5] + 8);
              }
              puVar37 = __ptr + iVar58 * 3;
              puVar45 = __ptr + iVar20;
              do {
                uVar31 = *puVar45;
                puVar53 = puVar45 + 1;
                *puVar45 = *puVar37;
                *puVar37 = uVar31;
                puVar37 = puVar37 + 1;
                puVar45 = puVar53;
              } while (puVar23 != puVar53);
              uVar30 = *(undefined8 *)(*pauVar29 + 8);
              _local_98 = *pauVar22;
              iVar58 = iVar58 + 1;
              local_88 = *(undefined4 *)pauVar22[1];
              uStack_84 = *(undefined4 *)(pauVar22[1] + 4);
              uStack_80 = *(undefined4 *)(pauVar22[1] + 8);
              uStack_7c = *(undefined4 *)(pauVar22[1] + 0xc);
              local_78 = *(undefined8 *)pauVar22[2];
              uStack_70 = *(undefined8 *)(pauVar22[2] + 8);
              *(undefined8 *)*pauVar22 = *(undefined8 *)*pauVar29;
              *(undefined8 *)(*pauVar22 + 8) = uVar30;
              uVar30 = *(undefined8 *)(pauVar29[1] + 8);
              local_68 = pauVar22[3];
              local_58 = pauVar22[4];
              local_48 = *(undefined8 *)pauVar22[5];
              *(undefined8 *)pauVar22[1] = *(undefined8 *)pauVar29[1];
              *(undefined8 *)(pauVar22[1] + 8) = uVar30;
              uVar30 = *(undefined8 *)(pauVar29[2] + 8);
              *(undefined8 *)pauVar22[2] = *(undefined8 *)pauVar29[2];
              *(undefined8 *)(pauVar22[2] + 8) = uVar30;
              uVar63 = *(undefined4 *)(pauVar29[3] + 4);
              uVar9 = *(undefined4 *)(pauVar29[3] + 8);
              uVar10 = *(undefined4 *)(pauVar29[3] + 0xc);
              *(undefined4 *)pauVar22[3] = *(undefined4 *)pauVar29[3];
              *(undefined4 *)(pauVar22[3] + 4) = uVar63;
              *(undefined4 *)(pauVar22[3] + 8) = uVar9;
              *(undefined4 *)(pauVar22[3] + 0xc) = uVar10;
              uVar63 = *(undefined4 *)(pauVar29[4] + 4);
              uVar9 = *(undefined4 *)(pauVar29[4] + 8);
              uVar10 = *(undefined4 *)(pauVar29[4] + 0xc);
              *(undefined4 *)pauVar22[4] = *(undefined4 *)pauVar29[4];
              *(undefined4 *)(pauVar22[4] + 4) = uVar63;
              *(undefined4 *)(pauVar22[4] + 8) = uVar9;
              *(undefined4 *)(pauVar22[4] + 0xc) = uVar10;
              *(undefined8 *)pauVar22[5] = *(undefined8 *)pauVar29[5];
              *(undefined8 *)pauVar29[5] = local_48;
              *pauVar29 = _local_98;
              *(undefined4 *)pauVar29[1] = local_88;
              *(undefined4 *)(pauVar29[1] + 4) = uStack_84;
              *(undefined4 *)(pauVar29[1] + 8) = uStack_80;
              *(undefined4 *)(pauVar29[1] + 0xc) = uStack_7c;
              *(undefined8 *)pauVar29[2] = local_78;
              *(undefined8 *)(pauVar29[2] + 8) = uStack_70;
              pauVar29[3] = local_68;
              pauVar29[4] = local_58;
            }
            pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 8);
            iVar20 = iVar20 + 3;
            bVar8 = iVar19 < (int)uVar42;
            iVar19 = iVar19 + 1;
          } while (bVar8);
LAB_00101e4f:
          lVar47 = (long)(int)uVar42;
          pauVar22 = __ptr_00;
          do {
            *(uint *)(pauVar22[4] + 0xc) = *(uint *)(pauVar22[4] + 0xc) | 4;
            pauVar29 = pauVar22 + 5;
            *(undefined8 *)*pauVar22 = 0xffffffffffffffff;
            *(undefined4 *)(*pauVar22 + 8) = 0xffffffff;
            pauVar22[1] = (undefined1  [16])0x0;
            *(undefined8 *)pauVar22[2] = 0;
            *(undefined1 (*) [16])(pauVar22[2] + 8) = (undefined1  [16])0x0;
            *(undefined1 (*) [16])(pauVar22[3] + 8) = (undefined1  [16])0x0;
            pauVar22 = (undefined1 (*) [16])(*pauVar29 + 8);
          } while ((undefined1 (*) [16])((long)__ptr_00 + lVar47 * 0x58) !=
                   (undefined1 (*) [16])(*pauVar29 + 8));
          local_1d8 = lVar47 * 2;
          puVar25 = (undefined8 *)(__ptr_00[2] + 8);
          puVar23 = __ptr;
          do {
            while( true ) {
              (**(code **)(*param_2 + 0x10))(param_2,local_98,(int)*puVar23 >> 2,*puVar23 & 3);
              auVar67 = _local_98;
              fVar68 = fStack_90;
              (**(code **)(*param_2 + 0x10))(param_2,local_98,(int)puVar23[1] >> 2,puVar23[1] & 3);
              uVar63 = local_98._0_4_;
              uVar15 = local_98._4_4_;
              fVar72 = fStack_90;
              (**(code **)(*param_2 + 0x10))(param_2,local_98,(int)puVar23[2] >> 2,puVar23[2] & 3);
              uVar9 = local_98._0_4_;
              uVar16 = local_98._4_4_;
              fVar73 = fStack_90;
              (**(code **)(*param_2 + 0x20))(param_2,local_98,(int)*puVar23 >> 2,*puVar23 & 3);
              auVar77 = _local_98;
              (**(code **)(*param_2 + 0x20))(param_2,local_98,(int)puVar23[1] >> 2,puVar23[1] & 3);
              uVar10 = local_98._0_4_;
              uVar17 = local_98._4_4_;
              (**(code **)(*param_2 + 0x20))(param_2,local_98,(int)puVar23[2] >> 2,puVar23[2] & 3);
              uVar56 = _LC12;
              fVar62 = __LC13;
              fVar80 = auVar77._0_4_;
              fVar70 = auVar77._4_4_;
              fVar75 = (float)uVar17 - fVar70;
              fVar69 = (float)uVar10 - fVar80;
              fVar70 = (float)local_98._4_4_ - fVar70;
              fVar80 = (float)local_98._0_4_ - fVar80;
              fVar76 = fVar70 * fVar69 - fVar75 * fVar80;
              auVar77._0_4_ = (float)((uint)fVar76 & _LC12);
              uVar21 = (uint)(0.0 < fVar76);
              uVar33 = uVar21 << 3;
              uVar31 = *(uint *)((long)puVar25 + 0x24);
              *(uint *)((long)puVar25 + 0x24) = uVar33 | uVar31;
              if (fVar62 < auVar77._0_4_) break;
LAB_00101ecf:
              puVar23 = puVar23 + 3;
              puVar25 = puVar25 + 0xb;
              if (__ptr + lVar47 * 3 == puVar23) goto LAB_001022df;
            }
            fVar80 = (float)((uint)fVar80 ^ __LC2);
            fVar76 = auVar67._0_4_;
            fVar85 = (float)uVar9 - fVar76;
            fVar87 = auVar67._4_4_;
            fVar86 = (float)uVar15 - fVar87;
            fVar83 = (float)uVar9 - fVar76;
            fVar84 = (float)uVar16 - fVar87;
            fVar81 = (float)uVar63 - fVar76;
            fVar82 = (float)uVar15 - fVar87;
            fVar76 = (float)uVar63 - fVar76;
            fVar87 = (float)uVar16 - fVar87;
            fVar78 = (fVar72 - fVar68) * fVar80 + (fVar73 - fVar68) * fVar69;
            fVar79 = _UNK_00104ab4 * 0.0 + 0.0;
            fVar74 = (fVar72 - fVar68) * fVar70 - (fVar73 - fVar68) * fVar75;
            fVar88 = fVar76 * fVar80 + fVar85 * fVar69;
            fVar62 = fVar86 * fVar70 - fVar87 * fVar75;
            fVar68 = 0.0 - _UNK_00104ab4 * 0.0;
            fVar76 = fVar70 * fVar76 - fVar75 * fVar85;
            fVar72 = fVar80 * fVar86 + fVar69 * fVar87;
            fVar73 = _UNK_00104ab4 * 0.0 + 0.0;
            auVar67._0_4_ = fVar62 * fVar62 + fVar76 * fVar76 + fVar74 * fVar74;
            auVar67._4_4_ = fVar88 * fVar88 + fVar72 * fVar72 + fVar78 * fVar78;
            auVar67._8_4_ = fVar68 * fVar68 + 0.0 + 0.0;
            auVar67._12_4_ = fVar73 * fVar73 + 0.0 + fVar79 * fVar79;
            auVar67 = sqrtps(auVar67,auVar67);
            fVar62 = _LC5;
            if (uVar21 == 0 && (uVar31 & 8) == 0) {
              fVar62 = _LC4;
            }
            if (__LC13 < (float)((uint)auVar67._0_4_ & uVar56)) {
              fVar68 = fVar62 / auVar67._0_4_;
              *(float *)(puVar25 + 1) = fVar74 * fVar68;
              *puVar25 = CONCAT44((fVar70 * fVar82 - fVar75 * fVar84) * fVar68,
                                  (fVar70 * fVar81 - fVar75 * fVar83) * fVar68);
            }
            if (__LC13 < (float)((uint)auVar67._4_4_ & uVar56)) {
              fVar62 = fVar62 / auVar67._4_4_;
              *(float *)((long)puVar25 + 0x14) = fVar78 * fVar62;
              *(ulong *)((long)puVar25 + 0xc) =
                   CONCAT44((fVar69 * fVar84 + fVar80 * fVar82) * fVar62,
                            (fVar69 * fVar83 + fVar80 * fVar81) * fVar62);
            }
            auVar77._4_4_ = auVar77._0_4_;
            auVar77._8_8_ = _LC14;
            auVar67 = divps(auVar67,auVar77);
            puVar25[3] = auVar67._0_8_;
            if (((float)(auVar67._0_4_ & uVar56) <= __LC13) ||
               ((float)(auVar67._4_4_ & uVar56) <= __LC13)) goto LAB_00101ecf;
            puVar23 = puVar23 + 3;
            *(uint *)((long)puVar25 + 0x24) = uVar33 | uVar31 & 0xfffffffb;
            puVar25 = puVar25 + 0xb;
          } while (__ptr + lVar47 * 3 != puVar23);
LAB_001022df:
          if (uVar42 != 1) {
            iVar19 = 0;
            do {
              while( true ) {
                lVar36 = (long)__ptr_00 + (long)iVar19 * 0x58;
                lVar61 = (long)__ptr_00 + (long)iVar19 * 0x58 + 0x58;
                if (*(int *)(lVar36 + 0x48) != *(int *)(lVar61 + 0x48)) break;
                uVar31 = *(uint *)(lVar61 + 0x4c);
                if ((((*(uint *)(lVar36 + 0x4c) | uVar31) & 1) == 0) &&
                   (((*(uint *)(lVar36 + 0x4c) ^ uVar31) & 8) != 0)) {
                  if ((uVar31 & 4) == 0) {
                    fVar62 = (float)CalcTexArea(param_2,__ptr + iVar19 * 3);
                    fVar68 = (float)CalcTexArea(param_2,__ptr + (long)(iVar19 * 3) + 3);
                    lVar48 = lVar36;
                    if (fVar68 <= fVar62) goto LAB_00102343;
                  }
                  else {
LAB_00102343:
                    lVar48 = lVar61;
                    lVar61 = lVar36;
                  }
                  uVar31 = *(uint *)(lVar48 + 0x4c) & 0xfffffff7;
                  *(uint *)(lVar48 + 0x4c) = uVar31;
                  *(uint *)(lVar48 + 0x4c) = *(uint *)(lVar61 + 0x4c) & 8 | uVar31;
                }
                iVar19 = iVar19 + 2;
                if ((int)(uVar42 - 1) <= iVar19) goto LAB_0010236f;
              }
              iVar19 = iVar19 + 1;
            } while (iVar19 < (int)(uVar42 - 1));
          }
LAB_0010236f:
          puVar23 = (uint *)malloc(lVar47 * 0x24);
          if (puVar23 == (uint *)0x0) {
            pauVar22 = __ptr_00;
            for (uVar31 = 0; (int)uVar31 < (int)uVar42; uVar31 = uVar31 + 1) {
              lVar47 = 0;
              do {
                if (*(int *)(*pauVar22 + lVar47 * 4) == -1) {
                  if (lVar47 == 2) {
                    iVar19 = 0;
                  }
                  else {
                    iVar19 = (int)lVar47 + 1;
                  }
                  iVar58 = 0;
                  uVar56 = 0;
                  do {
                    if (uVar31 != uVar56) {
                      lVar36 = 0;
                      while( true ) {
                        iVar20 = (int)lVar36;
                        iVar41 = 0;
                        if (iVar20 != 2) {
                          iVar41 = iVar20 + 1;
                        }
                        if (2 < iVar20) break;
                        if ((__ptr[iVar41 + iVar58] == __ptr[(int)(uVar31 * 3 + (int)lVar47)]) &&
                           (__ptr[iVar58 + iVar20] == __ptr[(int)(uVar31 * 3 + iVar19)])) {
                          *(uint *)(*pauVar22 + lVar47 * 4) = uVar56;
                          *(uint *)((long)__ptr_00 + lVar36 * 4 + (long)(int)uVar56 * 0x58) = uVar31
                          ;
                          goto LAB_001048f1;
                        }
                        lVar36 = (long)(iVar20 + 1);
                      }
                    }
                    uVar56 = uVar56 + 1;
                    iVar58 = iVar58 + 3;
                  } while (uVar42 != uVar56);
                }
LAB_001048f1:
                lVar47 = lVar47 + 1;
              } while (lVar47 != 3);
              pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 8);
            }
          }
          else {
            uVar31 = 0;
            puVar37 = puVar23;
            puVar45 = __ptr;
            do {
              iVar19 = 0;
              uVar56 = *puVar45;
              uVar21 = *puVar45;
              puVar53 = puVar37;
              puVar52 = puVar45;
              do {
                puVar51 = puVar53;
                uVar33 = puVar52[1];
                iVar19 = iVar19 + 1;
                puVar51[2] = uVar31;
                uVar43 = uVar33;
                if ((int)uVar21 <= (int)uVar33) {
                  uVar43 = uVar21;
                }
                if ((int)uVar21 < (int)uVar33) {
                  uVar21 = uVar33;
                }
                puVar52 = puVar52 + 1;
                puVar51[1] = uVar21;
                uVar21 = *puVar52;
                *puVar51 = uVar43;
                puVar53 = puVar51 + 3;
              } while (iVar19 != 2);
              puVar51[5] = uVar31;
              uVar33 = uVar56;
              if ((int)uVar21 <= (int)uVar56) {
                uVar33 = uVar21;
              }
              if ((int)uVar21 < (int)uVar56) {
                uVar21 = uVar56;
              }
              uVar31 = uVar31 + 1;
              puVar45 = puVar45 + 3;
              puVar37 = puVar37 + 9;
              puVar51[3] = uVar33;
              puVar51[4] = uVar21;
            } while (uVar42 != uVar31);
            iVar19 = uVar42 * 3;
            puVar37 = puVar23 + 3;
            QuickSortEdges(puVar23,0,iVar19 + -1,0);
            iVar58 = 0;
            iVar20 = 1;
            puVar45 = puVar37;
            do {
              if (puVar23[(long)iVar58 * 3] != *puVar45) {
                QuickSortEdges(puVar23,iVar58,iVar20 + -1,1);
                iVar58 = iVar20;
              }
              iVar20 = iVar20 + 1;
              puVar45 = puVar45 + 3;
            } while (iVar20 != iVar19);
            iVar58 = 0;
            iVar20 = 1;
            do {
              if ((puVar23[(long)iVar58 * 3] != *puVar37) ||
                 ((puVar23 + (long)iVar58 * 3)[1] != puVar37[1])) {
                QuickSortEdges(puVar23,iVar58,iVar20 + -1,2);
                iVar58 = iVar20;
              }
              iVar20 = iVar20 + 1;
              puVar37 = puVar37 + 3;
            } while (iVar20 != iVar19);
            iVar58 = 0;
            local_1f8 = puVar23;
            do {
              while( true ) {
                uVar31 = local_1f8[2];
                uVar56 = *local_1f8;
                uVar21 = local_1f8[1];
                puVar37 = __ptr + (int)(uVar31 * 3);
                uVar33 = *puVar37;
                uVar43 = puVar37[1];
                if ((uVar56 == uVar33) || (uVar21 == uVar33)) {
                  if ((uVar21 == uVar43) || (uVar56 == uVar43)) {
                    iVar20 = 0;
                    uVar32 = uVar33;
                  }
                  else {
                    iVar20 = 2;
                    uVar32 = puVar37[2];
                    uVar43 = uVar33;
                  }
                }
                else {
                  iVar20 = 1;
                  uVar32 = uVar43;
                  uVar43 = puVar37[2];
                }
                iVar58 = iVar58 + 1;
                if (*(int *)((long)__ptr_00 + (long)iVar20 * 4 + (long)(int)uVar31 * 0x58) != -1)
                break;
                if (iVar19 <= iVar58) goto LAB_00102537;
                lVar47 = 0;
                iVar60 = 1;
                iVar41 = iVar58;
                do {
                  lVar36 = (long)iVar41;
                  puVar37 = puVar23 + lVar36 * 3;
                  if ((uVar56 != *puVar37) || (uVar21 != puVar37[1])) break;
                  if (iVar60 == 0) goto LAB_00104744;
                  puVar45 = __ptr + (int)(puVar37[2] * 3);
                  uVar33 = *puVar45;
                  uVar6 = puVar45[1];
                  if ((uVar56 == uVar33) || (uVar21 == uVar33)) {
                    if ((*puVar37 == uVar6) || (puVar37[1] == uVar6)) {
                      lVar47 = 0;
                      uVar54 = uVar33;
                      uVar33 = uVar6;
                    }
                    else {
                      lVar47 = 2;
                      uVar54 = puVar45[2];
                    }
                  }
                  else {
                    uVar33 = puVar45[2];
                    lVar47 = (long)iVar60;
                    uVar54 = uVar6;
                  }
                  if ((*(int *)((long)__ptr_00 +
                               (long)(int)lVar47 * 4 + (long)(int)puVar37[2] * 0x58) == -1) &&
                     (uVar43 == uVar54 && uVar32 == uVar33)) {
                    iVar60 = 0;
                  }
                  else {
                    iVar41 = iVar41 + 1;
                  }
                } while (iVar41 < iVar19);
                if (iVar60 == 0) {
                  lVar36 = (long)iVar41;
LAB_00104744:
                  local_1f8 = local_1f8 + 3;
                  uVar56 = puVar23[lVar36 * 3 + 2];
                  *(uint *)((long)__ptr_00 + (long)iVar20 * 4 + (long)(int)uVar31 * 0x58) = uVar56;
                  *(uint *)((long)__ptr_00 + lVar47 * 4 + (long)(int)uVar56 * 0x58) = uVar31;
                }
                else {
                  local_1f8 = local_1f8 + 3;
                }
              }
              local_1f8 = local_1f8 + 3;
            } while (iVar19 != iVar58);
LAB_00102537:
            free(puVar23);
          }
        }
        uVar31 = uVar42 * 3;
        local_118 = (long)(int)uVar42;
        __ptr_01 = (int *)malloc((long)(int)uVar31 * 0x18);
        __ptr_02 = malloc((local_1d8 + local_118) * 4);
        if (__ptr_01 != (int *)0x0) {
          if (__ptr_02 != (void *)0x0) {
            iVar19 = 0;
            if (0 < (int)uVar42) {
              iVar58 = 0;
              iVar19 = 0;
              uVar64 = 0;
              pauVar22 = __ptr_00;
              do {
                lVar47 = 0;
                do {
                  uVar56 = *(uint *)(pauVar22[4] + 0xc);
                  if (((uVar56 & 4) == 0) && (*(long *)(pauVar22[1] + lVar47 * 8) == 0)) {
                    lVar36 = (long)iVar19;
                    iVar19 = iVar19 + 1;
                    piVar27 = __ptr_01 + lVar36 * 6;
                    uVar21 = __ptr[(int)uVar64 * 3 + (int)lVar47];
                    iVar20 = *(int *)(*pauVar22 + lVar47 * 4);
                    piVar26 = (int *)((long)__ptr_02 + (long)iVar58 * 4);
                    *(int **)(pauVar22[1] + lVar47 * 8) = piVar27;
                    *(int **)(piVar27 + 2) = piVar26;
                    *piVar26 = (int)uVar64;
                    iVar41 = (int)lVar47 + -1;
                    if (lVar47 == 0) {
                      iVar41 = 2;
                    }
                    *piVar27 = 1;
                    *(ulong *)(piVar27 + 4) = CONCAT44(uVar56 >> 3,uVar21) & 0x1ffffffff;
                    iVar41 = *(int *)(*pauVar22 + (long)iVar41 * 4);
                    if (-1 < iVar20) {
                      AssignRecur_isra_0(__ptr,__ptr_00);
                      piVar27 = *(int **)(pauVar22[1] + lVar47 * 8);
                    }
                    if (-1 < iVar41) {
                      AssignRecur_isra_0(__ptr,__ptr_00,iVar41);
                      piVar27 = *(int **)(pauVar22[1] + lVar47 * 8);
                    }
                    iVar58 = iVar58 + *piVar27;
                  }
                  lVar47 = lVar47 + 1;
                } while (lVar47 != 3);
                uVar56 = (int)uVar64 + 1;
                uVar64 = (ulong)uVar56;
                pauVar22 = (undefined1 (*) [16])(pauVar22[5] + 8);
              } while (uVar42 != uVar56);
            }
            sVar24 = (long)iVar18 * 0x28;
            puVar25 = (undefined8 *)malloc(sVar24);
            if (puVar25 == (undefined8 *)0x0) {
              free(__ptr);
              free(__ptr_00);
              free(__ptr_01);
              free(__ptr_02);
              goto LAB_00101982;
            }
            __memset_chk(puVar25,0,sVar24,sVar24);
            uVar13 = _UNK_00104ae8;
            uVar12 = __LC16;
            uVar30 = _UNK_00104ad8;
            if (0 < iVar18) {
              uVar11 = CONCAT44(_UNK_00104ad4,_LC5);
              puVar38 = puVar25;
              do {
                *puVar38 = uVar11;
                puVar38[1] = uVar30;
                puVar39 = puVar38 + 5;
                puVar38[2] = uVar12;
                puVar38[3] = uVar13;
                puVar38 = puVar39;
              } while (puVar25 + (long)iVar18 * 5 != puVar39);
            }
            if (0 < iVar19) {
              iVar18 = 0;
              piVar27 = __ptr_01;
              do {
                if (iVar18 < *piVar27) {
                  iVar18 = *piVar27;
                }
                piVar27 = piVar27 + 6;
              } while (__ptr_01 + (long)iVar19 * 6 != piVar27);
              if (iVar18 != 0) {
                lVar47 = (long)iVar18;
                piVar26 = (int *)malloc(lVar47 * 0x28);
                __ptr_03 = (int *)malloc(lVar47 << 4);
                piVar27 = (int *)malloc(lVar47 * 4);
                if (piVar26 == (int *)0x0) {
LAB_001049b1:
                  if (__ptr_03 != (int *)0x0) {
                    free(__ptr_03);
                  }
                  if (piVar27 != (int *)0x0) {
LAB_001049dd:
                    free(piVar27);
                  }
                }
                else {
                  if (__ptr_03 == (int *)0x0) {
                    if (piVar26 != (int *)0x0) {
                      free(piVar26);
                    }
                    goto LAB_001049b1;
                  }
                  if (piVar27 != (int *)0x0) {
                    dVar65 = cos((double)((param_1 * __LC17) / _LC18));
                    piVar55 = __ptr_01;
                    do {
                      if (0 < *piVar55) {
                        iVar18 = 0;
                        local_1c0 = 0;
                        do {
                          iVar20 = 0;
                          iVar58 = *(int *)(*(long *)(piVar55 + 2) + local_1c0 * 4);
                          if ((*(int **)((long)__ptr_00 + (long)iVar58 * 0x58 + 0x10) != piVar55) &&
                             (iVar20 = 1,
                             *(int **)((long)__ptr_00 + (long)iVar58 * 0x58 + 0x18) != piVar55)) {
                            iVar20 = (uint)(*(int **)((long)__ptr_00 + (long)iVar58 * 0x58 + 0x20)
                                           == piVar55) * 3 + -1;
                          }
                          (**(code **)(*param_2 + 0x18))
                                    (param_2,local_98,(int)__ptr[iVar58 * 3 + iVar20] >> 2,
                                     __ptr[iVar58 * 3 + iVar20] & 3);
                          uVar56 = _LC12;
                          fVar62 = *(float *)((long)__ptr_00 + (long)iVar58 * 0x58 + 0x28);
                          fVar68 = *(float *)((long)__ptr_00 + (long)iVar58 * 0x58 + 0x2c);
                          fVar72 = *(float *)((long)__ptr_00 + (long)iVar58 * 0x58 + 0x30);
                          fVar73 = *(float *)((long)__ptr_00 + (long)iVar58 * 0x58 + 0x34);
                          fVar69 = *(float *)((long)__ptr_00 + (long)iVar58 * 0x58 + 0x38);
                          fVar70 = fVar62 * (float)local_98._0_4_ + fVar68 * (float)local_98._4_4_ +
                                   fVar72 * fStack_90;
                          fVar62 = fVar62 - fVar70 * (float)local_98._0_4_;
                          fVar72 = fVar72 - fVar70 * fStack_90;
                          fVar68 = fVar68 - fVar70 * (float)local_98._4_4_;
                          fVar70 = *(float *)((long)__ptr_00 + (long)iVar58 * 0x58 + 0x3c);
                          fVar75 = fVar73 * (float)local_98._0_4_ + fVar69 * (float)local_98._4_4_ +
                                   fVar70 * fStack_90;
                          fVar73 = fVar73 - fVar75 * (float)local_98._0_4_;
                          fVar70 = fVar70 - fVar75 * fStack_90;
                          fVar69 = fVar69 - fVar75 * (float)local_98._4_4_;
                          if (((__LC13 < (float)((uint)fVar62 & _LC12)) ||
                              (__LC13 < (float)((uint)fVar68 & _LC12))) ||
                             (__LC13 < (float)((uint)fVar72 & _LC12))) {
                            fVar75 = _LC5 / SQRT(fVar62 * fVar62 + fVar68 * fVar68 + fVar72 * fVar72
                                                );
                            fVar62 = fVar62 * fVar75;
                            fVar68 = fVar68 * fVar75;
                            fVar72 = fVar72 * fVar75;
                          }
                          if (__LC13 < (float)((uint)fVar73 & _LC12)) {
                            fVar75 = fVar73 * fVar73 + fVar69 * fVar69 + fVar70 * fVar70;
LAB_001029e8:
                            fVar75 = _LC5 / SQRT(fVar75);
                            fVar69 = fVar69 * fVar75;
                            fVar73 = fVar73 * fVar75;
                            fVar70 = fVar75 * fVar70;
                          }
                          else {
                            if (__LC13 < (float)((uint)fVar69 & _LC12)) {
                              fVar75 = fVar73 * fVar73 + fVar69 * fVar69 + fVar70 * fVar70;
                              goto LAB_001029e8;
                            }
                            if (__LC13 < (float)((uint)fVar70 & _LC12)) {
                              fVar75 = fVar73 * fVar73 + fVar69 * fVar69 + fVar70 * fVar70;
                              goto LAB_001029e8;
                            }
                          }
                          iVar41 = *(int *)((long)__ptr_00 + (long)iVar58 * 0x58 + 0x48);
                          if (*piVar55 < 1) {
                            iVar60 = 0;
                          }
                          else {
                            piVar40 = *(int **)(piVar55 + 2);
                            uVar21 = *(uint *)((long)__ptr_00 + (long)iVar58 * 0x58 + 0x4c);
                            iVar60 = 0;
                            piVar49 = piVar40 + *piVar55;
                            do {
                              iVar5 = *piVar40;
                              fVar75 = *(float *)((long)__ptr_00 + (long)iVar5 * 0x58 + 0x28);
                              fVar80 = *(float *)((long)__ptr_00 + (long)iVar5 * 0x58 + 0x2c);
                              fVar76 = *(float *)((long)__ptr_00 + (long)iVar5 * 0x58 + 0x30);
                              fVar87 = *(float *)((long)__ptr_00 + (long)iVar5 * 0x58 + 0x38);
                              fVar74 = *(float *)((long)__ptr_00 + (long)iVar5 * 0x58 + 0x3c);
                              fVar79 = fVar75 * (float)local_98._0_4_ +
                                       fVar80 * (float)local_98._4_4_ + fVar76 * fStack_90;
                              fVar75 = fVar75 - fVar79 * (float)local_98._0_4_;
                              fVar76 = fVar76 - fVar79 * fStack_90;
                              fVar78 = *(float *)((long)__ptr_00 + (long)iVar5 * 0x58 + 0x34);
                              fVar80 = fVar80 - fVar79 * (float)local_98._4_4_;
                              fVar79 = fVar87 * (float)local_98._4_4_ +
                                       fVar78 * (float)local_98._0_4_ + fVar74 * fStack_90;
                              fVar78 = fVar78 - fVar79 * (float)local_98._0_4_;
                              fVar74 = fVar74 - fVar79 * fStack_90;
                              fVar87 = fVar87 - fVar79 * (float)local_98._4_4_;
                              if (((__LC13 < (float)((uint)fVar75 & uVar56)) ||
                                  (__LC13 < (float)((uint)fVar80 & uVar56))) ||
                                 (__LC13 < (float)((uint)fVar76 & uVar56))) {
                                fVar79 = _LC5 / SQRT(fVar75 * fVar75 + fVar80 * fVar80 +
                                                     fVar76 * fVar76);
                                fVar75 = fVar75 * fVar79;
                                fVar80 = fVar80 * fVar79;
                                fVar76 = fVar76 * fVar79;
                              }
                              if (((__LC13 < (float)((uint)fVar78 & uVar56)) ||
                                  (__LC13 < (float)((uint)fVar87 & uVar56))) ||
                                 (__LC13 < (float)((uint)fVar74 & uVar56))) {
                                fVar79 = _LC5 / SQRT(fVar78 * fVar78 + fVar87 * fVar87 +
                                                     fVar74 * fVar74);
                                fVar78 = fVar78 * fVar79;
                                fVar87 = fVar87 * fVar79;
                                fVar74 = fVar74 * fVar79;
                              }
                              if ((((int)(*(uint *)((long)__ptr_00 + (long)iVar5 * 0x58 + 0x4c) |
                                         uVar21) >> 2 & 1U) != 0 ||
                                   iVar41 == *(int *)((long)__ptr_00 + (long)iVar5 * 0x58 + 0x48))
                                 || (((float)dVar65 <
                                      fVar80 * fVar68 + fVar75 * fVar62 + fVar76 * fVar72 &&
                                     ((float)dVar65 <
                                      fVar78 * fVar73 + fVar87 * fVar69 + fVar74 * fVar70)))) {
                                lVar47 = (long)iVar60;
                                iVar60 = iVar60 + 1;
                                piVar27[lVar47] = iVar5;
                              }
                              piVar40 = piVar40 + 1;
                            } while (piVar40 != piVar49);
                            if (1 < iVar60) {
                              QuickSort(piVar27,0,iVar60 + -1,0x26065ca);
                            }
                          }
                          lVar47 = 0;
                          piVar49 = __ptr_03;
                          if (0 < iVar18) {
                            do {
                              if (*piVar49 == iVar60) {
                                if (iVar60 < 1) goto LAB_001038c2;
                                iVar41 = 0;
                                while (piVar27[iVar41] ==
                                       *(int *)(*(long *)(piVar49 + 2) + (long)iVar41 * 4)) {
                                  iVar41 = iVar41 + 1;
                                  if (iVar60 <= iVar41) goto LAB_001038c2;
                                }
                              }
                              lVar47 = lVar47 + 1;
                              piVar49 = piVar49 + 4;
                            } while ((int)lVar47 < iVar18);
                          }
                          sVar24 = (long)iVar60 * 4;
                          pvVar28 = malloc(sVar24);
                          if (pvVar28 == (void *)0x0) {
                            piVar55 = __ptr_03;
                            if (0 < iVar18) {
                              do {
                                piVar49 = piVar55 + 2;
                                piVar55 = piVar55 + 4;
                                free(*(void **)piVar49);
                              } while (piVar55 != __ptr_03 + (long)iVar18 * 4);
                            }
                            free(__ptr_03);
                            free(piVar27);
                            piVar27 = piVar26;
                            goto LAB_001049dd;
                          }
                          *(void **)(__ptr_03 + (long)iVar18 * 4 + 2) = pvVar28;
                          __ptr_03[(long)iVar18 * 4] = iVar60;
                          __memcpy_chk(pvVar28,piVar27,sVar24,sVar24);
                          uVar21 = piVar55[4];
                          piVar49 = piVar26 + (long)iVar18 * 10;
                          uVar56 = _LC12;
                          if (iVar60 < 1) {
                            fVar69 = 0.0;
                            local_1b8 = 0.0;
                            local_1b4 = 0.0;
                            local_1cc = 0.0;
                            fVar68 = 0.0;
                            fVar72 = 0.0;
                            local_168 = 0.0;
                            fVar62 = 0.0;
                            local_1d0 = 0.0;
                            fVar73 = 0.0;
LAB_00104179:
                            if (__LC13 < (float)((uint)local_1cc & uVar56)) {
                              fVar70 = local_1cc * local_1cc +
                                       local_1d0 * local_1d0 + fVar62 * fVar62;
                              goto LAB_00103cb7;
                            }
                          }
                          else {
                            local_168 = 0.0;
                            local_1b4 = 0.0;
                            local_1b8 = 0.0;
                            fVar73 = 0.0;
                            fVar72 = 0.0;
                            fVar68 = 0.0;
                            local_1cc = 0.0;
                            local_1d0 = 0.0;
                            fVar62 = 0.0;
                            piVar40 = piVar27;
                            do {
                              iVar41 = *piVar40;
                              if ((*(uint *)((long)__ptr_00 + (long)iVar41 * 0x58 + 0x4c) & 4) == 0)
                              {
                                iVar5 = iVar41 * 3;
                                puVar23 = __ptr + iVar5;
                                uVar56 = *puVar23;
                                iVar44 = 0;
                                puVar37 = puVar23;
                                if (uVar21 != uVar56) {
                                  iVar44 = 1;
                                  puVar37 = __ptr + (long)iVar5 + 1;
                                  uVar56 = *puVar37;
                                  if (uVar21 != uVar56) {
                                    if (uVar21 == __ptr[(long)iVar5 + 2]) {
                                      iVar44 = 2;
                                      puVar37 = __ptr + (iVar5 + 2);
                                      uVar56 = *puVar37;
                                    }
                                    else {
                                      iVar44 = -1;
                                      puVar37 = __ptr + (iVar5 + -1);
                                      uVar56 = *puVar37;
                                    }
                                  }
                                }
                                (**(code **)(*param_2 + 0x18))
                                          (param_2,local_98,(int)uVar56 >> 2,uVar56 & 3);
                                fVar74 = _LC5;
                                fVar69 = *(float *)((long)__ptr_00 + (long)iVar41 * 0x58 + 0x28);
                                fVar70 = *(float *)((long)__ptr_00 + (long)iVar41 * 0x58 + 0x2c);
                                uVar63 = local_98._0_4_;
                                fVar75 = *(float *)((long)__ptr_00 + (long)iVar41 * 0x58 + 0x30);
                                fVar80 = *(float *)((long)__ptr_00 + (long)iVar41 * 0x58 + 0x34);
                                uVar9 = local_98._4_4_;
                                fVar78 = fStack_90;
                                fVar76 = *(float *)((long)__ptr_00 + (long)iVar41 * 0x58 + 0x3c);
                                fVar79 = fVar69 * (float)local_98._0_4_ +
                                         fVar70 * (float)local_98._4_4_ + fVar75 * fStack_90;
                                fVar69 = fVar69 - fVar79 * (float)local_98._0_4_;
                                fVar70 = fVar70 - fVar79 * (float)local_98._4_4_;
                                fVar87 = *(float *)((long)__ptr_00 + (long)iVar41 * 0x58 + 0x38);
                                fVar75 = fVar75 - fVar79 * fStack_90;
                                fVar79 = fVar80 * (float)local_98._0_4_ +
                                         fVar87 * (float)local_98._4_4_ + fVar76 * fStack_90;
                                fVar80 = fVar80 - fVar79 * (float)local_98._0_4_;
                                fVar76 = fVar76 - fVar79 * fStack_90;
                                fVar87 = fVar87 - fVar79 * (float)local_98._4_4_;
                                if ((float)((uint)fVar69 & _LC12) <= __LC13) {
                                  if (__LC13 < (float)((uint)fVar70 & _LC12)) {
                                    fVar79 = fVar69 * fVar69 + fVar70 * fVar70 + fVar75 * fVar75;
                                    goto LAB_00102e5d;
                                  }
                                  if (__LC13 < (float)((uint)fVar75 & _LC12)) {
                                    fVar81 = fVar70 * fVar70;
                                    fVar79 = fVar69 * fVar69;
                                    goto LAB_0010356c;
                                  }
                                }
                                else {
                                  fVar81 = fVar69 * fVar69;
                                  fVar79 = fVar70 * fVar70;
LAB_0010356c:
                                  fVar79 = fVar79 + fVar81 + fVar75 * fVar75;
LAB_00102e5d:
                                  fVar79 = _LC5 / SQRT(fVar79);
                                  fVar69 = fVar69 * fVar79;
                                  fVar70 = fVar70 * fVar79;
                                  fVar75 = fVar79 * fVar75;
                                }
                                if (__LC13 < (float)((uint)fVar80 & _LC12)) {
                                  fVar81 = fVar87 * fVar87;
                                  fVar79 = fVar80 * fVar80;
LAB_00103b52:
                                  fVar79 = fVar79 + fVar81 + fVar76 * fVar76;
LAB_00102ef0:
                                  fVar79 = _LC5 / SQRT(fVar79);
                                  fVar87 = fVar87 * fVar79;
                                  fVar80 = fVar80 * fVar79;
                                  fVar76 = fVar79 * fVar76;
                                }
                                else {
                                  if (__LC13 < (float)((uint)fVar87 & _LC12)) {
                                    fVar81 = fVar80 * fVar80;
                                    fVar79 = fVar87 * fVar87;
                                    goto LAB_00103b52;
                                  }
                                  if (__LC13 < (float)((uint)fVar76 & _LC12)) {
                                    fVar79 = fVar87 * fVar87 + fVar80 * fVar80 + fVar76 * fVar76;
                                    goto LAB_00102ef0;
                                  }
                                }
                                uVar56 = *puVar37;
                                if (iVar44 == 2) {
                                  uVar33 = *puVar23;
LAB_00103b12:
                                  iVar34 = iVar44 + -1;
                                }
                                else {
                                  uVar33 = __ptr[iVar44 + 1 + iVar5];
                                  iVar34 = 2;
                                  if (iVar44 == 1) goto LAB_00103b12;
                                }
                                (**(code **)(*param_2 + 0x10))
                                          (param_2,local_98,(int)__ptr[iVar5 + iVar34] >> 2,
                                           __ptr[iVar5 + iVar34] & 3);
                                uVar10 = local_98._0_4_;
                                uVar16 = local_98._4_4_;
                                fVar79 = fStack_90;
                                (**(code **)(*param_2 + 0x10))
                                          (param_2,local_98,(int)uVar56 >> 2,uVar56 & 3);
                                uVar15 = local_98._0_4_;
                                uVar17 = local_98._4_4_;
                                fVar81 = fStack_90;
                                (**(code **)(*param_2 + 0x10))
                                          (param_2,local_98,(int)uVar33 >> 2,uVar33 & 3);
                                fVar82 = (float)uVar10 - (float)uVar15;
                                fVar84 = (float)local_98._0_4_ - (float)uVar15;
                                fVar83 = (float)uVar16 - (float)uVar17;
                                fVar79 = fVar79 - fVar81;
                                fVar85 = (float)local_98._4_4_ - (float)uVar17;
                                fVar81 = fStack_90 - fVar81;
                                fVar86 = fVar83 * (float)uVar9 + fVar82 * (float)uVar63 +
                                         fVar79 * fVar78;
                                fVar82 = fVar82 - fVar86 * (float)uVar63;
                                fVar79 = fVar79 - fVar86 * fVar78;
                                fVar83 = fVar83 - fVar86 * (float)uVar9;
                                if (__LC13 < (float)((uint)fVar82 & _LC12)) {
LAB_001031a0:
                                  fVar86 = fVar83 * fVar83 + fVar82 * fVar82 + fVar79 * fVar79;
LAB_001031c5:
                                  fVar86 = fVar74 / SQRT(fVar86);
                                  fVar82 = fVar82 * fVar86;
                                  fVar83 = fVar83 * fVar86;
                                  fVar79 = fVar79 * fVar86;
                                }
                                else {
                                  if (__LC13 < (float)((uint)fVar83 & _LC12)) {
                                    fVar86 = fVar82 * fVar82 + fVar83 * fVar83 + fVar79 * fVar79;
                                    goto LAB_001031c5;
                                  }
                                  if (__LC13 < (float)((uint)fVar79 & _LC12)) goto LAB_001031a0;
                                }
                                fVar86 = fVar81 * fVar78 +
                                         fVar85 * (float)uVar9 + fVar84 * (float)uVar63;
                                fVar84 = fVar84 - (float)uVar63 * fVar86;
                                fVar85 = fVar85 - (float)uVar9 * fVar86;
                                fVar81 = fVar81 - fVar86 * fVar78;
                                if (__LC13 < (float)((uint)fVar84 & _LC12)) {
                                  fVar78 = fVar84 * fVar84 + fVar85 * fVar85 + fVar81 * fVar81;
LAB_00103284:
                                  fVar78 = fVar74 / SQRT(fVar78);
                                  fVar84 = fVar84 * fVar78;
                                  fVar85 = fVar85 * fVar78;
                                  fVar81 = fVar81 * fVar78;
                                }
                                else if ((__LC13 < (float)((uint)fVar85 & _LC12)) ||
                                        (__LC13 < (float)((uint)fVar81 & _LC12))) {
                                  fVar78 = fVar85 * fVar85 + fVar84 * fVar84 + fVar81 * fVar81;
                                  goto LAB_00103284;
                                }
                                fVar78 = fVar82 * fVar84 + fVar83 * fVar85 + fVar79 * fVar81;
                                dVar66 = _LC6;
                                if ((fVar78 <= fVar74) && (dVar66 = _LC7, _LC4 <= fVar78)) {
                                  dVar66 = (double)fVar78;
                                }
                                dVar66 = acos(dVar66);
                                fVar74 = (float)dVar66;
                                local_1cc = fVar75 * fVar74 + local_1cc;
                                fVar62 = fVar69 * fVar74 + fVar62;
                                local_1d0 = fVar70 * fVar74 + local_1d0;
                                fVar68 = fVar80 * fVar74 + fVar68;
                                fVar72 = fVar87 * fVar74 + fVar72;
                                fVar73 = fVar76 * fVar74 + fVar73;
                                local_1b8 = *(float *)((long)__ptr_00 + (long)iVar41 * 0x58 + 0x40)
                                            * fVar74 + local_1b8;
                                local_168 = fVar74 + local_168;
                                local_1b4 = *(float *)((long)__ptr_00 + (long)iVar41 * 0x58 + 0x44)
                                            * fVar74 + local_1b4;
                                uVar56 = _LC12;
                              }
                              piVar40 = piVar40 + 1;
                            } while (piVar40 != piVar27 + iVar60);
                            fVar69 = (float)((uint)fVar68 & uVar56);
                            if ((float)((uint)fVar62 & uVar56) <= __LC13) {
                              if ((float)((uint)local_1d0 & uVar56) <= __LC13) goto LAB_00104179;
                              fVar75 = local_1d0 * local_1d0;
                              fVar70 = fVar62 * fVar62;
                            }
                            else {
                              fVar75 = fVar62 * fVar62;
                              fVar70 = local_1d0 * local_1d0;
                            }
                            fVar70 = local_1cc * local_1cc + fVar70 + fVar75;
LAB_00103cb7:
                            fVar70 = _LC5 / SQRT(fVar70);
                            fVar62 = fVar62 * fVar70;
                            local_1d0 = local_1d0 * fVar70;
                            local_1cc = fVar70 * local_1cc;
                          }
                          if (__LC13 < fVar69) {
                            fVar69 = fVar73 * fVar73 + fVar72 * fVar72 + fVar68 * fVar68;
LAB_00103d53:
                            fVar69 = _LC5 / SQRT(fVar69);
                            fVar68 = fVar68 * fVar69;
                            fVar72 = fVar72 * fVar69;
                            fVar73 = fVar69 * fVar73;
                          }
                          else {
                            if (__LC13 < (float)((uint)fVar72 & uVar56)) {
                              fVar69 = fVar73 * fVar73 + fVar72 * fVar72 + fVar68 * fVar68;
                              goto LAB_00103d53;
                            }
                            if (__LC13 < (float)((uint)fVar73 & uVar56)) {
                              fVar69 = fVar73 * fVar73 + fVar72 * fVar72 + fVar68 * fVar68;
                              goto LAB_00103d53;
                            }
                          }
                          if (0.0 < local_168) {
                            local_1b8 = local_1b8 / local_168;
                            local_1b4 = local_1b4 / local_168;
                          }
                          piVar49[8] = 0;
                          piVar49[9] = 0;
                          iVar18 = iVar18 + 1;
                          *(ulong *)piVar49 = CONCAT44(local_1d0,fVar62);
                          *(ulong *)(piVar49 + 2) = CONCAT44(local_1b8,local_1cc);
                          *(ulong *)(piVar49 + 4) = CONCAT44(fVar72,fVar68);
                          *(ulong *)(piVar49 + 6) = CONCAT44(local_1b4,fVar73);
LAB_001038c2:
                          iVar41 = piVar55[5];
                          pauVar22 = (undefined1 (*) [16])
                                     (puVar25 +
                                     (long)(int)((uint)*(byte *)((long)__ptr_00 +
                                                                (long)iVar20 +
                                                                (long)iVar58 * 0x58 + 0x54) +
                                                *(int *)((long)__ptr_00 + (long)iVar58 * 0x58 + 0x50
                                                        )) * 5);
                          pfVar2 = (float *)(piVar26 + lVar47 * 10);
                          if (*(int *)pauVar22[2] == 1) {
                            fVar62 = *(float *)((long)*pauVar22 + 0xc);
                            fVar68 = *(float *)((long)pauVar22[1] + 0xc);
                            fVar72 = *(float *)*pauVar22;
                            fVar73 = *(float *)((long)*pauVar22 + 4);
                            fVar69 = *(float *)((long)*pauVar22 + 8);
                            fVar70 = *(float *)pauVar22[1];
                            fVar75 = *(float *)((long)pauVar22[1] + 4);
                            fVar80 = *(float *)((long)pauVar22[1] + 8);
                            if ((((fVar62 != pfVar2[3]) || (fVar68 != pfVar2[7])) ||
                                (fVar72 != *pfVar2 || fVar73 != pfVar2[1])) ||
                               (((fVar69 != pfVar2[2] ||
                                 (fVar75 != pfVar2[5] || fVar70 != pfVar2[4])) ||
                                (fVar80 != pfVar2[6])))) {
                              fVar72 = fVar72 + *pfVar2;
                              fVar62 = (fVar62 + pfVar2[3]) * _LC3;
                              fVar73 = fVar73 + pfVar2[1];
                              fVar69 = fVar69 + pfVar2[2];
                              fVar70 = fVar70 + pfVar2[4];
                              fVar75 = fVar75 + pfVar2[5];
                              fVar80 = fVar80 + pfVar2[6];
                              fVar68 = _LC3 * (pfVar2[7] + fVar68);
                              if ((__LC13 < (float)((uint)fVar72 & uVar56)) ||
                                 (__LC13 < (float)((uint)fVar73 & uVar56))) {
                                fVar76 = fVar69 * fVar69 + fVar73 * fVar73 + fVar72 * fVar72;
LAB_00103f9f:
                                fVar76 = _LC5 / SQRT(fVar76);
                                fVar72 = fVar72 * fVar76;
                                fVar73 = fVar73 * fVar76;
                                fVar69 = fVar69 * fVar76;
                              }
                              else if (__LC13 < (float)((uint)fVar69 & uVar56)) {
                                fVar76 = fVar69 * fVar69 + fVar72 * fVar72 + fVar73 * fVar73;
                                goto LAB_00103f9f;
                              }
                              if (((__LC13 < (float)((uint)fVar70 & uVar56)) ||
                                  (__LC13 < (float)((uint)fVar75 & uVar56))) ||
                                 (__LC13 < (float)((uint)fVar80 & uVar56))) {
                                fVar76 = _LC5 / SQRT(fVar80 * fVar80 +
                                                     fVar75 * fVar75 + fVar70 * fVar70);
                                fVar70 = fVar70 * fVar76;
                                fVar75 = fVar75 * fVar76;
                                fVar80 = fVar80 * fVar76;
                              }
                            }
                            auVar71._12_4_ = fVar62;
                            auVar71._8_4_ = fVar69;
                            auVar71._4_4_ = fVar73;
                            auVar71._0_4_ = fVar72;
                            uVar63 = 2;
                            *pauVar22 = auVar71;
                            *(ulong *)pauVar22[1] = CONCAT44(fVar75,fVar70);
                            *(float *)((long)pauVar22[1] + 8) = fVar80;
                            *(float *)((long)pauVar22[1] + 0xc) = fVar68;
                          }
                          else {
                            uVar30 = *(undefined8 *)(pfVar2 + 2);
                            uVar63 = 1;
                            *(undefined8 *)*pauVar22 = *(undefined8 *)pfVar2;
                            *(undefined8 *)((long)*pauVar22 + 8) = uVar30;
                            fVar62 = pfVar2[4];
                            fVar68 = pfVar2[5];
                            fVar72 = pfVar2[6];
                            fVar73 = pfVar2[7];
                            *(undefined8 *)pauVar22[2] = *(undefined8 *)(pfVar2 + 8);
                            *(float *)pauVar22[1] = fVar62;
                            *(float *)((long)pauVar22[1] + 4) = fVar68;
                            *(float *)((long)pauVar22[1] + 8) = fVar72;
                            *(float *)((long)pauVar22[1] + 0xc) = fVar73;
                          }
                          local_1c0 = local_1c0 + 1;
                          *(ulong *)pauVar22[2] = CONCAT44(iVar41,uVar63);
                        } while ((int)local_1c0 < *piVar55);
                        if (0 < iVar18) {
                          piVar49 = __ptr_03;
                          do {
                            piVar40 = piVar49 + 2;
                            piVar49 = piVar49 + 4;
                            free(*(void **)piVar40);
                          } while (piVar49 != __ptr_03 + (long)iVar18 * 4);
                        }
                      }
                      piVar55 = piVar55 + 6;
                    } while (__ptr_01 + (long)iVar19 * 6 != piVar55);
                    free(__ptr_03);
                    free(piVar27);
                    free(piVar26);
                    goto LAB_001039dd;
                  }
                  free(piVar26);
                  free(__ptr_03);
                }
                free(__ptr_01);
                free(__ptr_02);
                free(__ptr_00);
                free(__ptr);
                free(puVar25);
                goto LAB_00101982;
              }
            }
LAB_001039dd:
            free(__ptr_01);
            free(__ptr_02);
            if ((int)uVar42 < iVar46) {
              iVar18 = uVar42 * 3;
              lVar47 = (long)__ptr_00 + local_118 * 0x58;
              puVar23 = __ptr + local_1d8 + local_118;
              do {
                if ((*(byte *)(lVar47 + 0x4c) & 2) == 0) {
                  lVar36 = 0;
LAB_00103a62:
                  if ((int)uVar31 < 1) goto LAB_00104723;
                  uVar56 = puVar23[lVar36];
                  while( true ) {
                    uVar64 = 0;
                    puVar37 = __ptr;
                    do {
                      if (*puVar37 == uVar56) {
                        iVar19 = (int)(uVar64 / 3);
                        puVar38 = puVar25 + (long)(int)((uint)*(byte *)(lVar47 + lVar36 + 0x54) +
                                                       *(int *)(lVar47 + 0x50)) * 5;
                        puVar39 = puVar25 + (long)(int)((uint)*(byte *)((long)__ptr_00 +
                                                                       (long)((int)uVar64 +
                                                                             (int)(uVar64 / 3) * -3)
                                                                       + (long)iVar19 * 0x58 + 0x54)
                                                       + *(int *)((long)__ptr_00 +
                                                                 (long)iVar19 * 0x58 + 0x50)) * 5;
                        uVar30 = puVar39[1];
                        *puVar38 = *puVar39;
                        puVar38[1] = uVar30;
                        uVar30 = puVar39[3];
                        puVar38[2] = puVar39[2];
                        puVar38[3] = uVar30;
                        puVar38[4] = puVar39[4];
                        if (lVar36 != 2) goto LAB_00103b06;
                        goto joined_r0x001043e4;
                      }
                      uVar21 = (int)uVar64 + 1;
                      uVar64 = (ulong)uVar21;
                      puVar37 = puVar37 + 1;
                    } while (uVar21 != uVar31);
                    if (lVar36 == 2) break;
LAB_00103b06:
                    lVar36 = lVar36 + 1;
                    uVar56 = puVar23[lVar36];
                  }
                }
joined_r0x001043e4:
                puVar23 = puVar23 + 3;
                lVar47 = lVar47 + 0x58;
                iVar18 = iVar18 + 3;
              } while (iVar18 != iVar46 * 3);
              if (0 < (int)uVar42) goto LAB_001043f3;
            }
            else {
LAB_001043f3:
              pbVar59 = __ptr_00[5] + 4;
              pbVar3 = pbVar59 + local_118 * 0x58;
LAB_00104431:
              do {
                if ((pbVar59[-8] & 2) != 0) {
                  uVar31 = 1;
                  uVar42 = 1 << (pbVar59[1] & 0x1f) | 1 << (*pbVar59 & 0x1f) |
                           1 << (pbVar59[2] & 0x1f);
                  if (((uVar42 & 2) != 0) && (uVar31 = 2, (uVar42 & 4) != 0)) {
                    uVar31 = -(uint)((uVar42 & 8) == 0) & 3;
                  }
                  iVar18 = *(int *)(pbVar59 + -0xc);
                  (**(code **)(*param_2 + 0x10))
                            (param_2,local_98,(int)(iVar18 * 4 | uVar31) >> 2,uVar31);
                  uVar63 = local_98._0_4_;
                  uVar9 = local_98._4_4_;
                  fVar62 = fStack_90;
                  pbVar50 = pbVar59;
                  do {
                    bVar4 = *pbVar50;
                    uVar42 = bVar4 & 3;
                    (**(code **)(*param_2 + 0x10))
                              (param_2,local_98,(int)(uVar42 | iVar18 * 4) >> 2,uVar42);
                    if (((float)uVar63 == (float)local_98._0_4_ &&
                         (float)uVar9 == (float)local_98._4_4_) && (fVar62 == fStack_90)) {
                      pauVar22 = (undefined1 (*) [16])(pbVar59 + -4);
                      pbVar59 = pbVar59 + 0x58;
                      puVar38 = puVar25 + (long)(int)(uVar31 + *(int *)*pauVar22) * 5;
                      puVar39 = puVar25 + (long)(int)((uint)bVar4 + *(int *)*pauVar22) * 5;
                      uVar30 = puVar39[1];
                      *puVar38 = *puVar39;
                      puVar38[1] = uVar30;
                      uVar30 = puVar39[3];
                      puVar38[2] = puVar39[2];
                      puVar38[3] = uVar30;
                      puVar38[4] = puVar39[4];
                      if (pbVar59 == pbVar3) goto LAB_001045c1;
                      goto LAB_00104431;
                    }
                    pbVar50 = pbVar50 + 1;
                  } while (pbVar50 != pbVar59 + 3);
                }
                pbVar59 = pbVar59 + 0x58;
              } while (pbVar59 != pbVar3);
            }
LAB_001045c1:
            iVar46 = 0;
            free(__ptr_00);
            iVar18 = 0;
            free(__ptr);
            while( true ) {
              iVar19 = (**(code **)(*param_2 + 8))(param_2,iVar46);
              if (iVar19 - 3U < 2) {
                iVar58 = 0;
                puVar38 = puVar25 + (long)iVar18 * 5;
                do {
                  local_a8 = *puVar38;
                  local_a0 = *(undefined4 *)(puVar38 + 1);
                  lVar47 = *param_2;
                  _local_98 = *(undefined1 (*) [12])(puVar38 + 2);
                  if (*(code **)(lVar47 + 0x30) != (code *)0x0) {
                    (**(code **)(lVar47 + 0x30))
                              (param_2,&local_a8,local_98,*(undefined4 *)((long)puVar38 + 0x24),
                               iVar46,iVar58);
                    lVar47 = *param_2;
                  }
                  if (*(code **)(lVar47 + 0x28) != (code *)0x0) {
                    (**(code **)(lVar47 + 0x28))(param_2,&local_a8,iVar46,iVar58);
                  }
                  iVar58 = iVar58 + 1;
                  puVar38 = puVar38 + 5;
                } while (iVar19 != iVar58);
                iVar18 = iVar18 + iVar19;
              }
              if (iVar57 <= iVar46) break;
              iVar46 = iVar46 + 1;
            }
            free(puVar25);
            uVar30 = 1;
            goto LAB_00101984;
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
LAB_00101982:
  uVar30 = 0;
LAB_00101984:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar30;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104723:
  lVar36 = lVar36 + 1;
  if (lVar36 == 3) goto joined_r0x001043e4;
  goto LAB_00103a62;
}



void genTangSpaceDefault(void)

{
  genTangSpace(_LC18);
  return;
}


