
void EVP_CIPHER_meth_new(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)evp_cipher_new();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[6] = 2;
  }
  return;
}



undefined8 * EVP_CIPHER_meth_dup(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (param_1[0xf] == 0) {
    puVar2 = (undefined8 *)
             EVP_CIPHER_meth_new(*(undefined4 *)param_1,*(undefined4 *)((long)param_1 + 4),
                                 *(undefined4 *)(param_1 + 1));
    if (puVar2 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)(puVar2 + 0x10);
      *puVar2 = *param_1;
      puVar2[0x24] = param_1[0x24];
      lVar3 = (long)puVar2 - (long)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
      puVar5 = (undefined8 *)((long)param_1 - lVar3);
      puVar6 = (undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
      for (uVar4 = (ulong)((int)lVar3 + 0x128U >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
        puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
      }
      *(undefined4 *)(puVar2 + 0x10) = uVar1;
      *(undefined4 *)(puVar2 + 3) = 2;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



void EVP_CIPHER_meth_free(long param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 2)) {
    evp_cipher_free_int();
    return;
  }
  return;
}



bool EVP_CIPHER_meth_set_iv_length(long param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0xc) == 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
  }
  return bVar1;
}



bool EVP_CIPHER_meth_set_flags(long param_1,undefined8 param_2)

{
  bool bVar1;
  
  bVar1 = *(long *)(param_1 + 0x10) == 0;
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
  }
  return bVar1;
}



bool EVP_CIPHER_meth_set_impl_ctx_size(long param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x38) == 0;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x38) = param_2;
  }
  return bVar1;
}



undefined8 EVP_CIPHER_meth_set_init(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}



undefined8 EVP_CIPHER_meth_set_do_cipher(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}



undefined8 EVP_CIPHER_meth_set_cleanup(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return 1;
}



undefined8 EVP_CIPHER_meth_set_set_asn1_params(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return 1;
}



undefined8 EVP_CIPHER_meth_set_get_asn1_params(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return 1;
}



undefined8 EVP_CIPHER_meth_set_ctrl(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return 1;
}



undefined8 EVP_CIPHER_meth_get_init(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



undefined8 EVP_CIPHER_meth_get_do_cipher(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



undefined8 EVP_CIPHER_meth_get_cleanup(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



undefined8 EVP_CIPHER_meth_get_set_asn1_params(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



undefined8 EVP_CIPHER_meth_get_get_asn1_params(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



undefined8 EVP_CIPHER_meth_get_ctrl(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}


