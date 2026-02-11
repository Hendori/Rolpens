
void engine_unregister_all_RSA(void)

{
  engine_table_cleanup(&rsa_table);
  return;
}



void ENGINE_unregister_RSA(ENGINE *e)

{
  engine_table_unregister(&rsa_table,e);
  return;
}



int ENGINE_register_RSA(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x10) == 0) {
    return 1;
  }
  iVar1 = engine_table_register(&rsa_table,0x100000,e,&dummy_nid,1,0);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_register_all_RSA(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    ENGINE_register_RSA(e);
  }
  return;
}



int ENGINE_set_default_RSA(ENGINE *e)

{
  int iVar1;
  
  if (*(long *)(e + 0x10) == 0) {
    return 1;
  }
  iVar1 = engine_table_register(&rsa_table,0x100000,e,&dummy_nid,1,1);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_get_default_RSA(void)

{
  ENGINE *pEVar1;
  
  pEVar1 = (ENGINE *)ossl_engine_table_select(&rsa_table,1,"crypto/engine/tb_rsa.c",0x3e);
  return pEVar1;
}



RSA_METHOD * ENGINE_get_RSA(ENGINE *e)

{
  return *(RSA_METHOD **)(e + 0x10);
}



int ENGINE_set_RSA(ENGINE *e,RSA_METHOD *rsa_meth)

{
  *(RSA_METHOD **)(e + 0x10) = rsa_meth;
  return 1;
}


