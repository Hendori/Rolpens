undefined1 *kdf_argon2_settable_ctx_params(void) {
   return known_settable_ctx_params_5;
}
undefined1 *kdf_argon2_gettable_ctx_params(void) {
   return known_gettable_ctx_params_14;
}
undefined8 kdf_argon2_get_ctx_params(undefined8 param_1, undefined8 param_2) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = OSSL_PARAM_locate(param_2, &_LC0);
   if (lVar1 != 0) {
      uVar2 = OSSL_PARAM_set_size_t(lVar1, 0xffffffffffffffff);
      return uVar2;
   }

   return 0xfffffffe;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void kdf_argon2_reset(undefined8 *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   ulong uVar5;
   undefined8 *puVar6;
   byte bVar7;
   bVar7 = 0;
   uVar1 = *(undefined4*)( (long)param_1 + 100 );
   uVar2 = param_1[0x10];
   EVP_MD_free(param_1[0x11]);
   EVP_MAC_free(param_1[0x12]);
   CRYPTO_free((void*)param_1[0x13]);
   for (int i = 0; i < 4; i++) {
      if (param_1[( 2*i + 2 )] != 0) {
         CRYPTO_clear_free(param_1[( 2*i + 2 )], *(undefined4*)( param_1 + ( 2*i + 3 ) ), "providers/implementations/kdfs/argon2.c", ( 3*i + 1134 ));
      }

   }

   *param_1 = 0;
   uVar4 = __LC3;
   uVar3 = __LC2;
   param_1[0x13] = 0;
   puVar6 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
   for (uVar5 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0xa0U >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
   }

   param_1[0x10] = uVar2;
   *(undefined4*)( param_1 + 1 ) = 0x40;
   *(undefined4*)( (long)param_1 + 0x5c ) = 0x13;
   *(undefined4*)( (long)param_1 + 100 ) = uVar1;
   *(undefined8*)( (long)param_1 + 0x4c ) = uVar3;
   *(undefined8*)( (long)param_1 + 0x54 ) = uVar4;
   return;
}
void kdf_argon2_free(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   byte bVar3;
   bVar3 = 0;
   if (param_1 != (undefined8*)0x0) {
      if (param_1[2] != 0) {
         CRYPTO_clear_free(param_1[2], *(undefined4*)( param_1 + 3 ), "providers/implementations/kdfs/argon2.c", 0x3e1);
      }

      if (param_1[4] != 0) {
         CRYPTO_clear_free(param_1[4], *(undefined4*)( param_1 + 5 ), "providers/implementations/kdfs/argon2.c", 0x3e4);
      }

      if (param_1[6] != 0) {
         CRYPTO_clear_free(param_1[6], *(undefined4*)( param_1 + 7 ), "providers/implementations/kdfs/argon2.c", 999);
      }

      if (param_1[8] != 0) {
         CRYPTO_clear_free(param_1[8], *(undefined4*)( param_1 + 9 ), "providers/implementations/kdfs/argon2.c", 0x3ea);
      }

      EVP_MD_free(param_1[0x11]);
      EVP_MAC_free(param_1[0x12]);
      CRYPTO_free((void*)param_1[0x13]);
      *param_1 = 0;
      param_1[0x13] = 0;
      puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
      for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0xa0U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
         *puVar2 = 0;
         puVar2 = puVar2 + (ulong)bVar3 * -2 + 1;
      }

      CRYPTO_free(param_1);
      return;
   }

   return;
}
bool blake2b_part_0_constprop_0(undefined8 param_1, undefined8 param_2, uchar *param_3, undefined8 param_4, void *param_5) {
   int iVar1;
   EVP_MD_CTX *ctx;
   long in_FS_OFFSET;
   bool bVar2;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   undefined8 uStack_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = param_4;
   ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
   bVar2 = false;
   if (ctx == (EVP_MD_CTX*)0x0) goto LAB_00100341;
   OSSL_PARAM_construct_size_t(&local_c8, &_LC0, &local_90);
   local_68 = local_a8;
   local_88 = local_c8;
   uStack_80 = uStack_c0;
   local_78 = local_b8;
   uStack_70 = uStack_b0;
   OSSL_PARAM_construct_end(&local_c8);
   local_40 = local_a8;
   local_60 = local_c8;
   uStack_58 = uStack_c0;
   local_50 = local_b8;
   uStack_48 = uStack_b0;
   iVar1 = EVP_DigestInit_ex2(ctx, param_1, &local_88);
   if (iVar1 == 1) {
      iVar1 = EVP_DigestUpdate(ctx, param_5, 0x40);
      if (iVar1 != 1) goto LAB_0010032f;
      iVar1 = EVP_DigestFinal_ex(ctx, param_3, (uint*)0x0);
      bVar2 = iVar1 == 1;
   }
 else {
      LAB_0010032f:bVar2 = false;
   }

   EVP_MD_CTX_free(ctx);
   LAB_00100341:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void blake2b_long_isra_0(undefined8 param_1, undefined8 param_2, uchar *param_3, ulong param_4, void *param_5, size_t param_6) {
   int iVar1;
   EVP_MD_CTX *ctx;
   ulong uVar2;
   uint uVar3;
   uchar *md;
   uchar *puVar4;
   long in_FS_OFFSET;
   byte bVar5;
   undefined8 local_168;
   undefined8 uStack_160;
   undefined8 local_158;
   undefined8 uStack_150;
   undefined8 local_148;
   ulong local_130;
   undefined8 local_128;
   undefined8 uStack_120;
   undefined8 local_118;
   undefined8 uStack_110;
   undefined8 local_108;
   undefined8 local_100;
   undefined8 uStack_f8;
   undefined8 local_f0;
   undefined8 uStack_e8;
   undefined8 local_e0;
   uint local_cc;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_88[9];
   long local_40;
   bVar5 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != (uchar*)0x0 ) && ( param_4 != 0 )) {
      uVar3 = (uint)param_4;
      local_cc = uVar3;
      ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
      if (ctx != (EVP_MD_CTX*)0x0) {
         local_130 = 0x40;
         if (param_4 < 0x41) {
            local_130 = param_4;
         }

         OSSL_PARAM_construct_size_t(&local_168, &_LC0, &local_130);
         local_108 = local_148;
         local_128 = local_168;
         uStack_120 = uStack_160;
         local_118 = local_158;
         uStack_110 = uStack_150;
         OSSL_PARAM_construct_end(&local_168);
         local_e0 = local_148;
         local_100 = local_168;
         uStack_f8 = uStack_160;
         local_f0 = local_158;
         uStack_e8 = uStack_150;
         iVar1 = EVP_DigestInit_ex2(ctx, param_1, &local_128);
         if (( ( iVar1 == 1 ) && ( iVar1 = EVP_DigestUpdate(ctx, &local_cc, 4) ),iVar1 == 1 )) {
            if (param_4 < 0x41) {
               EVP_DigestFinal_ex(ctx, param_3, (uint*)0x0);
            }
 else {
               md = (uchar*)&local_c8;
               iVar1 = EVP_DigestFinal_ex(ctx, md, (uint*)0x0);
               if (iVar1 == 1) {
                  *(undefined8*)param_3 = local_c8;
                  *(undefined8*)( param_3 + 8 ) = uStack_c0;
                  *(undefined8*)( param_3 + 0x10 ) = local_b8;
                  *(undefined8*)( param_3 + 0x18 ) = uStack_b0;
                  puVar4 = param_3 + 0x20;
                  while (true) {
                     uVar3 = uVar3 - 0x20;
                     uVar2 = (ulong)uVar3;
                     if (uVar3 < 0x41) break;
                     iVar1 = blake2b_part_0_constprop_0(param_1, param_2, md, 0x40, local_88);
                     if (iVar1 != 1) goto LAB_00100492;
                     *(undefined8*)puVar4 = local_c8;
                     *(undefined8*)( puVar4 + 8 ) = uStack_c0;
                     *(undefined8*)( puVar4 + 0x10 ) = local_b8;
                     *(undefined8*)( puVar4 + 0x18 ) = uStack_b0;
                     puVar4 = puVar4 + 0x20;
                  }
;
                  iVar1 = blake2b_part_0_constprop_0(param_1, param_2, md, uVar2, local_88);
                  if (iVar1 == 1) {
                     for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                        *puVar4 = *md;
                        md = md + (ulong)bVar5 * -2 + 1;
                        puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
                     }

                  }

               }

            }

         }

         LAB_00100492:EVP_MD_CTX_free(ctx);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Type propagation algorithm not settling */void fill_first_blocks(long param_1, long param_2) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   undefined4 uVar4;
   long lVar5;
   undefined8 *puVar6;
   uint uVar7;
   long in_FS_OFFSET;
   undefined8 local_448[129];
   long local_40;
   uVar4 = _LC3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_2 + 0x54 ) != 0) {
      uVar7 = 0;
      puVar3 = local_448 + 1;
      do {
         *(uint*)( param_1 + 0x44 ) = uVar7;
         *(undefined4*)( param_1 + 0x40 ) = 0;
         blake2b_long_isra_0(*(undefined8*)( param_2 + 0x88 ), *(undefined8*)( param_2 + 0x90 ), local_448, 0x400, param_1, 0x48);
         lVar5 = 0;
         puVar6 = (undefined8*)( ( ulong )(uVar7 * *(int*)( param_2 + 0x7c )) * 0x400 + *(long*)( param_2 + 0x68 ) );
         if (puVar6 == puVar3) {
            do {
               *(undefined8*)( (long)puVar3 + lVar5 ) = *(undefined8*)( (long)local_448 + lVar5 );
               lVar5 = lVar5 + 8;
            }
 while ( lVar5 != 0x400 );
         }
 else {
            do {
               uVar2 = *(undefined8*)( (long)local_448 + lVar5 + 8U );
               puVar1 = (undefined8*)( (long)puVar6 + lVar5 );
               *puVar1 = *(undefined8*)( (long)local_448 + lVar5 );
               puVar1[1] = uVar2;
               lVar5 = lVar5 + 0x10;
            }
 while ( lVar5 != 0x400 );
         }

         *(undefined4*)( param_1 + 0x40 ) = uVar4;
         blake2b_long_isra_0(*(undefined8*)( param_2 + 0x88 ), *(undefined8*)( param_2 + 0x90 ), local_448, 0x400, param_1, 0x48);
         lVar5 = 0;
         puVar6 = (undefined8*)( ( ulong )(*(int*)( param_2 + 0x7c ) * uVar7 + 1) * 0x400 + *(long*)( param_2 + 0x68 ) );
         if (puVar6 == puVar3) {
            do {
               *(undefined8*)( (long)puVar3 + lVar5 ) = *(undefined8*)( (long)local_448 + lVar5 );
               lVar5 = lVar5 + 8;
            }
 while ( lVar5 != 0x400 );
         }
 else {
            do {
               uVar2 = *(undefined8*)( (long)local_448 + lVar5 + 8U );
               puVar1 = (undefined8*)( (long)puVar6 + lVar5 );
               *puVar1 = *(undefined8*)( (long)local_448 + lVar5 );
               puVar1[1] = uVar2;
               lVar5 = lVar5 + 0x10;
            }
 while ( lVar5 != 0x400 );
         }

         uVar7 = uVar7 + 1;
      }
 while ( uVar7 < *(uint*)( param_2 + 0x54 ) );
   }

   OPENSSL_cleanse(local_448, 0x400);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void finalize(long param_1, undefined8 param_2) {
   undefined4 uVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   undefined4 uVar7;
   undefined4 uVar8;
   undefined4 uVar9;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   long lVar10;
   char cVar11;
   short sVar12;
   short sVar13;
   short sVar14;
   short sVar15;
   short sVar16;
   short sVar17;
   short sVar18;
   short sVar19;
   short sVar20;
   short sVar21;
   short sVar22;
   short sVar23;
   short sVar24;
   short sVar25;
   short sVar26;
   ushort uVar27;
   short sVar28;
   ushort uVar29;
   short sVar30;
   ushort uVar31;
   short sVar32;
   short sVar33;
   short sVar34;
   ushort uVar35;
   short sVar36;
   short sVar37;
   short sVar38;
   short sVar39;
   short sVar40;
   short sVar41;
   short sVar42;
   short sVar43;
   short sVar44;
   short sVar45;
   short sVar46;
   short sVar47;
   short sVar48;
   short sVar49;
   short sVar50;
   short sVar51;
   short sVar52;
   short sVar53;
   short sVar54;
   short sVar55;
   short sVar56;
   short sVar57;
   short sVar58;
   short sVar59;
   short sVar60;
   short sVar61;
   short sVar62;
   short sVar63;
   short sVar64;
   short sVar65;
   short sVar66;
   short sVar67;
   ushort uVar68;
   short sVar69;
   ushort uVar70;
   short sVar71;
   short sVar72;
   short sVar73;
   ushort uVar74;
   short sVar75;
   ushort uVar76;
   short sVar77;
   ushort uVar78;
   short sVar79;
   short sVar80;
   short sVar81;
   ushort uVar82;
   short sVar83;
   ushort uVar84;
   short sVar85;
   ushort uVar86;
   short sVar87;
   short sVar88;
   short sVar89;
   ushort uVar90;
   short sVar91;
   ushort uVar92;
   short sVar93;
   ushort uVar94;
   short sVar95;
   short sVar96;
   short sVar97;
   ushort uVar98;
   short sVar99;
   short sVar100;
   short sVar101;
   short sVar102;
   short sVar103;
   short sVar104;
   short sVar105;
   short sVar106;
   short sVar107;
   short sVar108;
   short sVar109;
   short sVar110;
   short sVar111;
   short sVar112;
   short sVar113;
   short sVar114;
   short sVar115;
   short sVar116;
   short sVar117;
   short sVar118;
   short sVar119;
   short sVar120;
   short sVar121;
   short sVar122;
   short sVar123;
   short sVar124;
   short sVar125;
   short sVar126;
   short sVar127;
   short sVar128;
   short sVar129;
   short sVar130;
   undefined1 auVar131[15];
   undefined1 auVar132[15];
   undefined1 auVar133[15];
   undefined1 auVar134[15];
   undefined1 auVar135[15];
   undefined1 auVar136[15];
   undefined1 auVar137[15];
   undefined1 auVar138[15];
   undefined1 auVar139[15];
   undefined1 auVar140[15];
   undefined1 auVar141[15];
   undefined1 auVar142[15];
   undefined1 auVar143[15];
   undefined1 auVar144[15];
   undefined1 auVar145[15];
   undefined1 auVar146[15];
   undefined1 auVar147[15];
   undefined1 auVar148[15];
   undefined1 auVar149[15];
   undefined1 auVar150[15];
   ulong uVar151;
   ulong uVar152;
   ulong uVar153;
   undefined1 auVar154[16];
   undefined1 auVar155[16];
   undefined1 auVar156[16];
   undefined1 auVar157[16];
   undefined1 auVar158[16];
   undefined1 auVar159[16];
   undefined1 auVar160[16];
   undefined1 auVar161[16];
   undefined1 auVar162[16];
   undefined1 auVar163[16];
   undefined1 auVar164[16];
   undefined1 auVar165[16];
   undefined1 auVar166[16];
   undefined1 auVar167[12];
   undefined1 auVar168[12];
   undefined1 auVar169[12];
   undefined1 auVar170[12];
   undefined1 auVar171[12];
   undefined1 auVar172[12];
   undefined1 auVar173[12];
   undefined1 auVar174[12];
   undefined1 auVar175[12];
   undefined1 auVar176[12];
   undefined1 auVar177[12];
   undefined1 auVar178[12];
   int iVar179;
   uint uVar180;
   long lVar181;
   undefined1(*pauVar182)[16];
   uint uVar183;
   long lVar184;
   undefined1(*pauVar185)[16];
   undefined1(*pauVar186)[16];
   ulong *puVar187;
   undefined8 *puVar188;
   ulong *puVar189;
   long lVar190;
   int iVar191;
   ulong *puVar192;
   long in_FS_OFFSET;
   ulong uVar193;
   ulong uVar196;
   undefined1 auVar194[16];
   undefined1 auVar195[16];
   ulong uVar197;
   ulong uVar199;
   undefined1 auVar198[16];
   undefined1 auVar200[16];
   undefined1 auVar202[16];
   undefined1 auVar205[16];
   undefined1 auVar209[16];
   undefined1 auVar211[16];
   uint uVar212;
   undefined2 uVar239;
   undefined2 uVar240;
   undefined1 auVar214[16];
   undefined2 uVar237;
   undefined1 auVar215[16];
   undefined1 auVar217[16];
   undefined1 auVar221[16];
   undefined1 auVar224[16];
   uint uVar213;
   undefined2 uVar238;
   undefined1 auVar225[16];
   undefined1 auVar226[16];
   undefined1 auVar230[16];
   undefined1 auVar233[16];
   undefined1 auVar234[16];
   undefined1 auVar236[16];
   undefined2 uVar264;
   uint uVar266;
   undefined1 auVar241[16];
   undefined1 auVar243[16];
   undefined1 auVar247[16];
   undefined1 auVar251[16];
   undefined1 auVar252[16];
   undefined1 auVar254[16];
   undefined1 auVar255[16];
   undefined1 auVar256[16];
   undefined1 auVar260[16];
   undefined1 auVar263[16];
   undefined1 auVar267[16];
   undefined1 auVar268[16];
   undefined1 auVar270[16];
   undefined1 auVar271[16];
   undefined1 auVar273[16];
   undefined1 auVar277[16];
   undefined1 auVar280[16];
   uint uVar281;
   ushort uVar285;
   ushort uVar286;
   ushort uVar287;
   undefined1 auVar282[16];
   undefined1 auVar284[16];
   undefined1 auVar288[16];
   ushort uVar289;
   ushort uVar290;
   ushort uVar291;
   ulong local_838[128];
   ulong local_438[129];
   long local_30;
   undefined1 auVar206[16];
   undefined1 auVar201[16];
   undefined1 auVar203[16];
   undefined1 auVar207[16];
   undefined1 auVar204[16];
   undefined1 auVar208[16];
   ushort uVar210;
   undefined1 auVar218[16];
   undefined1 auVar216[16];
   undefined1 auVar219[16];
   undefined1 auVar222[16];
   undefined1 auVar227[16];
   undefined1 auVar228[16];
   undefined1 auVar231[16];
   undefined1 auVar220[16];
   undefined1 auVar223[16];
   undefined1 auVar229[16];
   undefined1 auVar232[16];
   undefined1 auVar235[16];
   undefined1 auVar244[16];
   undefined1 auVar248[16];
   undefined1 auVar242[16];
   undefined1 auVar245[16];
   undefined1 auVar249[16];
   undefined1 auVar257[16];
   undefined1 auVar258[16];
   undefined1 auVar261[16];
   undefined1 auVar246[16];
   undefined1 auVar250[16];
   undefined1 auVar253[16];
   undefined1 auVar259[16];
   undefined1 auVar262[16];
   ushort uVar265;
   undefined1 auVar274[16];
   undefined1 auVar272[16];
   undefined1 auVar275[16];
   undefined1 auVar278[16];
   undefined1 auVar269[16];
   undefined1 auVar276[16];
   undefined1 auVar279[16];
   undefined1 auVar283[16];
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != 0) {
      uVar212 = *(uint*)( param_1 + 0x7c );
      lVar10 = *(long*)( param_1 + 0x68 );
      puVar188 = (undefined8*)( lVar10 + -0x400 + (ulong)uVar212 * 0x400 );
      puVar189 = local_838;
      for (lVar181 = 0x80; lVar181 != 0; lVar181 = lVar181 + -1) {
         *puVar189 = *puVar188;
         puVar188 = puVar188 + 1;
         puVar189 = puVar189 + 1;
      }

      uVar213 = *(uint*)( param_1 + 0x54 );
      if (1 < uVar213) {
         if (uVar213 < 4) {
            iVar191 = 1;
         }
 else {
            uVar183 = uVar212 * 2 - 1;
            iVar179 = 3;
            do {
               iVar191 = iVar179;
               lVar184 = 0;
               lVar190 = (ulong)uVar183 * 0x400 + lVar10;
               lVar181 = ( ulong )(uVar212 + uVar183) * 0x400 + lVar10;
               puVar189 = local_838;
               do {
                  puVar187 = (ulong*)( lVar190 + lVar184 );
                  puVar192 = (ulong*)( lVar190 + 0x10 + lVar184 );
                  uVar193 = *puVar187 ^ *puVar189;
                  uVar196 = puVar187[1] ^ puVar189[1];
                  uVar197 = *puVar192 ^ puVar189[2];
                  uVar199 = puVar192[1] ^ puVar189[3];
                  *puVar189 = uVar193;
                  puVar189[1] = uVar196;
                  puVar189[2] = uVar197;
                  puVar189[3] = uVar199;
                  puVar192 = (ulong*)( lVar181 + 0x10 + lVar184 );
                  uVar153 = puVar192[1];
                  puVar187 = (ulong*)( lVar181 + lVar184 );
                  uVar151 = *puVar187;
                  uVar152 = puVar187[1];
                  lVar184 = lVar184 + 0x20;
                  puVar189[2] = uVar197 ^ *puVar192;
                  puVar189[3] = uVar199 ^ uVar153;
                  *puVar189 = uVar193 ^ uVar151;
                  puVar189[1] = uVar196 ^ uVar152;
                  puVar189 = puVar189 + 4;
               }
 while ( lVar184 != 0x400 );
               uVar183 = uVar212 + uVar212 + uVar183;
               iVar179 = iVar191 + 2;
            }
 while ( ( uVar213 - 4 & 0xfffffffe ) + 5 != iVar191 + 2 );
         }

         uVar183 = iVar191 + 1;
         uVar180 = uVar183 * uVar212 - 1;
         while (true) {
            puVar187 = (ulong*)( (ulong)uVar180 * 0x400 + lVar10 );
            puVar189 = local_838;
            do {
               uVar151 = *puVar187;
               uVar152 = puVar187[1];
               puVar192 = puVar189 + 2;
               puVar187 = puVar187 + 2;
               *puVar189 = uVar151 ^ *puVar189;
               puVar189[1] = uVar152 ^ puVar189[1];
               puVar189 = puVar192;
            }
 while ( puVar192 != local_438 );
            uVar180 = uVar180 + uVar212;
            if (uVar213 <= uVar183) break;
            uVar183 = uVar183 + 1;
         }
;
      }

      pauVar182 = (undefined1(*) [16])local_438;
      pauVar185 = (undefined1(*) [16])local_838;
      do {
         auVar195 = *pauVar185;
         auVar211 = pauVar185[1];
         pauVar186 = pauVar185 + 8;
         auVar4 = pauVar185[2];
         auVar5 = pauVar185[4];
         auVar6 = pauVar185[6];
         uVar151 = CONCAT44(auVar211._0_4_, auVar195._8_4_);
         auVar201._0_10_ = (unkuint10)uVar151 << 0x20;
         uVar1 = *(undefined4*)pauVar185[3];
         uVar7 = *(undefined4*)( pauVar185[3] + 8 );
         auVar173._8_2_ = auVar195._10_2_;
         auVar173._0_8_ = uVar151;
         auVar173._10_2_ = auVar4._10_2_;
         auVar201._12_4_ = auVar173._8_4_;
         uVar289 = auVar4._8_2_;
         auVar201._10_2_ = uVar289;
         uVar210 = auVar195._8_2_;
         auVar167._4_2_ = uVar210;
         auVar167._0_4_ = auVar195._8_4_;
         auVar167._6_6_ = auVar201._10_6_;
         uVar239 = auVar4._2_2_;
         auVar267._2_8_ = auVar167._4_8_;
         auVar267._0_2_ = uVar239;
         auVar267._10_6_ = 0;
         auVar205._0_2_ = auVar195._0_2_;
         auVar200._12_4_ = 0;
         auVar200._0_12_ = SUB1612(auVar267 << 0x30, 4);
         auVar200 = auVar200 << 0x20;
         uVar290 = (ushort)uVar1;
         uVar291 = ( ushort )((uint)uVar1 >> 0x10);
         uVar2 = *(undefined4*)pauVar185[5];
         uVar8 = *(undefined4*)( pauVar185[5] + 8 );
         uVar151 = CONCAT44(uVar2, auVar5._8_4_);
         auVar242._0_10_ = (unkuint10)uVar151 << 0x20;
         auVar204._0_12_ = auVar200._0_12_;
         auVar204._12_2_ = uVar239;
         auVar204._14_2_ = uVar291;
         auVar203._12_4_ = auVar204._12_4_;
         auVar203._0_10_ = auVar200._0_10_;
         auVar203._10_2_ = auVar211._2_2_;
         auVar202._10_6_ = auVar203._10_6_;
         auVar202._0_8_ = auVar200._0_8_;
         auVar202._8_2_ = auVar195._2_2_;
         auVar154._2_8_ = auVar202._8_8_;
         auVar154._0_2_ = uVar290;
         auVar154._10_6_ = 0;
         auVar288._12_4_ = 0;
         auVar288._0_12_ = SUB1612(auVar154 << 0x30, 4);
         auVar288 = auVar288 << 0x20;
         uVar3 = *(undefined4*)pauVar185[7];
         uVar9 = *(undefined4*)( pauVar185[7] + 8 );
         auVar208._0_12_ = auVar288._0_12_;
         auVar208._12_2_ = uVar290;
         auVar208._14_2_ = (ushort)uVar7;
         auVar207._12_4_ = auVar208._12_4_;
         auVar207._0_10_ = auVar288._0_10_;
         auVar207._10_2_ = uVar289;
         auVar206._10_6_ = auVar207._10_6_;
         auVar206._0_8_ = auVar288._0_8_;
         auVar206._8_2_ = auVar4._0_2_;
         auVar205._8_8_ = auVar206._8_8_;
         auVar205._6_2_ = auVar211._8_2_;
         auVar205._4_2_ = auVar211._0_2_;
         auVar205._2_2_ = uVar210;
         auVar174._8_2_ = auVar5._10_2_;
         auVar174._0_8_ = uVar151;
         auVar174._10_2_ = auVar6._10_2_;
         auVar242._12_4_ = auVar174._8_4_;
         uVar285 = auVar6._8_2_;
         auVar242._10_2_ = uVar285;
         uVar265 = auVar5._8_2_;
         auVar168._4_2_ = uVar265;
         auVar168._0_4_ = auVar5._8_4_;
         auVar168._6_6_ = auVar242._10_6_;
         uVar238 = auVar6._2_2_;
         auVar155._2_8_ = auVar168._4_8_;
         auVar155._0_2_ = uVar238;
         auVar155._10_6_ = 0;
         auVar247._0_2_ = auVar5._0_2_;
         auVar241._12_4_ = 0;
         auVar241._0_12_ = SUB1612(auVar155 << 0x30, 4);
         auVar241 = auVar241 << 0x20;
         uVar286 = (ushort)uVar3;
         uVar237 = ( undefined2 )((uint)uVar2 >> 0x10);
         uVar287 = ( ushort )((uint)uVar3 >> 0x10);
         auVar246._0_12_ = auVar241._0_12_;
         auVar246._12_2_ = uVar238;
         auVar246._14_2_ = uVar287;
         auVar245._12_4_ = auVar246._12_4_;
         auVar245._0_10_ = auVar241._0_10_;
         auVar245._10_2_ = uVar237;
         auVar244._10_6_ = auVar245._10_6_;
         auVar244._0_8_ = auVar241._0_8_;
         auVar244._8_2_ = auVar5._2_2_;
         auVar156._2_8_ = auVar244._8_8_;
         auVar156._0_2_ = uVar286;
         auVar156._10_6_ = 0;
         auVar243._12_4_ = 0;
         auVar243._0_12_ = SUB1612(auVar156 << 0x30, 4);
         auVar243 = auVar243 << 0x20;
         auVar250._0_12_ = auVar243._0_12_;
         auVar250._12_2_ = uVar286;
         auVar250._14_2_ = (ushort)uVar9;
         auVar249._12_4_ = auVar250._12_4_;
         auVar249._0_10_ = auVar243._0_10_;
         auVar249._10_2_ = uVar285;
         auVar248._10_6_ = auVar249._10_6_;
         auVar248._0_8_ = auVar243._0_8_;
         auVar248._8_2_ = auVar6._0_2_;
         auVar247._8_8_ = auVar248._8_8_;
         auVar247._6_2_ = (ushort)uVar8;
         auVar247._4_2_ = (ushort)uVar2;
         auVar247._2_2_ = uVar265;
         auVar267 = __LC4 & auVar247;
         auVar251._0_2_ = auVar247._0_2_ >> 8;
         auVar251._2_2_ = uVar265 >> 8;
         auVar251._4_2_ = (ushort)uVar2 >> 8;
         auVar251._6_2_ = (ushort)uVar8 >> 8;
         auVar251._8_2_ = auVar6._0_2_ >> 8;
         auVar251._10_2_ = uVar285 >> 8;
         auVar251._12_2_ = uVar286 >> 8;
         auVar251._14_2_ = (ushort)uVar9 >> 8;
         auVar288 = __LC4 & auVar205;
         sVar12 = auVar288._0_2_;
         sVar17 = auVar288._2_2_;
         sVar22 = auVar288._4_2_;
         sVar28 = auVar288._6_2_;
         sVar36 = auVar288._8_2_;
         sVar43 = auVar288._10_2_;
         sVar51 = auVar288._12_2_;
         sVar59 = auVar288._14_2_;
         sVar67 = auVar267._0_2_;
         sVar75 = auVar267._2_2_;
         sVar83 = auVar267._4_2_;
         sVar91 = auVar267._6_2_;
         sVar99 = auVar267._8_2_;
         sVar107 = auVar267._10_2_;
         sVar115 = auVar267._12_2_;
         sVar123 = auVar267._14_2_;
         auVar209._0_2_ = auVar205._0_2_ >> 8;
         auVar209._2_2_ = uVar210 >> 8;
         auVar209._4_2_ = auVar211._0_2_ >> 8;
         auVar209._6_2_ = auVar211._8_2_ >> 8;
         auVar209._8_2_ = auVar4._0_2_ >> 8;
         auVar209._10_2_ = uVar289 >> 8;
         auVar209._12_2_ = uVar290 >> 8;
         auVar209._14_2_ = (ushort)uVar7 >> 8;
         auVar251 = auVar251 & __LC4;
         auVar209 = auVar209 & __LC4;
         uVar210 = auVar209._0_2_;
         uVar286 = auVar209._2_2_;
         uVar290 = auVar209._4_2_;
         uVar29 = auVar209._6_2_;
         sVar37 = auVar209._8_2_;
         sVar44 = auVar209._10_2_;
         sVar52 = auVar209._12_2_;
         sVar60 = auVar209._14_2_;
         uVar68 = auVar251._0_2_;
         uVar76 = auVar251._2_2_;
         uVar84 = auVar251._4_2_;
         uVar92 = auVar251._6_2_;
         sVar100 = auVar251._8_2_;
         sVar108 = auVar251._10_2_;
         sVar116 = auVar251._12_2_;
         sVar124 = auVar251._14_2_;
         auVar269._0_12_ = ZEXT212(uVar291) << 0x30;
         auVar269._12_2_ = uVar291;
         auVar269._14_2_ = (short)( (uint)uVar7 >> 0x10 );
         auVar268._12_4_ = auVar269._12_4_;
         auVar268._0_10_ = (unkuint10)uVar291 << 0x30;
         auVar268._10_2_ = auVar4._10_2_;
         auVar270._8_8_ = ( undefined8 )(CONCAT64(auVar268._10_6_, CONCAT22(uVar239, uVar291)) >> 0x10);
         auVar270._6_2_ = auVar211._10_2_;
         auVar270._4_2_ = auVar211._2_2_;
         auVar270._2_2_ = auVar195._10_2_;
         auVar270._0_2_ = auVar195._2_2_;
         auVar270 = auVar270 & __LC4;
         auVar253._0_12_ = ZEXT212(uVar287) << 0x30;
         auVar253._12_2_ = uVar287;
         auVar253._14_2_ = (short)( (uint)uVar9 >> 0x10 );
         auVar252._12_4_ = auVar253._12_4_;
         auVar252._0_10_ = (unkuint10)uVar287 << 0x30;
         auVar252._10_2_ = auVar6._10_2_;
         auVar254._8_8_ = ( undefined8 )(CONCAT64(auVar252._10_6_, CONCAT22(uVar238, uVar287)) >> 0x10);
         auVar254._6_2_ = (short)( (uint)uVar8 >> 0x10 );
         auVar254._4_2_ = uVar237;
         auVar254._2_2_ = auVar5._10_2_;
         auVar254._0_2_ = auVar5._2_2_;
         uVar285 = *(ushort*)( pauVar185[7] + 6 );
         auVar254 = auVar254 & __LC4;
         sVar13 = auVar270._0_2_;
         sVar18 = auVar270._2_2_;
         sVar23 = auVar270._4_2_;
         sVar30 = auVar270._6_2_;
         sVar38 = auVar270._8_2_;
         sVar45 = auVar270._10_2_;
         sVar53 = auVar270._12_2_;
         sVar61 = auVar270._14_2_;
         sVar69 = auVar254._0_2_;
         sVar77 = auVar254._2_2_;
         sVar85 = auVar254._4_2_;
         sVar93 = auVar254._6_2_;
         sVar101 = auVar254._8_2_;
         sVar109 = auVar254._10_2_;
         sVar117 = auVar254._12_2_;
         sVar125 = auVar254._14_2_;
         auVar194[1] = 0;
         auVar194[0] = auVar195[3];
         auVar214[1] = 0;
         auVar214[0] = auVar5[3];
         auVar131[0xc] = (char)( (uint)uVar1 >> 0x18 );
         auVar131._0_12_ = ZEXT712(0);
         auVar131[0xd] = 0;
         auVar131[0xe] = (char)( (uint)uVar7 >> 0x18 );
         auVar133[10] = auVar4[0xb];
         auVar133._0_10_ = (unkuint10)0;
         auVar133[0xb] = 0;
         auVar133._12_3_ = auVar131._12_3_;
         auVar137._10_5_ = auVar133._10_5_;
         auVar137._0_10_ = (unkuint10)auVar4[3] << 0x40;
         auVar141._8_7_ = auVar137._8_7_;
         auVar141._0_8_ = (ulong)auVar211[0xb] << 0x30;
         auVar145._6_9_ = auVar141._6_9_;
         auVar145._0_6_ = (uint6)auVar211[3] << 0x20;
         auVar194[2] = auVar195[0xb];
         auVar194[3] = 0;
         auVar194._4_11_ = auVar145._4_11_;
         auVar194[0xf] = 0;
         auVar194 = auVar194 & __LC4;
         auVar132[0xc] = (char)( (uint)uVar3 >> 0x18 );
         auVar132._0_12_ = ZEXT712(0);
         auVar132[0xd] = 0;
         auVar132[0xe] = (char)( (uint)uVar9 >> 0x18 );
         auVar134[10] = auVar6[0xb];
         auVar134._0_10_ = (unkuint10)0;
         auVar134[0xb] = 0;
         auVar134._12_3_ = auVar132._12_3_;
         auVar138._10_5_ = auVar134._10_5_;
         auVar138._0_10_ = (unkuint10)auVar6[3] << 0x40;
         auVar142._8_7_ = auVar138._8_7_;
         auVar142._0_8_ = ( ulong )(byte)((uint)uVar8 >> 0x18) << 0x30;
         auVar146._6_9_ = auVar142._6_9_;
         auVar146._0_6_ = ( uint6 )(byte)((uint)uVar2 >> 0x18) << 0x20;
         auVar214[2] = auVar5[0xb];
         auVar214[3] = 0;
         auVar214._4_11_ = auVar146._4_11_;
         auVar214[0xf] = 0;
         auVar214 = auVar214 & __LC4;
         uVar265 = auVar194._0_2_;
         uVar287 = auVar194._2_2_;
         uVar291 = auVar194._4_2_;
         uVar31 = auVar194._6_2_;
         sVar39 = auVar194._8_2_;
         sVar46 = auVar194._10_2_;
         sVar54 = auVar194._12_2_;
         sVar62 = auVar194._14_2_;
         uVar70 = auVar214._0_2_;
         uVar78 = auVar214._2_2_;
         uVar86 = auVar214._4_2_;
         uVar94 = auVar214._6_2_;
         sVar102 = auVar214._8_2_;
         sVar110 = auVar214._10_2_;
         sVar118 = auVar214._12_2_;
         sVar126 = auVar214._14_2_;
         uVar266 = auVar195._12_4_;
         uVar151 = CONCAT44(auVar211._4_4_, uVar266);
         auVar272._0_10_ = (unkuint10)uVar151 << 0x20;
         auVar175._8_2_ = auVar195._14_2_;
         auVar175._0_8_ = uVar151;
         auVar175._10_2_ = auVar4._14_2_;
         auVar272._12_4_ = auVar175._8_4_;
         auVar272._10_2_ = auVar4._12_2_;
         auVar169._4_2_ = auVar195._12_2_;
         auVar169._0_4_ = uVar266;
         auVar169._6_6_ = auVar272._10_6_;
         uVar237 = auVar4._6_2_;
         auVar157._2_8_ = auVar169._4_8_;
         auVar157._0_2_ = uVar237;
         auVar157._10_6_ = 0;
         auVar280._0_2_ = auVar195._4_2_;
         auVar271._12_4_ = 0;
         auVar271._0_12_ = SUB1612(auVar157 << 0x30, 4);
         auVar271 = auVar271 << 0x20;
         auVar276._0_12_ = auVar271._0_12_;
         auVar276._12_2_ = uVar237;
         auVar276._14_2_ = *(undefined2*)( pauVar185[3] + 6 );
         auVar275._12_4_ = auVar276._12_4_;
         auVar275._0_10_ = auVar271._0_10_;
         auVar275._10_2_ = auVar211._6_2_;
         auVar274._10_6_ = auVar275._10_6_;
         auVar274._0_8_ = auVar271._0_8_;
         auVar274._8_2_ = auVar195._6_2_;
         auVar158._2_8_ = auVar274._8_8_;
         auVar158._0_2_ = *(undefined2*)( pauVar185[3] + 4 );
         auVar158._10_6_ = 0;
         auVar273._12_4_ = 0;
         auVar273._0_12_ = SUB1612(auVar158 << 0x30, 4);
         auVar273 = auVar273 << 0x20;
         auVar200 = pauVar185[5];
         auVar279._0_12_ = auVar273._0_12_;
         auVar279._12_2_ = *(undefined2*)( pauVar185[3] + 4 );
         auVar279._14_2_ = *(undefined2*)( pauVar185[3] + 0xc );
         auVar278._12_4_ = auVar279._12_4_;
         auVar278._0_10_ = auVar273._0_10_;
         auVar278._10_2_ = auVar4._12_2_;
         auVar277._10_6_ = auVar278._10_6_;
         auVar277._0_8_ = auVar273._0_8_;
         auVar277._8_2_ = auVar4._4_2_;
         auVar280._8_8_ = auVar277._8_8_;
         auVar280._6_2_ = auVar211._12_2_;
         auVar280._4_2_ = auVar211._4_2_;
         auVar280._2_2_ = auVar195._12_2_;
         auVar280 = auVar280 & __LC4;
         uVar180 = auVar5._12_4_;
         uVar151 = CONCAT44(auVar200._4_4_, uVar180);
         auVar216._0_10_ = (unkuint10)uVar151 << 0x20;
         auVar176._8_2_ = auVar5._14_2_;
         auVar176._0_8_ = uVar151;
         auVar176._10_2_ = auVar6._14_2_;
         auVar216._12_4_ = auVar176._8_4_;
         auVar216._10_2_ = auVar6._12_2_;
         auVar170._4_2_ = auVar5._12_2_;
         auVar170._0_4_ = uVar180;
         auVar170._6_6_ = auVar216._10_6_;
         uVar264 = auVar6._6_2_;
         auVar159._2_8_ = auVar170._4_8_;
         auVar159._0_2_ = uVar264;
         auVar159._10_6_ = 0;
         auVar224._0_2_ = auVar5._4_2_;
         auVar215._12_4_ = 0;
         auVar215._0_12_ = SUB1612(auVar159 << 0x30, 4);
         auVar215 = auVar215 << 0x20;
         auVar220._0_12_ = auVar215._0_12_;
         auVar220._12_2_ = uVar264;
         auVar220._14_2_ = *(undefined2*)( pauVar185[7] + 6 );
         auVar219._12_4_ = auVar220._12_4_;
         auVar219._0_10_ = auVar215._0_10_;
         auVar219._10_2_ = auVar200._6_2_;
         auVar218._10_6_ = auVar219._10_6_;
         auVar218._0_8_ = auVar215._0_8_;
         auVar218._8_2_ = auVar5._6_2_;
         auVar160._2_8_ = auVar218._8_8_;
         auVar160._0_2_ = *(undefined2*)( pauVar185[7] + 4 );
         auVar160._10_6_ = 0;
         auVar217._12_4_ = 0;
         auVar217._0_12_ = SUB1612(auVar160 << 0x30, 4);
         auVar217 = auVar217 << 0x20;
         auVar223._0_12_ = auVar217._0_12_;
         auVar223._12_2_ = *(undefined2*)( pauVar185[7] + 4 );
         auVar223._14_2_ = *(undefined2*)( pauVar185[7] + 0xc );
         auVar222._12_4_ = auVar223._12_4_;
         auVar222._0_10_ = auVar217._0_10_;
         auVar222._10_2_ = auVar6._12_2_;
         auVar221._10_6_ = auVar222._10_6_;
         auVar221._0_8_ = auVar217._0_8_;
         auVar221._8_2_ = auVar6._4_2_;
         auVar224._8_8_ = auVar221._8_8_;
         auVar224._6_2_ = auVar200._12_2_;
         auVar224._4_2_ = auVar200._4_2_;
         auVar224._2_2_ = auVar5._12_2_;
         auVar224 = auVar224 & __LC4;
         sVar14 = auVar280._0_2_;
         sVar19 = auVar280._2_2_;
         sVar24 = auVar280._4_2_;
         sVar32 = auVar280._6_2_;
         sVar40 = auVar280._8_2_;
         sVar47 = auVar280._10_2_;
         sVar55 = auVar280._12_2_;
         sVar63 = auVar280._14_2_;
         sVar71 = auVar224._0_2_;
         sVar79 = auVar224._2_2_;
         sVar87 = auVar224._4_2_;
         sVar95 = auVar224._6_2_;
         sVar103 = auVar224._8_2_;
         sVar111 = auVar224._10_2_;
         sVar119 = auVar224._12_2_;
         sVar127 = auVar224._14_2_;
         uVar212 = auVar211._4_4_ >> 8;
         uVar266 = uVar266 >> 8;
         auVar255._0_10_ = (unkuint10)CONCAT44(uVar212, uVar266) << 0x20;
         uVar281 = *(uint*)( pauVar185[3] + 4 ) >> 8;
         uVar213 = auVar4._4_4_ >> 8;
         uVar183 = auVar4._12_4_ >> 8;
         auVar177._8_2_ = (short)( uVar266 >> 0x10 );
         auVar177._0_8_ = CONCAT44(uVar212, uVar266);
         auVar177._10_2_ = (short)( uVar183 >> 0x10 );
         uVar239 = (undefined2)uVar183;
         auVar255._12_4_ = auVar177._8_4_;
         auVar255._10_2_ = uVar239;
         auVar171._4_2_ = (short)uVar266;
         auVar171._0_4_ = uVar266;
         auVar171._6_6_ = auVar255._10_6_;
         uVar238 = ( undefined2 )(uVar213 >> 0x10);
         auVar162._2_8_ = auVar171._4_8_;
         auVar162._0_2_ = uVar238;
         auVar162._10_6_ = 0;
         auVar263._0_2_ = auVar195._5_2_;
         auVar161._12_4_ = 0;
         auVar161._0_12_ = SUB1612(auVar162 << 0x30, 4);
         uVar240 = (undefined2)uVar281;
         auVar259._0_12_ = SUB1612(auVar161 << 0x20, 0);
         auVar259._12_2_ = uVar238;
         auVar259._14_2_ = (short)( uVar281 >> 0x10 );
         auVar258._12_4_ = auVar259._12_4_;
         auVar258._0_10_ = SUB1610(auVar161 << 0x20, 0);
         auVar258._10_2_ = (short)( uVar212 >> 0x10 );
         auVar257._10_6_ = auVar258._10_6_;
         auVar257._0_10_ = (unkuint10)auVar195[7] << 0x40;
         auVar163._2_8_ = auVar257._8_8_;
         auVar163._0_2_ = uVar240;
         auVar163._10_6_ = 0;
         auVar256._12_4_ = 0;
         auVar256._0_12_ = SUB1612(auVar163 << 0x30, 4);
         auVar256 = auVar256 << 0x20;
         auVar262._0_12_ = auVar256._0_12_;
         auVar262._12_2_ = uVar240;
         auVar262._14_2_ = (short)( *(uint*)( pauVar185[3] + 0xc ) >> 8 );
         auVar261._12_4_ = auVar262._12_4_;
         auVar261._0_10_ = auVar256._0_10_;
         auVar261._10_2_ = uVar239;
         auVar260._10_6_ = auVar261._10_6_;
         auVar260._0_8_ = auVar256._0_8_;
         auVar260._8_2_ = (short)uVar213;
         auVar263._8_8_ = auVar260._8_8_;
         auVar263._6_2_ = (short)( auVar211._12_4_ >> 8 );
         auVar263._4_2_ = (short)uVar212;
         auVar263._2_2_ = (short)uVar266;
         auVar263 = auVar263 & __LC4;
         uVar212 = *(uint*)( pauVar185[5] + 4 ) >> 8;
         uVar180 = uVar180 >> 8;
         auVar225._0_10_ = (unkuint10)CONCAT44(uVar212, uVar180) << 0x20;
         uVar266 = *(uint*)( pauVar185[7] + 4 ) >> 8;
         uVar213 = auVar6._4_4_ >> 8;
         uVar183 = auVar6._12_4_ >> 8;
         auVar178._8_2_ = (short)( uVar180 >> 0x10 );
         auVar178._0_8_ = CONCAT44(uVar212, uVar180);
         auVar178._10_2_ = (short)( uVar183 >> 0x10 );
         auVar225._12_4_ = auVar178._8_4_;
         uVar239 = (undefined2)uVar183;
         auVar225._10_2_ = uVar239;
         auVar172._4_2_ = (short)uVar180;
         auVar172._0_4_ = uVar180;
         auVar172._6_6_ = auVar225._10_6_;
         uVar238 = ( undefined2 )(uVar213 >> 0x10);
         auVar165._2_8_ = auVar172._4_8_;
         auVar165._0_2_ = uVar238;
         auVar165._10_6_ = 0;
         auVar233._0_2_ = auVar5._5_2_;
         auVar164._12_4_ = 0;
         auVar164._0_12_ = SUB1612(auVar165 << 0x30, 4);
         uVar240 = (undefined2)uVar266;
         auVar229._0_12_ = SUB1612(auVar164 << 0x20, 0);
         auVar229._12_2_ = uVar238;
         auVar229._14_2_ = (short)( uVar266 >> 0x10 );
         auVar228._12_4_ = auVar229._12_4_;
         auVar228._0_10_ = SUB1610(auVar164 << 0x20, 0);
         auVar228._10_2_ = (short)( uVar212 >> 0x10 );
         auVar227._10_6_ = auVar228._10_6_;
         auVar227._0_10_ = (unkuint10)auVar5[7] << 0x40;
         auVar166._2_8_ = auVar227._8_8_;
         auVar166._0_2_ = uVar240;
         auVar166._10_6_ = 0;
         auVar226._12_4_ = 0;
         auVar226._0_12_ = SUB1612(auVar166 << 0x30, 4);
         auVar226 = auVar226 << 0x20;
         uVar289 = *(ushort*)( pauVar185[3] + 6 );
         auVar232._0_12_ = auVar226._0_12_;
         auVar232._12_2_ = uVar240;
         auVar232._14_2_ = (short)( *(uint*)( pauVar185[7] + 0xc ) >> 8 );
         auVar231._12_4_ = auVar232._12_4_;
         auVar231._0_10_ = auVar226._0_10_;
         auVar231._10_2_ = uVar239;
         auVar230._10_6_ = auVar231._10_6_;
         auVar230._0_8_ = auVar226._0_8_;
         auVar230._8_2_ = (short)uVar213;
         auVar233._8_8_ = auVar230._8_8_;
         auVar233._6_2_ = (short)( *(uint*)( pauVar185[5] + 0xc ) >> 8 );
         auVar233._4_2_ = (short)uVar212;
         auVar233._2_2_ = (short)uVar180;
         auVar233 = auVar233 & __LC4;
         sVar15 = auVar263._0_2_;
         sVar20 = auVar263._2_2_;
         sVar25 = auVar263._4_2_;
         sVar33 = auVar263._6_2_;
         sVar41 = auVar263._8_2_;
         sVar48 = auVar263._10_2_;
         sVar56 = auVar263._12_2_;
         sVar64 = auVar263._14_2_;
         sVar72 = auVar233._0_2_;
         sVar80 = auVar233._2_2_;
         sVar88 = auVar233._4_2_;
         sVar96 = auVar233._6_2_;
         sVar104 = auVar233._8_2_;
         sVar112 = auVar233._10_2_;
         sVar120 = auVar233._12_2_;
         sVar128 = auVar233._14_2_;
         auVar235._0_12_ = ZEXT212(uVar289) << 0x30;
         auVar235._12_2_ = uVar289;
         auVar235._14_2_ = *(undefined2*)( pauVar185[3] + 0xe );
         auVar234._12_4_ = auVar235._12_4_;
         auVar234._0_10_ = (unkuint10)uVar289 << 0x30;
         auVar234._10_2_ = auVar4._14_2_;
         auVar236._8_8_ = ( undefined8 )(CONCAT64(auVar234._10_6_, CONCAT22(uVar237, uVar289)) >> 0x10);
         auVar236._6_2_ = auVar211._14_2_;
         auVar236._4_2_ = auVar211._6_2_;
         auVar236._2_2_ = auVar195._14_2_;
         auVar236._0_2_ = auVar195._6_2_;
         auVar236 = auVar236 & __LC4;
         auVar283._0_12_ = ZEXT212(uVar285) << 0x30;
         auVar283._12_2_ = uVar285;
         auVar283._14_2_ = *(undefined2*)( pauVar185[7] + 0xe );
         auVar282._12_4_ = auVar283._12_4_;
         auVar282._0_10_ = (unkuint10)uVar285 << 0x30;
         auVar282._10_2_ = auVar6._14_2_;
         auVar284._8_8_ = ( undefined8 )(CONCAT64(auVar282._10_6_, CONCAT22(uVar264, uVar285)) >> 0x10);
         auVar284._6_2_ = *(undefined2*)( pauVar185[5] + 0xe );
         auVar284._4_2_ = *(undefined2*)( pauVar185[5] + 6 );
         auVar284._2_2_ = auVar5._14_2_;
         auVar284._0_2_ = auVar5._6_2_;
         auVar284 = auVar284 & __LC4;
         sVar16 = auVar236._0_2_;
         sVar21 = auVar236._2_2_;
         sVar26 = auVar236._4_2_;
         sVar34 = auVar236._6_2_;
         sVar42 = auVar236._8_2_;
         sVar49 = auVar236._10_2_;
         sVar57 = auVar236._12_2_;
         sVar65 = auVar236._14_2_;
         sVar73 = auVar284._0_2_;
         sVar81 = auVar284._2_2_;
         sVar89 = auVar284._4_2_;
         sVar97 = auVar284._6_2_;
         sVar105 = auVar284._8_2_;
         sVar113 = auVar284._10_2_;
         cVar11 = ( 0 < sVar113 ) * ( sVar113 < 0x100 ) * auVar284[10] - ( 0xff < sVar113 );
         sVar121 = auVar284._12_2_;
         sVar129 = auVar284._14_2_;
         auVar198[1] = 0;
         auVar198[0] = auVar195[7];
         auVar135[0xc] = pauVar185[3][7];
         auVar135._0_12_ = ZEXT712(0);
         auVar135[0xd] = 0;
         auVar135[0xe] = pauVar185[3][0xf];
         auVar139[10] = auVar4[0xf];
         auVar139._0_10_ = (unkuint10)0;
         auVar139[0xb] = 0;
         auVar139._12_3_ = auVar135._12_3_;
         auVar143._10_5_ = auVar139._10_5_;
         auVar143._0_10_ = (unkuint10)auVar4[7] << 0x40;
         auVar147._8_7_ = auVar143._8_7_;
         auVar147._0_8_ = (ulong)auVar211[0xf] << 0x30;
         auVar149._6_9_ = auVar147._6_9_;
         auVar149._0_6_ = (uint6)auVar211[7] << 0x20;
         auVar198[2] = auVar195[0xf];
         auVar198[3] = 0;
         auVar198._4_11_ = auVar149._4_11_;
         auVar198[0xf] = 0;
         auVar198 = auVar198 & __LC4;
         auVar211[1] = 0;
         auVar211[0] = auVar5[7];
         auVar136[0xc] = pauVar185[7][7];
         auVar136._0_12_ = ZEXT712(0);
         auVar136[0xd] = 0;
         auVar136[0xe] = pauVar185[7][0xf];
         auVar140[10] = auVar6[0xf];
         auVar140._0_10_ = (unkuint10)0;
         auVar140[0xb] = 0;
         auVar140._12_3_ = auVar136._12_3_;
         auVar144._10_5_ = auVar140._10_5_;
         auVar144._0_10_ = (unkuint10)auVar6[7] << 0x40;
         auVar148._8_7_ = auVar144._8_7_;
         auVar148._0_8_ = (ulong)(byte)pauVar185[5][0xf] << 0x30;
         auVar150._6_9_ = auVar148._6_9_;
         auVar150._0_6_ = (uint6)(byte)pauVar185[5][7] << 0x20;
         auVar211[2] = auVar5[0xf];
         auVar211[3] = 0;
         auVar211._4_11_ = auVar150._4_11_;
         auVar211[0xf] = 0;
         auVar211 = auVar211 & __LC4;
         uVar285 = auVar198._0_2_;
         uVar289 = auVar198._2_2_;
         uVar27 = auVar198._4_2_;
         uVar35 = auVar198._6_2_;
         sVar113 = auVar198._8_2_;
         sVar50 = auVar198._10_2_;
         sVar58 = auVar198._12_2_;
         sVar66 = auVar198._14_2_;
         uVar74 = auVar211._0_2_;
         uVar82 = auVar211._2_2_;
         uVar90 = auVar211._4_2_;
         uVar98 = auVar211._6_2_;
         sVar106 = auVar211._8_2_;
         sVar114 = auVar211._10_2_;
         sVar122 = auVar211._12_2_;
         sVar130 = auVar211._14_2_;
         ( *pauVar182 )[0] = ( 0 < sVar12 ) * ( sVar12 < 0x100 ) * auVar288[0] - ( 0xff < sVar12 );
         ( *pauVar182 )[1] = ( uVar210 != 0 ) * ( uVar210 < 0x100 ) * auVar209[0] - ( 0xff < uVar210 );
         ( *pauVar182 )[2] = ( 0 < sVar13 ) * ( sVar13 < 0x100 ) * auVar270[0] - ( 0xff < sVar13 );
         ( *pauVar182 )[3] = ( uVar265 != 0 ) * ( uVar265 < 0x100 ) * auVar194[0] - ( 0xff < uVar265 );
         ( *pauVar182 )[4] = ( 0 < sVar14 ) * ( sVar14 < 0x100 ) * auVar280[0] - ( 0xff < sVar14 );
         ( *pauVar182 )[5] = ( 0 < sVar15 ) * ( sVar15 < 0x100 ) * auVar263[0] - ( 0xff < sVar15 );
         ( *pauVar182 )[6] = ( 0 < sVar16 ) * ( sVar16 < 0x100 ) * auVar236[0] - ( 0xff < sVar16 );
         ( *pauVar182 )[7] = ( uVar285 != 0 ) * ( uVar285 < 0x100 ) * auVar198[0] - ( 0xff < uVar285 );
         ( *pauVar182 )[8] = ( 0 < sVar17 ) * ( sVar17 < 0x100 ) * auVar288[2] - ( 0xff < sVar17 );
         ( *pauVar182 )[9] = ( uVar286 != 0 ) * ( uVar286 < 0x100 ) * auVar209[2] - ( 0xff < uVar286 );
         ( *pauVar182 )[10] = ( 0 < sVar18 ) * ( sVar18 < 0x100 ) * auVar270[2] - ( 0xff < sVar18 );
         ( *pauVar182 )[0xb] = ( uVar287 != 0 ) * ( uVar287 < 0x100 ) * auVar194[2] - ( 0xff < uVar287 );
         ( *pauVar182 )[0xc] = ( 0 < sVar19 ) * ( sVar19 < 0x100 ) * auVar280[2] - ( 0xff < sVar19 );
         ( *pauVar182 )[0xd] = ( 0 < sVar20 ) * ( sVar20 < 0x100 ) * auVar263[2] - ( 0xff < sVar20 );
         ( *pauVar182 )[0xe] = ( 0 < sVar21 ) * ( sVar21 < 0x100 ) * auVar236[2] - ( 0xff < sVar21 );
         ( *pauVar182 )[0xf] = ( uVar289 != 0 ) * ( uVar289 < 0x100 ) * auVar198[2] - ( 0xff < uVar289 );
         pauVar182[1][0] = ( 0 < sVar22 ) * ( sVar22 < 0x100 ) * auVar288[4] - ( 0xff < sVar22 );
         pauVar182[1][1] = ( uVar290 != 0 ) * ( uVar290 < 0x100 ) * auVar209[4] - ( 0xff < uVar290 );
         pauVar182[1][2] = ( 0 < sVar23 ) * ( sVar23 < 0x100 ) * auVar270[4] - ( 0xff < sVar23 );
         pauVar182[1][3] = ( uVar291 != 0 ) * ( uVar291 < 0x100 ) * auVar194[4] - ( 0xff < uVar291 );
         pauVar182[1][4] = ( 0 < sVar24 ) * ( sVar24 < 0x100 ) * auVar280[4] - ( 0xff < sVar24 );
         pauVar182[1][5] = ( 0 < sVar25 ) * ( sVar25 < 0x100 ) * auVar263[4] - ( 0xff < sVar25 );
         pauVar182[1][6] = ( 0 < sVar26 ) * ( sVar26 < 0x100 ) * auVar236[4] - ( 0xff < sVar26 );
         pauVar182[1][7] = ( uVar27 != 0 ) * ( uVar27 < 0x100 ) * auVar198[4] - ( 0xff < uVar27 );
         pauVar182[1][8] = ( 0 < sVar28 ) * ( sVar28 < 0x100 ) * auVar288[6] - ( 0xff < sVar28 );
         pauVar182[1][9] = ( uVar29 != 0 ) * ( uVar29 < 0x100 ) * auVar209[6] - ( 0xff < uVar29 );
         pauVar182[1][10] = ( 0 < sVar30 ) * ( sVar30 < 0x100 ) * auVar270[6] - ( 0xff < sVar30 );
         pauVar182[1][0xb] = ( uVar31 != 0 ) * ( uVar31 < 0x100 ) * auVar194[6] - ( 0xff < uVar31 );
         pauVar182[1][0xc] = ( 0 < sVar32 ) * ( sVar32 < 0x100 ) * auVar280[6] - ( 0xff < sVar32 );
         pauVar182[1][0xd] = ( 0 < sVar33 ) * ( sVar33 < 0x100 ) * auVar263[6] - ( 0xff < sVar33 );
         pauVar182[1][0xe] = ( 0 < sVar34 ) * ( sVar34 < 0x100 ) * auVar236[6] - ( 0xff < sVar34 );
         pauVar182[1][0xf] = ( uVar35 != 0 ) * ( uVar35 < 0x100 ) * auVar198[6] - ( 0xff < uVar35 );
         pauVar182[2][0] = ( 0 < sVar36 ) * ( sVar36 < 0x100 ) * auVar288[8] - ( 0xff < sVar36 );
         pauVar182[2][1] = ( 0 < sVar37 ) * ( sVar37 < 0x100 ) * auVar209[8] - ( 0xff < sVar37 );
         pauVar182[2][2] = ( 0 < sVar38 ) * ( sVar38 < 0x100 ) * auVar270[8] - ( 0xff < sVar38 );
         pauVar182[2][3] = ( 0 < sVar39 ) * ( sVar39 < 0x100 ) * auVar194[8] - ( 0xff < sVar39 );
         pauVar182[2][4] = ( 0 < sVar40 ) * ( sVar40 < 0x100 ) * auVar280[8] - ( 0xff < sVar40 );
         pauVar182[2][5] = ( 0 < sVar41 ) * ( sVar41 < 0x100 ) * auVar263[8] - ( 0xff < sVar41 );
         pauVar182[2][6] = ( 0 < sVar42 ) * ( sVar42 < 0x100 ) * auVar236[8] - ( 0xff < sVar42 );
         pauVar182[2][7] = ( 0 < sVar113 ) * ( sVar113 < 0x100 ) * auVar198[8] - ( 0xff < sVar113 );
         pauVar182[2][8] = ( 0 < sVar43 ) * ( sVar43 < 0x100 ) * auVar288[10] - ( 0xff < sVar43 );
         pauVar182[2][9] = ( 0 < sVar44 ) * ( sVar44 < 0x100 ) * auVar209[10] - ( 0xff < sVar44 );
         pauVar182[2][10] = ( 0 < sVar45 ) * ( sVar45 < 0x100 ) * auVar270[10] - ( 0xff < sVar45 );
         pauVar182[2][0xb] = ( 0 < sVar46 ) * ( sVar46 < 0x100 ) * auVar194[10] - ( 0xff < sVar46 );
         pauVar182[2][0xc] = ( 0 < sVar47 ) * ( sVar47 < 0x100 ) * auVar280[10] - ( 0xff < sVar47 );
         pauVar182[2][0xd] = ( 0 < sVar48 ) * ( sVar48 < 0x100 ) * auVar263[10] - ( 0xff < sVar48 );
         pauVar182[2][0xe] = ( 0 < sVar49 ) * ( sVar49 < 0x100 ) * auVar236[10] - ( 0xff < sVar49 );
         pauVar182[2][0xf] = ( 0 < sVar50 ) * ( sVar50 < 0x100 ) * auVar198[10] - ( 0xff < sVar50 );
         pauVar182[3][0] = ( 0 < sVar51 ) * ( sVar51 < 0x100 ) * auVar288[0xc] - ( 0xff < sVar51 );
         pauVar182[3][1] = ( 0 < sVar52 ) * ( sVar52 < 0x100 ) * auVar209[0xc] - ( 0xff < sVar52 );
         pauVar182[3][2] = ( 0 < sVar53 ) * ( sVar53 < 0x100 ) * auVar270[0xc] - ( 0xff < sVar53 );
         pauVar182[3][3] = ( 0 < sVar54 ) * ( sVar54 < 0x100 ) * auVar194[0xc] - ( 0xff < sVar54 );
         pauVar182[3][4] = ( 0 < sVar55 ) * ( sVar55 < 0x100 ) * auVar280[0xc] - ( 0xff < sVar55 );
         pauVar182[3][5] = ( 0 < sVar56 ) * ( sVar56 < 0x100 ) * auVar263[0xc] - ( 0xff < sVar56 );
         pauVar182[3][6] = ( 0 < sVar57 ) * ( sVar57 < 0x100 ) * auVar236[0xc] - ( 0xff < sVar57 );
         pauVar182[3][7] = ( 0 < sVar58 ) * ( sVar58 < 0x100 ) * auVar198[0xc] - ( 0xff < sVar58 );
         pauVar182[3][8] = ( 0 < sVar59 ) * ( sVar59 < 0x100 ) * auVar288[0xe] - ( 0xff < sVar59 );
         pauVar182[3][9] = ( 0 < sVar60 ) * ( sVar60 < 0x100 ) * auVar209[0xe] - ( 0xff < sVar60 );
         pauVar182[3][10] = ( 0 < sVar61 ) * ( sVar61 < 0x100 ) * auVar270[0xe] - ( 0xff < sVar61 );
         pauVar182[3][0xb] = ( 0 < sVar62 ) * ( sVar62 < 0x100 ) * auVar194[0xe] - ( 0xff < sVar62 );
         pauVar182[3][0xc] = ( 0 < sVar63 ) * ( sVar63 < 0x100 ) * auVar280[0xe] - ( 0xff < sVar63 );
         pauVar182[3][0xd] = ( 0 < sVar64 ) * ( sVar64 < 0x100 ) * auVar263[0xe] - ( 0xff < sVar64 );
         pauVar182[3][0xe] = ( 0 < sVar65 ) * ( sVar65 < 0x100 ) * auVar236[0xe] - ( 0xff < sVar65 );
         pauVar182[3][0xf] = ( 0 < sVar66 ) * ( sVar66 < 0x100 ) * auVar198[0xe] - ( 0xff < sVar66 );
         pauVar182[4][0] = ( 0 < sVar67 ) * ( sVar67 < 0x100 ) * auVar267[0] - ( 0xff < sVar67 );
         pauVar182[4][1] = ( uVar68 != 0 ) * ( uVar68 < 0x100 ) * auVar251[0] - ( 0xff < uVar68 );
         pauVar182[4][2] = ( 0 < sVar69 ) * ( sVar69 < 0x100 ) * auVar254[0] - ( 0xff < sVar69 );
         pauVar182[4][3] = ( uVar70 != 0 ) * ( uVar70 < 0x100 ) * auVar214[0] - ( 0xff < uVar70 );
         pauVar182[4][4] = ( 0 < sVar71 ) * ( sVar71 < 0x100 ) * auVar224[0] - ( 0xff < sVar71 );
         pauVar182[4][5] = ( 0 < sVar72 ) * ( sVar72 < 0x100 ) * auVar233[0] - ( 0xff < sVar72 );
         pauVar182[4][6] = ( 0 < sVar73 ) * ( sVar73 < 0x100 ) * auVar284[0] - ( 0xff < sVar73 );
         pauVar182[4][7] = ( uVar74 != 0 ) * ( uVar74 < 0x100 ) * auVar211[0] - ( 0xff < uVar74 );
         pauVar182[4][8] = ( 0 < sVar75 ) * ( sVar75 < 0x100 ) * auVar267[2] - ( 0xff < sVar75 );
         pauVar182[4][9] = ( uVar76 != 0 ) * ( uVar76 < 0x100 ) * auVar251[2] - ( 0xff < uVar76 );
         pauVar182[4][10] = ( 0 < sVar77 ) * ( sVar77 < 0x100 ) * auVar254[2] - ( 0xff < sVar77 );
         pauVar182[4][0xb] = ( uVar78 != 0 ) * ( uVar78 < 0x100 ) * auVar214[2] - ( 0xff < uVar78 );
         pauVar182[4][0xc] = ( 0 < sVar79 ) * ( sVar79 < 0x100 ) * auVar224[2] - ( 0xff < sVar79 );
         pauVar182[4][0xd] = ( 0 < sVar80 ) * ( sVar80 < 0x100 ) * auVar233[2] - ( 0xff < sVar80 );
         pauVar182[4][0xe] = ( 0 < sVar81 ) * ( sVar81 < 0x100 ) * auVar284[2] - ( 0xff < sVar81 );
         pauVar182[4][0xf] = ( uVar82 != 0 ) * ( uVar82 < 0x100 ) * auVar211[2] - ( 0xff < uVar82 );
         auVar195._8_8_ = ( undefined8 )(CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(( 0 < sVar114 ) * ( sVar114 < 0x100 ) * auVar211[10] - ( 0xff < sVar114 ), cVar11), ( 0 < sVar112 ) * ( sVar112 < 0x100 ) * auVar233[10] - ( 0xff < sVar112 )), ( 0 < sVar111 ) * ( sVar111 < 0x100 ) * auVar224[10] - ( 0xff < sVar111 )), ( 0 < sVar110 ) * ( sVar110 < 0x100 ) * auVar214[10] - ( 0xff < sVar110 )), ( 0 < sVar109 ) * ( sVar109 < 0x100 ) * auVar254[10] - ( 0xff < sVar109 )), ( 0 < sVar108 ) * ( sVar108 < 0x100 ) * auVar251[10] - ( 0xff < sVar108 )), CONCAT11(( 0 < sVar107 ) * ( sVar107 < 0x100 ) * auVar267[10] - ( 0xff < sVar107 ), cVar11)) >> 8);
         auVar195[7] = ( 0 < sVar106 ) * ( sVar106 < 0x100 ) * auVar211[8] - ( 0xff < sVar106 );
         auVar195[6] = ( 0 < sVar105 ) * ( sVar105 < 0x100 ) * auVar284[8] - ( 0xff < sVar105 );
         auVar195[5] = ( 0 < sVar104 ) * ( sVar104 < 0x100 ) * auVar233[8] - ( 0xff < sVar104 );
         auVar195[4] = ( 0 < sVar103 ) * ( sVar103 < 0x100 ) * auVar224[8] - ( 0xff < sVar103 );
         auVar195[3] = ( 0 < sVar102 ) * ( sVar102 < 0x100 ) * auVar214[8] - ( 0xff < sVar102 );
         auVar195[2] = ( 0 < sVar101 ) * ( sVar101 < 0x100 ) * auVar254[8] - ( 0xff < sVar101 );
         auVar195[1] = ( 0 < sVar100 ) * ( sVar100 < 0x100 ) * auVar251[8] - ( 0xff < sVar100 );
         auVar195[0] = ( 0 < sVar99 ) * ( sVar99 < 0x100 ) * auVar267[8] - ( 0xff < sVar99 );
         pauVar182[5][0] = ( 0 < sVar83 ) * ( sVar83 < 0x100 ) * auVar267[4] - ( 0xff < sVar83 );
         pauVar182[5][1] = ( uVar84 != 0 ) * ( uVar84 < 0x100 ) * auVar251[4] - ( 0xff < uVar84 );
         pauVar182[5][2] = ( 0 < sVar85 ) * ( sVar85 < 0x100 ) * auVar254[4] - ( 0xff < sVar85 );
         pauVar182[5][3] = ( uVar86 != 0 ) * ( uVar86 < 0x100 ) * auVar214[4] - ( 0xff < uVar86 );
         pauVar182[5][4] = ( 0 < sVar87 ) * ( sVar87 < 0x100 ) * auVar224[4] - ( 0xff < sVar87 );
         pauVar182[5][5] = ( 0 < sVar88 ) * ( sVar88 < 0x100 ) * auVar233[4] - ( 0xff < sVar88 );
         pauVar182[5][6] = ( 0 < sVar89 ) * ( sVar89 < 0x100 ) * auVar284[4] - ( 0xff < sVar89 );
         pauVar182[5][7] = ( uVar90 != 0 ) * ( uVar90 < 0x100 ) * auVar211[4] - ( 0xff < uVar90 );
         pauVar182[5][8] = ( 0 < sVar91 ) * ( sVar91 < 0x100 ) * auVar267[6] - ( 0xff < sVar91 );
         pauVar182[5][9] = ( uVar92 != 0 ) * ( uVar92 < 0x100 ) * auVar251[6] - ( 0xff < uVar92 );
         pauVar182[5][10] = ( 0 < sVar93 ) * ( sVar93 < 0x100 ) * auVar254[6] - ( 0xff < sVar93 );
         pauVar182[5][0xb] = ( uVar94 != 0 ) * ( uVar94 < 0x100 ) * auVar214[6] - ( 0xff < uVar94 );
         pauVar182[5][0xc] = ( 0 < sVar95 ) * ( sVar95 < 0x100 ) * auVar224[6] - ( 0xff < sVar95 );
         pauVar182[5][0xd] = ( 0 < sVar96 ) * ( sVar96 < 0x100 ) * auVar233[6] - ( 0xff < sVar96 );
         pauVar182[5][0xe] = ( 0 < sVar97 ) * ( sVar97 < 0x100 ) * auVar284[6] - ( 0xff < sVar97 );
         pauVar182[5][0xf] = ( uVar98 != 0 ) * ( uVar98 < 0x100 ) * auVar211[6] - ( 0xff < uVar98 );
         pauVar182[6] = auVar195;
         pauVar182[7][0] = ( 0 < sVar115 ) * ( sVar115 < 0x100 ) * auVar267[0xc] - ( 0xff < sVar115 );
         pauVar182[7][1] = ( 0 < sVar116 ) * ( sVar116 < 0x100 ) * auVar251[0xc] - ( 0xff < sVar116 );
         pauVar182[7][2] = ( 0 < sVar117 ) * ( sVar117 < 0x100 ) * auVar254[0xc] - ( 0xff < sVar117 );
         pauVar182[7][3] = ( 0 < sVar118 ) * ( sVar118 < 0x100 ) * auVar214[0xc] - ( 0xff < sVar118 );
         pauVar182[7][4] = ( 0 < sVar119 ) * ( sVar119 < 0x100 ) * auVar224[0xc] - ( 0xff < sVar119 );
         pauVar182[7][5] = ( 0 < sVar120 ) * ( sVar120 < 0x100 ) * auVar233[0xc] - ( 0xff < sVar120 );
         pauVar182[7][6] = ( 0 < sVar121 ) * ( sVar121 < 0x100 ) * auVar284[0xc] - ( 0xff < sVar121 );
         pauVar182[7][7] = ( 0 < sVar122 ) * ( sVar122 < 0x100 ) * auVar211[0xc] - ( 0xff < sVar122 );
         pauVar182[7][8] = ( 0 < sVar123 ) * ( sVar123 < 0x100 ) * auVar267[0xe] - ( 0xff < sVar123 );
         pauVar182[7][9] = ( 0 < sVar124 ) * ( sVar124 < 0x100 ) * auVar251[0xe] - ( 0xff < sVar124 );
         pauVar182[7][10] = ( 0 < sVar125 ) * ( sVar125 < 0x100 ) * auVar254[0xe] - ( 0xff < sVar125 );
         pauVar182[7][0xb] = ( 0 < sVar126 ) * ( sVar126 < 0x100 ) * auVar214[0xe] - ( 0xff < sVar126 );
         pauVar182[7][0xc] = ( 0 < sVar127 ) * ( sVar127 < 0x100 ) * auVar224[0xe] - ( 0xff < sVar127 );
         pauVar182[7][0xd] = ( 0 < sVar128 ) * ( sVar128 < 0x100 ) * auVar233[0xe] - ( 0xff < sVar128 );
         pauVar182[7][0xe] = ( 0 < sVar129 ) * ( sVar129 < 0x100 ) * auVar284[0xe] - ( 0xff < sVar129 );
         pauVar182[7][0xf] = ( 0 < sVar130 ) * ( sVar130 < 0x100 ) * auVar211[0xe] - ( 0xff < sVar130 );
         pauVar182 = pauVar182 + 8;
         pauVar185 = pauVar186;
      }
 while ( (undefined1(*) [16])local_438 != pauVar186 );
      blake2b_long_isra_0(*(undefined8*)( param_1 + 0x88 ), *(undefined8*)( param_1 + 0x90 ), param_2, *(undefined4*)( param_1 + 8 ), (undefined1(*) [16])local_438, 0x400);
      OPENSSL_cleanse(local_838, 0x400);
      OPENSSL_cleanse((undefined1(*) [16])local_438, 0x400);
      if (*(int*)( param_1 + 100 ) == 0) {
         CRYPTO_clear_free(*(undefined8*)( param_1 + 0x68 ), ( ulong ) * (uint*)( param_1 + 0x74 ) << 10, "providers/implementations/kdfs/argon2.c", 0x312);
      }
 else {
         CRYPTO_secure_clear_free(*(undefined8*)( param_1 + 0x68 ), ( ulong ) * (uint*)( param_1 + 0x74 ) << 10, "providers/implementations/kdfs/argon2.c", 0x30f);
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 *kdf_argon2d_new(undefined8 param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   ulong uVar6;
   undefined8 *puVar7;
   byte bVar8;
   bVar8 = 0;
   iVar3 = ossl_prov_is_running();
   if (iVar3 != 0) {
      puVar4 = (undefined8*)CRYPTO_zalloc(0xa0, "providers/implementations/kdfs/argon2.c", 0x3a7);
      if (puVar4 != (undefined8*)0x0) {
         uVar5 = ossl_prov_ctx_get0_libctx(param_1);
         *puVar4 = 0;
         puVar4[0x13] = 0;
         uVar2 = __LC3;
         uVar1 = __LC2;
         puVar7 = (undefined8*)( ( ulong )(puVar4 + 1) & 0xfffffffffffffff8 );
         for (uVar6 = ( ulong )(( (int)puVar4 - (int)(undefined8*)( ( ulong )(puVar4 + 1) & 0xfffffffffffffff8 ) ) + 0xa0U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar7 = 0;
            puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
         }

         puVar4[0x10] = uVar5;
         *(undefined4*)( puVar4 + 1 ) = 0x40;
         *(undefined4*)( (long)puVar4 + 0x5c ) = 0x13;
         *(undefined8*)( (long)puVar4 + 0x4c ) = uVar1;
         *(undefined8*)( (long)puVar4 + 0x54 ) = uVar2;
         return puVar4;
      }

      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x3a9, "kdf_argon2d_new");
      ERR_set_error(0x39, 0xc0100, 0);
   }

   return (undefined8*)0x0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 *kdf_argon2id_new(undefined8 param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   ulong uVar6;
   undefined8 *puVar7;
   byte bVar8;
   bVar8 = 0;
   iVar3 = ossl_prov_is_running();
   if (iVar3 != 0) {
      puVar4 = (undefined8*)CRYPTO_zalloc(0xa0, "providers/implementations/kdfs/argon2.c", 0x3cd);
      if (puVar4 != (undefined8*)0x0) {
         uVar5 = ossl_prov_ctx_get0_libctx(param_1);
         *puVar4 = 0;
         puVar4[0x13] = 0;
         uVar2 = __LC3;
         uVar1 = __LC2;
         puVar7 = (undefined8*)( ( ulong )(puVar4 + 1) & 0xfffffffffffffff8 );
         for (uVar6 = ( ulong )(( (int)puVar4 - (int)(undefined8*)( ( ulong )(puVar4 + 1) & 0xfffffffffffffff8 ) ) + 0xa0U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar7 = 0;
            puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
         }

         puVar4[0x10] = uVar5;
         *(undefined4*)( puVar4 + 1 ) = 0x40;
         *(undefined4*)( (long)puVar4 + 0x5c ) = 0x13;
         *(undefined4*)( (long)puVar4 + 100 ) = 2;
         *(undefined8*)( (long)puVar4 + 0x4c ) = uVar1;
         *(undefined8*)( (long)puVar4 + 0x54 ) = uVar2;
         return puVar4;
      }

      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x3cf, "kdf_argon2id_new");
      ERR_set_error(0x39, 0xc0100, 0);
   }

   return (undefined8*)0x0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 *kdf_argon2i_new(undefined8 param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   int iVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   ulong uVar6;
   undefined8 *puVar7;
   byte bVar8;
   bVar8 = 0;
   iVar3 = ossl_prov_is_running();
   if (iVar3 != 0) {
      puVar4 = (undefined8*)CRYPTO_zalloc(0xa0, "providers/implementations/kdfs/argon2.c", 0x3ba);
      if (puVar4 != (undefined8*)0x0) {
         uVar5 = ossl_prov_ctx_get0_libctx(param_1);
         *puVar4 = 0;
         puVar4[0x13] = 0;
         uVar2 = __LC3;
         uVar1 = __LC2;
         puVar7 = (undefined8*)( ( ulong )(puVar4 + 1) & 0xfffffffffffffff8 );
         for (uVar6 = ( ulong )(( (int)puVar4 - (int)(undefined8*)( ( ulong )(puVar4 + 1) & 0xfffffffffffffff8 ) ) + 0xa0U >> 3); uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar7 = 0;
            puVar7 = puVar7 + (ulong)bVar8 * -2 + 1;
         }

         puVar4[0x10] = uVar5;
         *(undefined4*)( puVar4 + 1 ) = 0x40;
         *(undefined4*)( (long)puVar4 + 0x5c ) = 0x13;
         *(undefined4*)( (long)puVar4 + 100 ) = 1;
         *(undefined8*)( (long)puVar4 + 0x4c ) = uVar1;
         *(undefined8*)( (long)puVar4 + 0x54 ) = uVar2;
         return puVar4;
      }

      ERR_new();
      ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x3bc, "kdf_argon2i_new");
      ERR_set_error(0x39, 0xc0100, 0);
   }

   return (undefined8*)0x0;
}
void fill_block(ulong *param_1, ulong *param_2, ulong *param_3, int param_4) {
   ulong uVar1;
   ulong uVar2;
   ulong uVar3;
   ulong uVar4;
   ulong *puVar5;
   ulong *puVar6;
   ulong uVar7;
   ulong uVar8;
   ulong uVar9;
   ulong *puVar10;
   long lVar11;
   long lVar12;
   ulong uVar13;
   ulong uVar14;
   ulong uVar15;
   ulong uVar16;
   ulong uVar17;
   ulong *puVar18;
   ulong uVar19;
   ulong uVar20;
   ulong uVar21;
   ulong uVar22;
   ulong uVar23;
   ulong uVar24;
   ulong uVar25;
   undefined8 *puVar26;
   ulong *puVar27;
   ulong uVar28;
   ulong uVar29;
   undefined8 *puVar30;
   ulong uVar31;
   ulong uVar32;
   ulong uVar33;
   ulong uVar34;
   long in_FS_OFFSET;
   ulong local_848[257];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar27 = local_848;
   for (lVar12 = 0x80; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar27 = *param_2;
      param_2 = param_2 + 1;
      puVar27 = puVar27 + 1;
   }

   puVar27 = local_848 + 0x80;
   puVar10 = local_848;
   do {
      uVar33 = *param_1;
      uVar3 = param_1[1];
      puVar5 = puVar10 + 2;
      param_1 = param_1 + 2;
      *puVar10 = uVar33 ^ *puVar10;
      puVar10[1] = uVar3 ^ puVar10[1];
      puVar10 = puVar5;
   }
 while ( puVar27 != puVar5 );
   puVar10 = local_848;
   puVar5 = puVar27;
   for (lVar12 = 0x80; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar5 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar5 = puVar5 + 1;
   }

   puVar10 = local_848;
   if (param_4 != 0) {
      puVar5 = puVar27;
      puVar18 = param_3;
      do {
         uVar33 = *puVar18;
         uVar3 = puVar18[1];
         puVar6 = puVar5 + 2;
         puVar18 = puVar18 + 2;
         *puVar5 = uVar33 ^ *puVar5;
         puVar5[1] = uVar3 ^ puVar5[1];
         puVar5 = puVar6;
      }
 while ( local_848 + 0x100 != puVar6 );
   }

   do {
      uVar25 = puVar10[4];
      uVar33 = *puVar10 + uVar25 + ( *puVar10 & 0xffffffff ) * ( uVar25 & 0xffffffff ) * 2;
      uVar3 = ( puVar10[0xc] ^ uVar33 ) >> 0x20;
      uVar28 = ( puVar10[0xc] ^ uVar33 ) << 0x20 | uVar3;
      uVar3 = puVar10[8] + uVar28 + ( puVar10[8] & 0xffffffff ) * uVar3 * 2;
      uVar16 = ( uVar25 ^ uVar3 ) >> 0x18;
      uVar7 = uVar16 | ( uVar25 ^ uVar3 ) << 0x28;
      uVar33 = uVar33 + uVar7 + ( uVar33 & 0xffffffff ) * ( uVar16 & 0xffffffff ) * 2;
      uVar28 = uVar28 ^ uVar33;
      uVar25 = uVar28 >> 0x10;
      uVar29 = uVar25 | uVar28 << 0x30;
      uVar3 = uVar3 + uVar29 + ( uVar25 & 0xffffffff ) * ( uVar3 & 0xffffffff ) * 2;
      uVar28 = puVar10[5];
      uVar7 = uVar7 ^ uVar3;
      uVar1 = uVar7 << 1;
      uVar17 = ( ulong )((long)uVar7 < 0);
      uVar8 = uVar1 | uVar17;
      uVar25 = puVar10[1] + uVar28 + ( uVar28 & 0xffffffff ) * ( puVar10[1] & 0xffffffff ) * 2;
      uVar16 = ( puVar10[0xd] ^ uVar25 ) >> 0x20;
      uVar19 = ( puVar10[0xd] ^ uVar25 ) << 0x20 | uVar16;
      uVar16 = puVar10[9] + uVar19 + uVar16 * ( puVar10[9] & 0xffffffff ) * 2;
      uVar7 = ( uVar28 ^ uVar16 ) >> 0x18;
      uVar13 = uVar7 | ( uVar28 ^ uVar16 ) << 0x28;
      uVar25 = uVar25 + uVar13 + ( uVar7 & 0xffffffff ) * ( uVar25 & 0xffffffff ) * 2;
      uVar19 = uVar19 ^ uVar25;
      uVar28 = uVar19 >> 0x10;
      uVar20 = uVar28 | uVar19 << 0x30;
      uVar16 = uVar16 + uVar20 + ( uVar28 & 0xffffffff ) * ( uVar16 & 0xffffffff ) * 2;
      uVar19 = puVar10[6];
      uVar13 = uVar13 ^ uVar16;
      uVar32 = uVar13 << 1;
      uVar15 = ( ulong )((long)uVar13 < 0);
      uVar14 = uVar32 | uVar15;
      uVar28 = puVar10[2] + uVar19 + ( puVar10[2] & 0xffffffff ) * ( uVar19 & 0xffffffff ) * 2;
      uVar7 = ( puVar10[0xe] ^ uVar28 ) >> 0x20;
      uVar23 = ( puVar10[0xe] ^ uVar28 ) << 0x20 | uVar7;
      uVar7 = puVar10[10] + uVar23 + ( puVar10[10] & 0xffffffff ) * uVar7 * 2;
      uVar13 = ( uVar19 ^ uVar7 ) >> 0x18;
      uVar21 = uVar13 | ( uVar19 ^ uVar7 ) << 0x28;
      uVar28 = uVar28 + uVar21 + ( uVar28 & 0xffffffff ) * ( uVar13 & 0xffffffff ) * 2;
      uVar23 = uVar23 ^ uVar28;
      uVar19 = uVar23 >> 0x10;
      uVar24 = uVar19 | uVar23 << 0x30;
      uVar7 = uVar7 + uVar24 + ( uVar7 & 0xffffffff ) * ( uVar19 & 0xffffffff ) * 2;
      uVar23 = puVar10[7];
      uVar21 = uVar21 ^ uVar7;
      uVar2 = uVar21 << 1;
      uVar21 = ( ulong )((long)uVar21 < 0);
      uVar22 = uVar2 | uVar21;
      uVar19 = puVar10[3] + uVar23 + ( puVar10[3] & 0xffffffff ) * ( uVar23 & 0xffffffff ) * 2;
      uVar13 = ( puVar10[0xf] ^ uVar19 ) >> 0x20;
      uVar31 = ( puVar10[0xf] ^ uVar19 ) << 0x20 | uVar13;
      uVar13 = puVar10[0xb] + uVar31 + ( puVar10[0xb] & 0xffffffff ) * uVar13 * 2;
      uVar4 = ( uVar23 ^ uVar13 ) >> 0x18;
      uVar9 = uVar4 | ( uVar23 ^ uVar13 ) << 0x28;
      uVar19 = uVar19 + uVar9 + ( uVar19 & 0xffffffff ) * ( uVar4 & 0xffffffff ) * 2;
      uVar31 = uVar31 ^ uVar19;
      uVar23 = uVar31 >> 0x10;
      uVar31 = uVar23 | uVar31 << 0x30;
      uVar13 = uVar13 + uVar31 + ( uVar13 & 0xffffffff ) * ( uVar23 & 0xffffffff ) * 2;
      uVar9 = uVar9 ^ uVar13;
      uVar23 = uVar9 << 1;
      uVar4 = ( ulong )((long)uVar9 < 0);
      uVar9 = uVar23 | uVar4;
      uVar33 = uVar33 + uVar14 + ( uVar33 & 0xffffffff ) * ( uVar32 & 0xffffffff | uVar15 ) * 2;
      uVar31 = uVar31 ^ uVar33;
      uVar32 = uVar31 >> 0x20;
      uVar31 = uVar31 << 0x20 | uVar32;
      uVar7 = uVar7 + uVar31 + ( uVar7 & 0xffffffff ) * uVar32 * 2;
      uVar14 = uVar14 ^ uVar7;
      uVar32 = uVar14 >> 0x18;
      uVar15 = uVar32 | uVar14 << 0x28;
      uVar33 = uVar33 + uVar15 + ( uVar32 & 0xffffffff ) * ( uVar33 & 0xffffffff ) * 2;
      uVar31 = uVar31 ^ uVar33;
      *puVar10 = uVar33;
      uVar33 = uVar31 >> 0x10;
      uVar32 = uVar33 | uVar31 << 0x30;
      puVar10[0xf] = uVar32;
      uVar33 = uVar7 + uVar32 + ( uVar33 & 0xffffffff ) * ( uVar7 & 0xffffffff ) * 2;
      puVar10[10] = uVar33;
      uVar33 = uVar33 ^ uVar15;
      puVar10[5] = uVar33 << 1 | ( ulong )((long)uVar33 < 0);
      uVar33 = uVar25 + uVar22 + ( uVar25 & 0xffffffff ) * ( uVar2 & 0xffffffff | uVar21 ) * 2;
      uVar29 = uVar29 ^ uVar33;
      uVar25 = uVar29 >> 0x20;
      uVar32 = uVar29 << 0x20 | uVar25;
      uVar25 = uVar13 + uVar32 + ( uVar13 & 0xffffffff ) * uVar25 * 2;
      uVar22 = uVar22 ^ uVar25;
      uVar7 = uVar22 >> 0x18;
      uVar13 = uVar7 | uVar22 << 0x28;
      uVar33 = uVar33 + uVar13 + ( uVar33 & 0xffffffff ) * ( uVar7 & 0xffffffff ) * 2;
      puVar10[1] = uVar33;
      uVar33 = uVar33 ^ uVar32;
      uVar7 = uVar33 >> 0x10;
      uVar33 = uVar7 | uVar33 << 0x30;
      puVar10[0xc] = uVar33;
      uVar33 = uVar25 + uVar33 + ( uVar7 & 0xffffffff ) * ( uVar25 & 0xffffffff ) * 2;
      puVar10[0xb] = uVar33;
      uVar33 = uVar33 ^ uVar13;
      puVar10[6] = uVar33 << 1 | ( ulong )((long)uVar33 < 0);
      puVar5 = puVar10 + 0x10;
      uVar33 = uVar28 + uVar9 + ( uVar23 & 0xffffffff | uVar4 ) * ( uVar28 & 0xffffffff ) * 2;
      uVar20 = uVar20 ^ uVar33;
      uVar25 = uVar20 >> 0x20;
      uVar7 = uVar20 << 0x20 | uVar25;
      uVar3 = uVar3 + uVar7 + uVar25 * ( uVar3 & 0xffffffff ) * 2;
      uVar9 = uVar9 ^ uVar3;
      uVar25 = uVar9 >> 0x18;
      uVar28 = uVar25 | uVar9 << 0x28;
      uVar33 = uVar33 + uVar28 + ( uVar25 & 0xffffffff ) * ( uVar33 & 0xffffffff ) * 2;
      puVar10[2] = uVar33;
      uVar33 = uVar33 ^ uVar7;
      uVar25 = uVar33 >> 0x10;
      uVar33 = uVar25 | uVar33 << 0x30;
      puVar10[0xd] = uVar33;
      uVar33 = uVar3 + uVar33 + ( uVar25 & 0xffffffff ) * ( uVar3 & 0xffffffff ) * 2;
      puVar10[8] = uVar33;
      uVar33 = uVar33 ^ uVar28;
      puVar10[7] = uVar33 << 1 | ( ulong )((long)uVar33 < 0);
      uVar33 = uVar19 + uVar8 + ( uVar1 & 0xffffffff | uVar17 ) * ( uVar19 & 0xffffffff ) * 2;
      uVar24 = uVar24 ^ uVar33;
      uVar3 = uVar24 >> 0x20;
      uVar28 = uVar24 << 0x20 | uVar3;
      uVar3 = uVar16 + uVar28 + uVar3 * ( uVar16 & 0xffffffff ) * 2;
      uVar8 = uVar8 ^ uVar3;
      uVar25 = uVar8 >> 0x18;
      uVar16 = uVar25 | uVar8 << 0x28;
      uVar33 = uVar33 + uVar16 + ( uVar25 & 0xffffffff ) * ( uVar33 & 0xffffffff ) * 2;
      puVar10[3] = uVar33;
      uVar33 = uVar33 ^ uVar28;
      uVar25 = uVar33 >> 0x10;
      uVar33 = uVar25 | uVar33 << 0x30;
      puVar10[0xe] = uVar33;
      uVar33 = uVar33 + uVar3 + ( uVar25 & 0xffffffff ) * ( uVar3 & 0xffffffff ) * 2;
      puVar10[9] = uVar33;
      uVar33 = uVar33 ^ uVar16;
      puVar10[4] = uVar33 << 1 | ( ulong )((long)uVar33 < 0);
      puVar10 = puVar5;
   }
 while ( puVar27 != puVar5 );
   puVar10 = local_848;
   do {
      uVar25 = puVar10[0x20];
      uVar33 = *puVar10 + uVar25 + ( *puVar10 & 0xffffffff ) * ( uVar25 & 0xffffffff ) * 2;
      uVar3 = ( puVar10[0x60] ^ uVar33 ) >> 0x20;
      uVar28 = ( puVar10[0x60] ^ uVar33 ) << 0x20 | uVar3;
      uVar3 = puVar10[0x40] + uVar28 + ( puVar10[0x40] & 0xffffffff ) * uVar3 * 2;
      uVar16 = ( uVar25 ^ uVar3 ) >> 0x18;
      uVar7 = uVar16 | ( uVar25 ^ uVar3 ) << 0x28;
      uVar33 = uVar33 + uVar7 + ( uVar33 & 0xffffffff ) * ( uVar16 & 0xffffffff ) * 2;
      uVar28 = uVar28 ^ uVar33;
      uVar25 = uVar28 >> 0x10;
      uVar31 = uVar25 | uVar28 << 0x30;
      uVar3 = uVar3 + uVar31 + ( uVar3 & 0xffffffff ) * ( uVar25 & 0xffffffff ) * 2;
      uVar28 = puVar10[0x21];
      uVar7 = uVar7 ^ uVar3;
      uVar1 = uVar7 << 1;
      uVar15 = ( ulong )((long)uVar7 < 0);
      uVar20 = uVar1 | uVar15;
      uVar25 = puVar10[1] + uVar28 + ( puVar10[1] & 0xffffffff ) * ( uVar28 & 0xffffffff ) * 2;
      uVar16 = ( puVar10[0x61] ^ uVar25 ) >> 0x20;
      uVar19 = ( puVar10[0x61] ^ uVar25 ) << 0x20 | uVar16;
      uVar16 = puVar10[0x41] + uVar19 + ( puVar10[0x41] & 0xffffffff ) * uVar16 * 2;
      uVar7 = ( uVar28 ^ uVar16 ) >> 0x18;
      uVar13 = uVar7 | ( uVar28 ^ uVar16 ) << 0x28;
      uVar25 = uVar25 + uVar13 + ( uVar25 & 0xffffffff ) * ( uVar7 & 0xffffffff ) * 2;
      uVar19 = uVar19 ^ uVar25;
      uVar28 = uVar19 >> 0x10;
      uVar9 = uVar28 | uVar19 << 0x30;
      uVar16 = uVar16 + uVar9 + ( uVar16 & 0xffffffff ) * ( uVar28 & 0xffffffff ) * 2;
      uVar19 = puVar10[0x30];
      uVar13 = uVar13 ^ uVar16;
      uVar32 = uVar13 << 1;
      uVar21 = ( ulong )((long)uVar13 < 0);
      uVar24 = uVar32 | uVar21;
      uVar28 = puVar10[0x10] + uVar19 + ( uVar19 & 0xffffffff ) * ( puVar10[0x10] & 0xffffffff ) * 2;
      uVar7 = ( puVar10[0x70] ^ uVar28 ) >> 0x20;
      uVar23 = ( puVar10[0x70] ^ uVar28 ) << 0x20 | uVar7;
      uVar7 = puVar10[0x50] + uVar23 + uVar7 * ( puVar10[0x50] & 0xffffffff ) * 2;
      uVar13 = ( uVar19 ^ uVar7 ) >> 0x18;
      uVar17 = uVar13 | ( uVar19 ^ uVar7 ) << 0x28;
      uVar28 = uVar28 + uVar17 + ( uVar13 & 0xffffffff ) * ( uVar28 & 0xffffffff ) * 2;
      uVar23 = uVar23 ^ uVar28;
      uVar19 = uVar23 >> 0x10;
      uVar29 = uVar19 | uVar23 << 0x30;
      uVar7 = uVar7 + uVar29 + ( uVar19 & 0xffffffff ) * ( uVar7 & 0xffffffff ) * 2;
      uVar23 = puVar10[0x31];
      uVar17 = uVar17 ^ uVar7;
      uVar2 = uVar17 << 1;
      uVar4 = ( ulong )((long)uVar17 < 0);
      uVar14 = uVar2 | uVar4;
      uVar19 = puVar10[0x11] + uVar23 + ( uVar23 & 0xffffffff ) * ( puVar10[0x11] & 0xffffffff ) * 2;
      uVar13 = ( puVar10[0x71] ^ uVar19 ) >> 0x20;
      uVar22 = ( puVar10[0x71] ^ uVar19 ) << 0x20 | uVar13;
      uVar13 = puVar10[0x51] + uVar22 + uVar13 * ( puVar10[0x51] & 0xffffffff ) * 2;
      uVar17 = ( uVar23 ^ uVar13 ) >> 0x18;
      uVar8 = uVar17 | ( uVar23 ^ uVar13 ) << 0x28;
      uVar19 = uVar19 + uVar8 + ( uVar17 & 0xffffffff ) * ( uVar19 & 0xffffffff ) * 2;
      uVar22 = uVar22 ^ uVar19;
      uVar23 = uVar22 >> 0x10;
      uVar34 = uVar23 | uVar22 << 0x30;
      uVar13 = uVar13 + uVar34 + ( uVar23 & 0xffffffff ) * ( uVar13 & 0xffffffff ) * 2;
      uVar8 = uVar8 ^ uVar13;
      uVar17 = uVar8 << 1;
      uVar8 = ( ulong )((long)uVar8 < 0);
      uVar22 = uVar17 | uVar8;
      uVar23 = uVar33 + uVar24 + ( uVar32 & 0xffffffff | uVar21 ) * ( uVar33 & 0xffffffff ) * 2;
      uVar34 = uVar34 ^ uVar23;
      uVar33 = uVar34 >> 0x20;
      uVar21 = uVar34 << 0x20 | uVar33;
      uVar33 = uVar7 + uVar21 + uVar33 * ( uVar7 & 0xffffffff ) * 2;
      uVar24 = uVar24 ^ uVar33;
      uVar7 = uVar24 >> 0x18;
      uVar32 = uVar7 | uVar24 << 0x28;
      uVar7 = uVar23 + uVar32 + ( uVar7 & 0xffffffff ) * ( uVar23 & 0xffffffff ) * 2;
      uVar21 = uVar21 ^ uVar7;
      *puVar10 = uVar7;
      uVar7 = uVar21 >> 0x10;
      uVar23 = uVar7 | uVar21 << 0x30;
      puVar10[0x71] = uVar23;
      uVar33 = uVar33 + uVar23 + ( uVar33 & 0xffffffff ) * ( uVar7 & 0xffffffff ) * 2;
      puVar10[0x50] = uVar33;
      uVar33 = uVar33 ^ uVar32;
      puVar10[0x21] = uVar33 << 1 | ( ulong )((long)uVar33 < 0);
      uVar25 = uVar25 + uVar14 + ( uVar2 & 0xffffffff | uVar4 ) * ( uVar25 & 0xffffffff ) * 2;
      uVar31 = uVar31 ^ uVar25;
      uVar33 = uVar31 >> 0x20;
      uVar23 = uVar31 << 0x20 | uVar33;
      uVar33 = uVar13 + uVar23 + uVar33 * ( uVar13 & 0xffffffff ) * 2;
      uVar14 = uVar14 ^ uVar33;
      uVar7 = uVar14 >> 0x18;
      uVar13 = uVar7 | uVar14 << 0x28;
      uVar25 = uVar25 + uVar13 + ( uVar7 & 0xffffffff ) * ( uVar25 & 0xffffffff ) * 2;
      puVar10[1] = uVar25;
      uVar25 = uVar25 ^ uVar23;
      uVar7 = uVar25 >> 0x10;
      uVar25 = uVar7 | uVar25 << 0x30;
      puVar10[0x60] = uVar25;
      uVar33 = uVar33 + uVar25 + ( uVar33 & 0xffffffff ) * ( uVar7 & 0xffffffff ) * 2;
      puVar10[0x51] = uVar33;
      uVar33 = uVar33 ^ uVar13;
      puVar10[0x30] = uVar33 << 1 | ( ulong )((long)uVar33 < 0);
      puVar5 = puVar10 + 2;
      uVar33 = uVar28 + uVar22 + ( uVar28 & 0xffffffff ) * ( uVar17 & 0xffffffff | uVar8 ) * 2;
      uVar9 = uVar9 ^ uVar33;
      uVar25 = uVar9 >> 0x20;
      uVar7 = uVar9 << 0x20 | uVar25;
      uVar3 = uVar3 + uVar7 + ( uVar3 & 0xffffffff ) * uVar25 * 2;
      uVar22 = uVar22 ^ uVar3;
      uVar25 = uVar22 >> 0x18;
      uVar28 = uVar25 | uVar22 << 0x28;
      uVar33 = uVar33 + uVar28 + ( uVar33 & 0xffffffff ) * ( uVar25 & 0xffffffff ) * 2;
      puVar10[0x10] = uVar33;
      uVar33 = uVar33 ^ uVar7;
      uVar25 = uVar33 >> 0x10;
      uVar33 = uVar25 | uVar33 << 0x30;
      puVar10[0x61] = uVar33;
      uVar33 = uVar3 + uVar33 + ( uVar3 & 0xffffffff ) * ( uVar25 & 0xffffffff ) * 2;
      puVar10[0x40] = uVar33;
      uVar33 = uVar33 ^ uVar28;
      puVar10[0x31] = uVar33 << 1 | ( ulong )((long)uVar33 < 0);
      uVar33 = uVar19 + uVar20 + ( uVar19 & 0xffffffff ) * ( uVar1 & 0xffffffff | uVar15 ) * 2;
      uVar29 = uVar29 ^ uVar33;
      uVar3 = uVar29 >> 0x20;
      uVar28 = uVar29 << 0x20 | uVar3;
      uVar3 = uVar16 + uVar28 + ( uVar16 & 0xffffffff ) * uVar3 * 2;
      uVar20 = uVar20 ^ uVar3;
      uVar25 = uVar20 >> 0x18;
      uVar16 = uVar25 | uVar20 << 0x28;
      uVar33 = uVar33 + uVar16 + ( uVar33 & 0xffffffff ) * ( uVar25 & 0xffffffff ) * 2;
      puVar10[0x11] = uVar33;
      uVar33 = uVar33 ^ uVar28;
      uVar25 = uVar33 >> 0x10;
      uVar33 = uVar25 | uVar33 << 0x30;
      puVar10[0x70] = uVar33;
      uVar33 = uVar33 + uVar3 + ( uVar3 & 0xffffffff ) * ( uVar25 & 0xffffffff ) * 2;
      puVar10[0x41] = uVar33;
      uVar33 = uVar33 ^ uVar16;
      puVar10[0x20] = uVar33 << 1 | ( ulong )((long)uVar33 < 0);
      puVar10 = puVar5;
   }
 while ( puVar5 != local_848 + 0x10 );
   *param_3 = local_848[0x80];
   param_3[0x7f] = local_848[0xff];
   lVar12 = (long)param_3 - (long)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
   lVar11 = 0;
   puVar26 = (undefined8*)( (long)puVar27 - lVar12 );
   puVar30 = (undefined8*)( ( ulong )(param_3 + 1) & 0xfffffffffffffff8 );
   for (uVar33 = ( ulong )((int)lVar12 + 0x400U >> 3); uVar33 != 0; uVar33 = uVar33 - 1) {
      *puVar30 = *puVar26;
      puVar26 = puVar26 + 1;
      puVar30 = puVar30 + 1;
   }

   do {
      uVar3 = ( (ulong*)( (long)param_3 + lVar11 ) )[1];
      uVar33 = *(ulong*)( (long)local_848 + lVar11 + 8 );
      *(ulong*)( (long)param_3 + lVar11 ) = *(ulong*)( (long)param_3 + lVar11 ) ^ *(ulong*)( (long)local_848 + lVar11 );
      ( (ulong*)( (long)param_3 + lVar11 ) )[1] = uVar3 ^ uVar33;
      lVar11 = lVar11 + 0x10;
   }
 while ( lVar11 != 0x400 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
void fill_segment(long param_1, uint param_2, uint param_3, byte param_4) {
   uint uVar1;
   bool bVar2;
   uint uVar3;
   ulong uVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   uint uVar8;
   int iVar9;
   ulong uVar11;
   ulong uVar12;
   ulong uVar13;
   uint uVar14;
   undefined8 *puVar15;
   ulong *puVar16;
   uint uVar17;
   uint uVar18;
   long in_FS_OFFSET;
   bool bVar19;
   bool bVar20;
   ulong local_c48[128];
   ulong local_848[4];
   ulong local_828;
   ulong local_820;
   long local_818;
   undefined8 local_448[129];
   long local_40;
   ulong uVar10;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar16 = local_848;
   for (lVar6 = 0x80; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar16 = 0;
      puVar16 = puVar16 + 1;
   }

   if (param_1 == 0) goto LAB_00101da8;
   bVar19 = param_2 == 0;
   uVar8 = *(uint*)( param_1 + 100 );
   bVar20 = param_4 == 0;
   bVar2 = bVar20 && bVar19;
   if (uVar8 == 1) {
      LAB_00101b8c:puVar15 = local_448;
      for (lVar6 = 0x80; lVar6 != 0; lVar6 = lVar6 + -1) {
         *puVar15 = 0;
         puVar15 = puVar15 + 1;
      }

      puVar16 = local_848;
      for (lVar6 = 0x80; lVar6 != 0; lVar6 = lVar6 + -1) {
         *puVar16 = 0;
         puVar16 = puVar16 + 1;
      }

      local_848[0] = (ulong)param_2;
      local_848[1] = (ulong)param_3;
      local_848[2] = (ulong)param_4;
      local_848[3] = ( ulong ) * (uint*)( param_1 + 0x74 );
      local_828 = ( ulong ) * (uint*)( param_1 + 0x70 );
      local_820 = (ulong)uVar8;
      if (bVar2) {
         LAB_00102093:local_818 = 1;
         fill_block(local_448, local_848, local_c48, 0);
         fill_block(local_448, local_c48, local_c48, 0);
         bVar20 = true;
         bVar19 = true;
         uVar18 = 2;
      }
 else {
         LAB_00101bff:bVar20 = false;
         uVar18 = 0;
      }

   }
 else {
      if (uVar8 == 2) {
         if (( param_4 < 2 ) && ( bVar19 )) goto LAB_00101b8c;
         if (!bVar20 || !bVar19) goto LAB_00101bff;
         goto LAB_00102093;
      }

      if (!bVar20 || !bVar19) goto LAB_00101bff;
      bVar20 = true;
      bVar19 = true;
      uVar18 = 2;
   }

   uVar1 = *(uint*)( param_1 + 0x7c );
   uVar13 = (ulong)uVar1;
   uVar17 = *(uint*)( param_1 + 0x78 );
   uVar14 = uVar1 * param_3 + param_4 * uVar17 + uVar18;
   uVar3 = ( uVar1 - 1 ) + uVar14;
   if (uVar14 % uVar1 != 0) {
      uVar3 = uVar14 - 1;
   }

   if (uVar18 < uVar17) {
      bVar19 = (bool)( param_4 < 2 & bVar19 );
      uVar4 = (ulong)param_3;
      if (bVar20) {
         uVar12 = (ulong)uVar3;
         while (true) {
            uVar1 = (int)uVar12 + 1;
            if ((int)( (ulong)uVar14 % uVar13 ) == 1) {
               uVar12 = ( ulong )(uVar14 - 1);
               uVar1 = uVar14;
            }

            if (( uVar8 == 1 ) || ( ( uVar8 == 2 && ( bVar19 ) ) )) {
               if (( uVar18 & 0x7f ) == 0) {
                  local_818 = local_818 + 1;
                  fill_block(local_448, local_848, local_c48, 0);
                  fill_block(local_448, local_c48, local_c48, 0);
               }

               lVar6 = *(long*)( param_1 + 0x68 );
               uVar8 = (uint)local_848[( ulong )(uVar18 & 0x7f) - 0x80];
               puVar15 = (undefined8*)( lVar6 + uVar12 * 0x400 );
            }
 else {
               lVar6 = *(long*)( param_1 + 0x68 );
               puVar15 = (undefined8*)( lVar6 + uVar12 * 0x400 );
               uVar8 = ( uint ) * puVar15;
            }

            if (param_2 == 0) {
               uVar7 = ( ulong )(uVar18 - 1);
               uVar12 = 0;
            }
 else {
               uVar12 = 0;
               uVar7 = ( ulong )(( ( uVar18 - 1 ) + (int)uVar13 ) - uVar17);
               if (param_4 != 3) {
                  uVar12 = ( ulong )(( param_4 + 1 ) * uVar17);
               }

            }

            fill_block(puVar15, lVar6 + ( ( ( uVar12 + ( (int)uVar7 - 1 ) ) - ( ( (ulong)uVar8 * (ulong)uVar8 >> 0x20 ) * uVar7 >> 0x20 ) ) % uVar13 + uVar13 * uVar4 ) * 0x400, lVar6 + (ulong)uVar14 * 0x400, *(int*)( param_1 + 0x5c ) != 0x10 && param_2 != 0);
            uVar17 = *(uint*)( param_1 + 0x78 );
            uVar18 = uVar18 + 1;
            uVar14 = uVar14 + 1;
            if (uVar17 <= uVar18) break;
            uVar13 = ( ulong ) * (uint*)( param_1 + 0x7c );
            uVar8 = *(uint*)( param_1 + 100 );
            uVar12 = (ulong)uVar1;
         }
;
      }
 else {
         uVar12 = (ulong)uVar3;
         while (true) {
            uVar1 = (int)uVar12 + 1;
            if ((int)( (ulong)uVar14 % uVar13 ) == 1) {
               uVar12 = ( ulong )(uVar14 - 1);
               uVar1 = uVar14;
            }

            if (( uVar8 == 1 ) || ( ( uVar8 == 2 && ( bVar19 ) ) )) {
               if (( uVar18 & 0x7f ) == 0) {
                  local_818 = local_818 + 1;
                  fill_block(local_448, local_848, local_c48, 0);
                  fill_block(local_448, local_c48, local_c48, 0);
               }

               lVar6 = *(long*)( param_1 + 0x68 );
               uVar7 = local_848[( ulong )(uVar18 & 0x7f) - 0x80];
               puVar16 = (ulong*)( lVar6 + uVar12 * 0x400 );
            }
 else {
               lVar6 = *(long*)( param_1 + 0x68 );
               puVar16 = (ulong*)( lVar6 + uVar12 * 0x400 );
               uVar7 = *puVar16;
            }

            uVar12 = ( uVar7 >> 0x20 ) % ( ulong ) * (uint*)( param_1 + 0x54 );
            if (param_2 == 0) {
               if (bVar2) {
                  uVar10 = ( ulong )(uVar18 - 1);
                  uVar5 = 0;
               }
 else {
                  iVar9 = param_4 * uVar17;
                  if (uVar12 == uVar4) {
                     uVar10 = ( ulong )(( uVar18 - 1 ) + iVar9);
                     uVar5 = 0;
                  }
 else {
                     uVar10 = ( ulong )(iVar9 - ( uint )(uVar18 == 0));
                     uVar5 = 0;
                  }

               }

            }
 else {
               if (uVar12 == uVar4) {
                  uVar8 = ( ( uVar18 - 1 ) + (int)uVar13 ) - uVar17;
               }
 else {
                  uVar8 = ( (int)uVar13 - uVar17 ) - ( uint )(uVar18 == 0);
               }

               uVar10 = (ulong)uVar8;
               uVar5 = 0;
               if (param_4 != 3) {
                  uVar5 = ( ulong )(( param_4 + 1 ) * uVar17);
               }

            }

            uVar11 = (ulong)uVar14;
            uVar18 = uVar18 + 1;
            uVar14 = uVar14 + 1;
            fill_block(puVar16, lVar6 + ( ( ( uVar5 + ( (int)uVar10 - 1 ) ) - ( ( ( uVar7 & 0xffffffff ) * ( uVar7 & 0xffffffff ) >> 0x20 ) * uVar10 >> 0x20 ) ) % uVar13 + uVar13 * uVar12 ) * 0x400, uVar11 * 0x400 + lVar6, *(int*)( param_1 + 0x5c ) != 0x10 && param_2 != 0);
            uVar17 = *(uint*)( param_1 + 0x78 );
            if (uVar17 <= uVar18) break;
            uVar13 = ( ulong ) * (uint*)( param_1 + 0x7c );
            uVar8 = *(uint*)( param_1 + 100 );
            uVar12 = (ulong)uVar1;
         }
;
      }

   }

   LAB_00101da8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 fill_segment_thr(undefined4 *param_1) {
   fill_segment(*(undefined8*)( param_1 + 4 ), *param_1, param_1[1], *(undefined1*)( param_1 + 2 ));
   return 0;
}
undefined8 kdf_argon2_set_ctx_params(long param_1, long *param_2) {
   int iVar1;
   long lVar2;
   char *pcVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   uint local_28;
   int iStack_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == (long*)0x0 ) || ( *param_2 == 0 )) {
      LAB_00102450:uVar4 = 1;
   }
 else {
      lVar2 = OSSL_PARAM_locate_const(param_2, &_LC5);
      if (lVar2 == 0) {
         LAB_001021e0:lVar2 = OSSL_PARAM_locate_const(param_2, &_LC7);
         if (lVar2 == 0) {
            LAB_00102265:lVar2 = OSSL_PARAM_locate_const(param_2, "secret");
            if (lVar2 == 0) {
               LAB_001022e0:lVar2 = OSSL_PARAM_locate_const(param_2, &_LC10);
               if (lVar2 == 0) {
                  LAB_00102357:lVar2 = OSSL_PARAM_locate_const(param_2, &_LC0);
                  if (lVar2 != 0) {
                     iVar1 = OSSL_PARAM_get_uint32(lVar2, &local_28);
                     if (iVar1 == 0) goto LAB_001023b4;
                     if (local_28 < 4) {
                        ERR_new();
                        ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x4c7, "kdf_argon2_ctx_set_out_length");
                        ERR_set_error(0x39, 0xd9, "min: %u", 4);
                        uVar4 = 0;
                        goto LAB_00102455;
                     }

                     *(uint*)( param_1 + 8 ) = local_28;
                  }

                  lVar2 = OSSL_PARAM_locate_const(param_2, &_LC11);
                  if (lVar2 != 0) {
                     iVar1 = OSSL_PARAM_get_uint32(lVar2, &local_28);
                     if (iVar1 == 0) goto LAB_001023b4;
                     if (local_28 == 0) {
                        ERR_new();
                        ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x4a7, "kdf_argon2_ctx_set_t_cost");
                        ERR_set_error(0x39, 0x7b, "min: %u", 1);
                        uVar4 = 0;
                        goto LAB_00102455;
                     }

                     *(uint*)( param_1 + 0x4c ) = local_28;
                  }

                  lVar2 = OSSL_PARAM_locate_const(param_2, "threads");
                  if (lVar2 != 0) {
                     iVar1 = OSSL_PARAM_get_uint32(lVar2, &local_28);
                     if (iVar1 == 0) goto LAB_001023b4;
                     if (local_28 == 0) {
                        ERR_new();
                        ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x481, "kdf_argon2_ctx_set_threads");
                        ERR_set_error(0x39, 0xea, "min threads: %u", 1);
                        uVar4 = 0;
                        goto LAB_00102455;
                     }

                     if (0xffffff < local_28) {
                        ERR_new();
                        ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x487, "kdf_argon2_ctx_set_threads");
                        ERR_set_error(0x39, 0xea, "max threads: %u", 0xffffff);
                        uVar4 = 0;
                        goto LAB_00102455;
                     }

                     *(uint*)( param_1 + 0x58 ) = local_28;
                  }

                  lVar2 = OSSL_PARAM_locate_const(param_2, "lanes");
                  if (lVar2 != 0) {
                     iVar1 = OSSL_PARAM_get_uint32(lVar2, &local_28);
                     if (iVar1 == 0) goto LAB_001023b4;
                     if (0xffffff < local_28) {
                        ERR_new();
                        ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x493, "kdf_argon2_ctx_set_lanes");
                        ERR_set_error(0x39, 0x68, "max lanes: %u", 0xffffff);
                        uVar4 = 0;
                        goto LAB_00102455;
                     }

                     if (local_28 == 0) {
                        ERR_new();
                        ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x499, "kdf_argon2_ctx_set_lanes");
                        ERR_set_error(0x39, 0x68, "min lanes: %u", 1);
                        uVar4 = 0;
                        goto LAB_00102455;
                     }

                     *(uint*)( param_1 + 0x54 ) = local_28;
                  }

                  lVar2 = OSSL_PARAM_locate_const(param_2, "memcost");
                  if (lVar2 != 0) {
                     iVar1 = OSSL_PARAM_get_uint32(lVar2, &local_28);
                     if (iVar1 == 0) goto LAB_001023b4;
                     if (local_28 < 8) {
                        ERR_new();
                        ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x4b5, "kdf_argon2_ctx_set_m_cost");
                        ERR_set_error(0x39, 0xeb, "min: %u", 8);
                        uVar4 = 0;
                        goto LAB_00102455;
                     }

                     *(uint*)( param_1 + 0x50 ) = local_28;
                  }

                  lVar2 = OSSL_PARAM_locate_const(param_2, "early_clean");
                  if (lVar2 != 0) {
                     iVar1 = OSSL_PARAM_get_uint32(lVar2, &local_28);
                     if (iVar1 == 0) goto LAB_001023b4;
                     *(uint*)( param_1 + 0x60 ) = ( uint )(local_28 != 0);
                  }

                  lVar2 = OSSL_PARAM_locate_const(param_2, "version");
                  if (lVar2 != 0) {
                     iVar1 = OSSL_PARAM_get_uint32(lVar2, &local_28);
                     if (iVar1 == 0) goto LAB_001023b4;
                     if (( local_28 != 0x10 ) && ( local_28 != 0x13 )) {
                        ERR_new();
                        ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x559, "kdf_argon2_ctx_set_version");
                        ERR_set_error(0x39, 0x7d, "invalid Argon2 version");
                        uVar4 = 0;
                        goto LAB_00102455;
                     }

                     *(uint*)( param_1 + 0x5c ) = local_28;
                  }

                  lVar2 = OSSL_PARAM_locate_const(param_2, "properties");
                  if (lVar2 == 0) goto LAB_00102450;
                  if (*(int*)( lVar2 + 8 ) == 4) {
                     pcVar3 = *(char**)( lVar2 + 0x10 );
                     CRYPTO_free(*(void**)( param_1 + 0x98 ));
                     *(undefined8*)( param_1 + 0x98 ) = 0;
                     if (pcVar3 != (char*)0x0) {
                        pcVar3 = CRYPTO_strdup(pcVar3, "providers/implementations/kdfs/argon2.c", 0x564);
                        *(char**)( param_1 + 0x98 ) = pcVar3;
                        if (pcVar3 == (char*)0x0) goto LAB_001023b4;
                     }

                     EVP_MD_free(*(undefined8*)( param_1 + 0x88 ));
                     *(undefined8*)( param_1 + 0x88 ) = 0;
                     EVP_MAC_free(*(undefined8*)( param_1 + 0x90 ));
                     *(undefined8*)( param_1 + 0x90 ) = 0;
                     goto LAB_00102450;
                  }

               }
 else if (*(long*)( lVar2 + 0x10 ) != 0) {
                  if (*(long*)( param_1 + 0x40 ) != 0) {
                     CRYPTO_clear_free(*(long*)( param_1 + 0x40 ), *(undefined4*)( param_1 + 0x48 ), "providers/implementations/kdfs/argon2.c", 0x539);
                     *(undefined8*)( param_1 + 0x40 ) = 0;
                     *(undefined4*)( param_1 + 0x48 ) = 0;
                  }

                  iVar1 = OSSL_PARAM_get_octet_string(lVar2, param_1 + 0x40, 0, &local_28);
                  if (iVar1 != 0) {
                     if (iStack_24 != 0) {
                        CRYPTO_free(*(void**)( param_1 + 0x40 ));
                        *(undefined8*)( param_1 + 0x40 ) = 0;
                        uVar4 = 0;
                        *(undefined4*)( param_1 + 0x48 ) = 0;
                        goto LAB_00102455;
                     }

                     *(uint*)( param_1 + 0x48 ) = local_28;
                     goto LAB_00102357;
                  }

               }

            }
 else if (*(long*)( lVar2 + 0x10 ) != 0) {
               if (*(long*)( param_1 + 0x30 ) != 0) {
                  CRYPTO_clear_free(*(long*)( param_1 + 0x30 ), *(undefined4*)( param_1 + 0x38 ), "providers/implementations/kdfs/argon2.c", 0x4d8);
                  *(undefined8*)( param_1 + 0x30 ) = 0;
                  *(undefined4*)( param_1 + 0x38 ) = 0;
               }

               iVar1 = OSSL_PARAM_get_octet_string(lVar2, param_1 + 0x30, 0, &local_28);
               if (iVar1 != 0) {
                  if (iStack_24 != 0) {
                     CRYPTO_free(*(void**)( param_1 + 0x30 ));
                     *(undefined8*)( param_1 + 0x30 ) = 0;
                     uVar4 = 0;
                     *(undefined4*)( param_1 + 0x38 ) = 0;
                     goto LAB_00102455;
                  }

                  *(uint*)( param_1 + 0x38 ) = local_28;
                  goto LAB_001022e0;
               }

            }

         }
 else if (*(long*)( lVar2 + 0x10 ) != 0) {
            if (*(long*)( param_1 + 0x20 ) != 0) {
               CRYPTO_clear_free(*(long*)( param_1 + 0x20 ), *(undefined4*)( param_1 + 0x28 ), "providers/implementations/kdfs/argon2.c", 0x513);
               *(undefined8*)( param_1 + 0x20 ) = 0;
               *(undefined4*)( param_1 + 0x28 ) = 0;
            }

            iVar1 = OSSL_PARAM_get_octet_string(lVar2, param_1 + 0x20, 0, &local_28);
            if (iVar1 != 0) {
               if (CONCAT44(iStack_24, local_28) < 8) {
                  ERR_new();
                  ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x51c, "kdf_argon2_ctx_set_salt");
                  ERR_set_error(0x39, 0x70, "min: %u", 8);
               }
 else {
                  if (iStack_24 == 0) {
                     *(uint*)( param_1 + 0x28 ) = local_28;
                     goto LAB_00102265;
                  }

                  ERR_new();
                  ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x522, "kdf_argon2_ctx_set_salt");
                  ERR_set_error(0x39, 0x70, "max: %u", 0xffffffff);
               }

               CRYPTO_free(*(void**)( param_1 + 0x20 ));
               *(undefined8*)( param_1 + 0x20 ) = 0;
               uVar4 = 0;
               *(undefined4*)( param_1 + 0x28 ) = 0;
               goto LAB_00102455;
            }

         }

      }
 else if (*(long*)( lVar2 + 0x10 ) != 0) {
         if (*(long*)( param_1 + 0x10 ) != 0) {
            CRYPTO_clear_free(*(long*)( param_1 + 0x10 ), *(undefined4*)( param_1 + 0x18 ), "providers/implementations/kdfs/argon2.c", 0x4f3);
            *(undefined8*)( param_1 + 0x10 ) = 0;
            *(undefined4*)( param_1 + 0x18 ) = 0;
         }

         iVar1 = OSSL_PARAM_get_octet_string(lVar2, param_1 + 0x10, 0, &local_28);
         if (iVar1 != 0) {
            if (iStack_24 != 0) {
               ERR_new();
               ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x4fc, "kdf_argon2_ctx_set_pwd");
               ERR_set_error(0x39, 0x70, "max: %u", 0xffffffff);
               CRYPTO_free(*(void**)( param_1 + 0x10 ));
               *(undefined8*)( param_1 + 0x10 ) = 0;
               uVar4 = 0;
               *(undefined4*)( param_1 + 0x18 ) = 0;
               goto LAB_00102455;
            }

            *(uint*)( param_1 + 0x18 ) = local_28;
            goto LAB_001021e0;
         }

      }

      LAB_001023b4:uVar4 = 0;
   }

   LAB_00102455:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 kdf_argon2_derive(ulong param_1, undefined8 param_2, ulong param_3, undefined8 param_4) {
   undefined1 auVar1[16];
   int iVar2;
   uint uVar3;
   long lVar4;
   EVP_MD_CTX *ctx;
   long *ptr;
   ulong *ptr_00;
   ulong uVar5;
   undefined8 uVar6;
   uint uVar7;
   ulong *puVar8;
   long *plVar9;
   uint uVar10;
   long in_FS_OFFSET;
   undefined4 uVar11;
   undefined1 local_f8[76];
   uint local_ac;
   undefined4 local_a8[4];
   undefined8 local_98;
   undefined4 local_90;
   undefined4 local_8c;
   uchar local_88[64];
   undefined1 local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ossl_prov_is_running();
   if (( iVar2 != 0 ) && ( iVar2 = iVar2 != 0 )) {
      if (*(long*)( param_1 + 0x90 ) == 0) {
         lVar4 = EVP_MAC_fetch(*(undefined8*)( param_1 + 0x80 ), "blake2bmac", *(undefined8*)( param_1 + 0x98 ));
         *(long*)( param_1 + 0x90 ) = lVar4;
         if (lVar4 == 0) {
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x404, "kdf_argon2_derive");
            ERR_set_error(0x39, 0x96, "cannot fetch blake2bmac");
            goto LAB_0010296d;
         }

      }

      if (*(long*)( param_1 + 0x88 ) == 0) {
         lVar4 = EVP_MD_fetch(*(undefined8*)( param_1 + 0x80 ), "blake2b512", *(undefined8*)( param_1 + 0x98 ));
         *(long*)( param_1 + 0x88 ) = lVar4;
         if (lVar4 == 0) {
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x40c, "kdf_argon2_derive");
            ERR_set_error(0x39, 0x81, "cannot fetch blake2b512");
            goto LAB_0010296d;
         }

      }

      if (( *(long*)( param_1 + 0x20 ) == 0 ) || ( *(int*)( param_1 + 0x28 ) == 0 )) {
         ERR_new();
         ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x412, "kdf_argon2_derive");
         ERR_set_error(0x39, 0x83, 0);
      }
 else if (*(uint*)( param_1 + 8 ) == param_3) {
         LAB_00102a12:if (*(uint*)( param_1 + 100 ) < 3) {
            uVar7 = *(uint*)( param_1 + 0x58 );
            if (uVar7 < 2) {
               uVar7 = *(uint*)( param_1 + 0x54 );
               LAB_00102a2e:if (*(uint*)( param_1 + 0x50 ) < uVar7 * 8) {
                  ERR_new();
                  ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x440, "kdf_argon2_derive");
                  ERR_set_error(0x39, 0xeb, "m_cost must be greater or equal than 8 times the number of lanes");
               }
 else {
                  uVar3 = *(uint*)( param_1 + 0x50 ) / ( uVar7 * 4 );
                  *(undefined8*)( param_1 + 0x68 ) = 0;
                  uVar7 = uVar7 * 4 * uVar3;
                  lVar4 = (ulong)uVar7 << 10;
                  *(ulong*)( param_1 + 0x70 ) = CONCAT44(uVar7, *(undefined4*)( param_1 + 0x4c ));
                  *(ulong*)( param_1 + 0x78 ) = CONCAT44(uVar3 * 4, uVar3);
                  if (*(int*)( param_1 + 100 ) == 0) {
                     lVar4 = CRYPTO_zalloc(lVar4, "providers/implementations/kdfs/argon2.c", 0x2e3);
                  }
 else {
                     lVar4 = CRYPTO_secure_zalloc(lVar4, "providers/implementations/kdfs/argon2.c", 0x2e0);
                  }

                  *(long*)( param_1 + 0x68 ) = lVar4;
                  if (lVar4 == 0) {
                     ERR_new();
                     ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x2e7, "initialize");
                     ERR_set_error(0x39, 0xeb, "cannot allocate required memory");
                  }
 else {
                     local_f8._0_16_ = *(undefined1(*) [16])( param_1 + 0x48 );
                     local_a8[1] = *(undefined4*)( param_1 + 8 );
                     local_90 = *(undefined4*)( param_1 + 0x18 );
                     uVar11 = SUB164(local_f8._0_16_, 4);
                     local_a8[2] = SUB164(local_f8._0_16_, 8);
                     local_a8[0] = SUB164(local_f8._0_16_, 0xc);
                     local_98 = CONCAT44((int)( ( ulong ) * (undefined8*)( param_1 + 0x60 ) >> 0x20 ), (int)( ( ulong ) * (undefined8*)( param_1 + 0x58 ) >> 0x20 ));
                     local_a8[3] = uVar11;
                     ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
                     if (( ctx != (EVP_MD_CTX*)0x0 ) && ( iVar2 = EVP_DigestInit_ex(ctx, *(EVP_MD**)( param_1 + 0x88 ), (ENGINE*)0x0) ),iVar2 == 1) {
                        local_ac = 0;
                        while (local_8c = uVar11,iVar2 = EVP_DigestUpdate(ctx, &local_8c, 4),iVar2 == 1) {
                           local_ac = local_ac + 1;
                           if (6 < local_ac) {
                              if (*(void**)( param_1 + 0x10 ) != (void*)0x0) {
                                 iVar2 = EVP_DigestUpdate(ctx, *(void**)( param_1 + 0x10 ), ( ulong ) * (uint*)( param_1 + 0x18 ));
                                 if (iVar2 != 1) break;
                                 if (*(int*)( param_1 + 0x60 ) != 0) {
                                    OPENSSL_cleanse(*(void**)( param_1 + 0x10 ), ( ulong ) * (uint*)( param_1 + 0x18 ));
                                    *(undefined4*)( param_1 + 0x18 ) = 0;
                                 }

                              }

                              local_8c = *(undefined4*)( param_1 + 0x28 );
                              iVar2 = EVP_DigestUpdate(ctx, &local_8c, 4);
                              if (( iVar2 != 1 ) || ( ( *(void**)( param_1 + 0x20 ) != (void*)0x0 && ( iVar2 = EVP_DigestUpdate(ctx, *(void**)( param_1 + 0x20 ), ( ulong ) * (uint*)( param_1 + 0x28 )) ),iVar2 != 1 ) )) break;
                              local_8c = *(undefined4*)( param_1 + 0x38 );
                              iVar2 = EVP_DigestUpdate(ctx, &local_8c, 4);
                              if (iVar2 != 1) break;
                              if (*(void**)( param_1 + 0x30 ) != (void*)0x0) {
                                 iVar2 = EVP_DigestUpdate(ctx, *(void**)( param_1 + 0x30 ), ( ulong ) * (uint*)( param_1 + 0x38 ));
                                 if (iVar2 != 1) break;
                                 if (*(int*)( param_1 + 0x60 ) != 0) {
                                    OPENSSL_cleanse(*(void**)( param_1 + 0x30 ), ( ulong ) * (uint*)( param_1 + 0x38 ));
                                    *(undefined4*)( param_1 + 0x38 ) = 0;
                                 }

                              }

                              local_8c = *(undefined4*)( param_1 + 0x48 );
                              iVar2 = EVP_DigestUpdate(ctx, &local_8c, 4);
                              if (( iVar2 == 1 ) && ( ( *(void**)( param_1 + 0x40 ) == (void*)0x0 || ( iVar2 = EVP_DigestUpdate(ctx, *(void**)( param_1 + 0x40 ), ( ulong ) * (uint*)( param_1 + 0x48 )) ),iVar2 == 1 ) )) {
                                 local_ac = 0x40;
                                 EVP_DigestFinal_ex(ctx, local_88, &local_ac);
                              }

                              break;
                           }

                           uVar11 = local_a8[local_ac];
                        }
;
                     }

                     EVP_MD_CTX_free(ctx);
                     OPENSSL_cleanse(local_48, 8);
                     fill_first_blocks(local_88, param_1);
                     OPENSSL_cleanse(local_88, 0x48);
                     if (*(int*)( param_1 + 0x58 ) == 1) {
                        if (*(int*)( param_1 + 0x70 ) != 0) {
                           uVar7 = *(uint*)( param_1 + 0x54 );
                           uVar3 = 0;
                           do {
                              iVar2 = 0;
                              do {
                                 if (uVar7 == 0) break;
                                 uVar10 = 0;
                                 do {
                                    fill_segment(param_1, uVar3, uVar10, iVar2);
                                    uVar7 = *(uint*)( param_1 + 0x54 );
                                    uVar10 = uVar10 + 1;
                                 }
 while ( uVar10 < uVar7 );
                                 iVar2 = iVar2 + 1;
                              }
 while ( iVar2 != 4 );
                              uVar3 = uVar3 + 1;
                           }
 while ( uVar3 < *(uint*)( param_1 + 0x70 ) );
                        }

                        LAB_00103007:finalize(param_1, param_2);
                        uVar6 = 1;
                        goto LAB_0010296f;
                     }

                     ptr = (long*)CRYPTO_zalloc(( ulong ) * (uint*)( param_1 + 0x54 ) << 3, "providers/implementations/kdfs/argon2.c", 0x237);
                     ptr_00 = (ulong*)CRYPTO_zalloc(( ulong ) * (uint*)( param_1 + 0x54 ) * 0x18, "providers/implementations/kdfs/argon2.c", 0x238);
                     if (ptr == (long*)0x0) {
                        if (ptr_00 != (ulong*)0x0) {
                           CRYPTO_free(ptr_00);
                        }

                     }
 else if (ptr_00 != (ulong*)0x0) {
                        if (*(int*)( param_1 + 0x70 ) != 0) {
                           uVar7 = *(uint*)( param_1 + 0x54 );
                           uVar5 = 0;
                           do {
                              auVar1._12_4_ = 0;
                              auVar1._0_12_ = local_f8._4_12_;
                              local_f8._0_16_ = auVar1 << 0x20;
                              do {
                                 if (uVar7 == 0) break;
                                 uVar3 = 0;
                                 puVar8 = ptr_00;
                                 plVar9 = ptr;
                                 do {
                                    if (*(uint*)( param_1 + 0x58 ) <= uVar3) {
                                       iVar2 = ossl_crypto_thread_join(ptr[uVar3 - *(uint*)( param_1 + 0x58 )], 0);
                                       if (( iVar2 == 0 ) || ( iVar2 = ossl_crypto_thread_clean(ptr[uVar3 - *(int*)( param_1 + 0x58 )]) ),iVar2 == 0) goto LAB_00102d50;
                                       *plVar9 = 0;
                                    }

                                    puVar8[2] = param_1;
                                    uVar6 = *(undefined8*)( param_1 + 0x80 );
                                    puVar8[1] = (ulong)local_f8[0];
                                    *puVar8 = (ulong)uVar3 << 0x20 | uVar5;
                                    lVar4 = ossl_crypto_thread_start(uVar6, fill_segment_thr, puVar8);
                                    *plVar9 = lVar4;
                                    if (lVar4 == 0) {
                                       if (uVar3 == 0) goto LAB_00102d50;
                                       plVar9 = ptr;
                                       goto LAB_00102d3e;
                                    }

                                    uVar7 = *(uint*)( param_1 + 0x54 );
                                    uVar3 = uVar3 + 1;
                                    plVar9 = plVar9 + 1;
                                    puVar8 = puVar8 + 3;
                                 }
 while ( uVar3 < uVar7 );
                                 uVar3 = uVar7 - *(int*)( param_1 + 0x58 );
                                 if (uVar3 < uVar7) {
                                    plVar9 = ptr + uVar3;
                                    do {
                                       iVar2 = ossl_crypto_thread_join(*plVar9, 0);
                                       if (( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 )) goto LAB_00102d50;
                                       uVar7 = *(uint*)( param_1 + 0x54 );
                                       uVar3 = uVar3 + 1;
                                       *plVar9 = 0;
                                       plVar9 = plVar9 + 1;
                                    }
 while ( uVar3 < uVar7 );
                                 }

                                 iVar2 = local_f8._0_4_ + 1;
                                 local_f8._0_4_ = iVar2;
                              }
 while ( iVar2 != 4 );
                              uVar3 = (int)uVar5 + 1;
                              uVar5 = (ulong)uVar3;
                           }
 while ( uVar3 < *(uint*)( param_1 + 0x70 ) );
                        }

                        CRYPTO_free(ptr_00);
                        CRYPTO_free(ptr);
                        goto LAB_00103007;
                     }

                     if (ptr != (long*)0x0) goto LAB_00102d5d;
                  }

               }

            }
 else {
               uVar5 = ossl_get_avail_threads(*(undefined8*)( param_1 + 0x80 ));
               if (uVar5 < uVar7) {
                  ERR_new();
                  ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x431, "kdf_argon2_derive");
                  uVar6 = ossl_get_avail_threads(*(undefined8*)( param_1 + 0x80 ));
                  ERR_set_error(0x39, 0xea, "requested %u threads, available: %u", *(undefined4*)( param_1 + 0x58 ), uVar6);
               }
 else {
                  uVar7 = *(uint*)( param_1 + 0x54 );
                  if (*(uint*)( param_1 + 0x58 ) <= uVar7) goto LAB_00102a2e;
                  ERR_new();
                  ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x438, "kdf_argon2_derive");
                  ERR_set_error(0x39, 0xea, "requested more threads (%u) than lanes (%u)", *(undefined4*)( param_1 + 0x58 ), *(undefined4*)( param_1 + 0x54 ));
               }

            }

         }
 else {
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x425, "kdf_argon2_derive");
            ERR_set_error(0x39, 0x7d, "invalid Argon2 type");
         }

      }
 else {
         lVar4 = OSSL_PARAM_locate(param_4, &_LC0);
         if (lVar4 == 0) {
            if (3 < (uint)param_3) {
               *(uint*)( param_1 + 8 ) = (uint)param_3;
               goto LAB_00102a12;
            }

            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x4c7, "kdf_argon2_ctx_set_out_length");
            ERR_set_error(0x39, 0xd9, "min: %u", 4);
         }
 else {
            ERR_new();
            ERR_set_debug("providers/implementations/kdfs/argon2.c", 0x418, "kdf_argon2_derive");
            ERR_set_error(0x39, 0x6a, 0);
         }

      }

   }

   goto LAB_0010296d;
   while (true) {
      *plVar9 = 0;
      plVar9 = plVar9 + 1;
      if (ptr + uVar3 == plVar9) break;
      LAB_00102d3e:iVar2 = ossl_crypto_thread_join(*plVar9, 0);
      if (( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 )) break;
   }
;
   LAB_00102d50:CRYPTO_free(ptr_00);
   LAB_00102d5d:CRYPTO_free(ptr);
   LAB_0010296d:uVar6 = 0;
   LAB_0010296f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar6;
}

