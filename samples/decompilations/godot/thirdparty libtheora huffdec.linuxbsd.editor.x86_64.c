
long oc_huff_tree_size(long param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  iVar3 = 0;
  bVar2 = (byte)*(undefined2 *)(param_1 + (long)param_2 * 2);
  iVar4 = 1 << (bVar2 & 0x1f);
  lVar6 = (long)(iVar4 + 1);
  do {
    iVar5 = (int)*(short *)(param_1 + 2 + (long)(iVar3 + param_2) * 2);
    if (iVar5 < 1) {
      iVar3 = iVar3 + (1 << (bVar2 - (char)((uint)-iVar5 >> 8) & 0x1f));
    }
    else {
      iVar3 = iVar3 + 1;
      lVar1 = oc_huff_tree_size();
      lVar6 = lVar6 + lVar1;
    }
  } while (iVar3 < iVar4);
  return lVar6;
}



int oc_huff_subtree_tokens(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  
  iVar25 = 0;
  iVar18 = 0;
  do {
    lVar1 = param_1 + (long)iVar25 * 2;
    uVar20 = (uint)*(byte *)(lVar1 + 1);
    if ((int)(uVar20 - param_2) < 0x20) {
      iVar25 = iVar25 + 1;
      iVar18 = iVar18 + (0x80000000U >> ((byte)(uVar20 - param_2) & 0x1f));
    }
    else {
      iVar18 = iVar18 + 1;
      iVar9 = (uint)*(byte *)(lVar1 + 1) - (param_2 + 0x1f);
      iVar21 = 0;
      iVar22 = 0;
      while( true ) {
        if (iVar9 < 0x20) {
          iVar21 = iVar21 + 1;
          iVar22 = iVar22 + (0x80000000U >> ((byte)iVar9 & 0x1f));
        }
        else {
          iVar22 = iVar22 + 1;
          iVar10 = uVar20 - (param_2 + 0x3e);
          lVar2 = lVar1 + (long)iVar21 * 2;
          iVar9 = 0;
          iVar26 = 0;
          while( true ) {
            if (iVar10 < 0x20) {
              iVar9 = iVar9 + 1;
              iVar26 = iVar26 + (0x80000000U >> ((byte)iVar10 & 0x1f));
            }
            else {
              iVar26 = iVar26 + 1;
              iVar11 = uVar20 - (param_2 + 0x5d);
              lVar3 = lVar2 + (long)iVar9 * 2;
              iVar10 = 0;
              iVar23 = 0;
              while( true ) {
                if (iVar11 < 0x20) {
                  iVar10 = iVar10 + 1;
                  iVar23 = iVar23 + (0x80000000U >> ((byte)iVar11 & 0x1f));
                }
                else {
                  iVar23 = iVar23 + 1;
                  iVar12 = uVar20 - (param_2 + 0x7c);
                  lVar4 = lVar3 + (long)iVar10 * 2;
                  iVar11 = 0;
                  iVar27 = 0;
                  while( true ) {
                    if (iVar12 < 0x20) {
                      iVar11 = iVar11 + 1;
                      iVar27 = iVar27 + (0x80000000U >> ((byte)iVar12 & 0x1f));
                    }
                    else {
                      iVar27 = iVar27 + 1;
                      iVar13 = uVar20 - (param_2 + 0x9b);
                      lVar5 = lVar4 + (long)iVar11 * 2;
                      iVar12 = 0;
                      iVar24 = 0;
                      while( true ) {
                        if (iVar13 < 0x20) {
                          iVar12 = iVar12 + 1;
                          iVar24 = iVar24 + (0x80000000U >> ((byte)iVar13 & 0x1f));
                        }
                        else {
                          iVar24 = iVar24 + 1;
                          lVar6 = lVar5 + (long)iVar12 * 2;
                          iVar13 = 0;
                          iVar14 = uVar20 - (param_2 + 0xba);
                          iVar16 = 0;
                          while( true ) {
                            if (iVar14 < 0x20) {
                              iVar13 = iVar13 + 1;
                              iVar16 = iVar16 + (0x80000000U >> ((byte)iVar14 & 0x1f));
                            }
                            else {
                              iVar16 = iVar16 + 1;
                              lVar8 = lVar6 + (long)iVar13 * 2;
                              iVar15 = uVar20 - (param_2 + 0xd9);
                              iVar14 = 0;
                              iVar28 = 0;
                              while( true ) {
                                if (iVar15 < 0x20) {
                                  iVar14 = iVar14 + 1;
                                  iVar28 = iVar28 + (0x80000000U >> ((byte)iVar15 & 0x1f));
                                }
                                else {
                                  iVar28 = iVar28 + 1;
                                  iVar17 = 0;
                                  iVar19 = 0;
                                  lVar7 = lVar8 + (long)iVar14 * 2;
                                  iVar15 = uVar20 - (param_2 + 0xf8);
                                  while( true ) {
                                    if (iVar15 < 0x20) {
                                      iVar17 = iVar17 + 1;
                                      iVar19 = iVar19 + (0x80000000U >> ((byte)iVar15 & 0x1f));
                                    }
                                    else {
                                      iVar19 = iVar19 + 1;
                                      iVar15 = oc_huff_subtree_tokens
                                                         (lVar7 + (long)iVar17 * 2,param_2 + 0x117);
                                      iVar17 = iVar17 + iVar15;
                                    }
                                    if (iVar19 < 0) break;
                                    iVar15 = (uint)*(byte *)(lVar7 + 1 + (long)iVar17 * 2) -
                                             (param_2 + 0xf8);
                                  }
                                  iVar14 = iVar14 + iVar17;
                                }
                                if (iVar28 < 0) break;
                                uVar20 = (uint)*(byte *)(lVar8 + 1 + (long)iVar14 * 2);
                                iVar15 = uVar20 - (param_2 + 0xd9);
                              }
                              iVar13 = iVar13 + iVar14;
                            }
                            if (iVar16 < 0) break;
                            uVar20 = (uint)*(byte *)(lVar6 + 1 + (long)iVar13 * 2);
                            iVar14 = uVar20 - (param_2 + 0xba);
                          }
                          iVar12 = iVar12 + iVar13;
                        }
                        if (iVar24 < 0) break;
                        uVar20 = (uint)*(byte *)(lVar5 + 1 + (long)iVar12 * 2);
                        iVar13 = uVar20 - (param_2 + 0x9b);
                      }
                      iVar11 = iVar11 + iVar12;
                    }
                    if (iVar27 < 0) break;
                    uVar20 = (uint)*(byte *)(lVar4 + 1 + (long)iVar11 * 2);
                    iVar12 = uVar20 - (param_2 + 0x7c);
                  }
                  iVar10 = iVar10 + iVar11;
                }
                if (iVar23 < 0) break;
                uVar20 = (uint)*(byte *)(lVar3 + 1 + (long)iVar10 * 2);
                iVar11 = uVar20 - (param_2 + 0x5d);
              }
              iVar9 = iVar9 + iVar10;
            }
            if (iVar26 < 0) break;
            uVar20 = (uint)*(byte *)(lVar2 + 1 + (long)iVar9 * 2);
            iVar10 = uVar20 - (param_2 + 0x3e);
          }
          iVar21 = iVar21 + iVar9;
        }
        if (iVar22 < 0) break;
        uVar20 = (uint)*(byte *)(lVar1 + 1 + (long)iVar21 * 2);
        iVar9 = uVar20 - (param_2 + 0x1f);
      }
      iVar25 = iVar25 + iVar21;
    }
  } while (-1 < iVar18);
  return iVar25;
}



