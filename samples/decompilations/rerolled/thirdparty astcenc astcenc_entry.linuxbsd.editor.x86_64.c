/* std::_Function_handler<unsigned int (), astcenc_compress_image(astcenc_context*, astcenc_image*,
   astcenc_swizzle const*, unsigned char*, unsigned long, unsigned
   int)::{lambda()#1}>::_M_invoke(std::_Any_data const&) */void std::_Function_handler<unsigned_int(),astcenc_compress_image(astcenc_context*,astcenc_image*,astcenc_swizzle_const*,unsigned_char*,unsigned_long,unsigned_int)::{lambda()#1}>::_M_invoke(_Any_data *param_1) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   astcenc_swizzle *paVar4;
   astcenc_image *paVar5;
   void *pvVar6;
   plVar1 = *(long**)param_1;
   piVar2 = (int*)plVar1[1];
   lVar3 = *plVar1;
   pvVar6 = operator_new__(( ulong )(uint)(*piVar2 * piVar2[1] * piVar2[2]) << 2);
   paVar4 = (astcenc_swizzle*)plVar1[2];
   paVar5 = (astcenc_image*)plVar1[1];
   *(void**)( lVar3 + 0x88 ) = pvVar6;
   init_compute_averages(paVar5, *(uint*)( *plVar1 + 0x24 ), paVar4, (avg_args*)( *plVar1 + 0x98 ));
   return;
}
/* std::_Function_handler<void (), astcenc_compress_image(astcenc_context*, astcenc_image*,
   astcenc_swizzle const*, unsigned char*, unsigned long, unsigned
   int)::{lambda()#2}>::_M_invoke(std::_Any_data const&) */void std::_Function_handler<void(),astcenc_compress_image(astcenc_context*,astcenc_image*,astcenc_swizzle_const*,unsigned_char*,unsigned_long,unsigned_int)::{lambda()#2}>::_M_invoke(_Any_data *param_1) {
   long lVar1;
   lVar1 = *(long*)param_1;
   if (*(void**)( lVar1 + 0x88 ) != (void*)0x0) {
      operator_delete__(*(void**)( lVar1 + 0x88 ));
      lVar1 = *(long*)param_1;
   }

   *(undefined8*)( lVar1 + 0x88 ) = 0;
   return;
}
/* std::_Function_handler<void (), astcenc_compress_image(astcenc_context*, astcenc_image*,
   astcenc_swizzle const*, unsigned char*, unsigned long, unsigned
   int)::{lambda()#2}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation)
    */undefined8 std::_Function_handler<void(),astcenc_compress_image(astcenc_context*,astcenc_image*,astcenc_swizzle_const*,unsigned_char*,unsigned_long,unsigned_int)::{lambda()#2}>::_M_manager(undefined8 *param_1, undefined8 *param_2, int param_3) {
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = param_2;
      }
 else if (param_3 == 2) {
         *param_1 = *param_2;
      }

      return 0;
   }

   *param_1 = &astcenc_compress_image(astcenc_context*,astcenc_image*,astcenc_swizzle_const*,unsigned_char*,unsigned_long,unsigned_int)
              ::{lambda()
   #2
   return 0;
}
/* std::_Function_handler<unsigned int (), astcenc_compress_image(astcenc_context*, astcenc_image*,
   astcenc_swizzle const*, unsigned char*, unsigned long, unsigned
   int)::{lambda()#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation)
    */undefined8 std::_Function_handler<unsigned_int(),astcenc_compress_image(astcenc_context*,astcenc_image*,astcenc_swizzle_const*,unsigned_char*,unsigned_long,unsigned_int)::{lambda()#1}>::_M_manager(long *param_1, long *param_2, int param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (param_3 != 0) {
      if (param_3 == 1) {
         *param_1 = *param_2;
      }
 else if (param_3 == 2) {
         puVar1 = (undefined8*)*param_2;
         puVar3 = (undefined8*)operator_new(0x18);
         uVar2 = puVar1[1];
         *puVar3 = *puVar1;
         puVar3[1] = uVar2;
         puVar3[2] = puVar1[2];
         *param_1 = (long)puVar3;
      }
 else if (( param_3 == 3 ) && ( (void*)*param_1 != (void*)0x0 )) {
         operator_delete((void*)*param_1, 0x18);
      }

      return 0;
   }

   *param_1 = (long)&astcenc_compress_image(astcenc_context*,astcenc_image*,astcenc_swizzle_const*,unsigned_char*,unsigned_long,unsigned_int)
                    ::{lambda()
   #1
   return 0;
}
/* validate_flags(astcenc_profile, unsigned int) */undefined8 validate_flags(int param_1, uint param_2) {
   ulong uVar1;
   undefined8 uVar2;
   uVar2 = 8;
   uVar1 = ( ulong )(param_2 & 0xffffff80) - ( ulong )(( param_2 & 0xffffff80 ) >> 1 & 0x55555540);
   uVar1 = ( uVar1 & 0x3333333333333333 ) + ( uVar1 >> 2 & 0x3333333333333333 );
   if (( ( ( uVar1 + ( uVar1 >> 4 ) & 0xf0f0f0f0f0f0f0f ) * 0x101010101010101 >> 0x38 == 0 ) && ( uVar1 = ( ( ulong )(param_2 & 0x41) & 0x3333333333333333 ) + ( ulong )(( param_2 & 0x41 ) >> 2)(uVar1 + ( uVar1 >> 4 ) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 != 2 ) ) && ( ( ( param_2 & 2 ) == 0 || ( uVar2 = 0xb ),1 < param_1 - 2U ) )) {
      uVar2 = 0;
   }

   return uVar2;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* compress_image(astcenc_context&, unsigned int, astcenc_image const&, astcenc_swizzle const&,
   unsigned char*) */void compress_image(astcenc_context *param_1, uint param_2, astcenc_image *param_3, astcenc_swizzle *param_4, uchar *param_5) {
   pthread_mutex_t *__mutex;
   astcenc_context *paVar1;
   uint uVar2;
   int iVar3;
   byte bVar4;
   byte bVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   byte *pbVar9;
   undefined8 uVar10;
   long lVar11;
   ulong uVar12;
   int iVar13;
   int iVar14;
   bool bVar15;
   bool bVar16;
   int iVar17;
   int iVar18;
   uint uVar19;
   uint uVar20;
   float *pfVar21;
   bool bVar22;
   uint uVar23;
   uint uVar24;
   int iVar25;
   int iVar26;
   uint uVar28;
   uint uVar29;
   int iVar30;
   uint uVar31;
   int iVar32;
   int iVar33;
   long in_FS_OFFSET;
   float fVar34;
   code *local_1060;
   image_block local_1018[3516];
   char local_25c;
   undefined1 local_258[16];
   undefined1 local_248[16];
   undefined1 local_238[16];
   undefined1 local_228[16];
   undefined8 local_218;
   undefined8 uStack_210;
   undefined1 local_208;
   byte local_207;
   long local_40;
   int iVar27;
   iVar25 = *(int*)( param_3 + 8 );
   pbVar9 = *(byte**)( param_1 + 0x80 );
   local_218 = *(undefined8*)( param_1 + 0x14 );
   uStack_210 = *(undefined8*)( param_1 + 0x1c );
   __mutex = (pthread_mutex_t*)( param_1 + 0x198 );
   bVar4 = *pbVar9;
   bVar5 = pbVar9[1];
   uVar10 = *(undefined8*)( param_1 + 0x70 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = *(int*)param_1;
   uVar31 = (uint)bVar4;
   uVar29 = (uint)bVar5;
   uVar28 = (uint)pbVar9[2];
   local_25c = bVar4 * bVar5 * pbVar9[2];
   iVar7 = *(int*)( param_3 + 4 );
   iVar8 = *(int*)param_3;
   uVar12 = (long)(int)( iVar8 + -1 + (uint)bVar4 ) / (long)(int)(uint)bVar4;
   iVar17 = (int)( iVar7 + -1 + (uint)bVar5 ) / (int)(uint)bVar5;
   iVar33 = (int)uVar12;
   local_207 = ( byte )(*(uint*)( param_1 + 4 ) >> 1) & 1;
   lVar11 = *(long*)( param_1 + 0x90 );
   iVar18 = pthread_mutex_lock(__mutex);
   fVar34 = _LC2;
   if (iVar18 == 0) {
      if (param_1[0x1c0] == (astcenc_context)0x0) {
         *(undefined8*)( param_1 + 0x208 ) = uVar10;
         param_1[0x1c0] = (astcenc_context)0x1;
         uVar19 = ( (int)( iVar25 + -1 + uVar28 ) / (int)uVar28 ) * iVar17 * iVar33;
         *(uint*)( param_1 + 0x200 ) = uVar19;
         fVar34 = ( fVar34 / (float)uVar19 ) * _LC0;
         if (fVar34 <= _LC1) {
            fVar34 = _LC1;
         }

         *(float*)( param_1 + 0x238 ) = fVar34;
      }

      pthread_mutex_unlock(__mutex);
      if (( ( ( *(int*)param_4 == 0 ) && ( *(int*)( param_4 + 4 ) == 1 ) ) && ( *(int*)( param_4 + 8 ) == 2 ) ) && ( ( ( *(int*)( param_4 + 0xc ) == 3 && ( 1 < iVar6 - 2U ) ) && ( ( uVar28 == 1 && ( *(int*)( param_3 + 0xc ) == 0 ) ) ) ) )) {
         local_1060 = load_image_block_fast_ldr;
      }
 else {
         local_1060 = load_image_block;
      }

      while (true) {
         LOCK();
         paVar1 = param_1 + 0x1f8;
         uVar19 = *(uint*)paVar1;
         *(uint*)paVar1 = *(uint*)paVar1 + 0x10;
         UNLOCK();
         if (*(uint*)( param_1 + 0x200 ) <= uVar19) break;
         uVar20 = *(uint*)( param_1 + 0x200 ) - uVar19;
         if (0x10 < uVar20) {
            uVar20 = 0x10;
         }

         uVar2 = uVar19 + uVar20;
         if (uVar19 < uVar2) {
            do {
               uVar23 = uVar19 / ( uint )(iVar17 * iVar33);
               uVar24 = uVar19 - iVar17 * iVar33 * uVar23;
               iVar32 = (int)( (ulong)uVar24 / ( uVar12 & 0xffffffff ) );
               iVar25 = uVar24 - iVar33 * iVar32;
               iVar18 = uVar31 * iVar25;
               iVar30 = uVar29 * iVar32;
               bVar22 = *(int*)( param_1 + 0x24 ) != 0 && uVar28 == 1;
               if (bVar22) {
                  iVar3 = *(int*)( param_1 + 0x24 ) * 2 + -2;
                  iVar13 = uVar31 + iVar18;
                  if (iVar8 < (int)( uVar31 + iVar18 )) {
                     iVar13 = iVar8;
                  }

                  iVar14 = uVar29 + iVar30;
                  if (iVar7 < (int)( uVar29 + iVar30 )) {
                     iVar14 = iVar7;
                  }

                  if (iVar30 < iVar14) {
                     iVar26 = iVar30;
                     bVar16 = false;
                     do {
                        iVar27 = iVar26;
                        bVar15 = bVar16;
                        if (iVar18 < iVar13) {
                           pfVar21 = (float*)( *(long*)( param_1 + 0x88 ) + ( (long)iVar18 + (long)( iVar8 * iVar26 ) ) * 4 );
                           do {
                              iVar27 = iVar14;
                              bVar15 = bVar22;
                              if (_LC4 / ( (float)(int)( ( uVar31 + iVar3 ) * ( iVar3 + uVar29 ) ) * __LC3 ) < *pfVar21) break;
                              pfVar21 = pfVar21 + 1;
                              iVar27 = iVar26;
                              bVar15 = bVar16;
                           }
 while ( (float*)( *(long*)( param_1 + 0x88 ) + ( (long)( iVar8 * iVar26 ) + ( ulong )(uint)(iVar13 - iVar18) + (long)iVar18 ) * 4 ) != pfVar21 );
                        }

                        iVar26 = iVar27 + 1;
                        bVar16 = bVar15;
                     }
 while ( iVar26 < iVar14 );
                     if (bVar15) goto LAB_0010043f;
                  }

                  local_208 = 1;
                  local_258 = (undefined1[16])0x0;
                  local_248 = (undefined1[16])0x0;
                  local_238 = (undefined1[16])0x0;
                  local_228 = (undefined1[16])0x0;
               }
 else {
                  LAB_0010043f:( *local_1060 )(iVar6, param_3, local_1018, pbVar9, iVar18, iVar30, uVar28 * uVar23, param_4);
                  if (( (byte)param_1[4] & 4 ) != 0) {
                     fVar34 = _LC5 * (float)local_228._12_4_;
                     local_218 = CONCAT44(*(float*)( param_1 + 0x18 ) * fVar34, *(float*)( param_1 + 0x14 ) * fVar34);
                     uStack_210 = CONCAT44(*(undefined4*)( param_1 + 0x20 ), fVar34 * *(float*)( param_1 + 0x1c ));
                  }

               }

               uVar19 = uVar19 + 1;
               compress_block((astcenc_contexti*)param_1, local_1018, param_5 + (int)( ( ( uVar23 * iVar17 + iVar32 ) * iVar33 + iVar25 ) * 0x10 ), (compression_working_buffers*)( (ulong)param_2 * 0x38940 + lVar11 ));
            }
 while ( uVar19 != uVar2 );
         }

         ParallelManager::complete_task_assignment((ParallelManager*)&__mutex->__data, uVar20);
      }
;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      std::__throw_system_error(iVar18);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* astcenc_config_init(astcenc_profile, unsigned int, unsigned int, unsigned int, float, unsigned
   int, astcenc_config*) */int astcenc_config_init(float param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       uint param_6,uint *param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  float *pfVar17;
  undefined8 *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  if ((_LC7 + _LC8) - _LC8 == __LC9) {
    param_7[0] = 0;
    param_7[1] = 0;
    param_7[0x1c] = 0;
    param_7[0x1d] = 0;
    puVar18 = (undefined8 *)((ulong)(param_7 + 2) & 0xfffffffffffffff8);
    for (uVar15 = (ulong)(((int)param_7 -
                          (int)(undefined8 *)((ulong)(param_7 + 2) & 0xfffffffffffffff8)) + 0x78U >>
                         3); uVar15 != 0; uVar15 = uVar15 - 1) {
      *puVar18 = 0;
      puVar18 = puVar18 + 1;
    }
    uVar13 = 1;
    if (param_5 != 0) {
      uVar13 = param_5;
    }
    if (param_5 < 2) {
      cVar10 = is_legal_2d_block_size(param_3,param_4);
    }
    else {
      cVar10 = is_legal_3d_block_size(param_3,param_4,uVar13);
    }
    if (cVar10 == '\0') {
      iVar12 = 4;
    }
    else {
      iVar12 = 10;
      uVar11 = param_3 * param_4 * uVar13;
      if (uVar11 < 0xd9) {
        param_7[2] = param_3;
        param_7[3] = param_4;
        param_7[4] = uVar13;
        fVar19 = logf((float)(int)uVar11);
        fVar2 = (float)_LC18;
        fVar21 = _LC16;
        iVar12 = 6;
        if ((0.0 <= param_1) && (param_1 <= _LC0)) {
          puVar16 = (undefined1 *)&preset_configs_high;
          if ((0x18 < (int)uVar11) && (puVar16 = preset_configs_mid, 0x3f < (int)uVar11)) {
            puVar16 = preset_configs_low;
          }
          lVar14 = 0;
          pfVar17 = (float *)puVar16;
          do {
            astcenc_config_init(astcenc_profile,unsigned_int,unsigned_int,unsigned_int,float,unsigned_int,astcenc_config*)
            ::preset_configs = (float *)puVar16;
            if (param_1 <= *pfVar17) {
              fVar32 = _LC12 * (fVar19 / __LC11);
              fVar19 = _LC13 * (fVar19 / __LC11);
              if (lVar14 != 0) goto LAB_0010083b;
              uVar7 = *(undefined8 *)((long)puVar16 + 0x1c);
              uVar8 = *(undefined8 *)((long)puVar16 + 4);
              uVar9 = *(undefined8 *)((long)puVar16 + 0xc);
              *(undefined8 *)(param_7 + 0xf) = *(undefined8 *)((long)puVar16 + 0x14);
              *(undefined8 *)(param_7 + 0x11) = uVar7;
              *(undefined8 *)(param_7 + 0xb) = uVar8;
              *(undefined8 *)(param_7 + 0xd) = uVar9;
              *(undefined8 *)(param_7 + 0x13) = *(undefined8 *)((long)puVar16 + 0x24);
              fVar21 = *(float *)((long)puVar16 + 0x3c);
              fVar2 = *(float *)((long)puVar16 + 0x2c) - fVar19;
              if (*(float *)((long)puVar16 + 0x2c) - fVar19 <=
                  *(float *)((long)puVar16 + 0x30) - fVar32) {
                fVar2 = *(float *)((long)puVar16 + 0x30) - fVar32;
              }
              fVar19 = *(float *)((long)puVar16 + 0x38);
              *(ulong *)(param_7 + 0x15) = CONCAT44(*(float *)((long)puVar16 + 0x34),fVar2);
              *(ulong *)(param_7 + 0x17) = CONCAT44(fVar21,fVar19);
              param_7[0x19] = (uint)*(float *)((long)puVar16 + 0x40);
              fVar21 = *(float *)((long)puVar16 + 0x44);
              goto LAB_00100a70;
            }
            lVar14 = lVar14 + 1;
            pfVar17 = pfVar17 + 0x12;
          } while (lVar14 != 6);
          fVar32 = _LC12 * (fVar19 / __LC11);
          fVar19 = _LC13 * (fVar19 / __LC11);
LAB_0010083b:
          lVar1 = lVar14 * 9 + -9;
          pfVar17 = (float *)((long)puVar16 + lVar14 * 0x12 * 4);
          fVar3 = pfVar17[1];
          fVar4 = pfVar17[2];
          fVar5 = pfVar17[3];
          fVar6 = pfVar17[4];
          fVar25 = *pfVar17 - pfVar17[-0x12];
          fVar33 = (float)((uint)*(float *)((long)puVar16 + (lVar1 * 2 + 1) * 4) >> 0x10) * _LC16;
          fVar34 = (float)((uint)*(float *)((long)puVar16 + (lVar1 * 2 + 2) * 4) >> 0x10) * _LC16;
          fVar35 = (float)((uint)*(float *)((long)puVar16 + (lVar1 * 2 + 3) * 4) >> 0x10) * _LC16;
          fVar36 = (float)((uint)*(float *)((long)puVar16 + (lVar1 * 2 + 4) * 4) >> 0x10) * _LC16;
          fVar20 = (*pfVar17 - param_1) / fVar25;
          fVar25 = (param_1 - pfVar17[-0x12]) / fVar25;
          uVar28 = (uint)*(float *)((long)puVar16 + (lVar1 * 2 + 1) * 4) & __LC81;
          uVar29 = (uint)*(float *)((long)puVar16 + (lVar1 * 2 + 2) * 4) & _UNK_00103104;
          uVar30 = (uint)*(float *)((long)puVar16 + (lVar1 * 2 + 3) * 4) & _UNK_00103108;
          uVar31 = (uint)*(float *)((long)puVar16 + (lVar1 * 2 + 4) * 4) & _UNK_0010310c;
          uVar13 = __LC81 & (uint)fVar3;
          uVar11 = _UNK_00103104 & (uint)fVar4;
          uVar26 = _UNK_00103108 & (uint)fVar5;
          uVar27 = _UNK_0010310c & (uint)fVar6;
          fVar22 = ((float)(int)((uint)*(float *)((long)puVar16 + (lVar1 * 2 + 6) * 4) &
                                _UNK_00103104) +
                   (float)((uint)*(float *)((long)puVar16 + (lVar1 * 2 + 6) * 4) >> 0x10) * _LC16) *
                   fVar20 + ((float)((uint)pfVar17[6] >> 0x10) * _LC16 +
                            (float)(int)((uint)pfVar17[6] & _UNK_00103104)) * fVar25 + (float)_LC18;
          fVar23 = ((float)(int)((uint)*(float *)((long)puVar16 + (lVar1 * 2 + 7) * 4) &
                                _UNK_00103108) +
                   (float)((uint)*(float *)((long)puVar16 + (lVar1 * 2 + 7) * 4) >> 0x10) * _LC16) *
                   fVar20 + ((float)((uint)pfVar17[7] >> 0x10) * _LC16 +
                            (float)(int)((uint)pfVar17[7] & _UNK_00103108)) * fVar25 + (float)_LC18;
          fVar24 = ((float)(int)((uint)*(float *)((long)puVar16 + (lVar1 * 2 + 8) * 4) &
                                _UNK_0010310c) +
                   (float)((uint)*(float *)((long)puVar16 + (lVar1 * 2 + 8) * 4) >> 0x10) * _LC16) *
                   fVar20 + ((float)((uint)pfVar17[8] >> 0x10) * _LC16 +
                            (float)(int)((uint)pfVar17[8] & _UNK_0010310c)) * fVar25 + (float)_LC18;
          param_7[0xf] = (int)(((float)(int)((uint)*(float *)((long)puVar16 + (lVar1 * 2 + 5) * 4) &
                                            __LC81) +
                               (float)((uint)*(float *)((long)puVar16 + (lVar1 * 2 + 5) * 4) >> 0x10
                                      ) * _LC16) * fVar20 +
                               ((float)((uint)pfVar17[5] >> 0x10) * _LC16 +
                               (float)(int)((uint)pfVar17[5] & __LC81)) * fVar25 + (float)_LC18);
          param_7[0x10] = (int)fVar22;
          param_7[0x11] = (int)fVar23;
          param_7[0x12] = (int)fVar24;
          param_7[0xb] = (int)(((float)(int)uVar28 + fVar33) * fVar20 +
                               ((float)(int)uVar13 + fVar21 * (float)((uint)fVar3 >> 0x10)) * fVar25
                              + fVar2);
          param_7[0xc] = (int)(((float)(int)uVar29 + fVar34) * fVar20 +
                               ((float)(int)uVar11 + fVar21 * (float)((uint)fVar4 >> 0x10)) * fVar25
                              + fVar2);
          param_7[0xd] = (int)(((float)(int)uVar30 + fVar35) * fVar20 +
                               ((float)(int)uVar26 + fVar21 * (float)((uint)fVar5 >> 0x10)) * fVar25
                              + fVar2);
          param_7[0xe] = (int)(((float)(int)uVar31 + fVar36) * fVar20 +
                               ((float)(int)uVar27 + fVar21 * (float)((uint)fVar6 >> 0x10)) * fVar25
                              + fVar2);
          *(ulong *)(param_7 + 0x13) =
               CONCAT44((int)((float)(uint)*(float *)((long)puVar16 + (lVar1 * 2 + 10) * 4) * fVar20
                              + (float)(uint)pfVar17[10] * fVar25 + _LC18._4_4_),
                        (int)((float)(uint)*(float *)((long)puVar16 + (lVar1 * 2 + 9) * 4) * fVar20
                              + (float)(uint)pfVar17[9] * fVar25 + (float)_LC18));
          fVar32 = (*(float *)((long)puVar16 + (lVar1 * 2 + 0xc) * 4) * fVar20 +
                   pfVar17[0xc] * fVar25) - fVar32;
          fVar21 = pfVar17[0xf];
          fVar2 = pfVar17[0xe];
          fVar19 = (*(float *)((long)puVar16 + (lVar1 * 2 + 0xb) * 4) * fVar20 +
                   pfVar17[0xb] * fVar25) - fVar19;
          if (fVar19 <= fVar32) {
            fVar19 = fVar32;
          }
          fVar32 = *(float *)((long)puVar16 + (lVar1 * 2 + 0xe) * 4);
          fVar3 = *(float *)((long)puVar16 + (lVar1 * 2 + 0xf) * 4);
          *(ulong *)(param_7 + 0x15) =
               CONCAT44(pfVar17[0xd] * fVar25 +
                        *(float *)((long)puVar16 + (lVar1 * 2 + 0xd) * 4) * fVar20,fVar19);
          *(ulong *)(param_7 + 0x17) =
               CONCAT44(fVar3 * fVar20 + fVar21 * fVar25,fVar32 * fVar20 + fVar2 * fVar25);
          fVar21 = fVar20 * *(float *)((long)puVar16 + (lVar1 * 2 + 0x11) * 4) +
                   fVar25 * pfVar17[0x11];
          param_7[0x19] =
               (uint)(*(float *)((long)puVar16 + (lVar1 * 2 + 0x10) * 4) * fVar20 +
                     pfVar17[0x10] * fVar25);
LAB_00100a70:
          param_7[0x1a] = (uint)fVar21;
          uVar13 = _LC1;
          param_7[9] = 0;
          param_7[10] = 0;
          *param_7 = param_2;
          param_7[5] = uVar13;
          param_7[6] = uVar13;
          param_7[7] = uVar13;
          param_7[8] = uVar13;
          if (1 < param_2) {
            if (1 < param_2 - 2) {
              return 5;
            }
            param_7[0x15] = 0x4479c000;
            param_7[0x1a] = 0;
          }
          iVar12 = validate_flags(param_2,param_6);
          uVar7 = _LC27;
          if (iVar12 == 0) {
            if ((param_6 & 1) == 0) {
              if ((param_6 & 0x40) == 0) {
                if ((param_6 & 8) != 0) {
                  param_7[7] = 0x3e7d70a4;
                  *(undefined8 *)(param_7 + 5) = uVar7;
                }
              }
              else {
                param_7[10] = 0x40a00000;
                param_7[8] = 0x41200000;
              }
            }
            else {
              param_7[0xb] = param_7[0xb] + 1;
              fVar2 = _LC22._4_4_;
              fVar21 = (float)_LC22;
              uVar13 = param_7[0xb];
              param_7[6] = 0;
              param_7[7] = 0;
              param_7[0x19] = 0x3f7d70a4;
              if (4 < uVar13) {
                uVar13 = 4;
              }
              param_7[0xb] = uVar13;
              *(ulong *)(param_7 + 0x17) =
                   CONCAT44((float)((ulong)*(undefined8 *)(param_7 + 0x17) >> 0x20) * fVar2,
                            (float)*(undefined8 *)(param_7 + 0x17) * fVar21);
              param_7[0x15] = (uint)(_LC24 * (float)param_7[0x15]);
            }
            param_7[1] = param_6;
          }
        }
      }
    }
  }
  else {
    iVar12 = 2;
  }
  return iVar12;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* astcenc_context_alloc(astcenc_config const*, unsigned int, astcenc_context**) */

int astcenc_context_alloc(astcenc_config *param_1,uint param_2,astcenc_context **param_3)

{
  condition_variable *this;
  condition_variable *this_00;
  condition_variable *this_01;
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  char cVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  astcenc_context *paVar27;
  long in_FS_OFFSET;
  uint uVar28;
  uint uVar29;
  float fVar30;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  undefined1 auVar31 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  block_size_descriptor *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_LC7 + _LC8) - _LC8 != __LC9) {
    iVar24 = 2;
    goto LAB_00101298;
  }
  iVar24 = 3;
  if (param_2 == 0) goto LAB_00101298;
  paVar27 = (astcenc_context *)operator_new(0x2e8);
  *(undefined8 *)(paVar27 + 0x110) = 0;
  this = (condition_variable *)(paVar27 + 0x120);
  *(undefined1 (*) [16])(paVar27 + 0xf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(paVar27 + 0x100) = (undefined1  [16])0x0;
  std::condition_variable::condition_variable(this);
  *(undefined8 *)(paVar27 + 0x188) = 0;
  *(undefined2 *)(paVar27 + 0x118) = 0;
  *(undefined1 (*) [16])(paVar27 + 0x168) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(paVar27 + 0x178) = (undefined1  [16])0x0;
  LOCK();
  *(uint *)(paVar27 + 0x150) = 0;
  UNLOCK();
  uVar17 = CONCAT44(_UNK_0010325c,_LC1);
  *(undefined8 *)(paVar27 + 400) = uVar17;
  this_00 = (condition_variable *)(paVar27 + 0x1c8);
  *(undefined8 *)(paVar27 + 0x154) = 0;
  *(undefined8 *)(paVar27 + 0x160) = 0;
  *(undefined8 *)(paVar27 + 0x1b8) = 0;
  *(undefined1 (*) [16])(paVar27 + 0x198) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(paVar27 + 0x1a8) = (undefined1  [16])0x0;
  std::condition_variable::condition_variable(this_00);
  *(undefined8 *)(paVar27 + 0x230) = 0;
  *(undefined2 *)(paVar27 + 0x1c0) = 0;
  *(undefined1 (*) [16])(paVar27 + 0x210) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(paVar27 + 0x220) = (undefined1  [16])0x0;
  LOCK();
  *(uint *)(paVar27 + 0x1f8) = 0;
  UNLOCK();
  *(undefined8 *)(paVar27 + 0x238) = uVar17;
  this_01 = (condition_variable *)(paVar27 + 0x270);
  *(undefined8 *)(paVar27 + 0x1fc) = 0;
  *(undefined8 *)(paVar27 + 0x208) = 0;
  *(undefined8 *)(paVar27 + 0x260) = 0;
  *(undefined1 (*) [16])(paVar27 + 0x240) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(paVar27 + 0x250) = (undefined1  [16])0x0;
  std::condition_variable::condition_variable(this_01);
  *(undefined8 *)(paVar27 + 0x2d8) = 0;
  *(undefined2 *)(paVar27 + 0x268) = 0;
  *(undefined1 (*) [16])(paVar27 + 0x2b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(paVar27 + 0x2c8) = (undefined1  [16])0x0;
  LOCK();
  *(uint *)(paVar27 + 0x2a0) = 0;
  UNLOCK();
  uVar13 = *(undefined8 *)(param_1 + 8);
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  uVar16 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  uVar10 = *(undefined8 *)(param_1 + 0x58);
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  uVar12 = *(undefined8 *)(param_1 + 0x68);
  uVar5 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)paVar27 = *(undefined8 *)param_1;
  *(undefined8 *)(paVar27 + 8) = uVar13;
  uVar25 = *(uint *)param_1;
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(paVar27 + 0x10) = uVar15;
  *(undefined8 *)(paVar27 + 0x18) = uVar16;
  uVar15 = *(undefined8 *)(param_1 + 0x40);
  uVar16 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(paVar27 + 0x2a4) = 0;
  *(undefined8 *)(paVar27 + 0x2b0) = 0;
  *(undefined8 *)(paVar27 + 0x2e0) = uVar17;
  *(uint *)(paVar27 + 0x78) = param_2;
  *(undefined8 *)(paVar27 + 0x70) = uVar5;
  *(undefined8 *)(paVar27 + 0x20) = uVar7;
  *(undefined8 *)(paVar27 + 0x28) = uVar8;
  *(undefined8 *)(paVar27 + 0x30) = uVar13;
  *(undefined8 *)(paVar27 + 0x38) = uVar14;
  *(undefined8 *)(paVar27 + 0x40) = uVar15;
  *(undefined8 *)(paVar27 + 0x48) = uVar16;
  *(undefined8 *)(paVar27 + 0x50) = uVar9;
  *(undefined8 *)(paVar27 + 0x58) = uVar10;
  *(undefined8 *)(paVar27 + 0x60) = uVar11;
  *(undefined8 *)(paVar27 + 0x68) = uVar12;
  *(undefined1 (*) [16])(paVar27 + 0x88) = (undefined1  [16])0x0;
  if (uVar25 < 4) {
    iVar24 = validate_flags(uVar25,*(uint *)(paVar27 + 4));
    if (iVar24 == 0) {
      uVar25 = *(uint *)(paVar27 + 0x10);
      uVar3 = *(uint *)(paVar27 + 0xc);
      uVar4 = *(uint *)(paVar27 + 8);
      if (uVar25 < 2) {
        cVar23 = is_legal_2d_block_size(uVar4,uVar3);
      }
      else {
        cVar23 = is_legal_3d_block_size(uVar4,uVar3,uVar25);
      }
      fVar38 = _LC1;
      iVar20 = _UNK_0010312c;
      iVar19 = _UNK_00103128;
      iVar18 = _UNK_00103124;
      iVar26 = __LC31;
      uVar37 = _UNK_0010311c;
      uVar35 = _UNK_00103118;
      uVar33 = _UNK_00103114;
      uVar29 = __LC30;
      if (cVar23 == '\0') {
        iVar24 = 4;
      }
      else if (uVar3 * uVar25 * uVar4 < 0xd9) {
        uVar25 = *(uint *)(paVar27 + 0x3c);
        if (uVar25 == 0) {
          uVar25 = 1;
        }
        fVar39 = *(float *)(paVar27 + 0x28);
        if (*(float *)(paVar27 + 0x28) <= _LC1) {
          fVar39 = _LC1;
        }
        iVar42 = __LC30 - __LC31;
        iVar43 = _UNK_00103114 - _UNK_00103124;
        iVar44 = _UNK_00103118 - _UNK_00103128;
        iVar45 = _UNK_0010311c - _UNK_0010312c;
        if (100 < uVar25) {
          uVar25 = 100;
        }
        *(float *)(paVar27 + 0x28) = fVar39;
        *(uint *)(paVar27 + 0x3c) = uVar25;
        uVar22 = _UNK_0010313c;
        uVar21 = _UNK_00103138;
        uVar4 = _UNK_00103134;
        uVar3 = __LC32;
        uVar25 = *(uint *)(paVar27 + 0x40);
        uVar28 = -(uint)(iVar42 < (int)(*(uint *)(paVar27 + 0x2c) - iVar26));
        uVar32 = -(uint)(iVar43 < (int)(*(uint *)(paVar27 + 0x30) - iVar18));
        uVar34 = -(uint)(iVar44 < (int)(*(uint *)(paVar27 + 0x34) - iVar19));
        uVar36 = -(uint)(iVar45 < (int)(*(uint *)(paVar27 + 0x38) - iVar20));
        if (uVar25 == 0) {
          uVar25 = 1;
        }
        uVar29 = ~uVar28 & uVar29 | *(uint *)(paVar27 + 0x2c) & uVar28;
        uVar33 = ~uVar32 & uVar33 | *(uint *)(paVar27 + 0x30) & uVar32;
        uVar35 = ~uVar34 & uVar35 | *(uint *)(paVar27 + 0x34) & uVar34;
        uVar37 = ~uVar36 & uVar37 | *(uint *)(paVar27 + 0x38) & uVar36;
        *(uint *)(paVar27 + 0x40) = uVar25;
        uVar28 = -(uint)((int)(uVar3 - iVar26) < (int)(uVar29 - iVar26));
        uVar32 = -(uint)((int)(uVar4 - iVar18) < (int)(uVar33 - iVar18));
        uVar34 = -(uint)((int)(uVar21 - iVar19) < (int)(uVar35 - iVar19));
        uVar36 = -(uint)((int)(uVar22 - iVar20) < (int)(uVar37 - iVar20));
        uVar25 = *(uint *)(paVar27 + 0x44);
        if (*(uint *)(paVar27 + 0x44) == 0) {
          uVar25 = 1;
        }
        fVar39 = *(float *)(paVar27 + 0x54);
        if (8 < uVar25) {
          uVar25 = 8;
        }
        *(uint *)(paVar27 + 0x2c) = ~uVar28 & uVar29 | uVar3 & uVar28;
        *(uint *)(paVar27 + 0x30) = ~uVar32 & uVar33 | uVar4 & uVar32;
        *(uint *)(paVar27 + 0x34) = ~uVar34 & uVar35 | uVar21 & uVar34;
        *(uint *)(paVar27 + 0x38) = ~uVar36 & uVar37 | uVar22 & uVar36;
        *(uint *)(paVar27 + 0x44) = uVar25;
        uVar25 = *(uint *)(paVar27 + 0x48);
        if (uVar25 == 0) {
          uVar25 = 1;
        }
        if (8 < uVar25) {
          uVar25 = 8;
        }
        *(uint *)(paVar27 + 0x48) = uVar25;
        uVar25 = *(uint *)(paVar27 + 0x4c);
        if (uVar25 == 0) {
          uVar25 = 1;
        }
        if (8 < uVar25) {
          uVar25 = 8;
        }
        *(uint *)(paVar27 + 0x4c) = uVar25;
        uVar25 = *(uint *)(paVar27 + 0x50);
        if (uVar25 == 0) {
          uVar25 = 1;
        }
        if (8 < uVar25) {
          uVar25 = 8;
        }
        *(uint *)(paVar27 + 0x50) = uVar25;
        if (fVar39 <= 0.0) {
          fVar39 = 0.0;
        }
        *(float *)(paVar27 + 0x54) = fVar39;
        fVar39 = *(float *)(paVar27 + 0x58);
        if (*(float *)(paVar27 + 0x58) <= fVar38) {
          fVar39 = fVar38;
        }
        *(float *)(paVar27 + 0x58) = fVar39;
        fVar38 = *(float *)(paVar27 + 0x5c);
        if (fVar38 <= 0.0) {
          fVar38 = 0.0;
        }
        *(float *)(paVar27 + 0x5c) = fVar38;
        fVar38 = *(float *)(paVar27 + 0x60);
        if (fVar38 <= 0.0) {
          fVar38 = 0.0;
        }
        *(float *)(paVar27 + 0x60) = fVar38;
        fVar38 = *(float *)(paVar27 + 100);
        if (fVar38 <= 0.0) {
          fVar38 = 0.0;
        }
        fVar39 = *(float *)(paVar27 + 0x1c);
        fVar1 = *(float *)(paVar27 + 0x14);
        *(float *)(paVar27 + 100) = fVar38;
        fVar38 = *(float *)(paVar27 + 0x20);
        fVar2 = *(float *)(paVar27 + 0x18);
        fVar6 = fVar39;
        if (fVar39 <= fVar38) {
          fVar6 = fVar38;
        }
        fVar30 = fVar1;
        if (fVar1 <= fVar2) {
          fVar30 = fVar2;
        }
        if (fVar30 <= fVar6) {
          fVar30 = fVar6;
        }
        if (0.0 < fVar30) {
          fVar30 = fVar30 / __LC33;
          if (fVar1 <= fVar30) {
            fVar1 = fVar30;
          }
          if (fVar2 <= fVar30) {
            fVar2 = fVar30;
          }
          if (fVar39 <= fVar30) {
            fVar39 = fVar30;
          }
          if (fVar38 <= fVar30) {
            fVar38 = fVar30;
          }
          *(float *)(paVar27 + 0x14) = fVar1;
          *(float *)(paVar27 + 0x18) = fVar2;
          *(float *)(paVar27 + 0x1c) = fVar39;
          *(float *)(paVar27 + 0x20) = fVar38;
          iVar26 = posix_memalign(&local_50,0x10,0xe1b1f0);
          if (iVar26 == 0) {
            *(block_size_descriptor **)(paVar27 + 0x80) = local_50;
            if (local_50 == (block_size_descriptor *)0x0) goto LAB_00101323;
            init_block_size_descriptor
                      (*(uint *)(param_1 + 8),*(uint *)(param_1 + 0xc),*(uint *)(param_1 + 0x10),
                       (bool)((byte)(*(uint *)(param_1 + 4) >> 5) & 1),*(uint *)(param_1 + 0x2c),
                       (float)*(uint *)(param_1 + 0x3c) / _LC0,local_50);
            if (((byte)paVar27[4] & 0x10) != 0) {
LAB_0010128f:
              *param_3 = paVar27;
              prepare_angular_tables();
              goto LAB_00101298;
            }
            fVar38 = 0.0;
            if (*(uint *)paVar27 < 2) {
              fVar38 = _LC34 * *(float *)(paVar27 + 0x54);
              auVar41._4_4_ = _LC39;
              auVar41._0_4_ = _LC39;
              auVar41._8_4_ = _LC39;
              auVar41._12_4_ = _LC39;
              auVar40._0_4_ = fVar38 * __LC61;
              auVar40._4_4_ = fVar38 * _UNK_00103154;
              auVar40._8_4_ = fVar38 * _UNK_00103158;
              auVar40._12_4_ = fVar38 * _UNK_0010315c;
              auVar41 = maxps(auVar40,auVar41);
              auVar31._4_4_ = _LC41;
              auVar31._0_4_ = _LC41;
              auVar31._8_4_ = _LC41;
              auVar31._12_4_ = _LC41;
              auVar41 = minps(auVar41,auVar31);
              iVar26 = (int)(_LC43 + auVar41._0_4_);
              fVar39 = auVar41._0_4_ - (float)iVar26;
              fVar38 = (float)((uint)_LC1 & -(uint)(fVar38 == 0.0) |
                              ~-(uint)(fVar38 == 0.0) &
                              (uint)((((((_LC46 * fVar39 + _LC48) * fVar39 + _LC50) * fVar39 + _LC52
                                       ) * fVar39 + _LC54) * fVar39 + _LC56) *
                                    (float)((iVar26 + __LC44) * 0x800000))) * _LC57 * _LC57;
            }
            *(float *)(paVar27 + 0x54) = fVar38;
            iVar26 = posix_memalign(&local_48,0x10,(ulong)param_2 * 0x38940);
            if (iVar26 == 0) {
              *(void **)(paVar27 + 0x90) = local_48;
              if (local_48 != (void *)0x0) goto LAB_0010128f;
            }
            else {
              *(undefined8 *)(paVar27 + 0x90) = 0;
            }
            free(*(void **)(paVar27 + 0x80));
            std::condition_variable::~condition_variable(this_01);
            std::condition_variable::~condition_variable(this_00);
            std::condition_variable::~condition_variable(this);
            operator_delete(paVar27,0x2e8);
            *param_3 = (astcenc_context *)0x0;
          }
          else {
            *(undefined8 *)(paVar27 + 0x80) = 0;
LAB_00101323:
            std::condition_variable::~condition_variable(this_01);
            std::condition_variable::~condition_variable(this_00);
            std::condition_variable::~condition_variable(this);
            operator_delete(paVar27,0x2e8);
          }
          iVar24 = 1;
          goto LAB_00101298;
        }
        iVar24 = 3;
      }
      else {
        iVar24 = 10;
      }
    }
  }
  else {
    iVar24 = 5;
  }
  std::condition_variable::~condition_variable(this_01);
  std::condition_variable::~condition_variable(this_00);
  std::condition_variable::~condition_variable(this);
  operator_delete(paVar27,0x2e8);
LAB_00101298:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar24;
}



/* astcenc_context_free(astcenc_context*) */

void astcenc_context_free(astcenc_context *param_1)

{
  if (param_1 != (astcenc_context *)0x0) {
    free(*(void **)(param_1 + 0x90));
    free(*(void **)(param_1 + 0x80));
    std::condition_variable::~condition_variable((condition_variable *)(param_1 + 0x270));
    std::condition_variable::~condition_variable((condition_variable *)(param_1 + 0x1c8));
    std::condition_variable::~condition_variable((condition_variable *)(param_1 + 0x120));
    operator_delete(param_1,0x2e8);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* astcenc_compress_reset(astcenc_context*) */

uint astcenc_compress_reset(astcenc_context *param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 4) & 0x10) == 0) {
    *(undefined2 *)(param_1 + 0x118) = 0;
    LOCK();
    *(undefined4 *)(param_1 + 0x150) = 0;
    uVar1 = __LC1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x154) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 400) = uVar1;
    *(undefined2 *)(param_1 + 0x1c0) = 0;
    LOCK();
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x1fc) = 0;
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined8 *)(param_1 + 0x238) = uVar1;
    return *(uint *)(param_1 + 4) & 0x10;
  }
  return 9;
}



