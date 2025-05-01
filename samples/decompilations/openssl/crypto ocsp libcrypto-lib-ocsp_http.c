
OCSP_REQ_CTX * OCSP_sendreq_new(BIO *io,char *path,OCSP_REQUEST *req,int maxline)

{
  int iVar1;
  OCSP_REQ_CTX *pOVar2;
  undefined8 uVar3;
  
  pOVar2 = (OCSP_REQ_CTX *)OSSL_HTTP_REQ_CTX_new(io,io,maxline);
  if (pOVar2 != (OCSP_REQ_CTX *)0x0) {
    iVar1 = OSSL_HTTP_REQ_CTX_set_request_line(pOVar2,1,0,0,path);
    if ((iVar1 != 0) && (iVar1 = OSSL_HTTP_REQ_CTX_set_expected(pOVar2,0,1,0,0), iVar1 != 0)) {
      if (req == (OCSP_REQUEST *)0x0) {
        return pOVar2;
      }
      uVar3 = OCSP_REQUEST_it();
      iVar1 = OSSL_HTTP_REQ_CTX_set1_req(pOVar2,"application/ocsp-request",uVar3,req);
      if (iVar1 != 0) {
        return pOVar2;
      }
    }
    OSSL_HTTP_REQ_CTX_free(pOVar2);
  }
  return (OCSP_REQ_CTX *)0x0;
}



OCSP_RESPONSE * OCSP_sendreq_bio(BIO *b,char *path,OCSP_REQUEST *req)

{
  OCSP_REQ_CTX *pOVar1;
  BIO *in;
  ASN1_ITEM *it;
  OCSP_RESPONSE *pOVar2;
  
  pOVar1 = OCSP_sendreq_new(b,path,req,0);
  if (pOVar1 != (OCSP_REQ_CTX *)0x0) {
    in = (BIO *)OSSL_HTTP_REQ_CTX_exchange(pOVar1);
    it = (ASN1_ITEM *)OCSP_RESPONSE_it();
    pOVar2 = (OCSP_RESPONSE *)ASN1_item_d2i_bio(it,in,(void *)0x0);
    OSSL_HTTP_REQ_CTX_free(pOVar1);
    return pOVar2;
  }
  return (OCSP_RESPONSE *)0x0;
}


