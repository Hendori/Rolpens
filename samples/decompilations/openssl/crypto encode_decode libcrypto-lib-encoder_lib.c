
undefined8 OSSL_ENCODER_CTX_set_selection(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/encode_decode/encoder_lib.c",0xad,"OSSL_ENCODER_CTX_set_selection");
    ERR_set_error(0x3b,0xc0102,0);
    uVar1 = 0;
  }
  else if (param_2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/encode_decode/encoder_lib.c",0xb2,"OSSL_ENCODER_CTX_set_selection");
    ERR_set_error(0x3b,0x80106,0);
    uVar1 = 0;
  }
  else {
    *param_1 = param_2;
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 OSSL_ENCODER_CTX_set_output_type(long param_1,long param_2)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    *(long *)(param_1 + 8) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/encoder_lib.c",0xbe,"OSSL_ENCODER_CTX_set_output_type");
  ERR_set_error(0x3b,0xc0102,0);
  return 0;
}



undefined8 OSSL_ENCODER_CTX_set_output_structure(long param_1,long param_2)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    *(long *)(param_1 + 0x10) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/encoder_lib.c",0xca,"OSSL_ENCODER_CTX_set_output_structure");
  ERR_set_error(0x3b,0xc0102,0);
  return 0;
}



void ossl_encoder_instance_free(long *param_1)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x38))(param_1[1]);
      lVar1 = *param_1;
    }
    param_1[1] = 0;
    OSSL_ENCODER_free(lVar1);
    *param_1 = 0;
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 OSSL_ENCODER_CTX_add_encoder(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/encode_decode/encoder_lib.c",0x13a,"OSSL_ENCODER_CTX_add_encoder");
    ERR_set_error(0x3b,0xc0102,0);
    return 0;
  }
  uVar2 = OSSL_ENCODER_get0_provider(param_2);
  uVar2 = OSSL_PROVIDER_get0_provider_ctx(uVar2);
  lVar3 = (**(code **)(param_2 + 0x30))(uVar2);
  if (lVar3 == 0) {
    ossl_encoder_instance_free(0);
    return 0;
  }
  plVar4 = (long *)CRYPTO_zalloc(0x20,"crypto/encode_decode/encoder_lib.c",0xe0);
  if (plVar4 != (long *)0x0) {
    iVar1 = OSSL_ENCODER_up_ref(param_2);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/encode_decode/encoder_lib.c",0xe4,"ossl_encoder_instance_new");
      ERR_set_error(0x3b,0xc0103,0);
    }
    else {
      uVar2 = OSSL_ENCODER_get0_provider(param_2);
      uVar2 = ossl_provider_libctx(uVar2);
      lVar5 = ossl_encoder_parsed_properties(param_2);
      if (lVar5 == 0) {
        ERR_new();
        ERR_set_debug("crypto/encode_decode/encoder_lib.c",0xec,"ossl_encoder_instance_new");
        uVar2 = OSSL_ENCODER_get0_name(param_2);
        ERR_set_error(0x3c,0x8010e,"there are no property definitions with encoder %s",uVar2);
      }
      else {
        uVar6 = ossl_property_find_property(lVar5,uVar2,"output");
        lVar7 = ossl_property_get_string_value(uVar2,uVar6);
        plVar4[2] = lVar7;
        if (lVar7 != 0) {
          lVar5 = ossl_property_find_property(lVar5,uVar2,"structure");
          if (lVar5 != 0) {
            lVar5 = ossl_property_get_string_value(uVar2,lVar5);
            plVar4[3] = lVar5;
          }
          lVar5 = *(long *)(param_1 + 0x18);
          *plVar4 = param_2;
          plVar4[1] = lVar3;
          if (lVar5 == 0) {
            lVar5 = OPENSSL_sk_new_null();
            *(long *)(param_1 + 0x18) = lVar5;
            if (lVar5 == 0) {
              ERR_new(0);
              ERR_set_debug("crypto/encode_decode/encoder_lib.c",0x120,
                            "ossl_encoder_ctx_add_encoder_inst");
              ERR_set_error(0x3b,0x8000f,0);
              goto LAB_001003d8;
            }
          }
          iVar1 = OPENSSL_sk_push(lVar5,plVar4);
          if (0 < iVar1) {
            return 1;
          }
LAB_001003d8:
          ossl_encoder_instance_free(plVar4);
          return 0;
        }
        ERR_new();
        ERR_set_debug("crypto/encode_decode/encoder_lib.c",0xf6,"ossl_encoder_instance_new");
        uVar2 = OSSL_ENCODER_get0_properties(param_2);
        uVar6 = OSSL_ENCODER_get0_name(param_2);
        ERR_set_error(0x3c,0x8010e,
                      "the mandatory \'output\' property is missing for encoder %s (properties: %s)"
                      ,uVar6,uVar2);
      }
    }
    ossl_encoder_instance_free(plVar4);
  }
  ossl_encoder_instance_free(0);
  (**(code **)(param_2 + 0x38))(lVar3);
  return 0;
}



