
undefined8 EVP_PKEY_CTX_set_dh_paramgen_gindex(byte *param_1,undefined4 param_2)

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
    ERR_set_debug("crypto/evp/dh_ctrl.c",0x16,"dh_paramgen_check");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if (((*(long *)(param_1 + 0x20) == 0) && (**(int **)(param_1 + 0x78) != 0x1c)) &&
          (**(int **)(param_1 + 0x78) != 0x398)) {
    uVar1 = 0xffffffff;
  }
  else {
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
    uVar1 = evp_pkey_ctx_set_params_strict(param_1,&local_78);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKEY_CTX_set_dh_paramgen_seed(byte *param_1,undefined8 param_2,undefined8 param_3)

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
    ERR_set_debug("crypto/evp/dh_ctrl.c",0x16,"dh_paramgen_check");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if (((*(long *)(param_1 + 0x20) == 0) && (**(int **)(param_1 + 0x78) != 0x1c)) &&
          (**(int **)(param_1 + 0x78) != 0x398)) {
    uVar1 = 0xffffffff;
  }
  else {
    OSSL_PARAM_construct_octet_string(&local_a8,&_LC2,param_2,param_3);
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
    uVar1 = evp_pkey_ctx_set_params_strict(param_1,&local_78);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void EVP_PKEY_CTX_set_dh_paramgen_type(EVP_PKEY_CTX *param_1,int param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x1c,2,0x1005,param_2,(void *)0x0);
  return;
}



undefined8 EVP_PKEY_CTX_set_dh_paramgen_prime_len(byte *param_1,int param_2)

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
    ERR_set_debug("crypto/evp/dh_ctrl.c",0x16,"dh_paramgen_check");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if (((*(long *)(param_1 + 0x20) == 0) && (**(int **)(param_1 + 0x78) != 0x1c)) &&
          (**(int **)(param_1 + 0x78) != 0x398)) {
    uVar1 = 0xffffffff;
  }
  else {
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
    uVar1 = evp_pkey_ctx_set_params_strict(param_1,&local_78);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKEY_CTX_set_dh_paramgen_subprime_len(byte *param_1,int param_2)

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
    ERR_set_debug("crypto/evp/dh_ctrl.c",0x16,"dh_paramgen_check");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if (((*(long *)(param_1 + 0x20) == 0) && (**(int **)(param_1 + 0x78) != 0x1c)) &&
          (**(int **)(param_1 + 0x78) != 0x398)) {
    uVar1 = 0xffffffff;
  }
  else {
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
    uVar1 = evp_pkey_ctx_set_params_strict(param_1,&local_78);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKEY_CTX_set_dh_paramgen_generator(byte *param_1,undefined4 param_2)

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
    ERR_set_debug("crypto/evp/dh_ctrl.c",0x16,"dh_paramgen_check");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else if (((*(long *)(param_1 + 0x20) == 0) && (**(int **)(param_1 + 0x78) != 0x1c)) &&
          (**(int **)(param_1 + 0x78) != 0x398)) {
    uVar1 = 0xffffffff;
  }
  else {
    OSSL_PARAM_construct_int(&local_b8,"safeprime-generator",&local_7c);
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
    uVar1 = evp_pkey_ctx_set_params_strict(param_1,&local_78);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void EVP_PKEY_CTX_set_dh_rfc5114(EVP_PKEY_CTX *param_1,int param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x398,2,0x1003,param_2,(void *)0x0);
  return;
}



void EVP_PKEY_CTX_set_dhx_rfc5114(void)

{
  EVP_PKEY_CTX_set_dh_rfc5114();
  return;
}



void EVP_PKEY_CTX_set_dh_nid(EVP_PKEY_CTX *param_1,int param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x1c,6,0x100f,param_2,(void *)0x0);
  return;
}



undefined8 EVP_PKEY_CTX_set_dh_pad(uint *param_1,undefined4 param_2)

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
  if ((param_1 == (uint *)0x0) || ((*param_1 & 0x800) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/dh_ctrl.c",0xa6,"EVP_PKEY_CTX_set_dh_pad");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else {
    OSSL_PARAM_construct_uint(&local_b8,&_LC6,&local_7c);
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
    uVar1 = evp_pkey_ctx_set_params_strict(param_1,&local_78);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void EVP_PKEY_CTX_set_dh_kdf_type(EVP_PKEY_CTX *param_1,int param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x398,0x800,0x1006,param_2,(void *)0x0);
  return;
}



void EVP_PKEY_CTX_get_dh_kdf_type(EVP_PKEY_CTX *param_1)

{
  EVP_PKEY_CTX_ctrl(param_1,0x398,0x800,0x1006,-2,(void *)0x0);
  return;
}



void EVP_PKEY_CTX_set0_dh_kdf_oid(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x398,0x800,0x100d,0,param_2);
  return;
}



void EVP_PKEY_CTX_get0_dh_kdf_oid(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x398,0x800,0x100e,0,param_2);
  return;
}



void EVP_PKEY_CTX_set_dh_kdf_md(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x398,0x800,0x1007,0,param_2);
  return;
}



void EVP_PKEY_CTX_get_dh_kdf_md(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x398,0x800,0x1008,0,param_2);
  return;
}



