void ossl_dsa_generate_ffc_parameters(long param_1, int param_2, int param_3, int param_4, undefined8 param_5) {
   int iVar1;
   long in_FS_OFFSET;
   undefined1 local_14[4];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 1) {
      iVar1 = ossl_ffc_params_FIPS186_2_generate(*(undefined8*)( param_1 + 0xb8 ), param_1 + 8, 0, (long)param_3, (long)param_4, local_14, param_5);
   } else {
      iVar1 = ossl_ffc_params_FIPS186_4_generate(*(undefined8*)( param_1 + 0xb8 ), param_1 + 8, 0, (long)param_3, (long)param_4, local_14, param_5);
   }
   if (0 < iVar1) {
      *(long*)( param_1 + 0xc0 ) = *(long*)( param_1 + 0xc0 ) + 1;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}int DSA_generate_parameters_ex(DSA *dsa, int bits, uchar *seed, int seed_len, int *counter_ret, ulong *h_ret, BN_GENCB *cb) {
   code *UNRECOVERED_JUMPTABLE;
   int iVar1;
   UNRECOVERED_JUMPTABLE = *(code**)&dsa[1].p[3].top;
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_455 = 0; i_455 < 2; i_455++) {
         /* WARNING: Could not recover jumptable at 0x001000dd. Too many branches */
      }
      iVar1 = ( *UNRECOVERED_JUMPTABLE )(dsa, bits);
      return iVar1;
   }
   if (( seed == (uchar*)0x0 ) || ( iVar1 = ossl_ffc_params_set_validate_params(&dsa->version, seed, (long)seed_len, 0xffffffff) ),iVar1 != 0) {
      if (( bits < 0x800 ) && ( seed_len < 0x15 )) {
         iVar1 = ossl_dsa_generate_ffc_parameters(dsa, 1, bits, 0xa0, cb);
      } else {
         iVar1 = ossl_dsa_generate_ffc_parameters(dsa, 0, bits, 0, cb);
      }
      if (iVar1 != 0) {
         if (counter_ret != (int*)0x0) {
            *counter_ret = *(int*)&dsa->priv_key;
         }
         if (h_ret != (ulong*)0x0) {
            *h_ret = (long)*(int*)( (long)&dsa->kinv + 4 );
         }
         return 1;
      }
   }
   return 0;
}
