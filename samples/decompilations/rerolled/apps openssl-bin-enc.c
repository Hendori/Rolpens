/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 set_hex(char *param_1, void *param_2, int param_3) {
   int iVar1;
   int iVar2;
   size_t sVar3;
   ushort **ppuVar4;
   byte *pbVar5;
   ulong uVar6;
   iVar2 = param_3 * 2;
   sVar3 = strlen(param_1);
   iVar1 = (int)sVar3;
   if (iVar2 < iVar1) {
      BIO_printf(_bio_err, "hex string is too long, ignoring excess\n");
      iVar1 = iVar2;
   } else if (iVar1 < iVar2) {
      BIO_printf(_bio_err, "hex string is too short, padding with zero bytes to length\n");
   }
   memset(param_2, 0, (long)param_3);
   if (0 < iVar1) {
      ppuVar4 = __ctype_b_loc();
      uVar6 = 0;
      do {
         while (true) {
            if (( *(byte*)( (long)*ppuVar4 + (ulong)(byte)param_1[uVar6] * 2 + 1 ) & 0x10 ) == 0) {
               BIO_printf(_bio_err, "non-hex digit\n");
               return 0;
            }
            iVar2 = OPENSSL_hexchar2int((ulong)(byte)param_1[uVar6]);
            pbVar5 = (byte*)( (long)( (int)uVar6 >> 1 ) + (long)param_2 );
            if (( uVar6 & 1 ) == 0) break;
            uVar6 = uVar6 + 1;
            *pbVar5 = *pbVar5 | (byte)iVar2;
            if (uVar6 == (long)iVar1) {
               return 1;
            }
         };
         uVar6 = uVar6 + 1;
         *pbVar5 = ( byte )(iVar2 << 4);
      } while ( uVar6 != (long)iVar1 );
   }
   return 1;
}void show_ciphers(long param_1, undefined8 *param_2) {
   int iVar1;
   ushort **ppuVar2;
   EVP_CIPHER *pEVar3;
   ulong uVar4;
   ppuVar2 = __ctype_b_loc();
   if (( *(byte*)( (long)*ppuVar2 + ( ulong ) * *(byte**)( param_1 + 8 ) * 2 + 1 ) & 2 ) != 0) {
      pEVar3 = EVP_get_cipherbyname((char*)*(byte**)( param_1 + 8 ));
      if (pEVar3 != (EVP_CIPHER*)0x0) {
         uVar4 = EVP_CIPHER_get_flags(pEVar3);
         if (( uVar4 & 0x200000 ) == 0) {
            iVar1 = EVP_CIPHER_get_mode(pEVar3);
            if (iVar1 != 0x10001) {
               BIO_printf((BIO*)*param_2, "-%-25s", *(undefined8*)( param_1 + 8 ));
               iVar1 = *(int*)( param_2 + 1 );
               *(int*)( param_2 + 1 ) = iVar1 + 1;
               if (iVar1 + 1 != 3) {
                  BIO_printf((BIO*)*param_2, " ");
                  return;
               }
               BIO_printf((BIO*)*param_2, "\n");
               *(undefined4*)( param_2 + 1 ) = 0;
            }
         }
      }
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */uint enc_main(undefined4 param_1, undefined8 *param_2) {
   bool bVar1;
   bool bVar2;
   bool bVar3;
   bool bVar4;
   bool bVar5;
   uint uVar6;
   bool bVar7;
   bool bVar8;
   bool bVar9;
   EVP_CIPHER *pEVar10;
   int iVar11;
   uint uVar12;
   int iVar13;
   int iVar14;
   undefined4 uVar15;
   uint len;
   undefined8 uVar16;
   uchar *buf;
   char *pcVar17;
   size_t sVar18;
   char *__s;
   long lVar19;
   ulong uVar20;
   BIO_METHOD *pBVar21;
   BIO *pBVar22;
   undefined8 uVar23;
   long lVar24;
   undefined8 uVar25;
   long lVar26;
   uchar *puVar27;
   int iVar28;
   EVP_MD *in_R9;
   undefined1 *puVar29;
   uint uVar30;
   long in_FS_OFFSET;
   uchar *puVar31;
   long local_258;
   ENGINE *local_250;
   void *local_248;
   BIO *local_240;
   BIO *local_238;
   BIO *local_230;
   uint local_21c;
   BIO *local_218;
   int local_20c;
   uchar *local_200;
   long local_1f8;
   long local_1f0;
   BIO *local_1e0;
   long local_1d8;
   int local_1b4;
   EVP_CIPHER_CTX *local_1b0;
   EVP_CIPHER *local_1a8;
   EVP_MD *local_1a0;
   uchar *local_198;
   long local_190;
   BIO *local_188;
   undefined4 local_180;
   long local_170;
   uchar local_168[16];
   uchar local_158[16];
   uchar local_148[64];
   uchar local_108[200];
   long local_40;
   pcVar17 = (char*)*param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1b0 = (EVP_CIPHER_CTX*)0x0;
   local_1a8 = (EVP_CIPHER*)0x0;
   local_1a0 = (EVP_MD*)0x0;
   local_198 = (uchar*)0x0;
   local_1b4 = 0;
   iVar11 = strcmp(pcVar17, "base64");
   if (iVar11 == 0) {
      uVar12 = 1;
      LAB_0010026e:pcVar17 = (char*)0x0;
   } else {
      uVar12 = strcmp(pcVar17, "enc");
      if (uVar12 == 0) goto LAB_0010026e;
      uVar12 = 0;
   }
   uVar30 = 0;
   lVar26 = 0;
   opt_set_unknown_name("cipher");
   uVar16 = opt_init(param_1, param_2, enc_options);
   local_258 = 0;
   puVar29 = (uchar*)0x0;
   local_1f0 = 0;
   iVar11 = 0;
   bVar1 = false;
   bVar7 = false;
   local_20c = 0;
   local_21c = 1;
   bVar5 = false;
   uVar6 = 0;
   bVar4 = false;
   len = 0x2000;
   local_1d8 = 0;
   local_230 = (BIO*)0x0;
   local_238 = (BIO*)0x0;
   local_200 = (uchar*)0x0;
   local_1f8 = 0;
   local_240 = (BIO*)0x0;
   local_250 = (ENGINE*)0x0;
   switchD_0010036a_caseD_0:iVar13 = opt_next();
   if (iVar13 != 0) goto LAB_00100351;
   LAB_001003b0:iVar13 = opt_check_rest_arg(0);
   if (iVar13 == 0) goto switchD_0010036a_caseD_ffffffff;
   iVar13 = app_RAND_load();
   if (iVar13 == 0) goto LAB_001008c4;
   if (( local_1b4 == 0 ) || ( !bVar1 )) {
      local_1b4 = 8;
   }
   iVar13 = opt_cipher(pcVar17, &local_1a8);
   if (iVar13 != 0) {
      if (( local_1a8 == (EVP_CIPHER*)0x0 ) || ( iVar13 = iVar13 != 0x10002 )) {
         bVar3 = false;
         bVar9 = true;
         bVar2 = false;
         bVar8 = true;
      } else {
         bVar8 = false;
         bVar9 = false;
         bVar2 = true;
         bVar3 = true;
      }
      if (( local_240 == (BIO*)0x0 ) || ( iVar13 = iVar13 != 0 )) {
         if (local_1a0 == (EVP_MD*)0x0) {
            local_1a0 = EVP_sha256();
         }
         iVar13 = 1;
         if (iVar11 != 0) {
            iVar13 = iVar11;
         }
         if (( (int)len < 0x50 ) && ( ( uVar12 & 1 ) != 0 )) {
            if (uVar30 != 0) {
               BIO_printf(_bio_err, "bufsize=%d\n", 0x50);
            }
            local_248 = (void*)0xc0;
            len = 0x50;
            LAB_001004b8:iVar28 = ( -(uint)(local_21c == 0) & 0xffff7fff ) + 0x8003;
            iVar11 = ( -(uint)(local_21c == 0) & 0x8001 ) + 2;
         } else {
            local_248 = (void*)(long)( ( (int)len / 0x30 + 0x29 + ( (int)( len + 2 ) / 3 ) * 2 ) * 2 );
            if (uVar30 != 0) {
               BIO_printf(_bio_err, "bufsize=%d\n", (ulong)len);
            }
            iVar28 = 2;
            iVar11 = 2;
            if (uVar12 != 0) goto LAB_001004b8;
         }
         buf = (uchar*)app_malloc(0x200, "strbuf");
         local_248 = (void*)app_malloc(local_248, "evp buffer");
         if (local_238 == (BIO*)0x0) {
            if (( local_20c == 2 ) || ( !bVar2 )) {
               local_240 = (BIO*)dup_bio_in(iVar11);
               goto LAB_00100527;
            }
            BIO_printf(_bio_err, "Unstreamable cipher mode\n");
         } else {
            local_240 = (BIO*)bio_open_default(local_238, 0x72, iVar11);
            LAB_00100527:if (local_240 != (BIO*)0x0) {
               if (puVar29 != (uchar*)0x0) goto LAB_00100614;
               if (( local_1d8 != 0 ) && ( iVar11 = app_passwd(local_1d8, 0, &local_198) ),puVar29 = local_198,iVar11 == 0) {
                  lVar24 = 0;
                  lVar26 = 0;
                  pBVar22 = (BIO*)0x0;
                  uVar12 = 1;
                  BIO_printf(_bio_err, "Error getting password\n");
                  local_230 = (BIO*)0x0;
                  local_238 = (BIO*)0x0;
                  goto LAB_001008f9;
               }
               if (( ( puVar29 != (uchar*)0x0 ) || ( local_1a8 == (EVP_CIPHER*)0x0 ) ) || ( local_258 != 0 || local_1f8 != 0 )) goto LAB_00100614;
               pcVar17 = "decryption";
               if (local_21c != 0) {
                  pcVar17 = "encryption";
               }
               goto LAB_001005c8;
            }
         }
         lVar24 = 0;
         lVar26 = 0;
         uVar12 = 1;
         pBVar22 = (BIO*)0x0;
         local_230 = (BIO*)0x0;
         local_238 = (BIO*)0x0;
         local_240 = (BIO*)0x0;
         goto LAB_001008f9;
      }
   }
   goto switchD_0010036a_caseD_ffffffff;
   while (-1 < iVar11) {
      LAB_001005c8:uVar16 = EVP_CIPHER_get0_name(local_1a8);
      BIO_snprintf((char*)local_108, 200, "enter %s %s password:", uVar16, pcVar17);
      *buf = '\0';
      iVar11 = EVP_read_pw_string((char*)buf, 0x200, (char*)local_108, local_21c);
      if (iVar11 == 0) {
         puVar29 = buf;
         if (*buf != '\0') goto LAB_00100614;
         goto LAB_0010146d;
      }
   };
   BIO_printf(_bio_err, "bad password read\n");
   LAB_0010146d:local_258 = 0;
   lVar24 = 0;
   pBVar22 = (BIO*)0x0;
   uVar12 = 1;
   local_230 = (BIO*)0x0;
   local_238 = (BIO*)0x0;
   lVar26 = 0;
   goto LAB_001008f9;
   LAB_00100614:local_238 = (BIO*)bio_open_default(local_230, 0x77, iVar28);
   if (local_238 == (BIO*)0x0) {
      lVar24 = 0;
      lVar26 = 0;
      pBVar22 = (BIO*)0x0;
      uVar12 = 1;
      local_230 = (BIO*)0x0;
      goto LAB_001008f9;
   }
   if (bVar4) {
      BIO_set_callback_ex(local_240, &BIO_debug_callback_ex);
      BIO_set_callback_ex(local_238, &BIO_debug_callback_ex);
      BIO_set_callback_arg(local_240, (char*)_bio_err);
      BIO_set_callback_arg(local_238, (char*)_bio_err);
   }
   local_1e0 = local_238;
   if (uVar12 == 0) {
      local_230 = (BIO*)0x0;
      local_218 = local_240;
   } else {
      pBVar21 = BIO_f_base64();
      local_230 = BIO_new(pBVar21);
      if (local_230 == (BIO*)0x0) {
         lVar24 = 0;
         lVar26 = 0;
         pBVar22 = (BIO*)0x0;
         goto LAB_001008f9;
      }
      if (bVar4) {
         BIO_set_callback_ex(local_230, &BIO_debug_callback_ex);
         BIO_set_callback_arg(local_230, (char*)_bio_err);
      }
      in_R9 = (EVP_MD*)(ulong)uVar6;
      if (uVar6 != 0) {
         BIO_set_flags(local_230, 0x100);
      }
      if (local_21c == 0) {
         local_218 = BIO_push(local_230, local_240);
      } else {
         local_1e0 = BIO_push(local_230, local_238);
         local_218 = local_240;
      }
   }
   pEVar10 = local_1a8;
   if (local_1a8 == (EVP_CIPHER*)0x0) {
      lVar24 = 0;
      lVar26 = 0;
      pBVar22 = (BIO*)0x0;
      LAB_00100f85:if (bVar8) {
         do {
            lVar19 = BIO_ctrl(local_218, 10, 0, (void*)0x0);
            if (( ( (int)lVar19 == 0 ) && ( lVar19 = BIO_ctrl(local_218, 2, 0, (void*)0x0) ),(int)lVar19 != 0 )) goto LAB_0010109c;
            iVar13 = BIO_write(local_1e0, local_248, iVar11);
         } while ( iVar11 == iVar13 );
         LAB_00100ffd:BIO_printf(_bio_err, "error writing output file\n");
         uVar12 = 1;
         goto LAB_001008f9;
      }
      lVar19 = BIO_ctrl(local_218, 10, 0, (void*)0x0);
      if (( ( (int)lVar19 != 0 ) || ( lVar19 = BIO_ctrl(local_218, 2, 0, (void*)0x0) ),(int)lVar19 == 0 )) {
         lVar19 = BIO_ctrl(local_218, 2, 0, (void*)0x0);
         if ((int)lVar19 == 0) {
            BIO_printf(_bio_err, "Unstreamable cipher mode\n");
            goto LAB_001015ea;
         }
         iVar13 = BIO_write(local_1e0, local_248, iVar11);
         if (iVar13 != iVar11) goto LAB_00100ffd;
      }
      LAB_0010109c:lVar19 = BIO_ctrl(local_1e0, 0xb, 0, (void*)0x0);
      if ((int)lVar19 != 0) {
         uVar12 = uVar30;
         if (uVar30 != 0) {
            uVar20 = BIO_number_read(local_240);
            BIO_printf(_bio_err, "bytes read   : %8ju\n", uVar20);
            uVar20 = BIO_number_written(local_238);
            BIO_printf(_bio_err, "bytes written: %8ju\n", uVar20);
            uVar12 = 0;
         }
         goto LAB_001008f9;
      }
      if (local_21c == 0) {
         BIO_printf(_bio_err, "bad decrypt\n");
         uVar12 = 1;
         goto LAB_001008f9;
      }
      BIO_printf(_bio_err, "bad encrypt\n");
      LAB_001015ea:uVar12 = 1;
   } else {
      if (puVar29 == (uchar*)0x0) {
         if (local_200 != (uchar*)0x0) {
            bVar2 = false;
            bVar1 = false;
            LAB_0010079f:iVar11 = EVP_CIPHER_get_iv_length(local_1a8);
            if (iVar11 == 0) {
               BIO_printf(_bio_err, "warning: iv not used by this cipher\n");
            } else {
               iVar11 = set_hex(local_200, local_168, iVar11);
               if (iVar11 == 0) {
                  BIO_printf(_bio_err, "invalid hex iv value\n");
                  goto LAB_00100835;
               }
            }
            goto LAB_001007c6;
         }
         iVar11 = EVP_CIPHER_get_iv_length(local_1a8);
         if (( iVar11 != 0 ) && ( bVar9 )) {
            BIO_printf(_bio_err, "iv undefined\n");
            goto LAB_00100835;
         }
         if (local_1f8 != 0) goto LAB_001007ce;
         bVar2 = false;
         LAB_001012a8:pBVar21 = BIO_f_cipher();
         pBVar22 = BIO_new(pBVar21);
         if (pBVar22 != (BIO*)0x0) {
            BIO_ctrl(pBVar22, 0x81, 0, &local_1b0);
            if (!bVar3) {
               if (!bVar2) goto LAB_0010164f;
               LAB_001012ee:local_200 = local_168;
               LAB_001012fb:lVar24 = 0;
               lVar26 = 0;
               iVar11 = EVP_CipherInit_ex(local_1b0, local_1a8, local_250, local_148, local_200, local_21c);
               if (iVar11 != 0) {
                  LAB_00101335:if (bVar7) {
                     EVP_CIPHER_CTX_set_padding(local_1b0, 0);
                  }
                  if (bVar4) {
                     BIO_set_callback_ex(pBVar22, &BIO_debug_callback_ex);
                     BIO_set_callback_arg(pBVar22, (char*)_bio_err);
                  }
                  if (local_20c != 0) {
                     if (!bVar5) {
                        __printf_chk(2, "salt=");
                        if (0 < local_1b4) {
                           lVar19 = 0;
                           do {
                              puVar27 = local_158 + lVar19;
                              lVar19 = lVar19 + 1;
                              __printf_chk(2, &_LC40, *puVar27);
                           } while ( (int)lVar19 < local_1b4 );
                        }
                        putchar(10);
                     }
                     iVar11 = EVP_CIPHER_get_key_length(local_1a8);
                     if (0 < iVar11) {
                        __printf_chk(2, &_LC41);
                        for (lVar19 = 0; iVar11 = EVP_CIPHER_get_key_length(local_1a8),(int)lVar19 < iVar11; lVar19 = lVar19 + 1) {
                           __printf_chk(2, &_LC40, local_148[lVar19]);
                        }
                        putchar(10);
                     }
                     iVar11 = EVP_CIPHER_get_iv_length(local_1a8);
                     if (0 < iVar11) {
                        __printf_chk(2, &_LC42);
                        for (lVar19 = 0; iVar11 = EVP_CIPHER_get_iv_length(local_1a8),(int)lVar19 < iVar11; lVar19 = lVar19 + 1) {
                           __printf_chk(2, &_LC40, local_168[lVar19]);
                        }
                        putchar(10);
                     }
                     if (local_20c == 2) {
                        uVar12 = 0;
                        goto LAB_001008f9;
                     }
                  }
                  local_1e0 = BIO_push(pBVar22, local_1e0);
                  goto LAB_00100f85;
               }
               local_1f0 = EVP_CIPHER_get0_name(local_1a8);
               pcVar17 = "Error setting cipher %s\n";
               LAB_0010175d:BIO_printf(_bio_err, pcVar17, local_1f0);
               ERR_print_errors(_bio_err);
               uVar12 = 1;
               goto LAB_001008f9;
            }
            EVP_CIPHER_CTX_set_flags(local_1b0, 1);
            if (bVar2) {
               if (local_200 != (uchar*)0x0) goto LAB_001012ee;
               goto LAB_001012fb;
            }
            LAB_0010164f:uVar16 = app_get0_propq();
            lVar26 = local_1f0;
            if (local_1f0 == 0) {
               lVar26 = EVP_CIPHER_get0_name(local_1a8);
            }
            uVar23 = app_get0_libctx();
            lVar24 = EVP_SKEYMGMT_fetch(uVar23, lVar26, uVar16);
            if (lVar24 != 0) {
               uVar16 = EVP_SKEYMGMT_get0_imp_settable_params(lVar24);
               lVar19 = app_params_new_from_opts(local_258, uVar16);
               if (lVar19 != 0) {
                  uVar16 = app_get0_propq();
                  uVar23 = EVP_SKEYMGMT_get0_name(lVar24);
                  uVar25 = app_get0_libctx();
                  lVar26 = EVP_SKEY_import(uVar25, uVar23, uVar16, 3, lVar19);
                  OSSL_PARAM_free(lVar19);
                  if (lVar26 == 0) {
                     if (local_1f0 == 0) {
                        local_1f0 = EVP_CIPHER_get0_name(local_1a8);
                     }
                     pcVar17 = "Error creating opaque key object for skeymgmt %s\n";
                  } else {
                     iVar11 = EVP_CIPHER_get_iv_length(local_1a8);
                     if (( local_200 != (uchar*)0x0 ) || ( puVar27 = bVar9 )) {
                        puVar27 = local_168;
                     }
                     iVar11 = EVP_CipherInit_SKEY(local_1b0, local_1a8, lVar26, puVar27, (long)iVar11, local_21c, 0, in_R9);
                     if (iVar11 != 0) goto LAB_00101335;
                     local_1f0 = EVP_CIPHER_get0_name(local_1a8);
                     pcVar17 = "Error setting an opaque key for cipher %s\n";
                  }
                  goto LAB_0010175d;
               }
            }
            lVar26 = 0;
            goto LAB_001015ea;
         }
      } else {
         sVar18 = strlen(puVar29);
         local_1d8._0_4_ = (int)sVar18;
         if (bVar5) {
            if (bVar1) {
               iVar14 = EVP_CIPHER_get_key_length(pEVar10);
               iVar28 = EVP_CIPHER_get_iv_length(local_1a8);
               iVar11 = 0;
               puVar27 = (uchar*)0x0;
               LAB_00100700:uVar20 = ( ulong )(uint)(iVar28 + iVar14);
               in_R9 = local_1a0;
               puVar31 = local_108;
               iVar11 = PKCS5_PBKDF2_HMAC(puVar29, (int)local_1d8, puVar27, iVar11, iVar13, local_1a0, iVar28 + iVar14, local_108);
               if (iVar11 == 0) {
                  BIO_printf(_bio_err, "PKCS5_PBKDF2_HMAC failed\n", uVar20, puVar31);
                  goto LAB_00100835;
               }
               __memcpy_chk(local_148, local_108, (long)iVar14, 0x40);
               __memcpy_chk(local_168, local_108 + iVar14, (long)iVar28, 0x10);
            } else {
               puVar27 = (uchar*)0x0;
               LAB_0010120e:BIO_printf(_bio_err, "*** WARNING : deprecated key derivation used.\nUsing -iter or -pbkdf2 would be better.\n");
               in_R9 = (EVP_MD*)0x1;
               iVar11 = EVP_BytesToKey(local_1a8, local_1a0, puVar27, puVar29, (int)local_1d8, 1, local_148, local_168);
               if (iVar11 == 0) {
                  BIO_printf(_bio_err, "EVP_BytesToKey failed\n");
                  goto LAB_00100835;
               }
            }
            if (puVar29 == buf) {
               OPENSSL_cleanse(buf, 0x200);
            } else {
               OPENSSL_cleanse(puVar29, sVar18);
            }
            if (local_200 != (uchar*)0x0) {
               bVar1 = true;
               bVar2 = true;
               goto LAB_0010079f;
            }
            bVar1 = true;
            bVar2 = true;
            LAB_001007c6:if (local_1f8 != 0) {
               LAB_001007ce:uVar15 = EVP_CIPHER_get_key_length(local_1a8);
               iVar11 = set_hex(local_1f8, local_148, uVar15);
               if (iVar11 == 0) {
                  BIO_printf(_bio_err, "invalid hex key value\n");
                  goto LAB_00100835;
               }
               bVar1 = true;
               bVar2 = true;
               cleanse(local_1f8);
            }
            if (( local_258 == 0 ) || ( !bVar1 )) goto LAB_001012a8;
            BIO_printf(_bio_err, "Either a raw key or the \'skeyopt\' args must be used.\n");
         } else if (lVar26 == 0) {
            if (local_21c == 0) {
               iVar11 = BIO_read(local_218, &local_170, 8);
               if (iVar11 == 8) {
                  if (local_170 != 0x5f5f6465746c6153) {
                     BIO_printf(_bio_err, "bad magic number\n");
                     goto LAB_00100835;
                  }
                  iVar11 = BIO_read(local_218, local_158, local_1b4);
                  if (iVar11 == local_1b4) goto LAB_001006cb;
               }
               BIO_printf(_bio_err, "error reading input file\n");
            } else {
               iVar11 = RAND_bytes(local_158, local_1b4);
               if (iVar11 < 1) {
                  lVar26 = 0;
                  pBVar22 = (BIO*)0x0;
                  BIO_printf(_bio_err, "RAND_bytes failed\n");
                  lVar24 = 0;
                  uVar12 = local_21c;
                  goto LAB_001008f9;
               }
               if (( local_20c == 2 ) || ( ( iVar11 = BIO_write(local_1e0, "Salted__", 8) ),iVar11 == 8 && ( iVar11 = BIO_write(local_1e0, local_158, local_1b4) ),iVar11 == local_1b4 )) goto LAB_001006cb;
               BIO_printf(_bio_err, "error writing output file\n");
            }
         } else {
            iVar11 = set_hex(lVar26, local_158, local_1b4);
            if (iVar11 != 0) {
               LAB_001006cb:puVar27 = local_158;
               if (!bVar1) goto LAB_0010120e;
               iVar14 = EVP_CIPHER_get_key_length(local_1a8);
               iVar28 = EVP_CIPHER_get_iv_length(local_1a8);
               iVar11 = local_1b4;
               goto LAB_00100700;
            }
            BIO_printf(_bio_err, "invalid hex salt value\n");
         }
      }
      LAB_00100835:lVar24 = 0;
      lVar26 = 0;
      pBVar22 = (BIO*)0x0;
      uVar12 = 1;
   }
   goto LAB_001008f9;
   LAB_00100351:while (0x1e < iVar13) {
      if (iVar13 == 0x646) {
         if (( local_258 != 0 ) || ( local_258 = local_258 != 0 )) {
            uVar23 = opt_arg();
            iVar13 = OPENSSL_sk_push(local_258, uVar23);
            if (iVar13 != 0) goto switchD_0010036a_caseD_0;
         }
         pcVar17 = "%s: out of memory\n";
         goto LAB_001008b6;
      }
      if (0x646 < iVar13) {
         if (iVar13 == 0x647) {
            local_1f0 = opt_arg();
         }
         goto switchD_0010036a_caseD_0;
      }
      if (0x5de < iVar13) {
         if (( 3 < iVar13 - 0x641U ) || ( iVar13 = iVar13 != 0 )) goto switchD_0010036a_caseD_0;
         goto LAB_001008c4;
      }
      if (iVar13 < 0x5dd) goto switchD_0010036a_caseD_0;
      iVar13 = opt_rand(iVar13);
      if (iVar13 == 0) goto LAB_001008c4;
      iVar13 = opt_next();
      if (iVar13 == 0) goto LAB_001003b0;
   };
   if (iVar13 < -1) goto switchD_0010036a_caseD_0;
   switch (iVar13) {
      default:
    goto switchD_0010036a_caseD_0;
      case 1:
    opt_help(enc_options);
    goto LAB_001009e8;
      case 2:
    BIO_printf(_bio_out,"Supported ciphers:\n");
    local_180 = 0;
    local_188 = _bio_out;
    OBJ_NAME_do_all_sorted(2,show_ciphers,&local_188);
    BIO_printf(_bio_out,"\n");
LAB_001009e8:
    uVar12 = 0;
    goto LAB_001008d9;
      case 3:
    local_21c = 1;
    goto switchD_0010036a_caseD_0;
      case 4:
    local_238 = (BIO *)opt_arg();
    goto switchD_0010036a_caseD_0;
      case 5:
    local_230 = (BIO *)opt_arg();
    goto switchD_0010036a_caseD_0;
      case 6:
    local_1d8 = opt_arg();
    goto switchD_0010036a_caseD_0;
      case 7:
    uVar23 = opt_arg();
    local_250 = (ENGINE *)setup_engine_methods(uVar23,0xffffffff,0);
    goto switchD_0010036a_caseD_0;
      case 8:
    local_21c = 0;
    goto switchD_0010036a_caseD_0;
      case 9:
    local_20c = 1;
    goto switchD_0010036a_caseD_0;
      case 10:
    uVar30 = 1;
    goto switchD_0010036a_caseD_0;
      case 0xb:
    bVar7 = true;
    goto switchD_0010036a_caseD_0;
      case 0xc:
    bVar5 = false;
    goto switchD_0010036a_caseD_0;
      case 0xd:
    bVar5 = true;
    goto switchD_0010036a_caseD_0;
      case 0xe:
    bVar4 = true;
    goto switchD_0010036a_caseD_0;
      case 0xf:
    local_20c = 2;
    goto switchD_0010036a_caseD_0;
      case 0x10:
    uVar6 = 1;
    goto switchD_0010036a_caseD_0;
      case 0x11:
    uVar12 = 1;
    goto switchD_0010036a_caseD_0;
      case 0x13:
    __s = (char *)opt_arg();
    sVar18 = strlen(__s);
    bVar2 = false;
    iVar13 = (int)sVar18 + -1;
    if ((0 < iVar13) && (__s[iVar13] == 'k')) {
      __s[iVar13] = '\0';
      bVar2 = true;
    }
    uVar23 = opt_arg();
    iVar13 = opt_long(uVar23,&local_190);
    if ((iVar13 != 0) && (-1 < local_190)) {
      if (!bVar2) {
LAB_00100d4f:
        len = (uint)local_190;
        goto switchD_0010036a_caseD_0;
      }
      if (local_190 < 0x1fffffffffffff) {
        local_190 = local_190 << 10;
        goto LAB_00100d4f;
      }
    }
    break;
      case 0x14:
    puVar29 = (undefined1 *)opt_arg();
    goto switchD_0010036a_caseD_0;
      case 0x15:
    uVar23 = opt_arg();
    pBVar22 = (BIO *)bio_open_default(uVar23,0x72,0x8001);
    if (pBVar22 != (BIO *)0x0) {
      iVar13 = BIO_gets(pBVar22,buf_1,0x80);
      BIO_free(pBVar22);
      if (iVar13 < 1) {
        uVar23 = opt_arg();
        BIO_printf(_bio_err,"%s Can\'t read key from %s\n",uVar16,uVar23);
      }
      else {
        if (iVar13 != 1) {
          puVar29 = buf_1 + iVar13;
          while ((puVar29[-1] == '\r' || (puVar29[-1] == '\n'))) {
            puVar29[-1] = 0;
            puVar29 = puVar29 + -1;
            if ((undefined1 *)(((long)iVar13 + 0x101a7f) - (ulong)(iVar13 - 2)) == puVar29)
            goto LAB_00100890;
          }
          puVar29 = buf_1;
          goto switchD_0010036a_caseD_0;
        }
LAB_00100890:
        BIO_printf(_bio_err,"%s: zero length password\n",uVar16);
      }
    }
    break;
      case 0x16:
    local_1f8 = opt_arg();
    goto switchD_0010036a_caseD_0;
      case 0x17:
    local_1a8 = (EVP_CIPHER *)0x0;
    goto switchD_0010036a_caseD_0;
      case 0x18:
    lVar26 = opt_arg();
    goto switchD_0010036a_caseD_0;
      case 0x19:
    local_200 = (uchar *)opt_arg();
    goto switchD_0010036a_caseD_0;
      case 0x1a:
    local_240 = (BIO *)opt_arg();
    goto switchD_0010036a_caseD_0;
      case 0x1b:
    iVar11 = opt_int_arg();
    bVar1 = true;
    goto switchD_0010036a_caseD_0;
      case 0x1c:
    if (iVar11 == 0) {
      iVar11 = 10000;
    }
    bVar1 = true;
    goto switchD_0010036a_caseD_0;
      case 0x1d:
    pcVar17 = (char *)opt_unknown();
    goto switchD_0010036a_caseD_0;
      case 0x1e:
    uVar23 = opt_arg();
    iVar13 = opt_int(uVar23,&local_1b4);
    if (iVar13 != 0) {
      if (0x10 < local_1b4) {
        local_1b4 = 0x10;
      }
      goto switchD_0010036a_caseD_0;
    }
    break;
      case -1:
    break;
   }
   switchD_0010036a_caseD_ffffffff:pcVar17 = "%s: Use -help for summary.\n";
   LAB_001008b6:BIO_printf(_bio_err, pcVar17, uVar16);
   LAB_001008c4:uVar12 = 1;
   LAB_001008d9:local_248 = (void*)0x0;
   lVar24 = 0;
   lVar26 = 0;
   local_230 = (BIO*)0x0;
   buf = (uchar*)0x0;
   pBVar22 = (BIO*)0x0;
   local_238 = (BIO*)0x0;
   local_240 = (BIO*)0x0;
   LAB_001008f9:ERR_print_errors(_bio_err);
   OPENSSL_sk_free(local_258);
   EVP_SKEYMGMT_free(lVar24);
   EVP_SKEY_free(lVar26);
   CRYPTO_free(buf);
   CRYPTO_free(local_248);
   BIO_free(local_240);
   BIO_free_all(local_238);
   BIO_free(pBVar22);
   BIO_free(local_230);
   EVP_MD_free(local_1a0);
   EVP_CIPHER_free();
   for (int i_2327 = 0; i_2327 < 2; i_2327++) {
      BIO_free((BIO*)0);
   }
   release_engine(local_250);
   CRYPTO_free(local_198);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar12;
}