undefined8 OSSL_ENCODER_CTX_add_extra(void)

{
  return 1;
}



undefined8 OSSL_ENCODER_CTX_get_num_encoders(long param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar1 = OPENSSL_sk_num();
    return uVar1;
  }
  return 0;
}



undefined8 OSSL_ENCODER_CTX_set_construct(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/encoder_lib.c",0x164,"OSSL_ENCODER_CTX_set_construct");
  ERR_set_error(0x3b,0xc0102,0);
  return 0;
}



undefined8 OSSL_ENCODER_CTX_set_construct_data(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x30) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/encoder_lib.c",0x16f,"OSSL_ENCODER_CTX_set_construct_data");
  ERR_set_error(0x3b,0xc0102,0);
  return 0;
}



undefined8 OSSL_ENCODER_CTX_set_cleanup(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x28) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/encoder_lib.c",0x17a,"OSSL_ENCODER_CTX_set_cleanup");
  ERR_set_error(0x3b,0xc0102,0);
  return 0;
}



undefined8 OSSL_ENCODER_INSTANCE_get_encoder(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    return *param_1;
  }
  return 0;
}



undefined8 OSSL_ENCODER_INSTANCE_get_encoder_ctx(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



undefined8 OSSL_ENCODER_INSTANCE_get_output_type(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x10);
  }
  return 0;
}



undefined8 OSSL_ENCODER_INSTANCE_get_output_structure(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x18);
  }
  return 0;
}