long oc_huff_tree_collapse(long param_1,long param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  long in_FS_OFFSET;
  bool bVar26;
  short asStack_e8 [40];
  byte local_98 [48];
  byte local_68 [40];
  long local_40;
  
  lVar12 = 0;
  bVar10 = param_3 - 1;
  uVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98[0] = 0;
  local_68[0] = bVar10;
  iVar22 = 0;
  lVar16 = 0;
LAB_00100540:
  uVar14 = (uint)bVar10;
  iVar15 = 1;
  iVar13 = (uVar14 + 1) - iVar22;
  if (0 < iVar13) {
    uVar23 = uVar9 + 2;
    iVar18 = 2;
    iVar15 = 1;
    iVar20 = 2;
    do {
      iVar11 = 0;
      iVar21 = 0;
      bVar26 = false;
      do {
        while( true ) {
          bVar5 = bVar26;
          iVar24 = iVar21;
          lVar25 = param_2 + ((long)iVar11 + (long)iVar22) * 2;
          uVar7 = (uint)*(byte *)(lVar25 + 1);
          if ((int)uVar23 <= (int)uVar7) break;
          iVar11 = iVar11 + 1;
LAB_001005e3:
          iVar21 = iVar24 + 1;
          bVar26 = bVar5;
          if (iVar13 <= iVar11) goto LAB_00100616;
        }
        if (uVar7 != uVar23) {
          iVar19 = 0;
          iVar8 = uVar7 - uVar23;
          iVar21 = 0;
          iVar6 = 0;
          if (0x1f < iVar8) goto LAB_001006ba;
          do {
            iVar21 = iVar21 + 1;
            iVar19 = iVar6 + (0x80000000U >> ((byte)iVar8 & 0x1f));
            while( true ) {
              if (iVar19 < 0) {
                iVar11 = iVar11 + iVar21;
                goto LAB_001005e3;
              }
              iVar8 = *(byte *)(lVar25 + 1 + (long)iVar21 * 2) - uVar23;
              iVar6 = iVar19;
              if (iVar8 < 0x20) break;
LAB_001006ba:
              iVar19 = iVar19 + 1;
              iVar6 = oc_huff_subtree_tokens(lVar25 + (long)iVar21 * 2,uVar23 + 0x1f);
              iVar21 = iVar21 + iVar6;
            }
          } while( true );
        }
        iVar11 = iVar11 + 1;
        bVar5 = true;
        iVar21 = iVar24 + 1;
        bVar26 = true;
      } while (iVar11 < iVar13);
LAB_00100616:
      iVar24 = iVar24 + 1;
      if ((iVar24 <= iVar20) ||
         (uVar23 = uVar23 + 1,
         (int)(((-(uint)(uVar9 == 0) & 5) + 2) * iVar24) < 1 << ((byte)iVar18 & 0x1f)))
      goto LAB_001006f1;
      if (bVar5) {
        iVar15 = iVar18;
      }
      iVar18 = iVar18 + 1;
      iVar20 = iVar24;
    } while( true );
  }
  goto LAB_00100710;
LAB_001006f1:
  lVar12 = (long)(int)lVar12;
LAB_00100710:
  lVar25 = ((1 << ((byte)iVar15 & 0x1f)) + 1) + lVar16;
  sVar17 = (short)lVar16;
  if (param_1 == 0) {
    asStack_e8[(int)lVar12] = sVar17;
  }
  else {
    asStack_e8[(int)lVar12] = sVar17 + 1;
    *(short *)(param_1 + (long)sVar17 * 2) = (short)iVar15;
  }
LAB_00100748:
  iVar13 = (int)lVar12;
  if ((int)uVar14 < iVar22) {
    iVar20 = iVar13 + -1;
    if (iVar13 < 1) goto LAB_00100850;
    pbVar1 = local_98 + lVar12;
    lVar12 = (long)iVar20;
    uVar14 = (uint)local_68[iVar20];
    iVar15 = (uint)*pbVar1 - (uint)local_98[iVar20];
    goto LAB_00100748;
  }
  lVar16 = (long)iVar22;
  bVar10 = local_98[iVar13];
  pbVar1 = (byte *)(param_2 + lVar16 * 2);
  bVar2 = pbVar1[1];
  uVar9 = (uint)bVar10 + iVar15;
  if ((int)(uint)bVar2 <= (int)uVar9) {
    if (param_1 != 0) {
      iVar18 = 1 << ((char)uVar9 - bVar2 & 0x1f);
      bVar3 = *pbVar1;
      iVar20 = iVar18 + -1;
      if (0 < iVar18) {
        sVar17 = asStack_e8[iVar13];
        sVar4 = (short)iVar20;
        do {
          *(ushort *)(param_1 + (long)(short)((sVar17 + sVar4) - (short)iVar20) * 2) =
               -(((ushort)bVar2 - (ushort)bVar10) * 0x100 | (ushort)bVar3);
          bVar26 = iVar20 != 0;
          iVar20 = iVar20 + -1;
        } while (bVar26);
        asStack_e8[iVar13] = sVar17 + 1 + sVar4;
      }
    }
    iVar22 = iVar22 + 1;
    goto LAB_00100748;
  }
  iVar20 = iVar13 + 1;
  local_98[iVar20] = bVar10 + (char)iVar15;
  if (param_1 != 0) {
    sVar17 = asStack_e8[iVar13];
    *(short *)(param_1 + (long)sVar17 * 2) = (short)lVar25;
    bVar2 = pbVar1[1];
    asStack_e8[iVar13] = sVar17 + 1;
  }
  uVar9 = uVar9 & 0xff;
  iVar15 = 0;
  iVar13 = bVar2 - uVar9;
  iVar18 = 0;
  while( true ) {
    if (iVar13 < 0x20) {
      iVar18 = iVar18 + 1;
      iVar15 = iVar15 + (0x80000000U >> ((byte)iVar13 & 0x1f));
    }
    else {
      iVar15 = iVar15 + 1;
      iVar13 = oc_huff_subtree_tokens(param_2 + (iVar18 + lVar16) * 2,uVar9 + 0x1f);
      iVar18 = iVar18 + iVar13;
    }
    if (iVar15 < 0) break;
    iVar13 = *(byte *)(param_2 + 1 + (iVar18 + lVar16) * 2) - uVar9;
  }
  local_68[iVar20] = (char)iVar22 + -1 + (char)iVar18;
LAB_00100850:
  if (iVar20 < 0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return lVar25;
  }
  lVar12 = (long)iVar20;
  uVar9 = (uint)local_98[iVar20];
  bVar10 = local_68[iVar20];
  lVar16 = lVar25;
  goto LAB_00100540;
}