/* astcenc_compress_image(astcenc_context*, astcenc_image*, astcenc_swizzle const*, unsigned char*,
   unsigned long, unsigned int) */

undefined4
astcenc_compress_image
          (astcenc_context *param_1,astcenc_image *param_2,astcenc_swizzle *param_3,uchar *param_4,
          ulong param_5,uint param_6)

{
  pthread_mutex_t *__mutex;
  astcenc_context *paVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  long in_FS_OFFSET;
  pthread_mutex_t *local_f8;
  undefined4 local_e8;
  pthread_mutex_t *local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  void *pvStack_90;
  undefined1 local_88 [16];
  code *local_78;
  code *pcStack_70;
  astcenc_context *local_68;
  undefined8 local_60;
  code *local_58;
  code *pcStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(uint *)(param_1 + 4) & 0x10) == 0) {
    if ((((*(uint *)param_3 < 6) && (*(uint *)(param_3 + 4) < 6)) && (*(uint *)(param_3 + 8) < 6))
       && (*(uint *)(param_3 + 0xc) < 6)) {
      if (param_6 < *(uint *)(param_1 + 0x78)) {
        if ((((*(uint *)(param_1 + 0x10) - 1) + *(int *)(param_2 + 8)) / *(uint *)(param_1 + 0x10))
            * (((*(uint *)(param_1 + 8) - 1) + *(int *)param_2) / *(uint *)(param_1 + 8)) *
              (((*(uint *)(param_1 + 0xc) - 1) + *(int *)(param_2 + 4)) / *(uint *)(param_1 + 0xc))
            * 0x10 <= param_5) {
          if (*(uint *)(param_1 + 0x78) == 1) {
            astcenc_compress_reset(param_1);
          }
          if (*(int *)(param_1 + 0x24) == 0) {
            local_c8 = (pthread_mutex_t *)(param_1 + 0xf0);
LAB_001015ba:
            local_f8 = (pthread_mutex_t *)(param_1 + 0xf0);
            uStack_c0 = uStack_c0 & 0xffffffffffffff00;
            iVar7 = pthread_mutex_lock(local_f8);
            if (iVar7 == 0) {
              uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
              if (*(int *)(param_1 + 0x154) == *(int *)(param_1 + 0x158)) {
LAB_00101aac:
                if (local_c8 != (pthread_mutex_t *)0x0) {
                  pthread_mutex_unlock(local_c8);
                }
              }
              else {
                do {
                  std::condition_variable::wait((unique_lock *)(param_1 + 0x120));
                } while (*(int *)(param_1 + 0x154) != *(int *)(param_1 + 0x158));
                if ((char)uStack_c0 != '\0') goto LAB_00101aac;
              }
              __mutex = (pthread_mutex_t *)(param_1 + 0x198);
              compress_image(param_1,param_6,param_2,param_3,param_4);
              uStack_c0 = uStack_c0 & 0xffffffffffffff00;
              local_c8 = __mutex;
              iVar7 = pthread_mutex_lock(__mutex);
              if (iVar7 == 0) {
                uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
                if (*(int *)(param_1 + 0x1fc) == *(int *)(param_1 + 0x200)) {
LAB_00101b03:
                  if (local_c8 != (pthread_mutex_t *)0x0) {
                    pthread_mutex_unlock(local_c8);
                  }
                }
                else {
                  do {
                    std::condition_variable::wait((unique_lock *)(param_1 + 0x1c8));
                  } while (*(int *)(param_1 + 0x1fc) != *(int *)(param_1 + 0x200));
                  if ((char)uStack_c0 != '\0') goto LAB_00101b03;
                }
                local_60 = 0;
                local_58 = std::
                           _Function_handler<void(),astcenc_compress_image(astcenc_context*,astcenc_image*,astcenc_swizzle_const*,unsigned_char*,unsigned_long,unsigned_int)::{lambda()#2}>
                           ::_M_manager;
                pcStack_50 = std::
                             _Function_handler<void(),astcenc_compress_image(astcenc_context*,astcenc_image*,astcenc_swizzle_const*,unsigned_char*,unsigned_long,unsigned_int)::{lambda()#2}>
                             ::_M_invoke;
                local_68 = param_1;
                iVar7 = pthread_mutex_lock(__mutex);
                if (iVar7 == 0) {
                  if (param_1[0x1c1] == (astcenc_context)0x0) {
                    if (local_58 == (code *)0x0) goto LAB_00101b6a;
                    (*pcStack_50)(&local_68);
                    param_1[0x1c1] = (astcenc_context)0x1;
                  }
                  pthread_mutex_unlock(__mutex);
                  local_e8 = 0;
                  if (local_58 != (code *)0x0) {
                    (*local_58)(&local_68,&local_68,3);
                  }
                  goto LAB_00101750;
                }
              }
            }
          }
          else {
            local_88 = (undefined1  [16])0x0;
            local_78 = (code *)0x0;
            pcStack_70 = (code *)0x0;
            puVar12 = (undefined8 *)operator_new(0x18);
            *puVar12 = param_1;
            puVar12[1] = param_2;
            puVar12[2] = param_3;
            local_88._0_8_ = puVar12;
            local_78 = std::
                       _Function_handler<unsigned_int(),astcenc_compress_image(astcenc_context*,astcenc_image*,astcenc_swizzle_const*,unsigned_char*,unsigned_long,unsigned_int)::{lambda()#1}>
                       ::_M_manager;
            pcStack_70 = std::
                         _Function_handler<unsigned_int(),astcenc_compress_image(astcenc_context*,astcenc_image*,astcenc_swizzle_const*,unsigned_char*,unsigned_long,unsigned_int)::{lambda()#1}>
                         ::_M_invoke;
            iVar7 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xf0));
            if (iVar7 != 0) goto LAB_00101b71;
            if (param_1[0x118] != (astcenc_context)0x0) {
LAB_00101840:
              local_f8 = (pthread_mutex_t *)(param_1 + 0xf0);
              pthread_mutex_unlock(local_f8);
              if (local_78 != (code *)0x0) {
                (*local_78)(local_88,local_88,3);
              }
              local_c8 = *(pthread_mutex_t **)(param_1 + 0x98);
              uStack_c0 = *(ulong *)(param_1 + 0xa0);
              local_b8 = *(undefined8 *)(param_1 + 0xa8);
              uStack_b0 = *(undefined8 *)(param_1 + 0xb0);
              local_a8 = *(undefined8 *)(param_1 + 0xb8);
              uStack_a0 = *(undefined8 *)(param_1 + 0xc0);
              local_98 = *(undefined8 *)(param_1 + 200);
              pvStack_90 = *(void **)(param_1 + 0xd0);
              pvStack_90 = operator_new__((ulong)*(uint *)(param_1 + 0xec) << 4);
              iVar7 = *(int *)(param_1 + 0xe4);
              iVar3 = *(int *)(param_1 + 0xdc);
              iVar4 = *(int *)(param_1 + 0xe0);
              iVar5 = *(int *)(param_1 + 0xe8);
              iVar6 = *(int *)(param_1 + 0xd8);
              uVar8 = (iVar3 + -1 + iVar7) / iVar7;
              while( true ) {
                LOCK();
                paVar1 = param_1 + 0x150;
                uVar15 = *(uint *)paVar1;
                *(uint *)paVar1 = *(uint *)paVar1 + 0x10;
                UNLOCK();
                if (*(uint *)(param_1 + 0x158) <= uVar15) break;
                uVar14 = *(uint *)(param_1 + 0x158) - uVar15;
                if (0x10 < uVar14) {
                  uVar14 = 0x10;
                }
                uVar2 = uVar15 + uVar14;
                if (uVar15 < uVar2) {
                  do {
                    iVar9 = (uVar15 / uVar8) * iVar5;
                    iVar13 = (uVar15 - uVar8 * iVar9) * iVar7;
                    iVar16 = iVar4 - iVar9;
                    if (iVar5 < iVar4 - iVar9) {
                      iVar16 = iVar5;
                    }
                    iVar10 = iVar3 - iVar13;
                    local_98 = CONCAT44(iVar9,iVar13);
                    if (iVar7 < iVar10) {
                      iVar10 = iVar7;
                    }
                    uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar16);
                    iVar9 = 0;
                    local_a8 = CONCAT44(iVar10,(undefined4)local_a8);
                    iVar16 = iVar6;
                    if (0 < iVar6) {
                      do {
                        uStack_a0 = CONCAT44(iVar9,(undefined4)uStack_a0);
                        iVar13 = iVar7;
                        if (iVar16 <= iVar7) {
                          iVar13 = iVar16;
                        }
                        iVar9 = iVar9 + iVar7;
                        local_a8 = CONCAT44(local_a8._4_4_,iVar13);
                        compute_pixel_region_variance
                                  ((astcenc_contexti *)param_1,(pixel_region_args *)&local_c8);
                        iVar16 = iVar16 - iVar7;
                      } while (iVar9 < iVar6);
                    }
                    uVar15 = uVar15 + 1;
                  } while (uVar15 != uVar2);
                }
                ParallelManager::complete_task_assignment
                          ((ParallelManager *)&local_f8->__data,uVar14);
              }
              if (pvStack_90 != (void *)0x0) {
                operator_delete__(pvStack_90);
              }
              local_c8 = local_f8;
              goto LAB_001015ba;
            }
            if (local_78 != (code *)0x0) {
              uVar11 = (*pcStack_70)(local_88);
              param_1[0x118] = (astcenc_context)0x1;
              *(undefined4 *)(param_1 + 0x158) = uVar11;
              goto LAB_00101840;
            }
LAB_00101b6a:
            iVar7 = std::__throw_bad_function_call();
          }
LAB_00101b71:
          std::__throw_system_error(iVar7);
          goto LAB_00101b76;
        }
        local_e8 = 1;
      }
      else {
        local_e8 = 3;
      }
    }
    else {
      local_e8 = 7;
    }
  }
  else {
    local_e8 = 9;
  }
LAB_00101750:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_e8;
  }
