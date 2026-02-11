
char dsa_cb(int param_1,undefined8 *param_2)

{
  DSA *pDVar1;
  
  if (param_1 == 0) {
    pDVar1 = DSA_new();
    *param_2 = pDVar1;
    return (pDVar1 != (DSA *)0x0) * '\x02';
  }
  if (param_1 != 2) {
    return '\x01';
  }
  DSA_free((DSA *)*param_2);
  *param_2 = 0;
  return '\x02';
}



DSA * d2i_DSAPrivateKey(DSA **a,uchar **pp,long length)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)ASN1_item_d2i((ASN1_VALUE **)a,pp,length,(ASN1_ITEM *)local_it_2);
  return pDVar1;
}



int i2d_DSAPrivateKey(DSA *a,uchar **pp)

{
  int iVar1;
  
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,pp,(ASN1_ITEM *)local_it_2);
  return iVar1;
}



DSA * d2i_DSAparams(DSA **a,uchar **pp,long length)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)ASN1_item_d2i((ASN1_VALUE **)a,pp,length,(ASN1_ITEM *)local_it_1);
  return pDVar1;
}



int i2d_DSAparams(DSA *a,uchar **pp)

{
  int iVar1;
  
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,pp,(ASN1_ITEM *)local_it_1);
  return iVar1;
}



DSA * d2i_DSAPublicKey(DSA **a,uchar **pp,long length)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)ASN1_item_d2i((ASN1_VALUE **)a,pp,length,(ASN1_ITEM *)local_it_0);
  return pDVar1;
}



int i2d_DSAPublicKey(DSA *a,uchar **pp)

{
  int iVar1;
  
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,pp,(ASN1_ITEM *)local_it_0);
  return iVar1;
}



DSA * DSAparams_dup(DSA *x)

{
  DSA *pDVar1;
  
  pDVar1 = (DSA *)ASN1_item_dup((ASN1_ITEM *)local_it_1,x);
  return pDVar1;
}


