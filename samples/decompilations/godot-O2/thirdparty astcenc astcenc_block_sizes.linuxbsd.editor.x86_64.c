
/* assign_kmeans_texels(block_size_descriptor&) */

void assign_kmeans_texels(block_size_descriptor *param_1)

{
  byte bVar1;
  block_size_descriptor bVar4;
  ulong uVar2;
  ulong uVar3;
  block_size_descriptor *pbVar5;
  char *pcVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  ulong auStack_118 [2];
  char local_108 [216];
  long local_30;
  
  bVar1 = 0;
  bVar4 = param_1[3];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((byte)bVar4 < 0x41) {
    if (bVar4 != (block_size_descriptor)0x0) {
      uVar2 = 0;
      if (((byte)bVar4 & 1) != 0) {
        param_1[0xe091b0] = (block_size_descriptor)0x0;
        uVar2 = 1;
        if ((ulong)(byte)bVar4 == 1) goto LAB_0010006b;
      }
      do {
        param_1[uVar2 + 0xe091b0] = SUB81(uVar2,0);
        uVar3 = uVar2 + 2;
        param_1[uVar2 + 0xe091b1] = (block_size_descriptor)((char)SUB81(uVar2,0) + '\x01');
        uVar2 = uVar3;
      } while ((byte)bVar4 != uVar3);
    }
  }
  else {
    astc::rand_init(auStack_118);
    bVar4 = param_1[3];
    if (bVar4 != (block_size_descriptor)0x0) {
      pcVar6 = local_108;
      if (7 < (byte)bVar4) {
        for (uVar2 = (ulong)((byte)bVar4 >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
          pcVar6[0] = '\0';
          pcVar6[1] = '\0';
          pcVar6[2] = '\0';
          pcVar6[3] = '\0';
          pcVar6[4] = '\0';
          pcVar6[5] = '\0';
          pcVar6[6] = '\0';
          pcVar6[7] = '\0';
          pcVar6 = pcVar6 + ((ulong)bVar1 * -2 + 1) * 8;
        }
      }
      if (((byte)bVar4 & 4) != 0) {
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
        pcVar6[2] = '\0';
        pcVar6[3] = '\0';
        pcVar6 = pcVar6 + 4;
      }
      pcVar7 = pcVar6;
      if (((byte)bVar4 & 2) != 0) {
        pcVar7 = pcVar6 + 2;
        pcVar6[0] = '\0';
        pcVar6[1] = '\0';
      }
      if (((byte)bVar4 & 1) != 0) {
        *pcVar7 = '\0';
      }
    }
    pbVar5 = param_1 + 0xe091b0;
    while (pbVar5 != param_1 + 0xe091f0) {
      bVar1 = astc::rand(auStack_118);
      bVar4 = (block_size_descriptor)(bVar1 % (byte)param_1[3]);
      if (local_108[(byte)bVar4] == '\0') {
        *pbVar5 = bVar4;
        pbVar5 = pbVar5 + 1;
        local_108[(byte)bVar4] = '\x01';
      }
    }
  }
LAB_0010006b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* construct_block_size_descriptor_3d(unsigned int, unsigned int, unsigned int,
   block_size_descriptor&) */

void construct_block_size_descriptor_3d
               (uint param_1,uint param_2,uint param_3,block_size_descriptor *param_4)

{
  float fVar1;
  block_size_descriptor bVar2;
  block_size_descriptor bVar3;
  block_size_descriptor bVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *__s;
  long lVar9;
  long lVar10;
  void *pvVar11;
  void *pvVar12;
  block_size_descriptor *pbVar13;
  byte bVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  byte bVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  short sVar26;
  uint uVar27;
  int iVar28;
  uint *puVar29;
  undefined8 *puVar30;
  void *pvVar31;
  block_size_descriptor *pbVar32;
  block_size_descriptor bVar33;
  uint uVar34;
  int iVar35;
  block_size_descriptor *pbVar36;
  int iVar37;
  uint uVar38;
  int *piVar39;
  uint uVar40;
  long lVar41;
  undefined1 uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  ulong uVar46;
  long in_FS_OFFSET;
  byte bVar47;
  block_size_descriptor *local_838;
  void *local_830;
  block_size_descriptor *local_828;
  uint local_7fc;
  uint local_7f0;
  uint local_7b8;
  ulong local_7b0;
  int local_7a0;
  uint local_79c;
  uint local_78c;
  uint local_768;
  int local_738 [4];
  uint local_728 [4];
  uint local_718 [438];
  long local_40;
  
  bVar47 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s = operator_new(0x73d8);
  *(uint *)param_4 =
       (((param_3 * param_2 * param_1 & 0xff) << 8 | param_3 & 0xff) << 8 | param_2 & 0xff) << 8 |
       param_1 & 0xff;
  puVar29 = local_718;
  for (lVar15 = 0xdb; lVar15 != 0; lVar15 = lVar15 + -1) {
    puVar29[0] = 0xffffffff;
    puVar29[1] = 0xffffffff;
    puVar29 = puVar29 + (ulong)bVar47 * -4 + 2;
  }
  if (param_1 < 2) {
LAB_001010ad:
    uVar6 = 0;
    uVar5 = _LC2;
    local_78c = uVar6;
LAB_00100e30:
    do {
      uVar7 = uVar6 + 1;
      *(undefined2 *)(param_4 + (ulong)uVar6 * 6 + 0x40) = uVar5;
      *(undefined4 *)(param_4 + (ulong)uVar6 * 6 + 0x42) = 0;
      uVar6 = uVar7;
    } while (uVar7 != 0x57);
LAB_00100e4e:
    lVar15 = 0;
    uVar21 = 0;
    *(undefined4 *)(param_4 + 4) = 0;
    *(uint *)(param_4 + 8) = local_78c;
    *(undefined8 *)(param_4 + 0xac7560) = 0xffffffffffffffff;
    *(undefined8 *)(param_4 + 0xac8558) = 0xffffffffffffffff;
    *(uint *)(param_4 + 0xc) = local_78c;
    puVar30 = (undefined8 *)((ulong)(param_4 + 0xac7568) & 0xfffffffffffffff8);
    for (uVar17 = (ulong)(((int)param_4 -
                          (int)(undefined8 *)((ulong)(param_4 + 0xac7568) & 0xfffffffffffffff8)) +
                          0xac8560U >> 3); uVar17 != 0; uVar17 = uVar17 - 1) {
      *puVar30 = 0xffffffffffffffff;
      puVar30 = puVar30 + (ulong)bVar47 * -2 + 1;
    }
    local_728[0] = 0;
    local_728[1] = 0;
    do {
      uVar17 = 0;
      do {
        while (*(short *)(param_4 + uVar17 * 2 + 0xac7560) != -1) {
LAB_00100eb6:
          uVar17 = uVar17 + 1;
          if (uVar17 == 0x800) goto LAB_00101056;
        }
        uVar27 = (uint)uVar17;
        uVar7 = (uint)(uVar17 >> 9);
        uVar43 = uVar7 & 0x7fffff;
        uVar23 = (uint)(uVar17 >> 4) & 1;
        uVar19 = (uint)(uVar17 >> 10) & 0x3fffff;
        uVar7 = uVar7 & 1;
        uVar24 = (uint)(uVar17 >> 5) & 3;
        uVar6 = (uint)(uVar17 >> 2);
        if ((uVar17 & 3) == 0) {
          uVar23 = uVar23 | (uVar6 & 0x3fffffff) * 2 & 6;
          if ((uVar17 & 0xc) == 0) goto LAB_00100eb6;
          if ((uVar27 & 0x180) != 0x180) {
            uVar19 = 0;
            uVar7 = uVar27 & 3;
          }
          uVar6 = (uint)(uVar17 >> 7) & 3;
          if (uVar6 == 2) {
            uVar24 = uVar24 + 2;
            uVar43 = uVar43 + 2;
            uVar6 = 6;
            iVar28 = uVar24 * uVar43 * 6;
          }
          else if (uVar6 == 3) {
            if (uVar24 == 2) {
              uVar43 = 2;
              iVar28 = 0x18;
              uVar6 = 6;
              uVar24 = 2;
            }
            else {
              if (uVar24 == 3) goto LAB_00100eb6;
              iVar28 = 0x18;
              uVar6 = 2;
              if (uVar24 == 1) {
                uVar43 = 6;
                uVar24 = 2;
              }
              else {
                uVar43 = 2;
                uVar24 = 6;
              }
            }
          }
          else if (uVar6 == 1) {
            uVar24 = uVar24 + 2;
            uVar6 = uVar43 + 2;
            uVar43 = 6;
            iVar28 = uVar24 * uVar6 * 6;
          }
          else {
            uVar43 = uVar43 + 2;
            uVar6 = uVar24 + 2;
            uVar24 = 6;
            iVar28 = uVar43 * uVar6 * 6;
          }
        }
        else {
          uVar24 = uVar24 + 2;
          uVar6 = (uVar6 & 3) + 2;
          uVar23 = uVar23 | uVar27 * 2 & 6;
          uVar43 = ((uint)(uVar17 >> 7) & 3) + 2;
          iVar28 = uVar24 * uVar43 * uVar6;
        }
        uVar27 = (uVar19 + 1) * iVar28;
        iVar28 = (uVar23 - 2) + (-uVar7 & 6);
        iVar35 = get_ise_sequence_bitcount(uVar27,iVar28);
        if (((0x48 < iVar35 - 0x18U || 0x40 < uVar27) ||
            ((param_2 < uVar43 || param_1 < uVar24) || param_3 < uVar6)) || (uVar19 != 0))
        goto LAB_00100eb6;
        local_728[lVar15] = local_728[lVar15] + 1;
        uVar6 = local_718[uVar24 + (uVar43 + uVar6 * 8) * 8];
        param_4[uVar21 * 6 + 0xac8564] = SUB41(iVar35,0);
        *(short *)(param_4 + uVar21 * 6 + 0xac8560) = (short)uVar17;
        param_4[uVar21 * 6 + 0xac8562] = SUB41(uVar6,0);
        param_4[uVar21 * 6 + 0xac8563] = SUB41(iVar28,0);
        param_4[uVar21 * 6 + 0xac8565] =
             (block_size_descriptor)((byte)param_4[uVar21 * 6 + 0xac8565] & 0xfe);
        *(short *)(param_4 + uVar17 * 2 + 0xac7560) = (short)uVar21;
        uVar17 = uVar17 + 1;
        uVar21 = (ulong)((int)uVar21 + 1);
      } while (uVar17 != 0x800);
LAB_00101056:
      if (lVar15 != 0) {
        *(uint *)(param_4 + 0x14) = local_728[0];
        *(uint *)(param_4 + 0x18) = local_728[0] + local_728[1];
        *(uint *)(param_4 + 0x1c) = local_728[0] + local_728[1];
        *(undefined4 *)(param_4 + 0x10) = 0;
        assign_kmeans_texels(param_4);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          operator_delete(__s,0x73d8);
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      lVar15 = 1;
    } while( true );
  }
  uVar6 = param_2 * param_3 * param_1;
  uVar7 = uVar6 + 3 & 0xfffffffc;
  uVar17 = (ulong)uVar6;
  local_7fc = 2;
LAB_0010026f:
  if (param_2 < 2) goto LAB_0010109d;
  local_78c = 0;
  do {
    local_7b8 = 2;
    local_7f0 = local_7fc * 2;
    uVar24 = local_7fc + 0x90;
    do {
      local_79c = 2;
      uVar43 = local_7f0 * 2;
      local_768 = uVar24;
      if (1 < param_3) {
        do {
          if (uVar43 < 0x41) {
            local_718[local_768] = local_78c;
            if (uVar43 < 8) {
              if ((uVar43 & 4) == 0) {
                if ((uVar43 != 0) && (*(undefined1 *)((long)__s + 0x798) = 0, (uVar43 & 2) != 0)) {
                  *(undefined2 *)((long)__s + (ulong)uVar43 + 0x796) = 0;
                }
              }
              else {
                *(undefined4 *)((long)__s + 0x798) = 0;
                *(undefined4 *)((long)__s + (ulong)uVar43 + 0x794) = 0;
              }
            }
            else {
              *(undefined8 *)((long)__s + 0x798) = 0;
              uVar21 = (long)__s + 0x7a0U & 0xfffffffffffffff8;
              *(undefined8 *)((long)__s + (ulong)uVar43 + 0x790) = 0;
              uVar23 = (((int)__s + 0x798) - (int)uVar21) + uVar43 & 0xfffffff8;
              if (7 < uVar23) {
                uVar27 = 0;
                do {
                  uVar46 = (ulong)uVar27;
                  uVar27 = uVar27 + 8;
                  *(undefined8 *)(uVar21 + uVar46) = 0;
                } while (uVar27 < uVar23);
              }
            }
            local_7b0 = (ulong)uVar43;
            uVar23 = 0x20;
            memset(__s,0,uVar17);
            uVar27 = 0;
            local_7a0 = 0;
            bVar14 = 0;
            do {
              uVar19 = 0;
              iVar37 = local_7b8 * ((int)(uVar23 >> 6) >> 4);
              uVar45 = uVar23 >> 6 & 0xf;
              uVar38 = 0x20;
              iVar35 = local_7a0;
              iVar28 = local_7a0;
              do {
                iVar20 = param_1 + iVar28;
                iVar8 = (int)(uVar38 >> 6) >> 4;
                uVar44 = uVar38 >> 6 & 0xf;
                uVar22 = 0x20;
                iVar28 = iVar35;
                do {
                  local_738[3] = (int)(uVar22 >> 6) >> 4;
                  local_738[0] = local_7fc * (iVar37 + iVar8) + local_738[3];
                  local_728[3] = uVar22 >> 6 & 0xf;
                  local_738[3] = local_738[3] + (iVar8 + local_7b8 + 1 + iVar37) * local_7fc + 1;
                  uVar34 = local_7fc;
                  uVar40 = local_7fc;
                  local_728[0] = 0x10 - uVar45;
                  switch((uVar45 < uVar44) * '\x02' + (uVar44 < local_728[3]) * '\x04' +
                         (uVar45 < local_728[3])) {
                  default:
                    uVar40 = local_7f0;
                    local_728[1] = uVar45 - uVar44;
                    local_728[2] = uVar44 - local_728[3];
                    break;
                  case '\x02':
                    local_728[2] = uVar45 - local_728[3];
                    uVar34 = local_7f0;
                    local_728[1] = uVar44 - uVar45;
                    local_728[0] = 0x10 - uVar44;
                    break;
                  case '\x03':
                    uVar34 = 1;
                    local_728[1] = uVar44 - local_728[3];
                    local_728[2] = local_728[3] - uVar45;
                    local_728[3] = uVar45;
                    local_728[0] = 0x10 - uVar44;
                    break;
                  case '\x04':
                    uVar34 = 1;
                    local_728[1] = uVar45 - local_728[3];
                    local_728[2] = local_728[3] - uVar44;
                    local_728[3] = uVar44;
                    uVar40 = local_7f0;
                    break;
                  case '\x05':
                    local_728[0] = 0x10 - local_728[3];
                    local_728[1] = local_728[3] - uVar45;
                    local_728[3] = uVar44;
                    uVar34 = local_7f0;
                    uVar40 = 1;
                    local_728[2] = uVar45 - uVar44;
                    break;
                  case '\a':
                    local_728[0] = 0x10 - local_728[3];
                    local_728[1] = local_728[3] - uVar44;
                    local_728[3] = uVar45;
                    uVar40 = 1;
                    local_728[2] = uVar44 - uVar45;
                  }
                  local_738[1] = local_738[0] + uVar40;
                  local_738[2] = local_738[1] + uVar34;
                  lVar15 = (long)iVar28;
                  piVar39 = local_738;
                  puVar29 = local_728;
                  do {
                    uVar34 = *puVar29;
                    if (uVar34 != 0) {
                      bVar18 = *(byte *)((long)__s + lVar15);
                      lVar9 = (long)*piVar39;
                      lVar25 = (ulong)bVar18 + lVar15 * 4;
                      *(char *)((long)__s + lVar25 + 0xd8) = (char)*piVar39;
                      uVar42 = (undefined1)uVar34;
                      *(undefined1 *)((long)__s + lVar25 + 0x438) = uVar42;
                      *(byte *)((long)__s + lVar15) = bVar18 + 1;
                      bVar18 = *(byte *)((long)__s + lVar9 + 0x798);
                      lVar25 = (ulong)bVar18 + lVar9 * 0xd8;
                      bVar18 = bVar18 + 1;
                      *(char *)((long)__s + lVar25 + 0x7d8) = (char)iVar28;
                      *(undefined1 *)((long)__s + lVar25 + 0x3dd8) = uVar42;
                      *(byte *)((long)__s + lVar9 + 0x798) = bVar18;
                      if (bVar14 < bVar18) {
                        bVar14 = bVar18;
                      }
                    }
                    fVar1 = _LC1;
                    puVar29 = puVar29 + 1;
                    piVar39 = piVar39 + 1;
                  } while (puVar29 != local_718);
                  iVar28 = iVar28 + 1;
                  uVar22 = uVar22 + (((param_1 >> 1) + 0x400) / (param_1 - 1)) * (local_7fc - 1);
                } while (iVar28 != iVar20);
                uVar19 = uVar19 + 1;
                iVar35 = iVar35 + param_1;
                uVar38 = uVar38 + (((param_2 >> 1) + 0x400) / (param_2 - 1)) * (local_7b8 - 1);
              } while (param_2 != uVar19);
              uVar27 = uVar27 + 1;
              local_7a0 = local_7a0 + param_2 * param_1;
              uVar23 = uVar23 + (local_79c - 1) * (((param_3 >> 1) + 0x400) / (param_3 - 1));
            } while (param_3 != uVar27);
            uVar21 = (ulong)local_78c;
            bVar33 = (block_size_descriptor)0x0;
            lVar41 = uVar21 * 0x1fb70;
            lVar25 = uVar21 * -0x5f250;
            lVar15 = lVar41 + 0x360;
            lVar9 = lVar25 + (long)param_4 * -3;
            pvVar31 = __s;
            do {
              bVar2 = *(block_size_descriptor *)((long)__s + lVar15 + uVar21 * -0x1fb70 + -0x360);
              lVar10 = lVar15 + -0x360;
              param_4[lVar15 + -0x100] = bVar2;
              if ((byte)bVar33 < (byte)bVar2) {
                bVar33 = bVar2;
              }
              do {
                param_4[lVar10 + 0x6a0] = (block_size_descriptor)0x0;
                *(undefined4 *)(param_4 + lVar10 * 4 + lVar25 + 0xa00) = 0;
                param_4[lVar10 + 0x340] = (block_size_descriptor)0x0;
                lVar10 = lVar10 + 0xd8;
              } while (lVar10 != lVar15);
              if (bVar2 != (block_size_descriptor)0x0) {
                pvVar11 = pvVar31;
                pbVar32 = param_4 + lVar15 + -0x360;
                do {
                  bVar3 = *(block_size_descriptor *)((long)pvVar11 + 0x438);
                  pvVar12 = (void *)((long)pvVar11 + 1);
                  pbVar32[0x6a0] = bVar3;
                  bVar4 = *(block_size_descriptor *)((long)pvVar11 + 0xd8);
                  *(float *)(lVar9 + 0xa00 + (long)pbVar32 * 4) = (float)(byte)bVar3 * fVar1;
                  pbVar32[0x340] = bVar4;
                  pvVar11 = pvVar12;
                  pbVar32 = pbVar32 + 0xd8;
                } while (pvVar12 != (void *)((long)pvVar31 + (ulong)((byte)bVar2 - 1) + 1));
              }
              pvVar31 = (void *)((long)pvVar31 + 4);
              lVar15 = lVar15 + 1;
            } while (pvVar31 != (void *)((long)__s + uVar17 * 4));
            local_838 = param_4 + lVar41;
            uVar46 = 0;
            param_4[uVar21 * 0x1fb70 + 0x251] = bVar33;
            uVar23 = (uint)bVar14;
            local_830 = __s;
            local_828 = local_838;
            do {
              bVar33 = *(block_size_descriptor *)((long)__s + uVar46 + 0x798);
              local_838[0x1780] = bVar33;
              if (bVar33 == (block_size_descriptor)0x0) {
                uVar16 = 0xffffffff;
              }
              else {
                uVar16 = (ulong)((byte)bVar33 - 1);
                pvVar31 = local_830;
                pbVar32 = local_828;
                pbVar36 = local_838;
                do {
                  bVar18 = *(byte *)((long)pvVar31 + 0x3dd8);
                  bVar2 = *(block_size_descriptor *)((long)pvVar31 + 0x7d8);
                  pbVar36[0x17c0] = bVar2;
                  iVar28 = 0;
                  *(undefined4 *)(pbVar32 + 0x125c0) = 0;
                  pbVar13 = param_4 + (ulong)(byte)bVar2 + lVar41;
                  *(float *)(pbVar32 + 0x4dc0) = (float)bVar18;
                  do {
                    fVar1 = *(float *)(lVar9 + 0xa00 + (long)pbVar13 * 4);
                    if (((uint)(byte)pbVar13[0x340] == (uint)uVar46) && (fVar1 != 0.0)) {
                      *(float *)(pbVar32 + 0x125c0) = fVar1;
                      break;
                    }
                    iVar28 = iVar28 + 1;
                    pbVar13 = pbVar13 + 0xd8;
                  } while (iVar28 != 4);
                  pvVar31 = (void *)((long)pvVar31 + 1);
                  pbVar36 = pbVar36 + 0x40;
                  pbVar32 = pbVar32 + 0x100;
                } while (pvVar31 != (void *)((long)local_830 + (ulong)((byte)bVar33 - 1) + 1));
              }
              bVar2 = param_4[(uVar46 & 0xffffffff) + 0x17c0 + uVar16 * 0x40 + uVar21 * 0x1fb70];
              if ((byte)bVar33 < uVar23) {
                pbVar32 = param_4 + (ulong)(byte)bVar33 * 0x40 + uVar46 + lVar41;
                do {
                  pbVar32[0x17c0] = bVar2;
                  *(undefined4 *)(lVar9 + 0x4dc0 + (long)pbVar32 * 4) = 0;
                  pbVar32 = pbVar32 + 0x40;
                } while (param_4 + ((ulong)((uVar23 - 1) - (uint)(byte)bVar33) + (ulong)(byte)bVar33
                                   ) * 0x40 + uVar46 + lVar41 + 0x40 != pbVar32);
              }
              uVar46 = uVar46 + 1;
              local_838 = local_838 + 1;
              local_830 = (void *)((long)local_830 + 0xd8);
              local_828 = local_828 + 4;
            } while (uVar46 != local_7b0);
            if (uVar6 < uVar7) {
              uVar46 = (ulong)((uVar7 - uVar6) - 1);
              memset(param_4 + lVar41 + 0x260 + uVar17,0,uVar46 + 1);
              lVar15 = lVar41 + 0x360 + uVar17;
              do {
                lVar10 = lVar15 + -0x360;
                do {
                  *(undefined4 *)(param_4 + lVar10 * 4 + lVar25 + 0xa00) = 0;
                  param_4[lVar10 + 0x340] = (block_size_descriptor)0x0;
                  param_4[lVar10 + 0x6a0] = (block_size_descriptor)0x0;
                  lVar10 = lVar10 + 0xd8;
                } while (lVar15 != lVar10);
                lVar15 = lVar15 + 1;
              } while (uVar46 + 0x361 + uVar17 + lVar41 != lVar15);
            }
            bVar33 = param_4[(ulong)(uVar43 - 1) + 0x17c0 +
                             (long)(int)(*(byte *)((long)__s + (ulong)(uVar43 - 1) + 0x798) - 1) *
                             0x40 + uVar21 * 0x1fb70];
            uVar27 = uVar43 + 3 & 0xfffffffc;
            if (uVar43 < uVar27) {
              memset(param_4 + lVar41 + 0x1780 + local_7b0,0,(ulong)(uVar27 - uVar43));
              pbVar32 = param_4 + (ulong)(uVar23 - 1) * 0x40 + lVar41 + local_7b0 + 0x40;
              uVar19 = uVar43;
              if (bVar14 == 0) {
                do {
                  if (uVar27 == uVar19 + 1) break;
                  uVar19 = uVar19 + 2;
                } while (uVar27 != uVar19);
              }
              else {
                do {
                  pbVar36 = pbVar32 + (ulong)(uVar23 - 1) * -0x40 + -0x40;
                  do {
                    pbVar36[0x17c0] = bVar33;
                    *(undefined4 *)(lVar9 + 0x4dc0 + (long)pbVar36 * 4) = 0;
                    pbVar36 = pbVar36 + 0x40;
                  } while (pbVar36 != pbVar32);
                  uVar19 = uVar19 + 1;
                  pbVar32 = pbVar32 + 1;
                } while (uVar27 != uVar19);
              }
            }
            iVar37 = 0;
            iVar35 = -1;
            iVar28 = -1;
            param_4[uVar21 * 0x1fb70 + 0x250] = SUB41(uVar6,0);
            *(uint *)(param_4 + uVar21 * 0x1fb70 + 0x252) =
                 (uint)CONCAT21(CONCAT11((undefined1)local_79c,(undefined1)local_7b8),
                                (undefined1)local_7fc) << 8 | uVar43 & 0xff;
            do {
              iVar8 = get_ise_sequence_bitcount(uVar43,iVar37);
              if (iVar8 - 0x18U < 0x49) {
                iVar28 = iVar37;
              }
              iVar8 = get_ise_sequence_bitcount(uVar43 * 2);
              if (iVar8 - 0x18U < 0x49) {
                iVar35 = iVar37;
              }
              iVar37 = iVar37 + 1;
            } while (iVar37 != 0xc);
            if (uVar43 * 2 < 0x41) {
              sVar26 = -(ushort)(iVar35 != -1);
            }
            else {
              iVar35 = -1;
              sVar26 = 0;
            }
            local_78c = local_78c + 1;
            param_4[uVar21 * 6 + 0x40] = SUB41(iVar28,0);
            param_4[uVar21 * 6 + 0x41] = SUB41(iVar35,0);
            *(ushort *)(param_4 + uVar21 * 6 + 0x42) = -(ushort)(iVar28 != -1);
            *(short *)(param_4 + uVar21 * 6 + 0x44) = sVar26;
          }
          local_79c = local_79c + 1;
          uVar43 = uVar43 + local_7f0;
          local_768 = local_768 + 0x40;
        } while (local_79c <= param_3);
      }
      local_7b8 = local_7b8 + 1;
      uVar24 = uVar24 + 8;
      local_7f0 = local_7f0 + local_7fc;
    } while (local_7b8 <= param_2);
    local_7fc = local_7fc + 1;
  } while (local_7fc <= param_1);
  uVar6 = local_78c;
  uVar5 = _LC2;
  if (0x56 < local_78c) goto LAB_00100e4e;
  goto LAB_00100e30;
LAB_0010109d:
  local_7fc = local_7fc + 1;
  if (param_1 < local_7fc) goto LAB_001010ad;
  goto LAB_0010026f;
}



/* construct_block_size_descriptor_2d(unsigned int, unsigned int, bool, float,
   block_size_descriptor&) */

void construct_block_size_descriptor_2d
               (uint param_1,uint param_2,bool param_3,float param_4,block_size_descriptor *param_5)

{
  float fVar1;
  block_size_descriptor bVar2;
  block_size_descriptor bVar3;
  block_size_descriptor bVar4;
  bool bVar5;
  undefined2 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  void *__s;
  void *pvVar12;
  block_size_descriptor *pbVar13;
  void *pvVar14;
  block_size_descriptor *pbVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  void *pvVar20;
  block_size_descriptor *pbVar21;
  ulong uVar22;
  ulong uVar23;
  ushort uVar24;
  uint uVar25;
  size_t __n;
  int iVar26;
  uint uVar27;
  block_size_descriptor bVar28;
  uint uVar29;
  byte bVar31;
  uint uVar32;
  ulong uVar33;
  byte bVar34;
  block_size_descriptor bVar35;
  undefined1 uVar36;
  uint *puVar37;
  void *pvVar38;
  undefined8 *puVar39;
  long lVar40;
  uint uVar41;
  block_size_descriptor *pbVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  long lVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  long in_FS_OFFSET;
  byte bVar50;
  block_size_descriptor *local_490;
  block_size_descriptor local_488;
  uint local_470;
  ulong local_468;
  ulong local_440;
  uint local_418;
  uint local_40c;
  byte local_3d3;
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined8 local_398;
  undefined8 uStack_390;
  int local_388 [4];
  uint local_378 [206];
  long local_40;
  int iVar30;
  
  bVar50 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s = operator_new(0x73d8);
  *param_5 = SUB41(param_1,0);
  param_5[1] = SUB41(param_2,0);
  param_5[2] = (block_size_descriptor)0x1;
  param_5[3] = (block_size_descriptor)((char)SUB41(param_2,0) * (char)SUB41(param_1,0));
  puVar37 = local_378;
  for (lVar18 = 0x66; lVar18 != 0; lVar18 = lVar18 + -1) {
    puVar37[0] = 0xffffffff;
    puVar37[1] = 0xffffffff;
    puVar37 = puVar37 + ((ulong)bVar50 * -2 + 1) * 2;
  }
  pvVar12 = (void *)get_2d_percentile_table(param_1,param_2);
  local_3b8 = (undefined1  [16])0x0;
  local_3a8 = (undefined1  [16])0x0;
  *(undefined8 *)(param_5 + 0xac7560) = 0xffffffffffffffff;
  *(undefined8 *)(param_5 + 0xac8558) = 0xffffffffffffffff;
  puVar39 = (undefined8 *)((ulong)(param_5 + 0xac7568) & 0xfffffffffffffff8);
  for (uVar19 = (ulong)(((int)param_5 -
                        (int)(undefined8 *)((ulong)(param_5 + 0xac7568) & 0xfffffffffffffff8)) +
                        0xac8560U >> 3); uVar19 != 0; uVar19 = uVar19 - 1) {
    *puVar39 = 0xffffffffffffffff;
    puVar39 = puVar39 + (ulong)bVar50 * -2 + 1;
  }
  local_468 = 0;
  uVar17 = param_1 * param_2;
  local_40c = 0;
  local_418 = 0;
  uVar8 = uVar17 + 3 & 0xfffffffc;
  do {
    uVar19 = 0;
LAB_001013c1:
    do {
      if (*(short *)(param_5 + uVar19 * 2 + 0xac7560) == -1) {
        bVar7 = (byte)(uVar19 >> 4) & 1;
        uVar23 = uVar19 >> 10 & 0x3fffff;
        bVar31 = (byte)(uVar19 >> 9) & 1;
        uVar45 = (uint)(uVar19 >> 5) & 3;
        bVar34 = (byte)uVar19 & 3;
        iVar26 = (int)uVar23;
        local_3d3 = (byte)uVar23;
        if ((uVar19 & 3) == 0) {
          bVar7 = bVar7 | (char)(uVar19 >> 2) * '\x02' & 6U;
          if ((uVar19 & 0xc) == 0) goto LAB_001013b0;
          uVar41 = (uint)(uVar19 >> 7) & 3;
          if (uVar41 == 2) {
            uVar45 = uVar45 + 6;
            uVar41 = ((uint)(uVar19 >> 9) & 0x7fffff) + 6;
            local_3d3 = 0;
            uVar25 = uVar45 * uVar41;
            local_470 = uVar25;
          }
          else if (uVar41 == 3) {
            if (uVar45 == 1) {
              uVar41 = 6;
              uVar25 = (iVar26 + 1) * 0x3c;
              local_3d3 = local_3d3 & 1;
              local_470 = 0x3c;
              bVar34 = -bVar31 & 6;
              uVar45 = 10;
            }
            else {
              if (uVar45 - 2 < 2) goto LAB_001013b0;
              uVar41 = 10;
              uVar25 = (iVar26 + 1) * 0x3c;
              local_3d3 = local_3d3 & 1;
              local_470 = 0x3c;
              bVar34 = -bVar31 & 6;
              uVar45 = 6;
            }
          }
          else if (uVar41 == 1) {
            uVar45 = uVar45 + 2;
            uVar41 = 0xc;
            bVar34 = -bVar31 & 6;
            uVar25 = (iVar26 + 1) * uVar45 * 0xc;
            local_3d3 = local_3d3 & 1;
            local_470 = uVar45 * 0xc;
          }
          else {
            uVar41 = uVar45 + 2;
            uVar45 = 0xc;
            bVar34 = -bVar31 & 6;
            uVar25 = (iVar26 + 1) * uVar41 * 0xc;
            local_3d3 = local_3d3 & 1;
            local_470 = uVar41 * 0xc;
          }
        }
        else {
          uVar25 = (uint)(uVar19 >> 2) & 3;
          uVar9 = (uint)(uVar19 >> 7);
          uVar45 = uVar45 + 2;
          iVar26 = iVar26 + 1;
          bVar7 = bVar7 | (byte)uVar19 * '\x02' & 6;
          local_3d3 = local_3d3 & 1;
          uVar43 = uVar9 & 3;
          bVar34 = -bVar31 & 6;
          if (uVar25 == 2) {
            uVar41 = uVar43 + 8;
            uVar25 = iVar26 * uVar41 * uVar45;
            local_470 = uVar41 * uVar45;
          }
          else {
            uVar41 = uVar45;
            if (uVar25 == 3) {
              uVar9 = uVar9 & 1;
              if ((uVar19 & 0x100) == 0) {
                uVar41 = uVar9 + 6;
                uVar25 = iVar26 * uVar41 * uVar45;
                local_470 = uVar41 * uVar45;
              }
              else {
                uVar9 = uVar9 + 2;
                local_470 = uVar9 * uVar45;
                uVar25 = iVar26 * local_470;
                uVar45 = uVar9;
              }
            }
            else if (uVar25 == 1) {
              local_470 = (uVar43 + 8) * uVar45;
              uVar25 = iVar26 * local_470;
              uVar45 = uVar43 + 8;
            }
            else {
              local_470 = (uVar43 + 4) * uVar45;
              uVar25 = iVar26 * local_470;
              uVar45 = uVar43 + 4;
            }
          }
        }
        bVar35 = (block_size_descriptor)((bVar7 - 2) + bVar34);
        iVar26 = get_ise_sequence_bitcount(uVar25);
        if ((iVar26 - 0x18U < 0x49 && uVar25 < 0x41) && (uVar45 <= param_1 && uVar41 <= param_2)) {
          if (local_468 < 2) {
            if (local_3d3 == 0) {
              if (local_468 != 0) goto LAB_001014df;
              bVar5 = *(float *)((long)pvVar12 + uVar19 * 4) <= 0.0;
              goto LAB_001014f5;
            }
          }
          else if (((int)local_468 != 2) || (local_3d3 != 0)) {
LAB_001014df:
            bVar5 = *(float *)((long)pvVar12 + uVar19 * 4) <= param_4;
LAB_001014f5:
            if (((int)local_468 == 3) || (bVar5)) {
              uVar9 = uVar41 * 0x10 + uVar45;
              uVar25 = local_378[uVar9];
              if ((int)local_378[uVar9] < 0) {
                if (local_470 < 8) {
                  if ((local_470 & 4) == 0) {
                    if ((local_470 != 0) &&
                       (*(undefined1 *)((long)__s + 0x798) = 0, (local_470 & 2) != 0)) {
                      *(undefined2 *)((long)__s + (ulong)local_470 + 0x796) = 0;
                    }
                  }
                  else {
                    *(undefined4 *)((long)__s + 0x798) = 0;
                    *(undefined4 *)((long)__s + (ulong)local_470 + 0x794) = 0;
                  }
                }
                else {
                  *(undefined8 *)((long)__s + 0x798) = 0;
                  puVar39 = (undefined8 *)((long)__s + 0x7a0U & 0xfffffffffffffff8);
                  *(undefined8 *)((long)__s + (ulong)local_470 + 0x790) = 0;
                  uVar23 = (ulong)((((int)__s + 0x798) - (int)puVar39) + local_470 >> 3);
                  for (; uVar23 != 0; uVar23 = uVar23 - 1) {
                    *puVar39 = 0;
                    puVar39 = puVar39 + (ulong)bVar50 * -2 + 1;
                  }
                }
                local_440 = (ulong)local_470;
                __n = (ulong)(uVar17 - 1) + 1;
                if (uVar17 == 0) {
                  __n = 1;
                }
                memset(__s,0,__n);
                uVar43 = 0x20;
                uVar25 = 0;
                uVar47 = 0;
                bVar7 = 0;
                do {
                  uVar29 = 0;
                  uVar27 = 0x20;
                  uVar48 = uVar43 >> 6 & 0xf;
                  uVar44 = uVar25;
                  do {
                    iVar10 = (uVar27 >> 10) + uVar45 * (uVar43 >> 10);
                    uVar32 = uVar27 >> 6 & 0xf;
                    local_398 = CONCAT44(iVar10 + 1,iVar10);
                    uStack_390 = CONCAT44(iVar10 + uVar45 + 1,iVar10 + uVar45);
                    local_388[3] = uVar32 * uVar48 + 8 >> 4;
                    uVar23 = (ulong)uVar44;
                    lVar18 = 0;
                    local_388[0] = ((0x10 - uVar48) - uVar32) + local_388[3];
                    local_388[1] = uVar32 - local_388[3];
                    local_388[2] = uVar48 - local_388[3];
                    do {
                      iVar10 = *(int *)((long)local_388 + lVar18);
                      if (iVar10 != 0) {
                        bVar31 = *(byte *)((long)__s + uVar23);
                        uVar22 = (ulong)*(uint *)((long)&local_398 + lVar18);
                        lVar40 = (ulong)bVar31 + uVar23 * 4;
                        *(char *)((long)__s + lVar40 + 0xd8) =
                             (char)*(uint *)((long)&local_398 + lVar18);
                        uVar36 = (undefined1)iVar10;
                        *(undefined1 *)((long)__s + lVar40 + 0x438) = uVar36;
                        *(byte *)((long)__s + uVar23) = bVar31 + 1;
                        bVar31 = *(byte *)((long)__s + uVar22 + 0x798);
                        lVar40 = (ulong)bVar31 + uVar22 * 0xd8;
                        bVar31 = bVar31 + 1;
                        *(char *)((long)__s + lVar40 + 0x7d8) = (char)uVar44;
                        *(undefined1 *)((long)__s + lVar40 + 0x3dd8) = uVar36;
                        *(byte *)((long)__s + uVar22 + 0x798) = bVar31;
                        if (bVar7 < bVar31) {
                          bVar7 = bVar31;
                        }
                      }
                      fVar1 = _LC1;
                      lVar18 = lVar18 + 4;
                    } while (lVar18 != 0x10);
                    uVar27 = uVar27 + (((param_1 >> 1) + 0x400) / (param_1 - 1)) * (uVar45 - 1);
                    uVar44 = uVar44 + 1;
                    uVar29 = uVar29 + 1;
                  } while (uVar29 < param_1);
                  uVar25 = uVar25 + param_1;
                  uVar47 = uVar47 + 1;
                  uVar43 = uVar43 + (((param_2 >> 1) + 0x400) / (param_2 - 1)) * (uVar41 - 1);
                } while (uVar47 < param_2);
                uVar23 = (ulong)local_40c;
                bVar28 = (block_size_descriptor)0x0;
                lVar46 = uVar23 * 0x1fb70;
                lVar40 = 0;
                pbVar15 = param_5 + lVar46;
                lVar18 = (long)param_5 * -3 + uVar23 * -0x5f250;
                pvVar20 = __s;
                pbVar13 = pbVar15;
                do {
                  bVar2 = *(block_size_descriptor *)((long)__s + lVar40);
                  uVar22 = (ulong)(byte)bVar2;
                  pbVar13[0x260] = bVar2;
                  if ((byte)bVar28 < (byte)bVar2) {
                    bVar28 = bVar2;
                  }
                  if (bVar2 == (block_size_descriptor)0x0) {
LAB_00101c57:
                    pbVar42 = param_5 + lVar40 + lVar46 + uVar22 * 0xd8;
                    do {
                      uVar25 = (int)uVar22 + 1;
                      uVar22 = (ulong)uVar25;
                      pbVar42[0x6a0] = (block_size_descriptor)0x0;
                      *(undefined4 *)(lVar18 + 0xa00 + (long)pbVar42 * 4) = 0;
                      pbVar42[0x340] = (block_size_descriptor)0x0;
                      pbVar42 = pbVar42 + 0xd8;
                    } while (uVar25 != 4);
                  }
                  else {
                    pvVar38 = pvVar20;
                    pbVar42 = pbVar13;
                    do {
                      bVar3 = *(block_size_descriptor *)((long)pvVar38 + 0x438);
                      pvVar14 = (void *)((long)pvVar38 + 1);
                      pbVar42[0x6a0] = bVar3;
                      bVar4 = *(block_size_descriptor *)((long)pvVar38 + 0xd8);
                      *(float *)(lVar18 + 0xa00 + (long)pbVar42 * 4) = (float)(byte)bVar3 * fVar1;
                      pbVar42[0x340] = bVar4;
                      pvVar38 = pvVar14;
                      pbVar42 = pbVar42 + 0xd8;
                    } while (pvVar14 != (void *)((long)pvVar20 + (ulong)((byte)bVar2 - 1) + 1));
                    if (bVar2 != (block_size_descriptor)0x4) goto LAB_00101c57;
                  }
                  lVar40 = lVar40 + 1;
                  pbVar13 = pbVar13 + 1;
                  pvVar20 = (void *)((long)pvVar20 + 4);
                } while ((uint)lVar40 < uVar17);
                uVar22 = 0;
                param_5[uVar23 * 0x1fb70 + 0x251] = bVar28;
                uVar25 = (uint)bVar7;
                pvVar20 = __s;
                local_490 = pbVar15;
                do {
                  bVar28 = *(block_size_descriptor *)((long)__s + uVar22 + 0x798);
                  pbVar15[0x1780] = bVar28;
                  if (bVar28 == (block_size_descriptor)0x0) {
                    uVar33 = 0xffffffff;
                  }
                  else {
                    uVar33 = (ulong)((byte)bVar28 - 1);
                    pbVar13 = pbVar15;
                    pvVar38 = pvVar20;
                    pbVar42 = local_490;
                    do {
                      bVar31 = *(byte *)((long)pvVar38 + 0x3dd8);
                      bVar2 = *(block_size_descriptor *)((long)pvVar38 + 0x7d8);
                      pbVar13[0x17c0] = bVar2;
                      iVar10 = 0;
                      *(undefined4 *)(pbVar42 + 0x125c0) = 0;
                      pbVar21 = param_5 + (ulong)(byte)bVar2 + lVar46;
                      *(float *)(pbVar42 + 0x4dc0) = (float)bVar31;
                      do {
                        fVar1 = *(float *)(lVar18 + 0xa00 + (long)pbVar21 * 4);
                        if (((uint)(byte)pbVar21[0x340] == (uint)uVar22) && (fVar1 != 0.0)) {
                          *(float *)(pbVar42 + 0x125c0) = fVar1;
                          break;
                        }
                        iVar10 = iVar10 + 1;
                        pbVar21 = pbVar21 + 0xd8;
                      } while (iVar10 != 4);
                      pvVar38 = (void *)((long)pvVar38 + 1);
                      pbVar13 = pbVar13 + 0x40;
                      pbVar42 = pbVar42 + 0x100;
                    } while (pvVar38 != (void *)((long)pvVar20 + (ulong)((byte)bVar28 - 1) + 1));
                  }
                  bVar2 = param_5[(uVar22 & 0xffffffff) + 0x17c0 + uVar33 * 0x40 + uVar23 * 0x1fb70]
                  ;
                  if ((byte)bVar28 < uVar25) {
                    pbVar13 = param_5 + uVar22 + lVar46 + (ulong)(byte)bVar28 * 0x40;
                    do {
                      pbVar13[0x17c0] = bVar2;
                      *(undefined4 *)(lVar18 + 0x4dc0 + (long)pbVar13 * 4) = 0;
                      pbVar13 = pbVar13 + 0x40;
                    } while (pbVar13 !=
                             param_5 + ((ulong)((uVar25 - 1) - (uint)(byte)bVar28) +
                                       (ulong)(byte)bVar28) * 0x40 + uVar22 + lVar46 + 0x40);
                  }
                  uVar22 = uVar22 + 1;
                  pbVar15 = pbVar15 + 1;
                  local_490 = local_490 + 4;
                  pvVar20 = (void *)((long)pvVar20 + 0xd8);
                } while (uVar22 != local_440);
                if (uVar17 < uVar8) {
                  uVar33 = (ulong)uVar17;
                  uVar22 = (ulong)((uVar8 - uVar17) - 1);
                  memset(param_5 + uVar33 + 0x260 + lVar46,0,uVar22 + 1);
                  lVar40 = uVar33 + 0x360 + lVar46;
                  do {
                    lVar16 = lVar40 + -0x360;
                    do {
                      *(undefined4 *)(param_5 + lVar16 * 4 + uVar23 * -0x5f250 + 0xa00) = 0;
                      param_5[lVar16 + 0x340] = (block_size_descriptor)0x0;
                      param_5[lVar16 + 0x6a0] = (block_size_descriptor)0x0;
                      lVar16 = lVar16 + 0xd8;
                    } while (lVar40 != lVar16);
                    lVar40 = lVar40 + 1;
                  } while (lVar40 != uVar33 + 0x361 + uVar22 + lVar46);
                }
                bVar28 = param_5[(ulong)(local_470 - 1) + 0x17c0 +
                                 (ulong)(*(byte *)((long)__s + (ulong)(local_470 - 1) + 0x798) - 1)
                                 * 0x40 + uVar23 * 0x1fb70];
                uVar43 = local_470 + 3 & 0xfffffffc;
                if (local_470 < uVar43) {
                  uVar47 = local_470 + 3 & 0xfffffffc;
                  memset(param_5 + lVar46 + 0x1780 + local_440,0,
                         (ulong)((uVar43 - local_470) - 1) + 1);
                  pbVar15 = param_5 + (ulong)(uVar25 - 1) * 0x40 + local_440 + lVar46 + 0x40;
                  uVar43 = local_470;
                  if (bVar7 == 0) {
                    do {
                      if (uVar47 == uVar43 + 1) break;
                      uVar43 = uVar43 + 2;
                    } while (uVar47 != uVar43);
                  }
                  else {
                    do {
                      pbVar13 = pbVar15 + (ulong)(uVar25 - 1) * -0x40 + -0x40;
                      do {
                        pbVar13[0x17c0] = bVar28;
                        *(undefined4 *)(lVar18 + 0x4dc0 + (long)pbVar13 * 4) = 0;
                        pbVar13 = pbVar13 + 0x40;
                      } while (pbVar13 != pbVar15);
                      uVar43 = uVar43 + 1;
                      pbVar15 = pbVar15 + 1;
                    } while (uVar47 != uVar43);
                  }
                }
                iVar10 = -1;
                param_5[uVar23 * 0x1fb70 + 0x250] = SUB41(uVar17,0);
                local_488 = SUB41(uVar45,0);
                param_5[uVar23 * 0x1fb70 + 0x254] = SUB41(uVar41,0);
                iVar30 = -1;
                param_5[uVar23 * 0x1fb70 + 0x253] = local_488;
                iVar49 = 0;
                param_5[uVar23 * 0x1fb70 + 0x252] = SUB41(local_470,0);
                param_5[uVar23 * 0x1fb70 + 0x255] = (block_size_descriptor)0x1;
                do {
                  while( true ) {
                    bVar28 = SUB41(iVar30,0);
                    iVar11 = get_ise_sequence_bitcount(local_470,iVar49);
                    if (iVar11 - 0x18U < 0x49) {
                      iVar10 = iVar49;
                    }
                    if (0x40 < local_470 * 2) break;
                    iVar11 = get_ise_sequence_bitcount(local_470 * 2,iVar49);
                    if (iVar11 - 0x18U < 0x49) {
                      iVar30 = iVar49;
                    }
                    bVar28 = SUB41(iVar30,0);
                    iVar49 = iVar49 + 1;
                    if (iVar49 == 0xc) goto LAB_001020fb;
                  }
                  iVar49 = iVar49 + 1;
                } while (iVar49 != 0xc);
LAB_001020fb:
                lVar18 = uVar23 * 6;
                param_5[lVar18 + 0x40] = SUB41(iVar10,0);
                param_5[lVar18 + 0x41] = bVar28;
                *(undefined4 *)(param_5 + lVar18 + 0x42) = 0;
                local_378[uVar9] = local_40c;
                *(int *)(local_3a8 + local_468 * 4) = *(int *)(local_3a8 + local_468 * 4) + 1;
                uVar25 = local_40c;
                local_40c = local_40c + 1;
              }
              bVar28 = param_5[(ulong)local_418 * 6 + 0xac8565];
              param_5[(ulong)local_418 * 6 + 0xac8562] = SUB41(uVar25,0);
              param_5[(ulong)local_418 * 6 + 0xac8563] = bVar35;
              param_5[(ulong)local_418 * 6 + 0xac8564] = SUB41(iVar26,0);
              *(short *)(param_5 + (ulong)local_418 * 6 + 0xac8560) = (short)uVar19;
              param_5[(ulong)local_418 * 6 + 0xac8565] =
                   (block_size_descriptor)((byte)bVar28 & 0xfe | local_3d3);
              uVar24 = (ushort)(1 << ((byte)bVar35 & 0x1f));
              if (local_3d3 == 0) {
                *(ushort *)(param_5 + (long)(int)uVar25 * 6 + 0x42) =
                     *(ushort *)(param_5 + (long)(int)uVar25 * 6 + 0x42) | uVar24;
              }
              else {
                *(ushort *)(param_5 + (long)(int)uVar25 * 6 + 0x44) =
                     *(ushort *)(param_5 + (long)(int)uVar25 * 6 + 0x44) | uVar24;
              }
              *(short *)(param_5 + uVar19 * 2 + 0xac7560) = (short)local_418;
              local_418 = local_418 + 1;
              uVar19 = uVar19 + 1;
              *(int *)(local_3b8 + local_468 * 4) = *(int *)(local_3b8 + local_468 * 4) + 1;
              if (uVar19 == 0x800) break;
              goto LAB_001013c1;
            }
          }
        }
      }
LAB_001013b0:
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x800);
    local_468 = local_468 + 1;
    if (local_468 == 4 - param_3) {
      *(undefined4 *)(param_5 + 0x14) = local_3b8._4_4_ + local_3b8._0_4_;
      iVar26 = local_3b8._4_4_ + local_3b8._0_4_ + local_3b8._8_4_;
      *(int *)(param_5 + 0x18) = iVar26;
      *(int *)(param_5 + 0x1c) = iVar26 + local_3b8._12_4_;
      iVar26 = local_3a8._4_4_ + local_3a8._0_4_ + local_3a8._8_4_;
      uVar8 = local_3a8._12_4_ + iVar26;
      *(ulong *)(param_5 + 4) = CONCAT44(iVar26,local_3a8._0_4_);
      *(ulong *)(param_5 + 0xc) = CONCAT44(local_3b8._0_4_,uVar8);
      if (pvVar12 != (void *)0x0) {
        operator_delete__(pvVar12);
        uVar8 = *(uint *)(param_5 + 0xc);
      }
      uVar6 = _LC2;
      if (uVar8 < 0x57) {
        pbVar15 = param_5 + (ulong)uVar8 * 6 + 0x40;
        do {
          *(undefined2 *)pbVar15 = uVar6;
          pbVar13 = pbVar15 + 6;
          *(undefined4 *)(pbVar15 + 2) = 0;
          pbVar15 = pbVar13;
        } while (param_5 + ((ulong)(0x56 - uVar8) + (ulong)uVar8) * 6 + 0x46 != pbVar13);
      }
      assign_kmeans_texels(param_5);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        operator_delete(__s,0x73d8);
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



/* init_block_size_descriptor(unsigned int, unsigned int, unsigned int, bool, unsigned int, float,
   block_size_descriptor&) */

void init_block_size_descriptor
               (uint param_1,uint param_2,uint param_3,bool param_4,uint param_5,float param_6,
               block_size_descriptor *param_7)

{
  if (param_3 < 2) {
    construct_block_size_descriptor_2d(param_1,param_2,param_4,param_6,param_7);
  }
  else {
    construct_block_size_descriptor_3d(param_1,param_2,param_3,param_7);
  }
  init_partition_tables(param_7,param_4,param_5);
  return;
}