int oc_huff_tree_unpack(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  iVar10 = 0;
  uVar9 = 0;
  iVar8 = 0;
  iVar7 = 0;
  while( true ) {
    while( true ) {
      iVar3 = oc_pack_read1_c(param_1);
      lVar5 = oc_pack_bytes_left(param_1);
      if (lVar5 < 0) {
        return -0x14;
      }
      if (iVar3 != 0) break;
      iVar10 = iVar10 + 1;
      if (0x20 < iVar10) {
        return -0x14;
      }
    }
    iVar8 = iVar8 + 1;
    if (0x20 < iVar8) break;
    lVar5 = oc_pack_read_c(param_1,5);
    bVar1 = OC_DCT_TOKEN_MAP_LOG_NENTRIES[lVar5];
    bVar2 = OC_DCT_TOKEN_MAP[lVar5];
    uVar4 = (uint)bVar2;
    iVar3 = 1 << (bVar1 & 0x1f);
    if (0 < iVar3) {
      puVar6 = (undefined1 *)(param_2 + (long)iVar7 * 2);
      do {
        *puVar6 = (char)uVar4;
        uVar4 = uVar4 + 1;
        puVar6[1] = bVar1 + (char)iVar10;
        puVar6 = puVar6 + 2;
      } while (uVar4 != iVar3 + (uint)bVar2);
      iVar7 = iVar3 + iVar7;
    }
    uVar4 = 0x80000000 >> ((byte)(iVar10 + -1) & 0x1f);
    if (iVar10 < 1) {
      return iVar7;
    }
    iVar3 = iVar10 + -1;
    if ((uVar9 & uVar4) != 0) {
      while( true ) {
        iVar10 = iVar3;
        uVar9 = uVar9 ^ uVar4;
        uVar4 = uVar4 * 2;
        if (iVar10 == 0) {
          return iVar7;
        }
        if ((uVar9 & uVar4) == 0) break;
        iVar3 = iVar10 + -1;
      }
    }
    uVar9 = uVar9 | uVar4;
  }
  return -0x14;
}



