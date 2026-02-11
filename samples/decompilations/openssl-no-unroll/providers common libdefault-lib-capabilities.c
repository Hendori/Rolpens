
undefined8
ossl_prov_get_capabilities(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = OPENSSL_strcasecmp(param_2,"TLS-GROUP");
  if (iVar1 == 0) {
    puVar2 = param_group_list;
    do {
      iVar1 = (*param_3)(puVar2,param_4);
      if (iVar1 == 0) {
        return 0;
      }
      puVar2 = puVar2 + 0x1b8;
    } while (puVar2 != (undefined1 *)0x106f08);
  }
  else {
    iVar1 = OPENSSL_strcasecmp(param_2,"TLS-SIGALG");
    if (iVar1 != 0) {
      return 0;
    }
    puVar2 = param_sigalg_list;
    do {
      iVar1 = (*param_3)(puVar2,param_4);
      if (iVar1 == 0) {
        return 0;
      }
      puVar2 = puVar2 + 400;
    } while (puVar2 != &DAT_00100990);
  }
  return 1;
}


