
undefined1 * RSA_PRIME_INFO_it(void)

{
  return local_it_4;
}



undefined8 rsa_oaep_cb(int param_1,long *param_2)

{
  if (param_1 != 2) {
    return 1;
  }
  X509_ALGOR_free(*(X509_ALGOR **)(*param_2 + 0x18));
  return 1;
}



undefined8 rsa_pss_cb(int param_1,long *param_2)

{
  if (param_1 != 2) {
    return 1;
  }
  X509_ALGOR_free(*(X509_ALGOR **)(*param_2 + 0x20));
  return 1;
}



char rsa_cb(int param_1,long *param_2)

{
  int iVar1;
  RSA *pRVar2;
  
  if (param_1 == 0) {
    pRVar2 = RSA_new();
    *param_2 = (long)pRVar2;
    return (pRVar2 != (RSA *)0x0) * '\x02';
  }
  if (param_1 != 2) {
    if ((param_1 == 5) && (*(int *)(*param_2 + 0x10) == 1)) {
      iVar1 = ossl_rsa_multip_calc_product();
      return (iVar1 == 1) * '\x02';
    }
    return '\x01';
  }
  RSA_free((RSA *)*param_2);
  *param_2 = 0;
  return '\x02';
}



undefined1 * RSAPrivateKey_it(void)

{
  return local_it_3;
}



undefined1 * RSAPublicKey_it(void)

{
  return local_it_2;
}



undefined1 * RSA_PSS_PARAMS_it(void)

{
  return local_it_1;
}



RSA_PSS_PARAMS * d2i_RSA_PSS_PARAMS(RSA_PSS_PARAMS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  RSA_PSS_PARAMS *pRVar1;
  
  it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
  pRVar1 = (RSA_PSS_PARAMS *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pRVar1;
}



int i2d_RSA_PSS_PARAMS(RSA_PSS_PARAMS *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

RSA_PSS_PARAMS * RSA_PSS_PARAMS_new(void)

{
  ASN1_ITEM *it;
  RSA_PSS_PARAMS *pRVar1;
  
  it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
  pRVar1 = (RSA_PSS_PARAMS *)ASN1_item_new(it);
  return pRVar1;
}



void RSA_PSS_PARAMS_free(RSA_PSS_PARAMS *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



void RSA_PSS_PARAMS_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)RSA_PSS_PARAMS_it();
  ASN1_item_dup(it,param_1);
  return;
}



undefined1 * RSA_OAEP_PARAMS_it(void)

{
  return local_it_0;
}



void d2i_RSA_OAEP_PARAMS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)RSA_OAEP_PARAMS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_RSA_OAEP_PARAMS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)RSA_OAEP_PARAMS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void RSA_OAEP_PARAMS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)RSA_OAEP_PARAMS_it();
  ASN1_item_new(it);
  return;
}



void RSA_OAEP_PARAMS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)RSA_OAEP_PARAMS_it();
  ASN1_item_free(param_1,it);
  return;
}



RSA * d2i_RSAPrivateKey(RSA **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  RSA *pRVar1;
  
  it = (ASN1_ITEM *)RSAPrivateKey_it();
  pRVar1 = (RSA *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pRVar1;
}



int i2d_RSAPrivateKey(RSA *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)RSAPrivateKey_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



RSA * d2i_RSAPublicKey(RSA **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  RSA *pRVar1;
  
  it = (ASN1_ITEM *)RSAPublicKey_it();
  pRVar1 = (RSA *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pRVar1;
}



int i2d_RSAPublicKey(RSA *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)RSAPublicKey_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



RSA * RSAPublicKey_dup(RSA *rsa)

{
  ASN1_ITEM *it;
  RSA *pRVar1;
  
  it = (ASN1_ITEM *)RSAPublicKey_it();
  pRVar1 = (RSA *)ASN1_item_dup(it,rsa);
  return pRVar1;
}



RSA * RSAPrivateKey_dup(RSA *rsa)

{
  ASN1_ITEM *it;
  RSA *pRVar1;
  
  it = (ASN1_ITEM *)RSAPrivateKey_it();
  pRVar1 = (RSA *)ASN1_item_dup(it,rsa);
  return pRVar1;
}


