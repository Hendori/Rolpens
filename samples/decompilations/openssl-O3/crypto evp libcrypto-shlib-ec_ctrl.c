
int EVP_PKEY_CTX_set_ecdh_cofactor_mode(uint *param_1,int param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_7c;
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
    ERR_set_debug("crypto/evp/ec_ctrl.c",0x1b,"evp_pkey_ctx_getset_ecdh_param_checks");
    ERR_set_error(6,0x93,0);
  }
  else {
    if (((*(long *)(param_1 + 8) == 0) && (*(int **)(param_1 + 0x1e) != (int *)0x0)) &&
       (**(int **)(param_1 + 0x1e) != 0x198)) {
      iVar1 = -1;
      goto LAB_001000cb;
    }
    if (param_2 + 1U < 3) {
      OSSL_PARAM_construct_int(&local_b8,"ecdh-cofactor-mode",&local_7c);
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
        ERR_set_debug("crypto/evp/ec_ctrl.c",0x42,"EVP_PKEY_CTX_set_ecdh_cofactor_mode");
        ERR_set_error(6,0x93,0);
      }
      goto LAB_001000cb;
    }
  }
  iVar1 = -2;
LAB_001000cb:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint EVP_PKEY_CTX_get_ecdh_cofactor_mode(uint *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_7c;
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
  if ((param_1 == (uint *)0x0) || ((*param_1 & 0x800) == 0)) {
    ERR_new();
    pcVar2 = "evp_pkey_ctx_getset_ecdh_param_checks";
    uVar3 = 0x1b;
LAB_001002b1:
    ERR_set_debug("crypto/evp/ec_ctrl.c",uVar3,pcVar2);
    ERR_set_error(6,0x93,0);
    local_7c = 0xfffffffe;
  }
  else {
    if (((*(long *)(param_1 + 8) != 0) || (*(int **)(param_1 + 0x1e) == (int *)0x0)) ||
       (**(int **)(param_1 + 0x1e) == 0x198)) {
      OSSL_PARAM_construct_int(&local_b8,"ecdh-cofactor-mode",&local_7c);
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
      iVar1 = evp_pkey_ctx_get_params_strict(param_1,&local_78);
      if (iVar1 == -2) {
        ERR_new();
        pcVar2 = "EVP_PKEY_CTX_get_ecdh_cofactor_mode";
        uVar3 = 0x57;
        goto LAB_001002b1;
      }
      if ((iVar1 == 1) && (local_7c < 2)) goto LAB_00100253;
    }
    local_7c = 0xffffffff;
  }
LAB_00100253:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_7c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void EVP_PKEY_CTX_set_ecdh_kdf_type(EVP_PKEY_CTX *param_1,int param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x198,0x800,0x1004,param_2,(void *)0x0);
  return;
}



void EVP_PKEY_CTX_get_ecdh_kdf_type(EVP_PKEY_CTX *param_1)

{
  EVP_PKEY_CTX_ctrl(param_1,0x198,0x800,0x1004,-2,(void *)0x0);
  return;
}



void EVP_PKEY_CTX_set_ecdh_kdf_md(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x198,0x800,0x1005,0,param_2);
  return;
}



void EVP_PKEY_CTX_get_ecdh_kdf_md(EVP_PKEY_CTX *param_1,void *param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x198,0x800,0x1006,0,param_2);
  return;
}



int EVP_PKEY_CTX_set_ecdh_kdf_outlen(uint *param_1,int param_2)

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
    ERR_set_debug("crypto/evp/ec_ctrl.c",0x1b,"evp_pkey_ctx_getset_ecdh_param_checks");
    ERR_set_error(6,0x93,0);
  }
  else {
    if (((*(long *)(param_1 + 8) == 0) && (*(int **)(param_1 + 0x1e) != (int *)0x0)) &&
       (**(int **)(param_1 + 0x1e) != 0x198)) {
      iVar1 = -1;
      goto LAB_00100457;
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
        ERR_set_debug("crypto/evp/ec_ctrl.c",0xac,"EVP_PKEY_CTX_set_ecdh_kdf_outlen");
        ERR_set_error(6,0x93,0);
      }
      goto LAB_00100457;
    }
  }
  iVar1 = -2;
