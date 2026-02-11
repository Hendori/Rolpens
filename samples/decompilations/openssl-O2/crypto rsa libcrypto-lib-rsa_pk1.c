
undefined8
ossl_rsa_prf(undefined8 param_1,uchar *param_2,int param_3,uchar *param_4,int param_5,void *param_6,
            ushort param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  HMAC_CTX *ctx;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uchar *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  long in_FS_OFFSET;
  byte bVar11;
  EVP_MD *local_80;
  uint local_70;
  ushort local_6c;
  ushort local_6a;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 * 8 == (uint)param_7) {
    local_6a = param_7 << 8 | param_7 >> 8;
    ctx = (HMAC_CTX *)HMAC_CTX_new();
    if (ctx == (HMAC_CTX *)0x0) {
      ERR_new();
      uVar6 = 0xffffffff;
      ERR_set_debug("crypto/rsa/rsa_pk1.c",0x131,"ossl_rsa_prf");
      ERR_set_error(4,0xc0103,0);
      local_80 = (EVP_MD *)0x0;
    }
    else {
      local_80 = (EVP_MD *)EVP_MD_fetch(param_1,"sha256",0);
      if (local_80 == (EVP_MD *)0x0) {
        ERR_new();
        uVar6 = 0xffffffff;
        ERR_set_debug("crypto/rsa/rsa_pk1.c",0x13e,"ossl_rsa_prf");
        ERR_set_error(4,0xc0103,0);
      }
      else {
        iVar1 = HMAC_Init_ex(ctx,param_6,0x20,local_80,(ENGINE *)0x0);
        if (iVar1 < 1) {
          ERR_new();
          uVar8 = 0x143;
LAB_001002f8:
          uVar6 = 0xffffffff;
          ERR_set_debug("crypto/rsa/rsa_pk1.c",uVar8,"ossl_rsa_prf");
          ERR_set_error(4,0xc0103,0);
        }
        else {
          if (param_3 != 0) {
            uVar10 = 0;
            iVar1 = 0;
            do {
              iVar2 = HMAC_Init_ex(ctx,(void *)0x0,0,(EVP_MD *)0x0,(ENGINE *)0x0);
              if (iVar2 < 1) {
                ERR_new();
                uVar8 = 0x149;
                goto LAB_001002f8;
              }
              local_6c = uVar10 << 8 | uVar10 >> 8;
              iVar2 = HMAC_Update(ctx,(uchar *)&local_6c,2);
              if (iVar2 < 1) {
                ERR_new();
                uVar8 = 0x151;
                goto LAB_001002f8;
              }
              iVar2 = HMAC_Update(ctx,param_4,(long)param_5);
              if (iVar2 < 1) {
                ERR_new();
                uVar8 = 0x155;
                goto LAB_001002f8;
              }
              iVar2 = HMAC_Update(ctx,(uchar *)&local_6a,2);
              if (iVar2 < 1) {
                ERR_new();
                uVar8 = 0x159;
                goto LAB_001002f8;
              }
              local_70 = 0x20;
              if (iVar1 + 0x1f < param_3) {
                iVar2 = HMAC_Final(ctx,param_2,&local_70);
                if (iVar2 < 1) {
                  ERR_new();
                  uVar8 = 0x16b;
                  goto LAB_001002f8;
                }
              }
              else {
                iVar2 = HMAC_Final(ctx,(uchar *)&local_68,&local_70);
                if (iVar2 < 1) {
                  ERR_new();
                  uVar8 = 0x165;
                  goto LAB_001002f8;
                }
                uVar3 = param_3 - iVar1;
                uVar4 = (ulong)uVar3;
                if (uVar3 < 8) {
                  if ((uVar3 & 4) == 0) {
                    if (uVar3 != 0) {
                      *param_2 = (uchar)local_68;
                      if ((uVar3 & 2) != 0) {
                        *(undefined2 *)(param_2 + (uVar4 - 2)) =
                             *(undefined2 *)((long)&local_6a + uVar4);
                      }
                    }
                  }
                  else {
                    *(undefined4 *)param_2 = local_68;
                    *(undefined4 *)(param_2 + (uVar4 - 4)) =
                         *(undefined4 *)((long)&local_6c + uVar4);
                  }
                }
                else {
                  *(ulong *)param_2 = CONCAT44(uStack_64,local_68);
                  *(undefined8 *)(param_2 + ((ulong)uVar3 - 8)) =
                       *(undefined8 *)((long)&local_70 + (ulong)uVar3);
                  lVar5 = (long)param_2 - (long)((ulong)(param_2 + 8) & 0xfffffffffffffff8);
                  puVar7 = (uchar *)((long)&local_68 + -lVar5);
                  puVar9 = (undefined8 *)((ulong)(param_2 + 8) & 0xfffffffffffffff8);
                  for (uVar4 = (ulong)(uVar3 + (int)lVar5 >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
                    *puVar9 = *(undefined8 *)puVar7;
                    puVar7 = puVar7 + ((ulong)bVar11 * -2 + 1) * 8;
                    puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
                  }
                }
              }
              iVar1 = iVar1 + 0x20;
              uVar10 = uVar10 + 1;
              param_2 = param_2 + 0x20;
            } while (iVar1 != (param_3 - 1U & 0xffffffe0) + 0x20);
          }
          uVar6 = 0;
        }
      }
    }
    HMAC_CTX_free(ctx);
    EVP_MD_free(local_80);
  }
  else {
    ERR_new();
    uVar6 = 0xffffffff;
    ERR_set_debug("crypto/rsa/rsa_pk1.c",0x128,"ossl_rsa_prf");
    ERR_set_error(4,0xc0103,0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



int RSA_padding_add_PKCS1_type_1(uchar *to,int tlen,uchar *f,int fl)

{
  void *pvVar1;
  undefined1 *puVar2;
  size_t __n;
  
  if (fl < tlen + -10) {
    to[0] = '\0';
    to[1] = '\x01';
    __n = (size_t)((tlen + -3) - fl);
    pvVar1 = memset(to + 2,0xff,__n);
    puVar2 = (undefined1 *)((long)pvVar1 + __n);
    *puVar2 = 0;
    memcpy(puVar2 + 1,f,(ulong)(uint)fl);
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/rsa/rsa_pk1.c",0x27,"RSA_padding_add_PKCS1_type_1");
  ERR_set_error(4,0x6e,0);
  return 0;
}



int RSA_padding_check_PKCS1_type_1(uchar *to,int tlen,uchar *f,int fl,int rsa_len)

{
  uchar uVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (rsa_len < 0xb) {
    return -1;
  }
  if (rsa_len == fl) {
    uVar1 = *f;
    f = f + 1;
    if (uVar1 != '\0') {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pk1.c",0x4f,"RSA_padding_check_PKCS1_type_1");
      ERR_set_error(4,0x8a,0);
      return -1;
    }
    fl = fl + -1;
  }
  else if (fl + 1 != rsa_len) goto LAB_001005b8;
  if (*f == '\x01') {
    iVar4 = fl + -1;
    iVar3 = 0;
    do {
      puVar2 = f;
      f = puVar2 + 1;
      uVar1 = *f;
      if (uVar1 != 0xff) {
        if (uVar1 != '\0') {
          ERR_new();
          ERR_set_debug("crypto/rsa/rsa_pk1.c",0x62,"RSA_padding_check_PKCS1_type_1");
          ERR_set_error(4,0x66,0);
          return -1;
        }
        if (iVar3 == iVar4) goto LAB_00100562;
        if (iVar3 < 8) {
          ERR_new();
          ERR_set_debug("crypto/rsa/rsa_pk1.c",0x6f,"RSA_padding_check_PKCS1_type_1");
          ERR_set_error(4,0x67,0);
          return -1;
        }
        goto LAB_0010053c;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
    if (iVar4 == iVar3) {
LAB_00100562:
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pk1.c",0x6a,"RSA_padding_check_PKCS1_type_1");
      ERR_set_error(4,0x71,0);
      return -1;
    }
LAB_0010053c:
    uVar5 = iVar4 - (iVar3 + 1);
    if (tlen < (int)uVar5) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pk1.c",0x75,"RSA_padding_check_PKCS1_type_1");
      ERR_set_error(4,0x6d,0);
      return -1;
    }
    memcpy(to,puVar2 + 2,(ulong)uVar5);
    return uVar5;
  }
LAB_001005b8:
  ERR_new();
  ERR_set_debug("crypto/rsa/rsa_pk1.c",0x56,"RSA_padding_check_PKCS1_type_1");
  ERR_set_error(4,0x6a,0);
  return -1;
}



undefined8
ossl_rsa_padding_add_PKCS1_type_2_ex
          (undefined8 param_1,undefined2 *param_2,int param_3,void *param_4,int param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_5 < param_3 + -10) {
    if (param_5 < 0) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pk1.c",0x88,"ossl_rsa_padding_add_PKCS1_type_2_ex");
      ERR_set_error(4,0xb5,0);
    }
    else {
      pcVar2 = (char *)(param_2 + 1);
      iVar3 = (param_3 + -3) - param_5;
      *param_2 = 0x200;
      iVar1 = RAND_bytes_ex(param_1,pcVar2,(long)iVar3,0);
      if (0 < iVar1) {
        pcVar4 = pcVar2;
        if (0 < iVar3) {
          pcVar4 = (char *)((long)param_2 + (long)iVar3 + 2);
          do {
            while (*pcVar2 != '\0') {
              pcVar2 = pcVar2 + 1;
              if (pcVar4 == pcVar2) goto LAB_0010074e;
            }
            do {
              iVar1 = RAND_bytes_ex(param_1,pcVar2,1,0);
              if (iVar1 < 1) {
                return 0;
              }
            } while (*pcVar2 == '\0');
            pcVar2 = pcVar2 + 1;
          } while (pcVar4 != pcVar2);
        }
LAB_0010074e:
        *pcVar4 = '\0';
        memcpy(pcVar4 + 1,param_4,(long)param_5);
        return 1;
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_pk1.c",0x85,"ossl_rsa_padding_add_PKCS1_type_2_ex");
    ERR_set_error(4,0x6e,0);
  }
  return 0;
}



int RSA_padding_add_PKCS1_type_2(uchar *to,int tlen,uchar *f,int fl)

{
  int iVar1;
  
  iVar1 = ossl_rsa_padding_add_PKCS1_type_2_ex(0,to,tlen,f,fl);
  return iVar1;
}



int RSA_padding_check_PKCS1_type_2(uchar *to,int tlen,uchar *f,int fl,int rsa_len)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  
  if (tlen < 1) {
    return -1;
  }
  if (0 < fl) {
    if ((rsa_len < fl) || (rsa_len < 0xb)) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_pk1.c",0xbe,"RSA_padding_check_PKCS1_type_2");
      ERR_set_error(4,0x9f,0);
    }
    else {
      pvVar5 = CRYPTO_malloc(rsa_len,"crypto/rsa/rsa_pk1.c",0xc2);
      if (pvVar5 != (void *)0x0) {
        pbVar7 = f + fl;
        pbVar15 = (byte *)((long)pvVar5 + (long)rsa_len);
        pbVar9 = pbVar15;
        do {
          pbVar9 = pbVar9 + -1;
          uVar12 = ~fl & fl - 1U;
          uVar13 = ((int)uVar12 >> 0x1f) + 1;
          pbVar7 = pbVar7 + -(ulong)uVar13;
          fl = fl - uVar13;
          bVar2 = ~(byte)((int)uVar12 >> 0x1f) & *pbVar7;
          *pbVar9 = bVar2;
        } while ((int)pbVar15 - (int)pbVar9 < rsa_len);
        lVar14 = 2;
        uVar12 = 0;
        uVar13 = 0;
        pbVar15 = pbVar15 + ~(ulong)(rsa_len - 1);
        do {
          uVar8 = (int)(~(uint)pbVar15[lVar14] & pbVar15[lVar14] - 1) >> 0x1f;
          uVar3 = ~uVar13 & uVar8;
          uVar13 = uVar13 | uVar8;
          uVar8 = (uint)lVar14;
          lVar14 = lVar14 + 1;
          uVar12 = uVar3 & uVar8 | ~uVar3 & uVar12;
        } while ((int)lVar14 < rsa_len);
        uVar13 = rsa_len - 0xb;
        uVar16 = rsa_len - (uVar12 + 1);
        uVar3 = 1;
        uVar11 = ~((int)((tlen - uVar16 ^ uVar16 | tlen ^ uVar16) ^ tlen) >> 0x1f) &
                 ~((int)((uVar12 - 10 ^ 10 | uVar12 ^ 10) ^ uVar12) >> 0x1f) &
                 (int)(~(uint)bVar2 & bVar2 - 1 & ~(uint)(pbVar15[1] ^ 2) & (pbVar15[1] ^ 2) - 1) >>
                 0x1f;
        uVar8 = (int)((uVar13 - tlen ^ tlen | uVar13 ^ tlen) ^ uVar13) >> 0x1f;
        uVar8 = tlen & ~uVar8 | uVar8 & uVar13;
        if (1 < (int)uVar13) {
          do {
            uVar4 = uVar3 & uVar12 - 10;
            bVar2 = (char)(~(byte)(uVar4 >> 0x18) & (byte)(uVar4 - 1 >> 0x18)) >> 7;
            if (0xb < (int)(rsa_len - uVar3)) {
              pbVar9 = pbVar15 + 0xb;
              do {
                pbVar7 = pbVar9 + 1;
                *pbVar9 = pbVar9[(int)uVar3] & ~bVar2 | bVar2 & *pbVar9;
                pbVar9 = pbVar7;
              } while (pbVar15 + (ulong)((rsa_len - uVar3) - 0xc) + 0xc != pbVar7);
            }
            uVar3 = uVar3 * 2;
          } while ((int)uVar3 < (int)uVar13);
        }
        uVar10 = 0;
        iVar6 = -uVar16;
        if (uVar8 != 0) {
          do {
            bVar1 = (byte)(uVar16 >> 0x18);
            uVar12 = (uint)iVar6 >> 0x18;
            bVar2 = (byte)(uVar10 >> 0x18);
            iVar6 = iVar6 + 1;
            bVar2 = (char)((bVar1 ^ bVar2 | bVar1 ^ (byte)uVar12) ^ bVar2) >> 7 & (byte)uVar11;
            to[uVar10] = ~bVar2 & to[uVar10] | pbVar15[uVar10 + 0xb] & bVar2;
            uVar10 = uVar10 + 1;
          } while (uVar10 != uVar8);
        }
        CRYPTO_clear_free(pbVar15,(long)rsa_len,"crypto/rsa/rsa_pk1.c",0x108);
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_pk1.c",0x10f,"RSA_padding_check_PKCS1_type_2");
        ERR_set_error(4,0x9f,0);
        err_clear_last_constant_time(uVar11 & 1);
        return uVar11 & uVar16 | ~uVar11;
      }
    }
  }
  return -1;
}



int ossl_rsa_padding_check_PKCS1_type_2
              (undefined8 param_1,long param_2,uint param_3,byte *param_4,uint param_5,uint param_6,
              undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *ptr;
  long lVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long in_FS_OFFSET;
  undefined1 local_148 [256];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)param_3 < 1 || (int)param_5 < 1) || (param_6 != param_5)) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_pk1.c",0x1a5,"ossl_rsa_padding_check_PKCS1_type_2");
    ERR_set_error(4,0xc0103,0);
  }
  else {
    ptr = CRYPTO_malloc(param_5,"crypto/rsa/rsa_pk1.c",0x1aa);
    if (ptr != (void *)0x0) {
      iVar3 = ossl_rsa_prf(param_1,ptr,param_5,"message",7,param_7,param_5 * 8 & 0xffff);
      if (iVar3 < 0) {
LAB_00100e10:
        ERR_new();
        ERR_set_debug("crypto/rsa/rsa_pk1.c",0x209,"ossl_rsa_padding_check_PKCS1_type_2");
        iVar3 = -1;
        ERR_set_error(4,0xc0103,0);
      }
      else {
        puVar9 = local_148;
        iVar3 = ossl_rsa_prf(param_1,puVar9,0x100,"length",6,param_7);
        if (iVar3 < 0) goto LAB_00100e10;
        uVar12 = param_5 - 10;
        uVar4 = uVar12 >> 1 & 0x7fff | uVar12;
        uVar4 = uVar4 >> 2 & 0x3fff | uVar4;
        uVar4 = uVar4 >> 4 & 0xfff | uVar4;
        uVar8 = 0;
        do {
          uVar2 = *puVar9;
          puVar1 = puVar9 + 1;
          puVar9 = puVar9 + 2;
          uVar10 = (uint)CONCAT11(uVar2,*puVar1) & (uVar4 >> 8 & 0xff | uVar4);
          uVar5 = (int)((uVar10 - (uVar12 & 0xffff) ^ uVar12 & 0xffff | (uVar10 ^ uVar12) & 0xffff)
                       ^ uVar10) >> 0x1f;
          uVar8 = ~uVar5 & uVar8 | uVar10 & uVar5;
        } while (puVar9 != local_48);
        if ((int)param_5 < 3) {
          uVar5 = 0xffffffff;
          uVar4 = 1;
          uVar12 = 0;
        }
        else {
          uVar11 = 2;
          uVar12 = 0;
          uVar4 = 0;
          do {
            uVar10 = (int)(~(uint)param_4[uVar11] & param_4[uVar11] - 1) >> 0x1f;
            uVar5 = ~uVar4 & uVar10;
            uVar4 = uVar4 | uVar10;
            uVar10 = (uint)uVar11;
            uVar11 = uVar11 + 1;
            uVar12 = uVar5 & uVar10 | ~uVar5 & uVar12;
          } while (uVar11 != param_5);
          uVar4 = uVar12 + 1;
          param_6 = param_6 - uVar4;
          uVar12 = ~((int)((param_3 - param_6 ^ param_6 | param_6 ^ param_3) ^ param_3) >> 0x1f) &
                   ~((int)(uVar12 ^ (uVar12 - 10 ^ 10 | uVar12 ^ 10)) >> 0x1f) &
                   (int)(~(uint)*param_4 & *param_4 - 1 & ~(uint)(param_4[1] ^ 2) &
                        (param_4[1] ^ 2) - 1) >> 0x1f;
          uVar5 = ~uVar12;
        }
        uVar4 = uVar12 & uVar4 | param_5 - uVar8 & uVar5;
        if ((int)uVar4 < (int)param_5) {
          lVar7 = (long)(int)(uVar4 + 1);
          iVar3 = 0;
          do {
            iVar3 = iVar3 + 1;
            iVar6 = (int)lVar7;
            *(byte *)((param_2 - (int)uVar4) + -1 + lVar7) =
                 param_4[lVar7 + -1] & (byte)uVar12 |
                 *(byte *)((long)ptr + lVar7 + -1) & ~(byte)uVar12;
            lVar7 = lVar7 + 1;
          } while (iVar6 < (int)param_5 && iVar3 < (int)param_3);
        }
        else {
          iVar3 = 0;
        }
      }
      CRYPTO_free(ptr);
      goto LAB_00100e5a;
    }
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_pk1.c",0x1ac,"ossl_rsa_padding_check_PKCS1_type_2");
    ERR_set_error(4,0xc0100,0);
  }
  iVar3 = -1;
