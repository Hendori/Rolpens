
undefined1 * slh_dsa_settable_ctx_params(void)

{
  return settable_ctx_params_2;
}



undefined1 * slh_dsa_gettable_ctx_params(void)

{
  return known_gettable_ctx_params;
}



bool slh_dsa_get_ctx_params(long param_1,undefined8 param_2)

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
      lVar3 = param_1 + 0x160;
      if (*(long *)(param_1 + 0x260) == 0) {
        lVar3 = 0;
      }
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,lVar3);
      bVar4 = iVar1 != 0;
    }
  }
  return bVar4;
}



bool slh_dsa_set_ctx_params(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined8 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (undefined8 *)0x0) {
LAB_00100155:
    bVar4 = false;
  }
  else {
    if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
      lVar2 = OSSL_PARAM_locate_const(param_2,"context-string");
      if (lVar2 != 0) {
        local_38 = param_1 + 2;
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_38,0xff,param_1 + 0x22);
        if (iVar1 == 0) {
          param_1[0x22] = 0;
          bVar4 = false;
          goto LAB_00100165;
        }
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"test-entropy");
      if (lVar2 != 0) {
        local_38 = param_1 + 0x23;
        lVar3 = ossl_slh_dsa_key_get_n(*param_1);
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_38,lVar3,param_1 + 0x27);
        if ((iVar1 == 0) || (param_1[0x27] != lVar3)) {
          param_1[0x27] = 0;
          goto LAB_00100155;
        }
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"deterministic");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_int(lVar2,(long)param_1 + 0x144);
        if (iVar1 == 0) goto LAB_00100155;
      }
      lVar2 = OSSL_PARAM_locate_const(param_2,"message-encoding");
      if (lVar2 != 0) {
        iVar1 = OSSL_PARAM_get_int(lVar2,param_1 + 0x28);
        bVar4 = iVar1 != 0;
        goto LAB_00100165;
      }
    }
    bVar4 = true;
  }
LAB_00100165:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void slh_dsa_freectx(void *param_1)

{
  ossl_slh_dsa_hash_ctx_free(*(undefined8 *)((long)param_1 + 8));
  CRYPTO_free(*(void **)((long)param_1 + 0x150));
  OPENSSL_cleanse((void *)((long)param_1 + 0x118),*(size_t *)((long)param_1 + 0x138));
  CRYPTO_free(param_1);
  return;
}



undefined4
slh_dsa_sign(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *ptr;
  long in_FS_OFFSET;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
LAB_00100380:
    uVar2 = 0;
  }
  else {
    if (param_2 == 0) {
      ptr = (undefined8 *)0x0;
    }
    else {
      ptr = param_1 + 0x23;
      if ((param_1[0x27] == 0) && (ptr = (undefined8 *)0x0, *(int *)((long)param_1 + 0x144) == 0)) {
        uVar3 = ossl_slh_dsa_key_get_n(*param_1);
        iVar1 = RAND_priv_bytes_ex(param_1[0x29],local_68,uVar3,0);
        if (0 < iVar1) {
          uVar2 = ossl_slh_dsa_sign(param_1[1],param_5,param_6,param_1 + 2,param_1[0x22],local_68,
                                    *(undefined4 *)(param_1 + 0x28),param_2,param_3,param_4);
          goto LAB_001002e8;
        }
        goto LAB_00100380;
      }
    }
    uVar2 = ossl_slh_dsa_sign(param_1[1],param_5,param_6,param_1 + 2,param_1[0x22],ptr,
                              *(undefined4 *)(param_1 + 0x28),param_2,param_3,param_4);
    OPENSSL_cleanse(ptr,0);
  }
LAB_001002e8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void slh_dsa_digest_sign(void)

{
  slh_dsa_sign();
  return;
}



