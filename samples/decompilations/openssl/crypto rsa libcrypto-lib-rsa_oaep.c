
int PKCS1_MGF1(uchar *mask,long len,uchar *seed,long seedlen,EVP_MD *dgst)

{
  long lVar1;
  int iVar2;
  int iVar3;
  EVP_MD_CTX *ctx;
  uint uVar4;
  long lVar5;
  uchar *md;
  long in_FS_OFFSET;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if ((ctx == (EVP_MD_CTX *)0x0) || (iVar2 = EVP_MD_get_size(dgst), iVar2 < 1)) {
LAB_00100185:
    iVar2 = -1;
  }
  else {
    if (0 < len) {
      uVar4 = 0;
      lVar5 = 0;
      md = mask;
      do {
        local_8c = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
        iVar3 = EVP_DigestInit_ex(ctx,dgst,(ENGINE *)0x0);
        if (((iVar3 == 0) || (iVar3 = EVP_DigestUpdate(ctx,seed,seedlen), iVar3 == 0)) ||
           (iVar3 = EVP_DigestUpdate(ctx,&local_8c,4), iVar3 == 0)) goto LAB_00100185;
        lVar1 = iVar2 + lVar5;
        if (len < lVar1) {
          iVar2 = EVP_DigestFinal_ex(ctx,local_88,(uint *)0x0);
          if (iVar2 == 0) goto LAB_00100185;
          memcpy(mask + lVar5,local_88,len - lVar5);
          break;
        }
        iVar3 = EVP_DigestFinal_ex(ctx,md,(uint *)0x0);
        if (iVar3 == 0) goto LAB_00100185;
        uVar4 = uVar4 + 1;
        md = md + iVar2;
        lVar5 = lVar1;
      } while (lVar1 < len);
    }
    iVar2 = 0;
  }
  OPENSSL_cleanse(local_88,0x40);
  EVP_MD_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



undefined8
ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex
          (undefined8 param_1,undefined1 *param_2,int param_3,void *param_4,uint param_5,
          void *param_6,int param_7,EVP_MD *param_8,EVP_MD *param_9)

{
  uchar *seed;
  uchar *md;
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long seedlen;
  uchar *mask;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long len;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  ulong local_88 [4];
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  long local_40;
  
  param_3 = param_3 + -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 == (EVP_MD *)0x0) {
    param_8 = EVP_sha1();
  }
  if (param_9 == (EVP_MD *)0x0) {
    param_9 = param_8;
  }
  uVar5 = EVP_MD_get_size(param_8);
  uVar2 = (uint)uVar5;
  if ((int)uVar2 < 1) {
    ERR_new();
    uVar9 = 0;
    ERR_set_debug("crypto/rsa/rsa_oaep.c",0x5d,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    ERR_set_error(4,0xb5,0);
    goto LAB_00100637;
  }
  iVar3 = param_3 + uVar2 * -2;
  if (iVar3 <= (int)param_5) {
    ERR_new();
    uVar9 = 0;
    ERR_set_debug("crypto/rsa/rsa_oaep.c",99,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    ERR_set_error(4,0x6e,0);
    goto LAB_00100637;
  }
  if (param_3 <= (int)(uVar2 * 2)) {
    ERR_new();
    uVar9 = 0;
    ERR_set_debug("crypto/rsa/rsa_oaep.c",0x68,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    ERR_set_error(4,0x78,0);
    goto LAB_00100637;
  }
  seedlen = (long)(int)uVar2;
  *param_2 = 0;
  md = param_2 + seedlen + 1;
  iVar4 = EVP_Digest(param_6,(long)param_7,md,(uint *)0x0,param_8,(ENGINE *)0x0);
  if (iVar4 == 0) {
LAB_00100600:
    len = 0;
    mask = (uchar *)0x0;
    uVar9 = 0;
  }
  else {
    seed = param_2 + 1;
    iVar4 = (param_3 - param_5) + uVar2 * -2;
    memset(md + seedlen,0,(long)(iVar4 + -1));
    md[(long)(int)(iVar4 + uVar2) + -1] = '\x01';
    memcpy(md + (((long)param_3 - (long)(int)param_5) - seedlen),param_4,(ulong)param_5);
    iVar4 = RAND_bytes_ex(param_1,seed,seedlen,0);
    if (iVar4 < 1) goto LAB_00100600;
    uVar11 = iVar3 + uVar2;
    len = (long)(int)uVar11;
    mask = (uchar *)CRYPTO_malloc(uVar11,"crypto/rsa/rsa_oaep.c",0x7e);
    if (mask == (uchar *)0x0) {
      uVar9 = 0;
    }
    else {
      iVar3 = PKCS1_MGF1(mask,len,seed,seedlen,param_9);
      if (-1 < iVar3) {
        if (0 < (int)uVar11) {
          if (uVar11 - 1 < 0xf) {
            uVar7 = 0;
            uVar8 = 0;
          }
          else {
            lVar6 = 0;
            do {
              uVar7 = *(ulong *)((long)(md + lVar6) + 8);
              uVar1 = *(ulong *)((long)(mask + lVar6) + 8);
              *(ulong *)(md + lVar6) = *(ulong *)(md + lVar6) ^ *(ulong *)(mask + lVar6);
              *(ulong *)((long)(md + lVar6) + 8) = uVar7 ^ uVar1;
              lVar6 = lVar6 + 0x10;
            } while ((ulong)(uVar11 >> 4) << 4 != lVar6);
            uVar8 = uVar11 & 0xfffffff0;
            uVar7 = (ulong)uVar8;
            if (uVar11 == uVar8) goto LAB_00100474;
          }
          uVar10 = uVar11 - (int)uVar7;
          if (6 < uVar10 - 1) {
            *(ulong *)(param_2 + seedlen + 1 + uVar7) =
                 *(ulong *)(mask + uVar7) ^ *(ulong *)(param_2 + seedlen + 1 + uVar7);
            uVar8 = uVar8 + (uVar10 & 0xfffffff8);
            if ((uVar10 & 7) == 0) goto LAB_00100474;
          }
          md[(int)uVar8] = md[(int)uVar8] ^ mask[(int)uVar8];
          iVar3 = uVar8 + 1;
          if (iVar3 < (int)uVar11) {
            md[iVar3] = md[iVar3] ^ mask[iVar3];
            iVar3 = uVar8 + 2;
            if (iVar3 < (int)uVar11) {
              md[iVar3] = md[iVar3] ^ mask[iVar3];
              iVar3 = uVar8 + 3;
              if (iVar3 < (int)uVar11) {
                md[iVar3] = md[iVar3] ^ mask[iVar3];
                iVar3 = uVar8 + 4;
                if (iVar3 < (int)uVar11) {
                  md[iVar3] = md[iVar3] ^ mask[iVar3];
                  iVar3 = uVar8 + 5;
                  if (iVar3 < (int)uVar11) {
                    iVar4 = uVar8 + 6;
                    md[iVar3] = md[iVar3] ^ mask[iVar3];
                    if (iVar4 < (int)uVar11) {
                      md[iVar4] = md[iVar4] ^ mask[iVar4];
                    }
                  }
                }
              }
            }
          }
        }
LAB_00100474:
        iVar3 = PKCS1_MGF1((uchar *)local_88,seedlen,md,len,param_9);
        if (-1 < iVar3) {
          if (uVar2 - 1 < 0xf) {
            uVar5 = 0;
            uVar11 = 0;
LAB_00100511:
            uVar8 = uVar2 - (int)uVar5;
            if (6 < uVar8 - 1) {
              uVar11 = uVar11 + (uVar8 & 0xfffffff8);
              *(ulong *)(param_2 + uVar5 + 1) =
                   *(ulong *)(param_2 + uVar5 + 1) ^ *(ulong *)((long)local_88 + uVar5);
              if ((uVar8 & 7) == 0) goto LAB_001005bd;
            }
            seed[(int)uVar11] = seed[(int)uVar11] ^ *(byte *)((long)local_88 + (long)(int)uVar11);
            iVar3 = uVar11 + 1;
            if (iVar3 < (int)uVar2) {
              seed[iVar3] = seed[iVar3] ^ *(byte *)((long)local_88 + (long)iVar3);
              iVar3 = uVar11 + 2;
              if (iVar3 < (int)uVar2) {
                seed[iVar3] = seed[iVar3] ^ *(byte *)((long)local_88 + (long)iVar3);
                iVar3 = uVar11 + 3;
                if (iVar3 < (int)uVar2) {
                  seed[iVar3] = seed[iVar3] ^ *(byte *)((long)local_88 + (long)iVar3);
                  iVar3 = uVar11 + 4;
                  if (iVar3 < (int)uVar2) {
                    seed[iVar3] = seed[iVar3] ^ *(byte *)((long)local_88 + (long)iVar3);
                    iVar3 = uVar11 + 5;
                    if (iVar3 < (int)uVar2) {
                      iVar4 = uVar11 + 6;
                      seed[iVar3] = seed[iVar3] ^ *(byte *)((long)local_88 + (long)iVar3);
                      if (iVar4 < (int)uVar2) {
                        seed[iVar4] = seed[iVar4] ^ *(byte *)((long)local_88 + (long)iVar4);
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            iVar3 = (int)((uVar5 & 0xffffffff) >> 4);
            *(ulong *)(param_2 + 1) = *(ulong *)(param_2 + 1) ^ local_88[0];
            *(ulong *)(param_2 + 9) = *(ulong *)(param_2 + 9) ^ local_88[1];
            if (iVar3 != 1) {
              *(ulong *)(param_2 + 0x11) = *(ulong *)(param_2 + 0x11) ^ local_88[2];
              *(ulong *)(param_2 + 0x19) = *(ulong *)(param_2 + 0x19) ^ local_88[3];
              if (iVar3 != 2) {
                *(ulong *)(param_2 + 0x21) = *(ulong *)(param_2 + 0x21) ^ local_68;
                *(ulong *)(param_2 + 0x29) = *(ulong *)(param_2 + 0x29) ^ uStack_60;
                if (iVar3 != 3) {
                  *(ulong *)(param_2 + 0x31) = *(ulong *)(param_2 + 0x31) ^ local_58;
                  *(ulong *)(param_2 + 0x39) = *(ulong *)(param_2 + 0x39) ^ uStack_50;
                }
              }
            }
            uVar11 = uVar2 & 0xfffffff0;
            uVar5 = (ulong)uVar11;
            if (uVar2 != uVar11) goto LAB_00100511;
          }
LAB_001005bd:
          uVar9 = 1;
          goto LAB_00100618;
        }
      }
      uVar9 = 0;
    }
  }
LAB_00100618:
  OPENSSL_cleanse(local_88,0x40);
  CRYPTO_clear_free(mask,len,"crypto/rsa/rsa_oaep.c",0x93);
LAB_00100637:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int RSA_padding_add_PKCS1_OAEP(uchar *to,int tlen,uchar *f,int fl,uchar *p,int pl)

{
  int iVar1;
  undefined4 in_register_0000008c;
  
  iVar1 = ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex
                    (0,to,tlen,f,fl,p,CONCAT44(in_register_0000008c,pl),0,0);
  return iVar1;
}



void RSA_padding_add_PKCS1_OAEP_mgf1
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex
            (0,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



uint RSA_padding_check_PKCS1_OAEP_mgf1
               (long param_1,uint param_2,long param_3,uint param_4,int param_5,void *param_6,
               int param_7,EVP_MD *param_8,EVP_MD *param_9)

{
  uint num;
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long seedlen;
  uchar *mask;
  long lVar10;
  void *pvVar11;
  ulong *puVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *pbVar21;
  size_t len;
  size_t sVar22;
  uint uVar23;
  uint uVar24;
  long in_FS_OFFSET;
  ulong *local_128;
  uint local_110;
  EVP_MD *local_108;
  byte *local_100;
  uint local_d0;
  ulong local_c8 [4];
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  uchar local_88 [72];
  long local_40;
  
  local_108 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 == (EVP_MD *)0x0) {
    local_108 = EVP_sha1();
  }
  if (param_9 == (EVP_MD *)0x0) {
    param_9 = local_108;
  }
  uVar4 = EVP_MD_get_size();
  if ((0 < (int)param_2 && 0 < (int)param_4) && (0 < (int)uVar4)) {
    if (((int)param_4 <= param_5) && (iVar5 = uVar4 + 1, iVar5 * 2 <= param_5)) {
      iVar6 = param_5 - uVar4;
      num = iVar6 - 1;
      seedlen = (long)(int)num;
      mask = (uchar *)CRYPTO_malloc(num,"crypto/rsa/rsa_oaep.c",0xe3);
      lVar10 = (long)param_5;
      if ((mask == (uchar *)0x0) ||
         (pvVar11 = CRYPTO_malloc(param_5,"crypto/rsa/rsa_oaep.c",0xe7), pvVar11 == (void *)0x0)) {
        uVar15 = 0xffffffff;
        uVar14 = 0xffffffff;
        local_100 = (byte *)0x0;
        local_110 = 0;
      }
      else {
        pbVar21 = (byte *)((int)param_4 + param_3);
        pbVar20 = (byte *)((long)pvVar11 + (long)param_5);
        pbVar18 = pbVar20;
        do {
          pbVar18 = pbVar18 + -1;
          uVar14 = param_4 - 1 & ~param_4;
          uVar15 = ((int)uVar14 >> 0x1f) + 1;
          pbVar21 = pbVar21 + -(ulong)uVar15;
          param_4 = param_4 - uVar15;
          bVar3 = ~(byte)((int)uVar14 >> 0x1f) & *pbVar21;
          *pbVar18 = bVar3;
        } while ((int)pbVar20 - (int)pbVar18 < param_5);
        uVar17 = (ulong)(param_5 - 1);
        len = (size_t)(int)uVar4;
        local_100 = pbVar20 + ~uVar17;
        uVar14 = bVar3 - 1 & ~(uint)bVar3;
        local_110 = (int)uVar14 >> 0x1f;
        pbVar20 = pbVar20 + (len - uVar17);
        iVar7 = PKCS1_MGF1((uchar *)local_c8,len,pbVar20,seedlen,param_9);
        if (iVar7 == 0) {
          if ((int)uVar4 < 0x10) {
            uVar19 = 0;
            uVar15 = 0;
LAB_001009da:
            uVar16 = uVar4 - (int)uVar19;
            if (6 < uVar16 - 1) {
              puVar12 = (ulong *)((long)local_c8 + uVar19);
              uVar15 = uVar15 + (uVar16 & 0xfffffff8);
              *puVar12 = *puVar12 ^ *(ulong *)((long)pvVar11 + (lVar10 - uVar17) + uVar19);
              if ((uVar16 & 7) == 0) goto LAB_00100ab0;
            }
            iVar7 = uVar15 + 1;
            *(byte *)((long)local_c8 + (long)(int)uVar15) =
                 *(byte *)((long)local_c8 + (long)(int)uVar15) ^ local_100[iVar7];
            if (iVar7 < (int)uVar4) {
              iVar8 = uVar15 + 2;
              pbVar18 = (byte *)((long)local_c8 + (long)iVar7);
              *pbVar18 = *pbVar18 ^ local_100[iVar8];
              if (iVar8 < (int)uVar4) {
                iVar7 = uVar15 + 3;
                pbVar18 = (byte *)((long)local_c8 + (long)iVar8);
                *pbVar18 = *pbVar18 ^ local_100[iVar7];
                if (iVar7 < (int)uVar4) {
                  iVar8 = uVar15 + 4;
                  pbVar18 = (byte *)((long)local_c8 + (long)iVar7);
                  *pbVar18 = *pbVar18 ^ local_100[iVar8];
                  if (iVar8 < (int)uVar4) {
                    iVar7 = uVar15 + 5;
                    pbVar18 = (byte *)((long)local_c8 + (long)iVar8);
                    *pbVar18 = *pbVar18 ^ local_100[iVar7];
                    if (iVar7 < (int)uVar4) {
                      iVar8 = uVar15 + 6;
                      pbVar18 = (byte *)((long)local_c8 + (long)iVar7);
                      *pbVar18 = *pbVar18 ^ local_100[iVar8];
                      if (iVar8 < (int)uVar4) {
                        pbVar18 = (byte *)((long)local_c8 + (long)iVar8);
                        *pbVar18 = *pbVar18 ^ local_100[(int)(uVar15 + 7)];
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            uVar15 = uVar4 >> 4;
            puVar12 = (ulong *)((lVar10 - uVar17) + (long)pvVar11);
            local_c8[0] = *puVar12 ^ local_c8[0];
            local_c8[1] = puVar12[1] ^ local_c8[1];
            if (uVar15 != 1) {
              local_c8[2] = puVar12[2] ^ local_c8[2];
              local_c8[3] = puVar12[3] ^ local_c8[3];
              if (uVar15 != 2) {
                local_a8 = puVar12[4] ^ local_a8;
                uStack_a0 = puVar12[5] ^ uStack_a0;
                if (uVar15 != 3) {
                  local_98 = puVar12[6] ^ local_98;
                  uStack_90 = puVar12[7] ^ uStack_90;
                }
              }
            }
            uVar15 = uVar4 & 0xfffffff0;
            uVar19 = (ulong)uVar15;
            if (uVar15 != uVar4) goto LAB_001009da;
          }
LAB_00100ab0:
          iVar7 = PKCS1_MGF1(mask,seedlen,(uchar *)local_c8,len,param_9);
          if (iVar7 == 0) {
            if ((int)num < 1) {
              iVar7 = EVP_Digest(param_6,(long)param_7,local_88,(uint *)0x0,local_108,(ENGINE *)0x0)
              ;
              if (iVar7 == 0) goto LAB_00100c47;
              CRYPTO_memcmp(mask,local_88,len);
LAB_00100f8d:
              uVar14 = iVar6 - 2;
              uVar15 = 0xffffffff;
              local_110 = 0;
              local_d0 = 0;
            }
            else {
              if (iVar6 - 2U < 0xf) {
                uVar15 = 0;
                uVar19 = 0;
LAB_00100b55:
                iVar7 = iVar6 - (int)uVar19;
                uVar16 = iVar7 - 1;
                if (6 < iVar7 - 2U) {
                  uVar15 = uVar15 + (uVar16 & 0xfffffff8);
                  *(ulong *)(mask + uVar19) =
                       *(ulong *)((long)pvVar11 + (lVar10 - uVar17) + uVar19 + len) ^
                       *(ulong *)(mask + uVar19);
                  if ((uVar16 & 7) == 0) goto LAB_00100c18;
                }
                mask[(int)uVar15] = mask[(int)uVar15] ^ pbVar20[(int)uVar15];
                iVar7 = uVar15 + 1;
                if (iVar7 < (int)num) {
                  mask[iVar7] = mask[iVar7] ^ pbVar20[iVar7];
                  iVar7 = uVar15 + 2;
                  if (iVar7 < (int)num) {
                    mask[iVar7] = mask[iVar7] ^ pbVar20[iVar7];
                    iVar7 = uVar15 + 3;
                    if (iVar7 < (int)num) {
                      mask[iVar7] = mask[iVar7] ^ pbVar20[iVar7];
                      iVar7 = uVar15 + 4;
                      if (iVar7 < (int)num) {
                        mask[iVar7] = mask[iVar7] ^ pbVar20[iVar7];
                        iVar7 = uVar15 + 5;
                        if (iVar7 < (int)num) {
                          iVar8 = uVar15 + 6;
                          mask[iVar7] = mask[iVar7] ^ pbVar20[iVar7];
                          if (iVar8 < (int)num) {
                            mask[iVar8] = mask[iVar8] ^ pbVar20[iVar8];
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                lVar13 = 0;
                do {
                  uVar19 = *(ulong *)((long)(mask + lVar13) + 8);
                  puVar12 = (ulong *)((long)pvVar11 + lVar13 + (lVar10 - uVar17) + len);
                  uVar1 = puVar12[1];
                  *(ulong *)(mask + lVar13) = *puVar12 ^ *(ulong *)(mask + lVar13);
                  *(ulong *)((long)(mask + lVar13) + 8) = uVar1 ^ uVar19;
                  lVar13 = lVar13 + 0x10;
                } while ((ulong)(num >> 4) << 4 != lVar13);
                uVar15 = num & 0xfffffff0;
                uVar19 = (ulong)uVar15;
                if ((num & 0xf) != 0) goto LAB_00100b55;
              }
LAB_00100c18:
              iVar7 = EVP_Digest(param_6,(long)param_7,local_88,(uint *)0x0,local_108,(ENGINE *)0x0)
              ;
              if (iVar7 == 0) goto LAB_00100c47;
              uVar15 = CRYPTO_memcmp(mask,local_88,len);
              local_110 = (int)(~uVar15 & uVar15 - 1 & uVar14) >> 0x1f;
              if ((int)num <= (int)uVar4) goto LAB_00100f8d;
              uVar15 = 0;
              uVar14 = 0;
              sVar22 = len;
              do {
                bVar3 = mask[sVar22];
                uVar16 = bVar3 ^ 1;
                uVar23 = (int)(~uVar16 & uVar16 - 1) >> 0x1f;
                uVar16 = ~uVar15 & uVar23;
                uVar15 = uVar15 | uVar23;
                uVar23 = (uint)sVar22;
                sVar22 = sVar22 + 1;
                uVar14 = uVar16 & uVar23 | ~uVar16 & uVar14;
                local_110 = local_110 & ((int)(~(uint)bVar3 & bVar3 - 1) >> 0x1f | uVar15);
              } while ((int)sVar22 < (int)num);
              uVar14 = num - (uVar14 + 1);
              local_110 = uVar15 & ~((int)((param_2 - uVar14 ^ uVar14 | param_2 ^ uVar14) ^ param_2)
                                    >> 0x1f) & local_110;
              local_d0 = local_110 & 1;
              uVar15 = ~local_110;
            }
            uVar23 = (num - uVar4) - 1;
            uVar16 = (int)((uVar23 - param_2 ^ param_2 | param_2 ^ uVar23) ^ uVar23) >> 0x1f;
            uVar16 = ~uVar16 & param_2 | uVar16 & uVar23;
            if (1 < (int)uVar23) {
              uVar24 = 1;
              do {
                uVar9 = uVar24 & uVar23 - uVar14;
                bVar3 = (char)(~(byte)(uVar9 >> 0x18) & (byte)(uVar9 - 1 >> 0x18)) >> 7;
                if (iVar5 < (int)(num - uVar24)) {
                  pbVar20 = mask + iVar5;
                  do {
                    pbVar18 = pbVar20 + 1;
                    *pbVar20 = pbVar20[(int)uVar24] & ~bVar3 | bVar3 & *pbVar20;
                    pbVar20 = pbVar18;
                  } while (mask + (ulong)((-2 - uVar4) + (num - uVar24)) + len + 2 != pbVar18);
                }
                uVar9 = uVar24 * 2;
                iVar6 = uVar24 * -2;
                uVar24 = uVar9;
              } while (uVar23 != uVar9 && SBORROW4(uVar23,uVar9) == (int)(uVar23 + iVar6) < 0);
            }
            if (0 < (int)uVar16) {
              uVar17 = 0;
              iVar5 = -uVar14;
              do {
                bVar3 = (byte)(uVar14 >> 0x18);
                bVar2 = (byte)(uVar17 >> 0x18);
                bVar3 = (char)((bVar3 ^ bVar2 | (byte)((uint)iVar5 >> 0x18) ^ bVar3) ^ bVar2) >> 7 &
                        (byte)local_110;
                *(byte *)(param_1 + uVar17) =
                     ~bVar3 & *(byte *)(param_1 + uVar17) | mask[uVar17 + len + 1] & bVar3;
                uVar17 = uVar17 + 1;
                iVar5 = iVar5 + 1;
              } while (uVar17 != uVar16);
            }
            ERR_new();
            ERR_set_debug("crypto/rsa/rsa_oaep.c",0x14c,"RSA_padding_check_PKCS1_OAEP_mgf1");
            ERR_set_error(4,0x79,0);
            err_clear_last_constant_time(local_d0);
            goto LAB_00100c56;
          }
        }
LAB_00100c47:
        uVar14 = 0xffffffff;
        uVar15 = ~local_110;
      }
LAB_00100c56:
      local_128 = local_c8;
      OPENSSL_cleanse(local_128,0x40);
      CRYPTO_clear_free(mask,seedlen,"crypto/rsa/rsa_oaep.c",0x151);
      CRYPTO_clear_free(local_100,lVar10,"crypto/rsa/rsa_oaep.c",0x152);
      uVar15 = local_110 & uVar14 | uVar15;
      goto LAB_00100ca5;
    }
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_oaep.c",0xde,"RSA_padding_check_PKCS1_OAEP_mgf1");
    ERR_set_error(4,0x79,0);
  }
  uVar15 = 0xffffffff;
LAB_00100ca5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



int RSA_padding_check_PKCS1_OAEP(uchar *to,int tlen,uchar *f,int fl,int rsa_len,uchar *p,int pl)

{
  int iVar1;
  
  iVar1 = RSA_padding_check_PKCS1_OAEP_mgf1();
  return iVar1;
}


