
void engine_unregister_all_EC(void)

{
  engine_table_cleanup(&dh_table);
  return;
}



void ENGINE_unregister_EC(undefined8 param_1)

{
  engine_table_unregister(&dh_table,param_1);
  return;
}



undefined8 ENGINE_register_EC(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return 1;
  }
  uVar1 = engine_table_register(&dh_table,0x100000,param_1,&dummy_nid,1,0);
  return uVar1;
}



void ENGINE_register_all_EC(void)

{
  ENGINE *e;
  
  for (e = ENGINE_get_first(); e != (ENGINE *)0x0; e = ENGINE_get_next(e)) {
    ENGINE_register_EC(e);
  }
  return;
}



undefined8 ENGINE_set_default_EC(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return 1;
  }
  uVar1 = engine_table_register(&dh_table,0x100000,param_1,&dummy_nid,1,1);
  return uVar1;
}



void ENGINE_get_default_EC(void)

{
  ossl_engine_table_select(&dh_table,1,"crypto/engine/tb_eckey.c",0x3e);
  return;
}



undefined8 ENGINE_get_EC(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



undefined8 ENGINE_set_EC(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}


