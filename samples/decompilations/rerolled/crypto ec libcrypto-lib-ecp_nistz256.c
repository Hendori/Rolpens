undefined4 ecp_nistz256group_full_init(EC_GROUP *param_1, uchar *param_2) {
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
   c = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( param_1 + 0xa8 ));
   if (c == (BN_CTX*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x5b6, "ecp_nistz256group_full_init");
      ERR_set_error(0x10, 0xc0100, 0);
      return 0;
   }
   sVar2 = EC_GROUP_set_seed(param_1, param_2, 0x14);
   if (sVar2 == 0) {
      ERR_new();
      a_00 = (BIGNUM*)0x0;
      a = (BIGNUM*)0x0;
      uVar5 = 0;
      ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x5bb, "ecp_nistz256group_full_init");
      ERR_set_error(0x10, 0x80010, 0);
      local_78 = (BN_MONT_CTX*)0x0;
      src = (EC_POINT*)0x0;
      local_50 = (BIGNUM*)0x0;
      local_68 = (BIGNUM*)0x0;
      local_58 = (BIGNUM*)0x0;
      local_60 = (BIGNUM*)0x0;
      local_70 = (BIGNUM*)0x0;
      local_48 = (BN_MONT_CTX*)0x0;
      goto LAB_00100397;
   }
   a = BN_bin2bn(param_2 + 0x14, 0x20, (BIGNUM*)0x0);
   if (( a == (BIGNUM*)0x0 ) || ( a_00 = BN_bin2bn(param_2 + 0x34, 0x20, (BIGNUM*)0x0) ),a_00 == (BIGNUM*)0x0) {
      a_00 = (BIGNUM*)0x0;
   } else {
      local_70 = BN_bin2bn(param_2 + 0x54, 0x20, (BIGNUM*)0x0);
      if (local_70 != (BIGNUM*)0x0) {
         local_78 = BN_MONT_CTX_new();
         if (local_78 != (BN_MONT_CTX*)0x0) {
            iVar1 = ossl_bn_mont_ctx_set(local_78, a, 0x100, param_2 + 0xd4, 0x20, 1, 0);
            if (iVar1 == 0) {
               local_50 = (BIGNUM*)0x0;
               src = (EC_POINT*)0x0;
               local_68 = (BIGNUM*)0x0;
               local_58 = (BIGNUM*)0x0;
               local_60 = (BIGNUM*)0x0;
               local_48 = (BN_MONT_CTX*)0x0;
               uVar5 = 0;
               goto LAB_00100397;
            }
            local_68 = BN_new();
            if (local_68 == (BIGNUM*)0x0) {
               ERR_new();
               uVar5 = 0;
               ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x5d5, "ecp_nistz256group_full_init");
               ERR_set_error(0x10, 0x80003, 0);
               src = (EC_POINT*)0x0;
               local_50 = (BIGNUM*)0x0;
               local_58 = (BIGNUM*)0x0;
               local_60 = (BIGNUM*)0x0;
               local_48 = (BN_MONT_CTX*)0x0;
               goto LAB_00100397;
            }
            pBVar3 = BN_value_one();
            iVar1 = BN_to_montgomery(local_68, pBVar3, local_78, c);
            if (iVar1 == 0) {
               ERR_new();
               ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x5d9, "ecp_nistz256group_full_init");
               ERR_set_error(0x10, 0x80003, 0);
               src = (EC_POINT*)0x0;
               local_50 = (BIGNUM*)0x0;
               local_58 = (BIGNUM*)0x0;
               local_60 = (BIGNUM*)0x0;
               local_48 = (BN_MONT_CTX*)0x0;
               uVar5 = 0;
               goto LAB_00100397;
            }
            *(BN_MONT_CTX**)( param_1 + 0x78 ) = local_78;
            *(BIGNUM**)( param_1 + 0x80 ) = local_68;
            iVar1 = ossl_ec_GFp_simple_group_set_curve(param_1, a, a_00, local_70, c);
            if (iVar1 == 0) {
               ERR_new();
               ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x5e2, "ecp_nistz256group_full_init");
               ERR_set_error(0x10, 0x80010, 0);
               local_78 = (BN_MONT_CTX*)0x0;
               src = (EC_POINT*)0x0;
               local_50 = (BIGNUM*)0x0;
               local_68 = (BIGNUM*)0x0;
               local_58 = (BIGNUM*)0x0;
               local_60 = (BIGNUM*)0x0;
               local_48 = (BN_MONT_CTX*)0x0;
               uVar5 = 0;
               goto LAB_00100397;
            }
            src = EC_POINT_new(param_1);
            if (src != (EC_POINT*)0x0) {
               local_60 = BN_bin2bn(param_2 + 0x74, 0x20, (BIGNUM*)0x0);
               if (( local_60 == (BIGNUM*)0x0 ) || ( local_58 = BN_bin2bn(param_2 + 0x94, 0x20, (BIGNUM*)0x0) ),local_58 == (BIGNUM*)0x0) {
                  uVar5 = 0;
                  ERR_new();
                  ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x5ed, "ecp_nistz256group_full_init");
                  ERR_set_error(0x10, 0x80003, 0);
                  local_78 = (BN_MONT_CTX*)0x0;
                  local_50 = (BIGNUM*)0x0;
                  local_68 = (BIGNUM*)0x0;
                  local_58 = (BIGNUM*)0x0;
                  local_48 = (BN_MONT_CTX*)0x0;
               } else {
                  iVar1 = EC_POINT_set_affine_coordinates(param_1, src, local_60, local_58, c);
                  if (iVar1 == 0) {
                     ERR_new();
                     ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x5f1, "ecp_nistz256group_full_init");
                     ERR_set_error(0x10, 0x80010, 0);
                     local_78 = (BN_MONT_CTX*)0x0;
                     local_50 = (BIGNUM*)0x0;
                     local_68 = (BIGNUM*)0x0;
                     local_48 = (BN_MONT_CTX*)0x0;
                     uVar5 = 0;
                  } else {
                     local_50 = BN_bin2bn(param_2 + 0xb4, 0x20, (BIGNUM*)0x0);
                     if (( local_50 == (BIGNUM*)0x0 ) || ( iVar1 = iVar1 == 0 )) {
                        ERR_new();
                        ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x5f6, "ecp_nistz256group_full_init");
                        ERR_set_error(0x10, 0x80003, 0);
                     } else {
                        dst = EC_POINT_new(param_1);
                        *(EC_POINT**)( param_1 + 8 ) = dst;
                        if (dst == (EC_POINT*)0x0) {
                           uVar5 = 0;
                           ERR_new();
                           ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x5ff, "ecp_nistz256group_full_init");
                           ERR_set_error(0x10, 0x80010, 0);
                           local_68 = (BIGNUM*)0x0;
                           local_48 = (BN_MONT_CTX*)0x0;
                           local_78 = (BN_MONT_CTX*)0x0;
                           goto LAB_00100397;
                        }
                        iVar1 = EC_POINT_copy(dst, src);
                        if (( iVar1 != 0 ) && ( pBVar3 = BN_copy(*(BIGNUM**)( param_1 + 0x10 ), local_50) ),pBVar3 != (BIGNUM*)0x0) {
                           uVar4 = 1;
                           iVar1 = BN_set_word(*(BIGNUM**)( param_1 + 0x18 ), 1);
                           if (( iVar1 != 0 ) && ( local_48 = BN_MONT_CTX_new() ),local_48 != (BN_MONT_CTX*)0x0) {
                              iVar1 = ossl_bn_mont_ctx_set(local_48, local_50, 0x100, param_2 + 0xf4, 0x20, 0xee00bc4f, 0xffffffffccd1c8aa, uVar4);
                              if (iVar1 == 0) {
                                 local_68 = (BIGNUM*)0x0;
                                 local_78 = (BN_MONT_CTX*)0x0;
                                 uVar5 = 0;
                              } else {
                                 *(BN_MONT_CTX**)( param_1 + 0x90 ) = local_48;
                                 uVar5 = 1;
                                 local_68 = (BIGNUM*)0x0;
                                 local_48 = (BN_MONT_CTX*)0x0;
                                 local_78 = (BN_MONT_CTX*)0x0;
                              }
                              goto LAB_00100397;
                           }
                        }
                     }
                     local_68 = (BIGNUM*)0x0;
                     uVar5 = 0;
                     local_48 = (BN_MONT_CTX*)0x0;
                     local_78 = (BN_MONT_CTX*)0x0;
                  }
               }
               goto LAB_00100397;
            }
            ERR_new();
            ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x5e7, "ecp_nistz256group_full_init");
            ERR_set_error(0x10, 0x80010, 0);
         }
         local_50 = (BIGNUM*)0x0;
         src = (EC_POINT*)0x0;
         uVar5 = 0;
         local_68 = (BIGNUM*)0x0;
         local_58 = (BIGNUM*)0x0;
         local_60 = (BIGNUM*)0x0;
         local_48 = (BN_MONT_CTX*)0x0;
         local_78 = (BN_MONT_CTX*)0x0;
         goto LAB_00100397;
      }
   }
   ERR_new();
   uVar5 = 0;
   ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x5c3, "ecp_nistz256group_full_init");
   ERR_set_error(0x10, 0x80003, 0);
   local_78 = (BN_MONT_CTX*)0x0;
   src = (EC_POINT*)0x0;
   local_50 = (BIGNUM*)0x0;
   local_68 = (BIGNUM*)0x0;
   local_58 = (BIGNUM*)0x0;
   local_60 = (BIGNUM*)0x0;
   local_70 = (BIGNUM*)0x0;
   local_48 = (BN_MONT_CTX*)0x0;
   LAB_00100397:EC_POINT_free(src);
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
}bool ecp_nistz256_inv_mod_ord(long param_1, undefined8 param_2, BIGNUM *param_3, BN_CTX *param_4) {
   int iVar1;
   long lVar2;
   BIGNUM *r;
   undefined8 uVar3;
   undefined1 *puVar4;
   undefined1 *puVar5;
   long in_FS_OFFSET;
   bool bVar6;
   undefined1 local_268[32];
   undefined1 local_248[32];
   undefined1 local_228[32];
   undefined1 local_208[32];
   undefined1 local_1e8[32];
   undefined1 local_1c8[32];
   undefined1 local_1a8[32];
   undefined1 local_188[32];
   undefined1 local_168[32];
   undefined1 local_148[32];
   undefined1 local_128[32];
   undefined1 local_108[32];
   undefined1 local_e8[32];
   undefined1 local_c8[32];
   undefined1 local_a8[32];
   undefined1 local_88[72];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = bn_wexpand(param_2, 4);
   if (lVar2 == 0) {
      ERR_new();
      uVar3 = 0x51b;
   } else {
      iVar1 = BN_num_bits(param_3);
      if (( ( iVar1 < 0x101 ) && ( iVar1 = iVar1 == 0 ) ) || ( ( r = BN_CTX_get(param_4) ),r != (BIGNUM*)0x0 && ( iVar1 = BN_nnmod(r, param_3, *(BIGNUM**)( param_1 + 0x10 ), param_4) ),param_3 = r,iVar1 != 0 )) {
         iVar1 = bn_copy_words(local_248, param_3, 4);
         if (iVar1 == 0) {
            ERR_new();
            ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x52b, "ecp_nistz256_inv_mod_ord");
            ERR_set_error(0x10, 0x92, 0);
            bVar6 = false;
         } else {
            ecp_nistz256_ord_mul_mont(local_228, local_248, &RR_6);
            ecp_nistz256_ord_sqr_mont(local_208, local_228, 1);
            ecp_nistz256_ord_mul_mont(local_1e8, local_228, local_208);
            ecp_nistz256_ord_mul_mont(local_1c8, local_1e8, local_208);
            ecp_nistz256_ord_mul_mont(local_1a8, local_1c8, local_208);
            ecp_nistz256_ord_sqr_mont(local_188, local_1c8, 1);
            ecp_nistz256_ord_mul_mont(local_168, local_188, local_1c8);
            ecp_nistz256_ord_sqr_mont(local_148, local_188, 1);
            ecp_nistz256_ord_mul_mont(local_148, local_148, local_228);
            ecp_nistz256_ord_sqr_mont(local_128, local_148, 1);
            ecp_nistz256_ord_mul_mont(local_108, local_128, local_1c8);
            ecp_nistz256_ord_mul_mont(local_e8, local_128, local_148);
            ecp_nistz256_ord_sqr_mont(local_c8, local_e8, 2);
            ecp_nistz256_ord_mul_mont(local_c8, local_c8, local_1e8);
            ecp_nistz256_ord_sqr_mont(local_a8, local_c8, 8);
            ecp_nistz256_ord_mul_mont(local_a8, local_a8, local_c8);
            ecp_nistz256_ord_sqr_mont(local_88, local_a8, 0x10);
            ecp_nistz256_ord_mul_mont(local_88, local_88, local_a8);
            ecp_nistz256_ord_sqr_mont(local_268, local_88, 0x40);
            ecp_nistz256_ord_mul_mont(local_268, local_268, local_88);
            puVar4 = &chain_5;
            do {
               puVar5 = puVar4 + 2;
               ecp_nistz256_ord_sqr_mont(local_268, local_268, *puVar4);
               ecp_nistz256_ord_mul_mont(local_268, local_268, local_228 + (ulong)(byte)puVar4[1] * 0x20);
               puVar4 = puVar5;
            } while ( puVar5 != &DAT_00102c76 );
            ecp_nistz256_ord_mul_mont(local_268, local_268, one_4);
            iVar1 = bn_set_words(param_2, local_268, 4);
            bVar6 = iVar1 != 0;
         }
         goto LAB_00100ae9;
      }
      ERR_new();
      uVar3 = 0x524;
   }
   ERR_set_debug("crypto/ec/ecp_nistz256.c", uVar3, "ecp_nistz256_inv_mod_ord");
   ERR_set_error(0x10, 0x80003, 0);
   bVar6 = false;
   LAB_00100ae9:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return bVar6;
}ulong ecp_nistz256_is_affine_G(long param_1) {
   undefined8 uVar1;
   int iVar2;
   ulong *puVar3;
   ulong uVar4;
   iVar2 = bn_get_top(*(undefined8*)( param_1 + 0x10 ));
   if (( ( ( iVar2 == 4 ) && ( iVar2 = bn_get_top(*(undefined8*)( param_1 + 0x18 )) ),iVar2 == 4 ) ) && ( puVar3 = (ulong*)bn_get_words(*(undefined8*)( param_1 + 0x10 )) ),uVar4 = puVar3[3] ^ 0x18905f76a53755c6 | puVar3[2] ^ 0x79fb732b77622510 | puVar3[1] ^ 0x75ba95fc5fedb601 | *puVar3 ^ 0x79e730d418a9143c,-1 < (long)( -uVar4 | uVar4 )) {
      uVar1 = *(undefined8*)( param_1 + 0x20 );
      puVar3 = (ulong*)bn_get_words(uVar1);
      iVar2 = bn_get_top(uVar1);
      if (iVar2 == 4) {
         uVar4 = puVar3[3] ^ 0xfffffffe | ~puVar3[2] | puVar3[1] ^ 0xffffffff00000000 | *puVar3 ^ 1;
         return ~(-uVar4 | uVar4) >> 0x3f;
      }
   }
   return 0;
}bool ecp_nistz256_get_affine(EC_GROUP *param_1, EC_POINT *param_2, long param_3, long param_4) {
   int iVar1;
   long in_FS_OFFSET;
   bool bVar2;
   undefined8 local_188;
   undefined8 uStack_180;
   undefined8 local_178;
   undefined8 uStack_170;
   undefined1 local_168[32];
   undefined1 local_148[32];
   undefined1 local_128[32];
   undefined1 local_108[32];
   undefined1 local_e8[32];
   undefined1 local_c8[32];
   undefined1 local_a8[32];
   undefined1 local_88[32];
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = EC_POINT_is_at_infinity(param_1, param_2);
   if (iVar1 == 0) {
      iVar1 = bn_copy_words(local_168, *(undefined8*)( param_2 + 0x10 ), 4);
      if (iVar1 != 0) {
         iVar1 = bn_copy_words(local_148, *(undefined8*)( param_2 + 0x18 ), 4);
         if (iVar1 != 0) {
            iVar1 = bn_copy_words(local_128, *(undefined8*)( param_2 + 0x20 ), 4);
            if (iVar1 != 0) {
               ecp_nistz256_sqr_mont(&local_68, local_128);
               ecp_nistz256_mul_mont(local_108, &local_68, local_128);
               ecp_nistz256_sqr_mont(&local_68, local_108);
               ecp_nistz256_sqr_mont(&local_68, &local_68);
               ecp_nistz256_mul_mont(local_e8, &local_68, local_108);
               ecp_nistz256_sqr_mont(&local_68, local_e8);
               for (int i_429 = 0; i_429 < 3; i_429++) {
                  ecp_nistz256_sqr_mont(&local_68, &local_68);
               }
               ecp_nistz256_mul_mont(local_c8, &local_68, local_e8);
               iVar1 = 7;
               ecp_nistz256_sqr_mont(&local_68, local_c8);
               do {
                  ecp_nistz256_sqr_mont(&local_68, &local_68);
                  iVar1 = iVar1 + -1;
               } while ( iVar1 != 0 );
               ecp_nistz256_mul_mont(local_a8, &local_68, local_c8);
               iVar1 = 0xf;
               ecp_nistz256_sqr_mont(&local_68, local_a8);
               do {
                  ecp_nistz256_sqr_mont(&local_68, &local_68);
                  iVar1 = iVar1 + -1;
               } while ( iVar1 != 0 );
               ecp_nistz256_mul_mont(local_88, &local_68, local_a8);
               iVar1 = 0x1f;
               ecp_nistz256_sqr_mont(&local_68, local_88);
               do {
                  ecp_nistz256_sqr_mont(&local_68, &local_68);
                  iVar1 = iVar1 + -1;
               } while ( iVar1 != 0 );
               iVar1 = 0x80;
               ecp_nistz256_mul_mont(&local_68, &local_68, local_128);
               do {
                  ecp_nistz256_sqr_mont(&local_68, &local_68);
                  iVar1 = iVar1 + -1;
               } while ( iVar1 != 0 );
               iVar1 = 0x20;
               ecp_nistz256_mul_mont(&local_68, &local_68, local_88);
               do {
                  ecp_nistz256_sqr_mont(&local_68, &local_68);
                  iVar1 = iVar1 + -1;
               } while ( iVar1 != 0 );
               iVar1 = 0x10;
               ecp_nistz256_mul_mont(&local_68, &local_68, local_88);
               do {
                  ecp_nistz256_sqr_mont(&local_68, &local_68);
                  iVar1 = iVar1 + -1;
               } while ( iVar1 != 0 );
               iVar1 = 8;
               ecp_nistz256_mul_mont(&local_68, &local_68, local_a8);
               do {
                  ecp_nistz256_sqr_mont(&local_68, &local_68);
                  iVar1 = iVar1 + -1;
               } while ( iVar1 != 0 );
               ecp_nistz256_mul_mont(&local_68, &local_68, local_c8);
               for (int i_428 = 0; i_428 < 4; i_428++) {
                  ecp_nistz256_sqr_mont(&local_68, &local_68);
               }
               ecp_nistz256_mul_mont(&local_68, &local_68, local_e8);
               for (int i_430 = 0; i_430 < 2; i_430++) {
                  ecp_nistz256_sqr_mont(&local_68, &local_68);
               }
               ecp_nistz256_mul_mont(&local_68, &local_68, local_108);
               for (int i_431 = 0; i_431 < 2; i_431++) {
                  ecp_nistz256_sqr_mont(&local_68, &local_68);
               }
               ecp_nistz256_mul_mont(&local_68, &local_68, local_128);
               local_188 = local_68;
               uStack_180 = uStack_60;
               local_178 = local_58;
               uStack_170 = uStack_50;
               ecp_nistz256_sqr_mont(local_e8, &local_188);
               ecp_nistz256_mul_mont(local_c8, local_e8, local_168);
               if (param_3 != 0) {
                  ecp_nistz256_from_mont(local_88, local_c8);
                  iVar1 = bn_set_words(param_3, local_88, 4);
                  if (iVar1 == 0) goto LAB_00100de0;
               }
               bVar2 = true;
               if (param_4 != 0) {
                  ecp_nistz256_mul_mont(&local_188, &local_188, local_e8);
                  ecp_nistz256_mul_mont(local_a8, &local_188, local_148);
                  ecp_nistz256_from_mont(&local_68, local_a8);
                  iVar1 = bn_set_words(param_4, &local_68, 4);
                  bVar2 = iVar1 != 0;
               }
               goto LAB_00100de2;
            }
         }
      }
      ERR_new();
      ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x49a, "ecp_nistz256_get_affine");
      ERR_set_error(0x10, 0x92, 0);
   } else {
      ERR_new();
      ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x493, "ecp_nistz256_get_affine");
      ERR_set_error(0x10, 0x6a, 0);
   }
   LAB_00100de0:bVar2 = false;
   LAB_00100de2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return bVar2;
}/* WARNING: Removing unreachable block (ram,0x001024ba) *//* WARNING: Removing unreachable block (ram,0x001022fa) */int ecp_nistz256_points_mul(EC_GROUP *param_1, long param_2, BIGNUM *param_3, ulong param_4, long *param_5, undefined8 *param_6, BN_CTX *param_7) {
   ulong *puVar1;
   ulong *puVar2;
   size_t __n;
   ulong *puVar3;
   ulong *puVar4;
   ulong *puVar5;
   undefined8 *puVar6;
   ulong *puVar7;
   byte bVar8;
   undefined8 uVar9;
   ulong uVar10;
   bool bVar11;
   int iVar12;
   EC_POINT *a;
   EC_POINT *b;
   ulong *puVar13;
   BIGNUM *pBVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   ulong uVar18;
   uint uVar19;
   byte *pbVar20;
   ulong uVar21;
   uint uVar22;
   int iVar23;
   undefined *puVar24;
   uint uVar25;
   undefined8 *puVar26;
   ulong *puVar27;
   byte *pbVar28;
   long in_FS_OFFSET;
   ulong *local_1e0;
   void *local_1d8;
   undefined8 *local_1d0;
   long *local_1c8;
   byte *local_1a0;
   undefined8 *local_188;
   ulong local_180;
   byte *local_170;
   long *local_168;
   undefined8 *local_160;
   long *local_158;
   ulong local_140[4];
   ulong local_120;
   ulong uStack_118;
   ulong local_110;
   ulong uStack_108;
   ulong local_100;
   ulong uStack_f8;
   ulong local_f0;
   ulong uStack_e8;
   ulong local_e0[4];
   ulong local_c0;
   ulong uStack_b8;
   ulong local_b0;
   ulong uStack_a8;
   ulong local_a0;
   ulong uStack_98;
   ulong local_90;
   ulong uStack_88;
   undefined8 uStack_78;
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined1 local_50;
   long local_48;
   local_48 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_70 = (undefined1[16])0x0;
   local_60 = (undefined1[16])0x0;
   if (0xffffffe < param_4) {
      ERR_new();
      iVar12 = 0;
      ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x3c4, "ecp_nistz256_points_mul");
      ERR_set_error(0x10, 0x80106, 0);
      goto LAB_00101322;
   }
   puVar13 = local_e0;
   for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
   }
   BN_CTX_start(param_7);
   local_180 = param_4;
   local_160 = param_6;
   local_158 = param_5;
   if (param_3 != (BIGNUM*)0x0) {
      a = EC_GROUP_get0_generator(param_1);
      if (a == (EC_POINT*)0x0) {
         ERR_new();
         ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x3ce, "ecp_nistz256_points_mul");
         ERR_set_error(0x10, 0x71, 0);
         goto LAB_001012d7;
      }
      lVar17 = *(long*)( param_1 + 0xa0 );
      if (lVar17 == 0) goto LAB_00101e43;
      b = EC_POINT_new(param_1);
      if (b != (EC_POINT*)0x0) {
         ecp_nistz256_gather_w7(local_e0, *(undefined8*)( lVar17 + 0x10 ), 1);
         iVar12 = bn_set_words(*(undefined8*)( b + 0x10 ), local_e0, 4);
         if (( ( iVar12 == 0 ) || ( iVar12 = bn_set_words(*(undefined8*)( b + 0x18 ), &local_c0, 4) ),iVar12 == 0 )) {
            EC_POINT_free(b);
         } else {
            *(undefined4*)( b + 0x28 ) = 1;
            iVar12 = EC_POINT_cmp(param_1, a, b, param_7);
            if (iVar12 != 0) {
               EC_POINT_free(b);
               LAB_00101e43:iVar12 = ecp_nistz256_is_affine_G(a);
               if (iVar12 != 0) {
                  puVar24 = &ecp_nistz256_precomputed;
                  goto LAB_00101e5d;
               }
               local_180 = param_4 + 1;
               iVar12 = (int)( local_180 * 8 );
               local_188 = (undefined8*)CRYPTO_malloc(iVar12, "crypto/ec/ecp_nistz256.c", 0x458);
               if (local_188 == (undefined8*)0x0) goto LAB_001012d7;
               local_1c8 = (long*)CRYPTO_malloc(iVar12, "crypto/ec/ecp_nistz256.c", 0x45c);
               if (local_1c8 != (long*)0x0) {
                  __n = local_180 * 8 - 8;
                  memcpy(local_188, param_6, __n);
                  local_188[param_4] = param_3;
                  memcpy(local_1c8, param_5, __n);
                  local_1c8[param_4] = (long)a;
                  local_160 = local_188;
                  local_158 = local_1c8;
                  goto LAB_001013f5;
               }
               iVar12 = 0;
               goto LAB_001012ec;
            }
            puVar24 = *(undefined**)( lVar17 + 0x10 );
            EC_POINT_free(b);
            if (puVar24 == (undefined*)0x0) goto LAB_00101e43;
            LAB_00101e5d:iVar12 = BN_num_bits(param_3);
            if (( iVar12 < 0x101 ) && ( iVar12 = BN_is_negative(param_3) ),pBVar14 = param_3,iVar12 == 0) {
               LAB_00101ebe:lVar17 = 0;
               iVar12 = bn_get_top();
               if (0 < iVar12 * 8) {
                  do {
                     lVar15 = bn_get_words(pBVar14);
                     *(undefined8*)( local_70 + lVar17 ) = *(undefined8*)( lVar15 + (long)( (int)lVar17 >> 3 ) * 8 );
                     lVar17 = lVar17 + 8;
                     iVar12 = bn_get_top();
                  } while ( (int)lVar17 < iVar12 * 8 );
               }
               lVar15 = (long)(int)lVar17;
               iVar12 = -(int)lVar17;
               uVar19 = iVar12 + 0x21;
               if (uVar19 < 8) {
                  if (( uVar19 != 0 ) && ( local_70[lVar15] = 0(uVar19 & 2) != 0 )) {
                     *(undefined2*)( local_70 + (ulong)uVar19 + lVar15 + -2 ) = 0;
                  }
               } else {
                  uVar22 = iVar12 + 0x20;
                  *(undefined8*)( (long)&uStack_78 + (ulong)uVar19 + lVar15 ) = 0;
                  if (7 < uVar22) {
                     uVar19 = 0;
                     do {
                        uVar16 = (ulong)uVar19;
                        uVar19 = uVar19 + 8;
                        *(undefined8*)( local_70 + lVar15 + uVar16 ) = 0;
                     } while ( uVar19 < uVar22 );
                  }
               }
               bVar8 = local_70[0];
               uVar19 = (uint)local_70[0] + (uint)local_70[0] & 0xff;
               uVar22 = uVar19 >> 7;
               uVar19 = uVar22 - 1 & uVar19 | -uVar22 & 0xff - uVar19;
               ecp_nistz256_gather_w7(local_e0, puVar24, ( uVar19 >> 1 ) + ( uVar19 & 1 ) & 0x7fffffff);
               ecp_nistz256_neg(&local_a0, &local_c0);
               uVar16 = (ulong)uVar22 - 1;
               uVar21 = -(ulong)uVar22;
               local_c0 = local_c0 & uVar16 ^ local_a0 & uVar21;
               uStack_b8 = uStack_b8 & uVar16 ^ uStack_98 & uVar21;
               local_b0 = uVar16 & local_b0 ^ uVar21 & local_90;
               uStack_a8 = uVar16 & uStack_a8 ^ uVar21 & uStack_88;
               uVar16 = local_e0[0] | local_e0[1] | local_e0[2] | local_e0[3] | uStack_a8 | uStack_b8 | local_b0 | local_c0;
               uVar16 = uVar16 | -uVar16;
               local_90 = (long)uVar16 >> 0x3f;
               local_a0 = uVar16 >> 0x3f;
               uStack_98 = local_90 & 0xffffffff00000000;
               uStack_88 = ( ulong )(( uint )((long)uVar16 >> 0x3f) & 0xfffffffe);
               uVar19 = 6;
               while (true) {
                  puVar24 = puVar24 + 0x1000;
                  uVar25 = uVar19 + 7;
                  uVar19 = ( ushort )(CONCAT11(local_70[( uVar19 >> 3 ) + 1], bVar8) >> ( (byte)uVar19 & 7 )) & 0xff;
                  uVar22 = uVar19 >> 7;
                  uVar19 = uVar19 & uVar22 - 1 | -uVar22 & 0xff - uVar19;
                  ecp_nistz256_gather_w7(local_140, puVar24, ( uVar19 >> 1 ) + ( uVar19 & 1 ) & 0x7fffffff);
                  ecp_nistz256_neg(&local_100, &local_120);
                  uVar16 = (ulong)uVar22 - 1;
                  uVar21 = -(ulong)uVar22;
                  local_110 = local_110 & uVar16 ^ local_f0 & uVar21;
                  uStack_108 = uStack_108 & uVar16 ^ uStack_e8 & uVar21;
                  local_120 = uVar16 & local_120 ^ uVar21 & local_100;
                  uStack_118 = uVar16 & uStack_118 ^ uVar21 & uStack_f8;
                  ecp_nistz256_point_add_affine(local_e0, local_e0, local_140);
                  if (uVar25 == 0x102) break;
                  bVar8 = local_70[uVar25 >> 3];
                  uVar19 = uVar25;
               };
               if (param_4 != 0) {
                  local_1c8 = (long*)0x0;
                  local_188 = (undefined8*)0x0;
                  bVar11 = false;
                  local_1e0 = local_140;
                  goto LAB_00101407;
               }
               goto LAB_0010135f;
            }
            pBVar14 = BN_CTX_get(param_7);
            if (pBVar14 != (BIGNUM*)0x0) {
               iVar12 = BN_nnmod(pBVar14, param_3, *(BIGNUM**)( param_1 + 0x10 ), param_7);
               if (iVar12 != 0) goto LAB_00101ebe;
               ERR_new();
               ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x3fe, "ecp_nistz256_points_mul");
               ERR_set_error(0x10, 0x80003, 0);
            }
         }
      }
      LAB_001012d7:local_1c8 = (long*)0x0;
      iVar12 = 0;
      local_188 = (undefined8*)0x0;
      goto LAB_001012ec;
   }
   if (param_4 == 0) {
      LAB_0010135f:local_1c8 = (long*)0x0;
      local_188 = (undefined8*)0x0;
      LAB_0010137d:iVar12 = bn_set_words(*(undefined8*)( param_2 + 0x10 ), local_e0, 4);
      if (iVar12 == 0) goto LAB_0010139d;
      iVar12 = bn_set_words(*(undefined8*)( param_2 + 0x18 ), &local_c0, 4);
      if (iVar12 != 0) {
         iVar12 = bn_set_words(*(undefined8*)( param_2 + 0x20 ), &local_a0, 4);
         if (iVar12 == 0) goto LAB_0010139d;
         uVar9 = *(undefined8*)( param_2 + 0x20 );
         puVar13 = (ulong*)bn_get_words(uVar9);
         iVar12 = bn_get_top(uVar9);
         uVar19 = 0;
         if (iVar12 == 4) {
            uVar16 = puVar13[3] ^ 0xfffffffe | ~puVar13[2] | puVar13[1] ^ 0xffffffff00000000 | *puVar13 ^ 1;
            uVar19 = ~((uint)(-uVar16 >> 0x20) | (uint)(uVar16 >> 0x20)) >> 0x1f;
         }
         iVar12 = 1;
         *(uint*)( param_2 + 0x28 ) = uVar19;
      }
   } else {
      local_1c8 = (long*)0x0;
      local_188 = (undefined8*)0x0;
      LAB_001013f5:bVar11 = true;
      local_1e0 = local_e0;
      LAB_00101407:if (local_180 * 0x10 + 6 < 0x1555556) {
         local_1d8 = CRYPTO_malloc((int)local_180 * 0x600 + 0x220, "crypto/ec/ecp_nistz256.c", 0x273);
         if (local_1d8 == (void*)0x0) goto LAB_00101de0;
         local_1a0 = (byte*)CRYPTO_malloc((int)( local_180 * 0x21 ), "crypto/ec/ecp_nistz256.c", 0x275);
         if (local_1a0 == (byte*)0x0) {
            local_1d0 = (undefined8*)0x0;
         } else {
            local_1d0 = (undefined8*)CRYPTO_malloc((int)local_180 * 8, "crypto/ec/ecp_nistz256.c", 0x276);
            if (local_1d0 != (undefined8*)0x0) {
               puVar13 = (ulong*)( ( (ulong)local_1d8 & 0xffffffffffffffc0 ) + 0x40 );
               puVar6 = local_160 + local_180;
               puVar7 = puVar13 + local_180 * 0xc0;
               local_168 = local_158;
               puVar26 = local_1d0;
               puVar27 = puVar13;
               local_170 = local_1a0;
               do {
                  iVar12 = BN_num_bits((BIGNUM*)*local_160);
                  if (( iVar12 < 0x101 ) && ( iVar12 = iVar12 == 0 )) {
                     *puVar26 = *local_160;
                  } else {
                     pBVar14 = BN_CTX_get(param_7);
                     if (pBVar14 == (BIGNUM*)0x0) goto LAB_00101dfb;
                     iVar12 = BN_nnmod(pBVar14, (BIGNUM*)*local_160, *(BIGNUM**)( param_1 + 0x10 ), param_7);
                     if (iVar12 == 0) {
                        ERR_new();
                        ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x286, "ecp_nistz256_windowed_mul");
                        ERR_set_error(0x10, 0x80003, 0);
                        goto LAB_00101dfb;
                     }
                     *puVar26 = pBVar14;
                  }
                  lVar17 = 0;
                  while (true) {
                     iVar23 = (int)lVar17;
                     iVar12 = bn_get_top();
                     if (iVar12 * 8 <= iVar23) break;
                     lVar15 = bn_get_words(*puVar26);
                     *(undefined8*)( local_170 + lVar17 ) = *(undefined8*)( lVar15 + (long)( iVar23 >> 3 ) * 8 );
                     lVar17 = lVar17 + 8;
                  };
                  if (iVar23 < 0x21) {
                     uVar19 = 0x21 - iVar23;
                     pbVar20 = local_170 + iVar23;
                     if (uVar19 < 8) {
                        if (( uVar19 != 0 ) && ( *pbVar20 = 0(uVar19 & 2) != 0 )) {
                           ( pbVar20 + ( (ulong)uVar19 - 2 ) )[0] = 0;
                           ( pbVar20 + ( (ulong)uVar19 - 2 ) )[1] = 0;
                        }
                     } else {
                        for (int i_432 = 0; i_432 < 8; i_432++) {
                           pbVar20[i_432] = 0;
                        }
                        pbVar28 = pbVar20 + ( (ulong)uVar19 - 8 );
                        for (int i_433 = 0; i_433 < 8; i_433++) {
                           pbVar28[i_433] = 0;
                        }
                        uVar19 = uVar19 + ( (int)pbVar20 - (int)( ( ulong )(pbVar20 + 8) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
                        if (7 < uVar19) {
                           uVar22 = 0;
                           do {
                              uVar16 = (ulong)uVar22;
                              uVar22 = uVar22 + 8;
                              *(undefined8*)( ( ( ulong )(pbVar20 + 8) & 0xfffffffffffffff8 ) + uVar16 ) = 0;
                           } while ( uVar22 < uVar19 );
                        }
                     }
                  }
                  iVar12 = bn_copy_words(puVar7, *(undefined8*)( *local_168 + 0x10 ), 4);
                  if (iVar12 == 0) {
                     LAB_001022c7:ERR_new();
                     ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x2a2, "ecp_nistz256_windowed_mul");
                     ERR_set_error(0x10, 0x92, 0);
                     goto LAB_00101dfb;
                  }
                  puVar1 = puVar7 + 4;
                  iVar12 = bn_copy_words(puVar1, *(undefined8*)( *local_168 + 0x18 ), 4);
                  if (( iVar12 == 0 ) || ( iVar12 = bn_copy_words(puVar7 + 8, *(undefined8*)( *local_168 + 0x20 ), 4) ),iVar12 == 0) goto LAB_001022c7;
                  puVar2 = puVar7 + 0xc;
                  ecp_nistz256_scatter_w5(puVar27, puVar7, 1);
                  puVar3 = puVar7 + 0x18;
                  ecp_nistz256_point_double(puVar2, puVar7);
                  ecp_nistz256_scatter_w5(puVar27, puVar2, 2);
                  ecp_nistz256_point_add(puVar3, puVar2, puVar7);
                  ecp_nistz256_scatter_w5(puVar27, puVar3, 3);
                  ecp_nistz256_point_double(puVar2, puVar2);
                  ecp_nistz256_scatter_w5(puVar27, puVar2, 4);
                  ecp_nistz256_point_double(puVar3, puVar3);
                  ecp_nistz256_scatter_w5(puVar27, puVar3, 6);
                  puVar4 = puVar7 + 0x24;
                  ecp_nistz256_point_add(puVar4, puVar2, puVar7);
                  ecp_nistz256_scatter_w5(puVar27, puVar4, 5);
                  puVar5 = puVar7 + 0x30;
                  ecp_nistz256_point_add(puVar5, puVar3, puVar7);
                  ecp_nistz256_scatter_w5(puVar27, puVar5, 7);
                  ecp_nistz256_point_double(puVar2, puVar2);
                  ecp_nistz256_scatter_w5(puVar27, puVar2, 8);
                  ecp_nistz256_point_double(puVar3, puVar3);
                  ecp_nistz256_scatter_w5(puVar27, puVar3, 0xc);
                  ecp_nistz256_point_double(puVar4, puVar4);
                  ecp_nistz256_scatter_w5(puVar27, puVar4, 10);
                  ecp_nistz256_point_double(puVar5);
                  ecp_nistz256_scatter_w5(puVar27, puVar5, 0xe);
                  ecp_nistz256_point_add(puVar3, puVar3, puVar7);
                  ecp_nistz256_scatter_w5(puVar27, puVar3, 0xd);
                  ecp_nistz256_point_add(puVar4, puVar4, puVar7);
                  ecp_nistz256_scatter_w5(puVar27, puVar4, 0xb);
                  ecp_nistz256_point_add(puVar5, puVar5, puVar7);
                  ecp_nistz256_scatter_w5(puVar27, puVar5, 0xf);
                  ecp_nistz256_point_add(puVar3, puVar2, puVar7);
                  ecp_nistz256_scatter_w5(puVar27, puVar3, 9);
                  ecp_nistz256_point_double(puVar2, puVar2);
                  ecp_nistz256_scatter_w5(puVar27, puVar2, 0x10);
                  local_160 = local_160 + 1;
                  puVar27 = puVar27 + 0xc0;
                  local_168 = local_168 + 1;
                  puVar26 = puVar26 + 1;
                  local_170 = local_170 + 0x21;
               } while ( puVar6 != local_160 );
               ecp_nistz256_gather_w5(puVar7, puVar13, ( local_1a0[0x1f] >> 6 & 1 ) - ( (char)local_1a0[0x1f] >> 7 ));
               uVar16 = puVar7[1];
               uVar21 = puVar7[6];
               uVar18 = puVar7[7];
               iVar12 = 0xff;
               *local_1e0 = *puVar7;
               local_1e0[1] = uVar16;
               uVar16 = puVar7[2];
               uVar10 = puVar7[3];
               local_1e0[6] = uVar21;
               local_1e0[7] = uVar18;
               uVar21 = puVar7[10];
               uVar18 = puVar7[0xb];
               local_1e0[2] = uVar16;
               local_1e0[3] = uVar10;
               uVar16 = puVar7[5];
               local_1e0[4] = puVar7[4];
               local_1e0[5] = uVar16;
               uVar16 = puVar7[8];
               uVar10 = puVar7[9];
               local_1e0[10] = uVar21;
               local_1e0[0xb] = uVar18;
               local_1e0[8] = uVar16;
               local_1e0[9] = uVar10;
               do {
                  while (uVar16 = ( ulong )(iVar12 == 0xff),local_180 <= ( iVar12 == 0xff )) {
                     for (int i_435 = 0; i_435 < 5; i_435++) {
                        ecp_nistz256_point_double(local_1e0, local_1e0);
                     }
                     iVar12 = 0xfa;
                  };
                  uVar19 = iVar12 - 1U >> 3;
                  uVar21 = (ulong)uVar19;
                  local_158._0_1_ = ( byte )(iVar12 - 1U) & 7;
                  lVar17 = (long)puVar13 + ( ulong )(( uint )((long)( uVar16 << 0x3f ) >> 0x3f) & 0x600);
                  pbVar20 = local_1a0 + ( ( uint )((long)( uVar16 << 0x3f ) >> 0x3f) & 0x21 ) + uVar21;
                  do {
                     pbVar28 = pbVar20 + 0x21;
                     uVar22 = ( ushort )(CONCAT11(pbVar20[( uVar19 + 1 ) - uVar21], *pbVar20) >> (byte)local_158) & 0x3f;
                     uVar25 = uVar22 >> 5;
                     uVar22 = uVar22 & uVar25 - 1 | -uVar25 & 0x3f - uVar22;
                     ecp_nistz256_gather_w5(puVar7, lVar17, ( uVar22 >> 1 ) + ( uVar22 & 1 ) & 0x7fffffff);
                     ecp_nistz256_neg(puVar7 + 0x10, puVar1);
                     uVar16 = (ulong)uVar25 - 1;
                     uVar18 = -(ulong)uVar25;
                     puVar7[4] = uVar16 & puVar7[4] ^ uVar18 & puVar7[0x10];
                     puVar7[5] = uVar16 & puVar7[5] ^ uVar18 & puVar7[0x11];
                     puVar7[6] = puVar7[6] & uVar16 ^ puVar7[0x12] & uVar18;
                     puVar7[7] = puVar7[7] & uVar16 ^ puVar7[0x13] & uVar18;
                     ecp_nistz256_point_add(local_1e0, local_1e0, puVar7);
                     lVar17 = lVar17 + 0x600;
                     pbVar20 = pbVar28;
                  } while ( pbVar28 != local_1a0 + uVar21 + local_180 * 0x21 );
                  iVar12 = iVar12 + -5;
                  for (int i_434 = 0; i_434 < 5; i_434++) {
                     ecp_nistz256_point_double(local_1e0, local_1e0);
                  }
                  pbVar20 = local_1a0;
               } while ( iVar12 != 0 );
               do {
                  uVar19 = ( uint ) * pbVar20 * 2 & 0x3f;
                  uVar22 = uVar19 >> 5;
                  uVar25 = -uVar22 & 0x3f - uVar19;
                  puVar27 = puVar13 + 0xc0;
                  ecp_nistz256_gather_w5(puVar7, puVar13, ( ( uVar22 - 1 & uVar19 | uVar25 ) >> 1 ) + ( uVar25 & 1 ) & 0x7fffffff);
                  ecp_nistz256_neg(puVar7 + 0x10, puVar1);
                  uVar16 = (ulong)uVar22 - 1;
                  uVar21 = -(ulong)uVar22;
                  puVar7[4] = uVar16 & puVar7[4] ^ uVar21 & puVar7[0x10];
                  puVar7[5] = uVar16 & puVar7[5] ^ uVar21 & puVar7[0x11];
                  puVar7[6] = puVar7[6] & uVar16 ^ puVar7[0x12] & uVar21;
                  puVar7[7] = puVar7[7] & uVar16 ^ puVar7[0x13] & uVar21;
                  ecp_nistz256_point_add(local_1e0, local_1e0, puVar7);
                  pbVar20 = pbVar20 + 0x21;
                  puVar13 = puVar27;
               } while ( puVar27 != puVar7 );
               CRYPTO_free(local_1d8);
               CRYPTO_free(local_1a0);
               CRYPTO_free(local_1d0);
               if (!bVar11) {
                  ecp_nistz256_point_add(local_e0, local_e0, local_1e0);
               }
               goto LAB_0010137d;
            }
         }
      } else {
         LAB_00101de0:local_1d8 = (void*)0x0;
         local_1d0 = (undefined8*)0x0;
         local_1a0 = (byte*)0x0;
      }
      LAB_00101dfb:CRYPTO_free(local_1d8);
      CRYPTO_free(local_1a0);
      CRYPTO_free(local_1d0);
      LAB_0010139d:iVar12 = 0;
   }
   LAB_001012ec:BN_CTX_end(param_7);
   CRYPTO_free(local_1c8);
   CRYPTO_free(local_188);
   LAB_00101322:if (local_48 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar12;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}bool ecp_nistz256_window_have_precompute_mult(EC_GROUP *param_1) {
   undefined8 uVar1;
   int iVar2;
   EC_POINT *pEVar3;
   ulong *puVar4;
   ulong uVar5;
   pEVar3 = EC_GROUP_get0_generator(param_1);
   if (( ( ( pEVar3 != (EC_POINT*)0x0 ) && ( iVar2 = bn_get_top(*(undefined8*)( pEVar3 + 0x10 )) ),iVar2 == 4 ) ) && ( iVar2 = iVar2 == 4 )) &&( ( puVar4 = (ulong*)bn_get_words(*(undefined8*)( pEVar3 + 0x10 )) ),uVar5 = puVar4[3] ^ 0x18905f76a53755c6 | puVar4[2] ^ 0x79fb732b77622510 | puVar4[1] ^ 0x75ba95fc5fedb601 | *puVar4 ^ 0x79e730d418a9143c,-1 < (long)( -uVar5 | uVar5 ) && ( puVar4 = (ulong*)bn_get_words(*(undefined8*)( pEVar3 + 0x18 )) ),uVar5 = puVar4[3] ^ 0x8571ff1825885d85 | puVar4[2] ^ 0xd2e88688dd21f325 | puVar4[1] ^ 0x8b4ab8e4ba19e45c | *puVar4 ^ 0xddf25357ce95560a,-1 < (long)( -uVar5 | uVar5 ) ) * (undefined8*)( pEVar3 + 0x20 );
   puVar4 = (ulong*)bn_get_words(uVar1);
   iVar2 = bn_get_top(uVar1);
   if (( iVar2 == 4 ) && ( uVar5 = puVar4[3] ^ 0xfffffffe | ~puVar4[2] | puVar4[1] ^ 0xffffffff00000000 | *puVar4 ^ 1 ),-1 < (long)( -uVar5 | uVar5 )) {
      return true;
   }
}if (*(int*)( param_1 + 0x98 ) != 5) {
   return false;
}return *(long*)( param_1 + 0xa0 ) != 0;}long EC_nistz256_pre_comp_dup(long param_1) {
   if (param_1 != 0) {
      LOCK();
      *(int*)( param_1 + 0x20 ) = *(int*)( param_1 + 0x20 ) + 1;
      UNLOCK();
   }
   return param_1;
}void EC_nistz256_pre_comp_free(void *param_1) {
   int *piVar1;
   int iVar2;
   if (param_1 == (void*)0x0) {
      return;
   }
   LOCK();
   piVar1 = (int*)( (long)param_1 + 0x20 );
   iVar2 = *piVar1;
   *piVar1 = *piVar1 + -1;
   UNLOCK();
   if (( iVar2 != 1 ) && ( 0 < iVar2 + -1 )) {
      return;
   }
   CRYPTO_free(*(void**)( (long)param_1 + 0x18 ));
   CRYPTO_free(param_1);
   return;
}undefined4 ecp_nistz256_mult_precompute(EC_GROUP *param_1, BN_CTX *param_2) {
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
   undefined1 local_88[32];
   undefined1 local_68[40];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EC_pre_comp_free();
   src = EC_GROUP_get0_generator(param_1);
   if (src == (EC_POINT*)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x339, "ecp_nistz256_mult_precompute");
      ERR_set_error(0x10, 0x71, 0);
      LAB_00102ad0:uVar6 = 0;
      goto LAB_0010277c;
   }
   iVar2 = ecp_nistz256_is_affine_G(src);
   if (iVar2 != 0) {
      uVar6 = 1;
      goto LAB_0010277c;
   }
   if (( param_1 == (EC_GROUP*)0x0 ) || ( puVar4 = (undefined8*)CRYPTO_zalloc(0x28, "crypto/ec/ecp_nistz256.c", 0x4ba) ),puVar4 == (undefined8*)0x0) goto LAB_00102ad0;
   *puVar4 = param_1;
   puVar4[1] = 6;
   LOCK();
   *(undefined4*)( puVar4 + 4 ) = 1;
   UNLOCK();
   local_d0 = (BN_CTX*)0x0;
   uVar6 = 0;
   pBVar1 = local_d0;
   if (( param_2 == (BN_CTX*)0x0 ) && ( param_2 = (BN_CTX*)BN_CTX_new_ex(*(undefined8*)( param_1 + 0xa8 )) ),pBVar1 = param_2,param_2 == (BN_CTX*)0x0) {
      LAB_00102ae0:local_c0 = (void*)0x0;
      dst = (EC_POINT*)0x0;
      local_c8 = (EC_POINT*)0x0;
   } else {
      local_d0 = pBVar1;
      BN_CTX_start(param_2);
      lVar5 = EC_GROUP_get0_order(param_1);
      if (lVar5 == 0) goto LAB_00102ae0;
      iVar2 = BN_is_zero(lVar5);
      if (iVar2 == 0) {
         local_c0 = CRYPTO_malloc(0x25040, "crypto/ec/ecp_nistz256.c", 0x35c);
         if (local_c0 == (void*)0x0) goto LAB_00102ae0;
         dst = EC_POINT_new(param_1);
         local_c8 = EC_POINT_new(param_1);
         if (( ( dst == (EC_POINT*)0x0 ) || ( local_c8 == (EC_POINT*)0x0 ) ) || ( iVar2 = iVar2 == 0 )) {
            LAB_00102b25:uVar6 = 0;
         } else {
            local_b4 = 0;
            lVar5 = ( (ulong)local_c0 & 0xffffffffffffffc0 ) + 0x40;
            do {
               iVar2 = EC_POINT_copy(dst, local_c8);
               lVar7 = lVar5;
               if (iVar2 == 0) goto LAB_00102b25;
               do {
                  if (( *(code**)( *(long*)param_1 + 0xd0 ) == (code*)0x0 ) || ( iVar2 = ( **(code**)( *(long*)param_1 + 0xd0 ) )(param_1, dst, param_2) ),iVar2 == 0) goto LAB_00102b25;
                  iVar2 = bn_copy_words(local_88, *(undefined8*)( dst + 0x10 ), 4);
                  if (( iVar2 == 0 ) || ( iVar2 = bn_copy_words(local_68, *(undefined8*)( dst + 0x18 ), 4) ),iVar2 == 0) {
                     ERR_new();
                     ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x37b, "ecp_nistz256_mult_precompute");
                     ERR_set_error(0x10, 0x92, 0);
                     goto LAB_00102b25;
                  }
                  iVar2 = 7;
                  ecp_nistz256_scatter_w7(lVar7, local_88, local_b4);
                  do {
                     iVar3 = EC_POINT_dbl(param_1, dst, dst, param_2);
                     if (iVar3 == 0) goto LAB_00102b25;
                     iVar2 = iVar2 + -1;
                  } while ( iVar2 != 0 );
                  lVar7 = lVar7 + 0x1000;
               } while ( lVar7 != ( (ulong)local_c0 & 0xffffffffffffffc0 ) + 0x25040 );
               iVar2 = EC_POINT_add(param_1, local_c8, local_c8, src, param_2);
               if (iVar2 == 0) goto LAB_00102b25;
               local_b4 = local_b4 + 1;
            } while ( local_b4 != 0x40 );
            *(undefined4*)( param_1 + 0x98 ) = 5;
            uVar6 = 1;
            puVar4[3] = local_c0;
            *puVar4 = param_1;
            puVar4[1] = 7;
            puVar4[2] = lVar5;
            *(undefined8**)( param_1 + 0xa0 ) = puVar4;
            puVar4 = (undefined8*)0x0;
            local_c0 = (void*)0x0;
         }
      } else {
         ERR_new();
         dst = (EC_POINT*)0x0;
         ERR_set_debug("crypto/ec/ecp_nistz256.c", 0x355, "ecp_nistz256_mult_precompute");
         ERR_set_error(0x10, 0x72, 0);
         local_c0 = (void*)0x0;
         local_c8 = (EC_POINT*)0x0;
      }
   }
   BN_CTX_end(param_2);
   BN_CTX_free(local_d0);
   EC_nistz256_pre_comp_free(puVar4);
   CRYPTO_free(local_c0);
   EC_POINT_free(dst);
   EC_POINT_free(local_c8);
   LAB_0010277c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar6;
}undefined1 *EC_GFp_nistz256_method(void) {
   return ret_9;
}
