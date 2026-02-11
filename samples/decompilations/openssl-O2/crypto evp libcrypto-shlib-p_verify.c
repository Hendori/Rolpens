
int EVP_VerifyFinal_ex(EVP_MD_CTX *param_1,uchar *param_2,uint param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar3;
  EVP_MD_CTX *out;
  long in_FS_OFFSET;
  int local_9c;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  iVar1 = EVP_MD_CTX_test_flags(param_1,0x200);
  if (iVar1 == 0) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    iVar1 = 0;
    if (out == (EVP_MD_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/p_verify.c",0x22,"EVP_VerifyFinal_ex");
      ERR_set_error(6,0x80006,0);
      goto LAB_001000df;
    }
    iVar2 = EVP_MD_CTX_copy_ex(out,param_1);
    if (iVar2 == 0) {
      local_9c = EVP_DigestFinal_ex(param_1,local_88,&local_8c);
    }
    else {
      local_9c = EVP_DigestFinal_ex(out,local_88,&local_8c);
    }
    EVP_MD_CTX_free(out);
    if (local_9c == 0) goto LAB_001000df;
LAB_00100074:
    iVar1 = -1;
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(param_5,param_4,param_6);
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      iVar1 = EVP_PKEY_verify_init(ctx);
      if (0 < iVar1) {
        uVar3 = EVP_MD_CTX_get0_md(param_1);
        iVar1 = EVP_PKEY_CTX_set_signature_md(ctx,uVar3);
        if (0 < iVar1) {
          iVar1 = EVP_PKEY_verify(ctx,param_2,(ulong)param_3,local_88,(ulong)local_8c);
          goto LAB_001000d7;
        }
      }
      iVar1 = -1;
    }
  }
  else {
    ctx = (EVP_PKEY_CTX *)0x0;
    iVar1 = EVP_DigestFinal_ex(param_1,local_88,&local_8c);
    if (iVar1 != 0) goto LAB_00100074;
  }
LAB_001000d7:
  EVP_PKEY_CTX_free(ctx);
LAB_001000df:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int EVP_VerifyFinal(EVP_MD_CTX *ctx,uchar *sigbuf,uint siglen,EVP_PKEY *pkey)

{
  int iVar1;
  
  iVar1 = EVP_VerifyFinal_ex();
  return iVar1;
}


