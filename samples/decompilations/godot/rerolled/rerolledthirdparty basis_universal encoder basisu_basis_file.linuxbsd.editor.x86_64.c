/* basisu::basisu_file::create_header(basisu::basisu_backend_output const&,
   basist::basis_texture_type, unsigned int, unsigned int, bool, unsigned int) */void basisu::basisu_file::create_header(basisu_file *this, undefined4 *param_1, uint param_3, uint param_4, ulong param_5, char param_6, uint param_7) {
   undefined2 uVar1;
   undefined4 uVar2;
   basisu_file bVar3;
   uint uVar4;
   char *pcVar5;
   byte bVar7;
   uint uVar6;
   uint uVar8;
   char *pcVar9;
   ulong uVar10;
   uint uVar11;
   long lVar12;
   *(undefined2*)( this + 4 ) = 0x4d;
   *(int*)( this + 8 ) = *(int*)( this + 0x88 ) + -0x4d;
   uVar2 = param_1[0xe];
   uVar1 = *(undefined2*)( param_1 + 0xe );
   *(undefined2*)( this + 0x11 ) = 0;
   this[0x13] = (basisu_file)0x0;
   *(undefined2*)( this + 0xe ) = uVar1;
   this[0x10] = SUB41((uint)uVar2 >> 0x10, 0);
   if (param_1[0xe] != 0) {
      lVar12 = 0;
      uVar4 = 0;
      bVar7 = 0;
      uVar8 = 0;
      uVar11 = 0;
      do {
         uVar6 = *(int*)( *(long*)( param_1 + 0xc ) + 0x24 + lVar12 ) + 1;
         uVar4 = ( uVar8 & 0xff ) << 0x10 | (uint)bVar7 << 8 | uVar4;
         if (uVar6 < uVar4) {
            uVar6 = uVar4;
         }

         uVar11 = uVar11 + 1;
         lVar12 = lVar12 + 0x30;
         bVar7 = ( byte )(uVar6 >> 8);
         *(short*)( this + 0x11 ) = (short)uVar6;
         uVar4 = uVar6 & 0xff;
         uVar8 = uVar6 >> 0x10;
         this[0x13] = SUB41(uVar6 >> 0x10, 0);
      }
 while ( uVar11 < (uint)param_1[0xe] );
   }

   this[0x14] = SUB41(*param_1, 0);
   *(undefined2*)( this + 0x15 ) = 0;
   bVar3 = *(basisu_file*)( param_1 + 1 );
   if (param_6 != '\0') {
      bVar3 = ( basisu_file )((byte)bVar3 | 2);
   }

   this[0x15] = bVar3;
   if (*(char*)( (long)param_1 + 5 ) != '\0') {
      *(ushort*)( this + 0x15 ) = *(ushort*)( this + 0x15 ) | 8;
   }

   if (*(char*)( (long)param_1 + 6 ) != '\0') {
      *(ushort*)( this + 0x15 ) = *(ushort*)( this + 0x15 ) | 0x10;
   }

   if (param_1[0xe] != 0) {
      pcVar5 = (char*)( *(long*)( param_1 + 0xc ) + 0x2c );
      pcVar9 = pcVar5 + (ulong)(uint)param_1[0xe] * 0x30;
      do {
         if (*pcVar5 != '\0') {
            *(ushort*)( this + 0x15 ) = *(ushort*)( this + 0x15 ) | 4;
            break;
         }

         pcVar5 = pcVar5 + 0x30;
      }
 while ( pcVar5 != pcVar9 );
   }

   if (0xffffff < param_7) {
      param_7 = 0xffffff;
   }

   uVar10 = param_5 & 0xffffffff;
   *(uint*)( this + 0x17 ) = ( ( ( param_7 >> 0x10 & 0xff ) << 8 | param_7 >> 8 & 0xff ) << 8 | param_7 & 0xff ) << 8 | param_3 & 0xff;
   *(ulong*)( this + 0x1f ) = ( ( ( ( ( ( ( uVar10 >> 0x18 ) << 8 | uVar10 >> 0x10 & 0xff ) << 8 | uVar10 >> 8 & 0xff ) << 8 | param_5 & 0xff ) << 8 | ( ulong )(param_4 >> 0x18) ) << 8 | ( ulong )(param_4 >> 0x10) & 0xff ) << 8 | ( ulong )(byte)(param_4 >> 8) ) << 8 | (ulong)(byte)param_4;
   *(undefined2*)( this + 0x27 ) = *(undefined2*)( param_1 + 2 );
   if (*(char*)( (long)param_1 + 5 ) == '\0') {
      *(undefined4*)( this + 0x29 ) = *(undefined4*)( this + 0x78 );
      uVar2 = param_1[6];
      *(undefined2*)( this + 0x2d ) = *(undefined2*)( param_1 + 6 );
      this[0x2f] = SUB41((uint)uVar2 >> 0x10, 0);
   }

   *(undefined2*)( this + 0x30 ) = *(undefined2*)( param_1 + 3 );
   if (*(char*)( (long)param_1 + 5 ) == '\0') {
      *(undefined4*)( this + 0x32 ) = *(undefined4*)( this + 0x7c );
      uVar2 = param_1[10];
      *(undefined2*)( this + 0x36 ) = *(undefined2*)( param_1 + 10 );
      this[0x38] = SUB41((uint)uVar2 >> 0x10, 0);
   }

   *(undefined4*)( this + 0x39 ) = *(undefined4*)( this + 0x80 );
   *(undefined4*)( this + 0x3d ) = param_1[0x12];
   *(undefined4*)( this + 0x41 ) = *(undefined4*)( this + 0x74 );
   return;
}
/* basisu::basisu_file::create_image_descs(basisu::basisu_backend_output const&) */undefined8 basisu::basisu_file::create_image_descs(basisu_file *this, basisu_backend_output *param_1) {
   byte *pbVar1;
   uint uVar2;
   undefined4 uVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   uVar2 = *(uint*)( param_1 + 0x38 );
   uVar7 = *(uint*)( this + 0x58 );
   if (uVar2 != uVar7) {
      uVar4 = uVar2;
      if (( uVar7 <= uVar2 ) && ( *(uint*)( this + 0x5c ) < uVar2 )) {
         basisu::elemental_vector::increase_capacity((int)this + 0x50, SUB41(uVar2, 0), ( uint )(uVar7 + 1 == uVar2), (_func_void_void_ptr_void_ptr_uint*)0x17, true);
         uVar4 = *(uint*)( param_1 + 0x38 );
      }

      uVar7 = uVar4;
      *(uint*)( this + 0x58 ) = uVar2;
   }

   uVar10 = ( ulong ) * (uint*)( this + 0x84 );
   lVar5 = 0;
   lVar6 = 0;
   if (uVar7 != 0) {
      do {
         lVar9 = *(long*)( this + 0x50 );
         *(undefined1(*) [16])( lVar9 + lVar5 ) = (undefined1[16])0x0;
         *(undefined8*)( *(undefined1(*) [16])( lVar9 + lVar5 ) + 0xf ) = 0;
         lVar8 = lVar6 * 0x30;
         lVar9 = *(long*)( this + 0x50 );
         uVar3 = *(undefined4*)( *(long*)( param_1 + 0x30 ) + lVar8 + 0x24 );
         *(undefined2*)( lVar9 + lVar5 ) = *(undefined2*)( *(long*)( param_1 + 0x30 ) + lVar8 + 0x24 );
         *(char*)( (undefined2*)( lVar9 + lVar5 ) + 1 ) = (char)( (uint)uVar3 >> 0x10 );
         *(char*)( *(long*)( this + 0x50 ) + 3 + lVar5 ) = (char)*(undefined4*)( *(long*)( param_1 + 0x30 ) + 0x28 + lVar8 );
         lVar9 = *(long*)( param_1 + 0x30 ) + lVar8;
         if (*(char*)( lVar9 + 0x2c ) != '\0') {
            pbVar1 = (byte*)( *(long*)( this + 0x50 ) + lVar5 + 4 );
            *pbVar1 = *pbVar1 | 1;
            lVar9 = *(long*)( param_1 + 0x30 ) + lVar8;
         }

         if (*(char*)( lVar9 + 0x2d ) != '\0') {
            pbVar1 = (byte*)( *(long*)( this + 0x50 ) + lVar5 + 4 );
            *pbVar1 = *pbVar1 | 2;
            lVar9 = *(long*)( param_1 + 0x30 ) + lVar8;
         }

         *(undefined2*)( *(long*)( this + 0x50 ) + 5 + lVar5 ) = *(undefined2*)( lVar9 + 4 );
         *(undefined2*)( *(long*)( this + 0x50 ) + 7 + lVar5 ) = *(undefined2*)( *(long*)( param_1 + 0x30 ) + 8 + lVar8 );
         *(undefined2*)( *(long*)( this + 0x50 ) + 9 + lVar5 ) = *(undefined2*)( *(long*)( param_1 + 0x30 ) + 0x14 + lVar8 );
         *(undefined2*)( *(long*)( this + 0x50 ) + 0xb + lVar5 ) = *(undefined2*)( *(long*)( param_1 + 0x30 ) + 0x18 + lVar8 );
         *(undefined2*)( *(long*)( this + 0x50 ) + 0x15 + lVar5 ) = *(undefined2*)( *(long*)( param_1 + 0x60 ) + lVar6 * 2 );
         uVar2 = *(uint*)( lVar6 * 0x10 + *(long*)( param_1 + 0x50 ) + 8 );
         *(int*)( *(long*)( this + 0x50 ) + 0xd + lVar5 ) = (int)uVar10;
         uVar10 = uVar10 + uVar2;
         *(uint*)( *(long*)( this + 0x50 ) + 0x11 + lVar5 ) = uVar2;
         if (0xffffffff < uVar10) {
            basisu::error_printf("basisu_file::create_image_descs: Basis file too large\n");
            return 0;
         }

         lVar6 = lVar6 + 1;
         lVar5 = lVar5 + 0x17;
      }
 while ( (uint)lVar6 < *(uint*)( param_1 + 0x38 ) );
   }

   return 1;
}
/* basisu::basisu_file::create_comp_data(basisu::basisu_backend_output const&) */void basisu::basisu_file::create_comp_data(basisu_file *this, basisu_backend_output *param_1) {
   void *pvVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   size_t sVar4;
   ulong uVar5;
   ulong uVar6;
   long lVar7;
   uint uVar8;
   ulong uVar9;
   ulong uVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   uVar8 = (int)this + 0x60;
   uVar6 = ( ulong ) * (uint*)( this + 0x68 );
   if (uVar6 + 0x4d >> 0x20 == 0) {
      uVar11 = *(uint*)( this + 0x68 ) + 0x4d;
      if (*(uint*)( this + 0x6c ) < uVar11) {
         basisu::elemental_vector::increase_capacity(uVar8, SUB41(uVar11, 0), 0, (_func_void_void_ptr_void_ptr_uint*)0x1, false);
         uVar10 = ( ulong ) * (uint*)( this + 0x68 );
         sVar4 = (size_t)( uVar11 - *(uint*)( this + 0x68 ) );
      }
 else {
         sVar4 = 0x4d;
         uVar10 = uVar6;
      }

      memset((void*)( uVar10 + *(long*)( this + 0x60 ) ), 0, sVar4);
      *(uint*)( this + 0x68 ) = uVar11;
   }

   uVar2 = *(undefined8*)( this + 8 );
   puVar3 = (undefined8*)( *(long*)( this + 0x60 ) + uVar6 );
   *puVar3 = *(undefined8*)this;
   puVar3[1] = uVar2;
   for (int i = 0; i < 3; i++) {
      uVar2 = *(undefined8*)( this + ( 16*i + 24 ) );
      puVar3[( 2*i + 2 )] = *(undefined8*)( this + ( 16*i + 16 ) );
      puVar3[( 2*i + 3 )] = uVar2;
   }

   uVar2 = *(undefined8*)( this + 0x45 );
   *(undefined8*)( (long)puVar3 + 0x3d ) = *(undefined8*)( this + 0x3d );
   *(undefined8*)( (long)puVar3 + 0x45 ) = uVar2;
   if (*(uint*)( this + 0x58 ) != 0) {
      uVar11 = *(uint*)( this + 0x68 );
      uVar10 = (ulong)uVar11;
      pvVar1 = *(void**)( this + 0x50 );
      sVar4 = ( ulong ) * (uint*)( this + 0x58 ) * 0x17;
      uVar6 = sVar4 + uVar10;
      if (uVar6 >> 0x20 == 0) {
         uVar13 = (uint)uVar6;
         if (uVar11 != uVar13) {
            if (uVar11 <= uVar13) {
               uVar5 = uVar10;
               if (*(uint*)( this + 0x6c ) < uVar13) {
                  basisu::elemental_vector::increase_capacity(uVar8, SUB81(uVar6, 0), ( uint )(uVar11 + 1 == uVar13), (_func_void_void_ptr_void_ptr_uint*)0x1, false);
                  uVar11 = *(uint*)( this + 0x68 );
                  uVar5 = (ulong)uVar11;
               }

               memset((void*)( uVar5 + *(long*)( this + 0x60 ) ), 0, ( ulong )(uVar13 - uVar11));
            }

            *(uint*)( this + 0x68 ) = uVar13;
         }

      }

      memcpy((void*)( *(long*)( this + 0x60 ) + uVar10 ), pvVar1, sVar4);
   }

   if (param_1[5] == (basisu_backend_output)0x0) {
      uVar11 = *(uint*)( param_1 + 0x18 );
      if (uVar11 == 0) {
         uVar11 = *(uint*)( param_1 + 0x28 );
      }
 else {
         uVar13 = *(uint*)( this + 0x68 );
         uVar10 = (ulong)uVar13;
         uVar6 = (ulong)uVar11;
         pvVar1 = *(void**)( param_1 + 0x10 );
         if (uVar6 + uVar10 >> 0x20 == 0) {
            uVar12 = uVar13 + uVar11;
            if (!CARRY4(uVar13,uVar11)) {
               uVar5 = uVar6;
               uVar9 = uVar10;
               if (*(uint*)( this + 0x6c ) < uVar12) {
                  basisu::elemental_vector::increase_capacity(uVar8, SUB41(uVar12, 0), ( uint )(uVar11 == 1), (_func_void_void_ptr_void_ptr_uint*)0x1, false);
                  uVar5 = ( ulong )(uVar12 - *(uint*)( this + 0x68 ));
                  uVar9 = ( ulong ) * (uint*)( this + 0x68 );
               }

               memset((void*)( uVar9 + *(long*)( this + 0x60 ) ), 0, uVar5);
            }

            *(uint*)( this + 0x68 ) = uVar12;
         }

         memcpy((void*)( *(long*)( this + 0x60 ) + uVar10 ), pvVar1, uVar6);
         uVar11 = *(uint*)( param_1 + 0x28 );
      }

      if (uVar11 != 0) {
         uVar13 = *(uint*)( this + 0x68 );
         uVar10 = (ulong)uVar13;
         uVar6 = (ulong)uVar11;
         pvVar1 = *(void**)( param_1 + 0x20 );
         if (uVar6 + uVar10 >> 0x20 == 0) {
            uVar12 = uVar13 + uVar11;
            if (!CARRY4(uVar13,uVar11)) {
               uVar5 = uVar6;
               uVar9 = uVar10;
               if (*(uint*)( this + 0x6c ) < uVar12) {
                  basisu::elemental_vector::increase_capacity(uVar8, SUB41(uVar12, 0), ( uint )(uVar11 == 1), (_func_void_void_ptr_void_ptr_uint*)0x1, false);
                  uVar5 = ( ulong )(uVar12 - *(uint*)( this + 0x68 ));
                  uVar9 = ( ulong ) * (uint*)( this + 0x68 );
               }

               memset((void*)( uVar9 + *(long*)( this + 0x60 ) ), 0, uVar5);
            }

            *(uint*)( this + 0x68 ) = uVar12;
         }

         memcpy((void*)( *(long*)( this + 0x60 ) + uVar10 ), pvVar1, uVar6);
      }

   }

   uVar11 = *(uint*)( param_1 + 0x48 );
   if (uVar11 != 0) {
      uVar13 = *(uint*)( this + 0x68 );
      uVar10 = (ulong)uVar13;
      uVar6 = (ulong)uVar11;
      pvVar1 = *(void**)( param_1 + 0x40 );
      if (uVar6 + uVar10 >> 0x20 == 0) {
         uVar12 = uVar13 + uVar11;
         if (!CARRY4(uVar13,uVar11)) {
            uVar5 = uVar6;
            uVar9 = uVar10;
            if (*(uint*)( this + 0x6c ) < uVar12) {
               basisu::elemental_vector::increase_capacity(uVar8, SUB41(uVar12, 0), ( uint )(uVar11 == 1), (_func_void_void_ptr_void_ptr_uint*)0x1, false);
               uVar5 = ( ulong )(uVar12 - *(uint*)( this + 0x68 ));
               uVar9 = ( ulong ) * (uint*)( this + 0x68 );
            }

            memset((void*)( uVar9 + *(long*)( this + 0x60 ) ), 0, uVar5);
         }

         *(uint*)( this + 0x68 ) = uVar12;
      }

      memcpy((void*)( *(long*)( this + 0x60 ) + uVar10 ), pvVar1, uVar6);
   }

   lVar7 = 0;
   if (*(int*)( param_1 + 0x38 ) != 0) {
      do {
         while (true) {
            puVar3 = (undefined8*)( lVar7 * 0x10 + *(long*)( param_1 + 0x50 ) );
            uVar11 = *(uint*)( puVar3 + 1 );
            uVar6 = (ulong)uVar11;
            if (uVar6 == 0) break;
            uVar13 = *(uint*)( this + 0x68 );
            uVar10 = (ulong)uVar13;
            pvVar1 = (void*)*puVar3;
            if (uVar6 + uVar10 < 0x100000000) {
               uVar12 = uVar13 + uVar11;
               if (!CARRY4(uVar13,uVar11)) {
                  uVar5 = uVar6;
                  uVar9 = uVar10;
                  if (*(uint*)( this + 0x6c ) < uVar12) {
                     basisu::elemental_vector::increase_capacity(uVar8, SUB41(uVar12, 0), ( uint )(uVar11 == 1), (_func_void_void_ptr_void_ptr_uint*)0x1, false);
                     uVar5 = ( ulong )(uVar12 - *(uint*)( this + 0x68 ));
                     uVar9 = ( ulong ) * (uint*)( this + 0x68 );
                  }

                  memset((void*)( uVar9 + *(long*)( this + 0x60 ) ), 0, uVar5);
               }

               *(uint*)( this + 0x68 ) = uVar12;
            }

            lVar7 = lVar7 + 1;
            memcpy((void*)( *(long*)( this + 0x60 ) + uVar10 ), pvVar1, uVar6);
            if (*(uint*)( param_1 + 0x38 ) <= (uint)lVar7) {
               return;
            }

         }
;
         lVar7 = lVar7 + 1;
      }
 while ( (uint)lVar7 < *(uint*)( param_1 + 0x38 ) );
   }

   return;
}
/* basisu::basisu_file::fixup_crcs() */void basisu::basisu_file::fixup_crcs(basisu_file *this) {
   undefined4 *puVar1;
   undefined2 uVar2;
   puVar1 = *(undefined4**)( this + 0x60 );
   puVar1[2] = *(int*)( this + 0x88 ) + -0x4d;
   uVar2 = basist::crc16((void*)( *(long*)( this + 0x60 ) + 0x4d ), ( ulong ) * (uint*)( this + 0x88 ) - 0x4d, 0);
   *(undefined2*)( puVar1 + 3 ) = uVar2;
   uVar2 = basist::crc16(puVar1 + 2, 0x45, 0);
   *puVar1 = 0x134273;
   *(undefined2*)( (long)puVar1 + 6 ) = uVar2;
   return;
}
/* basisu::basisu_file::init(basisu::basisu_backend_output const&, basist::basis_texture_type,
   unsigned int, unsigned int, bool, unsigned int) */char basisu::basisu_file::init(basisu_file *this, basisu_backend_output *param_1, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6, undefined4 param_7) {
   uint *puVar1;
   basisu_backend_output bVar2;
   char cVar3;
   long lVar4;
   uint uVar5;
   int iVar6;
   ulong uVar7;
   long lVar8;
   basisu_backend_output *pbVar9;
   basisu_file *this_00;
   if (*(void**)( this + 0x60 ) != (void*)0x0) {
      free(*(void**)( this + 0x60 ));
      *(undefined8*)( this + 0x60 ) = 0;
      *(undefined8*)( this + 0x68 ) = 0;
   }

   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x3d ) = (undefined1[16])0x0;
   if (*(void**)( this + 0x50 ) != (void*)0x0) {
      free(*(void**)( this + 0x50 ));
      *(undefined8*)( this + 0x50 ) = 0;
      *(undefined8*)( this + 0x58 ) = 0;
   }

   bVar2 = param_1[5];
   *(undefined8*)( this + 0x80 ) = 0;
   *(undefined4*)( this + 0x88 ) = 0;
   *(undefined1(*) [16])( this + 0x70 ) = (undefined1[16])0x0;
   if (bVar2 == (basisu_backend_output)0x0) {
      if (0xfffeffff < ( ulong ) * (uint*)( param_1 + 0x18 ) + 0x4d + ( ulong ) * (uint*)( param_1 + 0x28 ) + ( ulong ) * (uint*)( param_1 + 0x48 ) + ( ulong ) * (uint*)( param_1 + 0x38 ) * 0x17) goto LAB_00100a40;
      iVar6 = *(int*)param_1;
      *(undefined4*)( this + 0x74 ) = 0x4d;
      if (iVar6 == 0) {
         iVar6 = *(int*)( param_1 + 0x38 ) * 0x17 + 0x4d;
         *(int*)( this + 0x78 ) = iVar6;
         iVar6 = iVar6 + *(int*)( param_1 + 0x18 );
         *(int*)( this + 0x7c ) = iVar6;
         iVar6 = iVar6 + *(int*)( param_1 + 0x28 );
         goto LAB_00100a70;
      }

      LAB_00100948:uVar5 = *(int*)( param_1 + 0x38 ) * 0x17 + 0x4d;
   }
 else {
      if (0xfffeffff < ( ulong ) * (uint*)( param_1 + 0x38 ) * 0x17 + 0x4d + ( ulong ) * (uint*)( param_1 + 0x48 )) goto LAB_00100a40;
      iVar6 = *(int*)param_1;
      *(undefined4*)( this + 0x74 ) = 0x4d;
      if (iVar6 != 0) goto LAB_00100948;
      iVar6 = *(int*)( param_1 + 0x38 ) * 0x17 + 0x4d;
      LAB_00100a70:*(int*)( this + 0x80 ) = iVar6;
      uVar5 = iVar6 + *(int*)( param_1 + 0x48 );
   }

   uVar7 = (ulong)uVar5;
   *(uint*)( this + 0x84 ) = uVar5;
   if (*(uint*)( param_1 + 0x58 ) != 0) {
      lVar4 = *(long*)( param_1 + 0x50 );
      lVar8 = ( ulong ) * (uint*)( param_1 + 0x58 ) * 0x10 + lVar4;
      do {
         puVar1 = (uint*)( lVar4 + 8 );
         lVar4 = lVar4 + 0x10;
         uVar7 = uVar7 + *puVar1;
      }
 while ( lVar4 != lVar8 );
   }

   if (uVar7 < 0xffff0000) {
      *(int*)( this + 0x88 ) = (int)uVar7;
      pbVar9 = param_1;
      this_00 = this;
      create_header(this, param_1, param_3, param_4, param_5, param_6, param_7);
      cVar3 = create_image_descs(this_00, pbVar9);
      if (cVar3 == '\0') {
         return '\0';
      }

      create_comp_data(this, param_1);
      fixup_crcs(this);
      return cVar3;
   }

   LAB_00100a40:basisu::error_printf("basisu_file::init: File is too large!\n");
   return '\0';
}
/* basisu::vector<basist::basis_slice_desc>::object_mover(void*, void*, unsigned int) */void basisu::vector<basist::basis_slice_desc>::object_mover(void *param_1, void *param_2, uint param_3) {
   undefined2 *puVar1;
   undefined2 *puVar2;
   if (param_3 != 0) {
      puVar1 = (undefined2*)param_1;
      do {
         /* WARNING: Load size is inaccurate */
         puVar2 = (undefined2*)( (long)puVar1 + 0x17 );
         *puVar1 = *param_2;
         *(undefined1*)( puVar1 + 1 ) = *(undefined1*)( (long)param_2 + 2 );
         *(undefined1*)( (long)puVar1 + 3 ) = *(undefined1*)( (long)param_2 + 3 );
         *(undefined1*)( puVar1 + 2 ) = *(undefined1*)( (long)param_2 + 4 );
         for (int i = 0; i < 4; i++) {
            *(undefined2*)( (long)puVar1 + ( 2*i + 5 ) ) = *(undefined2*)( (long)param_2 + ( 2*i + 5 ) );
         }

         *(undefined4*)( (long)puVar1 + 0xd ) = *(undefined4*)( (long)param_2 + 0xd );
         *(undefined4*)( (long)puVar1 + 0x11 ) = *(undefined4*)( (long)param_2 + 0x11 );
         *(undefined2*)( (long)puVar1 + 0x15 ) = *(undefined2*)( (long)param_2 + 0x15 );
         puVar1 = puVar2;
         param_2 = (undefined2*)( (long)param_2 + 0x17 );
      }
 while ( puVar2 != (undefined2*)( (ulong)param_3 * 0x17 + (long)param_1 ) );
   }

   return;
}
/* basisu::basisu_file::create_header(basisu::basisu_backend_output const&,
   basist::basis_texture_type, unsigned int, unsigned int, bool, unsigned int) */void basisu::basisu_file::_GLOBAL__sub_I_create_header(void) {
   return;
}

