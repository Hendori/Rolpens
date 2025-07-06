bool ossl_dsa_generate_public_key(BN_CTX *param_1, long param_2, undefined8 param_3, BIGNUM *param_4) {
   int iVar1;
   BIGNUM *p;
   bool bVar2;
   bVar2 = false;
   p = BN_new();
   if (p != (BIGNUM*)0x0) {
      BN_with_flags(p, param_3, 4);
      iVar1 = BN_mod_exp(param_4, *(BIGNUM**)( param_2 + 0x18 ), p, *(BIGNUM**)( param_2 + 8 ), param_1);
      bVar2 = iVar1 != 0;
      BN_clear_free(p);
   }
   return bVar2;
}int DSA_generate_key(DSA *a) {
   code *UNRECOVERED_JUMPTABLE;
   int iVar1;
   BN_CTX *c;
   BIGNUM *a_00;
   BIGNUM *a_01;
   UNRECOVERED_JUMPTABLE = *(code**)&a[1].p[3].neg;
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_456 = 0; i_456 < 2; i_456++) {
         /* WARNING: Could not recover jumptable at 0x001000a7. Too many branches */
      }
      iVar1 = ( *UNRECOVERED_JUMPTABLE )();
      return iVar1;
   }
   c = (BN_CTX*)BN_CTX_new_ex(a[1].pub_key);
   if (( c == (BN_CTX*)0x0 ) || ( ( a_00 = *(BIGNUM**)&(a->ex_data).dummy ),a_00 == (BIGNUM*)0x0 && ( a_00 = (BIGNUM*)BN_secure_new() ),a_00 == (BIGNUM*)0x0 )) {
      a_00 = (BIGNUM*)0x0;
      LAB_001001ab:a_01 = (BIGNUM*)0x0;
   } else {
      a_01 = (BIGNUM*)0x0;
      iVar1 = ossl_ffc_params_simple_validate(a[1].pub_key, &a->version, 0, 0);
      if (iVar1 != 0) {
         iVar1 = BN_num_bits(*(BIGNUM**)&a->write_params);
         iVar1 = ossl_ffc_generate_private_key(c, &a->version, iVar1, 0x50, a_00);
         if (( iVar1 == 0 ) || ( ( a_01 = (BIGNUM*)(a->ex_data).sk ),a_01 == (BIGNUM*)0x0 && ( a_01 = BN_new() ),a_01 == (BIGNUM*)0x0 )) goto LAB_001001ab;
         iVar1 = ossl_dsa_generate_public_key(c, a, a_00, a_01);
         if (iVar1 != 0) {
            a[1].priv_key = (BIGNUM*)( (long)&(a[1].priv_key)->d + 1 );
            *(BIGNUM**)&(a->ex_data).dummy = a_00;
            (a->ex_data).sk = (stack_st_void*)a_01;
            iVar1 = 1;
            goto LAB_00100114;
         }
      }
   }
   if ((BIGNUM*)(a->ex_data).sk != a_01) {
      BN_free(a_01);
   }
   if (*(BIGNUM**)&(a->ex_data).dummy != a_00) {
      BN_free(a_00);
   }
   iVar1 = 0;
   LAB_00100114:BN_CTX_free(c);
   return iVar1;
}
