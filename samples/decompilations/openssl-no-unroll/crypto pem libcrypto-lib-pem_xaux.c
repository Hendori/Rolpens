
X509 * PEM_read_bio_X509_AUX(BIO *bp,X509 **x,undefined1 *cb,void *u)

{
  X509 *pXVar1;
  
  pXVar1 = (X509 *)PEM_ASN1_read_bio(&d2i_X509_AUX,"TRUSTED CERTIFICATE",bp,x,cb,u);
  return pXVar1;
}



X509 * PEM_read_X509_AUX(FILE *fp,X509 **x,undefined1 *cb,void *u)

{
  X509 *pXVar1;
  
  pXVar1 = (X509 *)PEM_ASN1_read(&d2i_X509_AUX,"TRUSTED CERTIFICATE",fp,x,cb,u);
  return pXVar1;
}



int PEM_write_bio_X509_AUX(BIO *bp,X509 *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio(&i2d_X509_AUX,"TRUSTED CERTIFICATE",bp,x,(EVP_CIPHER *)0x0,(uchar *)0x0
                             ,0,(undefined1 *)0x0,(void *)0x0);
  return iVar1;
}



int PEM_write_X509_AUX(FILE *fp,X509 *x)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write(&i2d_X509_AUX,"TRUSTED CERTIFICATE",fp,x,(EVP_CIPHER *)0x0,(uchar *)0x0,0,
                         (undefined1 *)0x0,(void *)0x0);
  return iVar1;
}


