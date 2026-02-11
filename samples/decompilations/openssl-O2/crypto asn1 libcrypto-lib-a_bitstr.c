
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ASN1_BIT_STRING_set(ASN1_STRING *str,void *data,int len)

{
  int iVar1;
  
  iVar1 = ASN1_STRING_set(str,data,len);
  return iVar1;
}



int ossl_i2c_ASN1_BIT_STRING(int *param_1,long *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  void *pvVar4;
  undefined1 *puVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar3 = *param_1;
  if (iVar3 < 1) {
    iVar8 = iVar3 + 1;
  }
  else {
    if ((*(ulong *)(param_1 + 4) & 8) != 0) {
      bVar7 = (byte)*(ulong *)(param_1 + 4) & 7;
LAB_00100043:
      iVar8 = iVar3 + 1;
      if (param_2 == (long *)0x0) {
        return iVar8;
      }
      pbVar2 = (byte *)*param_2;
      *pbVar2 = bVar7;
      pvVar4 = memcpy(pbVar2 + 1,*(void **)(param_1 + 2),(long)iVar3);
      puVar5 = (undefined1 *)((long)pvVar4 + (long)iVar3);
      puVar5[-1] = puVar5[-1] & (byte)(0xff << bVar7);
      goto LAB_00100077;
    }
    lVar6 = (long)iVar3;
    do {
      if (*(char *)(*(long *)(param_1 + 2) + -1 + lVar6) != '\0') {
        iVar3 = (int)lVar6;
        bVar7 = 0;
        bVar1 = *(byte *)(*(long *)(param_1 + 2) + -1 + (long)iVar3);
        if (((((bVar1 & 1) == 0) && (bVar7 = 1, (bVar1 & 2) == 0)) && (bVar7 = 2, (bVar1 & 4) == 0))
           && (((bVar7 = 3, (bVar1 & 8) == 0 && (bVar7 = 4, (bVar1 & 0x10) == 0)) &&
               ((bVar7 = 5, (bVar1 & 0x20) == 0 && (bVar7 = 6, (bVar1 & 0x40) == 0)))))) {
          bVar7 = -(bVar1 != 0) & 7;
        }
        goto LAB_00100043;
      }
      lVar6 = lVar6 + -1;
    } while ((int)lVar6 != 0);
    iVar8 = 1;
  }
  if (param_2 == (long *)0x0) {
    return iVar8;
  }
  puVar5 = (undefined1 *)*param_2;
  *puVar5 = 0;
  puVar5 = puVar5 + 1;
LAB_00100077:
  *param_2 = (long)puVar5;
  return iVar8;
}



ASN1_STRING * ossl_c2i_ASN1_BIT_STRING(long *param_1,undefined8 *param_2,long param_3)

{
  size_t __n;
  byte *pbVar1;
  void *pvVar2;
  ASN1_STRING *a;
  byte *__src;
  byte bVar3;
  
  if (param_3 < 1) {
    bVar3 = 0x98;
    a = (ASN1_STRING *)0x0;
  }
  else if (param_3 < 0x80000000) {
    if (((param_1 == (long *)0x0) || (a = (ASN1_STRING *)*param_1, a == (ASN1_STRING *)0x0)) &&
       (a = ASN1_BIT_STRING_new(), a == (ASN1_BIT_STRING *)0x0)) {
      return (ASN1_STRING *)0x0;
    }
    bVar3 = *(byte *)*param_2;
    if (bVar3 < 8) {
      __src = (byte *)*param_2 + 1;
      ossl_asn1_string_set_bits_left(a,bVar3);
      __n = param_3 - 1;
      if (param_3 == 1) {
        pvVar2 = (void *)0x0;
LAB_00100259:
        ASN1_STRING_set0(a,pvVar2,(int)__n);
        a->type = 3;
        if (param_1 != (long *)0x0) {
          *param_1 = (long)a;
        }
        *param_2 = __src;
        return a;
      }
      pvVar2 = CRYPTO_malloc((int)__n,"crypto/asn1/a_bitstr.c",0x79);
      if (pvVar2 != (void *)0x0) {
        pvVar2 = memcpy(pvVar2,__src,__n);
        pbVar1 = (byte *)((long)pvVar2 + param_3 + -2);
        *pbVar1 = *pbVar1 & (byte)(0xff << (bVar3 & 0x1f));
        __src = __src + __n;
        goto LAB_00100259;
      }
      if (bVar3 == 0) goto LAB_001002ce;
    }
    else {
      bVar3 = 0xdc;
    }
  }
  else {
    bVar3 = 0x97;
    a = (ASN1_STRING *)0x0;
  }
  ERR_new();
  ERR_set_debug("crypto/asn1/a_bitstr.c",0x8b,"ossl_c2i_ASN1_BIT_STRING");
  ERR_set_error(0xd,bVar3,0);
LAB_001002ce:
  if ((param_1 == (long *)0x0) || ((ASN1_BIT_STRING *)*param_1 != a)) {
    ASN1_BIT_STRING_free(a);
  }
  return (ASN1_STRING *)0x0;
}



