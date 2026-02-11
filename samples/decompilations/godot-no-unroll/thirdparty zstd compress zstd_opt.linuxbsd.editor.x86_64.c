
void ZSTD_safecopyLiterals
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar6 = param_2;
  puVar7 = param_1;
  if (param_2 <= param_4) {
    uVar1 = param_2[1];
    puVar7 = (undefined8 *)((long)param_1 + ((long)param_4 - (long)param_2));
    *param_1 = *param_2;
    param_1[1] = uVar1;
    puVar6 = param_4;
    if (0x10 < (long)param_4 - (long)param_2) {
      puVar2 = param_1 + 2;
      puVar5 = param_2 + 2;
      do {
        uVar1 = puVar5[1];
        puVar3 = puVar2 + 4;
        *puVar2 = *puVar5;
        puVar2[1] = uVar1;
        uVar1 = puVar5[3];
        puVar2[2] = puVar5[2];
        puVar2[3] = uVar1;
        puVar2 = puVar3;
        puVar5 = puVar5 + 4;
      } while (puVar3 < puVar7);
    }
  }
  if (puVar6 < param_3) {
    lVar4 = 0;
    do {
      *(undefined1 *)((long)puVar7 + lVar4) = *(undefined1 *)((long)puVar6 + lVar4);
      lVar4 = lVar4 + 1;
    } while (lVar4 != (long)param_3 - (long)puVar6);
  }
  return;
}



undefined4 ZSTD_insertAndFindFirstIndexHash3(long param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  int *piVar6;
  uint uVar7;
  
  lVar3 = *(long *)(param_1 + 0x78);
  bVar5 = 0x20 - (char)*(undefined4 *)(param_1 + 0x30);
  iVar1 = *param_3;
  uVar4 = *param_2;
  uVar7 = (int)param_3 - (int)*(long *)(param_1 + 8);
  if (uVar4 < uVar7) {
    piVar6 = (int *)(*(long *)(param_1 + 8) + (ulong)uVar4);
    do {
      iVar2 = *piVar6;
      piVar6 = (int *)((long)piVar6 + 1);
      *(uint *)(lVar3 + (ulong)((uint)(iVar2 * 0x35a7bd00) >> (bVar5 & 0x1f)) * 4) = uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar7 != uVar4);
  }
  *param_2 = uVar7;
  return *(undefined4 *)(lVar3 + (ulong)((uint)(iVar1 * 0x35a7bd00) >> (bVar5 & 0x1f)) * 4);
}



void ZSTD_optLdm_skipRawSeqStoreBytes(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = param_2 + (int)param_1[2];
  if (uVar4 != 0) {
    uVar3 = param_1[1];
    lVar2 = uVar3 * 0xc;
    do {
      if ((ulong)param_1[3] <= uVar3) {
        if (param_1[3] != param_1[1]) {
          return;
        }
        break;
      }
      uVar1 = *(int *)(*param_1 + lVar2 + 8) + *(int *)(*param_1 + lVar2 + 4);
      if (uVar4 < uVar1) {
        param_1[2] = (ulong)uVar4;
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0xc;
      param_1[1] = uVar3;
      uVar4 = uVar4 - uVar1;
    } while (uVar4 != 0);
  }
  param_1[2] = 0;
  return;
}



void ZSTD_opt_getNextMatchAndUpdateSeqStore(long *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((param_1[3] == 0) || ((ulong)param_1[3] <= (ulong)param_1[1])) {
    param_1[5] = -1;
    return;
  }
  puVar1 = (undefined4 *)(*param_1 + param_1[1] * 0xc);
  uVar2 = puVar1[1];
  iVar4 = puVar1[2];
  iVar3 = (int)param_1[2];
  if (((ulong)uVar2 <= (ulong)param_1[2]) || (uVar5 = uVar2 - iVar3, uVar5 == 0)) {
    uVar5 = 0;
    iVar4 = (iVar4 + uVar2) - iVar3;
  }
  if (uVar5 < param_3) {
    *(undefined4 *)(param_1 + 6) = *puVar1;
    *(uint *)(param_1 + 5) = param_2 + uVar5;
    uVar2 = param_2 + uVar5 + iVar4;
    *(uint *)((long)param_1 + 0x2c) = uVar2;
    if (param_2 + param_3 < uVar2) {
      *(uint *)((long)param_1 + 0x2c) = param_2 + param_3;
      ZSTD_optLdm_skipRawSeqStoreBytes();
      return;
    }
    ZSTD_optLdm_skipRawSeqStoreBytes(param_1,iVar4 + uVar5);
    return;
  }
  param_1[5] = -1;
  ZSTD_optLdm_skipRawSeqStoreBytes();
  return;
}



void ZSTD_setBasePrices(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x60) == 2) {
    if (param_2 != 0) goto LAB_0010027a;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x30) + 1;
    iVar3 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (param_2 != 0) {
      *(uint *)(param_1 + 0x40) = (uVar1 * 0x100 >> ((byte)iVar3 & 0x1f)) + iVar3 * 0x100;
LAB_0010027a:
      uVar2 = *(int *)(param_1 + 0x34) + 1;
      uVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      uVar4 = *(int *)(param_1 + 0x38) + 1;
      iVar3 = 0x1f - (uVar1 ^ 0x1f);
      uVar1 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      *(uint *)(param_1 + 0x44) = (uVar2 * 0x100 >> ((byte)iVar3 & 0x1f)) + iVar3 * 0x100;
      iVar3 = 0x1f - (uVar1 ^ 0x1f);
      uVar2 = *(int *)(param_1 + 0x3c) + 1;
      uVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      *(uint *)(param_1 + 0x48) = (uVar4 * 0x100 >> ((byte)iVar3 & 0x1f)) + iVar3 * 0x100;
      iVar3 = 0x1f - (uVar1 ^ 0x1f);
      *(uint *)(param_1 + 0x4c) = (uVar2 * 0x100 >> ((byte)iVar3 & 0x1f)) + iVar3 * 0x100;
      return;
    }
    *(int *)(param_1 + 0x40) = iVar3 * 0x100;
  }
  uVar1 = *(int *)(param_1 + 0x34) + 1;
  uVar2 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  uVar1 = *(int *)(param_1 + 0x38) + 1;
  uVar4 = 0x1f;
  if (uVar1 != 0) {
    for (; uVar1 >> uVar4 == 0; uVar4 = uVar4 - 1) {
    }
  }
  *(uint *)(param_1 + 0x44) = (0x1f - (uVar2 ^ 0x1f)) * 0x100;
  uVar2 = *(int *)(param_1 + 0x3c) + 1;
  *(uint *)(param_1 + 0x48) = (0x1f - (uVar4 ^ 0x1f)) * 0x100;
  uVar1 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  *(uint *)(param_1 + 0x4c) = (0x1f - (uVar1 ^ 0x1f)) * 0x100;
  return;
}



void ZSTD_updateStats(long *param_1,uint param_2,byte *param_3,uint param_4,int param_5)

{
  int *piVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  
  if ((int)param_1[0xc] == 2) {
LAB_00100326:
    if (0x3f < param_2) {
      iVar4 = 0x1f;
      if (param_2 != 0) {
        for (; param_2 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      uVar6 = (ulong)(iVar4 + 0x13);
      goto LAB_00100331;
    }
  }
  else if (param_2 != 0) {
    lVar3 = *param_1;
    pbVar8 = param_3 + param_2;
    do {
      bVar2 = *param_3;
      param_3 = param_3 + 1;
      piVar1 = (int *)(lVar3 + (ulong)bVar2 * 4);
      *piVar1 = *piVar1 + 2;
    } while (param_3 != pbVar8);
    *(uint *)(param_1 + 6) = (int)param_1[6] + param_2 * 2;
    goto LAB_00100326;
  }
  uVar6 = (ulong)(byte)"  !!\"\"##$$$$%%%%&&&&&&&&\'\'\'\'\'\'\'\'(((((((((((((((())))))))))))))))********************************"
                       [(ulong)param_2 + 0x60];
LAB_00100331:
  uVar7 = param_5 - 3;
  piVar1 = (int *)(param_1[1] + uVar6 * 4);
  *piVar1 = *piVar1 + 1;
  uVar5 = 0x1f;
  if (param_4 != 0) {
    for (; param_4 >> uVar5 == 0; uVar5 = uVar5 - 1) {
    }
  }
  *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + 1;
  piVar1 = (int *)(param_1[3] + (ulong)uVar5 * 4);
  *piVar1 = *piVar1 + 1;
  *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + 1;
  if (0x7f < uVar7) {
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    piVar1 = (int *)(param_1[2] + (ulong)(iVar4 + 0x24) * 4);
    *piVar1 = *piVar1 + 1;
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
    return;
  }
  piVar1 = (int *)(param_1[2] + (ulong)(byte)(&ML_Code_0)[uVar7] * 4);
  *piVar1 = *piVar1 + 1;
  *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  return;
}



void ZSTD_optLdm_processMatchCandidate(long param_1,long param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(ulong *)(param_1 + 0x18) != 0) && (*(ulong *)(param_1 + 8) < *(ulong *)(param_1 + 0x18))) {
    uVar2 = *(uint *)(param_1 + 0x2c);
    if (uVar2 <= param_4) {
      if (uVar2 < param_4) {
        ZSTD_optLdm_skipRawSeqStoreBytes(param_1,param_4 - uVar2);
      }
      ZSTD_opt_getNextMatchAndUpdateSeqStore();
      uVar2 = *(uint *)(param_1 + 0x2c);
    }
    uVar3 = uVar2 - param_4;
    if ((*(uint *)(param_1 + 0x28) <= param_4 && param_4 < uVar2) && (2 < uVar3)) {
      uVar2 = *param_3;
      if ((uVar2 == 0) ||
         ((*(uint *)(param_2 + 4 + (ulong)(uVar2 - 1) * 8) < uVar3 && (uVar2 < 0x1000)))) {
        iVar1 = *(int *)(param_1 + 0x30);
        *(uint *)(param_2 + 4 + (ulong)uVar2 * 8) = uVar3;
        *(int *)(param_2 + (ulong)*param_3 * 8) = iVar1 + 3;
        *param_3 = *param_3 + 1;
      }
    }
    return;
  }
  return;
}



int ZSTD_rawLiteralsCost_constprop_0(byte *param_1,long *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = 0x800;
  if (((int)param_2[0xc] != 2) && (iVar1 = 0x600, (int)param_2[10] != 1)) {
    uVar4 = (int)param_2[8] - 0x100;
    uVar2 = *(int *)(*param_2 + (ulong)*param_1 * 4) + 1;
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar3 = iVar1 * 0x100;
    if (param_3 != 0) {
      uVar3 = uVar3 + (uVar2 * 0x100 >> ((byte)iVar1 & 0x1f));
    }
    if (uVar3 < uVar4) {
      uVar4 = uVar3;
    }
    iVar1 = (int)param_2[8] - uVar4;
  }
  return iVar1;
}



code * ZSTD_selectBtGetAllMatches_isra_0(uint param_1,int param_2)

