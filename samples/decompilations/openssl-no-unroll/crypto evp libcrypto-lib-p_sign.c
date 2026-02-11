
undefined8
EVP_SignFinal_ex(EVP_MD_CTX *param_1,uchar *param_2,undefined4 *param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  undefined8 uVar2;
  EVP_MD_CTX *out;
  long in_FS_OFFSET;
  int local_9c;
  uint local_94;
  size_t local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_94 = 0;
  iVar1 = EVP_MD_CTX_test_flags(param_1,0x200);
  if (iVar1 == 0) {
    uVar2 = 0;
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (out == (EVP_MD_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/evp/p_sign.c",0x24,"EVP_SignFinal_ex");
      ERR_set_error(6,0x80006,0);
      goto LAB_0010010d;
    }
    iVar1 = EVP_MD_CTX_copy_ex(out,param_1);
    if (iVar1 == 0) {
      local_9c = EVP_DigestFinal_ex(param_1,local_88,&local_94);
    }
    else {
      local_9c = EVP_DigestFinal_ex(out,local_88,&local_94);
    }
    EVP_MD_CTX_free(out);
    if (local_9c == 0) goto LAB_0010010d;
LAB_00100079:
    iVar1 = EVP_PKEY_get_size(param_4);
    local_90 = (size_t)iVar1;
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(param_5,param_4,param_6);
    if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_00100100;
    iVar1 = EVP_PKEY_sign_init(ctx);
    if (iVar1 < 1) {
LAB_001001a0:
      uVar2 = 0;
    }
    else {
      uVar2 = EVP_MD_CTX_get0_md(param_1);
      iVar1 = EVP_PKEY_CTX_set_signature_md(ctx,uVar2);
      if ((iVar1 < 1) ||
         (iVar1 = EVP_PKEY_sign(ctx,param_2,&local_90,local_88,(ulong)local_94), iVar1 < 1))
      goto LAB_001001a0;
      uVar2 = 1;
      *param_3 = (int)local_90;
    }
  }
  else {
    iVar1 = EVP_DigestFinal_ex(param_1,local_88,&local_94);
    if (iVar1 != 0) goto LAB_00100079;
LAB_00100100:
    ctx = (EVP_PKEY_CTX *)0x0;
    uVar2 = 0;
  }
  EVP_PKEY_CTX_free(ctx);
LAB_0010010d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int EVP_SignFinal(EVP_MD_CTX *ctx,uchar *md,uint *s,EVP_PKEY *pkey)

{
  int iVar1;
  
  iVar1 = EVP_SignFinal_ex();
  return iVar1;
}


