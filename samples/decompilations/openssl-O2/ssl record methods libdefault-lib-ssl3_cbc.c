
void tls1_md5_final_raw(undefined4 *param_1,undefined1 *param_2)

{
  *param_2 = (char)*param_1;
  param_2[1] = (char)((uint)*param_1 >> 8);
  param_2[2] = (char)((uint)*param_1 >> 0x10);
  param_2[3] = (char)((uint)*param_1 >> 0x18);
  param_2[4] = (char)param_1[1];
  param_2[5] = (char)((uint)param_1[1] >> 8);
  param_2[6] = (char)*(undefined2 *)((long)param_1 + 6);
  param_2[7] = *(undefined1 *)((long)param_1 + 7);
  param_2[8] = (char)param_1[2];
  param_2[9] = (char)((uint)param_1[2] >> 8);
  param_2[10] = (char)*(undefined2 *)((long)param_1 + 10);
  param_2[0xb] = *(undefined1 *)((long)param_1 + 0xb);
  param_2[0xc] = (char)param_1[3];
  param_2[0xd] = (char)((uint)param_1[3] >> 8);
  param_2[0xe] = (char)*(undefined2 *)((long)param_1 + 0xe);
  param_2[0xf] = *(undefined1 *)((long)param_1 + 0xf);
  return;
}



void tls1_sha1_final_raw(undefined4 *param_1,undefined1 *param_2)

{
  *param_2 = (char)((uint)*param_1 >> 0x18);
  param_2[1] = (char)((uint)*param_1 >> 0x10);
  param_2[2] = (char)((uint)*param_1 >> 8);
  param_2[3] = (char)*param_1;
  param_2[4] = *(undefined1 *)((long)param_1 + 7);
  param_2[5] = (char)*(undefined2 *)((long)param_1 + 6);
  param_2[6] = (char)((uint)param_1[1] >> 8);
  param_2[7] = (char)param_1[1];
  param_2[8] = *(undefined1 *)((long)param_1 + 0xb);
  param_2[9] = (char)*(undefined2 *)((long)param_1 + 10);
  param_2[10] = (char)((uint)param_1[2] >> 8);
  param_2[0xb] = (char)param_1[2];
  param_2[0xc] = *(undefined1 *)((long)param_1 + 0xf);
  param_2[0xd] = (char)*(undefined2 *)((long)param_1 + 0xe);
  param_2[0xe] = (char)((uint)param_1[3] >> 8);
  param_2[0xf] = (char)param_1[3];
  param_2[0x10] = *(undefined1 *)((long)param_1 + 0x13);
  param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x12);
  param_2[0x12] = (char)((uint)param_1[4] >> 8);
  param_2[0x13] = (char)param_1[4];
  return;
}



void tls1_sha256_final_raw(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = param_2;
  do {
    puVar2 = puVar1 + 4;
    *puVar1 = (char)((uint)*param_1 >> 0x18);
    puVar1[1] = (char)((uint)*param_1 >> 0x10);
    puVar1[2] = (char)((uint)*param_1 >> 8);
    puVar1[3] = (char)*param_1;
    puVar1 = puVar2;
    param_1 = param_1 + 1;
  } while (puVar2 != param_2 + 0x20);
  return;
}



