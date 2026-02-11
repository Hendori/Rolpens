
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_STRING * ASN1_OCTET_STRING_dup(ASN1_STRING *a)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_dup(a);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ASN1_OCTET_STRING_cmp(ASN1_STRING *a,ASN1_STRING *b)

{
  int iVar1;
  
  iVar1 = ASN1_STRING_cmp(a,b);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ASN1_OCTET_STRING_set(ASN1_STRING *str,void *data,int len)

{
  int iVar1;
  
  iVar1 = ASN1_STRING_set(str,data,len);
  return iVar1;
}


