
int ASN1_check_infinite_end(uchar **p,long len)

{
  uchar *puVar1;
  
  if (0 < len) {
    if (((len == 1) || (puVar1 = *p, *puVar1 != '\0')) || (puVar1[1] != '\0')) {
      return 0;
    }
    *p = puVar1 + 2;
  }
  return 1;
}



int ASN1_const_check_infinite_end(uchar **p,long len)

{
  uchar *puVar1;
  
  if (0 < len) {
    if (((len == 1) || (puVar1 = *p, *puVar1 != '\0')) || (puVar1[1] != '\0')) {
      return 0;
    }
    *p = puVar1 + 2;
  }
  return 1;
}



int ASN1_get_object(uchar **pp,long *plength,int *ptag,int *pclass,long omax)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint3 uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  
  pbVar3 = *pp;
  if (omax < 1) {
    ERR_new();
    ERR_set_debug("crypto/asn1/asn1_lib.c",0x38,"ASN1_get_object");
    ERR_set_error(0xd,0xe0,0);
    return 0x80;
  }
  bVar1 = *pbVar3;
  pbVar13 = pbVar3 + 1;
  lVar11 = omax + -1;
  if ((char)(bVar1 & 0x1f) == '\x1f') {
    uVar9 = 0;
    lVar10 = lVar11;
    if (lVar11 != 0) {
      while( true ) {
        bVar2 = *pbVar13;
        pbVar13 = pbVar13 + 1;
        lVar11 = lVar10 + -1;
        if (-1 < (char)bVar2) break;
        uVar9 = uVar9 << 7 | (ulong)(bVar2 & 0x7f);
        if ((0xffffff < (long)uVar9) || (lVar10 = lVar11, lVar11 == 0)) goto LAB_00100150;
      }
      if (lVar10 != 1) {
        *ptag = (uint)bVar2 | (uint)(uVar9 << 7);
        *pclass = bVar1 & 0xc0;
        if (1 < lVar10) goto LAB_001000bb;
      }
    }
LAB_00100150:
    ERR_new();
    ERR_set_debug("crypto/asn1/asn1_lib.c",0x69,"ASN1_get_object");
    ERR_set_error(0xd,0x7b,0);
    return 0x80;
  }
  if (omax == 1) goto LAB_00100150;
  *ptag = bVar1 & 0x1f;
  *pclass = bVar1 & 0xc0;
LAB_001000bb:
  bVar2 = *pbVar13;
  uVar12 = bVar1 & 0x20;
  pbVar13 = pbVar13 + 1;
  if (bVar2 == 0x80) {
    *plength = 0;
    if ((char)uVar12 == '\0') goto LAB_00100150;
    uVar9 = 0;
    uVar14 = 1;
LAB_001001f8:
    if ((long)uVar9 <= omax - ((long)pbVar13 - (long)pbVar3)) goto LAB_0010020e;
  }
  else {
    uVar8 = bVar2 & 0x7f;
    if ((char)bVar2 < '\0') {
      if (lVar11 <= (int)(uVar8 + 1)) goto LAB_00100150;
      do {
        if (*pbVar13 != 0) {
          if (8 < (int)uVar8) goto LAB_00100150;
          bVar1 = *pbVar13;
          uVar9 = (ulong)bVar1;
          if (uVar8 == 1) {
            pbVar13 = pbVar13 + 1;
            goto LAB_001002f0;
          }
          uVar9 = (ulong)CONCAT11(bVar1,pbVar13[1]);
          if (uVar8 == 2) {
            pbVar13 = pbVar13 + 2;
            goto LAB_001002f0;
          }
          uVar4 = CONCAT21(CONCAT11(bVar1,pbVar13[1]),pbVar13[2]);
          uVar9 = (ulong)uVar4;
          if (uVar8 != 3) {
            uVar14 = CONCAT31(uVar4,pbVar13[3]);
            uVar9 = (ulong)uVar14;
            if (uVar8 != 4) {
              uVar5 = CONCAT41(uVar14,pbVar13[4]);
              uVar9 = (ulong)uVar5;
              if (uVar8 != 5) {
                uVar6 = CONCAT51(uVar5,pbVar13[5]);
                uVar9 = (ulong)uVar6;
                if (uVar8 != 6) {
                  uVar7 = CONCAT61(uVar6,pbVar13[6]);
                  uVar9 = (ulong)uVar7;
                  if (uVar8 != 7) {
                    uVar9 = CONCAT71(uVar7,pbVar13[7]);
                    if ((char)bVar1 < '\0') goto LAB_00100150;
                    pbVar13 = pbVar13 + 8;
                    goto LAB_001002f0;
                  }
                }
              }
            }
          }
          pbVar13 = pbVar13 + (int)uVar8;
          goto LAB_001002f0;
        }
        pbVar13 = pbVar13 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      uVar9 = 0;
LAB_001002f0:
      *plength = uVar9;
      uVar14 = 0;
      goto LAB_001001f8;
    }
    uVar14 = 0;
    *plength = (ulong)uVar8;
    if ((long)(ulong)uVar8 <= omax - ((long)pbVar13 - (long)pbVar3)) goto LAB_0010020e;
  }
  ERR_new();
  ERR_set_debug("crypto/asn1/asn1_lib.c",0x5f,"ASN1_get_object");
  ERR_set_error(0xd,0x9b,0);
  uVar12 = uVar12 | 0x80;
LAB_0010020e:
  *pp = pbVar13;
  return uVar12 | uVar14;
}



