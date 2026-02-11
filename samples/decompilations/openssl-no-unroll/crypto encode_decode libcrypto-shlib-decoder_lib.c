
void collect_all_decoders(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = OSSL_DECODER_up_ref();
  if (iVar1 != 0) {
    iVar1 = OPENSSL_sk_push(param_2,param_1);
    if (iVar1 == 0) {
      OSSL_DECODER_free(param_1);
      return;
    }
  }
  return;
}



undefined8 OSSL_DECODER_CTX_set_selection(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/decoder_lib.c",0xa9,"OSSL_DECODER_CTX_set_selection");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}



undefined8 OSSL_DECODER_CTX_set_input_type(undefined8 *param_1,undefined8 param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/decoder_lib.c",0xb9,"OSSL_DECODER_CTX_set_input_type");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}



undefined8 OSSL_DECODER_CTX_set_input_structure(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/decoder_lib.c",0xc9,"OSSL_DECODER_CTX_set_input_structure");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}



void ossl_decoder_instance_free(long *param_1)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x38))(param_1[1]);
      lVar1 = *param_1;
    }
    param_1[1] = 0;
    OSSL_DECODER_free(lVar1);
    *param_1 = 0;
    CRYPTO_free(param_1);
    return;
  }
  return;
}



long * ossl_decoder_instance_new(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/encode_decode/decoder_lib.c",0xfb,"ossl_decoder_instance_new");
    ERR_set_error(0x3c,0xc0102,0);
  }
  else {
    plVar2 = (long *)CRYPTO_zalloc(0x28,"crypto/encode_decode/decoder_lib.c",0xff);
    if (plVar2 != (long *)0x0) {
      uVar3 = OSSL_DECODER_get0_provider(param_1);
      uVar3 = ossl_provider_libctx(uVar3);
      lVar4 = ossl_decoder_parsed_properties(param_1);
      if (lVar4 == 0) {
        ERR_new();
        ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x106,"ossl_decoder_instance_new");
        uVar3 = OSSL_DECODER_get0_name(param_1);
        ERR_set_error(0x3c,0x8010e,"there are no property definitions with decoder %s",uVar3);
      }
      else {
        uVar5 = ossl_property_find_property(lVar4,uVar3,"input");
        lVar6 = ossl_property_get_string_value(uVar3,uVar5);
        *(undefined4 *)(plVar2 + 4) = 0;
        plVar2[2] = lVar6;
        if (lVar6 == 0) {
          ERR_new();
          ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x111,"ossl_decoder_instance_new");
          uVar3 = OSSL_DECODER_get0_properties(param_1);
          uVar5 = OSSL_DECODER_get0_name(param_1);
          ERR_set_error(0x3c,0x8010e,
                        "the mandatory \'input\' property is missing for decoder %s (properties: %s)"
                        ,uVar5,uVar3);
        }
        else {
          lVar4 = ossl_property_find_property(lVar4,uVar3,"structure");
          if (lVar4 != 0) {
            lVar4 = ossl_property_get_string_value(uVar3,lVar4);
            plVar2[3] = lVar4;
          }
          iVar1 = OSSL_DECODER_up_ref(param_1);
          if (iVar1 != 0) {
            *plVar2 = param_1;
            plVar2[1] = param_2;
            return plVar2;
          }
          ERR_new();
          ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x121,"ossl_decoder_instance_new");
          ERR_set_error(0x3c,0xc0103,0);
        }
      }
      ossl_decoder_instance_free(plVar2);
      return (long *)0x0;
    }
  }
  return (long *)0x0;
}



undefined8 ossl_decoder_instance_new_forprov(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/encode_decode/decoder_lib.c",0xdc,"ossl_decoder_instance_new_forprov");
    ERR_set_error(0x3c,0xc0102,0);
  }
  else {
    lVar2 = (**(code **)(param_1 + 0x30))(param_2);
    if (lVar2 != 0) {
      if ((param_3 != 0) && (*(long *)(param_1 + 0x50) != 0)) {
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        local_48 = (undefined1  [16])0x0;
        local_38 = (undefined1  [16])0x0;
        OSSL_PARAM_construct_utf8_string(local_a8,"data-structure",param_3,0);
        local_58._0_8_ = local_88;
        iVar1 = (**(code **)(param_1 + 0x50))(lVar2,local_78);
        if (iVar1 == 0) {
          (**(code **)(param_1 + 0x38))(lVar2);
          goto LAB_001004d0;
        }
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = ossl_decoder_instance_new(param_1,lVar2);
        return uVar3;
      }
      goto LAB_00100500;
    }
  }