long slh_dsa_newctx(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) &&
     (lVar2 = CRYPTO_zalloc(0x268,"providers/implementations/signature/slh_dsa_sig.c",0x4b),
     lVar2 != 0)) {
    uVar3 = ossl_prov_ctx_get0_libctx(param_1);
    *(undefined8 *)(lVar2 + 0x148) = uVar3;
    if (param_3 != (char *)0x0) {
      pcVar4 = CRYPTO_strdup(param_3,"providers/implementations/signature/slh_dsa_sig.c",0x50);
      *(char **)(lVar2 + 0x150) = pcVar4;
      if (pcVar4 == (char *)0x0) {
        slh_dsa_freectx(lVar2);
        return 0;
      }
    }
    *(undefined8 *)(lVar2 + 0x158) = param_2;
    *(undefined4 *)(lVar2 + 0x140) = 1;
    return lVar2;
  }
  return 0;
}



void slh_dsa_sha2_128s_newctx(undefined8 param_1,undefined8 param_2)

{
  slh_dsa_newctx(param_1,"SLH-DSA-SHA2-128s",param_2);
  return;
}



void slh_dsa_sha2_128f_newctx(undefined8 param_1,undefined8 param_2)

{
  slh_dsa_newctx(param_1,"SLH-DSA-SHA2-128f",param_2);
  return;
}



void slh_dsa_sha2_192s_newctx(undefined8 param_1,undefined8 param_2)

{
  slh_dsa_newctx(param_1,"SLH-DSA-SHA2-192s",param_2);
  return;
}



void slh_dsa_sha2_192f_newctx(undefined8 param_1,undefined8 param_2)

{
  slh_dsa_newctx(param_1,"SLH-DSA-SHA2-192f",param_2);
  return;
}



void slh_dsa_sha2_256s_newctx(undefined8 param_1,undefined8 param_2)

{
  slh_dsa_newctx(param_1,"SLH-DSA-SHA2-256s",param_2);
  return;
}



void slh_dsa_sha2_256f_newctx(undefined8 param_1,undefined8 param_2)

{
  slh_dsa_newctx(param_1,"SLH-DSA-SHA2-256f",param_2);
  return;
}



void slh_dsa_shake_128s_newctx(undefined8 param_1,undefined8 param_2)

{
  slh_dsa_newctx(param_1,"SLH-DSA-SHAKE-128s",param_2);
  return;
}



void slh_dsa_shake_128f_newctx(undefined8 param_1,undefined8 param_2)

{
  slh_dsa_newctx(param_1,"SLH-DSA-SHAKE-128f",param_2);
  return;
}



void slh_dsa_shake_192s_newctx(undefined8 param_1,undefined8 param_2)

{
  slh_dsa_newctx(param_1,"SLH-DSA-SHAKE-192s",param_2);
  return;
}



void slh_dsa_shake_192f_newctx(undefined8 param_1,undefined8 param_2)

{
  slh_dsa_newctx(param_1,"SLH-DSA-SHAKE-192f",param_2);
  return;
}



void slh_dsa_shake_256s_newctx(undefined8 param_1,undefined8 param_2)

{
  slh_dsa_newctx(param_1,"SLH-DSA-SHAKE-256s",param_2);
  return;
}



void slh_dsa_shake_256f_newctx(undefined8 param_1,undefined8 param_2)

{
  slh_dsa_newctx(param_1,"SLH-DSA-SHAKE-256f",param_2);
  return;
}



void slh_dsa_verify(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ossl_slh_dsa_verify(*(undefined8 *)(param_1 + 8),param_4,param_5,param_1 + 0x10,
                        *(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x140),param_2,
                        param_3);
  }
  return;
}



