
undefined1 * ml_dsa_settable_ctx_params(void)

{
  return settable_ctx_params_3;
}



undefined1 * ml_dsa_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



undefined8 ml_dsa_dupctx(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    uVar2 = CRYPTO_memdup(param_1,0x260,"providers/implementations/signature/ml_dsa_sig.c",0x5f);
    return uVar2;
  }
  return 0;
}



bool ml_dsa_get_ctx_params(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  bVar4 = false;
  if (param_1 != 0) {
    lVar2 = OSSL_PARAM_locate(param_2,"algorithm-id");
    bVar4 = true;
    if (lVar2 != 0) {
      lVar3 = param_1 + 0x14c;
      if (*(long *)(param_1 + 0x250) == 0) {
        lVar3 = 0;
      }
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,lVar3);
      bVar4 = iVar1 != 0;
    }
  }
  return bVar4;
}



bool ml_dsa_set_ctx_params(long param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_0010023b:
    bVar3 = false;
  }
  else {
    if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
      lVar2 = OSSL_PARAM_locate_const(param_2,"context-string");
      if (lVar2 != 0) {
        local_28 = param_1 + 0x10;
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_28,0xff,param_1 + 0x110);
        if (iVar1 == 0) {
          *(undefined8 *)(param_1 + 0x110) = 0;
          goto LAB_0010023b;
        }
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"test-entropy");
      if (lVar2 != 0) {
        local_28 = param_1 + 0x118;
        *(undefined8 *)(param_1 + 0x138) = 0;
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_28,0x20,param_1 + 0x138);
        if (iVar1 == 0) goto LAB_0010023b;
        if (*(long *)(param_1 + 0x138) != 0x20) {
          *(undefined8 *)(param_1 + 0x138) = 0;
          ERR_new();
          ERR_set_debug("providers/implementations/signature/ml_dsa_sig.c",0x10c,
                        "ml_dsa_set_ctx_params");
          ERR_set_error(0x39,0x9a,0);
          bVar3 = false;
          goto LAB_00100215;
        }
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"deterministic");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x144);
        if (iVar1 == 0) goto LAB_0010023b;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"message-encoding");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x140);
        if (iVar1 == 0) goto LAB_0010023b;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,&_LC6);
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 600);
        bVar3 = iVar1 != 0;
        goto LAB_00100215;
      }
    }
    bVar3 = true;
  }
LAB_00100215:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ml_dsa_freectx(void *param_1)

{
  OPENSSL_cleanse((void *)((long)param_1 + 0x118),*(size_t *)((long)param_1 + 0x138));
  CRYPTO_free(param_1);
  return;
}



void ml_dsa_verify(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ossl_ml_dsa_verify(*param_1,*(undefined4 *)(param_1 + 0x4b),param_4,param_5,param_1 + 2,
                       param_1[0x22],*(undefined4 *)(param_1 + 0x28),param_2,param_3);
  }
  return;
}



undefined4
ml_dsa_sign(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  undefined1 *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
LAB_00100470:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      if (param_1[0x27] != 0) {
        uVar2 = ossl_ml_dsa_sign(*param_1,*(undefined4 *)(param_1 + 0x4b),param_5,param_6,
                                 param_1 + 2,param_1[0x22],param_1 + 0x23,0x20,
                                 *(undefined4 *)(param_1 + 0x28),param_2,param_3,param_4);
        goto LAB_001003c1;
      }
      if (*(int *)((long)param_1 + 0x144) == 1) {
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
      }
      else {
        iVar1 = RAND_priv_bytes_ex(param_1[1],local_68,0x20,0);
        if (iVar1 < 1) goto LAB_00100470;
      }
      local_70 = local_68;
      puVar3 = local_70;
    }
    local_70 = local_68;
    uVar2 = ossl_ml_dsa_sign(*param_1,*(undefined4 *)(param_1 + 0x4b),param_5,param_6,param_1 + 2,
                             param_1[0x22],puVar3,0x20,*(undefined4 *)(param_1 + 0x28),param_2,
                             param_3,param_4);
    OPENSSL_cleanse(local_70,0x20);
  }