LAB_00101b76:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* astcenc_decompress_image(astcenc_context*, unsigned char const*, unsigned long, astcenc_image*,
   astcenc_swizzle const*, unsigned int) */

undefined8
astcenc_decompress_image
          (astcenc_context *param_1,uchar *param_2,ulong param_3,astcenc_image *param_4,
          astcenc_swizzle *param_5,uint param_6)

{
  uint uVar1;
  pthread_mutex_t *__mutex;
  astcenc_context *paVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  image_block *piVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long in_FS_OFFSET;
  float fVar19;
  symbolic_compressed_block local_1098 [128];
  image_block local_1018 [3516];
  char local_25c;
  undefined1 local_207;
  long local_40;
  
  uVar9 = *(uint *)(param_1 + 0x78);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 < uVar9) {
    if ((((*(uint *)param_5 < 7) && (*(uint *)(param_5 + 4) < 7)) && (*(uint *)(param_5 + 8) < 7))
       && (*(uint *)(param_5 + 0xc) < 7)) {
      uVar3 = *(uint *)(param_1 + 8);
      uVar4 = *(uint *)(param_1 + 0xc);
      uVar5 = *(uint *)(param_1 + 0x10);
      uVar15 = (ulong)((uVar3 - 1) + *(int *)param_4) / (ulong)uVar3;
      uVar6 = ((uVar4 - 1) + *(int *)(param_4 + 4)) / uVar4;
      iVar17 = (int)uVar15;
      uVar7 = uVar6 * iVar17;
      uVar8 = (((uVar5 - 1) + *(int *)(param_4 + 8)) / uVar5) * uVar7;
      if (param_3 < uVar8 * 0x10) {
        uVar12 = 1;
      }
      else {
        piVar14 = local_1018;
        for (lVar13 = 0x1fa; lVar13 != 0; lVar13 = lVar13 + -1) {
          *(undefined8 *)piVar14 = 0;
          piVar14 = piVar14 + 8;
        }
        local_25c = (char)uVar3 * (char)uVar4 * (char)uVar5;
        local_207 = *(int *)(param_4 + 0xc) == 0;
        if (uVar9 == 1) {
          *(undefined2 *)(param_1 + 0x268) = 0;
          LOCK();
          *(undefined4 *)(param_1 + 0x2a0) = 0;
          UNLOCK();
          *(undefined8 *)(param_1 + 0x2a4) = 0;
          *(undefined8 *)(param_1 + 0x2b0) = 0;
          *(undefined8 *)(param_1 + 0x2e0) = 0x3f800000;
        }
        __mutex = (pthread_mutex_t *)(param_1 + 0x240);
        uVar9 = pthread_mutex_lock(__mutex);
        fVar19 = _LC2;
        if (uVar9 != 0) {
          uVar15 = (ulong)uVar9;
          std::__throw_system_error(uVar9);
          *(undefined2 *)(uVar15 + 0x268) = 0;
          LOCK();
          *(undefined4 *)(uVar15 + 0x2a0) = 0;
          UNLOCK();
          *(undefined8 *)(uVar15 + 0x2a4) = 0;
          *(undefined8 *)(uVar15 + 0x2b0) = 0;
          *(undefined8 *)(uVar15 + 0x2e0) = 0x3f800000;
          return 0;
        }
        if (param_1[0x268] == (astcenc_context)0x0) {
          *(undefined8 *)(param_1 + 0x2b0) = 0;
          *(uint *)(param_1 + 0x2a8) = uVar8;
          param_1[0x268] = (astcenc_context)0x1;
          fVar19 = (fVar19 / (float)uVar8) * _LC0;
          if (fVar19 <= _LC1) {
            fVar19 = _LC1;
          }
          *(float *)(param_1 + 0x2e0) = fVar19;
        }
        pthread_mutex_unlock(__mutex);
        while( true ) {
          LOCK();
          paVar2 = param_1 + 0x2a0;
          uVar9 = *(uint *)paVar2;
          *(uint *)paVar2 = *(uint *)paVar2 + 0x80;
          UNLOCK();
          if (*(uint *)(param_1 + 0x2a8) <= uVar9) break;
          uVar8 = *(uint *)(param_1 + 0x2a8) - uVar9;
          if (0x80 < uVar8) {
            uVar8 = 0x80;
          }
          uVar1 = uVar9 + uVar8;
          if (uVar9 < uVar1) {
            do {
              uVar10 = uVar9 / uVar7;
              uVar16 = uVar9 + 1;
              uVar9 = uVar9 - uVar10 * uVar7;
              iVar11 = (int)(uVar9 / uVar15);
              iVar18 = uVar9 - iVar11 * iVar17;
              physical_to_symbolic
                        (*(block_size_descriptor **)(param_1 + 0x80),
                         param_2 + ((uVar6 * uVar10 + iVar11) * iVar17 + iVar18) * 0x10,local_1098);
              uVar9 = iVar18 * uVar3;
              decompress_symbolic_block
                        (*(undefined4 *)param_1,*(undefined8 *)(param_1 + 0x80),uVar9,iVar11 * uVar4
                         ,uVar10 * uVar5,local_1098,local_1018);
              store_image_block(param_4,local_1018,*(block_size_descriptor **)(param_1 + 0x80),uVar9
                                ,iVar11 * uVar4,uVar10 * uVar5,param_5);
              uVar9 = uVar16;
            } while (uVar1 != uVar16);
          }
          ParallelManager::complete_task_assignment((ParallelManager *)&__mutex->__data,uVar8);
        }
        uVar12 = 0;
      }
    }
    else {
      uVar12 = 7;
    }
  }
  else {
    uVar12 = 3;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}



