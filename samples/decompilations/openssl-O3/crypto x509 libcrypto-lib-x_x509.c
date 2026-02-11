
undefined1 * X509_CINF_it(void)

{
  return local_it_1;
}



X509_CINF * d2i_X509_CINF(X509_CINF **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_CINF *pXVar1;
  
  it = (ASN1_ITEM *)X509_CINF_it();
  pXVar1 = (X509_CINF *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}



int i2d_X509_CINF(X509_CINF *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_CINF_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_CINF * X509_CINF_new(void)

{
  ASN1_ITEM *it;
  X509_CINF *pXVar1;
  
  it = (ASN1_ITEM *)X509_CINF_it();
  pXVar1 = (X509_CINF *)ASN1_item_new(it);
  return pXVar1;
}



void X509_CINF_free(X509_CINF *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_CINF_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * X509_it(void)

{
  return local_it_0;
}



X509 * d2i_X509(X509 **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509 *pXVar1;
  
  it = (ASN1_ITEM *)X509_it();
  pXVar1 = (X509 *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}



int i2d_X509(X509 *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509 * X509_new(void)

{
  ASN1_ITEM *it;
  X509 *pXVar1;
  
  it = (ASN1_ITEM *)X509_it();
  pXVar1 = (X509 *)ASN1_item_new(it);
  return pXVar1;
}



void X509_free(X509 *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



X509 * X509_dup(X509 *x509)

{
  ASN1_ITEM *it;
  X509 *pXVar1;
  
  it = (ASN1_ITEM *)X509_it();
  pXVar1 = (X509 *)ASN1_item_dup(it,x509);
  return pXVar1;
}



bool ossl_x509_set0_libctx(long param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  bool bVar2;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x170) = param_2;
    CRYPTO_free(*(void **)(param_1 + 0x178));
    bVar2 = true;
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (param_3 != (char *)0x0) {
      pcVar1 = CRYPTO_strdup(param_3,"crypto/x509/x_x509.c",0x99);
      bVar2 = pcVar1 != (char *)0x0;
      *(char **)(param_1 + 0x178) = pcVar1;
    }
    return bVar2;
  }
  return true;
}



bool x509_cb(undefined4 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  void *obj;
  int iVar1;
  
  obj = (void *)*param_2;
  switch(param_1) {
  case 1:
    goto LAB_00100396;
  case 3:
    CRYPTO_free_ex_data(3,obj,(CRYPTO_EX_DATA *)((long)obj + 200));
    X509_CERT_AUX_free(*(X509_CERT_AUX **)((long)obj + 0x150));
    ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING **)((long)obj + 0xf8));
    AUTHORITY_KEYID_free(*(AUTHORITY_KEYID **)((long)obj + 0x100));
    CRL_DIST_POINTS_free(*(CRL_DIST_POINTS **)((long)obj + 0x110));
    ossl_policy_cache_free(*(undefined8 *)((long)obj + 0x108));
    GENERAL_NAMES_free(*(GENERAL_NAMES **)((long)obj + 0x118));
    NAME_CONSTRAINTS_free(*(NAME_CONSTRAINTS **)((long)obj + 0x120));
    OPENSSL_sk_pop_free(*(undefined8 *)((long)obj + 0x128),&IPAddressFamily_free);
    ASIdentifiers_free(*(ASIdentifiers **)((long)obj + 0x130));
    ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING **)((long)obj + 0x168));
    CRYPTO_free(*(void **)((long)obj + 0x178));
    break;
  case 4:
    CRYPTO_free_ex_data(3,obj,(CRYPTO_EX_DATA *)((long)obj + 200));
    X509_CERT_AUX_free(*(X509_CERT_AUX **)((long)obj + 0x150));
    ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING **)((long)obj + 0xf8));
    AUTHORITY_KEYID_free(*(AUTHORITY_KEYID **)((long)obj + 0x100));
    CRL_DIST_POINTS_free(*(CRL_DIST_POINTS **)((long)obj + 0x110));
    ossl_policy_cache_free(*(undefined8 *)((long)obj + 0x108));
    GENERAL_NAMES_free(*(GENERAL_NAMES **)((long)obj + 0x118));
    NAME_CONSTRAINTS_free(*(NAME_CONSTRAINTS **)((long)obj + 0x120));
    OPENSSL_sk_pop_free(*(undefined8 *)((long)obj + 0x128),&IPAddressFamily_free);
    ASIdentifiers_free(*(ASIdentifiers **)((long)obj + 0x130));
    ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING **)((long)obj + 0x168));
LAB_00100396:
    *(undefined1 (*) [16])((long)obj + 0xe8) = (undefined1  [16])0x0;
    *(undefined4 *)((long)obj + 0x160) = 0;
    *(undefined8 *)((long)obj + 0x168) = 0;
    *(undefined8 *)((long)obj + 0x150) = 0;
    *(undefined4 *)((long)obj + 0xd8) = 0xffffffff;
    *(undefined4 *)((long)obj + 0xdc) = 0xffffffff;
    *(undefined4 *)((long)obj + 0xe0) = 0xffffffff;
    *(undefined4 *)((long)obj + 0xe4) = 0xffffffff;
    *(undefined1 (*) [16])((long)obj + 0xf8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)obj + 0x108) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)obj + 0x118) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)obj + 0x128) = (undefined1  [16])0x0;
    iVar1 = CRYPTO_new_ex_data(3,obj,(CRYPTO_EX_DATA *)((long)obj + 200));
    return iVar1 != 0;
  case 0xf:
    iVar1 = ossl_x509_set0_libctx(obj,param_4[0x2e],param_4[0x2f]);
    return iVar1 != 0;
  case 0x10:
    *param_4 = *(undefined8 *)((long)obj + 0x170);
    break;
  case 0x11:
    *param_4 = *(undefined8 *)((long)obj + 0x178);
  }
  return true;
}



