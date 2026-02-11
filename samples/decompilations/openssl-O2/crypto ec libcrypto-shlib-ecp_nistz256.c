
void copy_conditional(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_3 - 1;
  uVar1 = -param_3;
  *param_1 = *param_2 & uVar1 ^ *param_1 & uVar2;
  param_1[1] = param_2[1] & uVar1 ^ param_1[1] & uVar2;
  param_1[2] = param_2[2] & uVar1 ^ param_1[2] & uVar2;
  param_1[3] = uVar1 & param_2[3] ^ uVar2 & param_1[3];
  return;
}



undefined4 ecp_nistz256group_full_init(EC_GROUP *param_1,uchar *param_2)

{
  int iVar1;
  BN_CTX *c;
  size_t sVar2;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar3;
  EC_POINT *src;
  EC_POINT *dst;
  undefined8 uVar4;
  undefined4 uVar5;
  BN_MONT_CTX *local_78;
  BIGNUM *local_70;
  BIGNUM *local_68;
  BIGNUM *local_60;
  BIGNUM *local_58;
  BIGNUM *local_50;
  BN_MONT_CTX *local_48;
  
  c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8));
  if (c == (BN_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecp_nistz256.c",0x5b6,"ecp_nistz256group_full_init");
    ERR_set_error(0x10,0xc0100,0);
    return 0;
  }
  sVar2 = EC_GROUP_set_seed(param_1,param_2,0x14);
  if (sVar2 == 0) {
    ERR_new();
    a_00 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    uVar5 = 0;
    ERR_set_debug("crypto/ec/ecp_nistz256.c",0x5bb,"ecp_nistz256group_full_init");
    ERR_set_error(0x10,0x80010,0);
    local_78 = (BN_MONT_CTX *)0x0;
    src = (EC_POINT *)0x0;
    local_50 = (BIGNUM *)0x0;
    local_68 = (BIGNUM *)0x0;
    local_58 = (BIGNUM *)0x0;
    local_60 = (BIGNUM *)0x0;
    local_70 = (BIGNUM *)0x0;
    local_48 = (BN_MONT_CTX *)0x0;
    goto LAB_001003f7;
  }
  a = BN_bin2bn(param_2 + 0x14,0x20,(BIGNUM *)0x0);
  if ((a == (BIGNUM *)0x0) ||
     (a_00 = BN_bin2bn(param_2 + 0x34,0x20,(BIGNUM *)0x0), a_00 == (BIGNUM *)0x0)) {
    a_00 = (BIGNUM *)0x0;
  }
  else {
    local_70 = BN_bin2bn(param_2 + 0x54,0x20,(BIGNUM *)0x0);
    if (local_70 != (BIGNUM *)0x0) {
      local_78 = BN_MONT_CTX_new();
      if (local_78 != (BN_MONT_CTX *)0x0) {
        iVar1 = ossl_bn_mont_ctx_set(local_78,a,0x100,param_2 + 0xd4,0x20,1,0);
        if (iVar1 == 0) {
          local_50 = (BIGNUM *)0x0;
          src = (EC_POINT *)0x0;
          local_68 = (BIGNUM *)0x0;
          local_58 = (BIGNUM *)0x0;
          local_60 = (BIGNUM *)0x0;
          local_48 = (BN_MONT_CTX *)0x0;
          uVar5 = 0;
          goto LAB_001003f7;
        }
        local_68 = BN_new();
        if (local_68 == (BIGNUM *)0x0) {
          ERR_new();
          uVar5 = 0;
          ERR_set_debug("crypto/ec/ecp_nistz256.c",0x5d5,"ecp_nistz256group_full_init");
          ERR_set_error(0x10,0x80003,0);
          src = (EC_POINT *)0x0;
          local_50 = (BIGNUM *)0x0;
          local_58 = (BIGNUM *)0x0;
          local_60 = (BIGNUM *)0x0;
          local_48 = (BN_MONT_CTX *)0x0;
          goto LAB_001003f7;
        }
        pBVar3 = BN_value_one();
        iVar1 = BN_to_montgomery(local_68,pBVar3,local_78,c);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("crypto/ec/ecp_nistz256.c",0x5d9,"ecp_nistz256group_full_init");
          ERR_set_error(0x10,0x80003,0);
          src = (EC_POINT *)0x0;
          local_50 = (BIGNUM *)0x0;
          local_58 = (BIGNUM *)0x0;
          local_60 = (BIGNUM *)0x0;
          local_48 = (BN_MONT_CTX *)0x0;
          uVar5 = 0;
          goto LAB_001003f7;
        }
        *(BN_MONT_CTX **)(param_1 + 0x78) = local_78;
        *(BIGNUM **)(param_1 + 0x80) = local_68;
        iVar1 = ossl_ec_GFp_simple_group_set_curve(param_1,a,a_00,local_70,c);
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("crypto/ec/ecp_nistz256.c",0x5e2,"ecp_nistz256group_full_init");
          ERR_set_error(0x10,0x80010,0);
          local_78 = (BN_MONT_CTX *)0x0;
          src = (EC_POINT *)0x0;
          local_50 = (BIGNUM *)0x0;
          local_68 = (BIGNUM *)0x0;
          local_58 = (BIGNUM *)0x0;
          local_60 = (BIGNUM *)0x0;
          local_48 = (BN_MONT_CTX *)0x0;
          uVar5 = 0;
          goto LAB_001003f7;
        }
        src = EC_POINT_new(param_1);
        if (src != (EC_POINT *)0x0) {
          local_60 = BN_bin2bn(param_2 + 0x74,0x20,(BIGNUM *)0x0);
          if ((local_60 == (BIGNUM *)0x0) ||
             (local_58 = BN_bin2bn(param_2 + 0x94,0x20,(BIGNUM *)0x0), local_58 == (BIGNUM *)0x0)) {
            uVar5 = 0;
            ERR_new();
            ERR_set_debug("crypto/ec/ecp_nistz256.c",0x5ed,"ecp_nistz256group_full_init");
            ERR_set_error(0x10,0x80003,0);
            local_78 = (BN_MONT_CTX *)0x0;
            local_50 = (BIGNUM *)0x0;
            local_68 = (BIGNUM *)0x0;
            local_58 = (BIGNUM *)0x0;
            local_48 = (BN_MONT_CTX *)0x0;
          }
          else {
            iVar1 = EC_POINT_set_affine_coordinates(param_1,src,local_60,local_58,c);
            if (iVar1 == 0) {
              ERR_new();
              ERR_set_debug("crypto/ec/ecp_nistz256.c",0x5f1,"ecp_nistz256group_full_init");
              ERR_set_error(0x10,0x80010,0);
              local_78 = (BN_MONT_CTX *)0x0;
              local_50 = (BIGNUM *)0x0;
              local_68 = (BIGNUM *)0x0;
              local_48 = (BN_MONT_CTX *)0x0;
              uVar5 = 0;
            }
            else {
              local_50 = BN_bin2bn(param_2 + 0xb4,0x20,(BIGNUM *)0x0);
              if ((local_50 == (BIGNUM *)0x0) || (iVar1 = BN_set_word(local_60,1), iVar1 == 0)) {
                ERR_new();
                ERR_set_debug("crypto/ec/ecp_nistz256.c",0x5f6,"ecp_nistz256group_full_init");
                ERR_set_error(0x10,0x80003,0);
              }
              else {
                dst = EC_POINT_new(param_1);
                *(EC_POINT **)(param_1 + 8) = dst;
                if (dst == (EC_POINT *)0x0) {
                  uVar5 = 0;
                  ERR_new();
                  ERR_set_debug("crypto/ec/ecp_nistz256.c",0x5ff,"ecp_nistz256group_full_init");
                  ERR_set_error(0x10,0x80010,0);
                  local_68 = (BIGNUM *)0x0;
                  local_48 = (BN_MONT_CTX *)0x0;
                  local_78 = (BN_MONT_CTX *)0x0;
                  goto LAB_001003f7;
                }
                iVar1 = EC_POINT_copy(dst,src);
                if ((iVar1 != 0) &&
                   (pBVar3 = BN_copy(*(BIGNUM **)(param_1 + 0x10),local_50), pBVar3 != (BIGNUM *)0x0
                   )) {
                  uVar4 = 1;
                  iVar1 = BN_set_word(*(BIGNUM **)(param_1 + 0x18),1);
                  if ((iVar1 != 0) && (local_48 = BN_MONT_CTX_new(), local_48 != (BN_MONT_CTX *)0x0)
                     ) {
                    iVar1 = ossl_bn_mont_ctx_set
                                      (local_48,local_50,0x100,param_2 + 0xf4,0x20,0xee00bc4f,
                                       0xffffffffccd1c8aa,uVar4);
                    if (iVar1 == 0) {
                      local_68 = (BIGNUM *)0x0;
                      local_78 = (BN_MONT_CTX *)0x0;
                      uVar5 = 0;
                    }
                    else {
                      *(BN_MONT_CTX **)(param_1 + 0x90) = local_48;
                      uVar5 = 1;
                      local_68 = (BIGNUM *)0x0;
                      local_48 = (BN_MONT_CTX *)0x0;
                      local_78 = (BN_MONT_CTX *)0x0;
                    }
                    goto LAB_001003f7;
                  }
                }
              }
              local_68 = (BIGNUM *)0x0;
              uVar5 = 0;
              local_48 = (BN_MONT_CTX *)0x0;
              local_78 = (BN_MONT_CTX *)0x0;
            }
          }
          goto LAB_001003f7;
        }
        ERR_new();
        ERR_set_debug("crypto/ec/ecp_nistz256.c",0x5e7,"ecp_nistz256group_full_init");
        ERR_set_error(0x10,0x80010,0);
      }
      local_50 = (BIGNUM *)0x0;
      src = (EC_POINT *)0x0;
      uVar5 = 0;
      local_68 = (BIGNUM *)0x0;
      local_58 = (BIGNUM *)0x0;
      local_60 = (BIGNUM *)0x0;
      local_48 = (BN_MONT_CTX *)0x0;
      local_78 = (BN_MONT_CTX *)0x0;
      goto LAB_001003f7;
    }
  }
  ERR_new();
  uVar5 = 0;
  ERR_set_debug("crypto/ec/ecp_nistz256.c",0x5c3,"ecp_nistz256group_full_init");
  ERR_set_error(0x10,0x80003,0);
  local_78 = (BN_MONT_CTX *)0x0;
  src = (EC_POINT *)0x0;
  local_50 = (BIGNUM *)0x0;
  local_68 = (BIGNUM *)0x0;
  local_58 = (BIGNUM *)0x0;
  local_60 = (BIGNUM *)0x0;
  local_70 = (BIGNUM *)0x0;
  local_48 = (BN_MONT_CTX *)0x0;
