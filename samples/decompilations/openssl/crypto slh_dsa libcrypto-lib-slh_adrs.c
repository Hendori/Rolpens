
void slh_adrsc_set_layer_address(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



void slh_adrs_copy_keypair_address(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  return;
}



void slh_adrs_copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  return;
}



void slh_adrsc_copy_keypair_address(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  return;
}



void slh_adrsc_copy(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined8 *)((long)param_1 + 0xe) = *(undefined8 *)((long)param_2 + 0xe);
  return;
}



void slh_adrs_zero(undefined1 (*param_1) [16])

{
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  return;
}



void slh_adrsc_set_type_and_clear(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 9) = param_2;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return;
}



void slh_adrsc_zero(undefined1 (*param_1) [16])

{
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)(*param_1 + 0xe) = 0;
  return;
}



void slh_adrs_set_tree_address(long param_1,ulong param_2)

{
  *(ulong *)(param_1 + 8) =
       param_2 >> 0x38 | (param_2 & 0xff000000000000) >> 0x28 | (param_2 & 0xff0000000000) >> 0x18 |
       (param_2 & 0xff00000000) >> 8 | (param_2 & 0xff000000) << 8 | (param_2 & 0xff0000) << 0x18 |
       (param_2 & 0xff00) << 0x28 | param_2 << 0x38;
  return;
}



void slh_adrs_set_type_and_clear(long param_1,uint param_2)

{
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x10) =
       param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



void slh_adrsc_set_tree_address(long param_1,ulong param_2)

{
  *(ulong *)(param_1 + 1) =
       param_2 >> 0x38 | (param_2 & 0xff000000000000) >> 0x28 | (param_2 & 0xff0000000000) >> 0x18 |
       (param_2 & 0xff00000000) >> 8 | (param_2 & 0xff000000) << 8 | (param_2 & 0xff0000) << 0x18 |
       (param_2 & 0xff00) << 0x28 | param_2 << 0x38;
  return;
}



void slh_adrs_set_layer_address(uint *param_1,uint param_2)

{
  *param_1 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18
  ;
  return;
}



void slh_adrsc_set_keypair_address(long param_1,uint param_2)

{
  *(uint *)(param_1 + 10) =
       param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
  return;
}



void slh_adrsc_set_chain_address(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0xe) =
       param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
  return;
}



void slh_adrsc_set_hash_address(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x12) =
       param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
  return;
}



void slh_adrs_set_keypair_address(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) =
       param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
  return;
}



void slh_adrs_set_chain_address(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x18) =
       param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
  return;
}



void slh_adrs_set_hash_address(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x1c) =
       param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
  return;
}



int ossl_slh_get_adrs_fn(int param_1)

{
  return (-(uint)(param_1 != 0) & 0x58) + 0x1001a0;
}