X509 * X509_new_ex(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  X509 *a;
  
  uVar2 = X509_it();
  a = (X509 *)ASN1_item_new_ex(uVar2,param_1,param_2);
  iVar1 = ossl_x509_set0_libctx(a,param_1,param_2);
  if (iVar1 != 0) {
    return a;
  }
  X509_free(a);
  return (X509 *)0x0;
}



int X509_set_ex_data(X509 *r,int idx,void *arg)

{
  int iVar1;
  
  iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA *)(r + 1),idx,arg);
  return iVar1;
}



void * X509_get_ex_data(X509 *r,int idx)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(r + 1),idx);
  return pvVar1;
}



X509 * d2i_X509_AUX(X509 **a,uchar **pp,long length)

{
  X509 *a_00;
  X509_CERT_AUX *pXVar1;
  long len;
  long in_FS_OFFSET;
  bool bVar2;
  uchar *local_48;
  long local_40;
  
  bVar2 = true;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *pp;
  if (a != (X509 **)0x0) {
    bVar2 = *a == (X509 *)0x0;
  }
  a_00 = d2i_X509(a,&local_48,length);
  if (a_00 != (X509 *)0x0) {
    len = length - ((long)local_48 - (long)*pp);
    if ((len < 1) ||
       (pXVar1 = d2i_X509_CERT_AUX((X509_CERT_AUX **)&a_00[1].altname,&local_48,len),
       pXVar1 != (X509_CERT_AUX *)0x0)) {
      *pp = local_48;
      goto LAB_00100556;
    }
    if ((bVar2) && (X509_free(a_00), a != (X509 **)0x0)) {
      *a = (X509 *)0x0;
    }
  }
  a_00 = (X509 *)0x0;
LAB_00100556:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return a_00;
}



int i2d_X509_AUX(X509 *a,uchar **pp)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pp == (uchar **)0x0) {
    puVar4 = (uchar *)0x0;
  }
  else {
    puVar4 = *pp;
    if (puVar4 == (uchar *)0x0) {
      iVar2 = i2d_X509(a,(uchar **)0x0);
      iVar1 = iVar2;
      if (iVar2 < 1) goto LAB_0010063f;
      if (a == (X509 *)0x0) {
        if (iVar2 < 1) goto LAB_0010063f;
        local_48 = (uchar *)CRYPTO_malloc(iVar2,"crypto/x509/x_x509.c",0x112);
        *pp = local_48;
        if (local_48 == (uchar *)0x0) goto LAB_00100783;
        iVar2 = i2d_X509((X509 *)0x0,&local_48);
        iVar1 = iVar2;
        puVar4 = local_48;
        if (0 < iVar2) goto LAB_0010063f;
      }
      else {
        iVar1 = i2d_X509_CERT_AUX((X509_CERT_AUX *)a[1].altname,(uchar **)0x0);
        if (iVar1 < 0) goto LAB_0010063f;
        puVar3 = (uchar *)CRYPTO_malloc(iVar1 + iVar2,"crypto/x509/x_x509.c",0x112);
        *pp = puVar3;
        local_48 = puVar3;
        if (puVar3 == (uchar *)0x0) {
LAB_00100783:
          iVar1 = -1;
          goto LAB_0010063f;
        }
        iVar1 = i2d_X509(a,&local_48);
        iVar2 = iVar1;
        puVar4 = local_48;
        if (0 < iVar1) {
          iVar2 = i2d_X509_CERT_AUX((X509_CERT_AUX *)a[1].altname,&local_48);
          iVar1 = iVar1 + iVar2;
          puVar4 = puVar3;
          if (-1 < iVar2) goto LAB_0010063f;
        }
      }
      local_48 = puVar4;
      CRYPTO_free(*pp);
      *pp = (uchar *)0x0;
      iVar1 = iVar2;
      goto LAB_0010063f;
    }
  }
  iVar1 = i2d_X509(a,pp);
  if ((0 < iVar1) && (a != (X509 *)0x0)) {
    iVar2 = i2d_X509_CERT_AUX((X509_CERT_AUX *)a[1].altname,pp);
    iVar1 = iVar1 + iVar2;
    if ((iVar2 < 0) && (iVar1 = iVar2, puVar4 != (uchar *)0x0)) {
      *pp = puVar4;
    }
  }
LAB_0010063f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void i2d_re_X509_tbs(X509_CINF *param_1,uchar **param_2)

{
  *(undefined4 *)&param_1[1].issuer = 1;
  i2d_X509_CINF(param_1,param_2);
  return;
}



void X509_get0_signature(long *param_1,long *param_2,long param_3)

{
  if (param_1 != (long *)0x0) {
    *param_1 = param_3 + 0x98;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = param_3 + 0x88;
  }
  return;
}



void X509_get_signature_nid(long param_1)

{
  OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x88));
  return;
}



void X509_set0_distinguishing_id(long param_1,undefined8 param_2)

{
  ASN1_OCTET_STRING_free(*(ASN1_OCTET_STRING **)(param_1 + 0x168));
  *(undefined8 *)(param_1 + 0x168) = param_2;
  return;
}



undefined8 X509_get0_distinguishing_id(long param_1)

{
  return *(undefined8 *)(param_1 + 0x168);
}


