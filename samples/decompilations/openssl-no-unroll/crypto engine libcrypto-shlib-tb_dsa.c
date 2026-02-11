
void engine_unregister_all_DSA(void)

{
  engine_table_cleanup(&dsa_table);
  return;
}



void ENGINE_unregister_DSA(ENGINE *e)

{
  engine_table_unregister(&dsa_table,e);
  return;
}



int ENGINE_register_DSA(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x18) == 0) {
    return 1;
  }
  iVar1 = engine_table_register(&dsa_table,0x100000,e,&dummy_nid,1,0);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_DSA(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    ENGINE_register_DSA(e);
  }
  return;
}



int ENGINE_set_default_DSA(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x18) == 0) {
    return 1;
  }
  iVar1 = engine_table_register(&dsa_table,0x100000,e,&dummy_nid,1,1);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_get_default_DSA(void)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)ossl_engine_table_select(&dsa_table,1,"crypto/engine/tb_dsa.c",0x3e);
  return pEVar1;
}



DSA_METHOD * ENGINE_get_DSA(ENGINE *e)

{
  return *(DSA_METHOD **)(e + 0x18);
}



int ENGINE_set_DSA(ENGINE *e,DSA_METHOD *dsa_meth)

{
  *(DSA_METHOD **)(e + 0x18) = dsa_meth;
  return 1;
}


