
int i2a_ASN1_INTEGER(BIO *bp,ASN1_INTEGER *a)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined1 local_42 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (a == (ASN1_INTEGER *)0x0) {
    uVar4 = 0;
    goto LAB_001000f5;
  }
  uVar2 = 2;
  uVar4 = a->type & 0x100;
  if (uVar4 == 0) {
LAB_00100045:
    if (a->length != 0) {
      lVar3 = 0;
      if (0 < a->length) {
        do {
          if ((lVar3 != 0) && ((uint)((int)lVar3 * -0x75075075) < 0x7507508)) {
            iVar1 = BIO_write(bp,&_LC2,2);
            if (iVar1 != 2) goto LAB_001000f0;
            uVar4 = uVar4 + 2;
          }
          ossl_to_hex(local_42,a->data[lVar3]);
          iVar1 = BIO_write(bp,local_42,2);
          if (iVar1 != 2) goto LAB_001000f0;
          uVar4 = uVar4 + 2;
          lVar3 = lVar3 + 1;
        } while ((int)lVar3 < a->length);
      }
      goto LAB_001000f5;
    }
    iVar1 = BIO_write(bp,&_LC1,2);
    uVar4 = uVar2;
    if (iVar1 == 2) goto LAB_001000f5;
  }
  else {
    iVar1 = BIO_write(bp,&_LC0,1);
    if (iVar1 == 1) {
      uVar2 = 3;
      uVar4 = 1;
      goto LAB_00100045;
    }
  }
LAB_001000f0:
  uVar4 = 0xffffffff;
LAB_001000f5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



int a2i_ASN1_INTEGER(BIO *bp,ASN1_INTEGER *bs,char *buf,int size)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  char cVar13;
  int iVar14;
  uchar *local_68;
  
  bs->type = 2;
  iVar4 = BIO_gets(bp,buf,size);
  if (0 < iVar4) {
    bVar2 = true;
    iVar14 = 0;
    iVar3 = 0;
    local_68 = (uchar *)0x0;
    do {
      lVar7 = (long)iVar4;
      lVar8 = lVar7 + -1;
      pcVar12 = buf + lVar8;
      cVar13 = *pcVar12;
      if (cVar13 == '\n') {
        *pcVar12 = '\0';
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) goto LAB_0010030d;
        lVar8 = lVar7 + -2;
        pcVar12 = buf + lVar8;
        cVar13 = *pcVar12;
      }
      if (cVar13 == '\r') {
        *pcVar12 = '\0';
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) goto LAB_0010030d;
        cVar13 = buf[lVar8 + -1];
      }
      iVar11 = 0;
      pcVar12 = buf;
      do {
        iVar5 = ossl_ctype_check((int)*pcVar12,0x10);
        if (iVar5 == 0) goto LAB_0010022d;
        iVar11 = iVar11 + 1;
        pcVar12 = pcVar12 + 1;
      } while (iVar11 != iVar4);
      pcVar12 = buf + iVar11;
LAB_0010022d:
      lVar8 = (long)iVar14;
      *pcVar12 = '\0';
      if (iVar11 < 2) goto LAB_0010030d;
      pcVar12 = buf;
      if (((bVar2) && (*buf == '0')) && (buf[1] == '0')) {
        pcVar12 = buf + 2;
        iVar11 = iVar11 + -2;
      }
      uVar10 = iVar11 - (uint)(cVar13 == '\\');
      if ((uVar10 & 1) != 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/f_int.c",100,"a2i_ASN1_INTEGER");
        ERR_set_error(0xd,0x91,0);
        CRYPTO_free(local_68);
        return 0;
      }
      iVar4 = (int)uVar10 >> 1;
      iVar14 = iVar4 + iVar14;
      puVar6 = local_68;
      if (iVar3 < iVar14) {
        puVar6 = (uchar *)CRYPTO_clear_realloc
                                    (local_68,(long)iVar3,(long)(iVar14 + iVar4),
                                     "crypto/asn1/f_int.c",0x6a);
        iVar3 = iVar14 + iVar4;
        if (puVar6 == (uchar *)0x0) {
          CRYPTO_free(local_68);
          return 0;
        }
      }
      local_68 = puVar6;
      if (iVar4 != 0) {
        pcVar1 = pcVar12 + (long)iVar4 * 2;
        pbVar9 = local_68 + lVar8;
        do {
          iVar4 = OPENSSL_hexchar2int(*pcVar12);
          if (iVar4 < 0) {
LAB_001002d7:
            ERR_new();
            ERR_set_debug("crypto/asn1/f_int.c",0x76,"a2i_ASN1_INTEGER");
            ERR_set_error(0xd,0x8d,0);
            goto LAB_0010030d;
          }
          *pbVar9 = *pbVar9 << 4 | (byte)iVar4;
          iVar4 = OPENSSL_hexchar2int(pcVar12[1]);
          if (iVar4 < 0) goto LAB_001002d7;
          pcVar12 = pcVar12 + 2;
          *pbVar9 = *pbVar9 << 4 | (byte)iVar4;
          pbVar9 = pbVar9 + 1;
        } while (pcVar12 != pcVar1);
      }
      if (cVar13 != '\\') {
        bs->length = iVar14;
        bs->data = local_68;
        return 1;
      }
      iVar4 = BIO_gets(bp,buf,size);
      if (iVar4 < 1) goto LAB_0010030d;
      bVar2 = false;
    } while( true );
  }
  local_68 = (uchar *)0x0;
LAB_0010030d:
  ERR_new();
  ERR_set_debug("crypto/asn1/f_int.c",0x87,"a2i_ASN1_INTEGER");
  ERR_set_error(0xd,0x96,0);
  CRYPTO_free(local_68);
  return 0;
}



int i2a_ASN1_ENUMERATED(BIO *bp,ASN1_INTEGER *a)

{
  int iVar1;
  
  iVar1 = i2a_ASN1_INTEGER(bp,a);
  return iVar1;
}



int a2i_ASN1_ENUMERATED(BIO *bp,ASN1_ENUMERATED *bs,char *buf,int size)

{
  int iVar1;
  
  iVar1 = a2i_ASN1_INTEGER(bp,bs,buf,size);
  if (iVar1 != 1) {
    return iVar1;
  }
  bs->type = bs->type & 0x100U | 2;
  return 1;
}