LAB_001003c1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ml_dsa_digest_sign(void)

{
  ml_dsa_sign();
  return;
}



undefined8 ml_dsa_signverify_msg_init_isra_0(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  void *__src;
  long in_FS_OFFSET;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (param_1 != (long *)0x0)) {
    if (param_2 == 0) {
      param_2 = *param_1;
      if (param_2 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/signature/ml_dsa_sig.c",0x88,
                      "ml_dsa_signverify_msg_init");
        ERR_set_error(0x39,0x72,0);
        goto LAB_001005d8;
      }
    }
    else {
      *param_1 = param_2;
    }
    iVar1 = ossl_ml_dsa_key_matches(param_2,(int)param_1[0x29]);
    if (iVar1 != 0) {
      param_1[0x4a] = 0;
      iVar1 = WPACKET_init_der(local_68,(void *)((long)param_1 + 0x14c),0x100);
      if (iVar1 == 0) {
LAB_0010055a:
        WPACKET_cleanup(local_68);
      }
      else {
        iVar1 = ossl_DER_w_algorithmIdentifier_ML_DSA(local_68,0xffffffff,*param_1);
        if (iVar1 == 0) goto LAB_0010055a;
        iVar1 = WPACKET_finish(local_68);
        if (iVar1 == 0) goto LAB_0010055a;
        WPACKET_get_total_written(local_68,param_1 + 0x4a);
        __src = (void *)WPACKET_get_curr(local_68);
        WPACKET_cleanup(local_68);
        if ((__src != (void *)0x0) && (param_1[0x4a] != 0)) {
          memmove((void *)((long)param_1 + 0x14c),__src,param_1[0x4a]);
        }
      }
      *(undefined4 *)(param_1 + 0x4b) = 0;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = ml_dsa_set_ctx_params(param_1,param_3);
        return uVar2;
      }
      goto LAB_00100677;
    }
  }
LAB_001005d8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00100677:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ml_dsa_sign_msg_init(void)

{
  ml_dsa_signverify_msg_init_isra_0();
  return;
}



void ml_dsa_verify_msg_init(void)

{
  ml_dsa_signverify_msg_init_isra_0();
  return;
}



undefined8
ml_dsa_digest_signverify_init(long *param_1,char *param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/ml_dsa_sig.c",0xa3,
                  "ml_dsa_digest_signverify_init");
    ERR_set_error(0x39,0x7a,"Explicit digest not supported for ML-DSA operations");
    return 0;
  }
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if ((param_3 == 0) && (*param_1 != 0)) {
    uVar1 = ml_dsa_set_ctx_params(param_1,param_4);
    return uVar1;
  }
  uVar1 = ml_dsa_signverify_msg_init_isra_0();
  return uVar1;
}



long ml_dsa_65_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x260,"providers/implementations/signature/ml_dsa_sig.c",0x4a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_ctx_get0_libctx(param_1);
      *(undefined4 *)(lVar2 + 0x140) = 1;
      *(undefined8 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0x148) = 0x5b2;
    }
  }
  return lVar2;
}



void ml_dsa_digest_verify
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ossl_ml_dsa_verify(*param_1,*(undefined4 *)(param_1 + 0x4b),param_4,param_5,param_1 + 2,
                       param_1[0x22],*(undefined4 *)(param_1 + 0x28),param_2,param_3);
  }
  return;
}



long ml_dsa_87_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x260,"providers/implementations/signature/ml_dsa_sig.c",0x4a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_ctx_get0_libctx(param_1);
      *(undefined4 *)(lVar2 + 0x140) = 1;
      *(undefined8 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0x148) = 0x5b3;
    }
  }
  return lVar2;
}



long ml_dsa_44_newctx(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    lVar2 = CRYPTO_zalloc(0x260,"providers/implementations/signature/ml_dsa_sig.c",0x4a);
    if (lVar2 != 0) {
      uVar3 = ossl_prov_ctx_get0_libctx(param_1);
      *(undefined4 *)(lVar2 + 0x140) = 1;
      *(undefined8 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0x148) = 0x5b1;
    }
  }
  return lVar2;
}


