
undefined1 * ASN1_ANY_it(void)

{
  return local_it_10;
}



undefined1 * ASN1_OCTET_STRING_it(void)

{
  return local_it_26;
}



ASN1_OCTET_STRING * d2i_ASN1_OCTET_STRING(ASN1_OCTET_STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_OCTET_STRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_OCTET_STRING_it();
  pAVar1 = (ASN1_OCTET_STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_OCTET_STRING(ASN1_OCTET_STRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_OCTET_STRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_OCTET_STRING * ASN1_OCTET_STRING_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(4);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_OCTET_STRING_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_INTEGER_it(void)

{
  return local_it_25;
}



ASN1_INTEGER * d2i_ASN1_INTEGER(ASN1_INTEGER **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_INTEGER *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_INTEGER_it();
  pAVar1 = (ASN1_INTEGER *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_INTEGER(ASN1_INTEGER *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_INTEGER_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_INTEGER * ASN1_INTEGER_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(2);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_INTEGER_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_ENUMERATED_it(void)

{
  return local_it_24;
}



ASN1_ENUMERATED * d2i_ASN1_ENUMERATED(ASN1_ENUMERATED **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_ENUMERATED *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_ENUMERATED_it();
  pAVar1 = (ASN1_ENUMERATED *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_ENUMERATED(ASN1_ENUMERATED *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_ENUMERATED_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_ENUMERATED * ASN1_ENUMERATED_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(10);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_ENUMERATED_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_BIT_STRING_it(void)

{
  return local_it_23;
}



ASN1_BIT_STRING * d2i_ASN1_BIT_STRING(ASN1_BIT_STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_BIT_STRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_BIT_STRING_it();
  pAVar1 = (ASN1_BIT_STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_BIT_STRING(ASN1_BIT_STRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_BIT_STRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_BIT_STRING * ASN1_BIT_STRING_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(3);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_BIT_STRING_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_UTF8STRING_it(void)

{
  return local_it_22;
}



ASN1_UTF8STRING * d2i_ASN1_UTF8STRING(ASN1_UTF8STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_UTF8STRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_UTF8STRING_it();
  pAVar1 = (ASN1_UTF8STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_UTF8STRING(ASN1_UTF8STRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_UTF8STRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_UTF8STRING * ASN1_UTF8STRING_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(0xc);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_UTF8STRING_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_PRINTABLESTRING_it(void)

{
  return local_it_21;
}



ASN1_PRINTABLESTRING * d2i_ASN1_PRINTABLESTRING(ASN1_PRINTABLESTRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_PRINTABLESTRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_PRINTABLESTRING_it();
  pAVar1 = (ASN1_PRINTABLESTRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_PRINTABLESTRING(ASN1_PRINTABLESTRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_PRINTABLESTRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_PRINTABLESTRING * ASN1_PRINTABLESTRING_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(0x13);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_PRINTABLESTRING_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_T61STRING_it(void)

{
  return local_it_20;
}



ASN1_T61STRING * d2i_ASN1_T61STRING(ASN1_T61STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_T61STRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_T61STRING_it();
  pAVar1 = (ASN1_T61STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_T61STRING(ASN1_T61STRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_T61STRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_T61STRING * ASN1_T61STRING_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(0x14);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_T61STRING_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_IA5STRING_it(void)

{
  return local_it_19;
}



ASN1_IA5STRING * d2i_ASN1_IA5STRING(ASN1_IA5STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_IA5STRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_IA5STRING_it();
  pAVar1 = (ASN1_IA5STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_IA5STRING(ASN1_IA5STRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_IA5STRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_IA5STRING * ASN1_IA5STRING_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(0x16);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_IA5STRING_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_GENERALSTRING_it(void)

{
  return local_it_18;
}



ASN1_GENERALSTRING * d2i_ASN1_GENERALSTRING(ASN1_GENERALSTRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_GENERALSTRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_GENERALSTRING_it();
  pAVar1 = (ASN1_GENERALSTRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_GENERALSTRING(ASN1_GENERALSTRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_GENERALSTRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_GENERALSTRING * ASN1_GENERALSTRING_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(0x1b);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_GENERALSTRING_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_UTCTIME_it(void)

{
  return local_it_17;
}



ASN1_UTCTIME * d2i_ASN1_UTCTIME(ASN1_UTCTIME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_UTCTIME *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_UTCTIME_it();
  pAVar1 = (ASN1_UTCTIME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_UTCTIME(ASN1_UTCTIME *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_UTCTIME_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_UTCTIME * ASN1_UTCTIME_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(0x17);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_UTCTIME_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_GENERALIZEDTIME_it(void)

{
  return local_it_16;
}



ASN1_GENERALIZEDTIME * d2i_ASN1_GENERALIZEDTIME(ASN1_GENERALIZEDTIME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_GENERALIZEDTIME *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_GENERALIZEDTIME_it();
  pAVar1 = (ASN1_GENERALIZEDTIME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_GENERALIZEDTIME(ASN1_GENERALIZEDTIME *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_GENERALIZEDTIME_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_GENERALIZEDTIME * ASN1_GENERALIZEDTIME_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(0x18);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_GENERALIZEDTIME_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_VISIBLESTRING_it(void)

{
  return local_it_15;
}



ASN1_VISIBLESTRING * d2i_ASN1_VISIBLESTRING(ASN1_VISIBLESTRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VISIBLESTRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_VISIBLESTRING_it();
  pAVar1 = (ASN1_VISIBLESTRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_VISIBLESTRING(ASN1_VISIBLESTRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_VISIBLESTRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_VISIBLESTRING * ASN1_VISIBLESTRING_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(0x1a);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_VISIBLESTRING_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_UNIVERSALSTRING_it(void)

{
  return local_it_14;
}



ASN1_UNIVERSALSTRING * d2i_ASN1_UNIVERSALSTRING(ASN1_UNIVERSALSTRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_UNIVERSALSTRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_UNIVERSALSTRING_it();
  pAVar1 = (ASN1_UNIVERSALSTRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_UNIVERSALSTRING(ASN1_UNIVERSALSTRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_UNIVERSALSTRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_UNIVERSALSTRING * ASN1_UNIVERSALSTRING_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(0x1c);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_UNIVERSALSTRING_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_BMPSTRING_it(void)

{
  return local_it_13;
}



ASN1_BMPSTRING * d2i_ASN1_BMPSTRING(ASN1_BMPSTRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_BMPSTRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_BMPSTRING_it();
  pAVar1 = (ASN1_BMPSTRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_BMPSTRING(ASN1_BMPSTRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_BMPSTRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_BMPSTRING * ASN1_BMPSTRING_new(void)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = ASN1_STRING_type_new(0x1e);
  return pAVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_BMPSTRING_free(ASN1_STRING *a)

{
  ASN1_STRING_free(a);
  return;
}



undefined1 * ASN1_NULL_it(void)

{
  return local_it_12;
}



ASN1_NULL * d2i_ASN1_NULL(ASN1_NULL **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_NULL_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (ASN1_NULL *)pAVar1;
}



int i2d_ASN1_NULL(ASN1_NULL *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_NULL_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_NULL * ASN1_NULL_new(void)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_NULL_it();
  pAVar1 = ASN1_item_new(it);
  return (ASN1_NULL *)pAVar1;
}



void ASN1_NULL_free(ASN1_NULL *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_NULL_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * ASN1_OBJECT_it(void)

{
  return local_it_11;
}



undefined1 * ASN1_SEQUENCE_it(void)

{
  return local_it_9;
}



ASN1_TYPE * d2i_ASN1_TYPE(ASN1_TYPE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_TYPE *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_ANY_it();
  pAVar1 = (ASN1_TYPE *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_TYPE(ASN1_TYPE *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_ANY_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_TYPE * ASN1_TYPE_new(void)

{
  ASN1_ITEM *it;
  ASN1_TYPE *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_ANY_it();
  pAVar1 = (ASN1_TYPE *)ASN1_item_new(it);
  return pAVar1;
}



void ASN1_TYPE_free(ASN1_TYPE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_ANY_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * ASN1_PRINTABLE_it(void)

{
  return local_it_8;
}



ASN1_STRING * d2i_ASN1_PRINTABLE(ASN1_STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_STRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_PRINTABLE_it();
  pAVar1 = (ASN1_STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_ASN1_PRINTABLE(ASN1_STRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_PRINTABLE_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_STRING * ASN1_PRINTABLE_new(void)

{
  ASN1_ITEM *it;
  ASN1_STRING *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_PRINTABLE_it();
  pAVar1 = (ASN1_STRING *)ASN1_item_new(it);
  return pAVar1;
}



void ASN1_PRINTABLE_free(ASN1_STRING *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_PRINTABLE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * DISPLAYTEXT_it(void)

{
  return local_it_7;
}



ASN1_STRING * d2i_DISPLAYTEXT(ASN1_STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_STRING *pAVar1;
  
  it = (ASN1_ITEM *)DISPLAYTEXT_it();
  pAVar1 = (ASN1_STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_DISPLAYTEXT(ASN1_STRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)DISPLAYTEXT_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_STRING * DISPLAYTEXT_new(void)

{
  ASN1_ITEM *it;
  ASN1_STRING *pAVar1;
  
  it = (ASN1_ITEM *)DISPLAYTEXT_it();
  pAVar1 = (ASN1_STRING *)ASN1_item_new(it);
  return pAVar1;
}



void DISPLAYTEXT_free(ASN1_STRING *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)DISPLAYTEXT_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * DIRECTORYSTRING_it(void)

{
  return local_it_6;
}



ASN1_STRING * d2i_DIRECTORYSTRING(ASN1_STRING **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_STRING *pAVar1;
  
  it = (ASN1_ITEM *)DIRECTORYSTRING_it();
  pAVar1 = (ASN1_STRING *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pAVar1;
}



int i2d_DIRECTORYSTRING(ASN1_STRING *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)DIRECTORYSTRING_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_STRING * DIRECTORYSTRING_new(void)

{
  ASN1_ITEM *it;
  ASN1_STRING *pAVar1;
  
  it = (ASN1_ITEM *)DIRECTORYSTRING_it();
  pAVar1 = (ASN1_STRING *)ASN1_item_new(it);
  return pAVar1;
}



void DIRECTORYSTRING_free(ASN1_STRING *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)DIRECTORYSTRING_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * ASN1_BOOLEAN_it(void)

{
  return local_it_5;
}



undefined1 * ASN1_TBOOLEAN_it(void)

{
  return local_it_4;
}



undefined1 * ASN1_FBOOLEAN_it(void)

{
  return local_it_3;
}



undefined1 * ASN1_OCTET_STRING_NDEF_it(void)

{
  return local_it_2;
}



undefined1 * ASN1_SEQUENCE_ANY_it(void)

{
  return local_it_1;
}



undefined1 * ASN1_SET_ANY_it(void)

{
  return local_it_0;
}



ASN1_SEQUENCE_ANY * d2i_ASN1_SEQUENCE_ANY(ASN1_SEQUENCE_ANY **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_SEQUENCE_ANY_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (ASN1_SEQUENCE_ANY *)pAVar1;
}



int i2d_ASN1_SEQUENCE_ANY(ASN1_SEQUENCE_ANY *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_SEQUENCE_ANY_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



ASN1_SEQUENCE_ANY * d2i_ASN1_SET_ANY(ASN1_SEQUENCE_ANY **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  ASN1_VALUE *pAVar1;
  
  it = (ASN1_ITEM *)ASN1_SET_ANY_it();
  pAVar1 = ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return (ASN1_SEQUENCE_ANY *)pAVar1;
}



int i2d_ASN1_SET_ANY(ASN1_SEQUENCE_ANY *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)ASN1_SET_ANY_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}