void ASN1_put_object(uchar **pp,int constructed,int length,int tag,int xclass)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  pbVar1 = *pp;
  bVar5 = (constructed != 0) << 5 | (byte)xclass & 0xc0;
  if (tag < 0x1f) {
    pbVar7 = pbVar1 + 1;
    *pbVar1 = (byte)tag & 0x1f | bVar5;
  }
  else {
    *pbVar1 = bVar5 | 0x1f;
    iVar4 = tag;
    iVar3 = 0;
    do {
      iVar2 = iVar3;
      iVar3 = iVar2 + 1;
      iVar4 = iVar4 >> 7;
    } while (iVar4 != 0);
    pbVar7 = pbVar1 + (long)iVar2 + 1;
    iVar6 = iVar3;
    iVar4 = iVar2;
    do {
      bVar5 = (byte)tag & 0x7f;
      if (iVar3 != iVar6) {
        bVar5 = bVar5 | 0x80;
      }
      *pbVar7 = bVar5;
      tag = tag >> 7;
      pbVar7 = pbVar7 + -1;
      bVar8 = iVar4 != 0;
      iVar6 = iVar4;
      iVar4 = iVar4 + -1;
    } while (bVar8);
    pbVar7 = pbVar1 + (long)iVar2 + 2;
  }
  if (constructed == 2) {
    length = -0x80;
  }
  else if (0x7f < length) {
    iVar4 = length;
    iVar3 = 0;
    do {
      iVar2 = iVar3;
      iVar4 = iVar4 >> 8;
      iVar3 = iVar2 + 1;
    } while (iVar4 != 0);
    *pbVar7 = (byte)(iVar2 + 1) | 0x80;
    pbVar1 = pbVar7 + (long)iVar2 + 1;
    do {
      *pbVar1 = (byte)length;
      pbVar1 = pbVar1 + -1;
      length = length >> 8;
    } while (pbVar7 != pbVar1);
    *pp = pbVar7 + (long)iVar2 + 2;
    return;
  }
  *pbVar7 = (byte)length;
  *pp = pbVar7 + 1;
  return;
}



int ASN1_put_eoc(uchar **pp)

{
  uchar *puVar1;
  
  puVar1 = *pp;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  *pp = puVar1 + 2;
  return 2;
}



int ASN1_object_size(int constructed,int length,int tag)