int ASN1_BIT_STRING_set_bit(ASN1_BIT_STRING *a,int n,int value)

{
  int iVar1;
  long lVar2;
  uchar *puVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  
  if (n < 0) {
    return 0;
  }
  iVar6 = n >> 3;
  bVar5 = (byte)(1 << (~(byte)n & 7));
  bVar7 = 0;
  if (value != 0) {
    bVar7 = bVar5;
  }
  if (a == (ASN1_BIT_STRING *)0x0) {
    return 0;
  }
  a->flags = a->flags & 0xfffffffffffffff0;
  if ((a->length <= iVar6) || (puVar3 = a->data, puVar3 == (uchar *)0x0)) {
    if (value == 0) {
      return 1;
    }
    iVar1 = iVar6 + 1;
    puVar3 = (uchar *)CRYPTO_clear_realloc
                                (a->data,(long)a->length,(long)iVar1,"crypto/asn1/a_bitstr.c",0xaa);
    if (puVar3 == (uchar *)0x0) {
      return 0;
    }
    iVar4 = iVar1 - a->length;
    if (0 < iVar4) {
      memset(puVar3 + a->length,0,(long)iVar4);
    }
    a->data = puVar3;
    a->length = iVar1;
  }
  puVar3[iVar6] = ~bVar5 & puVar3[iVar6] | bVar7;
  iVar6 = a->length;
  if (0 < iVar6) {
    lVar2 = (long)(int)(iVar6 - 1U);
    do {
      if (a->data[lVar2] != '\0') {
        return 1;
      }
      a->length = (int)lVar2;
      lVar2 = lVar2 + -1;
    } while (((long)iVar6 + -2) - (ulong)(iVar6 - 1U) != lVar2);
  }
  return 1;
}



int ASN1_BIT_STRING_get_bit(ASN1_BIT_STRING *a,int n)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((((-1 < n) && (a != (ASN1_BIT_STRING *)0x0)) && (n >> 3 < a->length)) &&
     (a->data != (uchar *)0x0)) {
    uVar1 = (uint)((1 << (~(byte)n & 7) & (uint)a->data[n >> 3]) != 0);
  }
  return uVar1;
}



int ASN1_BIT_STRING_check(ASN1_BIT_STRING *a,uchar *flags,int flags_len)

{
  ulong uVar1;
  byte bVar2;
  
  if (((a != (ASN1_BIT_STRING *)0x0) && (a->data != (uchar *)0x0)) && (0 < a->length)) {
    uVar1 = 0;
    while( true ) {
      bVar2 = 0xff;
      if ((int)uVar1 < flags_len) {
        bVar2 = ~flags[uVar1];
      }
      bVar2 = bVar2 & a->data[uVar1];
      if (a->length - 1 == uVar1) break;
      uVar1 = uVar1 + 1;
      if (bVar2 != 0) {
        return 0;
      }
    }
    return (int)(bVar2 == 0);
  }
  return 1;
}


