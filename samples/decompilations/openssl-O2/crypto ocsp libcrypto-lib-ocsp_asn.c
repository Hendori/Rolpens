
undefined1 * OCSP_SIGNATURE_it(void)

{
  return local_it_14;
}



undefined1 * OCSP_CERTID_it(void)

{
  return local_it_13;
}



undefined1 * OCSP_ONEREQ_it(void)

{
  return local_it_12;
}



undefined1 * OCSP_REQINFO_it(void)

{
  return local_it_11;
}



undefined1 * OCSP_RESPBYTES_it(void)

{
  return local_it_9;
}



undefined1 * OCSP_RESPID_it(void)

{
  return local_it_7;
}



undefined1 * OCSP_REVOKEDINFO_it(void)

{
  return local_it_6;
}



undefined1 * OCSP_CERTSTATUS_it(void)

{
  return local_it_5;
}



undefined1 * OCSP_SINGLERESP_it(void)

{
  return local_it_4;
}



undefined1 * OCSP_RESPDATA_it(void)

{
  return local_it_3;
}



OCSP_SIGNATURE * d2i_OCSP_SIGNATURE(OCSP_SIGNATURE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_SIGNATURE *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_SIGNATURE_it();
  pOVar1 = (OCSP_SIGNATURE *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_SIGNATURE(OCSP_SIGNATURE *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_SIGNATURE_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_SIGNATURE * OCSP_SIGNATURE_new(void)

{
  ASN1_ITEM *it;
  OCSP_SIGNATURE *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_SIGNATURE_it();
  pOVar1 = (OCSP_SIGNATURE *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_SIGNATURE_free(OCSP_SIGNATURE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_SIGNATURE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



OCSP_CERTID * d2i_OCSP_CERTID(OCSP_CERTID **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_CERTID *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_CERTID_it();
  pOVar1 = (OCSP_CERTID *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_CERTID(OCSP_CERTID *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_CERTID_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_CERTID * OCSP_CERTID_new(void)

{
  ASN1_ITEM *it;
  OCSP_CERTID *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_CERTID_it();
  pOVar1 = (OCSP_CERTID *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_CERTID_free(OCSP_CERTID *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_CERTID_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



OCSP_ONEREQ * d2i_OCSP_ONEREQ(OCSP_ONEREQ **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_ONEREQ *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_ONEREQ_it();
  pOVar1 = (OCSP_ONEREQ *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_ONEREQ(OCSP_ONEREQ *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_ONEREQ_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_ONEREQ * OCSP_ONEREQ_new(void)

{
  ASN1_ITEM *it;
  OCSP_ONEREQ *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_ONEREQ_it();
  pOVar1 = (OCSP_ONEREQ *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_ONEREQ_free(OCSP_ONEREQ *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_ONEREQ_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



OCSP_REQINFO * d2i_OCSP_REQINFO(OCSP_REQINFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_REQINFO *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_REQINFO_it();
  pOVar1 = (OCSP_REQINFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_REQINFO(OCSP_REQINFO *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_REQINFO_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_REQINFO * OCSP_REQINFO_new(void)

{
  ASN1_ITEM *it;
  OCSP_REQINFO *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_REQINFO_it();
  pOVar1 = (OCSP_REQINFO *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_REQINFO_free(OCSP_REQINFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_REQINFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * OCSP_REQUEST_it(void)

{
  return local_it_10;
}



OCSP_REQUEST * d2i_OCSP_REQUEST(OCSP_REQUEST **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_REQUEST *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_REQUEST_it();
  pOVar1 = (OCSP_REQUEST *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_REQUEST(OCSP_REQUEST *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_REQUEST_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_REQUEST * OCSP_REQUEST_new(void)

{
  ASN1_ITEM *it;
  OCSP_REQUEST *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_REQUEST_it();
  pOVar1 = (OCSP_REQUEST *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_REQUEST_free(OCSP_REQUEST *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_REQUEST_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



OCSP_RESPBYTES * d2i_OCSP_RESPBYTES(OCSP_RESPBYTES **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_RESPBYTES *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPBYTES_it();
  pOVar1 = (OCSP_RESPBYTES *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_RESPBYTES(OCSP_RESPBYTES *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPBYTES_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_RESPBYTES * OCSP_RESPBYTES_new(void)

{
  ASN1_ITEM *it;
  OCSP_RESPBYTES *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPBYTES_it();
  pOVar1 = (OCSP_RESPBYTES *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_RESPBYTES_free(OCSP_RESPBYTES *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_RESPBYTES_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * OCSP_RESPONSE_it(void)

{
  return local_it_8;
}



OCSP_RESPONSE * d2i_OCSP_RESPONSE(OCSP_RESPONSE **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_RESPONSE *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPONSE_it();
  pOVar1 = (OCSP_RESPONSE *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_RESPONSE(OCSP_RESPONSE *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPONSE_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_RESPONSE * OCSP_RESPONSE_new(void)

{
  ASN1_ITEM *it;
  OCSP_RESPONSE *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPONSE_it();
  pOVar1 = (OCSP_RESPONSE *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_RESPONSE_free(OCSP_RESPONSE *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_RESPONSE_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



OCSP_RESPID * d2i_OCSP_RESPID(OCSP_RESPID **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_RESPID *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPID_it();
  pOVar1 = (OCSP_RESPID *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_RESPID(OCSP_RESPID *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPID_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_RESPID * OCSP_RESPID_new(void)

{
  ASN1_ITEM *it;
  OCSP_RESPID *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPID_it();
  pOVar1 = (OCSP_RESPID *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_RESPID_free(OCSP_RESPID *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_RESPID_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



OCSP_REVOKEDINFO * d2i_OCSP_REVOKEDINFO(OCSP_REVOKEDINFO **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_REVOKEDINFO *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_REVOKEDINFO_it();
  pOVar1 = (OCSP_REVOKEDINFO *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_REVOKEDINFO(OCSP_REVOKEDINFO *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_REVOKEDINFO_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_REVOKEDINFO * OCSP_REVOKEDINFO_new(void)

{
  ASN1_ITEM *it;
  OCSP_REVOKEDINFO *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_REVOKEDINFO_it();
  pOVar1 = (OCSP_REVOKEDINFO *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_REVOKEDINFO_free(OCSP_REVOKEDINFO *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_REVOKEDINFO_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



OCSP_CERTSTATUS * d2i_OCSP_CERTSTATUS(OCSP_CERTSTATUS **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_CERTSTATUS *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_CERTSTATUS_it();
  pOVar1 = (OCSP_CERTSTATUS *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_CERTSTATUS(OCSP_CERTSTATUS *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_CERTSTATUS_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_CERTSTATUS * OCSP_CERTSTATUS_new(void)

{
  ASN1_ITEM *it;
  OCSP_CERTSTATUS *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_CERTSTATUS_it();
  pOVar1 = (OCSP_CERTSTATUS *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_CERTSTATUS_free(OCSP_CERTSTATUS *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_CERTSTATUS_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



OCSP_SINGLERESP * d2i_OCSP_SINGLERESP(OCSP_SINGLERESP **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_SINGLERESP *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_SINGLERESP_it();
  pOVar1 = (OCSP_SINGLERESP *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_SINGLERESP(OCSP_SINGLERESP *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_SINGLERESP_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_SINGLERESP * OCSP_SINGLERESP_new(void)

{
  ASN1_ITEM *it;
  OCSP_SINGLERESP *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_SINGLERESP_it();
  pOVar1 = (OCSP_SINGLERESP *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_SINGLERESP_free(OCSP_SINGLERESP *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_SINGLERESP_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



OCSP_RESPDATA * d2i_OCSP_RESPDATA(OCSP_RESPDATA **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_RESPDATA *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPDATA_it();
  pOVar1 = (OCSP_RESPDATA *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_RESPDATA(OCSP_RESPDATA *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPDATA_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_RESPDATA * OCSP_RESPDATA_new(void)

{
  ASN1_ITEM *it;
  OCSP_RESPDATA *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_RESPDATA_it();
  pOVar1 = (OCSP_RESPDATA *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_RESPDATA_free(OCSP_RESPDATA *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_RESPDATA_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * OCSP_BASICRESP_it(void)

{
  return local_it_2;
}



OCSP_BASICRESP * d2i_OCSP_BASICRESP(OCSP_BASICRESP **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_BASICRESP *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_BASICRESP_it();
  pOVar1 = (OCSP_BASICRESP *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_BASICRESP(OCSP_BASICRESP *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_BASICRESP_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_BASICRESP * OCSP_BASICRESP_new(void)

{
  ASN1_ITEM *it;
  OCSP_BASICRESP *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_BASICRESP_it();
  pOVar1 = (OCSP_BASICRESP *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_BASICRESP_free(OCSP_BASICRESP *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_BASICRESP_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * OCSP_CRLID_it(void)

{
  return local_it_1;
}



OCSP_CRLID * d2i_OCSP_CRLID(OCSP_CRLID **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_CRLID *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_CRLID_it();
  pOVar1 = (OCSP_CRLID *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_CRLID(OCSP_CRLID *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_CRLID_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_CRLID * OCSP_CRLID_new(void)

{
  ASN1_ITEM *it;
  OCSP_CRLID *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_CRLID_it();
  pOVar1 = (OCSP_CRLID *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_CRLID_free(OCSP_CRLID *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_CRLID_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



undefined1 * OCSP_SERVICELOC_it(void)

{
  return local_it_0;
}



OCSP_SERVICELOC * d2i_OCSP_SERVICELOC(OCSP_SERVICELOC **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  OCSP_SERVICELOC *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_SERVICELOC_it();
  pOVar1 = (OCSP_SERVICELOC *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pOVar1;
}



int i2d_OCSP_SERVICELOC(OCSP_SERVICELOC *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)OCSP_SERVICELOC_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

OCSP_SERVICELOC * OCSP_SERVICELOC_new(void)

{
  ASN1_ITEM *it;
  OCSP_SERVICELOC *pOVar1;
  
  it = (ASN1_ITEM *)OCSP_SERVICELOC_it();
  pOVar1 = (OCSP_SERVICELOC *)ASN1_item_new(it);
  return pOVar1;
}



void OCSP_SERVICELOC_free(OCSP_SERVICELOC *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OCSP_SERVICELOC_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}


