/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int SHA224_Init(SHA256_CTX *c) {
   undefined8 uVar1;
   undefined8 uVar2;
   *(undefined1(*) [16])( c->data + 0xe ) = (undefined1[16])0x0;
   c->Nl = 0;
   c->Nh = 0;
   for (int i = 0; i < 11; i++) {
      c->data[i] = 0;
   }

   uVar2 = _UNK_00100588;
   uVar1 = __LC0;
   for (int i = 0; i < 3; i++) {
      c->data[( i + 11 )] = 0;
   }

   c->md_len = 0x1c;
   *(undefined8*)c->h = uVar1;
   *(undefined8*)( c->h + 2 ) = uVar2;
   uVar1 = _UNK_00100598;
   *(undefined8*)( c->h + 4 ) = __LC1;
   *(undefined8*)( c->h + 6 ) = uVar1;
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int SHA256_Init(SHA256_CTX *c) {
   undefined8 uVar1;
   undefined8 uVar2;
   *(undefined1(*) [16])( c->data + 0xe ) = (undefined1[16])0x0;
   c->Nl = 0;
   c->Nh = 0;
   for (int i = 0; i < 11; i++) {
      c->data[i] = 0;
   }

   uVar2 = _UNK_001005a8;
   uVar1 = __LC3;
   for (int i = 0; i < 3; i++) {
      c->data[( i + 11 )] = 0;
   }

   c->md_len = 0x20;
   *(undefined8*)c->h = uVar1;
   *(undefined8*)( c->h + 2 ) = uVar2;
   uVar1 = _UNK_001005b8;
   *(undefined8*)( c->h + 4 ) = __LC4;
   *(undefined8*)( c->h + 6 ) = uVar1;
   return 1;
}
undefined8 ossl_sha256_192_init(SHA256_CTX *param_1) {
   SHA256_Init(param_1);
   param_1->md_len = 0x18;
   return 1;
}
int SHA256_Update(SHA256_CTX *c, void *data, size_t len) {
   uint *puVar1;
   uint uVar2;
   ulong uVar3;
   undefined8 *puVar4;
   long lVar5;
   ulong uVar6;
   ulong uVar7;
   ulong uVar8;
   uint uVar9;
   if (len == 0) {
      return 1;
   }

   uVar9 = (uint)len;
   uVar2 = c->Nl;
   c->Nl = uVar9 * 8 + c->Nl;
   uVar3 = (ulong)c->num;
   c->Nh = c->Nh + (uint)CARRY4(uVar9 * 8, uVar2) + (int)( len >> 0x1d );
   if (uVar3 == 0) {
      if (len < 0x40) goto LAB_001000f8;
      LAB_001001a7:sha256_block_data_order(c, data, len >> 6);
      data = (void*)( (long)data + ( len & 0xffffffffffffffc0 ) );
      len = len - ( len & 0xffffffffffffffc0 );
   }
 else {
      puVar1 = c->data;
      if (( len | len + uVar3 ) < 0x40) {
         memcpy((void*)( (long)puVar1 + uVar3 ), data, len);
         c->num = c->num + uVar9;
         return 1;
      }

      lVar5 = -uVar3;
      uVar8 = lVar5 + 0x40;
      puVar4 = (undefined8*)( uVar3 + (long)puVar1 );
      if (uVar8 < 8) {
         if (( uVar8 & 4 ) == 0) {
            /* WARNING: Load size is inaccurate */
            if (( uVar8 != 0 ) && ( *(undefined1*)puVar4 = *data(uVar8 & 2) != 0 )) {
               *(undefined2*)( (long)puVar4 + lVar5 + 0x3e ) = *(undefined2*)( (long)data + lVar5 + 0x3e );
            }

         }
 else {
            /* WARNING: Load size is inaccurate */
            *(undefined4*)puVar4 = *data;
            *(undefined4*)( (long)puVar4 + lVar5 + 0x3c ) = *(undefined4*)( (long)data + lVar5 + 0x3c );
         }

      }
 else {
         /* WARNING: Load size is inaccurate */
         *puVar4 = *data;
         *(undefined8*)( (long)puVar4 + lVar5 + 0x38 ) = *(undefined8*)( (long)data + lVar5 + 0x38 );
         lVar5 = (long)puVar4 - ( ( ulong )(puVar4 + 1) & 0xfffffffffffffff8 );
         uVar6 = lVar5 + uVar8 & 0xfffffffffffffff8;
         if (7 < uVar6) {
            uVar7 = 0;
            do {
               *(undefined8*)( ( ( ulong )(puVar4 + 1) & 0xfffffffffffffff8 ) + uVar7 ) = *(undefined8*)( (long)data + ( uVar7 - lVar5 ) );
               uVar7 = uVar7 + 8;
            }
 while ( uVar7 < uVar6 );
         }

      }

      data = (void*)( (long)data + uVar8 );
      sha256_block_data_order(c, puVar1, 1);
      len = ( len + uVar3 ) - 0x40;
      c->num = 0;
      for (int i = 0; i < 16; i++) {
         c->data[i] = 0;
      }

      if (0x3f < len) goto LAB_001001a7;
   }

   if (len == 0) {
      return 1;
   }

   uVar9 = (uint)len;
   LAB_001000f8:c->num = uVar9;
   memcpy(c->data, data, len);
   return 1;
}
int SHA224_Update(SHA256_CTX *c, void *data, size_t len) {
   int iVar1;
   iVar1 = SHA256_Update(c, data, len);
   return iVar1;
}
void SHA256_Transform(SHA256_CTX *c, uchar *data) {
   sha256_block_data_order(c, data, 1);
   return;
}
int SHA256_Final(uchar *md, SHA256_CTX *c) {
   uint *ptr;
   undefined1 *puVar1;
   uint uVar2;
   ulong uVar3;
   uint *puVar4;
   ulong uVar5;
   uint uVar6;
   ptr = c->data;
   uVar6 = c->num;
   *(undefined1*)( (long)c->data + (ulong)uVar6 ) = 0x80;
   uVar3 = (ulong)uVar6 + 1;
   if (uVar3 < 0x39) {
      uVar5 = 0x38 - uVar3;
      puVar4 = (uint*)( uVar3 + (long)ptr );
      goto LAB_001002d3;
   }

   puVar1 = (undefined1*)( (long)ptr + uVar3 );
   uVar3 = 0x40 - uVar3;
   if (uVar3 != 0) {
      uVar5 = 0;
      if (( uVar3 & 1 ) != 0) {
         uVar5 = 1;
         *puVar1 = 0;
         if (uVar3 < 2) goto LAB_0010044c;
      }

      do {
         puVar1[uVar5] = 0;
         puVar1[uVar5 + 1] = 0;
         uVar5 = uVar5 + 2;
      }
 while ( uVar5 < uVar3 );
   }

   LAB_0010044c:sha256_block_data_order(c, ptr, 1);
   uVar5 = 0x38;
   puVar4 = ptr;
   LAB_001002d3:uVar6 = (uint)uVar5;
   if (uVar6 < 8) {
      if (( uVar5 & 4 ) == 0) {
         if (( uVar6 != 0 ) && ( *(undefined1*)puVar4 = 0(uVar5 & 2) != 0 )) {
            *(undefined2*)( (long)puVar4 + ( ( uVar5 & 0xffffffff ) - 2 ) ) = 0;
         }

      }
 else {
         *puVar4 = 0;
         *(undefined4*)( (long)puVar4 + ( ( uVar5 & 0xffffffff ) - 4 ) ) = 0;
      }

   }
 else {
      puVar4[0] = 0;
      puVar4[1] = 0;
      *(undefined8*)( (long)puVar4 + ( ( uVar5 & 0xffffffff ) - 8 ) ) = 0;
      uVar6 = uVar6 + ( (int)puVar4 - (int)( ( ulong )(puVar4 + 2) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
      if (7 < uVar6) {
         uVar2 = 0;
         do {
            uVar3 = (ulong)uVar2;
            uVar2 = uVar2 + 8;
            *(undefined8*)( ( ( ulong )(puVar4 + 2) & 0xfffffffffffffff8 ) + uVar3 ) = 0;
         }
 while ( uVar2 < uVar6 );
      }

   }

   uVar3._0_4_ = c->Nl;
   uVar3._4_4_ = c->Nh;
   *(ulong*)( c->data + 0xe ) = uVar3 >> 0x38 | ( uVar3 & 0xff000000000000 ) >> 0x28 | ( uVar3 & 0xff0000000000 ) >> 0x18 | ( uVar3 & 0xff00000000 ) >> 8 | ( uVar3 & 0xff000000 ) << 8 | ( uVar3 & 0xff0000 ) << 0x18 | ( uVar3 & 0xff00 ) << 0x28 | uVar3 << 0x38;
   sha256_block_data_order(c, ptr, 1);
   c->num = 0;
   OPENSSL_cleanse(ptr, 0x40);
   uVar6 = c->md_len;
   if (uVar6 == 0x1c) {
      uVar6 = c->h[0];
      *(uint*)md = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
      for (int i = 0; i < 6; i++) {
         uVar6 = c->h[( i + 1 )];
         *(uint*)( md + ( 4*i + 4 ) ) = uVar6 >> 24 | ( uVar6 & 16711680 ) >> 8 | ( uVar6 & 65280 ) << 8 | uVar6 << 24;
      }

   }
 else if (uVar6 == 0x20) {
      uVar6 = c->h[0];
      *(uint*)md = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
      for (int i = 0; i < 7; i++) {
         uVar6 = c->h[( i + 1 )];
         *(uint*)( md + ( 4*i + 4 ) ) = uVar6 >> 24 | ( uVar6 & 16711680 ) >> 8 | ( uVar6 & 65280 ) << 8 | uVar6 << 24;
      }

   }
 else if (uVar6 == 0x18) {
      uVar6 = c->h[0];
      *(uint*)md = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
      for (int i = 0; i < 5; i++) {
         uVar6 = c->h[( i + 1 )];
         *(uint*)( md + ( 4*i + 4 ) ) = uVar6 >> 24 | ( uVar6 & 16711680 ) >> 8 | ( uVar6 & 65280 ) << 8 | uVar6 << 24;
      }

   }
 else {
      if (0x20 < uVar6) {
         return 0;
      }

      if (uVar6 >> 2 != 0) {
         uVar6 = c->h[0];
         *(uint*)md = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
         if (7 < c->md_len) {
            uVar6 = c->h[1];
            *(uint*)( md + 4 ) = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
            if (0xb < c->md_len) {
               uVar6 = c->h[2];
               *(uint*)( md + 8 ) = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
               if (0xf < c->md_len) {
                  uVar6 = c->h[3];
                  *(uint*)( md + 0xc ) = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
                  if (0x13 < c->md_len) {
                     uVar6 = c->h[4];
                     *(uint*)( md + 0x10 ) = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
                     if (0x17 < c->md_len) {
                        uVar6 = c->h[5];
                        *(uint*)( md + 0x14 ) = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
                        if (0x1b < c->md_len) {
                           uVar6 = c->h[6];
                           *(uint*)( md + 0x18 ) = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
                           if (0x1f < c->md_len) {
                              uVar6 = c->h[7];
                              *(uint*)( md + 0x1c ) = uVar6 >> 0x18 | ( uVar6 & 0xff0000 ) >> 8 | ( uVar6 & 0xff00 ) << 8 | uVar6 << 0x18;
                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   return 1;
}
int SHA224_Final(uchar *md, SHA256_CTX *c) {
   int iVar1;
   iVar1 = SHA256_Final(md, c);
   return iVar1;
}

