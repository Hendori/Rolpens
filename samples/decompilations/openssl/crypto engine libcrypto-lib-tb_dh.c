
void engine_unregister_all_DH(void)

{
  engine_table_cleanup(&dh_table);
  return;
}



void ENGINE_unregister_DH(ENGINE *e)

{
  engine_table_unregister(&dh_table,e);
  return;
}



int ENGINE_register_DH(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x20) == 0) {
    return 1;
  }
  iVar1 = engine_table_register(&dh_table,0x100000,e,&dummy_nid,1,0);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_DH(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    ENGINE_register_DH(e);
  }
  return;
}



int ENGINE_set_default_DH(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x20) == 0) {
    return 1;
  }
  iVar1 = engine_table_register(&dh_table,0x100000,e,&dummy_nid,1,1);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_get_default_DH(void)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)ossl_engine_table_select(&dh_table,1,"crypto/engine/tb_dh.c",0x3e);
  return pEVar1;
}



DH_METHOD * ENGINE_get_DH(ENGINE *e)

{
  return *(DH_METHOD **)(e + 0x20);
}



int ENGINE_set_DH(ENGINE *e,DH_METHOD *dh_meth)

{
  *(DH_METHOD **)(e + 0x20) = dh_meth;
  return 1;
}


