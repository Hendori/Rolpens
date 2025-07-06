/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int MD4_Init(MD4_CTX *c) {
   undefined4 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   for (int i = 0; i < 4; i++) {
      c->data[( i + 10 )] = 0;
   }

   c->Nl = 0;
   c->Nh = 0;
   for (int i = 0; i < 10; i++) {
      c->data[i] = 0;
   }

   *(undefined1(*) [16])( c->data + 0xd ) = (undefined1[16])0x0;
   uVar2 = _UNK_00100958;
   uVar1 = _UNK_00100954;
   c->A = __LC0;
   uVar3 = _UNK_00100958;
   c->B = uVar1;
   _UNK_00100958 = (undefined4)uVar2;
   _UNK_0010095c = SUB84(uVar2, 4);
   uVar1 = _UNK_0010095c;
   c->C = _UNK_00100958;
   _UNK_00100958 = uVar3;
   c->D = uVar1;
   return 1;
}
void md4_block_data_order(int *param_1, int *param_2, long param_3) {
   int iVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   int iVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   uint uVar19;
   uint uVar20;
   uint uVar21;
   uint uVar22;
   uint uVar23;
   uint local_74;
   long local_70;
   int local_68;
   uVar21 = param_1[1];
   local_68 = *param_1;
   uVar20 = param_1[2];
   local_74 = param_1[3];
   local_70 = param_3 + -1;
   if (param_3 != 0) {
      do {
         iVar1 = *param_2;
         iVar2 = param_2[1];
         iVar3 = param_2[2];
         iVar4 = param_2[3];
         iVar5 = param_2[7];
         iVar6 = param_2[6];
         uVar16 = ( ( local_74 ^ uVar20 ) & uVar21 ^ local_74 ) + iVar1 + local_68;
         iVar7 = param_2[10];
         uVar17 = uVar16 * 8 | uVar16 >> 0x1d;
         uVar16 = ( ( uVar20 ^ uVar21 ) & uVar17 ^ uVar20 ) + local_74 + iVar2;
         iVar8 = param_2[4];
         uVar18 = uVar16 * 0x80 | uVar16 >> 0x19;
         uVar16 = ( ( uVar17 ^ uVar21 ) & uVar18 ^ uVar21 ) + iVar3 + uVar20;
         iVar9 = param_2[5];
         uVar16 = uVar16 * 0x800 | uVar16 >> 0x15;
         iVar10 = param_2[9];
         uVar19 = ( ( uVar17 ^ uVar18 ) & uVar16 ^ uVar17 ) + iVar4 + uVar21;
         uVar19 = uVar19 >> 0xd | uVar19 * 0x80000;
         iVar11 = param_2[8];
         uVar17 = ( ( uVar18 ^ uVar16 ) & uVar19 ^ uVar18 ) + uVar17 + iVar8;
         uVar22 = uVar17 * 8 | uVar17 >> 0x1d;
         iVar12 = param_2[0xe];
         uVar17 = ( ( uVar16 ^ uVar19 ) & uVar22 ^ uVar16 ) + uVar18 + iVar9;
         uVar17 = uVar17 * 0x80 | uVar17 >> 0x19;
         uVar16 = ( ( uVar19 ^ uVar22 ) & uVar17 ^ uVar19 ) + uVar16 + iVar6;
         uVar18 = uVar16 * 0x800 | uVar16 >> 0x15;
         uVar16 = ( ( uVar22 ^ uVar17 ) & uVar18 ^ uVar22 ) + uVar19 + iVar5;
         uVar16 = uVar16 >> 0xd | uVar16 * 0x80000;
         iVar13 = param_2[0xc];
         uVar19 = ( ( uVar17 ^ uVar18 ) & uVar16 ^ uVar17 ) + uVar22 + iVar11;
         uVar22 = uVar19 * 8 | uVar19 >> 0x1d;
         iVar14 = param_2[0xb];
         uVar17 = ( ( uVar18 ^ uVar16 ) & uVar22 ^ uVar18 ) + uVar17 + iVar10;
         uVar23 = uVar17 * 0x80 | uVar17 >> 0x19;
         uVar17 = ( ( uVar16 ^ uVar22 ) & uVar23 ^ uVar16 ) + uVar18 + iVar7;
         uVar18 = uVar17 * 0x800 | uVar17 >> 0x15;
         iVar15 = param_2[0xd];
         uVar16 = ( ( uVar22 ^ uVar23 ) & uVar18 ^ uVar22 ) + uVar16 + iVar14;
         uVar19 = uVar16 >> 0xd | uVar16 * 0x80000;
         uVar16 = ( ( uVar23 ^ uVar18 ) & uVar19 ^ uVar23 ) + uVar22 + iVar13;
         uVar17 = uVar16 * 8 | uVar16 >> 0x1d;
         uVar16 = ( ( uVar18 ^ uVar19 ) & uVar17 ^ uVar18 ) + uVar23 + iVar15;
         uVar22 = uVar16 * 0x80 | uVar16 >> 0x19;
         uVar16 = ( ( uVar19 ^ uVar17 ) & uVar22 ^ uVar19 ) + uVar18 + iVar12;
         uVar18 = uVar16 * 0x800 | uVar16 >> 0x15;
         uVar16 = ( ( uVar17 ^ uVar22 ) & uVar18 ^ uVar17 ) + uVar19 + param_2[0xf];
         uVar19 = uVar16 >> 0xd | uVar16 * 0x80000;
         uVar16 = ( ( uVar22 | uVar18 ) & uVar19 | uVar22 & uVar18 ) + iVar1 + 0x5a827999 + uVar17;
         uVar16 = uVar16 * 8 | uVar16 >> 0x1d;
         uVar17 = ( ( uVar18 | uVar19 ) & uVar16 | uVar18 & uVar19 ) + iVar8 + 0x5a827999 + uVar22;
         uVar22 = uVar17 * 0x20 | uVar17 >> 0x1b;
         uVar17 = ( ( uVar19 | uVar16 ) & uVar22 | uVar19 & uVar16 ) + iVar11 + 0x5a827999 + uVar18;
         uVar17 = uVar17 * 0x200 | uVar17 >> 0x17;
         uVar18 = ( ( uVar16 | uVar22 ) & uVar17 | uVar16 & uVar22 ) + iVar13 + 0x5a827999 + uVar19;
         uVar18 = uVar18 * 0x2000 | uVar18 >> 0x13;
         uVar16 = ( ( uVar22 | uVar17 ) & uVar18 | uVar22 & uVar17 ) + iVar2 + 0x5a827999 + uVar16;
         uVar16 = uVar16 * 8 | uVar16 >> 0x1d;
         uVar19 = ( ( uVar17 | uVar18 ) & uVar16 | uVar17 & uVar18 ) + iVar9 + 0x5a827999 + uVar22;
         uVar19 = uVar19 * 0x20 | uVar19 >> 0x1b;
         uVar17 = ( ( uVar18 | uVar16 ) & uVar19 | uVar18 & uVar16 ) + iVar10 + 0x5a827999 + uVar17;
         uVar17 = uVar17 * 0x200 | uVar17 >> 0x17;
         uVar18 = ( ( uVar16 | uVar19 ) & uVar17 | uVar16 & uVar19 ) + iVar15 + 0x5a827999 + uVar18;
         uVar18 = uVar18 * 0x2000 | uVar18 >> 0x13;
         uVar16 = ( ( uVar19 | uVar17 ) & uVar18 | uVar19 & uVar17 ) + iVar3 + 0x5a827999 + uVar16;
         uVar16 = uVar16 * 8 | uVar16 >> 0x1d;
         uVar19 = ( ( uVar17 | uVar18 ) & uVar16 | uVar17 & uVar18 ) + iVar6 + 0x5a827999 + uVar19;
         uVar19 = uVar19 * 0x20 | uVar19 >> 0x1b;
         uVar17 = ( ( uVar18 | uVar16 ) & uVar19 | uVar18 & uVar16 ) + iVar7 + 0x5a827999 + uVar17;
         uVar17 = uVar17 * 0x200 | uVar17 >> 0x17;
         uVar18 = ( ( uVar16 | uVar19 ) & uVar17 | uVar16 & uVar19 ) + iVar12 + 0x5a827999 + uVar18;
         uVar18 = uVar18 * 0x2000 | uVar18 >> 0x13;
         uVar16 = ( ( uVar19 | uVar17 ) & uVar18 | uVar19 & uVar17 ) + iVar4 + 0x5a827999 + uVar16;
         uVar16 = uVar16 * 8 | uVar16 >> 0x1d;
         uVar19 = ( ( uVar17 | uVar18 ) & uVar16 | uVar17 & uVar18 ) + iVar5 + 0x5a827999 + uVar19;
         uVar19 = uVar19 * 0x20 | uVar19 >> 0x1b;
         uVar17 = ( ( uVar18 | uVar16 ) & uVar19 | uVar18 & uVar16 ) + iVar14 + 0x5a827999 + uVar17;
         uVar17 = uVar17 * 0x200 | uVar17 >> 0x17;
         uVar18 = ( ( uVar16 | uVar19 ) & uVar17 | uVar16 & uVar19 ) + param_2[0xf] + 0x5a827999 + uVar18;
         uVar18 = uVar18 * 0x2000 | uVar18 >> 0x13;
         uVar16 = ( uVar19 ^ uVar17 ^ uVar18 ) + iVar1 + 0x6ed9eba1 + uVar16;
         uVar16 = uVar16 * 8 | uVar16 >> 0x1d;
         uVar19 = ( uVar17 ^ uVar18 ^ uVar16 ) + iVar11 + 0x6ed9eba1 + uVar19;
         uVar19 = uVar19 * 0x200 | uVar19 >> 0x17;
         uVar17 = ( uVar18 ^ uVar16 ^ uVar19 ) + iVar8 + 0x6ed9eba1 + uVar17;
         uVar17 = uVar17 * 0x800 | uVar17 >> 0x15;
         uVar18 = ( uVar16 ^ uVar19 ^ uVar17 ) + iVar13 + 0x6ed9eba1 + uVar18;
         uVar18 = uVar18 * 0x8000 | uVar18 >> 0x11;
         uVar16 = ( uVar19 ^ uVar17 ^ uVar18 ) + iVar3 + 0x6ed9eba1 + uVar16;
         uVar16 = uVar16 * 8 | uVar16 >> 0x1d;
         uVar19 = ( uVar17 ^ uVar18 ^ uVar16 ) + iVar7 + 0x6ed9eba1 + uVar19;
         uVar19 = uVar19 * 0x200 | uVar19 >> 0x17;
         uVar17 = ( uVar18 ^ uVar16 ^ uVar19 ) + iVar6 + 0x6ed9eba1 + uVar17;
         uVar17 = uVar17 * 0x800 | uVar17 >> 0x15;
         uVar18 = ( uVar16 ^ uVar19 ^ uVar17 ) + iVar12 + 0x6ed9eba1 + uVar18;
         uVar18 = uVar18 * 0x8000 | uVar18 >> 0x11;
         uVar16 = ( uVar19 ^ uVar17 ^ uVar18 ) + iVar2 + 0x6ed9eba1 + uVar16;
         uVar16 = uVar16 * 8 | uVar16 >> 0x1d;
         uVar19 = ( uVar17 ^ uVar18 ^ uVar16 ) + iVar10 + 0x6ed9eba1 + uVar19;
         uVar19 = uVar19 * 0x200 | uVar19 >> 0x17;
         uVar17 = ( uVar18 ^ uVar16 ^ uVar19 ) + iVar9 + 0x6ed9eba1 + uVar17;
         uVar17 = uVar17 * 0x800 | uVar17 >> 0x15;
         uVar18 = ( uVar16 ^ uVar19 ^ uVar17 ) + iVar15 + 0x6ed9eba1 + uVar18;
         uVar18 = uVar18 * 0x8000 | uVar18 >> 0x11;
         uVar16 = ( uVar19 ^ uVar17 ^ uVar18 ) + iVar4 + 0x6ed9eba1 + uVar16;
         uVar16 = uVar16 * 8 | uVar16 >> 0x1d;
         local_68 = local_68 + uVar16;
         uVar19 = ( uVar17 ^ uVar18 ^ uVar16 ) + iVar14 + 0x6ed9eba1 + uVar19;
         uVar19 = uVar19 * 0x200 | uVar19 >> 0x17;
         uVar17 = ( uVar18 ^ uVar16 ^ uVar19 ) + iVar5 + 0x6ed9eba1 + uVar17;
         uVar17 = uVar17 * 0x800 | uVar17 >> 0x15;
         uVar16 = ( uVar16 ^ uVar19 ^ uVar17 ) + param_2[0xf] + 0x6ed9eba1 + uVar18;
         uVar21 = uVar21 + ( uVar16 * 0x8000 | uVar16 >> 0x11 );
         uVar20 = uVar20 + uVar17;
         local_74 = local_74 + uVar19;
         local_70 = local_70 + -1;
         *(ulong*)param_1 = CONCAT44(uVar21, local_68);
         *(ulong*)( param_1 + 2 ) = CONCAT44(local_74, uVar20);
         param_2 = param_2 + 0x10;
      }
 while ( local_70 != -1 );
   }

   return;
}
int MD4_Update(MD4_CTX *c, void *data, size_t len) {
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
      if (len < 0x40) goto LAB_00100648;
      LAB_001006f7:md4_block_data_order(c, data, len >> 6);
      data = (void*)( (long)data + ( len & 0xffffffffffffffc0 ) );
      len = len - ( len & 0xffffffffffffffc0 );
   }
 else {
      puVar1 = c->data;
      if (( len + uVar3 | len ) < 0x40) {
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
      md4_block_data_order(c, puVar1, 1);
      len = ( len + uVar3 ) - 0x40;
      c->num = 0;
      for (int i = 0; i < 16; i++) {
         c->data[i] = 0;
      }

      if (0x3f < len) goto LAB_001006f7;
   }

   if (len == 0) {
      return 1;
   }

   uVar9 = (uint)len;
   LAB_00100648:c->num = uVar9;
   memcpy(c->data, data, len);
   return 1;
}
void MD4_Transform(MD4_CTX *c, uchar *b) {
   md4_block_data_order(c, b, 1);
   return;
}
int MD4_Final(uchar *md, MD4_CTX *c) {
   uint *ptr;
   undefined1 *puVar1;
   uint uVar2;
   ulong uVar3;
   uint *puVar4;
   uint uVar5;
   ulong uVar6;
   ptr = c->data;
   uVar5 = c->num;
   *(undefined1*)( (long)c->data + (ulong)uVar5 ) = 0x80;
   uVar3 = (ulong)uVar5 + 1;
   if (uVar3 < 0x39) {
      uVar6 = 0x38 - uVar3;
      puVar4 = (uint*)( uVar3 + (long)ptr );
      goto LAB_00100813;
   }

   puVar1 = (undefined1*)( (long)ptr + uVar3 );
   uVar3 = 0x40 - uVar3;
   if (uVar3 != 0) {
      uVar6 = 0;
      if (( uVar3 & 1 ) != 0) {
         uVar6 = 1;
         *puVar1 = 0;
         if (uVar3 < 2) goto LAB_00100904;
      }

      do {
         puVar1[uVar6] = 0;
         puVar1[uVar6 + 1] = 0;
         uVar6 = uVar6 + 2;
      }
 while ( uVar6 < uVar3 );
   }

   LAB_00100904:md4_block_data_order(c, ptr, 1);
   uVar6 = 0x38;
   puVar4 = ptr;
   LAB_00100813:uVar5 = (uint)uVar6;
   if (uVar5 < 8) {
      if (( uVar6 & 4 ) == 0) {
         if (( uVar5 != 0 ) && ( *(undefined1*)puVar4 = 0(uVar6 & 2) != 0 )) {
            *(undefined2*)( (long)puVar4 + ( ( uVar6 & 0xffffffff ) - 2 ) ) = 0;
         }

      }
 else {
         *puVar4 = 0;
         *(undefined4*)( (long)puVar4 + ( ( uVar6 & 0xffffffff ) - 4 ) ) = 0;
      }

   }
 else {
      puVar4[0] = 0;
      puVar4[1] = 0;
      *(undefined8*)( (long)puVar4 + ( ( uVar6 & 0xffffffff ) - 8 ) ) = 0;
      uVar5 = uVar5 + ( (int)puVar4 - (int)( ( ulong )(puVar4 + 2) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
      if (7 < uVar5) {
         uVar2 = 0;
         do {
            uVar3 = (ulong)uVar2;
            uVar2 = uVar2 + 8;
            *(undefined8*)( ( ( ulong )(puVar4 + 2) & 0xfffffffffffffff8 ) + uVar3 ) = 0;
         }
 while ( uVar2 < uVar5 );
      }

   }

   uVar5 = c->Nh;
   c->data[0xe] = c->Nl;
   c->data[0xf] = uVar5;
   md4_block_data_order(c, ptr, 1);
   c->num = 0;
   OPENSSL_cleanse(ptr, 0x40);
   *(uint*)md = c->A;
   *(uint*)( md + 4 ) = c->B;
   *(uint*)( md + 8 ) = c->C;
   *(uint*)( md + 0xc ) = c->D;
   return 1;
}

