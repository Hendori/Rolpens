
/* rcBuildHeightfieldLayers(rcContext*, rcCompactHeightfield const&, int, int,
   rcHeightfieldLayerSet&) */

undefined8
rcBuildHeightfieldLayers
          (rcContext *param_1,rcCompactHeightfield *param_2,int param_3,int param_4,
          rcHeightfieldLayerSet *param_5)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  void *__s;
  ushort *puVar19;
  ulong uVar20;
  ushort *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  void *pvVar24;
  size_t __n;
  undefined8 *puVar25;
  long lVar26;
  int iVar27;
  ulong uVar28;
  byte *pbVar29;
  byte bVar30;
  ushort uVar31;
  int iVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  undefined8 uVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  int iVar40;
  int *piVar41;
  int iVar42;
  uint *puVar43;
  long lVar44;
  int *piVar45;
  byte *pbVar46;
  byte bVar47;
  byte *pbVar48;
  ushort uVar49;
  int iVar50;
  ulong uVar51;
  uint uVar52;
  int iVar53;
  int iVar54;
  long lVar55;
  byte bVar56;
  long lVar57;
  long in_FS_OFFSET;
  bool bVar58;
  byte bVar59;
  float fVar60;
  ulong local_650;
  byte *local_648;
  uint local_588 [256];
  byte local_188 [64];
  byte local_148 [256];
  byte local_48 [8];
  long local_40;
  
  bVar59 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x28) != rcContext::doStartTimer)) {
    (**(code **)(*(long *)param_1 + 0x28))(param_1,0x19);
  }
  iVar12 = *(int *)param_2;
  iVar27 = *(int *)(param_2 + 4);
  __s = (void *)rcAlloc((long)*(int *)(param_2 + 8),1);
  if (__s == (void *)0x0) {
    uVar36 = 0;
    rcContext::log(param_1,3,"rcBuildHeightfieldLayers: Out of memory \'srcReg\' (%d).",
                   *(undefined4 *)(param_2 + 8));
    goto LAB_00100a9a;
  }
  memset(__s,0xff,(long)*(int *)(param_2 + 8));
  iVar15 = *(int *)param_2;
  puVar19 = (ushort *)rcAlloc((long)iVar15 << 2,1);
  if (puVar19 != (ushort *)0x0) {
    iVar15 = iVar27 - param_3;
    if (param_3 < iVar15) {
      uVar51 = 0;
      bVar56 = 0;
      iVar37 = iVar12 * param_3;
      iVar50 = iVar12 - param_3;
      iVar39 = iVar37 + -1 + iVar50;
      iVar17 = param_3;
      do {
        uVar20 = uVar51 * 4;
        puVar43 = local_588;
        if (7 < (uint)uVar20) {
          for (uVar28 = uVar20 >> 3; uVar28 != 0; uVar28 = uVar28 - 1) {
            puVar43[0] = 0;
            puVar43[1] = 0;
            puVar43 = puVar43 + ((ulong)bVar59 * -2 + 1) * 2;
          }
        }
        if ((uVar20 & 4) != 0) {
          *puVar43 = 0;
        }
        if (param_3 < iVar50) {
          bVar47 = 0;
          lVar44 = ((long)param_3 + (long)iVar37) * 4;
          iVar54 = param_3 + -1 + iVar37;
          lVar57 = lVar44;
          do {
            uVar16 = *(uint *)(*(long *)(param_2 + 0x40) + lVar57) & 0xffffff;
            uVar20 = (ulong)uVar16;
            uVar34 = *(byte *)(*(long *)(param_2 + 0x40) + lVar57 + 3) + uVar16;
            if (uVar16 < uVar34) {
              do {
                if (*(char *)(*(long *)(param_2 + 0x58) + uVar20) != '\0') {
                  uVar16 = *(uint *)(*(long *)(param_2 + 0x48) + 4 + uVar20 * 8);
                  uVar38 = uVar16 & 0x3f;
                  if (((uVar38 == 0x3f) ||
                      (lVar55 = (long)(int)((*(uint *)(*(long *)(param_2 + 0x40) + (long)iVar54 * 4)
                                            & 0xffffff) + uVar38),
                      *(char *)(*(long *)(param_2 + 0x58) + lVar55) == '\0')) ||
                     (bVar14 = *(byte *)((long)__s + lVar55), bVar14 == 0xff)) {
                    *(undefined1 *)((long)(puVar19 + (ulong)bVar47 * 2) + 3) = 0xff;
                    puVar19[(ulong)bVar47 * 2] = 0;
                    bVar14 = bVar47;
                    bVar47 = bVar47 + 1;
                  }
                  iVar53 = (int)(uVar16 & 0xffffff) >> 0x12;
                  if (iVar53 != 0x3f) {
                    bVar30 = *(byte *)((long)__s +
                                      (long)(int)((*(uint *)(*(long *)(param_2 + 0x40) +
                                                            (long)((1 - iVar12) + iVar54) * 4) &
                                                  0xffffff) + iVar53));
                    if (bVar30 != 0xff) {
                      puVar21 = puVar19 + (ulong)bVar14 * 2;
                      if (*puVar21 == 0) {
                        *(byte *)((long)puVar21 + 3) = bVar30;
                      }
                      else if (*(byte *)((long)puVar21 + 3) != bVar30) {
                        *(undefined1 *)((long)puVar21 + 3) = 0xff;
                        goto LAB_00100298;
                      }
                      *puVar21 = *puVar21 + 1;
                      local_588[bVar30] = local_588[bVar30] + 1;
                    }
                  }
LAB_00100298:
                  *(byte *)((long)__s + uVar20) = bVar14;
                }
                uVar20 = uVar20 + 1;
              } while ((int)uVar20 < (int)uVar34);
            }
            lVar57 = lVar57 + 4;
            iVar54 = iVar54 + 1;
          } while (iVar39 != iVar54);
          if (bVar47 != 0) {
            puVar21 = puVar19;
            bVar14 = bVar56;
            do {
              bVar30 = *(byte *)((long)puVar21 + 3);
              if ((bVar30 == 0xff) || (bVar56 = bVar14, local_588[bVar30] != (uint)*puVar21)) {
                if (bVar14 == 0xff) {
                  rcContext::log(param_1,3,"rcBuildHeightfieldLayers: Region ID overflow.");
                  goto LAB_00100a8e;
                }
                bVar56 = bVar14 + 1;
                bVar30 = bVar14;
              }
              *(byte *)(puVar21 + 1) = bVar30;
              puVar21 = puVar21 + 2;
              bVar14 = bVar56;
            } while (puVar19 + (ulong)(bVar47 - 1) * 2 + 2 != puVar21);
            uVar51 = (ulong)bVar56;
          }
          do {
            uVar34 = *(uint *)(*(long *)(param_2 + 0x40) + lVar44) & 0xffffff;
            uVar16 = *(byte *)(*(long *)(param_2 + 0x40) + lVar44 + 3) + uVar34;
            if (uVar34 < uVar16) {
              pbVar22 = (byte *)((ulong)uVar34 + (long)__s);
              pbVar29 = pbVar22 + (uVar16 - uVar34);
              do {
                if (*pbVar22 != 0xff) {
                  *pbVar22 = (byte)puVar19[(ulong)*pbVar22 * 2 + 1];
                }
                pbVar22 = pbVar22 + 1;
              } while (pbVar29 != pbVar22);
            }
            lVar44 = lVar44 + 4;
          } while (((long)iVar37 + (ulong)(uint)(iVar50 - param_3) + (long)param_3) * 4 - lVar44 !=
                   0);
        }
        iVar17 = iVar17 + 1;
        iVar37 = iVar37 + iVar12;
        iVar39 = iVar39 + iVar12;
      } while (iVar15 != iVar17);
      uVar16 = (uint)bVar56;
      local_648 = (byte *)rcAlloc(uVar51 * 0x58);
      if (local_648 != (byte *)0x0) {
        memset(local_648,0,uVar51 * 0x58);
        uVar6 = _LC4;
        if (uVar16 == 0) goto LAB_00100bea;
        pbVar22 = local_648 + 0x50;
        do {
          pbVar22[4] = 0xff;
          pbVar29 = pbVar22 + 0x58;
          *(undefined4 *)pbVar22 = uVar6;
          pbVar22 = pbVar29;
        } while (local_648 + (ulong)(uVar16 - 1) * 0x58 + 0xa8 != pbVar29);
        if (iVar27 < 1) goto LAB_00100848;
LAB_001004c6:
        if (0 < iVar12) {
          iVar39 = 0;
          iVar17 = 0;
          do {
            iVar37 = 0;
            lVar44 = (long)iVar17 * 4;
            do {
              uVar38 = *(uint *)(*(long *)(param_2 + 0x40) + lVar44) & 0xffffff;
              uVar34 = *(byte *)(*(long *)(param_2 + 0x40) + lVar44 + 3) + uVar38;
              local_650 = (ulong)uVar38;
              if (uVar38 < uVar34) {
                iVar50 = 0;
                do {
                  bVar56 = *(byte *)((long)__s + local_650);
                  if (bVar56 != 0xff) {
                    puVar21 = (ushort *)(*(long *)(param_2 + 0x48) + local_650 * 8);
                    uVar31 = *(ushort *)(local_648 + (ulong)bVar56 * 0x58 + 0x50);
                    if (*puVar21 < *(ushort *)(local_648 + (ulong)bVar56 * 0x58 + 0x50)) {
                      uVar31 = *puVar21;
                    }
                    *(ushort *)(local_648 + (ulong)bVar56 * 0x58 + 0x50) = uVar31;
                    uVar31 = *(ushort *)(local_648 + (ulong)bVar56 * 0x58 + 0x52);
                    if (*(ushort *)(local_648 + (ulong)bVar56 * 0x58 + 0x52) < *puVar21) {
                      uVar31 = *puVar21;
                    }
                    *(ushort *)(local_648 + (ulong)bVar56 * 0x58 + 0x52) = uVar31;
                    if (iVar50 < 0x3f) {
                      lVar57 = (long)iVar50;
                      iVar50 = iVar50 + 1;
                      local_148[lVar57] = bVar56;
                    }
                    piVar45 = &rcGetDirOffsetX(int)::offset;
                    piVar41 = &rcGetDirOffsetY(int)::offset;
                    iVar54 = 0;
                    do {
                      uVar38 = (int)(*(uint *)(puVar21 + 2) & 0xffffff) >> ((byte)iVar54 & 0x1f) &
                               0x3f;
                      if (((uVar38 != 0x3f) &&
                          (bVar47 = *(byte *)((long)__s +
                                             (long)(int)(uVar38 + (*(uint *)(*(long *)(param_2 +
                                                                                      0x40) +
                                                                            (long)((*piVar41 +
                                                                                   iVar39) * iVar12
                                                                                  + *piVar45 +
                                                                                    iVar37) * 4) &
                                                                  0xffffff))), bVar47 != 0xff)) &&
                         (bVar56 != bVar47)) {
                        bVar14 = local_648[(ulong)bVar56 * 0x58 + 0x56];
                        pbVar22 = local_648 + (ulong)bVar56 * 0x58 + 0x3f;
                        if (bVar14 != 0) {
                          do {
                            if (bVar47 == *pbVar22) goto LAB_00100670;
                            pbVar22 = pbVar22 + 1;
                          } while (local_648 + (ulong)(bVar14 - 1) + (ulong)bVar56 * 0x58 + 0x40 !=
                                   pbVar22);
                          if (0xf < bVar14) goto LAB_00100670;
                        }
                        local_648[(ulong)bVar14 + (ulong)bVar56 * 0x58 + 0x3f] = bVar47;
                        local_648[(ulong)bVar56 * 0x58 + 0x56] =
                             local_648[(ulong)bVar56 * 0x58 + 0x56] + 1;
                      }
LAB_00100670:
                      iVar54 = iVar54 + 6;
                      piVar45 = piVar45 + 1;
                      piVar41 = piVar41 + 1;
                    } while (iVar54 != 0x18);
                  }
                  local_650 = local_650 + 1;
                } while ((int)local_650 < (int)uVar34);
                if (1 < iVar50) {
                  pbVar22 = local_148;
                  iVar54 = 0;
                  do {
                    iVar54 = iVar54 + 1;
                    if (iVar54 < iVar50) {
                      bVar56 = *pbVar22;
                      pbVar29 = local_648 + (ulong)bVar56 * 0x58;
                      pbVar46 = pbVar22;
                      do {
                        bVar47 = pbVar46[1];
                        if (bVar56 != bVar47) {
                          bVar14 = pbVar29[0x55];
                          pbVar48 = local_648 + (ulong)bVar47 * 0x58;
                          if (bVar14 != 0) {
                            pbVar23 = pbVar29;
                            do {
                              if (bVar47 == *pbVar23) goto LAB_00100789;
                              pbVar23 = pbVar23 + 1;
                            } while (pbVar29 + (ulong)(bVar14 - 1) + 1 != pbVar23);
                            if (0x3e < bVar14) goto LAB_00100b66;
                          }
                          pbVar29[bVar14] = bVar47;
                          pbVar29[0x55] = pbVar29[0x55] + 1;
LAB_00100789:
                          bVar47 = pbVar48[0x55];
                          if (bVar47 != 0) {
                            pbVar23 = pbVar48;
                            do {
                              if (bVar56 == *pbVar23) goto LAB_001007c2;
                              pbVar23 = pbVar23 + 1;
                            } while (pbVar48 + (ulong)(bVar47 - 1) + 1 != pbVar23);
                            if (0x3e < bVar47) goto LAB_00100b66;
                          }
                          pbVar48[bVar47] = bVar56;
                          pbVar48[0x55] = pbVar48[0x55] + 1;
                        }
LAB_001007c2:
                        pbVar46 = pbVar46 + 1;
                      } while (pbVar22 + (ulong)(uint)((iVar50 + -1) - iVar54) + 1 != pbVar46);
                    }
                    pbVar22 = pbVar22 + 1;
                  } while (iVar54 != iVar50 + -1);
                }
              }
              iVar37 = iVar37 + 1;
              lVar44 = lVar44 + 4;
            } while (iVar12 != iVar37);
            iVar39 = iVar39 + 1;
            iVar17 = iVar17 + iVar12;
          } while (iVar39 < iVar27);
        }
        if (uVar16 != 0) {
LAB_00100848:
          bVar47 = 0;
          bVar56 = local_648[0x54];
          uVar34 = 0;
          pbVar22 = local_648;
joined_r0x00100869:
          if (bVar56 == 0xff) {
            pbVar22[0x54] = bVar47;
            uVar51 = (ulong)(uVar34 & 0xff);
            pbVar22[0x57] = 1;
            uVar38 = 1;
            local_188[0] = (byte)uVar34;
            do {
              uVar38 = uVar38 - 1;
              pbVar29 = local_648 + uVar51 * 0x58;
              if ((int)uVar38 < 1) {
                while (bVar56 = pbVar29[0x56], bVar56 == 0) {
                  if (uVar38 == 0) goto LAB_00100d1a;
                  uVar38 = uVar38 - 1;
                  pbVar29 = local_648 + (ulong)local_188[0] * 0x58;
                }
LAB_00100923:
                pbVar46 = pbVar29 + 0x3f;
                do {
                  bVar14 = *pbVar46;
                  if (local_648[(ulong)bVar14 * 0x58 + 0x54] == 0xff) {
                    if (pbVar22[0x55] != 0) {
                      pbVar48 = pbVar22;
                      do {
                        if (bVar14 == *pbVar48) goto LAB_00100940;
                        pbVar48 = pbVar48 + 1;
                      } while (pbVar22 + (ulong)(pbVar22[0x55] - 1) + 1 != pbVar48);
                    }
                    uVar31 = *(ushort *)(local_648 + (ulong)bVar14 * 0x58 + 0x52);
                    if (*(ushort *)(local_648 + (ulong)bVar14 * 0x58 + 0x52) <
                        *(ushort *)(pbVar22 + 0x52)) {
                      uVar31 = *(ushort *)(pbVar22 + 0x52);
                    }
                    uVar49 = *(ushort *)(local_648 + (ulong)bVar14 * 0x58 + 0x50);
                    if (*(ushort *)(pbVar22 + 0x50) <
                        *(ushort *)(local_648 + (ulong)bVar14 * 0x58 + 0x50)) {
                      uVar49 = *(ushort *)(pbVar22 + 0x50);
                    }
                    if (((int)((uint)uVar31 - (uint)uVar49) < 0xff) && ((int)uVar38 < 0x40)) {
                      local_648[(ulong)bVar14 * 0x58 + 0x54] = bVar47;
                      local_188[(int)uVar38] = bVar14;
                      lVar44 = 0;
                      if (local_648[(ulong)bVar14 * 0x58 + 0x55] != 0) {
                        do {
                          bVar30 = pbVar22[0x55];
                          if (bVar30 != 0) {
                            pbVar48 = pbVar22;
                            do {
                              if (local_648[lVar44 + (ulong)bVar14 * 0x58] == *pbVar48)
                              goto LAB_00100a1c;
                              pbVar48 = pbVar48 + 1;
                            } while (pbVar22 + (ulong)(bVar30 - 1) + 1 != pbVar48);
                            if (0x3e < bVar30) goto LAB_00100b66;
                          }
                          pbVar22[bVar30] = local_648[lVar44 + (ulong)bVar14 * 0x58];
                          pbVar22[0x55] = pbVar22[0x55] + 1;
LAB_00100a1c:
                          lVar44 = lVar44 + 1;
                        } while ((int)lVar44 < (int)(uint)local_648[(ulong)bVar14 * 0x58 + 0x55]);
                      }
                      uVar38 = uVar38 + 1;
                      uVar31 = *(ushort *)(pbVar22 + 0x50);
                      if (*(ushort *)(local_648 + (ulong)bVar14 * 0x58 + 0x50) <
                          *(ushort *)(pbVar22 + 0x50)) {
                        uVar31 = *(ushort *)(local_648 + (ulong)bVar14 * 0x58 + 0x50);
                      }
                      *(ushort *)(pbVar22 + 0x50) = uVar31;
                      uVar31 = *(ushort *)(pbVar22 + 0x52);
                      if (*(ushort *)(pbVar22 + 0x52) <
                          *(ushort *)(local_648 + (ulong)bVar14 * 0x58 + 0x52)) {
                        uVar31 = *(ushort *)(local_648 + (ulong)bVar14 * 0x58 + 0x52);
                      }
                      *(ushort *)(pbVar22 + 0x52) = uVar31;
                    }
                  }
LAB_00100940:
                  pbVar46 = pbVar46 + 1;
                } while (pbVar29 + (ulong)(bVar56 - 1) + 0x40 != pbVar46);
                if (uVar38 == 0) goto LAB_00100d1a;
              }
              else {
                memmove(local_188,local_188 + 1,(ulong)uVar38);
                bVar56 = pbVar29[0x56];
                if (bVar56 != 0) goto LAB_00100923;
              }
              uVar51 = (ulong)local_188[0];
            } while( true );
          }
          goto LAB_0010086b;
        }
LAB_00100bf5:
        uVar38 = 0;
        pbVar22 = local_648 + 0x54;
        goto LAB_00100c01;
      }
    }
    else {
      local_648 = (byte *)rcAlloc(0,1);
      uVar16 = 0;
      if (local_648 != (byte *)0x0) {
LAB_00100bea:
        uVar16 = 0;
        if (0 < iVar27) goto LAB_001004c6;
        goto LAB_00100bf5;
      }
    }
    uVar36 = 0;
    rcContext::log(param_1,3,"rcBuildHeightfieldLayers: Out of memory \'regs\' (%d).",uVar16);
    local_648 = (byte *)0x0;
    goto LAB_00100b7e;
  }
  rcContext::log(param_1,3,"rcBuildHeightfieldLayers: Out of memory \'sweeps\' (%d).",iVar15);
