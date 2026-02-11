
int i2a_ASN1_STRING(BIO *bp,ASN1_STRING *a,int type)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined1 local_42 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (a == (ASN1_STRING *)0x0) {
    iVar3 = 0;
  }
  else if (a->length == 0) {
    iVar3 = BIO_write(bp,&_LC0,1);
    if (iVar3 != 1) {
LAB_001000e0:
      iVar3 = -1;
    }
  }
  else {
    lVar2 = 0;
    iVar3 = 0;
    if (0 < a->length) {
      do {
        if ((lVar2 != 0) && ((uint)((int)lVar2 * -0x75075075) < 0x7507508)) {
          iVar1 = BIO_write(bp,&_LC1,2);
          if (iVar1 != 2) goto LAB_001000e0;
          iVar3 = iVar3 + 2;
        }
        ossl_to_hex(local_42,a->data[lVar2]);
        iVar1 = BIO_write(bp,local_42,2);
        if (iVar1 != 2) goto LAB_001000e0;
        iVar3 = iVar3 + 2;
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < a->length);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



int a2i_ASN1_STRING(BIO *bp,ASN1_STRING *bs,char *buf,int size)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char cVar8;
  long lVar9;
  uchar *local_60;
  int local_58;
  int local_48;
  
  iVar1 = BIO_gets(bp,buf,size);
  if (iVar1 < 1) {
    local_60 = (uchar *)0x0;
    iVar5 = 0;
LAB_00100406:
    bs->length = iVar5;
    bs->data = local_60;
    iVar1 = 1;
  }
  else {
    local_48 = 0;
    local_58 = 0;
    local_60 = (uchar *)0x0;
    do {
      lVar9 = (long)iVar1;
      pcVar7 = buf + lVar9 + -1;
      cVar8 = *pcVar7;
      if (cVar8 == '\n') {
        *pcVar7 = '\0';
        if (iVar1 == 1) break;
        pcVar7 = buf + lVar9 + -2;
        iVar1 = iVar1 + -1;
        cVar8 = *pcVar7;
        lVar9 = lVar9 + -1;
      }
      if (cVar8 == '\r') {
        *pcVar7 = '\0';
        if (iVar1 == 1) break;
        iVar1 = iVar1 + -1;
        lVar9 = (long)iVar1;
        cVar8 = buf[lVar9 + -1];
      }
      iVar5 = iVar1 + -1;
      if (iVar5 == 0) {
        buf[1] = '\0';
        break;
      }
      pcVar7 = buf + iVar5;
      do {
        iVar2 = ossl_ctype_check((int)*pcVar7,0x10);
        if (iVar2 == 0) {
          *pcVar7 = '\0';
          iVar1 = iVar5;
          if (iVar5 != 1) goto LAB_001001ea;
          goto LAB_001003b0;
        }
        pcVar7 = pcVar7 + -1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      buf[lVar9] = '\0';
LAB_001001ea:
      uVar6 = iVar1 - (uint)(cVar8 == '\\');
      if ((uVar6 & 1) != 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/f_string.c",0x5c,"a2i_ASN1_STRING");
        ERR_set_error(0xd,0x91,0);
        CRYPTO_free(local_60);
        goto LAB_001002c4;
      }
      iVar1 = (int)uVar6 >> 1;
      iVar5 = iVar1 + local_58;
      if (local_48 < iVar5) {
        puVar3 = (uchar *)CRYPTO_realloc(local_60,local_58 + iVar1 * 2,"crypto/asn1/f_string.c",0x62
                                        );
        if (puVar3 == (uchar *)0x0) {
          CRYPTO_free(local_60);
          goto LAB_001002c4;
        }
        local_48 = iVar5 + iVar1;
        local_60 = puVar3;
      }
      if (iVar1 != 0) {
        pbVar4 = local_60 + local_58;
        pcVar7 = buf;
        do {
          iVar2 = OPENSSL_hexchar2int(*pcVar7);
          if (iVar2 < 0) {
LAB_0010027f:
            ERR_new();
            ERR_set_debug("crypto/asn1/f_string.c",0x6e,"a2i_ASN1_STRING");
            ERR_set_error(0xd,0x8d,0);
            CRYPTO_free(local_60);
            goto LAB_001002c4;
          }
          *pbVar4 = *pbVar4 << 4 | (byte)iVar2;
          iVar2 = OPENSSL_hexchar2int(pcVar7[1]);
          if (iVar2 < 0) goto LAB_0010027f;
          pcVar7 = pcVar7 + 2;
          *pbVar4 = *pbVar4 << 4 | (byte)iVar2;
          pbVar4 = pbVar4 + 1;
        } while (pcVar7 != buf + (long)iVar1 * 2);
      }
      if (cVar8 != '\\') goto LAB_00100406;
      iVar1 = BIO_gets(bp,buf,size);
      local_58 = iVar5;
    } while (0 < iVar1);
LAB_001003b0:
    ERR_new();
    ERR_set_debug("crypto/asn1/f_string.c",0x81,"a2i_ASN1_STRING");
    ERR_set_error(0xd,0x96,0);
    CRYPTO_free(local_60);
LAB_001002c4:
    iVar1 = 0;
  }
  return iVar1;
}