int oc_huff_trees_unpack(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined1 auStack_248 [520];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar5 = param_2;
  do {
    iVar1 = oc_huff_tree_unpack(param_1,auStack_248);
    if (iVar1 < 0) goto LAB_00100b00;
    uVar2 = oc_huff_tree_collapse(0,auStack_248,iVar1);
    if (0x7fff < uVar2) {
      iVar1 = -0x17;
      goto LAB_00100b00;
    }
    pvVar3 = malloc(uVar2 * 2);
    if (pvVar3 == (void *)0x0) {
      iVar1 = -1;
      goto LAB_00100b00;
    }
    puVar4 = puVar5 + 1;
    oc_huff_tree_collapse(pvVar3,auStack_248,iVar1);
    *puVar5 = pvVar3;
    puVar5 = puVar4;
  } while (puVar4 != param_2 + 0x50);
  iVar1 = 0;
LAB_00100b00:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 oc_huff_trees_copy(long param_1,long param_2)

{
  size_t __size;
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = 0;
  do {
    lVar2 = oc_huff_tree_size(*(undefined8 *)(param_2 + lVar4 * 8),0);
    __size = lVar2 * 2;
    pvVar3 = malloc(__size);
    *(void **)(param_1 + lVar4 * 8) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      uVar1 = (int)lVar4 - 1;
      if ((int)lVar4 != 0) {
        lVar4 = (long)(int)uVar1 * 8;
        puVar5 = (undefined8 *)(param_1 + lVar4);
        do {
          pvVar3 = (void *)*puVar5;
          puVar5 = puVar5 + -1;
          free(pvVar3);
        } while (puVar5 != (undefined8 *)(param_1 + -8 + lVar4 + (ulong)uVar1 * -8));
      }
      return 0xffffffff;
    }
    lVar2 = lVar4 * 8;
    lVar4 = lVar4 + 1;
    __memcpy_chk(pvVar3,*(undefined8 *)(param_2 + lVar2),__size,__size);
  } while (lVar4 != 0x50);
  return 0;
}