{
  int iVar1;
  int iVar2;
  
  if (-1 < length) {
    iVar2 = 1;
    iVar1 = iVar2;
    if (0x1e < tag) {
      do {
        iVar1 = iVar2 + 1;
        if (tag >> 7 == 0) break;
        iVar2 = iVar2 + 2;
        tag = tag >> 0xe;
        iVar1 = iVar2;
      } while (tag != 0);
    }
    if (constructed == 2) {
      iVar1 = iVar1 + 3;
    }
    else {
      iVar1 = iVar1 + 1;
      iVar2 = length;
      if (0x7f < length) {
        do {
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 >> 8;
        } while (iVar2 != 0);
      }
    }
    if (iVar1 < 0x7fffffff - length) {
      return iVar1 + length;
    }
  }
  return -1;
}



void ossl_asn1_string_set_bits_left(long param_1,uint param_2)

{
  *(ulong *)(param_1 + 0x10) =
       *(ulong *)(param_1 + 0x10) & 0xfffffffffffffff8 | (ulong)(param_2 & 7) | 8;
  return;
}



int ASN1_STRING_set(ASN1_STRING *str,void *data,int len)

{
  uchar *addr;
  uchar *__dest;
  ulong __n;
  
  __n = (ulong)len;
  if (len < 0) {
    if (data == (void *)0x0) {
      return 0;
    }
    __n = strlen((char *)data);
  }
  if (__n < 0x7fffffff) {
    addr = str->data;
    if (((ulong)(long)str->length <= __n) || (__dest = addr, addr == (uchar *)0x0)) {
      __dest = (uchar *)CRYPTO_realloc(addr,(int)__n + 1,"crypto/asn1/asn1_lib.c",0x13a);
      if (__dest == (uchar *)0x0) {
        str->data = addr;
        return 0;
      }
      str->data = __dest;
    }
    str->length = (int)__n;
    if (data != (void *)0x0) {
      memcpy(__dest,data,__n);
      str->data[__n] = '\0';
    }
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/asn1/asn1_lib.c",0x131,"ASN1_STRING_set");
  ERR_set_error(0xd,0xdf,0);
  return 0;
}



int ASN1_STRING_copy(ASN1_STRING *dst,ASN1_STRING *str)

{
  uchar *data;
  int iVar1;
  ulong uVar2;
  
  if (str == (ASN1_STRING *)0x0) {
    return 0;
  }
  iVar1 = str->length;
  data = str->data;
  dst->type = str->type;
  iVar1 = ASN1_STRING_set(dst,data,iVar1);
  if (iVar1 != 0) {
    uVar2 = (ulong)((uint)dst->flags & 0x80);
    dst->flags = uVar2;
    dst->flags = str->flags & 0xffffffffffffff7fU | uVar2;
    return 1;
  }
  return 0;
}



void ASN1_STRING_set0(ASN1_STRING *str,void *data,int len)

{
  CRYPTO_free(str->data);
  str->data = (uchar *)data;
  str->length = len;
  return;
}



ASN1_STRING * ASN1_STRING_type_new(int type)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = (ASN1_STRING *)CRYPTO_zalloc(0x18,"crypto/asn1/asn1_lib.c",0x163);
  if (pAVar1 != (ASN1_STRING *)0x0) {
    pAVar1->type = type;
  }
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_STRING * ASN1_STRING_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(4);
  return pAVar1;
}



void ossl_asn1_string_embed_free(void *param_1,int param_2)