LAB_00100457:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_PKEY_CTX_get_ecdh_kdf_outlen(uint *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
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
    pcVar2 = "evp_pkey_ctx_getset_ecdh_param_checks";
    uVar1 = 0x1b;
LAB_00100661:
    ERR_set_debug("crypto/evp/ec_ctrl.c",uVar1,pcVar2);
    ERR_set_error(6,0x93,0);
    uVar1 = 0xfffffffe;
  }
  else {
    if (((*(long *)(param_1 + 8) != 0) || (*(int **)(param_1 + 0x1e) == (int *)0x0)) ||
       (**(int **)(param_1 + 0x1e) == 0x198)) {
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
        pcVar2 = "EVP_PKEY_CTX_get_ecdh_kdf_outlen";
        uVar1 = 0xc2;
        goto LAB_00100661;
      }
      if (((int)uVar1 == 1) && (local_80 < 0x80000000)) {
        *param_2 = (int)local_80;
        goto LAB_001005f8;
      }
    }
    uVar1 = 0xffffffff;
  }
LAB_001005f8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong EVP_PKEY_CTX_set0_ecdh_kdf_ukm(uint *param_1,void *param_2,int param_3)

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
  if ((param_1 == (uint *)0x0) || ((*param_1 & 0x800) == 0)) {
    ERR_new();
    pcVar2 = "evp_pkey_ctx_getset_ecdh_param_checks";
    uVar3 = 0x1b;
  }
  else {
    if (((*(long *)(param_1 + 8) == 0) && (*(int **)(param_1 + 0x1e) != (int *)0x0)) &&
       (**(int **)(param_1 + 0x1e) != 0x198)) {
      uVar1 = 0xffffffff;
      goto LAB_00100774;
    }
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
      goto LAB_00100774;
    }
    ERR_new();
    pcVar2 = "EVP_PKEY_CTX_set0_ecdh_kdf_ukm";
    uVar3 = 0xe8;
  }
  ERR_set_debug("crypto/evp/ec_ctrl.c",uVar3,pcVar2);
  ERR_set_error(6,0x93,0);
  uVar1 = 0xfffffffe;
LAB_00100774:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong EVP_PKEY_CTX_get0_ecdh_kdf_ukm(uint *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
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
    pcVar3 = "evp_pkey_ctx_getset_ecdh_param_checks";
    uVar4 = 0x1b;
LAB_00100961:
    ERR_set_debug("crypto/evp/ec_ctrl.c",uVar4,pcVar3);
    ERR_set_error(6,0x93,0);
    uVar2 = 0xfffffffe;
  }
  else {
    if (((*(long *)(param_1 + 8) != 0) || (*(int **)(param_1 + 0x1e) == (int *)0x0)) ||
       (**(int **)(param_1 + 0x1e) == 0x198)) {
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
        pcVar3 = "EVP_PKEY_CTX_get0_ecdh_kdf_ukm";
        uVar4 = 0x105;
        goto LAB_00100961;
      }
      if ((iVar1 == 1) && (uVar2 = local_58, local_58 < 0x80000000)) goto LAB_00100904;
    }
    uVar2 = 0xffffffff;
  }
LAB_00100904:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void EVP_PKEY_CTX_set_ec_paramgen_curve_nid(EVP_PKEY_CTX *param_1,int param_2)

{
  int keytype;
  
  keytype = 0x198;
  if (param_2 == 0x494) {
    keytype = 0x494;
  }
  EVP_PKEY_CTX_ctrl(param_1,keytype,6,0x1001,param_2,(void *)0x0);
  return;
}



void EVP_PKEY_CTX_set_ec_param_enc(EVP_PKEY_CTX *param_1,int param_2)

{
  EVP_PKEY_CTX_ctrl(param_1,0x198,6,0x1002,param_2,(void *)0x0);
  return;
}


