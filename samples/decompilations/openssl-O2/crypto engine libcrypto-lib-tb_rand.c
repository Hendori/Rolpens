
void engine_unregister_all_RAND(void)

{
  engine_table_cleanup(&rand_table);
  return;
}



void ENGINE_unregister_RAND(ENGINE *e)

{
  engine_table_unregister(&rand_table,e);
  return;
}



int ENGINE_register_RAND(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x30) == 0) {
    return 1;
  }
  iVar1 = engine_table_register(&rand_table,0x100000,e,&dummy_nid,1,0);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_RAND(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    ENGINE_register_RAND(e);
  }
  return;
}



int ENGINE_set_default_RAND(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x30) == 0) {
    return 1;
  }
  iVar1 = engine_table_register(&rand_table,0x100000,e,&dummy_nid,1,1);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_get_default_RAND(void)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)ossl_engine_table_select(&rand_table,1,"crypto/engine/tb_rand.c",0x3e);
  return pEVar1;
}



RAND_METHOD * ENGINE_get_RAND(ENGINE *e)

{
  return *(RAND_METHOD **)(e + 0x30);
}



int ENGINE_set_RAND(ENGINE *e,RAND_METHOD *rand_meth)

{
  *(RAND_METHOD **)(e + 0x30) = rand_meth;
  return 1;
}


