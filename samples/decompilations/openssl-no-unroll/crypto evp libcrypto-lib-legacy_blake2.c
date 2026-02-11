
void blake2b_int_final(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_blake2b_final(param_2,uVar1);
  return;
}



void blake2b_int_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_blake2b_update(uVar1,param_2,param_3);
  return;
}



void blake2b_int_init(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_blake2b_param_init(auStack_68);
  ossl_blake2b_init(uVar1,auStack_68);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void blake2s_int_final(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_blake2s_final(param_2,uVar1);
  return;
}



void blake2s_int_update(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_blake2s_update(uVar1,param_2,param_3);
  return;
}



void blake2s_int_init(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = EVP_MD_CTX_get0_md_data();
  ossl_blake2s_param_init(auStack_48);
  ossl_blake2s_init(uVar1,auStack_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * EVP_blake2b512(void)

{
  return blake2b_md;
}



undefined1 * EVP_blake2s256(void)

{
  return blake2s_md;
}


