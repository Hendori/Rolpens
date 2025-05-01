
undefined1  [16]
HUF_readStats_body_bmi2
          (long param_1,ulong param_2,undefined1 (*param_3) [16],int *param_4,uint *param_5,
          byte *param_6,ulong param_7,undefined8 param_8,undefined8 param_9)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 (*pauStack_30) [16];
  
  uVar6 = 0xffffffffffffffb8;
  pauStack_30 = param_3;
  if (param_7 == 0) goto LAB_001000e1;
  uVar2 = (ulong)*param_6;
  if (uVar2 < 0x80) {
    if (param_7 < uVar2 + 1) goto LAB_001000e1;
    pauStack_30 = (undefined1 (*) [16])0x1;
    uVar6 = FSE_decompress_wksp_bmi2(param_1,param_2 - 1,param_6 + 1,uVar2,6,param_8,param_9);
    if (0xffffffffffffff88 < uVar6) goto LAB_001000e1;
    *(undefined4 *)param_3[3] = 0;
    *param_3 = (undefined1  [16])0x0;
    param_3[1] = (undefined1  [16])0x0;
    param_3[2] = (undefined1  [16])0x0;
    bVar9 = uVar6 != 0;
    uVar7 = uVar6;
    uVar6 = uVar2 + 1;
    if (bVar9) goto LAB_0010009f;
  }
  else {
    uVar7 = uVar2 - 0x7f;
    uVar6 = (uVar2 - 0x7e >> 1) + 1;
    if (param_7 < uVar6) {
      uVar6 = 0xffffffffffffffb8;
      goto LAB_001000e1;
    }
    if (uVar7 < param_2) {
      uVar2 = 0;
      do {
        *(byte *)(param_1 + uVar2) = param_6[((uint)(uVar2 >> 1) & 0x7fffffff) + 1] >> 4;
        *(byte *)(param_1 + 1 + uVar2) = param_6[((uint)(uVar2 >> 1) & 0x7fffffff) + 1] & 0xf;
        uVar2 = uVar2 + 2;
      } while (uVar2 < uVar7);
      *(undefined4 *)param_3[3] = 0;
      *param_3 = (undefined1  [16])0x0;
      param_3[1] = (undefined1  [16])0x0;
      param_3[2] = (undefined1  [16])0x0;
LAB_0010009f:
      uVar2 = 0;
      iVar5 = 0;
      do {
        bVar1 = *(byte *)(uVar2 + param_1);
        pauStack_30 = (undefined1 (*) [16])(ulong)bVar1;
        if (0xc < bVar1) goto LAB_001000da;
        *(int *)(*param_3 + (long)pauStack_30 * 4) = *(int *)(*param_3 + (long)pauStack_30 * 4) + 1;
        iVar5 = iVar5 + ((1 << (*(byte *)(uVar2 + param_1) & 0x1f)) >> 1);
        uVar2 = (ulong)((int)uVar2 + 1);
      } while (uVar2 < uVar7);
      if (iVar5 != 0) {
        uVar3 = 0x20 - LZCOUNT(iVar5);
        pauStack_30 = (undefined1 (*) [16])(ulong)uVar3;
        if (uVar3 < 0xd) {
          *param_5 = uVar3;
          uVar8 = (1 << (uVar3 & 0x1f)) - iVar5;
          uVar3 = LZCOUNT(uVar8);
          uVar4 = 0x80000000 >> (uVar3 & 0x1f);
          pauStack_30 = (undefined1 (*) [16])(ulong)uVar4;
          if (uVar8 == uVar4) {
            uVar3 = 0x20 - uVar3;
            *(char *)(param_1 + uVar7) = (char)uVar3;
            *(int *)(*param_3 + (ulong)uVar3 * 4) = *(int *)(*param_3 + (ulong)uVar3 * 4) + 1;
            if ((1 < *(uint *)(*param_3 + 4)) && ((*(uint *)(*param_3 + 4) & 1) == 0)) {
              *param_4 = (int)uVar7 + 1;
              goto LAB_001000e1;
            }
          }
        }
      }
    }
  }
LAB_001000da:
  uVar6 = 0xffffffffffffffec;
