
int RSA_sign_ASN1_OCTET_STRING(int type,uchar *m,uint m_length,uchar *sigret,uint *siglen,RSA *rsa)

{
  int flen;
  int iVar1;
  uint uVar2;
  uchar *from;
  long in_FS_OFFSET;
  uchar *local_60;
  ASN1_OCTET_STRING local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58.type = 4;
  local_58.length = m_length;
  local_58.data = m;
  flen = i2d_ASN1_OCTET_STRING(&local_58,(uchar **)0x0);
  iVar1 = RSA_size(rsa);
  if (flen < iVar1 + -10) {
    from = (uchar *)CRYPTO_malloc(iVar1 + 1,"crypto/rsa/rsa_saos.c",0x2a);
    if (from != (uchar *)0x0) {
      local_60 = from;
      i2d_ASN1_OCTET_STRING(&local_58,&local_60);
      uVar2 = RSA_private_encrypt(flen,from,sigret,rsa,1);
      if (0 < (int)uVar2) {
        *siglen = uVar2;
      }
      uVar2 = (uint)(0 < (int)uVar2);
      CRYPTO_clear_free(from,iVar1 + 1,"crypto/rsa/rsa_saos.c",0x35);
      goto LAB_001000d8;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/rsa/rsa_saos.c",0x27,"RSA_sign_ASN1_OCTET_STRING");
    ERR_set_error(4,0x70,0);
  }
  uVar2 = 0;
LAB_001000d8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int RSA_verify_ASN1_OCTET_STRING(int type,uchar *m,uint m_length,uchar *sigbuf,uint siglen,RSA *rsa)

{
  uint num;
  int iVar1;
  uchar *to;
  ASN1_OCTET_STRING *a;
  int iVar2;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  num = RSA_size(rsa);
  if (num != siglen) {
    ERR_new();
    iVar2 = 0;
    ERR_set_debug("crypto/rsa/rsa_saos.c",0x44,"RSA_verify_ASN1_OCTET_STRING");
    ERR_set_error(4,0x77,0);
    goto LAB_001001b0;
  }
  to = (uchar *)CRYPTO_malloc(num,"crypto/rsa/rsa_saos.c",0x48);
  if (to == (uchar *)0x0) {
LAB_00100290:
    a = (ASN1_OCTET_STRING *)0x0;
    iVar2 = 0;
  }
  else {
    iVar2 = RSA_public_decrypt(num,sigbuf,to,rsa,1);
    if (iVar2 < 1) goto LAB_00100290;
    local_48 = to;
    a = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_48,(long)iVar2);
    if (a == (ASN1_OCTET_STRING *)0x0) goto LAB_00100290;
    if (a->length == m_length) {
      iVar2 = 1;
      iVar1 = memcmp(m,a->data,(ulong)m_length);
      if (iVar1 != 0) goto LAB_0010025a;
    }
    else {
LAB_0010025a:
      ERR_new();
      iVar2 = 0;
      ERR_set_debug("crypto/rsa/rsa_saos.c",0x57,"RSA_verify_ASN1_OCTET_STRING");
      ERR_set_error(4,0x68,0);
    }
  }
  ASN1_OCTET_STRING_free(a);
  CRYPTO_clear_free(to,num,"crypto/rsa/rsa_saos.c",0x5d);
LAB_001001b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


