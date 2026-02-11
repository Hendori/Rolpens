
undefined8
hash_init_with_dom_constprop_0
          (undefined8 param_1,EVP_MD_CTX *param_2,char param_3,void *param_4,ulong param_5,
          undefined8 param_6)

{
  int iVar1;
  EVP_MD *type;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined8 local_39;
  undefined1 local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_31 = 0;
  local_39 = 0x3834346445676953;
  if (param_5 < 0x100) {
    local_3b = param_3 != '\0';
    local_3a = (char)param_5;
    type = (EVP_MD *)EVP_MD_fetch(param_1,"SHAKE256",param_6);
    if (type != (EVP_MD *)0x0) {
      iVar1 = EVP_DigestInit_ex(param_2,type,(ENGINE *)0x0);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestUpdate(param_2,&local_39,8);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestUpdate(param_2,&local_3b,2);
          if (iVar1 != 0) {
            iVar1 = EVP_DigestUpdate(param_2,param_4,param_5);
            if (iVar1 != 0) {
              EVP_MD_free(type);
              uVar2 = 0xffffffff;
              goto LAB_00100092;
            }
          }
        }
      }
      EVP_MD_free(type);
    }
  }
  uVar2 = 0;
LAB_00100092:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_c448_ed448_convert_private_key_to_x448
              (undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    type = (EVP_MD *)EVP_MD_fetch(param_1,"SHAKE256",param_4);
    if (((type == (EVP_MD *)0x0) || (iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0), iVar1 == 0))
       || (iVar1 = EVP_DigestUpdate(ctx,param_3,0x39), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = EVP_DigestFinalXOF(ctx,param_2,0x38);
      iVar1 = -(uint)(iVar1 != 0);
    }
    EVP_MD_CTX_free(ctx);
    EVP_MD_free(type);
    return iVar1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
ossl_c448_ed448_derive_public_key
          (undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_1b8 [64];
  undefined1 local_178 [256];
  byte local_78 [55];
  byte local_41;
  undefined1 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    type = (EVP_MD *)EVP_MD_fetch(param_1,"SHAKE256",param_4);
    if (type == (EVP_MD *)0x0) {
      EVP_MD_CTX_free(ctx);
      EVP_MD_free(0);
    }
    else {
      iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
      if ((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(ctx,param_3,0x39), iVar1 != 0)) {
        iVar1 = EVP_DigestFinalXOF(ctx,local_78,0x39);
        if (iVar1 != 0) {
          EVP_MD_CTX_free(ctx);
          EVP_MD_free(type);
          local_78[0] = local_78[0] & 0xfc;
          local_41 = local_41 | 0x80;
          local_40 = 0;
          ossl_curve448_scalar_decode_long(auStack_1b8,local_78,0x39);
          ossl_curve448_scalar_halve(auStack_1b8,auStack_1b8);
          ossl_curve448_scalar_halve(auStack_1b8,auStack_1b8);
          ossl_curve448_precomputed_scalarmul(local_178,_ossl_curve448_precomputed_base,auStack_1b8)
          ;
          ossl_curve448_point_mul_by_ratio_and_encode_like_eddsa(param_2,local_178);
          ossl_curve448_scalar_destroy(auStack_1b8);
          ossl_curve448_point_destroy(local_178);
          OPENSSL_cleanse(local_78,0x39);
          uVar2 = 0xffffffff;
          goto LAB_00100230;
        }
      }
      EVP_MD_CTX_free(ctx);
      EVP_MD_free(type);
    }
  }
  uVar2 = 0;
LAB_00100230:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
ossl_c448_ed448_sign
          (undefined8 param_1,undefined1 *param_2,void *param_3,void *param_4,void *param_5,
          size_t param_6,undefined1 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  EVP_MD_CTX *ctx_00;
  EVP_MD *type;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  byte bVar5;
  undefined1 local_2b8 [64];
  undefined1 local_278 [64];
  undefined1 local_238 [64];
  undefined1 local_1f8 [256];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  unkbyte9 local_d8;
  undefined7 uStack_cf;
  unkbyte9 Stack_c8;
  byte local_b8 [55];
  byte local_81;
  undefined1 local_80;
  undefined1 local_7f [63];
  long local_40;
  
  bVar5 = 0;
  uVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  local_d8 = SUB169((undefined1  [16])0x0,0);
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  uStack_cf = 0;
  Stack_c8 = SUB169((undefined1  [16])0x0,7);
  if (ctx == (EVP_MD_CTX *)0x0) goto LAB_0010042d;
  ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx_00 == (EVP_MD_CTX *)0x0) {
LAB_00100422:
    uVar4 = 0;
  }
  else {
    type = (EVP_MD *)EVP_MD_fetch(param_1,"SHAKE256",param_10);
    if (type == (EVP_MD *)0x0) {
      EVP_MD_CTX_free(ctx_00);
      EVP_MD_free(0);
      goto LAB_00100422;
    }
    iVar1 = EVP_DigestInit_ex(ctx_00,type,(ENGINE *)0x0);
    if ((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(ctx_00,param_3,0x39), iVar1 == 0)) {
LAB_00100415:
      EVP_MD_CTX_free(ctx_00);
      EVP_MD_free(type);
      goto LAB_00100422;
    }
    iVar1 = EVP_DigestFinalXOF(ctx_00,local_b8,0x72);
    if (iVar1 == 0) goto LAB_00100415;
    EVP_MD_CTX_free(ctx_00);
    EVP_MD_free(type);
    local_b8[0] = local_b8[0] & 0xfc;
    local_81 = local_81 | 0x80;
    local_80 = 0;
    ossl_curve448_scalar_decode_long(local_2b8,local_b8,0x39);
    iVar1 = hash_init_with_dom_constprop_0(param_1,ctx,param_7,param_8,param_9,param_10);
    if (((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(ctx,local_7f,0x39), iVar1 == 0)) ||
       (iVar1 = EVP_DigestUpdate(ctx,param_5,param_6), iVar1 == 0)) {
      OPENSSL_cleanse(local_b8,0x72);
      goto LAB_00100422;
    }
    OPENSSL_cleanse(local_b8,0x72);
    iVar1 = EVP_DigestFinalXOF(ctx,local_b8,0x72);
    if (iVar1 == 0) goto LAB_00100422;
    ossl_curve448_scalar_decode_long(local_278,local_b8,0x72);
    OPENSSL_cleanse(local_b8,0x72);
    ossl_curve448_scalar_halve(local_238,local_278);
    ossl_curve448_scalar_halve(local_238,local_238);
    ossl_curve448_precomputed_scalarmul(local_1f8,_ossl_curve448_precomputed_base,local_238);
    ossl_curve448_point_mul_by_ratio_and_encode_like_eddsa(local_f8,local_1f8);
    ossl_curve448_point_destroy(local_1f8);
    ossl_curve448_scalar_destroy(local_238);
    iVar1 = hash_init_with_dom_constprop_0(param_1,ctx,param_7,param_8,param_9,param_10);
    if (((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(ctx,local_f8,0x39), iVar1 == 0)) ||
       ((iVar1 = EVP_DigestUpdate(ctx,param_4,0x39), iVar1 == 0 ||
        ((iVar1 = EVP_DigestUpdate(ctx,param_5,param_6), iVar1 == 0 ||
         (iVar1 = EVP_DigestFinalXOF(ctx,local_b8,0x72), iVar1 == 0)))))) goto LAB_00100422;
    ossl_curve448_scalar_decode_long(local_1f8,local_b8,0x72);
    OPENSSL_cleanse(local_b8,0x72);
    ossl_curve448_scalar_mul(local_1f8,local_1f8,local_2b8);
    ossl_curve448_scalar_add(local_1f8,local_1f8,local_278);
    OPENSSL_cleanse(param_2,0x72);
    puVar3 = local_f8;
    for (lVar2 = 0x39; lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
      param_2 = param_2 + (ulong)bVar5 * -2 + 1;
    }
    ossl_curve448_scalar_encode(param_2,local_1f8);
    uVar4 = 0xffffffff;
    ossl_curve448_scalar_destroy(local_2b8);
    ossl_curve448_scalar_destroy(local_278);
    ossl_curve448_scalar_destroy(local_1f8);
  }
  EVP_MD_CTX_free(ctx);
LAB_0010042d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



void ossl_c448_ed448_sign_prehash(void)

{
  ossl_c448_ed448_sign();
  return;
}



undefined8
ossl_c448_ed448_verify
          (undefined8 param_1,void *param_2,void *param_3,void *param_4,size_t param_5,
          undefined1 param_6,undefined8 param_7,undefined1 param_8,undefined8 param_9)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  EVP_MD_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar5;
  undefined1 local_338 [64];
  undefined1 local_2f8 [64];
  undefined1 local_2b8 [256];
  undefined1 local_1b8 [256];
  undefined1 local_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = 0x38;
  do {
    bVar1 = *(byte *)((long)param_2 + lVar3 + 0x39);
    if ((byte)order_0[lVar3] < bVar1) break;
    if (bVar1 < (byte)order_0[lVar3]) {
      uVar4 = ossl_curve448_point_decode_like_eddsa_and_mul_by_ratio(local_2b8,param_3);
      if ((int)uVar4 != -1) goto LAB_0010082d;
      uVar4 = ossl_curve448_point_decode_like_eddsa_and_mul_by_ratio(local_1b8,param_2);
      if ((int)uVar4 != -1) goto LAB_0010082d;
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (ctx != (EVP_MD_CTX *)0x0) {
        iVar2 = hash_init_with_dom_constprop_0(param_1,ctx,param_6,param_7,param_8,param_9);
        if (iVar2 != 0) {
          iVar2 = EVP_DigestUpdate(ctx,param_2,0x39);
          if (iVar2 != 0) {
            iVar2 = EVP_DigestUpdate(ctx,param_3,0x39);
            if (iVar2 != 0) {
              iVar2 = EVP_DigestUpdate(ctx,param_4,param_5);
              if (iVar2 != 0) {
                iVar2 = EVP_DigestFinalXOF(ctx,local_b8,0x72);
                if (iVar2 != 0) {
                  EVP_MD_CTX_free(ctx);
                  ossl_curve448_scalar_decode_long(local_338,local_b8,0x72);
                  OPENSSL_cleanse(local_b8,0x72);
                  ossl_curve448_scalar_sub(local_338,&ossl_curve448_scalar_zero,local_338);
                  ossl_curve448_scalar_decode_long(local_2f8,(long)param_2 + 0x39,0x39);
                  ossl_curve448_base_double_scalarmul_non_secret
                            (local_2b8,local_2f8,local_2b8,local_338);
                  uVar4 = ossl_curve448_point_eq(local_2b8,local_1b8);
                  goto LAB_0010082d;
                }
              }
            }
          }
        }
      }
      EVP_MD_CTX_free(ctx);
      uVar4 = 0;
      goto LAB_0010082d;
    }
    bVar5 = lVar3 != 0;
    lVar3 = lVar3 + -1;
  } while (bVar5);
  uVar4 = 0;
LAB_0010082d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_c448_ed448_verify_prehash(void)

{
  ossl_c448_ed448_verify();
  return;
}



bool ossl_ed448_sign(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined1 param_9,undefined8 param_10)

{
  int iVar1;
  
  iVar1 = ossl_c448_ed448_sign
                    (param_1,param_2,param_6,param_5,param_3,param_4,param_9,param_7,param_8,
                     param_10);
  return iVar1 == -1;
}



undefined8 ossl_ed448_pubkey_verify(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 auStack_118 [264];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  if (param_2 == 0x39) {
    uVar1 = ossl_curve448_point_decode_like_eddsa_and_mul_by_ratio(auStack_118,param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_ed448_verify(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                      undefined8 param_9)

{
  int iVar1;
  
  iVar1 = ossl_c448_ed448_verify
                    (param_1,param_4,param_5,param_2,param_3,param_8,param_6,param_7,param_9);
  return iVar1 == -1;
}



bool ossl_ed448_public_from_private(void)

{
  int iVar1;
  
  iVar1 = ossl_c448_ed448_derive_public_key();
  return iVar1 == -1;
}