LAB_001000e1:
  auVar10._8_8_ = pauStack_30;
  auVar10._0_8_ = uVar6;
  return auVar10;
}



undefined1  [16]
HUF_readStats_body_default
          (long param_1,ulong param_2,undefined1 (*param_3) [16],int *param_4,uint *param_5,
          byte *param_6,ulong param_7,undefined8 param_8,undefined8 param_9)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 (*pauStack_30) [16];
  
  uVar5 = 0xffffffffffffffb8;
  pauStack_30 = param_3;
  if (param_7 == 0) goto LAB_001002b2;
  uVar2 = (ulong)*param_6;
  if (uVar2 < 0x80) {
    if (param_7 < uVar2 + 1) goto LAB_001002b2;
    pauStack_30 = (undefined1 (*) [16])0x0;
    uVar5 = FSE_decompress_wksp_bmi2(param_1,param_2 - 1,param_6 + 1,uVar2,6,param_8,param_9);
    if (0xffffffffffffff88 < uVar5) goto LAB_001002b2;
    *(undefined4 *)param_3[3] = 0;
    *param_3 = (undefined1  [16])0x0;
    param_3[1] = (undefined1  [16])0x0;
    param_3[2] = (undefined1  [16])0x0;
    bVar8 = uVar5 != 0;
    uVar6 = uVar5;
    uVar5 = uVar2 + 1;
    if (bVar8) goto LAB_0010026f;
  }
  else {
    uVar6 = uVar2 - 0x7f;
    uVar5 = (uVar2 - 0x7e >> 1) + 1;
    if (param_7 < uVar5) {
      uVar5 = 0xffffffffffffffb8;
      goto LAB_001002b2;
    }
    if (uVar6 < param_2) {
      uVar2 = 0;
      do {
        *(byte *)(param_1 + uVar2) = param_6[((uint)(uVar2 >> 1) & 0x7fffffff) + 1] >> 4;
        *(byte *)(param_1 + 1 + uVar2) = param_6[((uint)(uVar2 >> 1) & 0x7fffffff) + 1] & 0xf;
        uVar2 = uVar2 + 2;
      } while (uVar2 < uVar6);
      *(undefined4 *)param_3[3] = 0;
      *param_3 = (undefined1  [16])0x0;
      param_3[1] = (undefined1  [16])0x0;
      param_3[2] = (undefined1  [16])0x0;
LAB_0010026f:
      uVar2 = 0;
      uVar7 = 0;
      do {
        bVar1 = *(byte *)(uVar2 + param_1);
        pauStack_30 = (undefined1 (*) [16])(ulong)bVar1;
        if (0xc < bVar1) goto LAB_001002ab;
        *(int *)(*param_3 + (long)pauStack_30 * 4) = *(int *)(*param_3 + (long)pauStack_30 * 4) + 1;
        uVar7 = uVar7 + ((1 << (*(byte *)(uVar2 + param_1) & 0x1f)) >> 1);
        uVar2 = (ulong)((int)uVar2 + 1);
      } while (uVar2 < uVar6);
      if (uVar7 != 0) {
        uVar3 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> uVar3 == 0; uVar3 = uVar3 - 1) {
          }
        }
        pauStack_30 = (undefined1 (*) [16])(ulong)(uVar3 ^ 0x1f);
        uVar3 = 0x20 - (uVar3 ^ 0x1f);
        if (uVar3 < 0xd) {
          *param_5 = uVar3;
          uVar7 = (1 << ((byte)uVar3 & 0x1f)) - uVar7;
          uVar3 = 0x1f;
          if (uVar7 != 0) {
            for (; uVar7 >> uVar3 == 0; uVar3 = uVar3 - 1) {
            }
          }
          uVar4 = 0x80000000 >> ((byte)(uVar3 ^ 0x1f) & 0x1f);
          pauStack_30 = (undefined1 (*) [16])(ulong)uVar4;
          if (uVar7 == uVar4) {
            uVar7 = 0x20 - (uVar3 ^ 0x1f);
            *(char *)(param_1 + uVar6) = (char)uVar7;
            *(int *)(*param_3 + (ulong)uVar7 * 4) = *(int *)(*param_3 + (ulong)uVar7 * 4) + 1;
            if ((1 < *(uint *)(*param_3 + 4)) && ((*(uint *)(*param_3 + 4) & 1) == 0)) {
              *param_4 = (int)uVar6 + 1;
              goto LAB_001002b2;
            }
          }
        }
      }
    }
  }
