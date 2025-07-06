void ossl_prov_get_keymgmt_new(void) {
   FUN_00100019();
   return;
}undefined8 FUN_00100019(int *param_1) {
   while (true) {
      if (*param_1 == 0) {
         return 0;
      }
      if (*param_1 == 1) break;
      param_1 = param_1 + 4;
   };
   return *(undefined8*)( param_1 + 2 );
}void ossl_prov_get_keymgmt_free(void) {
   FUN_00100049();
   return;
}undefined8 FUN_00100049(int *param_1) {
   while (true) {
      if (*param_1 == 0) {
         return 0;
      }
      if (*param_1 == 10) break;
      param_1 = param_1 + 4;
   };
   return *(undefined8*)( param_1 + 2 );
}void ossl_prov_get_keymgmt_import(void) {
   FUN_00100079();
   return;
}undefined8 FUN_00100079(int *param_1) {
   while (true) {
      if (*param_1 == 0) {
         return 0;
      }
      if (*param_1 == 0x28) break;
      param_1 = param_1 + 4;
   };
   return *(undefined8*)( param_1 + 2 );
}void ossl_prov_get_keymgmt_export(void) {
   FUN_001000a9();
   return;
}undefined8 FUN_001000a9(int *param_1) {
   while (true) {
      if (*param_1 == 0) {
         return 0;
      }
      if (*param_1 == 0x2a) break;
      param_1 = param_1 + 4;
   };
   return *(undefined8*)( param_1 + 2 );
}long ossl_prov_import_key(undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4) {
   int iVar1;
   code *pcVar2;
   code *pcVar3;
   code *pcVar4;
   long lVar5;
   pcVar2 = (code*)ossl_prov_get_keymgmt_new();
   pcVar3 = (code*)ossl_prov_get_keymgmt_free(param_1);
   pcVar4 = (code*)ossl_prov_get_keymgmt_import(param_1);
   if (( pcVar2 != (code*)0x0 && pcVar4 != (code*)0x0 ) && ( pcVar3 != (code*)0x0 )) {
      lVar5 = ( *pcVar2 )(param_2);
      if (( lVar5 != 0 ) && ( iVar1 = iVar1 != 0 )) {
         return lVar5;
      }
      ( *pcVar3 )(lVar5);
   }
   return 0;
}void ossl_prov_free_key(undefined8 param_1, undefined8 param_2) {
   code *UNRECOVERED_JUMPTABLE;
   UNRECOVERED_JUMPTABLE = (code*)ossl_prov_get_keymgmt_free();
   if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
      for (int i_732 = 0; i_732 < 2; i_732++) {
         /* WARNING: Could not recover jumptable at 0x00100176. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE )(param_2);
      return;
   }
   return;
}uint ossl_read_der(undefined8 param_1, undefined8 param_2, undefined8 *param_3, undefined8 *param_4) {
   uint uVar1;
   BIO *a;
   uint uVar2;
   long in_FS_OFFSET;
   undefined8 *local_38;
   long local_30;
   uVar2 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (undefined8*)0x0;
   a = (BIO*)ossl_bio_new_from_core_bio();
   if (a != (BIO*)0x0) {
      uVar1 = asn1_d2i_read_bio(a, &local_38);
      uVar2 = ~uVar1 >> 0x1f;
      if (-1 < (int)uVar1) {
         *param_3 = local_38[1];
         *param_4 = *local_38;
         CRYPTO_free(local_38);
      }
      BIO_free(a);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
