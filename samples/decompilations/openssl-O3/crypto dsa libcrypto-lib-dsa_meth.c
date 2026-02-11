
undefined8 * DSA_meth_new(char *param_1,undefined4 param_2)

{
  undefined8 *ptr;
  char *pcVar1;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x60,"crypto/dsa/dsa_meth.c",0x17);
  if (ptr != (undefined8 *)0x0) {
    *(undefined4 *)(ptr + 8) = param_2;
    pcVar1 = CRYPTO_strdup(param_1,"crypto/dsa/dsa_meth.c",0x1c);
    *ptr = pcVar1;
    if (pcVar1 != (char *)0x0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void DSA_meth_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    CRYPTO_free((void *)*param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 * DSA_meth_dup(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *ptr;
  char *pcVar12;
  
  ptr = (undefined8 *)CRYPTO_malloc(0x60,"crypto/dsa/dsa_meth.c",0x30);
  if (ptr != (undefined8 *)0x0) {
    uVar1 = param_1[1];
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    uVar4 = param_1[4];
    uVar5 = param_1[5];
    uVar6 = param_1[6];
    uVar7 = param_1[7];
    uVar8 = param_1[8];
    uVar9 = param_1[9];
    uVar10 = param_1[10];
    uVar11 = param_1[0xb];
    *ptr = *param_1;
    ptr[1] = uVar1;
    pcVar12 = (char *)*param_1;
    ptr[2] = uVar2;
    ptr[3] = uVar3;
    ptr[4] = uVar4;
    ptr[5] = uVar5;
    ptr[6] = uVar6;
    ptr[7] = uVar7;
    ptr[8] = uVar8;
    ptr[9] = uVar9;
    ptr[10] = uVar10;
    ptr[0xb] = uVar11;
    pcVar12 = CRYPTO_strdup(pcVar12,"crypto/dsa/dsa_meth.c",0x35);
    *ptr = pcVar12;
    if (pcVar12 != (char *)0x0) {
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



undefined8 DSA_meth_get0_name(undefined8 *param_1)

{
  return *param_1;
}



bool DSA_meth_set1_name(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = CRYPTO_strdup(param_2,"crypto/dsa/dsa_meth.c",0x46);
  if (pcVar1 != (char *)0x0) {
    CRYPTO_free((void *)*param_1);
    *param_1 = pcVar1;
  }
  return pcVar1 != (char *)0x0;
}



undefined4 DSA_meth_get_flags(long param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



undefined8 DSA_meth_set_flags(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return 1;
}



undefined8 DSA_meth_get0_app_data(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



undefined8 DSA_meth_set0_app_data(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return 1;
}



undefined8 DSA_meth_get_sign(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



undefined8 DSA_meth_set_sign(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return 1;
}



undefined8 DSA_meth_get_sign_setup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



undefined8 DSA_meth_set_sign_setup(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}



undefined8 DSA_meth_get_verify(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



undefined8 DSA_meth_set_verify(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}



undefined8 DSA_meth_get_mod_exp(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



undefined8 DSA_meth_set_mod_exp(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}



undefined8 DSA_meth_get_bn_mod_exp(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



undefined8 DSA_meth_set_bn_mod_exp(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}



undefined8 DSA_meth_get_init(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



undefined8 DSA_meth_set_init(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return 1;
}



undefined8 DSA_meth_get_finish(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



undefined8 DSA_meth_set_finish(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return 1;
}



undefined8 DSA_meth_get_paramgen(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



undefined8 DSA_meth_set_paramgen(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return 1;
}



undefined8 DSA_meth_get_keygen(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



undefined8 DSA_meth_set_keygen(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  return 1;
}


