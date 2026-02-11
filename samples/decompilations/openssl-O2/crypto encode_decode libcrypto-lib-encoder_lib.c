
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



uint encoder_process(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  BIO *pBVar9;
  long lVar10;
  BIO_METHOD *type;
  BIO *pBVar11;
  undefined8 *puVar12;
  undefined1 (*pauVar13) [16];
  uint uVar14;
  int iVar15;
  BIO *bp;
  undefined8 *puVar16;
  long in_FS_OFFSET;
  bool bVar17;
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
    *(uint *)(param_1 + 4) = -(uint)(*(long *)(*param_1 + 0x10) == 0);
    iVar15 = (int)param_1[2];
  }
  else {
    iVar15 = (int)param_1[2];
  }
  uVar2 = (uint)(param_1[3] == 0);
  if (iVar15 < 1) {
    uVar14 = 0xffffffff;
LAB_001009ae:
    CRYPTO_free((void *)param_1[6]);
    param_1[6] = 0;
    BIO_free((BIO *)0x0);
  }
  else {
    do {
      iVar15 = iVar15 + -1;
      uVar8 = 0;
      if (uVar2 == 0) goto LAB_0010084e;
      while( true ) {
        while( true ) {
          lVar3 = OPENSSL_sk_value(*(undefined8 *)(*param_1 + 0x18),iVar15);
          lVar4 = OSSL_ENCODER_INSTANCE_get_encoder(lVar3);
          uVar5 = OSSL_ENCODER_INSTANCE_get_encoder_ctx(lVar3);
          uVar6 = OSSL_ENCODER_INSTANCE_get_output_type(lVar3);
          lVar7 = OSSL_ENCODER_INSTANCE_get_output_structure(lVar3);
          pauVar13 = (undefined1 (*) [16])*param_1;
          local_200 = (undefined1  [16])0x0;
          local_1f0 = (undefined1  [16])0x0;
          local_210._8_4_ = (int)param_1[4];
          local_210._0_8_ = lVar3;
          local_210._12_4_ = 0;
          local_220._4_4_ = *(int *)((long)param_1 + 0x14) + 1;
          local_220._0_4_ = iVar15;
          local_220._8_8_ = 0;
          local_220 = local_220 << 0x40;
          local_228 = pauVar13;
          if (uVar2 == 0) break;
          if (*(long *)(*pauVar13 + 8) == 0) goto LAB_00100776;
          iVar1 = OPENSSL_strcasecmp(uVar6);
          if (iVar1 == 0) goto LAB_0010076e;
          iVar15 = iVar15 + -1;
          uVar8 = 0;
          if (iVar15 == -1) goto LAB_001007d7;
        }
        iVar1 = OSSL_ENCODER_is_a(uVar8,uVar6);
        if (iVar1 != 0) break;
        bVar17 = iVar15 == 0;
        iVar15 = iVar15 + -1;
        if (bVar17) goto LAB_001007d7;
LAB_0010084e:
        uVar8 = OSSL_ENCODER_INSTANCE_get_encoder(param_1[3]);
      }
LAB_0010076e:
      pauVar13 = (undefined1 (*) [16])*param_1;
LAB_00100776:
      if ((*(long *)pauVar13[1] == 0) || (lVar7 == 0)) {
LAB_00100795:
        iVar1 = encoder_process(&local_228);
        param_1[7] = local_1f0._0_8_;
        param_1[5] = local_200._0_8_;
        param_1[6] = local_200._8_8_;
        if (iVar1 != 0) {
          if (iVar1 == -1) {
            uVar14 = *(uint *)(param_1 + 4);
            if (*(uint *)(param_1 + 4) == 0) goto LAB_00100800;
            lVar7 = (**(code **)(*param_1 + 0x20))(lVar3,*(undefined8 *)(*param_1 + 0x30));
            lVar10 = OSSL_ENCODER_get0_name(lVar4);
            param_1[8] = lVar10;
            if (lVar7 == 0) {
              uVar14 = 0;
              goto LAB_001009ae;
            }
LAB_00100877:
            puVar12 = (undefined8 *)0x0;
            if (uVar2 != 0) goto LAB_00100880;
LAB_00100af9:
            bp = (BIO *)0x0;
            type = BIO_s_mem();
            pBVar11 = BIO_new(type);
            pBVar9 = pBVar11;
            if (pBVar11 != (BIO *)0x0) goto LAB_00100886;
          }
          else {
            if (iVar1 != 1) {
              lVar7 = 0;
              goto LAB_00100877;
            }
            if (local_200._8_8_ == 0) {
              ERR_new(local_200._0_8_);
              uVar14 = 0;
              ERR_set_debug("crypto/encode_decode/encoder_lib.c",0x260,"encoder_process");
              ERR_set_error(0x3b,0xc0103,0);
              goto LAB_001009ae;
            }
            lVar7 = OSSL_ENCODER_INSTANCE_get_output_structure();
            puVar16 = &local_1b0;
            OSSL_PARAM_construct_utf8_string(&local_258,"data-type",param_1[8],0);
            local_1d8 = local_258;
            uStack_1d0 = uStack_250;
            local_1b8 = local_238;
            local_1c8 = local_248;
            uStack_1c0 = uStack_240;
            if (lVar7 != 0) {
              OSSL_PARAM_construct_utf8_string(&local_258,"data-structure",lVar7,0);
              puVar16 = local_188;
              local_190 = local_238;
              local_1b0 = local_258;
              uStack_1a8 = uStack_250;
              local_1a0 = local_248;
              uStack_198 = uStack_240;
            }
            OSSL_PARAM_construct_octet_string(&local_258,&_LC7,param_1[6],param_1[7]);
            *puVar16 = local_258;
            puVar16[1] = uStack_250;
            puVar16[2] = local_248;
            puVar16[3] = uStack_240;
            puVar16[4] = local_238;
            OSSL_PARAM_construct_end(&local_258);
            puVar12 = &local_1d8;
            puVar16[5] = local_258;
            puVar16[6] = uStack_250;
            puVar16[7] = local_248;
            puVar16[8] = uStack_240;
            puVar16[9] = local_238;
            lVar7 = 0;
            if (uVar2 == 0) goto LAB_00100af9;
LAB_00100880:
            pBVar11 = (BIO *)0x0;
            pBVar9 = (BIO *)param_1[1];
LAB_00100886:
            uVar2 = 0;
            pBVar9 = (BIO *)ossl_core_bio_new_from_bio(pBVar9);
            bp = pBVar11;
            if (pBVar9 != (BIO *)0x0) {
              uVar2 = (**(code **)(lVar4 + 0x68))
                                (uVar5,pBVar9,lVar7,puVar12,*(undefined4 *)*param_1,
                                 &ossl_pw_passphrase_callback_enc,(undefined4 *)*param_1 + 0xe);
            }
          }
          ossl_core_bio_free(pBVar9);
          param_1[5] = lVar3;
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
          uVar14 = uVar2;
          if (lVar7 != 0) {
            (**(code **)(*param_1 + 0x28))(*(undefined8 *)(*param_1 + 0x30));
          }
          goto LAB_00100800;
        }
      }
      else {
        iVar1 = OPENSSL_strcasecmp(*(long *)pauVar13[1],lVar7);
        if (iVar1 == 0) {
          *(int *)(param_1 + 4) = (int)param_1[4] + 1;
          goto LAB_00100795;
        }
      }
    } while (iVar15 != 0);
LAB_001007d7:
    CRYPTO_free((void *)param_1[6]);
    param_1[6] = 0;
    BIO_free((BIO *)0x0);
    uVar14 = 0xffffffff;
  }