LAB_001004d0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00100500:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long * ossl_decoder_instance_dup(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *ptr;
  undefined8 uVar5;
  long lVar6;
  
  ptr = (long *)CRYPTO_zalloc(0x28,"crypto/encode_decode/decoder_lib.c",0x13e);
  if (ptr != (long *)0x0) {
    lVar1 = param_1[1];
    lVar2 = param_1[2];
    lVar3 = param_1[3];
    lVar6 = *param_1;
    *ptr = *param_1;
    ptr[1] = lVar1;
    ptr[2] = lVar2;
    ptr[3] = lVar3;
    ptr[4] = param_1[4];
    iVar4 = OSSL_DECODER_up_ref(lVar6);
    if (iVar4 == 0) {
      ERR_new();
      ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x143,"ossl_decoder_instance_dup");
      ERR_set_error(0x3c,0xc0103,0);
    }
    else {
      uVar5 = OSSL_DECODER_get0_provider(*ptr);
      uVar5 = OSSL_PROVIDER_get0_provider_ctx(uVar5);
      lVar6 = (**(code **)(*ptr + 0x30))(uVar5);
      ptr[1] = lVar6;
      if (lVar6 != 0) {
        return ptr;
      }
      ERR_new();
      ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x14b,"ossl_decoder_instance_dup");
      ERR_set_error(0x3c,0xc0103,0);
      OSSL_DECODER_free(*ptr);
    }
    CRYPTO_free(ptr);
  }
  return (long *)0x0;
}



void ossl_decoder_ctx_set_harderr(long param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 1;
  return;
}



undefined4 ossl_decoder_ctx_get_harderr(long param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



bool ossl_decoder_ctx_add_decoder_inst(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar2 = OPENSSL_sk_new_null();
    *(long *)(param_1 + 0x18) = lVar2;
    if (lVar2 == 0) {
      ERR_new(0,param_2);
      ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x169,"ossl_decoder_ctx_add_decoder_inst");
      ERR_set_error(0x3c,0x8000f,0);
      return false;
    }
  }
  iVar1 = OPENSSL_sk_push();
  return 0 < iVar1;
}



undefined8 OSSL_DECODER_CTX_add_decoder(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x183,"OSSL_DECODER_CTX_add_decoder");
    ERR_set_error(0x3c,0xc0102,0);
  }
  else {
    uVar2 = OSSL_DECODER_get0_provider(param_2);
    uVar2 = OSSL_PROVIDER_get0_provider_ctx(uVar2);
    lVar3 = (**(code **)(param_2 + 0x30))(uVar2);
    if (lVar3 == 0) {
      ossl_decoder_instance_free(0);
    }
    else {
      lVar4 = ossl_decoder_instance_new(param_2,lVar3);
      if (lVar4 == 0) {
        ossl_decoder_instance_free(0);
        (**(code **)(param_2 + 0x38))(lVar3);
      }
      else {
        iVar1 = ossl_decoder_ctx_add_decoder_inst(param_1,lVar4);
        if (iVar1 != 0) {
          return 1;
        }
        ossl_decoder_instance_free(lVar4);
      }
    }
  }
  return 0;
}



undefined8 OSSL_DECODER_CTX_get_num_decoders(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = OPENSSL_sk_num();
    return uVar1;
  }
  return 0;
}



undefined8 OSSL_DECODER_CTX_set_construct(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x290,"OSSL_DECODER_CTX_set_construct");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}



undefined8 OSSL_DECODER_CTX_set_construct_data(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x30) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x29b,"OSSL_DECODER_CTX_set_construct_data");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}



undefined8 OSSL_DECODER_CTX_set_cleanup(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x2a6,"OSSL_DECODER_CTX_set_cleanup");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}



undefined8 OSSL_DECODER_CTX_get_construct(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x20);
  }
  return 0;
}



undefined8 OSSL_DECODER_CTX_get_construct_data(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x30);
  }
  return 0;
}



undefined8 OSSL_DECODER_CTX_get_cleanup(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  return 0;
}



