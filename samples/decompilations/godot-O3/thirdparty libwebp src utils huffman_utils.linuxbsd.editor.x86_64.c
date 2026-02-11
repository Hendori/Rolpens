
int BuildHuffmanTable(long param_1,int param_2,int *param_3,int param_4,undefined2 *param_5)

{
  char *pcVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined2 *puVar20;
  char cVar21;
  long in_FS_OFFSET;
  byte local_108;
  int local_104;
  int local_fc;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  int aiStack_88 [18];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  if (param_4 < 1) {
    local_c8._0_4_ = 0;
  }
  else {
    piVar11 = param_3;
    do {
      iVar4 = *piVar11;
      if (0xf < iVar4) goto LAB_00100076;
      piVar11 = piVar11 + 1;
      *(int *)(local_c8 + (long)iVar4 * 4) = *(int *)(local_c8 + (long)iVar4 * 4) + 1;
    } while (piVar11 != param_3 + param_4);
  }
  if (param_4 != local_c8._0_4_) {
    lVar8 = 1;
    iVar4 = 0;
    aiStack_88[1] = 0;
    do {
      if (1 << ((byte)lVar8 & 0x1f) < *(int *)(local_c8 + lVar8 * 4)) goto LAB_00100076;
      iVar4 = iVar4 + *(int *)(local_c8 + lVar8 * 4);
      aiStack_88[lVar8 + 1] = iVar4;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0xf);
    lVar8 = 0;
    if (0 < param_4) {
      do {
        while (iVar4 = param_3[lVar8], iVar4 < 1) {
LAB_0010012a:
          lVar8 = lVar8 + 1;
          if (lVar8 == param_4) goto LAB_0010015b;
        }
        iVar5 = aiStack_88[iVar4];
        if (param_5 != (undefined2 *)0x0) {
          if (iVar5 < param_4) {
            param_5[iVar5] = (short)lVar8;
            aiStack_88[iVar4] = iVar5 + 1;
            goto LAB_0010012a;
          }
          goto LAB_00100076;
        }
        lVar8 = lVar8 + 1;
        aiStack_88[iVar4] = iVar5 + 1;
      } while (lVar8 != param_4);
    }
LAB_0010015b:
    local_108 = (byte)param_2;
    iVar4 = 1 << (local_108 & 0x1f);
    local_104 = iVar4;
    if (aiStack_88[0xf] == 1) {
      if (param_5 != (undefined2 *)0x0) {
        uVar2 = *param_5;
        lVar8 = (long)iVar4;
        do {
          *(undefined1 *)(param_1 + -4 + lVar8 * 4) = 0;
          *(undefined2 *)(param_1 + -2 + lVar8 * 4) = uVar2;
          lVar8 = lVar8 + -1;
        } while (0 < (int)lVar8);
      }
      goto LAB_0010007e;
    }
    if (param_2 < 1) {
      local_dc = 3;
      iVar5 = 2;
      local_e0 = 0;
      uVar6 = 0;
LAB_001002ca:
      local_fc = param_2 + 1;
      iVar5 = iVar5 - *(int *)(local_c8 + (long)local_fc * 4);
      if (-1 < iVar5) {
        piVar11 = (int *)(local_c8 + (long)local_fc * 4);
        lVar9 = (long)local_e0;
        uVar7 = 0xffffffff;
        iVar18 = 2;
        uVar13 = iVar4 - 1;
        lVar8 = param_1;
        do {
          iVar17 = *piVar11;
          if (0 < iVar17) {
            cVar3 = (char)local_fc;
            iVar16 = 1 << (cVar3 - local_108 & 0x1f);
            uVar14 = 1 << (cVar3 - 1U & 0x1f);
            do {
              uVar19 = uVar13 & uVar6;
              if (uVar19 == uVar7) {
                if (param_1 == 0) goto LAB_00100446;
LAB_00100403:
                uVar2 = param_5[lVar9];
                lVar12 = (long)iVar4;
                lVar15 = (long)iVar18 * -4 + (ulong)(uVar6 >> (local_108 & 0x1f)) * 4 + lVar8;
                do {
                  *(byte *)(lVar15 + lVar12 * 4) = cVar3 - local_108;
                  *(undefined2 *)(lVar15 + 2 + lVar12 * 4) = uVar2;
                  lVar12 = lVar12 + -iVar18;
                } while (0 < (int)lVar12);
                lVar9 = (long)((int)lVar9 + 1);
                uVar7 = uVar19;
              }
              else {
                lVar15 = (long)(local_fc + 1);
                if (param_1 != 0) {
                  lVar8 = lVar8 + (long)iVar4 * 4;
                  if (local_fc == 0xf) {
                    cVar21 = '\x0f';
                    iVar4 = 1 << (cVar3 - local_108 & 0x1f);
                    local_104 = local_104 + iVar4;
                  }
                  else {
                    iVar4 = iVar16 - *piVar11;
                    if (0 < iVar4) goto LAB_001003c3;
                    iVar4 = 1 << (cVar3 - local_108 & 0x1f);
                    local_104 = local_104 + iVar4;
                    cVar21 = cVar3;
                  }
LAB_001003e8:
                  pcVar1 = (char *)(param_1 + (ulong)uVar19 * 4);
                  *pcVar1 = cVar21;
                  *(short *)(pcVar1 + 2) = (short)(lVar8 - param_1 >> 2) - (short)uVar19;
                  goto LAB_00100403;
                }
                if ((local_fc == 0xf) || (iVar4 = iVar16 - *piVar11, iVar4 < 1)) {
                  iVar4 = 1 << (cVar3 - local_108 & 0x1f);
                  local_104 = local_104 + iVar4;
                  uVar7 = uVar19;
                }
                else {
LAB_001003c3:
                  do {
                    cVar21 = (char)lVar15;
                    if ((int)lVar15 == 0xf) break;
                    iVar4 = iVar4 * 2 - *(int *)(local_c8 + lVar15 * 4);
                    lVar15 = lVar15 + 1;
                  } while (0 < iVar4);
                  iVar4 = 1 << (cVar21 - local_108 & 0x1f);
                  local_104 = local_104 + iVar4;
                  uVar7 = uVar19;
                  if (param_1 != 0) goto LAB_001003e8;
                }
              }
LAB_00100446:
              uVar10 = (ulong)uVar14;
              uVar19 = uVar14;
              if ((uVar14 & uVar6) == 0) {
LAB_001004b0:
                uVar6 = (uVar19 - 1 & uVar6) + uVar19;
              }
              else {
                do {
                  uVar10 = uVar10 >> 1;
                  uVar19 = (uint)uVar10;
                } while ((uVar19 & uVar6) != 0);
                if (uVar19 != 0) goto LAB_001004b0;
              }
              iVar17 = iVar17 + -1;
              *piVar11 = iVar17;
            } while (iVar17 != 0);
          }
          local_d8 = local_fc + 1;
          local_fc = local_d8;
          iVar18 = iVar18 * 2;
          if (local_d8 == 0x10) goto LAB_0010058a;
          local_dc = local_dc + iVar5 * 2;
          iVar5 = iVar5 * 2 - piVar11[1];
          piVar11 = piVar11 + 1;
        } while (-1 < iVar5);
      }
    }
    else {
      iVar5 = 2 - local_c8._4_4_;
      if (-1 < iVar5) {
        local_dc = 3;
        lVar8 = 1;
        uVar6 = 0;
        local_e0 = 0;
        iVar18 = 2;
        do {
          if ((param_1 != 0) && (iVar17 = *(int *)(local_c8 + lVar8 * 4), 0 < iVar17)) {
            uVar13 = 1 << ((char)lVar8 - 1U & 0x1f);
            puVar20 = param_5 + local_e0;
            iVar16 = iVar17;
            do {
              uVar2 = *puVar20;
              lVar15 = (long)iVar18 * -4 + (ulong)uVar6 * 4 + param_1;
              lVar9 = (long)iVar4;
              do {
                *(char *)(lVar15 + lVar9 * 4) = (char)lVar8;
                *(undefined2 *)(lVar15 + 2 + lVar9 * 4) = uVar2;
                lVar9 = lVar9 + -iVar18;
              } while (0 < (int)lVar9);
              uVar10 = (ulong)uVar13;
              uVar7 = uVar13;
              if ((uVar13 & uVar6) == 0) {
LAB_001002a0:
                uVar6 = (uVar7 - 1 & uVar6) + uVar7;
              }
              else {
                do {
                  uVar10 = uVar10 >> 1;
                  uVar7 = (uint)uVar10;
                } while ((uVar7 & uVar6) != 0);
                if (uVar7 != 0) goto LAB_001002a0;
              }
              iVar16 = iVar16 + -1;
              puVar20 = puVar20 + 1;
              *(int *)(local_c8 + lVar8 * 4) = iVar16;
            } while (iVar16 != 0);
            local_e0 = local_e0 + iVar17;
          }
          iVar18 = iVar18 * 2;
          if (param_2 < (int)lVar8 + 1) {
            if (param_2 == 0xf) {
              local_104 = 0x8000;
              goto LAB_0010058a;
            }
            iVar5 = iVar5 * 2;
            local_dc = local_dc + iVar5;
            goto LAB_001002ca;
          }
          local_dc = local_dc + iVar5 * 2;
          iVar5 = iVar5 * 2 - *(int *)(local_c8 + lVar8 * 4 + 4);
          lVar8 = lVar8 + 1;
        } while (-1 < iVar5);
      }
    }
  }
LAB_00100076:
  local_104 = 0;
LAB_0010007e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_104;
LAB_0010058a:
  if (aiStack_88[0xf] * 2 + -1 == local_dc) goto LAB_0010007e;
  goto LAB_00100076;
}