int EVP_PKEY_CTX_set_dh_kdf_outlen(uint *param_1,int param_2)

{
  int iVar1;
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
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (long)param_2;
  if ((param_1 == (uint *)0x0) || ((*param_1 & 0x800) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/dh_ctrl.c",0x25,"dh_param_derive_check");
    ERR_set_error(6,0x93,0);
  }
  else {
    if (((*(long *)(param_1 + 8) == 0) && (**(int **)(param_1 + 0x1e) != 0x1c)) &&
       (**(int **)(param_1 + 0x1e) != 0x398)) {
      iVar1 = -1;
      goto LAB_00100957;
    }
    if (0 < param_2) {
      OSSL_PARAM_construct_size_t(&local_b8,"kdf-outlen",&local_80);
      local_58 = local_98;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_68 = local_a8;
      uStack_60 = uStack_a0;
      OSSL_PARAM_construct_end(&local_b8);
      local_30 = local_98;
      local_50 = local_b8;
      uStack_48 = uStack_b0;
      local_40 = local_a8;
      uStack_38 = uStack_a0;
      iVar1 = evp_pkey_ctx_set_params_strict(param_1,&local_78);
      if (iVar1 == -2) {
        ERR_new();
        ERR_set_debug("crypto/evp/dh_ctrl.c",0x105,"EVP_PKEY_CTX_set_dh_kdf_outlen");
        ERR_set_error(6,0x93,0);
      }
      goto LAB_00100957;
    }
  }
  iVar1 = -2;
LAB_00100957:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKEY_CTX_get_dh_kdf_outlen(uint *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong local_80;
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
  local_80 = 0xffffffff;
  if ((param_1 == (uint *)0x0) || ((*param_1 & 0x800) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/dh_ctrl.c",0x25,"dh_param_derive_check");
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else {
    if (((*(long *)(param_1 + 8) != 0) || (**(int **)(param_1 + 0x1e) == 0x1c)) ||
       (**(int **)(param_1 + 0x1e) == 0x398)) {
      OSSL_PARAM_construct_size_t(&local_b8,"kdf-outlen",&local_80);
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
      uVar1 = evp_pkey_ctx_get_params_strict(param_1,&local_78);
      if ((int)uVar1 == -2) {
        ERR_new();
        ERR_set_debug("crypto/evp/dh_ctrl.c",0x119,"EVP_PKEY_CTX_get_dh_kdf_outlen");
        ERR_set_error(6,0x93,0);
      }
      else if (((int)uVar1 == 1) && (local_80 < 0x80000000)) {
        *param_2 = (int)local_80;
        goto LAB_00100afc;
      }
    }
    uVar1 = 0xffffffff;
  }
LAB_00100afc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



ulong EVP_PKEY_CTX_set0_dh_kdf_ukm(uint *param_1,void *param_2,int param_3)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
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
  if (param_3 < 0) {
LAB_00100cca:
    uVar1 = 0xffffffff;
  }
  else {
    if ((param_1 == (uint *)0x0) || ((*param_1 & 0x800) == 0)) {
      ERR_new();
      pcVar2 = "dh_param_derive_check";
      uVar3 = 0x25;
    }
    else {
      if (((*(long *)(param_1 + 8) == 0) && (**(int **)(param_1 + 0x1e) != 0x1c)) &&
         (**(int **)(param_1 + 0x1e) != 0x398)) goto LAB_00100cca;
      OSSL_PARAM_construct_octet_string(&local_a8,"kdf-ukm",param_2,(long)param_3);
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
      uVar1 = evp_pkey_ctx_set_params_strict(param_1,&local_78);
      if ((int)uVar1 != -2) {
        if ((int)uVar1 == 1) {
          CRYPTO_free(param_2);
          uVar1 = uVar1 & 0xffffffff;
        }
        goto LAB_00100c8c;
      }
      ERR_new();
      pcVar2 = "EVP_PKEY_CTX_set0_dh_kdf_ukm";
      uVar3 = 0x139;
    }
    ERR_set_debug("crypto/evp/dh_ctrl.c",uVar3,pcVar2);
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
LAB_00100c8c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong EVP_PKEY_CTX_get0_dh_kdf_ukm(uint *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulong local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (uint *)0x0) || ((*param_1 & 0x800) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/dh_ctrl.c",0x25,"dh_param_derive_check");
    ERR_set_error(6,0x93,0);
    uVar2 = 0xfffffffe;
  }
  else {
    if (((*(long *)(param_1 + 8) != 0) || (**(int **)(param_1 + 0x1e) == 0x1c)) ||
       (**(int **)(param_1 + 0x1e) == 0x398)) {
      OSSL_PARAM_construct_octet_ptr(&local_a8,"kdf-ukm",param_2,0);
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
      iVar1 = evp_pkey_ctx_get_params_strict(param_1,&local_78);
      if (iVar1 == -2) {
        ERR_new();
        ERR_set_debug("crypto/evp/dh_ctrl.c",0x150,"EVP_PKEY_CTX_get0_dh_kdf_ukm");
        ERR_set_error(6,0x93,0);
      }
      else if ((iVar1 == 1) && (uVar2 = local_58, local_58 < 0x80000000)) goto LAB_00100e28;
    }
    uVar2 = 0xffffffff;
  }
LAB_00100e28:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