undefined8 OSSL_DECODER_INSTANCE_get_decoder(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



undefined8 OSSL_DECODER_INSTANCE_get_decoder_ctx(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



undefined8
OSSL_DECODER_export(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  if (((param_4 != 0 && param_5 != 0) && param_2 != 0) && (param_1 != 0)) {
    lVar1 = OSSL_DECODER_INSTANCE_get_decoder();
    uVar2 = OSSL_DECODER_INSTANCE_get_decoder_ctx(param_1);
                    /* WARNING: Could not recover jumptable at 0x00100a1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x70))(uVar2,param_2,param_3,param_4,param_5);
    return uVar2;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x2cf,"OSSL_DECODER_export");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}



undefined8 OSSL_DECODER_INSTANCE_get_input_type(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}



undefined8 OSSL_DECODER_CTX_add_extra(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  ulong local_120;
  ulong local_110;
  undefined1 local_108 [32];
  undefined8 local_e8;
  long local_d8;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x23d,"OSSL_DECODER_CTX_add_extra");
    ERR_set_error(0x3c,0xc0102,0);
    uVar3 = 0;
    goto LAB_00100e0f;
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar2 = OPENSSL_sk_new_null();
    if (lVar2 != 0) {
      OSSL_DECODER_do_all_provided(param_2,0x100000,lVar2);
      iVar1 = OPENSSL_sk_num(lVar2);
      uVar10 = (ulong)iVar1;
      local_d0 = (undefined1  [16])0x0;
      local_c0 = (undefined1  [16])0x0;
      local_b0 = (undefined1  [16])0x0;
      local_d8 = param_1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x18));
      local_110 = 0;
      local_b0._8_8_ = SEXT48(iVar1);
      local_c0._8_8_ = local_b0._8_8_;
      local_120 = local_c0._0_8_;
LAB_00100b42:
      local_d0._12_4_ = 0;
      uVar8 = 0;
      local_b0._0_8_ = local_b0._8_8_;
      uVar9 = local_b0._8_8_;
      do {
        if (local_120 < uVar9) {
          do {
            uVar9 = 0;
            uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x18),local_120 & 0xffffffff);
            uVar3 = OSSL_DECODER_INSTANCE_get_input_type(uVar3);
            local_d0._8_4_ = 0;
            local_d0._0_8_ = uVar3;
            if (uVar10 != 0) {
              do {
                while( true ) {
                  lVar4 = OPENSSL_sk_value(lVar2,uVar9 & 0xffffffff);
                  uVar3 = OSSL_DECODER_get0_provider(lVar4);
                  uVar3 = OSSL_PROVIDER_get0_provider_ctx(uVar3);
                  iVar1 = ossl_decoder_fast_is_a(lVar4,local_d0._0_8_,local_d0 + 8);
                  if (iVar1 != 0) break;
joined_r0x00100d7d:
                  uVar9 = uVar9 + 1;
                  if (uVar10 == uVar9) goto LAB_00100c29;
                }
                uVar11 = local_c0._0_8_;
                if ((ulong)local_c0._0_8_ < (ulong)local_b0._8_8_) {
                  do {
                    plVar5 = (long *)OPENSSL_sk_value(*(undefined8 *)(local_d8 + 0x18),
                                                      uVar11 & 0xffffffff);
                    if (*(long *)(lVar4 + 0x18) == *(long *)(*plVar5 + 0x18))
                    goto joined_r0x00100d7d;
                    uVar11 = uVar11 + 1;
                  } while (uVar11 < (ulong)local_b0._8_8_);
                }
                lVar6 = (**(code **)(lVar4 + 0x30))(uVar3);
                if (lVar6 == 0) goto joined_r0x00100d7d;
                if ((*(long *)(lVar4 + 0x50) != 0) && (*(long *)(local_d8 + 8) != 0)) {
                  local_98 = (undefined1  [16])0x0;
                  local_88 = (undefined1  [16])0x0;
                  local_78 = (undefined1  [16])0x0;
                  local_68 = (undefined1  [16])0x0;
                  local_58 = (undefined1  [16])0x0;
                  OSSL_PARAM_construct_utf8_string
                            (local_108,"data-structure",*(long *)(local_d8 + 8),0);
                  local_78._0_8_ = local_e8;
                  iVar1 = (**(code **)(lVar4 + 0x50))(lVar6,local_98);
                  if (iVar1 != 0) goto LAB_00100d09;
LAB_00100d70:
                  (**(code **)(lVar4 + 0x38))(lVar6);
                  goto joined_r0x00100d7d;
                }
LAB_00100d09:
                lVar7 = ossl_decoder_instance_new(lVar4,lVar6);
                if (lVar7 == 0) goto LAB_00100d70;
                if (local_d0._12_4_ == 0) {
                  uVar3 = OSSL_DECODER_INSTANCE_get_input_type(lVar7);
                  iVar1 = ossl_decoder_fast_is_a(lVar4,uVar3,lVar7 + 0x20);
joined_r0x00100da9:
                  if (iVar1 != 0) goto LAB_00100d44;
LAB_00100dab:
                  ossl_decoder_instance_free(lVar7);
                  goto joined_r0x00100d7d;
                }
                if (local_d0._12_4_ == 1) {
                  uVar3 = OSSL_DECODER_INSTANCE_get_input_type(lVar7);
                  iVar1 = ossl_decoder_fast_is_a(lVar4,uVar3,lVar7 + 0x20);
                  goto joined_r0x00100da9;
                }
LAB_00100d44:
                iVar1 = ossl_decoder_ctx_add_decoder_inst(local_d8,lVar7);
                if (iVar1 == 0) goto LAB_00100dab;
                local_b0._8_8_ = local_b0._8_8_ + 1;
                uVar9 = uVar9 + 1;
              } while (uVar10 != uVar9);
            }
LAB_00100c29:
            local_120 = local_120 + 1;
          } while (local_120 < (ulong)local_c0._8_8_);
          uVar9 = local_c0._8_8_;
          uVar8 = local_d0._12_4_;
        }
        uVar8 = uVar8 + 1;
        local_d0._12_4_ = uVar8;
        if (1 < uVar8) goto LAB_00100dc5;
        local_120 = local_c0._0_8_;
      } while( true );
    }
    ERR_new();
    ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x250,"OSSL_DECODER_CTX_add_extra");
    ERR_set_error(0x3c,0x8000f,0);
    uVar3 = 0;
    goto LAB_00100e0f;
  }
  goto LAB_00100e0a;
LAB_00100dc5:
  local_120 = local_b0._0_8_;
  local_110 = local_110 + 1;
  local_c0 = local_b0;
  if ((local_b0._8_8_ == local_b0._0_8_) || (10 < local_110)) goto LAB_00100dfb;
  goto LAB_00100b42;
LAB_00100dfb:
  OPENSSL_sk_pop_free(lVar2,OSSL_DECODER_free);
LAB_00100e0a:
  uVar3 = 1;
LAB_00100e0f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 OSSL_DECODER_INSTANCE_get_input_structure(long param_1,uint *param_2)

{
  if (param_1 != 0) {
    *param_2 = *(byte *)(param_1 + 0x24) & 1;
    return *(undefined8 *)(param_1 + 0x18);
  }
  return 0;
}



int decoder_process(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long larg;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_d0;
  BIO *local_b0;
  int local_a8;
  undefined4 local_7c;
  long local_78;
  long local_70;
  long *local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  plVar1 = (long *)*param_2;
  lVar2 = *plVar1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  local_78 = 0;
  local_70 = 0;
  local_50._8_8_ = 0;
  local_50._0_8_ = param_2[3] + 1;
  local_60 = (undefined1  [16])0x0;
  local_68 = plVar1;
  if (param_1 == 0) {
    iVar3 = OSSL_DECODER_CTX_get_num_decoders(plVar1);
    local_b0 = (BIO *)param_2[1];
    lVar6 = (long)iVar3;
    param_2[2] = lVar6;
    local_d0 = 0;
LAB_00101037:
    if (lVar6 != 0) {
      lVar6 = BIO_ctrl(local_b0,0x85,0,(void *)0x0);
      iVar3 = (int)lVar6;
      larg = (long)iVar3;
      if (larg < 0) {
        ERR_new();
        uVar5 = 0x39b;
      }
      else {
        lVar6 = ossl_core_bio_new_from_bio(local_b0);
        if (lVar6 != 0) {
          uVar12 = param_2[2] - 1;
          if (param_2[2] == 0) {
            local_a8 = 0;
          }
          else {
            local_a8 = 0;
            if (local_d0 == 0) {
              do {
                uVar5 = OPENSSL_sk_value(plVar1[3],uVar12 & 0xffffffff);
                lVar7 = OSSL_DECODER_INSTANCE_get_decoder(uVar5);
                uVar9 = OSSL_DECODER_INSTANCE_get_decoder_ctx(uVar5);
                uVar11 = OSSL_DECODER_INSTANCE_get_input_type(uVar5);
                local_7c = 0;
                lVar8 = OSSL_DECODER_INSTANCE_get_input_structure(uVar5,&local_7c);
                if (((*plVar1 == 0) || (iVar4 = OPENSSL_strcasecmp(*plVar1,uVar11), iVar4 == 0)) &&
                   ((local_78 == 0 || (iVar4 = OSSL_DECODER_is_a(lVar7), iVar4 != 0)))) {
                  if (local_70 == 0) {
                    if (((*(byte *)(param_2 + 4) & 4) == 0) && (lVar10 = lVar8, plVar1[1] != 0)) {
joined_r0x001013c7:
                      if (lVar10 != 0) {
                        *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
                        iVar4 = OPENSSL_strcasecmp(lVar8);
                        if (iVar4 != 0) goto LAB_001014b5;
                      }
                    }
                  }
                  else {
                    if ((lVar8 == 0) || (iVar4 = OPENSSL_strcasecmp(local_70,lVar8), iVar4 != 0))
                    goto LAB_001014b5;
                    if ((*(byte *)(param_2 + 4) & 4) == 0) {
                      lVar10 = plVar1[1];
                      goto joined_r0x001013c7;
                    }
                  }
                  BIO_ctrl(local_b0,0x80,larg,(void *)0x0);
                  lVar8 = BIO_ctrl(local_b0,0x85,0,(void *)0x0);
                  if (iVar3 != (int)lVar8) break;
                  ERR_set_mark();
                  local_60._8_8_ = uVar12;
                  local_50[8] = local_50[8] & 0xfb | *(byte *)(param_2 + 4) & 4;
                  local_a8 = (**(code **)(lVar7 + 0x68))
                                       (uVar9,lVar6,(int)local_68[2],decoder_process,&local_68,
                                        &ossl_pw_passphrase_callback_dec);
                  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfd | local_50[8] & 2;
                  if (local_a8 == 0) goto LAB_001015ec;
                  if ((local_50 & (undefined1  [16])0x2) != (undefined1  [16])0x0)
                  goto LAB_001015f4;
                  ERR_pop_to_mark();
                  if ((local_50 & (undefined1  [16])0x1) != (undefined1  [16])0x0) break;
                }
LAB_001014b5:
                bVar13 = uVar12 != 0;
                uVar12 = uVar12 - 1;
              } while (bVar13);
            }
            else {
              do {
                lVar7 = OPENSSL_sk_value(plVar1[3],uVar12 & 0xffffffff);
                lVar8 = OSSL_DECODER_INSTANCE_get_decoder(lVar7);
                uVar5 = OSSL_DECODER_INSTANCE_get_decoder_ctx(lVar7);
                uVar9 = OSSL_DECODER_INSTANCE_get_input_type(lVar7);
                local_7c = 0;
                lVar10 = OSSL_DECODER_INSTANCE_get_input_structure(lVar7,&local_7c);
                iVar4 = ossl_decoder_fast_is_a(local_d0,uVar9,lVar7 + 0x20);
                if ((iVar4 != 0) &&
                   ((local_78 == 0 || (iVar4 = OSSL_DECODER_is_a(lVar8), iVar4 != 0)))) {
                  if (local_70 == 0) {
                    if (((*(byte *)(param_2 + 4) & 4) == 0) && (lVar7 = plVar1[1], lVar10 != 0)) {
LAB_001010e4:
                      if (lVar7 != 0) {
                        *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
                        iVar4 = OPENSSL_strcasecmp(lVar10);
                        if (iVar4 != 0) goto LAB_001011db;
                      }
                    }
                  }
                  else {
                    if ((lVar10 == 0) || (iVar4 = OPENSSL_strcasecmp(local_70,lVar10), iVar4 != 0))
                    goto LAB_001011db;
                    if ((*(byte *)(param_2 + 4) & 4) == 0) {
                      lVar7 = plVar1[1];
                      goto LAB_001010e4;
                    }
                  }
                  BIO_ctrl(local_b0,0x80,larg,(void *)0x0);
                  lVar7 = BIO_ctrl(local_b0,0x85,0,(void *)0x0);
                  if (iVar3 != (int)lVar7) break;
                  ERR_set_mark();
                  local_60._8_8_ = uVar12;
                  local_50[8] = local_50[8] & 0xfb | *(byte *)(param_2 + 4) & 4;
                  local_a8 = (**(code **)(lVar8 + 0x68))
                                       (uVar5,lVar6,(int)local_68[2],decoder_process,&local_68,
                                        &ossl_pw_passphrase_callback_dec,local_68 + 7);
                  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfd | local_50[8] & 2;
                  if (local_a8 == 0) goto LAB_001015ec;
                  if ((local_50 & (undefined1  [16])0x2) != (undefined1  [16])0x0)
                  goto LAB_001015f4;
                  ERR_pop_to_mark();
                  if ((local_50 & (undefined1  [16])0x1) != (undefined1  [16])0x0) break;
                }
LAB_001011db:
                bVar13 = uVar12 != 0;
                uVar12 = uVar12 - 1;
              } while (bVar13);
            }
          }
          goto LAB_00100fd7;
        }
        ERR_new();
        uVar5 = 0x3a0;
      }
      ERR_set_debug("crypto/encode_decode/decoder_lib.c",uVar5,"decoder_process");
      ERR_set_error(0x3c,0x80020,0);
    }
  }
  else {
    uVar5 = OPENSSL_sk_value(plVar1[3],(int)param_2[2]);
    local_d0 = OSSL_DECODER_INSTANCE_get_decoder(uVar5);
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfd;
    if (((code *)plVar1[4] != (code *)0x0) &&
       (iVar3 = (*(code *)plVar1[4])(uVar5,param_1,plVar1[6]), 0 < iVar3)) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
      lVar6 = 0;
      local_a8 = 1;
      goto LAB_00100fd7;
    }
    lVar6 = OSSL_PARAM_locate_const(param_1,&_LC6);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 8) == 5)) {
      local_b0 = BIO_new_mem_buf(*(void **)(lVar6 + 0x10),*(int *)(lVar6 + 0x18));
      local_60._0_8_ = local_b0;
      if (((local_b0 != (BIO *)0x0) &&
          ((lVar6 = OSSL_PARAM_locate_const(param_1,"data-type"), lVar6 == 0 ||
           (iVar3 = OSSL_PARAM_get_utf8_string_ptr(lVar6,&local_78), iVar3 != 0)))) &&
         ((lVar6 = OSSL_PARAM_locate_const(param_1,"data-structure"), lVar6 == 0 ||
          (iVar3 = OSSL_PARAM_get_utf8_string_ptr(lVar6,&local_70), iVar3 != 0)))) {
        lVar6 = OSSL_PARAM_locate_const(param_1,"input-type");
        if (lVar6 != 0) {
          iVar3 = OSSL_PARAM_get_utf8_string_ptr(lVar6,plVar1);
          if (iVar3 == 0) goto LAB_00100fb6;
          if ((plVar1[1] != 0) &&
             (((iVar3 = OPENSSL_strcasecmp(plVar1[1],"SubjectPublicKeyInfo"), iVar3 == 0 ||
               (iVar3 = OPENSSL_strcasecmp(local_70,"PrivateKeyInfo"), iVar3 == 0)) ||
              (iVar3 = OPENSSL_strcasecmp(plVar1[1],"PrivateKeyInfo"), iVar3 == 0)))) {
            *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 4;
          }
        }
        if (((local_78 != 0) && (local_70 != 0)) &&
           (iVar3 = OPENSSL_strcasecmp(local_70,"type-specific"), iVar3 == 0)) {
          local_70 = 0;
        }
        lVar6 = param_2[2];
        goto LAB_00101037;
      }
    }
  }
LAB_00100fb6:
  local_a8 = 0;
  lVar6 = 0;
LAB_00100fd7:
  ossl_core_bio_free(lVar6);
  BIO_free((BIO *)local_60._0_8_);
  *plVar1 = lVar2;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_a8;
LAB_001015ec:
  local_a8 = 0;
LAB_001015f4:
  ERR_clear_last_mark();
  goto LAB_00100fd7;
}



undefined4 OSSL_DECODER_from_bio(long *param_1,BIO *param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  BIO_METHOD *type;
  BIO *b;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long in_FS_OFFSET;
  char *local_80;
  char *local_78;
  undefined *local_70;
  long *local_68;
  BIO *local_60;
  undefined1 local_58 [16];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x37,"OSSL_DECODER_from_bio");
    ERR_set_error(0x3c,0xc0102,0);
  }
  else {
    iVar1 = OSSL_DECODER_CTX_get_num_decoders();
    if (iVar1 != 0) {
      uVar3 = ERR_peek_last_error();
      lVar4 = BIO_ctrl(param_2,0x85,0,(void *)0x0);
      if ((int)lVar4 < 0) {
        type = (BIO_METHOD *)BIO_f_readbuffer();
        b = BIO_new(type);
        if (b == (BIO *)0x0) goto LAB_001018b5;
        local_60 = BIO_push(b,param_2);
        local_48 = 0;
        local_58 = (undefined1  [16])0x0;
        local_68 = param_1;
        ossl_pw_enable_passphrase_caching(param_1 + 7);
        uVar2 = decoder_process(0,&local_68);
        if ((local_48 & 2) == 0) goto LAB_00101726;
        ossl_pw_clear_passphrase_cache(param_1 + 7);
      }
      else {
        local_58 = (undefined1  [16])0x0;
        local_48 = 0;
        local_68 = param_1;
        local_60 = param_2;
        ossl_pw_enable_passphrase_caching(param_1 + 7);
        uVar2 = decoder_process(0,&local_68);
        if ((local_48 & 2) != 0) {
          ossl_pw_clear_passphrase_cache(param_1 + 7);
          goto LAB_001018b8;
        }
        b = (BIO *)0x0;
LAB_00101726:
        puVar7 = (undefined *)*param_1;
        puVar8 = (undefined *)param_1[1];
        if (puVar7 == (undefined *)0x0) {
          puVar6 = &_LC12;
          local_80 = "";
          puVar7 = &_LC12;
          local_70 = &_LC12;
          if (puVar8 == (undefined *)0x0) goto LAB_00101970;
          local_78 = "Input structure: ";
        }
        else if (puVar8 == (undefined *)0x0) {
          local_80 = "Input type: ";
LAB_00101970:
          local_70 = &_LC12;
          puVar6 = &_LC12;
          local_78 = "";
          puVar8 = &_LC12;
        }
        else {
          puVar6 = &_LC15;
          local_80 = "Input type: ";
          local_70 = &_LC16;
          local_78 = "Input structure: ";
        }
        uVar5 = ERR_peek_last_error();
        if (uVar5 == uVar3) {
LAB_0010177f:
          ERR_new();
          ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x66,"OSSL_DECODER_from_bio");
          ERR_set_error(0x3c,0x8010c,"No supported data to decode. %s%s%s%s%s%s",puVar6,local_80,
                        puVar7,local_70,local_78,puVar8);
        }
        else {
          uVar3 = ERR_peek_error();
          if (uVar3 == 0) goto LAB_0010177f;
        }
        ossl_pw_clear_passphrase_cache(param_1 + 7);
        if (b == (BIO *)0x0) goto LAB_001018b5;
        uVar2 = 0;
      }
      BIO_pop(b);
      BIO_free(b);
      goto LAB_001018b8;
    }
    ERR_new();
    ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x3c,"OSSL_DECODER_from_bio");
    ERR_set_error(0x3c,0x66,
                  "No decoders were found. For standard decoders you need at least one of the default or base providers available. Did you forget to load them?"
                 );
  }
LAB_001018b5:
  uVar2 = 0;
LAB_001018b8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 OSSL_DECODER_from_fp(undefined8 param_1,void *param_2)

{
  undefined4 uVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,param_2);
    uVar1 = OSSL_DECODER_from_bio(param_1,bp);
    BIO_free(bp);
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x7d,"bio_from_file");
  ERR_set_error(0x3c,0x80020,0);
  BIO_free((BIO *)0x0);
  return 0;
}



int OSSL_DECODER_from_data(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  BIO *bp;
  long lVar2;
  
  if (((param_2 != (undefined8 *)0x0) && (param_3 != (long *)0x0)) &&
     ((void *)*param_2 != (void *)0x0)) {
    bp = BIO_new_mem_buf((void *)*param_2,(int)*param_3);
    iVar1 = OSSL_DECODER_from_bio(param_1,bp);
    if (iVar1 != 0) {
      lVar2 = BIO_ctrl(bp,3,0,param_2);
      iVar1 = 1;
      *param_3 = lVar2;
    }
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/decoder_lib.c",0x98,"OSSL_DECODER_from_data");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}


