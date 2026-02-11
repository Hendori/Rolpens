
undefined1 * PBEPARAM_it(void)

{
  return local_it_2;
}



PBEPARAM * d2i_PBEPARAM(PBEPARAM **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  PBEPARAM *pPVar1;
  
  it = (ASN1_ITEM *)PBEPARAM_it();
  pPVar1 = (PBEPARAM *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pPVar1;
}



int i2d_PBEPARAM(PBEPARAM *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)PBEPARAM_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PBEPARAM * PBEPARAM_new(void)

{
  ASN1_ITEM *it;
  PBEPARAM *pPVar1;
  
  it = (ASN1_ITEM *)PBEPARAM_it();
  pPVar1 = (PBEPARAM *)ASN1_item_new(it);
  return pPVar1;
}



void PBEPARAM_free(PBEPARAM *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)PBEPARAM_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined8
PKCS5_pbe_set0_algor_ex
          (X509_ALGOR *param_1,int param_2,int param_3,void *param_4,int param_5,undefined8 param_6)

{
  ASN1_OCTET_STRING *pval;
  int iVar1;
  PBEPARAM *a;
  void *__dest;
  ASN1_ITEM *it;
  ASN1_STRING *pAVar2;
  ASN1_OBJECT *aobj;
  undefined8 uVar3;
  size_t __n;
  long in_FS_OFFSET;
  ASN1_OCTET_STRING *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (ASN1_STRING *)0x0;
  a = PBEPARAM_new();
  if (a == (PBEPARAM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/p5_pbe.c",0x27,"PKCS5_pbe_set0_algor_ex");
    ERR_set_error(0xd,0x8000d,0);
LAB_001001ce:
    __dest = (void *)0x0;
    a = (PBEPARAM *)0x0;
  }
  else {
    if (param_3 < 1) {
      param_3 = 0x800;
    }
    iVar1 = ASN1_INTEGER_set(a->iter,(long)param_3);
    if (iVar1 == 0) {
      ERR_new();
      uVar3 = 0x2d;
LAB_00100248:
      ERR_set_debug("crypto/asn1/p5_pbe.c",uVar3,"PKCS5_pbe_set0_algor_ex");
      ERR_set_error(0xd,0x8000d,0);
    }
    else {
      if (param_5 != 0) {
        __n = (size_t)param_5;
        if (-1 < param_5) goto LAB_00100131;
        __dest = (void *)0x0;
        goto LAB_001001d3;
      }
      __n = 8;
      param_5 = 8;
LAB_00100131:
      __dest = CRYPTO_malloc((int)__n,"crypto/asn1/p5_pbe.c",0x35);
      if (__dest != (void *)0x0) {
        if (param_4 == (void *)0x0) {
          iVar1 = RAND_bytes_ex(param_6,__dest,__n,0);
          if (iVar1 < 1) goto LAB_001001d3;
        }
        else {
          __dest = memcpy(__dest,param_4,__n);
        }
        ASN1_STRING_set0(a->salt,__dest,param_5);
        it = (ASN1_ITEM *)PBEPARAM_it();
        pAVar2 = ASN1_item_pack(a,it,&local_48);
        if (pAVar2 != (ASN1_STRING *)0x0) {
          PBEPARAM_free(a);
          pval = local_48;
          aobj = OBJ_nid2obj(param_2);
          iVar1 = X509_ALGOR_set0(param_1,aobj,0x10,pval);
          uVar3 = 1;
          if (iVar1 != 0) goto LAB_001001f7;
          goto LAB_001001ce;
        }
        ERR_new();
        uVar3 = 0x41;
        goto LAB_00100248;
      }
    }
    __dest = (void *)0x0;
  }
LAB_001001d3:
  CRYPTO_free(__dest);
  PBEPARAM_free(a);
  ASN1_STRING_free(local_48);
  uVar3 = 0;
LAB_001001f7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



int PKCS5_pbe_set0_algor(X509_ALGOR *algor,int alg,int iter,uchar *salt,int saltlen)

{
  int iVar1;
  
  iVar1 = PKCS5_pbe_set0_algor_ex();
  return iVar1;
}



X509_ALGOR *
PKCS5_pbe_set_ex(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                undefined8 param_5)

{
  int iVar1;
  X509_ALGOR *a;
  X509_ALGOR *pXVar2;
  
  a = X509_ALGOR_new();
  if (a == (X509_ALGOR *)0x0) {
    ERR_new();
    pXVar2 = (X509_ALGOR *)0x0;
    ERR_set_debug("crypto/asn1/p5_pbe.c",0x61,"PKCS5_pbe_set_ex");
    ERR_set_error(0xd,0x8000b,0);
  }
  else {
    iVar1 = PKCS5_pbe_set0_algor_ex(a,param_1,param_2,param_3,param_4,param_5);
    pXVar2 = a;
    if (iVar1 == 0) {
      pXVar2 = (X509_ALGOR *)0x0;
      X509_ALGOR_free(a);
    }
  }
  return pXVar2;
}



X509_ALGOR * PKCS5_pbe_set(int alg,int iter,uchar *salt,int saltlen)

{
  X509_ALGOR *pXVar1;
  
  pXVar1 = (X509_ALGOR *)PKCS5_pbe_set_ex();
  return pXVar1;
}