LAB_001003f7:
  EC_POINT_free(src);
  BN_CTX_free(c);
  BN_MONT_CTX_free(local_78);
  BN_MONT_CTX_free(local_48);
  BN_free(a);
  BN_free(local_68);
  BN_free(a_00);
  BN_free(local_70);
  BN_free(local_50);
  BN_free(local_60);
  BN_free(local_58);
  return uVar5;
}



bool ecp_nistz256_inv_mod_ord(long param_1,undefined8 param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  int iVar1;
  long lVar2;
  BIGNUM *r;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  undefined1 local_1a8 [32];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = bn_wexpand(param_2,4);
  if (lVar2 == 0) {
    ERR_new();
    uVar3 = 0x51b;
  }
  else {
    iVar1 = BN_num_bits(param_3);
    if (((iVar1 < 0x101) && (iVar1 = BN_is_negative(param_3), iVar1 == 0)) ||
       ((r = BN_CTX_get(param_4), r != (BIGNUM *)0x0 &&
        (iVar1 = BN_nnmod(r,param_3,*(BIGNUM **)(param_1 + 0x10),param_4), param_3 = r, iVar1 != 0))
       )) {
      iVar1 = bn_copy_words(local_248,param_3,4);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ecp_nistz256.c",0x52b,"ecp_nistz256_inv_mod_ord");
        ERR_set_error(0x10,0x92,0);
        bVar6 = false;
      }
      else {
        ecp_nistz256_ord_mul_mont(local_228,local_248,&RR_6);
        ecp_nistz256_ord_sqr_mont(local_208,local_228,1);
        ecp_nistz256_ord_mul_mont(local_1e8,local_228,local_208);
        ecp_nistz256_ord_mul_mont(local_1c8,local_1e8,local_208);
        ecp_nistz256_ord_mul_mont(local_1a8,local_1c8,local_208);
        ecp_nistz256_ord_sqr_mont(local_188,local_1c8,1);
        ecp_nistz256_ord_mul_mont(local_168,local_188,local_1c8);
        ecp_nistz256_ord_sqr_mont(local_148,local_188,1);
        ecp_nistz256_ord_mul_mont(local_148,local_148,local_228);
        ecp_nistz256_ord_sqr_mont(local_128,local_148,1);
        ecp_nistz256_ord_mul_mont(local_108,local_128,local_1c8);
        ecp_nistz256_ord_mul_mont(local_e8,local_128,local_148);
        ecp_nistz256_ord_sqr_mont(local_c8,local_e8,2);
        ecp_nistz256_ord_mul_mont(local_c8,local_c8,local_1e8);
        ecp_nistz256_ord_sqr_mont(local_a8,local_c8,8);
        ecp_nistz256_ord_mul_mont(local_a8,local_a8,local_c8);
        ecp_nistz256_ord_sqr_mont(local_88,local_a8,0x10);
        ecp_nistz256_ord_mul_mont(local_88,local_88,local_a8);
        ecp_nistz256_ord_sqr_mont(local_268,local_88,0x40);
        ecp_nistz256_ord_mul_mont(local_268,local_268,local_88);
        puVar4 = &chain_5;
        do {
          puVar5 = puVar4 + 2;
          ecp_nistz256_ord_sqr_mont(local_268,local_268,*puVar4);
          ecp_nistz256_ord_mul_mont(local_268,local_268,local_228 + (ulong)(byte)puVar4[1] * 0x20);
          puVar4 = puVar5;
        } while (puVar5 != &DAT_00102a56);
        ecp_nistz256_ord_mul_mont(local_268,local_268,one_4);
        iVar1 = bn_set_words(param_2,local_268,4);
        bVar6 = iVar1 != 0;
      }
      goto LAB_00100b49;
    }
    ERR_new();
    uVar3 = 0x524;
  }
  ERR_set_debug("crypto/ec/ecp_nistz256.c",uVar3,"ecp_nistz256_inv_mod_ord");
  ERR_set_error(0x10,0x80003,0);
  bVar6 = false;
