undefined8 ossl_cipher_hw_tdes_ofb(long param_1, uchar *param_2, uchar *param_3, ulong param_4) {
   long lVar1;
   uchar *in;
   uchar *out;
   uchar *puVar2;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = *(int*)( param_1 + 0xa0 );
   if (0x3fffffff < param_4) {
      lVar1 = ( param_4 - 0x40000000 & 0xffffffffc0000000 ) + 0x40000000;
      in = param_3;
      out = param_2;
      do {
         puVar2 = out + 0x40000000;
         DES_ede3_ofb64_encrypt(in, out, 0x40000000, (DES_key_schedule*)( param_1 + 0xc0 ), (DES_key_schedule*)( param_1 + 0x140 ), (DES_key_schedule*)( param_1 + 0x1c0 ), (DES_cblock*)( param_1 + 0x20 ), &local_44);
         in = in + 0x40000000;
         out = puVar2;
      }
 while ( puVar2 != param_2 + lVar1 );
      param_3 = param_3 + lVar1;
      param_4 = ( ulong )((uint)param_4 & 0x3fffffff);
      param_2 = param_2 + lVar1;
   }

   if (param_4 != 0) {
      DES_ede3_ofb64_encrypt(param_3, param_2, param_4, (DES_key_schedule*)( param_1 + 0xc0 ), (DES_key_schedule*)( param_1 + 0x140 ), (DES_key_schedule*)( param_1 + 0x1c0 ), (DES_cblock*)( param_1 + 0x20 ), &local_44);
   }

   *(int*)( param_1 + 0xa0 ) = local_44;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
}
undefined8 ossl_cipher_hw_tdes_cfb(long param_1, uchar *param_2, uchar *param_3, ulong param_4) {
   long lVar1;
   uchar *out;
   uchar *puVar2;
   uchar *in;
   long in_FS_OFFSET;
   int local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_44 = *(int*)( param_1 + 0xa0 );
   if (0x3fffffff < param_4) {
      lVar1 = ( param_4 - 0x40000000 & 0xffffffffc0000000 ) + 0x40000000;
      out = param_2;
      in = param_3;
      do {
         puVar2 = out + 0x40000000;
         DES_ede3_cfb64_encrypt(in, out, 0x40000000, (DES_key_schedule*)( param_1 + 0xc0 ), (DES_key_schedule*)( param_1 + 0x140 ), (DES_key_schedule*)( param_1 + 0x1c0 ), (DES_cblock*)( param_1 + 0x20 ), &local_44, *(byte*)( param_1 + 0x6c ) >> 1 & 1);
         out = puVar2;
         in = in + 0x40000000;
      }
 while ( puVar2 != param_2 + lVar1 );
      param_3 = param_3 + lVar1;
      param_4 = ( ulong )((uint)param_4 & 0x3fffffff);
      param_2 = param_2 + lVar1;
   }

   if (param_4 != 0) {
      DES_ede3_cfb64_encrypt(param_3, param_2, param_4, (DES_key_schedule*)( param_1 + 0xc0 ), (DES_key_schedule*)( param_1 + 0x140 ), (DES_key_schedule*)( param_1 + 0x1c0 ), (DES_cblock*)( param_1 + 0x20 ), &local_44, *(byte*)( param_1 + 0x6c ) >> 1 & 1);
   }

   *(int*)( param_1 + 0xa0 ) = local_44;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return 1;
}
undefined8 ossl_cipher_hw_tdes_cfb1(long param_1, long param_2, long param_3, ulong param_4) {
   byte *pbVar1;
   byte bVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   uchar local_42;
   byte local_41;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_41 = 0;
   if (-1 < *(char*)( param_1 + 0x6c )) {
      param_4 = param_4 << 3;
   }

   if (param_4 != 0) {
      uVar3 = 0;
      do {
         local_42 = ( uchar )(( (int)( uint ) * (byte*)( param_3 + ( uVar3 >> 3 ) ) >> ( ~(byte)uVar3 & 7 ) ) << 7);
         DES_ede3_cfb_encrypt(&local_42, &local_41, 1, 1, (DES_key_schedule*)( param_1 + 0xc0 ), (DES_key_schedule*)( param_1 + 0x140 ), (DES_key_schedule*)( param_1 + 0x1c0 ), (DES_cblock*)( param_1 + 0x20 ), *(byte*)( param_1 + 0x6c ) >> 1 & 1);
         pbVar1 = (byte*)( param_2 + ( uVar3 >> 3 ) );
         bVar2 = (byte)uVar3 & 7;
         uVar3 = uVar3 + 1;
         *pbVar1 = ( byte )(-0x81 >> bVar2) & *pbVar1 | ( byte )((int)( local_41 & 0x80 ) >> bVar2);
      }
 while ( param_4 != uVar3 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ossl_cipher_hw_tdes_cfb8(long param_1, uchar *param_2, uchar *param_3, ulong param_4) {
   long lVar1;
   uchar *in;
   uchar *out;
   uchar *puVar2;
   if (0x3fffffff < param_4) {
      lVar1 = ( param_4 - 0x40000000 & 0xffffffffc0000000 ) + 0x40000000;
      in = param_3;
      out = param_2;
      do {
         puVar2 = out + 0x40000000;
         DES_ede3_cfb_encrypt(in, out, 8, 0x40000000, (DES_key_schedule*)( param_1 + 0xc0 ), (DES_key_schedule*)( param_1 + 0x140 ), (DES_key_schedule*)( param_1 + 0x1c0 ), (DES_cblock*)( param_1 + 0x20 ), *(byte*)( param_1 + 0x6c ) >> 1 & 1);
         in = in + 0x40000000;
         out = puVar2;
      }
 while ( puVar2 != param_2 + lVar1 );
      param_3 = param_3 + lVar1;
      param_4 = ( ulong )((uint)param_4 & 0x3fffffff);
      param_2 = param_2 + lVar1;
   }

   if (param_4 != 0) {
      DES_ede3_cfb_encrypt(param_3, param_2, 8, param_4, (DES_key_schedule*)( param_1 + 0xc0 ), (DES_key_schedule*)( param_1 + 0x140 ), (DES_key_schedule*)( param_1 + 0x1c0 ), (DES_cblock*)( param_1 + 0x20 ), *(byte*)( param_1 + 0x6c ) >> 1 & 1);
   }

   return 1;
}
undefined8 ossl_cipher_hw_tdes_ede2_initkey(long param_1, const_DES_cblock *param_2) {
   *(undefined8*)( param_1 + 0x240 ) = 0;
   DES_set_key_unchecked(param_2, (DES_key_schedule*)( param_1 + 0xc0 ));
   DES_set_key_unchecked(param_2 + 1, (DES_key_schedule*)( param_1 + 0x140 ));
   for (int i = 0; i < 16; i++) {
      *(undefined8*)( param_1 + ( 8*i + 448 ) ) = *(undefined8*)( param_1 + ( 8*i + 192 ) );
   }

   return 1;
}
undefined1 *ossl_prov_cipher_hw_tdes_ede3_ofb(void) {
   return ede3_ofb;
}
undefined1 *ossl_prov_cipher_hw_tdes_ede3_cfb(void) {
   return ede3_cfb;
}
undefined1 *ossl_prov_cipher_hw_tdes_ede3_cfb1(void) {
   return ede3_cfb1;
}
undefined1 *ossl_prov_cipher_hw_tdes_ede3_cfb8(void) {
   return ede3_cfb8;
}
undefined1 *ossl_prov_cipher_hw_tdes_ede2_ecb(void) {
   return ede2_ecb;
}
undefined1 *ossl_prov_cipher_hw_tdes_ede2_cbc(void) {
   return ede2_cbc;
}
undefined1 *ossl_prov_cipher_hw_tdes_ede2_ofb(void) {
   return ede2_ofb;
}
undefined1 *ossl_prov_cipher_hw_tdes_ede2_cfb(void) {
   return ede2_cfb;
}

