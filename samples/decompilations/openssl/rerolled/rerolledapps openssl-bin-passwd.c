undefined1 *md5crypt(byte *param_1, char *param_2, undefined8 param_3) {
   char cVar1;
   int iVar2;
   size_t cnt;
   size_t sVar3;
   size_t cnt_00;
   size_t sVar4;
   EVP_MD_CTX *ctx;
   EVP_MD *pEVar5;
   EVP_MD_CTX *ctx_00;
   undefined1 *puVar6;
   byte *pbVar7;
   uint uVar8;
   ulong uVar9;
   uint uVar10;
   long in_FS_OFFSET;
   undefined1 local_66[5];
   char local_61[9];
   byte local_58;
   byte local_57;
   byte local_56;
   byte local_55;
   byte local_54;
   byte local_53;
   byte local_52;
   byte local_51;
   byte local_50;
   byte local_4f;
   byte local_4e;
   byte local_4d;
   byte local_4c;
   byte local_4b;
   byte local_4a;
   byte local_49;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cnt = strlen((char*)param_1);
   out_buf_2[0] = 0;
   sVar3 = strlen(param_2);
   OPENSSL_strlcpy(local_66, param_2, 5);
   OPENSSL_strlcpy(local_61, param_3, 9);
   cnt_00 = strlen(local_61);
   if (sVar3 == 0) {
      puVar6 = out_buf_2;
      OPENSSL_strlcat(out_buf_2, local_61, 0x29);
      sVar4 = strlen(out_buf_2);
      if (0xe < sVar4) goto LAB_001003e8;
      LAB_001000f2:ctx = (EVP_MD_CTX*)EVP_MD_CTX_new();
      if (ctx == (EVP_MD_CTX*)0x0) goto LAB_001003e8;
      pEVar5 = EVP_md5();
      iVar2 = EVP_DigestInit_ex(ctx, pEVar5, (ENGINE*)0x0);
      if (( ( ( iVar2 == 0 ) || ( iVar2 = EVP_DigestUpdate(ctx, param_1, cnt) ),iVar2 == 0 ) ) || ( ( sVar3 != 0 && ( ( ( iVar2 = EVP_DigestUpdate(ctx, &ascii_dollar, 1) ),iVar2 == 0 || ( iVar2 = EVP_DigestUpdate(ctx, local_66, sVar3) ),iVar2 == 0 ) ) || ( iVar2 = EVP_DigestUpdate(ctx, &ascii_dollar, 1) ),iVar2 == 0 ) )) {
         ctx_00 = (EVP_MD_CTX*)0x0;
      }
 else {
         pEVar5 = EVP_md5();
         iVar2 = EVP_DigestInit_ex(ctx_00, pEVar5, (ENGINE*)0x0);
         if (( ( iVar2 != 0 ) && ( iVar2 = EVP_DigestUpdate(ctx_00, param_1, cnt) ),iVar2 != 0 )) {
            iVar2 = EVP_DigestFinal_ex(ctx_00, &local_58, (uint*)0x0);
            if (iVar2 != 0) {
               uVar10 = (uint)cnt;
               sVar3 = cnt;
               if (0x10 < uVar10) {
                  uVar9 = cnt & 0xffffffff;
                  do {
                     iVar2 = EVP_DigestUpdate(ctx, &local_58, 0x10);
                     if (iVar2 == 0) goto LAB_001003f2;
                     uVar8 = (int)uVar9 - 0x10;
                     uVar9 = (ulong)uVar8;
                  }
 while ( 0x10 < uVar8 );
                  sVar3 = (size_t)uVar8;
               }

               iVar2 = EVP_DigestUpdate(ctx, &local_58, sVar3 & 0xffffffff);
               if (iVar2 != 0) {
                  uVar9 = cnt & 0xffffffff;
                  while (uVar10 != 0) {
                     pbVar7 = &DAT_00102280;
                     if (( uVar9 & 1 ) == 0) {
                        pbVar7 = param_1;
                     }

                     iVar2 = EVP_DigestUpdate(ctx, pbVar7, 1);
                     if (iVar2 == 0) goto LAB_001003f2;
                     uVar10 = (int)uVar9 >> 1;
                     uVar9 = (ulong)uVar10;
                  }
;
                  iVar2 = EVP_DigestFinal_ex(ctx, &local_58, (uint*)0x0);
                  if (iVar2 != 0) {
                     uVar10 = 0;
                     do {
                        pEVar5 = EVP_md5();
                        iVar2 = EVP_DigestInit_ex(ctx_00, pEVar5, (ENGINE*)0x0);
                        if (iVar2 == 0) goto LAB_001003f2;
                        sVar3 = cnt;
                        pbVar7 = param_1;
                        if (( uVar10 & 1 ) == 0) {
                           sVar3 = 0x10;
                           pbVar7 = &local_58;
                        }

                        iVar2 = EVP_DigestUpdate(ctx_00, pbVar7, sVar3);
                        if (( ( iVar2 == 0 ) || ( ( 0x55555555 < uVar10 * -0x55555555 && ( iVar2 = EVP_DigestUpdate(ctx_00, local_61, cnt_00) ),iVar2 == 0 ) ) )) goto LAB_001003f2;
                        sVar3 = cnt;
                        pbVar7 = param_1;
                        if (( uVar10 & 1 ) != 0) {
                           sVar3 = 0x10;
                           pbVar7 = &local_58;
                        }

                        iVar2 = EVP_DigestUpdate(ctx_00, pbVar7, sVar3);
                        if (( iVar2 == 0 ) || ( iVar2 = iVar2 == 0 )) goto LAB_001003f2;
                        uVar10 = uVar10 + 1;
                     }
 while ( uVar10 != 1000 );
                     EVP_MD_CTX_free(ctx_00);
                     EVP_MD_CTX_free(ctx);
                     puVar6 = puVar6 + cnt_00;
                     cVar1 = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[local_4c & 0x3f];
                     *puVar6 = 0x24;
                     puVar6[1] = cVar1;
                     puVar6[2] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[(int)( ( uint )(local_4c >> 6) | (uint)local_52 * 4 & 0x3c )];
                     puVar6[4] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[local_58 >> 2];
                     cVar1 = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[local_4b & 0x3f];
                     puVar6[3] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[(int)( ( uint )(local_52 >> 4) | ( local_58 & 3 ) << 4 )];
                     puVar6[5] = cVar1;
                     cVar1 = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[(int)( ( uint )(local_4b >> 6) | (uint)local_51 * 4 & 0x3c )];
                     puVar6[8] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[local_57 >> 2];
                     puVar6[6] = cVar1;
                     puVar6[9] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[local_4a & 0x3f];
                     puVar6[7] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[(int)( ( uint )(local_51 >> 4) | ( local_57 & 3 ) << 4 )];
                     puVar6[10] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[(int)( ( uint )(local_4a >> 6) | (uint)local_50 * 4 & 0x3c )];
                     cVar1 = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[(int)( ( uint )(local_50 >> 4) | ( local_56 & 3 ) << 4 )];
                     puVar6[0xc] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[local_56 >> 2];
                     puVar6[0xb] = cVar1;
                     puVar6[0xd] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[local_49 & 0x3f];
                     puVar6[0xe] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[(int)( ( uint )(local_49 >> 6) | (uint)local_4f * 4 & 0x3c )];
                     puVar6[0xf] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[(int)( ( uint )(local_4f >> 4) | ( local_55 & 3 ) << 4 )];
                     puVar6[0x10] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[local_55 >> 2];
                     puVar6[0x11] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[local_53 & 0x3f];
                     puVar6[0x12] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[(int)( (uint)local_4e * 4 & 0x3c | ( uint )(local_53 >> 6) )];
                     puVar6[0x13] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[(int)( ( uint )(local_4e >> 4) | ( local_54 & 3 ) << 4 )];
                     puVar6[0x14] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[local_54 >> 2];
                     puVar6[0x17] = 0;
                     puVar6[0x15] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[local_4d & 0x3f];
                     puVar6[0x16] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[local_4d >> 6];
                     puVar6 = out_buf_2;
                     goto LAB_00100417;
                  }

               }

            }

         }

      }

   }
 else {
      OPENSSL_strlcat(out_buf_2, &ascii_dollar, 0x29);
      if (sVar3 < 5) {
         OPENSSL_strlcat(out_buf_2, local_66, 0x29);
         OPENSSL_strlcat(out_buf_2, &ascii_dollar, 0x29);
         OPENSSL_strlcat(out_buf_2, local_61, 0x29);
         sVar4 = strlen(out_buf_2);
         if (sVar4 < 0xf) {
            puVar6 = (undefined1*)( sVar3 + 0x102242 );
            goto LAB_001000f2;
         }

      }

      LAB_001003e8:ctx_00 = (EVP_MD_CTX*)0x0;
      ctx = (EVP_MD_CTX*)0x0;
   }

   LAB_001003f2:CRYPTO_free((void*)0x0);
   EVP_MD_CTX_free(ctx_00);
   EVP_MD_CTX_free(ctx);
   puVar6 = (undefined1*)0x0;
   LAB_00100417:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 do_passwd_constprop_0(int param_1, long *param_2, long *param_3, byte *param_4, BIO *param_5, int param_6, uint param_7, uint param_8, int param_9) {
   char *__s1;
   int iVar1;
   size_t sVar2;
   size_t sVar3;
   EVP_MD_CTX *ctx;
   EVP_MD_CTX *ctx_00;
   undefined8 uVar4;
   uchar *puVar5;
   byte *pbVar6;
   byte *pbVar7;
   long lVar8;
   ulong uVar9;
   uint uVar10;
   size_t cnt;
   undefined1 *puVar11;
   undefined *puVar12;
   undefined8 *puVar13;
   uchar *puVar14;
   ulong uVar15;
   ulong cnt_00;
   long in_FS_OFFSET;
   byte bVar16;
   char *local_168;
   EVP_MD *local_158;
   size_t local_150;
   uchar *local_148;
   ulong local_140;
   byte *local_138;
   long local_120;
   char *local_108;
   undefined1 local_fa[2];
   char local_f8[32];
   byte local_d8;
   byte local_d7;
   byte local_d6;
   byte local_d5;
   byte local_d4;
   byte local_d3;
   byte local_d2;
   byte local_d1;
   byte local_d0;
   byte local_cf;
   byte local_ce;
   byte local_cd;
   byte local_cc;
   byte local_cb;
   byte local_ca;
   byte local_c9;
   byte local_c8;
   byte local_c7;
   byte local_c6;
   byte local_c5;
   byte local_c4;
   byte local_c3;
   byte local_c2;
   byte local_c1;
   byte local_c0;
   byte local_bf;
   byte local_be;
   byte local_bd;
   byte local_bc;
   byte local_bb;
   undefined2 local_ba;
   byte local_b8;
   byte local_b7;
   byte local_b6;
   byte local_b5;
   byte local_b4;
   byte local_b3;
   byte local_b2;
   byte local_b1;
   byte local_b0;
   byte local_af;
   byte local_ae;
   byte local_ad;
   byte local_ac;
   byte local_ab;
   byte local_aa;
   byte local_a9;
   byte local_a8;
   byte local_a7;
   byte local_a6;
   byte local_a5;
   byte local_a4;
   byte local_a3;
   byte local_a2;
   byte local_a1;
   byte local_a0[4];
   byte local_9c;
   byte local_9b;
   byte local_9a;
   byte local_99;
   undefined8 local_98[11];
   long local_40;
   bVar16 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      if (( param_9 - 1U < 2 ) || ( param_9 == 5 )) {
         lVar8 = 8;
      }
 else {
         lVar8 = ( ulong )(param_9 - 3U < 2) << 4;
      }

      if (*param_3 == 0) {
         puVar5 = (uchar*)app_malloc(lVar8 + 1, "salt buffer");
         *param_3 = (long)puVar5;
         *param_2 = (long)puVar5;
      }
 else {
         puVar5 = (uchar*)*param_2;
      }

      iVar1 = RAND_bytes(puVar5, (int)lVar8);
      uVar4 = 0;
      if (iVar1 < 1) goto LAB_00100ca0;
      if (lVar8 != 0) {
         *(byte*)*param_2 = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[*(byte*)*param_2 & 0x3f];
         for (int i = 0; i < 7; i++) {
            *(char*)( *param_2 + ( i + 1 ) ) = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[*(byte*)( *param_2 + ( i + 1 ) ) & 63];
         }

         if (lVar8 != 8) {
            for (int i = 0; i < 8; i++) {
               *(char*)( *param_2 + ( i + 8 ) ) = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"[*(byte*)( *param_2 + ( i + 8 ) ) & 63];
            }

         }

      }

      *(undefined1*)( *param_2 + lVar8 ) = 0;
   }

   sVar2 = strlen((char*)param_4);
   if (0x100 < sVar2) {
      if (param_6 == 0) {
         BIO_printf(_bio_err, "Warning: truncating password to %u characters\n", 0x100);
      }

      param_4[0x100] = 0;
   }

   if (param_9 - 1U < 2) {
      puVar12 = &_LC3;
      if (param_9 == 1) {
         puVar12 = &_LC2;
      }

      puVar11 = (undefined1*)md5crypt(param_4, puVar12, *param_2);
   }
 else if (param_9 == 5) {
      puVar11 = (undefined1*)md5crypt(param_4, &_LC8, *param_2);
   }
 else {
      if (param_9 - 3U < 2) {
         __s1 = (char*)*param_2;
         sVar2 = strlen((char*)param_4);
         if (param_9 == 3) {
            local_158 = EVP_sha256();
            cnt_00 = 0x20;
            local_168 = "5";
         }
 else {
            local_158 = EVP_sha512();
            cnt_00 = 0x40;
            local_168 = "6";
         }

         iVar1 = strncmp(__s1, "rounds=", 7);
         if (iVar1 == 0) {
            uVar15 = strtoul(__s1 + 7, &local_108, 10);
            if (*local_108 != '$') goto LAB_00100c2b;
            local_140 = 999999999;
            if (uVar15 < 1000000000) {
               uVar10 = 1000;
               if (999 < uVar15) {
                  uVar10 = (uint)uVar15;
               }

               local_140 = (ulong)uVar10;
            }

            OPENSSL_strlcpy(local_fa, local_168, 2);
            OPENSSL_strlcpy(local_f8, local_108 + 1, 0x11);
            local_150 = strlen(local_f8);
            out_buf_0[0] = 0;
            OPENSSL_strlcat(out_buf_0, &ascii_dollar, 0x7c);
            OPENSSL_strlcat(out_buf_0, local_fa, 0x7c);
            OPENSSL_strlcat(out_buf_0, &ascii_dollar, 0x7c);
            BIO_snprintf((char*)local_98, 0x50, "rounds=%u", local_140);
            OPENSSL_strlcat(out_buf_0, local_98, 0x7c);
            OPENSSL_strlcat(out_buf_0, &ascii_dollar, 0x7c);
            lVar8 = 0x14;
         }
 else {
            OPENSSL_strlcpy(local_fa, local_168, 2);
            OPENSSL_strlcpy(local_f8, __s1, 0x11);
            local_150 = strlen(local_f8);
            out_buf_0[0] = 0;
            OPENSSL_strlcat(out_buf_0, &ascii_dollar, 0x7c);
            OPENSSL_strlcat(out_buf_0, local_fa, 0x7c);
            OPENSSL_strlcat(out_buf_0, &ascii_dollar, 0x7c);
            local_140 = 5000;
            lVar8 = 3;
         }

         local_148 = (uchar*)local_f8;
         OPENSSL_strlcat(out_buf_0, local_148, 0x7c);
         sVar3 = strlen(out_buf_0);
         if (( lVar8 + local_150 < sVar3 ) || ( ctx = (EVP_MD_CTX*)EVP_MD_CTX_new() ),ctx == (EVP_MD_CTX*)0x0) {
            LAB_00100ec7:ctx_00 = (EVP_MD_CTX*)0x0;
            ctx = (EVP_MD_CTX*)0x0;
            local_148 = (uchar*)0x0;
            local_138 = (byte*)0x0;
         }
 else {
            iVar1 = EVP_DigestInit_ex(ctx, local_158, (ENGINE*)0x0);
            if (( iVar1 == 0 ) || ( ( iVar1 = EVP_DigestUpdate(ctx, param_4, sVar2) ),iVar1 == 0 || ( iVar1 = EVP_DigestUpdate(ctx, local_148, local_150) ),iVar1 == 0 )) {
               local_148 = (uchar*)0x0;
               ctx_00 = (EVP_MD_CTX*)0x0;
               local_138 = (byte*)0x0;
            }
 else {
               ctx_00 = (EVP_MD_CTX*)EVP_MD_CTX_new();
               if (ctx_00 != (EVP_MD_CTX*)0x0) {
                  iVar1 = EVP_DigestInit_ex(ctx_00, local_158, (ENGINE*)0x0);
                  if (iVar1 == 0) {
                     LAB_00100f28:local_148 = (uchar*)0x0;
                     local_138 = (byte*)0x0;
                     goto LAB_00100be8;
                  }

                  iVar1 = EVP_DigestUpdate(ctx_00, param_4, sVar2);
                  if (( ( iVar1 != 0 ) && ( iVar1 = EVP_DigestUpdate(ctx_00, local_148, local_150) ),iVar1 != 0 )) {
                     iVar1 = EVP_DigestFinal_ex(ctx_00, &local_d8, (uint*)0x0);
                     if (iVar1 != 0) {
                        uVar15 = sVar2;
                        sVar3 = sVar2;
                        if (cnt_00 < sVar2) {
                           do {
                              iVar1 = EVP_DigestUpdate(ctx, &local_d8, cnt_00);
                              if (iVar1 == 0) goto LAB_00100bcb;
                              uVar15 = uVar15 - cnt_00;
                           }
 while ( cnt_00 < uVar15 );
                           iVar1 = EVP_DigestUpdate(ctx, &local_d8, uVar15);
                           if (iVar1 != 0) {
                              do {
                      cnt = cnt_00;
                      pbVar7 = &local_d8;
                      if ((sVar3 & 1) == 0) {
                        cnt = sVar2;
                        pbVar7 = param_4;
                      }
                      iVar1 = EVP_DigestUpdate(ctx,pbVar7,cnt);
                      if (iVar1 == 0) goto LAB_00100f28;
                      sVar3 = sVar3 >> 1;
joined_r0x001011ca:
                    } while (sVar3 != 0);
                    iVar1 = EVP_DigestFinal_ex(ctx,&local_d8,(uint *)0x0);
                    if ((iVar1 != 0) &&
                       (iVar1 = EVP_DigestInit_ex(ctx_00,local_158,(ENGINE *)0x0), sVar3 = sVar2,
                       iVar1 != 0)) {
                      for (; sVar3 != 0; sVar3 = sVar3 - 1) {
                        iVar1 = EVP_DigestUpdate(ctx_00,param_4,sVar2);
                        if (iVar1 == 0) goto LAB_00100f28;
                      }
                      iVar1 = EVP_DigestFinal_ex(ctx_00,(uchar *)local_98,(uint *)0x0);
                      if ((iVar1 != 0) &&
                         (local_138 = (byte *)CRYPTO_zalloc(sVar2,"apps/passwd.c",0x28c),
                         local_138 != (byte *)0x0)) {
                        pbVar7 = local_138;
                        uVar15 = sVar2;
                        if (cnt_00 < sVar2) {
                          pbVar6 = local_138;
                          do {
                            uVar15 = uVar15 - cnt_00;
                            *(undefined8 *)pbVar6 = local_98[0];
                            *(undefined8 *)(pbVar6 + (cnt_00 - 8)) =
                                 *(undefined8 *)(local_a0 + cnt_00);
                            lVar8 = (long)pbVar6 - (long)((ulong)(pbVar6 + 8) & 0xfffffffffffffff8);
                            puVar5 = (uchar *)((long)local_98 + -lVar8);
                            puVar13 = (undefined8 *)((ulong)(pbVar6 + 8) & 0xfffffffffffffff8);
                            for (uVar9 = (ulong)((uint)((int)lVar8 + (int)cnt_00) >> 3); uVar9 != 0;
                                uVar9 = uVar9 - 1) {
                              *puVar13 = *(undefined8 *)puVar5;
                              puVar5 = puVar5 + ((ulong)bVar16 * -2 + 1) * 8;
                              puVar13 = puVar13 + (ulong)bVar16 * -2 + 1;
                            }
                            pbVar7 = pbVar6 + cnt_00;
                            pbVar6 = pbVar6 + cnt_00;
                          } while (cnt_00 < uVar15);
                        }
                        memcpy(pbVar7,local_98,uVar15);
                        iVar1 = EVP_DigestInit_ex(ctx_00,local_158,(ENGINE *)0x0);
                        if (iVar1 != 0) {
                          local_120 = (ulong)local_d8 + 0x10;
                          do {
                            iVar1 = EVP_DigestUpdate(ctx_00,local_148,local_150);
                            if (iVar1 == 0) goto LAB_00101199;
                            local_120 = local_120 + -1;
                          } while (local_120 != 0);
                          iVar1 = EVP_DigestFinal_ex(ctx_00,(uchar *)local_98,(uint *)0x0);
                          if ((iVar1 != 0) &&
                             (local_148 = (uchar *)CRYPTO_zalloc(local_150,"apps/passwd.c",0x29d),
                             local_148 != (uchar *)0x0)) {
                            puVar5 = (uchar *)local_98;
                            puVar14 = local_148;
                            for (uVar15 = local_150 & 0xffffffff; uVar15 != 0; uVar15 = uVar15 - 1)
                            {
                              *puVar14 = *puVar5;
                              puVar5 = puVar5 + (ulong)bVar16 * -2 + 1;
                              puVar14 = puVar14 + (ulong)bVar16 * -2 + 1;
                            }
                            uVar15 = 0;
                            do {
                              iVar1 = EVP_DigestInit_ex(ctx_00,local_158,(ENGINE *)0x0);
                              if (iVar1 == 0) goto LAB_00100be8;
                              sVar3 = cnt_00;
                              pbVar7 = &local_d8;
                              if ((uVar15 & 1) != 0) {
                                sVar3 = sVar2;
                                pbVar7 = local_138;
                              }
                              iVar1 = EVP_DigestUpdate(ctx_00,pbVar7,sVar3);
                              if (((iVar1 == 0) ||
                                  ((uVar15 % 3 != 0 &&
                                   (iVar1 = EVP_DigestUpdate(ctx_00,local_148,local_150), iVar1 == 0
                                   )))) || ((uVar15 % 7 != 0 &&
                                            (iVar1 = EVP_DigestUpdate(ctx_00,local_138,sVar2),
                                            iVar1 == 0)))) goto LAB_00100be8;
                              uVar9 = sVar2;
                              pbVar7 = local_138;
                              if ((uVar15 & 1) != 0) {
                                uVar9 = cnt_00;
                                pbVar7 = &local_d8;
                              }
                              iVar1 = EVP_DigestUpdate(ctx_00,pbVar7,uVar9);
                              if ((iVar1 == 0) ||
                                 (iVar1 = EVP_DigestFinal_ex(ctx_00,&local_d8,(uint *)0x0),
                                 iVar1 == 0)) goto LAB_00100be8;
                              uVar15 = uVar15 + 1;
                            } while (uVar15 < local_140);
                            EVP_MD_CTX_free(ctx_00);
                            EVP_MD_CTX_free(ctx);
                            CRYPTO_free(local_138);
                            CRYPTO_free(local_148);
                            sVar2 = strlen(out_buf_0);
                            out_buf_0[sVar2] = 0x24;
                            if (*local_168 == '5') {
                              lVar8 = 0;
                              uVar10 = (uint)local_d8 << 0x10 | (uint)local_ce << 8 | (uint)local_c4
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021c1 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_c3 << 0x10 | (uint)local_d7 << 8 | (uint)local_cd
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021c5 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_cc << 0x10 | (uint)local_c2 << 8 | (uint)local_d6
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021c9 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_d5 << 0x10 | (uint)local_cb << 8 | (uint)local_c1
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021cd + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_c0 << 0x10 | (uint)local_d4 << 8 | (uint)local_ca
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021d1 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_c9 << 0x10 | (uint)local_bf << 8 | (uint)local_d3
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021d5 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_d2 << 0x10 | (uint)local_c8 << 8 | (uint)local_be
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021d9 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_bd << 0x10 | (uint)local_d1 << 8 | (uint)local_c7
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021dd + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_c6 << 0x10 | (uint)local_bc << 8 | (uint)local_d0
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021e1 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_cf << 0x10 | (uint)local_c5 << 8 | (uint)local_bb
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021e5 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_ba;
                              do {
                                *(char *)(sVar2 + 0x1021e9 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 3);
                              puVar11 = out_buf_0 + sVar2 + 0x2c;
                            }
                            else {
                              if (*local_168 != '6') goto LAB_00100ec7;
                              lVar8 = 0;
                              uVar10 = (uint)local_d8 << 0x10 | (uint)local_c3 << 8 | (uint)local_ae
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021c1 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_c2 << 0x10 | (uint)local_ad << 8 | (uint)local_d7
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021c5 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_ac << 0x10 | (uint)local_d6 << 8 | (uint)local_c1
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021c9 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_d5 << 0x10 | (uint)local_c0 << 8 | (uint)local_ab
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021cd + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_bf << 0x10 | (uint)local_aa << 8 | (uint)local_d4
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021d1 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_a9 << 0x10 | (uint)local_d3 << 8 | (uint)local_be
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021d5 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_d2 << 0x10 | (uint)local_bd << 8 | (uint)local_a8
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021d9 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_bc << 0x10 | (uint)local_a7 << 8 | (uint)local_d1
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021dd + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_a6 << 0x10 | (uint)local_d0 << 8 | (uint)local_bb
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021e1 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_cf << 0x10 | (uint)(byte)local_ba << 8 |
                                       (uint)local_a5;
                              do {
                                *(char *)(sVar2 + 0x1021e5 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_ba._1_1_ << 0x10 | (uint)local_a4 << 8 |
                                       (uint)local_ce;
                              do {
                                *(char *)(sVar2 + 0x1021e9 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_a3 << 0x10 | (uint)local_cd << 8 | (uint)local_b8
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021ed + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_cc << 0x10 | (uint)local_b7 << 8 | (uint)local_a2
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021f1 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_b6 << 0x10 | (uint)local_a1 << 8 | (uint)local_cb
                              ;
                              do {
                                *(char *)(sVar2 + 0x1021f5 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_a0[0] << 0x10 | (uint)local_ca << 8 |
                                       (uint)local_b5;
                              do {
                                *(char *)(sVar2 + 0x1021f9 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_c9 << 0x10 | (uint)local_b4 << 8 |
                                       (uint)local_a0[1];
                              do {
                                *(char *)(sVar2 + 0x1021fd + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_b3 << 0x10 | (uint)local_a0[2] << 8 |
                                       (uint)local_c8;
                              do {
                                *(char *)(sVar2 + 0x102201 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_a0[3] << 0x10 | (uint)local_c7 << 8 |
                                       (uint)local_b2;
                              do {
                                *(char *)(sVar2 + 0x102205 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_c6 << 0x10 | (uint)local_b1 << 8 | (uint)local_9c
                              ;
                              do {
                                *(char *)(sVar2 + 0x102209 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_b0 << 0x10 | (uint)local_9b << 8 | (uint)local_c5
                              ;
                              do {
                                *(char *)(sVar2 + 0x10220d + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              lVar8 = 0;
                              uVar10 = (uint)local_9a << 0x10 | (uint)local_c4 << 8 | (uint)local_af
                              ;
                              do {
                                *(char *)(sVar2 + 0x102211 + lVar8) =
                                     "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                     [uVar10 & 0x3f];
                                lVar8 = lVar8 + 1;
                                uVar10 = uVar10 >> 6;
                              } while (lVar8 != 4);
                              puVar11 = out_buf_0 + sVar2 + 0x57;
                              *(ushort *)(out_buf_0 + sVar2 + 0x55) =
                                   CONCAT11("./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                            [local_99 >> 6],
                                            "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzapps/passwd.c"
                                            [local_99 & 0x3f]);
                            }
                            *puVar11 = 0;
                            puVar11 = out_buf_0;
                            goto LAB_00100c64;
                          }
                        }
LAB_00101199:
                        local_148 = (uchar *)0x0;
                        goto LAB_00100be8;
                      }
                    }
                  }
                           }
 else {
                              iVar1 = EVP_DigestUpdate(ctx, &local_d8, sVar2);
                              if (iVar1 != 0) goto joined_r0x001011ca;
                           }

                           goto LAB_00100f28;
                        }

                     }

                  }

                  LAB_00100bcb:local_148 = (uchar*)0x0;
                  local_138 = (byte*)0x0;
               }

            }

            LAB_00100be8:EVP_MD_CTX_free(ctx_00);
            EVP_MD_CTX_free(ctx);
            CRYPTO_free(local_138);
            CRYPTO_free(local_148);
            CRYPTO_free((void*)0x0);
         }

         LAB_00100c2b:puVar11 = (undefined1*)0x0;
      }

      LAB_00100c64:if (( param_7 & ( param_8 ^ 1 ) ) == 0) {
         if (( param_7 & param_8 ) == 0) {
            BIO_printf(param_5, "%s\n");
         }
 else {
            BIO_printf(param_5, "%s\t%s\n", puVar11, param_4);
         }

      }
 else {
         BIO_printf(param_5, "%s\t%s\n", param_4, puVar11);
      }

      uVar4 = 1;
      LAB_00100ca0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar4;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   int passwd_main(undefined8 param_1, undefined8 param_2) {
      bool bVar1;
      bool bVar2;
      int iVar3;
      int iVar4;
      int iVar5;
      int iVar6;
      undefined8 uVar7;
      undefined1 *puVar8;
      BIO *bp;
      char *pcVar9;
      long lVar10;
      char *pcVar11;
      void *pvVar12;
      long in_FS_OFFSET;
      uint local_207c;
      undefined4 local_2078;
      undefined4 local_2074;
      undefined4 local_2068;
      uint local_2060;
      undefined8 local_2058;
      void *local_2050;
      char local_2048[8200];
      long local_40;
      iVar5 = 0;
      bVar1 = false;
      lVar10 = 0;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_2058 = 0;
      local_2050 = (void*)0x0;
      uVar7 = opt_init(param_1, param_2, passwd_options);
      local_2068 = 0;
      local_2074 = 0;
      local_2078 = 0;
      local_207c = 0;
      local_2060 = 0;
      bVar2 = false;
      switchD_00101cda_caseD_0:iVar3 = opt_next();
      if (iVar3 != 0) goto LAB_00101cc1;
      LAB_00101d10:opt_num_rest();
      puVar8 = (undefined1*)opt_rest();
      if (*(long*)puVar8 != 0) {
         if (!bVar1) goto LAB_00101d33;
         goto switchD_00101cda_caseD_ffffffff;
      }

      puVar8 = (undefined1*)0x0;
      LAB_00101d33:iVar4 = app_RAND_load();
      if (iVar4 != 0) {
         iVar4 = 1;
         if (iVar5 != 0) {
            iVar4 = iVar5;
         }

         if (lVar10 != 0) {
            if (!bVar2) goto LAB_00101d6c;
            pcVar11 = "%s: Can\'t combine -in and -stdin\n";
            goto LAB_00101e4c;
         }

         if (!bVar2) {
            if ((long*)puVar8 == (long*)0x0) {
               pcVar11 = (char*)app_malloc(0x102, "password buffer");
               iVar5 = EVP_read_pw_string(pcVar11, 0x102, "Password: ", ( local_2060 | local_207c ) ^ 1);
               if (iVar5 != 0) {
                  bp = (BIO*)0x0;
                  iVar3 = 1;
                  pvVar12 = (void*)0x0;
                  goto LAB_00101e67;
               }

               puVar8 = passwds_static_3;
               passwds_static_3._0_8_ = pcVar11;
            }
 else {
               pcVar11 = (char*)0x0;
            }

            goto LAB_001020cc;
         }

         LAB_00101d6c:bp = (BIO*)bio_open_default(lVar10, 0x72, 0x8001);
         if (bp != (BIO*)0x0) {
            if ((long*)puVar8 == (long*)0x0) {
               pcVar11 = (char*)app_malloc(0x102, "password buffer");
            }
 else {
               pcVar11 = (char*)0x0;
            }

            goto LAB_00101da0;
         }

      }

      goto LAB_00101e5a;
      LAB_00101cc1:while (0xd < iVar3) {
         if (0x5de < iVar3) {
            if (( 3 < iVar3 - 0x641U ) || ( iVar3 = iVar3 != 0 )) goto switchD_00101cda_caseD_0;
            goto LAB_00101e5a;
         }

         if (iVar3 < 0x5dd) goto switchD_00101cda_caseD_0;
         iVar3 = opt_rand(iVar3);
         if (iVar3 == 0) goto LAB_00101e5a;
         iVar3 = opt_next();
         if (iVar3 == 0) {
            iVar3 = 0;
            goto LAB_00101d10;
         }

      }
;
      if (iVar3 < -1) goto switchD_00101cda_caseD_0;
      switch (iVar3) {
         default:
    goto switchD_00101cda_caseD_0;
         case 1:
    iVar3 = 0;
    pcVar11 = (char *)0x0;
    opt_help(passwd_options);
    bp = (BIO *)0x0;
    pvVar12 = (void *)0x0;
    goto LAB_00101e67;
         case 2:
    if (!bVar1) {
      lVar10 = opt_arg();
      bVar1 = true;
      goto switchD_00101cda_caseD_0;
    }
    break;
         case 3:
    local_2060 = 1;
    goto switchD_00101cda_caseD_0;
         case 4:
    local_2078 = 1;
    goto switchD_00101cda_caseD_0;
         case 5:
    local_2074 = 1;
    goto switchD_00101cda_caseD_0;
         case 6:
    local_2068 = 1;
    goto switchD_00101cda_caseD_0;
         case 7:
    if (iVar5 == 0) {
      iVar5 = 2;
      goto switchD_00101cda_caseD_0;
    }
    break;
         case 8:
    if (iVar5 == 0) {
      iVar5 = 1;
      goto switchD_00101cda_caseD_0;
    }
    break;
         case 9:
    if (iVar5 == 0) {
      iVar5 = 3;
      goto switchD_00101cda_caseD_0;
    }
    break;
         case 10:
    if (iVar5 == 0) {
      iVar5 = 4;
      goto switchD_00101cda_caseD_0;
    }
    break;
         case 0xb:
    if (iVar5 == 0) {
      iVar5 = 5;
      goto switchD_00101cda_caseD_0;
    }
    break;
         case 0xc:
    local_2058 = opt_arg();
    local_207c = 1;
    goto switchD_00101cda_caseD_0;
         case 0xd:
    if (!bVar1) {
      bVar2 = true;
      bVar1 = true;
      goto switchD_00101cda_caseD_0;
    }
    break;
         case -1:
    break;
      }

      switchD_00101cda_caseD_ffffffff:pcVar11 = "%s: Use -help for summary.\n";
      LAB_00101e4c:BIO_printf(_bio_err, pcVar11, uVar7);
      LAB_00101e5a:iVar3 = 1;
      pcVar11 = (char*)0x0;
      bp = (BIO*)0x0;
      pvVar12 = (void*)0x0;
      goto LAB_00101e67;
      while (*(long*)puVar8 != 0) {
         LAB_001020cc:lVar10 = *(long*)puVar8;
         puVar8 = (undefined1*)( (long)puVar8 + 8 );
         iVar5 = do_passwd_constprop_0(local_207c, &local_2058, &local_2050, lVar10, _bio_out, local_2078, local_2074, local_2068, iVar4);
         pvVar12 = local_2050;
         if (iVar5 == 0) {
            iVar3 = 1;
            bp = (BIO*)0x0;
            goto LAB_00101e67;
         }

      }
;
      bp = (BIO*)0x0;
      goto LAB_00101e67;
      LAB_00101da0:do {
         iVar5 = BIO_gets(bp, pcVar11, 0x101);
         pvVar12 = local_2050;
         if (iVar5 < 1) break;
         pcVar9 = strchr(pcVar11, 10);
         if (pcVar9 != (char*)0x0) {
            *pcVar9 = '\0';
            iVar5 = do_passwd_constprop_0(local_207c, &local_2058, &local_2050, pcVar11, _bio_out, local_2078, local_2074, local_2068, iVar4);
            if (iVar5 == 0) {
               LAB_00101e11:iVar3 = 1;
               pvVar12 = local_2050;
               break;
            }

            goto LAB_00101da0;
         }

         do {
            iVar5 = BIO_gets(bp, local_2048, 0x2000);
            if (iVar5 < 1) break;
            pcVar9 = strchr(local_2048, 10);
         }
 while ( pcVar9 == (char*)0x0 );
         iVar6 = do_passwd_constprop_0(local_207c, &local_2058, &local_2050, pcVar11, _bio_out, local_2078, local_2074, local_2068, iVar4);
         if (iVar6 == 0) goto LAB_00101e11;
         pvVar12 = local_2050;
      }
 while ( 0 < iVar5 );
      LAB_00101e67:CRYPTO_free(pvVar12);
      CRYPTO_free(pcVar11);
      BIO_free(bp);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return iVar3;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

}

