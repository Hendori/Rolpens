/* pv_png::unpack_grey_1(unsigned char*, unsigned char*, int, pv_png::png_decoder*) */undefined8 pv_png::unpack_grey_1(uchar *param_1, uchar *param_2, int param_3, png_decoder *param_4) {
   uchar *puVar1;
   uchar *puVar2;
   byte *pbVar3;
   byte bVar4;
   uint uVar5;
   uchar *puVar6;
   uchar *puVar7;
   byte *pbVar8;
   uVar5 = param_3 >> 3;
   if (uVar5 != 0) {
      puVar7 = param_2 + -8;
      puVar6 = param_2;
      pbVar8 = param_1;
      do {
         bVar4 = *pbVar8;
         pbVar8 = pbVar8 + 1;
         puVar1 = puVar6;
         do {
            puVar2 = puVar1 + -1;
            puVar1[7] = ( bVar4 >> ( (int)puVar6 - (int)puVar1 & 0x1fU ) & 1 ) != 0;
            puVar1 = puVar2;
         }
 while ( puVar2 != puVar7 );
         puVar6 = puVar6 + 8;
         puVar7 = puVar7 + 8;
      }
 while ( pbVar8 != param_1 + uVar5 );
   }

   if (( param_3 & 7U ) != 0) {
      pbVar8 = param_2 + ( param_3 & 0xfff8 );
      bVar4 = param_1[(int)uVar5];
      do {
         pbVar3 = pbVar8 + 1;
         *pbVar8 = bVar4 >> 7;
         pbVar8 = pbVar3;
         bVar4 = bVar4 * '\x02';
      }
 while ( pbVar3 != param_2 + ( param_3 & 0xfff8 ) + ( param_3 & 7U ) );
   }

   return 1;
}
/* pv_png::unpack_grey_2(unsigned char*, unsigned char*, int, pv_png::png_decoder*) */undefined8 pv_png::unpack_grey_2(uchar *param_1, uchar *param_2, int param_3, png_decoder *param_4) {
   byte bVar1;
   ulong uVar2;
   byte *pbVar3;
   byte *pbVar4;
   uint uVar5;
   if (3 < param_3) {
      uVar2 = 0;
      uVar5 = param_3 - 4U >> 2;
      do {
         bVar1 = param_1[uVar2];
         *(uint*)( param_2 + uVar2 * 4 ) = ( ( ( bVar1 & 3 ) << 8 | bVar1 >> 2 & 3 ) << 8 | bVar1 >> 4 & 3 ) << 8 | ( uint )(bVar1 >> 6);
         uVar2 = uVar2 + 1;
      }
 while ( uVar2 != uVar5 + 1 );
      param_1 = param_1 + uVar2;
      param_2 = param_2 + uVar2 * 4;
      param_3 = ( param_3 - 4U ) + uVar5 * -4;
   }

   if (param_3 != 0) {
      pbVar3 = param_2;
      uVar5 = ( uint ) * param_1;
      do {
         pbVar4 = pbVar3 + 1;
         *pbVar3 = (byte)uVar5 >> 6;
         pbVar3 = pbVar4;
         uVar5 = uVar5 << 2;
      }
 while ( pbVar4 != param_2 + (uint)param_3 );
   }

   return 1;
}
/* pv_png::unpack_grey_4(unsigned char*, unsigned char*, int, pv_png::png_decoder*) */undefined8 pv_png::unpack_grey_4(uchar *param_1, uchar *param_2, int param_3, png_decoder *param_4) {
   byte bVar1;
   ulong uVar2;
   uint uVar3;
   uVar3 = param_3 >> 1;
   if (uVar3 != 0) {
      uVar2 = 0;
      do {
         bVar1 = param_1[uVar2];
         param_2[uVar2 * 2 + 1] = bVar1 & 0xf;
         param_2[uVar2 * 2] = bVar1 >> 4;
         uVar2 = uVar2 + 1;
      }
 while ( uVar2 != uVar3 );
   }

   if (( param_3 & 1U ) != 0) {
      param_2[param_3 & 0xfffe] = param_1[(int)uVar3] >> 4;
   }

   return 1;
}
/* pv_png::unpack_grey_8(unsigned char*, unsigned char*, int, pv_png::png_decoder*) */undefined8 pv_png::unpack_grey_8(uchar *param_1, uchar *param_2, int param_3, png_decoder *param_4) {
   return 0;
}
/* pv_png::unpack_grey_16(unsigned char*, unsigned char*, int, pv_png::png_decoder*) */undefined8 pv_png::unpack_grey_16(uchar *param_1, uchar *param_2, int param_3, png_decoder *param_4) {
   ulong uVar1;
   if (param_3 != 0) {
      uVar1 = 0;
      do {
         param_2[uVar1] = param_1[uVar1 * 2];
         uVar1 = uVar1 + 1;
      }
 while ( uVar1 != (uint)param_3 );
   }

   return 1;
}
/* pv_png::unpack_true_8(unsigned char*, unsigned char*, int, pv_png::png_decoder*) */undefined8 pv_png::unpack_true_8(uchar *param_1, uchar *param_2, int param_3, png_decoder *param_4) {
   uchar uVar1;
   byte bVar2;
   undefined2 uVar3;
   uint uVar4;
   uint uVar5;
   uint uVar6;
   uchar *puVar7;
   uchar *puVar8;
   if (param_4[0x408] == (png_decoder)0x0) {
      if (0 < param_3) {
         puVar8 = param_2;
         do {
            puVar7 = puVar8 + 4;
            *puVar8 = *param_1;
            puVar8[1] = param_1[1];
            uVar1 = param_1[2];
            puVar8[3] = 0xff;
            puVar8[2] = uVar1;
            puVar8 = puVar7;
            param_1 = param_1 + 3;
         }
 while ( puVar7 != param_2 + (long)param_3 * 4 );
      }

   }
 else {
      uVar4 = *(uint*)( param_4 + 0x40c );
      uVar5 = *(uint*)( param_4 + 0x410 );
      uVar6 = *(uint*)( param_4 + 0x414 );
      if (0 < param_3) {
         puVar8 = param_2;
         do {
            while (true) {
               uVar3 = *(undefined2*)param_1;
               bVar2 = param_1[2];
               *(undefined2*)puVar8 = uVar3;
               puVar8[2] = bVar2;
               if (( uVar4 == (byte)uVar3 ) && ( uVar5 == ( byte )((ushort)uVar3 >> 8) )) break;
               puVar8[3] = 0xff;
               puVar8 = puVar8 + 4;
               param_1 = param_1 + 3;
               if (param_2 + (long)param_3 * 4 == puVar8) {
                  return 1;
               }

            }
;
            puVar7 = puVar8 + 4;
            param_1 = param_1 + 3;
            puVar8[3] = -(bVar2 != uVar6);
            puVar8 = puVar7;
         }
 while ( param_2 + (long)param_3 * 4 != puVar7 );
         return 1;
      }

   }

   return 1;
}
/* pv_png::unpack_grey_alpha_8(unsigned char*, unsigned char*, int, pv_png::png_decoder*) */undefined8 pv_png::unpack_grey_alpha_8(uchar *param_1, uchar *param_2, int param_3, png_decoder *param_4) {
   uchar *puVar1;
   uchar *puVar2;
   if (param_3 != 0) {
      puVar1 = param_1;
      do {
         puVar2 = puVar1 + 2;
         *param_2 = *puVar1;
         param_2[1] = puVar1[1];
         param_2 = param_2 + 2;
         puVar1 = puVar2;
      }
 while ( puVar2 != param_1 + (ulong)(uint)param_3 * 2 );
   }

   return 1;
}
/* pv_png::unpack_grey_alpha_16(unsigned char*, unsigned char*, int, pv_png::png_decoder*) */undefined8 pv_png::unpack_grey_alpha_16(uchar *param_1, uchar *param_2, int param_3, png_decoder *param_4) {
   uchar *puVar1;
   uchar *puVar2;
   if (param_3 != 0) {
      puVar1 = param_1;
      do {
         puVar2 = puVar1 + 4;
         *param_2 = *puVar1;
         param_2[1] = puVar1[2];
         param_2 = param_2 + 2;
         puVar1 = puVar2;
      }
 while ( puVar2 != param_1 + (ulong)(uint)param_3 * 4 );
   }

   return 1;
}
/* pv_png::unpack_true_alpha_16(unsigned char*, unsigned char*, int, pv_png::png_decoder*) */undefined8 pv_png::unpack_true_alpha_16(uchar *param_1, uchar *param_2, int param_3, png_decoder *param_4) {
   uchar *puVar1;
   uchar *puVar2;
   if (param_3 != 0) {
      puVar1 = param_1;
      do {
         puVar2 = puVar1 + 8;
         *param_2 = *puVar1;
         for (int i = 0; i < 3; i++) {
            param_2[( i + 1 )] = puVar1[( 2*i + 2 )];
         }

         param_2 = param_2 + 4;
         puVar1 = puVar2;
      }
 while ( puVar2 != param_1 + (ulong)(uint)param_3 * 8 );
   }

   return 1;
}
/* pv_png::unpack_grey_16_2(unsigned char*, unsigned char*, int, pv_png::png_decoder*) */undefined8 pv_png::unpack_grey_16_2(uchar *param_1, uchar *param_2, int param_3, png_decoder *param_4) {
   uchar uVar1;
   ushort uVar2;
   ulong uVar3;
   if (param_4[0x408] == (png_decoder)0x0) {
      uVar3 = 0;
      if (param_3 != 0) {
         do {
            uVar1 = param_1[uVar3 * 2];
            param_2[uVar3 * 2 + 1] = 0xff;
            param_2[uVar3 * 2] = uVar1;
            uVar3 = uVar3 + 1;
         }
 while ( (uint)param_3 != uVar3 );
      }

   }
 else if (param_3 != 0) {
      uVar3 = 0;
      do {
         uVar2 = *(ushort*)( param_1 + uVar3 * 2 );
         param_2[uVar3 * 2] = (uchar)uVar2;
         param_2[uVar3 * 2 + 1] = -(*(uint *)(param_4 + 0x40c) != (uint)(ushort)(uVar2 << 8 | uVar2 >> 8));
         uVar3 = uVar3 + 1;
      }
 while ( uVar3 != (uint)param_3 );
      return 1;
   }

   return 1;
}
/* pv_png::unpack_true_alpha_8(unsigned char*, unsigned char*, int, pv_png::png_decoder*) */undefined8 pv_png::unpack_true_alpha_8(uchar *param_1, uchar *param_2, int param_3, png_decoder *param_4) {
   return 0;
}
/* pv_png::unpack_true_16(unsigned char*, unsigned char*, int, pv_png::png_decoder*) */undefined8 pv_png::unpack_true_16(uchar *param_1, uchar *param_2, int param_3, png_decoder *param_4) {
   byte *pbVar1;
   byte *pbVar2;
   byte *pbVar3;
   byte *pbVar4;
   byte *pbVar5;
   uchar *puVar6;
   uchar uVar7;
   byte bVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   uchar *puVar12;
   uint *puVar13;
   uint *puVar14;
   if (param_4[0x408] == (png_decoder)0x0) {
      puVar6 = param_2 + (ulong)(uint)param_3 * 4;
      if (param_3 != 0) {
         do {
            puVar12 = param_2 + 4;
            *param_2 = *param_1;
            param_2[1] = param_1[2];
            uVar7 = param_1[4];
            param_2[3] = 0xff;
            param_2[2] = uVar7;
            param_1 = param_1 + 6;
            param_2 = puVar12;
         }
 while ( puVar12 != puVar6 );
      }

   }
 else {
      iVar9 = *(int*)( param_4 + 0x40c );
      iVar10 = *(int*)( param_4 + 0x410 );
      iVar11 = *(int*)( param_4 + 0x414 );
      if (0 < param_3) {
         puVar13 = (uint*)param_2;
         do {
            pbVar1 = param_1 + 2;
            pbVar2 = param_1 + 3;
            bVar8 = *param_1;
            pbVar3 = param_1 + 1;
            pbVar4 = param_1 + 5;
            pbVar5 = param_1 + 4;
            puVar14 = puVar13 + 1;
            param_1 = param_1 + 6;
            *puVar13 = ( ( ( ( ( iVar9 == ( uint ) * pbVar3 + (uint)bVar8 * 0x100 && iVar10 == ( uint ) * pbVar1 * 0x100 + ( uint ) * pbVar2 ) && iVar11 == ( uint ) * pbVar4 + ( uint ) * pbVar5 * 0x100 ) - 1 & 0xff ) << 8 | ( uint ) * pbVar5 ) << 8 | ( uint ) * pbVar1 ) << 8 | (uint)bVar8;
            puVar13 = puVar14;
         }
 while ( puVar14 != (uint*)( param_2 + (long)param_3 * 4 ) );
         return 1;
      }

   }

   return 1;
}
/* pv_png::png_decoder::uninitialize() */void pv_png::png_decoder::uninitialize(png_decoder *this) {
   png_decoder *ppVar1;
   png_decoder *ppVar2;
   *(undefined8*)this = 0;
   ppVar1 = this + 0x338;
   do {
      ppVar2 = ppVar1 + 8;
      free(*(void**)ppVar1);
      *(undefined8*)ppVar1 = 0;
      ppVar1 = ppVar2;
   }
 while ( ppVar2 != this + 0x3b8 );
   buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
   return;
}
/* pv_png::png_decoder::terminate(int) */int pv_png::png_decoder::terminate(png_decoder *this, int param_1) {
   png_decoder *ppVar1;
   png_decoder *ppVar2;
   if (*(int*)( this + 0x19f8 ) == 0) {
      *(int*)( this + 0x19f8 ) = param_1;
   }

   *(undefined8*)this = 0;
   ppVar1 = this + 0x338;
   do {
      ppVar2 = ppVar1 + 8;
      free(*(void**)ppVar1);
      *(undefined8*)ppVar1 = 0;
      ppVar1 = ppVar2;
   }
 while ( ppVar2 != this + 0x3b8 );
   buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
   return param_1;
}
/* pv_png::png_decoder::png_malloc(unsigned int) */void *__thiscallpv_png::png_decoder::png_malloc(png_decoder *this, uint param_1) {
   void *pvVar1;
   long lVar2;
   if (param_1 == 0) {
      param_1 = 1;
   }

   pvVar1 = malloc((ulong)param_1);
   if (pvVar1 != (void*)0x0) {
      lVar2 = 0;
      do {
         if (*(long*)( this + lVar2 * 8 + 0x338 ) == 0) {
            *(void**)( this + (long)(int)lVar2 * 8 + 0x338 ) = pvVar1;
            return pvVar1;
         }

         lVar2 = lVar2 + 1;
      }
 while ( lVar2 != 0x10 );
      pvVar1 = (void*)0x0;
   }

   return pvVar1;
}
/* pv_png::png_decoder::png_calloc(unsigned int) */void *__thiscallpv_png::png_decoder::png_calloc(png_decoder *this, uint param_1) {
   void *pvVar1;
   long lVar2;
   size_t __size;
   __size = 1;
   if (param_1 != 0) {
      __size = (ulong)param_1;
   }

   pvVar1 = malloc(__size);
   if (pvVar1 != (void*)0x0) {
      lVar2 = 0;
      do {
         if (*(long*)( this + lVar2 * 8 + 0x338 ) == 0) {
            *(void**)( this + (long)(int)lVar2 * 8 + 0x338 ) = pvVar1;
            pvVar1 = memset(pvVar1, 0, (ulong)param_1);
            return pvVar1;
         }

         lVar2 = lVar2 + 1;
      }
 while ( lVar2 != 0x10 );
      pvVar1 = (void*)0x0;
   }

   return pvVar1;
}
/* pv_png::png_decoder::block_read(void*, unsigned int) */undefined8 pv_png::png_decoder::block_read(png_decoder *this, void *param_1, uint param_2) {
   ulong uVar1;
   undefined8 uVar2;
   png_decoder *ppVar3;
   png_decoder *ppVar4;
   uVar1 = ( **(code**)( **(long**)this + 0x38 ) )(*(long**)this, param_1, (ulong)param_2);
   uVar2 = 0;
   if (param_2 != uVar1) {
      if (*(int*)( this + 0x19f8 ) == 0) {
         *(undefined4*)( this + 0x19f8 ) = 0xfffffff5;
      }

      *(undefined8*)this = 0;
      ppVar3 = this + 0x338;
      do {
         ppVar4 = ppVar3 + 8;
         free(*(void**)ppVar3);
         *(undefined8*)ppVar3 = 0;
         ppVar3 = ppVar4;
      }
 while ( ppVar4 != this + 0x3b8 );
      buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
      uVar2 = 0xfffffff5;
   }

   return uVar2;
}
/* pv_png::png_decoder::block_read_dword() */ulong pv_png::png_decoder::block_read_dword(png_decoder *this) {
   long lVar1;
   ulong uVar2;
   png_decoder *ppVar3;
   png_decoder *ppVar4;
   long in_FS_OFFSET;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = ( **(code**)( **(long**)this + 0x38 ) )(*(long**)this, &local_24, 4);
   if (lVar1 == 4) {
      uVar2 = ( ulong )(local_24 >> 0x18 | ( local_24 & 0xff0000 ) >> 8 | ( local_24 & 0xff00 ) << 8 | local_24 << 0x18);
   }
 else {
      if (*(int*)( this + 0x19f8 ) == 0) {
         *(undefined4*)( this + 0x19f8 ) = 0xfffffff5;
      }

      *(undefined8*)this = 0;
      ppVar3 = this + 0x338;
      do {
         ppVar4 = ppVar3 + 8;
         free(*(void**)ppVar3);
         *(undefined8*)ppVar3 = 0;
         ppVar3 = ppVar4;
      }
 while ( ppVar4 != this + 0x3b8 );
      buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
      uVar2 = 0xfffffffffffffff5;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* pv_png::png_decoder::fetch_next_chunk_data(unsigned char*, int) [clone .part.0] */ulong pv_png::png_decoder::fetch_next_chunk_data(png_decoder *this, uchar *param_1, int param_2) {
   uint uVar1;
   undefined4 uVar2;
   ulong uVar3;
   png_decoder *ppVar4;
   png_decoder *ppVar5;
   ulong uVar6;
   uVar1 = *(uint*)( this + 0x328 );
   if (param_2 <= (int)*(uint*)( this + 0x328 )) {
      uVar1 = param_2;
   }

   uVar6 = (ulong)uVar1;
   uVar3 = ( **(code**)( **(long**)this + 0x38 ) )(*(long**)this, param_1, uVar6);
   if (uVar6 == uVar3) {
      uVar2 = buminiz::mz_crc32(( ulong ) * (uint*)( this + 0x32c ), param_1, (long)(int)uVar1);
      ppVar4 = this + 0x328;
      *(uint*)ppVar4 = *(int*)ppVar4 - uVar1;
      *(undefined4*)( this + 0x32c ) = uVar2;
      if (*(int*)ppVar4 == 0) {
         uVar3 = block_read_dword(this);
         if ((long)uVar3 < 0) {
            uVar6 = uVar3 & 0xffffffff;
         }
 else {
            if (*(int*)( this + 0x32c ) == (int)uVar3) {
               this[800] = (png_decoder)0x0;
               return uVar6;
            }

            if (*(int*)( this + 0x19f8 ) == 0) {
               *(undefined4*)( this + 0x19f8 ) = 0xffffcd38;
            }

            *(undefined8*)this = 0;
            ppVar4 = this + 0x338;
            do {
               ppVar5 = ppVar4 + 8;
               free(*(void**)ppVar4);
               *(undefined8*)ppVar4 = 0;
               ppVar4 = ppVar5;
            }
 while ( ppVar5 != this + 0x3b8 );
            uVar6 = 0xffffcd38;
            buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
         }

      }

   }
 else {
      if (*(int*)( this + 0x19f8 ) == 0) {
         *(undefined4*)( this + 0x19f8 ) = 0xfffffff5;
      }

      *(undefined8*)this = 0;
      ppVar4 = this + 0x338;
      do {
         ppVar5 = ppVar4 + 8;
         free(*(void**)ppVar4);
         *(undefined8*)ppVar4 = 0;
         ppVar4 = ppVar5;
      }
 while ( ppVar5 != this + 0x3b8 );
      uVar6 = 0xfffffff5;
      buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
   }

   return uVar6;
}
/* pv_png::png_decoder::fetch_next_chunk_data(unsigned char*, int) */undefined8 pv_png::png_decoder::fetch_next_chunk_data(png_decoder *this, uchar *param_1, int param_2) {
   undefined8 uVar1;
   if (this[800] == (png_decoder)0x0) {
      return 0;
   }

   uVar1 = fetch_next_chunk_data(this, param_1, param_2);
   return uVar1;
}
/* pv_png::png_decoder::fetch_next_chunk_byte() */ulong pv_png::png_decoder::fetch_next_chunk_byte(png_decoder *this) {
   ulong uVar1;
   png_decoder *ppVar2;
   png_decoder *ppVar3;
   long in_FS_OFFSET;
   byte local_21;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[800] != (png_decoder)0x0) {
      uVar1 = fetch_next_chunk_data(this, &local_21, 1);
      if ((int)uVar1 < 0) goto LAB_00100a0d;
      if ((int)uVar1 == 1) {
         uVar1 = (ulong)local_21;
         goto LAB_00100a0d;
      }

   }

   if (*(int*)( this + 0x19f8 ) == 0) {
      *(undefined4*)( this + 0x19f8 ) = 0xffffcd2f;
   }

   *(undefined8*)this = 0;
   ppVar2 = this + 0x338;
   do {
      ppVar3 = ppVar2 + 8;
      free(*(void**)ppVar2);
      *(undefined8*)ppVar2 = 0;
      ppVar2 = ppVar3;
   }
 while ( ppVar3 != this + 0x3b8 );
   buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
   uVar1 = 0xffffcd2f;
   LAB_00100a0d:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* pv_png::png_decoder::fetch_next_chunk_word() */ulong pv_png::png_decoder::fetch_next_chunk_word(png_decoder *this) {
   ulong uVar1;
   png_decoder *ppVar2;
   png_decoder *ppVar3;
   long in_FS_OFFSET;
   ushort local_22;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[800] != (png_decoder)0x0) {
      uVar1 = fetch_next_chunk_data(this, (uchar*)&local_22, 2);
      if ((int)uVar1 < 0) goto LAB_00100af4;
      if ((int)uVar1 == 2) {
         uVar1 = ( ulong )(ushort)(local_22 << 8 | local_22 >> 8);
         goto LAB_00100af4;
      }

   }

   if (*(int*)( this + 0x19f8 ) == 0) {
      *(undefined4*)( this + 0x19f8 ) = 0xffffcd2f;
   }

   *(undefined8*)this = 0;
   ppVar2 = this + 0x338;
   do {
      ppVar3 = ppVar2 + 8;
      free(*(void**)ppVar2);
      *(undefined8*)ppVar2 = 0;
      ppVar2 = ppVar3;
   }
 while ( ppVar3 != this + 0x3b8 );
   buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
   uVar1 = 0xffffcd2f;
   LAB_00100af4:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* pv_png::png_decoder::fetch_next_chunk_dword() */ulong pv_png::png_decoder::fetch_next_chunk_dword(png_decoder *this) {
   int iVar1;
   ulong uVar2;
   png_decoder *ppVar3;
   png_decoder *ppVar4;
   long in_FS_OFFSET;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[800] == (png_decoder)0x0) {
      LAB_00100b5c:if (*(int*)( this + 0x19f8 ) == 0) {
         *(undefined4*)( this + 0x19f8 ) = 0xffffcd2f;
      }

      *(undefined8*)this = 0;
      ppVar3 = this + 0x338;
      do {
         ppVar4 = ppVar3 + 8;
         free(*(void**)ppVar3);
         *(undefined8*)ppVar3 = 0;
         ppVar3 = ppVar4;
      }
 while ( ppVar4 != this + 0x3b8 );
      buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
   }
 else {
      iVar1 = fetch_next_chunk_data(this, (uchar*)&local_24, 4);
      if (iVar1 < 0) {
         uVar2 = (ulong)iVar1;
         goto LAB_00100bae;
      }

      if (iVar1 != 4) goto LAB_00100b5c;
   }

   uVar2 = ( ulong )(local_24 >> 0x18 | ( local_24 & 0xff0000 ) >> 8 | ( local_24 & 0xff00 ) << 8 | local_24 << 0x18);
   LAB_00100bae:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* pv_png::png_decoder::fetch_next_chunk_init() */ulong pv_png::png_decoder::fetch_next_chunk_init(png_decoder *this) {
   uint uVar1;
   ulong uVar2;
   while (this[800] != (png_decoder)0x0) {
      uVar2 = fetch_next_chunk_data(this, (uchar*)( this + 0x19fc ), 0x600);
      if ((int)uVar2 != 0) {
         return uVar2;
      }

   }
;
   uVar2 = block_read_dword(this);
   if ((long)uVar2 < 0) {
      return uVar2;
   }

   *(int*)( this + 0x324 ) = (int)uVar2;
   this[800] = (png_decoder)0x1;
   *(int*)( this + 0x328 ) = (int)uVar2 + 4;
   *(undefined4*)( this + 0x32c ) = 0;
   uVar1 = fetch_next_chunk_data(this, (uchar*)( this + 0x330 ), 4);
   if ((int)uVar1 < 1) {
      return (ulong)uVar1;
   }

   return 0;
}
/* pv_png::png_decoder::unchunk_data(unsigned char*, unsigned int, unsigned int*) */undefined8 pv_png::png_decoder::unchunk_data(png_decoder *this, uchar *param_1, uint param_2, uint *param_3) {
   undefined8 uVar1;
   uint uVar2;
   if (( param_2 == 0 ) || ( uVar2 = 0 ),this[0x334] != (png_decoder)0x0) {
      *param_3 = 0;
      return 1;
   }

   do {
      if (this[800] == (png_decoder)0x0) {
         uVar1 = fetch_next_chunk_init(this);
         if ((int)uVar1 < 0) {
            return uVar1;
         }

         if (*(int*)( this + 0x330 ) != 0x54414449) {
            *param_3 = uVar2;
            this[0x334] = (png_decoder)0x1;
            return 1;
         }

         if (this[800] != (png_decoder)0x0) goto LAB_00100d18;
      }
 else {
         LAB_00100d18:uVar1 = fetch_next_chunk_data(this, param_1 + uVar2, param_2 - uVar2);
         if ((int)uVar1 < 0) {
            return uVar1;
         }

         uVar2 = uVar2 + (int)uVar1;
      }

      if (param_2 == uVar2) {
         *param_3 = param_2;
         return 0;
      }

   }
 while ( true );
}
/* pv_png::png_decoder::unpredict_sub(unsigned char*, unsigned char*, unsigned int, int) */void pv_png::png_decoder::unpredict_sub(png_decoder *this, uchar *param_1, uchar *param_2, uint param_3, int param_4) {
   uchar *puVar1;
   uchar *puVar2;
   if (param_4 != param_3) {
      puVar2 = param_2 + param_4;
      puVar1 = puVar2 + ( param_3 - param_4 );
      do {
         *puVar2 = *puVar2 + puVar2[-(long)param_4];
         puVar2 = puVar2 + 1;
      }
 while ( puVar1 != puVar2 );
   }

   return;
}
/* pv_png::png_decoder::unpredict_up(unsigned char*, unsigned char*, unsigned int, int) */void pv_png::png_decoder::unpredict_up(uchar *param_1, uchar *param_2, uint param_3, int param_4) {
   char *pcVar1;
   ulong uVar2;
   undefined4 in_register_00000014;
   bool bVar3;
   if (param_4 != 0) {
      uVar2 = 0;
      do {
         pcVar1 = (char*)( CONCAT44(in_register_00000014, param_3) + uVar2 );
         *pcVar1 = *pcVar1 + param_2[uVar2];
         bVar3 = param_4 - 1 != uVar2;
         uVar2 = uVar2 + 1;
      }
 while ( bVar3 );
   }

   return;
}
/* pv_png::png_decoder::unpredict_average(unsigned char*, unsigned char*, unsigned int, int) */void pv_png::png_decoder::unpredict_average(png_decoder *this, uchar *param_1, uchar *param_2, uint param_3, int param_4) {
   byte bVar1;
   byte *pbVar2;
   uchar *puVar3;
   if (0 < param_4) {
      pbVar2 = param_1;
      puVar3 = param_2;
      do {
         bVar1 = *pbVar2;
         pbVar2 = pbVar2 + 1;
         *puVar3 = *puVar3 + ( bVar1 >> 1 );
         puVar3 = puVar3 + 1;
      }
 while ( param_1 + param_4 != pbVar2 );
      param_1 = param_1 + (uint)param_4;
      param_2 = param_2 + (uint)param_4;
   }

   if (param_4 != param_3) {
      pbVar2 = param_1 + ( param_3 - param_4 );
      do {
         bVar1 = *param_1;
         param_1 = param_1 + 1;
         *param_2 = *param_2 + (char)( (int)( (uint)bVar1 + (uint)param_2[-(long)param_4] ) >> 1 );
         param_2 = param_2 + 1;
      }
 while ( pbVar2 != param_1 );
   }

   return;
}
/* pv_png::png_decoder::unpredict_paeth(unsigned char*, unsigned char*, unsigned int, int) */void pv_png::png_decoder::unpredict_paeth(png_decoder *this, uchar *param_1, uchar *param_2, uint param_3, int param_4) {
   byte bVar1;
   byte bVar2;
   byte bVar3;
   int iVar4;
   int iVar5;
   uchar *puVar6;
   int iVar8;
   uchar *puVar9;
   int iVar10;
   uchar *puVar7;
   if (0 < param_4) {
      puVar7 = param_1;
      puVar9 = param_2;
      do {
         puVar6 = puVar7 + 1;
         *puVar9 = *puVar9 + *puVar7;
         puVar7 = puVar6;
         puVar9 = puVar9 + 1;
      }
 while ( puVar6 != param_1 + param_4 );
      param_1 = param_1 + (uint)param_4;
      param_2 = param_2 + (uint)param_4;
   }

   if (param_4 != param_3) {
      puVar7 = param_2;
      do {
         while (true) {
            bVar1 = puVar7[-(long)param_4];
            bVar2 = *param_1;
            bVar3 = param_1[-(long)param_4];
            iVar5 = ( (uint)bVar2 + (uint)bVar1 ) - (uint)bVar3;
            iVar8 = iVar5 - (uint)bVar2;
            iVar4 = -iVar8;
            if (0 < iVar8) {
               iVar4 = iVar8;
            }

            iVar10 = iVar5 - (uint)bVar3;
            iVar8 = -iVar10;
            if (0 < iVar10) {
               iVar8 = iVar10;
            }

            iVar5 = iVar5 - (uint)bVar1;
            puVar9 = puVar7 + 1;
            if (iVar5 < 1) {
               iVar5 = -iVar5;
            }

            iVar10 = iVar8;
            if (iVar4 <= iVar8) {
               iVar10 = iVar4;
            }

            if (iVar10 < iVar5) break;
            param_1 = param_1 + 1;
            *puVar7 = *puVar7 + bVar1;
            puVar7 = puVar9;
            if (puVar9 == param_2 + ( param_3 - param_4 )) {
               return;
            }

         }
;
         if (iVar4 <= iVar8) {
            bVar3 = bVar2;
         }

         param_1 = param_1 + 1;
         *puVar7 = *puVar7 + bVar3;
         puVar7 = puVar9;
      }
 while ( puVar9 != param_2 + ( param_3 - param_4 ) );
      return;
   }

   return;
}
/* pv_png::png_decoder::adam7_pass_size(int, int, int) */undefined1[16];pv_png::png_decoder::adam7_pass_size (png_decoder *this,int param_1,int param_2,int param_3) {
   int iVar1;
   ulong uVar2;
   undefined4 in_register_00000014;
   ulong uVar3;
   undefined1 auVar4[16];
   uVar3 = CONCAT44(in_register_00000014, param_2);
   uVar2 = 0;
   if (param_2 < param_1) {
      iVar1 = ( param_1 + -1 ) - param_2;
      uVar3 = (long)iVar1 % (long)param_3 & 0xffffffff;
      uVar2 = ( ulong )(iVar1 / param_3 + 1);
   }

   auVar4._8_8_ = uVar3;
   auVar4._0_8_ = uVar2;
   return auVar4;
}
/* pv_png::png_decoder::decompress_line(unsigned int*) */undefined8 pv_png::png_decoder::decompress_line(png_decoder *this, uint *param_1) {
   undefined8 uVar1;
   uint uVar2;
   ulong uVar3;
   uint uVar4;
   ulong uVar5;
   png_decoder *ppVar6;
   png_decoder *ppVar7;
   uint uVar8;
   int iVar9;
   int iVar10;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   uVar5 = ( ulong ) * (uint*)( this + 0x1880 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)( this + 0x1888 ) = 0;
   do {
      if ((int)uVar5 == 0x1000) {
         uVar1 = unchunk_data(this, (uchar*)( this + 0x880 ), 0x1000, &local_44);
         if ((int)uVar1 < 0) {
            LAB_0010108e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return uVar1;
         }

         *(int*)( this + 0x188c ) = (int)uVar1;
         uVar5 = 0;
         *(undefined4*)( this + 0x1880 ) = 0;
         *(uint*)( this + 0x1884 ) = local_44;
         uVar2 = local_44;
      }
 else {
         uVar2 = *(uint*)( this + 0x1884 );
      }

      uVar8 = *(uint*)( this + 0x3c0 );
      uVar3 = ( ulong ) * (uint*)( this + 0x1888 );
      do {
         iVar10 = uVar2 - (int)uVar5;
         iVar9 = uVar8 - (int)uVar3;
         *(png_decoder**)( this + 0x810 ) = this + 0x880 + uVar5;
         *(int*)( this + 0x818 ) = iVar10;
         *(ulong*)( this + 0x828 ) = uVar3 + *(long*)( this + 0x3e0 );
         *(int*)( this + 0x830 ) = iVar9;
         uVar1 = buminiz::mz_inflate2((mz_stream_s*)( this + 0x810 ), 0, 1);
         uVar4 = ( iVar10 + *(int*)( this + 0x1880 ) ) - *(int*)( this + 0x818 );
         uVar5 = (ulong)uVar4;
         uVar2 = ( iVar9 + *(int*)( this + 0x1888 ) ) - *(int*)( this + 0x830 );
         uVar3 = (ulong)uVar2;
         *(uint*)( this + 0x1880 ) = uVar4;
         *(uint*)( this + 0x1888 ) = uVar2;
         if ((int)uVar1 != 0) {
            if ((int)uVar1 != 1) {
               if (*(int*)( this + 0x19f8 ) == 0) {
                  *(undefined4*)( this + 0x19f8 ) = 0xffffcd2a;
               }

               *(undefined8*)this = 0;
               ppVar6 = this + 0x338;
               do {
                  ppVar7 = ppVar6 + 8;
                  free(*(void**)ppVar6);
                  *(undefined8*)ppVar6 = 0;
                  ppVar6 = ppVar7;
               }
 while ( this + 0x3b8 != ppVar7 );
               buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
               uVar1 = 0xffffcd2a;
               goto LAB_0010108e;
            }

            LAB_00101085:if (param_1 != (uint*)0x0) {
               *param_1 = uVar2;
            }

            goto LAB_0010108e;
         }

         uVar8 = *(uint*)( this + 0x3c0 );
         if (uVar2 == uVar8) goto LAB_00101085;
         uVar2 = *(uint*)( this + 0x1884 );
      }
 while ( ( uVar4 != uVar2 ) || ( *(int*)( this + 0x188c ) != 0 ) );
   }
 while ( true );
}
/* pv_png::png_decoder::find_iend_chunk() */undefined8 pv_png::png_decoder::find_iend_chunk(png_decoder *this) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      if (this[0x334] != (png_decoder)0x0) goto LAB_001011bc;
      uVar1 = unchunk_data(this, (uchar*)( this + 0x19fc ), 0x600, &local_24);
   }
 while ( -1 < (int)uVar1 );
   goto LAB_001011ca;
   while (uVar1 = fetch_next_chunk_init(this),-1 < (int)uVar1) {
      LAB_001011bc:if (*(int*)( this + 0x330 ) == 0x444e4549) {
         uVar1 = 0;
         break;
      }

   }
;
   LAB_001011ca:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
/* pv_png::png_decoder::png_decode(void**, unsigned int*) */int pv_png::png_decoder::png_decode(png_decoder *this, void **param_1, uint *param_2) {
   uchar uVar1;
   uchar uVar2;
   uchar uVar3;
   int iVar4;
   int iVar5;
   uint uVar6;
   undefined1 *puVar7;
   ulong uVar8;
   ulong uVar9;
   uchar *puVar10;
   int iVar11;
   uint uVar12;
   size_t sVar13;
   png_decoder *ppVar14;
   png_decoder *ppVar15;
   int iVar16;
   void *__dest;
   uchar *puVar17;
   uchar *puVar18;
   long in_FS_OFFSET;
   bool bVar19;
   uint local_44;
   long local_40;
   iVar11 = *(int*)( this + 0x1994 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x19f0 ) != 0) {
      if (iVar11 == 0) {
         LAB_00101409:iVar11 = -5;
         goto LAB_00101260;
      }

      uVar12 = *(uint*)( this + 0x3c8 );
      *param_1 = (void*)( ( ulong )(( *(int*)( this + 0x314 ) - iVar11 ) * uVar12) + *(long*)( this + 0x19d8 ) );
      *param_2 = uVar12;
      *(int*)( this + 0x1994 ) = *(int*)( this + 0x1994 ) + -1;
      goto LAB_0010125a;
   }

   if (iVar11 == 0) {
      if (this[0x31c] == (png_decoder)0x0) {
         LAB_001013f6:iVar11 = find_iend_chunk(this);
         if (iVar11 < 0) goto LAB_00101260;
         goto LAB_00101409;
      }

      uVar9 = ( ulong ) * (uint*)( this + 0x1998 );
      do {
         iVar11 = (int)uVar9 + 1;
         uVar8 = (long)iVar11;
         while (true) {
            if (iVar11 == 7) {
               *(undefined4*)( this + 0x1998 ) = 7;
               goto LAB_001013f6;
            }

            iVar11 = *(int*)( this + uVar8 * 4 + 0x19bc );
            *(int*)( this + 0x1994 ) = iVar11;
            if (iVar11 != 0) break;
            iVar11 = (int)( uVar8 + 1 );
            uVar8 = uVar8 + 1;
         }
;
         uVar9 = uVar8 & 0xffffffff;
         iVar11 = *(int*)( this + (long)(int)uVar8 * 4 + 0x19a0 );
         *(int*)( this + 0x1990 ) = iVar11;
      }
 while ( iVar11 == 0 );
      *(int*)( this + 0x1998 ) = (int)uVar8;
      switch (uVar9) {
         case 0:
         case 1:
         case 3:
         case 5:
      *(undefined4 *)(this + 0x199c) = 0;
      break;
         case 2:
      *(undefined4 *)(this + 0x199c) = 4;
      break;
         case 4:
      *(undefined4 *)(this + 0x199c) = 2;
      break;
         case 6:
      *(undefined4 *)(this + 0x199c) = 1;
      }

      switch (this[0x319]) {
         case (png_decoder)0x0:
         case (png_decoder)0x3:
      uVar12 = (uint)(byte)this[0x318] * iVar11 + 7 >> 3;
      sVar13 = (size_t)uVar12;
      *(uint *)(this + 0x3c4) = uVar12;
      break;
         default:
      sVar13 = (size_t)*(uint *)(this + 0x3c4);
      break;
         case (png_decoder)0x2:
         case (png_decoder)0x4:
         case (png_decoder)0x6:
      sVar13 = (size_t)(uint)(iVar11 * *(int *)(this + 0x3b8));
      *(int *)(this + 0x3c4) = iVar11 * *(int *)(this + 0x3b8);
      }

      *(int*)( this + 0x3c0 ) = (int)sVar13 + 1;
      memset(*(void**)( this + 0x3d8 ), 0, sVar13);
   }

   iVar11 = decompress_line(this, &local_44);
   if (iVar11 < 0) {
      if (*(int*)( this + 0x19f8 ) == 0) {
         *(int*)( this + 0x19f8 ) = iVar11;
      }

      *(undefined8*)this = 0;
      ppVar15 = this + 0x338;
      do {
         ppVar14 = ppVar15 + 8;
         free(*(void**)ppVar15);
         *(undefined8*)ppVar15 = 0;
         ppVar15 = ppVar14;
      }
 while ( this + 0x3b8 != ppVar14 );
      goto LAB_0010145a;
   }

   if (iVar11 != 0) {
      if (this[0x31c] == (png_decoder)0x0) {
         if (*(int*)( this + 0x1994 ) == 1) goto LAB_00101470;
         if (*(int*)( this + 0x19f8 ) == 0) {
            *(undefined4*)( this + 0x19f8 ) = 0xffffcd27;
         }

         *(undefined8*)this = 0;
         ppVar15 = this + 0x338;
         do {
            ppVar14 = ppVar15 + 8;
            free(*(void**)ppVar15);
            *(undefined8*)ppVar15 = 0;
            ppVar15 = ppVar14;
         }
 while ( this + 0x3b8 != ppVar14 );
      }
 else {
         if (( *(int*)( this + 0x1994 ) == 1 ) || ( *(int*)( this + 0x1998 ) == 6 )) goto LAB_00101470;
         if (*(int*)( this + 0x19f8 ) == 0) {
            *(undefined4*)( this + 0x19f8 ) = 0xffffcd27;
         }

         *(undefined8*)this = 0;
         ppVar15 = this + 0x338;
         do {
            ppVar14 = ppVar15 + 8;
            free(*(void**)ppVar15);
            *(undefined8*)ppVar15 = 0;
            ppVar15 = ppVar14;
         }
 while ( ppVar14 != this + 0x3b8 );
      }

      LAB_001013c3:iVar11 = -0x32d9;
      buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
      goto LAB_00101260;
   }

   LAB_00101470:if (*(uint*)( this + 0x3c0 ) != local_44) {
      if (*(int*)( this + 0x19f8 ) == 0) {
         *(undefined4*)( this + 0x19f8 ) = 0xffffcd27;
      }

      *(undefined8*)this = 0;
      ppVar15 = this + 0x338;
      do {
         ppVar14 = ppVar15 + 8;
         free(*(void**)ppVar15);
         *(undefined8*)ppVar15 = 0;
         ppVar15 = ppVar14;
      }
 while ( this + 0x3b8 != ppVar14 );
      goto LAB_001013c3;
   }

   puVar7 = *(undefined1**)( this + 0x3e0 );
   puVar17 = puVar7 + 1;
   puVar10 = puVar17;
   switch (*puVar7) {
      case 0:
    uVar12 = *(uint *)(this + 0x3c4);
    goto LAB_001016b6;
      case 1:
    uVar6 = *(uint *)(this + 0x3b8);
    uVar12 = *(uint *)(this + 0x3c4);
    if (uVar6 != uVar12) {
      puVar10 = puVar17 + (int)uVar6;
      puVar18 = puVar10 + (uVar12 - uVar6);
      do {
        *puVar10 = *puVar10 + puVar10[-(long)(int)uVar6];
        puVar10 = puVar10 + 1;
      } while (puVar18 != puVar10);
      goto LAB_001016e7;
    }
LAB_001016b6:
    sVar13 = (size_t)uVar12;
    __dest = *(void **)(this + 0x3d8);
    break;
      case 2:
    uVar12 = *(uint *)(this + 0x3c4);
    sVar13 = (size_t)uVar12;
    __dest = *(void **)(this + 0x3d8);
    if (uVar12 != 0) {
      uVar9 = 0;
      do {
        puVar7[uVar9 + 1] = puVar7[uVar9 + 1] + *(char *)((long)__dest + uVar9);
        bVar19 = uVar12 - 1 != uVar9;
        uVar9 = uVar9 + 1;
      } while (bVar19);
      goto LAB_001016e7;
    }
    break;
      case 3:
    unpredict_average(this,*(uchar **)(this + 0x3d8),puVar17,*(uint *)(this + 0x3c4),
                      *(int *)(this + 0x3b8));
    sVar13 = (size_t)*(uint *)(this + 0x3c4);
    __dest = *(void **)(this + 0x3d8);
    puVar10 = (uchar *)(*(long *)(this + 0x3e0) + 1);
    break;
      case 4:
    unpredict_paeth(this,*(uchar **)(this + 0x3d8),puVar17,*(uint *)(this + 0x3c4),
                    *(int *)(this + 0x3b8));
LAB_001016e7:
    sVar13 = (size_t)*(uint *)(this + 0x3c4);
    __dest = *(void **)(this + 0x3d8);
    puVar10 = (uchar *)(*(long *)(this + 0x3e0) + 1);
    break;
      default:
    if (*(int *)(this + 0x19f8) == 0) {
      *(undefined4 *)(this + 0x19f8) = 0xffffcd28;
    }
    *(undefined8 *)this = 0;
    ppVar15 = this + 0x338;
    do {
      ppVar14 = ppVar15 + 8;
      free(*(void **)ppVar15);
      *(undefined8 *)ppVar15 = 0;
      ppVar15 = ppVar14;
    } while (this + 0x3b8 != ppVar14);
    iVar11 = -0x32d8;
    buminiz::mz_inflateEnd((mz_stream_s *)(this + 0x810));
    goto LAB_00101260;
   }

   memmove(__dest, puVar10, sVar13);
   if (( *(code**)( this + 0x3d0 ) != (code*)0x0 ) && ( iVar11 = ( **(code**)( this + 0x3d0 ) )(*(long*)( this + 0x3e0 ) + 1, *(undefined8*)( this + 1000 ), *(undefined4*)( this + 0x1990 ), this) ),iVar11 != 0) {
      puVar17 = *(uchar**)( this + 1000 );
   }

   if (this[0x31c] == (png_decoder)0x0) {
      uVar12 = *(uint*)( this + 0x3c8 );
      *param_1 = puVar17;
      *param_2 = uVar12;
      ppVar15 = this + 0x1994;
      *(int*)ppVar15 = *(int*)ppVar15 + -1;
      if (*(int*)ppVar15 == 0) {
         iVar11 = decompress_line(this, &local_44);
         if (iVar11 < 0) {
            if (*(int*)( this + 0x19f8 ) == 0) {
               *(int*)( this + 0x19f8 ) = iVar11;
            }

            *(undefined8*)this = 0;
            ppVar15 = this + 0x338;
            do {
               ppVar14 = ppVar15 + 8;
               free(*(void**)ppVar15);
               *(undefined8*)ppVar15 = 0;
               ppVar15 = ppVar14;
            }
 while ( this + 0x3b8 != ppVar14 );
            LAB_0010145a:buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
            goto LAB_00101260;
         }

         LAB_0010163d:if (( iVar11 == 0 ) || ( local_44 != 0 )) {
            if (*(int*)( this + 0x19f8 ) == 0) {
               *(undefined4*)( this + 0x19f8 ) = 0xffffcd26;
            }

            iVar11 = -0x32da;
            uninitialize(this);
            goto LAB_00101260;
         }

      }

   }
 else {
      uVar12 = *(uint*)( this + 0x1998 );
      iVar16 = 0;
      iVar11 = 0;
      if (uVar12 < 7) {
         iVar11 = *(int*)( CSWTCH_240 + (ulong)uVar12 * 4 );
         iVar16 = *(int*)( CSWTCH_241 + (ulong)uVar12 * 4 );
      }

      iVar4 = *(int*)( this + 0x3bc );
      iVar5 = *(int*)( this + 0x199c );
      if (iVar4 == 1) {
         uVar6 = *(uint*)( this + 0x1990 );
         if (0 < (int)uVar6) {
            puVar10 = puVar17;
            do {
               puVar18 = puVar10 + 1;
               uVar12 = *(int*)( this + 0x3c8 ) * iVar5 + iVar11;
               iVar11 = iVar11 + iVar16;
               *(uchar*)( *(long*)( this + 0x19d8 ) + (ulong)uVar12 ) = *puVar10;
               puVar10 = puVar18;
            }
 while ( puVar17 + uVar6 != puVar18 );
            goto LAB_00101952;
         }

      }
 else if (iVar4 == 2) {
         uVar6 = *(uint*)( this + 0x1990 );
         if (0 < (int)uVar6) {
            iVar11 = iVar11 * 2;
            puVar10 = puVar17;
            do {
               puVar18 = puVar10 + 2;
               uVar1 = puVar10[1];
               uVar12 = *(int*)( this + 0x3c8 ) * iVar5 + iVar11;
               iVar11 = iVar11 + iVar16 * 2;
               *(uchar*)( *(long*)( this + 0x19d8 ) + (ulong)uVar12 ) = *puVar10;
               *(uchar*)( *(long*)( this + 0x19d8 ) + ( ulong )(uVar12 + 1) ) = uVar1;
               puVar10 = puVar18;
            }
 while ( puVar18 != puVar17 + (ulong)uVar6 * 2 );
            goto LAB_00101952;
         }

      }
 else if (iVar4 == 3) {
         uVar6 = *(uint*)( this + 0x1990 );
         if (0 < (int)uVar6) {
            iVar11 = iVar11 * 3;
            puVar10 = puVar17;
            do {
               puVar18 = puVar10 + 3;
               uVar1 = puVar10[2];
               uVar2 = puVar10[1];
               uVar12 = *(int*)( this + 0x3c8 ) * iVar5 + iVar11;
               iVar11 = iVar11 + iVar16 * 3;
               *(uchar*)( *(long*)( this + 0x19d8 ) + (ulong)uVar12 ) = *puVar10;
               *(uchar*)( *(long*)( this + 0x19d8 ) + ( ulong )(uVar12 + 1) ) = uVar2;
               *(uchar*)( *(long*)( this + 0x19d8 ) + ( ulong )(uVar12 + 2) ) = uVar1;
               puVar10 = puVar18;
            }
 while ( puVar18 != puVar17 + (ulong)uVar6 * 3 );
            goto LAB_00101952;
         }

      }
 else if (( iVar4 == 4 ) && ( uVar6 = *(uint*)( this + 0x1990 ) ),0 < (int)uVar6) {
         iVar11 = iVar11 << 2;
         puVar10 = puVar17;
         do {
            puVar18 = puVar10 + 4;
            uVar1 = puVar10[3];
            uVar2 = puVar10[2];
            uVar3 = puVar10[1];
            uVar12 = *(int*)( this + 0x3c8 ) * iVar5 + iVar11;
            iVar11 = iVar11 + iVar16 * 4;
            *(uchar*)( *(long*)( this + 0x19d8 ) + (ulong)uVar12 ) = *puVar10;
            *(uchar*)( *(long*)( this + 0x19d8 ) + ( ulong )(uVar12 + 1) ) = uVar3;
            *(uchar*)( *(long*)( this + 0x19d8 ) + ( ulong )(uVar12 + 2) ) = uVar2;
            *(uchar*)( *(long*)( this + 0x19d8 ) + ( ulong )(uVar12 + 3) ) = uVar1;
            puVar10 = puVar18;
         }
 while ( puVar17 + (ulong)uVar6 * 4 != puVar18 );
         LAB_00101952:uVar12 = *(uint*)( this + 0x1998 );
      }

      iVar11 = *(int*)( this + 0x1994 ) + -1;
      if ((int)uVar12 < 5) {
         if ((int)uVar12 < 3) {
            if (uVar12 < 3) {
               *(int*)( this + 0x199c ) = *(int*)( this + 0x199c ) + 8;
            }

            LAB_0010181c:*(int*)( this + 0x1994 ) = iVar11;
         }
 else {
            *(int*)( this + 0x199c ) = *(int*)( this + 0x199c ) + 4;
            *(int*)( this + 0x1994 ) = iVar11;
         }

      }
 else {
         if (1 < uVar12 - 5) goto LAB_0010181c;
         *(int*)( this + 0x199c ) = *(int*)( this + 0x199c ) + 2;
         *(int*)( this + 0x1994 ) = iVar11;
         if (( uVar12 == 6 ) && ( iVar11 == 0 )) {
            iVar11 = decompress_line(this, &local_44);
            if (iVar11 < 0) {
               if (*(int*)( this + 0x19f8 ) == 0) {
                  *(int*)( this + 0x19f8 ) = iVar11;
               }

               *(undefined8*)this = 0;
               ppVar15 = this + 0x338;
               do {
                  ppVar14 = ppVar15 + 8;
                  free(*(void**)ppVar15);
                  *(undefined8*)ppVar15 = 0;
                  ppVar15 = ppVar14;
               }
 while ( this + 0x3b8 != ppVar14 );
               goto LAB_0010145a;
            }

            goto LAB_0010163d;
         }

      }

   }

   LAB_0010125a:iVar11 = 0;
   LAB_00101260:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar11;
}
/* pv_png::png_decoder::png_decode_end() */void pv_png::png_decoder::png_decode_end(png_decoder *this) {
   png_decoder *ppVar1;
   png_decoder *ppVar2;
   *(undefined8*)this = 0;
   ppVar1 = this + 0x338;
   do {
      ppVar2 = ppVar1 + 8;
      free(*(void**)ppVar1);
      *(undefined8*)ppVar1 = 0;
      ppVar1 = ppVar2;
   }
 while ( ppVar2 != this + 0x3b8 );
   buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* pv_png::png_decoder::calc_gamma_table() */void pv_png::png_decoder::calc_gamma_table(png_decoder *this) {
   short sVar1;
   short sVar2;
   short sVar3;
   short sVar4;
   short sVar5;
   short sVar6;
   short sVar7;
   short sVar8;
   short sVar9;
   short sVar10;
   short sVar11;
   short sVar12;
   short sVar13;
   short sVar14;
   short sVar15;
   short sVar16;
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   int iVar21;
   int iVar22;
   int iVar23;
   int iVar24;
   int iVar25;
   int iVar26;
   int iVar27;
   int iVar28;
   int iVar29;
   int iVar30;
   int iVar31;
   int iVar32;
   int iVar33;
   int iVar34;
   int iVar35;
   undefined1 auVar36[16];
   png_decoder pVar37;
   int iVar38;
   png_decoder *ppVar39;
   png_decoder *ppVar40;
   long lVar41;
   float fVar42;
   int iVar43;
   int iVar57;
   undefined1 auVar45[16];
   undefined1 auVar49[16];
   undefined1 auVar53[16];
   undefined1 auVar56[16];
   float __y;
   undefined1 auVar58[16];
   undefined1 auVar62[16];
   undefined1 auVar66[16];
   undefined1 auVar69[16];
   undefined2 uVar70;
   undefined2 uVar71;
   undefined2 uVar72;
   undefined1 auVar74[16];
   undefined1 auVar44[12];
   undefined1 auVar46[16];
   undefined1 auVar50[16];
   undefined1 auVar47[16];
   undefined1 auVar51[16];
   undefined1 auVar54[16];
   undefined1 auVar48[16];
   undefined1 auVar52[16];
   undefined1 auVar55[16];
   undefined1 auVar59[16];
   undefined1 auVar63[16];
   undefined1 auVar60[16];
   undefined1 auVar64[16];
   undefined1 auVar67[16];
   undefined1 auVar61[16];
   undefined1 auVar65[16];
   undefined1 auVar68[16];
   int iVar73;
   int iVar75;
   int iVar76;
   int iVar77;
   auVar36 = __LC5;
   iVar35 = _UNK_0010487c;
   iVar34 = _UNK_00104878;
   iVar33 = _UNK_00104874;
   iVar32 = __LC4;
   iVar31 = _UNK_0010486c;
   iVar30 = _UNK_00104868;
   iVar29 = _UNK_00104864;
   iVar28 = __LC3;
   iVar27 = _UNK_0010485c;
   iVar26 = _UNK_00104858;
   iVar25 = _UNK_00104854;
   iVar24 = __LC2;
   iVar23 = _UNK_0010484c;
   iVar22 = _UNK_00104848;
   iVar21 = _UNK_00104844;
   iVar38 = __LC1;
   if (*(uint*)( this + 0x404 ) != 45000) {
      lVar41 = 0;
      __y = _LC8 / ( ( (float)*(uint*)( this + 0x404 ) / __LC6 ) * __LC7 );
      do {
         fVar42 = powf((float)(int)lVar41 / __LC9, __y);
         iVar38 = (int)( fVar42 * __LC9 + __LC10 );
         if (0xff < iVar38) {
            iVar38 = 0xff;
         }

         pVar37 = SUB41(iVar38, 0);
         if (iVar38 < 0) {
            pVar37 = (png_decoder)0x0;
         }

         this[lVar41 + 0x1890] = pVar37;
         lVar41 = lVar41 + 1;
      }
 while ( lVar41 != 0x100 );
      return;
   }

   ppVar39 = this + 0x1890;
   auVar45 = __LC0;
   do {
      ppVar40 = ppVar39 + 0x10;
      iVar73 = auVar45._0_4_;
      auVar74._0_4_ = iVar73 + iVar38;
      iVar75 = auVar45._4_4_;
      auVar74._4_4_ = iVar75 + iVar21;
      iVar76 = auVar45._8_4_;
      iVar77 = auVar45._12_4_;
      auVar74._8_4_ = iVar76 + iVar22;
      auVar74._12_4_ = iVar77 + iVar23;
      auVar61._0_12_ = auVar45._0_12_;
      auVar61._12_2_ = auVar45._6_2_;
      auVar61._14_2_ = (short)( ( uint )(iVar75 + iVar25) >> 0x10 );
      auVar60._12_4_ = auVar61._12_4_;
      auVar60._0_10_ = auVar45._0_10_;
      uVar71 = ( undefined2 )(iVar75 + iVar25);
      auVar60._10_2_ = uVar71;
      auVar59._10_6_ = auVar60._10_6_;
      auVar59._0_8_ = auVar45._0_8_;
      auVar59._8_2_ = auVar45._4_2_;
      uVar70 = ( undefined2 )(( uint )(iVar73 + iVar24) >> 0x10);
      auVar17._2_8_ = auVar59._8_8_;
      auVar17._0_2_ = uVar70;
      auVar17._10_6_ = 0;
      auVar69._0_2_ = auVar45._0_2_;
      auVar58._12_4_ = 0;
      auVar58._0_12_ = SUB1612(auVar17 << 0x30, 4);
      auVar58 = auVar58 << 0x20;
      uVar72 = ( undefined2 )(iVar76 + iVar26);
      auVar65._0_12_ = auVar58._0_12_;
      auVar65._12_2_ = uVar70;
      auVar65._14_2_ = (short)( ( uint )(iVar76 + iVar26) >> 0x10 );
      auVar64._12_4_ = auVar65._12_4_;
      auVar64._0_10_ = auVar58._0_10_;
      auVar64._10_2_ = auVar45._10_2_;
      auVar63._10_6_ = auVar64._10_6_;
      auVar63._0_8_ = auVar58._0_8_;
      auVar63._8_2_ = auVar45._2_2_;
      auVar18._2_8_ = auVar63._8_8_;
      auVar18._0_2_ = uVar72;
      auVar18._10_6_ = 0;
      auVar62._12_4_ = 0;
      auVar62._0_12_ = SUB1612(auVar18 << 0x30, 4);
      auVar62 = auVar62 << 0x20;
      iVar43 = iVar73 + iVar28;
      iVar57 = iVar75 + iVar29;
      auVar44._0_8_ = CONCAT44(iVar57, iVar43);
      auVar44._8_4_ = iVar76 + iVar30;
      auVar68._0_12_ = auVar62._0_12_;
      auVar68._12_2_ = uVar72;
      auVar68._14_2_ = (short)( iVar77 + iVar27 );
      auVar67._12_4_ = auVar68._12_4_;
      auVar67._0_10_ = auVar62._0_10_;
      auVar67._10_2_ = uVar71;
      auVar66._10_6_ = auVar67._10_6_;
      auVar66._0_8_ = auVar62._0_8_;
      auVar66._8_2_ = (short)( iVar73 + iVar24 );
      auVar69._8_8_ = auVar66._8_8_;
      auVar69._6_2_ = auVar45._12_2_;
      auVar69._4_2_ = auVar45._8_2_;
      auVar69._2_2_ = auVar45._4_2_;
      auVar48._12_2_ = (short)( (uint)iVar57 >> 0x10 );
      auVar48._0_12_ = auVar44;
      auVar48._14_2_ = (short)( ( uint )(iVar75 + iVar33) >> 0x10 );
      auVar47._12_4_ = auVar48._12_4_;
      auVar47._0_10_ = auVar44._0_10_;
      uVar71 = ( undefined2 )(iVar75 + iVar33);
      auVar47._10_2_ = uVar71;
      auVar46._10_6_ = auVar47._10_6_;
      auVar46._8_2_ = (short)iVar57;
      auVar46._0_8_ = auVar44._0_8_;
      uVar70 = ( undefined2 )(( uint )(iVar73 + iVar32) >> 0x10);
      auVar19._2_8_ = auVar46._8_8_;
      auVar19._0_2_ = uVar70;
      auVar19._10_6_ = 0;
      auVar56._0_2_ = (undefined2)iVar43;
      auVar45._12_4_ = 0;
      auVar45._0_12_ = SUB1612(auVar19 << 0x30, 4);
      auVar45 = auVar45 << 0x20;
      auVar69 = auVar69 & auVar36;
      uVar72 = ( undefined2 )(iVar76 + iVar34);
      auVar52._0_12_ = auVar45._0_12_;
      auVar52._12_2_ = uVar70;
      auVar52._14_2_ = (short)( ( uint )(iVar76 + iVar34) >> 0x10 );
      auVar51._12_4_ = auVar52._12_4_;
      auVar51._0_10_ = auVar45._0_10_;
      auVar51._10_2_ = (short)( (uint)auVar44._8_4_ >> 0x10 );
      auVar50._10_6_ = auVar51._10_6_;
      auVar50._0_8_ = auVar45._0_8_;
      auVar50._8_2_ = (short)( (uint)iVar43 >> 0x10 );
      auVar20._2_8_ = auVar50._8_8_;
      auVar20._0_2_ = uVar72;
      auVar20._10_6_ = 0;
      auVar49._12_4_ = 0;
      auVar49._0_12_ = SUB1612(auVar20 << 0x30, 4);
      auVar49 = auVar49 << 0x20;
      auVar55._0_12_ = auVar49._0_12_;
      auVar55._12_2_ = uVar72;
      auVar55._14_2_ = (short)( iVar77 + iVar35 );
      auVar54._12_4_ = auVar55._12_4_;
      auVar54._0_10_ = auVar49._0_10_;
      auVar54._10_2_ = uVar71;
      auVar53._10_6_ = auVar54._10_6_;
      auVar53._0_8_ = auVar49._0_8_;
      auVar53._8_2_ = (short)( iVar73 + iVar32 );
      auVar56._8_8_ = auVar53._8_8_;
      auVar56._6_2_ = (short)( iVar77 + iVar31 );
      auVar56._4_2_ = (short)auVar44._8_4_;
      auVar56._2_2_ = (short)iVar57;
      auVar56 = auVar56 & auVar36;
      sVar1 = auVar69._0_2_;
      sVar2 = auVar69._2_2_;
      sVar3 = auVar69._4_2_;
      sVar4 = auVar69._6_2_;
      sVar5 = auVar69._8_2_;
      sVar6 = auVar69._10_2_;
      sVar7 = auVar69._12_2_;
      sVar8 = auVar69._14_2_;
      sVar9 = auVar56._0_2_;
      sVar10 = auVar56._2_2_;
      sVar11 = auVar56._4_2_;
      sVar12 = auVar56._6_2_;
      sVar13 = auVar56._8_2_;
      sVar14 = auVar56._10_2_;
      sVar15 = auVar56._12_2_;
      sVar16 = auVar56._14_2_;
      *ppVar39 = ( png_decoder )(( 0 < sVar1 ) * ( sVar1 < 0x100 ) * auVar69[0] - ( 0xff < sVar1 ));
      ppVar39[1] = ( png_decoder )(( 0 < sVar2 ) * ( sVar2 < 0x100 ) * auVar69[2] - ( 0xff < sVar2 ));
      ppVar39[2] = ( png_decoder )(( 0 < sVar3 ) * ( sVar3 < 0x100 ) * auVar69[4] - ( 0xff < sVar3 ));
      ppVar39[3] = ( png_decoder )(( 0 < sVar4 ) * ( sVar4 < 0x100 ) * auVar69[6] - ( 0xff < sVar4 ));
      ppVar39[4] = ( png_decoder )(( 0 < sVar5 ) * ( sVar5 < 0x100 ) * auVar69[8] - ( 0xff < sVar5 ));
      ppVar39[5] = ( png_decoder )(( 0 < sVar6 ) * ( sVar6 < 0x100 ) * auVar69[10] - ( 0xff < sVar6 ));
      ppVar39[6] = ( png_decoder )(( 0 < sVar7 ) * ( sVar7 < 0x100 ) * auVar69[0xc] - ( 0xff < sVar7 ));
      ppVar39[7] = ( png_decoder )(( 0 < sVar8 ) * ( sVar8 < 0x100 ) * auVar69[0xe] - ( 0xff < sVar8 ));
      ppVar39[8] = ( png_decoder )(( 0 < sVar9 ) * ( sVar9 < 0x100 ) * auVar56[0] - ( 0xff < sVar9 ));
      ppVar39[9] = ( png_decoder )(( 0 < sVar10 ) * ( sVar10 < 0x100 ) * auVar56[2] - ( 0xff < sVar10 ));
      ppVar39[10] = ( png_decoder )(( 0 < sVar11 ) * ( sVar11 < 0x100 ) * auVar56[4] - ( 0xff < sVar11 ));
      ppVar39[0xb] = ( png_decoder )(( 0 < sVar12 ) * ( sVar12 < 0x100 ) * auVar56[6] - ( 0xff < sVar12 ));
      ppVar39[0xc] = ( png_decoder )(( 0 < sVar13 ) * ( sVar13 < 0x100 ) * auVar56[8] - ( 0xff < sVar13 ));
      ppVar39[0xd] = ( png_decoder )(( 0 < sVar14 ) * ( sVar14 < 0x100 ) * auVar56[10] - ( 0xff < sVar14 ));
      ppVar39[0xe] = ( png_decoder )(( 0 < sVar15 ) * ( sVar15 < 0x100 ) * auVar56[0xc] - ( 0xff < sVar15 ));
      ppVar39[0xf] = ( png_decoder )(( 0 < sVar16 ) * ( sVar16 < 0x100 ) * auVar56[0xe] - ( 0xff < sVar16 ));
      ppVar39 = ppVar40;
      auVar45 = auVar74;
   }
 while ( ppVar40 != this + 0x1990 );
   return;
}
/* pv_png::png_decoder::create_grey_palette() */void pv_png::png_decoder::create_grey_palette(png_decoder *this) {
   png_decoder pVar1;
   int iVar2;
   uint uVar3;
   png_decoder *ppVar4;
   int iVar5;
   int iVar6;
   iVar2 = 1 << ( (byte)this[0x318] & 0x1f );
   iVar6 = 0x100;
   if (iVar2 < 0x101) {
      iVar6 = iVar2;
   }

   uVar3 = 0;
   iVar5 = 0;
   ppVar4 = this + 9;
   if (0 < iVar2) {
      do {
         iVar5 = iVar5 + 1;
         pVar1 = SUB41(uVar3 / ( iVar6 - 1U ), 0);
         uVar3 = uVar3 + 0xff;
         *(ushort*)ppVar4 = CONCAT11(pVar1, pVar1);
         ppVar4[2] = pVar1;
         ppVar4 = ppVar4 + 3;
      }
 while ( iVar5 < iVar6 );
   }

   return;
}
/* pv_png::png_decoder::read_signature() */undefined8 pv_png::png_decoder::read_signature(png_decoder *this) {
   long lVar1;
   png_decoder *ppVar2;
   png_decoder *ppVar3;
   lVar1 = ( **(code**)( **(long**)this + 0x38 ) )(*(long**)this, this + 0x19fc, 8);
   if (lVar1 == 8) {
      if (( *(int*)( this + 0x19fc ) == 0x474e5089 ) && ( *(int*)( this + 0x1a00 ) == 0xa1a0a0d )) {
         return 0;
      }

      if (*(int*)( this + 0x19f8 ) == 0) {
         *(undefined4*)( this + 0x19f8 ) = 0xfffffff0;
      }

      *(undefined8*)this = 0;
      ppVar2 = this + 0x338;
      do {
         ppVar3 = ppVar2 + 8;
         free(*(void**)ppVar2);
         *(undefined8*)ppVar2 = 0;
         ppVar2 = ppVar3;
      }
 while ( ppVar3 != this + 0x3b8 );
   }
 else {
      if (*(int*)( this + 0x19f8 ) == 0) {
         *(undefined4*)( this + 0x19f8 ) = 0xfffffff0;
      }

      *(undefined8*)this = 0;
      ppVar2 = this + 0x338;
      do {
         ppVar3 = ppVar2 + 8;
         free(*(void**)ppVar2);
         *(undefined8*)ppVar2 = 0;
         ppVar2 = ppVar3;
      }
 while ( ppVar3 != this + 0x3b8 );
   }

   buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
   return 0xfffffff0;
}
/* pv_png::png_decoder::read_ihdr_chunk() */long pv_png::png_decoder::read_ihdr_chunk(png_decoder *this) {
   long lVar1;
   png_decoder *ppVar2;
   png_decoder *ppVar3;
   lVar1 = fetch_next_chunk_init(this);
   if (-1 < (int)lVar1) {
      if (( *(int*)( this + 0x330 ) == 0x52444849 ) && ( *(int*)( this + 0x324 ) == 0xd )) {
         lVar1 = fetch_next_chunk_dword(this);
         if (-1 < lVar1) {
            *(int*)( this + 0x310 ) = (int)lVar1;
            lVar1 = fetch_next_chunk_dword(this);
            if (-1 < lVar1) {
               *(int*)( this + 0x314 ) = (int)lVar1;
               if (*(int*)( this + 0x310 ) - 1U < 0x8000) {
                  if ((int)lVar1 - 1U < 0x8000) {
                     lVar1 = fetch_next_chunk_byte(this);
                     if (-1 < (int)lVar1) {
                        this[0x318] = SUB81(lVar1, 0);
                        lVar1 = fetch_next_chunk_byte(this);
                        if (-1 < (int)lVar1) {
                           this[0x319] = SUB81(lVar1, 0);
                           lVar1 = fetch_next_chunk_byte(this);
                           if (-1 < (int)lVar1) {
                              this[0x31a] = SUB81(lVar1, 0);
                              lVar1 = fetch_next_chunk_byte(this);
                              if (-1 < (int)lVar1) {
                                 this[0x31b] = SUB81(lVar1, 0);
                                 lVar1 = fetch_next_chunk_byte(this);
                                 if (-1 < (int)lVar1) {
                                    this[0x31c] = SUB81(lVar1, 0);
                                    if (this[0x31a] != (png_decoder)0x0) {
                                       *(undefined4*)( this + 0x30c ) = 0xffffcd34;
                                    }

                                    if (this[0x31b] != (png_decoder)0x0) {
                                       *(undefined4*)( this + 0x30c ) = 0xffffcd33;
                                    }

                                    if (1 < (byte)SUB81(lVar1, 0)) {
                                       *(undefined4*)( this + 0x30c ) = 0xffffcd32;
                                    }

                                    switch (this[0x319]) {
                                       case (png_decoder)0x0:
                          if (((byte)this[0x318] < 0x11) &&
                             ((0x10116UL >> ((ulong)(byte)this[0x318] & 0x3f) & 1) != 0)) {
                            return 0;
                          }
                          break;
                                       default:
                          if (*(int *)(this + 0x19f8) == 0) {
                            *(undefined4 *)(this + 0x19f8) = 0xffffcd31;
                          }
                          *(undefined8 *)this = 0;
                          ppVar2 = this + 0x338;
                          do {
                            ppVar3 = ppVar2 + 8;
                            free(*(void **)ppVar2);
                            *(undefined8 *)ppVar2 = 0;
                            ppVar2 = ppVar3;
                          } while (ppVar3 != this + 0x3b8);
                          buminiz::mz_inflateEnd((mz_stream_s *)(this + 0x810));
                          return 0xffffcd31;
                                       case (png_decoder)0x2:
                                       case (png_decoder)0x4:
                                       case (png_decoder)0x6:
                          if (((char)this[0x318] - 8U & 0xf7) == 0) {
                            return 0;
                          }
                          break;
                                       case (png_decoder)0x3:
                          if (((byte)this[0x318] < 9) &&
                             ((0x116UL >> ((ulong)(byte)this[0x318] & 0x3f) & 1) != 0)) {
                            return 0;
                          }
                                    }

                                    if (*(int*)( this + 0x19f8 ) == 0) {
                                       *(undefined4*)( this + 0x19f8 ) = 0xffffcd30;
                                    }

                                    uninitialize(this);
                                    lVar1 = 0xffffcd30;
                                 }

                              }

                           }

                        }

                     }

                  }
 else {
                     if (*(int*)( this + 0x19f8 ) == 0) {
                        *(undefined4*)( this + 0x19f8 ) = 0xffffcd35;
                     }

                     *(undefined8*)this = 0;
                     ppVar2 = this + 0x338;
                     do {
                        ppVar3 = ppVar2 + 8;
                        free(*(void**)ppVar2);
                        *(undefined8*)ppVar2 = 0;
                        ppVar2 = ppVar3;
                     }
 while ( ppVar3 != this + 0x3b8 );
                     buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
                     lVar1 = 0xffffcd35;
                  }

               }
 else {
                  if (*(int*)( this + 0x19f8 ) == 0) {
                     *(undefined4*)( this + 0x19f8 ) = 0xffffcd36;
                  }

                  *(undefined8*)this = 0;
                  ppVar2 = this + 0x338;
                  do {
                     ppVar3 = ppVar2 + 8;
                     free(*(void**)ppVar2);
                     *(undefined8*)ppVar2 = 0;
                     ppVar2 = ppVar3;
                  }
 while ( ppVar3 != this + 0x3b8 );
                  buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
                  lVar1 = 0xffffcd36;
               }

            }

         }

      }
 else {
         if (*(int*)( this + 0x19f8 ) == 0) {
            *(undefined4*)( this + 0x19f8 ) = 0xffffcd37;
         }

         *(undefined8*)this = 0;
         ppVar2 = this + 0x338;
         do {
            ppVar3 = ppVar2 + 8;
            free(*(void**)ppVar2);
            *(undefined8*)ppVar2 = 0;
            ppVar2 = ppVar3;
         }
 while ( this + 0x3b8 != ppVar3 );
         buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
         lVar1 = 0xffffcd37;
      }

   }

   return lVar1;
}
/* pv_png::png_decoder::read_bkgd_chunk() */undefined8 pv_png::png_decoder::read_bkgd_chunk(png_decoder *this) {
   undefined8 uVar1;
   this[0x3f0] = (png_decoder)0x1;
   switch (this[0x319]) {
      case (png_decoder)0x0:
      case (png_decoder)0x4:
    uVar1 = fetch_next_chunk_word(this);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    *(int *)(this + 0x3f4) = (int)uVar1;
    break;
      case (png_decoder)0x1:
      case (png_decoder)0x5:
    return 0;
      case (png_decoder)0x2:
      case (png_decoder)0x6:
    uVar1 = fetch_next_chunk_word(this);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    *(int *)(this + 0x3f4) = (int)uVar1;
    uVar1 = fetch_next_chunk_word(this);
    if (-1 < (int)uVar1) {
      *(int *)(this + 0x3f8) = (int)uVar1;
      uVar1 = fetch_next_chunk_word(this);
      if (-1 < (int)uVar1) {
        *(int *)(this + 0x3fc) = (int)uVar1;
        return 0;
      }
      return uVar1;
    }
    return uVar1;
      case (png_decoder)0x3:
    uVar1 = fetch_next_chunk_byte(this);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    *(int *)(this + 0x3f4) = (int)uVar1;
    break;
      default:
    return 0;
   }

   return 0;
}
/* pv_png::png_decoder::read_gama_chunk() */undefined8 pv_png::png_decoder::read_gama_chunk(png_decoder *this) {
   undefined8 uVar1;
   png_decoder *ppVar2;
   png_decoder *ppVar3;
   long in_FS_OFFSET;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0x400] = (png_decoder)0x1;
   if (this[800] == (png_decoder)0x0) {
      LAB_00102283:if (*(int*)( this + 0x19f8 ) == 0) {
         *(undefined4*)( this + 0x19f8 ) = 0xffffcd2f;
      }

      *(undefined8*)this = 0;
      ppVar2 = this + 0x338;
      do {
         ppVar3 = ppVar2 + 8;
         free(*(void**)ppVar2);
         *(undefined8*)ppVar2 = 0;
         ppVar2 = ppVar3;
      }
 while ( ppVar3 != this + 0x3b8 );
      buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
   }
 else {
      uVar1 = fetch_next_chunk_data(this, (uchar*)&local_24, 4);
      if ((int)uVar1 < 0) goto LAB_001022e6;
      if ((int)uVar1 != 4) goto LAB_00102283;
   }

   *(uint*)( this + 0x404 ) = local_24 >> 0x18 | ( local_24 & 0xff0000 ) >> 8 | ( local_24 & 0xff00 ) << 8 | local_24 << 0x18;
   uVar1 = 0;
   LAB_001022e6:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* pv_png::png_decoder::read_trns_chunk() */undefined8 pv_png::png_decoder::read_trns_chunk(png_decoder *this) {
   png_decoder pVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   png_decoder *ppVar4;
   long lVar5;
   png_decoder *ppVar6;
   pVar1 = this[0x319];
   this[0x408] = (png_decoder)0x1;
   uVar2 = _UNK_00104898;
   uVar3 = __LC11;
   if (pVar1 == (png_decoder)0x3) {
      ppVar4 = this + 0x40c;
      do {
         *(undefined8*)ppVar4 = uVar3;
         *(undefined8*)( ppVar4 + 8 ) = uVar2;
         ppVar6 = ppVar4 + 0x20;
         *(undefined8*)( ppVar4 + 0x10 ) = uVar3;
         *(undefined8*)( ppVar4 + 0x18 ) = uVar2;
         ppVar4 = ppVar6;
      }
 while ( ppVar6 != this + 0x80c );
      if (( uint )(1 << ( (byte)this[0x318] & 0x1f )) < *(uint*)( this + 0x324 )) {
         if (*(int*)( this + 0x19f8 ) == 0) {
            *(undefined4*)( this + 0x19f8 ) = 0xffffcd2d;
         }

         *(undefined8*)this = 0;
         ppVar4 = this + 0x338;
         do {
            ppVar6 = ppVar4 + 8;
            free(*(void**)ppVar4);
            *(undefined8*)ppVar4 = 0;
            ppVar4 = ppVar6;
         }
 while ( ppVar6 != this + 0x3b8 );
         goto LAB_00102472;
      }

      lVar5 = 0;
      if (0 < (int)*(uint*)( this + 0x324 )) {
         do {
            uVar3 = fetch_next_chunk_byte(this);
            if ((int)uVar3 < 0) {
               return uVar3;
            }

            *(int*)( this + lVar5 * 4 + 0x40c ) = (int)uVar3;
            lVar5 = lVar5 + 1;
         }
 while ( (int)lVar5 < *(int*)( this + 0x324 ) );
      }

   }
 else {
      if (pVar1 == (png_decoder)0x0) {
         uVar3 = fetch_next_chunk_word(this);
         if ((int)uVar3 < 0) {
            return uVar3;
         }

         *(int*)( this + 0x40c ) = (int)uVar3;
         return 0;
      }

      if (pVar1 != (png_decoder)0x2) {
         if (*(int*)( this + 0x19f8 ) == 0) {
            *(undefined4*)( this + 0x19f8 ) = 0xffffcd2d;
         }

         *(undefined8*)this = 0;
         ppVar4 = this + 0x338;
         do {
            ppVar6 = ppVar4 + 8;
            free(*(void**)ppVar4);
            *(undefined8*)ppVar4 = 0;
            ppVar4 = ppVar6;
         }
 while ( ppVar6 != this + 0x3b8 );
         LAB_00102472:buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
         return 0xffffcd2d;
      }

      for (int i = 0; i < 3; i++) {
         uVar3 = fetch_next_chunk_word(this);
         if ((int)uVar3 < 0) {
            return uVar3;
         }

         *(int*)( this + ( 4*i + 1036 ) ) = (int)uVar3;
      }

   }

   return 0;
}
/* pv_png::png_decoder::read_plte_chunk() */undefined8 pv_png::png_decoder::read_plte_chunk(png_decoder *this) {
   uint uVar1;
   undefined8 uVar2;
   ulong uVar3;
   int iVar4;
   png_decoder *ppVar5;
   png_decoder *ppVar6;
   undefined8 *puVar7;
   if (this[8] == (png_decoder)0x0) {
      this[8] = (png_decoder)0x1;
      *(undefined8*)( this + 9 ) = 0;
      *(undefined8*)( this + 0x301 ) = 0;
      puVar7 = (undefined8*)( ( ulong )(this + 0x11) & 0xfffffffffffffff8 );
      for (uVar3 = ( ulong )(( (int)( this + 9 ) - (int)(undefined8*)( ( ulong )(this + 0x11) & 0xfffffffffffffff8 ) ) + 0x300U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
         *puVar7 = 0;
         puVar7 = puVar7 + 1;
      }

      uVar1 = *(uint*)( this + 0x324 );
      if (uVar1 * -0x55555555 < 0x55555556) {
         iVar4 = 1 << ( (byte)this[0x318] & 0x1f );
         if (0x100 < iVar4) {
            iVar4 = 0x100;
         }

         if (iVar4 < (int)( uVar1 / 3 )) {
            if (*(int*)( this + 0x19f8 ) == 0) {
               *(undefined4*)( this + 0x19f8 ) = 0xffffcd2c;
            }

            *(undefined8*)this = 0;
            ppVar6 = this + 0x338;
            do {
               ppVar5 = ppVar6 + 8;
               free(*(void**)ppVar6);
               *(undefined8*)ppVar6 = 0;
               ppVar6 = ppVar5;
            }
 while ( ppVar5 != this + 0x3b8 );
         }
 else {
            if (( (byte)this[0x319] & 0xfb ) != 0) {
               if (uVar1 / 3 != 0) {
                  ppVar6 = this + 9;
                  do {
                     uVar2 = fetch_next_chunk_byte(this);
                     if ((int)uVar2 < 0) {
                        return uVar2;
                     }

                     *ppVar6 = SUB81(uVar2, 0);
                     uVar2 = fetch_next_chunk_byte(this);
                     if ((int)uVar2 < 0) {
                        return uVar2;
                     }

                     ppVar6[1] = SUB81(uVar2, 0);
                     uVar2 = fetch_next_chunk_byte(this);
                     if ((int)uVar2 < 0) {
                        return uVar2;
                     }

                     ppVar5 = ppVar6 + 3;
                     ppVar6[2] = SUB81(uVar2, 0);
                     ppVar6 = ppVar5;
                  }
 while ( ppVar5 != this + ( ulong )(uVar1 / 3 - 1) * 3 + 0xc );
               }

               return 0;
            }

            if (*(int*)( this + 0x19f8 ) == 0) {
               *(undefined4*)( this + 0x19f8 ) = 0xffffcd2c;
            }

            *(undefined8*)this = 0;
            ppVar6 = this + 0x338;
            do {
               ppVar5 = ppVar6 + 8;
               free(*(void**)ppVar6);
               *(undefined8*)ppVar6 = 0;
               ppVar6 = ppVar5;
            }
 while ( ppVar5 != this + 0x3b8 );
         }

      }
 else {
         if (*(int*)( this + 0x19f8 ) == 0) {
            *(undefined4*)( this + 0x19f8 ) = 0xffffcd2c;
         }

         *(undefined8*)this = 0;
         ppVar6 = this + 0x338;
         do {
            ppVar5 = ppVar6 + 8;
            free(*(void**)ppVar6);
            *(undefined8*)ppVar6 = 0;
            ppVar6 = ppVar5;
         }
 while ( ppVar5 != this + 0x3b8 );
      }

   }
 else {
      if (*(int*)( this + 0x19f8 ) == 0) {
         *(undefined4*)( this + 0x19f8 ) = 0xffffcd2c;
      }

      *(undefined8*)this = 0;
      ppVar6 = this + 0x338;
      do {
         ppVar5 = ppVar6 + 8;
         free(*(void**)ppVar6);
         *(undefined8*)ppVar6 = 0;
         ppVar6 = ppVar5;
      }
 while ( this + 0x3b8 != ppVar5 );
   }

   buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
   return 0xffffcd2c;
}
/* pv_png::png_decoder::find_idat_chunk() */long pv_png::png_decoder::find_idat_chunk(png_decoder *this) {
   int iVar1;
   long lVar2;
   do {
      while (true) {
         while (true) {
            while (true) {
               lVar2 = fetch_next_chunk_init(this);
               if ((int)lVar2 < 0) {
                  return lVar2;
               }

               iVar1 = *(int*)( this + 0x330 );
               if (( (byte)this[0x330] & 0x20 ) != 0) break;
               if (iVar1 == 0x45544c50) {
                  lVar2 = read_plte_chunk(this);
                  if ((int)lVar2 < 0) {
                     return lVar2;
                  }

               }
 else {
                  if (iVar1 == 0x54414449) {
                     return 0;
                  }

                  *(undefined4*)( this + 0x30c ) = 0xffffcd2e;
               }

            }
;
            if (iVar1 != 0x44474b62) break;
            lVar2 = read_bkgd_chunk(this);
            if ((int)lVar2 < 0) {
               return lVar2;
            }

         }
;
         if (iVar1 != 0x414d4167) break;
         this[0x400] = (png_decoder)0x1;
         lVar2 = fetch_next_chunk_dword(this);
         if (lVar2 < 0) {
            if ((int)lVar2 < 0) {
               return lVar2;
            }

         }
 else {
            *(int*)( this + 0x404 ) = (int)lVar2;
         }

      }
;
   }
 while ( ( iVar1 != 0x534e5274 ) || ( lVar2 = read_trns_chunk(this) ),-1 < (int)lVar2 );
   return lVar2;
}
/* pv_png::png_decoder::~png_decoder() */void pv_png::png_decoder::~png_decoder(png_decoder *this) {
   void *pvVar1;
   png_decoder *ppVar2;
   png_decoder *ppVar3;
   *(undefined8*)this = 0;
   ppVar2 = this + 0x338;
   do {
      ppVar3 = ppVar2 + 8;
      free(*(void**)ppVar2);
      *(undefined8*)ppVar2 = 0;
      ppVar2 = ppVar3;
   }
 while ( ppVar3 != this + 0x3b8 );
   buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
   pvVar1 = *(void**)( this + 0x19d8 );
   if (pvVar1 != (void*)0x0) {
      operator_delete(pvVar1, *(long*)( this + 0x19e8 ) - (long)pvVar1);
      return;
   }

   return;
}
/* pv_png::png_decoder::clear() */void pv_png::png_decoder::clear(png_decoder *this) {
   ulong uVar1;
   int iVar2;
   undefined8 *puVar3;
   *(undefined8*)( this + 0x338 ) = 0;
   *(undefined8*)( this + 0x3b0 ) = 0;
   iVar2 = (int)this;
   puVar3 = (undefined8*)( ( ulong )(this + 0x340) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( iVar2 - (int)(undefined8*)( ( ulong )(this + 0x340) & 0xfffffffffffffff8 ) ) + 0x3b8U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
   }

   *(undefined8*)this = 0;
   *(undefined8*)( this + 9 ) = 0;
   *(undefined8*)( this + 0x301 ) = 0;
   puVar3 = (undefined8*)( ( ulong )(this + 0x11) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( iVar2 - (int)(undefined8*)( ( ulong )(this + 0x11) & 0xfffffffffffffff8 ) ) + 0x309U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
   }

   *(undefined4*)( this + 0x30c ) = 0;
   if (*(long*)( this + 0x19d8 ) != *(long*)( this + 0x19e0 )) {
      *(long*)( this + 0x19e0 ) = *(long*)( this + 0x19d8 );
   }

   this[8] = (png_decoder)0x0;
   this[800] = (png_decoder)0x0;
   *(undefined8*)( this + 0x324 ) = 0;
   this[0x334] = (png_decoder)0x0;
   *(undefined4*)( this + 0x32c ) = 0;
   *(undefined4*)( this + 0x330 ) = 0;
   *(undefined4*)( this + 0x3c8 ) = 0;
   *(undefined8*)( this + 0x3d0 ) = 0;
   *(undefined8*)( this + 1000 ) = 0;
   this[0x3f0] = (png_decoder)0x0;
   *(undefined8*)( this + 0x3f4 ) = 0;
   *(undefined4*)( this + 0x3fc ) = 0;
   this[0x400] = (png_decoder)0x0;
   *(undefined4*)( this + 0x404 ) = 0;
   this[0x408] = (png_decoder)0x0;
   *(undefined8*)( this + 0x810 ) = 0;
   *(undefined8*)( this + 0x878 ) = 0;
   *(undefined1(*) [16])( this + 0x310 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x3b8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x3d8 ) = (undefined1[16])0x0;
   puVar3 = (undefined8*)( ( ulong )(this + 0x818) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( iVar2 - (int)(undefined8*)( ( ulong )(this + 0x818) & 0xfffffffffffffff8 ) ) + 0x880U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
   }

   *(undefined8*)( this + 0x1880 ) = 0;
   *(undefined8*)( this + 0x1888 ) = 0;
   *(undefined8*)( this + 0x40c ) = 0;
   *(undefined8*)( this + 0x804 ) = 0;
   puVar3 = (undefined8*)( ( ulong )(this + 0x414) & 0xfffffffffffffff8 );
   for (uVar1 = ( ulong )(( iVar2 - (int)(undefined8*)( ( ulong )(this + 0x414) & 0xfffffffffffffff8 ) ) + 0x80cU >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
   }

   *(undefined1(*) [16])( this + 0x19a0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x19bc ) = (undefined1[16])0x0;
   *(undefined4*)( this + 0x19f0 ) = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 28*i + 6544 ) ) = (undefined1[16])0;
   }

   this[0x19f4] = (png_decoder)0x0;
   *(undefined4*)( this + 0x19f8 ) = 0;
   return;
}
/* pv_png::png_decoder::png_decoder() */void pv_png::png_decoder::png_decoder(png_decoder *this) {
   *(undefined8*)( this + 0x19e8 ) = 0;
   *(undefined1(*) [16])( this + 0x19d8 ) = (undefined1[16])0x0;
   clear(this);
   return;
}
/* pv_png::png_decoder::png_scan(pv_png::png_file*) */int pv_png::png_decoder::png_scan(png_decoder *this, png_file *param_1) {
   png_decoder pVar1;
   int iVar2;
   int iVar3;
   uint uVar4;
   png_decoder *ppVar5;
   png_decoder *ppVar6;
   *(png_file**)this = param_1;
   *(undefined4*)( this + 0x30c ) = 1;
   *(undefined4*)( this + 0x19f8 ) = 0;
   iVar2 = read_signature(this);
   if (( ( iVar2 == 0 ) && ( iVar2 = read_ihdr_chunk(this) ),iVar2 == 0 )) {
      if (this[0x400] != (png_decoder)0x0) {
         calc_gamma_table(this);
      }

      if (this[0x319] == (png_decoder)0x3) {
         if (this[8] == (png_decoder)0x0) {
            if (*(int*)( this + 0x19f8 ) == 0) {
               *(undefined4*)( this + 0x19f8 ) = 0xffffcd29;
            }

            *(undefined8*)this = 0;
            ppVar5 = this + 0x338;
            do {
               ppVar6 = ppVar5 + 8;
               free(*(void**)ppVar5);
               *(undefined8*)ppVar5 = 0;
               ppVar5 = ppVar6;
            }
 while ( ppVar6 != this + 0x3b8 );
            buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
            return -0x32d7;
         }

      }
 else if (( (byte)this[0x319] & 0xfb ) == 0) {
         iVar3 = 1 << ( (byte)this[0x318] & 0x1f );
         iVar2 = 0x100;
         if (iVar3 < 0x101) {
            iVar2 = iVar3;
         }

         if (0 < iVar3) {
            iVar3 = 0;
            uVar4 = 0;
            ppVar5 = this + 9;
            do {
               iVar3 = iVar3 + 1;
               pVar1 = SUB41(uVar4 / ( iVar2 - 1U ), 0);
               uVar4 = uVar4 + 0xff;
               *(ushort*)ppVar5 = CONCAT11(pVar1, pVar1);
               ppVar5[2] = pVar1;
               ppVar5 = ppVar5 + 3;
            }
 while ( iVar3 < iVar2 );
         }

      }

      this[0x19f4] = (png_decoder)0x1;
      return 0;
   }

   return iVar2;
}
/* pv_png::get_png_info(void const*, unsigned long, pv_png::png_info&) */ulong pv_png::get_png_info(void *param_1, ulong param_2, png_info *param_3) {
   int iVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   png_file *ppVar4;
   png_decoder *this;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined **local_2048;
   void *local_2040;
   ulong local_2038;
   undefined8 local_2030;
   undefined8 local_2028[97];
   int local_1d1c;
   undefined8 local_1d18;
   byte local_1d10;
   byte local_1d0f;
   undefined8 local_1cf0[16];
   undefined8 local_1c70[9];
   char local_1c28;
   undefined4 local_1c24;
   char local_1c20;
   mz_stream_s local_1818[4552];
   undefined1 local_650[16];
   long local_640;
   long local_20;
   ppVar4 = (png_file*)&local_2048;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])param_3 = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_3 + 0x10 ) = (undefined1[16])0x0;
   if (param_1 == (void*)0x0 || param_2 < 0x2e) {
      uVar5 = 0;
   }
 else {
      this(png_decoder * local_2028);
      uVar5 = CONCAT71(( int7 )((ulong)param_3 >> 8), param_1 == (void*)0x0 || param_2 < 0x2e) & 0xffffffff;
      local_2048 = &PTR__png_readonly_memory_file_001047f0;
      local_2030 = 0;
      local_640 = 0;
      local_650 = (undefined1[16])0x0;
      local_2040 = param_1;
      local_2038 = param_2;
      png_decoder::clear(this);
      iVar1 = png_decoder::png_scan(this, ppVar4);
      if (( iVar1 == 0 ) && ( local_1d1c == 1 )) {
         *(undefined8*)param_3 = local_1d18;
         *(uint*)( param_3 + 0x10 ) = (uint)local_1d0f;
         *(uint*)( param_3 + 0xc ) = (uint)local_1d10;
         param_3[0x14] = ( png_info )(local_1c28 != '\0');
         *(undefined4*)( param_3 + 0x18 ) = local_1c24;
         param_3[0x1c] = ( png_info )(local_1c20 != '\0');
         if (local_1d0f == 4) {
            *(undefined4*)( param_3 + 8 ) = 2;
         }
 else if (local_1d0f < 5) {
            if (local_1d0f == 0) {
               *(uint*)( param_3 + 8 ) = 2 - ( uint )(local_1c20 == '\0');
            }
 else if (( byte )(local_1d0f - 2) < 2) {
               *(uint*)( param_3 + 8 ) = 4 - ( uint )(local_1c20 == '\0');
            }

         }
 else if (local_1d0f == 6) {
            *(undefined4*)( param_3 + 8 ) = 4;
         }

         uVar5 = 1;
      }

      local_2028[0] = 0;
      puVar2 = local_1cf0;
      do {
         puVar3 = puVar2 + 1;
         free((void*)*puVar2);
         *puVar2 = 0;
         puVar2 = puVar3;
      }
 while ( puVar3 != local_1c70 );
      buminiz::mz_inflateEnd(local_1818);
      if ((void*)local_650._0_8_ != (void*)0x0) {
         operator_delete((void*)local_650._0_8_, local_640 - local_650._0_8_);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* pv_png::png_decoder::png_decode_start() [clone .part.0] */int pv_png::png_decoder::png_decode_start(png_decoder *this) {
   mz_stream_s *pmVar1;
   undefined8 uVar2;
   png_decoder pVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   int iVar8;
   int iVar9;
   code *pcVar10;
   ulong uVar11;
   png_decoder *ppVar12;
   uint uVar13;
   ulong uVar14;
   png_decoder *ppVar15;
   long in_FS_OFFSET;
   uint local_4c;
   void *local_48;
   long local_40;
   uVar2 = _LC13;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (this[0x319]) {
      case (png_decoder)0x0:
    pVar3 = this[0x318];
    iVar4 = *(int *)(this + 0x310);
    if (pVar3 == (png_decoder)0x10) {
      *(int *)(this + 0x3c8) = iVar4 * 2;
      *(undefined8 *)(this + 0x3b8) = uVar2;
      uVar13 = (uint)(iVar4 << 4) >> 3;
      *(uint *)(this + 0x3c4) = uVar13;
      *(code **)(this + 0x3d0) = unpack_grey_16_2;
    }
    else {
      if (pVar3 == (png_decoder)0x1) {
        pcVar10 = unpack_grey_1;
      }
      else {
        pcVar10 = unpack_grey_2;
        if ((pVar3 != (png_decoder)0x2) && (pcVar10 = unpack_grey_8, pVar3 == (png_decoder)0x4)) {
          pcVar10 = unpack_grey_4;
        }
      }
      *(undefined4 *)(this + 0x3bc) = 1;
      *(code **)(this + 0x3d0) = pcVar10;
      *(int *)(this + 0x3b8) = (int)((byte)pVar3 + 7) >> 3;
      uVar13 = (uint)(byte)pVar3 * iVar4 + 7 >> 3;
      *(ulong *)(this + 0x3c4) = CONCAT44(iVar4,uVar13);
    }
    break;
      default:
    uVar13 = *(uint *)(this + 0x3c4);
    break;
      case (png_decoder)0x2:
    pVar3 = this[0x318];
    *(undefined4 *)(this + 0x3bc) = 4;
    iVar4 = (uint)((byte)pVar3 >> 3) + (uint)((byte)pVar3 >> 3) * 2;
    *(int *)(this + 0x3b8) = iVar4;
    uVar13 = iVar4 * *(int *)(this + 0x310);
    *(int *)(this + 0x3c8) = *(int *)(this + 0x310) << 2;
    *(uint *)(this + 0x3c4) = uVar13;
    if (pVar3 == (png_decoder)0x8) {
      *(code **)(this + 0x3d0) = unpack_true_8;
    }
    else if (pVar3 == (png_decoder)0x10) {
      *(code **)(this + 0x3d0) = unpack_true_16;
    }
    break;
      case (png_decoder)0x3:
    pVar3 = this[0x318];
    *(undefined4 *)(this + 0x3bc) = 1;
    *(int *)(this + 0x3b8) = (int)((byte)pVar3 + 7) >> 3;
    uVar13 = (uint)(byte)pVar3 * *(int *)(this + 0x310) + 7 >> 3;
    *(ulong *)(this + 0x3c4) = CONCAT44(*(int *)(this + 0x310),uVar13);
    switch(pVar3) {
    case (png_decoder)0x1:
      *(undefined8 *)(this + 0x3d0) = 0x100000;
      break;
    case (png_decoder)0x2:
      *(code **)(this + 0x3d0) = unpack_grey_2;
      break;
    case (png_decoder)0x4:
      *(code **)(this + 0x3d0) = unpack_grey_4;
      break;
    case (png_decoder)0x8:
      *(code **)(this + 0x3d0) = unpack_grey_8;
      break;
    case (png_decoder)0x10:
      *(code **)(this + 0x3d0) = unpack_grey_16;
    }
    break;
      case (png_decoder)0x4:
    pVar3 = this[0x318];
    *(undefined4 *)(this + 0x3bc) = 2;
    iVar4 = (uint)((byte)pVar3 >> 3) * 2;
    *(int *)(this + 0x3b8) = iVar4;
    uVar13 = iVar4 * *(int *)(this + 0x310);
    *(int *)(this + 0x3c8) = *(int *)(this + 0x310) * 2;
    *(uint *)(this + 0x3c4) = uVar13;
    if (pVar3 == (png_decoder)0x8) {
      *(code **)(this + 0x3d0) = unpack_grey_alpha_8;
    }
    else if (pVar3 == (png_decoder)0x10) {
      *(code **)(this + 0x3d0) = unpack_grey_alpha_16;
    }
    break;
      case (png_decoder)0x6:
    *(undefined4 *)(this + 0x3bc) = 4;
    iVar4 = (uint)((byte)this[0x318] >> 3) * 4;
    pcVar10 = unpack_true_alpha_16;
    if (this[0x318] == (png_decoder)0x8) {
      pcVar10 = unpack_true_alpha_8;
    }
    *(int *)(this + 0x3b8) = iVar4;
    uVar13 = iVar4 * *(int *)(this + 0x310);
    *(int *)(this + 0x3c8) = *(int *)(this + 0x310) << 2;
    *(code **)(this + 0x3d0) = pcVar10;
    *(uint *)(this + 0x3c4) = uVar13;
   }

   *(uint*)( this + 0x3c0 ) = uVar13 + 1;
   lVar5 = png_calloc(this, uVar13);
   *(long*)( this + 0x3d8 ) = lVar5;
   lVar6 = png_calloc(this, uVar13 + 1);
   *(long*)( this + 0x3e0 ) = lVar6;
   lVar7 = png_calloc(this, *(uint*)( this + 0x3c8 ));
   *(long*)( this + 1000 ) = lVar7;
   if (( lVar6 == 0 || lVar5 == 0 ) || ( lVar7 == 0 )) {
      if (*(int*)( this + 0x19f8 ) == 0) {
         *(undefined4*)( this + 0x19f8 ) = 0xffffff94;
      }

      *(undefined8*)this = 0;
      ppVar12 = this + 0x338;
      do {
         ppVar15 = ppVar12 + 8;
         free(*(void**)ppVar12);
         *(undefined8*)ppVar12 = 0;
         ppVar12 = ppVar15;
      }
 while ( this + 0x3b8 != ppVar15 );
      iVar4 = -0x6c;
      buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
      goto LAB_00102f15;
   }

   *(undefined4*)( this + 0x1880 ) = 0x1000;
   pmVar1 = (mz_stream_s*)( this + 0x810 );
   iVar4 = buminiz::mz_inflateInit(pmVar1);
   if (iVar4 != 0) {
      if (*(int*)( this + 0x19f8 ) == 0) {
         *(undefined4*)( this + 0x19f8 ) = 0xfffffffd;
      }

      *(undefined8*)this = 0;
      ppVar12 = this + 0x338;
      do {
         ppVar15 = ppVar12 + 8;
         free(*(void**)ppVar12);
         *(undefined8*)ppVar12 = 0;
         ppVar12 = ppVar15;
      }
 while ( this + 0x3b8 != ppVar15 );
      iVar4 = -3;
      buminiz::mz_inflateEnd(pmVar1);
      goto LAB_00102f15;
   }

   uVar2 = *(undefined8*)( this + 0x310 );
   if (this[0x31c] != (png_decoder)0x1) {
      *(undefined8*)( this + 0x1990 ) = uVar2;
      iVar4 = 0;
      goto LAB_00102f15;
   }

   iVar4 = (int)uVar2;
   if (iVar4 < 1) {
      *(undefined4*)( this + 0x19b0 ) = 0;
      iVar8 = 0;
      *(undefined1(*) [16])( this + 0x19a0 ) = (undefined1[16])0x0;
   }
 else {
      iVar8 = iVar4 + -1;
      *(int*)( this + 0x19a0 ) = ( iVar8 >> 3 ) + 1;
      if (iVar4 < 5) {
         *(undefined8*)( this + 0x19a4 ) = 0x100000000;
         if (2 < iVar4) goto LAB_00103154;
         *(undefined8*)( this + 0x19ac ) = 0x100000000;
         if (iVar4 == 1) {
            iVar8 = 0;
            goto LAB_00103171;
         }

      }
 else {
         *(int*)( this + 0x19a8 ) = ( iVar8 >> 2 ) + 1;
         *(int*)( this + 0x19a4 ) = ( iVar4 + -5 >> 3 ) + 1;
         LAB_00103154:*(int*)( this + 0x19b0 ) = ( iVar8 >> 1 ) + 1;
         *(int*)( this + 0x19ac ) = ( iVar4 + -3 >> 2 ) + 1;
      }

      iVar8 = ( iVar4 + -2 >> 1 ) + 1;
   }

   LAB_00103171:*(int*)( this + 0x19b4 ) = iVar8;
   iVar8 = (int)( (ulong)uVar2 >> 0x20 );
   if (iVar4 < 0) {
      iVar4 = 0;
   }

   *(int*)( this + 0x19b8 ) = iVar4;
   if (iVar8 < 1) {
      iVar4 = 0;
      *(undefined8*)( this + 0x19cc ) = 0;
      *(undefined1(*) [16])( this + 0x19bc ) = (undefined1[16])0x0;
   }
 else {
      iVar4 = iVar8 + -1;
      iVar9 = ( iVar4 >> 3 ) + 1;
      *(ulong*)( this + 0x19bc ) = CONCAT44(iVar9, iVar9);
      if (iVar8 < 5) {
         *(undefined8*)( this + 0x19c4 ) = 0x100000000;
         if (2 < iVar8) goto LAB_0010321d;
         *(undefined8*)( this + 0x19cc ) = 0x100000000;
         if (iVar8 != 2) {
            iVar4 = 0;
            goto LAB_0010323a;
         }

      }
 else {
         *(int*)( this + 0x19c8 ) = ( iVar4 >> 2 ) + 1;
         *(int*)( this + 0x19c4 ) = ( iVar8 + -5 >> 3 ) + 1;
         LAB_0010321d:*(int*)( this + 0x19d0 ) = ( iVar4 >> 1 ) + 1;
         *(int*)( this + 0x19cc ) = ( iVar8 + -3 >> 2 ) + 1;
      }

      iVar4 = ( iVar8 + -2 >> 1 ) + 1;
   }

   LAB_0010323a:*(int*)( this + 0x19d4 ) = iVar4;
   uVar14 = ( ulong )(uint)(iVar8 * *(int*)( this + 0x3c8 ));
   uVar11 = *(long*)( this + 0x19e0 ) - *(long*)( this + 0x19d8 );
   if (uVar11 < uVar14) {
      std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_default_append((vector<unsigned_char,std::allocator<unsigned_char>>*)( this + 0x19d8 ), uVar14 - uVar11);
   }
 else if (( uVar14 < uVar11 ) && ( lVar5 = *(long*)( this + 0x19d8 ) + uVar14 * (long*)( this + 0x19e0 ) != lVar5 )) {
      *(long*)( this + 0x19e0 ) = lVar5;
   }

   *(undefined8*)( this + 0x1994 ) = _LC14;
   do {
      local_4c = 0;
      iVar4 = png_decode(this, &local_48, &local_4c);
   }
 while ( iVar4 == 0 );
   if (iVar4 == -5) {
      *(undefined4*)( this + 0x19f0 ) = 1;
      *(undefined4*)( this + 0x1994 ) = *(undefined4*)( this + 0x314 );
      iVar4 = 0;
   }
 else {
      *(undefined8*)this = 0;
      ppVar12 = this + 0x338;
      do {
         ppVar15 = ppVar12 + 8;
         free(*(void**)ppVar12);
         *(undefined8*)ppVar12 = 0;
         ppVar12 = ppVar15;
      }
 while ( this + 0x3b8 != ppVar15 );
      buminiz::mz_inflateEnd(pmVar1);
   }

   LAB_00102f15:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* pv_png::png_decoder::png_decode_start() */ulong pv_png::png_decoder::png_decode_start(png_decoder *this) {
   uint uVar1;
   ulong uVar2;
   png_decoder *ppVar3;
   png_decoder *ppVar4;
   uVar1 = *(uint*)( this + 0x30c );
   if (uVar1 != 1) {
      if (*(int*)( this + 0x19f8 ) == 0) {
         *(uint*)( this + 0x19f8 ) = uVar1;
      }

      *(undefined8*)this = 0;
      ppVar3 = this + 0x338;
      do {
         ppVar4 = ppVar3 + 8;
         free(*(void**)ppVar3);
         *(undefined8*)ppVar3 = 0;
         ppVar3 = ppVar4;
      }
 while ( ppVar4 != this + 0x3b8 );
      buminiz::mz_inflateEnd((mz_stream_s*)( this + 0x810 ));
      return (ulong)uVar1;
   }

   uVar2 = png_decode_start(this);
   return uVar2;
}
/* pv_png::load_png(void const*, unsigned long, unsigned int, unsigned int&, unsigned int&, unsigned
   int&) */void *pv_png::load_png(void *param_1, ulong param_2, uint param_3, uint *param_4, uint *param_5, uint *param_6) {
   uint uVar1;
   uint uVar2;
   undefined1 uVar3;
   byte bVar4;
   uint uVar5;
   int iVar6;
   uint uVar7;
   byte *pbVar8;
   ulong uVar9;
   long lVar10;
   uint uVar11;
   int iVar12;
   ulong uVar13;
   byte *pbVar14;
   undefined8 *puVar15;
   undefined8 *puVar16;
   void *pvVar17;
   uint uVar18;
   uint uVar19;
   png_file *ppVar20;
   ulong uVar21;
   size_t __size;
   size_t sVar22;
   long in_FS_OFFSET;
   void *local_20b8;
   uint local_2074;
   byte *local_2070;
   undefined **local_2068;
   void *local_2060;
   ulong local_2058;
   undefined8 local_2050;
   undefined8 local_2048;
   byte abStack_203f[771];
   int local_1d3c;
   uint local_1d38;
   uint local_1d34;
   byte local_1d30;
   byte local_1d2f;
   undefined8 local_1d10[16];
   undefined8 local_1c90[10];
   char local_1c40;
   uint local_1c3c[257];
   mz_stream_s local_1838[4552];
   undefined1 local_670[16];
   long local_660;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_4 = 0;
   *param_5 = 0;
   *param_6 = 0;
   if (( param_2 < 0x2e || 4 < param_3 ) || ( param_1 == (void*)0x0 )) {
      local_20b8 = (void*)0x0;
      goto LAB_00103790;
   }

   local_2068 = &PTR__png_readonly_memory_file_001047f0;
   ppVar20 = (png_file*)&local_2068;
   local_2050 = 0;
   local_660 = 0;
   local_670 = (undefined1[16])0x0;
   local_2060 = param_1;
   local_2058 = param_2;
   png_decoder::clear((png_decoder*)&local_2048);
   iVar6 = png_decoder::png_scan((png_decoder*)&local_2048, ppVar20);
   if (( iVar6 == 0 ) && ( local_1d3c == 1 )) {
      if (local_1d2f == 4) {
         *param_6 = 2;
      }
 else if (local_1d2f < 5) {
         if (local_1d2f == 0) {
            *param_6 = 2 - ( local_1c40 == '\0' );
         }
 else if (( byte )(local_1d2f - 2) < 2) {
            *param_6 = 4 - ( local_1c40 == '\0' );
         }

      }
 else if (local_1d2f == 6) {
         *param_6 = 4;
      }

      if (param_3 == 0) {
         param_3 = *param_6;
      }

      *param_4 = local_1d38;
      *param_5 = local_1d34;
      uVar21 = ( ulong )(param_3 * *param_4);
      __size = uVar21 * local_1d34;
      if (( 0x7fffffff < __size ) || ( local_20b8 = malloc(__size) ),local_20b8 == (void*)0x0) goto LAB_00103718;
      iVar6 = png_decoder::png_decode_start((png_decoder*)&local_2048);
      if (iVar6 != 0) {
         LAB_00103c0a:free(local_20b8);
         goto LAB_00103718;
      }

      if (*param_5 != 0) {
         uVar18 = 0;
         pvVar17 = local_20b8;
         sVar22 = __size;
         LAB_00103840:iVar6 = png_decoder::png_decode((png_decoder*)&local_2048, &local_2070, &local_2074);
         if (iVar6 == 0) {
            switch (local_1d2f) {
               case 0:
          while (param_3 != 3) {
            if (param_3 < 4) {
              if (param_3 == 1) {
                if (local_1d30 == 0x10) {
                  uVar5 = *param_4;
                  if (uVar5 != 0) {
                    uVar13 = 0;
                    do {
                      *(byte *)((long)pvVar17 + uVar13) =
                           abStack_203f
                           [(int)((uint)local_2070[(uint)((int)uVar13 * 2)] +
                                 (uint)local_2070[(uint)((int)uVar13 * 2)] * 2)];
                      uVar13 = uVar13 + 1;
                    } while (uVar5 != uVar13);
                  }
                  goto switchD_00103875_caseD_1;
                }
                if (local_1d30 != 8) {
                  uVar5 = *param_4;
                  if (uVar5 != 0) {
                    uVar13 = 0;
                    do {
                      *(byte *)((long)pvVar17 + uVar13) =
                           abStack_203f
                           [(int)((uint)local_2070[uVar13] + (uint)local_2070[uVar13] * 2)];
                      uVar13 = uVar13 + 1;
                    } while (uVar5 != uVar13);
                  }
                  goto switchD_00103875_caseD_1;
                }
                __memcpy_chk(pvVar17,local_2070,uVar21,sVar22);
              }
              else if (param_3 == 2) {
                uVar5 = *param_4;
                if (local_1d30 == 0x10) {
                  if (uVar5 != 0) {
                    uVar11 = 0;
                    uVar19 = 0;
                    do {
                      uVar19 = uVar19 + 1;
                      *(byte *)((long)pvVar17 + (ulong)uVar11) =
                           abStack_203f
                           [(int)((uint)local_2070[uVar11] + (uint)local_2070[uVar11] * 2)];
                      uVar7 = uVar11 + 1;
                      uVar11 = uVar11 + 2;
                      *(byte *)((long)pvVar17 + (ulong)uVar7) = local_2070[uVar7];
                    } while (uVar19 != uVar5);
                  }
                }
                else if (local_1c40 == '\0') {
                  if (uVar5 != 0) {
                    uVar11 = 0;
                    pbVar8 = local_2070;
                    do {
                      bVar4 = *pbVar8;
                      pbVar8 = pbVar8 + 1;
                      *(byte *)((long)pvVar17 + (ulong)uVar11) =
                           abStack_203f[(int)((uint)bVar4 + (uint)bVar4 * 2)];
                      uVar19 = uVar11 + 1;
                      uVar11 = uVar11 + 2;
                      *(undefined1 *)((long)pvVar17 + (ulong)uVar19) = 0xff;
                    } while (local_2070 + uVar5 != pbVar8);
                  }
                }
                else if (uVar5 != 0) {
                  uVar11 = 0;
                  pbVar8 = local_2070;
                  do {
                    *(byte *)((long)pvVar17 + (ulong)uVar11) =
                         abStack_203f[(int)((uint)*pbVar8 + (uint)*pbVar8 * 2)];
                    bVar4 = *pbVar8;
                    uVar19 = uVar11 + 1;
                    pbVar8 = pbVar8 + 1;
                    uVar11 = uVar11 + 2;
                    *(char *)((long)pvVar17 + (ulong)uVar19) = -(bVar4 != local_1c3c[0]);
                  } while (local_2070 + uVar5 != pbVar8);
                }
                goto switchD_00103875_caseD_1;
              }
            }
            else if (param_3 == 4) {
              uVar5 = *param_4;
              if (local_1d30 == 0x10) {
                if (uVar5 != 0) {
                  uVar19 = 0;
                  uVar11 = 0;
                  uVar7 = 0;
                  do {
                    uVar7 = uVar7 + 1;
                    bVar4 = abStack_203f
                            [(int)((uint)local_2070[uVar11] + (uint)local_2070[uVar11] * 2)];
                    *(byte *)((long)pvVar17 + (ulong)uVar19) = bVar4;
                    *(byte *)((long)pvVar17 + (ulong)(uVar19 + 1)) = bVar4;
                    *(byte *)((long)pvVar17 + (ulong)(uVar19 + 2)) = bVar4;
                    uVar1 = uVar11 + 1;
                    uVar11 = uVar11 + 2;
                    uVar2 = uVar19 + 3;
                    uVar19 = uVar19 + 4;
                    *(byte *)((long)pvVar17 + (ulong)uVar2) = local_2070[uVar1];
                  } while (uVar7 != uVar5);
                }
              }
              else if (local_1c40 == '\0') {
                if (uVar5 != 0) {
                  uVar11 = 0;
                  pbVar8 = local_2070;
                  do {
                    bVar4 = *pbVar8;
                    pbVar8 = pbVar8 + 1;
                    bVar4 = abStack_203f[(int)((uint)bVar4 + (uint)bVar4 * 2)];
                    *(ushort *)((long)pvVar17 + (ulong)uVar11) = CONCAT11(bVar4,bVar4);
                    *(byte *)((long)pvVar17 + (ulong)(uVar11 + 2)) = bVar4;
                    uVar19 = uVar11 + 3;
                    uVar11 = uVar11 + 4;
                    *(undefined1 *)((long)pvVar17 + (ulong)uVar19) = 0xff;
                  } while (local_2070 + uVar5 != pbVar8);
                }
              }
              else if (uVar5 != 0) {
                uVar11 = 0;
                pbVar8 = local_2070;
                do {
                  bVar4 = abStack_203f[(int)((uint)*pbVar8 + (uint)*pbVar8 * 2)];
                  *(byte *)((long)pvVar17 + (ulong)uVar11) = bVar4;
                  *(byte *)((long)pvVar17 + (ulong)(uVar11 + 1)) = bVar4;
                  *(byte *)((long)pvVar17 + (ulong)(uVar11 + 2)) = bVar4;
                  bVar4 = *pbVar8;
                  uVar19 = uVar11 + 3;
                  pbVar8 = pbVar8 + 1;
                  uVar11 = uVar11 + 4;
                  *(char *)((long)pvVar17 + (ulong)uVar19) = -(bVar4 != local_1c3c[0]);
                } while (local_2070 + uVar5 != pbVar8);
              }
              goto switchD_00103875_caseD_1;
            }
            uVar18 = uVar18 + 1;
            uVar13 = sVar22;
            if (sVar22 <= __size) {
              uVar13 = __size;
            }
            uVar9 = (uVar21 + uVar13) - sVar22;
            if (uVar9 < uVar13) {
              uVar9 = uVar13;
            }
            pvVar17 = (void *)((long)pvVar17 + uVar21);
            sVar22 = (sVar22 - (uVar21 + uVar13)) + uVar9;
            if (*param_5 <= uVar18) goto LAB_00103720;
            iVar6 = png_decoder::png_decode((png_decoder *)&local_2048,&local_2070,&local_2074);
            if (iVar6 != 0) goto LAB_00103c0a;
          }
          uVar5 = *param_4;
          if (local_1d30 == 0x10) {
            if (uVar5 != 0) {
              uVar19 = 0;
              uVar11 = 0;
              do {
                uVar13 = (ulong)uVar19;
                uVar19 = uVar19 + 2;
                bVar4 = abStack_203f[(int)((uint)local_2070[uVar13] + (uint)local_2070[uVar13] * 2)]
                ;
                *(byte *)((long)pvVar17 + (ulong)uVar11) = bVar4;
                *(byte *)((long)pvVar17 + (ulong)(uVar11 + 1)) = bVar4;
                uVar7 = uVar11 + 2;
                uVar11 = uVar11 + 3;
                *(byte *)((long)pvVar17 + (ulong)uVar7) = bVar4;
              } while (uVar5 * 3 != uVar11);
            }
          }
          else if (uVar5 != 0) {
            uVar11 = 0;
            pbVar8 = local_2070;
            do {
              bVar4 = *pbVar8;
              pbVar8 = pbVar8 + 1;
              bVar4 = abStack_203f[(int)((uint)bVar4 + (uint)bVar4 * 2)];
              *(byte *)((long)pvVar17 + (ulong)uVar11) = bVar4;
              *(byte *)((long)pvVar17 + (ulong)(uVar11 + 1)) = bVar4;
              uVar19 = uVar11 + 2;
              uVar11 = uVar11 + 3;
              *(byte *)((long)pvVar17 + (ulong)uVar19) = bVar4;
            } while (uVar5 * 3 != uVar11);
          }
          break;
               case 2:
               case 6:
          if (param_3 == 3) {
            uVar5 = *param_4;
            if (uVar5 != 0) {
              uVar19 = 0;
              uVar11 = 0;
              do {
                uVar13 = (ulong)uVar19;
                uVar19 = uVar19 + 4;
                pbVar8 = local_2070 + uVar13;
                *(byte *)((long)pvVar17 + (ulong)uVar11) = *pbVar8;
                *(byte *)((long)pvVar17 + (ulong)(uVar11 + 1)) = pbVar8[1];
                uVar7 = uVar11 + 2;
                uVar11 = uVar11 + 3;
                *(byte *)((long)pvVar17 + (ulong)uVar7) = pbVar8[2];
              } while (uVar5 * 3 != uVar11);
            }
          }
          else if (param_3 < 4) {
            if (param_3 == 1) {
              uVar5 = *param_4;
              if (uVar5 != 0) {
                uVar13 = 0;
                do {
                  pbVar8 = local_2070 + (uint)((int)uVar13 * 4);
                  *(char *)((long)pvVar17 + uVar13) =
                       (char)((uint)*pbVar8 * 0x3672 + 0x8000 + (uint)pbVar8[1] * 0xb715 +
                              (uint)pbVar8[2] * 0x1279 >> 0x10);
                  uVar13 = uVar13 + 1;
                } while (uVar5 != uVar13);
              }
            }
            else if ((param_3 == 2) && (uVar5 = *param_4, uVar5 != 0)) {
              uVar19 = 0;
              uVar11 = 0;
              do {
                uVar7 = uVar11 * 4;
                uVar11 = uVar11 + 1;
                pbVar8 = local_2070 + uVar7;
                *(char *)((long)pvVar17 + (ulong)uVar19) =
                     (char)((uint)*pbVar8 * 0x3672 + 0x8000 + (uint)pbVar8[1] * 0xb715 +
                            (uint)pbVar8[2] * 0x1279 >> 0x10);
                uVar7 = uVar19 + 1;
                uVar19 = uVar19 + 2;
                *(byte *)((long)pvVar17 + (ulong)uVar7) = pbVar8[3];
              } while (uVar11 != uVar5);
            }
          }
          else if (param_3 == 4) {
            __memcpy_chk(pvVar17,local_2070,uVar21,sVar22);
          }
          break;
               case 3:
          while (param_3 != 3) {
            if (param_3 < 4) {
              if (param_3 == 1) {
                uVar5 = *param_4;
                if (uVar5 != 0) {
                  uVar13 = 0;
                  do {
                    iVar6 = (uint)local_2070[uVar13] + (uint)local_2070[uVar13] * 2;
                    lVar10 = (long)(iVar6 + 9);
                    *(char *)((long)pvVar17 + uVar13) =
                         (char)((uint)*(byte *)((long)&local_2048 + lVar10 + 2) * 0x1279 +
                                (uint)abStack_203f[iVar6] * 0x3672 + 0x8000 +
                                (uint)*(byte *)((long)&local_2048 + lVar10 + 1) * 0xb715 >> 0x10);
                    uVar13 = uVar13 + 1;
                  } while (uVar5 != uVar13);
                }
                goto switchD_00103875_caseD_1;
              }
              if (param_3 == 2) {
                uVar5 = *param_4;
                if (local_1c40 == '\0') {
                  if (uVar5 != 0) {
                    uVar11 = 0;
                    pbVar8 = local_2070;
                    do {
                      bVar4 = *pbVar8;
                      pbVar8 = pbVar8 + 1;
                      iVar6 = (uint)bVar4 + (uint)bVar4 * 2;
                      lVar10 = (long)(iVar6 + 9);
                      *(char *)((long)pvVar17 + (ulong)uVar11) =
                           (char)((uint)*(byte *)((long)&local_2048 + lVar10 + 2) * 0x1279 +
                                  (uint)abStack_203f[iVar6] * 0x3672 + 0x8000 +
                                  (uint)*(byte *)((long)&local_2048 + lVar10 + 1) * 0xb715 >> 0x10);
                      uVar19 = uVar11 + 1;
                      uVar11 = uVar11 + 2;
                      *(undefined1 *)((long)pvVar17 + (ulong)uVar19) = 0xff;
                    } while (local_2070 + uVar5 != pbVar8);
                  }
                }
                else if (uVar5 != 0) {
                  uVar11 = 0;
                  pbVar8 = local_2070;
                  do {
                    pbVar14 = pbVar8 + 1;
                    iVar6 = (uint)*pbVar8 + (uint)*pbVar8 * 2;
                    lVar10 = (long)(iVar6 + 9);
                    *(char *)((long)pvVar17 + (ulong)uVar11) =
                         (char)((uint)*(byte *)((long)&local_2048 + lVar10 + 2) * 0x1279 +
                                (uint)abStack_203f[iVar6] * 0x3672 + 0x8000 +
                                (uint)*(byte *)((long)&local_2048 + lVar10 + 1) * 0xb715 >> 0x10);
                    uVar19 = uVar11 + 1;
                    uVar11 = uVar11 + 2;
                    *(char *)((long)pvVar17 + (ulong)uVar19) = (char)local_1c3c[*pbVar8];
                    pbVar8 = pbVar14;
                  } while (local_2070 + uVar5 != pbVar14);
                }
                goto switchD_00103875_caseD_1;
              }
            }
            else if (param_3 == 4) {
              uVar5 = *param_4;
              if (local_1c40 == '\0') {
                if (uVar5 != 0) {
                  uVar13 = 0;
                  pbVar8 = local_2070;
                  do {
                    bVar4 = *pbVar8;
                    pbVar8 = pbVar8 + 1;
                    iVar6 = (uint)bVar4 + (uint)bVar4 * 2;
                    lVar10 = (long)(iVar6 + 9);
                    iVar12 = (int)uVar13;
                    uVar3 = *(undefined1 *)((long)&local_2048 + lVar10 + 2);
                    *(ushort *)((long)pvVar17 + uVar13) =
                         CONCAT11(*(undefined1 *)((long)&local_2048 + lVar10 + 1),
                                  abStack_203f[iVar6]);
                    *(undefined1 *)((long)pvVar17 + (ulong)(iVar12 + 2)) = uVar3;
                    uVar13 = (ulong)(iVar12 + 4);
                    *(undefined1 *)((long)pvVar17 + (ulong)(iVar12 + 3)) = 0xff;
                  } while (local_2070 + uVar5 != pbVar8);
                }
              }
              else if (uVar5 != 0) {
                uVar11 = 0;
                pbVar8 = local_2070;
                do {
                  pbVar14 = pbVar8 + 1;
                  iVar6 = (uint)*pbVar8 + (uint)*pbVar8 * 2;
                  lVar10 = (long)(iVar6 + 9);
                  *(byte *)((long)pvVar17 + (ulong)uVar11) = abStack_203f[iVar6];
                  uVar3 = *(undefined1 *)((long)&local_2048 + lVar10 + 2);
                  *(undefined1 *)((long)pvVar17 + (ulong)(uVar11 + 1)) =
                       *(undefined1 *)((long)&local_2048 + lVar10 + 1);
                  *(undefined1 *)((long)pvVar17 + (ulong)(uVar11 + 2)) = uVar3;
                  uVar19 = uVar11 + 3;
                  uVar11 = uVar11 + 4;
                  *(char *)((long)pvVar17 + (ulong)uVar19) = (char)local_1c3c[*pbVar8];
                  pbVar8 = pbVar14;
                } while (local_2070 + uVar5 != pbVar14);
              }
              goto switchD_00103875_caseD_1;
            }
            uVar18 = uVar18 + 1;
            uVar13 = sVar22;
            if (sVar22 <= __size) {
              uVar13 = __size;
            }
            uVar9 = (uVar21 + uVar13) - sVar22;
            if (uVar9 < uVar13) {
              uVar9 = uVar13;
            }
            pvVar17 = (void *)((long)pvVar17 + uVar21);
            sVar22 = (sVar22 - (uVar21 + uVar13)) + uVar9;
            if (*param_5 <= uVar18) goto LAB_00103720;
            iVar6 = png_decoder::png_decode((png_decoder *)&local_2048,&local_2070,&local_2074);
            if (iVar6 != 0) goto LAB_00103c0a;
          }
          uVar5 = *param_4;
          if (uVar5 != 0) {
            uVar11 = 0;
            pbVar8 = local_2070;
            do {
              bVar4 = *pbVar8;
              pbVar8 = pbVar8 + 1;
              iVar6 = (uint)bVar4 + (uint)bVar4 * 2;
              lVar10 = (long)(iVar6 + 9);
              *(byte *)((long)pvVar17 + (ulong)uVar11) = abStack_203f[iVar6];
              uVar3 = *(undefined1 *)((long)&local_2048 + lVar10 + 2);
              *(undefined1 *)((long)pvVar17 + (ulong)(uVar11 + 1)) =
                   *(undefined1 *)((long)&local_2048 + lVar10 + 1);
              uVar19 = uVar11 + 2;
              uVar11 = uVar11 + 3;
              *(undefined1 *)((long)pvVar17 + (ulong)uVar19) = uVar3;
            } while (uVar5 * 3 != uVar11);
          }
          break;
               case 4:
          while (param_3 != 3) {
            if (param_3 < 4) {
              if (param_3 == 1) {
                uVar5 = *param_4;
                if (uVar5 != 0) {
                  uVar13 = 0;
                  do {
                    *(byte *)((long)pvVar17 + uVar13) =
                         abStack_203f
                         [(int)((uint)local_2070[(uint)((int)uVar13 * 2)] +
                               (uint)local_2070[(uint)((int)uVar13 * 2)] * 2)];
                    uVar13 = uVar13 + 1;
                  } while (uVar5 != uVar13);
                }
                goto switchD_00103875_caseD_1;
              }
              if (param_3 == 2) goto LAB_00103ba2;
            }
            else if (param_3 == 4) {
              uVar5 = *param_4;
              if (uVar5 != 0) {
                uVar11 = 0;
                uVar13 = 0;
                uVar19 = 0;
                do {
                  iVar6 = (int)uVar13;
                  uVar19 = uVar19 + 1;
                  bVar4 = abStack_203f
                          [(int)((uint)local_2070[uVar13] + (uint)local_2070[uVar13] * 2)];
                  *(byte *)((long)pvVar17 + (ulong)uVar11) = bVar4;
                  *(byte *)((long)pvVar17 + (ulong)(uVar11 + 1)) = bVar4;
                  *(byte *)((long)pvVar17 + (ulong)(uVar11 + 2)) = bVar4;
                  uVar13 = (ulong)(iVar6 + 2);
                  uVar7 = uVar11 + 3;
                  uVar11 = uVar11 + 4;
                  *(byte *)((long)pvVar17 + (ulong)uVar7) = local_2070[iVar6 + 1];
                } while (uVar19 != uVar5);
              }
              goto switchD_00103875_caseD_1;
            }
            uVar18 = uVar18 + 1;
            uVar13 = sVar22;
            if (sVar22 <= __size) {
              uVar13 = __size;
            }
            uVar9 = (uVar21 + uVar13) - sVar22;
            if (uVar9 < uVar13) {
              uVar9 = uVar13;
            }
            pvVar17 = (void *)((long)pvVar17 + uVar21);
            sVar22 = (sVar22 - (uVar21 + uVar13)) + uVar9;
            if (*param_5 <= uVar18) goto LAB_00103720;
            iVar6 = png_decoder::png_decode((png_decoder *)&local_2048,&local_2070,&local_2074);
            if (iVar6 != 0) goto LAB_00103c0a;
          }
          uVar5 = *param_4;
          if (uVar5 != 0) {
            uVar19 = 0;
            uVar11 = 0;
            do {
              uVar13 = (ulong)uVar19;
              uVar19 = uVar19 + 2;
              bVar4 = abStack_203f[(int)((uint)local_2070[uVar13] + (uint)local_2070[uVar13] * 2)];
              *(byte *)((long)pvVar17 + (ulong)uVar11) = bVar4;
              *(byte *)((long)pvVar17 + (ulong)(uVar11 + 1)) = bVar4;
              uVar7 = uVar11 + 2;
              uVar11 = uVar11 + 3;
              *(byte *)((long)pvVar17 + (ulong)uVar7) = bVar4;
            } while (uVar5 * 3 != uVar11);
          }
            }

            goto switchD_00103875_caseD_1;
         }

         goto LAB_00103c0a;
      }

   }
 else {
      LAB_00103718:local_20b8 = (void*)0x0;
   }

   LAB_00103720:local_2048 = 0;
   puVar15 = local_1d10;
   do {
      puVar16 = puVar15 + 1;
      free((void*)*puVar15);
      *puVar15 = 0;
      puVar15 = puVar16;
   }
 while ( local_1c90 != puVar16 );
   buminiz::mz_inflateEnd(local_1838);
   if ((void*)local_670._0_8_ != (void*)0x0) {
      operator_delete((void*)local_670._0_8_, local_660 - local_670._0_8_);
   }

   LAB_00103790:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_20b8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00103ba2:if (local_1d30 < 8) goto LAB_001041ef;
   uVar18 = uVar18 + 1;
   __memcpy_chk(pvVar17, local_2070, uVar21, sVar22);
   uVar13 = sVar22;
   if (sVar22 <= __size) {
      uVar13 = __size;
   }

   uVar9 = ( uVar21 + uVar13 ) - sVar22;
   if (uVar9 < uVar13) {
      uVar9 = uVar13;
   }

   pvVar17 = (void*)( (long)pvVar17 + uVar21 );
   sVar22 = ( sVar22 - ( uVar21 + uVar13 ) ) + uVar9;
   if (*param_5 <= uVar18) goto LAB_00103720;
   iVar6 = png_decoder::png_decode((png_decoder*)&local_2048, &local_2070, &local_2074);
   if (iVar6 != 0) goto LAB_00103c0a;
   goto LAB_00103ba2;
   LAB_001041ef:uVar5 = *param_4;
   if (uVar5 != 0) {
      uVar11 = 0;
      uVar19 = 0;
      do {
         uVar19 = uVar19 + 1;
         *(byte*)( (long)pvVar17 + (ulong)uVar11 ) = abStack_203f[(int)( (uint)local_2070[uVar11] + (uint)local_2070[uVar11] * 2 )];
         uVar7 = uVar11 + 1;
         uVar11 = uVar11 + 2;
         *(byte*)( (long)pvVar17 + (ulong)uVar7 ) = local_2070[uVar7];
      }
 while ( uVar19 != uVar5 );
   }

   switchD_00103875_caseD_1:uVar18 = uVar18 + 1;
   uVar13 = sVar22;
   if (sVar22 <= __size) {
      uVar13 = __size;
   }

   uVar9 = ( uVar21 + uVar13 ) - sVar22;
   if (uVar9 < uVar13) {
      uVar9 = uVar13;
   }

   pvVar17 = (void*)( (long)pvVar17 + uVar21 );
   sVar22 = ( sVar22 - ( uVar21 + uVar13 ) ) + uVar9;
   if (*param_5 <= uVar18) goto LAB_00103720;
   goto LAB_00103840;
}
/* pv_png::png_readonly_memory_file::~png_readonly_memory_file() */void pv_png::png_readonly_memory_file::~png_readonly_memory_file(png_readonly_memory_file *this) {
   return;
}
/* pv_png::png_readonly_memory_file::resize(unsigned long) */undefined8 pv_png::png_readonly_memory_file::resize(ulong param_1) {
   return 0;
}
/* pv_png::png_readonly_memory_file::get_size() */undefined8 pv_png::png_readonly_memory_file::get_size(png_readonly_memory_file *this) {
   return *(undefined8*)( this + 0x10 );
}
/* pv_png::png_readonly_memory_file::tell() */undefined8 pv_png::png_readonly_memory_file::tell(png_readonly_memory_file *this) {
   return *(undefined8*)( this + 0x18 );
}
/* pv_png::png_readonly_memory_file::seek(unsigned long) */undefined8 pv_png::png_readonly_memory_file::seek(png_readonly_memory_file *this, ulong param_1) {
   *(ulong*)( this + 0x18 ) = param_1;
   return 1;
}
/* pv_png::png_readonly_memory_file::write(void const*, unsigned long) */undefined8 pv_png::png_readonly_memory_file::write(void *param_1, ulong param_2) {
   return 0;
}
/* pv_png::png_readonly_memory_file::read(void*, unsigned long) */size_t pv_png::png_readonly_memory_file::read(png_readonly_memory_file *this, void *param_1, ulong param_2) {
   ulong uVar1;
   ulong uVar2;
   ulong __n;
   __n = 0;
   uVar1 = *(ulong*)( this + 0x18 );
   if (uVar1 < *(ulong*)( this + 0x10 )) {
      uVar2 = *(ulong*)( this + 0x10 ) - uVar1;
      __n = param_2;
      if (uVar2 <= param_2) {
         __n = uVar2;
      }

      memcpy(param_1, (void*)( uVar1 + *(long*)( this + 8 ) ), __n);
      *(ulong*)( this + 0x18 ) = *(long*)( this + 0x18 ) + __n;
   }

   return __n;
}
/* pv_png::png_readonly_memory_file::~png_readonly_memory_file() */void pv_png::png_readonly_memory_file::~png_readonly_memory_file(png_readonly_memory_file *this) {
   operator_delete(this, 0x20);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* std::vector<unsigned char, std::allocator<unsigned char> >::_M_default_append(unsigned long) */void std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_default_append(vector<unsigned_char,std::allocator<unsigned_char>> *this, ulong param_1) {
   ulong uVar1;
   undefined1 *puVar2;
   void *__src;
   ulong uVar3;
   void *__dest;
   undefined1 *puVar4;
   ulong uVar5;
   if (param_1 == 0) {
      return;
   }

   puVar2 = *(undefined1**)( this + 8 );
   __src = *(void**)this;
   if (param_1 <= ( ulong )(*(long*)( this + 0x10 ) - (long)puVar2)) {
      *puVar2 = 0;
      puVar4 = puVar2 + 1;
      if (param_1 != 1) {
         puVar4 = puVar2 + param_1;
         memset(puVar2 + 1, 0, param_1 - 1);
      }

      *(undefined1**)( this + 8 ) = puVar4;
      return;
   }

   uVar3 = (long)puVar2 - (long)__src;
   if (0x7fffffffffffffff - uVar3 < param_1) {
      std::__throw_length_error("vector::_M_default_append");
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   uVar1 = param_1 + uVar3;
   if (uVar3 < param_1) {
      uVar5 = 0x7fffffffffffffff;
      if (uVar1 < 0x8000000000000000) {
         uVar5 = uVar1;
      }

      __dest = operator_new(uVar5);
      *(undefined1*)( (long)__dest + uVar3 ) = 0;
      if (param_1 != 1) {
         memset((undefined1*)( (long)__dest + uVar3 ) + 1, 0, param_1 - 1);
      }

      if (uVar3 != 0) goto LAB_00104672;
      if (__src == (void*)0x0) goto LAB_0010468f;
      uVar3 = *(long*)( this + 0x10 ) - (long)__src;
   }
 else {
      uVar5 = uVar3 * 2;
      if (0x7fffffffffffffff < uVar5) {
         uVar5 = 0x7fffffffffffffff;
      }

      __dest = operator_new(uVar5);
      *(undefined1*)( (long)__dest + uVar3 ) = 0;
      if (param_1 != 1) {
         memset((undefined1*)( (long)__dest + uVar3 ) + 1, 0, param_1 - 1);
      }

      LAB_00104672:memmove(__dest, __src, uVar3);
      uVar3 = *(long*)( this + 0x10 ) - (long)__src;
   }

   operator_delete(__src, uVar3);
   LAB_0010468f:*(void**)this = __dest;
   *(ulong*)( this + 8 ) = uVar1 + (long)__dest;
   *(ulong*)( this + 0x10 ) = (long)__dest + uVar5;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* pv_png::png_readonly_memory_file::~png_readonly_memory_file() */void pv_png::png_readonly_memory_file::~png_readonly_memory_file(png_readonly_memory_file *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