{
  uint uVar1;
  long in_FS_OFFSET;
  code *local_78 [4];
  code *local_58;
  code *pcStack_50;
  code *local_48;
  code *pcStack_40;
  code *local_38;
  code *pcStack_30;
  code *local_28;
  code *pcStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = ZSTD_btGetAllMatches_noDict_3;
  local_78[1] = ZSTD_btGetAllMatches_noDict_4;
  local_78[2] = ZSTD_btGetAllMatches_noDict_5;
  local_78[3] = ZSTD_btGetAllMatches_noDict_6;
  local_58 = ZSTD_btGetAllMatches_extDict_3;
  pcStack_50 = ZSTD_btGetAllMatches_extDict_4;
  uVar1 = 6;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  local_48 = ZSTD_btGetAllMatches_extDict_5;
  pcStack_40 = ZSTD_btGetAllMatches_extDict_6;
  if (uVar1 < 3) {
    uVar1 = 3;
  }
  local_38 = ZSTD_btGetAllMatches_dictMatchState_3;
  pcStack_30 = ZSTD_btGetAllMatches_dictMatchState_4;
  local_28 = ZSTD_btGetAllMatches_dictMatchState_5;
  pcStack_20 = ZSTD_btGetAllMatches_dictMatchState_6;
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_78[(ulong)(uVar1 - 3) + (long)param_2 * 4];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ZSTD_litLengthPrice_isra_0(uint param_1,long param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  if (param_4 == 1) {
    param_1 = param_1 + 1;
    iVar2 = 0x1f;
    if (param_1 != 0) {
      for (; param_1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar5 = iVar2 * 0x100;
    if (param_5 != 0) {
      return iVar5 + (param_1 * 0x100 >> ((byte)iVar2 & 0x1f));
    }
  }
  else {
    if (param_1 == 0x20000) {
      lVar4 = 0x8c;
      iVar6 = 0x1000;
      iVar2 = 0x100;
    }
    else if (param_1 < 0x40) {
      iVar2 = 0;
      lVar4 = (ulong)(byte)"  !!\"\"##$$$$%%%%&&&&&&&&\'\'\'\'\'\'\'\'(((((((((((((((())))))))))))))))********************************"
                           [(ulong)param_1 + 0x60] << 2;
      iVar6 = (uint)(byte)LL_bits[(byte)"  !!\"\"##$$$$%%%%&&&&&&&&\'\'\'\'\'\'\'\'(((((((((((((((())))))))))))))))********************************"
                                        [(ulong)param_1 + 0x60]] << 8;
    }
    else {
      iVar5 = 0x1f;
      if (param_1 != 0) {
        for (; param_1 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      lVar4 = (ulong)(iVar5 + 0x13) << 2;
      iVar2 = 0;
      iVar6 = (uint)(byte)LL_bits[iVar5 + 0x13] << 8;
    }
    uVar3 = *(int *)(param_2 + lVar4) + 1;
    iVar1 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    iVar5 = iVar1 * 0x100;
    if (param_5 != 0) {
      iVar5 = iVar5 + (uVar3 * 0x100 >> ((byte)iVar1 & 0x1f));
    }
    iVar5 = (param_3 + iVar6 + iVar2) - iVar5;
  }
  return iVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ZSTD_rescaleFreqs(long *param_1,undefined8 param_2,ulong param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  long lVar15;
  long in_FS_OFFSET;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  int local_38 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar16 = (int)param_1[0xc];
  *(undefined4 *)(param_1 + 10) = 0;
  iVar17 = _UNK_0010b7ec;
  iVar22 = _UNK_0010b7e8;
  iVar20 = _UNK_0010b7e4;
  iVar18 = __LC2;
  if (*(int *)((long)param_1 + 0x34) == 0) {
    if (param_3 < 9) {
      *(undefined4 *)(param_1 + 10) = 1;
      lVar15 = param_1[0xb];
      iVar18 = *(int *)(lVar15 + 0x808);
    }
    else {
      lVar15 = param_1[0xb];
      iVar18 = *(int *)(lVar15 + 0x808);
    }
    if (iVar18 == 2) {
      *(undefined4 *)(param_1 + 10) = 0;
      if (iVar16 != 2) {
        *(undefined4 *)(param_1 + 6) = 0;
        uVar14 = 0;
        do {
          iVar16 = HUF_getNbBitsFromCTable(lVar15,uVar14 & 0xffffffff);
          iVar18 = 1;
          if (iVar16 != 0) {
            iVar18 = 1 << (0xbU - (char)iVar16 & 0x1f);
          }
          lVar15 = param_1[0xb];
          *(int *)(*param_1 + uVar14 * 4) = iVar18;
          uVar14 = uVar14 + 1;
          *(int *)(param_1 + 6) = (int)param_1[6] + iVar18;
        } while (uVar14 != 0x100);
      }
      lVar11 = 8;
      if (*(short *)(lVar15 + 0x10c0) != 0) {
        lVar11 = (long)(1 << ((char)*(short *)(lVar15 + 0x10c0) - 1U & 0x1f)) * 4 + 4;
      }
      lVar3 = param_1[1];
      lVar12 = 0;
      *(undefined4 *)((long)param_1 + 0x34) = 0;
      do {
        iVar16 = 1;
        uVar25 = *(int *)(lVar15 + lVar11 + 0x10c4 + lVar12 * 8) + 0xffff;
        if (uVar25 >> 0x10 != 0) {
          iVar16 = 1 << (10U - (char)(uVar25 >> 0x10) & 0x1f);
        }
        *(int *)(lVar3 + lVar12 * 4) = iVar16;
        lVar12 = lVar12 + 1;
        *(int *)((long)param_1 + 0x34) = *(int *)((long)param_1 + 0x34) + iVar16;
      } while (lVar12 != 0x24);
      lVar11 = 8;
      if (*(short *)(lVar15 + 0xb14) != 0) {
        lVar11 = (long)(1 << ((char)*(short *)(lVar15 + 0xb14) - 1U & 0x1f)) * 4 + 4;
      }
      lVar3 = param_1[2];
      lVar12 = 0;
      *(undefined4 *)(param_1 + 7) = 0;
      do {
        iVar16 = 1;
        uVar25 = *(int *)(lVar15 + lVar11 + 0xb18 + lVar12 * 8) + 0xffff;
        if (uVar25 >> 0x10 != 0) {
          iVar16 = 1 << (10U - (char)(uVar25 >> 0x10) & 0x1f);
        }
        *(int *)(lVar3 + lVar12 * 4) = iVar16;
        lVar12 = lVar12 + 1;
        *(int *)(param_1 + 7) = (int)param_1[7] + iVar16;
      } while (lVar12 != 0x35);
      lVar11 = 8;
      if (*(short *)(lVar15 + 0x810) != 0) {
        lVar11 = (long)(1 << ((char)*(short *)(lVar15 + 0x810) - 1U & 0x1f)) * 4 + 4;
      }
      lVar3 = param_1[3];
      lVar12 = 0;
      *(undefined4 *)((long)param_1 + 0x3c) = 0;
      do {
        iVar16 = 1;
        uVar25 = *(int *)(lVar15 + lVar11 + 0x814 + lVar12 * 8) + 0xffff;
        if (uVar25 >> 0x10 != 0) {
          iVar16 = 1 << (10U - (char)(uVar25 >> 0x10) & 0x1f);
        }
        *(int *)(lVar3 + lVar12 * 4) = iVar16;
        lVar12 = lVar12 + 1;
        *(int *)((long)param_1 + 0x3c) = *(int *)((long)param_1 + 0x3c) + iVar16;
      } while (lVar12 != 0x20);
    }
    else {
      if (iVar16 != 2) {
        local_cc = 0xff;
        HIST_count_simple(*param_1,&local_cc,param_2,param_3);
        puVar4 = (uint *)*param_1;
        iVar16 = 0;
        iVar18 = 0;
        iVar20 = 0;
        iVar22 = 0;
        puVar10 = puVar4;
        do {
          puVar13 = puVar10 + 4;
          uVar25 = (*puVar10 >> 8) + (uint)(*puVar10 != 0);
          uVar26 = (puVar10[1] >> 8) + (uint)(puVar10[1] != 0);
          uVar27 = (puVar10[2] >> 8) + (uint)(puVar10[2] != 0);
          uVar28 = (puVar10[3] >> 8) + (uint)(puVar10[3] != 0);
          *puVar10 = uVar25;
          puVar10[1] = uVar26;
          puVar10[2] = uVar27;
          puVar10[3] = uVar28;
          iVar16 = iVar16 + uVar25;
          iVar18 = iVar18 + uVar26;
          iVar20 = iVar20 + uVar27;
          iVar22 = iVar22 + uVar28;
          puVar10 = puVar13;
        } while (puVar4 + 0x100 != puVar13);
        *(int *)(param_1 + 6) = iVar16 + iVar20 + iVar18 + iVar22;
      }
      uStack_c0 = _UNK_0010b7d8;
      local_c8 = __LC1;
      local_98 = CONCAT44(_UNK_0010b7e4,__LC2);
      uStack_90 = CONCAT44(_UNK_0010b7ec,_UNK_0010b7e8);
      puVar2 = (undefined8 *)param_1[1];
      piVar9 = (int *)&local_c8;
      puVar2[2] = local_98;
      puVar2[3] = uStack_90;
      *puVar2 = local_c8;
      puVar2[1] = uStack_c0;
      iVar16 = 0;
      iVar18 = 0;
      iVar20 = 0;
      iVar22 = 0;
      puVar2[4] = local_98;
      puVar2[5] = uStack_90;
      puVar2[6] = local_98;
      puVar2[7] = uStack_90;
      puVar2[8] = local_98;
      puVar2[9] = uStack_90;
      puVar2[10] = local_98;
      puVar2[0xb] = uStack_90;
      puVar2[0xc] = local_98;
      puVar2[0xd] = uStack_90;
      puVar2[0xe] = local_98;
      puVar2[0xf] = uStack_90;
      puVar2[0x10] = local_98;
      puVar2[0x11] = uStack_90;
      local_b8 = local_98;
      uStack_b0 = uStack_90;
      local_a8 = local_98;
      uStack_a0 = uStack_90;
      local_88 = local_98;
      uStack_80 = uStack_90;
      local_78 = local_98;
      uStack_70 = uStack_90;
      local_68 = local_98;
      uStack_60 = uStack_90;
      local_58 = local_98;
      uStack_50 = uStack_90;
      local_48 = local_98;
      uStack_40 = uStack_90;
      piVar7 = piVar9;
      do {
        iVar16 = iVar16 + *piVar7;
        iVar18 = iVar18 + piVar7[1];
        iVar20 = iVar20 + piVar7[2];
        iVar22 = iVar22 + piVar7[3];
        piVar7 = piVar7 + 4;
      } while (local_38 != piVar7);
      puVar8 = (undefined4 *)param_1[2];
      puVar1 = puVar8 + 0x35;
      *(int *)((long)param_1 + 0x34) = iVar16 + iVar20 + iVar18 + iVar22;
      do {
        *puVar8 = 1;
        uStack_a0 = _UNK_0010b818;
        local_a8 = __LC5;
        puVar8 = puVar8 + 1;
      } while (puVar1 != puVar8);
      puVar2 = (undefined8 *)param_1[3];
      *(undefined4 *)(param_1 + 7) = 0x35;
      uStack_b0 = _UNK_0010b808;
      local_b8 = __LC4;
      uStack_c0 = _UNK_0010b7f8;
      local_c8 = __LC3;
      puVar2[4] = local_a8;
      puVar2[5] = uStack_a0;
      iVar16 = 0;
      iVar18 = 0;
      iVar20 = 0;
      iVar22 = 0;
      *puVar2 = local_c8;
      puVar2[1] = uStack_c0;
      puVar2[2] = local_b8;
      puVar2[3] = uStack_b0;
      puVar2[6] = local_98;
      puVar2[7] = uStack_90;
      puVar2[8] = local_98;
      puVar2[9] = uStack_90;
      puVar2[10] = local_98;
      puVar2[0xb] = uStack_90;
      puVar2[0xc] = local_98;
      puVar2[0xd] = uStack_90;
      puVar2[0xe] = local_98;
      puVar2[0xf] = uStack_90;
      do {
        iVar16 = iVar16 + *piVar9;
        iVar18 = iVar18 + piVar9[1];
        iVar20 = iVar20 + piVar9[2];
        iVar22 = iVar22 + piVar9[3];
        piVar9 = piVar9 + 4;
      } while ((int *)&local_48 != piVar9);
      *(int *)((long)param_1 + 0x3c) = iVar16 + iVar20 + iVar18 + iVar22;
    }
  }
  else {
    if (iVar16 != 2) {
      puVar4 = (uint *)*param_1;
      iVar16 = 0;
      iVar19 = 0;
      iVar21 = 0;
      iVar23 = 0;
      puVar10 = puVar4;
      do {
        uVar25 = *puVar10;
        puVar13 = puVar10 + 1;
        puVar5 = puVar10 + 2;
        puVar6 = puVar10 + 3;
        puVar10 = puVar10 + 4;
        iVar16 = iVar16 + uVar25;
        iVar19 = iVar19 + *puVar13;
        iVar21 = iVar21 + *puVar5;
        iVar23 = iVar23 + *puVar6;
      } while (puVar10 != puVar4 + 0x100);
      uVar25 = iVar16 + iVar21 + iVar19 + iVar23;
      if (0x1fff < uVar25) {
        iVar16 = 0x1f;
        if (uVar25 >> 0xc != 0) {
          for (; (uVar25 >> 0xc) >> iVar16 == 0; iVar16 = iVar16 + -1) {
          }
        }
        iVar19 = 0;
        iVar21 = 0;
        iVar23 = 0;
        iVar24 = 0;
        puVar10 = puVar4;
        do {
          puVar13 = puVar10 + 4;
          uVar25 = (*puVar10 >> iVar16) + iVar18;
          uVar26 = (puVar10[1] >> iVar16) + iVar20;
          uVar27 = (puVar10[2] >> iVar16) + iVar22;
          uVar28 = (puVar10[3] >> iVar16) + iVar17;
          *puVar10 = uVar25;
          puVar10[1] = uVar26;
          puVar10[2] = uVar27;
          puVar10[3] = uVar28;
          iVar19 = iVar19 + uVar25;
          iVar21 = iVar21 + uVar26;
          iVar23 = iVar23 + uVar27;
          iVar24 = iVar24 + uVar28;
          puVar10 = puVar13;
        } while (puVar13 != puVar4 + 0x100);
        uVar25 = iVar19 + iVar23 + iVar21 + iVar24;
      }
      *(uint *)(param_1 + 6) = uVar25;
    }
    iVar22 = _UNK_0010b7ec;
    iVar20 = _UNK_0010b7e8;
    iVar18 = _UNK_0010b7e4;
    iVar16 = __LC2;
    puVar4 = (uint *)param_1[1];
    iVar17 = 0;
    iVar19 = 0;
    iVar21 = 0;
    iVar23 = 0;
    puVar10 = puVar4;
    do {
      uVar25 = *puVar10;
      puVar13 = puVar10 + 1;
      puVar5 = puVar10 + 2;
      puVar6 = puVar10 + 3;
      puVar10 = puVar10 + 4;
      iVar17 = iVar17 + uVar25;
      iVar19 = iVar19 + *puVar13;
      iVar21 = iVar21 + *puVar5;
      iVar23 = iVar23 + *puVar6;
    } while (puVar4 + 0x24 != puVar10);
    uVar25 = iVar17 + iVar21 + iVar19 + iVar23;
    if (0xfff < uVar25) {
      iVar17 = 0x1f;
      if (uVar25 >> 0xb != 0) {
        for (; (uVar25 >> 0xb) >> iVar17 == 0; iVar17 = iVar17 + -1) {
        }
      }
      iVar19 = 0;
      iVar21 = 0;
      iVar23 = 0;
      iVar24 = 0;
      puVar10 = puVar4;
      do {
        puVar13 = puVar10 + 4;
        uVar25 = (*puVar10 >> iVar17) + iVar16;
        uVar26 = (puVar10[1] >> iVar17) + iVar18;
        uVar27 = (puVar10[2] >> iVar17) + iVar20;
        uVar28 = (puVar10[3] >> iVar17) + iVar22;
        *puVar10 = uVar25;
        puVar10[1] = uVar26;
        puVar10[2] = uVar27;
        puVar10[3] = uVar28;
        iVar19 = iVar19 + uVar25;
        iVar21 = iVar21 + uVar26;
        iVar23 = iVar23 + uVar27;
        iVar24 = iVar24 + uVar28;
        puVar10 = puVar13;
      } while (puVar4 + 0x24 != puVar13);
      uVar25 = iVar19 + iVar23 + iVar21 + iVar24;
    }
    puVar4 = (uint *)param_1[2];
    *(uint *)((long)param_1 + 0x34) = uVar25;
    uVar25 = 0;
    puVar10 = puVar4;
    do {
      uVar25 = uVar25 + *puVar10;
      puVar10 = puVar10 + 1;
    } while (puVar4 + 0x35 != puVar10);
    if (0xfff < uVar25) {
      iVar16 = 0x1f;
      if (uVar25 >> 0xb != 0) {
        for (; (uVar25 >> 0xb) >> iVar16 == 0; iVar16 = iVar16 + -1) {
        }
      }
      uVar25 = 0;
      puVar10 = puVar4;
      do {
        puVar13 = puVar10 + 1;
        uVar26 = (*puVar10 >> ((byte)iVar16 & 0x1f)) + 1;
        *puVar10 = uVar26;
        uVar25 = uVar25 + uVar26;
        puVar10 = puVar13;
      } while (puVar4 + 0x35 != puVar13);
    }
    puVar4 = (uint *)param_1[3];
    *(uint *)(param_1 + 7) = uVar25;
    iVar22 = _UNK_0010b7ec;
    iVar20 = _UNK_0010b7e8;
    iVar18 = _UNK_0010b7e4;
    iVar16 = __LC2;
    iVar17 = 0;
    iVar19 = 0;
    iVar21 = 0;
    iVar23 = 0;
    puVar10 = puVar4;
    do {
      uVar25 = *puVar10;
      puVar13 = puVar10 + 1;
      puVar5 = puVar10 + 2;
      puVar6 = puVar10 + 3;
      puVar10 = puVar10 + 4;
      iVar17 = iVar17 + uVar25;
      iVar19 = iVar19 + *puVar13;
      iVar21 = iVar21 + *puVar5;
      iVar23 = iVar23 + *puVar6;
    } while (puVar4 + 0x20 != puVar10);
    uVar25 = iVar17 + iVar21 + iVar19 + iVar23;
    if (0xfff < uVar25) {
      iVar17 = 0x1f;
      if (uVar25 >> 0xb != 0) {
        for (; (uVar25 >> 0xb) >> iVar17 == 0; iVar17 = iVar17 + -1) {
        }
      }
      iVar19 = 0;
      iVar21 = 0;
      iVar23 = 0;
      iVar24 = 0;
      puVar10 = puVar4;
      do {
        puVar13 = puVar10 + 4;
        uVar25 = (*puVar10 >> iVar17) + iVar16;
        uVar26 = (puVar10[1] >> iVar17) + iVar18;
        uVar27 = (puVar10[2] >> iVar17) + iVar20;
        uVar28 = (puVar10[3] >> iVar17) + iVar22;
        *puVar10 = uVar25;
        puVar10[1] = uVar26;
        puVar10[2] = uVar27;
        puVar10[3] = uVar28;
        iVar19 = iVar19 + uVar25;
        iVar21 = iVar21 + uVar26;
        iVar23 = iVar23 + uVar27;
        iVar24 = iVar24 + uVar28;
        puVar10 = puVar13;
      } while (puVar4 + 0x20 != puVar13);
      uVar25 = iVar19 + iVar23 + iVar21 + iVar24;
    }
    *(uint *)((long)param_1 + 0x3c) = uVar25;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    ZSTD_setBasePrices(param_1,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ZSTD_compressBlock_opt0
               (long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,ulong param_5,
               undefined4 param_6)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  code *pcVar17;
  int *piVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  uint uVar21;
  int *piVar22;
  ulong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  undefined8 *puVar32;
  ulong uVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  int *piVar37;
  int iVar38;
  long lVar39;
  uint uVar40;
  long *plVar41;
  uint *puVar42;
  long in_FS_OFFSET;
  undefined8 uVar43;
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar44 [16];
  undefined8 extraout_XMM1_Qb;
  undefined8 *local_158;
  int local_120;
  undefined8 *local_e0;
  undefined4 local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_74;
  int local_6c;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  long local_40;
  
  iVar34 = *(int *)(param_1 + 0x110);
  uVar21 = *(uint *)(param_1 + 0x18);
  lVar31 = param_1 + 0x90;
  lVar39 = *(long *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = (long)param_4 + param_5;
  puVar32 = (undefined8 *)(uVar1 - 8);
  pcVar17 = (code *)ZSTD_selectBtGetAllMatches_isra_0(iVar34,param_6);
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uVar8 = 0xfff;
  if (*(uint *)(param_1 + 0x114) < 0x1000) {
    uVar8 = *(uint *)(param_1 + 0x114);
  }
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  piVar4 = *(int **)(param_1 + 0xb8);
  uVar9 = (iVar34 != 3) + 3;
  local_c0 = *(undefined4 *)(param_1 + 0x2c);
  puVar5 = *(uint **)(param_1 + 0xb0);
  puVar6 = *(undefined8 **)(param_1 + 0x120);
  if (puVar6 == (undefined8 *)0x0) {
    local_b8 = 0;
    auStack_b0 = (undefined1  [16])0x0;
    auStack_a0 = (undefined1  [16])0x0;
  }
  else {
    local_b8 = *puVar6;
    auStack_b0 = *(undefined1 (*) [16])(puVar6 + 1);
    auStack_a0 = *(undefined1 (*) [16])(puVar6 + 3);
  }
  local_88 = 0;
  local_90 = 0;
  ZSTD_opt_getNextMatchAndUpdateSeqStore(&local_b8,0,param_5 & 0xffffffff);
  ZSTD_rescaleFreqs(lVar31,param_4,param_5,0);
  local_158 = (undefined8 *)
              ((ulong)(param_4 == (undefined8 *)((ulong)uVar21 + lVar39)) + (long)param_4);
  local_e0 = param_4;
  if (local_158 < puVar32) {
LAB_00100f09:
    do {
      iVar34 = (int)((long)local_158 - (long)local_e0);
      local_bc = (*pcVar17)(puVar5,param_1,&local_c0,local_158,uVar1,param_3,iVar34 == 0,uVar9);
      local_120 = (int)param_4;
      ZSTD_optLdm_processMatchCandidate
                (&local_b8,puVar5,&local_bc,(int)local_158 - local_120,(int)uVar1 - (int)local_158);
      uVar33 = (ulong)local_bc;
      if (local_bc == 0) {
        local_158 = (undefined8 *)((long)local_158 + 1);
      }
      else {
        piVar4[3] = iVar34;
        piVar4[2] = 0;
        iVar10 = ZSTD_litLengthPrice_isra_0
                           ((long)local_158 - (long)local_e0 & 0xffffffff,
                            *(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xd4),
                            *(undefined4 *)(param_1 + 0xe0),0);
        *piVar4 = iVar10;
        *(undefined8 *)(piVar4 + 4) = *param_3;
        piVar4[6] = *(int *)(param_3 + 1);
        uVar21 = (uint)((ulong)*(undefined8 *)(puVar5 + (ulong)((int)uVar33 - 1) * 2) >> 0x20);
        if (uVar8 < uVar21) {
          uStack_64 = (uint)*(undefined8 *)(puVar5 + (ulong)((int)uVar33 - 1) * 2);
          uVar11 = 0;
          uVar33 = 0;
          iStack_5c = 0;
          uStack_60 = uVar21;
LAB_0010102c:
          piVar18 = piVar4 + uVar33 * 7;
          local_74 = *(undefined8 *)(piVar18 + 4);
          local_6c = piVar18[6];
          local_74._4_4_ = (int)((ulong)local_74 >> 0x20);
          if (uStack_64 < 4) {
            uVar21 = (uStack_64 - 1) + (uint)(piVar18[3] == 0);
            iVar10 = local_74._4_4_;
            iVar34 = (int)local_74;
            if ((uVar21 != 0) &&
               ((iVar34 = (int)local_74 + -1, uVar21 == 3 ||
                (iVar34 = *(int *)((long)&local_74 + (ulong)uVar21 * 4), iVar10 = (int)local_74,
                uVar21 != 1)))) {
              local_6c = local_74._4_4_;
              iVar10 = (int)local_74;
            }
          }
          else {
            local_6c = local_74._4_4_;
            iVar10 = (int)local_74;
            iVar34 = uStack_64 - 3;
          }
          local_74 = CONCAT44(iVar10,iVar34);
          *(int *)(param_3 + 1) = local_6c;
          uVar26 = CONCAT44(iStack_5c,uStack_60);
          uVar33 = (ulong)(uVar11 + 2);
          *param_3 = local_74;
          uVar19 = CONCAT44(uStack_64,local_68);
          piVar22 = piVar4 + uVar33 * 7;
        }
        else {
          iVar10 = iVar34 + 1;
          piVar18 = piVar4 + 7;
          do {
            piVar18[3] = iVar10;
            iVar10 = iVar10 + 1;
            *piVar18 = 0x40000000;
            piVar18[2] = 0;
            piVar18 = piVar18 + 7;
          } while (iVar34 + uVar9 != iVar10);
          lVar39 = param_1;
          puVar42 = puVar5;
          uVar21 = uVar9;
          do {
            uVar29 = (ulong)puVar42[1];
            uVar11 = *puVar42;
            auVar44 = ZEXT416(uVar11);
            if (uVar21 <= puVar42[1]) {
              uVar20 = *(undefined8 *)(lVar39 + 0x98);
              uVar12 = 0x1f;
              if (uVar11 != 0) {
                for (; uVar11 >> uVar12 == 0; uVar12 = uVar12 - 1) {
                }
              }
              uVar12 = uVar12 ^ 0x1f;
              uVar11 = 0x1f - uVar12;
              iVar34 = *(int *)(lVar39 + 0xe0);
              do {
                uVar15 = uVar21 - 3;
                uVar43 = CONCAT44(uVar21,auVar44._0_4_);
                if (iVar34 == 1) {
                  uVar15 = 0x1f;
                  if (uVar21 - 2 != 0) {
                    for (; uVar21 - 2 >> uVar15 == 0; uVar15 = uVar15 - 1) {
                    }
                  }
                  iVar10 = ((0x4e - uVar12) - (uVar15 ^ 0x1f)) * 0x100;
                }
                else {
                  uVar14 = *(int *)(*(long *)(lVar39 + 0xa8) + (ulong)uVar11 * 4) + 1;
                  uVar28 = 0x1f;
                  if (uVar14 != 0) {
                    for (; uVar14 >> uVar28 == 0; uVar28 = uVar28 - 1) {
                    }
                  }
                  iVar10 = *(int *)(lVar39 + 0xdc) + uVar11 * 0x100 +
                           (0x1f - (uVar28 ^ 0x1f)) * -0x100;
                  if (0x13 < uVar11) {
                    iVar10 = (0xc - uVar12) * 0x200 + iVar10;
                  }
                  if (uVar15 < 0x80) {
                    uVar15 = (uint)(byte)(&ML_Code_0)[uVar15];
                  }
                  else {
                    uVar28 = 0x1f;
                    if (uVar15 != 0) {
                      for (; uVar15 >> uVar28 == 0; uVar28 = uVar28 - 1) {
                      }
                    }
                    uVar15 = 0x43 - (uVar28 ^ 0x1f);
                  }
                  uVar14 = *(int *)(*(long *)(lVar39 + 0xa0) + (ulong)uVar15 * 4) + 1;
                  uVar28 = 0x1f;
                  if (uVar14 != 0) {
                    for (; uVar14 >> uVar28 == 0; uVar28 = uVar28 - 1) {
                    }
                  }
                  iVar10 = iVar10 + 0x33 + *(int *)(lVar39 + 0xd8) +
                           (uint)(byte)ML_bits[uVar15] * 0x100 + (0x1f - (uVar28 ^ 0x1f)) * -0x100;
                }
                uVar23 = (ulong)uVar21;
                iVar10 = iVar10 + *piVar4;
                uVar21 = uVar21 + 1;
                piVar18 = piVar4 + uVar23 * 7;
                piVar18[3] = 0;
                *(undefined8 *)(piVar18 + 1) = uVar43;
                iVar13 = ZSTD_litLengthPrice_isra_0
                                   (0,uVar20,*(undefined4 *)(lVar39 + 0xd4),
                                    *(undefined4 *)(lVar39 + 0xe0),0);
                auVar44._8_8_ = extraout_XMM1_Qb;
                auVar44._0_8_ = extraout_XMM1_Qa;
                *piVar18 = iVar13 + iVar10;
              } while (uVar21 <= (uint)uVar29);
            }
            puVar42 = puVar42 + 2;
          } while (puVar42 != puVar5 + uVar33 * 2);
          uVar12 = uVar21 - 1;
          piVar4[(ulong)uVar21 * 7] = 0x40000000;
          if (uVar12 == 0) {
            uVar29 = 0;
            piVar18 = piVar4;
          }
          else {
            uVar11 = 1;
            do {
              while( true ) {
                uVar33 = (ulong)uVar11;
                puVar6 = (undefined8 *)((long)local_158 + uVar33);
                piVar18 = piVar4 + (ulong)(uVar11 - 1) * 7;
                iVar10 = ZSTD_rawLiteralsCost_constprop_0((long)local_158 + (uVar33 - 1),lVar31,0);
                uVar29 = (ulong)(uint)piVar18[3];
                iVar34 = *piVar18;
                uVar20 = *(undefined8 *)(param_1 + 0x98);
                uVar2 = *(undefined4 *)(param_1 + 0xd4);
                uVar3 = *(undefined4 *)(param_1 + 0xe0);
                iVar38 = piVar18[3] + 1;
                iVar13 = ZSTD_litLengthPrice_isra_0(iVar38);
                iVar16 = ZSTD_litLengthPrice_isra_0(uVar29 & 0xffffffff,uVar20,uVar2,uVar3);
                iVar34 = (iVar13 - iVar16) + iVar10 + iVar34;
                piVar22 = piVar4 + uVar33 * 7;
                if (*piVar22 < iVar34) break;
                uVar20 = *(undefined8 *)(piVar18 + 2);
                *(undefined8 *)piVar22 = *(undefined8 *)piVar18;
                *(undefined8 *)(piVar22 + 2) = uVar20;
                uVar20 = *(undefined8 *)(piVar18 + 3);
                uVar43 = *(undefined8 *)(piVar18 + 5);
                *piVar22 = iVar34;
                *(undefined8 *)(piVar22 + 3) = uVar20;
                *(undefined8 *)(piVar22 + 5) = uVar43;
                piVar22[3] = iVar38;
                if (iVar38 != 0) goto LAB_0010151d;
LAB_001016e1:
                uVar15 = uVar11 - piVar22[2];
                uVar21 = piVar22[1];
                local_74 = *(undefined8 *)(piVar4 + (ulong)uVar15 * 7 + 4);
                local_6c = piVar4[(ulong)uVar15 * 7 + 6];
                local_74._4_4_ = (int)((ulong)local_74 >> 0x20);
                if (uVar21 < 4) {
                  uVar21 = (uVar21 - 1) + (uint)(piVar4[(ulong)uVar15 * 7 + 3] == 0);
                  iVar10 = local_74._4_4_;
                  iVar34 = (int)local_74;
                  if ((uVar21 != 0) &&
                     ((iVar34 = (int)local_74 + -1, uVar21 == 3 ||
                      (iVar34 = *(int *)((long)&local_74 + (ulong)uVar21 * 4),
                      iVar10 = (int)local_74, uVar21 != 1)))) {
                    local_6c = local_74._4_4_;
                    iVar10 = (int)local_74;
                  }
                }
                else {
                  local_6c = local_74._4_4_;
                  iVar10 = (int)local_74;
                  iVar34 = uVar21 - 3;
                }
                local_74 = CONCAT44(iVar10,iVar34);
                *(undefined8 *)(piVar22 + 4) = local_74;
                piVar22[6] = local_6c;
                if (puVar6 <= puVar32) goto LAB_0010152c;
LAB_00101762:
                uVar11 = uVar11 + 1;
                if (uVar12 < uVar11) goto LAB_0010176f;
              }
              if (piVar22[3] == 0) goto LAB_001016e1;
LAB_0010151d:
              if (puVar32 < puVar6) goto LAB_00101762;
LAB_0010152c:
              if (uVar12 == uVar11) break;
              uVar21 = uVar11 + 1;
              iVar34 = *piVar22;
              if (iVar34 + 0x80 < piVar4[(ulong)uVar21 * 7]) {
                iVar10 = ZSTD_litLengthPrice_isra_0
                                   (0,*(undefined8 *)(param_1 + 0x98),
                                    *(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xe0),
                                    0,piVar22 + 4);
                local_bc = (*pcVar17)(puVar5,param_1,&local_c0,puVar6,uVar1);
                ZSTD_optLdm_processMatchCandidate
                          (&local_b8,puVar5,&local_bc,(int)puVar6 - local_120);
                if (local_bc != 0) {
                  puVar42 = puVar5 + (ulong)(local_bc - 1) * 2;
                  uVar15 = puVar42[1];
                  uVar29 = (ulong)(uVar15 + uVar11);
                  if (uVar8 < uVar15) {
                    iStack_5c = 0;
                    uStack_64 = (uint)*(undefined8 *)puVar42;
                    uStack_60 = (uint)((ulong)*(undefined8 *)puVar42 >> 0x20);
                    goto LAB_0010102c;
                  }
                  if ((0xfff < uVar15 + uVar11) || (uVar1 <= uVar15 + uVar33 + (long)local_158)) {
                    iStack_5c = 0;
                    uStack_64 = (uint)*(undefined8 *)puVar42;
                    uStack_60 = (uint)((ulong)*(undefined8 *)puVar42 >> 0x20);
                    if (uVar15 != 0) goto LAB_0010102c;
                    goto LAB_001017ab;
                  }
                  uVar33 = 0;
                  do {
                    uVar15 = puVar5[uVar33 * 2];
                    uVar28 = puVar5[uVar33 * 2 + 1];
                    uVar14 = uVar9;
                    if (uVar33 != 0) {
                      uVar14 = puVar5[(ulong)((int)uVar33 - 1) * 2 + 1] + 1;
                    }
                    if (uVar14 <= uVar28) {
                      uVar7 = 0x1f;
                      if (uVar15 != 0) {
                        for (; uVar15 >> uVar7 == 0; uVar7 = uVar7 - 1) {
                        }
                      }
                      iVar13 = *(int *)(param_1 + 0xe0);
                      uVar27 = uVar28 - 3;
                      uVar40 = 0x1f - (uVar7 ^ 0x1f);
                      uVar30 = uVar28 + uVar11;
                      if (iVar13 == 1) goto LAB_00101a80;
                      do {
                        uVar36 = *(int *)(*(long *)(param_1 + 0xa8) + (ulong)uVar40 * 4) + 1;
                        uVar35 = 0x1f;
                        if (uVar36 != 0) {
                          for (; uVar36 >> uVar35 == 0; uVar35 = uVar35 - 1) {
                          }
                        }
                        iVar16 = uVar40 * 0x100 + *(int *)(param_1 + 0xdc) +
                                 (0x1f - (uVar35 ^ 0x1f)) * -0x100;
                        if (0x13 < uVar40) {
                          iVar16 = iVar16 + (0xc - (uVar7 ^ 0x1f)) * 0x200;
                        }
                        if (uVar27 < 0x80) {
                          uVar29 = (ulong)(byte)(&ML_Code_0)[uVar27];
                        }
                        else {
                          uVar35 = 0x1f;
                          if (uVar27 != 0) {
                            for (; uVar27 >> uVar35 == 0; uVar35 = uVar35 - 1) {
                            }
                          }
                          uVar29 = (ulong)(0x43 - (uVar35 ^ 0x1f));
                        }
                        uVar35 = *(int *)(*(long *)(param_1 + 0xa0) + uVar29 * 4) + 1;
                        uVar27 = 0x1f;
                        if (uVar35 != 0) {
                          for (; uVar35 >> uVar27 == 0; uVar27 = uVar27 - 1) {
                          }
                        }
                        iVar16 = (uint)(byte)ML_bits[uVar29] * 0x100 +
                                 iVar16 + 0x33 + *(int *)(param_1 + 0xd8) +
                                 (0x1f - (uVar27 ^ 0x1f)) * -0x100;
                        uVar27 = uVar28;
                        while( true ) {
                          iVar16 = iVar16 + iVar10 + iVar34;
                          piVar18 = piVar4 + (ulong)uVar30 * 7;
                          if (uVar12 < uVar30) {
                            uVar28 = uVar12 + 1;
                            iVar38 = uVar30 - uVar12;
                            piVar22 = piVar4 + (ulong)uVar28 * 7;
                            do {
                              *piVar22 = 0x40000000;
                              piVar37 = piVar22 + 7;
                              piVar22[3] = 1;
                              piVar22 = piVar37;
                              uVar12 = uVar30;
                            } while (piVar37 !=
                                     piVar4 + 7 + ((ulong)uVar28 + (ulong)(iVar38 - 1)) * 7);
                          }
                          else if (*piVar18 <= iVar16) goto LAB_001018f7;
                          uVar28 = uVar27 - 1;
                          piVar18[3] = 0;
                          uVar30 = uVar30 - 1;
                          *piVar18 = iVar16;
                          *(ulong *)(piVar18 + 1) = CONCAT44(uVar27,uVar15);
                          if (uVar28 < uVar14) goto LAB_001018f7;
                          uVar27 = uVar27 - 4;
                          if (iVar13 != 1) break;
LAB_00101a80:
                          uVar27 = 0x1f;
                          if (uVar28 - 2 != 0) {
                            for (; uVar28 - 2 >> uVar27 == 0; uVar27 = uVar27 - 1) {
                            }
                          }
                          iVar16 = ((0x4e - (uVar7 ^ 0x1f)) - (uVar27 ^ 0x1f)) * 0x100;
                          uVar27 = uVar28;
                        }
                      } while( true );
                    }
LAB_001018f7:
                    uVar33 = uVar33 + 1;
                  } while (uVar33 != local_bc);
                  piVar4[(ulong)(uVar12 + 1) * 7] = 0x40000000;
                }
              }
              uVar11 = uVar21;
            } while (uVar21 <= uVar12);
LAB_0010176f:
            uVar29 = (ulong)uVar12;
            piVar18 = piVar4 + uVar29 * 7;
          }
          uVar19 = *(undefined8 *)piVar18;
          uVar20 = *(undefined8 *)(piVar18 + 3);
          uVar43 = *(undefined8 *)(piVar18 + 5);
          local_68 = (undefined4)uVar19;
          uStack_64 = (uint)((ulong)uVar19 >> 0x20);
          uStack_60 = (uint)*(undefined8 *)(piVar18 + 2);
          iStack_5c = (int)uVar20;
          uStack_58 = (undefined4)((ulong)uVar20 >> 0x20);
          uStack_54 = (undefined4)uVar43;
          uStack_50 = (undefined4)((ulong)uVar43 >> 0x20);
          if (uStack_60 == 0) {
LAB_001017ab:
            local_158 = (undefined8 *)((long)local_158 + uVar29);
            if (puVar32 <= local_158) break;
            goto LAB_00100f09;
          }
          uVar11 = uVar12 - uStack_60;
          if (iStack_5c == 0) {
            uVar33 = (ulong)uVar11;
            goto LAB_0010102c;
          }
          uVar11 = uVar11 - iStack_5c;
          uVar26 = CONCAT44(iStack_5c,uStack_60);
          *param_3 = CONCAT44(uStack_54,uStack_58);
          uVar33 = (ulong)(uVar11 + 2);
          *(undefined4 *)(param_3 + 1) = uStack_50;
          piVar22 = piVar4 + uVar33 * 7;
          piVar22[3] = iStack_5c;
          piVar22[2] = 0;
          piVar18 = piVar4 + (ulong)(uVar11 + 1) * 7;
          *(undefined8 *)(piVar18 + 2) = uVar26;
          *(undefined8 *)piVar18 = uVar19;
          *(undefined8 *)(piVar18 + 3) = uVar20;
          *(undefined8 *)(piVar18 + 5) = uVar43;
          piVar18 = piVar4 + (ulong)uVar11 * 7;
        }
        *(undefined8 *)(piVar22 + 2) = uVar26;
        uVar21 = (uint)uVar33;
        *(undefined8 *)piVar22 = uVar19;
        iVar34 = *piVar18;
        *(ulong *)(piVar22 + 3) = CONCAT44(uStack_58,iStack_5c);
        *(ulong *)(piVar22 + 5) = CONCAT44(uStack_50,uStack_54);
        auVar44 = *(undefined1 (*) [16])(piVar18 + 1);
        uVar20 = *(undefined8 *)(piVar18 + 5);
        iVar13 = auVar44._4_4_;
        iVar10 = auVar44._8_4_;
        piVar22[3] = iVar10;
        if (iVar13 == 0) {
LAB_00101198:
          plVar41 = param_2;
          do {
            uVar11 = piVar4[uVar33 * 7 + 3];
            uVar29 = (ulong)uVar11;
            uVar12 = piVar4[uVar33 * 7 + 2];
            local_158 = (undefined8 *)((long)local_e0 + uVar29);
            if (uVar12 != 0) {
              iVar34 = piVar4[uVar33 * 7 + 1];
              ZSTD_updateStats(lVar31,uVar29,local_e0,iVar34,uVar12);
              uVar23 = (ulong)uVar12;
              if ((undefined8 *)(uVar1 - 0x20) < local_158) {
                ZSTD_safecopyLiterals(plVar41[3],local_e0,local_158,(undefined8 *)(uVar1 - 0x20));
LAB_0010129a:
                plVar41[3] = plVar41[3] + uVar29;
                piVar18 = (int *)plVar41[1];
                if (0xffff < uVar29) {
                  *(undefined4 *)(plVar41 + 9) = 1;
                  *(int *)((long)plVar41 + 0x4c) = (int)((long)piVar18 - *plVar41 >> 3);
                }
              }
              else {
                puVar6 = (undefined8 *)plVar41[3];
                uVar20 = local_e0[1];
                *puVar6 = *local_e0;
                puVar6[1] = uVar20;
                if (0x10 < uVar29) {
                  lVar39 = plVar41[3];
                  uVar20 = local_e0[3];
                  *(undefined8 *)(lVar39 + 0x10) = local_e0[2];
                  *(undefined8 *)(lVar39 + 0x18) = uVar20;
                  if (0x20 < uVar11) {
                    puVar24 = (undefined8 *)(lVar39 + 0x20);
                    puVar6 = local_e0;
                    do {
                      uVar20 = puVar6[5];
                      puVar25 = puVar24 + 4;
                      *puVar24 = puVar6[4];
                      puVar24[1] = uVar20;
                      uVar20 = puVar6[7];
                      puVar24[2] = puVar6[6];
                      puVar24[3] = uVar20;
                      puVar24 = puVar25;
                      puVar6 = puVar6 + 4;
                    } while (puVar25 < (undefined8 *)(lVar39 + uVar29));
                  }
                  goto LAB_0010129a;
                }
                plVar41[3] = plVar41[3] + uVar29;
                piVar18 = (int *)plVar41[1];
              }
              *(short *)(piVar18 + 1) = (short)uVar11;
              *piVar18 = iVar34;
              if (0xffff < uVar23 - 3) {
                *(undefined4 *)(plVar41 + 9) = 2;
                *(int *)((long)plVar41 + 0x4c) = (int)((long)piVar18 - *plVar41 >> 3);
              }
              *(short *)((long)piVar18 + 6) = (short)(uVar23 - 3);
              plVar41[1] = (long)(piVar18 + 2);
              local_158 = (undefined8 *)((ulong)(uVar11 + uVar12) + (long)local_e0);
              local_e0 = local_158;
            }
            uVar11 = (int)uVar33 + 1;
            uVar33 = (ulong)uVar11;
          } while (uVar11 <= uVar21);
        }
        else {
          uVar29 = (ulong)uVar11;
          do {
            uVar11 = (int)uVar33 - 1;
            uVar33 = (ulong)uVar11;
            piVar18 = piVar4 + uVar33 * 7;
            *piVar18 = iVar34;
            *(undefined8 *)(piVar18 + 5) = uVar20;
            *(undefined1 (*) [16])(piVar18 + 1) = auVar44;
            uVar29 = (ulong)(uint)((int)uVar29 - (iVar10 + iVar13));
            piVar22 = piVar4 + uVar29 * 7;
            auVar44 = *(undefined1 (*) [16])(piVar22 + 1);
            iVar34 = *piVar22;
            uVar20 = *(undefined8 *)(piVar22 + 5);
            iVar13 = auVar44._4_4_;
            iVar10 = auVar44._8_4_;
            piVar18[3] = piVar22[3];
          } while (iVar13 != 0);
          if (uVar11 <= uVar21) goto LAB_00101198;
        }
        ZSTD_setBasePrices(lVar31,0);
      }
    } while (local_158 < puVar32);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1 - (long)local_e0;
}



long ZSTD_compressBlock_opt2
               (long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,ulong param_5,
               undefined4 param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  code *pcVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int iVar28;
  uint uVar29;
  undefined8 uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  undefined8 uVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  undefined8 *puVar39;
  ulong uVar40;
  undefined8 uVar41;
  ulong uVar42;
  long lVar43;
  uint *puVar44;
  long in_FS_OFFSET;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM1_Qa;
  undefined1 auVar45 [16];
  undefined8 extraout_XMM1_Qb;
  int local_148;
  undefined8 *local_130;
  int local_118;
  undefined8 *local_108;
  undefined4 local_c0;
  uint local_bc;
  undefined8 local_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_74;
  int local_6c;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  long local_40;
  
  iVar20 = *(int *)(param_1 + 0x110);
  lVar38 = param_1 + 0x90;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)((long)param_4 + param_5);
  uVar11 = *(uint *)(param_1 + 0x18);
  puVar39 = puVar1 + -1;
  lVar43 = *(long *)(param_1 + 8);
  pcVar22 = (code *)ZSTD_selectBtGetAllMatches_isra_0(iVar20,param_6);
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uVar8 = 0xfff;
  if (*(uint *)(param_1 + 0x114) < 0x1000) {
    uVar8 = *(uint *)(param_1 + 0x114);
  }
  iStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uVar9 = (iVar20 != 3) + 3;
  local_c0 = *(undefined4 *)(param_1 + 0x2c);
  piVar4 = *(int **)(param_1 + 0xb8);
  puVar5 = *(uint **)(param_1 + 0xb0);
  puVar6 = *(undefined8 **)(param_1 + 0x120);
  if (puVar6 == (undefined8 *)0x0) {
    local_b8 = 0;
    auStack_b0 = (undefined1  [16])0x0;
    auStack_a0 = (undefined1  [16])0x0;
  }
  else {
    local_b8 = *puVar6;
    auStack_b0 = *(undefined1 (*) [16])(puVar6 + 1);
    auStack_a0 = *(undefined1 (*) [16])(puVar6 + 3);
  }
  local_88 = 0;
  local_90 = 0;
  ZSTD_opt_getNextMatchAndUpdateSeqStore(&local_b8,0,param_5 & 0xffffffff);
  ZSTD_rescaleFreqs(lVar38,param_4,param_5,2);
  local_130 = (undefined8 *)
              ((ulong)(param_4 == (undefined8 *)((ulong)uVar11 + lVar43)) + (long)param_4);
  local_108 = param_4;
  if (local_130 < puVar39) {
LAB_00101eeb:
    do {
      iVar20 = (int)((long)local_130 - (long)local_108);
      local_bc = (*pcVar22)(puVar5,param_1,&local_c0,local_130,puVar1,param_3,iVar20 == 0,uVar9);
      local_148 = (int)puVar1;
      local_118 = (int)param_4;
      ZSTD_optLdm_processMatchCandidate
                (&local_b8,puVar5,&local_bc,(int)local_130 - local_118,local_148 - (int)local_130);
      uVar40 = (ulong)local_bc;
      if (local_bc == 0) {
        local_130 = (undefined8 *)((long)local_130 + 1);
      }
      else {
        piVar4[2] = 0;
        piVar4[3] = iVar20;
        iVar10 = ZSTD_litLengthPrice_isra_0
                           ((long)local_130 - (long)local_108 & 0xffffffff,
                            *(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xd4),
                            *(undefined4 *)(param_1 + 0xe0),2);
        *piVar4 = iVar10;
        *(undefined8 *)(piVar4 + 4) = *param_3;
        piVar4[6] = *(int *)(param_3 + 1);
        uVar11 = (uint)((ulong)*(undefined8 *)(puVar5 + (ulong)((int)uVar40 - 1) * 2) >> 0x20);
        if (uVar8 < uVar11) {
          iStack_5c = 0;
          uVar12 = 0;
          uVar42 = 0;
          uStack_64 = (uint)*(undefined8 *)(puVar5 + (ulong)((int)uVar40 - 1) * 2);
          uStack_60 = uVar11;
LAB_00101ffe:
          piVar23 = piVar4 + uVar42 * 7;
          local_74 = *(undefined8 *)(piVar23 + 4);
          local_6c = piVar23[6];
          local_74._4_4_ = (int)((ulong)local_74 >> 0x20);
          if (uStack_64 < 4) {
            uVar11 = (uStack_64 - 1) + (uint)(piVar23[3] == 0);
            iVar10 = local_74._4_4_;
            iVar20 = (int)local_74;
            if ((uVar11 != 0) &&
               ((iVar20 = (int)local_74 + -1, uVar11 == 3 ||
                (iVar20 = *(int *)((long)&local_74 + (ulong)uVar11 * 4), iVar10 = (int)local_74,
                uVar11 != 1)))) {
              iVar10 = (int)local_74;
              local_6c = local_74._4_4_;
            }
          }
          else {
            iVar10 = (int)local_74;
            iVar20 = uStack_64 - 3;
            local_6c = local_74._4_4_;
          }
          uVar11 = uVar12 + 2;
          uVar35 = CONCAT44(iStack_5c,uStack_60);
          local_74 = CONCAT44(iVar10,iVar20);
          *param_3 = local_74;
          *(int *)(param_3 + 1) = local_6c;
          uVar30 = CONCAT44(uStack_64,local_68);
          piVar24 = piVar4 + (ulong)uVar11 * 7;
        }
        else {
          iVar10 = iVar20 + 1;
          piVar23 = piVar4 + 7;
          do {
            piVar23[3] = iVar10;
            iVar10 = iVar10 + 1;
            *piVar23 = 0x40000000;
            piVar23[2] = 0;
            piVar23 = piVar23 + 7;
          } while (iVar10 != iVar20 + uVar9);
          uVar41 = 0x1f;
          lVar43 = param_1;
          puVar44 = puVar5;
          uVar11 = uVar9;
          do {
            uVar42 = (ulong)puVar44[1];
            uVar12 = *puVar44;
            auVar45 = ZEXT416(uVar12);
            if (uVar11 <= puVar44[1]) {
              uVar7 = *(undefined8 *)(lVar43 + 0x98);
              uVar21 = 0x1f;
              if (uVar12 != 0) {
                for (; uVar12 >> uVar21 == 0; uVar21 = uVar21 - 1) {
                }
              }
              uVar12 = (int)uVar41 - (uVar21 ^ 0x1f);
              iVar20 = *(int *)(lVar43 + 0xe0);
              do {
                uVar32 = uVar11 - 3;
                uVar30 = CONCAT44(uVar11,auVar45._0_4_);
                iVar10 = (int)uVar41;
                if (iVar20 == 1) {
                  uVar32 = 0x1f;
                  if (uVar11 - 2 != 0) {
                    for (; uVar11 - 2 >> uVar32 == 0; uVar32 = uVar32 - 1) {
                    }
                  }
                  iVar10 = iVar10 - (uVar32 ^ 0x1f);
                  iVar10 = (uVar11 * 0x100 - 0x200 >> ((byte)iVar10 & 0x1f)) +
                           (iVar10 + (0x2f - (uVar21 ^ 0x1f))) * 0x100;
                }
                else {
                  uVar31 = *(int *)(*(long *)(lVar43 + 0xa8) + (ulong)uVar12 * 4) + 1;
                  uVar13 = 0x1f;
                  if (uVar31 != 0) {
                    for (; uVar31 >> uVar13 == 0; uVar13 = uVar13 - 1) {
                    }
                  }
                  iVar28 = iVar10 - (uVar13 ^ 0x1f);
                  if (uVar32 < 0x80) {
                    uVar34 = (ulong)(byte)(&ML_Code_0)[uVar32];
                  }
                  else {
                    uVar13 = 0x1f;
                    if (uVar32 != 0) {
                      for (; uVar32 >> uVar13 == 0; uVar13 = uVar13 - 1) {
                      }
                    }
                    uVar34 = (ulong)(0x43 - (uVar13 ^ 0x1f));
                  }
                  uVar13 = *(int *)(*(long *)(lVar43 + 0xa0) + uVar34 * 4) + 1;
                  uVar32 = 0x1f;
                  if (uVar13 != 0) {
                    for (; uVar13 >> uVar32 == 0; uVar32 = uVar32 - 1) {
                    }
                  }
                  iVar10 = iVar10 - (uVar32 ^ 0x1f);
                  iVar10 = (((uVar12 * 0x100 + 0x33 +
                              *(int *)(lVar43 + 0xdc) + *(int *)(lVar43 + 0xd8) + iVar28 * -0x100) -
                            (uVar31 * 0x100 >> ((byte)iVar28 & 0x1f))) +
                            (uint)(byte)ML_bits[uVar34] * 0x100 + iVar10 * -0x100) -
                           (uVar13 * 0x100 >> ((byte)iVar10 & 0x1f));
                }
                uVar34 = (ulong)uVar11;
                iVar28 = *piVar4;
                uVar11 = uVar11 + 1;
                piVar23 = piVar4 + uVar34 * 7;
                piVar23[3] = 0;
                *(undefined8 *)(piVar23 + 1) = uVar30;
                iVar14 = ZSTD_litLengthPrice_isra_0
                                   (0,uVar7,*(undefined4 *)(lVar43 + 0xd4),
                                    *(undefined4 *)(lVar43 + 0xe0),2);
                auVar45._8_8_ = extraout_XMM1_Qb;
                auVar45._0_8_ = extraout_XMM1_Qa;
                *piVar23 = iVar14 + iVar10 + iVar28;
              } while (uVar11 <= (uint)uVar42);
            }
            puVar44 = puVar44 + 2;
          } while (puVar44 != puVar5 + uVar40 * 2);
          piVar4[(ulong)uVar11 * 7] = 0x40000000;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            uVar40 = 0;
            piVar23 = piVar4;
          }
          else {
            uVar42 = 1;
LAB_001025c3:
            do {
              uVar12 = (uint)uVar42;
              puVar6 = (undefined8 *)((long)local_130 + uVar42);
              piVar23 = piVar4 + (ulong)(uVar12 - 1) * 7;
              iVar14 = ZSTD_rawLiteralsCost_constprop_0((long)local_130 + (uVar42 - 1),lVar38,2);
              iVar10 = *piVar23;
              iVar28 = piVar23[3];
              uVar2 = *(undefined4 *)(param_1 + 0xd4);
              uVar3 = *(undefined4 *)(param_1 + 0xe0);
              uVar7 = *(undefined8 *)(param_1 + 0x98);
              iVar20 = iVar28 + 1;
              iVar15 = ZSTD_litLengthPrice_isra_0(iVar20,uVar7,uVar2,uVar3,2);
              iVar16 = ZSTD_litLengthPrice_isra_0(iVar28,uVar7,uVar2,uVar3);
              iVar10 = (iVar15 - iVar16) + iVar10 + iVar14;
              piVar24 = piVar4 + uVar42 * 7;
              iVar14 = *piVar24;
              iVar15 = piVar24[3];
              iVar16 = iVar15;
              uVar41 = extraout_XMM0_Qa;
              if (iVar10 <= iVar14) {
                uVar30 = *(undefined8 *)(piVar23 + 2);
                uVar41 = *(undefined8 *)(piVar24 + 1);
                *(undefined8 *)piVar24 = *(undefined8 *)piVar23;
                *(undefined8 *)(piVar24 + 2) = uVar30;
                uVar30 = *(undefined8 *)(piVar23 + 3);
                uVar35 = *(undefined8 *)(piVar23 + 5);
                *piVar24 = iVar10;
                *(undefined8 *)(piVar24 + 3) = uVar30;
                *(undefined8 *)(piVar24 + 5) = uVar35;
                piVar24[3] = iVar20;
                iVar16 = iVar20;
                if (iVar15 == 0) {
                  uVar2 = *(undefined4 *)(param_1 + 0xd4);
                  uVar40 = (ulong)*(uint *)(param_1 + 0xe0);
                  iVar15 = ZSTD_litLengthPrice_isra_0(uVar41,1,uVar7,uVar2,uVar40);
                  iVar18 = ZSTD_litLengthPrice_isra_0(0,uVar7,uVar2,uVar40 & 0xffffffff);
                  uVar41 = extraout_XMM0_Qa_00;
                  if ((puVar6 < puVar1) && (iVar15 - iVar18 < 0)) {
                    iVar19 = ZSTD_rawLiteralsCost_constprop_0(puVar6,lVar38,2);
                    iVar14 = iVar14 + iVar19 + (iVar15 - iVar18);
                    iVar28 = ZSTD_litLengthPrice_isra_0
                                       (iVar28 + 2,uVar7,uVar2,uVar40 & 0xffffffff,2);
                    iVar20 = ZSTD_litLengthPrice_isra_0(iVar20,uVar7,uVar2,uVar40 & 0xffffffff);
                    uVar41 = extraout_XMM0_Qa_01;
                    if (iVar14 < (iVar28 - iVar20) + iVar10 + iVar19) {
                      uVar21 = uVar12 + 1;
                      piVar23 = piVar4 + (ulong)uVar21 * 7;
                      if (iVar14 < *piVar23) {
                        uVar13 = (uint)extraout_XMM0_Qa_01;
                        uVar32 = uVar12 - (int)((ulong)extraout_XMM0_Qa_01 >> 0x20);
                        local_74 = *(undefined8 *)(piVar4 + (ulong)uVar32 * 7 + 4);
                        local_6c = piVar4[(ulong)uVar32 * 7 + 6];
                        local_74._4_4_ = (int)((ulong)local_74 >> 0x20);
                        if (uVar13 < 4) {
                          uVar32 = (uVar13 - 1) + (uint)(piVar4[(ulong)uVar32 * 7 + 3] == 0);
                          iVar10 = local_74._4_4_;
                          iVar20 = (int)local_74;
                          if ((uVar32 != 0) &&
                             ((iVar20 = (int)local_74 + -1, uVar32 == 3 ||
                              (iVar20 = *(int *)((long)&local_74 + (ulong)uVar32 * 4),
                              iVar10 = (int)local_74, uVar32 != 1)))) {
                            local_6c = local_74._4_4_;
                            iVar10 = (int)local_74;
                          }
                        }
                        else {
                          local_6c = local_74._4_4_;
                          iVar10 = (int)local_74;
                          iVar20 = uVar13 - 3;
                        }
                        local_74 = CONCAT44(iVar10,iVar20);
                        if (uVar11 < uVar21) {
                          uVar11 = uVar21;
                        }
                        piVar23[6] = local_6c;
                        *(undefined8 *)(piVar23 + 4) = local_74;
                        piVar23[3] = 1;
                        *(undefined8 *)(piVar23 + 1) = extraout_XMM0_Qa_01;
                        iVar16 = piVar24[3];
                        *piVar23 = iVar14;
                      }
                    }
                  }
                }
              }
              if (iVar16 == 0) {
                uVar32 = uVar12 - piVar24[2];
                uVar21 = piVar24[1];
                local_74 = *(undefined8 *)(piVar4 + (ulong)uVar32 * 7 + 4);
                local_6c = piVar4[(ulong)uVar32 * 7 + 6];
                local_74._4_4_ = (int)((ulong)local_74 >> 0x20);
                if (uVar21 < 4) {
                  uVar21 = (uVar21 - 1) + (uint)(piVar4[(ulong)uVar32 * 7 + 3] == 0);
                  iVar10 = local_74._4_4_;
                  iVar20 = (int)local_74;
                  if ((uVar21 != 0) &&
                     ((iVar20 = (int)local_74 + -1, uVar21 == 3 ||
                      (iVar20 = *(int *)((long)&local_74 + (ulong)uVar21 * 4),
                      iVar10 = (int)local_74, uVar21 != 1)))) {
                    local_6c = local_74._4_4_;
                    iVar10 = (int)local_74;
                  }
                }
                else {
                  local_6c = local_74._4_4_;
                  iVar10 = (int)local_74;
                  iVar20 = uVar21 - 3;
                }
                local_74 = CONCAT44(iVar10,iVar20);
                *(undefined8 *)(piVar24 + 4) = local_74;
                piVar24[6] = local_6c;
              }
              if (puVar6 <= puVar39) {
                if (uVar12 == uVar11) break;
                iVar20 = *piVar24;
                iVar10 = ZSTD_litLengthPrice_isra_0
                                   (uVar41,0,*(undefined8 *)(param_1 + 0x98),
                                    *(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xe0),
                                    2);
                local_bc = (*pcVar22)(puVar5,param_1,&local_c0,puVar6,puVar1,piVar24 + 4,iVar16 == 0
                                      ,uVar9);
                ZSTD_optLdm_processMatchCandidate
                          (&local_b8,puVar5,&local_bc,(int)puVar6 - local_118);
                if (local_bc != 0) {
                  puVar44 = puVar5 + (ulong)(local_bc - 1) * 2;
                  uVar21 = puVar44[1];
                  uVar40 = (ulong)(uVar12 + uVar21);
                  if (uVar8 < uVar21) {
                    iStack_5c = 0;
                    uStack_64 = (uint)*(undefined8 *)puVar44;
                    uStack_60 = (uint)((ulong)*(undefined8 *)puVar44 >> 0x20);
                    goto LAB_00101ffe;
                  }
                  if ((0xfff < uVar12 + uVar21) ||
                     (puVar1 <= (undefined8 *)(uVar21 + uVar42 + (long)local_130))) {
                    iStack_5c = 0;
                    uStack_64 = (uint)*(undefined8 *)puVar44;
                    uStack_60 = (uint)((ulong)*(undefined8 *)puVar44 >> 0x20);
                    if (uVar21 != 0) goto LAB_00101ffe;
                    goto LAB_00102a10;
                  }
                  uVar40 = 0;
                  do {
                    uVar21 = puVar5[uVar40 * 2];
                    uVar32 = puVar5[uVar40 * 2 + 1];
                    uVar13 = uVar9;
                    if (uVar40 != 0) {
                      uVar13 = puVar5[(ulong)((int)uVar40 - 1) * 2 + 1] + 1;
                    }
                    if (uVar13 <= uVar32) {
                      uVar31 = 0x1f;
                      if (uVar21 != 0) {
                        for (; uVar21 >> uVar31 == 0; uVar31 = uVar31 - 1) {
                        }
                      }
                      uVar29 = 0x1f - (uVar31 ^ 0x1f);
                      iVar28 = *(int *)(param_1 + 0xe0);
                      uVar37 = uVar12 + uVar32;
                      do {
                        while( true ) {
                          uVar36 = uVar32 - 3;
                          if (iVar28 == 1) {
                            uVar36 = 0x1f;
                            if (uVar32 - 2 != 0) {
                              for (; uVar32 - 2 >> uVar36 == 0; uVar36 = uVar36 - 1) {
                              }
                            }
                            iVar14 = 0x1f - (uVar36 ^ 0x1f);
                            iVar14 = ((0x2f - (uVar31 ^ 0x1f)) + iVar14) * 0x100 +
                                     (uVar32 * 0x100 - 0x200 >> ((byte)iVar14 & 0x1f));
                          }
                          else {
                            uVar33 = *(int *)(*(long *)(param_1 + 0xa8) + (ulong)uVar29 * 4) + 1;
                            uVar17 = 0x1f;
                            if (uVar33 != 0) {
                              for (; uVar33 >> uVar17 == 0; uVar17 = uVar17 - 1) {
                              }
                            }
                            iVar14 = 0x1f - (uVar17 ^ 0x1f);
                            if (uVar36 < 0x80) {
                              uVar42 = (ulong)(byte)(&ML_Code_0)[uVar36];
                            }
                            else {
                              uVar17 = 0x1f;
                              if (uVar36 != 0) {
                                for (; uVar36 >> uVar17 == 0; uVar17 = uVar17 - 1) {
                                }
                              }
                              uVar42 = (ulong)(0x43 - (uVar17 ^ 0x1f));
                            }
                            uVar17 = *(int *)(*(long *)(param_1 + 0xa0) + uVar42 * 4) + 1;
                            uVar36 = 0x1f;
                            if (uVar17 != 0) {
                              for (; uVar17 >> uVar36 == 0; uVar36 = uVar36 - 1) {
                              }
                            }
                            iVar15 = 0x1f - (uVar36 ^ 0x1f);
                            iVar14 = ((uint)(byte)ML_bits[uVar42] * 0x100 +
                                      ((uVar29 * 0x100 + 0x33 +
                                        *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xd8) +
                                       iVar14 * -0x100) - (uVar33 * 0x100 >> ((byte)iVar14 & 0x1f)))
                                     + iVar15 * -0x100) - (uVar17 * 0x100 >> ((byte)iVar15 & 0x1f));
                          }
                          iVar14 = iVar14 + iVar10 + iVar20;
                          piVar23 = piVar4 + (ulong)uVar37 * 7;
                          if (uVar37 <= uVar11) break;
                          uVar36 = uVar11 + 1;
                          iVar15 = uVar37 - uVar11;
                          piVar24 = piVar4 + (ulong)uVar36 * 7;
                          do {
                            *piVar24 = 0x40000000;
                            piVar25 = piVar24 + 7;
                            piVar24[3] = 1;
                            piVar24 = piVar25;
                            uVar11 = uVar37;
                          } while (piVar25 != piVar4 + 7 + ((ulong)uVar36 + (ulong)(iVar15 - 1)) * 7
                                  );
LAB_00102959:
                          uVar36 = uVar32 - 1;
                          *piVar23 = iVar14;
                          piVar23[3] = 0;
                          uVar37 = uVar37 - 1;
                          *(ulong *)(piVar23 + 1) = CONCAT44(uVar32,uVar21);
                          uVar32 = uVar36;
                          if (uVar36 < uVar13) goto LAB_0010298c;
                        }
                        if (iVar14 < *piVar23) goto LAB_00102959;
                        uVar32 = uVar32 - 1;
                        uVar37 = uVar37 - 1;
                      } while (uVar13 <= uVar32);
                    }
LAB_0010298c:
                    uVar40 = uVar40 + 1;
                  } while (uVar40 != local_bc);
                  uVar42 = (ulong)(uVar12 + 1);
                  piVar4[(ulong)(uVar11 + 1) * 7] = 0x40000000;
                  if (uVar11 < uVar12 + 1) break;
                  goto LAB_001025c3;
                }
              }
              uVar42 = (ulong)(uVar12 + 1);
            } while (uVar12 + 1 <= uVar11);
            uVar40 = (ulong)uVar11;
            piVar23 = piVar4 + uVar40 * 7;
          }
          uVar30 = *(undefined8 *)piVar23;
          uVar41 = *(undefined8 *)(piVar23 + 3);
          uVar7 = *(undefined8 *)(piVar23 + 5);
          local_68 = (undefined4)uVar30;
          uStack_64 = (uint)((ulong)uVar30 >> 0x20);
          uStack_60 = (uint)*(undefined8 *)(piVar23 + 2);
          iStack_5c = (int)uVar41;
          uStack_58 = (undefined4)((ulong)uVar41 >> 0x20);
          uStack_54 = (undefined4)uVar7;
          uStack_50 = (undefined4)((ulong)uVar7 >> 0x20);
          if (uStack_60 == 0) {
LAB_00102a10:
            local_130 = (undefined8 *)((long)local_130 + uVar40);
            if (puVar39 <= local_130) break;
            goto LAB_00101eeb;
          }
          uVar12 = uVar11 - uStack_60;
          if (iStack_5c == 0) {
            uVar42 = (ulong)uVar12;
            goto LAB_00101ffe;
          }
          uVar35 = CONCAT44(iStack_5c,uStack_60);
          uVar12 = uVar12 - iStack_5c;
          *param_3 = CONCAT44(uStack_54,uStack_58);
          uVar11 = uVar12 + 2;
          *(undefined4 *)(param_3 + 1) = uStack_50;
          piVar24 = piVar4 + (ulong)uVar11 * 7;
          piVar24[3] = iStack_5c;
          piVar24[2] = 0;
          piVar23 = piVar4 + (ulong)(uVar12 + 1) * 7;
          *(undefined8 *)(piVar23 + 2) = uVar35;
          *(undefined8 *)piVar23 = uVar30;
          *(undefined8 *)(piVar23 + 3) = uVar41;
          *(undefined8 *)(piVar23 + 5) = uVar7;
          piVar23 = piVar4 + (ulong)uVar12 * 7;
        }
        *(undefined8 *)(piVar24 + 2) = uVar35;
        uVar40 = (ulong)uVar11;
        *(undefined8 *)piVar24 = uVar30;
        iVar20 = *piVar23;
        *(ulong *)(piVar24 + 3) = CONCAT44(uStack_58,iStack_5c);
        *(ulong *)(piVar24 + 5) = CONCAT44(uStack_50,uStack_54);
        auVar45 = *(undefined1 (*) [16])(piVar23 + 1);
        uVar41 = *(undefined8 *)(piVar23 + 5);
        iVar28 = auVar45._4_4_;
        iVar10 = auVar45._8_4_;
        piVar24[3] = iVar10;
        if (iVar28 == 0) {
LAB_0010215c:
          do {
            uVar12 = piVar4[uVar40 * 7 + 3];
            uVar42 = (ulong)uVar12;
            uVar21 = piVar4[uVar40 * 7 + 2];
            local_130 = (undefined8 *)((long)local_108 + uVar42);
            if (uVar21 != 0) {
              iVar20 = piVar4[uVar40 * 7 + 1];
              uVar32 = uVar12;
              ZSTD_updateStats(lVar38,uVar42,local_108);
              uVar34 = (ulong)uVar21;
              if (puVar1 + -4 < local_130) {
                ZSTD_safecopyLiterals(param_2[3],local_108,local_130,puVar1 + -4);
LAB_0010226e:
                param_2[3] = param_2[3] + uVar42;
                piVar23 = (int *)param_2[1];
                if (0xffff < uVar42) {
                  *(undefined4 *)(param_2 + 9) = 1;
                  *(int *)((long)param_2 + 0x4c) = (int)((long)piVar23 - *param_2 >> 3);
                }
              }
              else {
                puVar6 = (undefined8 *)param_2[3];
                uVar41 = local_108[1];
                *puVar6 = *local_108;
                puVar6[1] = uVar41;
                if (0x10 < uVar42) {
                  lVar43 = param_2[3];
                  uVar41 = local_108[3];
                  *(undefined8 *)(lVar43 + 0x10) = local_108[2];
                  *(undefined8 *)(lVar43 + 0x18) = uVar41;
                  if (0x20 < uVar12) {
                    puVar26 = (undefined8 *)(lVar43 + 0x20);
                    puVar6 = local_108;
                    do {
                      uVar41 = puVar6[5];
                      puVar27 = puVar26 + 4;
                      *puVar26 = puVar6[4];
                      puVar26[1] = uVar41;
                      uVar41 = puVar6[7];
                      puVar26[2] = puVar6[6];
                      puVar26[3] = uVar41;
                      puVar26 = puVar27;
                      puVar6 = puVar6 + 4;
                    } while (puVar27 < (undefined8 *)(lVar43 + uVar42));
                  }
                  goto LAB_0010226e;
                }
                param_2[3] = param_2[3] + uVar42;
                piVar23 = (int *)param_2[1];
              }
              *(short *)(piVar23 + 1) = (short)uVar32;
              *piVar23 = iVar20;
              if (0xffff < uVar34 - 3) {
                *(undefined4 *)(param_2 + 9) = 2;
                *(int *)((long)param_2 + 0x4c) = (int)((long)piVar23 - *param_2 >> 3);
              }
              *(short *)((long)piVar23 + 6) = (short)(uVar34 - 3);
              param_2[1] = (long)(piVar23 + 2);
              local_130 = (undefined8 *)((ulong)(uVar32 + uVar21) + (long)local_108);
              local_108 = local_130;
            }
            uVar12 = (int)uVar40 + 1;
            uVar40 = (ulong)uVar12;
          } while (uVar12 <= uVar11);
        }
        else {
          uVar42 = (ulong)uVar12;
          do {
            uVar12 = (int)uVar40 - 1;
            uVar40 = (ulong)uVar12;
            piVar23 = piVar4 + uVar40 * 7;
            *piVar23 = iVar20;
            *(undefined8 *)(piVar23 + 5) = uVar41;
            *(undefined1 (*) [16])(piVar23 + 1) = auVar45;
            uVar42 = (ulong)(uint)((int)uVar42 - (iVar10 + iVar28));
            piVar24 = piVar4 + uVar42 * 7;
            auVar45 = *(undefined1 (*) [16])(piVar24 + 1);
            iVar20 = *piVar24;
            uVar41 = *(undefined8 *)(piVar24 + 5);
            iVar28 = auVar45._4_4_;
            iVar10 = auVar45._8_4_;
            piVar23[3] = piVar24[3];
          } while (iVar28 != 0);
          if (uVar12 <= uVar11) goto LAB_0010215c;
        }
        ZSTD_setBasePrices(lVar38,2);
      }
    } while (local_130 < puVar39);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (long)puVar1 - (long)local_108;
}



uint ZSTD_insertBt1(long param_1,long *param_2,ulong *param_3,int param_4,uint param_5,int param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  uint *puVar3;
  ulong *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  ulong *puVar19;
  byte *pbVar20;
  uint uVar21;
  ulong uVar22;
  ulong *puVar23;
  byte *pbVar24;
  long lVar25;
  ulong *puVar26;
  int iVar27;
  uint uVar28;
  byte *pbVar29;
  byte *pbVar30;
  long in_FS_OFFSET;
  byte *local_e0;
  uint *local_d0;
  uint *local_c8;
  int local_b8;
  ulong *local_98;
  ulong *local_78;
  uint uStack_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar11 = (char)*(undefined4 *)(param_1 + 0x108);
  if (param_5 == 7) {
    uVar22 = (ulong)(*param_2 * -0x30e44323405a9d00) >> (0x40U - cVar11 & 0x3f);
  }
  else if (param_5 < 8) {
    if (param_5 == 5) {
      uVar22 = (ulong)(*param_2 * -0x30e4432345000000) >> (0x40U - cVar11 & 0x3f);
    }
    else {
      if (param_5 != 6) goto LAB_00103228;
      uVar22 = (ulong)(*param_2 * -0x30e4432340650000) >> (0x40U - cVar11 & 0x3f);
    }
  }
  else if (param_5 == 8) {
    uVar22 = (ulong)(*param_2 * -0x30e44323485a9b9d) >> (0x40U - cVar11 & 0x3f);
  }
  else {
LAB_00103228:
    uVar22 = (ulong)((uint)((int)*param_2 * -0x61c8864f) >> (0x20U - cVar11 & 0x1f));
  }
  lVar7 = *(long *)(param_1 + 0x10);
  puVar3 = (uint *)(*(long *)(param_1 + 0x70) + uVar22 * 4);
  lVar8 = *(long *)(param_1 + 8);
  lVar9 = *(long *)(param_1 + 0x80);
  uVar21 = *puVar3;
  pbVar18 = (byte *)(ulong)*(uint *)(param_1 + 0x18);
  uVar12 = (1 << ((char)*(undefined4 *)(param_1 + 0x104) - 1U & 0x1f)) - 1;
  puVar19 = (ulong *)(pbVar18 + lVar8);
  uVar16 = (int)param_2 - (int)lVar8;
  uVar17 = 0;
  if (uVar12 < uVar16) {
    uVar17 = uVar16 - uVar12;
  }
  local_d0 = (uint *)(lVar9 + (ulong)((uVar12 & uVar16) * 2) * 4);
  local_b8 = uVar16 + 9;
  local_c8 = local_d0 + 1;
  uVar28 = 1 << ((byte)*(undefined4 *)(param_1 + 0x100) & 0x1f);
  uVar5 = *(uint *)(param_1 + 0x1c);
  uVar10 = param_4 - uVar28;
  if (param_4 - uVar5 <= uVar28) {
    uVar10 = uVar5;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x10c);
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar5 = uVar10;
  }
  *puVar3 = uVar16;
  iVar27 = 1 << ((byte)uVar6 & 0x1f);
  if (uVar21 < uVar5) {
    local_d0[0] = 0;
    local_d0[1] = 0;
    uVar12 = 1;
LAB_001031f8:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar12;
  }
  puVar1 = (ulong *)((long)param_3 - 7);
  pbVar29 = (byte *)0x0;
  pbVar30 = (byte *)0x0;
  local_e0 = (byte *)0x8;
LAB_001030d2:
  uVar22 = (ulong)uVar21;
  pbVar20 = pbVar30;
  if (pbVar29 <= pbVar30) {
    pbVar20 = pbVar29;
  }
  puVar3 = (uint *)(lVar9 + (ulong)((uVar12 & uVar21) * 2) * 4);
  puVar4 = (ulong *)((long)param_2 + (long)pbVar20);
  if ((param_6 == 0) || (pbVar18 <= pbVar20 + uVar22)) {
    puVar26 = (ulong *)(pbVar20 + lVar8 + uVar22);
    puVar15 = puVar4;
    if (puVar4 < puVar1) {
      if (*puVar26 == *puVar4) {
        puVar15 = puVar4 + 1;
        puVar26 = puVar26 + 1;
        if (puVar15 < puVar1) {
LAB_0010333e:
          if (*puVar26 == *puVar15) goto LAB_00103478;
          uVar10 = 0;
          for (uVar13 = *puVar26 ^ *puVar15; (uVar13 & 1) == 0;
              uVar13 = uVar13 >> 1 | 0x8000000000000000) {
            uVar10 = uVar10 + 1;
          }
          pbVar14 = (byte *)((long)puVar15 + ((ulong)(uVar10 >> 3) - (long)puVar4));
          goto LAB_00103145;
        }
        goto LAB_00103243;
      }
      uVar10 = 0;
      for (uVar13 = *puVar26 ^ *puVar4; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x8000000000000000
          ) {
        uVar10 = uVar10 + 1;
      }
      pbVar14 = (byte *)(ulong)(uVar10 >> 3);
    }
    else {
LAB_00103243:
      if ((puVar15 < (ulong *)((long)param_3 - 3U)) && ((int)*puVar26 == (int)*puVar15)) {
        puVar15 = (ulong *)((long)puVar15 + 4);
        puVar26 = (ulong *)((long)puVar26 + 4);
      }
      if ((puVar15 < (ulong *)((long)param_3 - 1U)) && ((short)*puVar26 == (short)*puVar15)) {
        puVar15 = (ulong *)((long)puVar15 + 2);
        puVar26 = (ulong *)((long)puVar26 + 2);
      }
      if (puVar15 < param_3) {
        puVar15 = (ulong *)((long)puVar15 + (ulong)((byte)*puVar26 == (byte)*puVar15));
      }
      pbVar14 = (byte *)((long)puVar15 - (long)puVar4);
    }
LAB_00103145:
    pbVar14 = pbVar14 + (long)pbVar20;
    lVar25 = lVar8 + uVar22;
  }
  else {
    lVar25 = lVar7 + uVar22;
    puVar15 = (ulong *)(pbVar20 + lVar25);
    puVar26 = (ulong *)(((long)(pbVar18 + lVar7) - lVar25) + (long)param_2);
    if (param_3 <= puVar26) {
      puVar26 = param_3;
    }
    puVar2 = (ulong *)((long)puVar26 - 7);
    puVar23 = puVar4;
    local_78 = puVar15;
    if (puVar4 < puVar2) {
      if (*puVar15 == *puVar4) {
        puVar23 = puVar4 + 1;
        local_78 = puVar15 + 1;
        if (puVar23 < puVar2) {
LAB_001034c0:
          if (*local_78 == *puVar23) goto LAB_00103578;
          uVar10 = 0;
          for (uVar13 = *local_78 ^ *puVar23; (uVar13 & 1) == 0;
              uVar13 = uVar13 >> 1 | 0x8000000000000000) {
            uVar10 = uVar10 + 1;
          }
          pbVar14 = (byte *)((long)puVar23 + ((ulong)(uVar10 >> 3) - (long)puVar4));
          goto joined_r0x001033ed;
        }
        goto LAB_0010337d;
      }
      uVar10 = 0;
      for (uVar13 = *puVar15 ^ *puVar4; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x8000000000000000
          ) {
        uVar10 = uVar10 + 1;
      }
      pbVar14 = (byte *)(ulong)(uVar10 >> 3);
    }
    else {
LAB_0010337d:
      if ((puVar23 < (ulong *)((long)puVar26 - 3U)) && ((int)*local_78 == (int)*puVar23)) {
        local_78 = (ulong *)((long)local_78 + 4);
        puVar23 = (ulong *)((long)puVar23 + 4);
      }
      if ((puVar23 < (ulong *)((long)puVar26 - 1U)) && ((short)*local_78 == (short)*puVar23)) {
        local_78 = (ulong *)((long)local_78 + 2);
        puVar23 = (ulong *)((long)puVar23 + 2);
      }
      if (puVar23 < puVar26) {
        puVar23 = (ulong *)((long)puVar23 + (ulong)((byte)*local_78 == (byte)*puVar23));
      }
      pbVar14 = (byte *)((long)puVar23 - (long)puVar4);
    }
joined_r0x001033ed:
    if (pbVar18 + lVar7 == (byte *)((long)puVar15 + (long)pbVar14)) {
      puVar4 = (ulong *)((long)puVar4 + (long)pbVar14);
      puVar26 = (ulong *)((long)param_3 - 7);
      puVar15 = puVar4;
      local_98 = puVar19;
      if (puVar4 < puVar26) {
        if (*puVar19 == *puVar4) {
          puVar15 = puVar4 + 1;
          local_98 = puVar19 + 1;
          if (puVar15 < puVar26) {
LAB_0010343a:
            if (*local_98 == *puVar15) goto LAB_0010364e;
            uVar10 = 0;
            for (uVar13 = *local_98 ^ *puVar15; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar10 = uVar10 + 1;
            }
            pbVar24 = (byte *)((long)puVar15 + ((ulong)(uVar10 >> 3) - (long)puVar4));
            goto LAB_0010356a;
          }
          goto LAB_00103510;
        }
        uVar10 = 0;
        for (uVar13 = *puVar19 ^ *puVar4; (uVar13 & 1) == 0;
            uVar13 = uVar13 >> 1 | 0x8000000000000000) {
          uVar10 = uVar10 + 1;
        }
        pbVar24 = (byte *)(ulong)(uVar10 >> 3);
      }
      else {
LAB_00103510:
        if ((puVar15 < (ulong *)((long)param_3 - 3U)) && ((int)*local_98 == (int)*puVar15)) {
          local_98 = (ulong *)((long)local_98 + 4);
          puVar15 = (ulong *)((long)puVar15 + 4);
        }
        if ((puVar15 < (ulong *)((long)param_3 - 1U)) && ((short)*local_98 == (short)*puVar15)) {
          local_98 = (ulong *)((long)local_98 + 2);
          puVar15 = (ulong *)((long)puVar15 + 2);
        }
        if (puVar15 < param_3) {
          puVar15 = (ulong *)((long)puVar15 + (ulong)((byte)*local_98 == (byte)*puVar15));
        }
        pbVar24 = (byte *)((long)puVar15 - (long)puVar4);
      }
LAB_0010356a:
      pbVar14 = pbVar14 + (long)pbVar24;
    }
    pbVar14 = pbVar14 + (long)pbVar20;
    if (pbVar18 <= pbVar14 + uVar22) {
      lVar25 = uVar22 + lVar8;
    }
  }
  if ((local_e0 < pbVar14) && (local_e0 = pbVar14, (byte *)(ulong)(local_b8 - uVar21) < pbVar14)) {
    local_b8 = uVar21 + (int)pbVar14;
  }
  if ((ulong *)((long)param_2 + (long)pbVar14) == param_3) goto LAB_001031bc;
  if (pbVar14[lVar25] < (byte)*(ulong *)((long)param_2 + (long)pbVar14)) {
    *local_d0 = uVar21;
    if (uVar21 <= uVar17) {
      local_d0 = &uStack_44;
      goto LAB_001031bc;
    }
    local_d0 = puVar3 + 1;
    uVar21 = puVar3[1];
    pbVar29 = pbVar14;
  }
  else {
    *local_c8 = uVar21;
    if (uVar21 <= uVar17) {
      local_c8 = &uStack_44;
LAB_001031bc:
      uVar12 = (-8 - uVar16) + local_b8;
      *local_c8 = 0;
      *local_d0 = 0;
      if ((byte *)0x180 < local_e0) {
        uVar21 = (int)local_e0 - 0x180;
        if (0xc0 < uVar21) {
          uVar21 = 0xc0;
        }
        if (uVar12 < uVar21) {
          uVar12 = uVar21;
        }
      }
      goto LAB_001031f8;
    }
    uVar21 = *puVar3;
    pbVar30 = pbVar14;
    local_c8 = puVar3;
  }
  if ((iVar27 == 1) || (iVar27 = iVar27 + -1, uVar21 < uVar5)) goto LAB_001031bc;
  goto LAB_001030d2;
LAB_00103478:
  puVar15 = puVar15 + 1;
  puVar26 = puVar26 + 1;
  if (puVar1 <= puVar15) goto LAB_00103243;
  goto LAB_0010333e;
LAB_00103578:
  puVar23 = puVar23 + 1;
  local_78 = local_78 + 1;
  if (puVar2 <= puVar23) goto LAB_0010337d;
  goto LAB_001034c0;
LAB_0010364e:
  puVar15 = puVar15 + 1;
  local_98 = local_98 + 1;
  if (puVar26 <= puVar15) goto LAB_00103510;
  goto LAB_0010343a;
}



char * ZSTD_count_2segments
                 (ulong *param_1,ulong *param_2,ulong *param_3,char *param_4,ulong *param_5)

{
  ulong *puVar1;
  uint uVar2;
  char *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  char *pcVar7;
  ulong *puVar8;
  
  puVar6 = (ulong *)(((long)param_4 - (long)param_2) + (long)param_1);
  if (param_3 <= puVar6) {
    puVar6 = param_3;
  }
  puVar1 = (ulong *)((long)puVar6 - 7);
  puVar4 = param_2;
  puVar8 = param_1;
  if (param_1 < puVar1) {
    if (*param_2 == *param_1) {
      puVar8 = param_1 + 1;
      puVar4 = param_2 + 1;
      if (puVar8 < puVar1) {
LAB_001036cd:
        if (*puVar4 == *puVar8) goto LAB_00103810;
        uVar2 = 0;
        for (uVar5 = *puVar4 ^ *puVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
          uVar2 = uVar2 + 1;
        }
        pcVar3 = (char *)((long)puVar8 + ((ulong)(uVar2 >> 3) - (long)param_1));
        goto joined_r0x00103772;
      }
      goto LAB_00103736;
    }
    uVar2 = 0;
    for (uVar5 = *param_2 ^ *param_1; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
      uVar2 = uVar2 + 1;
    }
    pcVar3 = (char *)(ulong)(uVar2 >> 3);
  }
  else {
LAB_00103736:
    if ((puVar8 < (ulong *)((long)puVar6 - 3U)) && ((int)*puVar4 == (int)*puVar8)) {
      puVar8 = (ulong *)((long)puVar8 + 4);
      puVar4 = (ulong *)((long)puVar4 + 4);
    }
    if ((puVar8 < (ulong *)((long)puVar6 - 1U)) && ((short)*puVar4 == (short)*puVar8)) {
      puVar8 = (ulong *)((long)puVar8 + 2);
      puVar4 = (ulong *)((long)puVar4 + 2);
    }
    if (puVar8 < puVar6) {
      puVar8 = (ulong *)((long)puVar8 + (ulong)((char)*puVar4 == (char)*puVar8));
    }
    pcVar3 = (char *)((long)puVar8 - (long)param_1);
  }
joined_r0x00103772:
  if (param_4 != (char *)((long)param_2 + (long)pcVar3)) {
    return pcVar3;
  }
  param_1 = (ulong *)((long)param_1 + (long)pcVar3);
  puVar6 = param_1;
  if (param_1 < (ulong *)((long)param_3 - 7U)) {
    if (*param_5 != *param_1) {
      uVar2 = 0;
      for (uVar5 = *param_5 ^ *param_1; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000) {
        uVar2 = uVar2 + 1;
      }
      pcVar7 = (char *)(ulong)(uVar2 >> 3);
      goto LAB_00103722;
    }
    param_5 = param_5 + 1;
    while (puVar6 = puVar6 + 1, puVar6 < (ulong *)((long)param_3 - 7U)) {
      if (*param_5 != *puVar6) {
        uVar2 = 0;
        for (uVar5 = *param_5 ^ *puVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x8000000000000000)
        {
          uVar2 = uVar2 + 1;
        }
        pcVar7 = (char *)((long)puVar6 + ((ulong)(uVar2 >> 3) - (long)param_1));
        goto LAB_00103722;
      }
      param_5 = param_5 + 1;
    }
  }
  if ((puVar6 < (ulong *)((long)param_3 - 3U)) && ((int)*param_5 == (int)*puVar6)) {
    puVar6 = (ulong *)((long)puVar6 + 4);
    param_5 = (ulong *)((long)param_5 + 4);
  }
  if ((puVar6 < (ulong *)((long)param_3 - 1U)) && ((short)*param_5 == (short)*puVar6)) {
    puVar6 = (ulong *)((long)puVar6 + 2);
    param_5 = (ulong *)((long)param_5 + 2);
  }
  if (puVar6 < param_3) {
    puVar6 = (ulong *)((long)puVar6 + (ulong)((char)*param_5 == (char)*puVar6));
  }
  pcVar7 = (char *)((long)puVar6 - (long)param_1);
LAB_00103722:
  return pcVar3 + (long)pcVar7;
LAB_00103810:
  puVar8 = puVar8 + 1;
  puVar4 = puVar4 + 1;
  if (puVar1 <= puVar8) goto LAB_00103736;
  goto LAB_001036cd;
}



ulong ZSTD_btGetAllMatches_noDict_6
                (long param_1,long param_2,undefined8 param_3,long *param_4,ulong *param_5,
                int *param_6,uint param_7,int param_8)

{
  ulong *puVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  ulong *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  int iVar22;
  uint uVar23;
  byte *pbVar24;
  ulong *puVar25;
  byte *pbVar26;
  long in_FS_OFFSET;
  ulong local_d0;
  uint *local_b8;
  uint *local_b0;
  byte *local_70;
  int local_68;
  uint uStack_44;
  long local_40;
  
  lVar5 = *(long *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = *(uint *)(param_2 + 0x2c);
  uVar10 = (ulong)uVar18;
  local_d0 = 0;
  if ((long *)(lVar5 + uVar10) <= param_4) {
    uVar19 = (uint)((long)param_4 - lVar5);
    while (uVar18 < uVar19) {
      iVar9 = ZSTD_insertBt1(param_2,uVar10 + lVar5,param_5,(long)param_4 - lVar5 & 0xffffffff,6,0);
      uVar18 = uVar18 + iVar9;
      uVar10 = (ulong)uVar18;
    }
    *(uint *)(param_2 + 0x2c) = uVar19;
    iVar9 = *(int *)(param_2 + 0x18);
    puVar2 = (uint *)(*(long *)(param_2 + 0x70) +
                     ((ulong)(*param_4 * -0x30e4432340650000) >>
                     (0x40U - (char)*(undefined4 *)(param_2 + 0x108) & 0x3f)) * 4);
    uVar4 = *puVar2;
    lVar6 = *(long *)(param_2 + 0x80);
    uVar18 = (1 << ((char)*(undefined4 *)(param_2 + 0x104) - 1U & 0x1f)) - 1;
    uVar7 = 0;
    if (uVar18 < uVar19) {
      uVar7 = uVar19 - uVar18;
    }
    uVar23 = 1 << ((byte)*(undefined4 *)(param_2 + 0x100) & 0x1f);
    uVar13 = *(uint *)(param_2 + 0x1c);
    uVar8 = uVar19 - uVar23;
    if (uVar19 - uVar13 <= uVar23) {
      uVar8 = uVar13;
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar8 = uVar13;
    }
    uVar13 = 1;
    if (uVar8 != 0) {
      uVar13 = uVar8;
    }
    lVar14 = (ulong)((uVar18 & uVar19) * 2) * 4;
    local_b8 = (uint *)(lVar6 + lVar14);
    local_b0 = (uint *)(lVar6 + 4 + lVar14);
    iVar15 = uVar19 + 9;
    iVar22 = 1 << ((byte)*(undefined4 *)(param_2 + 0x10c) & 0x1f);
    local_70 = (byte *)(ulong)(param_8 - 1);
    if (param_7 < 0xfffffffd) {
      local_d0 = 0;
      uVar23 = 0xfff;
      if (*(uint *)(param_2 + 0x114) < 0x1000) {
        uVar23 = *(uint *)(param_2 + 0x114);
      }
      lVar14 = 0;
      do {
        uVar10 = local_d0;
        if (param_7 + (int)lVar14 == 3) {
          uVar16 = *param_6 - 1;
        }
        else {
          uVar16 = param_6[(ulong)param_7 + lVar14];
        }
        uVar20 = (ulong)uVar16;
        if (((uVar16 - 1 < uVar19 - iVar9) && (*(int *)((long)param_4 - uVar20) == (int)*param_4))
           && (uVar8 <= uVar19 - uVar16)) {
          puVar1 = (ulong *)((long)param_5 - 7);
          puVar11 = (ulong *)((long)param_4 + (4 - uVar20));
          puVar17 = (ulong *)((long)param_4 + 4);
          local_68 = (int)puVar17;
          if (puVar17 < puVar1) {
            if (*puVar11 == *(ulong *)((long)param_4 + 4)) {
              puVar17 = (ulong *)((long)param_4 + 0xc);
              puVar11 = (ulong *)((long)param_4 + (0xc - uVar20));
              if (puVar17 < puVar1) {
LAB_00103ef5:
                if (*puVar11 == *puVar17) goto LAB_00103f45;
                uVar16 = 0;
                for (uVar20 = *puVar11 ^ *puVar17; (uVar20 & 1) == 0;
                    uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar16 = uVar16 + 1;
                }
                uVar16 = ((int)puVar17 + (uVar16 >> 3)) - local_68;
                goto LAB_00103b0f;
              }
              goto LAB_00103e35;
            }
            uVar16 = 0;
            for (uVar20 = *puVar11 ^ *(ulong *)((long)param_4 + 4); (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar16 = uVar16 + 1;
            }
            uVar16 = uVar16 >> 3;
          }
          else {
LAB_00103e35:
            if ((puVar17 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar11 == (int)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
            if ((puVar17 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar11 == (short)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
            if (puVar17 < param_5) {
              puVar17 = (ulong *)((long)puVar17 + (ulong)((byte)*puVar11 == (byte)*puVar17));
            }
            uVar16 = (int)puVar17 - local_68;
          }
LAB_00103b0f:
          uVar16 = uVar16 + 4;
          pbVar21 = (byte *)(ulong)uVar16;
          if (local_70 < pbVar21) {
            local_d0 = (ulong)((int)local_d0 + 1);
            piVar3 = (int *)(param_1 + uVar10 * 8);
            *piVar3 = (int)lVar14 + 1;
            piVar3[1] = uVar16;
            if ((param_5 == (ulong *)((long)param_4 + (long)pbVar21)) ||
               (local_70 = pbVar21, uVar23 < uVar16)) goto LAB_00103d4b;
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
    }
    else {
      local_d0 = 0;
    }
    *puVar2 = uVar19;
    if (uVar13 <= uVar4) {
      puVar1 = (ulong *)((long)param_5 - 7);
      pbVar21 = (byte *)0x0;
      pbVar26 = (byte *)0x0;
      do {
        pbVar24 = pbVar26;
        if (pbVar21 <= pbVar26) {
          pbVar24 = pbVar21;
        }
        puVar2 = (uint *)(lVar6 + (ulong)((uVar18 & uVar4) * 2) * 4);
        puVar17 = (ulong *)((long)param_4 + (long)pbVar24);
        puVar25 = (ulong *)(pbVar24 + (ulong)uVar4 + lVar5);
        puVar11 = puVar17;
        if (puVar17 < puVar1) {
          if (*puVar25 == *puVar17) {
            puVar11 = puVar17 + 1;
            puVar25 = puVar25 + 1;
            if (puVar11 < puVar1) {
LAB_00103db9:
              if (*puVar25 == *puVar11) goto LAB_00103df0;
              uVar8 = 0;
              for (uVar10 = *puVar25 ^ *puVar11; (uVar10 & 1) == 0;
                  uVar10 = uVar10 >> 1 | 0x8000000000000000) {
                uVar8 = uVar8 + 1;
              }
              pbVar12 = (byte *)((long)puVar11 + ((ulong)(uVar8 >> 3) - (long)puVar17));
              goto LAB_00103bda;
            }
            goto LAB_00103cb9;
          }
          uVar8 = 0;
          for (uVar10 = *puVar25 ^ *puVar17; (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x8000000000000000) {
            uVar8 = uVar8 + 1;
          }
          pbVar12 = (byte *)(ulong)(uVar8 >> 3);
        }
        else {
LAB_00103cb9:
          if ((puVar11 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar25 == (int)*puVar11)) {
            puVar11 = (ulong *)((long)puVar11 + 4);
            puVar25 = (ulong *)((long)puVar25 + 4);
          }
          if ((puVar11 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar25 == (short)*puVar11)) {
            puVar11 = (ulong *)((long)puVar11 + 2);
            puVar25 = (ulong *)((long)puVar25 + 2);
          }
          if (puVar11 < param_5) {
            puVar11 = (ulong *)((long)puVar11 + (ulong)((byte)*puVar25 == (byte)*puVar11));
          }
          pbVar12 = (byte *)((long)puVar11 - (long)puVar17);
        }
LAB_00103bda:
        pbVar12 = pbVar12 + (long)pbVar24;
        if (local_70 < pbVar12) {
          if ((byte *)(ulong)(iVar15 - uVar4) < pbVar12) {
            iVar15 = uVar4 + (int)pbVar12;
          }
          piVar3 = (int *)(param_1 + local_d0 * 8);
          piVar3[1] = (int)pbVar12;
          local_d0 = (ulong)((int)local_d0 + 1);
          *piVar3 = (uVar19 + 3) - uVar4;
          if (((byte *)0x1000 < pbVar12) ||
             (local_70 = pbVar12, param_5 == (ulong *)((long)param_4 + (long)pbVar12))) break;
        }
        if (pbVar12[(ulong)uVar4 + lVar5] < (byte)*(ulong *)((long)param_4 + (long)pbVar12)) {
          *local_b8 = uVar4;
          if (uVar4 <= uVar7) {
            local_b8 = &uStack_44;
            break;
          }
          local_b8 = puVar2 + 1;
          uVar4 = puVar2[1];
          pbVar21 = pbVar12;
          pbVar12 = pbVar26;
        }
        else {
          *local_b0 = uVar4;
          if (uVar4 <= uVar7) {
            local_b0 = &uStack_44;
            break;
          }
          uVar4 = *puVar2;
          local_b0 = puVar2;
        }
        iVar22 = iVar22 + -1;
        if ((iVar22 == 0) || (pbVar26 = pbVar12, uVar4 < uVar13)) break;
      } while( true );
    }
    *local_b0 = 0;
    *local_b8 = 0;
    *(int *)(param_2 + 0x2c) = iVar15 + -8;
  }
LAB_00103d4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00103f45:
  puVar17 = puVar17 + 1;
  puVar11 = puVar11 + 1;
  if (puVar1 <= puVar17) goto LAB_00103e35;
  goto LAB_00103ef5;
LAB_00103df0:
  puVar11 = puVar11 + 1;
  puVar25 = puVar25 + 1;
  if (puVar1 <= puVar11) goto LAB_00103cb9;
  goto LAB_00103db9;
}



ulong ZSTD_btGetAllMatches_noDict_5
                (long param_1,long param_2,undefined8 param_3,long *param_4,ulong *param_5,
                int *param_6,uint param_7,int param_8)

{
  ulong *puVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  ulong *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  int iVar22;
  uint uVar23;
  byte *pbVar24;
  ulong *puVar25;
  byte *pbVar26;
  long in_FS_OFFSET;
  ulong local_d0;
  uint *local_b8;
  uint *local_b0;
  byte *local_70;
  int local_68;
  uint uStack_44;
  long local_40;
  
  lVar5 = *(long *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = *(uint *)(param_2 + 0x2c);
  uVar10 = (ulong)uVar18;
  local_d0 = 0;
  if ((long *)(lVar5 + uVar10) <= param_4) {
    uVar19 = (uint)((long)param_4 - lVar5);
    while (uVar18 < uVar19) {
      iVar9 = ZSTD_insertBt1(param_2,uVar10 + lVar5,param_5,(long)param_4 - lVar5 & 0xffffffff,5,0);
      uVar18 = uVar18 + iVar9;
      uVar10 = (ulong)uVar18;
    }
    *(uint *)(param_2 + 0x2c) = uVar19;
    iVar9 = *(int *)(param_2 + 0x18);
    puVar2 = (uint *)(*(long *)(param_2 + 0x70) +
                     ((ulong)(*param_4 * -0x30e4432345000000) >>
                     (0x40U - (char)*(undefined4 *)(param_2 + 0x108) & 0x3f)) * 4);
    uVar4 = *puVar2;
    lVar6 = *(long *)(param_2 + 0x80);
    uVar18 = (1 << ((char)*(undefined4 *)(param_2 + 0x104) - 1U & 0x1f)) - 1;
    uVar7 = 0;
    if (uVar18 < uVar19) {
      uVar7 = uVar19 - uVar18;
    }
    uVar23 = 1 << ((byte)*(undefined4 *)(param_2 + 0x100) & 0x1f);
    uVar13 = *(uint *)(param_2 + 0x1c);
    uVar8 = uVar19 - uVar23;
    if (uVar19 - uVar13 <= uVar23) {
      uVar8 = uVar13;
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar8 = uVar13;
    }
    uVar13 = 1;
    if (uVar8 != 0) {
      uVar13 = uVar8;
    }
    lVar14 = (ulong)((uVar18 & uVar19) * 2) * 4;
    local_b8 = (uint *)(lVar6 + lVar14);
    local_b0 = (uint *)(lVar6 + 4 + lVar14);
    iVar15 = uVar19 + 9;
    iVar22 = 1 << ((byte)*(undefined4 *)(param_2 + 0x10c) & 0x1f);
    local_70 = (byte *)(ulong)(param_8 - 1);
    if (param_7 < 0xfffffffd) {
      local_d0 = 0;
      uVar23 = 0xfff;
      if (*(uint *)(param_2 + 0x114) < 0x1000) {
        uVar23 = *(uint *)(param_2 + 0x114);
      }
      lVar14 = 0;
      do {
        uVar10 = local_d0;
        if (param_7 + (int)lVar14 == 3) {
          uVar16 = *param_6 - 1;
        }
        else {
          uVar16 = param_6[(ulong)param_7 + lVar14];
        }
        uVar20 = (ulong)uVar16;
        if (((uVar16 - 1 < uVar19 - iVar9) && (*(int *)((long)param_4 - uVar20) == (int)*param_4))
           && (uVar8 <= uVar19 - uVar16)) {
          puVar1 = (ulong *)((long)param_5 - 7);
          puVar11 = (ulong *)((long)param_4 + (4 - uVar20));
          puVar17 = (ulong *)((long)param_4 + 4);
          local_68 = (int)puVar17;
          if (puVar17 < puVar1) {
            if (*puVar11 == *(ulong *)((long)param_4 + 4)) {
              puVar17 = (ulong *)((long)param_4 + 0xc);
              puVar11 = (ulong *)((long)param_4 + (0xc - uVar20));
              if (puVar17 < puVar1) {
LAB_001045c5:
                if (*puVar11 == *puVar17) goto LAB_00104615;
                uVar16 = 0;
                for (uVar20 = *puVar11 ^ *puVar17; (uVar20 & 1) == 0;
                    uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar16 = uVar16 + 1;
                }
                uVar16 = ((int)puVar17 + (uVar16 >> 3)) - local_68;
                goto LAB_001041df;
              }
              goto LAB_00104505;
            }
            uVar16 = 0;
            for (uVar20 = *puVar11 ^ *(ulong *)((long)param_4 + 4); (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar16 = uVar16 + 1;
            }
            uVar16 = uVar16 >> 3;
          }
          else {
LAB_00104505:
            if ((puVar17 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar11 == (int)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
            if ((puVar17 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar11 == (short)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
            if (puVar17 < param_5) {
              puVar17 = (ulong *)((long)puVar17 + (ulong)((byte)*puVar11 == (byte)*puVar17));
            }
            uVar16 = (int)puVar17 - local_68;
          }
LAB_001041df:
          uVar16 = uVar16 + 4;
          pbVar21 = (byte *)(ulong)uVar16;
          if (local_70 < pbVar21) {
            local_d0 = (ulong)((int)local_d0 + 1);
            piVar3 = (int *)(param_1 + uVar10 * 8);
            *piVar3 = (int)lVar14 + 1;
            piVar3[1] = uVar16;
            if ((param_5 == (ulong *)((long)param_4 + (long)pbVar21)) ||
               (local_70 = pbVar21, uVar23 < uVar16)) goto LAB_0010441b;
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
    }
    else {
      local_d0 = 0;
    }
    *puVar2 = uVar19;
    if (uVar13 <= uVar4) {
      puVar1 = (ulong *)((long)param_5 - 7);
      pbVar21 = (byte *)0x0;
      pbVar26 = (byte *)0x0;
      do {
        pbVar24 = pbVar26;
        if (pbVar21 <= pbVar26) {
          pbVar24 = pbVar21;
        }
        puVar2 = (uint *)(lVar6 + (ulong)((uVar18 & uVar4) * 2) * 4);
        puVar17 = (ulong *)((long)param_4 + (long)pbVar24);
        puVar25 = (ulong *)(pbVar24 + (ulong)uVar4 + lVar5);
        puVar11 = puVar17;
        if (puVar17 < puVar1) {
          if (*puVar25 == *puVar17) {
            puVar11 = puVar17 + 1;
            puVar25 = puVar25 + 1;
            if (puVar11 < puVar1) {
LAB_00104489:
              if (*puVar25 == *puVar11) goto LAB_001044c0;
              uVar8 = 0;
              for (uVar10 = *puVar25 ^ *puVar11; (uVar10 & 1) == 0;
                  uVar10 = uVar10 >> 1 | 0x8000000000000000) {
                uVar8 = uVar8 + 1;
              }
              pbVar12 = (byte *)((long)puVar11 + ((ulong)(uVar8 >> 3) - (long)puVar17));
              goto LAB_001042aa;
            }
            goto LAB_00104389;
          }
          uVar8 = 0;
          for (uVar10 = *puVar25 ^ *puVar17; (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x8000000000000000) {
            uVar8 = uVar8 + 1;
          }
          pbVar12 = (byte *)(ulong)(uVar8 >> 3);
        }
        else {
LAB_00104389:
          if ((puVar11 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar25 == (int)*puVar11)) {
            puVar11 = (ulong *)((long)puVar11 + 4);
            puVar25 = (ulong *)((long)puVar25 + 4);
          }
          if ((puVar11 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar25 == (short)*puVar11)) {
            puVar11 = (ulong *)((long)puVar11 + 2);
            puVar25 = (ulong *)((long)puVar25 + 2);
          }
          if (puVar11 < param_5) {
            puVar11 = (ulong *)((long)puVar11 + (ulong)((byte)*puVar25 == (byte)*puVar11));
          }
          pbVar12 = (byte *)((long)puVar11 - (long)puVar17);
        }
LAB_001042aa:
        pbVar12 = pbVar12 + (long)pbVar24;
        if (local_70 < pbVar12) {
          if ((byte *)(ulong)(iVar15 - uVar4) < pbVar12) {
            iVar15 = uVar4 + (int)pbVar12;
          }
          piVar3 = (int *)(param_1 + local_d0 * 8);
          piVar3[1] = (int)pbVar12;
          local_d0 = (ulong)((int)local_d0 + 1);
          *piVar3 = (uVar19 + 3) - uVar4;
          if (((byte *)0x1000 < pbVar12) ||
             (local_70 = pbVar12, param_5 == (ulong *)((long)param_4 + (long)pbVar12))) break;
        }
        if (pbVar12[(ulong)uVar4 + lVar5] < (byte)*(ulong *)((long)param_4 + (long)pbVar12)) {
          *local_b8 = uVar4;
          if (uVar4 <= uVar7) {
            local_b8 = &uStack_44;
            break;
          }
          local_b8 = puVar2 + 1;
          uVar4 = puVar2[1];
          pbVar21 = pbVar12;
          pbVar12 = pbVar26;
        }
        else {
          *local_b0 = uVar4;
          if (uVar4 <= uVar7) {
            local_b0 = &uStack_44;
            break;
          }
          uVar4 = *puVar2;
          local_b0 = puVar2;
        }
        iVar22 = iVar22 + -1;
        if ((iVar22 == 0) || (pbVar26 = pbVar12, uVar4 < uVar13)) break;
      } while( true );
    }
    *local_b0 = 0;
    *local_b8 = 0;
    *(int *)(param_2 + 0x2c) = iVar15 + -8;
  }
LAB_0010441b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104615:
  puVar17 = puVar17 + 1;
  puVar11 = puVar11 + 1;
  if (puVar1 <= puVar17) goto LAB_00104505;
  goto LAB_001045c5;
LAB_001044c0:
  puVar11 = puVar11 + 1;
  puVar25 = puVar25 + 1;
  if (puVar1 <= puVar11) goto LAB_00104389;
  goto LAB_00104489;
}



ulong ZSTD_btGetAllMatches_noDict_4
                (long param_1,long param_2,undefined8 param_3,int *param_4,ulong *param_5,
                int *param_6,uint param_7,int param_8)

{
  ulong *puVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  byte *pbVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  ulong *puVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  int iVar22;
  uint uVar23;
  byte *pbVar24;
  ulong *puVar25;
  byte *pbVar26;
  long in_FS_OFFSET;
  ulong local_d0;
  uint *local_b8;
  uint *local_b0;
  byte *local_70;
  int local_68;
  uint uStack_44;
  long local_40;
  
  lVar5 = *(long *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = *(uint *)(param_2 + 0x2c);
  uVar10 = (ulong)uVar18;
  local_d0 = 0;
  if ((int *)(lVar5 + uVar10) <= param_4) {
    uVar19 = (uint)((long)param_4 - lVar5);
    while (uVar18 < uVar19) {
      iVar9 = ZSTD_insertBt1(param_2,uVar10 + lVar5,param_5,(long)param_4 - lVar5 & 0xffffffff,4,0);
      uVar18 = uVar18 + iVar9;
      uVar10 = (ulong)uVar18;
    }
    *(uint *)(param_2 + 0x2c) = uVar19;
    iVar9 = *(int *)(param_2 + 0x18);
    puVar2 = (uint *)(*(long *)(param_2 + 0x70) +
                     (ulong)((uint)(*param_4 * -0x61c8864f) >>
                            (0x20U - (char)*(undefined4 *)(param_2 + 0x108) & 0x1f)) * 4);
    uVar4 = *puVar2;
    lVar6 = *(long *)(param_2 + 0x80);
    uVar18 = (1 << ((char)*(undefined4 *)(param_2 + 0x104) - 1U & 0x1f)) - 1;
    uVar7 = 0;
    if (uVar18 < uVar19) {
      uVar7 = uVar19 - uVar18;
    }
    uVar23 = 1 << ((byte)*(undefined4 *)(param_2 + 0x100) & 0x1f);
    uVar13 = *(uint *)(param_2 + 0x1c);
    uVar8 = uVar19 - uVar23;
    if (uVar19 - uVar13 <= uVar23) {
      uVar8 = uVar13;
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar8 = uVar13;
    }
    uVar13 = 1;
    if (uVar8 != 0) {
      uVar13 = uVar8;
    }
    lVar14 = (ulong)((uVar18 & uVar19) * 2) * 4;
    local_b8 = (uint *)(lVar6 + lVar14);
    local_b0 = (uint *)(lVar6 + 4 + lVar14);
    iVar15 = uVar19 + 9;
    iVar22 = 1 << ((byte)*(undefined4 *)(param_2 + 0x10c) & 0x1f);
    local_70 = (byte *)(ulong)(param_8 - 1);
    if (param_7 < 0xfffffffd) {
      local_d0 = 0;
      uVar23 = 0xfff;
      if (*(uint *)(param_2 + 0x114) < 0x1000) {
        uVar23 = *(uint *)(param_2 + 0x114);
      }
      lVar14 = 0;
      do {
        uVar10 = local_d0;
        if (param_7 + (int)lVar14 == 3) {
          uVar16 = *param_6 - 1;
        }
        else {
          uVar16 = param_6[(ulong)param_7 + lVar14];
        }
        uVar20 = (ulong)uVar16;
        if (((uVar16 - 1 < uVar19 - iVar9) && (*(int *)((long)param_4 - uVar20) == *param_4)) &&
           (uVar8 <= uVar19 - uVar16)) {
          puVar1 = (ulong *)((long)param_5 - 7);
          puVar11 = (ulong *)((long)param_4 + (4 - uVar20));
          puVar17 = (ulong *)(param_4 + 1);
          local_68 = (int)puVar17;
          if (puVar17 < puVar1) {
            if (*puVar11 == *(ulong *)(param_4 + 1)) {
              puVar17 = (ulong *)(param_4 + 3);
              puVar11 = (ulong *)((long)param_4 + (0xc - uVar20));
              if (puVar17 < puVar1) {
LAB_00104c95:
                if (*puVar11 == *puVar17) goto LAB_00104ce5;
                uVar16 = 0;
                for (uVar20 = *puVar11 ^ *puVar17; (uVar20 & 1) == 0;
                    uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar16 = uVar16 + 1;
                }
                uVar16 = ((int)puVar17 + (uVar16 >> 3)) - local_68;
                goto LAB_001048a6;
              }
              goto LAB_00104bd5;
            }
            uVar16 = 0;
            for (uVar20 = *puVar11 ^ *(ulong *)(param_4 + 1); (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar16 = uVar16 + 1;
            }
            uVar16 = uVar16 >> 3;
          }
          else {
LAB_00104bd5:
            if ((puVar17 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar11 == (int)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar11 = (ulong *)((long)puVar11 + 4);
            }
            if ((puVar17 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar11 == (short)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 2);
              puVar11 = (ulong *)((long)puVar11 + 2);
            }
            if (puVar17 < param_5) {
              puVar17 = (ulong *)((long)puVar17 + (ulong)((byte)*puVar11 == (byte)*puVar17));
            }
            uVar16 = (int)puVar17 - local_68;
          }
LAB_001048a6:
          uVar16 = uVar16 + 4;
          pbVar21 = (byte *)(ulong)uVar16;
          if (local_70 < pbVar21) {
            local_d0 = (ulong)((int)local_d0 + 1);
            piVar3 = (int *)(param_1 + uVar10 * 8);
            *piVar3 = (int)lVar14 + 1;
            piVar3[1] = uVar16;
            if ((param_5 == (ulong *)((long)param_4 + (long)pbVar21)) ||
               (local_70 = pbVar21, uVar23 < uVar16)) goto LAB_00104aeb;
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
    }
    else {
      local_d0 = 0;
    }
    *puVar2 = uVar19;
    if (uVar13 <= uVar4) {
      puVar1 = (ulong *)((long)param_5 - 7);
      pbVar21 = (byte *)0x0;
      pbVar26 = (byte *)0x0;
      do {
        pbVar24 = pbVar26;
        if (pbVar21 <= pbVar26) {
          pbVar24 = pbVar21;
        }
        puVar2 = (uint *)(lVar6 + (ulong)((uVar18 & uVar4) * 2) * 4);
        puVar17 = (ulong *)((long)param_4 + (long)pbVar24);
        puVar25 = (ulong *)(pbVar24 + (ulong)uVar4 + lVar5);
        puVar11 = puVar17;
        if (puVar17 < puVar1) {
          if (*puVar25 == *puVar17) {
            puVar11 = puVar17 + 1;
            puVar25 = puVar25 + 1;
            if (puVar11 < puVar1) {
LAB_00104b59:
              if (*puVar25 == *puVar11) goto LAB_00104b90;
              uVar8 = 0;
              for (uVar10 = *puVar25 ^ *puVar11; (uVar10 & 1) == 0;
                  uVar10 = uVar10 >> 1 | 0x8000000000000000) {
                uVar8 = uVar8 + 1;
              }
              pbVar12 = (byte *)((long)puVar11 + ((ulong)(uVar8 >> 3) - (long)puVar17));
              goto LAB_0010497a;
            }
            goto LAB_00104a59;
          }
          uVar8 = 0;
          for (uVar10 = *puVar25 ^ *puVar17; (uVar10 & 1) == 0;
              uVar10 = uVar10 >> 1 | 0x8000000000000000) {
            uVar8 = uVar8 + 1;
          }
          pbVar12 = (byte *)(ulong)(uVar8 >> 3);
        }
        else {
LAB_00104a59:
          if ((puVar11 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar25 == (int)*puVar11)) {
            puVar11 = (ulong *)((long)puVar11 + 4);
            puVar25 = (ulong *)((long)puVar25 + 4);
          }
          if ((puVar11 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar25 == (short)*puVar11)) {
            puVar11 = (ulong *)((long)puVar11 + 2);
            puVar25 = (ulong *)((long)puVar25 + 2);
          }
          if (puVar11 < param_5) {
            puVar11 = (ulong *)((long)puVar11 + (ulong)((byte)*puVar25 == (byte)*puVar11));
          }
          pbVar12 = (byte *)((long)puVar11 - (long)puVar17);
        }
LAB_0010497a:
        pbVar12 = pbVar12 + (long)pbVar24;
        if (local_70 < pbVar12) {
          if ((byte *)(ulong)(iVar15 - uVar4) < pbVar12) {
            iVar15 = uVar4 + (int)pbVar12;
          }
          piVar3 = (int *)(param_1 + local_d0 * 8);
          piVar3[1] = (int)pbVar12;
          local_d0 = (ulong)((int)local_d0 + 1);
          *piVar3 = (uVar19 + 3) - uVar4;
          if (((byte *)0x1000 < pbVar12) ||
             (local_70 = pbVar12, param_5 == (ulong *)((long)param_4 + (long)pbVar12))) break;
        }
        if (pbVar12[(ulong)uVar4 + lVar5] < (byte)*(ulong *)((long)param_4 + (long)pbVar12)) {
          *local_b8 = uVar4;
          if (uVar4 <= uVar7) {
            local_b8 = &uStack_44;
            break;
          }
          local_b8 = puVar2 + 1;
          uVar4 = puVar2[1];
          pbVar21 = pbVar12;
          pbVar12 = pbVar26;
        }
        else {
          *local_b0 = uVar4;
          if (uVar4 <= uVar7) {
            local_b0 = &uStack_44;
            break;
          }
          uVar4 = *puVar2;
          local_b0 = puVar2;
        }
        iVar22 = iVar22 + -1;
        if ((iVar22 == 0) || (pbVar26 = pbVar12, uVar4 < uVar13)) break;
      } while( true );
    }
    *local_b0 = 0;
    *local_b8 = 0;
    *(int *)(param_2 + 0x2c) = iVar15 + -8;
  }
LAB_00104aeb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104ce5:
  puVar17 = puVar17 + 1;
  puVar11 = puVar11 + 1;
  if (puVar1 <= puVar17) goto LAB_00104bd5;
  goto LAB_00104c95;
LAB_00104b90:
  puVar11 = puVar11 + 1;
  puVar25 = puVar25 + 1;
  if (puVar1 <= puVar11) goto LAB_00104a59;
  goto LAB_00104b59;
}



uint ZSTD_btGetAllMatches_extDict_5
               (long param_1,long param_2,undefined8 param_3,long *param_4,ulong *param_5,
               int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  ulong *puVar20;
  long lVar21;
  int *piVar22;
  ulong *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  uint uVar26;
  ulong *puVar27;
  byte *pbVar28;
  uint uVar29;
  ulong *puVar30;
  uint uVar31;
  byte *pbVar32;
  byte *pbVar33;
  long in_FS_OFFSET;
  byte *local_100;
  uint local_ec;
  uint *local_d8;
  uint *local_d0;
  int local_c0;
  ulong *local_a0;
  uint uStack_44;
  long local_40;
  
  lVar7 = *(long *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar26 = *(uint *)(param_2 + 0x2c);
  uVar12 = (ulong)uVar26;
  local_ec = 0;
  if ((long *)(lVar7 + uVar12) <= param_4) {
    uVar29 = (uint)((long)param_4 - lVar7);
    while (uVar26 < uVar29) {
      iVar11 = ZSTD_insertBt1(param_2,uVar12 + lVar7,param_5,(long)param_4 - lVar7 & 0xffffffff,5,1)
      ;
      uVar26 = (int)uVar12 + iVar11;
      uVar12 = (ulong)uVar26;
    }
    lVar8 = *(long *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x2c) = uVar29;
    lVar9 = *(long *)(param_2 + 0x80);
    uVar26 = 0xfff;
    if (*(uint *)(param_2 + 0x114) < 0x1000) {
      uVar26 = *(uint *)(param_2 + 0x114);
    }
    puVar4 = (uint *)(*(long *)(param_2 + 0x70) +
                     ((ulong)(*param_4 * -0x30e4432345000000) >>
                     (0x40U - (char)*(undefined4 *)(param_2 + 0x108) & 0x3f)) * 4);
    uVar5 = *puVar4;
    uVar6 = *(uint *)(param_2 + 0x18);
    pbVar19 = (byte *)(ulong)uVar6;
    uVar1 = (1 << ((char)*(undefined4 *)(param_2 + 0x104) - 1U & 0x1f)) - 1;
    pbVar32 = pbVar19 + lVar8;
    puVar20 = (ulong *)(pbVar19 + lVar7);
    uVar16 = 0;
    if (uVar1 < uVar29) {
      uVar16 = uVar29 - uVar1;
    }
    uVar31 = 1 << ((byte)*(undefined4 *)(param_2 + 0x100) & 0x1f);
    uVar17 = *(uint *)(param_2 + 0x1c);
    uVar10 = uVar29 - uVar31;
    if (uVar29 - uVar17 <= uVar31) {
      uVar10 = uVar17;
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar10 = uVar17;
    }
    uVar17 = 1;
    if (uVar10 != 0) {
      uVar17 = uVar10;
    }
    lVar21 = (ulong)((uVar1 & uVar29) * 2) * 4;
    local_d8 = (uint *)(lVar9 + lVar21);
    local_d0 = (uint *)(lVar9 + 4 + lVar21);
    local_c0 = uVar29 + 9;
    iVar11 = 1 << ((byte)*(undefined4 *)(param_2 + 0x10c) & 0x1f);
    local_100 = (byte *)(ulong)(param_8 - 1);
    if (param_7 < 0xfffffffd) {
      local_ec = 0;
      lVar21 = 0;
      do {
        if (param_7 + (int)lVar21 == 3) {
          uVar31 = *param_6 - 1;
        }
        else {
          uVar31 = param_6[(ulong)param_7 + lVar21];
        }
        if (uVar31 - 1 < uVar29 - uVar6) {
          piVar22 = (int *)((long)param_4 - (ulong)uVar31);
          if ((*piVar22 == (int)*param_4) && (uVar10 <= uVar29 - uVar31)) {
            puVar2 = (ulong *)((long)param_5 - 7);
            puVar23 = (ulong *)((long)param_4 + 4);
            puVar15 = (ulong *)(piVar22 + 1);
            iVar18 = (int)puVar23;
            if (puVar23 < puVar2) {
              if (*puVar15 != *(ulong *)((long)param_4 + 4)) {
                uVar31 = 0;
                for (uVar12 = *puVar15 ^ *(ulong *)((long)param_4 + 4); (uVar12 & 1) == 0;
                    uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                  uVar31 = uVar31 + 1;
                }
                uVar31 = uVar31 >> 3;
                goto LAB_00104fe8;
              }
              puVar23 = (ulong *)((long)param_4 + 0xc);
              puVar15 = (ulong *)(piVar22 + 3);
              if (puVar23 < puVar2) {
LAB_00105741:
                if (*puVar15 == *puVar23) goto LAB_00105762;
                uVar31 = 0;
                for (uVar12 = *puVar15 ^ *puVar23; (uVar12 & 1) == 0;
                    uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                  uVar31 = uVar31 + 1;
                }
                uVar31 = ((int)puVar23 + (uVar31 >> 3)) - iVar18;
                goto LAB_00104fe8;
              }
            }
LAB_0010566b:
            if ((puVar23 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar15 == (int)*puVar23)) {
              puVar23 = (ulong *)((long)puVar23 + 4);
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
            if ((puVar23 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar15 == (short)*puVar23)) {
              puVar23 = (ulong *)((long)puVar23 + 2);
              puVar15 = (ulong *)((long)puVar15 + 2);
            }
            if (puVar23 < param_5) {
              puVar23 = (ulong *)((long)puVar23 + (ulong)((byte)*puVar15 == (byte)*puVar23));
            }
            uVar31 = (int)puVar23 - iVar18;
LAB_00104fe8:
            uVar31 = uVar31 + 4;
            pbVar24 = (byte *)(ulong)uVar31;
            if (local_100 < pbVar24) {
              piVar22 = (int *)(param_1 + (ulong)local_ec * 8);
              *piVar22 = (int)lVar21 + 1;
              local_ec = local_ec + 1;
              piVar22[1] = uVar31;
              if ((param_5 == (ulong *)((long)param_4 + (long)pbVar24)) ||
                 (local_100 = pbVar24, uVar26 < uVar31)) goto LAB_00105210;
            }
          }
        }
        else if (((2 < uVar31 + ((uVar6 - 1) - uVar29)) && (uVar31 - 1 < uVar29 - uVar10)) &&
                (piVar22 = (int *)((ulong)(uVar29 - uVar31) + lVar8), *piVar22 == (int)*param_4)) {
          uVar31 = ZSTD_count_2segments
                             ((int *)((long)param_4 + 4),piVar22 + 1,param_5,pbVar32,puVar20);
          goto LAB_00104fe8;
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 != 3);
    }
    else {
      local_ec = 0;
    }
    *puVar4 = uVar29;
    if (uVar17 <= uVar5) {
      puVar2 = (ulong *)((long)param_5 - 7);
      pbVar24 = (byte *)0x0;
      pbVar33 = (byte *)0x0;
      do {
        uVar12 = (ulong)uVar5;
        pbVar25 = pbVar33;
        if (pbVar24 <= pbVar33) {
          pbVar25 = pbVar24;
        }
        puVar4 = (uint *)(lVar9 + (ulong)((uVar1 & uVar5) * 2) * 4);
        puVar23 = (ulong *)((long)param_4 + (long)pbVar25);
        if (pbVar25 + uVar12 < pbVar19) {
          lVar21 = lVar8 + uVar12;
          puVar15 = (ulong *)(pbVar25 + lVar21);
          puVar27 = (ulong *)(((long)pbVar32 - lVar21) + (long)param_4);
          if (param_5 <= puVar27) {
            puVar27 = param_5;
          }
          puVar3 = (ulong *)((long)puVar27 - 7);
          puVar30 = puVar23;
          local_a0 = puVar15;
          if (puVar23 < puVar3) {
            if (*puVar15 == *puVar23) {
              puVar30 = puVar23 + 1;
              local_a0 = puVar15 + 1;
              if (puVar30 < puVar3) {
LAB_001054eb:
                if (*local_a0 == *puVar30) goto LAB_001055d0;
                uVar26 = 0;
                for (uVar13 = *local_a0 ^ *puVar30; (uVar13 & 1) == 0;
                    uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                  uVar26 = uVar26 + 1;
                }
                pbVar14 = (byte *)((long)puVar30 + ((ulong)(uVar26 >> 3) - (long)puVar23));
                goto joined_r0x001053ed;
              }
              goto LAB_00105375;
            }
            uVar26 = 0;
            for (uVar13 = *puVar15 ^ *puVar23; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            pbVar14 = (byte *)(ulong)(uVar26 >> 3);
          }
          else {
LAB_00105375:
            if ((puVar30 < (ulong *)((long)puVar27 - 3U)) && ((int)*local_a0 == (int)*puVar30)) {
              local_a0 = (ulong *)((long)local_a0 + 4);
              puVar30 = (ulong *)((long)puVar30 + 4);
            }
            if ((puVar30 < (ulong *)((long)puVar27 - 1U)) && ((short)*local_a0 == (short)*puVar30))
            {
              local_a0 = (ulong *)((long)local_a0 + 2);
              puVar30 = (ulong *)((long)puVar30 + 2);
            }
            if (puVar30 < puVar27) {
              puVar30 = (ulong *)((long)puVar30 + (ulong)((byte)*local_a0 == (byte)*puVar30));
            }
            pbVar14 = (byte *)((long)puVar30 - (long)puVar23);
          }
joined_r0x001053ed:
          if (pbVar32 == (byte *)((long)puVar15 + (long)pbVar14)) {
            puVar23 = (ulong *)((long)puVar23 + (long)pbVar14);
            puVar27 = puVar20;
            puVar15 = puVar23;
            if (puVar23 < puVar2) {
              if (*puVar20 == *puVar23) {
                puVar15 = puVar23 + 1;
                puVar27 = puVar20 + 1;
                if (puVar15 < puVar2) {
LAB_0010561e:
                  if (*puVar27 == *puVar15) goto LAB_00105710;
                  uVar26 = 0;
                  for (uVar13 = *puVar27 ^ *puVar15; (uVar13 & 1) == 0;
                      uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                    uVar26 = uVar26 + 1;
                  }
                  pbVar28 = (byte *)((long)puVar15 + ((ulong)(uVar26 >> 3) - (long)puVar23));
                  goto LAB_00105427;
                }
                goto LAB_00105563;
              }
              uVar26 = 0;
              for (uVar13 = *puVar20 ^ *puVar23; (uVar13 & 1) == 0;
                  uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                uVar26 = uVar26 + 1;
              }
              pbVar28 = (byte *)(ulong)(uVar26 >> 3);
            }
            else {
LAB_00105563:
              if ((puVar15 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar27 == (int)*puVar15)) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar27 = (ulong *)((long)puVar27 + 4);
              }
              if ((puVar15 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar27 == (short)*puVar15))
              {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar27 = (ulong *)((long)puVar27 + 2);
              }
              if (puVar15 < param_5) {
                puVar15 = (ulong *)((long)puVar15 + (ulong)((byte)*puVar27 == (byte)*puVar15));
              }
              pbVar28 = (byte *)((long)puVar15 - (long)puVar23);
            }
LAB_00105427:
            pbVar14 = pbVar14 + (long)pbVar28;
          }
          pbVar14 = pbVar14 + (long)pbVar25;
          if (pbVar19 <= pbVar14 + uVar12) {
            lVar21 = uVar12 + lVar7;
          }
        }
        else {
          puVar27 = (ulong *)(pbVar25 + lVar7 + uVar12);
          puVar15 = puVar23;
          if (puVar23 < puVar2) {
            if (*puVar27 == *puVar23) {
              puVar15 = puVar23 + 1;
              puVar27 = puVar27 + 1;
              if (puVar15 < puVar2) {
LAB_0010533e:
                if (*puVar27 == *puVar15) goto LAB_00105538;
                uVar26 = 0;
                for (uVar13 = *puVar27 ^ *puVar15; (uVar13 & 1) == 0;
                    uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                  uVar26 = uVar26 + 1;
                }
                pbVar14 = (byte *)((long)puVar15 + ((ulong)(uVar26 >> 3) - (long)puVar23));
                goto LAB_00105151;
              }
              goto LAB_00105243;
            }
            uVar26 = 0;
            for (uVar13 = *puVar27 ^ *puVar23; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            pbVar14 = (byte *)(ulong)(uVar26 >> 3);
          }
          else {
LAB_00105243:
            if ((puVar15 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar27 == (int)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 4);
              puVar27 = (ulong *)((long)puVar27 + 4);
            }
            if ((puVar15 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar27 == (short)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar27 = (ulong *)((long)puVar27 + 2);
            }
            if (puVar15 < param_5) {
              puVar15 = (ulong *)((long)puVar15 + (ulong)((byte)*puVar27 == (byte)*puVar15));
            }
            pbVar14 = (byte *)((long)puVar15 - (long)puVar23);
          }
LAB_00105151:
          pbVar14 = pbVar14 + (long)pbVar25;
          lVar21 = lVar7 + uVar12;
        }
        if (local_100 < pbVar14) {
          iVar18 = uVar5 + (int)pbVar14;
          if (pbVar14 <= (byte *)(ulong)(local_c0 - uVar5)) {
            iVar18 = local_c0;
          }
          piVar22 = (int *)(param_1 + (ulong)local_ec * 8);
          local_ec = local_ec + 1;
          piVar22[1] = (int)pbVar14;
          *piVar22 = (uVar29 + 3) - uVar5;
          local_c0 = iVar18;
          if (((byte *)0x1000 < pbVar14) ||
             (local_100 = pbVar14, param_5 == (ulong *)((long)param_4 + (long)pbVar14))) break;
        }
        if (pbVar14[lVar21] < (byte)*(ulong *)((long)param_4 + (long)pbVar14)) {
          *local_d8 = uVar5;
          if (uVar5 <= uVar16) {
            local_d8 = &uStack_44;
            break;
          }
          local_d8 = puVar4 + 1;
          uVar5 = puVar4[1];
          pbVar24 = pbVar14;
        }
        else {
          *local_d0 = uVar5;
          if (uVar5 <= uVar16) {
            local_d0 = &uStack_44;
            break;
          }
          uVar5 = *puVar4;
          pbVar33 = pbVar14;
          local_d0 = puVar4;
        }
        if ((iVar11 == 1) || (iVar11 = iVar11 + -1, uVar5 < uVar17)) break;
      } while( true );
    }
    *local_d0 = 0;
    *local_d8 = 0;
    *(int *)(param_2 + 0x2c) = local_c0 + -8;
  }
LAB_00105210:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_ec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00105762:
  puVar23 = puVar23 + 1;
  puVar15 = puVar15 + 1;
  if (puVar2 <= puVar23) goto LAB_0010566b;
  goto LAB_00105741;
LAB_001055d0:
  puVar30 = puVar30 + 1;
  local_a0 = local_a0 + 1;
  if (puVar3 <= puVar30) goto LAB_00105375;
  goto LAB_001054eb;
LAB_00105710:
  puVar15 = puVar15 + 1;
  puVar27 = puVar27 + 1;
  if (puVar2 <= puVar15) goto LAB_00105563;
  goto LAB_0010561e;
LAB_00105538:
  puVar15 = puVar15 + 1;
  puVar27 = puVar27 + 1;
  if (puVar2 <= puVar15) goto LAB_00105243;
  goto LAB_0010533e;
}



uint ZSTD_btGetAllMatches_extDict_4
               (long param_1,long param_2,undefined8 param_3,int *param_4,ulong *param_5,
               int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  ulong *puVar20;
  long lVar21;
  int *piVar22;
  ulong *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  uint uVar26;
  ulong *puVar27;
  byte *pbVar28;
  uint uVar29;
  ulong *puVar30;
  uint uVar31;
  byte *pbVar32;
  byte *pbVar33;
  long in_FS_OFFSET;
  byte *local_100;
  uint local_ec;
  uint *local_d8;
  uint *local_d0;
  int local_c0;
  ulong *local_a0;
  uint uStack_44;
  long local_40;
  
  lVar7 = *(long *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar26 = *(uint *)(param_2 + 0x2c);
  uVar12 = (ulong)uVar26;
  local_ec = 0;
  if ((int *)(lVar7 + uVar12) <= param_4) {
    uVar29 = (uint)((long)param_4 - lVar7);
    while (uVar26 < uVar29) {
      iVar11 = ZSTD_insertBt1(param_2,uVar12 + lVar7,param_5,(long)param_4 - lVar7 & 0xffffffff,4,1)
      ;
      uVar26 = (int)uVar12 + iVar11;
      uVar12 = (ulong)uVar26;
    }
    lVar8 = *(long *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x2c) = uVar29;
    lVar9 = *(long *)(param_2 + 0x80);
    uVar26 = 0xfff;
    if (*(uint *)(param_2 + 0x114) < 0x1000) {
      uVar26 = *(uint *)(param_2 + 0x114);
    }
    puVar4 = (uint *)(*(long *)(param_2 + 0x70) +
                     (ulong)((uint)(*param_4 * -0x61c8864f) >>
                            (0x20U - (char)*(undefined4 *)(param_2 + 0x108) & 0x1f)) * 4);
    uVar5 = *puVar4;
    uVar6 = *(uint *)(param_2 + 0x18);
    pbVar19 = (byte *)(ulong)uVar6;
    uVar1 = (1 << ((char)*(undefined4 *)(param_2 + 0x104) - 1U & 0x1f)) - 1;
    pbVar32 = pbVar19 + lVar8;
    puVar20 = (ulong *)(pbVar19 + lVar7);
    uVar16 = 0;
    if (uVar1 < uVar29) {
      uVar16 = uVar29 - uVar1;
    }
    uVar31 = 1 << ((byte)*(undefined4 *)(param_2 + 0x100) & 0x1f);
    uVar17 = *(uint *)(param_2 + 0x1c);
    uVar10 = uVar29 - uVar31;
    if (uVar29 - uVar17 <= uVar31) {
      uVar10 = uVar17;
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar10 = uVar17;
    }
    uVar17 = 1;
    if (uVar10 != 0) {
      uVar17 = uVar10;
    }
    lVar21 = (ulong)((uVar1 & uVar29) * 2) * 4;
    local_d8 = (uint *)(lVar9 + lVar21);
    local_d0 = (uint *)(lVar9 + 4 + lVar21);
    local_c0 = uVar29 + 9;
    iVar11 = 1 << ((byte)*(undefined4 *)(param_2 + 0x10c) & 0x1f);
    local_100 = (byte *)(ulong)(param_8 - 1);
    if (param_7 < 0xfffffffd) {
      local_ec = 0;
      lVar21 = 0;
      do {
        if (param_7 + (int)lVar21 == 3) {
          uVar31 = *param_6 - 1;
        }
        else {
          uVar31 = param_6[(ulong)param_7 + lVar21];
        }
        if (uVar31 - 1 < uVar29 - uVar6) {
          piVar22 = (int *)((long)param_4 - (ulong)uVar31);
          if ((*piVar22 == *param_4) && (uVar10 <= uVar29 - uVar31)) {
            puVar2 = (ulong *)((long)param_5 - 7);
            puVar23 = (ulong *)(param_4 + 1);
            puVar15 = (ulong *)(piVar22 + 1);
            iVar18 = (int)puVar23;
            if (puVar23 < puVar2) {
              if (*puVar15 != *(ulong *)(param_4 + 1)) {
                uVar31 = 0;
                for (uVar12 = *puVar15 ^ *(ulong *)(param_4 + 1); (uVar12 & 1) == 0;
                    uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                  uVar31 = uVar31 + 1;
                }
                uVar31 = uVar31 >> 3;
                goto LAB_00105a50;
              }
              puVar23 = (ulong *)(param_4 + 3);
              puVar15 = (ulong *)(piVar22 + 3);
              if (puVar23 < puVar2) {
LAB_001061b1:
                if (*puVar15 == *puVar23) goto LAB_001061d2;
                uVar31 = 0;
                for (uVar12 = *puVar15 ^ *puVar23; (uVar12 & 1) == 0;
                    uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                  uVar31 = uVar31 + 1;
                }
                uVar31 = ((int)puVar23 + (uVar31 >> 3)) - iVar18;
                goto LAB_00105a50;
              }
            }
LAB_001060db:
            if ((puVar23 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar15 == (int)*puVar23)) {
              puVar23 = (ulong *)((long)puVar23 + 4);
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
            if ((puVar23 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar15 == (short)*puVar23)) {
              puVar23 = (ulong *)((long)puVar23 + 2);
              puVar15 = (ulong *)((long)puVar15 + 2);
            }
            if (puVar23 < param_5) {
              puVar23 = (ulong *)((long)puVar23 + (ulong)((byte)*puVar15 == (byte)*puVar23));
            }
            uVar31 = (int)puVar23 - iVar18;
LAB_00105a50:
            uVar31 = uVar31 + 4;
            pbVar24 = (byte *)(ulong)uVar31;
            if (local_100 < pbVar24) {
              piVar22 = (int *)(param_1 + (ulong)local_ec * 8);
              *piVar22 = (int)lVar21 + 1;
              local_ec = local_ec + 1;
              piVar22[1] = uVar31;
              if ((param_5 == (ulong *)((long)param_4 + (long)pbVar24)) ||
                 (local_100 = pbVar24, uVar26 < uVar31)) goto LAB_00105c78;
            }
          }
        }
        else if (((2 < uVar31 + ((uVar6 - 1) - uVar29)) && (uVar31 - 1 < uVar29 - uVar10)) &&
                (piVar22 = (int *)((ulong)(uVar29 - uVar31) + lVar8), *piVar22 == *param_4)) {
          uVar31 = ZSTD_count_2segments(param_4 + 1,piVar22 + 1,param_5,pbVar32,puVar20);
          goto LAB_00105a50;
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 != 3);
    }
    else {
      local_ec = 0;
    }
    *puVar4 = uVar29;
    if (uVar17 <= uVar5) {
      puVar2 = (ulong *)((long)param_5 - 7);
      pbVar24 = (byte *)0x0;
      pbVar33 = (byte *)0x0;
      do {
        uVar12 = (ulong)uVar5;
        pbVar25 = pbVar33;
        if (pbVar24 <= pbVar33) {
          pbVar25 = pbVar24;
        }
        puVar4 = (uint *)(lVar9 + (ulong)((uVar1 & uVar5) * 2) * 4);
        puVar23 = (ulong *)((long)param_4 + (long)pbVar25);
        if (pbVar25 + uVar12 < pbVar19) {
          lVar21 = lVar8 + uVar12;
          puVar15 = (ulong *)(pbVar25 + lVar21);
          puVar27 = (ulong *)(((long)pbVar32 - lVar21) + (long)param_4);
          if (param_5 <= puVar27) {
            puVar27 = param_5;
          }
          puVar3 = (ulong *)((long)puVar27 - 7);
          puVar30 = puVar23;
          local_a0 = puVar15;
          if (puVar23 < puVar3) {
            if (*puVar15 == *puVar23) {
              puVar30 = puVar23 + 1;
              local_a0 = puVar15 + 1;
              if (puVar30 < puVar3) {
LAB_00105f5b:
                if (*local_a0 == *puVar30) goto LAB_00106040;
                uVar26 = 0;
                for (uVar13 = *local_a0 ^ *puVar30; (uVar13 & 1) == 0;
                    uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                  uVar26 = uVar26 + 1;
                }
                pbVar14 = (byte *)((long)puVar30 + ((ulong)(uVar26 >> 3) - (long)puVar23));
                goto joined_r0x00105e5d;
              }
              goto LAB_00105de5;
            }
            uVar26 = 0;
            for (uVar13 = *puVar15 ^ *puVar23; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            pbVar14 = (byte *)(ulong)(uVar26 >> 3);
          }
          else {
LAB_00105de5:
            if ((puVar30 < (ulong *)((long)puVar27 - 3U)) && ((int)*local_a0 == (int)*puVar30)) {
              local_a0 = (ulong *)((long)local_a0 + 4);
              puVar30 = (ulong *)((long)puVar30 + 4);
            }
            if ((puVar30 < (ulong *)((long)puVar27 - 1U)) && ((short)*local_a0 == (short)*puVar30))
            {
              local_a0 = (ulong *)((long)local_a0 + 2);
              puVar30 = (ulong *)((long)puVar30 + 2);
            }
            if (puVar30 < puVar27) {
              puVar30 = (ulong *)((long)puVar30 + (ulong)((byte)*local_a0 == (byte)*puVar30));
            }
            pbVar14 = (byte *)((long)puVar30 - (long)puVar23);
          }
joined_r0x00105e5d:
          if (pbVar32 == (byte *)((long)puVar15 + (long)pbVar14)) {
            puVar23 = (ulong *)((long)puVar23 + (long)pbVar14);
            puVar27 = puVar20;
            puVar15 = puVar23;
            if (puVar23 < puVar2) {
              if (*puVar20 == *puVar23) {
                puVar15 = puVar23 + 1;
                puVar27 = puVar20 + 1;
                if (puVar15 < puVar2) {
LAB_0010608e:
                  if (*puVar27 == *puVar15) goto LAB_00106180;
                  uVar26 = 0;
                  for (uVar13 = *puVar27 ^ *puVar15; (uVar13 & 1) == 0;
                      uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                    uVar26 = uVar26 + 1;
                  }
                  pbVar28 = (byte *)((long)puVar15 + ((ulong)(uVar26 >> 3) - (long)puVar23));
                  goto LAB_00105e97;
                }
                goto LAB_00105fd3;
              }
              uVar26 = 0;
              for (uVar13 = *puVar20 ^ *puVar23; (uVar13 & 1) == 0;
                  uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                uVar26 = uVar26 + 1;
              }
              pbVar28 = (byte *)(ulong)(uVar26 >> 3);
            }
            else {
LAB_00105fd3:
              if ((puVar15 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar27 == (int)*puVar15)) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar27 = (ulong *)((long)puVar27 + 4);
              }
              if ((puVar15 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar27 == (short)*puVar15))
              {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar27 = (ulong *)((long)puVar27 + 2);
              }
              if (puVar15 < param_5) {
                puVar15 = (ulong *)((long)puVar15 + (ulong)((byte)*puVar27 == (byte)*puVar15));
              }
              pbVar28 = (byte *)((long)puVar15 - (long)puVar23);
            }
LAB_00105e97:
            pbVar14 = pbVar14 + (long)pbVar28;
          }
          pbVar14 = pbVar14 + (long)pbVar25;
          if (pbVar19 <= pbVar14 + uVar12) {
            lVar21 = uVar12 + lVar7;
          }
        }
        else {
          puVar27 = (ulong *)(pbVar25 + lVar7 + uVar12);
          puVar15 = puVar23;
          if (puVar23 < puVar2) {
            if (*puVar27 == *puVar23) {
              puVar15 = puVar23 + 1;
              puVar27 = puVar27 + 1;
              if (puVar15 < puVar2) {
LAB_00105dae:
                if (*puVar27 == *puVar15) goto LAB_00105fa8;
                uVar26 = 0;
                for (uVar13 = *puVar27 ^ *puVar15; (uVar13 & 1) == 0;
                    uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                  uVar26 = uVar26 + 1;
                }
                pbVar14 = (byte *)((long)puVar15 + ((ulong)(uVar26 >> 3) - (long)puVar23));
                goto LAB_00105bb9;
              }
              goto LAB_00105cab;
            }
            uVar26 = 0;
            for (uVar13 = *puVar27 ^ *puVar23; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            pbVar14 = (byte *)(ulong)(uVar26 >> 3);
          }
          else {
LAB_00105cab:
            if ((puVar15 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar27 == (int)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 4);
              puVar27 = (ulong *)((long)puVar27 + 4);
            }
            if ((puVar15 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar27 == (short)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar27 = (ulong *)((long)puVar27 + 2);
            }
            if (puVar15 < param_5) {
              puVar15 = (ulong *)((long)puVar15 + (ulong)((byte)*puVar27 == (byte)*puVar15));
            }
            pbVar14 = (byte *)((long)puVar15 - (long)puVar23);
          }
LAB_00105bb9:
          pbVar14 = pbVar14 + (long)pbVar25;
          lVar21 = lVar7 + uVar12;
        }
        if (local_100 < pbVar14) {
          iVar18 = uVar5 + (int)pbVar14;
          if (pbVar14 <= (byte *)(ulong)(local_c0 - uVar5)) {
            iVar18 = local_c0;
          }
          piVar22 = (int *)(param_1 + (ulong)local_ec * 8);
          local_ec = local_ec + 1;
          piVar22[1] = (int)pbVar14;
          *piVar22 = (uVar29 + 3) - uVar5;
          local_c0 = iVar18;
          if (((byte *)0x1000 < pbVar14) ||
             (local_100 = pbVar14, param_5 == (ulong *)((long)param_4 + (long)pbVar14))) break;
        }
        if (pbVar14[lVar21] < (byte)*(ulong *)((long)param_4 + (long)pbVar14)) {
          *local_d8 = uVar5;
          if (uVar5 <= uVar16) {
            local_d8 = &uStack_44;
            break;
          }
          local_d8 = puVar4 + 1;
          uVar5 = puVar4[1];
          pbVar24 = pbVar14;
        }
        else {
          *local_d0 = uVar5;
          if (uVar5 <= uVar16) {
            local_d0 = &uStack_44;
            break;
          }
          uVar5 = *puVar4;
          pbVar33 = pbVar14;
          local_d0 = puVar4;
        }
        if ((iVar11 == 1) || (iVar11 = iVar11 + -1, uVar5 < uVar17)) break;
      } while( true );
    }
    *local_d0 = 0;
    *local_d8 = 0;
    *(int *)(param_2 + 0x2c) = local_c0 + -8;
  }
LAB_00105c78:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_ec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001061d2:
  puVar23 = puVar23 + 1;
  puVar15 = puVar15 + 1;
  if (puVar2 <= puVar23) goto LAB_001060db;
  goto LAB_001061b1;
LAB_00106040:
  puVar30 = puVar30 + 1;
  local_a0 = local_a0 + 1;
  if (puVar3 <= puVar30) goto LAB_00105de5;
  goto LAB_00105f5b;
LAB_00106180:
  puVar15 = puVar15 + 1;
  puVar27 = puVar27 + 1;
  if (puVar2 <= puVar15) goto LAB_00105fd3;
  goto LAB_0010608e;
LAB_00105fa8:
  puVar15 = puVar15 + 1;
  puVar27 = puVar27 + 1;
  if (puVar2 <= puVar15) goto LAB_00105cab;
  goto LAB_00105dae;
}



uint ZSTD_btGetAllMatches_extDict_6
               (long param_1,long param_2,undefined8 param_3,long *param_4,ulong *param_5,
               int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  byte *pbVar19;
  ulong *puVar20;
  long lVar21;
  int *piVar22;
  ulong *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  uint uVar26;
  ulong *puVar27;
  byte *pbVar28;
  uint uVar29;
  ulong *puVar30;
  uint uVar31;
  byte *pbVar32;
  byte *pbVar33;
  long in_FS_OFFSET;
  byte *local_100;
  uint local_ec;
  uint *local_d8;
  uint *local_d0;
  int local_c0;
  ulong *local_a0;
  uint uStack_44;
  long local_40;
  
  lVar7 = *(long *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar26 = *(uint *)(param_2 + 0x2c);
  uVar12 = (ulong)uVar26;
  local_ec = 0;
  if ((long *)(lVar7 + uVar12) <= param_4) {
    uVar29 = (uint)((long)param_4 - lVar7);
    while (uVar26 < uVar29) {
      iVar11 = ZSTD_insertBt1(param_2,uVar12 + lVar7,param_5,(long)param_4 - lVar7 & 0xffffffff,6,1)
      ;
      uVar26 = (int)uVar12 + iVar11;
      uVar12 = (ulong)uVar26;
    }
    lVar8 = *(long *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x2c) = uVar29;
    lVar9 = *(long *)(param_2 + 0x80);
    uVar26 = 0xfff;
    if (*(uint *)(param_2 + 0x114) < 0x1000) {
      uVar26 = *(uint *)(param_2 + 0x114);
    }
    puVar4 = (uint *)(*(long *)(param_2 + 0x70) +
                     ((ulong)(*param_4 * -0x30e4432340650000) >>
                     (0x40U - (char)*(undefined4 *)(param_2 + 0x108) & 0x3f)) * 4);
    uVar5 = *puVar4;
    uVar6 = *(uint *)(param_2 + 0x18);
    pbVar19 = (byte *)(ulong)uVar6;
    uVar1 = (1 << ((char)*(undefined4 *)(param_2 + 0x104) - 1U & 0x1f)) - 1;
    pbVar32 = pbVar19 + lVar8;
    puVar20 = (ulong *)(pbVar19 + lVar7);
    uVar16 = 0;
    if (uVar1 < uVar29) {
      uVar16 = uVar29 - uVar1;
    }
    uVar31 = 1 << ((byte)*(undefined4 *)(param_2 + 0x100) & 0x1f);
    uVar17 = *(uint *)(param_2 + 0x1c);
    uVar10 = uVar29 - uVar31;
    if (uVar29 - uVar17 <= uVar31) {
      uVar10 = uVar17;
    }
    if (*(int *)(param_2 + 0x28) != 0) {
      uVar10 = uVar17;
    }
    uVar17 = 1;
    if (uVar10 != 0) {
      uVar17 = uVar10;
    }
    lVar21 = (ulong)((uVar1 & uVar29) * 2) * 4;
    local_d8 = (uint *)(lVar9 + lVar21);
    local_d0 = (uint *)(lVar9 + 4 + lVar21);
    local_c0 = uVar29 + 9;
    iVar11 = 1 << ((byte)*(undefined4 *)(param_2 + 0x10c) & 0x1f);
    local_100 = (byte *)(ulong)(param_8 - 1);
    if (param_7 < 0xfffffffd) {
      local_ec = 0;
      lVar21 = 0;
      do {
        if (param_7 + (int)lVar21 == 3) {
          uVar31 = *param_6 - 1;
        }
        else {
          uVar31 = param_6[(ulong)param_7 + lVar21];
        }
        if (uVar31 - 1 < uVar29 - uVar6) {
          piVar22 = (int *)((long)param_4 - (ulong)uVar31);
          if ((*piVar22 == (int)*param_4) && (uVar10 <= uVar29 - uVar31)) {
            puVar2 = (ulong *)((long)param_5 - 7);
            puVar23 = (ulong *)((long)param_4 + 4);
            puVar15 = (ulong *)(piVar22 + 1);
            iVar18 = (int)puVar23;
            if (puVar23 < puVar2) {
              if (*puVar15 != *(ulong *)((long)param_4 + 4)) {
                uVar31 = 0;
                for (uVar12 = *puVar15 ^ *(ulong *)((long)param_4 + 4); (uVar12 & 1) == 0;
                    uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                  uVar31 = uVar31 + 1;
                }
                uVar31 = uVar31 >> 3;
                goto LAB_001064c8;
              }
              puVar23 = (ulong *)((long)param_4 + 0xc);
              puVar15 = (ulong *)(piVar22 + 3);
              if (puVar23 < puVar2) {
LAB_00106c21:
                if (*puVar15 == *puVar23) goto LAB_00106c42;
                uVar31 = 0;
                for (uVar12 = *puVar15 ^ *puVar23; (uVar12 & 1) == 0;
                    uVar12 = uVar12 >> 1 | 0x8000000000000000) {
                  uVar31 = uVar31 + 1;
                }
                uVar31 = ((int)puVar23 + (uVar31 >> 3)) - iVar18;
                goto LAB_001064c8;
              }
            }
LAB_00106b4b:
            if ((puVar23 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar15 == (int)*puVar23)) {
              puVar23 = (ulong *)((long)puVar23 + 4);
              puVar15 = (ulong *)((long)puVar15 + 4);
            }
            if ((puVar23 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar15 == (short)*puVar23)) {
              puVar23 = (ulong *)((long)puVar23 + 2);
              puVar15 = (ulong *)((long)puVar15 + 2);
            }
            if (puVar23 < param_5) {
              puVar23 = (ulong *)((long)puVar23 + (ulong)((byte)*puVar15 == (byte)*puVar23));
            }
            uVar31 = (int)puVar23 - iVar18;
LAB_001064c8:
            uVar31 = uVar31 + 4;
            pbVar24 = (byte *)(ulong)uVar31;
            if (local_100 < pbVar24) {
              piVar22 = (int *)(param_1 + (ulong)local_ec * 8);
              *piVar22 = (int)lVar21 + 1;
              local_ec = local_ec + 1;
              piVar22[1] = uVar31;
              if ((param_5 == (ulong *)((long)param_4 + (long)pbVar24)) ||
                 (local_100 = pbVar24, uVar26 < uVar31)) goto LAB_001066f0;
            }
          }
        }
        else if (((2 < uVar31 + ((uVar6 - 1) - uVar29)) && (uVar31 - 1 < uVar29 - uVar10)) &&
                (piVar22 = (int *)((ulong)(uVar29 - uVar31) + lVar8), *piVar22 == (int)*param_4)) {
          uVar31 = ZSTD_count_2segments
                             ((int *)((long)param_4 + 4),piVar22 + 1,param_5,pbVar32,puVar20);
          goto LAB_001064c8;
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 != 3);
    }
    else {
      local_ec = 0;
    }
    *puVar4 = uVar29;
    if (uVar17 <= uVar5) {
      puVar2 = (ulong *)((long)param_5 - 7);
      pbVar24 = (byte *)0x0;
      pbVar33 = (byte *)0x0;
      do {
        uVar12 = (ulong)uVar5;
        pbVar25 = pbVar33;
        if (pbVar24 <= pbVar33) {
          pbVar25 = pbVar24;
        }
        puVar4 = (uint *)(lVar9 + (ulong)((uVar1 & uVar5) * 2) * 4);
        puVar23 = (ulong *)((long)param_4 + (long)pbVar25);
        if (pbVar25 + uVar12 < pbVar19) {
          lVar21 = lVar8 + uVar12;
          puVar15 = (ulong *)(pbVar25 + lVar21);
          puVar27 = (ulong *)(((long)pbVar32 - lVar21) + (long)param_4);
          if (param_5 <= puVar27) {
            puVar27 = param_5;
          }
          puVar3 = (ulong *)((long)puVar27 - 7);
          puVar30 = puVar23;
          local_a0 = puVar15;
          if (puVar23 < puVar3) {
            if (*puVar15 == *puVar23) {
              puVar30 = puVar23 + 1;
              local_a0 = puVar15 + 1;
              if (puVar30 < puVar3) {
LAB_001069cb:
                if (*local_a0 == *puVar30) goto LAB_00106ab0;
                uVar26 = 0;
                for (uVar13 = *local_a0 ^ *puVar30; (uVar13 & 1) == 0;
                    uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                  uVar26 = uVar26 + 1;
                }
                pbVar14 = (byte *)((long)puVar30 + ((ulong)(uVar26 >> 3) - (long)puVar23));
                goto joined_r0x001068cd;
              }
              goto LAB_00106855;
            }
            uVar26 = 0;
            for (uVar13 = *puVar15 ^ *puVar23; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            pbVar14 = (byte *)(ulong)(uVar26 >> 3);
          }
          else {
LAB_00106855:
            if ((puVar30 < (ulong *)((long)puVar27 - 3U)) && ((int)*local_a0 == (int)*puVar30)) {
              local_a0 = (ulong *)((long)local_a0 + 4);
              puVar30 = (ulong *)((long)puVar30 + 4);
            }
            if ((puVar30 < (ulong *)((long)puVar27 - 1U)) && ((short)*local_a0 == (short)*puVar30))
            {
              local_a0 = (ulong *)((long)local_a0 + 2);
              puVar30 = (ulong *)((long)puVar30 + 2);
            }
            if (puVar30 < puVar27) {
              puVar30 = (ulong *)((long)puVar30 + (ulong)((byte)*local_a0 == (byte)*puVar30));
            }
            pbVar14 = (byte *)((long)puVar30 - (long)puVar23);
          }
joined_r0x001068cd:
          if (pbVar32 == (byte *)((long)puVar15 + (long)pbVar14)) {
            puVar23 = (ulong *)((long)puVar23 + (long)pbVar14);
            puVar27 = puVar20;
            puVar15 = puVar23;
            if (puVar23 < puVar2) {
              if (*puVar20 == *puVar23) {
                puVar15 = puVar23 + 1;
                puVar27 = puVar20 + 1;
                if (puVar15 < puVar2) {
LAB_00106afe:
                  if (*puVar27 == *puVar15) goto LAB_00106bf0;
                  uVar26 = 0;
                  for (uVar13 = *puVar27 ^ *puVar15; (uVar13 & 1) == 0;
                      uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                    uVar26 = uVar26 + 1;
                  }
                  pbVar28 = (byte *)((long)puVar15 + ((ulong)(uVar26 >> 3) - (long)puVar23));
                  goto LAB_00106907;
                }
                goto LAB_00106a43;
              }
              uVar26 = 0;
              for (uVar13 = *puVar20 ^ *puVar23; (uVar13 & 1) == 0;
                  uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                uVar26 = uVar26 + 1;
              }
              pbVar28 = (byte *)(ulong)(uVar26 >> 3);
            }
            else {
LAB_00106a43:
              if ((puVar15 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar27 == (int)*puVar15)) {
                puVar15 = (ulong *)((long)puVar15 + 4);
                puVar27 = (ulong *)((long)puVar27 + 4);
              }
              if ((puVar15 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar27 == (short)*puVar15))
              {
                puVar15 = (ulong *)((long)puVar15 + 2);
                puVar27 = (ulong *)((long)puVar27 + 2);
              }
              if (puVar15 < param_5) {
                puVar15 = (ulong *)((long)puVar15 + (ulong)((byte)*puVar27 == (byte)*puVar15));
              }
              pbVar28 = (byte *)((long)puVar15 - (long)puVar23);
            }
LAB_00106907:
            pbVar14 = pbVar14 + (long)pbVar28;
          }
          pbVar14 = pbVar14 + (long)pbVar25;
          if (pbVar19 <= pbVar14 + uVar12) {
            lVar21 = uVar12 + lVar7;
          }
        }
        else {
          puVar27 = (ulong *)(pbVar25 + lVar7 + uVar12);
          puVar15 = puVar23;
          if (puVar23 < puVar2) {
            if (*puVar27 == *puVar23) {
              puVar15 = puVar23 + 1;
              puVar27 = puVar27 + 1;
              if (puVar15 < puVar2) {
LAB_0010681e:
                if (*puVar27 == *puVar15) goto LAB_00106a18;
                uVar26 = 0;
                for (uVar13 = *puVar27 ^ *puVar15; (uVar13 & 1) == 0;
                    uVar13 = uVar13 >> 1 | 0x8000000000000000) {
                  uVar26 = uVar26 + 1;
                }
                pbVar14 = (byte *)((long)puVar15 + ((ulong)(uVar26 >> 3) - (long)puVar23));
                goto LAB_00106631;
              }
              goto LAB_00106723;
            }
            uVar26 = 0;
            for (uVar13 = *puVar27 ^ *puVar23; (uVar13 & 1) == 0;
                uVar13 = uVar13 >> 1 | 0x8000000000000000) {
              uVar26 = uVar26 + 1;
            }
            pbVar14 = (byte *)(ulong)(uVar26 >> 3);
          }
          else {
LAB_00106723:
            if ((puVar15 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar27 == (int)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 4);
              puVar27 = (ulong *)((long)puVar27 + 4);
            }
            if ((puVar15 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar27 == (short)*puVar15)) {
              puVar15 = (ulong *)((long)puVar15 + 2);
              puVar27 = (ulong *)((long)puVar27 + 2);
            }
            if (puVar15 < param_5) {
              puVar15 = (ulong *)((long)puVar15 + (ulong)((byte)*puVar27 == (byte)*puVar15));
            }
            pbVar14 = (byte *)((long)puVar15 - (long)puVar23);
          }
LAB_00106631:
          pbVar14 = pbVar14 + (long)pbVar25;
          lVar21 = lVar7 + uVar12;
        }
        if (local_100 < pbVar14) {
          iVar18 = uVar5 + (int)pbVar14;
          if (pbVar14 <= (byte *)(ulong)(local_c0 - uVar5)) {
            iVar18 = local_c0;
          }
          piVar22 = (int *)(param_1 + (ulong)local_ec * 8);
          local_ec = local_ec + 1;
          piVar22[1] = (int)pbVar14;
          *piVar22 = (uVar29 + 3) - uVar5;
          local_c0 = iVar18;
          if (((byte *)0x1000 < pbVar14) ||
             (local_100 = pbVar14, param_5 == (ulong *)((long)param_4 + (long)pbVar14))) break;
        }
        if (pbVar14[lVar21] < (byte)*(ulong *)((long)param_4 + (long)pbVar14)) {
          *local_d8 = uVar5;
          if (uVar5 <= uVar16) {
            local_d8 = &uStack_44;
            break;
          }
          local_d8 = puVar4 + 1;
          uVar5 = puVar4[1];
          pbVar24 = pbVar14;
        }
        else {
          *local_d0 = uVar5;
          if (uVar5 <= uVar16) {
            local_d0 = &uStack_44;
            break;
          }
          uVar5 = *puVar4;
          pbVar33 = pbVar14;
          local_d0 = puVar4;
        }
        if ((iVar11 == 1) || (iVar11 = iVar11 + -1, uVar5 < uVar17)) break;
      } while( true );
    }
    *local_d0 = 0;
    *local_d8 = 0;
    *(int *)(param_2 + 0x2c) = local_c0 + -8;
  }
LAB_001066f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_ec;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00106c42:
  puVar23 = puVar23 + 1;
  puVar15 = puVar15 + 1;
  if (puVar2 <= puVar23) goto LAB_00106b4b;
  goto LAB_00106c21;
LAB_00106ab0:
  puVar30 = puVar30 + 1;
  local_a0 = local_a0 + 1;
  if (puVar3 <= puVar30) goto LAB_00106855;
  goto LAB_001069cb;
LAB_00106bf0:
  puVar15 = puVar15 + 1;
  puVar27 = puVar27 + 1;
  if (puVar2 <= puVar15) goto LAB_00106a43;
  goto LAB_00106afe;
LAB_00106a18:
  puVar15 = puVar15 + 1;
  puVar27 = puVar27 + 1;
  if (puVar2 <= puVar15) goto LAB_00106723;
  goto LAB_0010681e;
}



uint ZSTD_btGetAllMatches_extDict_3
               (int *param_1,long param_2,undefined8 param_3,ulong *param_4,ulong *param_5,
               int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  byte *pbVar21;
  int iVar22;
  ulong *puVar23;
  ulong *puVar24;
  byte *pbVar25;
  byte *pbVar26;
  int *piVar27;
  uint uVar28;
  ulong *puVar29;
  byte *pbVar30;
  ulong *puVar31;
  uint uVar32;
  byte *pbVar33;
  long in_FS_OFFSET;
  byte *local_108;
  uint local_f0;
  int local_ec;
  uint *local_e8;
  uint *local_e0;
  byte *local_d8;
  ulong *local_b0;
  uint uStack_44;
  long local_40;
  
  lVar8 = *(long *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar28 = *(uint *)(param_2 + 0x2c);
  uVar19 = (ulong)uVar28;
  local_f0 = 0;
  if (param_4 < (ulong *)(lVar8 + uVar19)) goto LAB_00107168;
  uVar32 = (uint)((long)param_4 - lVar8);
  while (uVar28 < uVar32) {
    iVar11 = ZSTD_insertBt1(param_2,uVar19 + lVar8,param_5,(long)param_4 - lVar8 & 0xffffffff,3,1);
    uVar28 = (int)uVar19 + iVar11;
    uVar19 = (ulong)uVar28;
  }
  *(uint *)(param_2 + 0x2c) = uVar32;
  lVar9 = *(long *)(param_2 + 0x80);
  uVar28 = 0xfff;
  if (*(uint *)(param_2 + 0x114) < 0x1000) {
    uVar28 = *(uint *)(param_2 + 0x114);
  }
  puVar4 = (uint *)(*(long *)(param_2 + 0x70) +
                   (ulong)((uint)((int)*param_4 * -0x61c8864f) >>
                          (0x20U - (char)*(undefined4 *)(param_2 + 0x108) & 0x1f)) * 4);
  uVar6 = *puVar4;
  lVar10 = *(long *)(param_2 + 0x10);
  uVar1 = (1 << ((char)*(undefined4 *)(param_2 + 0x104) - 1U & 0x1f)) - 1;
  uVar7 = *(uint *)(param_2 + 0x18);
  pbVar16 = (byte *)(ulong)uVar7;
  pbVar5 = pbVar16 + lVar10;
  puVar17 = (ulong *)(pbVar16 + lVar8);
  uVar12 = 0;
  if (uVar1 < uVar32) {
    uVar12 = uVar32 - uVar1;
  }
  uVar13 = 1 << ((byte)*(undefined4 *)(param_2 + 0x100) & 0x1f);
  uVar14 = *(uint *)(param_2 + 0x1c);
  uVar15 = uVar32 - uVar13;
  if (uVar32 - uVar14 <= uVar13) {
    uVar15 = uVar14;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar15 = uVar14;
  }
  uVar14 = 1;
  if (uVar15 != 0) {
    uVar14 = uVar15;
  }
  lVar18 = (ulong)((uVar1 & uVar32) * 2) * 4;
  local_e8 = (uint *)(lVar9 + lVar18);
  local_e0 = (uint *)(lVar9 + 4 + lVar18);
  local_ec = uVar32 + 9;
  iVar11 = 1 << ((byte)*(undefined4 *)(param_2 + 0x10c) & 0x1f);
  local_d8 = (byte *)(ulong)(param_8 - 1);
  if (param_7 < 0xfffffffd) {
    local_f0 = 0;
    lVar18 = 0;
    do {
      if (param_7 + (int)lVar18 == 3) {
        uVar13 = *param_6 - 1;
      }
      else {
        uVar13 = param_6[(ulong)param_7 + lVar18];
      }
      uVar19 = (ulong)uVar13;
      if (uVar13 - 1 < uVar32 - uVar7) {
        if ((*(int *)((long)param_4 - uVar19) << 8 == (int)*param_4 << 8) &&
           (uVar15 <= uVar32 - uVar13)) {
          puVar23 = (ulong *)((long)param_4 + 3);
          puVar2 = (ulong *)((long)param_5 - 7);
          puVar24 = (ulong *)((long)param_4 + (3 - uVar19));
          iVar22 = (int)puVar23;
          if (puVar23 < puVar2) {
            if (*puVar24 != *(ulong *)((long)param_4 + 3)) {
              uVar13 = 0;
              for (uVar19 = *puVar24 ^ *(ulong *)((long)param_4 + 3); (uVar19 & 1) == 0;
                  uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                uVar13 = uVar13 + 1;
              }
              uVar13 = uVar13 >> 3;
              goto LAB_00106f34;
            }
            puVar23 = (ulong *)((long)param_4 + 0xb);
            puVar24 = (ulong *)((long)param_4 + (0xb - uVar19));
            if (puVar23 < puVar2) {
LAB_001077a9:
              if (*puVar24 == *puVar23) goto LAB_001077ec;
              uVar13 = 0;
              for (uVar19 = *puVar24 ^ *puVar23; (uVar19 & 1) == 0;
                  uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                uVar13 = uVar13 + 1;
              }
              uVar13 = ((int)puVar23 + (uVar13 >> 3)) - iVar22;
              goto LAB_00106f34;
            }
          }
LAB_001076d3:
          if ((puVar23 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar24 == (int)*puVar23)) {
            puVar23 = (ulong *)((long)puVar23 + 4);
            puVar24 = (ulong *)((long)puVar24 + 4);
          }
          if ((puVar23 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar24 == (short)*puVar23)) {
            puVar23 = (ulong *)((long)puVar23 + 2);
            puVar24 = (ulong *)((long)puVar24 + 2);
          }
          if (puVar23 < param_5) {
            puVar23 = (ulong *)((long)puVar23 + (ulong)((byte)*puVar24 == (byte)*puVar23));
          }
          uVar13 = (int)puVar23 - iVar22;
LAB_00106f34:
          uVar13 = uVar13 + 3;
          pbVar25 = (byte *)(ulong)uVar13;
          if (local_d8 < pbVar25) {
            uVar19 = (ulong)local_f0;
            param_1[uVar19 * 2] = (int)lVar18 + 1;
            local_f0 = local_f0 + 1;
            (param_1 + uVar19 * 2)[1] = uVar13;
            if ((param_5 == (ulong *)((long)param_4 + (long)pbVar25)) ||
               (local_d8 = pbVar25, uVar28 < uVar13)) goto LAB_00107168;
          }
        }
      }
      else if (((2 < uVar13 + ((uVar7 - 1) - uVar32)) && (uVar13 - 1 < uVar32 - uVar15)) &&
              (piVar27 = (int *)((ulong)(uVar32 - uVar13) + lVar10),
              *piVar27 << 8 == (int)*param_4 << 8)) {
        uVar13 = ZSTD_count_2segments
                           ((byte *)((long)param_4 + 3),(long)piVar27 + 3,param_5,pbVar5,puVar17);
        goto LAB_00106f34;
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != 3);
  }
  else {
    local_f0 = 0;
  }
  if (local_d8 < (byte *)0x3) {
    uVar15 = ZSTD_insertAndFindFirstIndexHash3(param_2,param_3,param_4);
    if ((uVar15 < uVar14) || (0x3ffff < uVar32 - uVar15)) goto LAB_00106fb1;
    if (uVar15 < uVar7) {
      local_108 = (byte *)ZSTD_count_2segments
                                    (param_4,lVar10 + (ulong)uVar15,param_5,pbVar5,puVar17);
    }
    else {
      puVar2 = (ulong *)((long)param_5 - 7);
      puVar24 = (ulong *)(lVar8 + (ulong)uVar15);
      puVar23 = param_4;
      if (param_4 < puVar2) {
        if (*puVar24 != *param_4) {
          uVar7 = 0;
          for (uVar19 = *puVar24 ^ *param_4; (uVar19 & 1) == 0;
              uVar19 = uVar19 >> 1 | 0x8000000000000000) {
            uVar7 = uVar7 + 1;
          }
          local_108 = (byte *)(ulong)(uVar7 >> 3);
          goto LAB_00107662;
        }
        puVar23 = param_4 + 1;
        puVar24 = puVar24 + 1;
        if (puVar23 < puVar2) {
LAB_00107845:
          if (*puVar24 == *puVar23) goto LAB_0010786d;
          uVar7 = 0;
          for (uVar19 = *puVar24 ^ *puVar23; (uVar19 & 1) == 0;
              uVar19 = uVar19 >> 1 | 0x8000000000000000) {
            uVar7 = uVar7 + 1;
          }
          local_108 = (byte *)((long)puVar23 + ((ulong)(uVar7 >> 3) - (long)param_4));
          goto LAB_00107662;
        }
      }
LAB_00107617:
      if ((puVar23 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar24 == (int)*puVar23)) {
        puVar23 = (ulong *)((long)puVar23 + 4);
        puVar24 = (ulong *)((long)puVar24 + 4);
      }
      if ((puVar23 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar24 == (short)*puVar23)) {
        puVar23 = (ulong *)((long)puVar23 + 2);
        puVar24 = (ulong *)((long)puVar24 + 2);
      }
      if (puVar23 < param_5) {
        puVar23 = (ulong *)((long)puVar23 + (ulong)((byte)*puVar24 == (byte)*puVar23));
      }
      local_108 = (byte *)((long)puVar23 - (long)param_4);
    }
LAB_00107662:
    if (local_108 < (byte *)0x3) goto LAB_00106fb1;
    *param_1 = (uVar32 - uVar15) + 3;
    param_1[1] = (int)local_108;
    if ((param_5 == (ulong *)((long)param_4 + (long)local_108)) ||
       (local_f0 = 1, (byte *)(ulong)uVar28 < local_108)) {
      local_f0 = 1;
      *(uint *)(param_2 + 0x2c) = uVar32 + 1;
      goto LAB_00107168;
    }
  }
  else {
LAB_00106fb1:
    local_108 = local_d8;
  }
  *puVar4 = uVar32;
  if (uVar14 <= uVar6) {
    puVar2 = (ulong *)((long)param_5 - 7);
    pbVar25 = (byte *)0x0;
    pbVar33 = (byte *)0x0;
    do {
      uVar19 = (ulong)uVar6;
      pbVar26 = pbVar33;
      if (pbVar25 <= pbVar33) {
        pbVar26 = pbVar25;
      }
      puVar4 = (uint *)(lVar9 + (ulong)((uVar1 & uVar6) * 2) * 4);
      puVar23 = (ulong *)((long)param_4 + (long)pbVar26);
      if (pbVar26 + uVar19 < pbVar16) {
        lVar18 = lVar10 + uVar19;
        puVar24 = (ulong *)(pbVar26 + lVar18);
        puVar29 = (ulong *)(((long)pbVar5 - lVar18) + (long)param_4);
        if (param_5 <= puVar29) {
          puVar29 = param_5;
        }
        puVar3 = (ulong *)((long)puVar29 - 7);
        puVar31 = puVar23;
        local_b0 = puVar24;
        if (puVar23 < puVar3) {
          if (*puVar24 == *puVar23) {
            puVar31 = puVar23 + 1;
            local_b0 = puVar24 + 1;
            if (puVar31 < puVar3) {
LAB_0010744b:
              if (*local_b0 == *puVar31) goto LAB_00107530;
              uVar28 = 0;
              for (uVar20 = *local_b0 ^ *puVar31; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar28 = uVar28 + 1;
              }
              pbVar21 = (byte *)((long)puVar31 + ((ulong)(uVar28 >> 3) - (long)puVar23));
              goto joined_r0x0010734d;
            }
            goto LAB_001072d5;
          }
          uVar28 = 0;
          for (uVar20 = *puVar24 ^ *puVar23; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar28 = uVar28 + 1;
          }
          pbVar21 = (byte *)(ulong)(uVar28 >> 3);
        }
        else {
LAB_001072d5:
          if ((puVar31 < (ulong *)((long)puVar29 - 3U)) && ((int)*local_b0 == (int)*puVar31)) {
            local_b0 = (ulong *)((long)local_b0 + 4);
            puVar31 = (ulong *)((long)puVar31 + 4);
          }
          if ((puVar31 < (ulong *)((long)puVar29 - 1U)) && ((short)*local_b0 == (short)*puVar31)) {
            local_b0 = (ulong *)((long)local_b0 + 2);
            puVar31 = (ulong *)((long)puVar31 + 2);
          }
          if (puVar31 < puVar29) {
            puVar31 = (ulong *)((long)puVar31 + (ulong)((byte)*local_b0 == (byte)*puVar31));
          }
          pbVar21 = (byte *)((long)puVar31 - (long)puVar23);
        }
joined_r0x0010734d:
        if (pbVar5 == (byte *)((long)puVar24 + (long)pbVar21)) {
          puVar23 = (ulong *)((long)puVar23 + (long)pbVar21);
          puVar29 = puVar17;
          puVar24 = puVar23;
          if (puVar23 < puVar2) {
            if (*puVar17 == *puVar23) {
              puVar24 = puVar23 + 1;
              puVar29 = puVar17 + 1;
              if (puVar24 < puVar2) {
LAB_0010757e:
                if (*puVar29 == *puVar24) goto LAB_00107778;
                uVar28 = 0;
                for (uVar20 = *puVar29 ^ *puVar24; (uVar20 & 1) == 0;
                    uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                  uVar28 = uVar28 + 1;
                }
                pbVar30 = (byte *)((long)puVar24 + ((ulong)(uVar28 >> 3) - (long)puVar23));
                goto LAB_00107387;
              }
              goto LAB_001074db;
            }
            uVar28 = 0;
            for (uVar20 = *puVar17 ^ *puVar23; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar28 = uVar28 + 1;
            }
            pbVar30 = (byte *)(ulong)(uVar28 >> 3);
          }
          else {
LAB_001074db:
            if ((puVar24 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar29 == (int)*puVar24)) {
              puVar24 = (ulong *)((long)puVar24 + 4);
              puVar29 = (ulong *)((long)puVar29 + 4);
            }
            if ((puVar24 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar29 == (short)*puVar24)) {
              puVar24 = (ulong *)((long)puVar24 + 2);
              puVar29 = (ulong *)((long)puVar29 + 2);
            }
            if (puVar24 < param_5) {
              puVar24 = (ulong *)((long)puVar24 + (ulong)((byte)*puVar29 == (byte)*puVar24));
            }
            pbVar30 = (byte *)((long)puVar24 - (long)puVar23);
          }
LAB_00107387:
          pbVar21 = pbVar21 + (long)pbVar30;
        }
        pbVar21 = pbVar21 + (long)pbVar26;
        if (pbVar16 <= pbVar21 + uVar19) {
          lVar18 = uVar19 + lVar8;
        }
      }
      else {
        puVar29 = (ulong *)(pbVar26 + lVar8 + uVar19);
        puVar24 = puVar23;
        if (puVar23 < puVar2) {
          if (*puVar29 == *puVar23) {
            puVar24 = puVar23 + 1;
            puVar29 = puVar29 + 1;
            if (puVar24 < puVar2) {
LAB_0010729e:
              if (*puVar29 == *puVar24) goto LAB_00107498;
              uVar28 = 0;
              for (uVar20 = *puVar29 ^ *puVar24; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar28 = uVar28 + 1;
              }
              pbVar21 = (byte *)((long)puVar24 + ((ulong)(uVar28 >> 3) - (long)puVar23));
              goto LAB_001070b1;
            }
            goto LAB_0010719b;
          }
          uVar28 = 0;
          for (uVar20 = *puVar29 ^ *puVar23; (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar28 = uVar28 + 1;
          }
          pbVar21 = (byte *)(ulong)(uVar28 >> 3);
        }
        else {
LAB_0010719b:
          if ((puVar24 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar29 == (int)*puVar24)) {
            puVar24 = (ulong *)((long)puVar24 + 4);
            puVar29 = (ulong *)((long)puVar29 + 4);
          }
          if ((puVar24 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar29 == (short)*puVar24)) {
            puVar24 = (ulong *)((long)puVar24 + 2);
            puVar29 = (ulong *)((long)puVar29 + 2);
          }
          if (puVar24 < param_5) {
            puVar24 = (ulong *)((long)puVar24 + (ulong)((byte)*puVar29 == (byte)*puVar24));
          }
          pbVar21 = (byte *)((long)puVar24 - (long)puVar23);
        }
LAB_001070b1:
        pbVar21 = pbVar21 + (long)pbVar26;
        lVar18 = lVar8 + uVar19;
      }
      if (local_108 < pbVar21) {
        iVar22 = uVar6 + (int)pbVar21;
        if (pbVar21 <= (byte *)(ulong)(local_ec - uVar6)) {
          iVar22 = local_ec;
        }
        uVar19 = (ulong)local_f0;
        local_f0 = local_f0 + 1;
        (param_1 + uVar19 * 2)[1] = (int)pbVar21;
        param_1[uVar19 * 2] = (uVar32 + 3) - uVar6;
        local_ec = iVar22;
        if (((byte *)0x1000 < pbVar21) ||
           (local_108 = pbVar21, param_5 == (ulong *)((long)param_4 + (long)pbVar21))) break;
      }
      if (pbVar21[lVar18] < (byte)*(ulong *)((long)param_4 + (long)pbVar21)) {
        *local_e8 = uVar6;
        if (uVar6 <= uVar12) {
          local_e8 = &uStack_44;
          break;
        }
        local_e8 = puVar4 + 1;
        uVar6 = puVar4[1];
        pbVar25 = pbVar21;
      }
      else {
        *local_e0 = uVar6;
        if (uVar6 <= uVar12) {
          local_e0 = &uStack_44;
          break;
        }
        uVar6 = *puVar4;
        pbVar33 = pbVar21;
        local_e0 = puVar4;
      }
      if ((iVar11 == 1) || (iVar11 = iVar11 + -1, uVar6 < uVar14)) break;
    } while( true );
  }
  *local_e0 = 0;
  *local_e8 = 0;
  *(int *)(param_2 + 0x2c) = local_ec + -8;
LAB_00107168:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_f0;
LAB_001077ec:
  puVar23 = puVar23 + 1;
  puVar24 = puVar24 + 1;
  if (puVar2 <= puVar23) goto LAB_001076d3;
  goto LAB_001077a9;
LAB_0010786d:
  puVar23 = puVar23 + 1;
  puVar24 = puVar24 + 1;
  if (puVar2 <= puVar23) goto LAB_00107617;
  goto LAB_00107845;
LAB_00107530:
  puVar31 = puVar31 + 1;
  local_b0 = local_b0 + 1;
  if (puVar3 <= puVar31) goto LAB_001072d5;
  goto LAB_0010744b;
LAB_00107778:
  puVar24 = puVar24 + 1;
  puVar29 = puVar29 + 1;
  if (puVar2 <= puVar24) goto LAB_001074db;
  goto LAB_0010757e;
LAB_00107498:
  puVar24 = puVar24 + 1;
  puVar29 = puVar29 + 1;
  if (puVar2 <= puVar24) goto LAB_0010719b;
  goto LAB_0010729e;
}



ulong ZSTD_btGetAllMatches_dictMatchState_5
                (long param_1,long param_2,undefined8 param_3,long *param_4,ulong *param_5,
                int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  ulong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  byte *pbVar22;
  ulong *puVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  uint uVar27;
  byte *pbVar28;
  ulong *puVar29;
  ulong uVar30;
  byte *pbVar31;
  uint uVar32;
  int iVar33;
  byte *pbVar34;
  ulong *puVar35;
  byte *pbVar36;
  long lVar37;
  ulong *puVar38;
  ulong *puVar39;
  uint uVar40;
  long lVar41;
  long in_FS_OFFSET;
  ulong local_130;
  uint *local_118;
  uint *local_110;
  byte *local_f0;
  int local_c4;
  uint uStack_44;
  long local_40;
  
  lVar7 = *(long *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar32 = *(uint *)(param_2 + 0x2c);
  uVar20 = (ulong)uVar32;
  local_130 = 0;
  if (param_4 < (long *)(lVar7 + uVar20)) goto LAB_00107e24;
  uVar40 = (uint)((long)param_4 - lVar7);
  while (uVar32 < uVar40) {
    iVar13 = ZSTD_insertBt1(param_2,uVar20 + lVar7,param_5,(long)param_4 - lVar7 & 0xffffffff,5,0);
    uVar32 = (int)uVar20 + iVar13;
    uVar20 = (ulong)uVar32;
  }
  *(uint *)(param_2 + 0x2c) = uVar40;
  lVar8 = *(long *)(param_2 + 0x80);
  uVar32 = 0xfff;
  if (*(uint *)(param_2 + 0x114) < 0x1000) {
    uVar32 = *(uint *)(param_2 + 0x114);
  }
  lVar37 = *param_4;
  puVar3 = (uint *)(*(long *)(param_2 + 0x70) +
                   ((ulong)(lVar37 * -0x30e4432345000000) >>
                   (0x40U - (char)*(undefined4 *)(param_2 + 0x108) & 0x3f)) * 4);
  uVar27 = *puVar3;
  uVar1 = (1 << ((char)*(undefined4 *)(param_2 + 0x104) - 1U & 0x1f)) - 1;
  uVar4 = *(uint *)(param_2 + 0x18);
  puVar18 = (ulong *)((ulong)uVar4 + lVar7);
  uVar14 = 0;
  if (uVar1 < uVar40) {
    uVar14 = uVar40 - uVar1;
  }
  uVar15 = 1 << ((byte)*(undefined4 *)(param_2 + 0x100) & 0x1f);
  uVar16 = *(uint *)(param_2 + 0x1c);
  puVar9 = *(undefined8 **)(param_2 + 0xf8);
  uVar11 = uVar40 - uVar15;
  if (uVar40 - uVar16 <= uVar15) {
    uVar11 = uVar16;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar11 = uVar16;
  }
  uVar16 = 1;
  if (uVar11 != 0) {
    uVar16 = uVar11;
  }
  lVar19 = (ulong)((uVar1 & uVar40) * 2) * 4;
  local_118 = (uint *)(lVar8 + lVar19);
  local_110 = (uint *)(lVar8 + 4 + lVar19);
  iVar13 = uVar40 + 9;
  local_c4 = 1 << ((byte)*(undefined4 *)(param_2 + 0x10c) & 0x1f);
  pbVar10 = (byte *)*puVar9;
  lVar19 = puVar9[1];
  iVar33 = (int)((long)pbVar10 - lVar19);
  uVar24 = uVar11 - iVar33;
  uVar5 = *(uint *)((long)puVar9 + 0x1c);
  uVar6 = *(undefined4 *)(puVar9 + 0x21);
  uVar15 = (1 << ((char)*(undefined4 *)((long)puVar9 + 0x104) - 1U & 0x1f)) - 1;
  uVar12 = iVar33 - uVar15;
  if (iVar33 - uVar5 <= uVar15) {
    uVar12 = uVar5;
  }
  local_f0 = (byte *)(ulong)(param_8 - 1);
  if (param_7 < 0xfffffffd) {
    lVar41 = 0;
    local_130 = 0;
    do {
      if (param_7 + (int)lVar41 == 3) {
        uVar17 = *param_6 - 1;
      }
      else {
        uVar17 = param_6[(ulong)param_7 + lVar41];
      }
      if (uVar17 - 1 < uVar40 - uVar4) {
        piVar26 = (int *)((long)param_4 - (ulong)uVar17);
        if ((*piVar26 == (int)*param_4) && (uVar11 <= uVar40 - uVar17)) {
          puVar21 = (ulong *)((long)param_5 - 7);
          puVar23 = (ulong *)((long)param_4 + 4);
          puVar38 = (ulong *)(piVar26 + 1);
          iVar25 = (int)puVar23;
          if (puVar23 < puVar21) {
            if (*puVar38 != *(ulong *)((long)param_4 + 4)) {
              uVar17 = 0;
              for (uVar20 = *puVar38 ^ *(ulong *)((long)param_4 + 4); (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar17 = uVar17 + 1;
              }
              uVar17 = uVar17 >> 3;
              goto LAB_00107bc8;
            }
            puVar23 = (ulong *)((long)param_4 + 0xc);
            puVar38 = (ulong *)(piVar26 + 3);
            if (puVar23 < puVar21) {
LAB_001084f9:
              if (*puVar38 == *puVar23) goto LAB_0010851a;
              uVar17 = 0;
              for (uVar20 = *puVar38 ^ *puVar23; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar17 = uVar17 + 1;
              }
              uVar17 = ((int)puVar23 + (uVar17 >> 3)) - iVar25;
              goto LAB_00107bc8;
            }
          }
LAB_00108393:
          if ((puVar23 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar38 == (int)*puVar23)) {
            puVar23 = (ulong *)((long)puVar23 + 4);
            puVar38 = (ulong *)((long)puVar38 + 4);
          }
          if ((puVar23 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar38 == (short)*puVar23)) {
            puVar23 = (ulong *)((long)puVar23 + 2);
            puVar38 = (ulong *)((long)puVar38 + 2);
          }
          if (puVar23 < param_5) {
            puVar23 = (ulong *)((long)puVar23 + (ulong)((byte)*puVar38 == (byte)*puVar23));
          }
          uVar17 = (int)puVar23 - iVar25;
LAB_00107bc8:
          uVar17 = uVar17 + 4;
          pbVar28 = (byte *)(ulong)uVar17;
          if (local_f0 < pbVar28) {
            piVar26 = (int *)(param_1 + local_130 * 8);
            *piVar26 = (int)lVar41 + 1;
            piVar26[1] = uVar17;
            local_130 = (ulong)((int)local_130 + 1);
            if ((param_5 == (ulong *)((long)param_4 + (long)pbVar28)) ||
               (local_f0 = pbVar28, uVar32 < uVar17)) goto LAB_00107e24;
          }
        }
      }
      else if (((uVar17 - 1 < (iVar33 + (uVar40 - uVar5)) - uVar11) &&
               (2 < uVar17 + ((uVar4 - 1) - uVar40))) &&
              (piVar26 = (int *)(lVar19 + ((ulong)(uVar40 - uVar17) - (ulong)uVar24)),
              *piVar26 == (int)*param_4)) {
        uVar17 = ZSTD_count_2segments
                           ((int *)((long)param_4 + 4),piVar26 + 1,param_5,pbVar10,puVar18);
        goto LAB_00107bc8;
      }
      lVar41 = lVar41 + 1;
    } while (lVar41 != 3);
  }
  else {
    local_130 = 0;
  }
  *puVar3 = uVar40;
  if (uVar27 < uVar16) {
    local_118[0] = 0;
    local_118[1] = 0;
LAB_00107ec8:
    uVar32 = *(uint *)(puVar9[0xe] +
                      ((ulong)(lVar37 * -0x30e4432345000000) >> (0x40U - (char)uVar6 & 0x3f)) * 4);
    lVar8 = puVar9[0x10];
    local_118._0_4_ = iVar13;
    if (uVar5 < uVar32) {
      pbVar34 = (byte *)0x0;
      pbVar28 = (byte *)0x0;
      puVar23 = (ulong *)((long)param_5 - 7);
      do {
        uVar20 = (ulong)uVar32;
        pbVar36 = pbVar28;
        if (pbVar34 <= pbVar28) {
          pbVar36 = pbVar34;
        }
        puVar3 = (uint *)(lVar8 + (ulong)((uVar15 & uVar32) * 2) * 4);
        puVar38 = (ulong *)((long)param_4 + (long)pbVar36);
        puVar21 = (ulong *)(pbVar36 + lVar19 + uVar20);
        puVar29 = (ulong *)(((long)pbVar10 - (long)puVar21) + (long)puVar38);
        if (param_5 <= puVar29) {
          puVar29 = param_5;
        }
        puVar2 = (ulong *)((long)puVar29 - 7);
        puVar35 = puVar21;
        puVar39 = puVar38;
        if (puVar38 < puVar2) {
          if (*puVar21 == *puVar38) {
            puVar39 = puVar38 + 1;
            puVar35 = puVar21 + 1;
            if (puVar39 < puVar2) {
LAB_00108296:
              if (*puVar35 == *puVar39) goto LAB_00108318;
              uVar1 = 0;
              for (uVar30 = *puVar35 ^ *puVar39; (uVar30 & 1) == 0;
                  uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                uVar1 = uVar1 + 1;
              }
              pbVar22 = (byte *)((long)puVar39 + ((ulong)(uVar1 >> 3) - (long)puVar38));
              goto joined_r0x00108112;
            }
            goto LAB_001080b7;
          }
          uVar1 = 0;
          for (uVar30 = *puVar21 ^ *puVar38; (uVar30 & 1) == 0;
              uVar30 = uVar30 >> 1 | 0x8000000000000000) {
            uVar1 = uVar1 + 1;
          }
          pbVar22 = (byte *)(ulong)(uVar1 >> 3);
        }
        else {
LAB_001080b7:
          if ((puVar39 < (ulong *)((long)puVar29 - 3U)) && ((int)*puVar35 == (int)*puVar39)) {
            puVar39 = (ulong *)((long)puVar39 + 4);
            puVar35 = (ulong *)((long)puVar35 + 4);
          }
          if ((puVar39 < (ulong *)((long)puVar29 - 1U)) && ((short)*puVar35 == (short)*puVar39)) {
            puVar39 = (ulong *)((long)puVar39 + 2);
            puVar35 = (ulong *)((long)puVar35 + 2);
          }
          if (puVar39 < puVar29) {
            puVar39 = (ulong *)((long)puVar39 + (ulong)((byte)*puVar35 == (byte)*puVar39));
          }
          pbVar22 = (byte *)((long)puVar39 - (long)puVar38);
        }
joined_r0x00108112:
        if (pbVar10 == (byte *)((long)puVar21 + (long)pbVar22)) {
          puVar38 = (ulong *)((long)puVar38 + (long)pbVar22);
          puVar21 = puVar38;
          puVar29 = puVar18;
          if (puVar38 < puVar23) {
            if (*puVar18 == *puVar38) {
              puVar21 = puVar38 + 1;
              puVar29 = puVar18 + 1;
              if (puVar21 < puVar23) {
LAB_00108356:
                if (*puVar29 == *puVar21) goto LAB_001084c8;
                uVar1 = 0;
                for (uVar30 = *puVar29 ^ *puVar21; (uVar30 & 1) == 0;
                    uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                  uVar1 = uVar1 + 1;
                }
                pbVar31 = (byte *)((long)puVar21 + ((ulong)(uVar1 >> 3) - (long)puVar38));
                goto LAB_0010814b;
              }
              goto LAB_001082cb;
            }
            uVar1 = 0;
            for (uVar30 = *puVar18 ^ *puVar38; (uVar30 & 1) == 0;
                uVar30 = uVar30 >> 1 | 0x8000000000000000) {
              uVar1 = uVar1 + 1;
            }
            pbVar31 = (byte *)(ulong)(uVar1 >> 3);
          }
          else {
LAB_001082cb:
            if ((puVar21 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar29 == (int)*puVar21)) {
              puVar21 = (ulong *)((long)puVar21 + 4);
              puVar29 = (ulong *)((long)puVar29 + 4);
            }
            if ((puVar21 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar29 == (short)*puVar21)) {
              puVar21 = (ulong *)((long)puVar21 + 2);
              puVar29 = (ulong *)((long)puVar29 + 2);
            }
            if (puVar21 < param_5) {
              puVar21 = (ulong *)((long)puVar21 + (ulong)((byte)*puVar29 == (byte)*puVar21));
            }
            pbVar31 = (byte *)((long)puVar21 - (long)puVar38);
          }
LAB_0010814b:
          pbVar22 = pbVar22 + (long)pbVar31;
        }
        pbVar22 = pbVar22 + (long)pbVar36;
        lVar37 = lVar19 + uVar20;
        if ((byte *)((long)pbVar10 - lVar19 & 0xffffffffU) <= pbVar22 + uVar20) {
          lVar37 = uVar20 + uVar24 + lVar7;
        }
        if (local_f0 < pbVar22) {
          iVar13 = uVar24 + uVar32;
          iVar33 = iVar13 + (int)pbVar22;
          if (pbVar22 <= (byte *)(ulong)(uint)((int)local_118 - iVar13)) {
            iVar33 = (int)local_118;
          }
          local_118._0_4_ = iVar33;
          piVar26 = (int *)(param_1 + local_130 * 8);
          piVar26[1] = (int)pbVar22;
          local_130 = (ulong)((int)local_130 + 1);
          *piVar26 = (uVar40 + 3) - iVar13;
          if ((param_5 == (ulong *)((long)param_4 + (long)pbVar22)) ||
             (local_f0 = pbVar22, (byte *)0x1000 < pbVar22)) break;
        }
        if (uVar32 <= uVar12) break;
        if (pbVar22[lVar37] < *(byte *)((long)param_4 + (long)pbVar22)) {
          uVar32 = puVar3[1];
          pbVar34 = pbVar22;
        }
        else {
          uVar32 = *puVar3;
          pbVar28 = pbVar22;
        }
        local_c4 = local_c4 + -1;
        if ((local_c4 == 0) || (uVar32 <= uVar5)) break;
      } while( true );
    }
  }
  else {
    pbVar28 = (byte *)0x0;
    pbVar34 = (byte *)0x0;
    puVar23 = (ulong *)((long)param_5 - 7);
    iVar33 = local_c4;
    do {
      local_c4 = iVar33;
      pbVar36 = pbVar28;
      if (pbVar34 <= pbVar28) {
        pbVar36 = pbVar34;
      }
      puVar3 = (uint *)(lVar8 + (ulong)((uVar1 & uVar27) * 2) * 4);
      puVar29 = (ulong *)((long)param_4 + (long)pbVar36);
      puVar38 = (ulong *)(pbVar36 + (ulong)uVar27 + lVar7);
      puVar21 = puVar29;
      if (puVar29 < puVar23) {
        if (*puVar38 == *puVar29) {
          puVar21 = puVar29 + 1;
          puVar38 = puVar38 + 1;
          if (puVar21 < puVar23) {
LAB_00108169:
            if (*puVar38 == *puVar21) goto LAB_001081a0;
            uVar32 = 0;
            for (uVar20 = *puVar38 ^ *puVar21; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar32 = uVar32 + 1;
            }
            pbVar22 = (byte *)((long)puVar21 + ((ulong)(uVar32 >> 3) - (long)puVar29));
            goto LAB_00107cca;
          }
          goto LAB_00107da7;
        }
        uVar32 = 0;
        for (uVar20 = *puVar38 ^ *puVar29; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar32 = uVar32 + 1;
        }
        pbVar22 = (byte *)(ulong)(uVar32 >> 3);
      }
      else {
LAB_00107da7:
        if ((puVar21 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar38 == (int)*puVar21)) {
          puVar21 = (ulong *)((long)puVar21 + 4);
          puVar38 = (ulong *)((long)puVar38 + 4);
        }
        if ((puVar21 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar38 == (short)*puVar21)) {
          puVar21 = (ulong *)((long)puVar21 + 2);
          puVar38 = (ulong *)((long)puVar38 + 2);
        }
        if (puVar21 < param_5) {
          puVar21 = (ulong *)((long)puVar21 + (ulong)((byte)*puVar38 == (byte)*puVar21));
        }
        pbVar22 = (byte *)((long)puVar21 - (long)puVar29);
      }
LAB_00107cca:
      pbVar22 = pbVar22 + (long)pbVar36;
      if (local_f0 < pbVar22) {
        if ((byte *)(ulong)(iVar13 - uVar27) < pbVar22) {
          iVar13 = uVar27 + (int)pbVar22;
        }
        piVar26 = (int *)(param_1 + local_130 * 8);
        piVar26[1] = (int)pbVar22;
        local_130 = (ulong)((int)local_130 + 1);
        *piVar26 = (uVar40 + 3) - uVar27;
        if (((byte *)0x1000 < pbVar22) ||
           (local_f0 = pbVar22, param_5 == (ulong *)((long)param_4 + (long)pbVar22))) {
          *local_110 = 0;
          *local_118 = 0;
          *(int *)(param_2 + 0x2c) = iVar13 + -8;
          goto LAB_00107e24;
        }
      }
      if (pbVar22[(ulong)uVar27 + lVar7] < (byte)*(ulong *)((long)param_4 + (long)pbVar22)) {
        *local_118 = uVar27;
        if (uVar27 <= uVar14) {
          local_118 = &uStack_44;
LAB_0010846b:
          *local_110 = 0;
          *local_118 = 0;
          goto LAB_00107ec8;
        }
        local_118 = puVar3 + 1;
        uVar27 = puVar3[1];
        pbVar34 = pbVar22;
      }
      else {
        *local_110 = uVar27;
        if (uVar27 <= uVar14) {
          local_110 = &uStack_44;
          goto LAB_0010846b;
        }
        uVar27 = *puVar3;
        local_110 = puVar3;
        pbVar28 = pbVar22;
      }
    } while ((local_c4 != 1) && (iVar33 = local_c4 + -1, uVar16 <= uVar27));
    local_c4 = local_c4 + -1;
    *local_110 = 0;
    *local_118 = 0;
    local_118._0_4_ = iVar13;
    if (local_c4 != 0) goto LAB_00107ec8;
  }
  *(int *)(param_2 + 0x2c) = (int)local_118 + -8;
LAB_00107e24:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010851a:
  puVar23 = puVar23 + 1;
  puVar38 = puVar38 + 1;
  if (puVar21 <= puVar23) goto LAB_00108393;
  goto LAB_001084f9;
LAB_001081a0:
  puVar21 = puVar21 + 1;
  puVar38 = puVar38 + 1;
  if (puVar23 <= puVar21) goto LAB_00107da7;
  goto LAB_00108169;
LAB_00108318:
  puVar39 = puVar39 + 1;
  puVar35 = puVar35 + 1;
  if (puVar2 <= puVar39) goto LAB_001080b7;
  goto LAB_00108296;
LAB_001084c8:
  puVar21 = puVar21 + 1;
  puVar29 = puVar29 + 1;
  if (puVar23 <= puVar21) goto LAB_001082cb;
  goto LAB_00108356;
}



ulong ZSTD_btGetAllMatches_dictMatchState_6
                (long param_1,long param_2,undefined8 param_3,long *param_4,ulong *param_5,
                int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  ulong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  byte *pbVar22;
  ulong *puVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  uint uVar27;
  byte *pbVar28;
  ulong *puVar29;
  ulong uVar30;
  byte *pbVar31;
  uint uVar32;
  int iVar33;
  byte *pbVar34;
  ulong *puVar35;
  byte *pbVar36;
  long lVar37;
  ulong *puVar38;
  ulong *puVar39;
  uint uVar40;
  long lVar41;
  long in_FS_OFFSET;
  ulong local_130;
  uint *local_118;
  uint *local_110;
  byte *local_f0;
  int local_c4;
  uint uStack_44;
  long local_40;
  
  lVar7 = *(long *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar32 = *(uint *)(param_2 + 0x2c);
  uVar20 = (ulong)uVar32;
  local_130 = 0;
  if (param_4 < (long *)(lVar7 + uVar20)) goto LAB_00108ae4;
  uVar40 = (uint)((long)param_4 - lVar7);
  while (uVar32 < uVar40) {
    iVar13 = ZSTD_insertBt1(param_2,uVar20 + lVar7,param_5,(long)param_4 - lVar7 & 0xffffffff,6,0);
    uVar32 = (int)uVar20 + iVar13;
    uVar20 = (ulong)uVar32;
  }
  *(uint *)(param_2 + 0x2c) = uVar40;
  lVar8 = *(long *)(param_2 + 0x80);
  uVar32 = 0xfff;
  if (*(uint *)(param_2 + 0x114) < 0x1000) {
    uVar32 = *(uint *)(param_2 + 0x114);
  }
  lVar37 = *param_4;
  puVar3 = (uint *)(*(long *)(param_2 + 0x70) +
                   ((ulong)(lVar37 * -0x30e4432340650000) >>
                   (0x40U - (char)*(undefined4 *)(param_2 + 0x108) & 0x3f)) * 4);
  uVar27 = *puVar3;
  uVar1 = (1 << ((char)*(undefined4 *)(param_2 + 0x104) - 1U & 0x1f)) - 1;
  uVar4 = *(uint *)(param_2 + 0x18);
  puVar18 = (ulong *)((ulong)uVar4 + lVar7);
  uVar14 = 0;
  if (uVar1 < uVar40) {
    uVar14 = uVar40 - uVar1;
  }
  uVar15 = 1 << ((byte)*(undefined4 *)(param_2 + 0x100) & 0x1f);
  uVar16 = *(uint *)(param_2 + 0x1c);
  puVar9 = *(undefined8 **)(param_2 + 0xf8);
  uVar11 = uVar40 - uVar15;
  if (uVar40 - uVar16 <= uVar15) {
    uVar11 = uVar16;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar11 = uVar16;
  }
  uVar16 = 1;
  if (uVar11 != 0) {
    uVar16 = uVar11;
  }
  lVar19 = (ulong)((uVar1 & uVar40) * 2) * 4;
  local_118 = (uint *)(lVar8 + lVar19);
  local_110 = (uint *)(lVar8 + 4 + lVar19);
  iVar13 = uVar40 + 9;
  local_c4 = 1 << ((byte)*(undefined4 *)(param_2 + 0x10c) & 0x1f);
  pbVar10 = (byte *)*puVar9;
  lVar19 = puVar9[1];
  iVar33 = (int)((long)pbVar10 - lVar19);
  uVar24 = uVar11 - iVar33;
  uVar5 = *(uint *)((long)puVar9 + 0x1c);
  uVar6 = *(undefined4 *)(puVar9 + 0x21);
  uVar15 = (1 << ((char)*(undefined4 *)((long)puVar9 + 0x104) - 1U & 0x1f)) - 1;
  uVar12 = iVar33 - uVar15;
  if (iVar33 - uVar5 <= uVar15) {
    uVar12 = uVar5;
  }
  local_f0 = (byte *)(ulong)(param_8 - 1);
  if (param_7 < 0xfffffffd) {
    lVar41 = 0;
    local_130 = 0;
    do {
      if (param_7 + (int)lVar41 == 3) {
        uVar17 = *param_6 - 1;
      }
      else {
        uVar17 = param_6[(ulong)param_7 + lVar41];
      }
      if (uVar17 - 1 < uVar40 - uVar4) {
        piVar26 = (int *)((long)param_4 - (ulong)uVar17);
        if ((*piVar26 == (int)*param_4) && (uVar11 <= uVar40 - uVar17)) {
          puVar21 = (ulong *)((long)param_5 - 7);
          puVar23 = (ulong *)((long)param_4 + 4);
          puVar38 = (ulong *)(piVar26 + 1);
          iVar25 = (int)puVar23;
          if (puVar23 < puVar21) {
            if (*puVar38 != *(ulong *)((long)param_4 + 4)) {
              uVar17 = 0;
              for (uVar20 = *puVar38 ^ *(ulong *)((long)param_4 + 4); (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar17 = uVar17 + 1;
              }
              uVar17 = uVar17 >> 3;
              goto LAB_00108888;
            }
            puVar23 = (ulong *)((long)param_4 + 0xc);
            puVar38 = (ulong *)(piVar26 + 3);
            if (puVar23 < puVar21) {
LAB_001091b9:
              if (*puVar38 == *puVar23) goto LAB_001091da;
              uVar17 = 0;
              for (uVar20 = *puVar38 ^ *puVar23; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar17 = uVar17 + 1;
              }
              uVar17 = ((int)puVar23 + (uVar17 >> 3)) - iVar25;
              goto LAB_00108888;
            }
          }
LAB_00109053:
          if ((puVar23 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar38 == (int)*puVar23)) {
            puVar23 = (ulong *)((long)puVar23 + 4);
            puVar38 = (ulong *)((long)puVar38 + 4);
          }
          if ((puVar23 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar38 == (short)*puVar23)) {
            puVar23 = (ulong *)((long)puVar23 + 2);
            puVar38 = (ulong *)((long)puVar38 + 2);
          }
          if (puVar23 < param_5) {
            puVar23 = (ulong *)((long)puVar23 + (ulong)((byte)*puVar38 == (byte)*puVar23));
          }
          uVar17 = (int)puVar23 - iVar25;
LAB_00108888:
          uVar17 = uVar17 + 4;
          pbVar28 = (byte *)(ulong)uVar17;
          if (local_f0 < pbVar28) {
            piVar26 = (int *)(param_1 + local_130 * 8);
            *piVar26 = (int)lVar41 + 1;
            piVar26[1] = uVar17;
            local_130 = (ulong)((int)local_130 + 1);
            if ((param_5 == (ulong *)((long)param_4 + (long)pbVar28)) ||
               (local_f0 = pbVar28, uVar32 < uVar17)) goto LAB_00108ae4;
          }
        }
      }
      else if (((uVar17 - 1 < (iVar33 + (uVar40 - uVar5)) - uVar11) &&
               (2 < uVar17 + ((uVar4 - 1) - uVar40))) &&
              (piVar26 = (int *)(lVar19 + ((ulong)(uVar40 - uVar17) - (ulong)uVar24)),
              *piVar26 == (int)*param_4)) {
        uVar17 = ZSTD_count_2segments
                           ((int *)((long)param_4 + 4),piVar26 + 1,param_5,pbVar10,puVar18);
        goto LAB_00108888;
      }
      lVar41 = lVar41 + 1;
    } while (lVar41 != 3);
  }
  else {
    local_130 = 0;
  }
  *puVar3 = uVar40;
  if (uVar27 < uVar16) {
    local_118[0] = 0;
    local_118[1] = 0;
LAB_00108b88:
    uVar32 = *(uint *)(puVar9[0xe] +
                      ((ulong)(lVar37 * -0x30e4432340650000) >> (0x40U - (char)uVar6 & 0x3f)) * 4);
    lVar8 = puVar9[0x10];
    local_118._0_4_ = iVar13;
    if (uVar5 < uVar32) {
      pbVar34 = (byte *)0x0;
      pbVar28 = (byte *)0x0;
      puVar23 = (ulong *)((long)param_5 - 7);
      do {
        uVar20 = (ulong)uVar32;
        pbVar36 = pbVar28;
        if (pbVar34 <= pbVar28) {
          pbVar36 = pbVar34;
        }
        puVar3 = (uint *)(lVar8 + (ulong)((uVar15 & uVar32) * 2) * 4);
        puVar38 = (ulong *)((long)param_4 + (long)pbVar36);
        puVar21 = (ulong *)(pbVar36 + lVar19 + uVar20);
        puVar29 = (ulong *)(((long)pbVar10 - (long)puVar21) + (long)puVar38);
        if (param_5 <= puVar29) {
          puVar29 = param_5;
        }
        puVar2 = (ulong *)((long)puVar29 - 7);
        puVar35 = puVar21;
        puVar39 = puVar38;
        if (puVar38 < puVar2) {
          if (*puVar21 == *puVar38) {
            puVar39 = puVar38 + 1;
            puVar35 = puVar21 + 1;
            if (puVar39 < puVar2) {
LAB_00108f56:
              if (*puVar35 == *puVar39) goto LAB_00108fd8;
              uVar1 = 0;
              for (uVar30 = *puVar35 ^ *puVar39; (uVar30 & 1) == 0;
                  uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                uVar1 = uVar1 + 1;
              }
              pbVar22 = (byte *)((long)puVar39 + ((ulong)(uVar1 >> 3) - (long)puVar38));
              goto joined_r0x00108dd2;
            }
            goto LAB_00108d77;
          }
          uVar1 = 0;
          for (uVar30 = *puVar21 ^ *puVar38; (uVar30 & 1) == 0;
              uVar30 = uVar30 >> 1 | 0x8000000000000000) {
            uVar1 = uVar1 + 1;
          }
          pbVar22 = (byte *)(ulong)(uVar1 >> 3);
        }
        else {
LAB_00108d77:
          if ((puVar39 < (ulong *)((long)puVar29 - 3U)) && ((int)*puVar35 == (int)*puVar39)) {
            puVar39 = (ulong *)((long)puVar39 + 4);
            puVar35 = (ulong *)((long)puVar35 + 4);
          }
          if ((puVar39 < (ulong *)((long)puVar29 - 1U)) && ((short)*puVar35 == (short)*puVar39)) {
            puVar39 = (ulong *)((long)puVar39 + 2);
            puVar35 = (ulong *)((long)puVar35 + 2);
          }
          if (puVar39 < puVar29) {
            puVar39 = (ulong *)((long)puVar39 + (ulong)((byte)*puVar35 == (byte)*puVar39));
          }
          pbVar22 = (byte *)((long)puVar39 - (long)puVar38);
        }
joined_r0x00108dd2:
        if (pbVar10 == (byte *)((long)puVar21 + (long)pbVar22)) {
          puVar38 = (ulong *)((long)puVar38 + (long)pbVar22);
          puVar21 = puVar38;
          puVar29 = puVar18;
          if (puVar38 < puVar23) {
            if (*puVar18 == *puVar38) {
              puVar21 = puVar38 + 1;
              puVar29 = puVar18 + 1;
              if (puVar21 < puVar23) {
LAB_00109016:
                if (*puVar29 == *puVar21) goto LAB_00109188;
                uVar1 = 0;
                for (uVar30 = *puVar29 ^ *puVar21; (uVar30 & 1) == 0;
                    uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                  uVar1 = uVar1 + 1;
                }
                pbVar31 = (byte *)((long)puVar21 + ((ulong)(uVar1 >> 3) - (long)puVar38));
                goto LAB_00108e0b;
              }
              goto LAB_00108f8b;
            }
            uVar1 = 0;
            for (uVar30 = *puVar18 ^ *puVar38; (uVar30 & 1) == 0;
                uVar30 = uVar30 >> 1 | 0x8000000000000000) {
              uVar1 = uVar1 + 1;
            }
            pbVar31 = (byte *)(ulong)(uVar1 >> 3);
          }
          else {
LAB_00108f8b:
            if ((puVar21 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar29 == (int)*puVar21)) {
              puVar21 = (ulong *)((long)puVar21 + 4);
              puVar29 = (ulong *)((long)puVar29 + 4);
            }
            if ((puVar21 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar29 == (short)*puVar21)) {
              puVar21 = (ulong *)((long)puVar21 + 2);
              puVar29 = (ulong *)((long)puVar29 + 2);
            }
            if (puVar21 < param_5) {
              puVar21 = (ulong *)((long)puVar21 + (ulong)((byte)*puVar29 == (byte)*puVar21));
            }
            pbVar31 = (byte *)((long)puVar21 - (long)puVar38);
          }
LAB_00108e0b:
          pbVar22 = pbVar22 + (long)pbVar31;
        }
        pbVar22 = pbVar22 + (long)pbVar36;
        lVar37 = lVar19 + uVar20;
        if ((byte *)((long)pbVar10 - lVar19 & 0xffffffffU) <= pbVar22 + uVar20) {
          lVar37 = uVar20 + uVar24 + lVar7;
        }
        if (local_f0 < pbVar22) {
          iVar13 = uVar24 + uVar32;
          iVar33 = iVar13 + (int)pbVar22;
          if (pbVar22 <= (byte *)(ulong)(uint)((int)local_118 - iVar13)) {
            iVar33 = (int)local_118;
          }
          local_118._0_4_ = iVar33;
          piVar26 = (int *)(param_1 + local_130 * 8);
          piVar26[1] = (int)pbVar22;
          local_130 = (ulong)((int)local_130 + 1);
          *piVar26 = (uVar40 + 3) - iVar13;
          if ((param_5 == (ulong *)((long)param_4 + (long)pbVar22)) ||
             (local_f0 = pbVar22, (byte *)0x1000 < pbVar22)) break;
        }
        if (uVar32 <= uVar12) break;
        if (pbVar22[lVar37] < *(byte *)((long)param_4 + (long)pbVar22)) {
          uVar32 = puVar3[1];
          pbVar34 = pbVar22;
        }
        else {
          uVar32 = *puVar3;
          pbVar28 = pbVar22;
        }
        local_c4 = local_c4 + -1;
        if ((local_c4 == 0) || (uVar32 <= uVar5)) break;
      } while( true );
    }
  }
  else {
    pbVar28 = (byte *)0x0;
    pbVar34 = (byte *)0x0;
    puVar23 = (ulong *)((long)param_5 - 7);
    iVar33 = local_c4;
    do {
      local_c4 = iVar33;
      pbVar36 = pbVar28;
      if (pbVar34 <= pbVar28) {
        pbVar36 = pbVar34;
      }
      puVar3 = (uint *)(lVar8 + (ulong)((uVar1 & uVar27) * 2) * 4);
      puVar29 = (ulong *)((long)param_4 + (long)pbVar36);
      puVar38 = (ulong *)(pbVar36 + (ulong)uVar27 + lVar7);
      puVar21 = puVar29;
      if (puVar29 < puVar23) {
        if (*puVar38 == *puVar29) {
          puVar21 = puVar29 + 1;
          puVar38 = puVar38 + 1;
          if (puVar21 < puVar23) {
LAB_00108e29:
            if (*puVar38 == *puVar21) goto LAB_00108e60;
            uVar32 = 0;
            for (uVar20 = *puVar38 ^ *puVar21; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar32 = uVar32 + 1;
            }
            pbVar22 = (byte *)((long)puVar21 + ((ulong)(uVar32 >> 3) - (long)puVar29));
            goto LAB_0010898a;
          }
          goto LAB_00108a67;
        }
        uVar32 = 0;
        for (uVar20 = *puVar38 ^ *puVar29; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar32 = uVar32 + 1;
        }
        pbVar22 = (byte *)(ulong)(uVar32 >> 3);
      }
      else {
LAB_00108a67:
        if ((puVar21 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar38 == (int)*puVar21)) {
          puVar21 = (ulong *)((long)puVar21 + 4);
          puVar38 = (ulong *)((long)puVar38 + 4);
        }
        if ((puVar21 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar38 == (short)*puVar21)) {
          puVar21 = (ulong *)((long)puVar21 + 2);
          puVar38 = (ulong *)((long)puVar38 + 2);
        }
        if (puVar21 < param_5) {
          puVar21 = (ulong *)((long)puVar21 + (ulong)((byte)*puVar38 == (byte)*puVar21));
        }
        pbVar22 = (byte *)((long)puVar21 - (long)puVar29);
      }
LAB_0010898a:
      pbVar22 = pbVar22 + (long)pbVar36;
      if (local_f0 < pbVar22) {
        if ((byte *)(ulong)(iVar13 - uVar27) < pbVar22) {
          iVar13 = uVar27 + (int)pbVar22;
        }
        piVar26 = (int *)(param_1 + local_130 * 8);
        piVar26[1] = (int)pbVar22;
        local_130 = (ulong)((int)local_130 + 1);
        *piVar26 = (uVar40 + 3) - uVar27;
        if (((byte *)0x1000 < pbVar22) ||
           (local_f0 = pbVar22, param_5 == (ulong *)((long)param_4 + (long)pbVar22))) {
          *local_110 = 0;
          *local_118 = 0;
          *(int *)(param_2 + 0x2c) = iVar13 + -8;
          goto LAB_00108ae4;
        }
      }
      if (pbVar22[(ulong)uVar27 + lVar7] < (byte)*(ulong *)((long)param_4 + (long)pbVar22)) {
        *local_118 = uVar27;
        if (uVar27 <= uVar14) {
          local_118 = &uStack_44;
LAB_0010912b:
          *local_110 = 0;
          *local_118 = 0;
          goto LAB_00108b88;
        }
        local_118 = puVar3 + 1;
        uVar27 = puVar3[1];
        pbVar34 = pbVar22;
      }
      else {
        *local_110 = uVar27;
        if (uVar27 <= uVar14) {
          local_110 = &uStack_44;
          goto LAB_0010912b;
        }
        uVar27 = *puVar3;
        local_110 = puVar3;
        pbVar28 = pbVar22;
      }
    } while ((local_c4 != 1) && (iVar33 = local_c4 + -1, uVar16 <= uVar27));
    local_c4 = local_c4 + -1;
    *local_110 = 0;
    *local_118 = 0;
    local_118._0_4_ = iVar13;
    if (local_c4 != 0) goto LAB_00108b88;
  }
  *(int *)(param_2 + 0x2c) = (int)local_118 + -8;
LAB_00108ae4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001091da:
  puVar23 = puVar23 + 1;
  puVar38 = puVar38 + 1;
  if (puVar21 <= puVar23) goto LAB_00109053;
  goto LAB_001091b9;
LAB_00108e60:
  puVar21 = puVar21 + 1;
  puVar38 = puVar38 + 1;
  if (puVar23 <= puVar21) goto LAB_00108a67;
  goto LAB_00108e29;
LAB_00108fd8:
  puVar39 = puVar39 + 1;
  puVar35 = puVar35 + 1;
  if (puVar2 <= puVar39) goto LAB_00108d77;
  goto LAB_00108f56;
LAB_00109188:
  puVar21 = puVar21 + 1;
  puVar29 = puVar29 + 1;
  if (puVar23 <= puVar21) goto LAB_00108f8b;
  goto LAB_00109016;
}



ulong ZSTD_btGetAllMatches_dictMatchState_4
                (long param_1,long param_2,undefined8 param_3,int *param_4,ulong *param_5,
                int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  byte *pbVar22;
  ulong *puVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  uint uVar27;
  byte *pbVar28;
  ulong *puVar29;
  ulong uVar30;
  byte *pbVar31;
  uint uVar32;
  int iVar33;
  byte *pbVar34;
  ulong *puVar35;
  byte *pbVar36;
  ulong *puVar37;
  ulong *puVar38;
  uint uVar39;
  long lVar40;
  long in_FS_OFFSET;
  ulong local_128;
  uint *local_110;
  uint *local_108;
  byte *local_e8;
  int local_bc;
  uint uStack_44;
  long local_40;
  
  lVar7 = *(long *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar32 = *(uint *)(param_2 + 0x2c);
  uVar20 = (ulong)uVar32;
  local_128 = 0;
  if (param_4 < (int *)(lVar7 + uVar20)) goto LAB_0010978c;
  uVar39 = (uint)((long)param_4 - lVar7);
  while (uVar32 < uVar39) {
    iVar13 = ZSTD_insertBt1(param_2,uVar20 + lVar7,param_5,(long)param_4 - lVar7 & 0xffffffff,4,0);
    uVar32 = (int)uVar20 + iVar13;
    uVar20 = (ulong)uVar32;
  }
  *(uint *)(param_2 + 0x2c) = uVar39;
  lVar8 = *(long *)(param_2 + 0x80);
  uVar32 = 0xfff;
  if (*(uint *)(param_2 + 0x114) < 0x1000) {
    uVar32 = *(uint *)(param_2 + 0x114);
  }
  puVar4 = (uint *)(*(long *)(param_2 + 0x70) +
                   (ulong)((uint)(*param_4 * -0x61c8864f) >>
                          (0x20U - (char)*(undefined4 *)(param_2 + 0x108) & 0x1f)) * 4);
  uVar27 = *puVar4;
  uVar1 = (1 << ((char)*(undefined4 *)(param_2 + 0x104) - 1U & 0x1f)) - 1;
  uVar5 = *(uint *)(param_2 + 0x18);
  puVar18 = (ulong *)((ulong)uVar5 + lVar7);
  uVar14 = 0;
  if (uVar1 < uVar39) {
    uVar14 = uVar39 - uVar1;
  }
  uVar15 = 1 << ((byte)*(undefined4 *)(param_2 + 0x100) & 0x1f);
  uVar16 = *(uint *)(param_2 + 0x1c);
  puVar9 = *(undefined8 **)(param_2 + 0xf8);
  uVar11 = uVar39 - uVar15;
  if (uVar39 - uVar16 <= uVar15) {
    uVar11 = uVar16;
  }
  uVar15 = *(uint *)((long)puVar9 + 0x1c);
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar11 = uVar16;
  }
  uVar16 = 1;
  if (uVar11 != 0) {
    uVar16 = uVar11;
  }
  lVar19 = (ulong)((uVar1 & uVar39) * 2) * 4;
  local_110 = (uint *)(lVar8 + lVar19);
  local_108 = (uint *)(lVar8 + 4 + lVar19);
  iVar13 = uVar39 + 9;
  local_bc = 1 << ((byte)*(undefined4 *)(param_2 + 0x10c) & 0x1f);
  pbVar10 = (byte *)*puVar9;
  lVar19 = puVar9[1];
  iVar33 = (int)((long)pbVar10 - lVar19);
  uVar24 = uVar11 - iVar33;
  uVar6 = *(undefined4 *)(puVar9 + 0x21);
  uVar2 = (1 << ((char)*(undefined4 *)((long)puVar9 + 0x104) - 1U & 0x1f)) - 1;
  uVar12 = iVar33 - uVar2;
  if (iVar33 - uVar15 <= uVar2) {
    uVar12 = uVar15;
  }
  local_e8 = (byte *)(ulong)(param_8 - 1);
  if (param_7 < 0xfffffffd) {
    lVar40 = 0;
    local_128 = 0;
    do {
      if (param_7 + (int)lVar40 == 3) {
        uVar17 = *param_6 - 1;
      }
      else {
        uVar17 = param_6[(ulong)param_7 + lVar40];
      }
      if (uVar17 - 1 < uVar39 - uVar5) {
        piVar26 = (int *)((long)param_4 - (ulong)uVar17);
        if ((*piVar26 == *param_4) && (uVar11 <= uVar39 - uVar17)) {
          puVar21 = (ulong *)((long)param_5 - 7);
          puVar23 = (ulong *)(param_4 + 1);
          puVar37 = (ulong *)(piVar26 + 1);
          iVar25 = (int)puVar23;
          if (puVar23 < puVar21) {
            if (*puVar37 != *(ulong *)(param_4 + 1)) {
              uVar17 = 0;
              for (uVar20 = *puVar37 ^ *(ulong *)(param_4 + 1); (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar17 = uVar17 + 1;
              }
              uVar17 = uVar17 >> 3;
              goto LAB_00109533;
            }
            puVar23 = (ulong *)(param_4 + 3);
            puVar37 = (ulong *)(piVar26 + 3);
            if (puVar23 < puVar21) {
LAB_00109e59:
              if (*puVar37 == *puVar23) goto LAB_00109e7a;
              uVar17 = 0;
              for (uVar20 = *puVar37 ^ *puVar23; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar17 = uVar17 + 1;
              }
              uVar17 = ((int)puVar23 + (uVar17 >> 3)) - iVar25;
              goto LAB_00109533;
            }
          }
LAB_00109cf3:
          if ((puVar23 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar37 == (int)*puVar23)) {
            puVar23 = (ulong *)((long)puVar23 + 4);
            puVar37 = (ulong *)((long)puVar37 + 4);
          }
          if ((puVar23 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar37 == (short)*puVar23)) {
            puVar23 = (ulong *)((long)puVar23 + 2);
            puVar37 = (ulong *)((long)puVar37 + 2);
          }
          if (puVar23 < param_5) {
            puVar23 = (ulong *)((long)puVar23 + (ulong)((byte)*puVar37 == (byte)*puVar23));
          }
          uVar17 = (int)puVar23 - iVar25;
LAB_00109533:
          uVar17 = uVar17 + 4;
          pbVar28 = (byte *)(ulong)uVar17;
          if (local_e8 < pbVar28) {
            piVar26 = (int *)(param_1 + local_128 * 8);
            *piVar26 = (int)lVar40 + 1;
            piVar26[1] = uVar17;
            local_128 = (ulong)((int)local_128 + 1);
            if ((param_5 == (ulong *)((long)param_4 + (long)pbVar28)) ||
               (local_e8 = pbVar28, uVar32 < uVar17)) goto LAB_0010978c;
          }
        }
      }
      else if (((uVar17 - 1 < (iVar33 + (uVar39 - uVar15)) - uVar11) &&
               (2 < uVar17 + ((uVar5 - 1) - uVar39))) &&
              (piVar26 = (int *)(lVar19 + ((ulong)(uVar39 - uVar17) - (ulong)uVar24)),
              *piVar26 == *param_4)) {
        uVar17 = ZSTD_count_2segments(param_4 + 1,piVar26 + 1,param_5,pbVar10,puVar18);
        goto LAB_00109533;
      }
      lVar40 = lVar40 + 1;
    } while (lVar40 != 3);
  }
  else {
    local_128 = 0;
  }
  *puVar4 = uVar39;
  if (uVar27 < uVar16) {
    local_110[0] = 0;
    local_110[1] = 0;
LAB_00109830:
    uVar32 = *(uint *)(puVar9[0xe] +
                      (ulong)((uint)(*param_4 * -0x61c8864f) >> (0x20U - (char)uVar6 & 0x1f)) * 4);
    lVar8 = puVar9[0x10];
    local_110._0_4_ = iVar13;
    if (uVar15 < uVar32) {
      pbVar34 = (byte *)0x0;
      pbVar28 = (byte *)0x0;
      puVar23 = (ulong *)((long)param_5 - 7);
      do {
        uVar20 = (ulong)uVar32;
        pbVar36 = pbVar28;
        if (pbVar34 <= pbVar28) {
          pbVar36 = pbVar34;
        }
        puVar4 = (uint *)(lVar8 + (ulong)((uVar2 & uVar32) * 2) * 4);
        puVar37 = (ulong *)((long)param_4 + (long)pbVar36);
        puVar21 = (ulong *)(pbVar36 + lVar19 + uVar20);
        puVar29 = (ulong *)(((long)pbVar10 - (long)puVar21) + (long)puVar37);
        if (param_5 <= puVar29) {
          puVar29 = param_5;
        }
        puVar3 = (ulong *)((long)puVar29 - 7);
        puVar35 = puVar21;
        puVar38 = puVar37;
        if (puVar37 < puVar3) {
          if (*puVar21 == *puVar37) {
            puVar38 = puVar37 + 1;
            puVar35 = puVar21 + 1;
            if (puVar38 < puVar3) {
LAB_00109bf6:
              if (*puVar35 == *puVar38) goto LAB_00109c78;
              uVar1 = 0;
              for (uVar30 = *puVar35 ^ *puVar38; (uVar30 & 1) == 0;
                  uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                uVar1 = uVar1 + 1;
              }
              pbVar22 = (byte *)((long)puVar38 + ((ulong)(uVar1 >> 3) - (long)puVar37));
              goto joined_r0x00109a7a;
            }
            goto LAB_00109a1a;
          }
          uVar1 = 0;
          for (uVar30 = *puVar21 ^ *puVar37; (uVar30 & 1) == 0;
              uVar30 = uVar30 >> 1 | 0x8000000000000000) {
            uVar1 = uVar1 + 1;
          }
          pbVar22 = (byte *)(ulong)(uVar1 >> 3);
        }
        else {
LAB_00109a1a:
          if ((puVar38 < (ulong *)((long)puVar29 - 3U)) && ((int)*puVar35 == (int)*puVar38)) {
            puVar38 = (ulong *)((long)puVar38 + 4);
            puVar35 = (ulong *)((long)puVar35 + 4);
          }
          if ((puVar38 < (ulong *)((long)puVar29 - 1U)) && ((short)*puVar35 == (short)*puVar38)) {
            puVar38 = (ulong *)((long)puVar38 + 2);
            puVar35 = (ulong *)((long)puVar35 + 2);
          }
          if (puVar38 < puVar29) {
            puVar38 = (ulong *)((long)puVar38 + (ulong)((byte)*puVar35 == (byte)*puVar38));
          }
          pbVar22 = (byte *)((long)puVar38 - (long)puVar37);
        }
joined_r0x00109a7a:
        if (pbVar10 == (byte *)((long)puVar21 + (long)pbVar22)) {
          puVar37 = (ulong *)((long)puVar37 + (long)pbVar22);
          puVar21 = puVar37;
          puVar29 = puVar18;
          if (puVar37 < puVar23) {
            if (*puVar18 == *puVar37) {
              puVar21 = puVar37 + 1;
              puVar29 = puVar18 + 1;
              if (puVar21 < puVar23) {
LAB_00109cb6:
                if (*puVar29 == *puVar21) goto LAB_00109e28;
                uVar1 = 0;
                for (uVar30 = *puVar29 ^ *puVar21; (uVar30 & 1) == 0;
                    uVar30 = uVar30 >> 1 | 0x8000000000000000) {
                  uVar1 = uVar1 + 1;
                }
                pbVar31 = (byte *)((long)puVar21 + ((ulong)(uVar1 >> 3) - (long)puVar37));
                goto LAB_00109ab3;
              }
              goto LAB_00109c2b;
            }
            uVar1 = 0;
            for (uVar30 = *puVar18 ^ *puVar37; (uVar30 & 1) == 0;
                uVar30 = uVar30 >> 1 | 0x8000000000000000) {
              uVar1 = uVar1 + 1;
            }
            pbVar31 = (byte *)(ulong)(uVar1 >> 3);
          }
          else {
LAB_00109c2b:
            if ((puVar21 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar29 == (int)*puVar21)) {
              puVar21 = (ulong *)((long)puVar21 + 4);
              puVar29 = (ulong *)((long)puVar29 + 4);
            }
            if ((puVar21 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar29 == (short)*puVar21)) {
              puVar21 = (ulong *)((long)puVar21 + 2);
              puVar29 = (ulong *)((long)puVar29 + 2);
            }
            if (puVar21 < param_5) {
              puVar21 = (ulong *)((long)puVar21 + (ulong)((byte)*puVar29 == (byte)*puVar21));
            }
            pbVar31 = (byte *)((long)puVar21 - (long)puVar37);
          }
LAB_00109ab3:
          pbVar22 = pbVar22 + (long)pbVar31;
        }
        pbVar22 = pbVar22 + (long)pbVar36;
        lVar40 = lVar19 + uVar20;
        if ((byte *)((long)pbVar10 - lVar19 & 0xffffffffU) <= pbVar22 + uVar20) {
          lVar40 = uVar20 + uVar24 + lVar7;
        }
        if (local_e8 < pbVar22) {
          iVar13 = uVar24 + uVar32;
          iVar33 = iVar13 + (int)pbVar22;
          if (pbVar22 <= (byte *)(ulong)(uint)((int)local_110 - iVar13)) {
            iVar33 = (int)local_110;
          }
          local_110._0_4_ = iVar33;
          piVar26 = (int *)(param_1 + local_128 * 8);
          piVar26[1] = (int)pbVar22;
          local_128 = (ulong)((int)local_128 + 1);
          *piVar26 = (uVar39 + 3) - iVar13;
          if ((param_5 == (ulong *)((long)param_4 + (long)pbVar22)) ||
             (local_e8 = pbVar22, (byte *)0x1000 < pbVar22)) break;
        }
        if (uVar32 <= uVar12) break;
        if (pbVar22[lVar40] < *(byte *)((long)param_4 + (long)pbVar22)) {
          uVar32 = puVar4[1];
          pbVar34 = pbVar22;
        }
        else {
          uVar32 = *puVar4;
          pbVar28 = pbVar22;
        }
        local_bc = local_bc + -1;
        if ((local_bc == 0) || (uVar32 <= uVar15)) break;
      } while( true );
    }
  }
  else {
    pbVar28 = (byte *)0x0;
    pbVar34 = (byte *)0x0;
    puVar23 = (ulong *)((long)param_5 - 7);
    iVar33 = local_bc;
    do {
      local_bc = iVar33;
      pbVar36 = pbVar28;
      if (pbVar34 <= pbVar28) {
        pbVar36 = pbVar34;
      }
      puVar4 = (uint *)(lVar8 + (ulong)((uVar1 & uVar27) * 2) * 4);
      puVar29 = (ulong *)((long)param_4 + (long)pbVar36);
      puVar37 = (ulong *)(pbVar36 + (ulong)uVar27 + lVar7);
      puVar21 = puVar29;
      if (puVar29 < puVar23) {
        if (*puVar37 == *puVar29) {
          puVar21 = puVar29 + 1;
          puVar37 = puVar37 + 1;
          if (puVar21 < puVar23) {
LAB_00109ad1:
            if (*puVar37 == *puVar21) goto LAB_00109b00;
            uVar32 = 0;
            for (uVar20 = *puVar37 ^ *puVar21; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar32 = uVar32 + 1;
            }
            pbVar22 = (byte *)((long)puVar21 + ((ulong)(uVar32 >> 3) - (long)puVar29));
            goto LAB_0010963a;
          }
          goto LAB_00109715;
        }
        uVar32 = 0;
        for (uVar20 = *puVar37 ^ *puVar29; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar32 = uVar32 + 1;
        }
        pbVar22 = (byte *)(ulong)(uVar32 >> 3);
      }
      else {
LAB_00109715:
        if ((puVar21 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar37 == (int)*puVar21)) {
          puVar21 = (ulong *)((long)puVar21 + 4);
          puVar37 = (ulong *)((long)puVar37 + 4);
        }
        if ((puVar21 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar37 == (short)*puVar21)) {
          puVar21 = (ulong *)((long)puVar21 + 2);
          puVar37 = (ulong *)((long)puVar37 + 2);
        }
        if (puVar21 < param_5) {
          puVar21 = (ulong *)((long)puVar21 + (ulong)((byte)*puVar37 == (byte)*puVar21));
        }
        pbVar22 = (byte *)((long)puVar21 - (long)puVar29);
      }
LAB_0010963a:
      pbVar22 = pbVar22 + (long)pbVar36;
      if (local_e8 < pbVar22) {
        if ((byte *)(ulong)(iVar13 - uVar27) < pbVar22) {
          iVar13 = uVar27 + (int)pbVar22;
        }
        piVar26 = (int *)(param_1 + local_128 * 8);
        piVar26[1] = (int)pbVar22;
        local_128 = (ulong)((int)local_128 + 1);
        *piVar26 = (uVar39 + 3) - uVar27;
        if (((byte *)0x1000 < pbVar22) ||
           (local_e8 = pbVar22, param_5 == (ulong *)((long)param_4 + (long)pbVar22))) {
          *local_108 = 0;
          *local_110 = 0;
          *(int *)(param_2 + 0x2c) = iVar13 + -8;
          goto LAB_0010978c;
        }
      }
      if (pbVar22[(ulong)uVar27 + lVar7] < (byte)*(ulong *)((long)param_4 + (long)pbVar22)) {
        *local_110 = uVar27;
        if (uVar27 <= uVar14) {
          local_110 = &uStack_44;
LAB_00109dcb:
          *local_108 = 0;
          *local_110 = 0;
          goto LAB_00109830;
        }
        local_110 = puVar4 + 1;
        uVar27 = puVar4[1];
        pbVar34 = pbVar22;
      }
      else {
        *local_108 = uVar27;
        if (uVar27 <= uVar14) {
          local_108 = &uStack_44;
          goto LAB_00109dcb;
        }
        uVar27 = *puVar4;
        local_108 = puVar4;
        pbVar28 = pbVar22;
      }
    } while ((local_bc != 1) && (iVar33 = local_bc + -1, uVar16 <= uVar27));
    local_bc = local_bc + -1;
    *local_108 = 0;
    *local_110 = 0;
    local_110._0_4_ = iVar13;
    if (local_bc != 0) goto LAB_00109830;
  }
  *(int *)(param_2 + 0x2c) = (int)local_110 + -8;
LAB_0010978c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_128;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00109e7a:
  puVar23 = puVar23 + 1;
  puVar37 = puVar37 + 1;
  if (puVar21 <= puVar23) goto LAB_00109cf3;
  goto LAB_00109e59;
LAB_00109b00:
  puVar21 = puVar21 + 1;
  puVar37 = puVar37 + 1;
  if (puVar23 <= puVar21) goto LAB_00109715;
  goto LAB_00109ad1;
LAB_00109c78:
  puVar38 = puVar38 + 1;
  puVar35 = puVar35 + 1;
  if (puVar3 <= puVar38) goto LAB_00109a1a;
  goto LAB_00109bf6;
LAB_00109e28:
  puVar21 = puVar21 + 1;
  puVar29 = puVar29 + 1;
  if (puVar23 <= puVar21) goto LAB_00109c2b;
  goto LAB_00109cb6;
}



ulong ZSTD_btGetAllMatches_noDict_3
                (int *param_1,long param_2,undefined8 param_3,ulong *param_4,ulong *param_5,
                int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  ulong *puVar2;
  uint *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  ulong *puVar22;
  int iVar23;
  byte *pbVar24;
  uint uVar25;
  long in_FS_OFFSET;
  ulong local_d0;
  uint *local_b8;
  uint *local_b0;
  byte *local_80;
  uint uStack_44;
  long local_40;
  
  lVar5 = *(long *)(param_2 + 8);
  uVar19 = *(uint *)(param_2 + 0x2c);
  uVar20 = (ulong)uVar19;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d0 = 0;
  if (param_4 < (ulong *)(lVar5 + uVar20)) goto LAB_0010a38c;
  uVar25 = (uint)((long)param_4 - lVar5);
  while (uVar19 < uVar25) {
    iVar7 = ZSTD_insertBt1(param_2,uVar20 + lVar5,param_5,(long)param_4 - lVar5 & 0xffffffff,3,0);
    uVar19 = uVar19 + iVar7;
    uVar20 = (ulong)uVar19;
  }
  *(uint *)(param_2 + 0x2c) = uVar25;
  lVar6 = *(long *)(param_2 + 0x80);
  uVar19 = 0xfff;
  if (*(uint *)(param_2 + 0x114) < 0x1000) {
    uVar19 = *(uint *)(param_2 + 0x114);
  }
  puVar3 = (uint *)(*(long *)(param_2 + 0x70) +
                   (ulong)((uint)((int)*param_4 * -0x61c8864f) >>
                          (0x20U - (char)*(undefined4 *)(param_2 + 0x108) & 0x1f)) * 4);
  uVar18 = *puVar3;
  uVar1 = (1 << ((char)*(undefined4 *)(param_2 + 0x104) - 1U & 0x1f)) - 1;
  iVar7 = *(int *)(param_2 + 0x18);
  uVar13 = 0;
  if (uVar1 < uVar25) {
    uVar13 = uVar25 - uVar1;
  }
  uVar21 = 1 << ((byte)*(undefined4 *)(param_2 + 0x100) & 0x1f);
  uVar14 = *(uint *)(param_2 + 0x1c);
  uVar9 = uVar25 - uVar21;
  if (uVar25 - uVar14 <= uVar21) {
    uVar9 = uVar14;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar9 = uVar14;
  }
  uVar14 = 1;
  if (uVar9 != 0) {
    uVar14 = uVar9;
  }
  lVar16 = (ulong)((uVar1 & uVar25) * 2) * 4;
  local_b8 = (uint *)(lVar6 + lVar16);
  local_b0 = (uint *)(lVar6 + 4 + lVar16);
  iVar15 = uVar25 + 9;
  iVar8 = 1 << ((byte)*(undefined4 *)(param_2 + 0x10c) & 0x1f);
  local_80 = (byte *)(ulong)(param_8 - 1);
  if (param_7 < 0xfffffffd) {
    local_d0 = 0;
    lVar16 = 0;
    do {
      if (param_7 + (int)lVar16 == 3) {
        uVar21 = *param_6 - 1;
      }
      else {
        uVar21 = param_6[(ulong)param_7 + lVar16];
      }
      uVar20 = (ulong)uVar21;
      if (((uVar21 - 1 < uVar25 - iVar7) &&
          (*(int *)((long)param_4 - uVar20) << 8 == (int)*param_4 << 8)) &&
         (uVar9 <= uVar25 - uVar21)) {
        puVar2 = (ulong *)((long)param_5 - 7);
        puVar22 = (ulong *)((long)param_4 + 3);
        puVar10 = (ulong *)((long)param_4 + (3 - uVar20));
        iVar23 = (int)puVar22;
        if (puVar22 < puVar2) {
          if (*puVar10 == *(ulong *)((long)param_4 + 3)) {
            puVar22 = (ulong *)((long)param_4 + 0xb);
            puVar10 = (ulong *)((long)param_4 + (0xb - uVar20));
            if (puVar22 < puVar2) {
LAB_0010a5c6:
              if (*puVar10 == *puVar22) goto LAB_0010a6b4;
              uVar21 = 0;
              for (uVar20 = *puVar10 ^ *puVar22; (uVar20 & 1) == 0;
                  uVar20 = uVar20 >> 1 | 0x8000000000000000) {
                uVar21 = uVar21 + 1;
              }
              uVar21 = ((int)puVar22 + (uVar21 >> 3)) - iVar23;
              goto LAB_0010a137;
            }
            goto LAB_0010a513;
          }
          uVar21 = 0;
          for (uVar20 = *puVar10 ^ *(ulong *)((long)param_4 + 3); (uVar20 & 1) == 0;
              uVar20 = uVar20 >> 1 | 0x8000000000000000) {
            uVar21 = uVar21 + 1;
          }
          uVar21 = uVar21 >> 3;
        }
        else {
LAB_0010a513:
          if ((puVar22 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar10 == (int)*puVar22)) {
            puVar22 = (ulong *)((long)puVar22 + 4);
            puVar10 = (ulong *)((long)puVar10 + 4);
          }
          if ((puVar22 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar10 == (short)*puVar22)) {
            puVar22 = (ulong *)((long)puVar22 + 2);
            puVar10 = (ulong *)((long)puVar10 + 2);
          }
          if (puVar22 < param_5) {
            puVar22 = (ulong *)((long)puVar22 + (ulong)((byte)*puVar10 == (byte)*puVar22));
          }
          uVar21 = (int)puVar22 - iVar23;
        }
LAB_0010a137:
        uVar21 = uVar21 + 3;
        pbVar12 = (byte *)(ulong)uVar21;
        if (local_80 < pbVar12) {
          param_1[local_d0 * 2] = (int)lVar16 + 1;
          (param_1 + local_d0 * 2)[1] = uVar21;
          local_d0 = (ulong)((int)local_d0 + 1);
          if ((param_5 == (ulong *)((long)param_4 + (long)pbVar12)) ||
             (local_80 = pbVar12, uVar19 < uVar21)) goto LAB_0010a38c;
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 != 3);
  }
  else {
    local_d0 = 0;
  }
  if (local_80 < (byte *)0x3) {
    uVar9 = ZSTD_insertAndFindFirstIndexHash3(param_2,param_3,param_4);
    if ((uVar14 <= uVar9) && (uVar25 - uVar9 < 0x40000)) {
      puVar22 = (ulong *)(lVar5 + (ulong)uVar9);
      puVar2 = (ulong *)((long)param_5 - 7);
      puVar10 = param_4;
      if (param_4 < puVar2) {
        if (*puVar22 == *param_4) {
          puVar10 = param_4 + 1;
          puVar22 = puVar22 + 1;
          if (puVar10 < puVar2) {
LAB_0010a4d2:
            if (*puVar22 == *puVar10) goto LAB_0010a6d3;
            uVar21 = 0;
            for (uVar20 = *puVar22 ^ *puVar10; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar21 = uVar21 + 1;
            }
            pbVar12 = (byte *)((long)puVar10 + ((ulong)(uVar21 >> 3) - (long)param_4));
            goto LAB_0010a641;
          }
          goto LAB_0010a606;
        }
        uVar21 = 0;
        for (uVar20 = *puVar22 ^ *param_4; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar21 = uVar21 + 1;
        }
        pbVar12 = (byte *)(ulong)(uVar21 >> 3);
      }
      else {
LAB_0010a606:
        if ((puVar10 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar22 == (int)*puVar10)) {
          puVar10 = (ulong *)((long)puVar10 + 4);
          puVar22 = (ulong *)((long)puVar22 + 4);
        }
        if ((puVar10 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar22 == (short)*puVar10)) {
          puVar10 = (ulong *)((long)puVar10 + 2);
          puVar22 = (ulong *)((long)puVar22 + 2);
        }
        if (puVar10 < param_5) {
          puVar10 = (ulong *)((long)puVar10 + (ulong)((byte)*puVar22 == (byte)*puVar10));
        }
        pbVar12 = (byte *)((long)puVar10 - (long)param_4);
      }
LAB_0010a641:
      if ((byte *)0x2 < pbVar12) {
        *param_1 = (uVar25 - uVar9) + 3;
        param_1[1] = (int)pbVar12;
        if ((param_5 == (ulong *)((long)param_4 + (long)pbVar12)) ||
           (local_d0 = 1, local_80 = pbVar12, (byte *)(ulong)uVar19 < pbVar12)) {
          local_d0 = 1;
          *(uint *)(param_2 + 0x2c) = uVar25 + 1;
          goto LAB_0010a38c;
        }
      }
    }
  }
  *puVar3 = uVar25;
  if (uVar14 <= uVar18) {
    puVar2 = (ulong *)((long)param_5 - 7);
    pbVar12 = (byte *)0x0;
    pbVar24 = (byte *)0x0;
    do {
      pbVar17 = pbVar24;
      if (pbVar12 <= pbVar24) {
        pbVar17 = pbVar12;
      }
      puVar3 = (uint *)(lVar6 + (ulong)((uVar1 & uVar18) * 2) * 4);
      puVar4 = (ulong *)((long)param_4 + (long)pbVar17);
      puVar22 = (ulong *)(pbVar17 + (ulong)uVar18 + lVar5);
      puVar10 = puVar4;
      if (puVar4 < puVar2) {
        if (*puVar22 == *puVar4) {
          puVar10 = puVar4 + 1;
          puVar22 = puVar22 + 1;
          if (puVar10 < puVar2) {
LAB_0010a3f9:
            if (*puVar22 == *puVar10) goto LAB_0010a430;
            uVar19 = 0;
            for (uVar20 = *puVar22 ^ *puVar10; (uVar20 & 1) == 0;
                uVar20 = uVar20 >> 1 | 0x8000000000000000) {
              uVar19 = uVar19 + 1;
            }
            pbVar11 = (byte *)((long)puVar10 + ((ulong)(uVar19 >> 3) - (long)puVar4));
            goto LAB_0010a21a;
          }
          goto LAB_0010a2f7;
        }
        uVar19 = 0;
        for (uVar20 = *puVar22 ^ *puVar4; (uVar20 & 1) == 0;
            uVar20 = uVar20 >> 1 | 0x8000000000000000) {
          uVar19 = uVar19 + 1;
        }
        pbVar11 = (byte *)(ulong)(uVar19 >> 3);
      }
      else {
LAB_0010a2f7:
        if ((puVar10 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar22 == (int)*puVar10)) {
          puVar10 = (ulong *)((long)puVar10 + 4);
          puVar22 = (ulong *)((long)puVar22 + 4);
        }
        if ((puVar10 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar22 == (short)*puVar10)) {
          puVar10 = (ulong *)((long)puVar10 + 2);
          puVar22 = (ulong *)((long)puVar22 + 2);
        }
        if (puVar10 < param_5) {
          puVar10 = (ulong *)((long)puVar10 + (ulong)((byte)*puVar22 == (byte)*puVar10));
        }
        pbVar11 = (byte *)((long)puVar10 - (long)puVar4);
      }
LAB_0010a21a:
      pbVar11 = pbVar11 + (long)pbVar17;
      if (local_80 < pbVar11) {
        if ((byte *)(ulong)(iVar15 - uVar18) < pbVar11) {
          iVar15 = uVar18 + (int)pbVar11;
        }
        lVar16 = local_d0 * 2;
        (param_1 + lVar16)[1] = (int)pbVar11;
        local_d0 = (ulong)((int)local_d0 + 1);
        param_1[lVar16] = (uVar25 + 3) - uVar18;
        if (((byte *)0x1000 < pbVar11) ||
           (local_80 = pbVar11, param_5 == (ulong *)((long)param_4 + (long)pbVar11))) break;
      }
      if (pbVar11[(ulong)uVar18 + lVar5] < (byte)*(ulong *)((long)param_4 + (long)pbVar11)) {
        *local_b8 = uVar18;
        if (uVar18 <= uVar13) {
          local_b8 = &uStack_44;
          break;
        }
        local_b8 = puVar3 + 1;
        uVar18 = puVar3[1];
        pbVar12 = pbVar11;
        pbVar11 = pbVar24;
      }
      else {
        *local_b0 = uVar18;
        if (uVar18 <= uVar13) {
          local_b0 = &uStack_44;
          break;
        }
        uVar18 = *puVar3;
        local_b0 = puVar3;
      }
      iVar8 = iVar8 + -1;
      if ((iVar8 == 0) || (pbVar24 = pbVar11, uVar18 < uVar14)) break;
    } while( true );
  }
  *local_b0 = 0;
  *local_b8 = 0;
  *(int *)(param_2 + 0x2c) = iVar15 + -8;
LAB_0010a38c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010a6b4:
  puVar22 = puVar22 + 1;
  puVar10 = puVar10 + 1;
  if (puVar2 <= puVar22) goto LAB_0010a513;
  goto LAB_0010a5c6;
LAB_0010a6d3:
  puVar10 = puVar10 + 1;
  puVar22 = puVar22 + 1;
  if (puVar2 <= puVar10) goto LAB_0010a606;
  goto LAB_0010a4d2;
LAB_0010a430:
  puVar10 = puVar10 + 1;
  puVar22 = puVar22 + 1;
  if (puVar2 <= puVar10) goto LAB_0010a2f7;
  goto LAB_0010a3f9;
}



ulong ZSTD_btGetAllMatches_dictMatchState_3
                (int *param_1,long param_2,undefined8 param_3,ulong *param_4,ulong *param_5,
                int *param_6,uint param_7,int param_8)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  byte *pbVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  byte *pbVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong *puVar27;
  long lVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong uVar31;
  byte *pbVar32;
  uint uVar33;
  ulong *puVar34;
  uint uVar35;
  int iVar36;
  ulong *puVar37;
  byte *pbVar38;
  long lVar39;
  byte *pbVar40;
  uint uVar41;
  long in_FS_OFFSET;
  ulong local_128;
  byte *local_118;
  uint *local_110;
  uint *local_108;
  int local_bc;
  uint uStack_44;
  long local_40;
  
  lVar7 = *(long *)(param_2 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar35 = *(uint *)(param_2 + 0x2c);
  uVar16 = (ulong)uVar35;
  local_128 = 0;
  if (param_4 < (ulong *)(lVar7 + uVar16)) goto LAB_0010acc3;
  uVar41 = (uint)((long)param_4 - lVar7);
  if (uVar35 < uVar41) {
    do {
      iVar13 = ZSTD_insertBt1(param_2,uVar16 + lVar7,param_5,(long)param_4 - lVar7 & 0xffffffff,3,0)
      ;
      uVar35 = uVar35 + iVar13;
      uVar16 = (ulong)uVar35;
    } while (uVar35 < uVar41);
  }
  *(uint *)(param_2 + 0x2c) = uVar41;
  lVar8 = *(long *)(param_2 + 0x80);
  uVar35 = 0xfff;
  if (*(uint *)(param_2 + 0x114) < 0x1000) {
    uVar35 = *(uint *)(param_2 + 0x114);
  }
  puVar4 = (uint *)(*(long *)(param_2 + 0x70) +
                   (ulong)((uint)((int)*param_4 * -0x61c8864f) >>
                          (0x20U - (char)*(undefined4 *)(param_2 + 0x108) & 0x1f)) * 4);
  uVar15 = *(uint *)(param_2 + 0x18);
  uVar33 = *puVar4;
  uVar1 = (1 << ((char)*(undefined4 *)(param_2 + 0x104) - 1U & 0x1f)) - 1;
  puVar27 = (ulong *)((ulong)uVar15 + lVar7);
  uVar24 = 0;
  if (uVar1 < uVar41) {
    uVar24 = uVar41 - uVar1;
  }
  uVar25 = 1 << ((byte)*(undefined4 *)(param_2 + 0x100) & 0x1f);
  uVar26 = *(uint *)(param_2 + 0x1c);
  puVar9 = *(undefined8 **)(param_2 + 0xf8);
  uVar11 = uVar41 - uVar25;
  if (uVar41 - uVar26 <= uVar25) {
    uVar11 = uVar26;
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar11 = uVar26;
  }
  uVar26 = 1;
  if (uVar11 != 0) {
    uVar26 = uVar11;
  }
  lVar28 = (ulong)((uVar1 & uVar41) * 2) * 4;
  local_110 = (uint *)(lVar8 + lVar28);
  local_108 = (uint *)(lVar8 + 4 + lVar28);
  local_bc = 1 << ((byte)*(undefined4 *)(param_2 + 0x10c) & 0x1f);
  lVar28 = puVar9[1];
  iVar13 = uVar41 + 9;
  pbVar10 = (byte *)*puVar9;
  iVar36 = (int)((long)pbVar10 - lVar28);
  uVar20 = uVar11 - iVar36;
  uVar5 = *(uint *)((long)puVar9 + 0x1c);
  uVar6 = *(undefined4 *)(puVar9 + 0x21);
  uVar25 = (1 << ((char)*(undefined4 *)((long)puVar9 + 0x104) - 1U & 0x1f)) - 1;
  uVar21 = iVar36 - uVar25;
  if (iVar36 - uVar5 <= uVar25) {
    uVar21 = uVar5;
  }
  local_118 = (byte *)(ulong)(param_8 - 1);
  if (param_7 < 0xfffffffd) {
    lVar39 = 0;
    local_128 = 0;
    do {
      if (param_7 + (int)lVar39 == 3) {
        uVar14 = *param_6 - 1;
      }
      else {
        uVar14 = param_6[(ulong)param_7 + lVar39];
      }
      uVar16 = (ulong)uVar14;
      if (uVar14 - 1 < uVar41 - uVar15) {
        if ((*(int *)((long)param_4 - uVar16) << 8 == (int)*param_4 << 8) &&
           (uVar11 <= uVar41 - uVar14)) {
          puVar17 = (ulong *)((long)param_4 + 3);
          puVar2 = (ulong *)((long)param_5 - 7);
          puVar29 = (ulong *)((long)param_4 + (3 - uVar16));
          iVar22 = (int)puVar17;
          if (puVar17 < puVar2) {
            if (*puVar29 != *(ulong *)((long)param_4 + 3)) {
              uVar14 = 0;
              for (uVar16 = *puVar29 ^ *(ulong *)((long)param_4 + 3); (uVar16 & 1) == 0;
                  uVar16 = uVar16 >> 1 | 0x8000000000000000) {
                uVar14 = uVar14 + 1;
              }
              uVar14 = uVar14 >> 3;
              goto LAB_0010aa44;
            }
            puVar17 = (ulong *)((long)param_4 + 0xb);
            puVar29 = (ulong *)((long)param_4 + (0xb - uVar16));
            if (puVar17 < puVar2) {
LAB_0010b3b1:
              if (*puVar29 == *puVar17) goto LAB_0010b48b;
              uVar14 = 0;
              for (uVar16 = *puVar29 ^ *puVar17; (uVar16 & 1) == 0;
                  uVar16 = uVar16 >> 1 | 0x8000000000000000) {
                uVar14 = uVar14 + 1;
              }
              uVar14 = ((int)puVar17 + (uVar14 >> 3)) - iVar22;
              goto LAB_0010aa44;
            }
          }
LAB_0010b2bb:
          if ((puVar17 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar29 == (int)*puVar17)) {
            puVar17 = (ulong *)((long)puVar17 + 4);
            puVar29 = (ulong *)((long)puVar29 + 4);
          }
          if ((puVar17 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar29 == (short)*puVar17)) {
            puVar17 = (ulong *)((long)puVar17 + 2);
            puVar29 = (ulong *)((long)puVar29 + 2);
          }
          if (puVar17 < param_5) {
            puVar17 = (ulong *)((long)puVar17 + (ulong)((byte)*puVar29 == (byte)*puVar17));
          }
          uVar14 = (int)puVar17 - iVar22;
LAB_0010aa44:
          uVar14 = uVar14 + 3;
          pbVar40 = (byte *)(ulong)uVar14;
          if (local_118 < pbVar40) {
            param_1[local_128 * 2] = (int)lVar39 + 1;
            (param_1 + local_128 * 2)[1] = uVar14;
            local_128 = (ulong)((int)local_128 + 1);
            if ((param_5 == (ulong *)((long)param_4 + (long)pbVar40)) ||
               (local_118 = pbVar40, uVar35 < uVar14)) goto LAB_0010acc3;
          }
        }
      }
      else if (((uVar14 - 1 < (iVar36 + (uVar41 - uVar5)) - uVar11) &&
               (2 < uVar14 + ((uVar15 - 1) - uVar41))) &&
              (piVar19 = (int *)(lVar28 + ((ulong)(uVar41 - uVar14) - (ulong)uVar20)),
              *piVar19 << 8 == (int)*param_4 << 8)) {
        uVar14 = ZSTD_count_2segments
                           ((byte *)((long)param_4 + 3),(long)piVar19 + 3,param_5,pbVar10,puVar27);
        goto LAB_0010aa44;
      }
      lVar39 = lVar39 + 1;
    } while (lVar39 != 3);
  }
  else {
    local_128 = 0;
  }
  if (local_118 < (byte *)0x3) {
    uVar15 = ZSTD_insertAndFindFirstIndexHash3(param_2,param_3,param_4);
    if ((uVar26 <= uVar15) && (uVar41 - uVar15 < 0x40000)) {
      puVar2 = (ulong *)((long)param_5 - 7);
      puVar29 = (ulong *)(lVar7 + (ulong)uVar15);
      puVar17 = param_4;
      if (param_4 < puVar2) {
        if (*puVar29 == *param_4) {
          puVar17 = param_4 + 1;
          puVar29 = puVar29 + 1;
          if (puVar17 < puVar2) {
LAB_0010b27a:
            if (*puVar29 == *puVar17) goto LAB_0010b4b2;
            uVar11 = 0;
            for (uVar16 = *puVar29 ^ *puVar17; (uVar16 & 1) == 0;
                uVar16 = uVar16 >> 1 | 0x8000000000000000) {
              uVar11 = uVar11 + 1;
            }
            pbVar40 = (byte *)((long)puVar17 + ((ulong)(uVar11 >> 3) - (long)param_4));
            goto LAB_0010b414;
          }
          goto LAB_0010b3d9;
        }
        uVar11 = 0;
        for (uVar16 = *puVar29 ^ *param_4; (uVar16 & 1) == 0;
            uVar16 = uVar16 >> 1 | 0x8000000000000000) {
          uVar11 = uVar11 + 1;
        }
        pbVar40 = (byte *)(ulong)(uVar11 >> 3);
      }
      else {
LAB_0010b3d9:
        if ((puVar17 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar29 == (int)*puVar17)) {
          puVar17 = (ulong *)((long)puVar17 + 4);
          puVar29 = (ulong *)((long)puVar29 + 4);
        }
        if ((puVar17 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar29 == (short)*puVar17)) {
          puVar17 = (ulong *)((long)puVar17 + 2);
          puVar29 = (ulong *)((long)puVar29 + 2);
        }
        if (puVar17 < param_5) {
          puVar17 = (ulong *)((long)puVar17 + (ulong)((byte)*puVar29 == (byte)*puVar17));
        }
        pbVar40 = (byte *)((long)puVar17 - (long)param_4);
      }
LAB_0010b414:
      if ((byte *)0x2 < pbVar40) {
        *param_1 = (uVar41 - uVar15) + 3;
        param_1[1] = (int)pbVar40;
        if ((param_5 == (ulong *)((long)param_4 + (long)pbVar40)) ||
           (local_128 = 1, local_118 = pbVar40, (byte *)(ulong)uVar35 < pbVar40)) {
          local_128 = 1;
          *(uint *)(param_2 + 0x2c) = uVar41 + 1;
          goto LAB_0010acc3;
        }
      }
    }
  }
  *puVar4 = uVar41;
  if (uVar33 < uVar26) {
    local_110[0] = 0;
    local_110[1] = 0;
LAB_0010ae6a:
    uVar35 = *(uint *)(puVar9[0xe] +
                      (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (0x20U - (char)uVar6 & 0x1f)) *
                      4);
    lVar8 = puVar9[0x10];
    if (uVar5 < uVar35) {
      pbVar40 = (byte *)0x0;
      pbVar38 = (byte *)0x0;
      puVar2 = (ulong *)((long)param_5 - 7);
      local_110 = (uint *)local_118;
      iVar36 = iVar13;
      do {
        uVar16 = (ulong)uVar35;
        pbVar23 = pbVar40;
        if (pbVar38 <= pbVar40) {
          pbVar23 = pbVar38;
        }
        puVar4 = (uint *)(lVar8 + (ulong)((uVar25 & uVar35) * 2) * 4);
        puVar29 = (ulong *)((long)param_4 + (long)pbVar23);
        puVar17 = (ulong *)(pbVar23 + lVar28 + uVar16);
        puVar30 = (ulong *)(((long)pbVar10 - (long)puVar17) + (long)puVar29);
        if (param_5 <= puVar30) {
          puVar30 = param_5;
        }
        puVar3 = (ulong *)((long)puVar30 - 7);
        puVar34 = puVar17;
        puVar37 = puVar29;
        if (puVar29 < puVar3) {
          if (*puVar17 == *puVar29) {
            puVar37 = puVar29 + 1;
            puVar34 = puVar17 + 1;
            if (puVar37 < puVar3) {
LAB_0010b116:
              if (*puVar34 == *puVar37) goto LAB_0010b198;
              uVar1 = 0;
              for (uVar31 = *puVar34 ^ *puVar37; (uVar31 & 1) == 0;
                  uVar31 = uVar31 >> 1 | 0x8000000000000000) {
                uVar1 = uVar1 + 1;
              }
              pbVar18 = (byte *)((long)puVar37 + ((ulong)(uVar1 >> 3) - (long)puVar29));
              goto joined_r0x0010b0aa;
            }
            goto LAB_0010b04a;
          }
          uVar1 = 0;
          for (uVar31 = *puVar17 ^ *puVar29; (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x8000000000000000) {
            uVar1 = uVar1 + 1;
          }
          pbVar18 = (byte *)(ulong)(uVar1 >> 3);
        }
        else {
LAB_0010b04a:
          if ((puVar37 < (ulong *)((long)puVar30 - 3U)) && ((int)*puVar34 == (int)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 4);
            puVar34 = (ulong *)((long)puVar34 + 4);
          }
          if ((puVar37 < (ulong *)((long)puVar30 - 1U)) && ((short)*puVar34 == (short)*puVar37)) {
            puVar37 = (ulong *)((long)puVar37 + 2);
            puVar34 = (ulong *)((long)puVar34 + 2);
          }
          if (puVar37 < puVar30) {
            puVar37 = (ulong *)((long)puVar37 + (ulong)((byte)*puVar34 == (byte)*puVar37));
          }
          pbVar18 = (byte *)((long)puVar37 - (long)puVar29);
        }
joined_r0x0010b0aa:
        if (pbVar10 == (byte *)((long)puVar17 + (long)pbVar18)) {
          puVar29 = (ulong *)((long)puVar29 + (long)pbVar18);
          puVar17 = puVar29;
          puVar30 = puVar27;
          if (puVar29 < puVar2) {
            if (*puVar27 == *puVar29) {
              puVar17 = puVar29 + 1;
              puVar30 = puVar27 + 1;
              if (puVar17 < puVar2) {
LAB_0010b1d6:
                if (*puVar30 == *puVar17) goto LAB_0010b380;
                uVar1 = 0;
                for (uVar31 = *puVar30 ^ *puVar17; (uVar31 & 1) == 0;
                    uVar31 = uVar31 >> 1 | 0x8000000000000000) {
                  uVar1 = uVar1 + 1;
                }
                pbVar32 = (byte *)((long)puVar17 + ((ulong)(uVar1 >> 3) - (long)puVar29));
                goto LAB_0010b0e3;
              }
              goto LAB_0010b14b;
            }
            uVar1 = 0;
            for (uVar31 = *puVar27 ^ *puVar29; (uVar31 & 1) == 0;
                uVar31 = uVar31 >> 1 | 0x8000000000000000) {
              uVar1 = uVar1 + 1;
            }
            pbVar32 = (byte *)(ulong)(uVar1 >> 3);
          }
          else {
LAB_0010b14b:
            if ((puVar17 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar30 == (int)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 4);
              puVar30 = (ulong *)((long)puVar30 + 4);
            }
            if ((puVar17 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar30 == (short)*puVar17)) {
              puVar17 = (ulong *)((long)puVar17 + 2);
              puVar30 = (ulong *)((long)puVar30 + 2);
            }
            if (puVar17 < param_5) {
              puVar17 = (ulong *)((long)puVar17 + (ulong)((byte)*puVar30 == (byte)*puVar17));
            }
            pbVar32 = (byte *)((long)puVar17 - (long)puVar29);
          }
LAB_0010b0e3:
          pbVar18 = pbVar18 + (long)pbVar32;
        }
        pbVar18 = pbVar18 + (long)pbVar23;
        lVar39 = lVar28 + uVar16;
        if ((byte *)((long)pbVar10 - lVar28 & 0xffffffffU) <= pbVar18 + uVar16) {
          lVar39 = uVar16 + uVar20 + lVar7;
        }
        iVar13 = iVar36;
        if (local_110 < pbVar18) {
          iVar22 = uVar20 + uVar35;
          iVar13 = iVar22 + (int)pbVar18;
          if (pbVar18 <= (byte *)(ulong)(uint)(iVar36 - iVar22)) {
            iVar13 = iVar36;
          }
          lVar12 = local_128 * 2;
          (param_1 + lVar12)[1] = (int)pbVar18;
          local_128 = (ulong)((int)local_128 + 1);
          param_1[lVar12] = (uVar41 + 3) - iVar22;
          if ((param_5 == (ulong *)((long)param_4 + (long)pbVar18)) ||
             (local_110 = (uint *)pbVar18, (byte *)0x1000 < pbVar18)) break;
        }
        if (uVar35 <= uVar21) break;
        if (pbVar18[lVar39] < *(byte *)((long)param_4 + (long)pbVar18)) {
          uVar35 = puVar4[1];
          pbVar38 = pbVar18;
        }
        else {
          uVar35 = *puVar4;
          pbVar40 = pbVar18;
        }
        local_bc = local_bc + -1;
        if ((local_bc == 0) || (iVar36 = iVar13, uVar35 <= uVar5)) break;
      } while( true );
    }
  }
  else {
    puVar2 = (ulong *)((long)param_5 - 7);
    pbVar40 = (byte *)0x0;
    pbVar38 = (byte *)0x0;
    do {
      pbVar23 = pbVar38;
      if (pbVar40 <= pbVar38) {
        pbVar23 = pbVar40;
      }
      puVar4 = (uint *)(lVar8 + (ulong)((uVar1 & uVar33) * 2) * 4);
      puVar30 = (ulong *)((long)param_4 + (long)pbVar23);
      puVar29 = (ulong *)(pbVar23 + (ulong)uVar33 + lVar7);
      puVar17 = puVar30;
      if (puVar30 < puVar2) {
        if (*puVar29 == *puVar30) {
          puVar17 = puVar30 + 1;
          puVar29 = puVar29 + 1;
          if (puVar17 < puVar2) {
LAB_0010ad29:
            if (*puVar29 == *puVar17) goto LAB_0010ad60;
            uVar35 = 0;
            for (uVar16 = *puVar29 ^ *puVar17; (uVar16 & 1) == 0;
                uVar16 = uVar16 >> 1 | 0x8000000000000000) {
              uVar35 = uVar35 + 1;
            }
            pbVar18 = (byte *)((long)puVar17 + ((ulong)(uVar35 >> 3) - (long)puVar30));
            goto LAB_0010ab3a;
          }
          goto LAB_0010ac12;
        }
        uVar35 = 0;
        for (uVar16 = *puVar29 ^ *puVar30; (uVar16 & 1) == 0;
            uVar16 = uVar16 >> 1 | 0x8000000000000000) {
          uVar35 = uVar35 + 1;
        }
        pbVar18 = (byte *)(ulong)(uVar35 >> 3);
      }
      else {
LAB_0010ac12:
        if ((puVar17 < (ulong *)((long)param_5 - 3U)) && ((int)*puVar29 == (int)*puVar17)) {
          puVar17 = (ulong *)((long)puVar17 + 4);
          puVar29 = (ulong *)((long)puVar29 + 4);
        }
        if ((puVar17 < (ulong *)((long)param_5 - 1U)) && ((short)*puVar29 == (short)*puVar17)) {
          puVar17 = (ulong *)((long)puVar17 + 2);
          puVar29 = (ulong *)((long)puVar29 + 2);
        }
        if (puVar17 < param_5) {
          puVar17 = (ulong *)((long)puVar17 + (ulong)((byte)*puVar29 == (byte)*puVar17));
        }
        pbVar18 = (byte *)((long)puVar17 - (long)puVar30);
      }
LAB_0010ab3a:
      pbVar18 = pbVar18 + (long)pbVar23;
      if (local_118 < pbVar18) {
        if ((byte *)(ulong)(iVar13 - uVar33) < pbVar18) {
          iVar13 = uVar33 + (int)pbVar18;
        }
        lVar39 = local_128 * 2;
        (param_1 + lVar39)[1] = (int)pbVar18;
        local_128 = (ulong)((int)local_128 + 1);
        param_1[lVar39] = (uVar41 + 3) - uVar33;
        if (((byte *)0x1000 < pbVar18) ||
           (local_118 = pbVar18, param_5 == (ulong *)((long)param_4 + (long)pbVar18))) {
          *local_108 = 0;
          *local_110 = 0;
          goto LAB_0010acb1;
        }
      }
      if (pbVar18[(ulong)uVar33 + lVar7] < (byte)*(ulong *)((long)param_4 + (long)pbVar18)) {
        *local_110 = uVar33;
        if (uVar33 <= uVar24) {
          local_110 = &uStack_44;
LAB_0010ae54:
          *local_108 = 0;
          *local_110 = 0;
          goto LAB_0010ae6a;
        }
        local_110 = puVar4 + 1;
        uVar33 = puVar4[1];
        pbVar40 = pbVar18;
        pbVar18 = pbVar38;
      }
      else {
        *local_108 = uVar33;
        if (uVar33 <= uVar24) {
          local_108 = &uStack_44;
          goto LAB_0010ae54;
        }
        uVar33 = *puVar4;
        local_108 = puVar4;
      }
      local_bc = local_bc + -1;
    } while ((local_bc != 0) && (pbVar38 = pbVar18, uVar26 <= uVar33));
    *local_108 = 0;
    *local_110 = 0;
    if (local_bc != 0) goto LAB_0010ae6a;
  }
LAB_0010acb1:
  *(int *)(param_2 + 0x2c) = iVar13 + -8;
LAB_0010acc3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_128;
LAB_0010b48b:
  puVar17 = puVar17 + 1;
  puVar29 = puVar29 + 1;
  if (puVar2 <= puVar17) goto LAB_0010b2bb;
  goto LAB_0010b3b1;
LAB_0010b4b2:
  puVar17 = puVar17 + 1;
  puVar29 = puVar29 + 1;
  if (puVar2 <= puVar17) goto LAB_0010b3d9;
  goto LAB_0010b27a;
LAB_0010ad60:
  puVar17 = puVar17 + 1;
  puVar29 = puVar29 + 1;
  if (puVar2 <= puVar17) goto LAB_0010ac12;
  goto LAB_0010ad29;
LAB_0010b198:
  puVar37 = puVar37 + 1;
  puVar34 = puVar34 + 1;
  if (puVar3 <= puVar37) goto LAB_0010b04a;
  goto LAB_0010b116;
LAB_0010b380:
  puVar17 = puVar17 + 1;
  puVar30 = puVar30 + 1;
  if (puVar2 <= puVar17) goto LAB_0010b14b;
  goto LAB_0010b1d6;
}



void ZSTD_updateTree(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0x2c);
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  uVar5 = param_2 - lVar2;
  uVar4 = (uint)uVar5;
  if (uVar6 < uVar4) {
    do {
      iVar3 = ZSTD_insertBt1(param_1,(ulong)uVar6 + lVar2,param_3,uVar5 & 0xffffffff,uVar1,0);
      uVar6 = uVar6 + iVar3;
    } while (uVar6 < uVar4);
  }
  *(uint *)(param_1 + 0x2c) = uVar4;
  return;
}



void ZSTD_compressBlock_btopt(void)

{
  ZSTD_compressBlock_opt0();
  return;
}



void ZSTD_compressBlock_btultra(void)

{
  ZSTD_compressBlock_opt2();
  return;
}



void ZSTD_compressBlock_btultra2
               (long param_1,long *param_2,undefined8 *param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_2c;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)(param_1 + 0xc4) == 0) && (param_2[1] == *param_2)) {
    if ((*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18) && 8 < param_5) &&
       (*(int *)(param_1 + 0x18) == (int)param_4 - (int)*(undefined8 *)(param_1 + 8))) {
      local_2c = *param_3;
      local_24 = *(undefined4 *)(param_3 + 1);
      ZSTD_compressBlock_opt2(param_1,param_2,&local_2c,param_4,param_5,0);
      ZSTD_resetSeqStore(param_2);
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) - param_5;
      iVar1 = *(int *)(param_1 + 0x18) + (int)param_5;
      *(int *)(param_1 + 0x2c) = iVar1;
      *(ulong *)(param_1 + 0x18) = CONCAT44(iVar1,iVar1);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    ZSTD_compressBlock_opt2(param_1,param_2,param_3,param_4,param_5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ZSTD_compressBlock_btopt_dictMatchState(void)

{
  ZSTD_compressBlock_opt0();
  return;
}



void ZSTD_compressBlock_btopt_extDict(void)

{
  ZSTD_compressBlock_opt0();
  return;
}



void ZSTD_compressBlock_btultra_dictMatchState(void)

{
  ZSTD_compressBlock_opt2();
  return;
}



void ZSTD_compressBlock_btultra_extDict(void)

{
  ZSTD_compressBlock_opt2();
  return;
}