LAB_001002ab:
  uVar5 = 0xffffffffffffffec;
LAB_001002b2:
  auVar9._8_8_ = pauStack_30;
  auVar9._0_8_ = uVar5;
  return auVar9;
}



ulong FSE_readNCount_body_default
                (void *param_1,int *param_2,uint *param_3,uint *param_4,ulong param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 8) {
    local_48 = 0;
    pvVar5 = memcpy(&local_48,param_4,param_5);
    uVar6 = FSE_readNCount_body_default(param_1,param_2,param_3,pvVar5,8);
    if ((param_5 < uVar6) && (uVar6 < 0xffffffffffffff89)) {
      uVar6 = 0xffffffffffffffec;
    }
  }
  else {
    uVar1 = *param_2 + 1;
    memset(param_1,0,(ulong)uVar1 * 2);
    uVar4 = *param_4;
    uVar6 = 0xffffffffffffffd4;
    uVar15 = uVar4 & 0xf;
    uVar12 = uVar15 + 5;
    if (uVar12 < 0x10) {
      *param_3 = uVar12;
      puVar2 = (uint *)((long)param_4 + (param_5 - 7));
      puVar11 = (uint *)((long)param_4 + (param_5 - 4));
      iVar17 = 1 << (sbyte)uVar12;
      uVar4 = uVar4 >> 4;
      uVar12 = iVar17 + 1;
      iVar16 = uVar15 + 6;
      uVar6 = 0;
      uVar15 = 4;
      puVar8 = param_4;
LAB_001004c8:
      uVar10 = iVar17 * 2 - 1;
      uVar13 = iVar17 - 1U & uVar4;
      uVar9 = uVar10 - uVar12;
      if (uVar13 < uVar9) {
        uVar15 = uVar15 - 1;
      }
      else {
        uVar13 = uVar10 & uVar4;
        if (iVar17 <= (int)uVar13) {
          uVar13 = uVar13 - uVar9;
        }
      }
      uVar15 = uVar15 + iVar16;
      iVar14 = uVar13 - 1;
      uVar10 = (int)uVar6 + 1;
      *(short *)((long)param_1 + uVar6 * 2) = (short)iVar14;
      iVar3 = iVar14;
      if (-1 < iVar14) {
        iVar3 = -iVar14;
      }
      uVar12 = uVar12 + iVar3;
      if ((int)uVar12 < iVar17) {
        if ((int)uVar12 < 2) goto LAB_00100678;
        uVar4 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> uVar4 == 0; uVar4 = uVar4 - 1) {
          }
        }
        iVar16 = 0x20 - (uVar4 ^ 0x1f);
        iVar17 = 1 << (0x1fU - (char)(uVar4 ^ 0x1f) & 0x1f);
      }
      if (uVar1 <= uVar10) goto LAB_00100678;
      puVar7 = (uint *)((long)((int)uVar15 >> 3) + (long)puVar8);
      if ((puVar2 < puVar8) && (puVar11 < puVar7)) {
        uVar15 = uVar15 + ((int)puVar11 - (int)puVar8) * -8 & 0x1f;
        puVar8 = puVar11;
      }
      else {
        uVar15 = uVar15 & 7;
        puVar8 = puVar7;
      }
      uVar4 = *puVar8 >> (sbyte)uVar15;
      if (iVar14 == 0) {
        uVar13 = 0;
        for (uVar9 = ~uVar4; (uVar9 & 1) == 0; uVar9 = (uVar9 | 0x80000000) >> 1) {
          uVar13 = uVar13 + 1;
        }
        while (iVar3 = (int)puVar8, 0x17 < uVar13) {
          uVar10 = uVar10 + 0x24;
          if (puVar2 < puVar8) {
            uVar15 = uVar15 + ((int)puVar2 - iVar3) * -8 & 0x1f;
            puVar8 = (uint *)((long)param_4 + (param_5 - 4));
          }
          else {
            puVar8 = (uint *)((long)puVar8 + 3);
          }
          uVar4 = *puVar8 >> (sbyte)uVar15;
          uVar13 = 0;
          for (uVar9 = ~uVar4; (uVar9 & 1) == 0; uVar9 = (uVar9 | 0x80000000) >> 1) {
            uVar13 = uVar13 + 1;
          }
        }
        iVar14 = (uVar13 >> 1) * 2;
        uVar15 = uVar15 + 2 + iVar14;
        uVar10 = (uVar4 >> ((byte)iVar14 & 0x1f) & 3) + (uVar13 >> 1) * 3 + uVar10;
        if (uVar1 <= uVar10) goto LAB_00100678;
        puVar7 = (uint *)((long)puVar8 + (long)((int)uVar15 >> 3));
        if ((puVar2 < puVar8) && (puVar8 = (uint *)((long)param_4 + (param_5 - 4)), puVar8 < puVar7)
           ) {
          uVar15 = uVar15 + ((int)puVar8 - iVar3) * -8 & 0x1f;
        }
        else {
          uVar15 = uVar15 & 7;
          puVar8 = puVar7;
        }
        uVar4 = *puVar8 >> (sbyte)uVar15;
        uVar6 = (ulong)uVar10;
      }
      else {
        uVar6 = (ulong)uVar10;
      }
      goto LAB_001004c8;
    }
  }