void tls1_sha512_final_raw(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = param_2;
  do {
    puVar2 = puVar1 + 8;
    *puVar1 = (char)((ulong)*param_1 >> 0x38);
    puVar1[1] = (char)((ulong)*param_1 >> 0x30);
    puVar1[2] = (char)((ulong)*param_1 >> 0x28);
    puVar1[3] = (char)((ulong)*param_1 >> 0x20);
    puVar1[4] = (char)((ulong)*param_1 >> 0x18);
    puVar1[5] = (char)((ulong)*param_1 >> 0x10);
    puVar1[6] = (char)((ulong)*param_1 >> 8);
    puVar1[7] = (char)*param_1;
    puVar1 = puVar2;
    param_1 = param_1 + 1;
  } while (puVar2 != param_2 + 0x40);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
ssl3_cbc_digest_record
          (EVP_MD *param_1,uchar *param_2,ulong *param_3,undefined8 *param_4,undefined8 *param_5,
          long param_6,ulong param_7,void *param_8,ulong param_9,char param_10)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  EVP_MD_CTX *ctx;
  byte *pbVar13;
  byte bVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  byte bVar18;
  ulong uVar19;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  uint *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  byte bVar30;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar31 [16];
  ulong local_3e0;
  ulong local_3d8;
  ulong local_3b8;
  long local_3b0;
  SHA512_CTX *local_390;
  code *local_388;
  code *local_380;
  ulong local_350;
  ulong local_348;
  size_t local_330;
  ulong local_318;
  uint local_2fc;
  SHA512_CTX local_2f8;
  uint auStack_220 [2];
  byte local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  ulong local_1c8 [16];
  undefined5 local_148;
  undefined3 uStack_143;
  undefined5 uStack_140;
  undefined1 local_13b [115];
  uint local_c8 [34];
  long local_40;
  
  bVar30 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 < 0x100000) {
    iVar6 = EVP_MD_is_a(param_1,&_LC0);
    if (iVar6 == 0) {
      iVar6 = EVP_MD_is_a(param_1,&_LC1);
      if (iVar6 == 0) {
        iVar6 = EVP_MD_is_a(param_1,"SHA2-224");
        if (iVar6 == 0) {
          iVar6 = EVP_MD_is_a(param_1,"SHA2-256");
          if (iVar6 == 0) {
            iVar6 = EVP_MD_is_a(param_1,"SHA2-384");
            if (iVar6 == 0) {
              iVar6 = EVP_MD_is_a(param_1,"SHA2-512");
              if (iVar6 == 0) {
                if (param_3 != (ulong *)0x0) {
                  *param_3 = 0;
                }
              }
              else {
                iVar6 = SHA512_Init(&local_2f8);
                if (0 < iVar6) {
                  local_318 = 0x28;
                  bVar2 = true;
                  lVar26 = 0x10;
                  local_3e0 = 0x80;
                  local_388 = (code *)&SHA512_Transform;
                  local_330 = 0x40;
                  local_380 = tls1_sha512_final_raw;
                  goto LAB_001002a3;
                }
              }
            }
            else {
              iVar6 = SHA384_Init(&local_2f8);
              if (0 < iVar6) {
                local_318 = 0x28;
                bVar2 = true;
                lVar26 = 0x10;
                local_3e0 = 0x80;
                local_388 = (code *)&SHA512_Transform;
                local_330 = 0x30;
                local_380 = tls1_sha512_final_raw;
                goto LAB_001002a3;
              }
            }
          }
          else {
            iVar6 = SHA256_Init((SHA256_CTX *)&local_2f8);
            if (0 < iVar6) {
              local_318 = 0x28;
              bVar2 = true;
              lVar26 = 8;
              local_3e0 = 0x40;
              local_388 = (code *)&SHA256_Transform;
              local_330 = 0x20;
              local_380 = tls1_sha256_final_raw;
              goto LAB_001002a3;
            }
          }
        }
        else {
          iVar6 = SHA224_Init((SHA256_CTX *)&local_2f8);
          if (0 < iVar6) {
            local_318 = 0x28;
            bVar2 = true;
            lVar26 = 8;
            local_3e0 = 0x40;
            local_388 = (code *)&SHA256_Transform;
            local_330 = 0x1c;
            local_380 = tls1_sha256_final_raw;
LAB_001002a3:
            if (param_10 == '\0') goto LAB_00100404;
            goto LAB_001002b1;
          }
        }
      }
      else {
        iVar6 = SHA1_Init((SHA_CTX *)&local_2f8);
        if (0 < iVar6) {
          bVar2 = true;
          local_318 = 0x28;
          local_3e0 = 0x40;
          lVar26 = 8;
          local_388 = (code *)&SHA1_Transform;
          local_330 = 0x14;
          local_380 = tls1_sha1_final_raw;
          if (param_10 != '\0') {
LAB_001002b1:
            uVar15 = local_318 + 0xb + param_9;
            local_3b8 = param_7 + uVar15;
            uVar20 = param_6 + uVar15;
            uVar27 = (int)uVar20 * 8;
            uVar9 = ((((local_3e0 - 1) + lVar26) - local_330) + local_3b8) / local_3e0;
            local_348 = uVar20 / local_3e0;
            uVar19 = uVar20 % local_3e0;
            local_350 = (uVar20 + lVar26) / local_3e0;
            if (uVar9 < 4) {
              local_3d8 = 2;
              uVar20 = 0;
              uVar9 = 0;
LAB_0010054a:
              if (!bVar2) goto LAB_00100347;
LAB_00100553:
              pbVar13 = local_218;
              uVar7 = (uint)(lVar26 - 4U);
              if (7 < uVar7) {
                uVar12 = 0;
                do {
                  uVar8 = (int)uVar12 + 8;
                  pbVar1 = pbVar13 + uVar12;
                  pbVar1[0] = 0;
                  pbVar1[1] = 0;
                  pbVar1[2] = 0;
                  pbVar1[3] = 0;
                  pbVar1[4] = 0;
                  pbVar1[5] = 0;
                  pbVar1[6] = 0;
                  pbVar1[7] = 0;
                  uVar12 = (ulong)uVar8;
                } while (uVar8 < (uVar7 & 0xfffffff8));
                pbVar13 = pbVar13 + uVar8;
              }
              if ((lVar26 - 4U & 4) != 0) {
                pbVar13[0] = 0;
                pbVar13[1] = 0;
                pbVar13[2] = 0;
                pbVar13[3] = 0;
              }
              *(uint *)((long)auStack_220 + lVar26 + 4) =
                   uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 |
                   uVar27 << 0x18;
            }
            else {
              uVar9 = uVar9 - 2;
              local_3d8 = 2;
              uVar20 = local_3e0 * uVar9;
              if (bVar2) goto LAB_00100553;
LAB_00100347:
              uVar7 = 0;
              do {
                uVar12 = (ulong)uVar7;
                uVar7 = uVar7 + 8;
                pbVar13 = local_218 + uVar12;
                pbVar13[0] = 0;
                pbVar13[1] = 0;
                pbVar13[2] = 0;
                pbVar13[3] = 0;
                pbVar13[4] = 0;
                pbVar13[5] = 0;
                pbVar13[6] = 0;
                pbVar13[7] = 0;
              } while (uVar7 < (uint)lVar26);
              *(uint *)((long)auStack_220 + lVar26) = uVar27;
            }
            local_390 = &local_2f8;
            if (uVar20 != 0) {
              if (param_10 == '\0') {
                uVar12 = local_3e0 - 0xd;
                local_148 = (undefined5)*param_4;
                uStack_143 = (undefined3)*(undefined8 *)((long)param_4 + 5);
                uStack_140 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 5) >> 0x18);
                local_13b._0_8_ = *param_5;
                *(undefined8 *)((long)&uStack_143 + (uVar12 & 0xffffffff)) =
                     *(undefined8 *)((long)param_5 + ((uVar12 & 0xffffffff) - 8));
                puVar24 = (undefined8 *)((long)param_5 + 3);
                puVar25 = (undefined8 *)(local_13b + 3);
                for (uVar28 = (ulong)((int)uVar12 - 3U >> 3); uVar28 != 0; uVar28 = uVar28 - 1) {
                  *puVar25 = *puVar24;
                  puVar24 = puVar24 + (ulong)bVar30 * -2 + 1;
                  puVar25 = puVar25 + (ulong)bVar30 * -2 + 1;
                }
                (*local_388)(local_390,&local_148);
                uVar28 = uVar20 % local_3e0;
                if (1 < uVar20 / local_3e0) {
                  uVar29 = 1;
                  lVar22 = uVar12 + (long)param_5;
                  do {
                    uVar29 = uVar29 + 1;
                    (*local_388)(local_390,lVar22,uVar28);
                    uVar28 = extraout_RDX_00;
                    lVar22 = lVar22 + local_3e0;
                  } while (uVar29 != uVar20 / local_3e0);
                }
              }
              else {
                if (uVar15 <= local_3e0) goto LAB_00100db0;
                uVar28 = uVar15 - local_3e0;
                (*local_388)(local_390,param_4);
                __memcpy_chk(&local_148,(long)param_4 + local_3e0,uVar28,0x80);
                uVar12 = 0x80;
                if (0x7f < uVar28) {
                  uVar12 = uVar28;
                }
                lVar22 = local_3e0 + (local_3e0 - uVar15);
                __memcpy_chk((long)&local_148 + uVar28,param_5,lVar22,uVar12 + (local_3e0 - uVar15))
                ;
                (*local_388)(local_390,&local_148);
                uVar28 = uVar20 % local_3e0;
                uVar12 = uVar20 / local_3e0 - 1;
                if (1 < uVar12) {
                  uVar29 = 1;
                  lVar22 = lVar22 + (long)param_5;
                  do {
                    uVar29 = uVar29 + 1;
                    (*local_388)(local_390,lVar22,uVar28);
                    uVar28 = extraout_RDX;
                    lVar22 = lVar22 + local_3e0;
                  } while (uVar29 != uVar12);
                }
              }
            }
            local_208 = (undefined1  [16])0x0;
            uVar12 = local_3d8 + uVar9;
            local_1f8 = (undefined1  [16])0x0;
            local_1e8 = (undefined1  [16])0x0;
            local_1d8 = (undefined1  [16])0x0;
            if (!CARRY8(local_3d8,uVar9)) {
              local_3b0 = (uVar20 - uVar15) + (long)param_5;
              do {
                uVar28 = 0;
                uVar29 = (uVar15 - (long)param_5) + local_3b0;
                bVar18 = (char)(~(byte)((local_350 ^ uVar9) >> 0x38) &
                               (byte)((local_350 ^ uVar9) - 1 >> 0x38)) >> 7;
                bVar3 = (char)(~(byte)((local_348 ^ uVar9) >> 0x38) &
                              (byte)((local_348 ^ uVar9) - 1 >> 0x38)) >> 7;
                uVar20 = ~uVar19;
                do {
                  if (uVar29 < uVar15) {
                    bVar14 = *(byte *)((long)param_4 + uVar29);
                  }
                  else {
                    bVar14 = 0;
                    if (uVar29 < local_3b8) {
                      bVar14 = *(byte *)(local_3b0 + uVar28);
                    }
                  }
                  uVar29 = uVar29 + 1;
                  bVar5 = (byte)(uVar28 >> 0x38);
                  bVar4 = ~((char)((bVar5 | (byte)(uVar20 + 1 >> 0x38)) ^ bVar5) >> 7) & bVar3;
                  bVar14 = (bVar4 & 0x80 | ~bVar4 & bVar14) &
                           ~(~((char)((bVar5 | (byte)(uVar20 >> 0x38)) ^ bVar5) >> 7) & bVar3) &
                           (~bVar18 | bVar3);
                  if (local_3e0 - lVar26 <= uVar28) {
                    bVar14 = bVar14 & ~bVar18 | bVar18 & local_218[uVar28 + (lVar26 - local_3e0)];
                  }
                  *(byte *)((long)local_c8 + uVar28) = bVar14;
                  uVar28 = uVar28 + 1;
                  uVar20 = uVar20 + 1;
                } while (local_3e0 != uVar28);
                (*local_388)(local_390,local_c8);
                auVar31._0_8_ = (*local_380)(local_390,local_c8);
                auVar31._8_8_ = extraout_XMM0_Qb;
                auVar31 = pshuflw(auVar31,ZEXT216(CONCAT11(bVar18,bVar18)),0);
                puVar16 = (uint *)local_208;
                puVar23 = local_c8;
                do {
                  uVar27 = *puVar23;
                  puVar17 = puVar16 + 1;
                  puVar23 = puVar23 + 1;
                  *puVar16 = *puVar16 | uVar27 & auVar31._0_4_;
                  puVar16 = puVar17;
                } while (puVar17 != (uint *)(local_330 + (long)local_208));
                local_3b0 = local_3b0 + uVar28;
                uVar9 = uVar9 + 1;
              } while (uVar9 <= uVar12);
            }
            ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
            if ((ctx == (EVP_MD_CTX *)0x0) ||
               (iVar6 = EVP_DigestInit_ex(ctx,param_1,(ENGINE *)0x0), iVar6 < 1)) {
LAB_00100bc0:
              uVar21 = 0;
            }
            else {
              if (param_10 == '\0') {
                puVar10 = local_1c8;
                do {
                  puVar11 = puVar10 + 2;
                  *puVar10 = *puVar10 ^ __LC7;
                  puVar10[1] = puVar10[1] ^ _UNK_00100e68;
                  puVar10 = puVar11;
                  local_318 = local_3e0;
                } while (puVar11 != (ulong *)((long)local_1c8 + local_3e0));
              }
              else {
                puVar10 = local_1c8;
                for (uVar9 = local_318 >> 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                  *puVar10 = 0x5c5c5c5c5c5c5c5c;
                  puVar10 = puVar10 + (ulong)bVar30 * -2 + 1;
                }
                iVar6 = EVP_DigestUpdate(ctx,param_8,param_9);
                if (iVar6 < 1) goto LAB_00100bc0;
              }
              iVar6 = EVP_DigestUpdate(ctx,local_1c8,local_318);
              if ((iVar6 < 1) || (iVar6 = EVP_DigestUpdate(ctx,local_208,local_330), iVar6 < 1))
              goto LAB_00100bc0;
              iVar6 = EVP_DigestFinal(ctx,param_2,&local_2fc);
              if ((iVar6 != 0) && (param_3 != (ulong *)0x0)) {
                *param_3 = (ulong)local_2fc;
              }
              uVar21 = 1;
            }
            EVP_MD_CTX_free(ctx);
            goto LAB_00100bca;
          }
LAB_00100404:
          local_390 = &local_2f8;
          local_3d8 = (local_330 + 0xff + local_3e0) / local_3e0 + 1;
          uVar9 = ((local_3e0 + 0xc + param_7 + lVar26) - local_330) / local_3e0;
          if (local_3d8 < uVar9) {
            uVar9 = uVar9 - local_3d8;
            uVar20 = local_3e0 * uVar9;
          }
          else {
            uVar20 = 0;
            uVar9 = 0;
          }
          uVar12 = param_6 + 0xd;
          uVar27 = ((int)local_3e0 + (int)uVar12) * 8;
          puVar10 = local_1c8;
          for (uVar15 = local_3e0 >> 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + (ulong)bVar30 * -2 + 1;
          }
          if (param_9 < 0x81) {
            puVar10 = (ulong *)memcpy(local_1c8,param_8,param_9);
            uVar19 = _UNK_00100e58;
            uVar15 = __LC6;
            do {
              puVar11 = puVar10 + 2;
              *puVar10 = *puVar10 ^ uVar15;
              puVar10[1] = puVar10[1] ^ uVar19;
              puVar10 = puVar11;
            } while (puVar11 != (ulong *)((long)local_1c8 + local_3e0));
            local_3b8 = param_7 + 0xd;
            local_348 = uVar12 / local_3e0;
            uVar19 = uVar12 % local_3e0;
            local_350 = (lVar26 + uVar12) / local_3e0;
            uVar15 = 0xd;
            (*local_388)(local_390,local_1c8,(lVar26 + uVar12) % local_3e0);
            goto LAB_0010054a;
          }
        }
      }
    }
    else {
      iVar6 = MD5_Init((MD5_CTX *)&local_2f8);
      if (0 < iVar6) {
        bVar2 = false;
        local_318 = 0x30;
        lVar26 = 8;
        local_3e0 = 0x40;
        local_388 = MD5_Transform;
        local_330 = 0x10;
        local_380 = tls1_md5_final_raw;
        goto LAB_001002a3;
      }
    }
  }
LAB_00100db0:
  uVar21 = 0;
LAB_00100bca:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar21;
}


