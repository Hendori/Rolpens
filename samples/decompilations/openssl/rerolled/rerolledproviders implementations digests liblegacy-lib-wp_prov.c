void wp_copyctx(undefined8 *param_1, undefined8 *param_2) {
   undefined8 uVar1;
   uVar1 = param_2[1];
   *param_1 = *param_2;
   param_1[1] = uVar1;
   for (int i = 0; i < 9; i++) {
      uVar1 = param_2[( 2*i + 3 )];
      param_1[( 2*i + 2 )] = param_2[( 2*i + 2 )];
      param_1[( 2*i + 3 )] = uVar1;
   }

   param_1[0x14] = param_2[0x14];
   return;
}
ulong wp_internal_init(WHIRLPOOL_CTX *param_1) {
   int iVar1;
   ulong uVar2;
   uVar2 = ossl_prov_is_running();
   if ((int)uVar2 == 0) {
      return uVar2;
   }

   iVar1 = WHIRLPOOL_Init(param_1);
   return ( ulong )(iVar1 != 0);
}
void wp_get_params(undefined8 param_1) {
   ossl_digest_default_get_params(param_1, 0x40, 0x40, 0);
   return;
}
undefined8 *wp_dupctx(undefined8 *param_1) {
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
   int iVar16;
   undefined8 *puVar17;
   iVar16 = ossl_prov_is_running();
   puVar17 = (undefined8*)0x0;
   if (iVar16 != 0) {
      puVar17 = (undefined8*)CRYPTO_malloc(0xa8, "providers/implementations/digests/wp_prov.c", 0x16);
      if (puVar17 != (undefined8*)0x0) {
         uVar2 = param_1[1];
         uVar3 = param_1[2];
         uVar4 = param_1[3];
         uVar1 = param_1[0x14];
         uVar5 = param_1[4];
         uVar6 = param_1[5];
         uVar7 = param_1[6];
         uVar8 = param_1[7];
         uVar9 = param_1[8];
         uVar10 = param_1[9];
         *puVar17 = *param_1;
         puVar17[1] = uVar2;
         uVar2 = param_1[10];
         uVar11 = param_1[0xb];
         uVar12 = param_1[0xc];
         uVar13 = param_1[0xd];
         puVar17[2] = uVar3;
         puVar17[3] = uVar4;
         uVar3 = param_1[0xe];
         uVar4 = param_1[0xf];
         uVar14 = param_1[0x10];
         uVar15 = param_1[0x11];
         puVar17[4] = uVar5;
         puVar17[5] = uVar6;
         uVar5 = param_1[0x12];
         uVar6 = param_1[0x13];
         puVar17[0x14] = uVar1;
         puVar17[6] = uVar7;
         puVar17[7] = uVar8;
         puVar17[8] = uVar9;
         puVar17[9] = uVar10;
         puVar17[10] = uVar2;
         puVar17[0xb] = uVar11;
         puVar17[0xc] = uVar12;
         puVar17[0xd] = uVar13;
         puVar17[0xe] = uVar3;
         puVar17[0xf] = uVar4;
         puVar17[0x10] = uVar14;
         puVar17[0x11] = uVar15;
         puVar17[0x12] = uVar5;
         puVar17[0x13] = uVar6;
      }

   }

   return puVar17;
}
void wp_freectx(undefined8 param_1) {
   CRYPTO_clear_free(param_1, 0xa8, "providers/implementations/digests/wp_prov.c", 0x16);
   return;
}
undefined8 wp_internal_final(WHIRLPOOL_CTX *param_1, uchar *param_2, undefined8 *param_3, ulong param_4) {
   int iVar1;
   iVar1 = ossl_prov_is_running();
   if (( ( 0x3f < param_4 ) && ( iVar1 != 0 ) ) && ( iVar1 = iVar1 != 0 )) {
      *param_3 = 0x40;
      return 1;
   }

   return 0;
}
undefined8 wp_newctx(void) {
   int iVar1;
   undefined8 uVar2;
   iVar1 = ossl_prov_is_running();
   if (iVar1 != 0) {
      uVar2 = CRYPTO_zalloc(0xa8, "providers/implementations/digests/wp_prov.c", 0x16);
      return uVar2;
   }

   return 0;
}

