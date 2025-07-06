void ossl_dh_generate_ffc_parameters(long param_1, int param_2, int param_3, int param_4, undefined8 param_5) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_14[4];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 1) {
      iVar1 = ossl_ffc_params_FIPS186_2_generate(*(undefined8*)( param_1 + 0xb0 ), param_1 + 8, 1, (long)param_3, (long)param_4, local_14, param_5);
   } else {
      iVar1 = ossl_ffc_params_FIPS186_4_generate(*(undefined8*)( param_1 + 0xb0 ), param_1 + 8, 1, (long)param_3, (long)param_4, local_14, param_5);
   }
   if (0 < iVar1) {
      *(long*)( param_1 + 200 ) = *(long*)( param_1 + 200 ) + 1;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 ossl_dh_get_named_group_uid_from_size(int param_1) {
   undefined8 uVar1;
   if (param_1 == 0x1000) {
      uVar1 = 0x468;
   } else if (param_1 < 0x1001) {
      uVar1 = 0x466;
      if (param_1 != 0x800) {
         uVar1 = 0;
         if (param_1 == 0xc00) {
            uVar1 = 0x467;
         }
         return uVar1;
      }
   } else {
      uVar1 = 0x469;
      if (param_1 != 0x1800) {
         uVar1 = 0;
         if (param_1 == 0x2000) {
            uVar1 = 0x46a;
         }
         return uVar1;
      }
   }
   return uVar1;
}int DH_generate_parameters_ex(DH *dh, int prime_len, int generator, BN_GENCB *cb) {
   code *UNRECOVERED_JUMPTABLE;
   ushort uVar1;
   int iVar2;
   BN_CTX *ctx;
   BIGNUM *a;
   BIGNUM *a_00;
   BIGNUM *pBVar3;
   ulong w;
   UNRECOVERED_JUMPTABLE = *(code**)&dh[1].priv_key[2].neg;
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_523 = 0; i_523 < 2; i_523++) {
         /* WARNING: Could not recover jumptable at 0x0010012b. Too many branches */
      }
      iVar2 = ( *UNRECOVERED_JUMPTABLE )();
      return iVar2;
   }
   if (10000 < prime_len) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_gen.c", 0xa4, "dh_builtin_genparams");
      ERR_set_error(5, 0x67, 0);
      return 0;
   }
   if (prime_len < 0x200) {
      ERR_new();
      ERR_set_debug("crypto/dh/dh_gen.c", 0xa9, "dh_builtin_genparams");
      ERR_set_error(5, 0x7e, 0);
      return 0;
   }
   ctx = (BN_CTX*)BN_CTX_new_ex(dh[1].pub_key);
   if (ctx != (BN_CTX*)0x0) {
      BN_CTX_start(ctx);
      a = BN_CTX_get(ctx);
      a_00 = BN_CTX_get(ctx);
      if (a_00 != (BIGNUM*)0x0) {
         if (dh->p == (BIGNUM*)0x0) {
            pBVar3 = BN_new();
            dh->p = pBVar3;
            if (pBVar3 == (BIGNUM*)0x0) goto LAB_00100323;
         }
         if (dh->length == 0) {
            pBVar3 = BN_new();
            dh->length = (long)pBVar3;
            if (pBVar3 == (BIGNUM*)0x0) goto LAB_00100323;
         }
         if (generator < 2) {
            ERR_new();
            ERR_set_debug("crypto/dh/dh_gen.c", 0xbd, "dh_builtin_genparams");
            ERR_set_error(5, 0x65, 0);
         } else {
            if (generator == 2) {
               iVar2 = BN_set_word(a, 0x18);
               w = 0x17;
               joined_r0x00100429:if (iVar2 == 0) goto LAB_00100323;
            } else {
               if (generator == 5) {
                  iVar2 = BN_set_word(a, 0x3c);
                  w = 0x3b;
                  goto joined_r0x00100429;
               }
               iVar2 = BN_set_word(a, 0xc);
               if (iVar2 == 0) goto LAB_00100323;
               w = 0xb;
            }
            iVar2 = BN_set_word(a_00, w);
            if (( ( ( iVar2 != 0 ) && ( iVar2 = BN_generate_prime_ex2(dh->p, prime_len, 1, a, a_00, cb, ctx) ),iVar2 != 0 ) ) && ( iVar2 = iVar2 != 0 )) {
               uVar1 = ossl_ifc_ffc_compute_security_bits(prime_len);
               dh[1].method_mont_p = (BN_MONT_CTX*)( (long)&(dh[1].method_mont_p)->ri + 1 );
               dh->references = (int)( ( (ulong)uVar1 * 2 + 0x18 ) / 0x19 ) * 0x19;
               iVar2 = 1;
               goto LAB_0010034f;
            }
         }
      }
   }
   LAB_00100323:ERR_new();
   iVar2 = 0;
   ERR_set_debug("crypto/dh/dh_gen.c", 0xe6, "dh_builtin_genparams");
   ERR_set_error(5, 0x80003, 0);
   LAB_0010034f:BN_CTX_end(ctx);
   BN_CTX_free(ctx);
   return iVar2;
}