LAB_00100a8e:
  uVar36 = 0;
  goto LAB_00100a90;
LAB_00100d1a:
  bVar47 = bVar47 + 1;
LAB_0010086b:
  uVar38 = uVar34 + 1;
  if (uVar38 == uVar16) goto LAB_00100c97;
  bVar56 = pbVar22[0xac];
  uVar34 = uVar38;
  pbVar22 = pbVar22 + 0x58;
  goto joined_r0x00100869;
LAB_00100d87:
  puVar21 = puVar21 + 0x2c;
  bVar58 = uVar34 == uVar35;
  uVar35 = uVar35 + 1;
  if (bVar58) goto LAB_00100cc4;
  goto LAB_00100d99;
LAB_00100b66:
  rcContext::log(param_1,3,
                 "rcBuildHeightfieldLayers: layer overflow (too many overlapping walkable platforms). Try increasing RC_MAX_LAYERS."
                );
LAB_00100b7c:
  uVar36 = 0;
  goto LAB_00100b7e;
LAB_00100c97:
  uVar52 = param_4 * 4;
  pbVar22 = local_648 + 0x54;
  pbVar29 = local_648;
  uVar16 = 0;
  do {
    if (pbVar29[0x57] != 0) {
      bVar56 = pbVar29[0x54];
      do {
        puVar21 = (ushort *)(local_648 + 0x50);
        uVar35 = 0;
LAB_00100d99:
        if ((uVar16 == uVar35) || (*(byte *)((long)puVar21 + 7) == 0)) goto LAB_00100d87;
        uVar10 = puVar21[1];
        uVar31 = *(ushort *)(pbVar29 + 0x50);
        uVar49 = *puVar21;
        uVar11 = *(ushort *)(pbVar29 + 0x52);
        if (((ushort)(uVar10 + (short)uVar52) < uVar31) ||
           ((ushort)(uVar11 + (short)uVar52) < uVar49)) goto LAB_00100d87;
        if (uVar10 < uVar11) {
          uVar10 = uVar11;
        }
        if (uVar49 <= uVar31) {
          uVar31 = uVar49;
        }
        if (0xfe < (int)((uint)uVar10 - (uint)uVar31)) goto LAB_00100d87;
        bVar47 = (byte)puVar21[2];
        pbVar46 = pbVar22;
        uVar18 = 0;
        do {
          if ((*pbVar46 == bVar47) && (pbVar29[0x55] != 0)) {
            pbVar48 = pbVar29;
            do {
              if (*pbVar48 == (byte)uVar18) goto LAB_00100d87;
              pbVar48 = pbVar48 + 1;
            } while (pbVar48 != pbVar29 + (ulong)(pbVar29[0x55] - 1) + 1);
          }
          pbVar46 = pbVar46 + 0x58;
          bVar58 = uVar34 != uVar18;
          uVar18 = uVar18 + 1;
        } while (bVar58);
        if (bVar47 == 0xff) break;
        pbVar46 = local_648;
        iVar27 = 0;
        do {
          if (bVar47 == pbVar46[0x54]) {
            lVar44 = 0;
            pbVar46[0x57] = 0;
            pbVar46[0x54] = bVar56;
            if (pbVar46[0x55] != 0) {
              do {
                bVar14 = pbVar29[0x55];
                if (bVar14 != 0) {
                  pbVar48 = pbVar29;
                  do {
                    if (pbVar46[lVar44] == *pbVar48) goto LAB_00100ed3;
                    pbVar48 = pbVar48 + 1;
                  } while (pbVar29 + (ulong)(bVar14 - 1) + 1 != pbVar48);
                  if (0x3e < bVar14) goto LAB_00100b66;
                }
                pbVar29[bVar14] = pbVar46[lVar44];
                pbVar29[0x55] = pbVar29[0x55] + 1;
LAB_00100ed3:
                lVar44 = lVar44 + 1;
              } while ((int)lVar44 < (int)(uint)pbVar46[0x55]);
            }
            uVar31 = *(ushort *)(pbVar29 + 0x50);
            if (*(ushort *)(pbVar46 + 0x50) < *(ushort *)(pbVar29 + 0x50)) {
              uVar31 = *(ushort *)(pbVar46 + 0x50);
            }
            *(ushort *)(pbVar29 + 0x50) = uVar31;
            uVar31 = *(ushort *)(pbVar29 + 0x52);
            if (*(ushort *)(pbVar29 + 0x52) < *(ushort *)(pbVar46 + 0x52)) {
              uVar31 = *(ushort *)(pbVar46 + 0x52);
            }
            *(ushort *)(pbVar29 + 0x52) = uVar31;
          }
          pbVar46 = pbVar46 + 0x58;
          bVar58 = iVar27 < (int)uVar34;
          iVar27 = iVar27 + 1;
        } while (bVar58);
        uVar52 = uVar52 & 0xffff;
      } while( true );
    }
LAB_00100cc4:
    pbVar29 = pbVar29 + 0x58;
    bVar58 = uVar34 != uVar16;
    uVar16 = uVar16 + 1;
  } while (bVar58);
