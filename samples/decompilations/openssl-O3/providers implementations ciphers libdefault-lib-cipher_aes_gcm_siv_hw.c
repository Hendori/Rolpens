
void aes_gcm_siv_clean_ctx(undefined8 *param_1)

{
  EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)*param_1);
  *param_1 = 0;
  return;
}



undefined8 aes_gcm_siv_dup_ctx(undefined8 *param_1,long *param_2)

{
  int iVar1;
  EVP_CIPHER_CTX *out;
  
  *param_1 = 0;
  if (*param_2 == 0) {
    return 1;
  }
  out = EVP_CIPHER_CTX_new();
  *param_1 = out;
  if (out != (EVP_CIPHER_CTX *)0x0) {
    iVar1 = EVP_CIPHER_CTX_copy(out,(EVP_CIPHER_CTX *)*param_2);
    if (iVar1 != 0) {
      return 1;
    }
    out = (EVP_CIPHER_CTX *)*param_1;
  }
  EVP_CIPHER_CTX_free(out);
  *param_1 = 0;
  return 0;
}



undefined8 aes_gcm_siv_initkey(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  EVP_CIPHER_CTX *pEVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_6c;
  int local_68;
  long local_64;
  undefined4 local_5c;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = param_1[6];
  if (lVar4 == 0x18) {
    uVar2 = EVP_CIPHER_fetch(param_1[3],"AES-192-ECB",0);
LAB_001000fa:
    pEVar3 = (EVP_CIPHER_CTX *)*param_1;
joined_r0x0010027b:
    if (pEVar3 == (EVP_CIPHER_CTX *)0x0) {
      pEVar3 = EVP_CIPHER_CTX_new();
      *param_1 = (long)pEVar3;
      if (pEVar3 == (EVP_CIPHER_CTX *)0x0) {
        pEVar3 = (EVP_CIPHER_CTX *)0x0;
        goto LAB_00100226;
      }
    }
    iVar1 = EVP_EncryptInit_ex2(pEVar3,uVar2,param_1 + 7,0,0);
    if (iVar1 != 0) {
      local_64 = param_1[0x15];
      local_5c = (undefined4)param_1[0x16];
      local_68 = 0;
      local_6c = 0x10;
      iVar1 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,(uchar *)local_58,&local_6c,
                                (uchar *)&local_68,0x10);
      if (iVar1 != 0) {
        local_68 = 1;
        param_1[0xf] = local_58[0];
        local_6c = 0x10;
        iVar1 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,(uchar *)local_58,&local_6c,
                                  (uchar *)&local_68,0x10);
        if (iVar1 != 0) {
          lVar4 = 0;
          param_1[0x10] = local_58[0];
          if (param_1[6] != 0) {
            do {
              local_68 = (int)lVar4 + 2;
              local_6c = 0x10;
              iVar1 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,(uchar *)local_58,&local_6c,
                                        (uchar *)&local_68,0x10);
              if (iVar1 == 0) goto LAB_00100212;
              param_1[lVar4 + 0xb] = local_58[0];
              lVar4 = lVar4 + 1;
            } while ((ulong)(lVar4 * 8) < (ulong)param_1[6]);
          }
          iVar1 = EVP_EncryptInit_ex2(*param_1,uVar2,param_1 + 0xb,0,0);
          if (iVar1 != 0) {
            *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) & 0xe7;
            EVP_CIPHER_free(uVar2);
            uVar2 = 1;
            goto LAB_0010023c;
          }
        }
      }
    }
LAB_00100212:
    pEVar3 = (EVP_CIPHER_CTX *)*param_1;
  }
  else {
    if (lVar4 == 0x20) {
      uVar2 = EVP_CIPHER_fetch(param_1[3],"AES-256-ECB",0);
      pEVar3 = (EVP_CIPHER_CTX *)*param_1;
      goto joined_r0x0010027b;
    }
    if (lVar4 == 0x10) {
      uVar2 = EVP_CIPHER_fetch(param_1[3],"AES-128-ECB",0);
      goto LAB_001000fa;
    }
    pEVar3 = (EVP_CIPHER_CTX *)*param_1;
    uVar2 = 0;
  }
