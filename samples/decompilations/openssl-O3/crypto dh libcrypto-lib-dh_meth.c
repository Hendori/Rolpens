
undefined8 * DH_meth_new(char *param_1,undefined4 param_2)

{
  undefined8 *ptr;
  char *pcVar1;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x48,"crypto/dh/dh_meth.c",0x16);
  if (ptr != (undefined8 *)0x0) {
    *(undefined4 *)(ptr + 6) = param_2;
    pcVar1 = CRYPTO_strdup(param_1,"crypto/dh/dh_meth.c",0x1b);
    *ptr = pcVar1;
    if (pcVar1 != (char *)0x0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void DH_meth_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free((void *)*param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * DH_meth_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *ptr;
  char *pcVar8;
  
  ptr = (undefined8 *)CRYPTO_malloc(0x48,"crypto/dh/dh_meth.c",0x2f);
  if (ptr != (undefined8 *)0x0) {
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    uVar4 = param_1[4];
    uVar5 = param_1[5];
    uVar6 = param_1[6];
    uVar7 = param_1[7];
    *ptr = *param_1;
    ptr[1] = uVar1;
    pcVar8 = (char *)*param_1;
    ptr[2] = uVar2;
    ptr[3] = uVar3;
    ptr[4] = uVar4;
    ptr[5] = uVar5;
    ptr[6] = uVar6;
    ptr[7] = uVar7;
    ptr[8] = param_1[8];
    pcVar8 = CRYPTO_strdup(pcVar8,"crypto/dh/dh_meth.c",0x34);
    *ptr = pcVar8;
    if (pcVar8 != (char *)0x0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



undefined8 DH_meth_get0_name(undefined8 *param_1)

{
  return *param_1;
}



bool DH_meth_set1_name(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = CRYPTO_strdup(param_2,"crypto/dh/dh_meth.c",0x45);
  if (pcVar1 != (char *)0x0) {
    CRYPTO_free((void *)*param_1);
    *param_1 = pcVar1;
  }
  return pcVar1 != (char *)0x0;
}



undefined4 DH_meth_get_flags(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



undefined8 DH_meth_set_flags(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return 1;
}



undefined8 DH_meth_get0_app_data(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



undefined8 DH_meth_set0_app_data(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return 1;
}



undefined8 DH_meth_get_generate_key(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 DH_meth_set_generate_key(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}



undefined8 DH_meth_get_compute_key(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 DH_meth_set_compute_key(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}



undefined8 DH_meth_get_bn_mod_exp(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 DH_meth_set_bn_mod_exp(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}



undefined8 DH_meth_get_init(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



undefined8 DH_meth_set_init(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}



undefined8 DH_meth_get_finish(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



undefined8 DH_meth_set_finish(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}



undefined8 DH_meth_get_generate_params(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



undefined8 DH_meth_set_generate_params(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}


