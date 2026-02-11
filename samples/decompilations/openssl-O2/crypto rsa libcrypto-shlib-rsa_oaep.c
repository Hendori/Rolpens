
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
  uchar *md;
  int iVar1;
  int iVar2;
  int iVar3;
  long seedlen;
  uchar *mask;
  long lVar4;
  undefined8 uVar5;
  long len;
  long in_FS_OFFSET;
  bool bVar6;
  undefined4 local_8c;
  byte local_88 [72];
  long local_40;
  
  param_3 = param_3 + -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 == (EVP_MD *)0x0) {
    param_8 = EVP_sha1();
  }
  if (param_9 == (EVP_MD *)0x0) {
    param_9 = param_8;
  }
  iVar1 = EVP_MD_get_size(param_8);
  if (iVar1 < 1) {
    ERR_new();
    uVar5 = 0;
    ERR_set_debug("crypto/rsa/rsa_oaep.c",0x5d,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    ERR_set_error(4,0xb5,0);
    goto LAB_00100439;
  }
  iVar2 = param_3 + iVar1 * -2;
  if (iVar2 <= (int)param_5) {
    ERR_new();
    uVar5 = 0;
    ERR_set_debug("crypto/rsa/rsa_oaep.c",99,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    ERR_set_error(4,0x6e,0);
    goto LAB_00100439;
  }
  if (param_3 <= iVar1 * 2) {
    ERR_new();
    uVar5 = 0;
    ERR_set_debug("crypto/rsa/rsa_oaep.c",0x68,"ossl_rsa_padding_add_PKCS1_OAEP_mgf1_ex");
    ERR_set_error(4,0x78,0);
    goto LAB_00100439;
  }
  seedlen = (long)iVar1;
  *param_2 = 0;
  md = param_2 + seedlen + 1;
  local_8c = iVar1 * 2;
  iVar3 = EVP_Digest(param_6,(long)param_7,md,(uint *)0x0,param_8,(ENGINE *)0x0);
  if (iVar3 == 0) {
LAB_00100408:
    len = 0;
    mask = (uchar *)0x0;
    uVar5 = 0;
  }
  else {
    iVar3 = (param_3 - param_5) - local_8c;
    memset(md + seedlen,0,(long)(iVar3 + -1));
    md[(long)(iVar3 + iVar1) + -1] = '\x01';
    memcpy(md + (((long)param_3 - (long)(int)param_5) - seedlen),param_4,(ulong)param_5);
    iVar3 = RAND_bytes_ex(param_1,param_2 + 1,seedlen,0);
    if (iVar3 < 1) goto LAB_00100408;
    iVar2 = iVar2 + iVar1;
    len = (long)iVar2;
    mask = (uchar *)CRYPTO_malloc(iVar2,"crypto/rsa/rsa_oaep.c",0x7e);
    if (mask == (uchar *)0x0) {
      uVar5 = 0;
    }
    else {
      iVar1 = PKCS1_MGF1(mask,len,param_2 + 1,seedlen,param_9);
      if (-1 < iVar1) {
        lVar4 = 0;
        if (0 < iVar2) {
          do {
            md[lVar4] = md[lVar4] ^ mask[lVar4];
            lVar4 = lVar4 + 1;
          } while (len != lVar4);
        }
        iVar1 = PKCS1_MGF1(local_88,seedlen,md,len,param_9);
        lVar4 = 1;
        if (-1 < iVar1) {
          do {
            param_2[lVar4] = param_2[lVar4] ^ local_88[lVar4 + -1];
            bVar6 = seedlen != lVar4;
            lVar4 = lVar4 + 1;
          } while (bVar6);
          uVar5 = 1;
          goto LAB_0010041c;
        }
      }
      uVar5 = 0;
    }
  }
LAB_0010041c:
  OPENSSL_cleanse(local_88,0x40);
  CRYPTO_clear_free(mask,len,"crypto/rsa/rsa_oaep.c",0x93);
LAB_00100439:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
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
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long seedlen;
  uchar *mask;
  void *pvVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  size_t sVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  size_t len;
  long in_FS_OFFSET;
  byte *local_118;
  uint local_110;
  EVP_MD *local_108;
  uint local_f0;
  byte local_c8 [64];
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
  iVar2 = EVP_MD_get_size(local_108);
  if ((0 < (int)param_2 && 0 < (int)param_4) && (0 < iVar2)) {
    if (((int)param_4 <= param_5) && (iVar3 = iVar2 + 1, iVar3 * 2 <= param_5)) {
      num = (param_5 - iVar2) - 1;
      seedlen = (long)(int)num;
      mask = (uchar *)CRYPTO_malloc(num,"crypto/rsa/rsa_oaep.c",0xe3);
      if ((mask == (uchar *)0x0) ||
         (pvVar9 = CRYPTO_malloc(param_5,"crypto/rsa/rsa_oaep.c",0xe7), pvVar9 == (void *)0x0)) {
        uVar4 = 0xffffffff;
        pbVar12 = (byte *)0x0;
        local_110 = 0;
        local_f0 = 0xffffffff;
      }
      else {
        pbVar13 = (byte *)(param_3 + (int)param_4);
        pbVar14 = (byte *)((long)param_5 + (long)pvVar9);
        pbVar12 = pbVar14;
        do {
          pbVar12 = pbVar12 + -1;
          uVar4 = param_4 - 1 & ~param_4;
          uVar5 = ((int)uVar4 >> 0x1f) + 1;
          pbVar13 = pbVar13 + -(ulong)uVar5;
          param_4 = param_4 - uVar5;
          bVar16 = ~(byte)((int)uVar4 >> 0x1f) & *pbVar13;
          *pbVar12 = bVar16;
        } while ((int)pbVar14 - (int)pbVar12 < param_5);
        len = (size_t)iVar2;
        pbVar12 = pbVar14 + ~(ulong)(param_5 - 1);
        uVar4 = bVar16 - 1 & ~(uint)bVar16;
        local_110 = (int)uVar4 >> 0x1f;
        iVar6 = PKCS1_MGF1(local_c8,len,pbVar14 + (len - (param_5 - 1)),seedlen,param_9);
        lVar10 = 0;
        if (iVar6 == 0) {
          do {
            local_c8[lVar10] = local_c8[lVar10] ^ pbVar12[lVar10 + 1];
            lVar10 = lVar10 + 1;
          } while ((int)lVar10 < iVar2);
          iVar6 = PKCS1_MGF1(mask,seedlen,local_c8,len,param_9);
          if (iVar6 == 0) {
            uVar11 = 0;
            if ((int)num < 1) {
              iVar6 = EVP_Digest(param_6,(long)param_7,local_88,(uint *)0x0,local_108,(ENGINE *)0x0)
              ;
              if (iVar6 == 0) goto LAB_001007d0;
              CRYPTO_memcmp(mask,local_88,len);
LAB_00100b06:
              uVar4 = 0xffffffff;
              local_110 = 0;
              local_f0 = (param_5 - iVar2) - 2;
              uVar5 = 0;
            }
            else {
              do {
                mask[uVar11] = mask[uVar11] ^ (pbVar14 + (len - (param_5 - 1)))[uVar11];
                uVar11 = uVar11 + 1;
              } while (num != uVar11);
              iVar6 = EVP_Digest(param_6,(long)param_7,local_88,(uint *)0x0,local_108,(ENGINE *)0x0)
              ;
              if (iVar6 == 0) goto LAB_001007d0;
              uVar5 = CRYPTO_memcmp(mask,local_88,len);
              local_110 = (int)(~uVar5 & uVar5 - 1 & uVar4) >> 0x1f;
              if ((int)num <= iVar2) goto LAB_00100b06;
              uVar5 = 0;
              uVar4 = 0;
              sVar15 = len;
              do {
                bVar16 = mask[sVar15];
                uVar7 = bVar16 ^ 1;
                uVar17 = (int)(~uVar7 & uVar7 - 1) >> 0x1f;
                uVar7 = ~uVar5 & uVar17;
                uVar5 = uVar5 | uVar17;
                uVar17 = (uint)sVar15;
                sVar15 = sVar15 + 1;
                uVar4 = uVar7 & uVar17 | ~uVar7 & uVar4;
                local_110 = local_110 & ((int)(~(uint)bVar16 & bVar16 - 1) >> 0x1f | uVar5);
              } while ((int)sVar15 < (int)num);
              local_f0 = num - (uVar4 + 1);
              local_110 = uVar5 & ~((int)((param_2 - local_f0 ^ local_f0 | param_2 ^ local_f0) ^
                                         param_2) >> 0x1f) & local_110;
              uVar4 = ~local_110;
              uVar5 = local_110 & 1;
            }
            uVar17 = (num - iVar2) - 1;
            uVar7 = (int)((uVar17 - param_2 ^ param_2 | param_2 ^ uVar17) ^ uVar17) >> 0x1f;
            uVar7 = ~uVar7 & param_2 | uVar7 & uVar17;
            if (1 < (int)uVar17) {
              uVar18 = 1;
              do {
                uVar8 = uVar18 & uVar17 - local_f0;
                bVar16 = (char)(~(byte)(uVar8 >> 0x18) & (byte)(uVar8 - 1 >> 0x18)) >> 7;
                if (iVar3 < (int)(num - uVar18)) {
                  pbVar13 = mask + iVar3;
                  do {
                    pbVar14 = pbVar13 + 1;
                    *pbVar13 = pbVar13[(int)uVar18] & ~bVar16 | bVar16 & *pbVar13;
                    pbVar13 = pbVar14;
                  } while (mask + (ulong)((-2 - iVar2) + (num - uVar18)) + len + 2 != pbVar14);
                }
                uVar8 = uVar18 * 2;
                iVar6 = uVar18 * -2;
                uVar18 = uVar8;
              } while (uVar17 != uVar8 && SBORROW4(uVar17,uVar8) == (int)(uVar17 + iVar6) < 0);
            }
            if (0 < (int)uVar7) {
              uVar11 = 0;
              iVar2 = -local_f0;
              do {
                bVar16 = (byte)(local_f0 >> 0x18);
                bVar1 = (byte)(uVar11 >> 0x18);
                bVar16 = (char)((bVar16 ^ bVar1 | (byte)((uint)iVar2 >> 0x18) ^ bVar16) ^ bVar1) >>
                         7 & (byte)local_110;
                *(byte *)(param_1 + uVar11) =
                     ~bVar16 & *(byte *)(param_1 + uVar11) | mask[uVar11 + len + 1] & bVar16;
                uVar11 = uVar11 + 1;
                iVar2 = iVar2 + 1;
              } while (uVar11 != uVar7);
            }
            ERR_new();
            ERR_set_debug("crypto/rsa/rsa_oaep.c",0x14c,"RSA_padding_check_PKCS1_OAEP_mgf1");
            ERR_set_error(4,0x79,0);
            err_clear_last_constant_time(uVar5);
            goto LAB_001007e2;
          }
        }
LAB_001007d0:
        local_f0 = 0xffffffff;
        uVar4 = ~local_110;
      }
LAB_001007e2:
      local_118 = local_c8;
      OPENSSL_cleanse(local_118,0x40);
      CRYPTO_clear_free(mask,seedlen,"crypto/rsa/rsa_oaep.c",0x151);
      CRYPTO_clear_free(pbVar12,(long)param_5,"crypto/rsa/rsa_oaep.c",0x152);
      uVar4 = local_110 & local_f0 | uVar4;
      goto LAB_00100833;
    }
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_oaep.c",0xde,"RSA_padding_check_PKCS1_OAEP_mgf1");
    ERR_set_error(4,0x79,0);
  }
  uVar4 = 0xffffffff;
LAB_00100833:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



int RSA_padding_check_PKCS1_OAEP(uchar *to,int tlen,uchar *f,int fl,int rsa_len,uchar *p,int pl)

{
  int iVar1;
  
  iVar1 = RSA_padding_check_PKCS1_OAEP_mgf1();
  return iVar1;
}