bool slh_dsa_signverify_msg_init_isra_0(long *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  void *__src;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if ((iVar1 != 0) && (param_1 != (long *)0x0)) {
    if (param_2 == 0) {
      if (*param_1 != 0) {
LAB_001006ba:
        param_1[0x4c] = 0;
        iVar1 = WPACKET_init_der(local_68,param_1 + 0x2c,0x100);
        if (iVar1 == 0) {
LAB_001006e5:
          WPACKET_cleanup(local_68);
        }
        else {
          iVar1 = ossl_DER_w_algorithmIdentifier_SLH_DSA(local_68,0xffffffff,*param_1);
          if (iVar1 == 0) goto LAB_001006e5;
          iVar1 = WPACKET_finish(local_68);
          if (iVar1 == 0) goto LAB_001006e5;
          WPACKET_get_total_written(local_68,param_1 + 0x4c);
          __src = (void *)WPACKET_get_curr(local_68);
          WPACKET_cleanup(local_68);
          if ((__src != (void *)0x0) && (param_1[0x4c] != 0)) {
            memmove(param_1 + 0x2c,__src,param_1[0x4c]);
          }
        }
        iVar1 = slh_dsa_set_ctx_params(param_1,param_3);
        bVar3 = iVar1 != 0;
        goto LAB_0010068b;
      }
      ERR_new();
      ERR_set_debug("providers/implementations/signature/slh_dsa_sig.c",0x9d,
                    "slh_dsa_signverify_msg_init");
      ERR_set_error(0x39,0x72,0);
    }
    else {
      iVar1 = ossl_slh_dsa_key_type_matches(param_2,param_1[0x2b]);
      if (iVar1 != 0) {
        lVar2 = ossl_slh_dsa_hash_ctx_new(param_2);
        param_1[1] = lVar2;
        if (lVar2 != 0) {
          *param_1 = param_2;
          goto LAB_001006ba;
        }
      }
    }
  }
  bVar3 = false;
LAB_0010068b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void slh_dsa_sign_msg_init(void)

{
  slh_dsa_signverify_msg_init_isra_0();
  return;
}



void slh_dsa_verify_msg_init(void)

{
  slh_dsa_signverify_msg_init_isra_0();
  return;
}



undefined8
slh_dsa_digest_signverify_init(long *param_1,char *param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    ERR_new();
    ERR_set_debug("providers/implementations/signature/slh_dsa_sig.c",0xbc,
                  "slh_dsa_digest_signverify_init");
    ERR_set_error(0x39,0x7a,"Explicit digest not supported for SLH-DSA operations");
    return 0;
  }
  if ((param_3 == 0) && (*param_1 != 0)) {
    uVar1 = slh_dsa_set_ctx_params(param_1,param_4);
    return uVar1;
  }
  uVar1 = slh_dsa_signverify_msg_init_isra_0();
  return uVar1;
}



void slh_dsa_digest_verify
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    ossl_slh_dsa_verify(*(undefined8 *)(param_1 + 8),param_4,param_5,param_1 + 0x10,
                        *(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x140),param_2,
                        param_3);
  }
  return;
}



void * slh_dsa_dupctx(long param_1)

{
  int iVar1;
  void *ptr;
  char *pcVar2;
  long lVar3;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return (void *)0x0;
  }
  ptr = (void *)CRYPTO_memdup(param_1,0x268,"providers/implementations/signature/slh_dsa_sig.c",0x66
                             );
  if (ptr == (void *)0x0) {
    return (void *)0x0;
  }
  pcVar2 = *(char **)(param_1 + 0x150);
  *(undefined8 *)((long)ptr + 8) = 0;
  *(undefined8 *)((long)ptr + 0x150) = 0;
  if (pcVar2 != (char *)0x0) {
    pcVar2 = CRYPTO_strdup(pcVar2,"providers/implementations/signature/slh_dsa_sig.c",0x6b);
    *(char **)((long)ptr + 0x150) = pcVar2;
    if (pcVar2 == (char *)0x0) {
      lVar3 = *(long *)((long)ptr + 8);
      goto LAB_00100980;
    }
  }
  lVar3 = ossl_slh_dsa_hash_ctx_dup(*(undefined8 *)(param_1 + 8));
  *(long *)((long)ptr + 8) = lVar3;
  if (lVar3 != 0) {
    return ptr;
  }
LAB_00100980:
  ossl_slh_dsa_hash_ctx_free(lVar3);
  CRYPTO_free(*(void **)((long)ptr + 0x150));
  OPENSSL_cleanse((void *)((long)ptr + 0x118),*(size_t *)((long)ptr + 0x138));
  CRYPTO_free(ptr);
  return (void *)0x0;
}


