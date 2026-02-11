
int bmp_to_utf8_part_0(uchar *param_1,ushort *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong value;
  
  value = (ulong)(ushort)(*param_2 << 8 | *param_2 >> 8);
  if (0x7ff < value - 0xd800) {
LAB_00100048:
    iVar2 = 4;
    if (param_3 < 5) {
      iVar2 = param_3;
    }
    iVar2 = UTF8_putc(param_1,iVar2,value);
    return iVar2;
  }
  if (3 < param_3) {
    uVar1 = (ushort)(param_2[1] << 8 | param_2[1] >> 8) - 0xdc00;
    if (uVar1 < 0x400) {
      value = ((ulong)uVar1 | (value - 0xd800) * 0x400) + 0x10000;
      goto LAB_00100048;
    }
  }
  return -1;
}



uchar * OPENSSL_asc2uni(char *asc,int asclen,uchar **uni,int *unilen)

{
  int num;
  size_t sVar1;
  uchar *puVar2;
  long lVar3;
  
  if (asclen == -1) {
    sVar1 = strlen(asc);
    asclen = (int)sVar1;
  }
  if (-1 < asclen) {
    num = asclen * 2 + 2;
    puVar2 = (uchar *)CRYPTO_malloc(num,"crypto/pkcs12/p12_utl.c",0x1d);
    if (puVar2 != (uchar *)0x0) {
      if (asclen != 0) {
        lVar3 = 0;
        do {
          puVar2[lVar3] = '\0';
          puVar2[lVar3 + 1] = asc[(int)lVar3 >> 1];
          lVar3 = lVar3 + 2;
        } while ((int)lVar3 < asclen * 2);
      }
      (puVar2 + (long)num + -2)[0] = '\0';
      (puVar2 + (long)num + -2)[1] = '\0';
      if (unilen != (int *)0x0) {
        *unilen = num;
      }
      if (uni != (uchar **)0x0) {
        *uni = puVar2;
      }
      return puVar2;
    }
  }
  return (uchar *)0x0;
}



char * OPENSSL_uni2asc(uchar *uni,int unilen)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  int num;
  long lVar4;
  
  if (unilen < 0) {
    return (char *)0x0;
  }
  if ((unilen & 1U) != 0) {
    return (char *)0x0;
  }
  num = unilen >> 1;
  if ((unilen == 0) || (uni[(long)unilen + -1] != '\0')) {
    num = num + 1;
    pcVar1 = (char *)CRYPTO_malloc(num,"crypto/pkcs12/p12_utl.c",0x3c);
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    if (unilen == 0) {
      lVar4 = 1;
      goto LAB_00100198;
    }
  }
  else {
    pcVar1 = (char *)CRYPTO_malloc(num,"crypto/pkcs12/p12_utl.c",0x3c);
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  lVar4 = (long)num;
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 2;
    pcVar1[(int)lVar2 >> 1] = uni[lVar2 + 1];
    lVar2 = lVar3;
  } while ((int)lVar3 < unilen);
LAB_00100198:
  pcVar1[lVar4 + -1] = '\0';
  return pcVar1;
}



uchar * OPENSSL_utf82uni(char *param_1,int param_2,uchar **param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  uchar uVar6;
  size_t sVar3;
  uchar *puVar4;
  uchar *puVar5;
  int iVar7;
  uchar *puVar8;
  int iVar9;
  long in_FS_OFFSET;
  int local_4c;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_2 == -1) {
    sVar3 = strlen(param_1);
    param_2 = (int)sVar3;
  }
  if (param_2 < 1) {
    puVar5 = (uchar *)CRYPTO_malloc(2,"crypto/pkcs12/p12_utl.c",0x78);
    if (puVar5 == (uchar *)0x0) goto LAB_001002d0;
    local_4c = 2;
    puVar4 = puVar5;
  }
  else {
    iVar9 = 0;
    local_4c = 0;
    do {
      iVar2 = UTF8_getc((uchar *)(param_1 + iVar9),param_2 - iVar9,&local_48);
      if (iVar2 < 0) {
        puVar4 = OPENSSL_asc2uni(param_1,param_2,param_3,param_4);
        goto LAB_001002a9;
      }
      if (0x10ffff < local_48) goto LAB_001002d0;
      iVar7 = local_4c + 4;
      local_4c = local_4c + 2;
      if (0xffff < local_48) {
        local_4c = iVar7;
      }
      iVar9 = iVar9 + iVar2;
    } while (iVar9 < param_2);
    local_4c = local_4c + 2;
    puVar4 = (uchar *)CRYPTO_malloc(local_4c,"crypto/pkcs12/p12_utl.c",0x78);
    if (puVar4 == (uchar *)0x0) {
LAB_001002d0:
      puVar4 = (uchar *)0x0;
      goto LAB_001002a9;
    }
    iVar9 = 0;
    puVar8 = puVar4;
    do {
      iVar2 = UTF8_getc((uchar *)(param_1 + iVar9),param_2 - iVar9,&local_48);
      if (local_48 < 0x10000) {
        uVar6 = (uchar)(local_48 >> 8);
        puVar5 = puVar8 + 2;
        iVar7 = (int)local_48;
      }
      else {
        local_48 = local_48 - 0x10000;
        puVar5 = puVar8 + 4;
        uVar1 = (ushort)local_48 & 0x3ff;
        iVar7 = (int)(local_48 >> 10) + 0xd800;
        *(ushort *)(puVar8 + 2) = uVar1 << 8 | (ushort)(uVar1 + 0xdc00) >> 8;
        uVar6 = (uchar)((uint)iVar7 >> 8);
      }
      iVar9 = iVar9 + iVar2;
      puVar8[1] = (uchar)iVar7;
      *puVar8 = uVar6;
      puVar8 = puVar5;
    } while (iVar9 < param_2);
  }
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  if (param_4 != (int *)0x0) {
    *param_4 = local_4c;
  }
  if (param_3 != (uchar **)0x0) {
    *param_3 = puVar4;
  }
