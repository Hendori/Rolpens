
uchar * OPENSSL_asc2uni(char *asc,int asclen,uchar **uni,int *unilen)

{
  int num;
  int iVar1;
  size_t sVar2;
  uchar *puVar3;
  long lVar4;
  
  if (asclen == -1) {
    sVar2 = strlen(asc);
    asclen = (int)sVar2;
  }
  if (-1 < asclen) {
    iVar1 = asclen * 2;
    num = iVar1 + 2;
    puVar3 = (uchar *)CRYPTO_malloc(num,"crypto/pkcs12/p12_utl.c",0x1d);
    if (puVar3 != (uchar *)0x0) {
      if (asclen != 0) {
        lVar4 = 0;
        do {
          puVar3[lVar4] = '\0';
          lVar4 = lVar4 + 2;
        } while ((int)lVar4 < iVar1);
        lVar4 = 0;
        do {
          puVar3[lVar4 + 1] = asc[(int)lVar4 >> 1];
          lVar4 = lVar4 + 2;
        } while ((int)lVar4 < iVar1);
      }
      (puVar3 + (long)num + -2)[0] = '\0';
      (puVar3 + (long)num + -2)[1] = '\0';
      if (unilen != (int *)0x0) {
        *unilen = num;
      }
      if (uni != (uchar **)0x0) {
        *uni = puVar3;
      }
      return puVar3;
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
      goto LAB_00100138;
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
LAB_00100138:
  pcVar1[lVar4 + -1] = '\0';
  return pcVar1;
}



ushort * OPENSSL_utf82uni(char *param_1,int param_2,uchar **param_3,int *param_4)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  size_t sVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  int local_4c;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (param_2 == -1) {
    sVar4 = strlen(param_1);
    param_2 = (int)sVar4;
  }
  if (param_2 < 1) {
    puVar6 = (ushort *)CRYPTO_malloc(2,"crypto/pkcs12/p12_utl.c",0x78);
    if (puVar6 != (ushort *)0x0) {
      local_4c = 2;
      puVar5 = puVar6;
      goto LAB_0010032b;
    }
  }
  else {
    iVar8 = 0;
    local_4c = 0;
    do {
      iVar3 = UTF8_getc((uchar *)(param_1 + iVar8),param_2 - iVar8,&local_48);
      if (iVar3 < 0) {
        puVar5 = (ushort *)OPENSSL_asc2uni(param_1,param_2,param_3,param_4);
        goto LAB_00100249;
      }
      if (0x10ffff < local_48) goto LAB_00100270;
      iVar7 = local_4c + 4;
      local_4c = local_4c + 2;
      if (0xffff < local_48) {
        local_4c = iVar7;
      }
      iVar8 = iVar8 + iVar3;
    } while (iVar8 < param_2);
    local_4c = local_4c + 2;
    puVar5 = (ushort *)CRYPTO_malloc(local_4c,"crypto/pkcs12/p12_utl.c",0x78);
    if (puVar5 != (ushort *)0x0) {
      iVar8 = 0;
      puVar6 = puVar5;
      while( true ) {
        iVar3 = UTF8_getc((uchar *)(param_1 + iVar8),param_2 - iVar8,&local_48);
        if (local_48 < 0x10000) {
          *puVar6 = (ushort)local_48 << 8 | (ushort)local_48 >> 8;
          puVar6 = puVar6 + 1;
        }
        else {
          local_48 = local_48 - 0x10000;
          uVar2 = (ushort)local_48 & 0x3ff;
          sVar1 = (short)(local_48 >> 10);
          *puVar6 = sVar1 << 8 | (ushort)(sVar1 + 0xd800U) >> 8;
          puVar6[1] = uVar2 << 8 | (ushort)(uVar2 + 0xdc00) >> 8;
          puVar6 = puVar6 + 2;
        }
        if (param_2 <= iVar8 + iVar3) break;
        iVar8 = iVar8 + iVar3;
      }
LAB_0010032b:
      *puVar6 = 0;
      if (param_4 != (int *)0x0) {
        *param_4 = local_4c;
      }
      if (param_3 != (uchar **)0x0) {
        *param_3 = (uchar *)puVar5;
      }
      goto LAB_00100249;
    }
  }
LAB_00100270:
  puVar5 = (ushort *)0x0;
LAB_00100249:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



char * OPENSSL_uni2utf8(uchar *param_1,uint param_2)

{
  ushort uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  
  lVar9 = (long)(int)param_2;
  if ((param_2 & 1) != 0) {
    return (char *)0x0;
  }
  if ((int)param_2 < 1) {
    iVar7 = 0;
    if (param_2 != 0) goto LAB_0010044d;
LAB_0010045c:
    iVar7 = iVar7 + 1;
  }
  else {
    iVar6 = 0;
    iVar7 = 0;
    do {
      iVar8 = param_2 - iVar6;
      uVar1 = *(ushort *)(param_1 + iVar6);
      uVar5 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
      if (uVar5 - 0xd800 < 0x800) {
        if (iVar8 < 4) goto LAB_00100538;
        uVar1 = *(ushort *)((long)(param_1 + iVar6) + 2);
        uVar3 = (ushort)(uVar1 << 8 | uVar1 >> 8) - 0xdc00;
        if (0x3ff < uVar3) goto LAB_00100538;
        uVar5 = ((ulong)uVar3 | (uVar5 - 0xd800) * 0x400) + 0x10000;
      }
      if (4 < iVar8) {
        iVar8 = 4;
      }
      iVar8 = UTF8_putc((uchar *)0x0,iVar8,uVar5);
      if (iVar8 < 0) {
LAB_00100538:
        pcVar2 = OPENSSL_uni2asc(param_1,param_2);
        return pcVar2;
      }
      iVar4 = iVar6 + 4;
      iVar6 = iVar6 + 2;
      if (iVar8 == 4) {
        iVar6 = iVar4;
      }
      iVar7 = iVar7 + iVar8;
    } while (iVar6 < (int)param_2);
LAB_0010044d:
    if ((param_1[(long)(int)param_2 + -2] != '\0') || (param_1[(long)(int)param_2 + -1] != '\0'))
    goto LAB_0010045c;
  }
  pcVar2 = (char *)CRYPTO_malloc(iVar7,"crypto/pkcs12/p12_utl.c",0xcb);
  if (pcVar2 == (char *)0x0) {
    return (char *)0x0;
  }
  if ((int)param_2 < 1) {
    if (param_2 == 0) goto LAB_0010054d;
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    iVar6 = 0;
    do {
      while( true ) {
        iVar8 = param_2 - iVar6;
        uVar1 = *(ushort *)(param_1 + iVar6);
        uVar5 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
        if (0x7ff < uVar5 - 0xd800) break;
        if (3 < iVar8) {
          uVar1 = *(ushort *)((long)(param_1 + iVar6) + 2);
          uVar3 = (ushort)(uVar1 << 8 | uVar1 >> 8) - 0xdc00;
          if (uVar3 < 0x400) {
            uVar5 = ((ulong)uVar3 | (uVar5 - 0xd800) * 0x400) + 0x10000;
            break;
          }
        }
        iVar8 = -1;
LAB_00100490:
        iVar6 = iVar6 + 2;
        iVar7 = iVar7 + iVar8;
        if ((int)param_2 <= iVar6) goto LAB_00100528;
      }
      if (4 < iVar8) {
        iVar8 = 4;
      }
      iVar8 = UTF8_putc((uchar *)(pcVar2 + iVar7),iVar8,uVar5);
      if (iVar8 != 4) goto LAB_00100490;
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 4;
    } while (iVar6 < (int)param_2);
  }
LAB_00100528:
  if ((param_1[lVar9 + -2] == '\0') && (param_1[lVar9 + -1] == '\0')) {
    return pcVar2;
  }
  lVar9 = (long)iVar7;
LAB_0010054d:
  pcVar2[lVar9] = '\0';
  return pcVar2;
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
      goto LAB_0010066e;
    }
  }
  uVar3 = 0;
  uVar2 = 0;
LAB_0010066e:
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
      goto LAB_001006ee;
    }
  }
  uVar3 = 0;
  uVar2 = 0;
LAB_001006ee:
  uVar4 = PKCS12_it();
  pPVar5 = (PKCS12 *)ASN1_item_d2i_fp_ex(uVar4,fp,p12,uVar2,uVar3);
  return pPVar5;
}


