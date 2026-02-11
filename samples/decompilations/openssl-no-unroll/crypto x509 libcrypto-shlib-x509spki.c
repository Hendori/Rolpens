
int NETSCAPE_SPKI_set_pubkey(NETSCAPE_SPKI *x,EVP_PKEY *pkey)

{
  int iVar1;
  
  if ((x != (NETSCAPE_SPKI *)0x0) && (x->spkac != (NETSCAPE_SPKAC *)0x0)) {
    iVar1 = X509_PUBKEY_set(&x->spkac->pubkey,pkey);
    return iVar1;
  }
  return 0;
}



EVP_PKEY * NETSCAPE_SPKI_get_pubkey(NETSCAPE_SPKI *x)

{
  EVP_PKEY *pEVar1;
  
  if ((x != (NETSCAPE_SPKI *)0x0) && (x->spkac != (NETSCAPE_SPKAC *)0x0)) {
    pEVar1 = X509_PUBKEY_get(x->spkac->pubkey);
    return pEVar1;
  }
  return (EVP_PKEY *)0x0;
}



NETSCAPE_SPKI * NETSCAPE_SPKI_b64_decode(char *str,int len)

{
  int iVar1;
  size_t sVar2;
  uchar *t;
  NETSCAPE_SPKI *pNVar3;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (len < 1) {
    sVar2 = strlen(str);
    len = (int)sVar2;
  }
  t = (uchar *)CRYPTO_malloc(len + 1,"crypto/x509/x509spki.c",0x26);
  if (t != (uchar *)0x0) {
    iVar1 = EVP_DecodeBlock(t,(uchar *)str,len);
    if (-1 < iVar1) {
      local_38 = t;
      pNVar3 = d2i_NETSCAPE_SPKI((NETSCAPE_SPKI **)0x0,&local_38,(long)iVar1);
      CRYPTO_free(t);
      goto LAB_001000e9;
    }
    ERR_new();
    ERR_set_debug("crypto/x509/x509spki.c",0x2a,"NETSCAPE_SPKI_b64_decode");
    ERR_set_error(0xb,0x76,0);
    CRYPTO_free(t);
  }
  pNVar3 = (NETSCAPE_SPKI *)0x0;
LAB_001000e9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pNVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * NETSCAPE_SPKI_b64_encode(NETSCAPE_SPKI *x)

{
  int num;
  uchar *f;
  uchar *t;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  num = i2d_NETSCAPE_SPKI(x,(uchar **)0x0);
  if (0 < num) {
    f = (uchar *)CRYPTO_malloc(num,"crypto/x509/x509spki.c",0x3f);
    t = (uchar *)CRYPTO_malloc(num * 2,"crypto/x509/x509spki.c",0x40);
    if ((f != (uchar *)0x0) && (t != (uchar *)0x0)) {
      local_38 = f;
      i2d_NETSCAPE_SPKI(x,&local_38);
      EVP_EncodeBlock(t,f,num);
      CRYPTO_free(f);
      goto LAB_001001fa;
    }
    CRYPTO_free(f);
    CRYPTO_free(t);
  }
  t = (uchar *)0x0;
LAB_001001fa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (char *)t;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


