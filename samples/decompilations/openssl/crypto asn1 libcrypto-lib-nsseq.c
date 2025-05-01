
undefined8 nsseq_cb(int param_1,undefined8 *param_2)

{
  ASN1_OBJECT *pAVar1;
  
  if (param_1 != 1) {
    return 1;
  }
  param_2 = (undefined8 *)*param_2;
  pAVar1 = OBJ_nid2obj(0x4f);
  *param_2 = pAVar1;
  return 1;
}



undefined1 * NETSCAPE_CERT_SEQUENCE_it(void)

{
  return local_it_0;
}



NETSCAPE_CERT_SEQUENCE * d2i_NETSCAPE_CERT_SEQUENCE(NETSCAPE_CERT_SEQUENCE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  NETSCAPE_CERT_SEQUENCE *pNVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_CERT_SEQUENCE_it();
  pNVar1 = (NETSCAPE_CERT_SEQUENCE *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pNVar1;
}



int i2d_NETSCAPE_CERT_SEQUENCE(NETSCAPE_CERT_SEQUENCE *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_CERT_SEQUENCE_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

NETSCAPE_CERT_SEQUENCE * NETSCAPE_CERT_SEQUENCE_new(void)

{
  ASN1_ITEM *it;
  NETSCAPE_CERT_SEQUENCE *pNVar1;
  
  it = (ASN1_ITEM *)NETSCAPE_CERT_SEQUENCE_it();
  pNVar1 = (NETSCAPE_CERT_SEQUENCE *)ASN1_item_new(it);
  return pNVar1;
}



void NETSCAPE_CERT_SEQUENCE_free(NETSCAPE_CERT_SEQUENCE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)NETSCAPE_CERT_SEQUENCE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}


