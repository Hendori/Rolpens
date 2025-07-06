undefined1 *pvk2key_settable_ctx_params(void) {
   return settables_0;
}uint pvk2key_does_selection(undefined8 param_1, uint param_2) {
   uint uVar1;
   uVar1 = param_2 & 1;
   if (param_2 == 0) {
      uVar1 = 1;
   }
   return uVar1;
}bool pvk2key_set_ctx_params(long param_1, undefined8 param_2) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   bool bVar3;
   long local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_18 = param_1 + 8;
   lVar2 = OSSL_PARAM_locate_const(param_2, "properties", 0);
   bVar3 = true;
   if (lVar2 != 0) {
      iVar1 = OSSL_PARAM_get_utf8_string(lVar2, &local_18, 0x100);
      bVar3 = iVar1 != 0;
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 pvk2key_export_object(long param_1, undefined8 *param_2, long param_3, undefined8 param_4, undefined8 param_5) {
   int iVar1;
   code *UNRECOVERED_JUMPTABLE;
   undefined8 uVar2;
   UNRECOVERED_JUMPTABLE = (code*)ossl_prov_get_keymgmt_export(*(undefined8*)( *(long*)( param_1 + 0x108 ) + 0x10 ));
   if (( param_3 == 8 ) && ( UNRECOVERED_JUMPTABLE != (code*)0x0 )) {
      iVar1 = *(int*)( param_1 + 0x110 );
      if (*(int*)( param_1 + 0x110 ) == 0) {
         iVar1 = 0x87;
      }
      for (int i_34 = 0; i_34 < 2; i_34++) {
         /* WARNING: Could not recover jumptable at 0x001000f7. Too many branches */
      }
      uVar2 = ( *UNRECOVERED_JUMPTABLE )(*param_2, iVar1, param_4, param_5);
      return uVar2;
   }
   return 0;
}void pvk2key_freectx(void *param_1) {
   CRYPTO_free(param_1);
   return;
}void pvk2dsa_newctx(undefined8 param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)CRYPTO_zalloc(0x118, "providers/implementations/encode_decode/decode_pvk2key.c", 0x46);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = param_1;
      puVar1[0x21] = pvk2dsa_desc;
   }
   return;
}void pvk2rsa_newctx(undefined8 param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)CRYPTO_zalloc(0x118, "providers/implementations/encode_decode/decode_pvk2key.c", 0x46);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = param_1;
      puVar1[0x21] = pvk2rsa_desc;
   }
   return;
}void rsa_adjust(undefined8 param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = ossl_prov_ctx_get0_libctx(*param_2);
   ossl_rsa_set0_libctx(param_1, uVar1);
   return;
}undefined4 pvk2key_decode(undefined8 *param_1, undefined8 param_2, uint param_3, code *param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7) {
   code *pcVar1;
   int iVar2;
   undefined4 uVar3;
   uint uVar4;
   BIO *a;
   undefined8 uVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   undefined8 local_158;
   undefined8 uStack_150;
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_138;
   BIO *local_120;
   undefined1 local_118[16];
   undefined1 local_108[16];
   undefined1 local_f8[16];
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 uStack_b8;
   undefined8 local_b0;
   undefined8 uStack_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 uStack_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   a = (BIO*)ossl_bio_new_from_core_bio(*param_1);
   local_120 = (BIO*)0x0;
   if (a == (BIO*)0x0) {
      uVar3 = 0;
      goto LAB_001002a2;
   }
   *(uint*)( param_1 + 0x22 ) = param_3;
   if (param_3 == 0) {
      if (*(long*)( param_1[0x21] + 0x18 ) == 0) goto LAB_001002ea;
      LAB_00100253:local_118 = (undefined1[16])0x0;
      local_108 = (undefined1[16])0x0;
      local_f8 = (undefined1[16])0x0;
      iVar2 = ossl_pw_set_ossl_passphrase_cb(local_118, param_6, param_7);
      if (iVar2 != 0) {
         pcVar1 = *(code**)( param_1[0x21] + 0x18 );
         uVar5 = ossl_prov_ctx_get0_libctx(*param_1);
         local_120 = (BIO*)( *pcVar1 )(a, &ossl_pw_pvk_password, local_118, uVar5, param_1 + 1);
         uVar6 = ERR_peek_last_error();
         uVar4 = (uint)uVar6;
         if (( ( (int)uVar4 < 0 ) || ( (ulong)(long)(int)uVar4 >> 0x17 != 9 ) ) || ( ( ( uVar4 & 0x7fffff ) != 0x68 && ( ( uVar4 & 0x7fffff ) != 0x65 ) ) )) {
            if (( local_120 != (BIO*)0x0 ) && ( *(code**)( param_1[0x21] + 0x20 ) != (code*)0x0 )) {
               ( **(code**)( param_1[0x21] + 0x20 ) )(local_120, param_1);
            }
            goto LAB_001002ea;
         }
         ERR_clear_last_mark();
      }
      uVar3 = 0;
   } else {
      if (( ( param_3 & 1 ) != 0 ) && ( *(long*)( param_1[0x21] + 0x18 ) != 0 )) goto LAB_00100253;
      LAB_001002ea:uVar3 = 1;
      BIO_free(a);
      a = local_120;
      if (local_120 != (BIO*)0x0) {
         a = (BIO*)0x0;
         local_118._0_4_ = 2;
         OSSL_PARAM_construct_int(&local_158, &_LC2, local_118);
         local_c8 = local_138;
         local_e8 = local_158;
         uStack_e0 = uStack_150;
         local_d8 = local_148;
         uStack_d0 = uStack_140;
         OSSL_PARAM_construct_utf8_string(&local_158, "data-type", *(undefined8*)( param_1[0x21] + 8 ), 0);
         local_c0 = local_158;
         uStack_b8 = uStack_150;
         local_b0 = local_148;
         uStack_a8 = uStack_140;
         local_a0 = local_138;
         OSSL_PARAM_construct_octet_string(&local_158, "reference", &local_120, 8);
         local_78 = local_138;
         local_98 = local_158;
         uStack_90 = uStack_150;
         local_88 = local_148;
         uStack_80 = uStack_140;
         OSSL_PARAM_construct_end(&local_158);
         local_70 = local_158;
         uStack_68 = uStack_150;
         local_50 = local_138;
         local_60 = local_148;
         uStack_58 = uStack_140;
         uVar3 = ( *param_4 )(&local_e8, param_5);
      }
   }
   BIO_free(a);
   ( **(code**)( param_1[0x21] + 0x28 ) )(local_120);
   LAB_001002a2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
