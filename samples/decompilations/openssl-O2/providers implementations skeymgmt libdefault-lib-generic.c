
void generic_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x10));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * generic_import(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar2 = ossl_prov_ctx_get0_libctx();
  iVar1 = ossl_prov_is_running();
  if ((((iVar1 != 0) && ((param_2 & 2) != 0)) &&
      (lVar3 = OSSL_PARAM_locate_const(param_3,"raw-bytes"), lVar3 != 0)) &&
     (puVar4 = (undefined8 *)CRYPTO_zalloc(0x20,"providers/implementations/skeymgmt/generic.c",0x2f)
     , puVar4 != (undefined8 *)0x0)) {
    *puVar4 = uVar2;
    uVar2 = *(undefined8 *)(lVar3 + 0x18);
    *(undefined4 *)(puVar4 + 1) = 1;
    lVar5 = CRYPTO_memdup(*(undefined8 *)(lVar3 + 0x10),uVar2,
                          "providers/implementations/skeymgmt/generic.c",0x37);
    puVar4[2] = lVar5;
    if (lVar5 != 0) {
      puVar4[3] = *(undefined8 *)(lVar3 + 0x18);
      return puVar4;
    }
    generic_free(puVar4);
  }
  return (undefined8 *)0x0;
}



ulong generic_export(long param_1,uint param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if ((iVar1 == 0) || (param_1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)(param_2 & 2);
    if ((param_2 & 2) != 0) {
      OSSL_PARAM_construct_octet_string
                (&local_b8,"raw-bytes",*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
      local_68 = local_98;
      local_88 = local_b8;
      uStack_80 = uStack_b0;
      local_78 = local_a8;
      uStack_70 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_60 = local_b8;
      uStack_58 = uStack_b0;
      local_40 = local_98;
      local_50 = local_a8;
      uStack_48 = uStack_a0;
      uVar2 = (*param_3)(&local_88,param_4);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


