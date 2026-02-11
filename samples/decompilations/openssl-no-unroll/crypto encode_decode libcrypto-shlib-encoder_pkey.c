
void encoder_destruct_pkey(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar3 = OSSL_ENCODER_INSTANCE_get_encoder();
    (**(code **)(lVar3 + 0x78))(*(undefined8 *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar1 != lVar2) {
    return;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



long encoder_construct_pkey(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = param_2[3];
  if (lVar6 == 0) {
    uVar3 = OSSL_ENCODER_INSTANCE_get_encoder();
    lVar1 = *param_2;
    lVar4 = EVP_KEYMGMT_get0_provider(*(undefined8 *)(lVar1 + 0x60));
    lVar5 = OSSL_ENCODER_get0_provider(uVar3);
    if (lVar4 == lVar5) {
      lVar6 = *(long *)(lVar1 + 0x68);
      param_2[3] = lVar6;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x68);
      param_2[2] = param_1;
      iVar2 = evp_keymgmt_export(*(undefined8 *)(lVar1 + 0x60),uVar3,
                                 (*(uint *)(param_2 + 1) & 1) * 2 | *(uint *)(param_2 + 1),
                                 encoder_import_cb,param_2);
      if (iVar2 != 0) {
        lVar6 = param_2[4];
        param_2[3] = lVar6;
      }
    }
  }
  return lVar6;
}



bool encoder_import_cb(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = OSSL_ENCODER_INSTANCE_get_encoder(uVar2);
  uVar2 = OSSL_ENCODER_INSTANCE_get_encoder_ctx(uVar2);
  lVar1 = (**(code **)(lVar1 + 0x70))(uVar2,*(undefined4 *)(param_2 + 8),param_1);
  *(long *)(param_2 + 0x20) = lVar1;
  return lVar1 != 0;
}



void collect_encoder(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (*(int *)((long)param_2 + 0x34) != 0) {
    return;
  }
  *(undefined4 *)((long)param_2 + 0x34) = 1;
  lVar3 = OSSL_ENCODER_get0_provider();
  if ((param_2[4] == lVar3) == (bool)(*(byte *)(param_2 + 6) & 1)) {
    uVar4 = OSSL_PROVIDER_get0_provider_ctx(lVar3);
    iVar1 = OPENSSL_sk_num(*param_2);
    if (0 < iVar1) {
      uVar6 = 0;
      do {
        if ((*(byte *)(param_2 + 6) & 1) == 0) {
          uVar5 = OPENSSL_sk_value(*param_2,uVar6 & 0xffffffff);
          iVar2 = OSSL_ENCODER_is_a(param_1,uVar5);
          if (iVar2 != 0) {
LAB_001001cd:
            if ((((*(code **)(param_1 + 0x60) == (code *)0x0) ||
                 (iVar2 = (**(code **)(param_1 + 0x60))(uVar4,*(undefined4 *)param_2[5]), iVar2 != 0
                 )) && ((lVar3 == param_2[4] || (*(long *)(param_1 + 0x70) != 0)))) &&
               (iVar2 = OSSL_ENCODER_CTX_add_encoder(param_2[5],param_1), iVar2 != 0)) break;
          }
        }
        else if (*(int *)(param_2[1] + uVar6 * 4) == *(int *)(param_1 + 8)) goto LAB_001001cd;
        uVar6 = uVar6 + 1;
      } while ((long)iVar1 != uVar6);
    }
  }
  *(undefined4 *)((long)param_2 + 0x34) = 0;
  return;
}



void collect_name(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_2 + 1) & 1) != 0) {
    return;
  }
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) | 1;
  iVar1 = OPENSSL_sk_push(*param_2,param_1);
  if (0 < iVar1) {
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfe;
  }
  return;
}