LAB_00100800:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    goto LAB_00100dc6;
  }
  type = BIO_s_mem();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
LAB_00100dbc:
    uVar4 = 0;
  }
  else {
    iVar2 = OSSL_ENCODER_to_bio(param_1,bp);
    if (iVar2 == 0) goto LAB_00100dbc;
    lVar3 = BIO_ctrl(bp,0x73,0,&local_38);
    if (lVar3 < 1) goto LAB_00100dbc;
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
        if (*param_3 < uVar1) goto LAB_00100dbc;
        __src = (void *)local_38[1];
        *param_3 = *param_3 - uVar1;
        memcpy(__dest,__src,*local_38);
        *param_2 = *param_2 + *local_38;
      }
    }
    uVar4 = 1;
  }
  BIO_free(bp);
LAB_00100dc6:
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
LAB_00101100:
    uVar4 = 0;
    goto LAB_0010109c;
  }
  puVar12 = &_LC9;
  if (param_2 == (undefined *)0x0) {
    puVar12 = &_LC10;
    param_2 = &_LC10;
  }
  iVar2 = BN_is_zero(param_3);
  if (iVar2 != 0) {
    uVar4 = BIO_printf(param_1,"%s%s0\n",param_2,puVar12);
    goto LAB_0010109c;
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
    goto LAB_0010109c;
  }
  ptr = (byte *)BN_bn2hex(param_3);
  if (ptr == (byte *)0x0) goto LAB_00101100;
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
        if (iVar2 < 1) goto LAB_00101088;
        bVar1 = *pbVar9;
        iVar2 = 1;
        iVar3 = iVar2;
      }
      while (bVar1 != 0) {
        if (((uint)(iVar2 * -0x11111111) < 0x11111112) && (iVar2 != 0)) {
          iVar3 = BIO_printf(param_1,":\n%s",&local_45);
          if (iVar3 < 1) goto LAB_00101088;
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
        if (iVar3 < 1) goto LAB_00101088;
        pbVar9 = pbVar9 + 2;
        iVar2 = iVar2 + 1;
        iVar3 = 1;
        bVar1 = *pbVar9;
      }
      iVar2 = BIO_printf(param_1,"\n");
      uVar4 = (uint)(0 < iVar2);
    }
  }
LAB_00101088:
  CRYPTO_free(ptr);
LAB_0010109c:
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
LAB_00101288:
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
        if (param_4 == lVar3) goto LAB_00101288;
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


