undefined8 evp_do_ciph_getparams(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x78 ) != 0) {
      if (*(code**)( param_1 + 0xe8 ) != (code*)0x0) {
         for (int i_997 = 0; i_997 < 2; i_997++) {
            /* WARNING: Could not recover jumptable at 0x0010001f. Too many branches */
         }
         uVar1 = ( **(code**)( param_1 + 0xe8 ) )(param_2);
         return uVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/evp_utils.c", 0x41, "geterr");
      ERR_set_error(6, 0xc5, 0);
      return 0;
   }
   return 0xffffffff;
}undefined8 evp_do_ciph_ctx_getparams(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x78 ) != 0) {
      if (*(code**)( param_1 + 0xf0 ) != (code*)0x0) {
         for (int i_998 = 0; i_998 < 2; i_998++) {
            /* WARNING: Could not recover jumptable at 0x001000a2. Too many branches */
         }
         uVar1 = ( **(code**)( param_1 + 0xf0 ) )(param_2, param_3);
         return uVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/evp_utils.c", 0x41, "geterr");
      ERR_set_error(6, 0xc5, 0);
      return 0;
   }
   return 0xffffffff;
}undefined8 evp_do_ciph_ctx_setparams(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x78 ) != 0) {
      if (*(code**)( param_1 + 0xf8 ) != (code*)0x0) {
         for (int i_999 = 0; i_999 < 2; i_999++) {
            /* WARNING: Could not recover jumptable at 0x00100122. Too many branches */
         }
         uVar1 = ( **(code**)( param_1 + 0xf8 ) )(param_2, param_3);
         return uVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/evp_utils.c", 0x46, "seterr");
      ERR_set_error(6, 0xc6, 0);
      return 0;
   }
   return 0xffffffff;
}undefined8 evp_do_md_getparams(long param_1, undefined8 param_2) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x70 ) != 0) {
      if (*(code**)( param_1 + 200 ) != (code*)0x0) {
         for (int i_1000 = 0; i_1000 < 2; i_1000++) {
            /* WARNING: Could not recover jumptable at 0x0010019f. Too many branches */
         }
         uVar1 = ( **(code**)( param_1 + 200 ) )(param_2);
         return uVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/evp_utils.c", 0x41, "geterr");
      ERR_set_error(6, 0xc5, 0);
      return 0;
   }
   return 0xffffffff;
}undefined8 evp_do_md_ctx_getparams(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x70 ) != 0) {
      if (*(code**)( param_1 + 0xd8 ) != (code*)0x0) {
         for (int i_1001 = 0; i_1001 < 2; i_1001++) {
            /* WARNING: Could not recover jumptable at 0x00100222. Too many branches */
         }
         uVar1 = ( **(code**)( param_1 + 0xd8 ) )(param_2, param_3);
         return uVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/evp_utils.c", 0x41, "geterr");
      ERR_set_error(6, 0xc5, 0);
      return 0;
   }
   return 0xffffffff;
}undefined8 evp_do_md_ctx_setparams(long param_1, undefined8 param_2, undefined8 param_3) {
   undefined8 uVar1;
   if (param_1 == 0) {
      return 0;
   }
   if (*(long*)( param_1 + 0x70 ) != 0) {
      if (*(code**)( param_1 + 0xd0 ) != (code*)0x0) {
         for (int i_1002 = 0; i_1002 < 2; i_1002++) {
            /* WARNING: Could not recover jumptable at 0x001002a2. Too many branches */
         }
         uVar1 = ( **(code**)( param_1 + 0xd0 ) )(param_2, param_3);
         return uVar1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/evp_utils.c", 0x46, "seterr");
      ERR_set_error(6, 0xc6, 0);
      return 0;
   }
   return 0xffffffff;
}