LAB_0010041e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
LAB_00100678:
  uVar6 = 0xffffffffffffffec;
  if (((uVar12 == 1) && (uVar6 = 0xffffffffffffffd0, uVar10 <= uVar1)) &&
     (uVar6 = 0xffffffffffffffec, (int)uVar15 < 0x21)) {
    *param_2 = uVar10 - 1;
    uVar6 = (long)puVar8 + ((long)((int)(uVar15 + 7) >> 3) - (long)param_4);
  }
  goto LAB_0010041e;
}



ulong FSE_readNCount_body_bmi2(void *param_1,int *param_2,uint *param_3,uint *param_4,ulong param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 < 8) {
    local_48 = 0;
    pvVar6 = memcpy(&local_48,param_4,param_5);
    uVar7 = FSE_readNCount_body_default(param_1,param_2,param_3,pvVar6,8);
    if ((param_5 < uVar7) && (uVar7 < 0xffffffffffffff89)) {
      uVar7 = 0xffffffffffffffec;
    }
  }
  else {
    uVar1 = *param_2 + 1;
    memset(param_1,0,(ulong)uVar1 * 2);
    uVar5 = *param_4;
    uVar7 = 0xffffffffffffffd4;
    uVar16 = uVar5 & 0xf;
    uVar13 = uVar16 + 5;
    if (uVar13 < 0x10) {
      *param_3 = uVar13;
      iVar14 = 1 << uVar13;
      uVar5 = uVar5 >> 4;
      iVar3 = iVar14 + 1;
      puVar12 = (uint *)((long)param_4 + (param_5 - 4));
      iVar17 = uVar16 + 6;
      uVar7 = 0;
      uVar13 = 4;
      puVar2 = (uint *)((long)param_4 + (param_5 - 7));
      puVar9 = param_4;
      do {
        uVar16 = iVar14 * 2 - 1;
        uVar11 = iVar14 - 1U & uVar5;
        uVar15 = uVar16 - iVar3;
        if (uVar11 < uVar15) {
          uVar13 = uVar13 - 1;
        }
        else {
          uVar11 = uVar16 & uVar5;
          if (iVar14 <= (int)uVar11) {
            uVar11 = uVar11 - uVar15;
          }
        }
        uVar13 = uVar13 + iVar17;
        iVar10 = uVar11 - 1;
        uVar16 = (int)uVar7 + 1;
        *(short *)((long)param_1 + uVar7 * 2) = (short)iVar10;
        iVar4 = iVar10;
        if (-1 < iVar10) {
          iVar4 = -iVar10;
        }
        iVar3 = iVar3 + iVar4;
        if (iVar3 < iVar14) {
          if (iVar3 < 2) goto LAB_001009a8;
          iVar17 = 0x20 - LZCOUNT(iVar3);
          iVar14 = 1 << (0x1fU - LZCOUNT(iVar3) & 0x1f);
        }
        if (uVar1 <= uVar16) goto LAB_001009a8;
        puVar8 = (uint *)((long)((int)uVar13 >> 3) + (long)puVar9);
        if ((puVar2 < puVar9) && (puVar12 < puVar8)) {
          uVar13 = uVar13 + ((int)puVar12 - (int)puVar9) * -8 & 0x1f;
          puVar9 = puVar12;
        }
        else {
          uVar13 = uVar13 & 7;
          puVar9 = puVar8;
        }
        uVar5 = *puVar9 >> uVar13;
        if (iVar10 == 0) {
          while( true ) {
            uVar11 = 0;
            for (uVar15 = ~uVar5; (uVar15 & 1) == 0; uVar15 = (uVar15 | 0x80000000) >> 1) {
              uVar11 = uVar11 + 1;
            }
            iVar4 = (int)puVar9;
            if (uVar11 < 0x18) break;
            uVar16 = uVar16 + 0x24;
            if (puVar2 < puVar9) {
              uVar13 = uVar13 + ((int)puVar2 - iVar4) * -8 & 0x1f;
              puVar9 = (uint *)((long)param_4 + (param_5 - 4));
              uVar5 = *puVar9 >> uVar13;
            }
            else {
              puVar9 = (uint *)((long)puVar9 + 3);
              uVar5 = *puVar9 >> uVar13;
            }
          }
          uVar15 = (uVar11 >> 1) * 2;
          uVar13 = uVar13 + 2 + uVar15;
          uVar16 = (uVar5 >> (uVar15 & 0x1f) & 3) + (uVar11 >> 1) * 3 + uVar16;
          if (uVar1 <= uVar16) goto LAB_001009a8;
          puVar8 = (uint *)((long)puVar9 + (long)((int)uVar13 >> 3));
          if ((puVar2 < puVar9) &&
             (puVar9 = (uint *)((long)param_4 + (param_5 - 4)), puVar9 < puVar8)) {
            uVar13 = uVar13 + ((int)puVar9 - iVar4) * -8 & 0x1f;
            uVar5 = *puVar9 >> uVar13;
          }
          else {
            uVar13 = uVar13 & 7;
            uVar5 = *puVar8 >> uVar13;
            puVar9 = puVar8;
          }
        }
        uVar7 = (ulong)uVar16;
      } while( true );
    }
  }