{
  if (param_1 == (void *)0x0) {
    return;
  }
  if ((*(byte *)((long)param_1 + 0x10) & 0x10) == 0) {
    CRYPTO_free(*(void **)((long)param_1 + 8));
  }
  if (param_2 == 0) {
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void ASN1_STRING_free(ASN1_STRING *a)

{
  if (a != (ASN1_STRING *)0x0) {
    ossl_asn1_string_embed_free(a,(uint)a->flags & 0x80);
    return;
  }
  return;
}



ASN1_STRING * ASN1_STRING_dup(ASN1_STRING *a)

{
  int iVar1;
  ASN1_STRING *dst;
  
  if ((a != (ASN1_STRING *)0x0) && (dst = ASN1_STRING_new(), dst != (ASN1_STRING *)0x0)) {
    iVar1 = ASN1_STRING_copy(dst,a);
    if (iVar1 != 0) {
      return dst;
    }
    ASN1_STRING_free(dst);
  }
  return (ASN1_STRING *)0x0;
}



void ASN1_STRING_clear_free(ASN1_STRING *param_1)

{
  if (param_1 == (ASN1_STRING *)0x0) {
    return;
  }
  if ((param_1->data != (uchar *)0x0) && ((param_1->flags & 0x10) == 0)) {
    OPENSSL_cleanse(param_1->data,(long)param_1->length);
    ASN1_STRING_free(param_1);
    return;
  }
  ASN1_STRING_free(param_1);
  return;
}



int ASN1_STRING_cmp(ASN1_STRING *a,ASN1_STRING *b)

{
  int iVar1;
  int iVar2;
  
  iVar2 = a->length;
  iVar1 = iVar2 - b->length;
  if (iVar1 != 0) {
    return iVar1;
  }
  if (iVar2 != 0) {
    iVar2 = memcmp(a->data,b->data,(long)iVar2);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  return a->type - b->type;
}



int ASN1_STRING_length(ASN1_STRING *x)

{
  return x->length;
}



void ASN1_STRING_length_set(ASN1_STRING *x,int n)

{
  x->length = n;
  return;
}



int ASN1_STRING_type(ASN1_STRING *x)

{
  return x->type;
}



undefined8 ASN1_STRING_get0_data(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



uchar * ASN1_STRING_data(ASN1_STRING *x)

{
  return x->data;
}



char * ossl_sk_ASN1_UTF8STRING2text(undefined8 param_1,char *param_2,ulong param_3)

{
  int iVar1;
  size_t sVar2;
  ASN1_STRING *pAVar3;
  char *__src;
  int iVar4;
  ulong uVar5;
  char *__dest;
  char *__dest_00;
  char *local_50;
  char *local_48;
  
  if (param_2 == (char *)0x0) {
    sVar2 = 0;
    local_50 = "";
  }
  else {
    sVar2 = strlen(param_2);
    local_50 = param_2;
  }
  uVar5 = 0;
  iVar4 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_1);
    if (iVar1 <= iVar4) break;
    pAVar3 = (ASN1_STRING *)OPENSSL_sk_value(param_1,iVar4);
    if (iVar4 != 0) {
      uVar5 = uVar5 + sVar2;
    }
    iVar1 = ASN1_STRING_length(pAVar3);
    uVar5 = uVar5 + (long)iVar1;
    if ((param_3 != 0) && (param_3 < uVar5)) goto LAB_00100a40;
    iVar4 = iVar4 + 1;
  }
  local_48 = (char *)CRYPTO_malloc((int)uVar5 + 1,"crypto/asn1/asn1_lib.c",0x1c8);
  if (local_48 == (char *)0x0) {
LAB_00100a40:
    local_48 = (char *)0x0;
  }
  else {
    iVar4 = 0;
    __dest_00 = local_48;
    while( true ) {
      iVar1 = OPENSSL_sk_num(param_1);
      if (iVar1 <= iVar4) break;
      pAVar3 = (ASN1_STRING *)OPENSSL_sk_value(param_1,iVar4);
      iVar1 = ASN1_STRING_length(pAVar3);
      __dest = __dest_00;
      if ((0 < iVar4) && (sVar2 != 0)) {
        __dest = __dest_00 + sVar2;
        strncpy(__dest_00,local_50,sVar2 + 1);
      }
      iVar4 = iVar4 + 1;
      __src = (char *)ASN1_STRING_get0_data(pAVar3);
      __dest_00 = __dest + iVar1;
      strncpy(__dest,__src,(long)iVar1);
    }
    *__dest_00 = '\0';
  }
  return local_48;
}


