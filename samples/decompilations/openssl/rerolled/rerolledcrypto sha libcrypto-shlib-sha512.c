/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 sha512_224_init(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uVar3 = _LC4;
   uVar1 = _UNK_001007f8;
   *param_1 = __LC0;
   param_1[1] = uVar1;
   uVar2 = _UNK_00100808;
   uVar1 = __LC1;
   param_1[0x1a] = uVar3;
   param_1[2] = uVar1;
   param_1[3] = uVar2;
   uVar1 = _UNK_00100818;
   param_1[4] = __LC2;
   param_1[5] = uVar1;
   uVar1 = _UNK_00100828;
   param_1[6] = __LC3;
   param_1[7] = uVar1;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 sha512_256_init(undefined8 *param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   uVar3 = _LC10;
   uVar1 = _UNK_00100838;
   *param_1 = __LC6;
   param_1[1] = uVar1;
   uVar2 = _UNK_00100848;
   uVar1 = __LC7;
   param_1[0x1a] = uVar3;
   param_1[2] = uVar1;
   param_1[3] = uVar2;
   uVar1 = _UNK_00100858;
   param_1[4] = __LC8;
   param_1[5] = uVar1;
   uVar1 = _UNK_00100868;
   param_1[6] = __LC9;
   param_1[7] = uVar1;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int SHA384_Init(SHA512_CTX *c) {
   ulonglong uVar1;
   ulonglong uVar2;
   undefined8 uVar3;
   undefined4 uVar4;
   undefined8 uVar5;
   uVar3 = _LC15;
   uVar1 = _UNK_00100878;
   c.h[0] = __LC11;
   c.h[1] = uVar1;
   uVar5 = _LC15;
   uVar2 = _UNK_00100888;
   uVar1 = __LC12;
   _LC15._0_4_ = (undefined4)uVar3;
   _LC15._4_4_ = SUB84(uVar3, 4);
   uVar4 = _LC15._4_4_;
   c.num = (undefined4)_LC15;
   _LC15 = uVar5;
   c.md_len = uVar4;
   c.h[2] = uVar1;
   c.h[3] = uVar2;
   uVar1 = _UNK_00100898;
   c.h[4] = __LC13;
   c.h[5] = uVar1;
   uVar1 = _UNK_001008a8;
   c.h[6] = __LC14;
   c.h[7] = uVar1;
   c.Nl = 0;
   c.Nh = 0;
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int SHA512_Init(SHA512_CTX *c) {
   ulonglong uVar1;
   ulonglong uVar2;
   undefined8 uVar3;
   undefined4 uVar4;
   undefined8 uVar5;
   uVar3 = _LC20;
   uVar1 = _UNK_001008b8;
   c.h[0] = __LC16;
   c.h[1] = uVar1;
   uVar5 = _LC20;
   uVar2 = _UNK_001008c8;
   uVar1 = __LC17;
   _LC20._0_4_ = (undefined4)uVar3;
   _LC20._4_4_ = SUB84(uVar3, 4);
   uVar4 = _LC20._4_4_;
   c.num = (undefined4)_LC20;
   _LC20 = uVar5;
   c.md_len = uVar4;
   c.h[2] = uVar1;
   c.h[3] = uVar2;
   uVar1 = _UNK_001008d8;
   c.h[4] = __LC18;
   c.h[5] = uVar1;
   uVar1 = _UNK_001008e8;
   c.h[6] = __LC19;
   c.h[7] = uVar1;
   c.Nl = 0;
   c.Nh = 0;
   return 1;
}
int SHA512_Final(uchar *md, SHA512_CTX *c) {
   _union_314 *p_Var1;
   uchar *puVar2;
   ulonglong uVar3;
   long lVar4;
   ulong uVar5;
   _union_314 *p_Var6;
   uchar *puVar7;
   uint uVar8;
   ulong uVar9;
   undefined8 *puVar10;
   byte bVar11;
   bVar11 = 0;
   p_Var1 = &c.u;
   uVar8 = c.num;
   *(undefined1*)( (long)c.h + (ulong)uVar8 + 0x50 ) = 0x80;
   uVar5 = (ulong)uVar8 + 1;
   if (uVar5 < 0x71) {
      uVar9 = 0x70 - uVar5;
      p_Var6 = (_union_314*)( p_Var1.p + uVar5 );
      goto LAB_00100180;
   }

   lVar4 = -uVar5;
   uVar9 = lVar4 + 0x80;
   puVar7 = p_Var1.p + uVar5;
   if (uVar9 < 8) {
      if (( uVar9 & 4 ) == 0) {
         if (( uVar9 != 0 ) && ( *puVar7 = '\0'(uVar9 & 2) != 0 )) {
            ( puVar7 + lVar4 + 0x7e )[0] = '\0';
            ( puVar7 + lVar4 + 0x7e )[1] = '\0';
         }

      }
 else {
         for (int i = 0; i < 4; i++) {
            puVar7[i] = '\0';
         }

         puVar7 = puVar7 + lVar4 + 0x7c;
         for (int i = 0; i < 4; i++) {
            puVar7[i] = '\0';
         }

      }

   }
 else {
      for (int i = 0; i < 8; i++) {
         puVar7[i] = '\0';
      }

      puVar2 = puVar7 + lVar4 + 0x78;
      for (int i = 0; i < 8; i++) {
         puVar2[i] = '\0';
      }

      puVar10 = (undefined8*)( ( ulong )(puVar7 + 8) & 0xfffffffffffffff8 );
      uVar5 = ( ulong )(puVar7 + ( uVar9 - (long)puVar10 )) & 0xfffffffffffffff8;
      if (7 < uVar5) {
         *puVar10 = 0;
         uVar9 = 8;
         if (8 < uVar5) {
            if (( uVar5 - 1 >> 3 & 1 ) != 0) {
               uVar9 = 0x10;
               puVar10[1] = 0;
               if (uVar5 < 0x11) goto LAB_00100472;
            }

            do {
               *(undefined8*)( (long)puVar10 + uVar9 ) = 0;
               *(undefined8*)( (long)puVar10 + uVar9 + 8 ) = 0;
               uVar9 = uVar9 + 0x10;
            }
 while ( uVar9 < uVar5 );
         }

      }

   }

   LAB_00100472:sha512_block_data_order(c, p_Var1, 1);
   uVar9 = 0x70;
   p_Var6 = p_Var1;
   LAB_00100180:uVar8 = (uint)uVar9;
   if (uVar8 < 8) {
      if (( uVar9 & 4 ) == 0) {
         if (( uVar8 != 0 ) && ( p_Var6.p[0] = '\0'(uVar9 & 2) != 0 )) {
            *(undefined2*)( (long)p_Var6 + ( ( uVar9 & 0xffffffff ) - 2 ) ) = 0;
         }

      }
 else {
         *(undefined4*)p_Var6 = 0;
         *(undefined4*)( (long)p_Var6 + ( ( uVar9 & 0xffffffff ) - 4 ) ) = 0;
      }

   }
 else {
      p_Var6.d[0] = 0;
      *(undefined8*)( (long)p_Var6 + ( ( uVar9 & 0xffffffff ) - 8 ) ) = 0;
      puVar10 = (undefined8*)( ( ulong )((long)p_Var6 + 8) & 0xfffffffffffffff8 );
      uVar5 = ( ulong )(uVar8 + ( (int)p_Var6 - (int)puVar10 ) >> 3);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
         *puVar10 = 0;
         puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
      }

   }

   uVar5 = c.Nl;
   uVar9 = c.Nh;
   ( c.u ).d[0xe] = ( ( ( ( ( ( ( uVar9 & 0xff ) << 8 | uVar9 >> 8 & 0xff ) << 8 | uVar9 >> 0x10 & 0xff ) << 8 | uVar9 >> 0x18 & 0xff ) << 8 | uVar9 >> 0x20 & 0xff ) << 8 | uVar9 >> 0x28 & 0xff ) << 8 | uVar9 >> 0x30 & 0xff ) << 8 | uVar9 >> 0x38;
   ( c.u ).d[0xf] = ( ( ( ( ( ( ( uVar5 & 0xff ) << 8 | uVar5 >> 8 & 0xff ) << 8 | uVar5 >> 0x10 & 0xff ) << 8 | uVar5 >> 0x18 & 0xff ) << 8 | uVar5 >> 0x20 & 0xff ) << 8 | uVar5 >> 0x28 & 0xff ) << 8 | uVar5 >> 0x30 & 0xff ) << 8 | uVar5 >> 0x38;
   sha512_block_data_order(c, p_Var1, 1);
   if (md != (uchar*)0x0) {
      uVar8 = c.md_len;
      if (uVar8 == 0x30) {
         uVar5 = c.h[0];
         *(ulong*)md = uVar5 >> 0x38 | ( uVar5 & 0xff000000000000 ) >> 0x28 | ( uVar5 & 0xff0000000000 ) >> 0x18 | ( uVar5 & 0xff00000000 ) >> 8 | ( uVar5 & 0xff000000 ) << 8 | ( uVar5 & 0xff0000 ) << 0x18 | ( uVar5 & 0xff00 ) << 0x28 | uVar5 << 0x38;
         for (int i = 0; i < 5; i++) {
            uVar5 = c.h[( i + 1 )];
            *(ulong*)( md + ( 8*i + 8 ) ) = uVar5 >> 56 | ( uVar5 & 71776119061217280 ) >> 40 | ( uVar5 & 280375465082880 ) >> 24 | ( uVar5 & 1095216660480 ) >> 8 | ( uVar5 & 4278190080 ) << 8 | ( uVar5 & 16711680 ) << 24 | ( uVar5 & 65280 ) << 40 | uVar5 << 56;
         }

      }
 else if (uVar8 < 0x31) {
         if (uVar8 == 0x1c) {
            uVar5 = c.h[0];
            *(ulong*)md = uVar5 >> 0x38 | ( uVar5 & 0xff000000000000 ) >> 0x28 | ( uVar5 & 0xff0000000000 ) >> 0x18 | ( uVar5 & 0xff00000000 ) >> 8 | ( uVar5 & 0xff000000 ) << 8 | ( uVar5 & 0xff0000 ) << 0x18 | ( uVar5 & 0xff00 ) << 0x28 | uVar5 << 0x38;
            uVar5 = c.h[1];
            *(ulong*)( md + 8 ) = uVar5 >> 0x38 | ( uVar5 & 0xff000000000000 ) >> 0x28 | ( uVar5 & 0xff0000000000 ) >> 0x18 | ( uVar5 & 0xff00000000 ) >> 8 | ( uVar5 & 0xff000000 ) << 8 | ( uVar5 & 0xff0000 ) << 0x18 | ( uVar5 & 0xff00 ) << 0x28 | uVar5 << 0x38;
            uVar5 = c.h[2];
            *(ulong*)( md + 0x10 ) = uVar5 >> 0x38 | ( uVar5 & 0xff000000000000 ) >> 0x28 | ( uVar5 & 0xff0000000000 ) >> 0x18 | ( uVar5 & 0xff00000000 ) >> 8 | ( uVar5 & 0xff000000 ) << 8 | ( uVar5 & 0xff0000 ) << 0x18 | ( uVar5 & 0xff00 ) << 0x28 | uVar5 << 0x38;
            uVar3 = c.h[3];
            uVar8 = ( uint )(uVar3 >> 0x20);
            *(uint*)( md + 0x18 ) = ( ( ( uVar8 & 0xff ) << 8 | uVar8 >> 8 & 0xff ) << 8 | ( ushort )(uVar3 >> 0x30) & 0xff ) << 8 | ( uint )(byte)(uVar3 >> 0x38);
         }
 else {
            if (uVar8 != 0x20) {
               return 0;
            }

            uVar5 = c.h[0];
            *(ulong*)md = uVar5 >> 0x38 | ( uVar5 & 0xff000000000000 ) >> 0x28 | ( uVar5 & 0xff0000000000 ) >> 0x18 | ( uVar5 & 0xff00000000 ) >> 8 | ( uVar5 & 0xff000000 ) << 8 | ( uVar5 & 0xff0000 ) << 0x18 | ( uVar5 & 0xff00 ) << 0x28 | uVar5 << 0x38;
            for (int i = 0; i < 3; i++) {
               uVar5 = c.h[( i + 1 )];
               *(ulong*)( md + ( 8*i + 8 ) ) = uVar5 >> 56 | ( uVar5 & 71776119061217280 ) >> 40 | ( uVar5 & 280375465082880 ) >> 24 | ( uVar5 & 1095216660480 ) >> 8 | ( uVar5 & 4278190080 ) << 8 | ( uVar5 & 16711680 ) << 24 | ( uVar5 & 65280 ) << 40 | uVar5 << 56;
            }

         }

      }
 else {
         if (uVar8 != 0x40) {
            return 0;
         }

         uVar5 = c.h[0];
         *(ulong*)md = uVar5 >> 0x38 | ( uVar5 & 0xff000000000000 ) >> 0x28 | ( uVar5 & 0xff0000000000 ) >> 0x18 | ( uVar5 & 0xff00000000 ) >> 8 | ( uVar5 & 0xff000000 ) << 8 | ( uVar5 & 0xff0000 ) << 0x18 | ( uVar5 & 0xff00 ) << 0x28 | uVar5 << 0x38;
         for (int i = 0; i < 7; i++) {
            uVar5 = c.h[( i + 1 )];
            *(ulong*)( md + ( 8*i + 8 ) ) = uVar5 >> 56 | ( uVar5 & 71776119061217280 ) >> 40 | ( uVar5 & 280375465082880 ) >> 24 | ( uVar5 & 1095216660480 ) >> 8 | ( uVar5 & 4278190080 ) << 8 | ( uVar5 & 16711680 ) << 24 | ( uVar5 & 65280 ) << 40 | uVar5 << 56;
         }

      }

      return 1;
   }

   return 0;
}
int SHA384_Final(uchar *md, SHA512_CTX *c) {
   int iVar1;
   iVar1 = SHA512_Final(md, c);
   return iVar1;
}
int SHA512_Update(SHA512_CTX *c, void *data, size_t len) {
   _union_314 *p_Var1;
   uchar *__dest;
   ulong uVar2;
   long lVar3;
   ulong uVar4;
   uint uVar5;
   ulong uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   byte bVar9;
   bVar9 = 0;
   if (len == 0) {
      return 1;
   }

   p_Var1 = &c.u;
   uVar2 = c.Nl;
   c.Nl = len * 8 + c.Nl;
   c.Nh = ( len >> 0x3d ) + c.Nh + (ulong)CARRY8(len * 8, uVar2);
   if (c.num == 0) {
      if (len < 0x80) goto LAB_00100682;
      LAB_00100743:uVar2 = len >> 7;
      uVar6 = len & 0xffffffffffffff80;
      len = (size_t)( (uint)len & 0x7f );
      sha512_block_data_order(c, data, uVar2);
      data = (void*)( (long)data + uVar6 );
   }
 else {
      uVar6 = (ulong)c.num;
      lVar3 = -uVar6;
      uVar2 = lVar3 + 0x80;
      __dest = p_Var1.p + uVar6;
      if (len < uVar2) {
         memcpy(__dest, data, len);
         c.num = c.num + (int)len;
         return 1;
      }

      if (uVar2 < 8) {
         if (( uVar2 & 4 ) == 0) {
            /* WARNING: Load size is inaccurate */
            if (( uVar2 != 0 ) && ( *__dest = *data(uVar2 & 2) != 0 )) {
               *(undefined2*)( __dest + lVar3 + 0x7e ) = *(undefined2*)( (long)data + lVar3 + 0x7e );
            }

         }
 else {
            /* WARNING: Load size is inaccurate */
            *(undefined4*)__dest = *data;
            *(undefined4*)( __dest + lVar3 + 0x7c ) = *(undefined4*)( (long)data + lVar3 + 0x7c );
         }

      }
 else {
         /* WARNING: Load size is inaccurate */
         *(undefined8*)__dest = *data;
         *(undefined8*)( __dest + lVar3 + 0x78 ) = *(undefined8*)( (long)data + lVar3 + 0x78 );
         lVar3 = (long)__dest - (long)( ( ulong )(__dest + 8) & 0xfffffffffffffff8 );
         puVar7 = (undefined8*)( (long)data - lVar3 );
         puVar8 = (undefined8*)( ( ulong )(__dest + 8) & 0xfffffffffffffff8 );
         for (uVar4 = lVar3 + uVar2 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
         }

      }

      len = ( uVar6 - 0x80 ) + len;
      c.num = 0;
      data = (void*)( (long)data + uVar2 );
      sha512_block_data_order(c, p_Var1, 1);
      if (0x7f < len) goto LAB_00100743;
   }

   if (len == 0) {
      return 1;
   }

   LAB_00100682:uVar5 = (uint)len;
   uVar2 = len & 0xffffffff;
   if (uVar5 < 8) {
      if (( len & 4 ) == 0) {
         /* WARNING: Load size is inaccurate */
         if (( uVar5 != 0 ) && ( ( c.u ).p[0] = ( uchar ) * data(len & 2) != 0 )) {
            *(undefined2*)( (long)c.h + uVar2 + 0x4e ) = *(undefined2*)( (long)data + ( uVar2 - 2 ) );
         }

      }
 else {
         /* WARNING: Load size is inaccurate */
         *(int*)&c.u = (int)*data;
         *(undefined4*)( (long)c.h + uVar2 + 0x4c ) = *(undefined4*)( (long)data + ( uVar2 - 4 ) );
      }

   }
 else {
      /* WARNING: Load size is inaccurate */
      puVar8 = (undefined8*)( ( ulong )((long)&c.u + 8U) & 0xfffffffffffffff8 );
      ( c.u ).d[0] = *data;
      *(undefined8*)( (long)c.h + ( len & 0xffffffff ) + 0x48 ) = *(undefined8*)( (long)data + ( ( len & 0xffffffff ) - 8 ) );
      lVar3 = (long)p_Var1 - (long)puVar8;
      puVar7 = (undefined8*)( (long)data - lVar3 );
      for (uVar2 = ( ulong )(uVar5 + (int)lVar3 >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
         *puVar8 = *puVar7;
         puVar7 = puVar7 + (ulong)bVar9 * -2 + 1;
         puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
      }

   }

   c.num = uVar5;
   return 1;
}
int SHA384_Update(SHA512_CTX *c, void *data, size_t len) {
   int iVar1;
   iVar1 = SHA512_Update(c, data, len);
   return iVar1;
}
void SHA512_Transform(SHA512_CTX *c, uchar *data) {
   sha512_block_data_order(c, data, 1);
   return;
}

