undefined1 *md5_sha1_settable_ctx_params(void) {
   return known_md5_sha1_settable_ctx_params;
}
void md5_sha1_copyctx(undefined8 *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = param_2[1];
   *param_1 = *param_2;
   param_1[1] = uVar1;
   for (int i = 0; i < 10; i++) {
      uVar1 = param_2[( 2*i + 3 )];
      param_1[( 2*i + 2 )] = param_2[( 2*i + 2 )];
      param_1[( 2*i + 3 )] = uVar1;
   }

   uVar1 = *(undefined8*)( (long)param_2 + 0xb4 );
   *(undefined8*)( (long)param_1 + 0xac ) = *(undefined8*)( (long)param_2 + 0xac );
   *(undefined8*)( (long)param_1 + 0xb4 ) = uVar1;
   return;
}
undefined8 md5_sha1_set_ctx_params(long param_1, long *param_2) {
   long lVar1;
   undefined8 uVar2;
   if (param_1 == 0) {
      return 0;
   }

   if (( param_2 != (long*)0x0 ) && ( *param_2 != 0 )) {
      lVar1 = OSSL_PARAM_locate_const(param_2, "ssl3-ms");
      if (( lVar1 != 0 ) && ( *(int*)( lVar1 + 8 ) == 5 )) {
         uVar2 = ossl_md5_sha1_ctrl(param_1, 0x1d, *(undefined4*)( lVar1 + 0x18 ), *(undefined8*)( lVar1 + 0x10 ));
         return uVar2;
      }

   }

   return 1;
}
void md5_sha1_get_params(undefined8 param_1) {
   ossl_digest_default_get_params(param_1, 0x40, 0x24, 0);
   return;
}
undefined8 *md5_sha1_dupctx(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   int iVar17;
   undefined8 *puVar18;
   iVar17 = ossl_prov_is_running();
   puVar18 = (undefined8*)0x0;
   if (iVar17 != 0) {
      puVar18 = (undefined8*)CRYPTO_malloc(0xbc, "providers/implementations/digests/md5_sha1_prov.c", 0x3a);
      if (puVar18 != (undefined8*)0x0) {
         uVar1 = param_1[1];
         uVar2 = param_1[2];
         uVar3 = param_1[3];
         uVar4 = param_1[4];
         uVar5 = param_1[5];
         uVar6 = param_1[6];
         uVar7 = param_1[7];
         uVar8 = param_1[8];
         uVar9 = param_1[9];
         uVar10 = param_1[10];
         uVar11 = param_1[0xb];
         *puVar18 = *param_1;
         puVar18[1] = uVar1;
         uVar1 = param_1[0xc];
         uVar12 = param_1[0xd];
         uVar13 = param_1[0xe];
         uVar14 = param_1[0xf];
         puVar18[2] = uVar2;
         puVar18[3] = uVar3;
         uVar2 = param_1[0x10];
         uVar3 = param_1[0x11];
         uVar15 = param_1[0x12];
         uVar16 = param_1[0x13];
         puVar18[4] = uVar4;
         puVar18[5] = uVar5;
         puVar18[6] = uVar6;
         puVar18[7] = uVar7;
         uVar4 = param_1[0x14];
         uVar5 = param_1[0x15];
         uVar6 = *(undefined8*)( (long)param_1 + 0xac );
         uVar7 = *(undefined8*)( (long)param_1 + 0xb4 );
         puVar18[8] = uVar8;
         puVar18[9] = uVar9;
         puVar18[0x14] = uVar4;
         puVar18[0x15] = uVar5;
         puVar18[10] = uVar10;
         puVar18[0xb] = uVar11;
         puVar18[0xc] = uVar1;
         puVar18[0xd] = uVar12;
         puVar18[0xe] = uVar13;
         puVar18[0xf] = uVar14;
         puVar18[0x10] = uVar2;
         puVar18[0x11] = uVar3;
         puVar18[0x12] = uVar15;
         puVar18[0x13] = uVar16;
         *(undefined8*)( (long)puVar18 + 0xac ) = uVar6;
         *(undefined8*)( (long)puVar18 + 0xb4 ) = uVar7;
      }

   }

   return puVar18;
}
void md5_sha1_freectx(undefined8 param_1) {
   CRYPTO_clear_free(param_1, 0xbc, "providers/implementations/digests/md5_sha1_prov.c", 0x3a);
   return;
}
undefined8 md5_sha1_internal_final(undefined8 param_1, undefined8 param_2, undefined8 *param_3, ulong param_4) {
   int iVar1;
   iVar1 = ossl_prov_is_running();
   if (( ( 0x23 < param_4 ) && ( iVar1 != 0 ) ) && ( iVar1 = iVar1 != 0 )) {
      *param_3 = 0x24;
      return 1;
   }

   return 0;
}
undefined8 md5_sha1_newctx(void) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = ossl_prov_is_running();
   if (iVar1 != 0) {
      uVar2 = CRYPTO_zalloc(0xbc, "providers/implementations/digests/md5_sha1_prov.c", 0x3a);
      return uVar2;
   }

   return 0;
}
bool md5_sha1_internal_init(long param_1, long *param_2) {
   int iVar1;
   long lVar2;
   iVar1 = ossl_prov_is_running();
   if (( ( iVar1 == 0 ) || ( iVar1 = iVar1 == 0 ) ) || ( param_1 == 0 )) {
      return false;
   }

   if (( ( param_2 != (long*)0x0 ) && ( *param_2 != 0 ) ) && ( ( lVar2 = OSSL_PARAM_locate_const(param_2, "ssl3-ms") ),lVar2 != 0 && ( *(int*)( lVar2 + 8 ) == 5 ) )) {
      iVar1 = ossl_md5_sha1_ctrl(param_1, 0x1d, *(undefined4*)( lVar2 + 0x18 ), *(undefined8*)( lVar2 + 0x10 ));
      return iVar1 != 0;
   }

   return true;
}

