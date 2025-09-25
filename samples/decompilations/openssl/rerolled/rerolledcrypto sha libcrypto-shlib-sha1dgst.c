int SHA1_Update(SHA_CTX *c, void *data, size_t len) {
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
   uVar2 = c.Nl;
   c.Nl = uVar9 * 8 + c.Nl;
   uVar3 = (ulong)c.num;
   c.Nh = c.Nh + (uint)CARRY4(uVar9 * 8, uVar2) + (int)( len >> 0x1d );
   if (uVar3 == 0) {
      if (len < 0x40) goto LAB_00100058;
      LAB_00100107:sha1_block_data_order(c, data, len >> 6);
      data = (void*)( (long)data + ( len & 0xffffffffffffffc0 ) );
      len = len - ( len & 0xffffffffffffffc0 );
   }
 else {
      puVar1 = c.data;
      if (( len | len + uVar3 ) < 0x40) {
         memcpy((void*)( (long)puVar1 + uVar3 ), data, len);
         c.num = c.num + uVar9;
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
      sha1_block_data_order(c, puVar1, 1);
      len = ( len + uVar3 ) - 0x40;
      c.num = 0;
      for (int i = 0; i < 16; i++) {
         c.data[i] = 0;
      }

      if (0x3f < len) goto LAB_00100107;
   }

   if (len == 0) {
      return 1;
   }

   uVar9 = (uint)len;
   LAB_00100058:c.num = uVar9;
   memcpy(c.data, data, len);
   return 1;
}
void SHA1_Transform(SHA_CTX *c, uchar *data) {
   sha1_block_data_order(c, data, 1);
   return;
}
int SHA1_Final(uchar *md, SHA_CTX *c) {
   uint *ptr;
   undefined1 *puVar1;
   uint uVar2;
   ulong uVar3;
   uint *puVar4;
   uint uVar5;
   ulong uVar6;
   ptr = c.data;
   uVar5 = c.num;
   *(undefined1*)( (long)c.data + (ulong)uVar5 ) = 0x80;
   uVar3 = (ulong)uVar5 + 1;
   if (uVar3 < 0x39) {
      uVar6 = 0x38 - uVar3;
      puVar4 = (uint*)( uVar3 + (long)ptr );
      goto LAB_00100223;
   }

   puVar1 = (undefined1*)( (long)ptr + uVar3 );
   uVar3 = 0x40 - uVar3;
   if (uVar3 != 0) {
      uVar6 = 0;
      if (( uVar3 & 1 ) != 0) {
         uVar6 = 1;
         *puVar1 = 0;
         if (uVar3 < 2) goto LAB_00100324;
      }

      do {
         puVar1[uVar6] = 0;
         puVar1[uVar6 + 1] = 0;
         uVar6 = uVar6 + 2;
      }
 while ( uVar6 < uVar3 );
   }

   LAB_00100324:sha1_block_data_order(c, ptr, 1);
   uVar6 = 0x38;
   puVar4 = ptr;
   LAB_00100223:uVar5 = (uint)uVar6;
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

   uVar3._0_4_ = c.Nl;
   uVar3._4_4_ = c.Nh;
   *(ulong*)( c.data + 0xe ) = uVar3 >> 0x38 | ( uVar3 & 0xff000000000000 ) >> 0x28 | ( uVar3 & 0xff0000000000 ) >> 0x18 | ( uVar3 & 0xff00000000 ) >> 8 | ( uVar3 & 0xff000000 ) << 8 | ( uVar3 & 0xff0000 ) << 0x18 | ( uVar3 & 0xff00 ) << 0x28 | uVar3 << 0x38;
   sha1_block_data_order(c, ptr, 1);
   c.num = 0;
   OPENSSL_cleanse(ptr, 0x40);
   uVar5 = c.h0;
   *(uint*)md = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
   uVar5 = c.h1;
   *(uint*)( md + 4 ) = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
   uVar5 = c.h2;
   *(uint*)( md + 8 ) = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
   uVar5 = c.h3;
   *(uint*)( md + 0xc ) = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
   uVar5 = c.h4;
   *(uint*)( md + 0x10 ) = uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18;
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */int SHA1_Init(SHA_CTX *c) {
   undefined4 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   c.h4 = 0xc3d2e1f0;
   for (int i = 0; i < 4; i++) {
      c.data[( i + 10 )] = 0;
   }

   c.Nl = 0;
   c.Nh = 0;
   for (int i = 0; i < 10; i++) {
      c.data[i] = 0;
   }

   *(undefined1(*) [16])( c.data + 0xd ) = (undefined1[16])0x0;
   uVar2 = _UNK_00100518;
   uVar1 = _UNK_00100514;
   c.h0 = __LC0;
   uVar3 = _UNK_00100518;
   c.h1 = uVar1;
   _UNK_00100518 = (undefined4)uVar2;
   _UNK_0010051c = SUB84(uVar2, 4);
   uVar1 = _UNK_0010051c;
   c.h2 = _UNK_00100518;
   _UNK_00100518 = uVar3;
   c.h3 = uVar1;
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 ossl_sha1_ctrl(SHA_CTX *param_1, int param_2, int param_3, void *param_4) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   uchar auStack_78[32];
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0x1d) {
      if (( param_3 == 0x30 ) && ( param_1 != (SHA_CTX*)0x0 )) {
         iVar1 = SHA1_Update(param_1, param_4, 0x30);
         if (0 < iVar1) {
            local_38 = 0x3636363636363636;
            local_58 = __LC2;
            uStack_50 = _UNK_00100528;
            local_48 = __LC2;
            uStack_40 = _UNK_00100528;
            iVar1 = SHA1_Update(param_1, &local_58, 0x28);
            if (iVar1 != 0) {
               iVar1 = SHA1_Final(auStack_78, param_1);
               if (iVar1 != 0) {
                  iVar1 = SHA1_Init(param_1);
                  if (iVar1 != 0) {
                     iVar1 = SHA1_Update(param_1, param_4, 0x30);
                     if (0 < iVar1) {
                        local_38 = 0x5c5c5c5c5c5c5c5c;
                        local_58 = __LC3;
                        uStack_50 = _UNK_00100538;
                        local_48 = __LC3;
                        uStack_40 = _UNK_00100538;
                        iVar1 = SHA1_Update(param_1, &local_58, 0x28);
                        if (iVar1 != 0) {
                           iVar1 = SHA1_Update(param_1, auStack_78, 0x14);
                           if (iVar1 != 0) {
                              OPENSSL_cleanse(auStack_78, 0x14);
                              uVar2 = 1;
                              goto LAB_001003e6;
                           }

                        }

                     }

                  }

               }

            }

         }

      }

      uVar2 = 0;
   }
 else {
      uVar2 = 0xfffffffe;
   }

   LAB_001003e6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}

