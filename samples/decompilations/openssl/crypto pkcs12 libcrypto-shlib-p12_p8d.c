
void PKCS8_decrypt_ex(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  X509_SIG_get0(param_1,&local_40,&local_38);
  uVar1 = PKCS8_PRIV_KEY_INFO_it();
  PKCS12_item_decrypt_d2i_ex(local_40,uVar1,param_2,param_3,local_38,1,param_4);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



PKCS8_PRIV_KEY_INFO * PKCS8_decrypt(X509_SIG *p8,char *pass,int passlen)

{
  PKCS8_PRIV_KEY_INFO *pPVar1;
  
  pPVar1 = (PKCS8_PRIV_KEY_INFO *)PKCS8_decrypt_ex();
  return pPVar1;
}