LAB_001002a9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



char * OPENSSL_uni2utf8(uchar *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  lVar6 = (long)(int)param_2;
  if ((param_2 & 1) != 0) {
    return (char *)0x0;
  }
  if ((int)param_2 < 1) {
    iVar5 = 0;
    if (param_2 != 0) goto LAB_0010044e;
LAB_0010045d:
    iVar5 = iVar5 + 1;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    do {
      iVar1 = bmp_to_utf8_part_0(0,param_1 + iVar4,param_2 - iVar4);
      if (iVar1 < 0) {
        pcVar3 = OPENSSL_uni2asc(param_1,param_2);
        return pcVar3;
      }
      iVar2 = iVar4 + 4;
      iVar4 = iVar4 + 2;
      if (iVar1 == 4) {
        iVar4 = iVar2;
      }
      iVar5 = iVar5 + iVar1;
    } while (iVar4 < (int)param_2);
LAB_0010044e:
    if ((param_1[(long)(int)param_2 + -2] != '\0') || (param_1[(long)(int)param_2 + -1] != '\0'))
    goto LAB_0010045d;
  }
  pcVar3 = (char *)CRYPTO_malloc(iVar5,"crypto/pkcs12/p12_utl.c",0xcb);
  if (pcVar3 == (char *)0x0) {
    return (char *)0x0;
  }
  if ((int)param_2 < 1) {
    if (param_2 == 0) goto LAB_001004e5;
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    iVar4 = 0;
    do {
      iVar2 = bmp_to_utf8_part_0(pcVar3 + iVar5,param_1 + iVar4,param_2 - iVar4);
      iVar1 = iVar4 + 4;
      iVar4 = iVar4 + 2;
      if (iVar2 == 4) {
        iVar4 = iVar1;
      }
      iVar5 = iVar5 + iVar2;
    } while (iVar4 < (int)param_2);
  }
  if ((param_1[lVar6 + -2] == '\0') && (param_1[lVar6 + -1] == '\0')) {
    return pcVar3;
  }
  lVar6 = (long)iVar5;
LAB_001004e5:
  pcVar3[lVar6] = '\0';
  return pcVar3;
}



int i2d_PKCS12_bio(BIO *bp,PKCS12 *p12)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS12_it();
  iVar1 = ASN1_item_i2d_bio(it,bp,p12);
  return iVar1;
}



int i2d_PKCS12_fp(FILE *fp,PKCS12 *p12)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS12_it();
  iVar1 = ASN1_item_i2d_fp(it,fp,p12);
  return iVar1;
}



PKCS12 * d2i_PKCS12_bio(BIO *bp,PKCS12 **p12)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  PKCS12 *pPVar5;
  
  if (p12 != (PKCS12 **)0x0) {
    lVar1 = ossl_pkcs12_get0_pkcs7ctx(*p12);
    if (lVar1 != 0) {
      uVar2 = ossl_pkcs7_ctx_get0_libctx(lVar1);
      uVar3 = ossl_pkcs7_ctx_get0_propq(lVar1);
      goto LAB_001005fe;
    }
  }
  uVar3 = 0;
  uVar2 = 0;
LAB_001005fe:
  uVar4 = PKCS12_it();
  pPVar5 = (PKCS12 *)ASN1_item_d2i_bio_ex(uVar4,bp,p12,uVar2,uVar3);
  return pPVar5;
}



PKCS12 * d2i_PKCS12_fp(FILE *fp,PKCS12 **p12)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  PKCS12 *pPVar5;
  
  if (p12 != (PKCS12 **)0x0) {
    lVar1 = ossl_pkcs12_get0_pkcs7ctx(*p12);
    if (lVar1 != 0) {
      uVar2 = ossl_pkcs7_ctx_get0_libctx(lVar1);
      uVar3 = ossl_pkcs7_ctx_get0_propq(lVar1);
      goto LAB_0010067e;
    }
  }
  uVar3 = 0;
  uVar2 = 0;
LAB_0010067e:
  uVar4 = PKCS12_it();
  pPVar5 = (PKCS12 *)ASN1_item_d2i_fp_ex(uVar4,fp,p12,uVar2,uVar3);
  return pPVar5;
}


