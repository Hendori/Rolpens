
undefined1 * X509_ALGOR_it(void)

{
  return local_it_2;
}



undefined1 * X509_ALGORS_it(void)

{
  return local_it_1;
}



X509_ALGOR * d2i_X509_ALGOR(X509_ALGOR **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_ALGOR *pXVar1;
  
  it = (ASN1_ITEM *)X509_ALGOR_it();
  pXVar1 = (X509_ALGOR *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}



int i2d_X509_ALGOR(X509_ALGOR *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_ALGOR_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_ALGOR * X509_ALGOR_new(void)

{
  ASN1_ITEM *it;
  X509_ALGOR *pXVar1;
  
  it = (ASN1_ITEM *)X509_ALGOR_it();
  pXVar1 = (X509_ALGOR *)ASN1_item_new(it);
  return pXVar1;
}



void X509_ALGOR_free(X509_ALGOR *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_ALGOR_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



X509_ALGORS * d2i_X509_ALGORS(X509_ALGORS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)X509_ALGORS_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (X509_ALGORS *)pAVar1;
}



int i2d_X509_ALGORS(X509_ALGORS *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_ALGORS_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



X509_ALGOR * X509_ALGOR_dup(X509_ALGOR *xn)

{
  ASN1_ITEM *it;
  X509_ALGOR *pXVar1;
  
  it = (ASN1_ITEM *)X509_ALGOR_it();
  pXVar1 = (X509_ALGOR *)ASN1_item_dup(it,xn);
  return pXVar1;
}



int X509_ALGOR_set0(X509_ALGOR *alg,ASN1_OBJECT *aobj,int ptype,void *pval)

{
  ASN1_TYPE *pAVar1;
  
  if (alg == (X509_ALGOR *)0x0) {
    return 0;
  }
  if (ptype == -1) {
    ASN1_OBJECT_free(alg->algorithm);
    alg->algorithm = aobj;
    ASN1_TYPE_free(alg->parameter);
    alg->parameter = (ASN1_TYPE *)0x0;
  }
  else {
    if (alg->parameter == (ASN1_TYPE *)0x0) {
      pAVar1 = ASN1_TYPE_new();
      alg->parameter = pAVar1;
      if (pAVar1 == (ASN1_TYPE *)0x0) {
        return 0;
      }
    }
    ASN1_OBJECT_free(alg->algorithm);
    alg->algorithm = aobj;
    if (ptype != 0) {
      ASN1_TYPE_set(alg->parameter,ptype,pval);
    }
  }
  return 1;
}



X509_ALGOR * ossl_X509_ALGOR_from_nid(int param_1,int param_2,void *param_3)

{
  int iVar1;
  ASN1_OBJECT *aobj;
  X509_ALGOR *alg;
  
  aobj = OBJ_nid2obj(param_1);
  if (aobj != (ASN1_OBJECT *)0x0) {
    alg = X509_ALGOR_new();
    if (alg != (X509_ALGOR *)0x0) {
      iVar1 = X509_ALGOR_set0(alg,aobj,param_2,param_3);
      if (iVar1 != 0) {
        return alg;
      }
      alg->algorithm = (ASN1_OBJECT *)0x0;
    }
    X509_ALGOR_free(alg);
  }
  return (X509_ALGOR *)0x0;
}



void X509_ALGOR_get0(ASN1_OBJECT **paobj,int *pptype,void **ppval,X509_ALGOR *algor)

{
  ASN1_TYPE *pAVar1;
  
  if (paobj != (ASN1_OBJECT **)0x0) {
    *paobj = algor->algorithm;
  }
  if (pptype != (int *)0x0) {
    pAVar1 = algor->parameter;
    if (pAVar1 == (ASN1_TYPE *)0x0) {
      *pptype = -1;
      return;
    }
    *pptype = pAVar1->type;
    if (ppval != (void **)0x0) {
      *ppval = (void *)pAVar1->value;
    }
  }
  return;
}



void X509_ALGOR_set_md(X509_ALGOR *alg,EVP_MD *md)

{
  ulong uVar1;
  int n;
  ASN1_OBJECT *aobj;
  
  uVar1 = md->flags;
  n = EVP_MD_get_type(md);
  aobj = OBJ_nid2obj(n);
  X509_ALGOR_set0(alg,aobj,-(uint)((uVar1 & 8) != 0) | 5,(void *)0x0);
  return;
}



int X509_ALGOR_cmp(X509_ALGOR *a,X509_ALGOR *b)

{
  int iVar1;
  
  iVar1 = OBJ_cmp(a->algorithm,b->algorithm);
  if (iVar1 == 0) {
    if ((a->parameter != (ASN1_TYPE *)0x0) || (b->parameter != (ASN1_TYPE *)0x0)) {
      iVar1 = ASN1_TYPE_cmp(a->parameter,b->parameter);
      return iVar1;
    }
  }
  return iVar1;
}



bool X509_ALGOR_copy(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  ASN1_OBJECT *pAVar2;
  ASN1_TYPE *a;
  bool bVar3;
  
  if (param_2 == (undefined8 *)0x0) {
    return false;
  }
  if (param_1 == (undefined8 *)0x0) {
    return false;
  }
  if ((ASN1_OBJECT *)*param_1 != (ASN1_OBJECT *)0x0) {
    ASN1_OBJECT_free((ASN1_OBJECT *)*param_1);
  }
  *param_1 = 0;
  if ((ASN1_TYPE *)param_1[1] != (ASN1_TYPE *)0x0) {
    ASN1_TYPE_free((ASN1_TYPE *)param_1[1]);
  }
  pAVar2 = (ASN1_OBJECT *)*param_2;
  param_1[1] = 0;
  if (pAVar2 != (ASN1_OBJECT *)0x0) {
    pAVar2 = OBJ_dup(pAVar2);
    *param_1 = pAVar2;
    if (pAVar2 == (ASN1_OBJECT *)0x0) {
      return false;
    }
  }
  bVar3 = true;
  if (param_2[1] != 0) {
    a = ASN1_TYPE_new();
    param_1[1] = a;
    if (a == (ASN1_TYPE *)0x0) {
      return false;
    }
    iVar1 = ASN1_TYPE_set1(a,*(int *)param_2[1],*(void **)((int *)param_2[1] + 2));
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



undefined4 ossl_x509_algor_new_from_md(undefined8 *param_1,EVP_MD *param_2)

{
  int iVar1;
  X509_ALGOR *alg;
  
  if ((param_2 != (EVP_MD *)0x0) && (iVar1 = EVP_MD_is_a(param_2,&_LC0), iVar1 == 0)) {
    alg = X509_ALGOR_new();
    if (alg == (X509_ALGOR *)0x0) {
      return 0;
    }
    X509_ALGOR_set_md(alg,param_2);
    *param_1 = alg;
  }
  return 1;
}



EVP_MD * ossl_x509_algor_get_md(undefined8 *param_1)

{
  int n;
  char *name;
  EVP_MD *pEVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    pEVar1 = EVP_sha1();
    return pEVar1;
  }
  n = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  name = OBJ_nid2sn(n);
  pEVar1 = EVP_get_digestbyname(name);
  if (pEVar1 != (EVP_MD *)0x0) {
    return pEVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/asn1/x_algor.c",0xa5,"ossl_x509_algor_get_md");
  ERR_set_error(0xd,0xe5,0);
  return (EVP_MD *)0x0;
}



undefined8 ossl_x509_algor_mgf1_decode(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar1 == 0x38f) {
    uVar3 = param_1[1];
    uVar2 = X509_ALGOR_it();
    uVar3 = ASN1_TYPE_unpack_sequence(uVar2,uVar3);
    return uVar3;
  }
  return 0;
}



bool ossl_x509_algor_md_to_mgf1(long *param_1,long param_2)

{
  int iVar1;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  X509_ALGOR *local_30;
  ASN1_OCTET_STRING *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  local_30 = (X509_ALGOR *)0x0;
  local_28 = (ASN1_STRING *)0x0;
  if ((param_2 == 0) || (iVar1 = EVP_MD_is_a(param_2,&_LC0), iVar1 != 0)) {
    bVar4 = true;
  }
  else {
    iVar1 = ossl_x509_algor_new_from_md(&local_30,param_2);
    if (iVar1 != 0) {
      it = (ASN1_ITEM *)X509_ALGOR_it();
      pAVar2 = ASN1_item_pack(local_30,it,&local_28);
      if (pAVar2 != (ASN1_STRING *)0x0) {
        lVar3 = ossl_X509_ALGOR_from_nid(0x38f,0x10,local_28);
        *param_1 = lVar3;
        if (lVar3 != 0) {
          local_28 = (ASN1_STRING *)0x0;
        }
      }
    }
    ASN1_STRING_free(local_28);
    X509_ALGOR_free(local_30);
    bVar4 = *param_1 != 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}