LAB_00100b49:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar6;
}



ulong is_one(undefined8 param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  
  puVar2 = (ulong *)bn_get_words();
  iVar1 = bn_get_top(param_1);
  uVar3 = 0;
  if (iVar1 == 4) {
    uVar3 = puVar2[3] ^ 0xfffffffe | ~puVar2[2] | puVar2[1] ^ 0xffffffff00000000 | *puVar2 ^ 1;
    uVar3 = ~(-uVar3 | uVar3) >> 0x3f;
  }
  return uVar3;
}



bool ecp_nistz256_get_affine(EC_GROUP *param_1,EC_POINT *param_2,long param_3,long param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = bn_copy_words(local_168,*(undefined8 *)(param_2 + 0x10),4);
    if (iVar1 != 0) {
      iVar1 = bn_copy_words(local_148,*(undefined8 *)(param_2 + 0x18),4);
      if (iVar1 != 0) {
        iVar1 = bn_copy_words(local_128,*(undefined8 *)(param_2 + 0x20),4);
        if (iVar1 != 0) {
          ecp_nistz256_sqr_mont(&local_68,local_128);
          ecp_nistz256_mul_mont(local_108,&local_68,local_128);
          ecp_nistz256_sqr_mont(&local_68,local_108);
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          ecp_nistz256_mul_mont(local_e8,&local_68,local_108);
          ecp_nistz256_sqr_mont(&local_68,local_e8);
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          ecp_nistz256_mul_mont(local_c8,&local_68,local_e8);
          iVar1 = 7;
          ecp_nistz256_sqr_mont(&local_68,local_c8);
          do {
            ecp_nistz256_sqr_mont(&local_68,&local_68);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          ecp_nistz256_mul_mont(local_a8,&local_68,local_c8);
          iVar1 = 0xf;
          ecp_nistz256_sqr_mont(&local_68,local_a8);
          do {
            ecp_nistz256_sqr_mont(&local_68,&local_68);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          ecp_nistz256_mul_mont(local_88,&local_68,local_a8);
          iVar1 = 0x1f;
          ecp_nistz256_sqr_mont(&local_68,local_88);
          do {
            ecp_nistz256_sqr_mont(&local_68,&local_68);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          iVar1 = 0x80;
          ecp_nistz256_mul_mont(&local_68,&local_68,local_128);
          do {
            ecp_nistz256_sqr_mont(&local_68,&local_68);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          iVar1 = 0x20;
          ecp_nistz256_mul_mont(&local_68,&local_68,local_88);
          do {
            ecp_nistz256_sqr_mont(&local_68,&local_68);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          iVar1 = 0x10;
          ecp_nistz256_mul_mont(&local_68,&local_68,local_88);
          do {
            ecp_nistz256_sqr_mont(&local_68,&local_68);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          iVar1 = 8;
          ecp_nistz256_mul_mont(&local_68,&local_68,local_a8);
          do {
            ecp_nistz256_sqr_mont(&local_68,&local_68);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
          ecp_nistz256_mul_mont(&local_68,&local_68,local_c8);
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          ecp_nistz256_mul_mont(&local_68,&local_68,local_e8);
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          ecp_nistz256_mul_mont(&local_68,&local_68,local_108);
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          ecp_nistz256_sqr_mont(&local_68,&local_68);
          ecp_nistz256_mul_mont(&local_68,&local_68,local_128);
          local_188 = local_68;
          uStack_180 = uStack_60;
          local_178 = local_58;
          uStack_170 = uStack_50;
          ecp_nistz256_sqr_mont(local_e8,&local_188);
          ecp_nistz256_mul_mont(local_c8,local_e8,local_168);
          if (param_3 != 0) {
            ecp_nistz256_from_mont(local_88,local_c8);
            iVar1 = bn_set_words(param_3,local_88,4);
            if (iVar1 == 0) goto LAB_00100d60;
          }
          bVar2 = true;
          if (param_4 != 0) {
            ecp_nistz256_mul_mont(&local_188,&local_188,local_e8);
            ecp_nistz256_mul_mont(local_a8,&local_188,local_148);
            ecp_nistz256_from_mont(&local_68,local_a8);
            iVar1 = bn_set_words(param_4,&local_68,4);
            bVar2 = iVar1 != 0;
          }
          goto LAB_00100d62;
        }
      }
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ecp_nistz256.c",0x49a,"ecp_nistz256_get_affine");
    ERR_set_error(0x10,0x92,0);
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/ec/ecp_nistz256.c",0x493,"ecp_nistz256_get_affine");
    ERR_set_error(0x10,0x6a,0);
  }
LAB_00100d60:
  bVar2 = false;
LAB_00100d62:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



bool ecp_nistz256_is_affine_G(long param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  iVar1 = bn_get_top(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 4) {
    iVar1 = bn_get_top(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 4) {
      puVar2 = (ulong *)bn_get_words(*(undefined8 *)(param_1 + 0x10));
      uVar3 = puVar2[3] ^ 0x18905f76a53755c6 |
              puVar2[2] ^ 0x79fb732b77622510 |
              puVar2[1] ^ 0x75ba95fc5fedb601 | *puVar2 ^ 0x79e730d418a9143c;
      if (-1 < (long)(-uVar3 | uVar3)) {
        puVar2 = (ulong *)bn_get_words(*(undefined8 *)(param_1 + 0x18));
        uVar3 = puVar2[3] ^ 0x8571ff1825885d85 |
                puVar2[2] ^ 0xd2e88688dd21f325 |
                puVar2[1] ^ 0x8b4ab8e4ba19e45c | *puVar2 ^ 0xddf25357ce95560a;
        if (-1 < (long)(-uVar3 | uVar3)) {
          lVar4 = is_one(*(undefined8 *)(param_1 + 0x20));
          return lVar4 != 0;
        }
      }
    }
  }
  return false;
}



bool ecp_nistz256_window_have_precompute_mult(EC_GROUP *param_1)

{
  int iVar1;
  EC_POINT *pEVar2;
  
  pEVar2 = EC_GROUP_get0_generator(param_1);
  if ((pEVar2 != (EC_POINT *)0x0) && (iVar1 = ecp_nistz256_is_affine_G(pEVar2), iVar1 != 0)) {
    return true;
  }
  if (*(int *)(param_1 + 0x98) != 5) {
    return false;
  }
  return *(long *)(param_1 + 0xa0) != 0;
}



/* WARNING: Removing unreachable block (ram,0x00102432) */
/* WARNING: Removing unreachable block (ram,0x00102274) */

int ecp_nistz256_points_mul
              (EC_GROUP *param_1,long param_2,BIGNUM *param_3,ulong param_4,long *param_5,
              undefined8 *param_6,BN_CTX *param_7)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  size_t __n;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  bool bVar16;
  int iVar17;
  EC_POINT *a;
  EC_POINT *b;
  BIGNUM *pBVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  byte *pbVar22;
  ulong *puVar23;
  ulong *puVar24;
  undefined *puVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  undefined8 *puVar30;
  byte *pbVar31;
  uint uVar32;
  ulong *puVar33;
  long in_FS_OFFSET;
  ulong *local_1e0;
  void *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1b0;
  byte *local_1a8;
  long *local_190;
  ulong local_188;
  byte *local_168;
  long *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  ulong local_140 [4];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  ulong local_e0 [4];
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50;
  long local_48;
  
  local_48 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  if (0xffffffe < param_4) {
    ERR_new();
    iVar17 = 0;
    ERR_set_debug("crypto/ec/ecp_nistz256.c",0x3c4,"ecp_nistz256_points_mul");
    ERR_set_error(0x10,0x80106,0);
    goto LAB_001013f7;
  }
  puVar23 = local_e0;
  for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar23 = 0;
    puVar23 = puVar23 + 1;
  }
  BN_CTX_start(param_7);
  local_188 = param_4;
  local_150 = param_6;
  if (param_3 != (BIGNUM *)0x0) {
    a = EC_GROUP_get0_generator(param_1);
    if (a == (EC_POINT *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ecp_nistz256.c",0x3ce,"ecp_nistz256_points_mul");
      ERR_set_error(0x10,0x71,0);
      goto LAB_001013ad;
    }
    lVar20 = *(long *)(param_1 + 0xa0);
    if (lVar20 == 0) goto LAB_00101e5d;
    b = EC_POINT_new(param_1);
    if (b != (EC_POINT *)0x0) {
      ecp_nistz256_gather_w7(local_e0,*(undefined8 *)(lVar20 + 0x10),1);
      iVar17 = bn_set_words(*(undefined8 *)(b + 0x10),local_e0,4);
      if (((iVar17 == 0) ||
          (iVar17 = bn_set_words(*(undefined8 *)(b + 0x18),&local_c0,4), iVar17 == 0)) ||
         (iVar17 = bn_set_words(*(undefined8 *)(b + 0x20),ONE,4), iVar17 == 0)) {
        EC_POINT_free(b);
      }
      else {
        *(undefined4 *)(b + 0x28) = 1;
        iVar17 = EC_POINT_cmp(param_1,a,b,param_7);
        if (iVar17 != 0) {
          EC_POINT_free(b);
LAB_00101e5d:
          iVar17 = ecp_nistz256_is_affine_G(a);
          if (iVar17 != 0) {
            puVar25 = &ecp_nistz256_precomputed;
            goto LAB_00101e76;
          }
          local_188 = param_4 + 1;
          iVar17 = (int)(local_188 * 8);
          local_1b0 = (undefined8 *)CRYPTO_malloc(iVar17,"crypto/ec/ecp_nistz256.c",0x458);
          if (local_1b0 == (undefined8 *)0x0) goto LAB_001013ad;
          local_190 = (long *)CRYPTO_malloc(iVar17,"crypto/ec/ecp_nistz256.c",0x45c);
          if (local_190 != (long *)0x0) {
            __n = local_188 * 8 - 8;
            memcpy(local_1b0,param_6,__n);
            local_1b0[param_4] = param_3;
            memcpy(local_190,param_5,__n);
            local_190[param_4] = (long)a;
            param_5 = local_190;
            local_150 = local_1b0;
            goto LAB_00101521;
          }
          local_190 = (long *)0x0;
          iVar17 = 0;
          goto LAB_001013c1;
        }
        puVar25 = *(undefined **)(lVar20 + 0x10);
        EC_POINT_free(b);
        if (puVar25 == (undefined *)0x0) goto LAB_00101e5d;
LAB_00101e76:
        iVar17 = BN_num_bits(param_3);
        if ((iVar17 < 0x101) && (iVar17 = BN_is_negative(param_3), pBVar18 = param_3, iVar17 == 0))
        {
LAB_00101eda:
          lVar20 = 0;
          iVar17 = bn_get_top();
          if (0 < iVar17 * 8) {
            do {
              lVar19 = bn_get_words(pBVar18);
              *(undefined8 *)(local_70 + lVar20) =
                   *(undefined8 *)(lVar19 + (long)((int)lVar20 >> 3) * 8);
              lVar20 = lVar20 + 8;
              iVar17 = bn_get_top();
            } while ((int)lVar20 < iVar17 * 8);
          }
          lVar19 = (long)(int)lVar20;
          iVar17 = -(int)lVar20;
          uVar21 = iVar17 + 0x21;
          if (uVar21 < 8) {
            if ((uVar21 != 0) && (local_70[lVar19] = 0, (uVar21 & 2) != 0)) {
              *(undefined2 *)(local_70 + (ulong)uVar21 + lVar19 + -2) = 0;
            }
          }
          else {
            uVar26 = iVar17 + 0x20;
            *(undefined8 *)((long)&uStack_78 + (ulong)uVar21 + lVar19) = 0;
            if (7 < uVar26) {
              uVar21 = 0;
              do {
                uVar28 = (ulong)uVar21;
                uVar21 = uVar21 + 8;
                *(undefined8 *)(local_70 + lVar19 + uVar28) = 0;
              } while (uVar21 < uVar26);
            }
          }
          bVar6 = local_70[0];
          uVar21 = (uint)local_70[0] + (uint)local_70[0] & 0xff;
          uVar26 = uVar21 >> 7;
          uVar21 = uVar26 - 1 & uVar21 | -uVar26 & 0xff - uVar21;
          ecp_nistz256_gather_w7(local_e0,puVar25,(uVar21 >> 1) + (uVar21 & 1) & 0x7fffffff);
          ecp_nistz256_neg(&local_a0,&local_c0);
          puVar25 = puVar25 + 0x1000;
          copy_conditional(&local_c0,&local_a0,uVar26);
          local_a8 = local_e0[0] | local_e0[1] | local_e0[2] | local_e0[3] | local_c0 | local_b8 |
                     local_b0 | local_a8;
          local_a8 = local_a8 | -local_a8;
          local_90 = (long)local_a8 >> 0x3f;
          local_a0 = local_a8 >> 0x3f;
          local_98 = local_90 & 0xffffffff00000000;
          local_88 = (ulong)((uint)((long)local_a8 >> 0x3f) & 0xfffffffe);
          uVar21 = 6;
          while( true ) {
            uVar32 = uVar21 + 7;
            uVar21 = (ushort)(CONCAT11(local_70[(uVar21 >> 3) + 1],bVar6) >> ((byte)uVar21 & 7)) &
                     0xff;
            uVar26 = uVar21 >> 7;
            uVar21 = uVar21 & uVar26 - 1 | -uVar26 & 0xff - uVar21;
            ecp_nistz256_gather_w7(local_140,puVar25,(uVar21 >> 1) + (uVar21 & 1) & 0x7fffffff);
            ecp_nistz256_neg(local_100,local_120);
            copy_conditional(local_120,local_100,uVar26);
            ecp_nistz256_point_add_affine(local_e0,local_e0,local_140);
            if (uVar32 == 0x102) break;
            bVar6 = local_70[uVar32 >> 3];
            puVar25 = puVar25 + 0x1000;
            uVar21 = uVar32;
          }
          if (param_4 != 0) {
            bVar16 = false;
            local_1b0 = (undefined8 *)0x0;
            local_190 = (long *)0x0;
            local_1e0 = local_140;
            goto LAB_00101536;
          }
          goto LAB_0010142c;
        }
        pBVar18 = BN_CTX_get(param_7);
        if (pBVar18 != (BIGNUM *)0x0) {
          iVar17 = BN_nnmod(pBVar18,param_3,*(BIGNUM **)(param_1 + 0x10),param_7);
          if (iVar17 != 0) goto LAB_00101eda;
          ERR_new();
          ERR_set_debug("crypto/ec/ecp_nistz256.c",0x3fe,"ecp_nistz256_points_mul");
          ERR_set_error(0x10,0x80003,0);
        }
      }
    }
LAB_001013ad:
    local_190 = (long *)0x0;
    iVar17 = 0;
    local_1b0 = (undefined8 *)0x0;
    goto LAB_001013c1;
  }
  if (param_4 == 0) {
LAB_0010142c:
    local_190 = (long *)0x0;
    local_1b0 = (undefined8 *)0x0;
LAB_0010144a:
    iVar17 = bn_set_words(*(undefined8 *)(param_2 + 0x10),local_e0,4);
    if (iVar17 == 0) {
LAB_00101469:
      iVar17 = 0;
    }
    else {
      iVar17 = bn_set_words(*(undefined8 *)(param_2 + 0x18),&local_c0,4);
      if (iVar17 != 0) {
        iVar17 = bn_set_words(*(undefined8 *)(param_2 + 0x20),&local_a0,4);
        if (iVar17 == 0) goto LAB_00101469;
        uVar21 = is_one(*(undefined8 *)(param_2 + 0x20));
        *(uint *)(param_2 + 0x28) = uVar21 & 1;
        iVar17 = 1;
      }
    }
  }
  else {
    local_1b0 = (undefined8 *)0x0;
    local_190 = (long *)0x0;
LAB_00101521:
    bVar16 = true;
    local_1e0 = local_e0;
LAB_00101536:
    if (local_188 * 0x10 + 6 < 0x1555556) {
      local_1d8 = CRYPTO_malloc((int)local_188 * 0x600 + 0x220,"crypto/ec/ecp_nistz256.c",0x273);
      if (local_1d8 == (void *)0x0) goto LAB_00101df8;
      local_1a8 = (byte *)CRYPTO_malloc((int)(local_188 * 0x21),"crypto/ec/ecp_nistz256.c",0x275);
      if (local_1a8 == (byte *)0x0) {
        local_1d0 = (undefined8 *)0x0;
      }
      else {
        local_1d0 = (undefined8 *)CRYPTO_malloc((int)local_188 * 8,"crypto/ec/ecp_nistz256.c",0x276)
        ;
        if (local_1d0 != (undefined8 *)0x0) {
          puVar23 = (ulong *)(((ulong)local_1d8 & 0xffffffffffffffc0) + 0x40);
          local_158 = local_150;
          puVar5 = puVar23 + local_188 * 0xc0;
          puVar30 = local_1d0;
          puVar33 = puVar23;
          local_168 = local_1a8;
          local_160 = param_5;
          do {
            iVar17 = BN_num_bits((BIGNUM *)*local_158);
            if ((iVar17 < 0x101) && (iVar17 = BN_is_negative(*local_158), iVar17 == 0)) {
              *puVar30 = *local_158;
            }
            else {
              pBVar18 = BN_CTX_get(param_7);
              if (pBVar18 == (BIGNUM *)0x0) goto LAB_00101e13;
              iVar17 = BN_nnmod(pBVar18,(BIGNUM *)*local_158,*(BIGNUM **)(param_1 + 0x10),param_7);
              if (iVar17 == 0) {
                ERR_new();
                ERR_set_debug("crypto/ec/ecp_nistz256.c",0x286,"ecp_nistz256_windowed_mul");
                ERR_set_error(0x10,0x80003,0);
                goto LAB_00101e13;
              }
              *puVar30 = pBVar18;
            }
            lVar20 = 0;
            while( true ) {
              iVar29 = (int)lVar20;
              iVar17 = bn_get_top();
              if (iVar17 * 8 <= iVar29) break;
              lVar19 = bn_get_words(*puVar30);
              *(undefined8 *)(local_168 + lVar20) =
                   *(undefined8 *)(lVar19 + (long)(iVar29 >> 3) * 8);
              lVar20 = lVar20 + 8;
            }
            if (iVar29 < 0x21) {
              uVar21 = 0x21 - iVar29;
              pbVar22 = local_168 + iVar29;
              if (uVar21 < 8) {
                if ((uVar21 != 0) && (*pbVar22 = 0, (uVar21 & 2) != 0)) {
                  (pbVar22 + ((ulong)uVar21 - 2))[0] = 0;
                  (pbVar22 + ((ulong)uVar21 - 2))[1] = 0;
                }
              }
              else {
                pbVar22[0] = 0;
                pbVar22[1] = 0;
                pbVar22[2] = 0;
                pbVar22[3] = 0;
                pbVar22[4] = 0;
                pbVar22[5] = 0;
                pbVar22[6] = 0;
                pbVar22[7] = 0;
                pbVar31 = pbVar22 + ((ulong)uVar21 - 8);
                pbVar31[0] = 0;
                pbVar31[1] = 0;
                pbVar31[2] = 0;
                pbVar31[3] = 0;
                pbVar31[4] = 0;
                pbVar31[5] = 0;
                pbVar31[6] = 0;
                pbVar31[7] = 0;
                uVar21 = uVar21 + ((int)pbVar22 - (int)((ulong)(pbVar22 + 8) & 0xfffffffffffffff8))
                         & 0xfffffff8;
                if (7 < uVar21) {
                  uVar26 = 0;
                  do {
                    uVar28 = (ulong)uVar26;
                    uVar26 = uVar26 + 8;
                    *(undefined8 *)(((ulong)(pbVar22 + 8) & 0xfffffffffffffff8) + uVar28) = 0;
                  } while (uVar26 < uVar21);
                }
              }
            }
            iVar17 = bn_copy_words(puVar5,*(undefined8 *)(*local_160 + 0x10),4);
            if (iVar17 == 0) {
LAB_00102241:
              ERR_new();
              ERR_set_debug("crypto/ec/ecp_nistz256.c",0x2a2,"ecp_nistz256_windowed_mul");
              ERR_set_error(0x10,0x92,0);
              goto LAB_00101e13;
            }
            puVar1 = puVar5 + 4;
            iVar17 = bn_copy_words(puVar1,*(undefined8 *)(*local_160 + 0x18),4);
            if ((iVar17 == 0) ||
               (iVar17 = bn_copy_words(puVar5 + 8,*(undefined8 *)(*local_160 + 0x20),4), iVar17 == 0
               )) goto LAB_00102241;
            puVar24 = puVar5 + 0xc;
            ecp_nistz256_scatter_w5(puVar33,puVar5,1);
            puVar2 = puVar5 + 0x18;
            ecp_nistz256_point_double(puVar24,puVar5);
            ecp_nistz256_scatter_w5(puVar33,puVar24,2);
            ecp_nistz256_point_add(puVar2,puVar24,puVar5);
            ecp_nistz256_scatter_w5(puVar33,puVar2,3);
            ecp_nistz256_point_double(puVar24,puVar24);
            ecp_nistz256_scatter_w5(puVar33,puVar24,4);
            ecp_nistz256_point_double(puVar2,puVar2);
            ecp_nistz256_scatter_w5(puVar33,puVar2,6);
            puVar3 = puVar5 + 0x24;
            ecp_nistz256_point_add(puVar3,puVar24,puVar5);
            ecp_nistz256_scatter_w5(puVar33,puVar3,5);
            puVar4 = puVar5 + 0x30;
            ecp_nistz256_point_add(puVar4,puVar2,puVar5);
            ecp_nistz256_scatter_w5(puVar33,puVar4,7);
            ecp_nistz256_point_double(puVar24,puVar24);
            ecp_nistz256_scatter_w5(puVar33,puVar24,8);
            ecp_nistz256_point_double(puVar2,puVar2);
            ecp_nistz256_scatter_w5(puVar33,puVar2,0xc);
            ecp_nistz256_point_double(puVar3,puVar3);
            ecp_nistz256_scatter_w5(puVar33,puVar3,10);
            ecp_nistz256_point_double(puVar4);
            ecp_nistz256_scatter_w5(puVar33,puVar4,0xe);
            ecp_nistz256_point_add(puVar2,puVar2,puVar5);
            ecp_nistz256_scatter_w5(puVar33,puVar2,0xd);
            ecp_nistz256_point_add(puVar3,puVar3,puVar5);
            ecp_nistz256_scatter_w5(puVar33,puVar3,0xb);
            ecp_nistz256_point_add(puVar4,puVar4,puVar5);
            ecp_nistz256_scatter_w5(puVar33,puVar4,0xf);
            ecp_nistz256_point_add(puVar2,puVar24,puVar5);
            ecp_nistz256_scatter_w5(puVar33,puVar2,9);
            ecp_nistz256_point_double(puVar24,puVar24);
            ecp_nistz256_scatter_w5(puVar33,puVar24,0x10);
            local_158 = local_158 + 1;
            puVar33 = puVar33 + 0xc0;
            local_160 = local_160 + 1;
            puVar30 = puVar30 + 1;
            local_168 = local_168 + 0x21;
          } while (local_150 + local_188 != local_158);
          ecp_nistz256_gather_w5
                    (puVar5,puVar23,(local_1a8[0x1f] >> 6 & 1) - ((char)local_1a8[0x1f] >> 7));
          uVar28 = puVar5[1];
          uVar27 = puVar5[2];
          uVar7 = puVar5[3];
          iVar17 = 0xff;
          uVar8 = puVar5[4];
          uVar9 = puVar5[5];
          uVar10 = puVar5[6];
          uVar11 = puVar5[7];
          puVar33 = puVar5 + 0x10;
          uVar12 = puVar5[8];
          uVar13 = puVar5[9];
          uVar14 = puVar5[10];
          uVar15 = puVar5[0xb];
          *local_1e0 = *puVar5;
          local_1e0[1] = uVar28;
          local_1e0[2] = uVar27;
          local_1e0[3] = uVar7;
          local_1e0[4] = uVar8;
          local_1e0[5] = uVar9;
          local_1e0[6] = uVar10;
          local_1e0[7] = uVar11;
          local_1e0[8] = uVar12;
          local_1e0[9] = uVar13;
          local_1e0[10] = uVar14;
          local_1e0[0xb] = uVar15;
          do {
            while (uVar28 = (ulong)(iVar17 == 0xff), local_188 <= (iVar17 == 0xff)) {
              ecp_nistz256_point_double(local_1e0,local_1e0);
              ecp_nistz256_point_double(local_1e0,local_1e0);
              ecp_nistz256_point_double(local_1e0,local_1e0);
              ecp_nistz256_point_double(local_1e0,local_1e0);
              ecp_nistz256_point_double(local_1e0,local_1e0);
              iVar17 = 0xfa;
            }
            uVar21 = iVar17 - 1U >> 3;
            uVar27 = (ulong)uVar21;
            local_160._0_1_ = (byte)(iVar17 - 1U) & 7;
            lVar20 = (long)puVar23 + (ulong)((uint)((long)(uVar28 << 0x3f) >> 0x3f) & 0x600);
            pbVar22 = local_1a8 + ((uint)((long)(uVar28 << 0x3f) >> 0x3f) & 0x21) + uVar27;
            do {
              pbVar31 = pbVar22 + 0x21;
              uVar26 = (ushort)(CONCAT11(pbVar22[(uVar21 + 1) - uVar27],*pbVar22) >> (byte)local_160
                               ) & 0x3f;
              uVar32 = uVar26 >> 5;
              uVar26 = uVar26 & uVar32 - 1 | -uVar32 & 0x3f - uVar26;
              ecp_nistz256_gather_w5(puVar5,lVar20,(uVar26 >> 1) + (uVar26 & 1) & 0x7fffffff);
              ecp_nistz256_neg(puVar33,puVar1);
              copy_conditional(puVar1,puVar33,uVar32);
              ecp_nistz256_point_add(local_1e0,local_1e0,puVar5);
              lVar20 = lVar20 + 0x600;
              pbVar22 = pbVar31;
            } while (pbVar31 != local_1a8 + uVar27 + local_188 * 0x21);
            iVar17 = iVar17 + -5;
            ecp_nistz256_point_double(local_1e0,local_1e0);
            ecp_nistz256_point_double(local_1e0,local_1e0);
            ecp_nistz256_point_double(local_1e0,local_1e0);
            ecp_nistz256_point_double(local_1e0,local_1e0);
            ecp_nistz256_point_double(local_1e0,local_1e0);
            pbVar22 = local_1a8;
          } while (iVar17 != 0);
          do {
            uVar21 = (uint)*pbVar22 * 2 & 0x3f;
            uVar26 = uVar21 >> 5;
            uVar32 = -uVar26 & 0x3f - uVar21;
            puVar24 = puVar23 + 0xc0;
            ecp_nistz256_gather_w5
                      (puVar5,puVar23,
                       ((uVar26 - 1 & uVar21 | uVar32) >> 1) + (uVar32 & 1) & 0x7fffffff);
            ecp_nistz256_neg(puVar33,puVar1);
            copy_conditional(puVar1,puVar33,uVar26);
            ecp_nistz256_point_add(local_1e0,local_1e0,puVar5);
            puVar23 = puVar24;
            pbVar22 = pbVar22 + 0x21;
          } while (puVar24 != puVar5);
          CRYPTO_free(local_1d8);
          CRYPTO_free(local_1a8);
          CRYPTO_free(local_1d0);
          if (!bVar16) {
            ecp_nistz256_point_add(local_e0,local_e0,local_1e0);
          }
          goto LAB_0010144a;
        }
      }
    }
    else {
LAB_00101df8:
      local_1d8 = (void *)0x0;
      local_1d0 = (undefined8 *)0x0;
      local_1a8 = (byte *)0x0;
    }
LAB_00101e13:
    CRYPTO_free(local_1d8);
    CRYPTO_free(local_1a8);
    iVar17 = 0;
    CRYPTO_free(local_1d0);
  }
LAB_001013c1:
  BN_CTX_end(param_7);
  CRYPTO_free(local_190);
  CRYPTO_free(local_1b0);
LAB_001013f7:
  if (local_48 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long EC_nistz256_pre_comp_dup(long param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    UNLOCK();
  }
  return param_1;
}



void EC_nistz256_pre_comp_free(void *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((long)param_1 + 0x20);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  CRYPTO_free(*(void **)((long)param_1 + 0x18));
  CRYPTO_free(param_1);
  return;
}



undefined4 ecp_nistz256_mult_precompute(EC_GROUP *param_1,BN_CTX *param_2)

{
  BN_CTX *pBVar1;
  int iVar2;
  int iVar3;
  EC_POINT *src;
  undefined8 *puVar4;
  long lVar5;
  EC_POINT *dst;
  undefined4 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  BN_CTX *local_d0;
  EC_POINT *local_c8;
  void *local_c0;
  int local_b4;
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EC_pre_comp_free();
  src = EC_GROUP_get0_generator(param_1);
  if (src == (EC_POINT *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ecp_nistz256.c",0x339,"ecp_nistz256_mult_precompute");
    ERR_set_error(0x10,0x71,0);
LAB_001028b0:
    uVar6 = 0;
    goto LAB_0010255c;
  }
  iVar2 = ecp_nistz256_is_affine_G(src);
  if (iVar2 != 0) {
    uVar6 = 1;
    goto LAB_0010255c;
  }
  if ((param_1 == (EC_GROUP *)0x0) ||
     (puVar4 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/ec/ecp_nistz256.c",0x4ba),
     puVar4 == (undefined8 *)0x0)) goto LAB_001028b0;
  *puVar4 = param_1;
  puVar4[1] = 6;
  LOCK();
  *(undefined4 *)(puVar4 + 4) = 1;
  UNLOCK();
  local_d0 = (BN_CTX *)0x0;
  uVar6 = 0;
  pBVar1 = local_d0;
  if ((param_2 == (BN_CTX *)0x0) &&
     (param_2 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xa8)), pBVar1 = param_2,
     param_2 == (BN_CTX *)0x0)) {
LAB_001028c0:
    local_c0 = (void *)0x0;
    dst = (EC_POINT *)0x0;
    local_c8 = (EC_POINT *)0x0;
  }
  else {
    local_d0 = pBVar1;
    BN_CTX_start(param_2);
    lVar5 = EC_GROUP_get0_order(param_1);
    if (lVar5 == 0) goto LAB_001028c0;
    iVar2 = BN_is_zero(lVar5);
    if (iVar2 == 0) {
      local_c0 = CRYPTO_malloc(0x25040,"crypto/ec/ecp_nistz256.c",0x35c);
      if (local_c0 == (void *)0x0) goto LAB_001028c0;
      dst = EC_POINT_new(param_1);
      local_c8 = EC_POINT_new(param_1);
      if (((dst == (EC_POINT *)0x0) || (local_c8 == (EC_POINT *)0x0)) ||
         (iVar2 = EC_POINT_copy(local_c8,src), iVar2 == 0)) {
LAB_00102905:
        uVar6 = 0;
      }
      else {
        local_b4 = 0;
        lVar5 = ((ulong)local_c0 & 0xffffffffffffffc0) + 0x40;
        do {
          iVar2 = EC_POINT_copy(dst,local_c8);
          lVar7 = lVar5;
          if (iVar2 == 0) goto LAB_00102905;
          do {
            if ((*(code **)(*(long *)param_1 + 0xd0) == (code *)0x0) ||
               (iVar2 = (**(code **)(*(long *)param_1 + 0xd0))(param_1,dst,param_2), iVar2 == 0))
            goto LAB_00102905;
            iVar2 = bn_copy_words(local_88,*(undefined8 *)(dst + 0x10),4);
            if ((iVar2 == 0) ||
               (iVar2 = bn_copy_words(local_68,*(undefined8 *)(dst + 0x18),4), iVar2 == 0)) {
              ERR_new();
              ERR_set_debug("crypto/ec/ecp_nistz256.c",0x37b,"ecp_nistz256_mult_precompute");
              ERR_set_error(0x10,0x92,0);
              goto LAB_00102905;
            }
            iVar2 = 7;
            ecp_nistz256_scatter_w7(lVar7,local_88,local_b4);
            do {
              iVar3 = EC_POINT_dbl(param_1,dst,dst,param_2);
              if (iVar3 == 0) goto LAB_00102905;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            lVar7 = lVar7 + 0x1000;
          } while (lVar7 != ((ulong)local_c0 & 0xffffffffffffffc0) + 0x25040);
          iVar2 = EC_POINT_add(param_1,local_c8,local_c8,src,param_2);
          if (iVar2 == 0) goto LAB_00102905;
          local_b4 = local_b4 + 1;
        } while (local_b4 != 0x40);
        *(undefined4 *)(param_1 + 0x98) = 5;
        uVar6 = 1;
        puVar4[3] = local_c0;
        *puVar4 = param_1;
        puVar4[1] = 7;
        puVar4[2] = lVar5;
        *(undefined8 **)(param_1 + 0xa0) = puVar4;
        puVar4 = (undefined8 *)0x0;
        local_c0 = (void *)0x0;
      }
    }
    else {
      ERR_new();
      dst = (EC_POINT *)0x0;
      ERR_set_debug("crypto/ec/ecp_nistz256.c",0x355,"ecp_nistz256_mult_precompute");
      ERR_set_error(0x10,0x72,0);
      local_c0 = (void *)0x0;
      local_c8 = (EC_POINT *)0x0;
    }
  }
  BN_CTX_end(param_2);
  BN_CTX_free(local_d0);
  EC_nistz256_pre_comp_free(puVar4);
  CRYPTO_free(local_c0);
  EC_POINT_free(dst);
  EC_POINT_free(local_c8);
LAB_0010255c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



undefined1 * EC_GFp_nistz256_method(void)

{
  return ret_9;
}