void oc_huff_trees_clear(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *__ptr;
  
  puVar1 = param_1 + 0x50;
  do {
    __ptr = (void *)*param_1;
    param_1 = param_1 + 1;
    free(__ptr);
  } while (param_1 != puVar1);
  return;
}



uint oc_huff_token_decode_c(undefined8 *param_1,long param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  
  iVar4 = 0;
  iVar7 = *(int *)(param_1 + 3);
  pbVar6 = (byte *)param_1[1];
  uVar8 = param_1[2];
  do {
    sVar3 = *(short *)(param_2 + (long)iVar4 * 2);
    if (iVar7 < sVar3) {
      uVar5 = 0x40 - iVar7;
      do {
        if ((byte *)*param_1 <= pbVar6) {
          iVar7 = 0x40000040;
          goto LAB_00100c58;
        }
        bVar1 = *pbVar6;
        uVar5 = uVar5 - 8;
        pbVar6 = pbVar6 + 1;
        uVar8 = uVar8 | (ulong)bVar1 << ((byte)uVar5 & 0x3f);
      } while (7 < uVar5);
      iVar7 = 0x40 - uVar5;
    }
LAB_00100c58:
    sVar2 = *(short *)(param_2 + ((long)(iVar4 + 1) + (uVar8 >> (-(byte)sVar3 & 0x3f))) * 2);
    iVar4 = (int)sVar2;
    if (sVar2 < 1) {
      uVar5 = -iVar4;
      param_1[1] = pbVar6;
      param_1[2] = uVar8 << ((byte)(uVar5 >> 8) & 0x3f);
      *(int *)(param_1 + 3) = iVar7 - ((int)uVar5 >> 8);
      return uVar5 & 0xff;
    }
    iVar7 = iVar7 - sVar3;
    uVar8 = uVar8 << ((byte)sVar3 & 0x3f);
  } while( true );
}