LAB_00100e5a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



long ossl_rsa_padding_check_PKCS1_type_2_TLS
               (undefined8 param_1,long param_2,ulong param_3,byte *param_4,ulong param_5,
               uint param_6,uint param_7)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  byte local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 < 0x3b) || (param_3 < 0x30)) {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_pk1.c",0x232,"ossl_rsa_padding_check_PKCS1_type_2_TLS");
    ERR_set_error(4,0x9f,0);
  }
  else {
    iVar1 = RAND_priv_bytes_ex(param_1,local_78,0x30,0);
    if (0 < iVar1) {
      uVar5 = 2;
      uVar3 = (int)(*param_4 - 1 & ~(uint)*param_4 & ~(uint)(param_4[1] ^ 2) & (param_4[1] ^ 2) - 1)
              >> 0x1f;
      do {
        uVar3 = uVar3 & ~((int)(~(uint)param_4[uVar5] & param_4[uVar5] - 1) >> 0x1f & 0xffU);
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (uVar5 < param_5 - 0x31);
      bVar4 = (byte)((param_6 >> 8 & 0xff ^ (uint)param_4[param_5 - 0x30]) - 1 >> 0x18) &
              (byte)((param_6 & 0xff ^ (uint)param_4[param_5 - 0x2f]) - 1 >> 0x18);
      if (0 < (int)param_7) {
        bVar4 = (byte)((param_7 >> 8 & 0xff ^ (uint)param_4[param_5 - 0x30]) - 1 >> 0x18) &
                (byte)((param_7 & 0xff ^ (uint)param_4[param_5 - 0x2f]) - 1 >> 0x18) | bVar4;
      }
      bVar4 = (char)bVar4 >> 7 & (byte)((int)(param_4[param_5 - 0x31] - 1) >> 0x1f) & (byte)uVar3;
      lVar2 = 0;
      do {
        *(byte *)(param_2 + lVar2) =
             param_4[lVar2 + (param_5 - 0x30)] & bVar4 | local_78[lVar2] & ~bVar4;
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x30);
      goto LAB_0010107e;
    }
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_pk1.c",0x23c,"ossl_rsa_padding_check_PKCS1_type_2_TLS");
    ERR_set_error(4,0xc0103,0);
  }
  lVar2 = 0xffffffff;
LAB_0010107e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}


