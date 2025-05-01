
undefined1 * BARE_ALGOR_it(void)

{
  return local_it_0;
}



undefined1 * der2key_settable_ctx_params(void)

{
  return settables_5;
}



uint PrivateKeyInfo_der2dh_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint SubjectPublicKeyInfo_der2dh_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



bool type_specific_params_der2dh_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



uint type_specific_der2dsa_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((param_2 != 0) && (uVar1 = param_2 & 1, uVar1 == 0)) {
    if ((param_2 & 2) == 0) {
      return (uint)((param_2 & 0x84) != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}



bool type_specific_no_pub_der2ec_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



bool type_specific_keypair_der2rsa_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 != 0;
}



bool der2key_set_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = param_1 + 8;
  lVar2 = OSSL_PARAM_locate_const(param_2,"properties",0);
  bVar3 = true;
  if (lVar2 != 0) {
    iVar1 = OSSL_PARAM_get_utf8_string(lVar2,&local_18,0x100);
    bVar3 = iVar1 != 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
der2key_export_object
          (long param_1,undefined8 *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE =
       (code *)ossl_prov_get_keymgmt_export(*(undefined8 *)(*(long *)(param_1 + 0x108) + 8));
  if ((param_3 == 8) && (UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    iVar1 = *(int *)(param_1 + 0x110);
    if (*(int *)(param_1 + 0x110) == 0) {
      iVar1 = 0x87;
    }
                    /* WARNING: Could not recover jumptable at 0x00100297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(*param_2,iVar1,param_4,param_5);
    return uVar2;
  }
  return 0;
}



void der2key_freectx(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



undefined4
der2key_decode(undefined8 *param_1,undefined8 param_2,uint param_3,code *param_4,undefined8 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_fc;
  void *local_f8;
  void *local_f0;
  undefined8 local_e8;
  EC_KEY *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
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
  *(uint *)(param_1 + 0x22) = param_3;
  local_f8 = (void *)0x0;
  local_e8 = 0;
  uVar6 = *(uint *)(param_1[0x21] + 0x1c);
  local_e0 = (EC_KEY *)0x0;
  uVar7 = uVar6;
  if (param_3 != 0) {
    uVar6 = uVar6 & param_3;
    uVar7 = param_3;
  }
  if (uVar6 == 0) {
    ERR_new();
    ERR_set_debug("providers/implementations/encode_decode/decode_der2key.c",0x102,"der2key_decode")
    ;
    ERR_set_error(0x39,0x80106,0);
    uVar3 = 0;
    goto LAB_001004e3;
  }
  iVar2 = ossl_read_der(*param_1,param_2,&local_f8,&local_e8);
  if (iVar2 == 0) {
LAB_00100359:
    uVar3 = 1;
    CRYPTO_free(local_f8);
    local_f8 = (void *)0x0;
    if (local_e0 != (EC_KEY *)0x0) {
      local_fc = 2;
      OSSL_PARAM_construct_int(&local_138,&_LC2,&local_fc);
      local_b8 = local_118;
      local_d8 = local_138;
      uStack_d0 = uStack_130;
      pcVar5 = *(char **)param_1[0x21];
      local_c8 = local_128;
      uStack_c0 = uStack_120;
      if (((*pcVar5 == 'E') && (pcVar5[1] == 'C')) && (pcVar5[2] == '\0')) {
        uVar6 = EC_KEY_get_flags(local_e0);
        pcVar5 = "SM2";
        if ((uVar6 & 4) == 0) {
          pcVar5 = *(char **)param_1[0x21];
        }
      }
      OSSL_PARAM_construct_utf8_string(&local_138,"data-type",pcVar5,0);
      local_b0 = local_138;
      uStack_a8 = uStack_130;
      local_a0 = local_128;
      uStack_98 = uStack_120;
      local_90 = local_118;
      OSSL_PARAM_construct_octet_string(&local_138,"reference",&local_e0,8);
      local_68 = local_118;
      local_88 = local_138;
      uStack_80 = uStack_130;
      local_78 = local_128;
      uStack_70 = uStack_120;
      OSSL_PARAM_construct_end(&local_138);
      local_60 = local_138;
      uStack_58 = uStack_130;
      local_40 = local_118;
      local_50 = local_128;
      uStack_48 = uStack_120;
      uVar3 = (*param_4)(&local_d8,param_5);
    }
  }
  else {
    ERR_set_mark();
    if ((uVar7 & 1) == 0) {
      if (local_e0 == (EC_KEY *)0x0) {
LAB_0010060a:
        if ((uVar7 & 2) != 0) {
          local_f0 = local_f8;
          pcVar1 = *(code **)(param_1[0x21] + 0x40);
          if (pcVar1 == (code *)0x0) {
            pcVar1 = *(code **)(param_1[0x21] + 0x28);
            if (pcVar1 != (code *)0x0) {
              local_e0 = (EC_KEY *)(*pcVar1)(0,&local_f0,local_e8);
              goto LAB_00100641;
            }
          }
          else {
            local_e0 = (EC_KEY *)(*pcVar1)(&local_f0,local_e8,param_1);
LAB_00100641:
            if (local_e0 != (EC_KEY *)0x0) goto LAB_0010052b;
          }
          if (*(int *)(param_1 + 0x22) != 0) goto LAB_00100660;
        }
        if ((uVar7 & 0x84) != 0) {
          local_f0 = local_f8;
          if ((*(code **)(param_1[0x21] + 0x30) != (code *)0x0) &&
             (local_e0 = (EC_KEY *)(**(code **)(param_1[0x21] + 0x30))(0,&local_f0,local_e8),
             local_e0 != (EC_KEY *)0x0)) goto LAB_0010052b;
          if (*(int *)(param_1 + 0x22) != 0) goto LAB_00100660;
        }
        ERR_clear_last_mark();
      }
      else {
LAB_0010052b:
        ERR_pop_to_mark();
      }
      if (local_e0 != (EC_KEY *)0x0) {
        lVar4 = param_1[0x21];
        if (*(code **)(lVar4 + 0x48) == (code *)0x0) {
LAB_00100685:
          if (*(code **)(lVar4 + 0x50) != (code *)0x0) {
            (**(code **)(lVar4 + 0x50))(local_e0,param_1);
          }
        }
        else {
          iVar2 = (**(code **)(lVar4 + 0x48))(local_e0,param_1);
          if (iVar2 == 0) {
            (**(code **)(param_1[0x21] + 0x58))(local_e0);
            local_e0 = (EC_KEY *)0x0;
          }
          else if (local_e0 != (EC_KEY *)0x0) {
            lVar4 = param_1[0x21];
            goto LAB_00100685;
          }
        }
      }
      goto LAB_00100359;
    }
    local_f0 = local_f8;
    pcVar1 = *(code **)(param_1[0x21] + 0x38);
    if (pcVar1 == (code *)0x0) {
      pcVar1 = *(code **)(param_1[0x21] + 0x20);
      if (pcVar1 != (code *)0x0) {
        local_e0 = (EC_KEY *)(*pcVar1)(0,&local_f0,local_e8);
      }
LAB_001005f7:
      if (local_e0 != (EC_KEY *)0x0) goto LAB_0010052b;
      if (*(int *)(param_1 + 0x22) == 0) goto LAB_0010060a;
LAB_00100660:
      ERR_clear_last_mark();
      goto LAB_00100359;
    }
    local_e0 = (EC_KEY *)(*pcVar1)(&local_f0,local_e8,param_1);
    if ((*(byte *)((long)param_1 + 0x114) & 1) == 0) goto LAB_001005f7;
    ERR_clear_last_mark();
    uVar3 = 0;
  }
  (**(code **)(param_1[0x21] + 0x58))(local_e0);
  CRYPTO_free(local_f8);
LAB_001004e3:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void dh_adjust(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_libctx(*param_2);
  ossl_dh_set0_libctx(param_1,uVar1);
  return;
}



void PrivateKeyInfo_der2dh_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_dh_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2dh_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_dh_desc;
  }
  return;
}



void type_specific_params_der2dh_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = type_specific_params_dh_desc;
  }
  return;
}



void DH_der2dh_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = DH_dh_desc;
  }
  return;
}



void PrivateKeyInfo_der2dhx_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_dhx_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2dhx_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_dhx_desc;
  }
  return;
}



void type_specific_params_der2dhx_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = type_specific_params_dhx_desc;
  }
  return;
}



void DHX_der2dhx_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = DHX_dhx_desc;
  }
  return;
}



void PrivateKeyInfo_der2dsa_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_dsa_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2dsa_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_dsa_desc;
  }
  return;
}



void type_specific_der2dsa_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = type_specific_dsa_desc;
  }
  return;
}



void DSA_der2dsa_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = DSA_dsa_desc;
  }
  return;
}



void PrivateKeyInfo_der2ec_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_ec_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2ec_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_ec_desc;
  }
  return;
}



void type_specific_no_pub_der2ec_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = type_specific_no_pub_ec_desc;
  }
  return;
}



void EC_der2ec_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = EC_ec_desc;
  }
  return;
}



void PrivateKeyInfo_der2x25519_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_x25519_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2x25519_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_x25519_desc;
  }
  return;
}



void PrivateKeyInfo_der2x448_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_x448_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2x448_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_x448_desc;
  }
  return;
}



void PrivateKeyInfo_der2ed25519_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_ed25519_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2ed25519_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_ed25519_desc;
  }
  return;
}



void PrivateKeyInfo_der2ed448_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_ed448_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2ed448_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_ed448_desc;
  }
  return;
}



void PrivateKeyInfo_der2sm2_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_sm2_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2sm2_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_sm2_desc;
  }
  return;
}



void type_specific_no_pub_der2sm2_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = type_specific_no_pub_sm2_desc;
  }
  return;
}



void PrivateKeyInfo_der2ml_kem_512_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_ml_kem_512_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2ml_kem_512_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_ml_kem_512_desc;
  }
  return;
}



void PrivateKeyInfo_der2ml_kem_768_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_ml_kem_768_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2ml_kem_768_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_ml_kem_768_desc;
  }
  return;
}



void PrivateKeyInfo_der2ml_kem_1024_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_ml_kem_1024_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2ml_kem_1024_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_ml_kem_1024_desc;
  }
  return;
}



void PrivateKeyInfo_der2slh_dsa_sha2_128s_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_slh_dsa_sha2_128s_desc;
  }
  return;
}



void PrivateKeyInfo_der2slh_dsa_sha2_128f_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_slh_dsa_sha2_128f_desc;
  }
  return;
}



void PrivateKeyInfo_der2slh_dsa_sha2_192s_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_slh_dsa_sha2_192s_desc;
  }
  return;
}



void PrivateKeyInfo_der2slh_dsa_sha2_192f_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_slh_dsa_sha2_192f_desc;
  }
  return;
}



void PrivateKeyInfo_der2slh_dsa_sha2_256s_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_slh_dsa_sha2_256s_desc;
  }
  return;
}



void PrivateKeyInfo_der2slh_dsa_sha2_256f_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_slh_dsa_sha2_256f_desc;
  }
  return;
}



void PrivateKeyInfo_der2slh_dsa_shake_128s_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_slh_dsa_shake_128s_desc;
  }
  return;
}



void PrivateKeyInfo_der2slh_dsa_shake_128f_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_slh_dsa_shake_128f_desc;
  }
  return;
}



void PrivateKeyInfo_der2slh_dsa_shake_192s_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_slh_dsa_shake_192s_desc;
  }
  return;
}



void PrivateKeyInfo_der2slh_dsa_shake_192f_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_slh_dsa_shake_192f_desc;
  }
  return;
}



void PrivateKeyInfo_der2slh_dsa_shake_256s_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_slh_dsa_shake_256s_desc;
  }
  return;
}



void PrivateKeyInfo_der2slh_dsa_shake_256f_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_slh_dsa_shake_256f_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2slh_dsa_sha2_128s_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_slh_dsa_sha2_128s_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2slh_dsa_sha2_128f_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_slh_dsa_sha2_128f_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2slh_dsa_sha2_192s_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_slh_dsa_sha2_192s_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2slh_dsa_sha2_192f_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_slh_dsa_sha2_192f_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2slh_dsa_sha2_256s_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_slh_dsa_sha2_256s_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2slh_dsa_sha2_256f_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_slh_dsa_sha2_256f_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2slh_dsa_shake_128s_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_slh_dsa_shake_128s_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2slh_dsa_shake_128f_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_slh_dsa_shake_128f_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2slh_dsa_shake_192s_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_slh_dsa_shake_192s_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2slh_dsa_shake_192f_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_slh_dsa_shake_192f_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2slh_dsa_shake_256s_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_slh_dsa_shake_256s_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2slh_dsa_shake_256f_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_slh_dsa_shake_256f_desc;
  }
  return;
}



void PrivateKeyInfo_der2rsa_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_rsa_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2rsa_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_rsa_desc;
  }
  return;
}



void type_specific_keypair_der2rsa_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = type_specific_keypair_rsa_desc;
  }
  return;
}



void RSA_der2rsa_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = RSA_rsa_desc;
  }
  return;
}



void PrivateKeyInfo_der2rsapss_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_rsapss_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2rsapss_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_rsapss_desc;
  }
  return;
}



void PrivateKeyInfo_der2ml_dsa_44_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_ml_dsa_44_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2ml_dsa_44_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_ml_dsa_44_desc;
  }
  return;
}



void PrivateKeyInfo_der2ml_dsa_65_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_ml_dsa_65_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2ml_dsa_65_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_ml_dsa_65_desc;
  }
  return;
}



void PrivateKeyInfo_der2ml_dsa_87_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = PrivateKeyInfo_ml_dsa_87_desc;
  }
  return;
}



void SubjectPublicKeyInfo_der2ml_dsa_87_newctx(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x118,"providers/implementations/encode_decode/decode_der2key.c",0xa3);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    puVar1[0x21] = SubjectPublicKeyInfo_ml_dsa_87_desc;
  }
  return;
}



void dh_d2i_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  ossl_d2i_DH_PUBKEY(0,param_1,param_2);
  return;
}



void dhx_d2i_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  ossl_d2i_DHx_PUBKEY(0,param_1,param_2);
  return;
}



void dsa_adjust(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_libctx(*param_2);
  ossl_dsa_set0_libctx(param_1,uVar1);
  return;
}



void dsa_d2i_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  ossl_d2i_DSA_PUBKEY(0,param_1,param_2);
  return;
}



void ec_adjust(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_libctx(*param_2);
  ossl_ec_key_set0_libctx(param_1,uVar1);
  return;
}



void ec_d2i_PUBKEY(uchar **param_1,long param_2)

{
  d2i_EC_PUBKEY((EC_KEY **)0x0,param_1,param_2);
  return;
}



void ecx_key_adjust(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_libctx(*param_2);
  ossl_ecx_key_set0_libctx(param_1,uVar1);
  return;
}



void x25519_d2i_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  ossl_d2i_X25519_PUBKEY(0,param_1,param_2);
  return;
}



void x448_d2i_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  ossl_d2i_X448_PUBKEY(0,param_1,param_2);
  return;
}



void ed25519_d2i_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  ossl_d2i_ED25519_PUBKEY(0,param_1,param_2);
  return;
}



void ed448_d2i_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  ossl_d2i_ED448_PUBKEY(0,param_1,param_2);
  return;
}



void ml_kem_d2i_PKCS8(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = ossl_ml_kem_d2i_PKCS8
                    (*param_1,param_2,*(undefined4 *)(param_3[0x21] + 0x18),*param_3,param_3 + 1);
  if (lVar1 != 0) {
    *param_1 = *param_1 + param_2;
  }
  return;
}



void ml_kem_d2i_PUBKEY(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = ossl_ml_kem_d2i_PUBKEY
                    (*param_1,param_2,*(undefined4 *)(param_3[0x21] + 0x18),*param_3,param_3 + 1);
  if (lVar1 != 0) {
    *param_1 = *param_1 + param_2;
  }
  return;
}



long slh_dsa_d2i_PKCS8(uchar **param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  PKCS8_PRIV_KEY_INFO *p8;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  uchar *local_40;
  X509_ALGOR *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_ctx_get0_libctx();
  local_38 = (X509_ALGOR *)0x0;
  p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,param_1,param_2);
  if (p8 == (PKCS8_PRIV_KEY_INFO *)0x0) {
    PKCS8_PRIV_KEY_INFO_free((PKCS8_PRIV_KEY_INFO *)0x0);
LAB_00101bef:
    lVar3 = 0;
  }
  else {
    iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,&local_40,&local_48,&local_38,p8);
    if (iVar1 == 0) {
LAB_00101be7:
      PKCS8_PRIV_KEY_INFO_free(p8);
      goto LAB_00101bef;
    }
    X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_44,(void **)0x0,local_38);
    if (local_44 != -1) {
      ERR_new();
      ERR_set_debug("providers/implementations/encode_decode/decode_der2key.c",0x296,__func___3);
      ERR_set_error(0x39,0xf9,"unexpected parameters with a PKCS#8 %s private key",
                    **(undefined8 **)(param_3 + 0x108));
      goto LAB_00101be7;
    }
    iVar1 = OBJ_obj2nid(local_38->algorithm);
    if (iVar1 != *(int *)(*(undefined8 **)(param_3 + 0x108) + 3)) goto LAB_00101be7;
    lVar3 = ossl_slh_dsa_key_new(uVar2,param_3 + 8,**(undefined8 **)(param_3 + 0x108));
    if (lVar3 == 0) goto LAB_00101be7;
    iVar1 = ossl_slh_dsa_set_priv(lVar3,local_40,(long)local_48);
    if (iVar1 != 0) {
      PKCS8_PRIV_KEY_INFO_free(p8);
      lVar4 = lVar3;
      goto LAB_00101bfb;
    }
    PKCS8_PRIV_KEY_INFO_free(p8);
  }
  lVar4 = 0;
  ossl_slh_dsa_key_free(lVar3);
LAB_00101bfb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long slh_dsa_d2i_PUBKEY(long *param_1,long param_2,undefined8 *param_3)

{
  ASN1_OBJECT *b;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ASN1_OBJECT *a;
  char *pcVar6;
  long in_FS_OFFSET;
  undefined8 *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_ctx_get0_libctx(*param_3);
  local_50 = (undefined8 *)0x0;
  local_48 = *param_1;
  lVar3 = ossl_slh_dsa_key_new(uVar2,param_3 + 1,*(undefined8 *)param_3[0x21]);
  if (lVar3 != 0) {
    lVar4 = ossl_slh_dsa_key_get_pub_len(lVar3);
    lVar4 = lVar4 + 0x12;
    if (lVar4 == param_2) {
      local_50 = (undefined8 *)
                 CRYPTO_zalloc(0x10,"providers/implementations/encode_decode/decode_der2key.c",0x2d0
                              );
      if (local_50 != (undefined8 *)0x0) {
        lVar5 = ASN1_item_d2i_ex(&local_50,&local_48,lVar4,local_it_1,0,0);
        if (lVar5 == 0) {
          ERR_new();
          uVar2 = 0x2d6;
LAB_00101d3a:
          ERR_set_debug("providers/implementations/encode_decode/decode_der2key.c",uVar2,
                        "slh_dsa_d2i_PUBKEY");
          uVar2 = ossl_slh_dsa_key_get_name(lVar3);
          pcVar6 = "malformed %s public key ASN.1 encoding";
        }
        else {
          if (((*(byte *)(local_50[1] + 0x10) & 7) != 0) || (local_48 != lVar4 + *param_1)) {
            ERR_new();
            uVar2 = 0x2de;
            goto LAB_00101d3a;
          }
          b = (ASN1_OBJECT *)*local_50;
          a = OBJ_nid2obj(*(int *)(param_3[0x21] + 0x18));
          iVar1 = OBJ_cmp(a,b);
          if (iVar1 == 0) {
            iVar1 = ossl_slh_dsa_set_pub
                              (lVar3,*(undefined8 *)((int *)local_50[1] + 2),
                               (long)*(int *)local_50[1]);
            if (iVar1 != 0) {
              if (local_50 != (undefined8 *)0x0) {
                ASN1_OBJECT_free((ASN1_OBJECT *)*local_50);
                ASN1_BIT_STRING_free((ASN1_BIT_STRING *)local_50[1]);
                CRYPTO_free(local_50);
              }
              goto LAB_00101daa;
            }
            ERR_new();
            ERR_set_debug("providers/implementations/encode_decode/decode_der2key.c",0x2eb,
                          "slh_dsa_d2i_PUBKEY");
            uVar2 = ossl_slh_dsa_key_get_name(lVar3);
            pcVar6 = "failed to parse %s public key from the input data";
          }
          else {
            ERR_new();
            ERR_set_debug("providers/implementations/encode_decode/decode_der2key.c",0x2e4,
                          "slh_dsa_d2i_PUBKEY");
            uVar2 = ossl_slh_dsa_key_get_name(lVar3);
            pcVar6 = "unexpected algorithm OID for an %s public key";
          }
        }
        ERR_set_error(0x39,0x8d,pcVar6,uVar2);
        if (local_50 != (undefined8 *)0x0) goto LAB_00101d6f;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/encode_decode/decode_der2key.c",0x2c9,
                    "slh_dsa_d2i_PUBKEY");
      ERR_set_error(0x39,0x8d,"unexpected %s public key length: %ld != %ld",
                    *(undefined8 *)param_3[0x21],param_2,lVar4);
      if (local_50 == (undefined8 *)0x0) goto LAB_00101da0;
LAB_00101d6f:
      ASN1_OBJECT_free((ASN1_OBJECT *)*local_50);
      ASN1_BIT_STRING_free((ASN1_BIT_STRING *)local_50[1]);
      CRYPTO_free(local_50);
    }
LAB_00101da0:
    ossl_slh_dsa_key_free(lVar3);
  }
  lVar3 = 0;
LAB_00101daa:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



void rsa_adjust(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_ctx_get0_libctx(*param_2);
  ossl_rsa_set0_libctx(param_1,uVar1);
  return;
}



ulong rsa_check(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = RSA_test_flags(param_1,0xf000);
  if ((int)uVar2 == 0) {
    if (*(int *)(*(long *)(param_2 + 0x108) + 0x18) == 6) goto LAB_00101fbd;
  }
  else {
    if ((int)uVar2 != 0x1000) {
      return 0;
    }
    uVar2 = 0;
    if (*(int *)(*(long *)(param_2 + 0x108) + 0x18) == 0x390) {
LAB_00101fbd:
      iVar1 = ossl_rsa_check_factors(param_1);
      return (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}



void rsa_d2i_PUBKEY(uchar **param_1,long param_2)

{
  d2i_RSA_PUBKEY((RSA **)0x0,param_1,param_2);
  return;
}



void ml_dsa_d2i_PKCS8(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = ossl_ml_dsa_d2i_PKCS8
                    (*param_1,param_2,*(undefined4 *)(param_3[0x21] + 0x18),*param_3,param_3 + 1);
  if (lVar1 != 0) {
    *param_1 = *param_1 + param_2;
  }
  return;
}



void ml_dsa_d2i_PUBKEY(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = ossl_ml_dsa_d2i_PUBKEY
                    (*param_1,param_2,*(undefined4 *)(param_3[0x21] + 0x18),*param_3,param_3 + 1);
  if (lVar1 != 0) {
    *param_1 = *param_1 + param_2;
  }
  return;
}



uint SubjectPublicKeyInfo_der2slh_dsa_shake_256f_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint PrivateKeyInfo_der2slh_dsa_shake_128f_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



bool ec_check(EC_KEY *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = EC_KEY_get_flags(param_1);
  if ((uVar2 & 4) != 0) {
    iVar1 = *(int *)(*(long *)(param_2 + 0x108) + 0x18);
    return iVar1 == 0x494 || iVar1 == 0x198;
  }
  return *(int *)(*(long *)(param_2 + 0x108) + 0x18) != 0x494;
}



undefined8 sm2_d2i_PKCS8(uchar **param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8;
  undefined8 uVar2;
  long in_FS_OFFSET;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (X509_ALGOR *)0x0;
  p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,param_1,param_2);
  if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_28,p8);
    if (iVar1 != 0) {
      iVar1 = OBJ_obj2nid(local_28->algorithm);
      if (iVar1 != *(int *)(param_3[0x21] + 0x18)) {
        iVar1 = OBJ_obj2nid(local_28->algorithm);
        if ((iVar1 != 0x198) || (*(int *)(param_3[0x21] + 0x18) != 0x494)) goto LAB_00102200;
      }
      uVar2 = ossl_prov_ctx_get0_libctx(*param_3);
      uVar2 = ossl_ec_key_from_pkcs8(p8,uVar2,param_3 + 1);
      goto LAB_00102202;
    }
  }
LAB_00102200:
  uVar2 = 0;
LAB_00102202:
  PKCS8_PRIV_KEY_INFO_free(p8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint DSA_der2dsa_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if ((param_2 != 0) && (uVar1 = param_2 & 1, uVar1 == 0)) {
    if ((param_2 & 2) == 0) {
      return (uint)((param_2 & 0x84) != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}



bool RSA_der2rsa_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 != 0;
}



bool EC_der2ec_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



bool type_specific_no_pub_der2sm2_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}



bool DHX_der2dhx_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



bool DH_der2dh_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



bool type_specific_params_der2dhx_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return (uVar1 & 0x84) != 0;
}



uint PrivateKeyInfo_der2dhx_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2ml_dsa_44_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2ml_dsa_65_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2ml_dsa_87_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2slh_dsa_shake_192s_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2slh_dsa_shake_192f_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2slh_dsa_shake_256s_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2slh_dsa_shake_256f_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2dsa_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2rsapss_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2x25519_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2ec_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2x448_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2ed25519_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2ed448_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2sm2_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2rsa_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2ml_kem_512_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2ml_kem_768_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2ml_kem_1024_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2slh_dsa_sha2_128s_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2slh_dsa_sha2_128f_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2slh_dsa_sha2_192s_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2slh_dsa_sha2_192f_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2slh_dsa_sha2_256s_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2slh_dsa_sha2_256f_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint PrivateKeyInfo_der2slh_dsa_shake_128s_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



uint SubjectPublicKeyInfo_der2ml_kem_768_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2ml_kem_1024_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2slh_dsa_sha2_128s_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2slh_dsa_sha2_128f_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2slh_dsa_sha2_192s_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2slh_dsa_sha2_192f_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2dhx_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2rsapss_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2dsa_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2x25519_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2x448_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2sm2_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2ec_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2rsa_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2ml_kem_512_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2ed25519_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2ed448_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2ml_dsa_44_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2ml_dsa_65_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2ml_dsa_87_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2slh_dsa_sha2_256s_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2slh_dsa_sha2_256f_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2slh_dsa_shake_128s_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2slh_dsa_shake_128f_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2slh_dsa_shake_192s_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2slh_dsa_shake_192f_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



uint SubjectPublicKeyInfo_der2slh_dsa_shake_256s_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return 0;
      }
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
  }
  return uVar1 >> 1;
}



undefined8 rsa_d2i_PKCS8(uchar **param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8;
  undefined8 uVar2;
  long in_FS_OFFSET;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (X509_ALGOR *)0x0;
  p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,param_1,param_2);
  if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_28,p8);
    if (iVar1 != 0) {
      iVar1 = OBJ_obj2nid(local_28->algorithm);
      if (iVar1 != *(int *)(param_3[0x21] + 0x18)) {
        iVar1 = OBJ_obj2nid(local_28->algorithm);
        if ((iVar1 != 0x198) || (*(int *)(param_3[0x21] + 0x18) != 0x494)) goto LAB_00103280;
      }
      uVar2 = ossl_prov_ctx_get0_libctx(*param_3);
      uVar2 = ossl_rsa_key_from_pkcs8(p8,uVar2,param_3 + 1);
      goto LAB_00103282;
    }
  }
LAB_00103280:
  uVar2 = 0;
LAB_00103282:
  PKCS8_PRIV_KEY_INFO_free(p8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 dh_d2i_PKCS8(uchar **param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8;
  undefined8 uVar2;
  long in_FS_OFFSET;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (X509_ALGOR *)0x0;
  p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,param_1,param_2);
  if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_28,p8);
    if (iVar1 != 0) {
      iVar1 = OBJ_obj2nid(local_28->algorithm);
      if (iVar1 != *(int *)(param_3[0x21] + 0x18)) {
        iVar1 = OBJ_obj2nid(local_28->algorithm);
        if ((iVar1 != 0x198) || (*(int *)(param_3[0x21] + 0x18) != 0x494)) goto LAB_00103360;
      }
      uVar2 = ossl_prov_ctx_get0_libctx(*param_3);
      uVar2 = ossl_dh_key_from_pkcs8(p8,uVar2,param_3 + 1);
      goto LAB_00103362;
    }
  }
LAB_00103360:
  uVar2 = 0;
LAB_00103362:
  PKCS8_PRIV_KEY_INFO_free(p8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 dsa_d2i_PKCS8(uchar **param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8;
  undefined8 uVar2;
  long in_FS_OFFSET;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (X509_ALGOR *)0x0;
  p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,param_1,param_2);
  if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_28,p8);
    if (iVar1 != 0) {
      iVar1 = OBJ_obj2nid(local_28->algorithm);
      if (iVar1 != *(int *)(param_3[0x21] + 0x18)) {
        iVar1 = OBJ_obj2nid(local_28->algorithm);
        if ((iVar1 != 0x198) || (*(int *)(param_3[0x21] + 0x18) != 0x494)) goto LAB_00103440;
      }
      uVar2 = ossl_prov_ctx_get0_libctx(*param_3);
      uVar2 = ossl_dsa_key_from_pkcs8(p8,uVar2,param_3 + 1);
      goto LAB_00103442;
    }
  }
LAB_00103440:
  uVar2 = 0;
LAB_00103442:
  PKCS8_PRIV_KEY_INFO_free(p8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ec_d2i_PKCS8(uchar **param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8;
  undefined8 uVar2;
  long in_FS_OFFSET;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (X509_ALGOR *)0x0;
  p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,param_1,param_2);
  if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_28,p8);
    if (iVar1 != 0) {
      iVar1 = OBJ_obj2nid(local_28->algorithm);
      if (iVar1 != *(int *)(param_3[0x21] + 0x18)) {
        iVar1 = OBJ_obj2nid(local_28->algorithm);
        if ((iVar1 != 0x198) || (*(int *)(param_3[0x21] + 0x18) != 0x494)) goto LAB_00103520;
      }
      uVar2 = ossl_prov_ctx_get0_libctx(*param_3);
      uVar2 = ossl_ec_key_from_pkcs8(p8,uVar2,param_3 + 1);
      goto LAB_00103522;
    }
  }
LAB_00103520:
  uVar2 = 0;
LAB_00103522:
  PKCS8_PRIV_KEY_INFO_free(p8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ecx_d2i_PKCS8(uchar **param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8;
  undefined8 uVar2;
  long in_FS_OFFSET;
  X509_ALGOR *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (X509_ALGOR *)0x0;
  p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,param_1,param_2);
  if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,(uchar **)0x0,(int *)0x0,&local_28,p8);
    if (iVar1 != 0) {
      iVar1 = OBJ_obj2nid(local_28->algorithm);
      if (iVar1 != *(int *)(param_3[0x21] + 0x18)) {
        iVar1 = OBJ_obj2nid(local_28->algorithm);
        if ((iVar1 != 0x198) || (*(int *)(param_3[0x21] + 0x18) != 0x494)) goto LAB_00103600;
      }
      uVar2 = ossl_prov_ctx_get0_libctx(*param_3);
      uVar2 = ossl_ecx_key_from_pkcs8(p8,uVar2,param_3 + 1);
      goto LAB_00103602;
    }
  }
LAB_00103600:
  uVar2 = 0;
LAB_00103602:
  PKCS8_PRIV_KEY_INFO_free(p8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


