
void engine_unregister_all_pkey_meths(void)

{
  engine_table_cleanup(&pkey_meth_table);
  return;
}



void ENGINE_unregister_pkey_meths(ENGINE *e)

{
  engine_table_unregister(&pkey_meth_table,e);
  return;
}



int ENGINE_register_pkey_meths(ENGINE *e)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(e + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(e + 0x48))(e,0,&local_18,0);
    if (0 < iVar1) {
      iVar1 = engine_table_register(&pkey_meth_table,0x100000,e,local_18,iVar1,0);
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

void ENGINE_register_all_pkey_meths(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    ENGINE_register_pkey_meths(e);
  }
  return;
}



int ENGINE_set_default_pkey_meths(ENGINE *e)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(e + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(e + 0x48))(e,0,&local_18,0);
    if (0 < iVar1) {
      iVar1 = engine_table_register(&pkey_meth_table,0x100000,e,local_18,iVar1,1);
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



ENGINE * ENGINE_get_pkey_meth_engine(int nid)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)ossl_engine_table_select(&pkey_meth_table,nid,"crypto/engine/tb_pkmeth.c",0x46)
  ;
  return pEVar1;
}



ENGINE_PKEY_METHS_PTR ENGINE_get_pkey_meths(ENGINE *e)

{
  return *(ENGINE_PKEY_METHS_PTR *)(e + 0x48);
}



EVP_PKEY_METHOD * ENGINE_get_pkey_meth(ENGINE *e,int nid)

{
  int iVar1;
  ENGINE_PKEY_METHS_PTR pEVar2;
  long in_FS_OFFSET;
  EVP_PKEY_METHOD *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pEVar2 = ENGINE_get_pkey_meths(e);
  if ((pEVar2 == (ENGINE_PKEY_METHS_PTR)0x0) ||
     (iVar1 = (*pEVar2)(e,&local_28,(int **)0x0,nid), iVar1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/engine/tb_pkmeth.c",0x4f,"ENGINE_get_pkey_meth");
    ERR_set_error(0x26,0x65,0);
    local_28 = (EVP_PKEY_METHOD *)0x0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}



int ENGINE_set_pkey_meths(ENGINE *e,ENGINE_PKEY_METHS_PTR f)

{
  *(ENGINE_PKEY_METHS_PTR *)(e + 0x48) = f;
  return 1;
}



void engine_pkey_meths_free(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  EVP_PKEY_METHOD *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(param_1 + 0x48) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x48))(param_1,0,&local_38,0);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        while( true ) {
          iVar2 = (**(code **)(param_1 + 0x48))
                            (param_1,&local_40,0,*(undefined4 *)(local_38 + lVar3));
          if (iVar2 == 0) break;
          lVar3 = lVar3 + 4;
          EVP_PKEY_meth_free(local_40);
          if ((long)iVar1 * 4 - lVar3 == 0) goto LAB_001002d3;
        }
        lVar3 = lVar3 + 4;
      } while ((long)iVar1 * 4 - lVar3 != 0);
    }
  }
LAB_001002d3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