int encoder_process(long *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  BIO *pBVar9;
  BIO_METHOD *type;
  long lVar10;
  undefined8 *puVar11;
  bool bVar12;
  BIO *pBVar13;
  BIO *bp;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  long local_270;
  undefined8 local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined1 (*local_228) [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188 [41];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[3] == 0) {
    lVar5 = *param_1;
    iVar3 = (int)param_1[2];
    *(uint *)(param_1 + 4) = -(uint)(*(long *)(lVar5 + 0x10) == 0);
    if (0 < iVar3) {
      do {
        iVar3 = iVar3 + -1;
        lVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar5 + 0x18),iVar3);
        local_270 = OSSL_ENCODER_INSTANCE_get_encoder(lVar5);
        local_268 = OSSL_ENCODER_INSTANCE_get_encoder_ctx(lVar5);
        uVar4 = OSSL_ENCODER_INSTANCE_get_output_type(lVar5);
        lVar7 = OSSL_ENCODER_INSTANCE_get_output_structure(lVar5);
        pauVar8 = (undefined1 (*) [16])*param_1;
        local_200 = (undefined1  [16])0x0;
        local_1f0 = (undefined1  [16])0x0;
        local_210._8_4_ = (int)param_1[4];
        local_210._0_8_ = lVar5;
        local_210._12_4_ = 0;
        auVar1._4_4_ = *(int *)((long)param_1 + 0x14) + 1;
        auVar1._0_4_ = iVar3;
        auVar1._8_8_ = 0;
        local_220 = auVar1 << 0x40;
        local_228 = pauVar8;
        if (*(long *)(*pauVar8 + 8) == 0) {
LAB_001008d8:
          if ((*(long *)pauVar8[1] != 0) && (lVar7 != 0)) {
            iVar2 = OPENSSL_strcasecmp(*(long *)pauVar8[1],lVar7);
            if (iVar2 != 0) goto LAB_0010092d;
            *(int *)(param_1 + 4) = (int)param_1[4] + 1;
          }
          iVar2 = encoder_process(&local_228);
          param_1[5] = local_200._0_8_;
          param_1[6] = local_200._8_8_;
          param_1[7] = local_1f0._0_8_;
          if (iVar2 != 0) {
            bVar12 = true;
            goto LAB_00100945;
          }
        }
        else {
          iVar2 = OPENSSL_strcasecmp(uVar4);
          if (iVar2 == 0) {
            pauVar8 = (undefined1 (*) [16])*param_1;
            goto LAB_001008d8;
          }
        }
LAB_0010092d:
        if (iVar3 == 0) goto LAB_001007bc;
        lVar5 = *param_1;
      } while( true );
    }
  }
  else {
    iVar3 = (int)param_1[2];
    if (0 < iVar3) {
LAB_001006b6:
      iVar3 = iVar3 + -1;
      uVar4 = OSSL_ENCODER_INSTANCE_get_encoder(param_1[3]);
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(*param_1 + 0x18),iVar3);
      local_270 = OSSL_ENCODER_INSTANCE_get_encoder(lVar5);
      local_268 = OSSL_ENCODER_INSTANCE_get_encoder_ctx(lVar5);
      uVar6 = OSSL_ENCODER_INSTANCE_get_output_type(lVar5);
      lVar7 = OSSL_ENCODER_INSTANCE_get_output_structure(lVar5);
      local_228 = (undefined1 (*) [16])*param_1;
      local_200 = (undefined1  [16])0x0;
      local_1f0 = (undefined1  [16])0x0;
      local_210._8_4_ = (int)param_1[4];
      local_210._0_8_ = lVar5;
      local_210._12_4_ = 0;
      local_220._4_4_ = *(int *)((long)param_1 + 0x14) + 1;
      local_220._0_4_ = iVar3;
      local_220._8_8_ = 0;
      local_220 = local_220 << 0x40;
      iVar2 = OSSL_ENCODER_is_a(uVar4,uVar6);
      if (iVar2 == 0) goto LAB_001007b2;
      if ((*(long *)(*param_1 + 0x10) != 0) && (lVar7 != 0)) {
        iVar2 = OPENSSL_strcasecmp(*(long *)(*param_1 + 0x10),lVar7);
        if (iVar2 != 0) goto LAB_001007b2;
        *(int *)(param_1 + 4) = (int)param_1[4] + 1;
      }
      iVar2 = encoder_process(&local_228);
      param_1[5] = local_200._0_8_;
      param_1[6] = local_200._8_8_;
      param_1[7] = local_1f0._0_8_;
      if (iVar2 == 0) goto LAB_001007b2;
      bVar12 = false;
LAB_00100945:
      if (iVar2 == -1) {
        iVar3 = (int)param_1[4];
        if (iVar3 == 0) goto LAB_001007e8;
        lVar7 = (**(code **)(*param_1 + 0x20))(lVar5,*(undefined8 *)(*param_1 + 0x30));
        lVar10 = OSSL_ENCODER_get0_name(local_270);
        param_1[8] = lVar10;
        if (lVar7 == 0) goto LAB_00100bd8;
LAB_0010095c:
        puVar11 = (undefined8 *)0x0;
joined_r0x00100b61:
        if (bVar12) {
          pBVar9 = (BIO *)param_1[1];
          pBVar13 = (BIO *)0x0;
LAB_0010096c:
          iVar3 = 0;
          pBVar9 = (BIO *)ossl_core_bio_new_from_bio(pBVar9);
          bp = pBVar13;
          if (pBVar9 != (BIO *)0x0) {
            iVar3 = (**(code **)(local_270 + 0x68))
                              (local_268,pBVar9,lVar7,puVar11,*(undefined4 *)*param_1,
                               &ossl_pw_passphrase_callback_enc,(undefined4 *)*param_1 + 0xe);
          }
        }
        else {
          bp = (BIO *)0x0;
          type = BIO_s_mem();
          pBVar9 = BIO_new(type);
          iVar3 = 0;
          pBVar13 = pBVar9;
          if (pBVar9 != (BIO *)0x0) goto LAB_0010096c;
        }
        ossl_core_bio_free(pBVar9);
        param_1[5] = lVar5;
        CRYPTO_free((void *)param_1[6]);
        param_1[6] = 0;
        if (bp != (BIO *)0x0) {
          BIO_ctrl(bp,0x73,0,&local_228);
          param_1[6] = *(long *)(*local_228 + 8);
          param_1[7] = *(long *)*local_228;
          *local_228 = (undefined1  [16])0x0;
          local_228[1] = (undefined1  [16])0x0;
        }
        BIO_free(bp);
        if (lVar7 != 0) {
          (**(code **)(*param_1 + 0x28))(*(undefined8 *)(*param_1 + 0x30));
        }
        goto LAB_001007e8;
      }
      if (iVar2 != 1) {
        lVar7 = 0;
        goto LAB_0010095c;
      }
      if (local_200._8_8_ != 0) {
        lVar7 = OSSL_ENCODER_INSTANCE_get_output_structure();
        puVar14 = &local_1b0;
        OSSL_PARAM_construct_utf8_string(&local_258,"data-type",param_1[8],0);
        local_1d8 = local_258;
        uStack_1d0 = uStack_250;
        local_1b8 = local_238;
        local_1c8 = local_248;
        uStack_1c0 = uStack_240;
        if (lVar7 != 0) {
          OSSL_PARAM_construct_utf8_string(&local_258,"data-structure",lVar7,0);
          puVar14 = local_188;
          local_190 = local_238;
          local_1b0 = local_258;
          uStack_1a8 = uStack_250;
          local_1a0 = local_248;
          uStack_198 = uStack_240;
        }
        OSSL_PARAM_construct_octet_string(&local_258,&_LC7,param_1[6],param_1[7]);
        *puVar14 = local_258;
        puVar14[1] = uStack_250;
        puVar14[2] = local_248;
        puVar14[3] = uStack_240;
        puVar14[4] = local_238;
        OSSL_PARAM_construct_end(&local_258);
        puVar11 = &local_1d8;
        puVar14[5] = local_258;
        puVar14[6] = uStack_250;
        puVar14[7] = local_248;
        puVar14[8] = uStack_240;
        puVar14[9] = local_238;
        lVar7 = 0;
        goto joined_r0x00100b61;
      }
      ERR_new();
      ERR_set_debug("crypto/encode_decode/encoder_lib.c",0x260,"encoder_process");
      ERR_set_error(0x3b,0xc0103,0);
LAB_00100bd8:
      iVar3 = 0;
      goto LAB_00100bdb;
    }
  }
  iVar3 = -1;
