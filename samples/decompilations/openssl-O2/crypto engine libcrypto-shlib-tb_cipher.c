
void engine_unregister_all_ciphers(void)

{
  engine_table_cleanup(&cipher_table);
  return;
}



void ENGINE_unregister_ciphers(ENGINE *e)

{
  engine_table_unregister(&cipher_table,e);
  return;
}



int ENGINE_register_ciphers(ENGINE *e)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(e + 0x38) != (code *)0x0) {
    iVar1 = (**(code **)(e + 0x38))(e,0,&local_18,0);
    if (0 < iVar1) {
      iVar1 = engine_table_register(&cipher_table,0x100000,e,local_18,iVar1,0);
      goto LAB_00100065;
    }
  }
  iVar1 = 1;
LAB_00100065:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_ciphers(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    ENGINE_register_ciphers(e);
  }
  return;
}



int ENGINE_set_default_ciphers(ENGINE *e)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(e + 0x38) != (code *)0x0) {
    iVar1 = (**(code **)(e + 0x38))(e,0,&local_18,0);
    if (0 < iVar1) {
      iVar1 = engine_table_register(&cipher_table,0x100000,e,local_18,iVar1,1);
      goto LAB_00100125;
    }
  }
  iVar1 = 1;
LAB_00100125:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ENGINE * ENGINE_get_cipher_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)ossl_engine_table_select(&cipher_table,nid,"crypto/engine/tb_cipher.c",0x45);
  return pEVar1;
}



ENGINE_CIPHERS_PTR ENGINE_get_ciphers(ENGINE *e)

{
  return *(ENGINE_CIPHERS_PTR *)(e + 0x38);
}



EVP_CIPHER * ENGINE_get_cipher(ENGINE *e,int nid)

{
  int iVar1;
  ENGINE_CIPHERS_PTR pEVar2;
  long in_FS_OFFSET;
  EVP_CIPHER *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar2 = ENGINE_get_ciphers(e);
  if ((pEVar2 == (ENGINE_CIPHERS_PTR)0x0) ||
     (iVar1 = (*pEVar2)(e,&local_28,(int **)0x0,nid), iVar1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/engine/tb_cipher.c",0x4e,"ENGINE_get_cipher");
    ERR_set_error(0x26,0x92,0);
    local_28 = (EVP_CIPHER *)0x0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



int ENGINE_set_ciphers(ENGINE *e,ENGINE_CIPHERS_PTR f)

{
  *(ENGINE_CIPHERS_PTR *)(e + 0x38) = f;
  return 1;
}


