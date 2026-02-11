
undefined8 chacha_poly1305_tls_init(long param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ushort uVar2;
  
  if (param_3 != 0xd) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x30c) = *param_2;
  *(undefined8 *)(param_1 + 0x311) = *(undefined8 *)((long)param_2 + 5);
  uVar2 = *(ushort *)((long)param_2 + 0xb) << 8 | *(ushort *)((long)param_2 + 0xb) >> 8;
  uVar1 = (ulong)uVar2;
  if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
    if (uVar2 < 0x10) {
      return 0;
    }
    uVar1 = (ulong)(uVar2 - 0x10);
    uVar2 = (ushort)(uVar2 - 0x10);
    *(ushort *)(param_1 + 0x317) = uVar2 << 8 | uVar2 >> 8;
  }
  *(ulong *)(param_1 + 0x340) = uVar1;
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfd;
  *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x2f8) ^ *(uint *)(param_1 + 0x310);
  *(ulong *)(param_1 + 0x1a4) =
       CONCAT44(*(uint *)(param_1 + 0x2f4) ^ *(uint *)(param_1 + 0x30c),
                *(undefined4 *)(param_1 + 0x2f0));
  return 0x10;
}



undefined8
chacha20_poly1305_aead_cipher
          (long param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  byte *pbVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  void *b;
  long in_FS_OFFSET;
  ulong uVar18;
  undefined1 *local_100;
  size_t local_f8;
  undefined1 local_e8 [48];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  long local_40;
  
  lVar1 = param_1 + 0x1f8;
  uVar17 = *(ulong *)(param_1 + 0x340);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = 0;
  if ((*(byte *)(param_1 + 0x330) & 2) == 0) {
    if ((uVar17 != 0xffffffffffffffff) && (param_2 != (ulong *)0x0)) {
      if (uVar17 + 0x10 != param_5) goto LAB_0010010b;
      *(undefined4 *)(param_1 + 0x1a0) = 0;
      if (uVar17 < 0x41) {
        ChaCha20_ctr32(local_e8,zero,0x80,param_1 + 0x180,param_1 + 0x1a0);
        Poly1305_Init(lVar1,local_e8);
        local_b8 = *(undefined8 *)(param_1 + 0x30c);
        uStack_b0 = *(undefined8 *)(param_1 + 0x314);
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        *(undefined8 *)(param_1 + 800) = 0xd;
        *(ulong *)(param_1 + 0x328) = uVar17;
        if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
          if (uVar17 == 0) goto LAB_00100bee;
          if ((uVar17 - 1 < 7) || ((ulong)((long)param_2 - ((long)param_4 + 1)) < 0xf)) {
            uVar7 = 0;
            do {
              bVar10 = *(byte *)((long)param_4 + uVar7);
              bVar3 = *(byte *)((long)&local_a8 + uVar7);
              *(byte *)((long)&local_a8 + uVar7) = bVar10;
              *(byte *)((long)param_2 + uVar7) = bVar3 ^ bVar10;
              uVar7 = uVar7 + 1;
            } while (uVar17 != uVar7);
          }
          else if (uVar17 - 1 < 0xf) {
            uVar9 = 0;
            uVar7 = uVar17;
LAB_00100982:
            uVar18 = *(ulong *)((long)param_4 + uVar9);
            uVar2 = *(ulong *)((long)&local_a8 + uVar9);
            *(ulong *)((long)&local_a8 + uVar9) = uVar18;
            *(ulong *)((long)param_2 + uVar9) = uVar2 ^ uVar18;
            uVar9 = uVar9 + (uVar7 & 0xfffffffffffffff8);
            if ((uVar7 & 7) != 0) {
LAB_001009b7:
              bVar10 = *(byte *)((long)param_4 + uVar9);
              bVar3 = *(byte *)((long)&local_a8 + uVar9);
              *(byte *)((long)&local_a8 + uVar9) = bVar10;
              *(byte *)((long)param_2 + uVar9) = bVar3 ^ bVar10;
              if (uVar9 + 1 < uVar17) {
                pbVar12 = (byte *)((long)&local_a8 + uVar9 + 1);
                bVar10 = *(byte *)((long)param_4 + uVar9 + 1);
                bVar3 = *pbVar12;
                *pbVar12 = bVar10;
                *(byte *)((long)param_2 + uVar9 + 1) = bVar3 ^ bVar10;
                if (uVar9 + 2 < uVar17) {
                  pbVar12 = (byte *)((long)&local_a8 + uVar9 + 2);
                  bVar10 = *(byte *)((long)param_4 + uVar9 + 2);
                  bVar3 = *pbVar12;
                  *pbVar12 = bVar10;
                  *(byte *)((long)param_2 + uVar9 + 2) = bVar3 ^ bVar10;
                  if (uVar9 + 3 < uVar17) {
                    pbVar12 = (byte *)((long)&local_a8 + uVar9 + 3);
                    bVar10 = *(byte *)((long)param_4 + uVar9 + 3);
                    bVar3 = *pbVar12;
                    *pbVar12 = bVar10;
                    *(byte *)((long)param_2 + uVar9 + 3) = bVar3 ^ bVar10;
                    if (uVar9 + 4 < uVar17) {
                      pbVar12 = (byte *)((long)&local_a8 + uVar9 + 4);
                      bVar10 = *(byte *)((long)param_4 + uVar9 + 4);
                      bVar3 = *pbVar12;
                      *pbVar12 = bVar10;
                      *(byte *)((long)param_2 + uVar9 + 4) = bVar3 ^ bVar10;
                      if (uVar9 + 5 < uVar17) {
                        pbVar12 = (byte *)((long)&local_a8 + uVar9 + 5);
                        bVar10 = *(byte *)((long)param_4 + uVar9 + 5);
                        bVar3 = *pbVar12;
                        *pbVar12 = bVar10;
                        *(byte *)((long)param_2 + uVar9 + 5) = bVar3 ^ bVar10;
                        if (uVar9 + 6 < uVar17) {
                          pbVar12 = (byte *)((long)&local_a8 + uVar9 + 6);
                          bVar10 = *(byte *)((long)param_4 + uVar9 + 6);
                          bVar3 = *pbVar12;
                          *pbVar12 = bVar10;
                          *(byte *)((long)param_2 + uVar9 + 6) = bVar3 ^ bVar10;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            uVar7 = uVar17 >> 4;
            uVar9 = local_a8 ^ *param_4;
            uVar18 = uStack_a0 ^ param_4[1];
            local_a8 = *param_4;
            uStack_a0 = param_4[1];
            *param_2 = uVar9;
            param_2[1] = uVar18;
            if (uVar7 != 1) {
              uVar9 = local_98 ^ param_4[2];
              uVar18 = uStack_90 ^ param_4[3];
              local_98 = param_4[2];
              uStack_90 = param_4[3];
              param_2[2] = uVar9;
              param_2[3] = uVar18;
              if (uVar7 != 2) {
                uVar9 = local_88 ^ param_4[4];
                uVar18 = uStack_80 ^ param_4[5];
                local_88 = param_4[4];
                uStack_80 = param_4[5];
                param_2[4] = uVar9;
                param_2[5] = uVar18;
                if (uVar7 == 4) {
                  uVar7 = param_4[6];
                  uVar9 = param_4[7];
                  param_2[6] = local_78 ^ uVar7;
                  param_2[7] = uStack_70 ^ uVar9;
                  local_78 = uVar7;
                  uStack_70 = uVar9;
                  goto LAB_001004c7;
                }
              }
            }
            uVar9 = uVar17 & 0xfffffffffffffff0;
            if ((uVar17 & 0xf) != 0) {
              uVar7 = uVar17 - uVar9;
              if (6 < (uVar17 - uVar9) - 1) goto LAB_00100982;
              goto LAB_001009b7;
            }
          }
LAB_001004c7:
          param_4 = (ulong *)((long)param_4 + uVar17);
          param_2 = (ulong *)((long)param_2 + uVar17);
          uVar7 = (ulong)(-(int)uVar17 & 0xf);
          puVar15 = (undefined8 *)((long)&local_a8 + uVar17 + uVar7);
          lVar13 = uVar17 + uVar7 + 0x20;
          puVar16 = (undefined8 *)((long)&local_a8 + uVar17);
        }
        else {
          if (uVar17 != 0) {
            if ((uVar17 - 1 < 7) || ((ulong)((long)param_2 - ((long)param_4 + 1)) < 0xf)) {
              uVar7 = 0;
              do {
                pbVar12 = (byte *)((long)&local_a8 + uVar7);
                bVar10 = *(byte *)((long)param_4 + uVar7) ^ *pbVar12;
                *(byte *)((long)param_2 + uVar7) = bVar10;
                uVar7 = uVar7 + 1;
                *pbVar12 = bVar10;
              } while (uVar17 != uVar7);
            }
            else if (uVar17 - 1 < 0xf) {
              uVar9 = 0;
              uVar7 = uVar17;
LAB_00100aca:
              uVar18 = *(ulong *)((long)param_4 + uVar9) ^ *(ulong *)((long)&local_a8 + uVar9);
              *(ulong *)((long)&local_a8 + uVar9) = uVar18;
              *(ulong *)((long)param_2 + uVar9) = uVar18;
              uVar9 = uVar9 + (uVar7 & 0xfffffffffffffff8);
              if ((uVar7 & 7) != 0) {
LAB_00100aff:
                bVar10 = *(byte *)((long)param_4 + uVar9) ^ *(byte *)((long)&local_a8 + uVar9);
                *(byte *)((long)&local_a8 + uVar9) = bVar10;
                *(byte *)((long)param_2 + uVar9) = bVar10;
                if (uVar9 + 1 < uVar17) {
                  pbVar12 = (byte *)((long)&local_a8 + uVar9 + 1);
                  bVar10 = *(byte *)((long)param_4 + uVar9 + 1) ^ *pbVar12;
                  *pbVar12 = bVar10;
                  *(byte *)((long)param_2 + uVar9 + 1) = bVar10;
                  if (uVar9 + 2 < uVar17) {
                    pbVar12 = (byte *)((long)&local_a8 + uVar9 + 2);
                    bVar10 = *(byte *)((long)param_4 + uVar9 + 2) ^ *pbVar12;
                    *pbVar12 = bVar10;
                    *(byte *)((long)param_2 + uVar9 + 2) = bVar10;
                    if (uVar9 + 3 < uVar17) {
                      pbVar12 = (byte *)((long)&local_a8 + uVar9 + 3);
                      bVar10 = *(byte *)((long)param_4 + uVar9 + 3) ^ *pbVar12;
                      *pbVar12 = bVar10;
                      *(byte *)((long)param_2 + uVar9 + 3) = bVar10;
                      if (uVar9 + 4 < uVar17) {
                        pbVar12 = (byte *)((long)&local_a8 + uVar9 + 4);
                        bVar10 = *(byte *)((long)param_4 + uVar9 + 4) ^ *pbVar12;
                        *pbVar12 = bVar10;
                        *(byte *)((long)param_2 + uVar9 + 4) = bVar10;
                        if (uVar9 + 5 < uVar17) {
                          pbVar12 = (byte *)((long)&local_a8 + uVar9 + 5);
                          bVar10 = *(byte *)((long)param_4 + uVar9 + 5) ^ *pbVar12;
                          *pbVar12 = bVar10;
                          *(byte *)((long)param_2 + uVar9 + 5) = bVar10;
                          if (uVar9 + 6 < uVar17) {
                            pbVar12 = (byte *)((long)&local_a8 + uVar9 + 6);
                            bVar10 = *(byte *)((long)param_4 + uVar9 + 6) ^ *pbVar12;
                            *pbVar12 = bVar10;
                            *(byte *)((long)param_2 + uVar9 + 6) = bVar10;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              local_a8 = *param_4 ^ local_a8;
              uStack_a0 = param_4[1] ^ uStack_a0;
              uVar7 = uVar17 >> 4;
              *param_2 = local_a8;
              param_2[1] = uStack_a0;
              if (uVar7 != 1) {
                local_98 = param_4[2] ^ local_98;
                uStack_90 = param_4[3] ^ uStack_90;
                param_2[2] = local_98;
                param_2[3] = uStack_90;
                if (uVar7 != 2) {
                  local_88 = param_4[4] ^ local_88;
                  uStack_80 = param_4[5] ^ uStack_80;
                  param_2[4] = local_88;
                  param_2[5] = uStack_80;
                  if (uVar7 == 4) {
                    local_78 = param_4[6] ^ local_78;
                    uStack_70 = param_4[7] ^ uStack_70;
                    param_2[6] = local_78;
                    param_2[7] = uStack_70;
                    goto LAB_001004c7;
                  }
                }
              }
              uVar9 = uVar17 & 0xfffffffffffffff0;
              if ((uVar17 & 0xf) != 0) {
                uVar7 = uVar17 - uVar9;
                if (6 < (uVar17 - uVar9) - 1) goto LAB_00100aca;
                goto LAB_00100aff;
              }
            }
            goto LAB_001004c7;
          }
LAB_00100bee:
          puVar15 = &local_a8;
          uVar7 = 0;
          lVar13 = 0x20;
          puVar16 = puVar15;
        }
        uVar11 = (uint)uVar7;
        if (uVar11 < 8) {
          if ((uVar7 & 4) == 0) {
            if ((uVar11 != 0) && (*(undefined1 *)puVar16 = 0, (uVar7 & 2) != 0)) {
              *(undefined2 *)((long)puVar16 + (uVar7 - 2)) = 0;
            }
          }
          else {
            *(undefined4 *)puVar16 = 0;
            *(undefined4 *)((long)puVar16 + (uVar7 - 4)) = 0;
          }
        }
        else {
          *puVar16 = 0;
          *(undefined8 *)((long)puVar16 + (uVar7 - 8)) = 0;
          uVar11 = uVar11 + ((int)puVar16 - (int)((ulong)(puVar16 + 1) & 0xfffffffffffffff8)) &
                   0xfffffff8;
          if (7 < uVar11) {
            uVar6 = 0;
            do {
              uVar17 = (ulong)uVar6;
              uVar6 = uVar6 + 8;
              *(undefined8 *)(((ulong)(puVar16 + 1) & 0xfffffffffffffff8) + uVar17) = 0;
            } while (uVar6 < uVar11);
          }
        }
        local_f8 = 0x80;
        puVar16 = &local_b8;
      }
      else {
        lVar13 = param_1 + 0x180;
        ChaCha20_ctr32(local_e8,zero,0x40,lVar13);
        Poly1305_Init(lVar1,local_e8);
        *(undefined4 *)(param_1 + 0x1a0) = 1;
        *(undefined4 *)(param_1 + 0x1f0) = 0;
        Poly1305_Update(lVar1,param_1 + 0x30c,0x10);
        *(undefined8 *)(param_1 + 800) = 0xd;
        *(ulong *)(param_1 + 0x328) = uVar17;
        if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
          Poly1305_Update(lVar1,param_4,uVar17);
          ChaCha20_ctr32(param_2,param_4,uVar17,lVar13,param_1 + 0x1a0);
        }
        else {
          ChaCha20_ctr32(param_2,param_4,uVar17,lVar13);
          Poly1305_Update(lVar1,param_2,uVar17);
        }
        param_4 = (ulong *)((long)param_4 + uVar17);
        param_2 = (ulong *)((long)param_2 + uVar17);
        Poly1305_Update(lVar1,zero,-(int)uVar17 & 0xf);
        puVar15 = &local_a8;
        lVar13 = 0x10;
        local_f8 = 0x40;
        puVar16 = puVar15;
      }
      local_100 = local_e8;
      uVar8 = *(undefined8 *)(param_1 + 0x328);
      *puVar15 = *(undefined8 *)(param_1 + 800);
      puVar15[1] = uVar8;
      Poly1305_Update(lVar1,puVar16,lVar13);
      OPENSSL_cleanse(local_100,local_f8);
      puVar15 = (undefined8 *)(param_1 + 0x2fc);
      if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
        puVar15 = puVar16;
      }
      Poly1305_Final(lVar1,puVar15);
      *(undefined8 *)(param_1 + 0x340) = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
        iVar5 = CRYPTO_memcmp(puVar16,param_4,0x10);
        if (iVar5 != 0) {
          if (param_5 < 0x11) {
            uVar8 = 0;
          }
          else {
            memset((void *)((long)param_2 + (0x10 - param_5)),0,param_5 - 0x10);
            uVar8 = 0;
          }
          goto LAB_0010010b;
        }
        param_5 = param_5 - 0x10;
      }
      else {
        uVar17 = *(ulong *)(param_1 + 0x304);
        *param_2 = *(ulong *)(param_1 + 0x2fc);
        param_2[1] = uVar17;
      }
      *param_3 = param_5;
      uVar8 = 1;
      goto LAB_0010010b;
    }
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    ChaCha20_ctr32(param_1 + 0x1b0,zero,0x40,param_1 + 0x180,param_1 + 0x1a0);
    Poly1305_Init(lVar1,param_1 + 0x1b0);
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 2;
    *(undefined4 *)(param_1 + 0x1a0) = 1;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined1 (*) [16])(param_1 + 800) = (undefined1  [16])0x0;
    if (uVar17 != 0xffffffffffffffff) {
      Poly1305_Update(lVar1,param_1 + 0x30c,0xd);
      *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 1;
      *(undefined8 *)(param_1 + 800) = 0xd;
    }
  }
  if (param_4 == (ulong *)0x0) {
    bVar4 = false;
    b = (void *)0x0;
LAB_00100295:
    if ((*(byte *)(param_1 + 0x330) & 1) != 0) {
      if ((*(ulong *)(param_1 + 800) & 0xf) != 0) {
        Poly1305_Update(lVar1,zero,0x10 - (ulong)((uint)*(ulong *)(param_1 + 800) & 0xf));
      }
      *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfe;
    }
    if ((*(ulong *)(param_1 + 0x328) & 0xf) != 0) {
      Poly1305_Update(lVar1,zero,0x10 - (ulong)((uint)*(ulong *)(param_1 + 0x328) & 0xf));
    }
    Poly1305_Update(lVar1,param_1 + 800,0x10);
    puVar14 = (undefined1 *)(param_1 + 0x2fc);
    if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
      puVar14 = local_e8;
    }
    Poly1305_Final(lVar1,puVar14);
    *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfd;
    if (bVar4) {
      if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
        param_5 = param_5 - 0x10;
        iVar5 = CRYPTO_memcmp(local_e8,b,0x10);
        if (iVar5 != 0) {
          memset((void *)((long)param_2 - uVar17),0,uVar17);
          goto LAB_0010021c;
        }
      }
      else {
        uVar17 = *(ulong *)(param_1 + 0x304);
        *param_2 = *(ulong *)(param_1 + 0x2fc);
        param_2[1] = uVar17;
      }
      goto LAB_00100330;
    }
    if (((*(byte *)(param_1 + 0x6c) & 2) != 0) ||
       (iVar5 = CRYPTO_memcmp(local_e8,(undefined1 *)(param_1 + 0x2fc),*(size_t *)(param_1 + 0x338))
       , iVar5 == 0)) goto LAB_00100330;
LAB_0010021c:
    uVar8 = 0;
    param_5 = 0;
  }
  else {
    if (param_2 == (ulong *)0x0) {
      Poly1305_Update(lVar1,param_4,param_5);
      *(long *)(param_1 + 800) = *(long *)(param_1 + 800) + param_5;
      *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 1;
    }
    else {
      if ((*(byte *)(param_1 + 0x330) & 1) != 0) {
        if ((*(ulong *)(param_1 + 800) & 0xf) != 0) {
          Poly1305_Update(lVar1,zero,0x10 - (ulong)((uint)*(ulong *)(param_1 + 800) & 0xf));
        }
        *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfe;
      }
      *(undefined8 *)(param_1 + 0x340) = 0xffffffffffffffff;
      uVar7 = param_5;
      if ((uVar17 != 0xffffffffffffffff) && (uVar7 = uVar17, uVar17 + 0x10 != param_5))
      goto LAB_0010021c;
      if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
        Poly1305_Update(lVar1,param_4,uVar7);
        (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0xc0,param_2,param_4,uVar7);
        lVar13 = *(long *)(param_1 + 0x328);
      }
      else {
        (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0xc0,param_2,param_4,uVar7);
        Poly1305_Update(lVar1,param_2,uVar7);
        lVar13 = *(long *)(param_1 + 0x328);
      }
      *(ulong *)(param_1 + 0x328) = lVar13 + uVar7;
      if (uVar7 != param_5) {
        bVar4 = true;
        b = (void *)((long)param_4 + uVar7);
        param_2 = (ulong *)((long)param_2 + uVar7);
        uVar17 = uVar7;
        goto LAB_00100295;
      }
    }
LAB_00100330:
    uVar8 = 1;
  }
  *param_3 = param_5;
LAB_0010010b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



bool chacha_poly1305_tls_iv_set_fixed(long param_1,undefined4 *param_2,long param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0xc) {
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 0x1a4) = uVar1;
    *(undefined4 *)(param_1 + 0x2f0) = uVar1;
    uVar1 = param_2[1];
    *(undefined4 *)(param_1 + 0x1a8) = uVar1;
    *(undefined4 *)(param_1 + 0x2f4) = uVar1;
    uVar1 = param_2[2];
    *(undefined4 *)(param_1 + 0x1ac) = uVar1;
    *(undefined4 *)(param_1 + 0x2f8) = uVar1;
  }
  return param_3 == 0xc;
}



void chacha20_poly1305_initiv(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) & 0xfc;
  *(undefined1 (*) [16])(param_1 + 100) = (undefined1  [16])0x0;
  param_1[0x68] = 0xffffffffffffffff;
  local_28._8_4_ = *(undefined4 *)(param_1 + 1);
  local_28._0_8_ = *param_1;
  local_28._12_4_ = 0;
  local_28 = local_28 << 0x20;
  if ((*(byte *)((long)param_1 + 0x6c) & 2) == 0) {
    ossl_chacha20_dinit(param_1 + 0x18,0,0,local_28,0x10,0);
  }
  else {
    ossl_chacha20_einit();
  }
  *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) | 4;
  param_1[0x5e] = *(undefined8 *)((long)param_1 + 0x1a4);
  *(undefined4 *)(param_1 + 0x5f) = *(undefined4 *)((long)param_1 + 0x1ac);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void chacha20_poly1305_initkey(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xfc;
  *(undefined8 *)(param_1 + 0x340) = 0xffffffffffffffff;
  *(undefined1 (*) [16])(param_1 + 800) = (undefined1  [16])0x0;
  if ((*(byte *)(param_1 + 0x6c) & 2) != 0) {
    ossl_chacha20_einit(param_1 + 0xc0,param_2,param_3,0,0,0);
    return;
  }
  ossl_chacha20_dinit(param_1 + 0xc0,param_2,param_3,0,0,0);
  return;
}



undefined1 * ossl_prov_cipher_hw_chacha20_poly1305(void)

{
  return chacha20poly1305_hw;
}


