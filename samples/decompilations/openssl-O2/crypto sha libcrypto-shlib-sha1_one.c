
uchar * ossl_sha1(void *param_1,size_t param_2,uchar *param_3)

{
  int iVar1;
  uchar *md;
  long in_FS_OFFSET;
  SHA_CTX SStack_98;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  md = m_5;
  if (param_3 != (uchar *)0x0) {
    md = param_3;
  }
  iVar1 = SHA1_Init(&SStack_98);
  if (iVar1 == 0) {
    md = (uchar *)0x0;
  }
  else {
    SHA1_Update(&SStack_98,param_1,param_2);
    SHA1_Final(md,&SStack_98);
    OPENSSL_cleanse(&SStack_98,0x60);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return md;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uchar * SHA1(uchar *d,size_t n,uchar *md)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = m_4;
  if (md != (uchar *)0x0) {
    puVar2 = md;
  }
  iVar1 = EVP_Q_digest(0,&_LC0,0,d,n,puVar2,0);
  if (iVar1 == 0) {
    puVar2 = (uchar *)0x0;
  }
  return puVar2;
}



uchar * SHA224(uchar *d,size_t n,uchar *md)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = m_3;
  if (md != (uchar *)0x0) {
    puVar2 = md;
  }
  iVar1 = EVP_Q_digest(0,"SHA224",0,d,n,puVar2,0);
  if (iVar1 == 0) {
    puVar2 = (uchar *)0x0;
  }
  return puVar2;
}



uchar * SHA256(uchar *d,size_t n,uchar *md)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = m_2;
  if (md != (uchar *)0x0) {
    puVar2 = md;
  }
  iVar1 = EVP_Q_digest(0,"SHA256",0,d,n,puVar2,0);
  if (iVar1 == 0) {
    puVar2 = (uchar *)0x0;
  }
  return puVar2;
}



uchar * SHA384(uchar *d,size_t n,uchar *md)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = m_1;
  if (md != (uchar *)0x0) {
    puVar2 = md;
  }
  iVar1 = EVP_Q_digest(0,"SHA384",0,d,n,puVar2,0);
  if (iVar1 == 0) {
    puVar2 = (uchar *)0x0;
  }
  return puVar2;
}



uchar * SHA512(uchar *d,size_t n,uchar *md)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = m_0;
  if (md != (uchar *)0x0) {
    puVar2 = md;
  }
  iVar1 = EVP_Q_digest(0,"SHA512",0,d,n,puVar2,0);
  if (iVar1 == 0) {
    puVar2 = (uchar *)0x0;
  }
  return puVar2;
}


