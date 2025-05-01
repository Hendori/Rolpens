
undefined8 EVP_PKEY_CTX_set_dsa_paramgen_type(byte *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (byte *)0x0) || ((*param_1 & 6) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/dsa_ctrl.c",0x14,"dsa_paramgen_check");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if ((*(int **)(param_1 + 0x78) == (int *)0x0) || (**(int **)(param_1 + 0x78) == 0x74)) {
    OSSL_PARAM_construct_utf8_string(&local_a8,&_LC1,param_2,0);
    local_58 = local_88;
    local_78 = local_a8;
    uStack_70 = uStack_a0;
    local_68 = local_98;
    uStack_60 = uStack_90;
    OSSL_PARAM_construct_end(&local_a8);
    local_50 = local_a8;
    uStack_48 = uStack_a0;
    local_30 = local_88;
    local_40 = local_98;
    uStack_38 = uStack_90;
    uVar1 = EVP_PKEY_CTX_set_params(param_1,&local_78);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKEY_CTX_set_dsa_paramgen_gindex(byte *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = param_2;
  if ((param_1 == (byte *)0x0) || ((*param_1 & 6) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/dsa_ctrl.c",0x14,"dsa_paramgen_check");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if ((*(int **)(param_1 + 0x78) == (int *)0x0) || (**(int **)(param_1 + 0x78) == 0x74)) {
    OSSL_PARAM_construct_int(&local_b8,"gindex",&local_7c);
    local_58 = local_98;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    OSSL_PARAM_construct_end(&local_b8);
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    local_30 = local_98;
    local_40 = local_a8;
    uStack_38 = uStack_a0;
    uVar1 = EVP_PKEY_CTX_set_params(param_1,&local_78);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKEY_CTX_set_dsa_paramgen_seed(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (byte *)0x0) || ((*param_1 & 6) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/dsa_ctrl.c",0x14,"dsa_paramgen_check");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if ((*(int **)(param_1 + 0x78) == (int *)0x0) || (**(int **)(param_1 + 0x78) == 0x74)) {
    OSSL_PARAM_construct_octet_string(&local_a8,&_LC3,param_2,param_3);
    local_58 = local_88;
    local_78 = local_a8;
    uStack_70 = uStack_a0;
    local_68 = local_98;
    uStack_60 = uStack_90;
    OSSL_PARAM_construct_end(&local_a8);
    local_50 = local_a8;
    uStack_48 = uStack_a0;
    local_30 = local_88;
    local_40 = local_98;
    uStack_38 = uStack_90;
    uVar1 = EVP_PKEY_CTX_set_params(param_1,&local_78);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKEY_CTX_set_dsa_paramgen_bits(byte *param_1,int param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_80 = (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (byte *)0x0) || ((*param_1 & 6) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/dsa_ctrl.c",0x14,"dsa_paramgen_check");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if ((*(int **)(param_1 + 0x78) == (int *)0x0) || (**(int **)(param_1 + 0x78) == 0x74)) {
    OSSL_PARAM_construct_size_t(&local_b8,"pbits",&local_80);
    local_58 = local_98;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    OSSL_PARAM_construct_end(&local_b8);
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    local_30 = local_98;
    local_40 = local_a8;
    uStack_38 = uStack_a0;
    uVar1 = EVP_PKEY_CTX_set_params(param_1,&local_78);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKEY_CTX_set_dsa_paramgen_q_bits(byte *param_1,int param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_20;
  
  local_80 = (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (byte *)0x0) || ((*param_1 & 6) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/dsa_ctrl.c",0x14,"dsa_paramgen_check");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if ((*(int **)(param_1 + 0x78) == (int *)0x0) || (**(int **)(param_1 + 0x78) == 0x74)) {
    OSSL_PARAM_construct_size_t(&local_b8,"qbits",&local_80);
    local_58 = local_98;
    local_78 = local_b8;
    uStack_70 = uStack_b0;
    local_68 = local_a8;
    uStack_60 = uStack_a0;
    OSSL_PARAM_construct_end(&local_b8);
    local_50 = local_b8;
    uStack_48 = uStack_b0;
    local_30 = local_98;
    local_40 = local_a8;
    uStack_38 = uStack_a0;
    uVar1 = EVP_PKEY_CTX_set_params(param_1,&local_78);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKEY_CTX_set_dsa_paramgen_md_props(byte *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58 [5];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (byte *)0x0) || ((*param_1 & 6) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/dsa_ctrl.c",0x14,"dsa_paramgen_check");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if ((*(int **)(param_1 + 0x78) == (int *)0x0) || (**(int **)(param_1 + 0x78) == 0x74)) {
    puVar2 = &local_80;
    OSSL_PARAM_construct_utf8_string(&local_d8,"digest",param_2,0);
    local_a8 = local_d8;
    uStack_a0 = uStack_d0;
    local_88 = local_b8;
    local_98 = local_c8;
    uStack_90 = uStack_c0;
    if (param_3 != 0) {
      OSSL_PARAM_construct_utf8_string(&local_d8,"properties",param_3,0);
      puVar2 = local_58;
      local_60 = local_b8;
      local_80 = local_d8;
      uStack_78 = uStack_d0;
      local_70 = local_c8;
      uStack_68 = uStack_c0;
    }
    OSSL_PARAM_construct_end(&local_d8);
    *puVar2 = local_d8;
    puVar2[1] = uStack_d0;
    puVar2[2] = local_c8;
    puVar2[3] = uStack_c0;
    puVar2[4] = local_b8;
    uVar1 = EVP_PKEY_CTX_set_params(param_1,&local_a8);
  }
  else {
    uVar1 = 0xffffffff;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void EVP_PKEY_CTX_set_dsa_paramgen_md(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x74,2,0x1003,0,param_2);
  return;
}