void OSSL_ENCODER_CTX_set_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98 [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = local_98;
  for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  OSSL_PARAM_construct_utf8_string(&local_c8,"cipher",param_2);
  local_78 = local_a8;
  local_98[0] = local_c8;
  local_98[1] = uStack_c0;
  local_98[2] = local_b8;
  local_98[3] = uStack_b0;
  OSSL_PARAM_construct_utf8_string(&local_c8,"properties",param_3,0);
  local_70 = local_c8;
  uStack_68 = uStack_c0;
  local_50 = local_a8;
  local_60 = local_b8;
  uStack_58 = uStack_b0;
  OSSL_ENCODER_CTX_set_params(param_1,local_98);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void OSSL_ENCODER_CTX_set_passphrase(long param_1)

{
  ossl_pw_set_passphrase(param_1 + 0x38);
  return;
}



void OSSL_ENCODER_CTX_set_passphrase_ui(long param_1)

{
  ossl_pw_set_ui_method(param_1 + 0x38);
  return;
}



void OSSL_ENCODER_CTX_set_pem_password_cb(long param_1)

{
  ossl_pw_set_pem_password_cb(param_1 + 0x38);
  return;
}



void OSSL_ENCODER_CTX_set_passphrase_cb(long param_1)

{
  ossl_pw_set_ossl_passphrase_cb(param_1 + 0x38);
  return;
}



long OSSL_ENCODER_CTX_new_for_pkey
               (long param_1,undefined4 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *ptr;
  undefined8 uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined1 local_118 [32];
  undefined8 local_f8;
  long local_e8;
  byte local_e0;
  long local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  byte local_a8;
  int local_a4;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ERR_new();
    lVar6 = 0;
    ERR_set_debug("crypto/encode_decode/encoder_pkey.c",0x165,"OSSL_ENCODER_CTX_new_for_pkey");
    ERR_set_error(0x3b,0xc0102,0);
    goto LAB_001006c8;
  }
  if ((*(long *)(param_1 + 0x20) == 0) && (*(long *)(param_1 + 0x68) == 0)) {
    ERR_new();
    lVar6 = 0;
    ERR_set_debug("crypto/encode_decode/encoder_pkey.c",0x16a,"OSSL_ENCODER_CTX_new_for_pkey");
    ERR_set_error(0x3b,0x80106,"The passed EVP_PKEY must be assigned a key");
    goto LAB_001006c8;
  }
  lVar4 = OSSL_ENCODER_CTX_new();
  if (lVar4 == 0) {
    ERR_new();
    lVar6 = 0;
    ERR_set_debug("crypto/encode_decode/encoder_pkey.c",0x170,"OSSL_ENCODER_CTX_new_for_pkey");
    ERR_set_error(0x3b,0x8003b,0);
    goto LAB_001006c8;
  }
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 != 0) {
    uVar5 = EVP_KEYMGMT_get0_provider(lVar6);
    lVar6 = ossl_provider_libctx(uVar5);
  }
  iVar2 = OSSL_ENCODER_CTX_set_output_type(lVar4,param_3);
  if (iVar2 != 0) {
    if (param_4 != 0) {
      iVar2 = OSSL_ENCODER_CTX_set_output_structure(lVar4,param_4);
      if (iVar2 == 0) goto LAB_00100750;
    }
    iVar2 = OSSL_ENCODER_CTX_set_selection(lVar4,param_2);
    if (iVar2 != 0) {
      if (*(long *)(param_1 + 0x60) != 0) {
        uVar5 = EVP_KEYMGMT_get0_provider();
        uVar7 = ossl_provider_libctx(uVar5);
        if (*(long *)(param_1 + 0x60) != 0) {
          ptr = (long *)CRYPTO_zalloc(0x28,"crypto/encode_decode/encoder_pkey.c",0x101);
          if (ptr == (long *)0x0) goto LAB_00100750;
          local_e8 = OPENSSL_sk_new_null();
          if (local_e8 == 0) {
            ERR_new();
            uVar5 = 0x10a;
LAB_00100709:
            ERR_set_debug("crypto/encode_decode/encoder_pkey.c",uVar5,
                          "ossl_encoder_ctx_setup_for_pkey");
            ERR_set_error(0x3b,0x8000f,0);
          }
          else {
            local_e0 = local_e0 & 0xfe;
            EVP_KEYMGMT_names_do_all(*(undefined8 *)(param_1 + 0x60),collect_name,&local_e8);
            if ((local_e0 & 1) == 0) {
              local_d8 = local_e8;
              local_c0 = *(undefined8 *)(lVar4 + 8);
              local_c8 = *(undefined8 *)(lVar4 + 0x10);
              local_a4 = 0;
              local_d0 = (void *)0x0;
              local_b8 = uVar5;
              local_b0 = lVar4;
              uVar5 = ossl_namemap_stored(uVar7);
              iVar2 = OPENSSL_sk_num(local_d8);
              if (0 < iVar2) {
                local_d0 = CRYPTO_malloc(iVar2 * 4,"crypto/encode_decode/encoder_pkey.c",0x125);
                if (local_d0 == (void *)0x0) goto LAB_00100880;
                uVar9 = 0;
                do {
                  uVar8 = OPENSSL_sk_value(local_e8,uVar9 & 0xffffffff);
                  puVar1 = (undefined4 *)((long)local_d0 + uVar9 * 4);
                  uVar9 = uVar9 + 1;
                  uVar3 = ossl_namemap_name2num(uVar5,uVar8);
                  *puVar1 = uVar3;
                } while ((long)iVar2 != uVar9);
              }
              local_a8 = local_a8 & 0xfe;
              OSSL_ENCODER_do_all_provided(uVar7,collect_encoder);
              local_a8 = local_a8 | 1;
              OSSL_ENCODER_do_all_provided(uVar7,collect_encoder,&local_d8);
              CRYPTO_free(local_d0);
              OPENSSL_sk_free(local_e8);
              if (local_a4 != 0) {
                ERR_new();
                uVar5 = 0x141;
                goto LAB_00100709;
              }
              iVar2 = OSSL_ENCODER_CTX_get_num_encoders(lVar4);
              if (iVar2 == 0) {
                OSSL_ENCODER_CTX_set_construct_data(lVar4,0);
                CRYPTO_free(ptr);
                goto LAB_0010062a;
              }
              iVar2 = OSSL_ENCODER_CTX_set_construct(lVar4,encoder_construct_pkey);
              if (iVar2 != 0) {
                iVar2 = OSSL_ENCODER_CTX_set_construct_data(lVar4,ptr);
                if (iVar2 != 0) {
                  iVar2 = OSSL_ENCODER_CTX_set_cleanup(lVar4,0x100000);
                  if (iVar2 != 0) {
                    *ptr = param_1;
                    *(undefined4 *)(ptr + 1) = param_2;
                    goto LAB_0010062a;
                  }
                }
              }
            }
            else {
LAB_00100880:
              OPENSSL_sk_free(local_e8);
            }
          }
          OSSL_ENCODER_CTX_set_construct_data(lVar4,0);
          CRYPTO_free(ptr);
          goto LAB_00100750;
        }
      }
LAB_0010062a:
      iVar2 = OSSL_ENCODER_CTX_add_extra(lVar4,lVar6,param_5);
      if (iVar2 != 0) {
        local_98 = (undefined1  [16])0x0;
        local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(param_1 + 0x48));
        local_88 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        OSSL_PARAM_construct_int(local_118,"save-parameters",&local_d8);
        local_78._0_8_ = local_f8;
        OSSL_ENCODER_CTX_set_params(lVar4,local_98);
        lVar6 = lVar4;
        goto LAB_001006c8;
      }
    }
  }
LAB_00100750:
  lVar6 = 0;
  OSSL_ENCODER_CTX_free(lVar4);
LAB_001006c8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


