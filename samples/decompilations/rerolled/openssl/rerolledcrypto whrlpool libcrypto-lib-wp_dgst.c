int WHIRLPOOL_Init(WHIRLPOOL_CTX *c) {
   ulong uVar1;
   undefined8 *puVar2;
   (c->H).q[0] = 0.0;
   c->bitlen[3] = 0;
   puVar2 = (undefined8*)( ( ulong )((long)&c->H + 8U) & 0xfffffffffffffff8 );
   uVar1 = ( ulong )(( (int)c - (int)puVar2 ) + 0xa8U >> 3);
   for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
   }

   return 1;
}
void WHIRLPOOL_BitUpdate(WHIRLPOOL_CTX *c, void *inp, size_t bits) {
   byte *pbVar1;
   size_t *psVar2;
   byte *pbVar3;
   byte bVar4;
   uint uVar5;
   ulong uVar6;
   sbyte sVar7;
   sbyte sVar8;
   uchar uVar9;
   int iVar10;
   uint uVar11;
   ulong uVar12;
   uint uVar13;
   iVar10 = (int)bits;
   uVar5 = -iVar10;
   uVar11 = c->bitoff;
   uVar12 = (ulong)uVar11;
   uVar13 = uVar11 & 7;
   psVar2 = c->bitlen;
   uVar6 = *psVar2;
   *psVar2 = *psVar2 + bits;
   if (CARRY8(uVar6, bits)) {
      psVar2 = c->bitlen + 1;
      *psVar2 = *psVar2 + 1;
      if (*psVar2 == 0) {
         psVar2 = c->bitlen + 2;
         *psVar2 = *psVar2 + 1;
         if (*psVar2 == 0) {
            c->bitlen[3] = c->bitlen[3] + 1;
         }

      }

      if (( ( uVar5 | uVar11 ) & 7 ) != 0) goto LAB_00100093;
   }
 else {
      if (( ( uVar5 | uVar11 ) & 7 ) != 0) {
         if (bits == 0) {
            return;
         }

         LAB_00100093:/* WARNING: Load size is inaccurate */bVar4 = *inp;
         uVar6 = ( ulong )(uVar11 >> 3);
         sVar7 = (sbyte)uVar13;
         if (uVar13 != ( uVar5 & 7 )) {
            sVar8 = ( sbyte )(uVar5 & 7);
            uVar5 = (uint)bVar4 << sVar8;
            uVar9 = (uchar)uVar5;
            if (uVar13 == 0) {
               if (8 < bits) {
                  pbVar3 = (byte*)( (long)inp + ( bits - 9 >> 3 ) + 1 );
                  do {
                     while (true) {
                        pbVar1 = (byte*)( (long)inp + 1 );
                        uVar11 = (int)uVar12 + 8;
                        uVar12 = (ulong)uVar11;
                        inp = (void*)( (long)inp + 1 );
                        c->data[uVar6] = ( byte )((int)( uint ) * pbVar1 >> ( 8U - sVar8 & 0x1f )) | (byte)uVar5;
                        if (0x1ff < uVar11) break;
                        c->bitoff = uVar11;
                        /* WARNING: Load size is inaccurate */
                        uVar6 = ( ulong )(uVar11 >> 3);
                        uVar5 = ( uint ) * inp << sVar8;
                        uVar9 = (uchar)uVar5;
                        if ((byte*)inp == pbVar3) goto LAB_00100116;
                     }
;
                     uVar11 = uVar11 & 0x1ff;
                     uVar12 = (ulong)uVar11;
                     whirlpool_block(c, c->data, 1);
                     c->bitoff = uVar11;
                     /* WARNING: Load size is inaccurate */
                     uVar6 = ( ulong )(uVar11 >> 3);
                     uVar5 = ( uint ) * inp << sVar8;
                     uVar9 = (uchar)uVar5;
                  }
 while ( (byte*)inp != pbVar3 );
               }

               LAB_00100116:c->data[uVar6] = uVar9;
               uVar11 = ( iVar10 - ( iVar10 - 1U & 0xfffffff8 ) ) + uVar11;
               if (uVar11 == 0x200) {
                  whirlpool_block(c, c->data, 1);
                  c->bitoff = 0;
                  return;
               }

            }
 else {
               if (8 < bits) {
                  pbVar3 = (byte*)( (long)inp + ( bits - 9 >> 3 ) + 1 );
                  do {
                     while (true) {
                        pbVar1 = (byte*)( (long)inp + 1 );
                        uVar11 = (int)uVar12 + 8;
                        uVar12 = (ulong)uVar11;
                        inp = (void*)( (long)inp + 1 );
                        uVar5 = ( (int)( uint ) * pbVar1 >> ( 8U - sVar8 & 0x1f ) | uVar5 ) & 0xff;
                        c->data[uVar6] = c->data[uVar6] | ( byte )((int)uVar5 >> sVar7);
                        if (uVar11 < 0x200) break;
                        uVar11 = uVar11 & 0x1ff;
                        uVar12 = (ulong)uVar11;
                        whirlpool_block(c, c->data, 1);
                        c->bitoff = uVar11;
                        uVar6 = ( ulong )(uVar11 >> 3);
                        c->data[0] = ( uchar )(uVar5 << ( 8U - sVar7 & 0x1f ));
                        /* WARNING: Load size is inaccurate */
                        uVar5 = ( uint ) * inp << sVar8;
                        if ((byte*)inp == pbVar3) goto LAB_00100386;
                     }
;
                     c->data[(int)uVar6 + 1] = ( uchar )(uVar5 << ( 8U - sVar7 & 0x1f ));
                     c->bitoff = uVar11;
                     /* WARNING: Load size is inaccurate */
                     uVar6 = ( ulong )(uVar11 >> 3);
                     uVar5 = ( uint ) * inp << sVar8;
                  }
 while ( (byte*)inp != pbVar3 );
               }

               LAB_00100386:uVar12 = ( ulong )((int)uVar6 + 1);
               uVar11 = ( iVar10 - ( iVar10 - 1U & 0xfffffff8 ) ) + uVar11;
               c->data[uVar6] = c->data[uVar6] | ( byte )((int)( uVar5 & 0xff ) >> sVar7);
               if (uVar11 == 0x200) {
                  uVar11 = 0;
                  whirlpool_block(c, c->data, 1);
                  uVar12 = 0;
               }

               c->data[uVar12] = ( uchar )(( uVar5 & 0xff ) << ( 8U - sVar7 & 0x1f ));
            }

            c->bitoff = uVar11;
            return;
         }

         inp = (void*)( (long)inp + 1 );
         c->data[uVar6] = c->data[uVar6] | bVar4 & ( byte )(0xff >> sVar7);
         uVar11 = uVar11 + ( 8 - uVar13 );
         bits = bits - ( 8 - uVar13 );
         if (uVar11 == 0x200) {
            uVar11 = 0;
            whirlpool_block(c, c->data, 1);
         }

         uVar12 = (ulong)uVar11;
         c->bitoff = uVar11;
      }

      if (bits == 0) {
         return;
      }

   }

   iVar10 = (int)uVar12;
   if (iVar10 != 0) {
      uVar11 = 0x200 - iVar10;
      uVar12 = uVar12 >> 3;
      if (bits < uVar11) goto LAB_0010022a;
      bits = bits - uVar11;
      memcpy(c->data + uVar12, inp, ( ulong )(uVar11 >> 3));
      whirlpool_block(c, c->data, 1);
      c->bitoff = 0;
      inp = (void*)( (long)inp + ( ulong )(uVar11 >> 3) );
      if (bits == 0) {
         return;
      }

   }

   if (bits < 0x200) {
      iVar10 = 0;
      uVar12 = 0;
   }
 else {
      iVar10 = 0;
      whirlpool_block(c, inp, bits >> 9);
      uVar12 = 0;
      inp = (void*)( (long)inp + ( bits >> 3 & 0x1fffffffffffffc0 ) );
      uVar6 = bits & 0x1ff;
      bits = (size_t)( (uint)bits & 0x1ff );
      if (uVar6 == 0) {
         return;
      }

   }

   LAB_0010022a:memcpy(c->data + uVar12, inp, bits >> 3);
   c->bitoff = iVar10 + (int)bits;
   return;
}
int WHIRLPOOL_Update(WHIRLPOOL_CTX *c, void *inp, size_t bytes) {
   ulong uVar1;
   void *inp_00;
   void *pvVar2;
   undefined8 local_48;
   local_48 = inp;
   if (bytes >> 0x3c != 0) {
      uVar1 = bytes + 0xf000000000000000;
      inp_00 = inp;
      do {
         pvVar2 = (void*)( (long)inp_00 + 0x1000000000000000 );
         WHIRLPOOL_BitUpdate(c, inp_00, 0x8000000000000000);
         inp_00 = pvVar2;
      }
 while ( pvVar2 != (void*)( ( ( uVar1 >> 0x3c ) + 1 << 0x3c ) + (long)inp ) );
      bytes = bytes & 0xfffffffffffffff;
      local_48 = (void*)( (long)inp + ( uVar1 & 0xf000000000000000 ) + 0x1000000000000000 );
   }

   if (bytes != 0) {
      WHIRLPOOL_BitUpdate(c, local_48, bytes * 8);
   }

   return 1;
}
int WHIRLPOOL_Final(uchar *md, WHIRLPOOL_CTX *c) {
   uchar *puVar1;
   double dVar2;
   uint uVar3;
   uint uVar4;
   byte bVar5;
   ulong uVar6;
   uchar *puVar7;
   bVar5 = 0x80;
   uVar3 = c->bitoff >> 3;
   uVar4 = c->bitoff & 7;
   if (uVar4 != 0) {
      bVar5 = ( byte )(0x80 >> (sbyte)uVar4) | c->data[uVar3];
   }

   uVar4 = uVar3 + 1;
   c->data[uVar3] = bVar5;
   if (uVar4 < 0x21) {
      if (uVar4 == 0x20) goto LAB_001005d9;
      uVar4 = 0x20 - uVar4;
      uVar6 = (ulong)uVar4;
      puVar7 = c->data + ( ( ulong )(uVar3 + 0x41) - 0x40 );
      if (uVar4 < 8) {
         if (( uVar4 & 4 ) == 0) {
            if (( uVar4 != 0 ) && ( *puVar7 = '\0'(uVar4 & 2) != 0 )) {
               ( puVar7 + ( uVar6 - 2 ) )[0] = '\0';
               ( puVar7 + ( uVar6 - 2 ) )[1] = '\0';
            }

         }
 else {
            for (int i = 0; i < 4; i++) {
               puVar7[i] = '\0';
            }

            puVar7 = puVar7 + ( uVar6 - 4 );
            for (int i = 0; i < 4; i++) {
               puVar7[i] = '\0';
            }

         }

         goto LAB_001005d9;
      }

   }
 else {
      if (uVar4 < 0x40) {
         uVar4 = 0x40 - uVar4;
         puVar7 = c->data + ( ( ulong )(uVar3 + 0x41) - 0x40 );
         if (uVar4 < 8) {
            if (( uVar4 & 4 ) == 0) {
               if (( uVar4 != 0 ) && ( *puVar7 = '\0'(uVar4 & 2) != 0 )) {
                  ( puVar7 + ( (ulong)uVar4 - 2 ) )[0] = '\0';
                  ( puVar7 + ( (ulong)uVar4 - 2 ) )[1] = '\0';
               }

            }
 else {
               for (int i = 0; i < 4; i++) {
                  puVar7[i] = '\0';
               }

               puVar7 = puVar7 + ( (ulong)uVar4 - 4 );
               for (int i = 0; i < 4; i++) {
                  puVar7[i] = '\0';
               }

            }

         }
 else {
            for (int i = 0; i < 8; i++) {
               puVar7[i] = '\0';
            }

            puVar1 = puVar7 + ( (ulong)uVar4 - 8 );
            for (int i = 0; i < 8; i++) {
               puVar1[i] = '\0';
            }

            uVar3 = uVar4 + ( (int)puVar7 - (int)( ( ulong )(puVar7 + 8) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
            if (7 < uVar3) {
               uVar4 = 0;
               do {
                  uVar6 = (ulong)uVar4;
                  uVar4 = uVar4 + 8;
                  *(undefined8*)( ( ( ulong )(puVar7 + 8) & 0xfffffffffffffff8 ) + uVar6 ) = 0;
               }
 while ( uVar4 < uVar3 );
            }

         }

      }

      puVar7 = c->data;
      whirlpool_block(c, puVar7, 1);
      uVar6 = 0x20;
   }

   for (int i = 0; i < 8; i++) {
      puVar7[i] = '\0';
   }

   puVar1 = puVar7 + ( uVar6 - 8 );
   for (int i = 0; i < 8; i++) {
      puVar1[i] = '\0';
   }

   uVar3 = (int)uVar6 + ( (int)puVar7 - (int)( ( ulong )(puVar7 + 8) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
   if (7 < uVar3) {
      uVar4 = 0;
      do {
         uVar6 = (ulong)uVar4;
         uVar4 = uVar4 + 8;
         *(undefined8*)( ( ( ulong )(puVar7 + 8) & 0xfffffffffffffff8 ) + uVar6 ) = 0;
      }
 while ( uVar4 < uVar3 );
   }

   LAB_001005d9:uVar6 = c->bitlen[0];
   *(ulong*)( c->data + 0x38 ) = uVar6 >> 0x38 | ( uVar6 & 0xff000000000000 ) >> 0x28 | ( uVar6 & 0xff0000000000 ) >> 0x18 | ( uVar6 & 0xff00000000 ) >> 8 | ( uVar6 & 0xff000000 ) << 8 | ( uVar6 & 0xff0000 ) << 0x18 | ( uVar6 & 0xff00 ) << 0x28 | uVar6 << 0x38;
   for (int i = 0; i < 3; i++) {
      uVar6 = c->bitlen[( i + 1 )];
      *(ulong*)( c->data + ( -8*i + 48 ) ) = uVar6 >> 56 | ( uVar6 & 71776119061217280 ) >> 40 | ( uVar6 & 280375465082880 ) >> 24 | ( uVar6 & 1095216660480 ) >> 8 | ( uVar6 & 4278190080 ) << 8 | ( uVar6 & 16711680 ) << 24 | ( uVar6 & 65280 ) << 40 | uVar6 << 56;
   }

   whirlpool_block(c, c->data, 1);
   if (md != (uchar*)0x0) {
      dVar2 = (c->H).q[1];
      *(double*)md = (c->H).q[0];
      *(double*)( md + 8 ) = dVar2;
      for (int i = 0; i < 3; i++) {
         dVar2 = (c->H).q[( 2*i + 3 )];
         *(double*)( md + ( 16*i + 16 ) ) = (c->H).q[( 2*i + 2 )];
         *(double*)( md + ( 16*i + 24 ) ) = dVar2;
      }

      OPENSSL_cleanse(c, 0xa8);
   }

   return ( uint )(md != (uchar*)0x0);
}
uchar *WHIRLPOOL(void *inp, size_t bytes, uchar *md) {
   undefined1 *md_00;
   long in_FS_OFFSET;
   WHIRLPOOL_CTX WStack_d8;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   md_00 = m_0;
   if (md != (uchar*)0x0) {
      md_00 = md;
   }

   WHIRLPOOL_Init(&WStack_d8);
   WHIRLPOOL_Update(&WStack_d8, inp, bytes);
   WHIRLPOOL_Final(md_00, &WStack_d8);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return md_00;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

