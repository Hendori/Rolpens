
bool pkey_cb(int param_1,long *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  long lVar3;
  
  if (param_1 == 2) {
    piVar2 = *(int **)(*param_2 + 0x10);
    if (piVar2 != (int *)0x0) {
      OPENSSL_cleanse(*(void **)(piVar2 + 2),(long)*piVar2);
      return true;
    }
  }
  else if (param_1 == 5) {
    puVar1 = (undefined8 *)*param_2;
    lVar3 = ASN1_INTEGER_get((ASN1_INTEGER *)*puVar1);
    if (1 < (uint)lVar3) {
      return false;
    }
    if ((uint)lVar3 == 0) {
      return puVar1[4] == 0;
    }
  }
  return true;
}



undefined1 * PKCS8_PRIV_KEY_INFO_it(void)

{
  return local_it_0;
}



PKCS8_PRIV_KEY_INFO * d2i_PKCS8_PRIV_KEY_INFO(PKCS8_PRIV_KEY_INFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PKCS8_PRIV_KEY_INFO *pPVar1;
  
  it = (ASN1_ITEM *)PKCS8_PRIV_KEY_INFO_it();
  pPVar1 = (PKCS8_PRIV_KEY_INFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PKCS8_PRIV_KEY_INFO(PKCS8_PRIV_KEY_INFO *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PKCS8_PRIV_KEY_INFO_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PKCS8_PRIV_KEY_INFO * PKCS8_PRIV_KEY_INFO_new(void)

{
  ASN1_ITEM *it;
  PKCS8_PRIV_KEY_INFO *pPVar1;
  
  it = (ASN1_ITEM *)PKCS8_PRIV_KEY_INFO_it();
  pPVar1 = (PKCS8_PRIV_KEY_INFO *)ASN1_item_new(it);
  return pPVar1;
}



void PKCS8_PRIV_KEY_INFO_free(PKCS8_PRIV_KEY_INFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PKCS8_PRIV_KEY_INFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



int PKCS8_pkey_set0(PKCS8_PRIV_KEY_INFO *priv,ASN1_OBJECT *aobj,int version,int ptype,void *pval,
                   uchar *penc,int penclen)

{
  int iVar1;
  
  if (-1 < version) {
    if (1 < version) {
      return 0;
    }
    iVar1 = ASN1_INTEGER_set(*(ASN1_INTEGER **)priv,(long)version);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = X509_ALGOR_set0((X509_ALGOR *)priv->version,aobj,ptype,pval);
  if (iVar1 == 0) {
    return 0;
  }
  if (penc != (uchar *)0x0) {
    ASN1_STRING_set0((ASN1_STRING *)priv->pkeyalg,penc,penclen);
  }
  return 1;
}



int PKCS8_pkey_get0(ASN1_OBJECT **ppkalg,uchar **pk,int *ppklen,X509_ALGOR **pa,
                   PKCS8_PRIV_KEY_INFO *p8)

{
  ASN1_STRING *x;
  int iVar1;
  uchar *puVar2;
  
  if (ppkalg != (ASN1_OBJECT **)0x0) {
    *ppkalg = *(ASN1_OBJECT **)p8->version;
  }
  if (pk != (uchar **)0x0) {
    puVar2 = (uchar *)ASN1_STRING_get0_data(p8->pkeyalg);
    x = (ASN1_STRING *)p8->pkeyalg;
    *pk = puVar2;
    iVar1 = ASN1_STRING_length(x);
    *ppklen = iVar1;
  }
  if (pa != (X509_ALGOR **)0x0) {
    *pa = (X509_ALGOR *)p8->version;
  }
  return 1;
}



undefined8 PKCS8_pkey_get0_attrs(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



bool PKCS8_pkey_add1_attr_by_NID(long param_1,int param_2,int param_3,uchar *param_4,int param_5)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_NID
                     ((stack_st_X509_ATTRIBUTE **)(param_1 + 0x18),param_2,param_3,param_4,param_5);
  return psVar1 != (stack_st_X509_ATTRIBUTE *)0x0;
}



bool PKCS8_pkey_add1_attr_by_OBJ
               (long param_1,ASN1_OBJECT *param_2,int param_3,uchar *param_4,int param_5)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr_by_OBJ
                     ((stack_st_X509_ATTRIBUTE **)(param_1 + 0x18),param_2,param_3,param_4,param_5);
  return psVar1 != (stack_st_X509_ATTRIBUTE *)0x0;
}



bool PKCS8_pkey_add1_attr(long param_1,X509_ATTRIBUTE *param_2)

{
  stack_st_X509_ATTRIBUTE *psVar1;
  
  psVar1 = X509at_add1_attr((stack_st_X509_ATTRIBUTE **)(param_1 + 0x18),param_2);
  return psVar1 != (stack_st_X509_ATTRIBUTE *)0x0;
}