LAB_00100226:
  EVP_CIPHER_CTX_free(pEVar3);
  EVP_CIPHER_free(uVar2);
  *param_1 = 0;
  uVar2 = 0;
LAB_0010023c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint aes_gcm_siv_cipher(undefined8 *param_1,ulong *param_2,void *param_3,ulong param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  void *pvVar9;
  undefined4 *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined4 *puVar15;
  byte *pbVar16;
  ulong *puVar17;
  long in_FS_OFFSET;
  bool bVar18;
  uchar *local_d8;
  int *local_c0;
  uint local_b0;
  int local_a0 [2];
  long local_98;
  long local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (void *)0x0) {
    if ((*(byte *)(param_1 + 0x37) & 1) == 0) {
      iVar5 = CRYPTO_memcmp(param_1 + 0x11,param_1 + 0x13,0x10);
      uVar7 = (uint)(*(byte *)(param_1 + 0x37) >> 1 & iVar5 == 0);
    }
    else {
      uVar7 = *(byte *)(param_1 + 0x37) >> 2 & 1;
    }
    goto LAB_00100380;
  }
  if (param_2 == (ulong *)0x0) {
    if (param_4 == 0) {
      CRYPTO_free((void *)param_1[2]);
      param_1[2] = 0;
      param_1[5] = 0;
    }
    else {
      uVar12 = param_4 + 0xf + param_1[5] & 0xfffffffffffffff0;
      if ((0x1000000000 < uVar12) ||
         (pvVar9 = CRYPTO_realloc((void *)param_1[2],(int)uVar12,
                                  "providers/implementations/ciphers/cipher_aes_gcm_siv_hw.c",0x7e),
         pvVar9 == (void *)0x0)) goto LAB_00100ab8;
      param_1[2] = pvVar9;
      memcpy((void *)((long)pvVar9 + param_1[5]),param_3,param_4);
      param_4 = param_4 + param_1[5];
      param_1[5] = param_4;
      if (param_4 < uVar12) {
        memset((void *)(param_1[2] + param_4),0,uVar12 - param_4);
      }
    }
    uVar7 = 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x37);
    uVar11 = (uint)param_4;
    if ((bVar2 & 1) == 0) {
      bVar18 = (bVar2 & 0x30) == 0x10;
      *(byte *)(param_1 + 0x37) = bVar2 & 0xfb;
      uVar7 = 0;
      local_b0 = (uint)(bVar18 || 0x1000000000 < (long)param_4);
      if (!bVar18 && (long)param_4 < 0x1000000001) {
        local_88._8_8_ =
             param_1[0x14] & 0xffffffffffffff |
             (ulong)((byte)((ulong)param_1[0x14] >> 0x38) | 0xffffff80) << 0x38;
        local_88._0_8_ = param_1[0x13];
        if (param_4 != 0) {
          pbVar16 = (byte *)((long)param_3 + 1);
          uVar13 = 0;
          local_b0 = 0;
          uVar12 = param_4;
          puVar17 = param_2;
          uVar7 = local_b0;
          do {
            local_b0 = uVar7;
            local_a0[1] = 0x10;
            iVar5 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,local_58,local_a0 + 1,local_88,0x10
                                     );
            local_88._0_4_ = local_88._0_4_ + 1;
            uVar8 = 0x10;
            if (uVar12 < 0x11) {
              uVar8 = uVar12;
            }
            if (param_4 != uVar13) {
              if ((uVar8 - 1 < 7) || ((ulong)((long)puVar17 - (long)pbVar16) < 0xf)) {
                *(byte *)puVar17 = pbVar16[-1] ^ local_58[0];
                if (1 < uVar12) {
                  *(byte *)((long)puVar17 + 1) = *pbVar16 ^ local_58[1];
                  if (2 < uVar12) {
                    *(byte *)((long)puVar17 + 2) = pbVar16[1] ^ local_58[2];
                    if (3 < uVar12) {
                      *(byte *)((long)puVar17 + 3) = pbVar16[2] ^ local_58[3];
                      if (4 < uVar12) {
                        *(byte *)((long)puVar17 + 4) = pbVar16[3] ^ local_58[4];
                        if (5 < uVar12) {
                          *(byte *)((long)puVar17 + 5) = pbVar16[4] ^ local_58[5];
                          if (6 < uVar12) {
                            *(byte *)((long)puVar17 + 6) = pbVar16[5] ^ local_58[6];
                            if (7 < uVar12) {
                              *(byte *)((long)puVar17 + 7) = pbVar16[6] ^ local_58[7];
                              if ((((8 < uVar12) &&
                                   (*(byte *)(puVar17 + 1) = pbVar16[7] ^ local_58[8], 9 < uVar12))
                                  && (*(byte *)((long)puVar17 + 9) = pbVar16[8] ^ local_58[9],
                                     10 < uVar12)) &&
                                 (((*(byte *)((long)puVar17 + 10) = pbVar16[9] ^ local_58[10],
                                   0xb < uVar12 &&
                                   (*(byte *)((long)puVar17 + 0xb) = pbVar16[10] ^ local_58[0xb],
                                   0xc < uVar12)) &&
                                  ((*(byte *)((long)puVar17 + 0xc) = pbVar16[0xb] ^ local_58[0xc],
                                   0xd < uVar12 &&
                                   ((*(byte *)((long)puVar17 + 0xd) = pbVar16[0xc] ^ local_58[0xd],
                                    0xe < uVar12 &&
                                    (*(byte *)((long)puVar17 + 0xe) = pbVar16[0xd] ^ local_58[0xe],
                                    0xf < uVar12)))))))) {
                                *(byte *)((long)puVar17 + 0xf) = pbVar16[0xe] ^ local_58[0xf];
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else if (uVar8 - 1 == 0xf) {
                uVar8 = *(ulong *)(pbVar16 + 7);
                *puVar17 = *(ulong *)(pbVar16 + -1) ^ local_58._0_8_;
                puVar17[1] = uVar8 ^ local_58._8_8_;
              }
              else {
                *(ulong *)((long)param_2 + uVar13) =
                     *(ulong *)((long)param_3 + uVar13) ^ local_58._0_8_;
                if ((((((uVar12 != 8) &&
                       (*(byte *)((long)param_2 + uVar13 + 8) =
                             *(byte *)((long)param_3 + uVar13 + 8) ^ local_58[8], uVar12 != 9)) &&
                      (*(byte *)((long)param_2 + uVar13 + 9) =
                            *(byte *)((long)param_3 + uVar13 + 9) ^ local_58[9], uVar12 != 10)) &&
                     ((*(byte *)((long)param_2 + uVar13 + 10) =
                            *(byte *)((long)param_3 + uVar13 + 10) ^ local_58[10], uVar12 != 0xb &&
                      (*(byte *)((long)param_2 + uVar13 + 0xb) =
                            *(byte *)((long)param_3 + uVar13 + 0xb) ^ local_58[0xb], uVar12 != 0xc))
                     )) && (*(byte *)((long)param_2 + uVar13 + 0xc) =
                                 *(byte *)((long)param_3 + uVar13 + 0xc) ^ local_58[0xc],
                           uVar12 != 0xd)) &&
                   (*(byte *)((long)param_2 + uVar13 + 0xd) =
                         *(byte *)((long)param_3 + uVar13 + 0xd) ^ local_58[0xd], uVar12 == 0xf)) {
                  *(byte *)((long)param_2 + uVar13 + 0xe) =
                       *(byte *)((long)param_3 + uVar13 + 0xe) ^ local_58[0xe];
                }
              }
            }
            uVar13 = uVar13 + 0x10;
            uVar12 = uVar12 - 0x10;
            puVar17 = puVar17 + 2;
            pbVar16 = pbVar16 + 0x10;
            uVar7 = local_b0 | iVar5 == 0;
          } while (uVar13 < param_4);
          local_b0 = local_b0 | iVar5 == 0;
        }
        local_c0 = local_a0 + 1;
        local_d8 = local_58;
        puVar1 = param_1 + 0x17;
        local_98 = param_1[5] << 3;
        local_90 = param_4 * 8;
        local_58 = (undefined1  [16])0x0;
        ossl_polyval_ghash_init(puVar1);
        if (param_1[2] != 0) {
          ossl_polyval_ghash_hash(puVar1,local_d8,param_1[2],param_1[5] + 0xf & 0xfffffffffffffff0);
        }
        if (0xf < param_4) {
          ossl_polyval_ghash_hash(puVar1,local_d8,param_2,param_4 & 0xfffffffffffffff0);
        }
        if ((param_4 & 0xf) != 0) {
          pbVar16 = (byte *)((long)param_2 + (param_4 & 0xfffffffffffffff0));
          local_88 = (undefined1  [16])0x0;
          puVar15 = (undefined4 *)local_88;
          if (7 < (uVar11 & 0xf)) {
            uVar12 = 0;
            do {
              uVar7 = (int)uVar12 + 8;
              uVar13 = (ulong)uVar7;
              *(undefined8 *)((long)local_88 + uVar12) = *(undefined8 *)(pbVar16 + uVar12);
              uVar12 = uVar13;
            } while (uVar7 < (uVar11 & 8));
            puVar15 = (undefined4 *)((long)local_88 + uVar13);
            pbVar16 = pbVar16 + uVar13;
          }
          lVar14 = 0;
          if ((param_4 & 4) != 0) {
            *puVar15 = *(undefined4 *)pbVar16;
            lVar14 = 4;
          }
          if ((param_4 & 2) != 0) {
            *(undefined2 *)((long)puVar15 + lVar14) = *(undefined2 *)(pbVar16 + lVar14);
            lVar14 = lVar14 + 2;
          }
          if ((param_4 & 1) != 0) {
            *(byte *)((long)puVar15 + lVar14) = pbVar16[lVar14];
          }
          ossl_polyval_ghash_hash(puVar1,local_d8,local_88,0x10);
        }
        ossl_polyval_ghash_hash(puVar1,local_d8,&local_98,0x10);
        uVar3 = local_58._0_8_;
        uVar4 = local_58._8_4_;
        local_58[0xf] = local_58[0xf] & 0x7f;
        local_a0[1] = 0x10;
        local_58._8_4_ = uVar4 ^ *(uint *)(param_1 + 0x16);
        local_58._0_8_ = uVar3 ^ param_1[0x15];
        iVar5 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,(uchar *)(param_1 + 0x11),local_c0,
                                  local_d8,0x10);
        uVar7 = (iVar5 == 0 | local_b0) ^ 1;
        *(byte *)(param_1 + 0x37) = (byte)(uVar7 << 2) | *(byte *)(param_1 + 0x37) & 0xfb | 0x10;
      }
      goto LAB_00100380;
    }
    *(byte *)(param_1 + 0x37) = bVar2 & 0xfb;
    if (((bVar2 & 0x28) != 8) && (0x1000000000 >= (long)param_4)) {
      puVar1 = param_1 + 0x17;
      local_98 = param_1[5] << 3;
      local_78 = (undefined1  [16])0x0;
      local_90 = param_4 * 8;
      ossl_polyval_ghash_init(puVar1,param_1 + 0xf);
      if (param_1[2] != 0) {
        ossl_polyval_ghash_hash(puVar1,local_78,param_1[2],param_1[5] + 0xf & 0xfffffffffffffff0);
      }
      if (0xf < param_4) {
        ossl_polyval_ghash_hash(puVar1,local_78,param_3,param_4 & 0xfffffffffffffff0);
      }
      if ((param_4 & 0xf) != 0) {
        local_68 = (undefined1  [16])0x0;
        puVar10 = (undefined4 *)((param_4 & 0xfffffffffffffff0) + (long)param_3);
        puVar15 = (undefined4 *)local_68;
        if (7 < (uVar11 & 0xf)) {
          uVar12 = 0;
          do {
            uVar7 = (int)uVar12 + 8;
            uVar13 = (ulong)uVar7;
            *(undefined8 *)((long)local_68 + uVar12) = *(undefined8 *)((long)puVar10 + uVar12);
            uVar12 = uVar13;
          } while (uVar7 < (uVar11 & 8));
          puVar15 = (undefined4 *)((long)local_68 + uVar13);
          puVar10 = (undefined4 *)(uVar13 + (long)puVar10);
        }
        lVar14 = 0;
        if ((param_4 & 4) != 0) {
          *puVar15 = *puVar10;
          lVar14 = 4;
        }
        if ((param_4 & 2) != 0) {
          *(undefined2 *)((long)puVar15 + lVar14) = *(undefined2 *)((long)puVar10 + lVar14);
          lVar14 = lVar14 + 2;
        }
        if ((param_4 & 1) != 0) {
          *(undefined1 *)((long)puVar15 + lVar14) = *(undefined1 *)((long)puVar10 + lVar14);
        }
        ossl_polyval_ghash_hash(puVar1,local_78,local_68,0x10);
      }
      ossl_polyval_ghash_hash(puVar1,local_78,&local_98,0x10);
      uVar3 = local_78._0_8_;
      uVar4 = local_78._8_4_;
      local_78[0xf] = local_78[0xf] & 0x7f;
      local_a0[0] = 0x10;
      local_78._8_4_ = uVar4 ^ *(uint *)(param_1 + 0x16);
      local_78._0_8_ = uVar3 ^ param_1[0x15];
      iVar5 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,(uchar *)(param_1 + 0x11),local_a0,
                                local_78,0x10);
      uVar7 = (uint)(iVar5 == 0);
      local_88._8_8_ =
           param_1[0x12] & 0xffffffffffffff |
           (ulong)((byte)((ulong)param_1[0x12] >> 0x38) | 0xffffff80) << 0x38;
      local_88._0_8_ = param_1[0x11];
      if (param_4 != 0) {
        uVar13 = 0;
        pbVar16 = (byte *)((long)param_3 + 1);
        local_b0 = 0;
        uVar12 = param_4;
        puVar17 = param_2;
        uVar7 = local_b0;
        do {
          local_b0 = uVar7;
          local_a0[1] = 0x10;
          iVar6 = EVP_EncryptUpdate((EVP_CIPHER_CTX *)*param_1,local_58,local_a0 + 1,local_88,0x10);
          local_88._0_4_ = local_88._0_4_ + 1;
          uVar8 = 0x10;
          if (uVar12 < 0x11) {
            uVar8 = uVar12;
          }
          if (param_4 != uVar13) {
            if ((uVar8 - 1 < 7) || ((ulong)((long)puVar17 - (long)pbVar16) < 0xf)) {
              *(byte *)puVar17 = pbVar16[-1] ^ local_58[0];
              if (1 < uVar12) {
                *(byte *)((long)puVar17 + 1) = local_58[1] ^ *pbVar16;
                if (2 < uVar12) {
                  *(byte *)((long)puVar17 + 2) = pbVar16[1] ^ local_58[2];
                  if (3 < uVar12) {
                    *(byte *)((long)puVar17 + 3) = pbVar16[2] ^ local_58[3];
                    if (4 < uVar12) {
                      *(byte *)((long)puVar17 + 4) = local_58[4] ^ pbVar16[3];
                      if (5 < uVar12) {
                        *(byte *)((long)puVar17 + 5) = local_58[5] ^ pbVar16[4];
                        if (6 < uVar12) {
                          *(byte *)((long)puVar17 + 6) = local_58[6] ^ pbVar16[5];
                          if (7 < uVar12) {
                            *(byte *)((long)puVar17 + 7) = local_58[7] ^ pbVar16[6];
                            if ((((8 < uVar12) &&
                                 (*(byte *)(puVar17 + 1) = pbVar16[7] ^ local_58[8], 9 < uVar12)) &&
                                (*(byte *)((long)puVar17 + 9) = pbVar16[8] ^ local_58[9],
                                10 < uVar12)) &&
                               (((*(byte *)((long)puVar17 + 10) = pbVar16[9] ^ local_58[10],
                                 0xb < uVar12 &&
                                 (*(byte *)((long)puVar17 + 0xb) = pbVar16[10] ^ local_58[0xb],
                                 0xc < uVar12)) &&
                                ((*(byte *)((long)puVar17 + 0xc) = pbVar16[0xb] ^ local_58[0xc],
                                 0xd < uVar12 &&
                                 ((*(byte *)((long)puVar17 + 0xd) = pbVar16[0xc] ^ local_58[0xd],
                                  0xe < uVar12 &&
                                  (*(byte *)((long)puVar17 + 0xe) = pbVar16[0xd] ^ local_58[0xe],
                                  0xf < uVar12)))))))) {
                              *(byte *)((long)puVar17 + 0xf) = local_58[0xf] ^ pbVar16[0xe];
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (uVar8 - 1 == 0xf) {
              uVar8 = *(ulong *)(pbVar16 + 7);
              *puVar17 = *(ulong *)(pbVar16 + -1) ^ local_58._0_8_;
              puVar17[1] = uVar8 ^ local_58._8_8_;
            }
            else {
              *(ulong *)((long)param_2 + uVar13) =
                   *(ulong *)((long)param_3 + uVar13) ^ local_58._0_8_;
              if (((((uVar12 != 8) &&
                    (*(byte *)((long)param_2 + uVar13 + 8) =
                          *(byte *)((long)param_3 + uVar13 + 8) ^ local_58[8], uVar12 != 9)) &&
                   (*(byte *)((long)param_2 + uVar13 + 9) =
                         *(byte *)((long)param_3 + uVar13 + 9) ^ local_58[9], uVar12 != 10)) &&
                  ((*(byte *)((long)param_2 + uVar13 + 10) =
                         *(byte *)((long)param_3 + uVar13 + 10) ^ local_58[10], uVar12 != 0xb &&
                   (*(byte *)((long)param_2 + uVar13 + 0xb) =
                         *(byte *)((long)param_3 + uVar13 + 0xb) ^ local_58[0xb], uVar12 != 0xc))))
                 && ((*(byte *)((long)param_2 + uVar13 + 0xc) =
                           *(byte *)((long)param_3 + uVar13 + 0xc) ^ local_58[0xc], uVar12 != 0xd &&
                     (*(byte *)((long)param_2 + uVar13 + 0xd) =
                           *(byte *)((long)param_3 + uVar13 + 0xd) ^ local_58[0xd], uVar12 == 0xf)))
                 ) {
                *(byte *)((long)param_2 + uVar13 + 0xe) =
                     *(byte *)((long)param_3 + uVar13 + 0xe) ^ local_58[0xe];
              }
            }
          }
          uVar13 = uVar13 + 0x10;
          uVar12 = uVar12 - 0x10;
          puVar17 = puVar17 + 2;
          pbVar16 = pbVar16 + 0x10;
          uVar7 = local_b0 | iVar6 == 0;
        } while (uVar13 < param_4);
        uVar7 = (uint)(iVar5 == 0) | local_b0 | iVar6 == 0;
      }
      uVar7 = uVar7 ^ 1;
      *(byte *)(param_1 + 0x37) = *(byte *)(param_1 + 0x37) & 0xfb | (byte)(uVar7 << 2) | 8;
      goto LAB_00100380;
    }
LAB_00100ab8:
    uVar7 = 0;
  }
LAB_00100380:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined1 * ossl_prov_cipher_hw_aes_gcm_siv(void)

{
  return aes_gcm_siv_hw;
}


