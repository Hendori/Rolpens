uint test_des_two_key(void) {
   uint uVar1;
   int iVar2;
   EVP_CIPHER *cipher;
   EVP_CIPHER_CTX *ctx;
   long in_FS_OFFSET;
   uchar auStack_48[24];
   long local_30;
   ctx = (EVP_CIPHER_CTX*)0x0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cipher = (EVP_CIPHER*)EVP_CIPHER_fetch(0, "DES-EDE-ECB", 0);
   uVar1 = test_ptr("test/destest.c", 0x35c, "cipher = EVP_CIPHER_fetch(NULL, \"DES-EDE-ECB\", NULL)", cipher);
   if (uVar1 == 0) goto LAB_00100058;
   ctx = EVP_CIPHER_CTX_new();
   iVar2 = test_ptr("test/destest.c", 0x35d, "ctx = EVP_CIPHER_CTX_new()");
   if (iVar2 != 0) {
      uVar1 = EVP_CipherInit_ex(ctx, cipher, (ENGINE*)0x0, (uchar*)0x0, (uchar*)0x0, 1);
      if (uVar1 == 0) goto LAB_00100058;
      iVar2 = EVP_CIPHER_CTX_set_key_length(ctx, 0x10);
      if (iVar2 != 0) {
         iVar2 = EVP_CIPHER_CTX_rand_key(ctx, auStack_48);
         uVar1 = ( uint )(iVar2 != 0);
         goto LAB_00100058;
      }

   }

   uVar1 = 0;
   LAB_00100058:EVP_CIPHER_free(cipher);
   EVP_CIPHER_CTX_free(ctx);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_des_check_bad_parity(int param_1) {
   undefined4 uVar1;
   int iVar2;
   uVar1 = *(undefined4*)( bad_parity_keys + (long)param_1 * 0xc + 8 );
   iVar2 = DES_check_key_parity((const_DES_cblock*)( bad_parity_keys + (long)param_1 * 0xc ));
   test_int_eq("test/destest.c", 0x351, "DES_check_key_parity(key)", "bad_parity_keys[n].expect", iVar2, uVar1);
   return;
}
void test_des_weak_keys(int param_1) {
   undefined4 uVar1;
   int iVar2;
   uVar1 = *(undefined4*)( weak_keys + (long)param_1 * 0xc + 8 );
   iVar2 = DES_is_weak_key((const_DES_cblock*)( weak_keys + (long)param_1 * 0xc ));
   test_int_eq("test/destest.c", 0x337, "DES_is_weak_key(key)", "weak_keys[n].expect", iVar2, uVar1);
   return;
}
uint test_des_key_wrap(int param_1) {
   uchar uVar1;
   int iVar2;
   uint uVar3;
   int iVar4;
   EVP_CIPHER *cipher;
   EVP_CIPHER_CTX *ctx;
   int iVar5;
   long lVar6;
   uchar *puVar7;
   uchar *puVar8;
   long in_FS_OFFSET;
   int local_278;
   int local_274;
   int local_270;
   int local_26c;
   undefined8 local_268;
   undefined8 uStack_260;
   undefined8 local_258;
   uchar local_248[112];
   uchar local_1d8[208];
   uchar local_108[200];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *(int*)( test_des_key_wrap_sizes + (long)param_1 * 4 );
   lVar6 = (long)iVar5;
   iVar2 = test_size_t_le("test/destest.c", 0x2db, "in_bytes", "sizeof(in)", lVar6, 100);
   if (iVar2 == 0) {
      uVar3 = 0;
      ctx = (EVP_CIPHER_CTX*)0x0;
      cipher = (EVP_CIPHER*)0x0;
   }
 else {
      cipher = (EVP_CIPHER*)EVP_CIPHER_fetch(0, "DES3-WRAP", 0);
      iVar2 = test_ptr("test/destest.c", 0x2dc, "cipher = EVP_CIPHER_fetch(NULL, \"DES3-WRAP\", NULL)", cipher);
      if (iVar2 != 0) {
         ctx = (EVP_CIPHER_CTX*)0x0;
         iVar2 = EVP_CIPHER_get_block_size(cipher);
         uVar3 = test_int_eq("test/destest.c", 0x2dd, "bs = EVP_CIPHER_get_block_size(cipher)", &_LC12, iVar2, 8);
         if (uVar3 == 0) goto LAB_0010020d;
         iVar4 = test_size_t_eq("test/destest.c", 0x2de, "bs * 3u", "sizeof(key)", iVar2 * 3, 0x18);
         if (iVar4 != 0) {
            iVar4 = test_true("test/destest.c", 0x2df, "in_bytes % bs == 0", iVar5 % iVar2 == 0);
            if (iVar4 != 0) {
               ctx = EVP_CIPHER_CTX_new();
               iVar4 = test_ptr("test/destest.c", 0x2e0, "ctx = EVP_CIPHER_CTX_new()");
               if (iVar4 != 0) {
                  if (0 < iVar5) {
                     puVar7 = local_248;
                     do {
                        uVar1 = test_random();
                        puVar8 = puVar7 + 1;
                        *puVar7 = uVar1;
                        puVar7 = puVar8;
                     }
 while ( local_248 + lVar6 != puVar8 );
                  }

                  local_278 = 200;
                  local_258 = cbc_key;
                  local_268 = cbc_key;
                  uStack_260 = cbc2_key;
                  iVar4 = EVP_EncryptInit(ctx, cipher, (uchar*)&local_268, (uchar*)0x0);
                  iVar4 = test_true("test/destest.c", 0x2ee, "EVP_EncryptInit(ctx, cipher, key, NULL)", iVar4 != 0);
                  if (iVar4 != 0) {
                     iVar4 = EVP_EncryptUpdate(ctx, local_1d8, &local_278, local_248, iVar5);
                     iVar4 = test_true("test/destest.c", 0x2ef, "EVP_EncryptUpdate(ctx, c_txt, &clen_upd, in, in_bytes)", iVar4 != 0);
                     if (iVar4 != 0) {
                        iVar5 = iVar5 + -1 + iVar2;
                        uVar3 = test_int_eq("test/destest.c", 0x2f4, "clen_upd", "expect", local_278, ( iVar5 - iVar5 % iVar2 ) + iVar2 * 2);
                        if (uVar3 == 0) goto LAB_0010020d;
                        local_274 = 200 - local_278;
                        iVar5 = EVP_EncryptFinal(ctx, local_1d8 + local_278, &local_274);
                        iVar5 = test_true("test/destest.c", 0x2f8, "EVP_EncryptFinal(ctx, c_txt + clen_upd, &clen_fin)", iVar5 != 0);
                        if (iVar5 != 0) {
                           iVar4 = test_int_eq("test/destest.c", 0x2f9, "clen_fin", &_LC22, local_274, 0);
                           iVar2 = local_274;
                           iVar5 = local_278;
                           if (iVar4 != 0) {
                              local_270 = 200;
                              iVar4 = EVP_DecryptInit(ctx, cipher, (uchar*)&local_268, (uchar*)0x0);
                              iVar4 = test_true("test/destest.c", 0x2ff, "EVP_DecryptInit(ctx, cipher, key, NULL)", iVar4 != 0);
                              if (iVar4 != 0) {
                                 iVar5 = EVP_DecryptUpdate(ctx, local_108, &local_270, local_1d8, iVar2 + iVar5);
                                 iVar5 = test_true("test/destest.c", 0x300, "EVP_DecryptUpdate(ctx, p_txt, &plen_upd, c_txt, clen)", iVar5 != 0);
                                 if (iVar5 != 0) {
                                    local_26c = 200 - local_270;
                                    iVar5 = EVP_DecryptFinal(ctx, local_108 + local_270, &local_26c);
                                    iVar5 = test_true("test/destest.c", 0x304, "EVP_DecryptFinal(ctx, p_txt + plen_upd, &plen_fin)", iVar5 != 0);
                                    if (iVar5 != 0) {
                                       iVar5 = test_mem_eq("test/destest.c", 0x308, &_LC28, "p_txt", local_248, lVar6, local_108, (long)( local_26c + local_270 ));
                                       uVar3 = ( uint )(iVar5 != 0);
                                       goto LAB_0010020d;
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

               uVar3 = 0;
               goto LAB_0010020d;
            }

         }

      }

      uVar3 = 0;
      ctx = (EVP_CIPHER_CTX*)0x0;
   }

   LAB_0010020d:EVP_CIPHER_free(cipher);
   EVP_CIPHER_CTX_free(ctx);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
bool test_des_crypt(void) {
   int iVar1;
   char *pcVar2;
   pcVar2 = DES_crypt("testing", "ef");
   iVar1 = test_str_eq("test/destest.c", 0x1e3, "\"efGnQx2725bI2\"", "DES_crypt(\"testing\", \"ef\")", "efGnQx2725bI2", pcVar2);
   if (iVar1 != 0) {
      pcVar2 = DES_crypt("bca76;23", "yA");
      iVar1 = test_str_eq("test/destest.c", 0x1e5, "\"yA1Rp/1hZXIJk\"", "DES_crypt(\"bca76;23\", \"yA\")", "yA1Rp/1hZXIJk", pcVar2);
      if (iVar1 != 0) {
         pcVar2 = DES_crypt("testing", &_LC39);
         iVar1 = test_ptr_null("test/destest.c", 0x1e8, "DES_crypt(\"testing\", \"y\\202\")", pcVar2);
         if (iVar1 != 0) {
            pcVar2 = DES_crypt("testing", "");
            iVar1 = test_ptr_null("test/destest.c", 0x1ea, "DES_crypt(\"testing\", \"\\0A\")", pcVar2);
            if (iVar1 != 0) {
               pcVar2 = DES_crypt("testing", "A");
               iVar1 = test_ptr_null("test/destest.c", 0x1ec, "DES_crypt(\"testing\", \"A\")", pcVar2);
               return iVar1 != 0;
            }

         }

      }

   }

   return false;
}
bool test_des_quad_cksum(void) {
   uint uVar1;
   int iVar2;
   size_t length;
   long in_FS_OFFSET;
   bool bVar3;
   uchar local_38[4];
   uchar local_34[4];
   undefined4 local_30;
   undefined4 local_2c;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   length = strlen(cbc_data);
   uVar1 = DES_quad_cksum((uchar*)cbc_data, (DES_cblock*)local_38, length, 2, (DES_cblock*)&cbc_iv);
   iVar2 = test_uint_eq("test/destest.c", 699, &_LC46, "0x70d7a63aL", uVar1, 0x70d7a63a);
   if (iVar2 != 0) {
      iVar2 = test_uint_eq("test/destest.c", 0x2bd, "lqret[0]", "0x327eba8dL", local_38, 0x327eba8d);
      if (iVar2 != 0) {
         iVar2 = test_uint_eq("test/destest.c", 0x2bf, "lqret[1]", "0x201a49ccL", local_34, 0x201a49cc);
         if (iVar2 != 0) {
            iVar2 = test_uint_eq("test/destest.c", 0x2c1, "lqret[2]", "0x70d7a63aL", local_30, 0x70d7a63a);
            if (iVar2 != 0) {
               iVar2 = test_uint_eq("test/destest.c", 0x2c3, "lqret[3]", "0x501c2c26L", local_2c, 0x501c2c26);
               bVar3 = iVar2 != 0;
               goto LAB_001007b7;
            }

         }

      }

   }

   bVar3 = false;
   LAB_001007b7:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_des_cbc_cksum(void) {
   uint uVar1;
   int iVar2;
   size_t length;
   long in_FS_OFFSET;
   DES_key_schedule DStack_a8;
   uchar local_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   DES_set_key_checked((const_DES_cblock*)&cbc_key, &DStack_a8);
   length = strlen(cbc_data);
   uVar1 = DES_cbc_cksum((uchar*)cbc_data, &local_28, length, &DStack_a8, (const_DES_cblock*)&cbc_iv);
   iVar2 = test_uint_eq("test/destest.c", 0x2af, &_LC46, "cbc_cksum_ret", uVar1, 0xf7fe62b4);
   if (iVar2 != 0) {
      test_mem_eq("test/destest.c", 0x2b1, &_LC56, "cbc_cksum_data", &local_28, 8, &cbc_cksum_data, 8);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_des_ofb(void) {
   int iVar1;
   long in_FS_OFFSET;
   DES_key_schedule DStack_b8;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   DES_set_key_checked((const_DES_cblock*)&ofb_key, &DStack_b8);
   ofb_tmp = 0xefcdab9078563412;
   DES_ofb_encrypt(plain, ofb_buf1, 0x40, 3, &DStack_b8, (DES_cblock*)&ofb_tmp);
   iVar1 = test_mem_eq("test/destest.c", 0x26e, "ofb_cipher", "ofb_buf1", ofb_cipher, 0x18, ofb_buf1, 0x18);
   if (iVar1 != 0) {
      ofb_tmp = 0xefcdab9078563412;
      DES_ofb_encrypt(ofb_buf1, ofb_buf2, 0x40, 3, &DStack_b8, (DES_cblock*)&ofb_tmp);
      test_mem_eq("test/destest.c", 0x274, "plain", "ofb_buf2", plain, 0x18, ofb_buf2, 0x18);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_des_ede_cfb64(void) {
   int iVar1;
   long in_FS_OFFSET;
   int local_cc;
   DES_key_schedule local_c8;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   DES_set_key_checked((const_DES_cblock*)&cfb_key, &local_c8);
   local_cc = 0;
   cfb_tmp = 0xefcdab9078563412;
   DES_ede3_cfb64_encrypt(plain, cfb_buf1, 0xc, &local_c8, &local_c8, &local_c8, (DES_cblock*)&cfb_tmp, &local_cc, 1);
   DES_ede3_cfb64_encrypt(plain + 0xc, cfb_buf1 + 0xc, 0xc, &local_c8, &local_c8, &local_c8, (DES_cblock*)&cfb_tmp, &local_cc, 1);
   iVar1 = test_mem_eq("test/destest.c", 0x25c, "cfb_cipher64", "cfb_buf1", cfb_cipher64, 0x18, cfb_buf1, 0x18);
   if (iVar1 != 0) {
      local_cc = 0;
      cfb_tmp = 0xefcdab9078563412;
      DES_ede3_cfb64_encrypt(cfb_buf1, cfb_buf2, 0x11, &local_c8, &local_c8, &local_c8, (DES_cblock*)&cfb_tmp, &local_cc, 0);
      DES_ede3_cfb64_encrypt(cfb_buf1 + 0x11, cfb_buf2 + 0x11, 7, &local_c8, &local_c8, &local_c8, (DES_cblock*)&cfb_tmp, &local_cc, 0);
      test_mem_eq("test/destest.c", 0x264, "plain", "cfb_buf2", plain, 0x18, cfb_buf2, 0x18);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 test_des_cfb64(void) {
   int iVar1;
   undefined8 uVar2;
   uchar *puVar3;
   uchar *puVar4;
   uchar *puVar5;
   long in_FS_OFFSET;
   int local_cc;
   DES_key_schedule local_c8;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   DES_set_key_checked((const_DES_cblock*)&cfb_key, &local_c8);
   cfb_tmp = 0xefcdab9078563412;
   DES_cfb_encrypt(plain, cfb_buf1, 0x40, 0x18, &local_c8, (DES_cblock*)&cfb_tmp, 1);
   iVar1 = test_mem_eq("test/destest.c", 0x20d, "cfb_cipher", "cfb_buf1", cfb_cipher64, 0x18, cfb_buf1, 0x18);
   if (iVar1 != 0) {
      cfb_tmp = 0xefcdab9078563412;
      DES_cfb_encrypt(cfb_buf1, cfb_buf2, 0x40, 0x18, &local_c8, (DES_cblock*)&cfb_tmp, 0);
      iVar1 = test_mem_eq("test/destest.c", 0x212, "plain", "cfb_buf2", plain, 0x18, cfb_buf2, 0x18);
      if (iVar1 != 0) {
         DES_set_key_checked((const_DES_cblock*)&cfb_key, &local_c8);
         local_cc = 0;
         cfb_tmp = 0xefcdab9078563412;
         DES_cfb64_encrypt(plain, cfb_buf1, 0xc, &local_c8, (DES_cblock*)&cfb_tmp, &local_cc, 1);
         DES_cfb64_encrypt(plain + 0xc, cfb_buf1 + 0xc, 0xc, &local_c8, (DES_cblock*)&cfb_tmp, &local_cc, 1);
         iVar1 = test_mem_eq("test/destest.c", 0x238, "cfb_cipher64", "cfb_buf1", cfb_cipher64, 0x18, cfb_buf1, 0x18);
         if (iVar1 != 0) {
            local_cc = 0;
            cfb_tmp = 0xefcdab9078563412;
            DES_cfb64_encrypt(cfb_buf1, cfb_buf2, 0x11, &local_c8, (DES_cblock*)&cfb_tmp, &local_cc, 0);
            DES_cfb64_encrypt(cfb_buf1 + 0x11, cfb_buf2 + 0x11, 7, &local_c8, (DES_cblock*)&cfb_tmp, &local_cc, 0);
            iVar1 = test_mem_eq("test/destest.c", 0x23f, "plain", "cfb_buf2", plain, 0x18, cfb_buf2, 0x18);
            if (iVar1 != 0) {
               cfb_tmp = 0xefcdab9078563412;
               puVar3 = plain;
               puVar5 = cfb_buf1;
               do {
                  puVar4 = puVar3 + 1;
                  DES_cfb_encrypt(puVar3, puVar5, 8, 1, &local_c8, (DES_cblock*)&cfb_tmp, 1);
                  puVar3 = puVar4;
                  puVar5 = puVar5 + 1;
               }
 while ( puVar4 != (uchar*)&cfb_key );
               iVar1 = test_mem_eq("test/destest.c", 0x246, "cfb_cipher8", "cfb_buf1", cfb_cipher8, 0x18, cfb_buf1, 0x18);
               if (iVar1 != 0) {
                  cfb_tmp = 0xefcdab9078563412;
                  puVar3 = cfb_buf1;
                  puVar5 = cfb_buf2;
                  do {
                     puVar4 = puVar3 + 1;
                     DES_cfb_encrypt(puVar3, puVar5, 8, 1, &local_c8, (DES_cblock*)&cfb_tmp, 0);
                     puVar3 = puVar4;
                     puVar5 = puVar5 + 1;
                  }
 while ( puVar4 != cfb_buf1 + 0x18 );
                  uVar2 = test_mem_eq("test/destest.c", 0x24d, "plain", "cfb_buf2", plain, 0x18, cfb_buf2, 0x18);
                  goto LAB_00100d2d;
               }

            }

         }

      }

   }

   uVar2 = 0;
   LAB_00100d2d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 test_output_align(int param_1) {
   int iVar1;
   size_t sVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   DES_key_schedule DStack_e8;
   DES_cblock local_60;
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar2 = strlen(cbc_data);
   local_38 = 0;
   local_58 = (undefined1[16])0x0;
   for (int i = 0; i < 8; i++) {
      local_60[i] = cbc_iv[i];
   }

   local_48 = (undefined1[16])0x0;
   iVar1 = DES_set_key_checked((const_DES_cblock*)&cbc_key, &DStack_e8);
   uVar3 = test_int_eq("test/destest.c", 0x1db, "DES_set_key_checked(&cbc_key, &ks)", &_LC22, iVar1, 0);
   if ((int)uVar3 != 0) {
      DES_ncbc_encrypt((uchar*)cbc_data, local_58 + param_1, sVar2 + 1, &DStack_e8, &local_60, 1);
      uVar3 = 1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 test_input_align(int param_1) {
   int iVar1;
   size_t sVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   DES_key_schedule DStack_e8;
   DES_cblock local_60;
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar2 = strlen(cbc_data + param_1);
   local_38 = 0;
   local_58 = (undefined1[16])0x0;
   for (int i = 0; i < 8; i++) {
      local_60[i] = cbc_iv[i];
   }

   local_48 = (undefined1[16])0x0;
   iVar1 = DES_set_key_checked((const_DES_cblock*)&cbc_key, &DStack_e8);
   uVar3 = test_int_eq("test/destest.c", 0x1cc, "DES_set_key_checked(&cbc_key, &ks)", &_LC22, iVar1, 0);
   if ((int)uVar3 != 0) {
      DES_ncbc_encrypt((uchar*)( cbc_data + param_1 ), local_58, sVar2 + 1, &DStack_e8, &local_60, 1);
      uVar3 = 1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 test_des_cbc(void) {
   int iVar1;
   size_t sVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   DES_key_schedule local_128;
   DES_cblock local_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined8 local_78;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar2 = strlen(cbc_data);
   iVar1 = DES_set_key_checked((const_DES_cblock*)&cbc_key, &local_128);
   iVar1 = test_int_eq("test/destest.c", 0x17c, "DES_set_key_checked(&cbc_key, &ks)", &_LC22, iVar1, 0);
   if (iVar1 != 0) {
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      for (int i = 0; i < 8; i++) {
         local_a0[i] = cbc_iv[i];
      }

      local_98 = (undefined1[16])0x0;
      local_88 = (undefined1[16])0x0;
      local_48 = 0;
      local_78 = 0;
      DES_ncbc_encrypt((uchar*)cbc_data, local_68, sVar2 + 1, &local_128, &local_a0, 1);
      iVar1 = test_mem_eq("test/destest.c", 0x183, "cbc_out", "cbc_ok", local_68, 0x20, cbc_ok, 0x20);
      if (iVar1 != 0) {
         for (int i = 0; i < 8; i++) {
            local_a0[i] = cbc_iv[i];
         }

         DES_ncbc_encrypt(local_68, local_98, sVar2 + 1, &local_128, &local_a0, 0);
         uVar3 = test_mem_eq("test/destest.c", 0x189, "cbc_in", "cbc_data", local_98, sVar2, cbc_data, sVar2);
         goto LAB_001012bc;
      }

   }

   uVar3 = 0;
   LAB_001012bc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_des_ede_ofb64(void) {
   int iVar1;
   uchar *in;
   uchar *puVar2;
   uchar *out;
   long in_FS_OFFSET;
   int local_cc;
   DES_key_schedule local_c8;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   DES_set_key_checked((const_DES_cblock*)&ofb_key, &local_c8);
   local_cc = 0;
   ofb_tmp = 0xefcdab9078563412;
   ofb_buf1._16_8_ = 0;
   ofb_buf2._16_8_ = 0;
   ofb_buf1._0_16_ = (undefined1[16])0x0;
   ofb_buf2._0_16_ = (undefined1[16])0x0;
   in = plain;
   out = ofb_buf1;
   do {
      puVar2 = in + 1;
      DES_ede3_ofb64_encrypt(in, out, 1, &local_c8, &local_c8, &local_c8, (DES_cblock*)&ofb_tmp, &local_cc);
      in = puVar2;
      out = out + 1;
   }
 while ( puVar2 != (uchar*)&cfb_key );
   iVar1 = test_mem_eq("test/destest.c", 0x29d, "ofb_cipher", "ofb_buf1", ofb_cipher, 0x18, ofb_buf1, 0x18);
   if (iVar1 != 0) {
      local_cc = 0;
      ofb_tmp = 0xefcdab9078563412;
      DES_ede3_ofb64_encrypt(ofb_buf1, ofb_buf2, 0x18, &local_c8, &local_c8, &local_c8, (DES_cblock*)&ofb_tmp, &local_cc);
      test_mem_eq("test/destest.c", 0x2a3, "plain", "ofb_buf2", plain, 0x18, ofb_buf2, 0x18);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_des_ofb64(void) {
   int iVar1;
   uchar *in;
   uchar *puVar2;
   uchar *out;
   long in_FS_OFFSET;
   int local_cc;
   DES_key_schedule local_c8;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   DES_set_key_checked((const_DES_cblock*)&ofb_key, &local_c8);
   local_cc = 0;
   ofb_tmp = 0xefcdab9078563412;
   ofb_buf1._16_8_ = 0;
   ofb_buf2._16_8_ = 0;
   ofb_buf1._0_16_ = (undefined1[16])0x0;
   ofb_buf2._0_16_ = (undefined1[16])0x0;
   in = plain;
   out = ofb_buf1;
   do {
      puVar2 = in + 1;
      DES_ofb64_encrypt(in, out, 1, &local_c8, (DES_cblock*)&ofb_tmp, &local_cc);
      in = puVar2;
      out = out + 1;
   }
 while ( puVar2 != (uchar*)&cfb_key );
   iVar1 = test_mem_eq("test/destest.c", 0x285, "ofb_cipher", "ofb_buf1", ofb_cipher, 0x18, ofb_buf1, 0x18);
   if (iVar1 != 0) {
      local_cc = 0;
      ofb_tmp = 0xefcdab9078563412;
      DES_ofb64_encrypt(ofb_buf1, ofb_buf2, 0x18, &local_c8, (DES_cblock*)&ofb_tmp, &local_cc);
      test_mem_eq("test/destest.c", 0x28b, "plain", "ofb_buf2", plain, 0x18, ofb_buf2, 0x18);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 test_des_pcbc(void) {
   int iVar1;
   size_t sVar2;
   undefined8 uVar3;
   ulong length;
   long in_FS_OFFSET;
   DES_key_schedule DStack_118;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined8 local_78;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar2 = strlen(cbc_data);
   iVar1 = DES_set_key_checked((const_DES_cblock*)&cbc_key, &DStack_118);
   iVar1 = test_int_eq("test/destest.c", 0x1f8, "DES_set_key_checked(&cbc_key, &ks)", &_LC22, iVar1, 0);
   if (iVar1 != 0) {
      length = ( ulong )((int)sVar2 + 1);
      local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      local_98 = (undefined1[16])0x0;
      local_88 = (undefined1[16])0x0;
      local_48 = 0;
      local_78 = 0;
      DES_pcbc_encrypt((uchar*)cbc_data, local_68, length, &DStack_118, (DES_cblock*)&cbc_iv, 1);
      iVar1 = test_mem_eq("test/destest.c", 0x1fe, "cbc_out", "pcbc_ok", local_68, 0x20, pcbc_ok, 0x20);
      if (iVar1 != 0) {
         DES_pcbc_encrypt(local_68, local_98, length, &DStack_118, (DES_cblock*)&cbc_iv, 0);
         uVar3 = test_mem_eq("test/destest.c", 0x202, "cbc_in", "cbc_data", local_98, length, cbc_data, length);
         goto LAB_001017da;
      }

   }

   uVar3 = 0;
   LAB_001017da:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 test_des_ede_cbc(void) {
   int iVar1;
   size_t sVar2;
   undefined8 uVar3;
   long length;
   long in_FS_OFFSET;
   DES_key_schedule local_128;
   DES_cblock local_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined8 local_78;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar2 = strlen(cbc_data);
   iVar1 = DES_set_key_checked((const_DES_cblock*)&cbc_key, &local_128);
   iVar1 = test_int_eq("test/destest.c", 0x194, "DES_set_key_checked(&cbc_key, &ks)", &_LC22, iVar1, 0);
   if (iVar1 != 0) {
      length = sVar2 + 1;
      local_48 = 0;
      local_68 = (undefined1[16])0x0;
      for (int i = 0; i < 8; i++) {
         local_a0[i] = cbc_iv[i];
      }

      local_58 = (undefined1[16])0x0;
      local_98 = (undefined1[16])0x0;
      local_88 = (undefined1[16])0x0;
      local_78 = 0;
      DES_xcbc_encrypt((uchar*)cbc_data, local_68, length, &local_128, &local_a0, (const_DES_cblock*)&cbc2_key, (const_DES_cblock*)&cbc3_key, 1);
      iVar1 = test_mem_eq("test/destest.c", 0x19b, "cbc_out", "xcbc_ok", local_68, 0x20, xcbc_ok, 0x20);
      if (iVar1 != 0) {
         for (int i = 0; i < 8; i++) {
            local_a0[i] = cbc_iv[i];
         }

         DES_xcbc_encrypt(local_68, local_98, length, &local_128, &local_a0, (const_DES_cblock*)&cbc2_key, (const_DES_cblock*)&cbc3_key, 0);
         uVar3 = test_mem_eq("test/destest.c", 0x1a0, "cbc_data", "cbc_data", cbc_data, length, cbc_data, length);
         goto LAB_0010197c;
      }

   }

   uVar3 = 0;
   LAB_0010197c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 test_ede_cbc(void) {
   int iVar1;
   size_t sVar2;
   undefined8 uVar3;
   long length;
   ulong uVar4;
   long in_FS_OFFSET;
   DES_key_schedule local_228;
   DES_key_schedule local_1a8;
   DES_key_schedule local_128;
   DES_cblock local_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined8 local_78;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   sVar2 = strlen(cbc_data);
   iVar1 = DES_set_key_checked((const_DES_cblock*)&cbc_key, &local_228);
   iVar1 = test_int_eq("test/destest.c", 0x1ac, "DES_set_key_checked(&cbc_key, &ks)", &_LC22, iVar1, 0);
   if (iVar1 != 0) {
      iVar1 = DES_set_key_checked((const_DES_cblock*)&cbc2_key, &local_1a8);
      iVar1 = test_int_eq("test/destest.c", 0x1ae, "DES_set_key_checked(&cbc2_key, &ks2)", &_LC22, iVar1, 0);
      if (iVar1 != 0) {
         iVar1 = DES_set_key_checked((const_DES_cblock*)&cbc3_key, &local_128);
         iVar1 = test_int_eq("test/destest.c", 0x1b0, "DES_set_key_checked(&cbc3_key, &ks3)", &_LC22, iVar1, 0);
         if (iVar1 != 0) {
            for (int i = 0; i < 8; i++) {
               local_a0[i] = cbc_iv[i];
            }

            local_68 = (undefined1[16])0x0;
            local_58 = (undefined1[16])0x0;
            local_98 = (undefined1[16])0x0;
            local_88 = (undefined1[16])0x0;
            local_48 = 0;
            local_78 = 0;
            DES_ede3_cbc_encrypt((uchar*)cbc_data, local_68, 0x10, &local_228, &local_1a8, &local_128, &local_a0, 1);
            DES_ede3_cbc_encrypt((uchar*)( cbc_data + 0x10 ), local_58, sVar2 - 0xf, &local_228, &local_1a8, &local_128, &local_a0, 1);
            uVar4 = sVar2 + 8 & 0xfffffffffffffff8;
            iVar1 = test_mem_eq("test/destest.c", 0x1ba, "cbc_out", "cbc3_ok", local_68, uVar4, cbc3_ok, uVar4);
            if (iVar1 != 0) {
               length = sVar2 + 1;
               for (int i = 0; i < 8; i++) {
                  local_a0[i] = cbc_iv[i];
               }

               DES_ede3_cbc_encrypt(local_68, local_98, length, &local_228, &local_1a8, &local_128, &local_a0, 0);
               uVar3 = test_mem_eq("test/destest.c", 0x1c0, "cbc_in", "cbc_data", local_98, length, cbc_data, length);
               goto LAB_00101b5f;
            }

         }

      }

   }

   uVar3 = 0;
   LAB_00101b5f:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_des_cfb48(void) {
   int iVar1;
   long in_FS_OFFSET;
   DES_key_schedule DStack_b8;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   DES_set_key_checked((const_DES_cblock*)&cfb_key, &DStack_b8);
   cfb_tmp = 0xefcdab9078563412;
   DES_cfb_encrypt(plain, cfb_buf1, 0x30, 0x18, &DStack_b8, (DES_cblock*)&cfb_tmp, 1);
   iVar1 = test_mem_eq("test/destest.c", 0x20d, "cfb_cipher", "cfb_buf1", cfb_cipher48, 0x18, cfb_buf1, 0x18);
   if (iVar1 != 0) {
      cfb_tmp = 0xefcdab9078563412;
      DES_cfb_encrypt(cfb_buf1, cfb_buf2, 0x30, 0x18, &DStack_b8, (DES_cblock*)&cfb_tmp, 0);
      test_mem_eq("test/destest.c", 0x212, "plain", "cfb_buf2", plain, 0x18, cfb_buf2, 0x18);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_des_cfb8(void) {
   int iVar1;
   long in_FS_OFFSET;
   DES_key_schedule DStack_b8;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   DES_set_key_checked((const_DES_cblock*)&cfb_key, &DStack_b8);
   cfb_tmp = 0xefcdab9078563412;
   DES_cfb_encrypt(plain, cfb_buf1, 8, 0x18, &DStack_b8, (DES_cblock*)&cfb_tmp, 1);
   iVar1 = test_mem_eq("test/destest.c", 0x20d, "cfb_cipher", "cfb_buf1", cfb_cipher8, 0x18, cfb_buf1, 0x18);
   if (iVar1 != 0) {
      cfb_tmp = 0xefcdab9078563412;
      DES_cfb_encrypt(cfb_buf1, cfb_buf2, 8, 0x18, &DStack_b8, (DES_cblock*)&cfb_tmp, 0);
      test_mem_eq("test/destest.c", 0x212, "plain", "cfb_buf2", plain, 0x18, cfb_buf2, 0x18);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_des_cfb16(void) {
   int iVar1;
   long in_FS_OFFSET;
   DES_key_schedule DStack_b8;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   DES_set_key_checked((const_DES_cblock*)&cfb_key, &DStack_b8);
   cfb_tmp = 0xefcdab9078563412;
   DES_cfb_encrypt(plain, cfb_buf1, 0x10, 0x18, &DStack_b8, (DES_cblock*)&cfb_tmp, 1);
   iVar1 = test_mem_eq("test/destest.c", 0x20d, "cfb_cipher", "cfb_buf1", cfb_cipher16, 0x18, cfb_buf1, 0x18);
   if (iVar1 != 0) {
      cfb_tmp = 0xefcdab9078563412;
      DES_cfb_encrypt(cfb_buf1, cfb_buf2, 0x10, 0x18, &DStack_b8, (DES_cblock*)&cfb_tmp, 0);
      test_mem_eq("test/destest.c", 0x212, "plain", "cfb_buf2", plain, 0x18, cfb_buf2, 0x18);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void test_des_cfb32(void) {
   int iVar1;
   long in_FS_OFFSET;
   DES_key_schedule DStack_b8;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   DES_set_key_checked((const_DES_cblock*)&cfb_key, &DStack_b8);
   cfb_tmp = 0xefcdab9078563412;
   DES_cfb_encrypt(plain, cfb_buf1, 0x20, 0x18, &DStack_b8, (DES_cblock*)&cfb_tmp, 1);
   iVar1 = test_mem_eq("test/destest.c", 0x20d, "cfb_cipher", "cfb_buf1", cfb_cipher32, 0x18, cfb_buf1, 0x18);
   if (iVar1 != 0) {
      cfb_tmp = 0xefcdab9078563412;
      DES_cfb_encrypt(cfb_buf1, cfb_buf2, 0x20, 0x18, &DStack_b8, (DES_cblock*)&cfb_tmp, 0);
      test_mem_eq("test/destest.c", 0x212, "plain", "cfb_buf2", plain, 0x18, cfb_buf2, 0x18);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 test_des_ede_ecb(int param_1) {
   long lVar1;
   const_DES_cblock *key;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   DES_key_schedule local_218;
   DES_key_schedule local_198;
   DES_key_schedule local_118;
   const_DES_cblock local_90;
   const_DES_cblock local_88;
   DES_cblock local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined1 local_68;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined1 local_48;
   long local_40;
   lVar1 = (long)param_1 * 8;
   key = (const_DES_cblock*)( key_data + lVar1 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   DES_set_key_unchecked(key, &local_218);
   DES_set_key_unchecked((const_DES_cblock*)( key_data + lVar1 + 8 ), &local_198);
   DES_set_key_unchecked((const_DES_cblock*)( key_data + lVar1 + 0x10 ), &local_118);
   for (int i = 0; i < 8; i++) {
      local_88[i] = '\0';
   }

   local_90 = *(const_DES_cblock*)( plain_data + (long)param_1 * 8 );
   for (int i = 0; i < 8; i++) {
      local_80[i] = '\0';
   }

   DES_ecb3_encrypt(&local_90, &local_88, &local_218, &local_198, &local_218, 1);
   DES_ecb3_encrypt(&local_88, &local_80, &local_218, &local_198, &local_218, 0);
   iVar2 = test_mem_eq("test/destest.c", 0x167, &_LC77, "cipher_ecb2[i]", &local_88, 8, cipher_ecb2 + lVar1, 8);
   if (iVar2 == 0) {
      local_58 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[local_90[3] & 0xf], "0123456789ABCDEF"[local_90[3] >> 4]), "0123456789ABCDEF"[local_90[2] & 0xf]), "0123456789ABCDEF"[local_90[2] >> 4]), "0123456789ABCDEF"[local_90[1] & 0xf]), "0123456789ABCDEF"[local_90[1] >> 4]), "0123456789ABCDEF"[local_90[0] & 0xf]), "0123456789ABCDEF"[local_90[0] >> 4]);
      uStack_50 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[local_90[7] & 0xf], "0123456789ABCDEF"[local_90[7] >> 4]), "0123456789ABCDEF"[local_90[6] & 0xf]), "0123456789ABCDEF"[local_90[6] >> 4]), "0123456789ABCDEF"[local_90[5] & 0xf]), "0123456789ABCDEF"[local_90[5] >> 4]), "0123456789ABCDEF"[local_90[4] & 0xf]), "0123456789ABCDEF"[local_90[4] >> 4]);
      local_48 = 0;
      local_78 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[(byte)key_data[lVar1 + 3] & 0xf], "0123456789ABCDEF"[(byte)key_data[lVar1 + 3] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 2] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 2] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 1] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 1] >> 4]), "0123456789ABCDEF"[( *key )[0] & 0xf]), "0123456789ABCDEF"[( *key )[0] >> 4]);
      local_68 = 0;
      uStack_70 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[(byte)key_data[lVar1 + 7] & 0xf], "0123456789ABCDEF"[(byte)key_data[lVar1 + 7] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 6] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 6] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 5] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 5] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 4] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 4] >> 4]);
      test_info("test/destest.c", 0x168, "Encryption error %2d k=%s p=%s", param_1 + 1, &local_78, &local_58);
      uVar3 = 0;
   }
 else {
      iVar2 = test_mem_eq("test/destest.c", 0x16c, &_LC28, "outin", &local_90, 8, &local_80, 8);
      uVar3 = 1;
      if (iVar2 == 0) {
         local_58 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[local_88[3] & 0xf], "0123456789ABCDEF"[local_88[3] >> 4]), "0123456789ABCDEF"[local_88[2] & 0xf]), "0123456789ABCDEF"[local_88[2] >> 4]), "0123456789ABCDEF"[local_88[1] & 0xf]), "0123456789ABCDEF"[local_88[1] >> 4]), "0123456789ABCDEF"[local_88[0] & 0xf]), "0123456789ABCDEF"[local_88[0] >> 4]);
         uStack_50 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[local_88[7] & 0xf], "0123456789ABCDEF"[local_88[7] >> 4]), "0123456789ABCDEF"[local_88[6] & 0xf]), "0123456789ABCDEF"[local_88[6] >> 4]), "0123456789ABCDEF"[local_88[5] & 0xf]), "0123456789ABCDEF"[local_88[5] >> 4]), "0123456789ABCDEF"[local_88[4] & 0xf]), "0123456789ABCDEF"[local_88[4] >> 4]);
         local_48 = 0;
         local_78 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[(byte)key_data[lVar1 + 3] & 0xf], "0123456789ABCDEF"[(byte)key_data[lVar1 + 3] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 2] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 2] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 1] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 1] >> 4]), "0123456789ABCDEF"[( *key )[0] & 0xf]), "0123456789ABCDEF"[( *key )[0] >> 4]);
         local_68 = 0;
         uStack_70 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[(byte)key_data[lVar1 + 7] & 0xf], "0123456789ABCDEF"[(byte)key_data[lVar1 + 7] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 6] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 6] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 5] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 5] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 4] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 4] >> 4]);
         test_info("test/destest.c", 0x16d, "Decryption error %2d k=%s p=%s ", param_1 + 1, &local_78, &local_58);
         uVar3 = 0;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 test_des_ecb(int param_1) {
   long lVar1;
   int iVar2;
   undefined8 uVar3;
   const_DES_cblock *key;
   long in_FS_OFFSET;
   DES_key_schedule local_118;
   const_DES_cblock local_90;
   const_DES_cblock local_88;
   DES_cblock local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined1 local_68;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined1 local_48;
   long local_40;
   lVar1 = (long)param_1 * 8;
   key = (const_DES_cblock*)( key_data + lVar1 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   DES_set_key_unchecked(key, &local_118);
   for (int i = 0; i < 8; i++) {
      local_88[i] = '\0';
   }

   for (int i = 0; i < 8; i++) {
      local_80[i] = '\0';
   }

   local_90 = *(const_DES_cblock*)( plain_data + (long)param_1 * 8 );
   DES_ecb_encrypt(&local_90, &local_88, &local_118, 1);
   DES_ecb_encrypt(&local_88, &local_80, &local_118, 0);
   iVar2 = test_mem_eq("test/destest.c", 0x14b, &_LC77, "cipher_data[i]", &local_88, 8, cipher_data + lVar1, 8);
   if (iVar2 == 0) {
      local_58 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[local_90[3] & 0xf], "0123456789ABCDEF"[local_90[3] >> 4]), "0123456789ABCDEF"[local_90[2] & 0xf]), "0123456789ABCDEF"[local_90[2] >> 4]), "0123456789ABCDEF"[local_90[1] & 0xf]), "0123456789ABCDEF"[local_90[1] >> 4]), "0123456789ABCDEF"[local_90[0] & 0xf]), "0123456789ABCDEF"[local_90[0] >> 4]);
      uStack_50 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[local_90[7] & 0xf], "0123456789ABCDEF"[local_90[7] >> 4]), "0123456789ABCDEF"[local_90[6] & 0xf]), "0123456789ABCDEF"[local_90[6] >> 4]), "0123456789ABCDEF"[local_90[5] & 0xf]), "0123456789ABCDEF"[local_90[5] >> 4]), "0123456789ABCDEF"[local_90[4] & 0xf]), "0123456789ABCDEF"[local_90[4] >> 4]);
      local_48 = 0;
      local_78 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[(byte)key_data[lVar1 + 3] & 0xf], "0123456789ABCDEF"[(byte)key_data[lVar1 + 3] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 2] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 2] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 1] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 1] >> 4]), "0123456789ABCDEF"[( *key )[0] & 0xf]), "0123456789ABCDEF"[( *key )[0] >> 4]);
      local_68 = 0;
      uStack_70 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[(byte)key_data[lVar1 + 7] & 0xf], "0123456789ABCDEF"[(byte)key_data[lVar1 + 7] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 6] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 6] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 5] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 5] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 4] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 4] >> 4]);
      test_info("test/destest.c", 0x14c, "Encryption error %2d k=%s p=%s", param_1 + 1, &local_78, &local_58);
      uVar3 = 0;
   }
 else {
      iVar2 = test_mem_eq("test/destest.c", 0x150, &_LC28, "outin", &local_90, 8, &local_80, 8);
      uVar3 = 1;
      if (iVar2 == 0) {
         local_58 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[local_88[3] & 0xf], "0123456789ABCDEF"[local_88[3] >> 4]), "0123456789ABCDEF"[local_88[2] & 0xf]), "0123456789ABCDEF"[local_88[2] >> 4]), "0123456789ABCDEF"[local_88[1] & 0xf]), "0123456789ABCDEF"[local_88[1] >> 4]), "0123456789ABCDEF"[local_88[0] & 0xf]), "0123456789ABCDEF"[local_88[0] >> 4]);
         uStack_50 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[local_88[7] & 0xf], "0123456789ABCDEF"[local_88[7] >> 4]), "0123456789ABCDEF"[local_88[6] & 0xf]), "0123456789ABCDEF"[local_88[6] >> 4]), "0123456789ABCDEF"[local_88[5] & 0xf]), "0123456789ABCDEF"[local_88[5] >> 4]), "0123456789ABCDEF"[local_88[4] & 0xf]), "0123456789ABCDEF"[local_88[4] >> 4]);
         local_48 = 0;
         local_78 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[(byte)key_data[lVar1 + 3] & 0xf], "0123456789ABCDEF"[(byte)key_data[lVar1 + 3] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 2] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 2] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 1] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 1] >> 4]), "0123456789ABCDEF"[( *key )[0] & 0xf]), "0123456789ABCDEF"[( *key )[0] >> 4]);
         local_68 = 0;
         uStack_70 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11("0123456789ABCDEF"[(byte)key_data[lVar1 + 7] & 0xf], "0123456789ABCDEF"[(byte)key_data[lVar1 + 7] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 6] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 6] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 5] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 5] >> 4]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 4] & 0xf]), "0123456789ABCDEF"[(byte)key_data[lVar1 + 4] >> 4]);
         test_info("test/destest.c", 0x151, "Decryption error %2d k=%s p=%s", param_1 + 1, &local_78, &local_58);
         uVar3 = 0;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 setup_tests(void) {
   add_all_tests("test_des_ecb", test_des_ecb, 0x22, 1);
   add_test("test_des_cbc", test_des_cbc);
   add_test("test_ede_cbc", test_ede_cbc);
   add_all_tests("test_des_ede_ecb", test_des_ede_ecb, 0x20, 1);
   add_test("test_des_ede_cbc", test_des_ede_cbc);
   add_test("test_des_pcbc", test_des_pcbc);
   add_test("test_des_cfb8", test_des_cfb8);
   add_test("test_des_cfb16", test_des_cfb16);
   add_test("test_des_cfb32", test_des_cfb32);
   add_test("test_des_cfb48", test_des_cfb48);
   add_test("test_des_cfb64", test_des_cfb64);
   add_test("test_des_ede_cfb64", test_des_ede_cfb64);
   add_test("test_des_ofb", test_des_ofb);
   add_test("test_des_ofb64", test_des_ofb64);
   add_test("test_des_ede_ofb64", test_des_ede_ofb64);
   add_test("test_des_cbc_cksum", test_des_cbc_cksum);
   add_test("test_des_quad_cksum", test_des_quad_cksum);
   add_test("test_des_crypt", test_des_crypt);
   add_all_tests("test_input_align", test_input_align, 4, 1);
   add_all_tests("test_output_align", test_output_align, 4, 1);
   add_all_tests("test_des_key_wrap", test_des_key_wrap, 6, 1);
   add_all_tests("test_des_weak_keys", test_des_weak_keys, 0x11, 1);
   add_all_tests("test_des_check_bad_parity", test_des_check_bad_parity, 0xb, 1);
   add_test("test_des_two_key", 0x100000);
   return 1;
}