/* astcenc_decompress_reset(astcenc_context*) */

undefined8 astcenc_decompress_reset(astcenc_context *param_1)

{
  *(undefined2 *)(param_1 + 0x268) = 0;
  LOCK();
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  UNLOCK();
  *(undefined8 *)(param_1 + 0x2a4) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0x3f800000;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* astcenc_get_block_info(astcenc_context*, unsigned char const*, astcenc_block_info*) */

undefined8
astcenc_get_block_info(astcenc_context *param_1,uchar *param_2,astcenc_block_info *param_3)

{
  undefined1 auVar1 [16];
  block_size_descriptor bVar2;
  block_size_descriptor *pbVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  short sVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  short sVar22;
  ushort uVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  long lVar31;
  astcenc_block_info aVar32;
  ulong uVar33;
  ushort uVar34;
  long lVar35;
  undefined8 *puVar36;
  ulong uVar37;
  undefined4 uVar38;
  long lVar39;
  astcenc_block_info *paVar40;
  long in_FS_OFFSET;
  byte bVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  uint uVar45;
  int iVar47;
  uint uVar48;
  uint uVar49;
  undefined1 auVar46 [16];
  int iVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  int iVar59;
  ulong uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  undefined1 *local_7e8;
  astcenc_block_info local_78a;
  astcenc_block_info local_789;
  symbolic_compressed_block local_788;
  byte local_787;
  char local_785;
  ushort local_784;
  ushort local_782;
  byte local_780 [4];
  uint local_77c;
  undefined1 local_774 [108];
  int local_708 [216];
  int local_3a8 [4];
  undefined1 local_398 [856];
  long local_40;
  
  bVar41 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  physical_to_symbolic(*(block_size_descriptor **)(param_1 + 0x80),param_2,&local_788);
  pbVar3 = *(block_size_descriptor **)(param_1 + 0x80);
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)(param_3 + 0x858) = 0;
  puVar36 = (undefined8 *)((ulong)(param_3 + 8) & 0xfffffffffffffff8);
  for (uVar33 = (ulong)(((int)param_3 -
                        (int)(undefined8 *)((ulong)(param_3 + 8) & 0xfffffffffffffff8)) + 0x860U >>
                       3); uVar33 != 0; uVar33 = uVar33 - 1) {
    *puVar36 = 0;
    puVar36 = puVar36 + (ulong)bVar41 * -2 + 1;
  }
  *(undefined4 *)param_3 = *(undefined4 *)param_1;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  *(uint *)(param_3 + 0x10) = (uint)(byte)pbVar3[3];
  param_3[0x14] = (astcenc_block_info)(local_788 == (symbolic_compressed_block)0x0);
  if ((local_788 != (symbolic_compressed_block)0x0) &&
     (param_3[0x15] = (astcenc_block_info)((byte)((char)local_788 - 1U) < 2),
     1 < (byte)((char)local_788 - 1U))) {
    if (local_787 < 2) {
      lVar31 = 0x33c000;
      if (local_787 != 1) {
        lVar31 = 0x44fffdd8000;
      }
    }
    else {
      lVar31 = ((ulong)((local_787 - 2) * 0x400) +
               (ulong)*(ushort *)
                       (pbVar3 + ((ulong)local_782 + 0x703cd8 + (ulong)(local_787 - 2) * 0x400) * 2)
               ) * 0x450;
    }
    uVar33 = (ulong)*(ushort *)(pbVar3 + (ulong)local_784 * 2 + 0xac7560);
    uVar37 = (ulong)(byte)pbVar3[uVar33 * 6 + 0xac8562];
    *(uint *)(param_3 + 0x3c) = (uint)(byte)pbVar3[uVar37 * 0x1fb70 + 0x253];
    *(uint *)(param_3 + 0x40) = (uint)(byte)pbVar3[uVar37 * 0x1fb70 + 0x254];
    *(uint *)(param_3 + 0x44) = (uint)(byte)pbVar3[uVar37 * 0x1fb70 + 0x255];
    bVar2 = pbVar3[uVar33 * 6 + 0xac8565];
    *(uint *)(param_3 + 0x18) = (uint)local_787;
    uVar38 = 0;
    *(int *)(param_3 + 0x20) = (int)local_785;
    aVar32 = (astcenc_block_info)((byte)bVar2 & 1);
    *(uint *)(param_3 + 0x1c) = (uint)local_782;
    param_3[0x17] = aVar32;
    if (local_77c < 0x15) {
      uVar38 = *(undefined4 *)(CSWTCH_156 + (ulong)local_77c * 4);
    }
    *(undefined4 *)(param_3 + 0x34) = uVar38;
    uVar38 = 0;
    if ((byte)pbVar3[uVar33 * 6 + 0xac8563] < 0x15) {
      uVar38 = *(undefined4 *)(CSWTCH_156 + (ulong)(byte)pbVar3[uVar33 * 6 + 0xac8563] * 4);
    }
    *(undefined4 *)(param_3 + 0x38) = uVar38;
    iVar30 = _UNK_0010318c;
    iVar29 = _UNK_00103184;
    iVar28 = _UNK_0010317c;
    iVar27 = _UNK_00103174;
    iVar26 = _UNK_0010316c;
    iVar25 = _UNK_00103164;
    if (local_787 != 0) {
      lVar39 = 0;
      local_7e8 = local_774;
      paVar40 = param_3;
      do {
        unpack_color_endpoints
                  (*(undefined4 *)param_1,local_780[lVar39],local_7e8,&local_78a,&local_789,
                   local_3a8,local_398);
        aVar32 = param_3[0x16];
        *(uint *)(param_3 + lVar39 * 4 + 0x24) = (uint)local_780[lVar39];
        if ((aVar32 == (astcenc_block_info)0x0) &&
           (aVar32 = local_78a, local_78a == (astcenc_block_info)0x0)) {
          aVar32 = local_789;
        }
        uVar34 = -(ushort)(byte)local_78a;
        uVar23 = (ushort)(byte)local_789;
        param_3[0x16] = aVar32;
        lVar35 = 0;
        do {
          auVar1 = *(undefined1 (*) [16])((long)local_3a8 + lVar35);
          auVar46 = __LC67 & auVar1;
          uVar55 = auVar1._0_4_;
          uVar56 = auVar1._4_4_;
          uVar57 = auVar1._8_4_;
          uVar58 = auVar1._12_4_;
          iVar59 = auVar46._0_4_;
          uVar60 = auVar46._8_8_;
          iVar47 = auVar46._4_4_;
          uVar54 = -(uint)(auVar46._8_4_ < _UNK_001031a8);
          iVar50 = auVar46._12_4_;
          uVar61 = -(uint)(auVar46._8_4_ < _UNK_001031b8);
          auVar46._0_4_ = uVar55 >> 8;
          auVar46._4_4_ = uVar56 >> 8;
          auVar46._8_4_ = uVar57 >> 8;
          auVar46._12_4_ = uVar58 >> 8;
          auVar46 = ~auVar46 & auVar1;
          uVar45 = (uVar55 >> 0xb) << 10 |
                   (-(uint)(iVar59 < __LC69) & iVar59 * _LC68 |
                   ~-(uint)(iVar59 < __LC69) &
                   (iVar59 * _LC70 + __LC74 & -(uint)(iVar59 < __LC71) |
                   ~-(uint)(iVar59 < __LC71) & iVar59 * _LC72 + __LC73)) >> 3;
          uVar48 = (uVar56 >> 0xb) << 10 |
                   (-(uint)(iVar47 < _UNK_001031a4) & iVar25 * iVar47 |
                   ~-(uint)(iVar47 < _UNK_001031a4) &
                   (iVar27 * iVar47 + _UNK_001031d4 & -(uint)(iVar47 < _UNK_001031b4) |
                   ~-(uint)(iVar47 < _UNK_001031b4) & iVar47 * iVar29 + _UNK_001031c4)) >> 3;
          uVar49 = (uVar57 >> 0xb) << 10 |
                   (uVar54 & (uint)((uVar60 & 0xffffffff) * (ulong)DAT_00103168) |
                   ~uVar54 & ((int)((uVar60 & 0xffffffff) * (ulong)DAT_00103178) + _UNK_001031d8 &
                              uVar61 | ~uVar61 & (int)((uVar60 & 0xffffffff) * (ulong)DAT_00103188)
                                                 + _UNK_001031c8)) >> 3;
          uVar51 = (uVar58 >> 0xb) << 10 |
                   (-(uint)(iVar50 < _UNK_001031ac) & iVar26 * iVar50 |
                   ~-(uint)(iVar50 < _UNK_001031ac) &
                   (iVar28 * iVar50 + _UNK_001031dc & -(uint)(iVar50 < _UNK_001031bc) |
                   ~-(uint)(iVar50 < _UNK_001031bc) & iVar50 * iVar30 + _UNK_001031cc)) >> 3;
          uVar62 = __LC77 - ((uint)(float)auVar46._0_4_ >> 0x17);
          uVar63 = _UNK_001031f4 - ((uint)(float)auVar46._4_4_ >> 0x17);
          uVar64 = _UNK_001031f8 - ((uint)(float)auVar46._8_4_ >> 0x17);
          uVar65 = _UNK_001031fc - ((uint)(float)auVar46._12_4_ >> 0x17);
          bVar4 = uVar55 == __LC81;
          bVar5 = uVar56 == _UNK_00103104;
          bVar6 = uVar57 == _UNK_00103108;
          bVar7 = (int)uVar55 < _LC70;
          bVar8 = (int)uVar56 < _UNK_00103174;
          bVar9 = (int)uVar57 < (int)DAT_00103178;
          uVar15 = -(ushort)((int)uVar45 < __LC76);
          uVar11 = -(ushort)((int)uVar48 < _UNK_001031e4);
          uVar20 = -(ushort)((int)uVar49 < _UNK_001031e8);
          uVar18 = -(ushort)((int)uVar51 < _UNK_001031ec);
          uVar14 = (ushort)__LC76;
          uVar10 = (ushort)_UNK_001031e4;
          uVar19 = (ushort)_UNK_001031e8;
          uVar62 = -(uint)(0 < (int)uVar62) & uVar62;
          uVar63 = -(uint)(0 < (int)uVar63) & uVar63;
          uVar64 = -(uint)(0 < (int)uVar64) & uVar64;
          uVar65 = -(uint)(0 < (int)uVar65) & uVar65;
          uVar54 = -(uint)((int)uVar62 < (int)__LC79);
          uVar61 = -(uint)((int)uVar63 < (int)_UNK_00103204);
          uVar52 = -(uint)((int)uVar64 < (int)_UNK_00103208);
          uVar53 = -(uint)((int)uVar65 < (int)_UNK_0010320c);
          uVar62 = uVar62 & uVar54 | ~uVar54 & __LC79;
          uVar63 = uVar63 & uVar61 | ~uVar61 & _UNK_00103204;
          uVar64 = uVar64 & uVar52 | ~uVar52 & _UNK_00103208;
          uVar53 = uVar65 & uVar53 | ~uVar53 & _UNK_0010320c;
          uVar54 = __LC81 & uVar55 * (int)(float)((__LC80 + uVar62) * 0x800000);
          uVar61 = _UNK_00103104 & uVar56 * (int)(float)((_UNK_00103214 + uVar63) * 0x800000);
          uVar52 = _UNK_00103108 &
                   (uint)((auVar1._8_8_ & 0xffffffff) *
                         (ulong)(uint)(int)(float)((_UNK_00103218 + uVar64) * 0x800000));
          sVar17 = (short)__LC82;
          sVar13 = (short)_UNK_00103224;
          sVar22 = (short)_UNK_00103228;
          uVar16 = (ushort)__LC83;
          uVar12 = (ushort)_UNK_00103234;
          uVar21 = (ushort)_UNK_00103238;
          uVar38 = sf16_to_float(((ushort)uVar51 & uVar18 | ~uVar18 & (ushort)_UNK_001031ec) &
                                 -uVar23 | ~-uVar23 &
                                           (-(ushort)((int)uVar58 < _UNK_0010317c) &
                                            (ushort)(uVar58 << 8) |
                                           ~-(ushort)((int)uVar58 < _UNK_0010317c) &
                                           (-(ushort)(uVar58 == _UNK_0010310c) &
                                            (ushort)_UNK_0010323c |
                                           ~-(ushort)(uVar58 == _UNK_0010310c) &
                                           ((ushort)((_UNK_0010310c &
                                                     uVar58 * (int)(float)((_UNK_0010321c + uVar53)
                                                                          * 0x800000)) >> 6) |
                                           ((short)_UNK_0010322c - (short)uVar53) * 0x400))));
          uVar42 = sf16_to_float(((ushort)uVar49 & uVar20 | ~uVar20 & uVar19) & uVar34 |
                                 ~uVar34 & (-(ushort)bVar9 & (ushort)(uVar57 << 8) |
                                           ~-(ushort)bVar9 &
                                           (-(ushort)bVar6 & uVar21 |
                                           ~-(ushort)bVar6 &
                                           ((ushort)(uVar52 >> 6) | (sVar22 - (short)uVar64) * 0x400
                                           ))));
          uVar43 = sf16_to_float(((ushort)uVar48 & uVar11 | ~uVar11 & uVar10) & uVar34 |
                                 ~uVar34 & (-(ushort)bVar8 & (ushort)(uVar56 << 8) |
                                           ~-(ushort)bVar8 &
                                           (-(ushort)bVar5 & uVar12 |
                                           ~-(ushort)bVar5 &
                                           ((ushort)(uVar61 >> 6) | (sVar13 - (short)uVar63) * 0x400
                                           ))));
          uVar44 = sf16_to_float(((ushort)uVar45 & uVar15 | ~uVar15 & uVar14) & uVar34 |
                                 ~uVar34 & (-(ushort)bVar7 & (ushort)(uVar55 << 8) |
                                           ~-(ushort)bVar7 &
                                           (-(ushort)bVar4 & uVar16 |
                                           ~-(ushort)bVar4 &
                                           ((ushort)(uVar54 >> 6) | (sVar17 - (short)uVar62) * 0x400
                                           ))));
          *(ulong *)(paVar40 + lVar35 + 0x48) = CONCAT44(uVar43,uVar44);
          *(ulong *)(paVar40 + lVar35 + 0x48 + 8) = CONCAT44(uVar38,uVar42);
          lVar35 = lVar35 + 0x10;
        } while (lVar35 != 0x20);
        lVar39 = lVar39 + 1;
        local_7e8 = local_7e8 + 8;
        paVar40 = paVar40 + 0x20;
      } while ((uint)lVar39 < (uint)local_787);
      aVar32 = (astcenc_block_info)((byte)pbVar3[uVar33 * 6 + 0xac8565] & 1);
    }
    unpack_weights(pbVar3,&local_788,(decimation_info *)(pbVar3 + uVar37 * 0x1fb70 + 0x250),
                   (bool)aVar32,local_708,local_3a8);
    fVar24 = _LC84;
    if (pbVar3[3] != (block_size_descriptor)0x0) {
      aVar32 = param_3[0x17];
      lVar39 = 0;
      do {
        *(float *)(param_3 + lVar39 * 4 + 200) = (float)local_708[lVar39] * fVar24;
        if (aVar32 != (astcenc_block_info)0x0) {
          *(float *)(param_3 + lVar39 * 4 + 0x428) = (float)local_3a8[lVar39] * fVar24;
        }
        lVar39 = lVar39 + 1;
      } while ((uint)lVar39 < (uint)(byte)pbVar3[3]);
      if (pbVar3[3] != (block_size_descriptor)0x0) {
        lVar39 = 0;
        do {
          *(block_size_descriptor *)(param_3 + lVar39 + 0x788) = pbVar3[lVar39 + lVar31 + 0xacb570];
          lVar39 = lVar39 + 1;
        } while ((uint)lVar39 < (uint)(byte)pbVar3[3]);
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* astcenc_get_error_string(astcenc_error) */

char * astcenc_get_error_string(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "ASTCENC_SUCCESS";
  case 1:
    return "ASTCENC_ERR_OUT_OF_MEM";
  case 2:
    return "ASTCENC_ERR_BAD_CPU_FLOAT";
  case 3:
    return "ASTCENC_ERR_BAD_PARAM";
  case 4:
    return "ASTCENC_ERR_BAD_BLOCK_SIZE";
  case 5:
    return "ASTCENC_ERR_BAD_PROFILE";
  case 6:
    return "ASTCENC_ERR_BAD_QUALITY";
  case 7:
    return "ASTCENC_ERR_BAD_SWIZZLE";
  case 8:
    return "ASTCENC_ERR_BAD_FLAGS";
  case 9:
    return "ASTCENC_ERR_BAD_CONTEXT";
  case 10:
    return "ASTCENC_ERR_NOT_IMPLEMENTED";
  case 0xb:
    return "ASTCENC_ERR_BAD_DECODE_MODE";
  default:
    return (char *)0x0;
  }
}



/* WARNING: Control flow encountered bad instruction data */
/* ParallelManager::complete_task_assignment(unsigned int) */

void __thiscall ParallelManager::complete_task_assignment(ParallelManager *this,uint param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)this);
  if (iVar2 == 0) {
    fVar1 = *(float *)(this + 0xa4);
    uVar3 = param_1 + *(int *)(this + 100);
    *(uint *)(this + 100) = uVar3;
    if (uVar3 == *(uint *)(this + 0x68)) {
      if (*(long *)(this + 0x70) != 0) {
        iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x78));
        if (iVar2 != 0) goto LAB_0010289a;
        (**(code **)(this + 0x70))();
        *(undefined4 *)(this + 0xa4) = 0x42c80000;
        pthread_mutex_unlock((pthread_mutex_t *)(this + 0x78));
      }
      pthread_mutex_unlock((pthread_mutex_t *)this);
      std::condition_variable::notify_all();
    }
    else {
      pthread_mutex_unlock((pthread_mutex_t *)this);
    }
    if ((*(long *)(this + 0x70) == 0) ||
       (fVar4 = ((float)uVar3 / (float)*(uint *)(this + 0x68)) * _LC0,
       fVar4 - fVar1 < *(float *)(this + 0xa0) || fVar4 - fVar1 == *(float *)(this + 0xa0))) {
      return;
    }
    iVar2 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x78));
    if (iVar2 == 0) {
      if (*(float *)(this + 0xa0) <= fVar4 - *(float *)(this + 0xa4) &&
          fVar4 - *(float *)(this + 0xa4) != *(float *)(this + 0xa0)) {
        (**(code **)(this + 0x70))();
        *(float *)(this + 0xa4) = fVar4;
      }
      pthread_mutex_unlock((pthread_mutex_t *)(this + 0x78));
      return;
    }
  }
LAB_0010289a:
  std::__throw_system_error(iVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
