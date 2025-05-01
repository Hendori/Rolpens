
void engine_unregister_all_digests(void)

{
  engine_table_cleanup(&digest_table);
  return;
}



void ENGINE_unregister_digests(ENGINE *e)

{
  engine_table_unregister(&digest_table,e);
  return;
}



int ENGINE_register_digests(ENGINE *e)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(e + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(e + 0x40))(e,0,&local_18,0);
    if (0 < iVar1) {
      iVar1 = engine_table_register(&digest_table,0x100000,e,local_18,iVar1,0);
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

void ENGINE_register_all_digests(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    ENGINE_register_digests(e);
  }
  return;
}



int ENGINE_set_default_digests(ENGINE *e)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(e + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(e + 0x40))(e,0,&local_18,0);
    if (0 < iVar1) {
      iVar1 = engine_table_register(&digest_table,0x100000,e,local_18,iVar1,1);
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



ENGINE * ENGINE_get_digest_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)ossl_engine_table_select(&digest_table,nid,"crypto/engine/tb_digest.c",0x45);
  return pEVar1;
}



ENGINE_DIGESTS_PTR ENGINE_get_digests(ENGINE *e)

{
  return *(ENGINE_DIGESTS_PTR *)(e + 0x40);
}



EVP_MD * ENGINE_get_digest(ENGINE *e,int nid)

{
  int iVar1;
  ENGINE_DIGESTS_PTR pEVar2;
  long in_FS_OFFSET;
  EVP_MD *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar2 = ENGINE_get_digests(e);
  if ((pEVar2 == (ENGINE_DIGESTS_PTR)0x0) ||
     (iVar1 = (*pEVar2)(e,&local_28,(int **)0x0,nid), iVar1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/engine/tb_digest.c",0x4e,"ENGINE_get_digest");
    ERR_set_error(0x26,0x93,0);
    local_28 = (EVP_MD *)0x0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



int ENGINE_set_digests(ENGINE *e,ENGINE_DIGESTS_PTR f)

{
  *(ENGINE_DIGESTS_PTR *)(e + 0x40) = f;
  return 1;
}