LAB_00100bdb:
  CRYPTO_free((void *)param_1[6]);
  param_1[6] = 0;
  BIO_free((BIO *)0x0);
LAB_001007e8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001007b2:
  if (iVar3 == 0) goto LAB_001007bc;
  goto LAB_001006b6;
LAB_001007bc:
  iVar3 = -1;
  CRYPTO_free((void *)param_1[6]);
  param_1[6] = 0;
  BIO_free((BIO *)0x0);
  goto LAB_001007e8;
}



bool OSSL_ENCODER_to_bio(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  int local_58;
  undefined1 local_54 [16];
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  local_54 = (undefined1  [16])0x0;
  local_44 = (undefined1  [16])0x0;
  local_34 = (undefined1  [16])0x0;
  local_68 = param_1;
  local_60 = param_2;
  local_58 = OSSL_ENCODER_CTX_get_num_encoders();
  if (local_58 == 0) {
    ERR_new();
    ERR_set_debug("crypto/encode_decode/encoder_lib.c",0x4e,"OSSL_ENCODER_to_bio");
    ERR_set_error(0x3b,0x65,
                  "No encoders were found. For standard encoders you need at least one of the default or base providers available. Did you forget to load them?"
                 );
    bVar1 = false;
  }
  else if ((*(long *)(param_1 + 0x28) == 0) || (*(long *)(param_1 + 0x20) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/encode_decode/encoder_lib.c",0x56,"OSSL_ENCODER_to_bio");
    ERR_set_error(0x3b,0xc0105,0);
    bVar1 = false;
  }
  else {
    iVar2 = encoder_process(&local_68);
    bVar1 = 0 < iVar2;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 OSSL_ENCODER_to_fp(undefined8 param_1,void *param_2)

{
  undefined4 uVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,param_2);
    uVar1 = OSSL_ENCODER_to_bio(param_1,bp);
    BIO_free(bp);
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/encode_decode/encoder_lib.c",99,"bio_from_file");
  ERR_set_error(0x3b,0x80007,0);
  BIO_free((BIO *)0x0);
  return 0;
}



undefined8 OSSL_ENCODER_to_data(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  void *__dest;
  void *__src;
  int iVar2;
  BIO_METHOD *type;
  BIO *bp;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  ulong *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (ulong *)0x0;
  if (param_3 == (ulong *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/encode_decode/encoder_lib.c",0x7f,"OSSL_ENCODER_to_data");
    ERR_set_error(0x3b,0xc0102,0);
    uVar4 = 0;
    goto LAB_00100e76;
  }
  type = BIO_s_mem();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
LAB_00100e6c:
    uVar4 = 0;
  }
  else {
    iVar2 = OSSL_ENCODER_to_bio(param_1,bp);
    if (iVar2 == 0) goto LAB_00100e6c;
    lVar3 = BIO_ctrl(bp,0x73,0,&local_38);
    if (lVar3 < 1) goto LAB_00100e6c;
    uVar1 = *local_38;
    if (param_2 == (ulong *)0x0) {
      *param_3 = uVar1;
    }
    else {
      __dest = (void *)*param_2;
      if (__dest == (void *)0x0) {
        *param_3 = uVar1;
        *param_2 = local_38[1];
        local_38[1] = 0;
      }
      else {
        if (*param_3 < uVar1) goto LAB_00100e6c;
        __src = (void *)local_38[1];
        *param_3 = *param_3 - uVar1;
        memcpy(__dest,__src,*local_38);
        *param_2 = *param_2 + *local_38;
      }
    }
    uVar4 = 1;
  }
  BIO_free(bp);
LAB_00100e76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ossl_bio_print_labeled_bignum(BIO *param_1,undefined *param_2,BIGNUM *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *ptr;
  __int32_t **pp_Var5;
  undefined8 *puVar6;
  char *pcVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long in_FS_OFFSET;
  undefined4 local_45;
  undefined1 local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_45 = 0x20202020;
  local_41 = 0;
  if (param_3 == (BIGNUM *)0x0) {
LAB_001011b0:
    uVar4 = 0;
    goto LAB_0010114c;
  }
  puVar12 = &_LC9;
  if (param_2 == (undefined *)0x0) {
    puVar12 = &_LC10;
    param_2 = &_LC10;
  }
  iVar2 = BN_is_zero(param_3);
  if (iVar2 != 0) {
    uVar4 = BIO_printf(param_1,"%s%s0\n",param_2,puVar12);
    goto LAB_0010114c;
  }
  iVar2 = BN_num_bits(param_3);
  if (iVar2 < 0x41) {
    puVar6 = (undefined8 *)bn_get_words();
    iVar2 = BN_is_negative(param_3);
    puVar11 = &_LC11;
    if (iVar2 == 0) {
      puVar11 = &_LC10;
    }
    uVar4 = BIO_printf(param_1,"%s%s%s%lu (%s0x%lx)\n",param_2,puVar12,puVar11,*puVar6,puVar11,
                       *puVar6);
    goto LAB_0010114c;
  }
  ptr = (byte *)BN_bn2hex(param_3);
  if (ptr == (byte *)0x0) goto LAB_001011b0;
  pcVar7 = "";
  pbVar9 = ptr;
  if (*ptr == 0x2d) {
    pbVar9 = ptr + 1;
    pcVar7 = " (Negative)";
  }
  iVar2 = BIO_printf(param_1,"%s%s\n",param_2,pcVar7);
  uVar4 = 0;
  if (0 < iVar2) {
    iVar2 = BIO_printf(param_1,"%s",&local_45);
    if (0 < iVar2) {
      bVar1 = *pbVar9;
      iVar2 = 0;
      iVar3 = iVar2;
      if ('7' < (char)bVar1) {
        iVar2 = BIO_printf(param_1,"%02x",0);
        if (iVar2 < 1) goto LAB_00101138;
        bVar1 = *pbVar9;
        iVar2 = 1;
        iVar3 = iVar2;
      }
      while (bVar1 != 0) {
        if (((uint)(iVar2 * -0x11111111) < 0x11111112) && (iVar2 != 0)) {
          iVar3 = BIO_printf(param_1,":\n%s",&local_45);
          if (iVar3 < 1) goto LAB_00101138;
          pp_Var5 = __ctype_tolower_loc();
          uVar10 = (ulong)(uint)(*pp_Var5)[pbVar9[1]];
          uVar8 = (ulong)(uint)(*pp_Var5)[*pbVar9];
          puVar12 = &_LC10;
        }
        else {
          pp_Var5 = __ctype_tolower_loc();
          puVar12 = &_LC13;
          uVar10 = (ulong)(uint)(*pp_Var5)[pbVar9[1]];
          uVar8 = (ulong)(uint)(*pp_Var5)[*pbVar9];
          if (iVar3 == 0) {
            puVar12 = &_LC10;
          }
        }
        iVar3 = BIO_printf(param_1,"%s%c%c",puVar12,uVar8,uVar10);
        if (iVar3 < 1) goto LAB_00101138;
        pbVar9 = pbVar9 + 2;
        iVar2 = iVar2 + 1;
        iVar3 = 1;
        bVar1 = *pbVar9;
      }
      iVar2 = BIO_printf(param_1,"\n");
      uVar4 = (uint)(0 < iVar2);
    }
  }
LAB_00101138:
  CRYPTO_free(ptr);
LAB_0010114c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



bool ossl_bio_print_labeled_buf(BIO *param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = BIO_printf(param_1,"%s\n",param_2);
  if (0 < iVar1) {
    lVar3 = 0;
    if (param_4 == 0) {
LAB_00101338:
      iVar1 = BIO_printf(param_1,"\n");
      return 0 < iVar1;
    }
    while (iVar1 = BIO_printf(param_1,"    "), 0 < iVar1) {
      do {
        puVar2 = &_LC10;
        if (param_4 + -1 != lVar3) {
          puVar2 = &_LC13;
        }
        iVar1 = BIO_printf(param_1,"%02x%s",(ulong)*(byte *)(param_3 + lVar3),puVar2);
        if (iVar1 < 1) {
          return false;
        }
        lVar3 = lVar3 + 1;
        if (param_4 == lVar3) goto LAB_00101338;
      } while (0x1111111111111111 < (ulong)(lVar3 * -0x1111111111111111));
      iVar1 = BIO_printf(param_1,"\n");
      if (iVar1 < 1) {
        return false;
      }
    }
  }
  return false;
}



bool ossl_bio_print_ffc_params(BIO *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(int *)((long)param_2 + 0x34) == 0) {
    iVar1 = ossl_bio_print_labeled_bignum(param_1,"P:   ",*param_2);
    if ((((iVar1 != 0) &&
         ((((param_2[1] == 0 || (iVar1 = ossl_bio_print_labeled_bignum(param_1,"Q:   "), iVar1 != 0)
            ) && (iVar1 = ossl_bio_print_labeled_bignum(param_1,"G:   ",param_2[2]), iVar1 != 0)) &&
          ((param_2[3] == 0 || (iVar1 = ossl_bio_print_labeled_bignum(param_1,"J:   "), iVar1 != 0))
          )))) && ((param_2[4] == 0 ||
                   (iVar1 = ossl_bio_print_labeled_buf(param_1,"SEED:",param_2[4],param_2[5]),
                   iVar1 != 0)))) &&
       (((*(int *)(param_2 + 7) == -1 || (iVar1 = BIO_printf(param_1,"gindex: %d\n"), 0 < iVar1)) &&
        ((*(int *)(param_2 + 6) == -1 || (iVar1 = BIO_printf(param_1,"pcounter: %d\n"), 0 < iVar1)))
        ))) {
      if (*(int *)((long)param_2 + 0x3c) == 0) {
        return true;
      }
      iVar1 = BIO_printf(param_1,"h: %d\n");
      return 0 < iVar1;
    }
  }
  else {
    uVar2 = ossl_ffc_uid_to_dh_named_group();
    lVar3 = ossl_ffc_named_group_get_name(uVar2);
    if (lVar3 != 0) {
      iVar1 = BIO_printf(param_1,"GROUP: %s\n",lVar3);
      return 0 < iVar1;
    }
  }
  return false;
}