LAB_00100c01:
  pbVar29 = local_148;
  lVar44 = 0;
  pbVar46 = pbVar29;
  for (lVar57 = 0x20; lVar57 != 0; lVar57 = lVar57 + -1) {
    pbVar46[0] = 0;
    pbVar46[1] = 0;
    pbVar46[2] = 0;
    pbVar46[3] = 0;
    pbVar46[4] = 0;
    pbVar46[5] = 0;
    pbVar46[6] = 0;
    pbVar46[7] = 0;
    pbVar46 = pbVar46 + (ulong)bVar59 * -0x10 + 8;
  }
  for (; (int)lVar44 < (int)uVar38; lVar44 = lVar44 + 1) {
    local_148[local_648[lVar44 * 0x58 + 0x54]] = 1;
  }
  bVar59 = 0;
  do {
    bVar56 = 0xff;
    if (*pbVar29 != 0) {
      bVar56 = bVar59;
      bVar59 = bVar59 + 1;
    }
    *pbVar29 = bVar56;
    pbVar29 = pbVar29 + 1;
  } while (pbVar29 != local_48);
  for (uVar16 = 0; uVar16 != uVar38; uVar16 = uVar16 + 1) {
    *pbVar22 = local_148[*pbVar22];
    pbVar22 = pbVar22 + 0x58;
  }
  if (bVar59 != 0) {
    fVar2 = *(float *)(param_2 + 0x1c);
    fVar3 = *(float *)(param_2 + 0x24);
    fVar4 = *(float *)(param_2 + 0x28);
    fVar60 = (float)param_3 * *(float *)(param_2 + 0x34);
    fVar5 = *(float *)(param_2 + 0x20);
    iVar27 = iVar12 + param_3 * -2;
    uVar6 = *(undefined4 *)(param_2 + 0x2c);
    iVar39 = iVar15 - param_3;
    fVar7 = *(float *)(param_2 + 0x30);
    *(uint *)(param_5 + 8) = (uint)bVar59;
    pvVar24 = (void *)rcAlloc((ulong)bVar59 * 0x58);
    *(void **)param_5 = pvVar24;
    if (pvVar24 == (void *)0x0) {
      rcContext::log(param_1,3,"rcBuildHeightfieldLayers: Out of memory \'layers\' (%d).",
                     *(undefined4 *)(param_5 + 8));
      goto LAB_00100b7c;
    }
    memset(pvVar24,0,(long)*(int *)(param_5 + 8) * 0x58);
    iVar17 = iVar27 * iVar39;
    __n = (size_t)iVar17;
    for (lVar44 = 0; (int)lVar44 < *(int *)(param_5 + 8); lVar44 = lVar44 + 1) {
      puVar25 = (undefined8 *)(lVar44 * 0x58 + *(long *)param_5);
      pvVar24 = (void *)rcAlloc(__n,0);
      puVar25[8] = pvVar24;
      if (pvVar24 == (void *)0x0) {
        rcContext::log(param_1,3,"rcBuildHeightfieldLayers: Out of memory \'heights\' (%d).",iVar17)
        ;
        goto LAB_00100b7c;
      }
      memset(pvVar24,0xff,__n);
      pvVar24 = (void *)rcAlloc(__n);
      puVar25[9] = pvVar24;
      if (pvVar24 == (void *)0x0) {
        rcContext::log(param_1,3,"rcBuildHeightfieldLayers: Out of memory \'areas\' (%d).",iVar17);
        goto LAB_00100b7c;
      }
      memset(pvVar24,0,__n);
      pvVar24 = (void *)rcAlloc(__n);
      puVar25[10] = pvVar24;
      if (pvVar24 == (void *)0x0) {
        rcContext::log(param_1,3,"rcBuildHeightfieldLayers: Out of memory \'cons\' (%d).",iVar17);
        goto LAB_00100b7c;
      }
      memset(pvVar24,0,__n);
      if (uVar38 == 0) {
        uVar16 = 0;
        uVar34 = 0;
      }
      else {
        uVar16 = 0;
        uVar34 = 0;
        pbVar22 = local_648;
        do {
          if ((pbVar22[0x57] != 0) && (pbVar22[0x54] == (byte)lVar44)) {
            uVar34 = (uint)*(ushort *)(pbVar22 + 0x50);
            uVar16 = (uint)*(ushort *)(pbVar22 + 0x52);
          }
          pbVar22 = pbVar22 + 0x58;
        } while (pbVar22 != local_648 + (long)(int)uVar38 * 0x58);
      }
      uVar36 = *(undefined8 *)(param_2 + 0x34);
      *puVar25 = CONCAT44(fVar5,fVar2 + fVar60);
      puVar25[1] = CONCAT44(fVar4 - fVar60,fVar3 + fVar60);
      *(int *)(puVar25 + 4) = iVar27;
      *(int *)((long)puVar25 + 0x24) = iVar39;
      puVar25[2] = CONCAT44(fVar7 - fVar60,uVar6);
      puVar25[3] = uVar36;
      fVar8 = *(float *)(param_2 + 0x38);
      *(int *)(puVar25 + 5) = iVar27;
      *(uint *)(puVar25 + 7) = uVar34;
      *(uint *)((long)puVar25 + 0x3c) = uVar16;
      *(undefined4 *)((long)puVar25 + 0x2c) = 0;
      *(int *)(puVar25 + 6) = iVar39;
      *(undefined4 *)((long)puVar25 + 0x34) = 0;
      *(float *)((long)puVar25 + 4) = (float)uVar34 * fVar8 + fVar5;
      *(float *)(puVar25 + 2) = (float)uVar16 * fVar8 + fVar5;
      if (iVar39 < 1) {
        if (0 < iVar27) goto LAB_001014e9;
      }
      else {
        iVar50 = 0;
        iVar54 = 0;
        iVar37 = iVar12 * param_3;
        do {
          if (0 < iVar27) {
            iVar53 = 0;
            lVar57 = ((long)iVar37 + (long)param_3) * 4;
            do {
              uVar52 = *(uint *)(*(long *)(param_2 + 0x40) + lVar57) & 0xffffff;
              uVar16 = *(byte *)(*(long *)(param_2 + 0x40) + lVar57 + 3) + uVar52;
              uVar51 = (ulong)uVar52;
              lVar55 = (long)(iVar53 + iVar54);
              if (uVar52 < uVar16) {
                do {
                  if ((*(byte *)((long)__s + uVar51) != 0xff) &&
                     (bVar59 = local_648[(ulong)*(byte *)((long)__s + uVar51) * 0x58 + 0x54],
                     bVar59 == (byte)lVar44)) {
                    pcVar1 = (char *)(*(long *)(param_2 + 0x48) + uVar51 * 8);
                    iVar40 = *(int *)(puVar25 + 5);
                    if (iVar53 <= *(int *)(puVar25 + 5)) {
                      iVar40 = iVar53;
                    }
                    iVar42 = *(int *)((long)puVar25 + 0x2c);
                    if (*(int *)((long)puVar25 + 0x2c) <= iVar53) {
                      iVar42 = iVar53;
                    }
                    iVar32 = *(int *)(puVar25 + 6);
                    if (iVar50 <= *(int *)(puVar25 + 6)) {
                      iVar32 = iVar50;
                    }
                    iVar13 = *(int *)((long)puVar25 + 0x34);
                    if (*(int *)((long)puVar25 + 0x34) <= iVar50) {
                      iVar13 = iVar50;
                    }
                    uVar52 = 0;
                    uVar35 = 0;
                    cVar9 = *pcVar1;
                    puVar25[5] = CONCAT44(iVar42,iVar40);
                    puVar25[6] = CONCAT44(iVar13,iVar32);
                    *(char *)(puVar25[8] + lVar55) = cVar9 - (char)uVar34;
                    *(undefined1 *)(puVar25[9] + lVar55) =
                         *(undefined1 *)(*(long *)(param_2 + 0x58) + uVar51);
                    lVar33 = 0;
                    do {
                      bVar56 = (byte)lVar33;
                      uVar18 = (int)(*(uint *)(pcVar1 + 4) & 0xffffff) >> (bVar56 * '\x06' & 0x1f) &
                               0x3f;
                      if (uVar18 != 0x3f) {
                        iVar40 = param_3 + iVar53 + (&rcGetDirOffsetX(int)::offset)[lVar33];
                        iVar42 = iVar50 + param_3 + (&rcGetDirOffsetY(int)::offset)[lVar33];
                        lVar26 = (long)(int)((*(uint *)(*(long *)(param_2 + 0x40) +
                                                       (long)(iVar12 * iVar42 + iVar40) * 4) &
                                             0xffffff) + uVar18);
                        bVar47 = *(byte *)((long)__s + lVar26);
                        if (bVar47 != 0xff) {
                          bVar47 = local_648[(ulong)bVar47 * 0x58 + 0x54];
                        }
                        if (*(char *)(*(long *)(param_2 + 0x58) + lVar26) != '\0') {
                          if (bVar47 == bVar59) {
                            uVar18 = iVar40 - param_3;
                            if (((-1 < (int)(iVar42 - param_3 | uVar18)) && ((int)uVar18 < iVar27))
                               && (iVar42 < iVar15)) {
                              uVar52 = 1 << (bVar56 & 0x1f) | uVar52;
                            }
                          }
                          else {
                            uVar31 = *(ushort *)(*(long *)(param_2 + 0x48) + lVar26 * 8);
                            if (uVar34 < uVar31) {
                              bVar14 = (char)uVar31 - (char)uVar34;
                              bVar47 = *(byte *)(puVar25[8] + lVar55);
                              if (bVar14 < bVar47) {
                                bVar14 = bVar47;
                              }
                              *(byte *)(puVar25[8] + lVar55) = bVar14;
                            }
                            uVar35 = uVar35 | 1 << (bVar56 & 0x1f);
                          }
                        }
                      }
                      lVar33 = lVar33 + 1;
                    } while (lVar33 != 4);
                    *(byte *)(puVar25[10] + lVar55) = (byte)(uVar35 << 4) | (byte)uVar52;
                  }
                  uVar51 = uVar51 + 1;
                } while ((int)uVar51 < (int)uVar16);
              }
              iVar53 = iVar53 + 1;
              lVar57 = lVar57 + 4;
            } while (iVar27 != iVar53);
          }
          iVar50 = iVar50 + 1;
          iVar37 = iVar37 + iVar12;
          iVar54 = iVar54 + iVar27;
        } while (iVar39 != iVar50);
        if (*(int *)((long)puVar25 + 0x2c) < *(int *)(puVar25 + 5)) {
LAB_001014e9:
          puVar25[5] = 0;
        }
        if (*(int *)((long)puVar25 + 0x34) < *(int *)(puVar25 + 6)) {
          puVar25[6] = 0;
        }
      }
    }
  }
  uVar36 = 1;
LAB_00100b7e:
  rcFree(local_648);
LAB_00100a90:
  rcFree(puVar19);
LAB_00100a9a:
  rcFree(__s);
  if ((param_1[9] != (rcContext)0x0) &&
     (*(code **)(*(long *)param_1 + 0x30) != rcContext::doStopTimer)) {
    (**(code **)(*(long *)param_1 + 0x30))(param_1,0x19);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar36;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* rcContext::doStartTimer(rcTimerLabel) */

void rcContext::doStartTimer(void)

{
  return;
}



/* rcContext::doStopTimer(rcTimerLabel) */

void rcContext::doStopTimer(void)

{
  return;
}