void VP8LHtreeGroupsNew(int param_1)

{
  WebPSafeMalloc((long)param_1,0x238);
  return;
}



void VP8LHtreeGroupsFree(long param_1)

{
  if (param_1 != 0) {
    WebPSafeFree();
    return;
  }
  return;
}



int VP8LBuildHuffmanTable(long param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = BuildHuffmanTable(0);
  if ((iVar2 == 0) || (param_1 == 0)) goto LAB_001006ac;
  plVar4 = *(long **)(param_1 + 0x20);
  iVar5 = (int)plVar4[3];
  if ((ulong)(plVar4[1] + (long)iVar2 * 4) < (ulong)(*plVar4 + (long)iVar5 * 4)) {
joined_r0x00100781:
    if (param_4 < 0x201) {
      BuildHuffmanTable(plVar4[1],param_2,param_3,param_4,local_448);
      goto LAB_001006ac;
    }
    lVar3 = WebPSafeMalloc((long)param_4,2);
    if (lVar3 != 0) {
      BuildHuffmanTable(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,param_3,param_4,lVar3
                       );
      WebPSafeFree(lVar3);
      goto LAB_001006ac;
    }
  }
  else {
    plVar4 = (long *)WebPSafeMalloc(1,0x20);
    if (plVar4 != (long *)0x0) {
      if (iVar5 < iVar2) {
        iVar5 = iVar2;
      }
      *(int *)(plVar4 + 3) = iVar5;
      lVar3 = WebPSafeMalloc((long)iVar5,4);
      *plVar4 = lVar3;
      if (lVar3 != 0) {
        lVar1 = *(long *)(param_1 + 0x20);
        plVar4[1] = lVar3;
        plVar4[2] = 0;
        *(long **)(lVar1 + 0x10) = plVar4;
        *(long **)(param_1 + 0x20) = plVar4;
        goto joined_r0x00100781;
      }
      WebPSafeFree(plVar4);
    }
  }
  iVar2 = 0;
LAB_001006ac:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



undefined8 VP8LHuffmanTablesAllocate(int param_1,long *param_2)

{
  long lVar1;
  
  param_2[4] = (long)param_2;
  param_2[2] = 0;
  lVar1 = WebPSafeMalloc((long)param_1,4);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    param_2[1] = lVar1;
    *(int *)(param_2 + 3) = param_1;
    return 1;
  }
  return 0;
}



void VP8LHuffmanTablesDeallocate(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[2];
    WebPSafeFree(*param_1);
    *param_1 = 0;
    param_1[2] = 0;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)puVar1[2];
      WebPSafeFree(*puVar1);
      WebPSafeFree(puVar1);
      puVar1 = puVar2;
    }
    return;
  }
  return;
}


