undefined8 des_ede_cbc_cipher(long param_1, uchar *param_2, uchar *param_3, ulong param_4) {
   long lVar1;
   int enc;
   DES_key_schedule *ks1;
   long lVar2;
   uchar *puVar3;
   uchar *input;
   uchar *output;
   uchar *local_50;
   ks1 = (DES_key_schedule*)EVP_CIPHER_CTX_get_cipher_data();
   if (ks1[3].ks[0] == (_union_772)0x0) {
      output = param_2;
      local_50 = param_3;
      if (0x3fffffff < param_4) {
         lVar1 = ( param_4 - 0x40000000 & 0xffffffffc0000000 ) + 0x40000000;
         output = param_2 + lVar1;
         input = param_3;
         lVar2 = lVar1;
         do {
            lVar2 = EVP_CIPHER_CTX_is_encrypting(param_1, lVar2);
            puVar3 = param_2 + 0x40000000;
            DES_ede3_cbc_encrypt(input, param_2, 0x40000000, ks1, ks1 + 1, ks1 + 2, (DES_cblock*)( param_1 + 0x28 ), (int)lVar2);
            param_2 = puVar3;
            input = input + 0x40000000;
         } while ( puVar3 != output );
         local_50 = param_3 + lVar1;
         param_4 = ( ulong )((uint)param_4 & 0x3fffffff);
      }
      if (param_4 != 0) {
         enc = EVP_CIPHER_CTX_is_encrypting(param_1);
         DES_ede3_cbc_encrypt(local_50, output, param_4, ks1, ks1 + 1, ks1 + 2, (DES_cblock*)( param_1 + 0x28 ), enc);
      }
   } else {
      ( *(code*)ks1[3].ks[0] )(param_3, param_2, param_4, ks1, param_1 + 0x28);
   }
   return 1;
}undefined8 des_ede3_init_key(undefined8 param_1, const_DES_cblock *param_2) {
   DES_key_schedule *schedule;
   schedule = (DES_key_schedule*)EVP_CIPHER_CTX_get_cipher_data();
   schedule[3].ks[0] = (_union_772)0x0;
   DES_set_key_unchecked(param_2, schedule);
   DES_set_key_unchecked(param_2 + 1, schedule + 1);
   DES_set_key_unchecked(param_2 + 2, schedule + 2);
   return 1;
}undefined8 des_ede_init_key(undefined8 param_1, const_DES_cblock *param_2) {
   _union_772 _Var1;
   _union_772 _Var2;
   _union_772 _Var3;
   _union_772 _Var4;
   _union_772 _Var5;
   _union_772 _Var6;
   _union_772 _Var7;
   _union_772 _Var8;
   _union_772 _Var9;
   _union_772 _Var10;
   _union_772 _Var11;
   _union_772 _Var12;
   _union_772 _Var13;
   _union_772 _Var14;
   DES_key_schedule *schedule;
   schedule = (DES_key_schedule*)EVP_CIPHER_CTX_get_cipher_data();
   schedule[3].ks[0] = (_union_772)0x0;
   DES_set_key_unchecked(param_2, schedule);
   DES_set_key_unchecked(param_2 + 1, schedule + 1);
   _Var1 = schedule->ks[1];
   _Var2 = schedule->ks[2];
   _Var3 = schedule->ks[3];
   _Var4 = schedule->ks[4];
   _Var5 = schedule->ks[5];
   _Var6 = schedule->ks[6];
   _Var7 = schedule->ks[7];
   _Var8 = schedule->ks[8];
   _Var9 = schedule->ks[9];
   _Var10 = schedule->ks[10];
   _Var11 = schedule->ks[0xb];
   schedule[2].ks[0] = schedule->ks[0];
   schedule[2].ks[1] = _Var1;
   _Var1 = schedule->ks[0xc];
   _Var12 = schedule->ks[0xd];
   _Var13 = schedule->ks[0xe];
   _Var14 = schedule->ks[0xf];
   schedule[2].ks[2] = _Var2;
   schedule[2].ks[3] = _Var3;
   schedule[2].ks[4] = _Var4;
   schedule[2].ks[5] = _Var5;
   schedule[2].ks[6] = _Var6;
   schedule[2].ks[7] = _Var7;
   schedule[2].ks[8] = _Var8;
   schedule[2].ks[9] = _Var9;
   schedule[2].ks[10] = _Var10;
   schedule[2].ks[0xb] = _Var11;
   schedule[2].ks[0xc] = _Var1;
   schedule[2].ks[0xd] = _Var12;
   schedule[2].ks[0xe] = _Var13;
   schedule[2].ks[0xf] = _Var14;
   return 1;
}undefined8 des_ede_cfb64_cipher(long param_1, uchar *param_2, uchar *param_3, ulong param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   DES_key_schedule *pDVar5;
   uchar *puVar6;
   uchar *in;
   long in_FS_OFFSET;
   uchar *local_78;
   ulong local_60;
   uchar *local_58;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = param_2;
   local_60 = param_4;
   local_58 = param_3;
   if (0x3fffffff < param_4) {
      lVar2 = ( param_4 - 0x40000000 & 0xffffffffc0000000 ) + 0x40000000;
      local_78 = param_2 + lVar2;
      in = param_3;
      do {
         local_44 = EVP_CIPHER_CTX_get_num(param_1);
         iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
         lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
         lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
         pDVar5 = (DES_key_schedule*)EVP_CIPHER_CTX_get_cipher_data(param_1);
         puVar6 = param_2 + 0x40000000;
         DES_ede3_cfb64_encrypt(in, param_2, 0x40000000, pDVar5, (DES_key_schedule*)( lVar4 + 0x80 ), (DES_key_schedule*)( lVar3 + 0x100 ), (DES_cblock*)( param_1 + 0x28 ), &local_44, iVar1);
         EVP_CIPHER_CTX_set_num(param_1, local_44);
         param_2 = puVar6;
         in = in + 0x40000000;
      } while ( puVar6 != local_78 );
      local_60 = param_4 & 0x3fffffff;
      local_58 = param_3 + lVar2;
   }
   if (local_60 != 0) {
      local_44 = EVP_CIPHER_CTX_get_num(param_1);
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      pDVar5 = (DES_key_schedule*)EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_ede3_cfb64_encrypt(local_58, local_78, local_60, pDVar5, (DES_key_schedule*)( lVar3 + 0x80 ), (DES_key_schedule*)( lVar2 + 0x100 ), (DES_cblock*)( param_1 + 0x28 ), &local_44, iVar1);
      EVP_CIPHER_CTX_set_num(param_1, local_44);
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return 1;
}undefined8 des_ede_ofb_cipher(long param_1, int *param_2, uchar *param_3, DES_cblock *param_4) {
   uchar *puVar1;
   long lVar2;
   long lVar3;
   DES_key_schedule *pDVar4;
   DES_cblock *pauVar5;
   uchar *puVar6;
   uchar *extraout_RDX;
   int *out;
   int *piVar7;
   uchar *in;
   int *out_00;
   long in_FS_OFFSET;
   DES_cblock *local_60;
   uchar *local_58;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   out_00 = param_2;
   local_60 = param_4;
   local_58 = param_3;
   if ((DES_cblock*)0x3fffffff < param_4) {
      puVar1 = (uchar*)( ( ( ulong )(param_4 + -0x8000000) & 0xffffffffc0000000 ) + 0x40000000 );
      out_00 = (int*)( (long)param_2 + (long)puVar1 );
      pauVar5 = param_4;
      puVar6 = param_3;
      out = param_2;
      in = param_3;
      do {
         local_44 = EVP_CIPHER_CTX_get_num(param_1, param_2, puVar6, pauVar5);
         lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
         lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
         pDVar4 = (DES_key_schedule*)EVP_CIPHER_CTX_get_cipher_data(param_1);
         piVar7 = out + 0x10000000;
         pauVar5 = (DES_cblock*)( param_1 + 0x28 );
         param_2 = &local_44;
         DES_ede3_ofb64_encrypt(in, (uchar*)out, 0x40000000, pDVar4, (DES_key_schedule*)( lVar3 + 0x80 ), (DES_key_schedule*)( lVar2 + 0x100 ), (DES_cblock*)( param_1 + 0x28 ), &local_44);
         EVP_CIPHER_CTX_set_num(param_1, local_44);
         puVar6 = extraout_RDX;
         out = piVar7;
         in = in + 0x40000000;
      } while ( piVar7 != out_00 );
      local_60 = (DES_cblock*)( (ulong)param_4 & 0x3fffffff );
      local_58 = param_3 + (long)puVar1;
      param_4 = pauVar5;
      param_3 = puVar1;
   }
   if (local_60 != (DES_cblock*)0x0) {
      local_44 = EVP_CIPHER_CTX_get_num(param_1, param_2, param_3, param_4);
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      pDVar4 = (DES_key_schedule*)EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_ede3_ofb64_encrypt(local_58, (uchar*)out_00, (long)local_60, pDVar4, (DES_key_schedule*)( lVar3 + 0x80 ), (DES_key_schedule*)( lVar2 + 0x100 ), (DES_cblock*)( param_1 + 0x28 ), &local_44);
      EVP_CIPHER_CTX_set_num(param_1, local_44);
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return 1;
}undefined8 des_ede_ecb_cipher(undefined8 param_1, long param_2, long param_3, ulong param_4) {
   DES_cblock *output;
   const_DES_cblock *input;
   int enc;
   long lVar1;
   long lVar2;
   DES_key_schedule *ks1;
   ulong uVar3;
   ulong uVar4;
   lVar1 = EVP_CIPHER_CTX_get0_cipher();
   uVar4 = ( ulong ) * (int*)( lVar1 + 4 );
   if (uVar4 <= param_4) {
      uVar3 = 0;
      do {
         enc = EVP_CIPHER_CTX_is_encrypting(param_1);
         lVar1 = EVP_CIPHER_CTX_get_cipher_data(param_1);
         lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
         ks1 = (DES_key_schedule*)EVP_CIPHER_CTX_get_cipher_data(param_1);
         output = (DES_cblock*)( param_2 + uVar3 );
         input = (const_DES_cblock*)( param_3 + uVar3 );
         uVar3 = uVar3 + uVar4;
         DES_ecb3_encrypt(input, output, ks1, (DES_key_schedule*)( lVar2 + 0x80 ), (DES_key_schedule*)( lVar1 + 0x100 ), enc);
      } while ( uVar3 <= param_4 - uVar4 );
   }
   return 1;
}undefined8 des_ede3_cfb1_cipher(EVP_CIPHER_CTX *param_1, long param_2, long param_3, ulong param_4) {
   byte *pbVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   DES_key_schedule *ks1;
   byte bVar5;
   ulong uVar6;
   ulong uVar7;
   long in_FS_OFFSET;
   uchar local_42;
   byte local_41;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_41 = 0;
   iVar2 = EVP_CIPHER_CTX_test_flags(param_1, 0x2000);
   if (iVar2 == 0) {
      param_4 = param_4 * 8;
   }
   if (param_4 != 0) {
      uVar6 = 0;
      do {
         uVar7 = uVar6 >> 3;
         local_42 = ( uchar )(( (int)( uint ) * (byte*)( param_3 + uVar7 ) >> ( ~(byte)uVar6 & 7 ) ) << 7);
         iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
         lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
         lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
         ks1 = (DES_key_schedule*)EVP_CIPHER_CTX_get_cipher_data(param_1);
         DES_ede3_cfb_encrypt(&local_42, &local_41, 1, 1, ks1, (DES_key_schedule*)( lVar4 + 0x80 ), (DES_key_schedule*)( lVar3 + 0x100 ), (DES_cblock*)param_1->iv, iVar2);
         bVar5 = (byte)uVar6 & 7;
         uVar6 = uVar6 + 1;
         pbVar1 = (byte*)( param_2 + uVar7 );
         *pbVar1 = ( byte )(-0x81 >> bVar5) & *pbVar1 | ( byte )((int)( local_41 & 0x80 ) >> bVar5);
      } while ( param_4 != uVar6 );
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}undefined8 des_ede3_cfb8_cipher(long param_1, uchar *param_2, uchar *param_3, ulong param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   DES_key_schedule *pDVar5;
   uchar *puVar6;
   uchar *in;
   uchar *local_60;
   ulong local_50;
   uchar *local_48;
   local_60 = param_2;
   local_50 = param_4;
   local_48 = param_3;
   if (0x3fffffff < param_4) {
      lVar2 = ( param_4 - 0x40000000 & 0xffffffffc0000000 ) + 0x40000000;
      local_60 = param_2 + lVar2;
      in = param_3;
      do {
         iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
         lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
         lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
         pDVar5 = (DES_key_schedule*)EVP_CIPHER_CTX_get_cipher_data(param_1);
         puVar6 = param_2 + 0x40000000;
         DES_ede3_cfb_encrypt(in, param_2, 8, 0x40000000, pDVar5, (DES_key_schedule*)( lVar4 + 0x80 ), (DES_key_schedule*)( lVar3 + 0x100 ), (DES_cblock*)( param_1 + 0x28 ), iVar1);
         param_2 = puVar6;
         in = in + 0x40000000;
      } while ( puVar6 != local_60 );
      local_50 = param_4 & 0x3fffffff;
      local_48 = param_3 + lVar2;
   }
   if (local_50 != 0) {
      iVar1 = EVP_CIPHER_CTX_is_encrypting(param_1);
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      pDVar5 = (DES_key_schedule*)EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_ede3_cfb_encrypt(local_48, local_60, 8, local_50, pDVar5, (DES_key_schedule*)( lVar3 + 0x80 ), (DES_key_schedule*)( lVar2 + 0x100 ), (DES_cblock*)( param_1 + 0x28 ), iVar1);
   }
   return 1;
}undefined8 des3_ctrl(undefined8 param_1, int param_2, undefined8 param_3, DES_cblock *param_4) {
   int iVar1;
   int iVar2;
   if (param_2 != 6) {
      return 0xffffffff;
   }
   iVar1 = EVP_CIPHER_CTX_get_key_length();
   if (( -1 < iVar1 ) && ( iVar2= RAND_priv_bytes(param_4,iVar1),0 < iVar2 )) {
      DES_set_odd_parity(param_4);
      if (( 0xf < iVar1 ) && ( DES_set_odd_parity(param_4 + 1),0x17 < iVar1 )) {
         DES_set_odd_parity(param_4 + 2);
      }
      return 1;
   }
   return 0;
}void des_ede_cbc_cipher_constprop_0_isra_0(long param_1, uchar *param_2, uchar *param_3) {
   int enc;
   DES_key_schedule *ks1;
   ks1 = (DES_key_schedule*)EVP_CIPHER_CTX_get_cipher_data();
   if (ks1[3].ks[0] != (_union_772)0x0) {
      for (int i_2461 = 0; i_2461 < 2; i_2461++) {
         /* WARNING: Could not recover jumptable at 0x00100a93. Too many branches */
      }
      ( *(code*)ks1[3].ks[0] )(param_3, param_2, 8, ks1, param_1 + 0x28);
      return;
   }
   enc = EVP_CIPHER_CTX_is_encrypting(param_1);
   DES_ede3_cbc_encrypt(param_3, param_2, 8, ks1, ks1 + 1, ks1 + 2, (DES_cblock*)( param_1 + 0x28 ), enc);
   return;
}int des_ede3_wrap_cipher(long param_1, uchar *param_2, uchar *param_3, ulong param_4) {
   uchar *puVar1;
   size_t siz;
   int iVar2;
   int iVar3;
   long lVar4;
   uchar *puVar5;
   long in_FS_OFFSET;
   uchar local_68[8];
   uchar local_60[8];
   undefined8 local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_4 < 0x40000000 ) && ( ( param_4 & 7 ) == 0 )) {
      iVar3 = ossl_is_partially_overlapping(param_2, param_3, param_4 & 0xffffffff);
      if (iVar3 != 0) {
         ERR_new();
         ERR_set_debug("crypto/evp/e_des3.c", 400, "des_ede3_wrap_cipher");
         ERR_set_error(6, 0xa2, 0);
         iVar3 = 0;
         goto LAB_00100c00;
      }
      iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
      iVar2 = (int)param_4;
      if (iVar3 == 0) {
         if (0x17 < param_4) {
            iVar3 = iVar2 + -0x10;
            if (param_2 == (uchar*)0x0) goto LAB_00100c00;
            puVar1 = (uchar*)( param_1 + 0x28 );
            *(undefined8*)( param_1 + 0x28 ) = 0x521e8792ca2dd4a;
            des_ede_cbc_cipher_constprop_0_isra_0(param_1, local_68, param_3);
            if (param_2 == param_3) {
               param_3 = param_2 + -8;
               memmove(param_2, param_2 + 8, param_4 - 8);
               puVar5 = param_2;
            } else {
               puVar5 = param_3 + 8;
            }
            siz = param_4 - 0x10;
            des_ede_cbc_cipher(param_1, param_2, puVar5, siz);
            des_ede_cbc_cipher_constprop_0_isra_0(param_1, local_60, param_3 + ( param_4 - 8 ));
            BUF_reverse(local_68, (uchar*)0x0, 8);
            BUF_reverse(param_2, (uchar*)0x0, siz);
            BUF_reverse(puVar1, local_60, 8);
            des_ede_cbc_cipher(param_1, param_2, param_2, siz);
            des_ede_cbc_cipher_constprop_0_isra_0(param_1, local_68, local_68);
            lVar4 = ossl_sha1(param_2, siz, local_58);
            if (lVar4 != 0) {
               iVar3 = CRYPTO_memcmp(local_58, local_68, 8);
               if (iVar3 == 0) {
                  iVar3 = iVar2 + -0x10;
                  OPENSSL_cleanse(local_68, 8);
                  OPENSSL_cleanse(local_58, 0x14);
                  OPENSSL_cleanse(local_60, 8);
                  OPENSSL_cleanse(puVar1, 8);
                  goto LAB_00100c00;
               }
            }
            OPENSSL_cleanse(local_68, 8);
            OPENSSL_cleanse(local_58, 0x14);
            OPENSSL_cleanse(local_60, 8);
            OPENSSL_cleanse(puVar1, 8);
            OPENSSL_cleanse(param_2, siz);
         }
      } else {
         if (param_2 == (uchar*)0x0) {
            LAB_00100bfd:iVar3 = iVar2 + 0x10;
            goto LAB_00100c00;
         }
         puVar1 = param_2 + 8;
         memmove(puVar1, param_3, param_4);
         lVar4 = ossl_sha1(param_3, param_4, local_58);
         if (lVar4 != 0) {
            *(undefined8*)( param_2 + param_4 + 8 ) = local_58[0];
            OPENSSL_cleanse(local_58, 0x14);
            iVar3 = RAND_bytes((uchar*)( param_1 + 0x28 ), 8);
            if (0 < iVar3) {
               *(undefined8*)param_2 = *(undefined8*)( param_1 + 0x28 );
               des_ede_cbc_cipher(param_1, puVar1, puVar1, param_4 + 8);
               BUF_reverse(param_2, (uchar*)0x0, param_4 + 0x10);
               *(undefined8*)( param_1 + 0x28 ) = 0x521e8792ca2dd4a;
               des_ede_cbc_cipher(param_1, param_2, param_2, param_4 + 0x10);
               goto LAB_00100bfd;
            }
         }
      }
   }
   iVar3 = -1;
   LAB_00100c00:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_des_ede_cbc(void) {
   return (EVP_CIPHER*)des_ede_cbc;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_des_ede_cfb64(void) {
   return (EVP_CIPHER*)des_ede_cfb64;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_des_ede_ofb(void) {
   return (EVP_CIPHER*)des_ede_ofb;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_des_ede_ecb(void) {
   return (EVP_CIPHER*)des_ede_ecb;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_des_ede3_cbc(void) {
   return (EVP_CIPHER*)des_ede3_cbc;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_des_ede3_cfb64(void) {
   return (EVP_CIPHER*)des_ede3_cfb64;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_des_ede3_ofb(void) {
   return (EVP_CIPHER*)des_ede3_ofb;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_des_ede3_ecb(void) {
   return (EVP_CIPHER*)des_ede3_ecb;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_des_ede3_cfb1(void) {
   return (EVP_CIPHER*)des_ede3_cfb1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_des_ede3_cfb8(void) {
   return (EVP_CIPHER*)des_ede3_cfb8;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_des_ede(void) {
   return (EVP_CIPHER*)des_ede_ecb;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */EVP_CIPHER *EVP_des_ede3(void) {
   return (EVP_CIPHER*)des_ede3_ecb;
}undefined1 *EVP_des_ede3_wrap(void) {
   return des3_wrap;
}