LAB_00100791:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
LAB_001009a8:
  uVar7 = 0xffffffffffffffec;
  if (((iVar3 == 1) && (uVar7 = 0xffffffffffffffd0, uVar16 <= uVar1)) &&
     (uVar7 = 0xffffffffffffffec, (int)uVar13 < 0x21)) {
    *param_2 = uVar16 - 1;
    uVar7 = (long)puVar9 + ((long)((int)(uVar13 + 7) >> 3) - (long)param_4);
  }
  goto LAB_00100791;
}



undefined8 FSE_versionNumber(void)

{
  return 900;
}



bool FSE_isError(ulong param_1)

{
  return 0xffffffffffffff88 < param_1;
}



void FSE_getErrorName(ulong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0xffffffffffffff88 < param_1) {
    iVar1 = -(int)param_1;
  }
  ERR_getErrorString(iVar1);
  return;
}



bool HUF_isError(ulong param_1)

{
  return 0xffffffffffffff88 < param_1;
}



void HUF_getErrorName(ulong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0xffffffffffffff88 < param_1) {
    iVar1 = -(int)param_1;
  }
  ERR_getErrorString(iVar1);
  return;
}



void FSE_readNCount_bmi2(void)

{
  int in_R9D;
  
  if (in_R9D == 0) {
    FSE_readNCount_body_default();
    return;
  }
  FSE_readNCount_body_bmi2();
  return;
}



void FSE_readNCount(void)

{
  FSE_readNCount_body_default();
  return;
}



void HUF_readStats(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  HUF_readStats_body_default();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void HUF_readStats_wksp(void)

{
  byte in_stack_00000020;
  
  if ((in_stack_00000020 & 1) == 0) {
    HUF_readStats_body_default();
    return;
  }
  HUF_readStats_body_bmi2();
  return;
}


