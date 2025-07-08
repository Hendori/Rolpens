/* fasthash64(void const*, unsigned long, unsigned long) [clone .constprop.0] */ulong fasthash64(void *param_1, ulong param_2, ulong param_3) {
   ulong uVar1;
   ulong uVar2;
   ulong *puVar3;
   puVar3 = (ulong*)( ( param_2 & 0xfffffffffffffff8 ) + (long)param_1 );
   uVar1 = param_2 * -0x77fcaa0de192e69b ^ 0xf437ffe6;
   if (( (ulong)param_1 & 7 ) == 0) {
      if ((ulong*)param_1 != puVar3) {
         do {
            /* WARNING: Load size is inaccurate */
            uVar2 = *param_1;
            param_1 = (void*)( (long)param_1 + 8 );
            uVar2 = ( uVar2 >> 0x17 ^ uVar2 ) * 0x2127599bf4325c37;
            uVar1 = ( uVar2 ^ uVar2 >> 0x2f ^ uVar1 ) * -0x77fcaa0de192e69b;
         }
 while ( puVar3 != (ulong*)param_1 );
      }

   }
 else if ((ulong*)param_1 != puVar3) {
      do {
         /* WARNING: Load size is inaccurate */
         uVar2 = *param_1;
         param_1 = (void*)( (long)param_1 + 8 );
         uVar2 = ( uVar2 >> 0x17 ^ uVar2 ) * 0x2127599bf4325c37;
         uVar1 = ( uVar2 ^ uVar2 >> 0x2f ^ uVar1 ) * -0x77fcaa0de192e69b;
      }
 while ( puVar3 != (ulong*)param_1 );
   }

   switch ((uint)param_2 & 7) {
      case 0:
    goto switchD_00100080_caseD_0;
      case 1:
    uVar2 = 0;
    goto LAB_001000c1;
      case 2:
    uVar2 = 0;
    goto LAB_001000b6;
      case 3:
    uVar2 = 0;
    goto LAB_001000ab;
      case 4:
    uVar2 = 0;
    goto LAB_001000a0;
      case 5:
    uVar2 = 0;
    goto LAB_00100095;
      case 6:
    uVar2 = 0;
    break;
      case 7:
    uVar2 = (ulong)*(byte *)((long)puVar3 + 6) << 0x30;
   }

   uVar2 = ( ulong ) * (byte*)( (long)puVar3 + 5 ) << 0x28 ^ uVar2;
   LAB_00100095:uVar2 = ( ulong ) * (byte*)( (long)puVar3 + 4 ) << 0x20 ^ uVar2;
   LAB_001000a0:uVar2 = ( ulong ) * (byte*)( (long)puVar3 + 3 ) << 0x18 ^ uVar2;
   LAB_001000ab:uVar2 = ( ulong ) * (byte*)( (long)puVar3 + 2 ) << 0x10 ^ uVar2;
   LAB_001000b6:uVar2 = ( ulong ) * (byte*)( (long)puVar3 + 1 ) << 8 ^ uVar2;
   LAB_001000c1:uVar2 = ( uVar2 >> 0x17 ^ ( byte ) * puVar3 ^ uVar2 ) * 0x2127599bf4325c37;
   uVar1 = ( uVar2 ^ uVar1 ^ uVar2 >> 0x2f ) * -0x77fcaa0de192e69b;
   switchD_00100080_caseD_0:uVar1 = ( uVar1 >> 0x17 ^ uVar1 ) * 0x2127599bf4325c37;
   return uVar1 >> 0x2f ^ uVar1;
}
/* hb_memset(void*, int, unsigned int) [clone .constprop.0] [clone .isra.0] */void hb_memset(void *param_1, int param_2, uint param_3) {
   if (param_2 != 0) {
      memset(param_1, 0, (ulong)(uint)param_2);
      return;
   }

   return;
}
/* OT::cff1::accelerator_templ_t<CFF::cff1_private_dict_opset_subset_t,
   CFF::cff1_private_dict_values_base_t<CFF::op_str_t> >::glyph_to_sid(unsigned int,
   CFF::code_pair_t*) const [clone .isra.0] */ulong OT::cff1::accelerator_templ_t<CFF::cff1_private_dict_opset_subset_t,CFF::cff1_private_dict_values_base_t<CFF::op_str_t>>::glyph_to_sid(uint param_1, code_pair_t *param_2) {
   char cVar1;
   ushort uVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   uint in_ECX;
   uint uVar6;
   int in_EDX;
   ushort *puVar7;
   uint uVar8;
   undefined4 in_register_0000003c;
   char *pcVar9;
   uint *in_R8;
   pcVar9 = (char*)CONCAT44(in_register_0000003c, param_1);
   if (pcVar9 == &_hb_NullPool) {
      if (in_EDX == 1) {
         uVar5 = OT::cff1::lookup_expert_charset_for_sid(in_ECX);
         return uVar5;
      }

      if (in_EDX == 2) {
         uVar5 = OT::cff1::lookup_expert_subset_charset_for_sid(in_ECX);
         return uVar5;
      }

      if (in_EDX != 0) {
         return 0;
      }

      if (0xe4 < in_ECX) {
         return 0;
      }

      return (ulong)in_ECX;
   }

   cVar1 = *pcVar9;
   uVar6 = (uint)param_2;
   if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
         if (( ( cVar1 == '\0' ) && ( in_ECX < uVar6 ) ) && ( in_ECX != 0 )) {
            return ( ulong )(ushort)(*(ushort*)( pcVar9 + ( ulong )(in_ECX - 1) * 2 + 1 ) << 8 | *(ushort*)( pcVar9 + ( ulong )(in_ECX - 1) * 2 + 1 ) >> 8);
         }

         return 0;
      }

      if (uVar6 <= in_ECX) {
         return 0;
      }

      if (( in_R8 == (uint*)0x0 ) || ( uVar6 = in_ECX < uVar6 )) {
         if (in_ECX == 0) {
            return 0;
         }

         uVar8 = in_ECX - 1;
         puVar7 = (ushort*)( pcVar9 + 1 );
         uVar5 = 0;
         uVar3 = 0;
         uVar6 = 1;
         uVar4 = ( uint )(ushort)(*(ushort*)( pcVar9 + 3 ) << 8 | *(ushort*)( pcVar9 + 3 ) >> 8);
         if (uVar4 < uVar8) goto LAB_001002c0;
         LAB_001002e8:if (in_R8 == (uint*)0x0) goto LAB_001002f4;
      }
 else {
         uVar3 = *in_R8;
         uVar5 = (ulong)uVar3;
         uVar8 = in_ECX - uVar6;
         uVar2 = *(ushort*)( pcVar9 + uVar5 * 4 + 3 ) << 8 | *(ushort*)( pcVar9 + uVar5 * 4 + 3 ) >> 8;
         uVar4 = (uint)uVar2;
         if (uVar2 < uVar8) {
            LAB_001002c0:do {
               uVar6 = uVar6 + uVar4 + 1;
               uVar8 = uVar8 - ( uVar4 + 1 );
               uVar3 = (int)uVar5 + 1;
               uVar5 = (ulong)uVar3;
               uVar4 = ( uint )(ushort)(*(ushort*)( pcVar9 + uVar5 * 4 + 3 ) << 8 | *(ushort*)( pcVar9 + uVar5 * 4 + 3 ) >> 8);
            }
 while ( uVar4 < uVar8 );
            puVar7 = (ushort*)( pcVar9 + uVar5 * 4 + 1 );
            goto LAB_001002e8;
         }

         puVar7 = (ushort*)( pcVar9 + uVar5 * 4 + 1 );
      }

      *in_R8 = uVar3;
      in_R8[1] = uVar6;
      LAB_001002f4:return ( ulong )(( ushort )(*puVar7 << 8 | *puVar7 >> 8) + uVar8);
   }

   if (uVar6 <= in_ECX) {
      return 0;
   }

   if (( in_R8 == (uint*)0x0 ) || ( uVar6 = in_ECX < uVar6 )) {
      if (in_ECX == 0) {
         return 0;
      }

      uVar4 = (uint)(byte)pcVar9[3];
      uVar8 = in_ECX - 1;
      puVar7 = (ushort*)( pcVar9 + 1 );
      uVar5 = 0;
      uVar3 = 0;
      uVar6 = 1;
      if (uVar4 < uVar8) goto LAB_00100350;
      LAB_0010036e:if (in_R8 == (uint*)0x0) goto LAB_0010037a;
   }
 else {
      uVar3 = *in_R8;
      uVar5 = (ulong)uVar3;
      uVar8 = in_ECX - uVar6;
      uVar4 = (uint)(byte)pcVar9[uVar5 * 3 + 3];
      if ((byte)pcVar9[uVar5 * 3 + 3] < uVar8) {
         LAB_00100350:do {
            uVar6 = uVar6 + uVar4 + 1;
            uVar8 = uVar8 - ( uVar4 + 1 );
            uVar3 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar3;
            uVar4 = (uint)(byte)pcVar9[uVar5 * 3 + 3];
         }
 while ( uVar4 < uVar8 );
         puVar7 = (ushort*)( pcVar9 + uVar5 * 3 + 1 );
         goto LAB_0010036e;
      }

      puVar7 = (ushort*)( pcVar9 + uVar5 * 3 + 1 );
   }

   *in_R8 = uVar3;
   in_R8[1] = uVar6;
   LAB_0010037a:return ( ulong )(( ushort )(*puVar7 << 8 | *puVar7 >> 8) + uVar8);
}
/* void hb_object_fini<hb_hashmap_t<unsigned int, unsigned int, true> >(hb_hashmap_t<unsigned int,
   unsigned int, true>*) */void hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(hb_hashmap_t *param_1) {
   long lVar1;
   int iVar2;
   pthread_mutex_t *__mutex;
   code *pcVar3;
   undefined8 uVar4;
   *(undefined4*)param_1 = 0xffff2153;
   __mutex = *(pthread_mutex_t**)( param_1 + 8 );
   if (__mutex == (pthread_mutex_t*)0x0) {
      return;
   }

   if (*(int*)( (long)__mutex + 0x2c ) != 0) {
      do {
         pthread_mutex_lock(__mutex);
         iVar2 = *(int*)( (long)__mutex + 0x2c );
         while (true) {
            if (iVar2 == 0) {
               if (__mutex[1].__data.__lock != 0) {
                  free(*(void**)( (long)__mutex + 0x30 ));
               }

               __mutex[1].__align = 0;
               *(undefined8*)( (long)__mutex + 0x30 ) = 0;
               pthread_mutex_unlock(__mutex);
               goto LAB_001004a3;
            }

            lVar1 = *(long*)( (long)__mutex + 0x30 ) + ( ulong )(iVar2 - 1U) * 0x18;
            pcVar3 = *(code**)( lVar1 + 0x10 );
            uVar4 = *(undefined8*)( lVar1 + 8 );
            *(uint*)( (long)__mutex + 0x2c ) = iVar2 - 1U;
            pthread_mutex_unlock(__mutex);
            if (pcVar3 == (code*)0x0) break;
            ( *pcVar3 )(uVar4);
            pthread_mutex_lock(__mutex);
            iVar2 = *(int*)( (long)__mutex + 0x2c );
         }
;
      }
 while ( true );
   }

   if (__mutex[1].__data.__lock != 0) {
      free(*(void**)( (long)__mutex + 0x30 ));
   }

   __mutex[1].__align = 0;
   *(undefined8*)( (long)__mutex + 0x30 ) = 0;
   LAB_001004a3:pthread_mutex_destroy(__mutex);
   free(__mutex);
   *(undefined8*)( param_1 + 8 ) = 0;
   return;
}
/* bool OT::CFFIndex<OT::IntType<unsigned short, 2u>
   >::serialize_header<hb_array_t<hb_vector_t<unsigned char, false> const>,
   (void*)0>(hb_serialize_context_t*, hb_array_t<hb_vector_t<unsigned char, false> const>, unsigned
   int, unsigned int) [clone .isra.0] */bool OT::CFFIndex<OT::IntType<unsigned_short,2u>>::serialize_header<hb_array_t<hb_vector_t<unsigned_char,false>const>,(void*)0>(ushort *param_1, long param_2, long param_3, uint param_4, int param_5, uint param_6) {
   long lVar1;
   ushort uVar2;
   long lVar3;
   undefined1 *puVar4;
   int iVar5;
   undefined1 *puVar6;
   void *__s;
   uint uVar7;
   ulong uVar8;
   long lVar9;
   ulong uVar10;
   uVar8 = (ulong)param_4;
   uVar7 = param_5 + 1;
   if (uVar7 != 0) {
      iVar5 = 0x1f;
      if (uVar7 != 0) {
         for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {}
      }

      uVar7 = iVar5 + 8U >> 3;
      if (param_6 < uVar7) {
         param_6 = uVar7;
      }

   }

   if (*(int*)( param_2 + 0x2c ) != 0) {
      return false;
   }

   uVar10 = (long)( param_1 + 1 ) - (long)*(void**)( param_2 + 8 );
   if (( uVar10 < 0x80000000 ) && ( param_1 + 1 <= *(ushort**)( param_2 + 0x10 ) )) {
      hb_memset(*(void**)( param_2 + 8 ), (int)uVar10, 0x80000000);
      lVar1 = *(long*)( param_2 + 8 );
      *(ulong*)( param_2 + 8 ) = uVar10 + lVar1;
      if (lVar1 == 0) {
         return false;
      }

      uVar2 = (ushort)param_4;
      *param_1 = uVar2 << 8 | uVar2 >> 8;
      if (uVar2 == 0) {
         return true;
      }

      if (*(int*)( param_2 + 0x2c ) != 0) {
         return false;
      }

      __s = *(void**)( param_2 + 8 );
      puVar4 = (undefined1*)( (long)param_1 + 3 );
      uVar10 = (long)puVar4 - (long)__s;
      if (( uVar10 < 0x80000000 ) && ( puVar4 <= *(undefined1**)( param_2 + 0x10 ) )) {
         puVar6 = puVar4;
         if ((int)uVar10 != 0) {
            memset(__s, 0, uVar10);
            __s = *(void**)( param_2 + 8 );
            puVar6 = (undefined1*)( (long)__s + uVar10 );
         }

         *(undefined1**)( param_2 + 8 ) = puVar6;
         if (__s == (void*)0x0) {
            return false;
         }

         *(char*)( param_1 + 1 ) = (char)param_6;
         uVar10 = ( ulong )(( ( ushort )(*param_1 << 8 | *param_1 >> 8) + 1 ) * param_6);
         if (*(int*)( param_2 + 0x2c ) != 0) {
            return false;
         }

         if (( uVar10 < 0x80000000 ) && ( (long)uVar10 <= *(long*)( param_2 + 0x10 ) - (long)puVar6 )) {
            *(undefined1**)( param_2 + 8 ) = puVar6 + uVar10;
            if (param_6 == 3) {
               iVar5 = 1;
               lVar1 = param_3 + uVar8 * 0x10;
               puVar6 = puVar4;
               lVar3 = param_3;
               do {
                  puVar6[1] = (char)( (uint)iVar5 >> 8 );
                  lVar9 = lVar3 + 0x10;
                  puVar6[2] = (char)iVar5;
                  *puVar6 = (char)( (uint)iVar5 >> 0x10 );
                  iVar5 = iVar5 + *(int*)( lVar3 + 4 );
                  puVar6 = puVar6 + 3;
                  lVar3 = lVar9;
               }
 while ( lVar1 != lVar9 );
               puVar4[( ( lVar1 - param_3 ) - 0x10U >> 4 ) * 3 + 3] = (char)( (uint)iVar5 >> 0x10 );
               *(ushort*)( puVar4 + ( ( lVar1 - param_3 ) - 0x10U >> 4 ) * 3 + 3 + 1 ) = (ushort)iVar5 << 8 | (ushort)iVar5 >> 8;
               return true;
            }

            if (3 < param_6) {
               if (param_6 != 4) {
                  return true;
               }

               *(undefined4*)( (long)param_1 + 3 ) = 0x1000000;
               lVar1 = param_3 + uVar8 * 0x10;
               uVar7 = *(int*)( param_3 + 4 ) + 1;
               if (lVar1 != param_3 + 0x10) {
                  lVar3 = 0;
                  do {
                     *(uint*)( (long)param_1 + lVar3 + 7 ) = uVar7 >> 0x18 | ( uVar7 & 0xff0000 ) >> 8 | ( uVar7 & 0xff00 ) << 8 | uVar7 << 0x18;
                     uVar7 = uVar7 + *(int*)( param_3 + 0x14 + lVar3 * 4 );
                     lVar3 = lVar3 + 4;
                  }
 while ( ( ( lVar1 - param_3 ) - 0x20U >> 4 ) * 4 + 4 != lVar3 );
               }

               *(uint*)( (long)param_1 + ( ( lVar1 - param_3 ) - 0x10U >> 4 ) * 4 + 7 ) = uVar7 >> 0x18 | ( uVar7 & 0xff0000 ) >> 8 | ( uVar7 & 0xff00 ) << 8 | uVar7 << 0x18;
               return true;
            }

            if (param_6 == 1) {
               lVar1 = param_3 + uVar8 * 0x10;
               iVar5 = 1;
               lVar3 = param_3;
               do {
                  *puVar4 = (char)iVar5;
                  lVar9 = lVar3 + 0x10;
                  puVar4 = puVar4 + 1;
                  iVar5 = iVar5 + *(int*)( lVar3 + 4 );
                  lVar3 = lVar9;
               }
 while ( lVar1 != lVar9 );
               *(char*)( (long)param_1 + ( ( lVar1 - param_3 ) - 0x10U >> 4 ) + 4 ) = (char)iVar5;
               return true;
            }

            if (param_6 != 2) {
               return true;
            }

            *(undefined2*)( (long)param_1 + 3 ) = 0x100;
            lVar1 = param_3 + uVar8 * 0x10;
            iVar5 = *(int*)( param_3 + 4 ) + 1;
            uVar2 = (ushort)iVar5;
            if (lVar1 != param_3 + 0x10) {
               lVar3 = 0;
               do {
                  *(ushort*)( (long)param_1 + lVar3 + 5 ) = (ushort)iVar5 << 8 | (ushort)iVar5 >> 8;
                  iVar5 = iVar5 + *(int*)( param_3 + 0x14 + lVar3 * 8 );
                  uVar2 = (ushort)iVar5;
                  lVar3 = lVar3 + 2;
               }
 while ( lVar3 != ( ( lVar1 - param_3 ) - 0x20U >> 4 ) * 2 + 2 );
            }

            *(ushort*)( (long)param_1 + ( ( lVar1 - param_3 ) - 0x10U >> 4 ) * 2 + 5 ) = uVar2 << 8 | uVar2 >> 8;
            return true;
         }

      }

   }

   *(undefined4*)( param_2 + 0x2c ) = 4;
   return false;
}
/* bool OT::CFFIndex<OT::IntType<unsigned short, 2u> >::serialize<hb_vector_t<hb_vector_t<unsigned
   char, false>, false>, (void*)0>(hb_serialize_context_t*, hb_vector_t<hb_vector_t<unsigned char,
   false>, false> const&, unsigned int const*, unsigned int) [clone .isra.0] */bool OT::CFFIndex<OT::IntType<unsigned_short,2u>>::serialize<hb_vector_t<hb_vector_t<unsigned_char,false>,false>,(void*)0>(CFFIndex<OT::IntType<unsigned_short,2u>> *this, hb_serialize_context_t *param_1, hb_vector_t *param_2, uint *param_3, uint param_4) {
   uint *puVar1;
   uint uVar2;
   bool bVar3;
   void *pvVar4;
   uint *puVar5;
   undefined1 *__dest;
   ulong uVar6;
   undefined4 in_register_00000084;
   ulong uVar7;
   uVar7 = (ulong)param_2 & 0xffffffff;
   if ((uint*)CONCAT44(in_register_00000084, param_4) == (uint*)0x0) {
      uVar6 = 0;
      if ((int)param_2 != 0) {
         puVar5 = param_3;
         do {
            uVar6 = ( ulong )((int)uVar6 + puVar5[1]);
            puVar5 = puVar5 + 4;
         }
 while ( param_3 + uVar7 * 4 != puVar5 );
      }

   }
 else {
      uVar6 = ( ulong ) * (uint*)CONCAT44(in_register_00000084, param_4);
   }

   bVar3 = serialize_header<hb_array_t<hb_vector_t<unsigned_char,false>const>,(void*)0>(this, param_1, param_3, uVar7, uVar6);
   if (( bVar3 ) && ( *(int*)( param_1 + 0x2c ) == 0 )) {
      if (( uVar6 < 0x80000000 ) && ( __dest = *(undefined1**)( param_1 + 8 ) ),(long)uVar6 <= *(long*)( param_1 + 0x10 ) - (long)__dest) {
         *(undefined1**)( param_1 + 8 ) = __dest + uVar6;
         if (__dest != (undefined1*)0x0) {
            puVar5 = param_3 + uVar7 * 4;
            if (puVar5 != param_3) {
               do {
                  while (true) {
                     uVar2 = param_3[1];
                     if (uVar2 != 0) break;
                     LAB_001008db:param_3 = param_3 + 4;
                     if (puVar5 == param_3) {
                        return bVar3;
                     }

                  }
;
                  puVar1 = param_3 + 2;
                  if (uVar2 != 1) {
                     pvVar4 = memcpy(__dest, *(undefined1**)puVar1, (ulong)uVar2);
                     __dest = (undefined1*)( (long)pvVar4 + (ulong)uVar2 );
                     goto LAB_001008db;
                  }

                  param_3 = param_3 + 4;
                  *__dest = **(undefined1**)puVar1;
                  __dest = __dest + 1;
               }
 while ( puVar5 != param_3 );
            }

            return bVar3;
         }

      }
 else {
         *(undefined4*)( param_1 + 0x2c ) = 4;
      }

   }

   return false;
}
/* CFF::str_encoder_t::encode_byte(unsigned char) [clone .isra.0] */void CFF::str_encoder_t::encode_byte(str_encoder_t *this, uchar param_1) {
   uint uVar1;
   char cVar2;
   uVar1 = *(uint*)( this + 4 );
   if ((int)uVar1 < *(int*)this) {
      *(uint*)( this + 4 ) = uVar1 + 1;
      *(uchar*)( *(long*)( this + 8 ) + (ulong)uVar1 ) = param_1;
   }
 else {
      cVar2 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this, uVar1 + 1, false);
      if (cVar2 == '\0') {
         _hb_CrapPool = _hb_NullPool;
      }
 else {
         uVar1 = *(uint*)( this + 4 );
         *(uint*)( this + 4 ) = uVar1 + 1;
         *(uchar*)( *(long*)( this + 8 ) + (ulong)uVar1 ) = param_1;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::str_encoder_t::encode_num_cs(CFF::number_t const&) [clone .isra.0] */void CFF::str_encoder_t::encode_num_cs(str_encoder_t *this, number_t *param_1) {
   uint uVar1;
   hb_vector_t<unsigned_char,false> *phVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   uchar uVar6;
   str_encoder_t *this_00;
   undefined1 uVar7;
   double in_XMM0_Qa;
   iVar4 = (int)in_XMM0_Qa;
   this_00 = *(str_encoder_t**)this;
   if ((double)(int)(short)iVar4 != in_XMM0_Qa) {
      uVar1 = *(uint*)( this_00 + 4 );
      iVar4 = (int)( in_XMM0_Qa * __LC10 );
      if ((int)uVar1 < *(int*)this_00) {
         *(uint*)( this_00 + 4 ) = uVar1 + 1;
         *(undefined1*)( *(long*)( this_00 + 8 ) + (ulong)uVar1 ) = 0xff;
      }
 else {
         cVar3 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this_00, uVar1 + 1, false);
         if (cVar3 == '\0') {
            _hb_CrapPool = _hb_NullPool;
         }
 else {
            uVar1 = *(uint*)( this_00 + 4 );
            *(uint*)( this_00 + 4 ) = uVar1 + 1;
            *(undefined1*)( *(long*)( this_00 + 8 ) + (ulong)uVar1 ) = 0xff;
         }

      }

      phVar2 = *(hb_vector_t<unsigned_char,false>**)this;
      uVar1 = *(uint*)( phVar2 + 4 );
      for (int i = 0; i < 3; i++) {
         uVar7 = ( undefined1 )((uint)iVar4 >> ( -8*i + 24 ));
         if ((int)uVar1 < *(int*)phVar2) {
            *(uint*)( phVar2 + 4 ) = uVar1 + 1;
            *(undefined1*)( *(long*)( phVar2 + 8 ) + (ulong)uVar1 ) = uVar7;
         }
 else {
            cVar3 = hb_vector_t<unsigned_char,false>::alloc(phVar2, uVar1 + 1, false);
            if (cVar3 == '\0') {
               _hb_CrapPool = _hb_NullPool;
            }
 else {
               uVar1 = *(uint*)( phVar2 + 4 );
               *(uint*)( phVar2 + 4 ) = uVar1 + 1;
               *(undefined1*)( *(long*)( phVar2 + 8 ) + (ulong)uVar1 ) = uVar7;
            }

         }

         phVar2 = *(hb_vector_t<unsigned_char,false>**)this;
         uVar1 = *(uint*)( phVar2 + 4 );
      }

      if ((int)uVar1 < *(int*)phVar2) {
         *(uint*)( phVar2 + 4 ) = uVar1 + 1;
         *(char*)( *(long*)( phVar2 + 8 ) + (ulong)uVar1 ) = (char)iVar4;
      }
 else {
         cVar3 = hb_vector_t<unsigned_char,false>::alloc(phVar2, uVar1 + 1, false);
         if (cVar3 == '\0') {
            _hb_CrapPool = _hb_NullPool;
         }
 else {
            uVar1 = *(uint*)( phVar2 + 4 );
            *(uint*)( phVar2 + 4 ) = uVar1 + 1;
            *(char*)( *(long*)( phVar2 + 8 ) + (ulong)uVar1 ) = (char)iVar4;
         }

      }

      return;
   }

   if (iVar4 + 0x46bU < 0x8d7) {
      uVar6 = (char)iVar4 + 0x8b;
      if (iVar4 + 0x6bU < 0xd7) goto LAB_00100a31;
      if (iVar4 < 1) {
         iVar5 = -0x6c - iVar4;
         uVar6 = (char)( (uint)iVar5 >> 8 ) + 0xfb;
      }
 else {
         iVar5 = iVar4 + -0x6c;
         uVar6 = (char)( (uint)iVar5 >> 8 ) + 0xf7;
      }

   }
 else {
      iVar5 = 0x7fff;
      if (iVar4 < 0x8000) {
         iVar5 = iVar4;
      }

      if (iVar5 < -0x8000) {
         iVar5 = -0x8000;
      }

      encode_byte(this_00, '\x1c');
      this_00 = *(str_encoder_t**)this;
      uVar6 = ( uchar )((uint)iVar5 >> 8);
   }

   encode_byte(this_00, uVar6);
   this_00 = *(str_encoder_t**)this;
   uVar6 = (uchar)iVar5;
   LAB_00100a31:encode_byte(this_00, uVar6);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::cff1::accelerator_subset_t::serialize(hb_serialize_context_t*, OT::cff1_subset_plan&) const
    */cff1_subset_plan OT::cff1::accelerator_subset_t::serialize(accelerator_subset_t *this, hb_serialize_context_t *param_1, cff1_subset_plan *param_2) {
   cff1_subset_plan cVar1;
   cff1_subset_plan cVar2;
   byte bVar3;
   undefined8 uVar4;
   undefined2 *puVar5;
   undefined4 *puVar6;
   undefined8 uVar7;
   bool bVar8;
   char cVar9;
   ushort uVar10;
   uint uVar11;
   uint uVar12;
   undefined4 uVar13;
   int iVar14;
   long *plVar15;
   long lVar16;
   uint *puVar17;
   undefined8 *puVar18;
   long lVar19;
   uint *puVar20;
   void *pvVar21;
   undefined4 *puVar22;
   undefined8 *puVar23;
   undefined1 *puVar24;
   byte *pbVar25;
   int iVar26;
   ulong uVar27;
   uint uVar28;
   uint extraout_EDX;
   uint extraout_EDX_00;
   uint extraout_EDX_01;
   uint extraout_EDX_02;
   undefined *puVar29;
   ulong extraout_RDX;
   ulong uVar30;
   int *piVar31;
   FDSelect *pFVar32;
   undefined8 extraout_RDX_00;
   undefined8 uVar33;
   ulong uVar34;
   size_t sVar35;
   undefined8 *puVar36;
   uint uVar37;
   long lVar38;
   CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar39;
   Encoding *this_00;
   undefined1 *puVar40;
   Charset *this_01;
   ushort *puVar41;
   long lVar42;
   long in_FS_OFFSET;
   byte bVar43;
   undefined1 auVar44[16];
   uint uStack_8c;
   undefined1 uStack_69;
   undefined8 uStack_68;
   undefined4 uStack_60;
   undefined4 uStack_5c;
   undefined8 uStack_58;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   bVar43 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0x2c ) == 0) {
      plVar15 = (long*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_1 + 0x30 ));
      if (plVar15 == (long*)0x0) {
         if (*(int*)( param_1 + 0x2c ) == 0) {
            *(undefined4*)( param_1 + 0x2c ) = 1;
         }

         goto LAB_00101acb;
      }

      lVar19 = *(long*)( param_1 + 8 );
      lVar38 = *(long*)( param_1 + 0x10 );
      lVar16 = *(long*)( param_1 + 0x48 );
      uVar28 = *(uint*)( param_2 + 0x104 );
      uVar30 = (ulong)uVar28;
      uVar37 = *(uint*)( param_2 + 0x200 );
      uVar12 = *(uint*)( param_1 + 0x2c );
      uVar34 = (ulong)uVar12;
      *plVar15 = lVar19;
      plVar15[1] = lVar38;
      lVar42 = *(long*)( param_2 + 0x108 );
      plVar15[6] = lVar16;
      *(long**)( param_1 + 0x48 ) = plVar15;
      if (uVar28 != 0) goto LAB_00100d3d;
      if (uVar12 != 0) goto LAB_001017a2;
      uVar27 = 2;
      LAB_00100dab:if ((long)uVar27 <= lVar38 - lVar19) {
         lVar38 = lVar38 - uVar27;
         *(long*)( param_1 + 0x20 ) = lVar19;
         plVar15 = *(long**)( param_1 + 0x48 );
         *(long*)( param_1 + 8 ) = lVar38;
         *plVar15 = lVar38;
         plVar15[1] = lVar38;
         bVar8 = CFFIndex<OT::IntType<unsigned_short,2u>>::serialize_header<hb_array_t<hb_vector_t<unsigned_char,false>const>,(void*)0>(lVar38, param_1, lVar42, uVar30);
         if (( bVar8 ) && ( *(int*)( param_1 + 0x2c ) == 0 )) {
            if (( uVar34 < 0x80000000 ) && ( puVar24 = *(undefined1**)( param_1 + 8 ) ),(long)uVar34 <= *(long*)( param_1 + 0x10 ) - (long)puVar24) {
               *(undefined1**)( param_1 + 8 ) = puVar24 + uVar34;
               if (puVar24 != (undefined1*)0x0) {
                  lVar16 = uVar30 * 0x10 + lVar42;
                  joined_r0x00100e38:if (lVar16 != lVar42) {
                     do {
                        uVar28 = *(uint*)( lVar42 + 4 );
                        if (uVar28 != 0) {
                           puVar18 = (undefined8*)( lVar42 + 8 );
                           if (uVar28 == 1) goto code_r0x00100e6d;
                           pvVar21 = memcpy(puVar24, (undefined1*)*puVar18, (ulong)uVar28);
                           puVar24 = (undefined1*)( (long)pvVar21 + (ulong)uVar28 );
                        }

                        lVar42 = lVar42 + 0x10;
                        if (lVar16 == lVar42) break;
                     }
 while ( true );
                  }

                  uVar13 = hb_serialize_context_t::pop_pack(param_1, false);
                  *(undefined4*)( param_2 + 0x88 ) = uVar13;
                  uVar28 = *(int*)( this + 0x11c ) - 1;
                  if ((int)uVar28 < 0) goto LAB_0010127f;
                  lVar42 = (long)(int)uVar28 << 4;
                  lVar16 = (long)(int)uVar28 * 0x28;
                  LAB_00100ec0:lVar38 = *(long*)( param_2 + 0xe8 );
                  if (lVar38 != 0) {
                     uVar30 = ( ulong )(uVar28 * -0x61c8864f & 0x3fffffff);
                     uVar34 = uVar30 % ( ulong ) * (uint*)( param_2 + 0xe0 );
                     puVar17 = (uint*)( lVar38 + uVar34 * 0xc );
                     bVar3 = (byte)puVar17[1];
                     if (( bVar3 & 2 ) != 0) {
                        iVar26 = 0;
                        do {
                           if (uVar28 == *puVar17) {
                              if (( bVar3 & 1 ) != 0) {
                                 uVar12 = *(uint*)( param_2 + 0x124 );
                                 if (uVar28 < uVar12) {
                                    puVar29 = (undefined*)( *(long*)( param_2 + 0x128 ) + lVar42 );
                                 }
 else {
                                    __hb_CrapPool = __hb_NullPool;
                                    _memcpy = _lookup_expert_subset_charset_for_sid;
                                    puVar29 = &_hb_CrapPool;
                                 }

                                 iVar26 = *(int*)( puVar29 + 4 );
                                 uVar34 = ( ulong ) * (uint*)( param_1 + 0x2c );
                                 if (iVar26 != 0) {
                                    if (*(uint*)( param_1 + 0x2c ) == 0) {
                                       puVar18 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_1 + 0x30 ));
                                       pCVar39 = *(CFFIndex<OT::IntType<unsigned_short,2u>>**)( param_1 + 8 );
                                       if (puVar18 == (undefined8*)0x0) {
                                          if (*(int*)( param_1 + 0x2c ) == 0) {
                                             *(undefined4*)( param_1 + 0x2c ) = 1;
                                          }

                                       }
 else {
                                          uVar4 = *(undefined8*)( param_1 + 0x10 );
                                          uVar33 = *(undefined8*)( param_1 + 0x48 );
                                          *puVar18 = *(undefined8*)( param_1 + 8 );
                                          puVar18[1] = uVar4;
                                          puVar18[6] = uVar33;
                                          *(undefined8**)( param_1 + 0x48 ) = puVar18;
                                       }

                                       uVar12 = *(uint*)( param_2 + 0x124 );
                                    }
 else {
                                       pCVar39 = *(CFFIndex<OT::IntType<unsigned_short,2u>>**)( param_1 + 8 );
                                    }

                                    if (uVar28 < uVar12) {
                                       puVar29 = (undefined*)( *(long*)( param_2 + 0x128 ) + lVar42 );
                                    }
 else {
                                       __hb_CrapPool = __hb_NullPool;
                                       _memcpy = _lookup_expert_subset_charset_for_sid;
                                       puVar29 = &_hb_CrapPool;
                                    }

                                    bVar8 = CFFIndex<OT::IntType<unsigned_short,2u>>::serialize<hb_vector_t<hb_vector_t<unsigned_char,false>,false>,(void*)0>(pCVar39, param_1, (hb_vector_t*)( ulong ) * (uint*)( puVar29 + 4 ), *(uint**)( puVar29 + 8 ), 0);
                                    if (!bVar8) goto LAB_0010179a;
                                    iVar26 = hb_serialize_context_t::pop_pack(param_1, true);
                                    uVar34 = extraout_RDX;
                                 }

                                 if (*(int*)( param_1 + 0x2c ) == 0) {
                                    auVar44 = hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_1 + 0x30 ));
                                    uVar34 = auVar44._8_8_;
                                    puVar18 = auVar44._0_8_;
                                    if (puVar18 == (undefined8*)0x0) {
                                       if (*(int*)( param_1 + 0x2c ) == 0) {
                                          *(undefined4*)( param_1 + 0x2c ) = 1;
                                       }

                                    }
 else {
                                       uVar33 = *(undefined8*)( param_1 + 0x10 );
                                       uVar34 = *(ulong*)( param_1 + 0x48 );
                                       *puVar18 = *(undefined8*)( param_1 + 8 );
                                       puVar18[1] = uVar33;
                                       puVar18[6] = uVar34;
                                       *(undefined8**)( param_1 + 0x48 ) = puVar18;
                                    }

                                 }

                                 cVar1 = param_2[0x1fc];
                                 cVar2 = param_2[0x140];
                                 puVar29 = &_hb_NullPool;
                                 if (uVar28 < *(uint*)( this + 0x11c )) {
                                    puVar29 = (undefined*)( *(long*)( this + 0x120 ) + lVar16 );
                                 }

                                 lVar38 = 0;
                                 if (*(int*)( puVar29 + 0xc ) == 0) goto LAB_00101186;
                                 goto LAB_0010109d;
                              }

                              break;
                           }

                           iVar26 = iVar26 + 1;
                           uVar34 = ( ulong )((int)uVar34 + iVar26 & *(uint*)( param_2 + 0xdc ));
                           puVar17 = (uint*)( lVar38 + uVar34 * 0xc );
                           bVar3 = (byte)puVar17[1];
                        }
 while ( ( bVar3 & 2 ) != 0 );
                     }

                  }

                  goto LAB_0010126b;
               }

            }
 else {
               LAB_00101793:*(undefined4*)( param_1 + 0x2c ) = 4;
            }

         }

         goto LAB_0010179a;
      }

      goto LAB_001019dd;
   }

   LAB_00101acb:uVar30 = ( ulong ) * (uint*)( param_2 + 0x104 );
   uVar37 = *(uint*)( param_2 + 0x200 );
   lVar42 = *(long*)( param_2 + 0x108 );
   if (*(uint*)( param_2 + 0x104 ) != 0) {
      LAB_00100d3d:uVar34 = 0;
      lVar16 = lVar42;
      do {
         piVar31 = (int*)( lVar16 + 4 );
         lVar16 = lVar16 + 0x10;
         uVar28 = *piVar31 + (int)uVar34;
         uVar34 = (ulong)uVar28;
      }
 while ( uVar30 * 0x10 + lVar42 != lVar16 );
      uVar11 = uVar28 + 1;
      uVar12 = uVar37;
      if (uVar11 != 0) {
         iVar26 = 0x1f;
         if (uVar11 != 0) {
            for (; uVar11 >> iVar26 == 0; iVar26 = iVar26 + -1) {}
         }

         uVar12 = iVar26 + 8U >> 3;
         if (uVar12 < uVar37) {
            uVar12 = uVar37;
         }

      }

      uVar27 = ( ulong )(uVar28 + 3 + uVar12 * ( (int)uVar30 + 1 ));
      if (*(int*)( param_1 + 0x2c ) == 0) {
         if (uVar27 < 0x80000000) {
            lVar38 = *(long*)( param_1 + 0x10 );
            lVar19 = *(long*)( param_1 + 8 );
            goto LAB_00100dab;
         }

         goto LAB_001019dd;
      }

   }

   goto LAB_001017a2;
   code_r0x00100e6d:lVar42 = lVar42 + 0x10;
   *puVar24 = *(undefined1*)*puVar18;
   puVar24 = puVar24 + 1;
   goto joined_r0x00100e38;
   LAB_0010109d:plVar15 = (long*)( lVar38 * 0x10 + *(long*)( puVar29 + 0x10 ) );
   uVar12 = *(uint*)( plVar15 + 1 );
   if (cVar2 == (cff1_subset_plan)0x0) {
      LAB_001010ca:if (uVar12 != 0x13) {
         iVar14 = *(int*)( param_1 + 0x2c );
         bVar3 = *(byte*)( (long)plVar15 + 0xc );
         joined_r0x001017f1:if (iVar14 != 0) goto LAB_0010179a;
         puVar18 = *(undefined8**)( param_1 + 8 );
         uVar30 = (ulong)bVar3;
         if (*(long*)( param_1 + 0x10 ) - (long)puVar18 < (long)uVar30) goto LAB_00101793;
         if (bVar3 != 0) {
            if (bVar3 < 8) {
               if (( bVar3 & 4 ) == 0) {
                  if (bVar3 != 0) {
                     *(undefined1*)puVar18 = 0;
                     if (( bVar3 & 2 ) == 0) goto LAB_00101121;
                     *(undefined2*)( (long)puVar18 + ( uVar30 - 2 ) ) = 0;
                     puVar18 = *(undefined8**)( param_1 + 8 );
                  }

               }
 else {
                  *(undefined4*)puVar18 = 0;
                  *(undefined4*)( (long)puVar18 + ( uVar30 - 4 ) ) = 0;
                  puVar18 = *(undefined8**)( param_1 + 8 );
               }

            }
 else {
               *puVar18 = 0;
               *(undefined8*)( (long)puVar18 + ( uVar30 - 8 ) ) = 0;
               uVar27 = ( ulong )(( (int)puVar18 - (int)(undefined8*)( ( ulong )(puVar18 + 1) & 0xfffffffffffffff8 ) ) + (uint)bVar3 >> 3);
               puVar18 = (undefined8*)( ( ulong )(puVar18 + 1) & 0xfffffffffffffff8 );
               for (; uVar27 != 0; uVar27 = uVar27 - 1) {
                  *puVar18 = 0;
                  puVar18 = puVar18 + (ulong)bVar43 * -2 + 1;
               }

               LAB_00101121:puVar18 = *(undefined8**)( param_1 + 8 );
            }

         }

         *(undefined1**)( param_1 + 8 ) = (undefined1*)( uVar30 + (long)puVar18 );
         if (puVar18 == (undefined8*)0x0) goto LAB_0010179a;
         if (*(char*)( (long)plVar15 + 0xc ) == '\0') goto LAB_0010108f;
         lVar19 = 0;
         do {
            *(undefined1*)( (long)puVar18 + lVar19 ) = *(undefined1*)( *plVar15 + lVar19 );
            uVar34 = ( ulong ) * (byte*)( (long)plVar15 + 0xc );
            lVar19 = lVar19 + 1;
         }
 while ( (uint)lVar19 < ( uint ) * (byte*)( (long)plVar15 + 0xc ) );
         lVar38 = lVar38 + 1;
         if (*(uint*)( puVar29 + 0xc ) <= (uint)lVar38) goto LAB_0010116c;
         goto LAB_0010109d;
      }

      if (( iVar26 != 0 ) && ( cVar1 == (cff1_subset_plan)0x0 )) {
         pvVar21 = *(void**)( param_1 + 8 );
         if (*(int*)( param_1 + 0x2c ) == 0) {
            if (*(void**)( param_1 + 0x10 ) != pvVar21 && -1 < (long)*(void**)( param_1 + 0x10 ) - (long)pvVar21) {
               hb_memset(pvVar21, 1, (uint)uVar34);
               puVar40 = *(undefined1**)( param_1 + 8 );
               puVar24 = puVar40 + 1;
               *(undefined1**)( param_1 + 8 ) = puVar24;
               if (( puVar40 != (undefined1*)0x0 ) && ( *puVar40 = 0x1c * (int*)( param_1 + 0x2c ) == 0 )) {
                  if (1 < *(long*)( param_1 + 0x10 ) - (long)puVar24) {
                     hb_memset(puVar24, 2, extraout_EDX);
                     puVar5 = *(undefined2**)( param_1 + 8 );
                     *(undefined2**)( param_1 + 8 ) = puVar5 + 1;
                     if (( puVar5 != (undefined2*)0x0 ) && ( *puVar5 = 0 * (int*)( param_1 + 0x2c ) == 0 )) {
                        puVar24 = *(undefined1**)( param_1 + 8 );
                        if (*(undefined1**)( param_1 + 0x10 ) != puVar24 && -1 < (long)*(undefined1**)( param_1 + 0x10 ) - (long)puVar24) {
                           *(undefined1**)( param_1 + 8 ) = puVar24 + 1;
                           if (puVar24 != (undefined1*)0x0) {
                              *puVar24 = 0x13;
                              puVar22 = (undefined4*)hb_vector_t<hb_serialize_context_t::object_t::link_t,false>::push((hb_vector_t<hb_serialize_context_t::object_t::link_t,false>*)( *(long*)( param_1 + 0x48 ) + 0x10 ));
                              uVar12 = *(uint*)( *(undefined8**)( param_1 + 0x48 ) + 2 );
                              uVar34 = (ulong)uVar12;
                              if ((int)uVar12 < 0) {
                                 *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) | 1;
                              }

                              uVar33 = **(undefined8**)( param_1 + 0x48 );
                              puVar22[2] = iVar26;
                              puVar22[1] = ( (int)pvVar21 + 1 ) - (int)uVar33;
                              *puVar22 = 10;
                              goto LAB_0010108f;
                           }

                           goto LAB_0010179a;
                        }

                        goto LAB_00101793;
                     }

                     goto LAB_0010179a;
                  }

                  goto LAB_00101793;
               }

               goto LAB_0010179a;
            }

            goto LAB_00101793;
         }

         goto LAB_0010179a;
      }

   }
 else if (uVar12 < 0x10f) {
      if (( uVar12 < 0x109 ) && ( 5 < uVar12 - 6 )) goto LAB_001010ca;
   }
 else if (1 < uVar12 - 0x111) {
      iVar14 = *(int*)( param_1 + 0x2c );
      bVar3 = *(byte*)( (long)plVar15 + 0xc );
      goto joined_r0x001017f1;
   }

   LAB_0010108f:lVar38 = lVar38 + 1;
   if (*(uint*)( puVar29 + 0xc ) <= (uint)lVar38) goto LAB_0010116c;
   goto LAB_0010109d;
   LAB_0010116c:uVar30 = ( ulong )(uVar28 * -0x61c8864f) & 0x3fffffff;
   LAB_00101186:lVar38 = *(long*)( param_2 + 0xe8 );
   puVar17 = (uint*)&minus_1;
   if (lVar38 == 0) {
      LAB_00101207:piVar31 = *(int**)( param_1 + 0x48 );
      uVar34 = ( ulong ) * puVar17;
      if (piVar31 != (int*)0x0) goto LAB_00101217;
      LAB_0010192f:iVar26 = 0;
      if (*(uint*)( param_2 + 0x134 ) <= (uint)uVar34) goto LAB_0010193e;
   }
 else {
      uVar30 = uVar30 % ( ulong ) * (uint*)( param_2 + 0xe0 );
      puVar20 = (uint*)( lVar38 + uVar30 * 0xc );
      bVar3 = (byte)puVar20[1];
      if (( bVar3 & 2 ) == 0) goto LAB_00101207;
      iVar26 = 0;
      do {
         if (uVar28 == *puVar20) {
            puVar17 = (uint*)&minus_1;
            if (( bVar3 & 1 ) != 0) {
               puVar17 = puVar20 + 2;
            }

            goto LAB_00101207;
         }

         iVar26 = iVar26 + 1;
         uVar30 = ( ulong )((int)uVar30 + iVar26 & *(uint*)( param_2 + 0xdc ));
         puVar20 = (uint*)( lVar38 + uVar30 * 0xc );
         bVar3 = (byte)puVar20[1];
      }
 while ( ( bVar3 & 2 ) != 0 );
      piVar31 = *(int**)( param_1 + 0x48 );
      uVar34 = (ulong)_minus_1;
      if (piVar31 == (int*)0x0) goto LAB_0010192f;
      LAB_00101217:iVar26 = (int)*(undefined8*)( param_1 + 8 ) - *piVar31;
      if (*(uint*)( param_2 + 0x134 ) <= (uint)uVar34) {
         LAB_0010193e:_realloc = _lookup_expert_charset_for_sid;
         __hb_CrapPool = __hb_NullPool;
         _memcpy = _lookup_expert_subset_charset_for_sid;
         puVar29 = &_hb_CrapPool;
         goto LAB_0010123c;
      }

   }

   puVar29 = (undefined*)( *(long*)( param_2 + 0x138 ) + uVar34 * 0x18 );
   LAB_0010123c:*(int*)( puVar29 + 0xc ) = iVar26;
   uVar13 = hb_serialize_context_t::pop_pack(param_1, true);
   if ((uint)uVar34 < *(uint*)( param_2 + 0x134 )) {
      puVar29 = (undefined*)( *(long*)( param_2 + 0x138 ) + uVar34 * 0x18 );
   }
 else {
      _realloc = _lookup_expert_charset_for_sid;
      __hb_CrapPool = __hb_NullPool;
      _memcpy = _lookup_expert_subset_charset_for_sid;
      puVar29 = &_hb_CrapPool;
   }

   *(undefined4*)( puVar29 + 0x10 ) = uVar13;
   LAB_0010126b:uVar28 = uVar28 - 1;
   lVar16 = lVar16 + -0x28;
   lVar42 = lVar42 + -0x10;
   if (uVar28 == 0xffffffff) goto LAB_0010127f;
   goto LAB_00100ec0;
   LAB_0010127f:if (*(int*)( this + 0xdc ) == -1) {
      if (*(int*)( param_2 + 0x134 ) == 0) {
         _realloc = _lookup_expert_charset_for_sid;
         __hb_CrapPool = __hb_NullPool;
         _memcpy = _lookup_expert_subset_charset_for_sid;
         puVar29 = &_hb_CrapPool;
      }
 else {
         puVar29 = *(undefined**)( param_2 + 0x138 );
      }

      uVar13 = *(undefined4*)( puVar29 + 0x10 );
      *(undefined8*)( param_2 + 0x94 ) = *(undefined8*)( puVar29 + 8 );
      *(undefined4*)( param_2 + 0x9c ) = uVar13;
   }

   iVar26 = *(int*)( param_1 + 0x2c );
   if (*(undefined**)( this + 0x80 ) != &_hb_NullPool) {
      if (iVar26 == 0) {
         puVar18 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_1 + 0x30 ));
         uVar33 = *(undefined8*)( param_1 + 8 );
         if (puVar18 == (undefined8*)0x0) {
            if (*(int*)( param_1 + 0x2c ) == 0) {
               *(undefined4*)( param_1 + 0x2c ) = 1;
            }

         }
 else {
            uVar7 = *(undefined8*)( param_1 + 0x10 );
            uVar4 = *(undefined8*)( param_1 + 0x48 );
            *puVar18 = *(undefined8*)( param_1 + 8 );
            puVar18[1] = uVar7;
            puVar18[6] = uVar4;
            *(undefined8**)( param_1 + 0x48 ) = puVar18;
         }

      }
 else {
         uVar33 = *(undefined8*)( param_1 + 8 );
      }

      uStack_68 = *(undefined8*)( param_2 + 0x138 );
      uStack_60 = *(undefined4*)( param_2 + 0x134 );
      uStack_5c = 0;
      uStack_4c = 0;
      uStack_58 = uStack_68;
      uStack_50 = uStack_60;
      bVar8 = CFF::FDArray<OT::IntType<unsigned_short,2u>>::serialize<CFF::cff1_font_dict_values_mod_t,CFF::cff1_font_dict_values_mod_t,hb_zip_iter_t<hb_array_t<CFF::cff1_font_dict_values_mod_t_const>,hb_array_t<CFF::cff1_font_dict_values_mod_t_const>>,cff1_font_dict_op_serializer_t>(uVar33, param_1, &uStack_69);
      if (!bVar8) goto LAB_0010179a;
      uVar13 = hb_serialize_context_t::pop_pack(param_1, false);
      *(undefined4*)( param_2 + 0x84 ) = uVar13;
      iVar26 = *(int*)( param_1 + 0x2c );
   }

   pFVar32 = *(FDSelect**)( this + 0x88 );
   if (pFVar32 != (FDSelect*)&_hb_NullPool) {
      if (iVar26 == 0) {
         puVar18 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_1 + 0x30 ));
         if (puVar18 == (undefined8*)0x0) {
            pFVar32 = *(FDSelect**)( this + 0x88 );
            if (*(int*)( param_1 + 0x2c ) == 0) {
               *(undefined4*)( param_1 + 0x2c ) = 1;
            }

         }
 else {
            uVar33 = *(undefined8*)( param_1 + 8 );
            uVar4 = *(undefined8*)( param_1 + 0x10 );
            puVar18[6] = *(undefined8*)( param_1 + 0x48 );
            *puVar18 = uVar33;
            puVar18[1] = uVar4;
            *(undefined8**)( param_1 + 0x48 ) = puVar18;
            pFVar32 = *(FDSelect**)( this + 0x88 );
         }

      }

      cVar9 = hb_serialize_cff_fdselect(param_1, *(uint*)( param_2 + 0xa0 ), pFVar32, *(uint*)( this + 0x90 ), *(uint*)( param_2 + 0xac ), *(uint*)( param_2 + 0x7c ), (hb_vector_t*)( param_2 + 0xb0 ));
      if (cVar9 == '\0') goto LAB_0010179a;
      uVar13 = hb_serialize_context_t::pop_pack(param_1, true);
      *(undefined4*)( param_2 + 0x80 ) = uVar13;
      iVar26 = *(int*)( param_1 + 0x2c );
   }

   if (param_2[0x180] != (cff1_subset_plan)0x0) {
      if (iVar26 == 0) {
         puVar18 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_1 + 0x30 ));
         this_01 = *(Charset**)( param_1 + 8 );
         if (puVar18 == (undefined8*)0x0) {
            if (*(int*)( param_1 + 0x2c ) == 0) {
               *(undefined4*)( param_1 + 0x2c ) = 1;
            }

         }
 else {
            uVar4 = *(undefined8*)( param_1 + 0x10 );
            uVar33 = *(undefined8*)( param_1 + 0x48 );
            *puVar18 = *(undefined8*)( param_1 + 8 );
            puVar18[1] = uVar4;
            puVar18[6] = uVar33;
            *(undefined8**)( param_1 + 0x48 ) = puVar18;
         }

      }
 else {
         this_01 = *(Charset**)( param_1 + 8 );
      }

      cVar9 = CFF::Charset::serialize(this_01, param_1, (uchar)param_2[0x168], *(uint*)( param_2 + 0xa0 ), (hb_vector_t*)( param_2 + 0x170 ));
      if (cVar9 == '\0') goto LAB_0010179a;
      uVar13 = hb_serialize_context_t::pop_pack(param_1, true);
      *(undefined4*)( param_2 + 0x90 ) = uVar13;
      iVar26 = *(int*)( param_1 + 0x2c );
   }

   if (param_2[0x142] != (cff1_subset_plan)0x0) {
      if (iVar26 == 0) {
         puVar18 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_1 + 0x30 ));
         this_00 = *(Encoding**)( param_1 + 8 );
         if (puVar18 == (undefined8*)0x0) {
            if (*(int*)( param_1 + 0x2c ) == 0) {
               *(undefined4*)( param_1 + 0x2c ) = 1;
            }

         }
 else {
            uVar4 = *(undefined8*)( param_1 + 0x10 );
            uVar33 = *(undefined8*)( param_1 + 0x48 );
            *puVar18 = *(undefined8*)( param_1 + 8 );
            puVar18[1] = uVar4;
            puVar18[6] = uVar33;
            *(undefined8**)( param_1 + 0x48 ) = puVar18;
         }

      }
 else {
         this_00 = *(Encoding**)( param_1 + 8 );
      }

      cVar9 = CFF::Encoding::serialize(this_00, param_1, (uchar)param_2[0x143], *(uint*)( param_2 + 0x144 ), (hb_vector_t*)( param_2 + 0x148 ), (hb_vector_t*)( param_2 + 0x158 ));
      if (cVar9 == '\0') goto LAB_0010179a;
      uVar13 = hb_serialize_context_t::pop_pack(param_1, true);
      *(undefined4*)( param_2 + 0x8c ) = uVar13;
   }

   if (*(int*)( param_1 + 0x2c ) == 0) {
      puVar18 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_1 + 0x30 ));
      pCVar39 = *(CFFIndex<OT::IntType<unsigned_short,2u>>**)( param_1 + 8 );
      if (puVar18 == (undefined8*)0x0) {
         if (*(int*)( param_1 + 0x2c ) == 0) {
            *(undefined4*)( param_1 + 0x2c ) = 1;
         }

      }
 else {
         uVar4 = *(undefined8*)( param_1 + 0x10 );
         uVar33 = *(undefined8*)( param_1 + 0x48 );
         *puVar18 = *(undefined8*)( param_1 + 8 );
         puVar18[1] = uVar4;
         puVar18[6] = uVar33;
         *(undefined8**)( param_1 + 0x48 ) = puVar18;
      }

   }
 else {
      pCVar39 = *(CFFIndex<OT::IntType<unsigned_short,2u>>**)( param_1 + 8 );
   }

   bVar8 = CFFIndex<OT::IntType<unsigned_short,2u>>::serialize<hb_vector_t<hb_vector_t<unsigned_char,false>,false>,(void*)0>(pCVar39, param_1, (hb_vector_t*)( ulong ) * (uint*)( param_2 + 0x114 ), *(uint**)( param_2 + 0x118 ), 0);
   if (bVar8) {
      hb_serialize_context_t::pop_pack(param_1, false);
      if (*(int*)( param_1 + 0x2c ) == 0) {
         auVar44 = hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_1 + 0x30 ));
         uVar33 = auVar44._8_8_;
         puVar18 = auVar44._0_8_;
         puVar41 = *(ushort**)( param_1 + 8 );
         if (puVar18 == (undefined8*)0x0) {
            if (*(int*)( param_1 + 0x2c ) == 0) {
               *(undefined4*)( param_1 + 0x2c ) = 1;
            }

         }
 else {
            uVar4 = *(undefined8*)( param_1 + 0x10 );
            uVar33 = *(undefined8*)( param_1 + 0x48 );
            *puVar18 = *(undefined8*)( param_1 + 8 );
            puVar18[1] = uVar4;
            puVar18[6] = uVar33;
            *(undefined8**)( param_1 + 0x48 ) = puVar18;
         }

      }
 else {
         puVar41 = *(ushort**)( param_1 + 8 );
         uVar33 = extraout_RDX_00;
      }

      cVar1 = param_2[0x1a0];
      if (( cVar1 == (cff1_subset_plan)0x0 ) || ( *(int*)( param_2 + 0x1c0 ) < 0 )) goto LAB_0010179a;
      uVar28 = *(uint*)( param_2 + 0x1c4 );
      puVar17 = *(uint**)( param_2 + 0x1c8 );
      pCVar39 = *(CFFIndex<OT::IntType<unsigned_short,2u>>**)( this + 0x68 );
      if (( *(short*)pCVar39 != 0 ) && ( uVar28 != 0 )) {
         if (uVar28 < 0x10000000) {
            puVar18 = (undefined8*)malloc((ulong)uVar28 << 4);
            uVar12 = 0xffffffff;
            if (puVar18 != (undefined8*)0x0) {
               uVar12 = uVar28;
            }

         }
 else {
            puVar18 = (undefined8*)0x0;
            uVar12 = 0xffffffff;
         }

         uVar37 = 0;
         puVar20 = puVar17 + ( ulong )(uVar28 - 1) + 1;
         do {
            auVar44 = CFFIndex<OT::IntType<unsigned_short,2u>>::operator [](pCVar39, *puVar17);
            uVar28 = uVar37 + 1;
            puVar23 = puVar18;
            uVar11 = uVar12;
            if ((int)uVar37 < (int)uVar12) {
               LAB_001015f3:*(undefined1(*) [16])( puVar23 + (ulong)uVar37 * 2 ) = auVar44;
               puVar18 = puVar23;
               uVar12 = uVar11;
               uVar37 = uVar28;
            }
 else {
               if (-1 < (int)uVar12) {
                  uVar34 = (ulong)uVar12;
                  if (uVar12 < uVar28) {
                     do {
                        uVar11 = (int)( uVar34 >> 1 ) + 8 + (int)uVar34;
                        uVar34 = (ulong)uVar11;
                     }
 while ( uVar11 < uVar28 );
                     if (( 0xfffffff < uVar11 ) || ( puVar23 = (undefined8*)realloc(puVar18, uVar34 << 4) ),puVar23 == (undefined8*)0x0) {
                        uVar12 = ~uVar12;
                        goto LAB_00102591;
                     }

                  }

                  goto LAB_001015f3;
               }

               LAB_00102591:__hb_CrapPool = __hb_NullPool;
               _memcpy = _lookup_expert_subset_charset_for_sid;
            }

            puVar17 = puVar17 + 1;
         }
 while ( puVar17 != puVar20 );
         if (-1 < (int)uVar12) {
            if (uVar37 == 0) {
               uStack_8c = 0;
               uVar28 = 1;
            }
 else {
               uStack_8c = 0;
               puVar23 = puVar18;
               do {
                  uStack_8c = uStack_8c + *(int*)( puVar23 + 1 );
                  puVar23 = puVar23 + 2;
               }
 while ( puVar23 != puVar18 + (ulong)uVar37 * 2 );
               uVar28 = uStack_8c + 1;
               if (uVar28 == 0) {
                  uStack_8c = 0xffffffff;
                  uVar28 = 0;
               }
 else {
                  iVar26 = 0x1f;
                  if (uVar28 != 0) {
                     for (; uVar28 >> iVar26 == 0; iVar26 = iVar26 + -1) {}
                  }

                  uVar28 = iVar26 + 8U >> 3;
               }

            }

            if (*(int*)( param_1 + 0x2c ) != 0) goto LAB_001022e0;
            uVar34 = (long)( puVar41 + 1 ) - (long)*(void**)( param_1 + 8 );
            if (( 0x7fffffff < uVar34 ) || ( *(ushort**)( param_1 + 0x10 ) < puVar41 + 1 )) goto LAB_001022d9;
            hb_memset(*(void**)( param_1 + 8 ), (int)uVar34, (int)uVar34);
            lVar16 = *(long*)( param_1 + 8 );
            *(ulong*)( param_1 + 8 ) = uVar34 + lVar16;
            if (( lVar16 == 0 ) || ( puVar41 == (ushort*)0x0 )) goto LAB_001022e0;
            uVar10 = (ushort)uVar37;
            *puVar41 = uVar10 << 8 | uVar10 >> 8;
            if (uVar10 == 0) {
               iVar26 = *(int*)( param_1 + 0x2c );
               goto LAB_001016fc;
            }

            if (*(int*)( param_1 + 0x2c ) != 0) goto LAB_001022e0;
            pvVar21 = *(void**)( param_1 + 8 );
            puVar24 = (undefined1*)( (long)puVar41 + 3 );
            sVar35 = (long)puVar24 - (long)pvVar21;
            if (( sVar35 < 0x80000000 ) && ( puVar24 <= *(undefined1**)( param_1 + 0x10 ) )) {
               if ((int)sVar35 != 0) {
                  memset(pvVar21, 0, sVar35);
                  pvVar21 = *(void**)( param_1 + 8 );
               }

               lVar16 = sVar35 + (long)pvVar21;
               *(long*)( param_1 + 8 ) = lVar16;
               if (pvVar21 != (void*)0x0) {
                  *(char*)( puVar41 + 1 ) = (char)uVar28;
                  uVar34 = ( ulong )(( ( ushort )(*puVar41 << 8 | *puVar41 >> 8) + 1 ) * uVar28);
                  if (*(int*)( param_1 + 0x2c ) == 0) {
                     if (*(long*)( param_1 + 0x10 ) - lVar16 < (long)uVar34) goto LAB_001022d9;
                     *(ulong*)( param_1 + 8 ) = lVar16 + uVar34;
                     if (uVar28 == 3) {
                        puVar23 = puVar18;
                        puVar40 = puVar24;
                        iVar26 = 1;
                        do {
                           puVar40[1] = (char)( (uint)iVar26 >> 8 );
                           puVar36 = puVar23 + 2;
                           puVar40[2] = (char)iVar26;
                           iVar14 = iVar26 + *(int*)( puVar23 + 1 );
                           *puVar40 = (char)( (uint)iVar26 >> 0x10 );
                           puVar23 = puVar36;
                           puVar40 = puVar40 + 3;
                           iVar26 = iVar14;
                        }
 while ( puVar36 != puVar18 + (ulong)uVar37 * 2 );
                        puVar24[( ( ulong )((long)puVar36 + ( -0x10 - (long)puVar18 )) >> 4 ) * 3 + 3] = (char)( (uint)iVar14 >> 0x10 );
                        *(ushort*)( puVar24 + ( ( ulong )((long)puVar36 + ( -0x10 - (long)puVar18 )) >> 4 ) * 3 + 3 + 1 ) = (ushort)iVar14 << 8 | (ushort)iVar14 >> 8;
                        iVar26 = *(int*)( param_1 + 0x2c );
                        LAB_001016fc:if (iVar26 != 0) goto LAB_001022e0;
                     }
 else {
                        if (uVar28 == 4) {
                           uVar28 = 0x1000000;
                           uVar11 = 1;
                           lVar16 = 0;
                           do {
                              uVar11 = uVar11 + *(int*)( (long)puVar18 + lVar16 * 4 + 8 );
                              *(uint*)( (long)puVar41 + lVar16 + 3 ) = uVar28;
                              lVar16 = lVar16 + 4;
                              uVar28 = uVar11 >> 0x18 | ( uVar11 & 0xff0000 ) >> 8 | ( uVar11 & 0xff00 ) << 8 | uVar11 * 0x1000000;
                           }
 while ( lVar16 != ( (ulong)uVar37 * 0x10 - 0x10 >> 4 ) * 4 + 4 );
                           *(uint*)( puVar24 + lVar16 ) = uVar28;
                           iVar26 = *(int*)( param_1 + 0x2c );
                           goto LAB_001016fc;
                        }

                        if (uVar28 == 1) {
                           iVar26 = 1;
                           puVar23 = puVar18;
                           do {
                              *puVar24 = (char)iVar26;
                              puVar36 = puVar23 + 2;
                              puVar24 = puVar24 + 1;
                              iVar26 = iVar26 + *(int*)( puVar23 + 1 );
                              puVar23 = puVar36;
                           }
 while ( puVar18 + (ulong)uVar37 * 2 != puVar36 );
                           *(char*)( (long)puVar41 + ( ( ulong )((long)( puVar18 + (ulong)uVar37 * 2 ) + ( -0x10 - (long)puVar18 )) >> 4 ) + 4 ) = (char)iVar26;
                        }
 else if (uVar28 == 2) {
                           uVar10 = 0x100;
                           iVar26 = 1;
                           lVar16 = 0;
                           do {
                              iVar26 = iVar26 + *(int*)( puVar18 + lVar16 + 1 );
                              *(ushort*)( (long)puVar41 + lVar16 + 3 ) = uVar10;
                              lVar16 = lVar16 + 2;
                              uVar10 = (ushort)iVar26 << 8 | (ushort)iVar26 >> 8;
                           }
 while ( lVar16 != ( (ulong)uVar37 * 0x10 - 0x10 >> 4 ) * 2 + 2 );
                           *(ushort*)( puVar24 + lVar16 ) = uVar10;
                           iVar26 = *(int*)( param_1 + 0x2c );
                           goto LAB_001016fc;
                        }

                     }

                     uVar34 = (ulong)uStack_8c;
                     if (( 0x7fffffff < uVar34 ) || ( puVar24 = *(undefined1**)( param_1 + 8 ) * (long*)( param_1 + 0x10 ) - (long)puVar24 < (long)uVar34 )) goto LAB_001022d9;
                     *(undefined1**)( param_1 + 8 ) = puVar24 + uVar34;
                     if (puVar24 != (undefined1*)0x0) {
                        for (puVar23 = puVar18; puVar18 + (ulong)uVar37 * 2 != puVar23; puVar23 = puVar23 + 2) {
                           uVar28 = *(uint*)( puVar23 + 1 );
                           puVar40 = puVar24;
                           if (uVar28 != 0) {
                              if (uVar28 == 1) {
                                 puVar40 = puVar24 + 1;
                                 *puVar24 = *(undefined1*)*puVar23;
                              }
 else {
                                 pvVar21 = memcpy(puVar24, (undefined1*)*puVar23, (ulong)uVar28);
                                 puVar40 = (undefined1*)( (long)pvVar21 + (ulong)uVar28 );
                              }

                           }

                           puVar24 = puVar40;
                        }

                        if (uVar12 != 0) {
                           free(puVar18);
                        }

                        goto LAB_00101bd5;
                     }

                  }

               }

            }
 else {
               LAB_001022d9:*(undefined4*)( param_1 + 0x2c ) = 4;
            }

            LAB_001022e0:if (uVar12 == 0) goto LAB_0010179a;
         }

         free(puVar18);
         goto LAB_0010179a;
      }

      if (*(int*)( param_1 + 0x2c ) != 0) goto LAB_0010179a;
      uVar34 = (long)( puVar41 + 1 ) - (long)*(void**)( param_1 + 8 );
      if (( 0x7fffffff < uVar34 ) || ( *(ushort**)( param_1 + 0x10 ) < puVar41 + 1 )) goto LAB_00101793;
      hb_memset(*(void**)( param_1 + 8 ), (int)uVar34, (uint)uVar33);
      lVar16 = *(long*)( param_1 + 8 );
      *(ulong*)( param_1 + 8 ) = uVar34 + lVar16;
      if (( lVar16 == 0 ) || ( puVar41 == (ushort*)0x0 )) goto LAB_0010179a;
      *puVar41 = 0;
      LAB_00101bd5:hb_serialize_context_t::pop_pack(param_1, true);
      if (*(int*)( param_1 + 0x2c ) == 0) {
         if (*(long*)( param_1 + 0x10 ) - (long)*(void**)( param_1 + 8 ) < 4) {
            LAB_001019dd:*(undefined4*)( param_1 + 0x2c ) = 4;
         }
 else {
            hb_memset(*(void**)( param_1 + 8 ), 4, extraout_EDX_00);
            puVar6 = *(undefined4**)( param_1 + 8 );
            puVar22 = puVar6 + 1;
            *(undefined4**)( param_1 + 8 ) = puVar22;
            if (puVar6 == (undefined4*)0x0) goto LAB_001017a2;
            *puVar6 = 0x4040001;
            iVar26 = *(int*)( param_1 + 0x2c );
            puVar41 = *(ushort**)( this + 0x58 );
            uVar10 = *puVar41 << 8 | *puVar41 >> 8;
            if (uVar10 == 0) {
               if (iVar26 != 0) goto LAB_001017a2;
               if (*(long*)( param_1 + 0x10 ) - (long)puVar22 < 2) goto LAB_001019dd;
               sVar35 = 2;
               *(long*)( param_1 + 8 ) = (long)puVar6 + 6;
               LAB_00101cb3:memcpy(puVar22, puVar41, sVar35);
            }
 else {
               bVar43 = (byte)puVar41[1];
               uVar28 = ( uVar10 + 1 ) * (uint)bVar43 + 2;
               if (bVar43 == 3) {
                  pbVar25 = (byte*)( (long)puVar41 + (ulong)uVar10 * 3 + 3 );
                  uVar28 = ( uint ) * pbVar25 * 0x10000 + (uint)pbVar25[1] * 0x100 + (uint)pbVar25[2] + uVar28;
                  goto joined_r0x00102532;
               }

               if (bVar43 < 4) {
                  if (bVar43 == 1) {
                     uVar28 = *(byte*)( (long)puVar41 + (ulong)uVar10 + 3 ) + uVar28;
                     joined_r0x00102532:if (iVar26 != 0) goto LAB_001017a2;
                     sVar35 = (size_t)uVar28;
                     if (*(long*)( param_1 + 0x10 ) - (long)puVar22 < (long)sVar35) goto LAB_001019dd;
                  }
 else {
                     if (bVar43 != 2) goto joined_r0x00102532;
                     uVar10 = *(ushort*)( (long)puVar41 + (ulong)uVar10 * 2 + 3 );
                     sVar35 = (size_t)( ( ushort )(uVar10 << 8 | uVar10 >> 8) + uVar28 );
                     if (iVar26 != 0) goto LAB_001017a2;
                     if (*(long*)( param_1 + 0x10 ) - (long)puVar22 < (long)sVar35) goto LAB_001019dd;
                  }

                  *(size_t*)( param_1 + 8 ) = (long)puVar22 + sVar35;
                  goto LAB_00101cb3;
               }

               if (bVar43 != 4) goto joined_r0x00102532;
               uVar12 = *(uint*)( (long)puVar41 + (ulong)uVar10 * 4 + 3 );
               sVar35 = (size_t)( ( uVar12 >> 0x18 | ( uVar12 & 0xff0000 ) >> 8 | ( uVar12 & 0xff00 ) << 8 | uVar12 << 0x18 ) + uVar28 );
               if (iVar26 != 0) goto LAB_001017a2;
               if (( 0x7fffffff < sVar35 ) || ( *(long*)( param_1 + 0x10 ) - (long)puVar22 < (long)sVar35 )) goto LAB_001019dd;
               *(size_t*)( param_1 + 8 ) = (long)puVar22 + sVar35;
               if (sVar35 != 0) goto LAB_00101cb3;
            }

            if (*(int*)( param_1 + 0x2c ) == 0) {
               puVar18 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_1 + 0x30 ));
               if (puVar18 == (undefined8*)0x0) {
                  if (*(int*)( param_1 + 0x2c ) == 0) {
                     *(undefined4*)( param_1 + 0x2c ) = 1;
                  }

                  goto LAB_001024c6;
               }

               uVar33 = *(undefined8*)( param_1 + 0x10 );
               lVar16 = *(long*)( param_2 + 0x70 );
               uVar28 = *(uint*)( param_2 + 0xc );
               *puVar18 = *(undefined8*)( param_1 + 8 );
               puVar18[1] = uVar33;
               puVar18[6] = *(undefined8*)( param_1 + 0x48 );
               uVar12 = *(uint*)( lVar16 + 0xc );
               *(undefined8**)( param_1 + 0x48 ) = puVar18;
               if (uVar12 + uVar28 != 0) goto LAB_00101d03;
               LAB_00102016:iVar26 = (int)*(undefined8*)( param_1 + 8 ) - (int)*puVar18;
               hb_serialize_context_t::pop_pack(param_1, false);
               puVar41 = *(ushort**)( param_1 + 8 );
               uVar28 = iVar26 + 1;
               uVar12 = extraout_EDX_01;
               if (uVar28 == 0) {
                  iVar26 = -1;
                  uVar28 = 0;
               }
 else {
                  iVar14 = 0x1f;
                  if (uVar28 != 0) {
                     for (; uVar28 >> iVar14 == 0; iVar14 = iVar14 + -1) {}
                  }

                  uVar28 = iVar14 + 8U >> 3;
               }

            }
 else {
               LAB_001024c6:lVar16 = *(long*)( param_2 + 0x70 );
               uVar28 = *(uint*)( param_2 + 0xc );
               uVar12 = *(uint*)( lVar16 + 0xc );
               if (uVar12 + uVar28 != 0) {
                  LAB_00101d03:lVar42 = 0;
                  do {
                     if ((uint)lVar42 < uVar12) {
                        plVar15 = (long*)( *(long*)( lVar16 + 0x10 ) + lVar42 * 0x18 );
                        LAB_00101d1e:uVar28 = *(uint*)( plVar15 + 1 );
                        bVar8 = uVar28 == 0x12;
                        if (bVar8) goto LAB_00101db7;
                        LAB_00101d2b:if (uVar28 < 0x12 || bVar8) {
                           if (uVar28 == 0xf) {
                              if (*(int*)( param_2 + 0x90 ) == 0) {
                                 LAB_001021e6:bVar43 = *(byte*)( (long)plVar15 + 0xc );
                                 if (*(int*)( param_1 + 0x2c ) == 0) {
                                    lVar16 = *(long*)( param_1 + 0x10 ) - (long)*(void**)( param_1 + 8 );
                                    if ((long)(ulong)bVar43 <= lVar16) {
                                       hb_memset(*(void**)( param_1 + 8 ), (uint)bVar43, (uint)lVar16);
                                       lVar16 = *(long*)( param_1 + 8 );
                                       *(ulong*)( param_1 + 8 ) = (ulong)bVar43 + lVar16;
                                       if (lVar16 != 0) {
                                          if (*(char*)( (long)plVar15 + 0xc ) != '\0') {
                                             lVar38 = 0;
                                             do {
                                                *(undefined1*)( lVar16 + lVar38 ) = *(undefined1*)( *plVar15 + lVar38 );
                                                lVar38 = lVar38 + 1;
                                             }
 while ( (uint)lVar38 < ( uint ) * (byte*)( (long)plVar15 + 0xc ) );
                                          }

                                          goto LAB_00101d72;
                                       }

                                       goto LAB_0010179a;
                                    }

                                    goto LAB_00101793;
                                 }

                                 goto LAB_0010179a;
                              }

                              bVar8 = CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>(param_1, 0xf, *(int*)( param_2 + 0x90 ), 2);
                           }
 else {
                              if (uVar28 < 0x10) {
                                 if (4 < uVar28) goto LAB_001021e6;
                                 if (uVar28 == 3) {
                                    lVar16 = 4;
                                    LAB_00102196:uVar12 = *(uint*)( param_2 + lVar16 * 4 + 0x1d0 );
                                 }
 else {
                                    if (uVar28 == 4) {
                                       lVar16 = 5;
                                       goto LAB_00102196;
                                    }

                                    if (uVar28 == 1) {
                                       lVar16 = 1;
                                       goto LAB_00102196;
                                    }

                                    lVar16 = 3;
                                    if (uVar28 == 2) goto LAB_00102196;
                                    uVar12 = *(uint*)( param_2 + 0x1d0 );
                                 }

                                 bVar8 = CFF::UnsizedByteStr::serialize_int<OT::IntType<short,2u>,unsigned_int>(param_1, 0x1c, uVar12);
                                 if (bVar8) {
                                    lVar38 = 1;
                                    lVar16 = 1;
                                    goto LAB_00101ec5;
                                 }

                                 goto LAB_0010179a;
                              }

                              if (uVar28 == 0x10) {
                                 if (*(int*)( param_2 + 0x8c ) == 0) goto LAB_001021e6;
                                 bVar8 = CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>(param_1, 0x10, *(int*)( param_2 + 0x8c ), 2);
                              }
 else {
                                 bVar8 = CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>(param_1, 0x11, *(undefined4*)( param_2 + 0x88 ), 2);
                              }

                           }

                           LAB_00101d6a:if (bVar8 == false) goto LAB_0010179a;
                        }
 else if (uVar28 == 0x11e) {
                           uVar28 = *(uint*)( plVar15 + 2 );
                           bVar43 = *(byte*)( (long)plVar15 + 0xc );
                           if ((uint)bVar43 < uVar28 + 3) goto LAB_0010179a;
                           lVar16 = *plVar15;
                           bVar8 = CFF::UnsizedByteStr::serialize_int<OT::IntType<short,2u>,unsigned_int>(param_1, 0x1c, *(uint*)( param_2 + 500 ));
                           if (( ( !bVar8 ) || ( bVar8 = CFF::UnsizedByteStr::serialize_int<OT::IntType<short,2u>,unsigned_int>(param_1, 0x1c, *(uint*)( param_2 + 0x1f8 )) ),!bVar8 )) goto LAB_0010179a;
                           uVar12 = bVar43 - uVar28;
                           lVar38 = *(long*)( param_1 + 0x10 ) - (long)*(void**)( param_1 + 8 );
                           if (lVar38 < (long)( ulong )(uVar12 & 0xff)) goto LAB_00101793;
                           hb_memset(*(void**)( param_1 + 8 ), uVar12 & 0xff, (uint)lVar38);
                           lVar38 = *(long*)( param_1 + 8 );
                           *(ulong*)( param_1 + 8 ) = ( ulong )(uVar12 & 0xff) + lVar38;
                           if (lVar38 == 0) goto LAB_0010179a;
                           if ((char)uVar12 != '\0') {
                              lVar19 = 0;
                              do {
                                 *(undefined1*)( lVar38 + lVar19 ) = *(undefined1*)( lVar16 + (ulong)uVar28 + lVar19 );
                                 lVar19 = lVar19 + 1;
                              }
 while ( (uint)lVar19 < ( uVar12 & 0xff ) );
                           }

                        }
 else {
                           if (uVar28 < 0x11f) {
                              if (uVar28 == 0x100) {
                                 iVar26 = 2;
                              }
 else {
                                 if (1 < uVar28 - 0x115) goto LAB_001021e6;
                                 iVar26 = ( uint )(uVar28 == 0x116) * 2 + 6;
                              }

                           }
 else {
                              if (uVar28 != 0x126) {
                                 if (uVar28 == 0x124) {
                                    bVar8 = CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>(param_1, 0x124, *(undefined4*)( param_2 + 0x84 ), 2);
                                 }
 else {
                                    if (uVar28 != 0x125) goto LAB_001021e6;
                                    bVar8 = CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>(param_1, 0x125, *(undefined4*)( param_2 + 0x80 ), 2);
                                 }

                                 goto LAB_00101d6a;
                              }

                              iVar26 = 7;
                           }

                           bVar8 = CFF::UnsizedByteStr::serialize_int<OT::IntType<short,2u>,unsigned_int>(param_1, 0x1c, *(uint*)( param_2 + (long)iVar26 * 4 + 0x1d0 ));
                           if (!bVar8) goto LAB_0010179a;
                           lVar38 = 2;
                           lVar16 = 2;
                           LAB_00101ec5:if (*(int*)( param_1 + 0x2c ) != 0) goto LAB_0010179a;
                           puVar24 = *(undefined1**)( param_1 + 8 );
                           if (*(long*)( param_1 + 0x10 ) - (long)puVar24 < lVar16) goto LAB_00101793;
                           *(undefined1**)( param_1 + 8 ) = puVar24 + lVar38;
                           if (puVar24 == (undefined1*)0x0) goto LAB_0010179a;
                           if (0xff < uVar28) {
                              *puVar24 = 0xc;
                              uVar28 = uVar28 - 0x100;
                              puVar24 = puVar24 + 1;
                           }

                           *puVar24 = (char)uVar28;
                        }

                     }
 else {
                        uVar12 = (uint)lVar42 - uVar12;
                        plVar15 = (long*)&_hb_NullPool;
                        if (uVar28 <= uVar12) goto LAB_00101d1e;
                        plVar15 = (long*)( *(long*)( param_2 + 0x10 ) + (ulong)uVar12 * 0x18 );
                        uVar28 = *(uint*)( plVar15 + 1 );
                        bVar8 = uVar28 == 0x12;
                        if (!bVar8) goto LAB_00101d2b;
                        LAB_00101db7:bVar8 = CFF::UnsizedByteStr::serialize_int<OT::IntType<short,2u>,unsigned_int>(param_1, 0x1c, *(uint*)( param_2 + 0x98 ));
                        if (( !bVar8 ) || ( bVar8 = CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>(param_1, 0x12, *(undefined4*)( param_2 + 0x9c ), 2) ),!bVar8) goto LAB_0010179a;
                     }

                     LAB_00101d72:lVar16 = *(long*)( param_2 + 0x70 );
                     uVar28 = *(uint*)( param_2 + 0xc );
                     lVar42 = lVar42 + 1;
                     uVar12 = *(uint*)( lVar16 + 0xc );
                  }
 while ( (uint)lVar42 < uVar12 + uVar28 );
               }

               puVar18 = *(undefined8**)( param_1 + 0x48 );
               if (puVar18 != (undefined8*)0x0) goto LAB_00102016;
               uVar28 = 1;
               hb_serialize_context_t::pop_pack(param_1, false);
               puVar41 = *(ushort**)( param_1 + 8 );
               iVar26 = 0;
               uVar12 = extraout_EDX_02;
            }

            if (*(int*)( param_1 + 0x2c ) == 0) {
               if (*(long*)( param_1 + 0x10 ) - (long)puVar41 < 2) goto LAB_001019dd;
               hb_memset(puVar41, 2, uVar12);
               lVar16 = *(long*)( param_1 + 8 );
               *(long*)( param_1 + 8 ) = lVar16 + 2;
               if (( ( lVar16 != 0 ) && ( puVar41 != (ushort*)0x0 ) ) && ( *puVar41 = 0x100 * (int*)( param_1 + 0x2c ) == 0 )) {
                  pvVar21 = *(void**)( param_1 + 8 );
                  uVar34 = ( (long)puVar41 + 3U ) - (long)pvVar21;
                  if (( 0x7fffffff < uVar34 ) || ( *(ulong*)( param_1 + 0x10 ) < (long)puVar41 + 3U )) goto LAB_001019dd;
                  if ((int)uVar34 != 0) {
                     memset(pvVar21, 0, uVar34);
                     pvVar21 = *(void**)( param_1 + 8 );
                  }

                  lVar16 = uVar34 + (long)pvVar21;
                  *(long*)( param_1 + 8 ) = lVar16;
                  if (pvVar21 != (void*)0x0) {
                     *(char*)( puVar41 + 1 ) = (char)uVar28;
                     uVar34 = ( ulong )(( ( ushort )(*puVar41 << 8 | *puVar41 >> 8) + 1 ) * uVar28);
                     if (*(int*)( param_1 + 0x2c ) == 0) {
                        if ((long)uVar34 <= *(long*)( param_1 + 0x10 ) - lVar16) {
                           *(ulong*)( param_1 + 8 ) = lVar16 + uVar34;
                           if (uVar28 == 3) {
                              *(undefined1*)( (long)puVar41 + 5 ) = 1;
                              *(undefined2*)( (long)puVar41 + 3 ) = 0;
                              uVar10 = ( ushort )(iVar26 + 1);
                              *(ushort*)( (long)puVar41 + 7 ) = uVar10 << 8 | uVar10 >> 8;
                              *(char*)( puVar41 + 3 ) = (char)( ( uint )(iVar26 + 1) >> 0x10 );
                           }
 else if (uVar28 == 4) {
                              uVar28 = iVar26 + 1;
                              *(undefined4*)( (long)puVar41 + 3 ) = 0x1000000;
                              *(uint*)( (long)puVar41 + 7 ) = uVar28 >> 0x18 | ( uVar28 & 0xff0000 ) >> 8 | ( uVar28 & 0xff00 ) << 8 | uVar28 * 0x1000000;
                           }
 else if (uVar28 == 1) {
                              *(undefined1*)( (long)puVar41 + 3 ) = 1;
                              *(char*)( puVar41 + 2 ) = (char)iVar26 + '\x01';
                           }
 else if (uVar28 == 2) {
                              uVar10 = (short)iVar26 + 1;
                              *(undefined2*)( (long)puVar41 + 3 ) = 0x100;
                              *(ushort*)( (long)puVar41 + 5 ) = uVar10 * 0x100 | uVar10 >> 8;
                           }

                           goto LAB_001017a7;
                        }

                        goto LAB_001019dd;
                     }

                  }

               }

            }

         }

      }

   }
 else {
      LAB_0010179a:hb_serialize_context_t::pop_discard(param_1);
   }

   LAB_001017a2:cVar1 = (cff1_subset_plan)0x0;
   LAB_001017a7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return cVar1;
}
/* OT::cff1::accelerator_subset_t::subset(hb_subset_context_t*) const */undefined4 OT::cff1::accelerator_subset_t::subset(accelerator_subset_t *this, hb_subset_context_t *param_1) {
   int *piVar1;
   int *piVar2;
   uint uVar3;
   undefined4 uVar4;
   int *piVar5;
   int *piVar6;
   void *__ptr;
   int *piVar7;
   long in_FS_OFFSET;
   cff1_subset_plan acStack_248[8];
   undefined8 local_240;
   void *local_238;
   undefined1 local_1d0[16];
   undefined1 local_1c0[16];
   undefined8 local_1b0;
   undefined8 local_1a4;
   undefined4 local_19c;
   undefined8 local_198;
   void *local_190;
   undefined4 local_188;
   undefined4 local_184;
   undefined8 local_180;
   undefined1 local_178;
   undefined2 local_176;
   undefined1 local_174[16];
   void *local_160;
   undefined8 local_158;
   void *local_150;
   undefined8 local_148;
   void *local_140;
   undefined8 local_138;
   void *local_130;
   undefined8 local_128;
   void *local_120;
   undefined8 local_118;
   void *local_110;
   undefined1 local_108;
   undefined8 local_100;
   void *local_f8;
   undefined8 local_f0;
   void *local_e8;
   undefined8 local_d8;
   void *local_d0;
   undefined4 local_c0;
   undefined4 local_b8;
   undefined4 local_b4;
   undefined8 local_b0;
   undefined1 local_a8;
   undefined2 local_a6;
   undefined1 local_a4[16];
   void *local_90;
   undefined8 local_88;
   void *local_80;
   undefined4 local_78;
   undefined4 uStack_74;
   undefined4 uStack_70;
   undefined4 uStack_6c;
   undefined4 local_68;
   undefined4 uStack_64;
   undefined4 uStack_60;
   undefined4 uStack_5c;
   undefined4 uStack_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined1 local_4c;
   undefined4 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_1d0 = (undefined1[16])0x0;
   local_1c0 = (undefined1[16])0x0;
   local_1a4 = _LC11;
   local_240 = 0;
   local_238 = (void*)0x0;
   local_1b0 = 0;
   local_19c = 0;
   local_198 = 0;
   local_190 = (void*)0x0;
   local_188 = 1;
   local_184 = 1;
   local_180 = 0;
   local_176 = 0;
   local_174 = (undefined1[16])0x0;
   local_178 = 1;
   local_160 = (void*)0x0;
   local_158 = 0;
   local_150 = (void*)0x0;
   local_148 = 0;
   local_140 = (void*)0x0;
   local_138 = 0;
   local_130 = (void*)0x0;
   local_128 = 0;
   local_120 = (void*)0x0;
   local_118 = 0;
   local_110 = (void*)0x0;
   local_108 = 0;
   local_100 = 0;
   local_f8 = (void*)0x0;
   local_f0 = 0;
   local_e8 = (void*)0x0;
   local_d8 = 0;
   local_d0 = (void*)0x0;
   local_c0 = 0;
   local_b8 = 1;
   local_b4 = 1;
   local_b0 = 0;
   local_a4 = (undefined1[16])0x0;
   local_68 = 0xffffffff;
   uStack_64 = 0xffffffff;
   uStack_60 = 0xffffffff;
   local_a8 = 1;
   local_a6 = 0;
   local_90 = (void*)0x0;
   local_88 = 0;
   local_80 = (void*)0x0;
   local_4c = 0;
   local_48 = 0;
   local_78 = 0xffffffff;
   uStack_74 = 0xffffffff;
   uStack_70 = 0xffffffff;
   uStack_6c = 0xffffffff;
   uStack_5c = 0xffffffff;
   uStack_58 = 0xffffffff;
   uStack_54 = 0xffffffff;
   uStack_50 = 0xffffffff;
   uVar4 = cff1_subset_plan::create(acStack_248, this, *(hb_subset_plan_t**)( param_1 + 0x10 ));
   if ((char)uVar4 != '\0') {
      uVar4 = serialize(this, *(hb_serialize_context_t**)( param_1 + 0x18 ), acStack_248);
   }

   if ((int)local_88 != 0) {
      free(local_80);
   }

   hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>((hb_hashmap_t*)&local_b8);
   if (local_90 != (void*)0x0) {
      free(local_90);
   }

   if ((int)local_d8 != 0) {
      free(local_d0);
   }

   if ((int)local_f0 != 0) {
      free(local_e8);
   }

   if ((int)local_100 != 0) {
      free(local_f8);
   }

   if ((int)local_118 != 0) {
      free(local_110);
   }

   if ((int)local_128 != 0) {
      piVar5 = (int*)( (long)local_120 + (ulong)local_128._4_4_ * 0x10 + -0x10 );
      if (local_128._4_4_ != 0) {
         piVar1 = piVar5 + ( ulong )(local_128._4_4_ - 1) * -4 + -4;
         do {
            while (*piVar5 == 0) {
               piVar5 = piVar5 + -4;
               if (piVar1 == piVar5) goto LAB_00102d35;
            }
;
            uVar3 = piVar5[1];
            __ptr = *(void**)( piVar5 + 2 );
            piVar6 = (int*)( (long)__ptr + (ulong)uVar3 * 0x10 + -0x10 );
            if (uVar3 != 0) {
               piVar7 = piVar6 + ( ulong )(uVar3 - 1) * -4 + -4;
               do {
                  while (*piVar6 == 0) {
                     piVar6 = piVar6 + -4;
                     if (piVar6 == piVar7) goto LAB_00102d1b;
                  }
;
                  piVar2 = piVar6 + 2;
                  piVar6 = piVar6 + -4;
                  free(*(void**)piVar2);
               }
 while ( piVar6 != piVar7 );
               LAB_00102d1b:__ptr = *(void**)( piVar5 + 2 );
            }

            free(__ptr);
            piVar5 = piVar5 + -4;
         }
 while ( piVar1 != piVar5 );
      }

      LAB_00102d35:free(local_120);
   }

   if ((int)local_138 != 0) {
      piVar5 = (int*)( (long)local_130 + (ulong)local_138._4_4_ * 0x10 + -0x10 );
      if (local_138._4_4_ != 0) {
         piVar1 = piVar5 + ( ulong )(local_138._4_4_ - 1) * -4 + -4;
         do {
            while (*piVar5 == 0) {
               piVar5 = piVar5 + -4;
               if (piVar1 == piVar5) goto LAB_00102c6b;
            }
;
            piVar6 = piVar5 + 2;
            piVar5 = piVar5 + -4;
            free(*(void**)piVar6);
         }
 while ( piVar1 != piVar5 );
      }

      LAB_00102c6b:free(local_130);
   }

   if ((int)local_148 != 0) {
      piVar5 = (int*)( (long)local_140 + (ulong)local_148._4_4_ * 0x10 + -0x10 );
      if (local_148._4_4_ != 0) {
         piVar1 = piVar5 + ( ulong )(local_148._4_4_ - 1) * -4 + -4;
         do {
            while (*piVar5 == 0) {
               piVar5 = piVar5 + -4;
               if (piVar1 == piVar5) goto LAB_00102bf9;
            }
;
            piVar6 = piVar5 + 2;
            piVar5 = piVar5 + -4;
            free(*(void**)piVar6);
         }
 while ( piVar1 != piVar5 );
      }

      LAB_00102bf9:free(local_140);
   }

   if ((int)local_158 != 0) {
      free(local_150);
   }

   hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>((hb_hashmap_t*)&local_188);
   if (local_160 != (void*)0x0) {
      free(local_160);
   }

   if ((int)local_198 != 0) {
      free(local_190);
   }

   if ((int)local_240 != 0) {
      free(local_238);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
/* CFF::FDSelect3_4<OT::IntType<unsigned short, 2u>, OT::IntType<unsigned char, 1u>
   >::_cmp_range(void const*, void const*) */ulong CFF::FDSelect3_4<OT::IntType<unsigned_short,2u>,OT::IntType<unsigned_char,1u>>::_cmp_range(void *param_1, void *param_2) {
   ulong uVar1;
   /* WARNING: Load size is inaccurate */
   /* WARNING: Load size is inaccurate */
   uVar1 = 0xffffffff;
   if (( uint )(ushort)(*param_2 << 8 | *param_2 >> 8) <= *param_1) {
      uVar1 = ( ulong )(( uint )(ushort)(*(ushort*)( (long)param_2 + 3 ) << 8 | *(ushort*)( (long)param_2 + 3 ) >> 8) <= *param_1);
   }

   return uVar1;
}
/* CFF::cff1_cs_opset_t<cff1_cs_opset_subr_subset_t, CFF::subr_subset_param_t,
   CFF::path_procs_null_t<CFF::cff1_cs_interp_env_t, CFF::subr_subset_param_t>
   >::check_width(unsigned int, CFF::cff1_cs_interp_env_t&, CFF::subr_subset_param_t&) [clone
   .isra.0] */void CFF::cff1_cs_opset_t<cff1_cs_opset_subr_subset_t,CFF::subr_subset_param_t,CFF::path_procs_null_t<CFF::cff1_cs_interp_env_t,CFF::subr_subset_param_t>>::check_width(uint param_1, cff1_cs_interp_env_t *param_2, subr_subset_param_t *param_3) {
   ulong uVar1;
   if (param_2[0x1170] != (cff1_cs_interp_env_t)0x0) {
      return;
   }

   if (0x17 < param_1) {
      return;
   }

   uVar1 = 1L << ( (byte)param_1 & 0x3f );
   if (( uVar1 & 0x9c400a ) == 0) {
      if (( uVar1 & 0x400010 ) == 0) {
         if (param_1 != 0x15) {
            return;
         }

         if (*(uint*)( param_2 + 0x14 ) < 3) goto LAB_00102e38;
      }
 else if (*(uint*)( param_2 + 0x14 ) < 2) goto LAB_00102e38;
   }
 else if (( *(uint*)( param_2 + 0x14 ) == 0 ) || ( ( *(uint*)( param_2 + 0x14 ) & 1 ) == 0 )) goto LAB_00102e38;
   param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
   *(undefined4*)( param_2 + 0x1174 ) = 1;
   *(undefined8*)( param_2 + 0x1178 ) = *(undefined8*)( param_2 + 0x18 );
   LAB_00102e38:param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
   return;
}
/* CFF::cff1_cs_opset_t<cff1_cs_opset_flatten_t, CFF::flatten_param_t,
   CFF::path_procs_null_t<CFF::cff1_cs_interp_env_t, CFF::flatten_param_t> >::check_width(unsigned
   int, CFF::cff1_cs_interp_env_t&, CFF::flatten_param_t&) [clone .isra.0] */void CFF::cff1_cs_opset_t<cff1_cs_opset_flatten_t,CFF::flatten_param_t,CFF::path_procs_null_t<CFF::cff1_cs_interp_env_t,CFF::flatten_param_t>>::check_width(uint param_1, cff1_cs_interp_env_t *param_2, flatten_param_t *param_3) {
   ulong uVar1;
   if (param_2[0x1170] != (cff1_cs_interp_env_t)0x0) {
      return;
   }

   if (0x17 < param_1) {
      return;
   }

   uVar1 = 1L << ( (byte)param_1 & 0x3f );
   if (( uVar1 & 0x9c400a ) == 0) {
      if (( uVar1 & 0x400010 ) == 0) {
         if (param_1 != 0x15) {
            return;
         }

         if (*(uint*)( param_2 + 0x14 ) < 3) goto LAB_00102ec8;
      }
 else if (*(uint*)( param_2 + 0x14 ) < 2) goto LAB_00102ec8;
   }
 else if (( *(uint*)( param_2 + 0x14 ) == 0 ) || ( ( *(uint*)( param_2 + 0x14 ) & 1 ) == 0 )) goto LAB_00102ec8;
   param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
   *(undefined4*)( param_2 + 0x1174 ) = 1;
   *(undefined8*)( param_2 + 0x1178 ) = *(undefined8*)( param_2 + 0x18 );
   LAB_00102ec8:param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::subr_subsetter_t<cff1_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned short, 2u> >,
   OT::cff1::accelerator_subset_t const, CFF::cff1_cs_interp_env_t, cff1_cs_opset_subr_subset_t,
   14u>::drop_hints_in_str(CFF::parsed_cs_str_t&, CFF::subr_subset_param_t const&,
   CFF::subr_subsetter_t<cff1_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned short, 2u> >,
   OT::cff1::accelerator_subset_t const, CFF::cff1_cs_interp_env_t, cff1_cs_opset_subr_subset_t,
   14u>::drop_hints_param_t&) [clone .isra.0] */undefined8 CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::drop_hints_in_str(parsed_cs_str_t *param_1, subr_subset_param_t *param_2, drop_hints_param_t *param_3) {
   ushort uVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   char *pcVar5;
   uint uVar6;
   ulong uVar7;
   uint uVar8;
   parsed_cs_str_t *ppVar9;
   undefined8 uVar10;
   undefined *puVar11;
   long lVar12;
   ulong uVar13;
   uVar13 = ( ulong ) * (uint*)( param_1 + 0xc );
   lVar4 = *(long*)( param_1 + 0x10 );
   if (*(uint*)( param_1 + 0xc ) == 0) {
      param_3[2] = (drop_hints_param_t)0x1;
      uVar10 = 0;
   }
 else {
      lVar12 = 0x10;
      uVar7 = 0;
      uVar10 = 0;
      do {
         while (uVar8 = *(uint*)( lVar4 + -8 + lVar12 ),0x1d < uVar8) {
            if (uVar8 != 0x100) goto joined_r0x001030d0;
            LAB_0010310a:*(undefined1*)( lVar4 + -3 + lVar12 ) = 1;
            joined_r0x0010311b:lVar12 = lVar12 + 0x10;
            uVar7 = uVar7 + 1;
            if (uVar13 == uVar7) goto LAB_0010301c;
         }
;
         if (uVar8 == 0) goto switchD_00102f8d_caseD_2;
         uVar6 = (uint)uVar7;
         switch (uVar8) {
            default:
        goto switchD_00102f8d_caseD_2;
            case 4:
            case 0x15:
            case 0x16:
        *param_3 = (drop_hints_param_t)0x1;
        goto joined_r0x0010311b;
            case 10:
        lVar2 = *(long *)(param_2 + 0x18);
        uVar1 = *(ushort *)(lVar4 + -2 + lVar12);
        param_3[1] = (drop_hints_param_t)0x0;
        if ((uint)uVar1 < *(uint *)(lVar2 + 4)) {
          ppVar9 = (parsed_cs_str_t *)(*(long *)(lVar2 + 8) + (ulong)uVar1 * 0x28);
        }
        else {
          __hb_CrapPool = __hb_NullPool;
          _memcpy = _lookup_expert_subset_charset_for_sid;
          _realloc = _lookup_expert_charset_for_sid;
          _memmove = _pthread_mutex_lock;
          ppVar9 = (parsed_cs_str_t *)&_hb_CrapPool;
          _memcmp = _pthread_mutex_unlock;
        }
        cVar3 = drop_hints_in_str(ppVar9,param_2,param_3);
        if (param_3[1] == (drop_hints_param_t)0x0) {
          if (param_3[2] != (drop_hints_param_t)0x0) {
            if (uVar6 < *(uint *)(param_1 + 0xc)) {
LAB_00102ffe:
              puVar11 = (undefined *)(uVar7 * 0x10 + *(long *)(param_1 + 0x10));
            }
            else {
              puVar11 = &_hb_CrapPool;
              __hb_CrapPool = __hb_NullPool;
              _memcpy = _lookup_expert_subset_charset_for_sid;
            }
LAB_00103002:
            puVar11[0xd] = 1;
          }
        }
        else {
          uVar8 = *(uint *)(param_1 + 0xc);
          if (uVar6 < uVar8) {
LAB_0010313e:
            puVar11 = (undefined *)(uVar7 * 0x10 + *(long *)(param_1 + 0x10));
          }
          else {
            puVar11 = &_hb_CrapPool;
            __hb_CrapPool = __hb_NullPool;
            _memcpy = _lookup_expert_subset_charset_for_sid;
            uVar8 = *(uint *)(param_1 + 0xc);
          }
LAB_00103142:
          puVar11[0xd] = 1;
          if ((uVar6 + 1 < uVar8) && (*(int *)(*(long *)(param_1 + 0x10) + 8 + lVar12) != 0xb)) {
            param_3[1] = (drop_hints_param_t)0x0;
          }
        }
        goto joined_r0x00103009;
            case 0x13:
            case 0x14:
        if (*param_3 != (drop_hints_param_t)0x0) goto LAB_0010310a;
            case 1:
            case 3:
            case 0x12:
            case 0x17:
        *(undefined1 *)(lVar4 + -3 + lVar12) = 1;
        if ((*(uint *)(param_1 + 0xc) <= uVar6 + 1) ||
           (*(int *)(*(long *)(param_1 + 0x10) + 8 + lVar12) == 0xb)) {
          param_3[1] = (drop_hints_param_t)0x1;
        }
LAB_00103083:
        uVar6 = uVar6 - 1;
        if (-1 < (int)uVar6) {
          pcVar5 = (char *)(lVar4 + 0xd + (ulong)uVar6 * 0x10);
          do {
            if (*pcVar5 != '\0') break;
            *pcVar5 = '\x01';
            if (*(int *)(pcVar5 + -5) == 0xf) {
              param_3[3] = (drop_hints_param_t)0x1;
            }
            uVar6 = uVar6 - 1;
            pcVar5 = pcVar5 + -0x10;
          } while (uVar6 != 0xffffffff);
        }
        uVar10 = 1;
        break;
            case 0x1d:
        lVar2 = *(long *)(param_2 + 0x10);
        uVar1 = *(ushort *)(lVar4 + -2 + lVar12);
        param_3[1] = (drop_hints_param_t)0x0;
        if ((uint)uVar1 < *(uint *)(lVar2 + 4)) {
          ppVar9 = (parsed_cs_str_t *)(*(long *)(lVar2 + 8) + (ulong)uVar1 * 0x28);
        }
        else {
          __hb_CrapPool = __hb_NullPool;
          _memcpy = _lookup_expert_subset_charset_for_sid;
          _realloc = _lookup_expert_charset_for_sid;
          _memmove = _pthread_mutex_lock;
          ppVar9 = (parsed_cs_str_t *)&_hb_CrapPool;
          _memcmp = _pthread_mutex_unlock;
        }
        cVar3 = drop_hints_in_str(ppVar9,param_2,param_3);
        if (param_3[1] != (drop_hints_param_t)0x0) {
          uVar8 = *(uint *)(param_1 + 0xc);
          if (uVar6 < uVar8) goto LAB_0010313e;
          __hb_CrapPool = __hb_NullPool;
          _memcpy = _lookup_expert_subset_charset_for_sid;
          puVar11 = &_hb_CrapPool;
          uVar8 = *(uint *)(param_1 + 0xc);
          goto LAB_00103142;
        }
        if (param_3[2] != (drop_hints_param_t)0x0) {
          if (uVar6 < *(uint *)(param_1 + 0xc)) goto LAB_00102ffe;
          __hb_CrapPool = __hb_NullPool;
          _memcpy = _lookup_expert_subset_charset_for_sid;
          puVar11 = &_hb_CrapPool;
          goto LAB_00103002;
        }
joined_r0x00103009:
        if (cVar3 != '\0') goto LAB_00103083;
switchD_00102f8d_caseD_2:
         }

         joined_r0x001030d0:lVar12 = lVar12 + 0x10;
         uVar7 = uVar7 + 1;
      }
 while ( uVar13 != uVar7 );
      LAB_0010301c:param_3[2] = (drop_hints_param_t)0x1;
      lVar12 = uVar13 * 0x10 + lVar4;
      do {
         if (*(int*)( lVar4 + 8 ) == 0xb) {
            return uVar10;
         }

         if (*(char*)( lVar4 + 0xd ) == '\0') {
            param_3[2] = (drop_hints_param_t)0x0;
            return uVar10;
         }

         lVar4 = lVar4 + 0x10;
      }
 while ( lVar4 != lVar12 );
   }

   return uVar10;
}
/* hb_bit_set_t::resize(unsigned int, bool, bool) */hb_bit_set_t hb_bit_set_t::resize(hb_bit_set_t *this, uint param_1, bool param_2, bool param_3) {
   hb_bit_set_t hVar1;
   uint uVar2;
   uint uVar3;
   void *pvVar4;
   hb_bit_set_t hVar5;
   uint uVar6;
   ulong uVar7;
   uint uVar8;
   ulong uVar9;
   hVar1 = *this;
   if (hVar1 == (hb_bit_set_t)0x0) {
      return (hb_bit_set_t)0x0;
   }

   uVar6 = *(uint*)( this + 0x24 );
   uVar9 = (ulong)uVar6;
   uVar3 = *(uint*)( this + 0x20 );
   hVar5 = ( hb_bit_set_t )(param_1 == 1 && uVar6 == 0);
   if (param_1 != 1 || uVar6 != 0) {
      if ((int)param_1 < 0) {
         param_1 = 0;
      }

      if ((int)uVar3 < 0) goto LAB_001034bc;
      hVar5 = (hb_bit_set_t)param_3;
      if (param_3) {
         uVar8 = param_1;
         if (param_1 <= uVar6) {
            uVar8 = uVar6;
         }

         if (uVar3 < uVar8) {
            if (uVar8 < 0x38e38e4) goto LAB_00103649;
         }
 else {
            if (uVar3 >> 2 <= uVar8) goto LAB_00103403;
            if (uVar8 < 0x38e38e4) {
               pvVar4 = *(void**)( this + 0x28 );
               if (uVar8 != 0) goto LAB_00103650;
               free(pvVar4);
               uVar8 = 0;
               pvVar4 = (void*)0x0;
               goto LAB_0010366c;
            }

         }

      }
 else {
         uVar8 = uVar3;
         if (param_1 <= uVar3) goto LAB_00103403;
         do {
            uVar8 = uVar8 + 8 + ( uVar8 >> 1 );
         }
 while ( uVar8 < param_1 );
         if (uVar8 < 0x38e38e4) {
            pvVar4 = *(void**)( this + 0x28 );
            goto LAB_00103650;
         }

      }

      LAB_001034b7:*(uint*)( this + 0x20 ) = ~uVar3;
      goto LAB_001034bc;
   }

   if ((int)uVar3 < 0) goto LAB_001034bc;
   if (uVar3 == 0) {
      param_1 = 1;
      uVar8 = 1;
      LAB_00103649:pvVar4 = *(void**)( this + 0x28 );
      param_3 = (bool)hVar1;
      LAB_00103650:pvVar4 = realloc(pvVar4, (ulong)uVar8 * 0x48);
      if (pvVar4 == (void*)0x0) {
         uVar3 = *(uint*)( this + 0x20 );
         if (uVar3 < uVar8) goto LAB_001034b7;
      }
 else {
         LAB_0010366c:*(void**)( this + 0x28 ) = pvVar4;
         *(uint*)( this + 0x20 ) = uVar8;
      }

      uVar9 = ( ulong ) * (uint*)( this + 0x24 );
      hVar5 = (hb_bit_set_t)param_3;
   }
 else {
      if (7 < uVar3) {
         pvVar4 = *(void**)( this + 0x28 );
         uVar8 = 1;
         param_1 = 1;
         param_3 = (bool)hVar5;
         goto LAB_00103650;
      }

      uVar9 = 0;
      param_1 = 1;
   }

   LAB_00103403:uVar6 = (uint)uVar9;
   if (( uVar6 < param_1 ) && ( param_2 )) {
      hb_memset((void*)( *(long*)( this + 0x28 ) + uVar9 * 0x48 ), ( param_1 - uVar6 ) * 0x48, uVar6 * 9);
   }

   uVar6 = *(uint*)( this + 0x10 );
   *(uint*)( this + 0x24 ) = param_1;
   if (-1 < (int)uVar6) {
      if (hVar5 == (hb_bit_set_t)0x0) {
         uVar3 = uVar6;
         if (uVar6 < param_1) {
            do {
               uVar3 = uVar3 + 8 + ( uVar3 >> 1 );
            }
 while ( uVar3 < param_1 );
            if (uVar3 < 0x20000000) {
               pvVar4 = *(void**)( this + 0x18 );
               uVar9 = (ulong)uVar3;
               goto LAB_001036a4;
            }

            *(uint*)( this + 0x10 ) = ~uVar6;
            uVar3 = *(uint*)( this + 0x20 );
            if ((int)uVar3 < 0) goto LAB_001034bc;
            uVar6 = 0;
            if (-1 < (int)*(uint*)( this + 0x14 )) {
               uVar6 = *(uint*)( this + 0x14 );
            }

            goto LAB_0010352b;
         }

      }
 else {
         uVar8 = *(uint*)( this + 0x14 );
         uVar7 = (ulong)uVar8;
         uVar3 = param_1;
         if (param_1 <= uVar8) {
            uVar3 = uVar8;
         }

         uVar9 = (ulong)uVar3;
         if (uVar6 < uVar3) {
            if (0x1fffffff < uVar3) {
               *(uint*)( this + 0x10 ) = ~uVar6;
               uVar3 = *(uint*)( this + 0x20 );
               if ((int)uVar3 < 0) goto LAB_001034bc;
               uVar6 = 0;
               if (-1 < (int)uVar8) {
                  uVar6 = uVar8;
               }

               goto LAB_001035b6;
            }

            pvVar4 = *(void**)( this + 0x18 );
            LAB_001036a4:uVar6 = (uint)uVar9;
            pvVar4 = realloc(pvVar4, uVar9 << 3);
            if (pvVar4 == (void*)0x0) {
               uVar3 = *(uint*)( this + 0x14 );
               uVar7 = (ulong)uVar3;
               if (uVar6 <= *(uint*)( this + 0x10 )) goto LAB_001034cf;
               *(uint*)( this + 0x10 ) = ~*(uint *)(this + 0x10);
               goto LAB_001036fb;
            }

         }
 else {
            if (uVar6 >> 2 <= uVar3) goto LAB_001034cf;
            pvVar4 = *(void**)( this + 0x18 );
            if (uVar3 != 0) goto LAB_001036a4;
            free(pvVar4);
            uVar6 = 0;
            pvVar4 = (void*)0x0;
         }

         *(void**)( this + 0x18 ) = pvVar4;
         *(uint*)( this + 0x10 ) = uVar6;
      }

      uVar7 = ( ulong ) * (uint*)( this + 0x14 );
      LAB_001034cf:uVar6 = (uint)uVar7;
      if (( uVar6 < param_1 ) && ( param_2 )) {
         hb_memset((void*)( *(long*)( this + 0x18 ) + uVar7 * 8 ), ( param_1 - uVar6 ) * 8, uVar6);
      }

      *(uint*)( this + 0x14 ) = param_1;
      return hVar1;
   }

   uVar3 = *(uint*)( this + 0x14 );
   LAB_001036fb:uVar6 = 0;
   if (-1 < (int)uVar3) {
      uVar6 = uVar3;
   }

   uVar3 = *(uint*)( this + 0x20 );
   if ((int)uVar3 < 0) goto LAB_001034bc;
   if (hVar5 == (hb_bit_set_t)0x0) {
      LAB_0010352b:uVar9 = (ulong)uVar3;
      if (uVar3 < uVar6) {
         do {
            uVar8 = (int)uVar9 + 8 + (int)( uVar9 >> 1 );
            uVar9 = (ulong)uVar8;
         }
 while ( uVar8 < uVar6 );
         goto LAB_00103540;
      }

      LAB_00103574:uVar8 = *(uint*)( this + 0x24 );
   }
 else {
      LAB_001035b6:uVar8 = *(uint*)( this + 0x24 );
      uVar2 = uVar6;
      if (uVar6 <= uVar8) {
         uVar2 = uVar8;
      }

      uVar9 = (ulong)uVar2;
      if (uVar3 < uVar2) {
         LAB_00103540:if (0x38e38e3 < (uint)uVar9) goto LAB_001034b7;
         pvVar4 = *(void**)( this + 0x28 );
         LAB_00103551:uVar8 = (uint)uVar9;
         pvVar4 = realloc(pvVar4, uVar9 * 0x48);
         if (pvVar4 == (void*)0x0) {
            uVar3 = *(uint*)( this + 0x20 );
            if (uVar3 < uVar8) goto LAB_001034b7;
         }
 else {
            LAB_0010356d:*(void**)( this + 0x28 ) = pvVar4;
            *(uint*)( this + 0x20 ) = uVar8;
         }

         goto LAB_00103574;
      }

      if (uVar2<uVar3> > 2) {
         if (0x38e38e3 < uVar2) goto LAB_001034b7;
         pvVar4 = *(void**)( this + 0x28 );
         if (uVar2 != 0) goto LAB_00103551;
         free(pvVar4);
         uVar8 = 0;
         pvVar4 = (void*)0x0;
         goto LAB_0010356d;
      }

   }

   if (( uVar8 < uVar6 ) && ( param_2 )) {
      hb_memset((void*)( *(long*)( this + 0x28 ) + (ulong)uVar8 * 0x48 ), ( uVar6 - uVar8 ) * 0x48, uVar8 * 9);
   }

   *(uint*)( this + 0x24 ) = uVar6;
   LAB_001034bc:*this = (hb_bit_set_t)0x0;
   return (hb_bit_set_t)0x0;
}
/* hb_bit_set_t::next(unsigned int*) const */undefined8 hb_bit_set_t::next(hb_bit_set_t *this, uint *param_1) {
   long lVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   long lVar5;
   long *plVar6;
   undefined8 uVar7;
   ulong uVar8;
   uint uVar9;
   uint uVar10;
   int *piVar11;
   int iVar12;
   uint *puVar13;
   long lVar14;
   int *piVar15;
   uint uVar16;
   uVar3 = *param_1;
   if (uVar3 == 0xffffffff) {
      uVar3 = *(uint*)( this + 0x24 );
      if (uVar3 != 0) {
         uVar8 = 0;
         do {
            piVar15 = (int*)&_hb_NullPool;
            if ((uint)uVar8 < *(uint*)( this + 0x14 )) {
               piVar15 = (int*)( *(long*)( this + 0x18 ) + uVar8 * 8 );
            }

            piVar11 = (int*)&_hb_NullPool;
            if ((uint)piVar15[1] < uVar3) {
               piVar11 = (int*)( *(long*)( this + 0x28 ) + (ulong)(uint)piVar15[1] * 0x48 );
            }

            if (*piVar11 == -1) {
               plVar6 = (long*)( piVar11 + 2 );
               do {
                  if (*plVar6 != 0) goto LAB_0010395f;
                  plVar6 = plVar6 + 1;
               }
 while ( plVar6 != (long*)( piVar11 + 0x12 ) );
            }
 else if (*piVar11 != 0) {
               LAB_0010395f:uVar8 = 0;
               goto LAB_00103967;
            }

            uVar8 = uVar8 + 1;
         }
 while ( uVar3 != uVar8 );
      }

      uVar7 = 0;
      uVar3 = 0xffffffff;
      LAB_001039fa:*param_1 = uVar3;
      return uVar7;
   }

   lVar5 = *(long*)( this + 0x18 );
   uVar9 = *(uint*)( this + 8 );
   uVar2 = *(uint*)( this + 0x14 );
   uVar16 = uVar3 >> 9;
   if (uVar9 < uVar2) {
      puVar13 = (uint*)( lVar5 + (ulong)uVar9 * 8 );
      if (*puVar13 != uVar16) {
         if (-1 < (int)( uVar2 - 1 )) goto LAB_00103991;
         uVar9 = 0;
         goto LAB_001039c4;
      }

      lVar14 = *(long*)( this + 0x28 );
      LAB_001037ea:uVar2 = uVar3 + 1 & 0x1ff;
      if (uVar2 != 0) {
         uVar4 = ( ulong )(uVar2 >> 6);
         lVar1 = lVar14 + (ulong)puVar13[1] * 0x48;
         uVar8 = -(1L << ((byte)(uVar3 + 1) & 0x3f)) & *(ulong*)( lVar1 + 8 + uVar4 * 8 );
         while (true) {
            if (uVar8 != 0) {
               iVar12 = 0;
               for (; ( uVar8 & 1 ) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                  iVar12 = iVar12 + 1;
               }

               uVar3 = (int)uVar4 * 0x40 + iVar12;
               *param_1 = uVar3;
               *param_1 = uVar3 + *puVar13 * 0x200;
               return 1;
            }

            uVar4 = uVar4 + 1;
            if ((int)uVar4 == 8) break;
            uVar8 = *(ulong*)( lVar1 + 8 + uVar4 * 8 );
         }
;
      }

      *param_1 = 0xffffffff;
      uVar9 = uVar9 + 1;
   }
 else {
      if ((int)( uVar2 - 1 ) < 0) {
         uVar9 = 0;
      }
 else {
         LAB_00103991:iVar12 = uVar2 - 1;
         uVar9 = 0;
         do {
            while (true) {
               uVar10 = iVar12 + uVar9 >> 1;
               uVar3 = *(uint*)( lVar5 + (ulong)uVar10 * 8 );
               if ((int)( uVar16 - uVar3 ) < 0) break;
               uVar9 = uVar10;
               if (( uVar16 == uVar3 ) || ( uVar9 = uVar10 + 1 ),iVar12 < (int)uVar9) goto LAB_001039bb;
            }
;
            iVar12 = uVar10 - 1;
         }
 while ( (int)uVar9 <= iVar12 );
      }

      LAB_001039bb:if (uVar2 <= uVar9) goto LAB_001038a8;
      LAB_001039c4:*(uint*)( this + 8 ) = uVar9;
      puVar13 = (uint*)( lVar5 + (ulong)uVar9 * 8 );
      lVar14 = *(long*)( this + 0x28 );
      if (*puVar13 == uVar16) {
         uVar3 = *param_1;
         goto LAB_001037ea;
      }

   }

   if (uVar9 < *(uint*)( this + 0x14 )) {
      piVar15 = (int*)( lVar5 + (ulong)uVar9 * 8 );
      do {
         lVar5 = 0;
         do {
            uVar8 = *(ulong*)( lVar14 + (ulong)(uint)piVar15[1] * 0x48 + 8 + lVar5 * 8 );
            if (uVar8 != 0) {
               iVar12 = 0;
               for (; ( uVar8 & 1 ) == 0; uVar8 = uVar8 >> 1 | 0x8000000000000000) {
                  iVar12 = iVar12 + 1;
               }

               *param_1 = (int)lVar5 * 0x40 + *piVar15 * 0x200 + iVar12;
               *(uint*)( this + 8 ) = uVar9;
               return 1;
            }

            lVar5 = lVar5 + 1;
         }
 while ( lVar5 != 8 );
         uVar9 = uVar9 + 1;
         piVar15 = piVar15 + 2;
      }
 while ( uVar9 != *(uint*)( this + 0x14 ) );
   }

   LAB_001038a8:*param_1 = 0xffffffff;
   return 0;
   LAB_00103967:uVar4 = *(ulong*)( piVar11 + uVar8 * 2 + 2 );
   if (uVar4 != 0) {
      iVar12 = 0;
      for (; ( uVar4 & 1 ) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
         iVar12 = iVar12 + 1;
      }

      uVar3 = (int)uVar8 * 0x40;
      uVar8 = (ulong)uVar3;
      iVar12 = uVar3 + iVar12;
      LAB_0010397f:uVar3 = iVar12 + *piVar15 * 0x200;
      uVar7 = CONCAT71(( int7 )(uVar8 >> 8), uVar3 != 0xffffffff);
      goto LAB_001039fa;
   }

   uVar8 = uVar8 + 1;
   iVar12 = -1;
   if (uVar8 == 8) goto LAB_0010397f;
   goto LAB_00103967;
}
/* hb_bit_set_t::page_for(unsigned int, bool) */long hb_bit_set_t::page_for(hb_bit_set_t *this, uint param_1, bool param_2) {
   uint *puVar1;
   undefined4 *puVar2;
   uint uVar3;
   uint uVar4;
   long lVar5;
   char cVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   long lVar11;
   uVar9 = param_1 >> 9;
   if (( *(uint*)( this + 8 ) < *(uint*)( this + 0x14 ) ) && ( puVar1 = (uint*)( *(long*)( this + 0x18 ) + ( ulong ) * (uint*)( this + 8 ) * 8 ) * puVar1 == uVar9 )) {
      return *(long*)( this + 0x28 ) + (ulong)puVar1[1] * 0x48;
   }

   uVar4 = *(uint*)( this + 0x24 );
   iVar10 = *(uint*)( this + 0x14 ) - 1;
   if (iVar10 < 0) {
      uVar8 = 0;
   }
 else {
      uVar8 = 0;
      do {
         while (true) {
            uVar7 = iVar10 + uVar8 >> 1;
            lVar11 = (ulong)uVar7 * 8;
            uVar3 = *(uint*)( *(long*)( this + 0x18 ) + (ulong)uVar7 * 8 );
            if (-1 < (int)( uVar9 - uVar3 )) break;
            iVar10 = uVar7 - 1;
            if (iVar10 < (int)uVar8) goto LAB_00103a9c;
         }
;
         if (uVar9 == uVar3) goto LAB_00103b35;
         uVar8 = uVar7 + 1;
      }
 while ( (int)uVar8 <= iVar10 );
   }

   LAB_00103a9c:if (param_2) {
      cVar6 = resize(this, uVar4 + 1, true, false);
      if (cVar6 != '\0') {
         lVar11 = (ulong)uVar8 * 8;
         puVar2 = (undefined4*)( *(long*)( this + 0x28 ) + (ulong)uVar4 * 0x48 );
         for (int i = 0; i < 4; i++) {
            *(undefined1(*) [16])( puVar2 + ( 4*i + 2 ) ) = (undefined1[16])0;
         }

         lVar5 = *(long*)( this + 0x18 );
         *puVar2 = 0;
         memmove((void*)( lVar5 + 8 + lVar11 ), (void*)( lVar5 + lVar11 ), ( ulong )(( ~uVar8 + *(int*)( this + 0x14 ) ) * 8));
         *(ulong*)( *(long*)( this + 0x18 ) + (ulong)uVar8 * 8 ) = CONCAT44(uVar4, uVar9);
         uVar7 = uVar8;
         LAB_00103b35:*(uint*)( this + 8 ) = uVar7;
         return *(long*)( this + 0x28 ) + ( ulong ) * (uint*)( *(long*)( this + 0x18 ) + 4 + lVar11 ) * 0x48;
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::subr_subsetter_t<cff1_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned short, 2u> >,
   OT::cff1::accelerator_subset_t const, CFF::cff1_cs_interp_env_t, cff1_cs_opset_subr_subset_t,
   14u>::collect_subr_refs_in_subr(unsigned int, CFF::parsed_cs_str_vec_t&, hb_set_t*,
   CFF::subr_subset_param_t const&) [clone .isra.0] */void CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::collect_subr_refs_in_subr(uint param_1, parsed_cs_str_vec_t *param_2, hb_set_t *param_3, subr_subset_param_t *param_4) {
   uint *puVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   undefined4 *puVar5;
   undefined *puVar6;
   long lVar7;
   long lVar8;
   int iVar9;
   int iVar10;
   ulong uVar11;
   ulong uVar12;
   uVar3 = param_1 >> 9;
   if (( *(uint*)( param_3 + 0x18 ) < *(uint*)( param_3 + 0x24 ) ) && ( puVar1 = (uint*)( *(long*)( param_3 + 0x28 ) + ( ulong ) * (uint*)( param_3 + 0x18 ) * 8 ) ),uVar3 == *puVar1) {
      lVar7 = *(long*)( param_3 + 0x38 ) + (ulong)puVar1[1] * 0x48;
      LAB_00103cc5:if (lVar7 == 0) goto LAB_00103c11;
      uVar11 = 1L << ( (byte)param_1 & 0x3f );
      uVar12 = ( ulong )(param_1 >> 6 & 7);
      if (param_3[0x40] != ( hb_set_t )(( uVar11 & *(ulong*)( lVar7 + 8 + uVar12 * 8 ) ) != 0)) {
         return;
      }

      if (param_3[0x40] == (hb_set_t)0x0) goto LAB_00103c1b;
      if (( param_3[0x10] != (hb_set_t)0x0 ) && ( puVar5 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)( param_3 + 0x10 ), param_1, false) ),puVar5 != (undefined4*)0x0) {
         *(undefined4*)( param_3 + 0x14 ) = 0xffffffff;
         *(ulong*)( puVar5 + uVar12 * 2 + 2 ) = *(ulong*)( puVar5 + uVar12 * 2 + 2 ) & ~uVar11;
         *puVar5 = 0xffffffff;
      }

      LAB_00103c63:if (param_1 < *(uint*)( param_2 + 4 )) {
         puVar6 = (undefined*)( *(long*)( param_2 + 8 ) + (ulong)param_1 * 0x28 );
         goto LAB_00103c7a;
      }

   }
 else {
      iVar9 = *(uint*)( param_3 + 0x24 ) - 1;
      if (-1 < iVar9) {
         iVar10 = 0;
         do {
            while (true) {
               uVar4 = ( uint )(iVar10 + iVar9) >> 1;
               uVar2 = *(uint*)( *(long*)( param_3 + 0x28 ) + (ulong)uVar4 * 8 );
               if (-1 < (int)( uVar3 - uVar2 )) break;
               iVar9 = uVar4 - 1;
               if (iVar9 < iVar10) goto LAB_00103c11;
            }
;
            if (uVar3 == uVar2) {
               *(uint*)( param_3 + 0x18 ) = uVar4;
               puVar6 = &_hb_NullPool;
               if (uVar4 < *(uint*)( param_3 + 0x24 )) {
                  puVar6 = (undefined*)( *(long*)( param_3 + 0x28 ) + (ulong)uVar4 * 8 );
               }

               lVar7 = *(long*)( param_3 + 0x38 ) + ( ulong ) * (uint*)( puVar6 + 4 ) * 0x48;
               goto LAB_00103cc5;
            }

            iVar10 = uVar4 + 1;
         }
 while ( iVar10 <= iVar9 );
      }

      LAB_00103c11:if (param_3[0x40] != (hb_set_t)0x0) {
         return;
      }

      LAB_00103c1b:if (param_3[0x10] == (hb_set_t)0x0) goto LAB_00103c63;
      if (param_1 != 0xffffffff) {
         *(undefined4*)( param_3 + 0x14 ) = 0xffffffff;
         puVar5 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)( param_3 + 0x10 ), param_1, true);
         if (puVar5 != (undefined4*)0x0) {
            *(ulong*)( puVar5 + ( ulong )(param_1 >> 6 & 7) * 2 + 2 ) = *(ulong*)( puVar5 + ( ulong )(param_1 >> 6 & 7) * 2 + 2 ) | 1L << ( (byte)param_1 & 0x3f );
            *puVar5 = 0xffffffff;
         }

         goto LAB_00103c63;
      }

   }

   _memcmp = _pthread_mutex_unlock;
   __hb_CrapPool = __hb_NullPool;
   _memcpy = _lookup_expert_subset_charset_for_sid;
   _realloc = _lookup_expert_charset_for_sid;
   _memmove = _pthread_mutex_lock;
   puVar6 = &_hb_CrapPool;
   LAB_00103c7a:if (( puVar6[0x18] & 0x10 ) != 0) {
      lVar7 = *(long*)( puVar6 + 0x10 );
      lVar8 = ( ulong ) * (uint*)( puVar6 + 0xc ) * 0x10 + lVar7;
      for (; lVar7 != lVar8; lVar7 = lVar7 + 0x10) {
         if (( param_4[0x30] == (subr_subset_param_t)0x0 ) || ( *(char*)( lVar7 + 0xd ) == '\0' )) {
            if (*(int*)( lVar7 + 8 ) == 10) {
               collect_subr_refs_in_subr(( uint ) * (ushort*)( lVar7 + 0xe ), *(parsed_cs_str_vec_t**)( param_4 + 0x18 ), *(hb_set_t**)( param_4 + 0x28 ), param_4);
            }
 else if (*(int*)( lVar7 + 8 ) == 0x1d) {
               collect_subr_refs_in_subr(( uint ) * (ushort*)( lVar7 + 0xe ), *(parsed_cs_str_vec_t**)( param_4 + 0x10 ), *(hb_set_t**)( param_4 + 0x20 ), param_4);
            }

         }

      }

   }

   return;
}
/* hb_serialize_context_t::pop_discard() */void hb_serialize_context_t::pop_discard(hb_serialize_context_t *this) {
   long *plVar1;
   long lVar2;
   byte bVar3;
   int iVar4;
   long *plVar5;
   void *__s2;
   void *__s2_00;
   undefined8 *puVar6;
   uint uVar7;
   int iVar8;
   int iVar9;
   uint uVar10;
   long lVar11;
   ulong uVar12;
   undefined8 uVar13;
   uint uVar14;
   long *plVar15;
   ulong uVar16;
   uint uVar17;
   int iVar18;
   undefined8 *puVar19;
   plVar5 = *(long**)( this + 0x48 );
   if (plVar5 != (long*)0x0) {
      uVar10 = *(uint*)( this + 0x2c );
      if (uVar10 == 0) {
         lVar2 = plVar5[1];
         *(long*)( this + 0x48 ) = plVar5[6];
         lVar11 = *(long*)( this + 0x20 );
         if (lVar11 == 0) {
            lVar11 = *plVar5;
         }

         uVar10 = *(uint*)( this + 0x54 );
         *(long*)( this + 8 ) = lVar11;
         *(long*)( this + 0x10 ) = lVar2;
         while (1 < uVar10) {
            plVar1 = (long*)( *(long*)( this + 0x58 ) + ( ulong )(uVar10 - 1) * 8 );
            puVar19 = (undefined8*)*plVar1;
            __s2 = (void*)*puVar19;
            if (*(void**)( this + 0x10 ) <= __s2) break;
            lVar2 = *(long*)( this + 0x88 );
            if (lVar2 == 0) {
               LAB_0010407a:iVar4 = *(int*)( puVar19 + 2 );
            }
 else {
               uVar16 = puVar19[1] - (long)__s2;
               uVar12 = 0x80;
               if ((long)uVar16 < 0x81) {
                  uVar12 = uVar16;
               }

               uVar12 = fasthash64(__s2, uVar12 & 0xffffffff, ( ulong )(uVar10 - 1));
               __s2_00 = (void*)puVar19[3];
               iVar4 = *(int*)( (long)puVar19 + 0x14 );
               uVar7 = iVar4 * 0xc;
               uVar13 = fasthash64(__s2_00, (ulong)uVar7, uVar12 >> 0x20);
               uVar10 = *(uint*)( this + 0x7c );
               uVar17 = ( (int)uVar13 - (int)( (ulong)uVar13 >> 0x20 ) ^ (int)uVar12 - (int)( uVar12 >> 0x20 ) ) & 0x3fffffff;
               uVar12 = (ulong)uVar17 % ( ulong ) * (uint*)( this + 0x80 );
               plVar15 = (long*)( lVar2 + uVar12 * 0x10 );
               bVar3 = *(byte*)( plVar15 + 1 );
               if (( bVar3 & 2 ) == 0) goto LAB_0010407a;
               iVar18 = 0;
               do bVar3 = *(byte*)( plVar15 + 1 ); while ( ( bVar3 & 2 ) != 0 );
               iVar4 = *(int*)( puVar19 + 2 );
            }

            if (iVar4 != 0) {
               free((void*)puVar19[3]);
            }

            puVar19[2] = 0;
            puVar19[3] = 0;
            if (*(int*)( puVar19 + 4 ) != 0) {
               free((void*)puVar19[5]);
            }

            puVar19[4] = 0;
            iVar4 = *(int*)( this + 0x54 );
            puVar19[5] = 0;
            if (iVar4 == 0) break;
            uVar10 = iVar4 - 1;
            *(uint*)( this + 0x54 ) = uVar10;
         }
;
      }
 else {
         if (0x10 < uVar10) {
            return;
         }

         if (( 0x10104UL >> ( (ulong)uVar10 & 0x3f ) & 1 ) == 0) {
            return;
         }

         *(long*)( this + 0x48 ) = plVar5[6];
      }

      lVar2 = plVar5[2];
      *(undefined8*)( this + 0x20 ) = 0;
      if ((int)lVar2 != 0) {
         free((void*)plVar5[3]);
      }

      plVar5[2] = 0;
      plVar5[3] = 0;
      if ((int)plVar5[4] != 0) {
         free((void*)plVar5[5]);
      }

      plVar5[4] = 0;
      lVar2 = *(long*)( this + 0x30 );
      plVar5[5] = 0;
      *plVar5 = lVar2;
      *(long**)( this + 0x30 ) = plVar5;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::Encoding::serialize(hb_serialize_context_t*, unsigned char, unsigned int,
   hb_vector_t<CFF::code_pair_t, false> const&, hb_vector_t<CFF::code_pair_t, false> const&) */undefined8 CFF::Encoding::serialize(Encoding *this, hb_serialize_context_t *param_1, uchar param_2, uint param_3, hb_vector_t *param_4, hb_vector_t *param_5) {
   Encoding *pEVar1;
   void *pvVar2;
   int iVar3;
   byte *pbVar4;
   char cVar5;
   char cVar6;
   uint uVar7;
   uint uVar8;
   ulong uVar9;
   long lVar10;
   undefined *puVar11;
   byte *pbVar12;
   uint uVar13;
   uint *puVar14;
   byte *pbVar15;
   if (*(int*)( param_1 + 0x2c ) != 0) {
      return 0;
   }

   pEVar1 = this + 1;
   uVar9 = (long)pEVar1 - (long)*(void**)( param_1 + 8 );
   if (( 0x7fffffff < uVar9 ) || ( *(Encoding**)( param_1 + 0x10 ) < pEVar1 )) goto LAB_00104360;
   hb_memset(*(void**)( param_1 + 8 ), (int)uVar9, (uint)pEVar1);
   lVar10 = *(long*)( param_1 + 8 );
   pvVar2 = (void*)( lVar10 + uVar9 );
   *(void**)( param_1 + 8 ) = pvVar2;
   if (lVar10 == 0) {
      return 0;
   }

   uVar8 = *(uint*)( param_5 + 4 );
   *this = ( Encoding )(( uVar8 != 0 ) << 7 | param_2);
   if (param_2 == '\0') {
      uVar9 = ( ulong )(param_3 + 1);
      if (*(int*)( param_1 + 0x2c ) != 0) {
         return 0;
      }

      if (( 0x7fffffff < uVar9 ) || ( *(long*)( param_1 + 0x10 ) - (long)pvVar2 < (long)uVar9 )) goto LAB_00104360;
      hb_memset(pvVar2, param_3 + 1, 0);
      pbVar4 = *(byte**)( param_1 + 8 );
      *(byte**)( param_1 + 8 ) = pbVar4 + uVar9;
      if (pbVar4 == (byte*)0x0) {
         return 0;
      }

      *pbVar4 = (byte)param_3;
      lVar10 = 0;
      uVar9 = 0;
      if (*(int*)( param_4 + 4 ) != 0) {
         do {
            puVar14 = (uint*)( *(long*)( param_4 + 8 ) + lVar10 * 8 );
            uVar8 = puVar14[1];
            uVar13 = *puVar14;
            if (-1 < (int)uVar8) {
               iVar3 = (int)uVar9;
               cVar6 = (char)uVar9;
               do {
                  cVar5 = (char)uVar9;
                  uVar7 = (uint)uVar9;
                  if (uVar7 < *pbVar4) {
                     uVar9 = ( ulong )(uVar7 + 1);
                     pbVar15 = pbVar4 + uVar9;
                  }
 else {
                     __hb_CrapPool = CONCAT11(DAT_00111041, _hb_NullPool);
                     uVar9 = ( ulong )(uVar7 + 1);
                     pbVar15 = &_hb_CrapPool;
                  }

                  *pbVar15 = ( (char)uVar13 - cVar6 ) + cVar5;
               }
 while ( (int)uVar9 != uVar8 + 1 + iVar3 );
               uVar13 = uVar8 + 1 + uVar13;
            }

            if (0x100 < (uint)uVar9) {
               return 0;
            }

            if (0x100 < uVar13) {
               return 0;
            }

            lVar10 = lVar10 + 1;
         }
 while ( (uint)lVar10 < *(uint*)( param_4 + 4 ) );
      }

      LAB_00104339:uVar8 = *(uint*)( param_5 + 4 );
   }
 else if (param_2 == '\x01') {
      uVar8 = *(int*)( param_4 + 4 ) * 2 + 1;
      uVar9 = (ulong)uVar8;
      if (*(int*)( param_1 + 0x2c ) != 0) {
         return 0;
      }

      if (( 0x7fffffff < uVar9 ) || ( *(long*)( param_1 + 0x10 ) - (long)pvVar2 < (long)uVar9 )) goto LAB_00104360;
      hb_memset(pvVar2, uVar8, 0);
      pbVar4 = *(byte**)( param_1 + 8 );
      *(byte**)( param_1 + 8 ) = pbVar4 + uVar9;
      if (pbVar4 == (byte*)0x0) {
         return 0;
      }

      iVar3 = *(int*)( param_4 + 4 );
      pbVar15 = pbVar4 + 1;
      lVar10 = 0;
      *pbVar4 = (byte)iVar3;
      if (iVar3 != 0) {
         do {
            puVar14 = (uint*)( *(long*)( param_4 + 8 ) + lVar10 * 8 );
            uVar8 = *puVar14;
            if (0xff < uVar8) {
               return 0;
            }

            if (0xff < puVar14[1]) {
               return 0;
            }

            uVar13 = (uint)lVar10;
            pbVar12 = pbVar15;
            if (*pbVar4 <= uVar13) {
               __hb_CrapPool = __hb_NullPool;
               pbVar12 = &_hb_CrapPool;
            }

            *pbVar12 = (byte)uVar8;
            uVar8 = *(uint*)( param_4 + 4 );
            puVar11 = &_hb_NullPool;
            if (uVar13 < uVar8) {
               puVar11 = (undefined*)( lVar10 * 8 + *(long*)( param_4 + 8 ) );
            }

            if (uVar13 < *pbVar4) {
               uVar8 = *(uint*)( param_4 + 4 );
               pbVar12 = pbVar15;
            }
 else {
               __hb_CrapPool = __hb_NullPool;
               pbVar12 = &_hb_CrapPool;
            }

            lVar10 = lVar10 + 1;
            pbVar12[1] = ( byte ) * (undefined4*)( puVar11 + 4 );
            pbVar15 = pbVar15 + 2;
         }
 while ( (uint)lVar10 < uVar8 );
      }

      goto LAB_00104339;
   }

   if (uVar8 == 0) {
      return 1;
   }

   uVar13 = uVar8 * 3 + 1;
   uVar9 = (ulong)uVar13;
   if (*(int*)( param_1 + 0x2c ) != 0) {
      return 0;
   }

   if (( uVar9 < 0x80000000 ) && ( (long)uVar9 <= *(long*)( param_1 + 0x10 ) - (long)*(void**)( param_1 + 8 ) )) {
      hb_memset(*(void**)( param_1 + 8 ), uVar13, uVar8);
      pbVar4 = *(byte**)( param_1 + 8 );
      *(byte**)( param_1 + 8 ) = pbVar4 + uVar9;
      if (pbVar4 == (byte*)0x0) {
         return 0;
      }

      uVar8 = *(uint*)( param_5 + 4 );
      *pbVar4 = (byte)uVar8;
      uVar13 = uVar8 & 0xff;
      if (uVar8 == 0) {
         return 1;
      }

      pbVar15 = pbVar4 + 1;
      lVar10 = 0;
      while (true) {
         uVar8 = (uint)lVar10;
         pbVar12 = pbVar15;
         if (uVar13 <= uVar8) {
            __hb_CrapPool = __hb_NullPool;
            DAT_00111042 = DAT_0011100a;
            pbVar12 = &_hb_CrapPool;
         }

         *pbVar12 = ( byte ) * (undefined4*)( *(long*)( param_5 + 8 ) + lVar10 * 8 );
         puVar11 = &_hb_NullPool;
         if (uVar8 < *(uint*)( param_5 + 4 )) {
            puVar11 = (undefined*)( *(long*)( param_5 + 8 ) + lVar10 * 8 );
         }

         pbVar12 = pbVar15;
         if (*pbVar4 <= uVar8) {
            __hb_CrapPool = __hb_NullPool;
            DAT_00111042 = DAT_0011100a;
            pbVar12 = &_hb_CrapPool;
         }

         lVar10 = lVar10 + 1;
         pbVar15 = pbVar15 + 3;
         *(ushort*)( pbVar12 + 1 ) = *(ushort*)( puVar11 + 4 ) << 8 | *(ushort*)( puVar11 + 4 ) >> 8;
         if (*(uint*)( param_5 + 4 ) <= (uint)lVar10) break;
         uVar13 = ( uint ) * pbVar4;
      }
;
      return 1;
   }

   LAB_00104360:*(undefined4*)( param_1 + 0x2c ) = 4;
   return 0;
}
/* CFF::Charset::serialize(hb_serialize_context_t*, unsigned char, unsigned int,
   hb_vector_t<CFF::code_pair_t, false> const&) */undefined8 CFF::Charset::serialize(Charset *this, hb_serialize_context_t *param_1, uchar param_2, uint param_3, hb_vector_t *param_4) {
   int *piVar1;
   ushort *puVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   void *__s;
   ulong uVar6;
   uint uVar7;
   Charset *pCVar8;
   long lVar9;
   int iVar10;
   ulong uVar11;
   bool bVar12;
   if (*(int*)( param_1 + 0x2c ) != 0) {
      return 0;
   }

   pCVar8 = this + 1;
   __s = *(void**)( param_1 + 8 );
   uVar11 = (long)pCVar8 - (long)__s;
   if (( uVar11 < 0x80000000 ) && ( pCVar8 <= *(Charset**)( param_1 + 0x10 ) )) {
      if ((int)uVar11 != 0) {
         memset(__s, 0, uVar11);
         __s = *(void**)( param_1 + 8 );
         pCVar8 = (Charset*)( (long)__s + uVar11 );
      }

      *(Charset**)( param_1 + 8 ) = pCVar8;
      if (__s == (void*)0x0) {
         return 0;
      }

      *this = (Charset)param_2;
      if (param_2 == '\x01') {
         iVar10 = *(int*)( param_4 + 4 );
         uVar11 = ( ulong )(uint)(iVar10 * 3);
         if (*(int*)( param_1 + 0x2c ) != 0) {
            return 0;
         }

         if (( uVar11 < 0x80000000 ) && ( (long)uVar11 <= *(long*)( param_1 + 0x10 ) - (long)pCVar8 )) {
            *(Charset**)( param_1 + 8 ) = pCVar8 + uVar11;
            if (iVar10 == 0) {
               return 1;
            }

            uVar11 = 0;
            uVar7 = 0;
            do {
               puVar2 = (ushort*)( *(long*)( param_4 + 8 ) + uVar11 * 8 );
               uVar7 = uVar7 | *(uint*)( puVar2 + 2 );
               *(ushort*)( pCVar8 + uVar11 * 3 ) = *puVar2 << 8 | *puVar2 >> 8;
               uVar6 = uVar11 & 0xffffffff;
               uVar11 = uVar11 + 1;
               pCVar8[uVar6 * 3 + 2] = SUB41(*(undefined4*)( puVar2 + 2 ), 0);
            }
 while ( (uint)uVar11 < *(uint*)( param_4 + 4 ) );
            return CONCAT71(( int7 )(uVar11 >> 8), uVar7 < 0x100);
         }

      }
 else if (param_2 == '\x02') {
         iVar10 = *(int*)( param_4 + 4 );
         uVar11 = ( ulong )(uint)(iVar10 * 4);
         if (*(int*)( param_1 + 0x2c ) != 0) {
            return 0;
         }

         if (( uVar11 < 0x80000000 ) && ( (long)uVar11 <= *(long*)( param_1 + 0x10 ) - (long)pCVar8 )) {
            *(Charset**)( param_1 + 8 ) = pCVar8 + uVar11;
            if (iVar10 == 0) {
               return 1;
            }

            lVar9 = 0;
            uVar7 = 0;
            do {
               puVar2 = (ushort*)( *(long*)( param_4 + 8 ) + lVar9 * 8 );
               uVar7 = uVar7 | *(uint*)( puVar2 + 2 );
               *(ushort*)( pCVar8 + lVar9 * 4 ) = *puVar2 << 8 | *puVar2 >> 8;
               *(ushort*)( pCVar8 + lVar9 * 4 + 2 ) = puVar2[2] << 8 | puVar2[2] >> 8;
               lVar9 = lVar9 + 1;
            }
 while ( (uint)lVar9 < *(uint*)( param_4 + 4 ) );
            return CONCAT71(( int7 )((ulong)lVar9 >> 8), uVar7 < 0x10000);
         }

      }
 else {
         if (param_2 != '\0') {
            return 1;
         }

         uVar11 = ( ulong )(param_3 * 2 - 2);
         if (*(int*)( param_1 + 0x2c ) != 0) {
            return 0;
         }

         if (( uVar11 < 0x80000000 ) && ( (long)uVar11 <= *(long*)( param_1 + 0x10 ) - (long)pCVar8 )) {
            lVar9 = 0;
            *(Charset**)( param_1 + 8 ) = pCVar8 + uVar11;
            iVar10 = 0;
            if (*(int*)( param_4 + 4 ) == 0) {
               return 1;
            }

            do {
               piVar1 = (int*)( *(long*)( param_4 + 8 ) + lVar9 * 8 );
               iVar3 = piVar1[1];
               iVar4 = *piVar1;
               if (-1 < iVar3) {
                  iVar5 = iVar4;
                  do {
                     *(ushort*)( pCVar8 + ( ulong )(uint)(( iVar10 - iVar4 ) + iVar5) * 2 ) = (ushort)iVar5 << 8 | (ushort)iVar5 >> 8;
                     bVar12 = iVar5 != iVar3 + iVar4;
                     iVar5 = iVar5 + 1;
                  }
 while ( bVar12 );
                  iVar10 = iVar3 + 1 + iVar10;
               }

               lVar9 = lVar9 + 1;
            }
 while ( (uint)lVar9 < *(uint*)( param_4 + 4 ) );
            return 1;
         }

      }

   }

   *(undefined4*)( param_1 + 0x2c ) = 4;
   return 0;
}
/* CFF::subr_subsetter_t<cff1_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned short, 2u> >,
   OT::cff1::accelerator_subset_t const, CFF::cff1_cs_interp_env_t, cff1_cs_opset_subr_subset_t,
   14u>::~subr_subsetter_t() */void CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::~subr_subsetter_t(subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u> *this) {
   int *piVar1;
   hb_hashmap_t *phVar2;
   hb_hashmap_t *phVar3;
   int iVar4;
   uint uVar5;
   long lVar6;
   long lVar7;
   hb_hashmap_t *phVar8;
   void *pvVar9;
   int *piVar10;
   long lVar11;
   if (*(int*)( this + 0x100 ) == 0) {
      iVar4 = *(int*)( this + 0xf0 );
   }
 else {
      uVar5 = *(uint*)( this + 0x104 );
      pvVar9 = *(void**)( this + 0x108 );
      piVar10 = (int*)( (long)pvVar9 + (ulong)uVar5 * 0x10 + -0x10 );
      if (uVar5 != 0) {
         piVar1 = piVar10 + ( ulong )(uVar5 - 1) * -4 + -4;
         do {
            while (*piVar10 == 0) {
               piVar10 = piVar10 + -4;
               if (piVar1 == piVar10) goto LAB_001049a1;
            }
;
            uVar5 = piVar10[1];
            pvVar9 = *(void**)( piVar10 + 2 );
            lVar6 = (long)pvVar9 + (ulong)uVar5 * 0x28 + -0x28;
            if (uVar5 != 0) {
               lVar11 = ( ( ulong )(uVar5 - 1) + 1 ) * -0x28 + lVar6;
               do {
                  while (lVar7 = lVar6 + -0x28,*(int*)( lVar6 + 8 ) == 0) {
                     lVar6 = lVar7;
                     if (lVar7 == lVar11) goto LAB_0010498e;
                  }
;
                  free(*(void**)( lVar6 + 0x10 ));
                  lVar6 = lVar7;
               }
 while ( lVar7 != lVar11 );
               LAB_0010498e:pvVar9 = *(void**)( piVar10 + 2 );
            }

            free(pvVar9);
            piVar10 = piVar10 + -4;
         }
 while ( piVar1 != piVar10 );
         LAB_001049a1:pvVar9 = *(void**)( this + 0x108 );
      }

      free(pvVar9);
      iVar4 = *(int*)( this + 0xf0 );
   }

   if (iVar4 == 0) {
      iVar4 = *(int*)( this + 0xe0 );
   }
 else {
      uVar5 = *(uint*)( this + 0xf4 );
      pvVar9 = *(void**)( this + 0xf8 );
      lVar6 = (long)pvVar9 + (ulong)uVar5 * 0x28 + -0x28;
      if (uVar5 != 0) {
         lVar11 = ( ( ulong )(uVar5 - 1) + 1 ) * -0x28 + lVar6;
         do {
            while (lVar7 = lVar6 + -0x28,*(int*)( lVar6 + 8 ) == 0) {
               lVar6 = lVar7;
               if (lVar7 == lVar11) goto LAB_00104a0e;
            }
;
            free(*(void**)( lVar6 + 0x10 ));
            lVar6 = lVar7;
         }
 while ( lVar7 != lVar11 );
         LAB_00104a0e:pvVar9 = *(void**)( this + 0xf8 );
      }

      free(pvVar9);
      iVar4 = *(int*)( this + 0xe0 );
   }

   if (iVar4 == 0) {
      iVar4 = *(int*)( this + 0xd0 );
   }
 else {
      uVar5 = *(uint*)( this + 0xe4 );
      pvVar9 = *(void**)( this + 0xe8 );
      lVar6 = (long)pvVar9 + (ulong)uVar5 * 0x28 + -0x28;
      if (uVar5 != 0) {
         lVar11 = ( ( ulong )(uVar5 - 1) + 1 ) * -0x28 + lVar6;
         do {
            while (lVar7 = lVar6 + -0x28,*(int*)( lVar6 + 8 ) == 0) {
               lVar6 = lVar7;
               if (lVar7 == lVar11) goto LAB_00104a7e;
            }
;
            free(*(void**)( lVar6 + 0x10 ));
            lVar6 = lVar7;
         }
 while ( lVar7 != lVar11 );
         LAB_00104a7e:pvVar9 = *(void**)( this + 0xe8 );
      }

      free(pvVar9);
      iVar4 = *(int*)( this + 0xd0 );
   }

   if (iVar4 != 0) {
      uVar5 = *(uint*)( this + 0xd4 );
      pvVar9 = *(void**)( this + 0xd8 );
      phVar8 = (hb_hashmap_t*)( (long)pvVar9 + (ulong)uVar5 * 0x48 + -0x48 );
      if (uVar5 != 0) {
         phVar2 = phVar8 + ( ulong )(uVar5 - 1) * -0x48 + -0x48;
         do {
            if (*(int*)( phVar8 + 0x30 ) != 0) {
               free(*(void**)( phVar8 + 0x38 ));
            }

            hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(phVar8);
            if (*(void**)( phVar8 + 0x28 ) != (void*)0x0) {
               free(*(void**)( phVar8 + 0x28 ));
            }

            phVar8 = phVar8 + -0x48;
         }
 while ( phVar8 != phVar2 );
         pvVar9 = *(void**)( this + 0xd8 );
      }

      free(pvVar9);
   }

   if (*(int*)( this + 0xb8 ) != 0) {
      free(*(void**)( this + 0xc0 ));
   }

   hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>((hb_hashmap_t*)( this + 0x88 ));
   if (*(void**)( this + 0xb0 ) != (void*)0x0) {
      free(*(void**)( this + 0xb0 ));
   }

   if (*(int*)( this + 0x68 ) != 0) {
      free(*(void**)( this + 0x70 ));
   }

   if (*(int*)( this + 0x58 ) != 0) {
      uVar5 = *(uint*)( this + 0x5c );
      pvVar9 = *(void**)( this + 0x60 );
      phVar8 = (hb_hashmap_t*)( (long)pvVar9 + (ulong)uVar5 * 0x48 + -0x48 );
      if (uVar5 != 0) {
         phVar2 = phVar8 + ( ulong )(uVar5 - 1) * -0x48 + -0x48;
         do {
            while (true) {
               hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>(phVar8);
               if (*(int*)( phVar8 + 0x20 ) != 0) {
                  free(*(void**)( phVar8 + 0x28 ));
               }

               *(undefined4*)( phVar8 + 0x20 ) = 0;
               *(undefined8*)( phVar8 + 0x28 ) = 0;
               if (( *(int*)( phVar8 + 0x30 ) != 0 ) && ( free(*(void**)( phVar8 + 0x38 )),*(int*)( phVar8 + 0x20 ) != 0 )) break;
               phVar8 = phVar8 + -0x48;
               if (phVar2 == phVar8) goto LAB_00104be2;
            }
;
            phVar3 = phVar8 + 0x28;
            phVar8 = phVar8 + -0x48;
            free(*(void**)phVar3);
         }
 while ( phVar2 != phVar8 );
         LAB_00104be2:pvVar9 = *(void**)( this + 0x60 );
      }

      free(pvVar9);
   }

   hb_object_fini<hb_hashmap_t<unsigned_int,unsigned_int,true>>((hb_hashmap_t*)( this + 0x10 ));
   if (*(int*)( this + 0x30 ) != 0) {
      free(*(void**)( this + 0x38 ));
   }

   *(undefined4*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x38 ) = 0;
   if (( *(int*)( this + 0x40 ) != 0 ) && ( free(*(void**)( this + 0x48 )),*(int*)( this + 0x30 ) != 0 )) {
      free(*(void**)( this + 0x38 ));
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_vector_t<hb_serialize_context_t::object_t::link_t, false>::push() */undefined * __thiscall
hb_vector_t<hb_serialize_context_t::object_t::link_t,false>::push
          (hb_vector_t<hb_serialize_context_t::object_t::link_t,false> *this){
   uint uVar1;
   void *pvVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   uVar3 = *(uint*)this;
   uVar1 = *(uint*)( this + 4 );
   if ((int)uVar3 < 0) {
      __hb_CrapPool = __hb_NullPool;
      _memcpy = _lookup_expert_subset_charset_for_sid;
      return &_hb_CrapPool;
   }

   uVar4 = uVar1 + 1;
   if ((int)uVar4 < 0) {
      uVar4 = 0;
   }

   uVar5 = uVar3;
   if (uVar3 < uVar4) {
      do {
         uVar5 = ( uVar5 >> 1 ) + 8 + uVar5;
      }
 while ( uVar5 < uVar4 );
      if (0x15555555 < uVar5) {
         LAB_00104cd8:*(uint*)this = ~uVar3;
         __hb_CrapPool = __hb_NullPool;
         _memcpy = _lookup_expert_subset_charset_for_sid;
         return &_hb_CrapPool;
      }

      pvVar2 = realloc(*(void**)( this + 8 ), (ulong)uVar5 * 0xc);
      if (pvVar2 != (void*)0x0) {
         *(void**)( this + 8 ) = pvVar2;
         uVar1 = *(uint*)( this + 4 );
         *(uint*)this = uVar5;
         goto LAB_00104c5d;
      }

      uVar3 = *(uint*)this;
      if (uVar3 < uVar5) goto LAB_00104cd8;
      uVar1 = *(uint*)( this + 4 );
   }

   pvVar2 = *(void**)( this + 8 );
   LAB_00104c5d:if (uVar1 < uVar4) {
      uVar3 = ( uVar4 - uVar1 ) * 0xc;
      if (uVar3 != 0) {
         memset((void*)( (long)pvVar2 + (ulong)uVar1 * 0xc ), 0, (ulong)uVar3);
         pvVar2 = *(void**)( this + 8 );
      }

   }

   *(uint*)( this + 4 ) = uVar4;
   return (undefined*)( (long)pvVar2 + ( ulong )(uVar4 - 1) * 0xc );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_hashmap_t<unsigned int, unsigned int, true>::alloc(unsigned int) */hb_hashmap_t<unsigned_int,unsigned_int,true> hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc(hb_hashmap_t<unsigned_int,unsigned_int,true> *this, uint param_1) {
   byte bVar1;
   int *__ptr;
   long lVar2;
   char cVar3;
   void *pvVar4;
   long lVar5;
   int *piVar6;
   int iVar7;
   undefined4 uVar8;
   ulong uVar9;
   hb_hashmap_t<unsigned_int,unsigned_int,true> hVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   int *piVar15;
   size_t __size;
   uint uVar16;
   int iVar17;
   short sVar18;
   long in_FS_OFFSET;
   undefined8 uStack_c8;
   undefined8 uStack_c0;
   undefined8 uStack_b8;
   undefined8 uStack_b0;
   undefined8 uStack_a8;
   undefined8 uStack_a0;
   undefined8 uStack_98;
   undefined8 uStack_90;
   undefined8 uStack_88;
   undefined8 uStack_80;
   undefined8 uStack_78;
   undefined8 uStack_70;
   undefined8 uStack_68;
   undefined8 uStack_60;
   undefined8 uStack_58;
   undefined8 uStack_50;
   long local_40;
   hVar10 = this[0x10];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (hVar10 == (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
      LAB_00105073:hVar10 = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
   }
 else {
      if (param_1 == 0) {
         param_1 = *(uint*)( this + 0x14 );
      }
 else {
         if (( param_1 >> 1 ) + param_1 < *(uint*)( this + 0x1c )) goto LAB_00104fdd;
         if (param_1 < *(uint*)( this + 0x14 )) {
            param_1 = *(uint*)( this + 0x14 );
         }

      }

      uVar14 = param_1 * 2 + 8;
      uVar9 = (ulong)uVar14;
      if (uVar14 == 0) {
         pvVar4 = malloc(0xc);
         if (pvVar4 == (void*)0x0) goto LAB_0010506f;
         iVar17 = 0;
         sVar18 = 0;
         iVar7 = 0xc;
         __size = 0xc;
         LAB_00104db9:pvVar4 = (void*)__memset_chk(pvVar4, 0, iVar7, __size);
      }
 else {
         iVar7 = 0x1f;
         if (uVar14 != 0) {
            for (; uVar14 >> iVar7 == 0; iVar7 = iVar7 + -1) {}
         }

         uVar14 = iVar7 + 1;
         uVar9 = (ulong)uVar14;
         uVar16 = 1 << ( (byte)uVar14 & 0x1f );
         __size = (ulong)uVar16 * 0xc;
         pvVar4 = malloc(__size);
         if (pvVar4 == (void*)0x0) {
            LAB_0010506f:this[0x10] = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
            goto LAB_00105073;
         }

         sVar18 = (short)uVar14 * 2;
         iVar17 = uVar16 - 1;
         iVar7 = 0xc << ( (byte)uVar14 & 0x1f );
         if (iVar7 != 0) goto LAB_00104db9;
      }

      uStack_c0 = _UNK_0010f8e8;
      uStack_c8 = __LC14;
      iVar7 = *(int*)( this + 0x1c );
      *(undefined8*)( this + 0x14 ) = 0;
      *(int*)( this + 0x1c ) = iVar17;
      __ptr = *(int**)( this + 0x28 );
      uVar14 = ( iVar7 + 1 ) - ( uint )(iVar7 == 0);
      uStack_b8 = __LC1;
      uStack_b0 = _UNK_0010f8f8;
      uStack_a8 = __LC2;
      uStack_a0 = _UNK_0010f908;
      uStack_98 = __LC3;
      uStack_90 = _UNK_0010f918;
      uStack_88 = __LC4;
      uStack_80 = _UNK_0010f928;
      uStack_78 = __LC5;
      uStack_70 = _UNK_0010f938;
      uStack_68 = __LC6;
      uStack_60 = _UNK_0010f948;
      uStack_58 = __LC7;
      uStack_50 = _UNK_0010f958;
      if ((int)uVar9 == 0x20) {
         uVar8 = 0x7fffffff;
      }
 else {
         uVar8 = *(undefined4*)( (long)&uStack_c8 + uVar9 * 4 );
      }

      *(undefined4*)( this + 0x20 ) = uVar8;
      *(short*)( this + 0x12 ) = sVar18;
      *(void**)( this + 0x28 ) = pvVar4;
      if (uVar14 != 0) {
         piVar15 = __ptr;
         do {
            if (( ( *(byte*)( piVar15 + 1 ) & 1 ) != 0 ) && ( uVar16 = (uint)piVar15[1] >> 2 ),this[0x10] != (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
               uVar13 = *(uint*)( this + 0x18 );
               if (*(uint*)( this + 0x1c ) <= ( uVar13 >> 1 ) + uVar13) {
                  cVar3 = alloc(this, 0);
                  if (cVar3 == '\0') goto LAB_00104e80;
                  uVar13 = *(uint*)( this + 0x18 );
               }

               lVar2 = *(long*)( this + 0x28 );
               iVar17 = *piVar15;
               uVar9 = (ulong)uVar16 % ( ulong ) * (uint*)( this + 0x20 );
               iVar7 = *(int*)( this + 0x14 );
               lVar5 = uVar9 * 0xc;
               piVar6 = (int*)( lVar2 + lVar5 );
               bVar1 = *(byte*)( piVar6 + 1 );
               if (( bVar1 & 2 ) == 0) {
                  *piVar6 = iVar17;
                  piVar6[2] = piVar15[2];
                  piVar6[1] = uVar16 * 4 + 3;
                  *(uint*)( this + 0x18 ) = uVar13 + 1;
                  *(int*)( this + 0x14 ) = iVar7 + 1;
               }
 else {
                  uVar11 = 0;
                  uVar12 = 0xffffffff;
                  do {
                     if (*piVar6 == iVar17) {
                        if (uVar12 == 0xffffffff) goto LAB_00104f3f;
                        goto LAB_00104f34;
                     }

                     if (( ( bVar1 & 1 ) == 0 ) && ( uVar12 == 0xffffffff )) {
                        uVar12 = (uint)uVar9;
                     }

                     uVar11 = uVar11 + 1;
                     uVar9 = ( ulong )((uint)uVar9 + uVar11 & *(uint*)( this + 0x1c ));
                     lVar5 = uVar9 * 0xc;
                     piVar6 = (int*)( lVar2 + lVar5 );
                     bVar1 = *(byte*)( piVar6 + 1 );
                  }
 while ( ( bVar1 & 2 ) != 0 );
                  if (uVar12 == 0xffffffff) {
                     LAB_0010501a:uVar13 = uVar13 + 1;
                  }
 else {
                     LAB_00104f34:lVar5 = (ulong)uVar12 * 0xc;
                     LAB_00104f3f:piVar6 = (int*)( lVar2 + lVar5 );
                     if (( *(byte*)( piVar6 + 1 ) & 2 ) == 0) goto LAB_0010501a;
                     iVar7 = iVar7 - ( *(byte*)( piVar6 + 1 ) & 1 );
                     *(uint*)( this + 0x18 ) = uVar13 - 1;
                     *(int*)( this + 0x14 ) = iVar7;
                     iVar17 = *piVar15;
                  }

                  *piVar6 = iVar17;
                  iVar17 = piVar15[2];
                  piVar6[1] = uVar16 * 4 + 3;
                  piVar6[2] = iVar17;
                  *(uint*)( this + 0x18 ) = uVar13;
                  *(int*)( this + 0x14 ) = iVar7 + 1;
                  if (( *(ushort*)( this + 0x12 ) < uVar11 ) && ( *(uint*)( this + 0x1c ) < uVar13 << 3 )) {
                     alloc(this, *(uint*)( this + 0x1c ) - 8);
                  }

               }

            }

            LAB_00104e80:piVar15 = piVar15 + 3;
         }
 while ( __ptr + (ulong)uVar14 * 3 != piVar15 );
      }

      free(__ptr);
   }

   LAB_00104fdd:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return hVar10;
}
/* hb_vector_t<unsigned int, false>::alloc(unsigned int, bool) */undefined8 hb_vector_t<unsigned_int,false>::alloc(hb_vector_t<unsigned_int,false> *this, uint param_1, bool param_2) {
   uint uVar1;
   void *pvVar2;
   uint uVar3;
   uVar1 = *(uint*)this;
   if ((int)uVar1 < 0) {
      return 0;
   }

   if (param_2) {
      uVar3 = *(uint*)( this + 4 );
      if (*(uint*)( this + 4 ) <= param_1) {
         uVar3 = param_1;
      }

      if (uVar1 < uVar3) {
         if (0x3fffffff < uVar3) goto LAB_00105106;
         pvVar2 = *(void**)( this + 8 );
      }
 else {
         if (uVar1 >> 2 <= uVar3) {
            return 1;
         }

         pvVar2 = *(void**)( this + 8 );
         if (uVar3 == 0) {
            free(pvVar2);
            uVar3 = 0;
            pvVar2 = (void*)0x0;
            goto LAB_00105159;
         }

      }

   }
 else {
      uVar3 = uVar1;
      if (param_1 <= uVar1) {
         return 1;
      }

      do {
         uVar3 = ( uVar3 >> 1 ) + 8 + uVar3;
      }
 while ( uVar3 < param_1 );
      if (0x3fffffff < uVar3) goto LAB_00105106;
      pvVar2 = *(void**)( this + 8 );
   }

   pvVar2 = realloc(pvVar2, (ulong)uVar3 << 2);
   if (pvVar2 != (void*)0x0) {
      LAB_00105159:*(void**)( this + 8 ) = pvVar2;
      *(uint*)this = uVar3;
      return 1;
   }

   uVar1 = *(uint*)this;
   if (uVar3 <= uVar1) {
      return 1;
   }

   LAB_00105106:*(uint*)this = ~uVar1;
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::cff1_subset_plan::plan_subset_encoding(OT::cff1::accelerator_subset_t const&,
   hb_subset_plan_t*) */void OT::cff1_subset_plan::plan_subset_encoding(cff1_subset_plan *this, accelerator_subset_t *param_1, hb_subset_plan_t *param_2) {
   undefined4 *puVar1;
   byte bVar2;
   int iVar3;
   undefined4 uVar4;
   byte *pbVar5;
   long lVar6;
   char cVar7;
   ulong uVar8;
   uint *puVar9;
   void *pvVar10;
   byte *pbVar11;
   uint uVar12;
   uint *puVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   uint uVar17;
   byte *pbVar18;
   byte *pbVar19;
   uint uVar20;
   uint uVar21;
   undefined4 *puVar22;
   long in_FS_OFFSET;
   uint *local_a0;
   uint local_94;
   int local_90;
   undefined8 local_58;
   undefined4 *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pbVar5 = *(byte**)( param_1 + 0x48 );
   local_58 = 0;
   local_50 = (undefined4*)0x0;
   if (*(int*)( this + 0x148 ) < 0) {
      param_2[0x10] = (hb_subset_plan_t)0x0;
   }
 else {
      uVar20 = *(uint*)( param_2 + 0x58 );
      *(undefined4*)( this + 0x14c ) = 0;
      local_90 = *(int*)( param_2 + 0xc4 );
      *(uint*)( this + 0x144 ) = uVar20 - 1;
      puVar9 = *(uint**)( param_2 + 200 );
      local_a0 = puVar9;
      if (local_90 == 0) {
         uVar17 = CONCAT22(_DAT_0011100a, CONCAT11(DAT_00111009, _hb_NullPool));
         puVar9 = (uint*)&_hb_NullPool;
      }
 else {
         uVar17 = *puVar9;
         if (uVar17 == 0) {
            local_a0 = puVar9 + 2;
            local_90 = local_90 + -1;
            if (local_90 == 0) {
               uVar17 = CONCAT22(_DAT_0011100a, CONCAT11(DAT_00111009, _hb_NullPool));
               puVar9 = (uint*)&_hb_NullPool;
            }
 else {
               uVar17 = puVar9[2];
               puVar9 = local_a0;
            }

         }

      }

      local_94 = puVar9[1];
      if (*(uint*)( this + 0xa0 ) < 2) {
         uVar17 = 1;
      }
 else {
         uVar14 = 1;
         uVar20 = 0xfffffffe;
         pbVar18 = pbVar5;
         while (uVar14 == uVar17) {
            puVar9 = (uint*)&_hb_NullPool;
            if (local_90 != 0) {
               local_a0 = local_a0 + 2;
               local_90 = local_90 + -1;
               puVar9 = local_a0;
               if (local_90 == 0) {
                  puVar9 = (uint*)&_hb_NullPool;
               }

            }

            uVar17 = *puVar9;
            uVar12 = local_94;
            local_94 = puVar9[1];
            if (pbVar18 == &_hb_NullPool) goto LAB_001053d0;
            LAB_00105284:if (( *pbVar18 & 0x7f ) == 0) {
               if (uVar12 - 1 < (uint)pbVar18[1]) {
                  uVar12 = (uint)pbVar18[( ulong )(uVar12 - 1) + 2];
                  LAB_00105565:uVar21 = uVar20 + 1;
                  uVar20 = uVar12;
                  if (uVar21 != uVar12) goto LAB_00105423;
                  goto LAB_00105451;
               }

               goto LAB_001052f0;
            }

            if (( *pbVar18 & 0x7f ) == 1) {
               uVar12 = uVar12 - 1;
               if (pbVar18[1] != 0) {
                  uVar8 = 0;
                  while (true) {
                     uVar21 = (uint)uVar8;
                     uVar8 = ( ulong )(uVar21 + 1);
                     pbVar11 = pbVar18 + uVar8 * 2;
                     if (uVar12 <= pbVar11[1]) break;
                     uVar16 = (uint)pbVar18[1];
                     if (uVar21 < uVar16) {
                        uVar12 = ( uVar12 - 1 ) - (uint)pbVar11[1];
                        uVar16 = (uint)pbVar18[1];
                     }
 else {
                        uVar12 = ( uVar12 - 1 ) - (uint)DAT_00111009;
                     }

                     if (uVar16 <= uVar21 + 1) goto LAB_001052f0;
                  }
;
                  if (pbVar18[1] <= uVar21) {
                     pbVar11 = &_hb_NullPool;
                  }

                  uVar12 = *pbVar11 + uVar12;
                  if (uVar12 < 0x100) goto LAB_00105565;
               }

               goto LAB_001052f0;
            }

            LAB_00105420:uVar20 = 0;
            LAB_00105423:uVar12 = *(uint*)( this + 0x14c );
            uVar8 = (ulong)uVar12;
            uVar21 = *(uint*)( this + 0x148 );
            uVar16 = uVar12 + 1;
            if ((int)uVar12 < (int)uVar21) {
               LAB_0010543a:pvVar10 = *(void**)( this + 0x150 );
            }
 else {
               if ((int)uVar21 < 0) {
                  LAB_001058d2:__hb_CrapPool = CONCAT44(_DAT_0011100c, CONCAT22(_DAT_0011100a, CONCAT11(DAT_00111009, _hb_NullPool)));
                  goto LAB_00105451;
               }

               uVar12 = uVar21;
               if (uVar16 <= uVar21) goto LAB_0010543a;
               do {
                  uVar12 = ( uVar12 >> 1 ) + 8 + uVar12;
               }
 while ( uVar12 < uVar16 );
               if (0x1fffffff < uVar12) {
                  *(uint*)( this + 0x148 ) = ~uVar21;
                  goto LAB_001058d2;
               }

               pvVar10 = realloc(*(void**)( this + 0x150 ), (ulong)uVar12 << 3);
               if (pvVar10 == (void*)0x0) {
                  if (*(uint*)( this + 0x148 ) < uVar12) {
                     *(uint*)( this + 0x148 ) = ~*(uint *)(this + 0x148);
                     goto LAB_001058d2;
                  }

                  uVar8 = ( ulong ) * (uint*)( this + 0x14c );
                  pvVar10 = *(void**)( this + 0x150 );
                  uVar16 = *(uint*)( this + 0x14c ) + 1;
               }
 else {
                  *(void**)( this + 0x150 ) = pvVar10;
                  uVar8 = ( ulong ) * (uint*)( this + 0x14c );
                  *(uint*)( this + 0x148 ) = uVar12;
                  uVar16 = *(uint*)( this + 0x14c ) + 1;
               }

            }

            puVar9 = (uint*)( (long)pvVar10 + uVar8 * 8 );
            *(uint*)( this + 0x14c ) = uVar16;
            *puVar9 = uVar20;
            puVar9[1] = uVar14;
            LAB_00105451:if (pbVar5 != &_hb_NullPool) {
               uVar12 = cff1::accelerator_templ_t<CFF::cff1_private_dict_opset_subset_t,CFF::cff1_private_dict_values_base_t<CFF::op_str_t>>::glyph_to_sid(( uint ) * (undefined8*)( param_1 + 0x50 ), (code_pair_t*)( ulong ) * (uint*)( param_1 + 0x128 ));
               if ((int)local_58 < 0) {
                  bVar2 = *pbVar5;
                  if ((char)bVar2 < '\0') goto LAB_001054b7;
               }
 else {
                  local_58 = local_58 & 0xffffffff;
                  bVar2 = *pbVar5;
                  if (-1 < (char)bVar2) goto LAB_00105457;
                  LAB_001054b7:if (( bVar2 & 0x7f ) == 0) {
                     if (pbVar5[1] == 0) {
                        pbVar18 = &_hb_NullPool;
                     }
 else {
                        pbVar18 = pbVar5 + ( ulong )(pbVar5[1] - 1) + 2;
                     }

                     pbVar18 = pbVar18 + 1;
                  }
 else {
                     pbVar18 = &_hb_NullPool;
                     if (( bVar2 & 0x7f ) == 1) {
                        if (pbVar5[1] == 0) {
                           pbVar18 = &_hb_NullPool;
                        }
 else {
                           pbVar18 = pbVar5 + ( ulong )(pbVar5[1] - 1) * 2 + 2;
                        }

                        pbVar18 = pbVar18 + 2;
                     }

                  }

                  if (*pbVar18 != 0) {
                     pbVar11 = pbVar18 + 1;
                     uVar21 = 0;
                     do {
                        if (uVar12 == ( ushort )(*(ushort*)( pbVar11 + 1 ) << 8 | *(ushort*)( pbVar11 + 1 ) >> 8)) {
                           pbVar19 = pbVar11;
                           if (*pbVar18 <= uVar21) {
                              pbVar19 = &_hb_NullPool;
                           }

                           if ((int)local_58 <= (int)local_58._4_4_) {
                              cVar7 = hb_vector_t<unsigned_int,false>::alloc((hb_vector_t<unsigned_int,false>*)&local_58, local_58._4_4_ + 1, false);
                              if (cVar7 == '\0') {
                                 __hb_CrapPool = CONCAT44(_DAT_00111044, CONCAT22(_DAT_0011100a, CONCAT11(DAT_00111009, _hb_NullPool)));
                                 goto LAB_001054f0;
                              }

                           }

                           uVar8 = (ulong)local_58._4_4_;
                           local_58 = CONCAT44(local_58._4_4_ + 1, (int)local_58);
                           local_50[uVar8] = ( uint ) * pbVar19;
                        }

                        LAB_001054f0:uVar21 = uVar21 + 1;
                        pbVar11 = pbVar11 + 3;
                     }
 while ( uVar21 < *pbVar18 );
                  }

               }

               if (local_58._4_4_ != 0) {
                  puVar1 = local_50 + local_58._4_4_;
                  puVar22 = local_50;
                  do {
                     uVar4 = *puVar22;
                     uVar21 = *(uint*)( this + 0x15c );
                     uVar8 = (ulong)uVar21;
                     uVar16 = *(uint*)( this + 0x158 );
                     uVar15 = uVar21 + 1;
                     if ((int)uVar21 < (int)uVar16) {
                        LAB_001055d0:pvVar10 = *(void**)( this + 0x160 );
                        LAB_001055d7:*(uint*)( this + 0x15c ) = uVar15;
                        *(ulong*)( (long)pvVar10 + uVar8 * 8 ) = CONCAT44(uVar12, uVar4);
                     }
 else {
                        if (-1 < (int)uVar16) {
                           uVar21 = uVar16;
                           if (uVar15 <= uVar16) goto LAB_001055d0;
                           do {
                              uVar21 = uVar21 + 8 + ( uVar21 >> 1 );
                           }
 while ( uVar21 < uVar15 );
                           if (0x1fffffff < uVar21) {
                              LAB_001057f3:*(uint*)( this + 0x158 ) = ~uVar16;
                              goto LAB_001057fb;
                           }

                           pvVar10 = realloc(*(void**)( this + 0x160 ), (ulong)uVar21 << 3);
                           if (pvVar10 == (void*)0x0) {
                              uVar16 = *(uint*)( this + 0x158 );
                              if (uVar16 < uVar21) goto LAB_001057f3;
                              uVar8 = ( ulong ) * (uint*)( this + 0x15c );
                              pvVar10 = *(void**)( this + 0x160 );
                              uVar15 = *(uint*)( this + 0x15c ) + 1;
                           }
 else {
                              uVar8 = ( ulong ) * (uint*)( this + 0x15c );
                              *(void**)( this + 0x160 ) = pvVar10;
                              *(uint*)( this + 0x158 ) = uVar21;
                              uVar15 = *(uint*)( this + 0x15c ) + 1;
                           }

                           goto LAB_001055d7;
                        }

                        LAB_001057fb:__hb_CrapPool = CONCAT44(_DAT_0011100c, CONCAT22(_DAT_0011100a, CONCAT11(DAT_00111009, _hb_NullPool)));
                     }

                     puVar22 = puVar22 + 1;
                  }
 while ( puVar22 != puVar1 );
               }

            }

            LAB_00105457:uVar14 = uVar14 + 1;
            if (*(uint*)( this + 0xa0 ) <= uVar14) goto LAB_001052f9;
            pbVar18 = *(byte**)( param_1 + 0x48 );
         }
;
         uVar12 = uVar14;
         if (pbVar18 != &_hb_NullPool) goto LAB_00105284;
         LAB_001053d0:uVar12 = cff1::accelerator_templ_t<CFF::cff1_private_dict_opset_subset_t,CFF::cff1_private_dict_values_base_t<CFF::op_str_t>>::glyph_to_sid(( uint ) * (undefined8*)( param_1 + 0x50 ), (code_pair_t*)( ulong ) * (uint*)( param_1 + 0x128 ));
         if (uVar12 == 0) goto LAB_00105420;
         if (*(int*)( param_1 + 0xf0 ) == 0) {
            uVar12 = OT::cff1::lookup_standard_encoding_for_code(uVar12);
         }
 else {
            if (*(int*)( param_1 + 0xf0 ) != 1) goto LAB_00105420;
            uVar12 = OT::cff1::lookup_expert_encoding_for_code(uVar12);
         }

         if (uVar12 != 0xffffffff) goto LAB_00105565;
         LAB_001052f0:*(uint*)( this + 0x144 ) = uVar14 - 1;
         LAB_001052f9:if ((int)local_58 != 0) {
            free(local_50);
         }

         iVar3 = *(int*)( this + 0x14c );
         uVar20 = *(int*)( this + 0x144 ) + 1;
         uVar17 = iVar3 * 2 + 1;
         lVar6 = *(long*)( this + 0x150 );
         if (iVar3 != 0) {
            puVar9 = (uint*)( lVar6 + 4 + ( ulong )(iVar3 - 1) * 8 );
            do {
               uVar12 = *puVar9;
               puVar13 = puVar9 + -2;
               *puVar9 = ( uVar14 - uVar12 ) - 1;
               puVar9 = puVar13;
               uVar14 = uVar12;
            }
 while ( (uint*)( lVar6 + -4 ) != puVar13 );
         }

      }

      this[0x143] = ( cff1_subset_plan )(uVar17 <= uVar20);
   }

   local_50 = (undefined4*)0x0;
   local_58 = 0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* remap_sid_t::add(unsigned int) */uint remap_sid_t::add(remap_sid_t *this, uint param_1) {
   byte bVar1;
   ushort uVar2;
   char cVar3;
   uint uVar4;
   int *piVar5;
   int iVar6;
   int iVar7;
   ulong uVar8;
   int iVar9;
   uint uVar10;
   long lVar11;
   uint uVar12;
   int iVar13;
   uint uVar14;
   if (( param_1 < 0x187 ) || ( param_1 == 0xffffffff )) {
      return param_1;
   }

   iVar13 = param_1 - 0x187;
   uVar14 = iVar13 * -0x61c8864f;
   iVar6 = *(int*)this;
   uVar12 = *(uint*)( this + 0x24 );
   if (this[0x18] == (remap_sid_t)0x0) {
      lVar11 = *(long*)( this + 0x30 );
      uVar10 = *(uint*)( this + 0x28 );
      LAB_00105b27:if (lVar11 != 0) {
         uVar8 = ( ulong )(uVar14 & 0x3fffffff) % (ulong)uVar10;
         piVar5 = (int*)( lVar11 + uVar8 * 0xc );
         bVar1 = *(byte*)( piVar5 + 1 );
         if (( bVar1 & 2 ) != 0) {
            LAB_00105a3c:iVar6 = 0;
            do {
               if (iVar13 == *piVar5) {
                  if (( bVar1 & 1 ) != 0) {
                     piVar5 = piVar5 + 2;
                     goto LAB_00105a72;
                  }

                  break;
               }

               iVar6 = iVar6 + 1;
               uVar8 = ( ulong )((int)uVar8 + iVar6 & uVar12);
               piVar5 = (int*)( lVar11 + uVar8 * 0xc );
               bVar1 = *(byte*)( piVar5 + 1 );
            }
 while ( ( bVar1 & 2 ) != 0 );
         }

      }

      LAB_00105b50:piVar5 = (int*)&minus_1;
      LAB_00105a72:return *piVar5 + 0x187;
   }

   if (uVar12 <= ( *(uint*)( this + 0x20 ) >> 1 ) + *(uint*)( this + 0x20 )) {
      cVar3 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc((hb_hashmap_t<unsigned_int,unsigned_int,true>*)( this + 8 ), 0);
      if (cVar3 == '\0') {
         lVar11 = *(long*)( this + 0x30 );
         uVar12 = *(uint*)( this + 0x24 );
         uVar10 = *(uint*)( this + 0x28 );
         goto LAB_00105b27;
      }

   }

   lVar11 = *(long*)( this + 0x30 );
   uVar8 = ( ulong )(uVar14 & 0x3fffffff) % ( ulong ) * (uint*)( this + 0x28 );
   piVar5 = (int*)( lVar11 + uVar8 * 0xc );
   bVar1 = *(byte*)( piVar5 + 1 );
   if (( bVar1 & 2 ) == 0) {
      uVar10 = 0;
      LAB_00105b0b:iVar7 = *(int*)( this + 0x1c );
      iVar9 = *(int*)( this + 0x20 ) + 1;
   }
 else {
      uVar12 = *(uint*)( this + 0x24 );
      uVar10 = 0;
      uVar4 = 0xffffffff;
      do {
         if (iVar13 == *piVar5) {
            if (lVar11 == 0) goto LAB_00105b50;
            uVar8 = ( ulong )(uVar14 & 0x3fffffff) % ( ulong ) * (uint*)( this + 0x28 );
            piVar5 = (int*)( lVar11 + uVar8 * 0xc );
            bVar1 = *(byte*)( piVar5 + 1 );
            goto LAB_00105a3c;
         }

         if (( ( bVar1 & 1 ) == 0 ) && ( uVar4 == 0xffffffff )) {
            uVar4 = (uint)uVar8;
         }

         uVar10 = uVar10 + 1;
         uVar8 = ( ulong )((uint)uVar8 + uVar10 & uVar12);
         piVar5 = (int*)( lVar11 + uVar8 * 0xc );
         bVar1 = *(byte*)( piVar5 + 1 );
      }
 while ( ( bVar1 & 2 ) != 0 );
      if (uVar4 == 0xffffffff) goto LAB_00105b0b;
      iVar9 = *(int*)( this + 0x20 );
      iVar7 = *(int*)( this + 0x1c );
      piVar5 = (int*)( lVar11 + (ulong)uVar4 * 0xc );
      if (( *(byte*)( piVar5 + 1 ) & 2 ) == 0) {
         iVar9 = iVar9 + 1;
      }
 else {
         iVar7 = iVar7 - ( *(byte*)( piVar5 + 1 ) & 1 );
      }

   }

   uVar2 = *(ushort*)( this + 0x1a );
   *piVar5 = iVar13;
   piVar5[2] = iVar6;
   piVar5[1] = iVar13 * 0x78dde6c4 + 3;
   *(int*)( this + 0x20 ) = iVar9;
   *(int*)( this + 0x1c ) = iVar7 + 1;
   if (( uVar2 < uVar10 ) && ( *(uint*)( this + 0x24 ) < ( uint )(iVar9 << 3) )) {
      hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc((hb_hashmap_t<unsigned_int,unsigned_int,true>*)( this + 8 ), *(uint*)( this + 0x24 ) - 8);
   }

   uVar12 = *(uint*)( this + 0x3c );
   if (*(int*)( this + 0x38 ) <= (int)uVar12) {
      cVar3 = hb_vector_t<unsigned_int,false>::alloc((hb_vector_t<unsigned_int,false>*)( this + 0x38 ), uVar12 + 1, false);
      if (cVar3 == '\0') {
         __hb_CrapPool = __hb_NullPool;
         goto LAB_00105af7;
      }

      uVar12 = *(uint*)( this + 0x3c );
   }

   *(uint*)( this + 0x3c ) = uVar12 + 1;
   *(int*)( *(long*)( this + 0x40 ) + (ulong)uVar12 * 4 ) = iVar13;
   LAB_00105af7:*(int*)this = *(int*)this + 1;
   return iVar6 + 0x187;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::subr_remap_t::create(hb_set_t const*) */void CFF::subr_remap_t::create(subr_remap_t *this, hb_set_t *param_1) {
   hb_bit_set_t hVar1;
   byte bVar2;
   uint uVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   uint *puVar8;
   long lVar9;
   long lVar10;
   ulong uVar11;
   uint uVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   undefined8 *puVar15;
   int iVar16;
   uint uVar17;
   uint *puVar18;
   hb_bit_set_t *this_00;
   uint uVar19;
   hb_bit_set_t *phVar20;
   uint uVar21;
   undefined8 *puVar22;
   long in_FS_OFFSET;
   uint local_70;
   uint local_6c;
   hb_bit_set_t *local_68;
   uint local_60;
   int local_5c;
   hb_bit_set_t *local_58;
   undefined8 local_50;
   long local_40;
   uVar19 = *(uint*)( param_1 + 0x14 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1[0x40] == (hb_set_t)0x0) {
      if (uVar19 == 0xffffffff) {
         uVar19 = *(uint*)( param_1 + 0x34 );
         if (uVar19 != 0) {
            uVar11 = (ulong)uVar19;
            uVar19 = 0;
            puVar15 = (undefined8*)( *(long*)( param_1 + 0x38 ) + 8 );
            puVar22 = (undefined8*)( *(long*)( param_1 + 0x38 ) + 0x48 );
            puVar14 = puVar22 + uVar11 * 9;
            do {
               iVar16 = *(int*)( puVar22 + -9 );
               if (iVar16 == -1) {
                  iVar16 = 0;
                  puVar13 = puVar15;
                  do {
                     uVar4 = *puVar13;
                     puVar13 = puVar13 + 1;
                     iVar6 = __popcountdi2(uVar4);
                     iVar16 = iVar16 + iVar6;
                  }
 while ( puVar13 != puVar22 );
                  *(int*)( puVar22 + -9 ) = iVar16;
               }

               puVar22 = puVar22 + 9;
               uVar19 = uVar19 + iVar16;
               puVar15 = puVar15 + 9;
            }
 while ( puVar14 != puVar22 );
         }

         *(uint*)( param_1 + 0x14 ) = uVar19;
      }

   }
 else if (uVar19 == 0xffffffff) {
      uVar12 = *(uint*)( param_1 + 0x34 );
      uVar11 = (ulong)uVar12;
      if (uVar12 != 0) {
         uVar12 = 0;
         puVar15 = (undefined8*)( *(long*)( param_1 + 0x38 ) + 8 );
         puVar22 = (undefined8*)( *(long*)( param_1 + 0x38 ) + 0x48 );
         puVar14 = puVar22 + uVar11 * 9;
         do {
            iVar16 = *(int*)( puVar22 + -9 );
            if (iVar16 == -1) {
               iVar16 = 0;
               puVar13 = puVar15;
               do {
                  uVar4 = *puVar13;
                  puVar13 = puVar13 + 1;
                  iVar6 = __popcountdi2(uVar4);
                  iVar16 = iVar16 + iVar6;
               }
 while ( puVar22 != puVar13 );
               *(int*)( puVar22 + -9 ) = iVar16;
            }

            puVar22 = puVar22 + 9;
            uVar12 = uVar12 + iVar16;
            puVar15 = puVar15 + 9;
         }
 while ( puVar14 != puVar22 );
         uVar19 = ~uVar12;
      }

      *(uint*)( param_1 + 0x14 ) = uVar12;
   }
 else {
      uVar19 = ~uVar19;
   }

   hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc((hb_hashmap_t<unsigned_int,unsigned_int,true>*)this, uVar19);
   hb_vector_t<unsigned_int,false>::alloc((hb_vector_t<unsigned_int,false>*)( this + 0x30 ), uVar19, false);
   this_00 = (hb_bit_set_t*)( param_1 + 0x10 );
   local_50 = _LC9;
   local_58 = this_00;
   if (param_1[0x40] == (hb_set_t)0x0) {
      if (*(int*)( param_1 + 0x14 ) == -1) {
         if (*(uint*)( param_1 + 0x34 ) == 0) {
            iVar16 = 1;
            iVar6 = 0;
         }
 else {
            iVar6 = 0;
            puVar15 = (undefined8*)( *(long*)( param_1 + 0x38 ) + 0x48 );
            puVar14 = (undefined8*)( *(long*)( param_1 + 0x38 ) + 8 );
            puVar22 = puVar15 + ( ulong ) * (uint*)( param_1 + 0x34 ) * 9;
            do {
               iVar16 = *(int*)( puVar15 + -9 );
               if (iVar16 == -1) {
                  iVar16 = 0;
                  puVar13 = puVar14;
                  do {
                     uVar4 = *puVar13;
                     puVar13 = puVar13 + 1;
                     iVar7 = __popcountdi2(uVar4);
                     iVar16 = iVar16 + iVar7;
                  }
 while ( puVar15 != puVar13 );
                  *(int*)( puVar15 + -9 ) = iVar16;
               }

               puVar15 = puVar15 + 9;
               iVar6 = iVar6 + iVar16;
               puVar14 = puVar14 + 9;
            }
 while ( puVar22 != puVar15 );
            iVar16 = iVar6 + 1;
         }

         *(int*)( param_1 + 0x14 ) = iVar6;
         local_50._4_4_ = iVar16;
      }
 else {
         local_50._0_4_ = (uint)_LC9;
         local_50._4_4_ = *(int*)( param_1 + 0x14 ) + 1;
      }

      hb_bit_set_t::next(this_00, (uint*)&local_50);
      phVar20 = local_58;
      iVar16 = local_50._4_4_;
      uVar19 = (uint)local_50;
   }
 else {
      if (*(int*)( param_1 + 0x14 ) == -1) {
         if (*(uint*)( param_1 + 0x34 ) == 0) {
            iVar16 = 0;
            iVar6 = 0;
         }
 else {
            iVar6 = 0;
            puVar15 = (undefined8*)( *(long*)( param_1 + 0x38 ) + 0x48 );
            puVar14 = (undefined8*)( *(long*)( param_1 + 0x38 ) + 8 );
            puVar22 = puVar15 + ( ulong ) * (uint*)( param_1 + 0x34 ) * 9;
            do {
               iVar16 = *(int*)( puVar15 + -9 );
               if (iVar16 == -1) {
                  iVar16 = 0;
                  puVar13 = puVar14;
                  do {
                     uVar4 = *puVar13;
                     puVar13 = puVar13 + 1;
                     iVar7 = __popcountdi2(uVar4);
                     iVar16 = iVar16 + iVar7;
                  }
 while ( puVar15 != puVar13 );
                  *(int*)( puVar15 + -9 ) = iVar16;
               }

               puVar15 = puVar15 + 9;
               iVar6 = iVar6 + iVar16;
               puVar14 = puVar14 + 9;
            }
 while ( puVar22 != puVar15 );
            iVar16 = -iVar6;
         }

         *(int*)( param_1 + 0x14 ) = iVar6;
      }
 else {
         iVar16 = -*(int *)(param_1 + 0x14);
      }

      local_50 = CONCAT44(iVar16, (uint)local_50);
      local_6c = 0xffffffff;
      hb_bit_set_t::next(this_00, &local_6c);
      uVar19 = local_6c;
      phVar20 = this_00;
      if (local_6c == 0) {
         local_6c = 0xffffffff;
         local_68 = (hb_bit_set_t*)CONCAT44(local_68._4_4_, 0xffffffff);
         cVar5 = hb_bit_set_t::next(this_00, (uint*)&local_68);
         if (cVar5 != '\0') {
            uVar12 = (uint)local_68;
            do {
               uVar19 = uVar12 + 1;
               local_6c = uVar12;
               cVar5 = hb_bit_set_t::next(this_00, (uint*)&local_68);
               if (cVar5 == '\0') break;
               uVar12 = uVar19;
            }
 while ( (uint)local_68 == uVar19 );
         }

      }
 else {
         uVar19 = 0;
      }

   }

   local_5c = iVar16 + -1 + ( uint )(iVar16 == 0);
   local_50 = _LC9;
   iVar16 = *(int*)( param_1 + 0x14 );
   local_68 = phVar20;
   local_60 = uVar19;
   if (param_1[0x40] == (hb_set_t)0x0) {
      if (iVar16 == -1) {
         if (*(uint*)( param_1 + 0x34 ) == 0) {
            iVar16 = 1;
            iVar6 = 0;
            local_58 = this_00;
         }
 else {
            iVar6 = 0;
            puVar15 = (undefined8*)( *(long*)( param_1 + 0x38 ) + 0x48 );
            puVar14 = (undefined8*)( *(long*)( param_1 + 0x38 ) + 8 );
            puVar22 = puVar15 + ( ulong ) * (uint*)( param_1 + 0x34 ) * 9;
            local_58 = this_00;
            do {
               iVar16 = *(int*)( puVar15 + -9 );
               if (iVar16 == -1) {
                  iVar16 = 0;
                  puVar13 = puVar14;
                  do {
                     uVar4 = *puVar13;
                     puVar13 = puVar13 + 1;
                     iVar7 = __popcountdi2(uVar4);
                     iVar16 = iVar16 + iVar7;
                  }
 while ( puVar15 != puVar13 );
                  *(int*)( puVar15 + -9 ) = iVar16;
               }

               puVar15 = puVar15 + 9;
               iVar6 = iVar6 + iVar16;
               puVar14 = puVar14 + 9;
            }
 while ( puVar22 != puVar15 );
            iVar16 = iVar6 + 1;
         }

         *(int*)( param_1 + 0x14 ) = iVar6;
         local_50 = CONCAT44(iVar16, (uint)local_50);
      }
 else {
         local_50._0_4_ = (uint)_LC9;
         local_50 = CONCAT44(iVar16 + 1, (uint)local_50);
         local_58 = this_00;
      }

      hb_bit_set_t::next(this_00, (uint*)&local_50);
      this_00 = local_58;
   }
 else {
      if (iVar16 == -1) {
         if (*(uint*)( param_1 + 0x34 ) == 0) {
            iVar16 = 0;
            iVar6 = 0;
            local_58 = this_00;
         }
 else {
            iVar6 = 0;
            puVar15 = (undefined8*)( *(long*)( param_1 + 0x38 ) + 0x48 );
            puVar14 = (undefined8*)( *(long*)( param_1 + 0x38 ) + 8 );
            puVar22 = puVar15 + ( ulong ) * (uint*)( param_1 + 0x34 ) * 9;
            local_58 = this_00;
            do {
               iVar16 = *(int*)( puVar15 + -9 );
               if (iVar16 == -1) {
                  iVar16 = 0;
                  puVar13 = puVar14;
                  do {
                     uVar4 = *puVar13;
                     puVar13 = puVar13 + 1;
                     iVar7 = __popcountdi2(uVar4);
                     iVar16 = iVar16 + iVar7;
                  }
 while ( puVar13 != puVar15 );
                  *(int*)( puVar15 + -9 ) = iVar16;
               }

               puVar15 = puVar15 + 9;
               iVar6 = iVar6 + iVar16;
               puVar14 = puVar14 + 9;
            }
 while ( puVar15 != puVar22 );
            iVar16 = -iVar6;
         }

         *(int*)( param_1 + 0x14 ) = iVar6;
      }
 else {
         iVar16 = -iVar16;
         local_58 = this_00;
      }

      local_50 = CONCAT44(iVar16, (uint)local_50);
      local_70 = 0xffffffff;
      hb_bit_set_t::next(this_00, &local_70);
      if (local_70 == 0) {
         local_70 = 0xffffffff;
         local_6c = 0xffffffff;
         cVar5 = hb_bit_set_t::next(this_00, &local_6c);
         uVar12 = local_6c;
         if (cVar5 != '\0') {
            do {
               local_70 = uVar12;
               cVar5 = hb_bit_set_t::next(this_00, &local_6c);
               if (cVar5 == '\0') break;
               uVar12 = uVar12 + 1;
            }
 while ( local_6c == uVar12 );
         }

      }

   }

   joined_r0x00105efa:if (uVar19 == 0xffffffff) goto LAB_00105fbe;
   LAB_00105f00:do {
      lVar10 = *(long*)( this + 0x28 );
      puVar18 = (uint*)&minus_1;
      uVar12 = *(uint*)( this + 0x20 );
      if (lVar10 == 0) {
         LAB_00105f74:uVar21 = *puVar18;
         if (*puVar18 != 0xffffffff) goto LAB_00105f81;
         LAB_00106150:uVar3 = *(uint*)( this + 0x34 );
         if (this[0x10] != (subr_remap_t)0x0) {
            uVar17 = *(uint*)( this + 0x18 );
            if (( uVar17 >> 1 ) + uVar17 < *(uint*)( this + 0x1c )) {
               LAB_00106177:iVar16 = *(int*)( this + 0x14 );
               uVar11 = ( ulong )(uVar19 * -0x61c8864f & 0x3fffffff) % (ulong)uVar12;
               lVar9 = uVar11 * 0xc;
               puVar18 = (uint*)( lVar10 + lVar9 );
               bVar2 = (byte)puVar18[1];
               if (( bVar2 & 2 ) == 0) {
                  *puVar18 = uVar19;
                  puVar18[2] = uVar3;
                  puVar18[1] = uVar19 * 0x78dde6c4 + 3;
                  *(uint*)( this + 0x18 ) = uVar17 + 1;
                  *(int*)( this + 0x14 ) = iVar16 + 1;
               }
 else {
                  uVar12 = 0;
                  do {
                     if (*puVar18 == uVar19) {
                        if (uVar21 == 0xffffffff) goto LAB_001061fa;
                        goto LAB_001061ef;
                     }

                     if (( ( bVar2 & 1 ) == 0 ) && ( uVar21 == 0xffffffff )) {
                        uVar21 = (uint)uVar11;
                     }

                     uVar12 = uVar12 + 1;
                     uVar11 = ( ulong )((uint)uVar11 + uVar12 & *(uint*)( this + 0x1c ));
                     lVar9 = uVar11 * 0xc;
                     puVar18 = (uint*)( lVar10 + lVar9 );
                     bVar2 = (byte)puVar18[1];
                  }
 while ( ( bVar2 & 2 ) != 0 );
                  if (uVar21 == 0xffffffff) {
                     LAB_001062b5:uVar17 = uVar17 + 1;
                  }
 else {
                     LAB_001061ef:lVar9 = (ulong)uVar21 * 0xc;
                     LAB_001061fa:puVar18 = (uint*)( lVar9 + lVar10 );
                     if (( (byte)puVar18[1] & 2 ) == 0) goto LAB_001062b5;
                     iVar16 = iVar16 - ( (byte)puVar18[1] & 1 );
                  }

                  *puVar18 = uVar19;
                  puVar18[2] = uVar3;
                  puVar18[1] = uVar19 * 0x78dde6c4 + 3;
                  *(uint*)( this + 0x18 ) = uVar17;
                  *(int*)( this + 0x14 ) = iVar16 + 1;
                  if (( *(ushort*)( this + 0x12 ) < uVar12 ) && ( *(uint*)( this + 0x1c ) < uVar17 << 3 )) {
                     hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc((hb_hashmap_t<unsigned_int,unsigned_int,true>*)this, *(uint*)( this + 0x1c ) - 8);
                  }

               }

            }
 else {
               cVar5 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc((hb_hashmap_t<unsigned_int,unsigned_int,true>*)this, 0);
               if (cVar5 != '\0') {
                  lVar10 = *(long*)( this + 0x28 );
                  uVar12 = *(uint*)( this + 0x20 );
                  uVar17 = *(uint*)( this + 0x18 );
                  goto LAB_00106177;
               }

            }

            uVar3 = *(uint*)( this + 0x34 );
         }

         if (*(int*)( this + 0x30 ) <= (int)uVar3) {
            cVar5 = hb_vector_t<unsigned_int,false>::alloc((hb_vector_t<unsigned_int,false>*)( this + 0x30 ), uVar3 + 1, false);
            if (cVar5 == '\0') {
               __hb_CrapPool = __hb_NullPool;
               goto LAB_00105f81;
            }

            uVar3 = *(uint*)( this + 0x34 );
         }

         hVar1 = phVar20[0x30];
         *(uint*)( this + 0x34 ) = uVar3 + 1;
         *(uint*)( *(long*)( this + 0x38 ) + (ulong)uVar3 * 4 ) = uVar19;
      }
 else {
         uVar11 = ( ulong )(uVar19 * -0x61c8864f & 0x3fffffff) % (ulong)uVar12;
         puVar8 = (uint*)( lVar10 + uVar11 * 0xc );
         bVar2 = (byte)puVar8[1];
         if (( bVar2 & 2 ) == 0) goto LAB_00105f74;
         iVar16 = 0;
         do {
            if (*puVar8 == uVar19) {
               puVar18 = puVar8 + 2;
               if (( bVar2 & 1 ) == 0) {
                  puVar18 = (uint*)&minus_1;
               }

               goto LAB_00105f74;
            }

            iVar16 = iVar16 + 1;
            uVar11 = ( ulong )((int)uVar11 + iVar16 & *(uint*)( this + 0x1c ));
            puVar8 = (uint*)( lVar10 + uVar11 * 0xc );
            bVar2 = (byte)puVar8[1];
         }
 while ( ( bVar2 & 2 ) != 0 );
         uVar21 = _minus_1;
         if (_minus_1 == 0xffffffff) goto LAB_00106150;
         LAB_00105f81:hVar1 = phVar20[0x30];
      }

      if (hVar1 == (hb_bit_set_t)0x0) {
         hb_bit_set_t::next(phVar20, &local_60);
         phVar20 = local_68;
         uVar19 = local_60;
         goto LAB_00105fa2;
      }

      if (uVar19 == 0xfffffffe) {
         local_60 = 0xffffffff;
         if (local_5c != 0) break;
         LAB_00105fbe:uVar19 = 0xffffffff;
         if (this_00 == phVar20) {
            iVar16 = 0x6b;
            if (0x4d7 < *(uint*)( this + 0x14 )) {
               iVar16 = ( -(uint)(*(uint *)(this + 0x14) < 0x846c) & 0xffff846b ) + 0x8000;
            }

            *(int*)( this + 0x40 ) = iVar16;
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         goto LAB_00105f00;
      }

      local_6c = uVar19;
      hb_bit_set_t::next(phVar20, &local_6c);
      uVar12 = uVar19 + 1;
      if (uVar12 < local_6c) {
         uVar19 = uVar12;
         local_60 = uVar12;
         if (local_5c != 0) break;
         goto LAB_00105f00;
      }

      local_58 = (hb_bit_set_t*)CONCAT44(local_58._4_4_, uVar19);
      cVar5 = hb_bit_set_t::next(phVar20, (uint*)&local_58);
      if (cVar5 != '\0') {
         uVar12 = (uint)local_58;
         goto LAB_001063ae;
      }

      local_60 = 0;
      uVar19 = local_60;
   }
 while ( local_5c == 0 );
   goto LAB_00105fae;
   while (uVar12 = uVar19,(uint)local_58 == uVar19) {
      LAB_001063ae:uVar19 = uVar12 + 1;
      local_6c = uVar12;
      cVar5 = hb_bit_set_t::next(phVar20, (uint*)&local_58);
      if (cVar5 == '\0') break;
   }
;
   LAB_00105fa2:local_60 = uVar19;
   uVar19 = local_60;
   if (local_5c != 0) {
      LAB_00105fae:local_5c = local_5c + -1;
      uVar19 = local_60;
   }

   goto joined_r0x00105efa;
}
/* hb_vector_t<unsigned char, false>::alloc(unsigned int, bool) */undefined8 hb_vector_t<unsigned_char,false>::alloc(hb_vector_t<unsigned_char,false> *this, uint param_1, bool param_2) {
   void *pvVar1;
   uint uVar2;
   uint uVar3;
   uVar2 = *(uint*)this;
   if ((int)uVar2 < 0) {
      return 0;
   }

   if (param_2) {
      uVar3 = *(uint*)( this + 4 );
      if (*(uint*)( this + 4 ) <= param_1) {
         uVar3 = param_1;
      }

      if (uVar2 < uVar3) {
         pvVar1 = *(void**)( this + 8 );
         uVar2 = uVar3;
      }
 else {
         if (uVar2 >> 2 <= uVar3) {
            return 1;
         }

         pvVar1 = *(void**)( this + 8 );
         uVar2 = uVar3;
         if (uVar3 == 0) {
            free(pvVar1);
            uVar2 = 0;
            pvVar1 = (void*)0x0;
            goto LAB_001065dd;
         }

      }

   }
 else {
      if (param_1 <= uVar2) {
         return 1;
      }

      do {
         uVar2 = ( uVar2 >> 1 ) + 8 + uVar2;
      }
 while ( uVar2 < param_1 );
      pvVar1 = *(void**)( this + 8 );
   }

   pvVar1 = realloc(pvVar1, (ulong)uVar2);
   if (pvVar1 == (void*)0x0) {
      if (uVar2 <= *(uint*)this) {
         return 1;
      }

      *(uint*)this = ~*(uint *)this;
      return 0;
   }

   LAB_001065dd:*(void**)( this + 8 ) = pvVar1;
   *(uint*)this = uVar2;
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* cff1_cs_opset_flatten_t::flush_args_and_op(unsigned int, CFF::cff1_cs_interp_env_t&,
   CFF::flatten_param_t&) */void cff1_cs_opset_flatten_t::flush_args_and_op(uint param_1, cff1_cs_interp_env_t *param_2, flatten_param_t *param_3) {
   double dVar1;
   uint uVar2;
   char cVar3;
   int iVar4;
   str_encoder_t *this;
   uchar uVar5;
   undefined1 uVar6;
   int iVar7;
   uint uVar8;
   cff1_cs_interp_env_t *pcVar9;
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_2 + 0x1174 ) == 0) {
      if (param_1 < 0x18) goto LAB_001066a2;
      LAB_001069b3:if (param_1 == 0x100) goto LAB_001066b9;
      LAB_001066c7:uVar8 = *(uint*)( param_2 + 0x1174 );
      this * (str_encoder_t**)param_3;
      if (uVar8 < *(uint*)( param_2 + 0x14 )) {
         LAB_001066e1:pcVar9 = param_2 + (ulong)uVar8 * 8 + 0x18;
         do {
            while (true) {
               dVar1 = *(double*)pcVar9;
               iVar4 = (int)dVar1;
               if (dVar1 != (double)(int)(short)iVar4) break;
               if (0x8d6 < iVar4 + 0x46bU) {
                  iVar7 = 0x7fff;
                  if (iVar4 < 0x8000) {
                     iVar7 = iVar4;
                  }

                  if (iVar7 < -0x8000) {
                     iVar7 = -0x8000;
                  }

                  uVar2 = *(uint*)( this + 4 );
                  if ((int)uVar2 < *(int*)this) {
                     *(uint*)( this + 4 ) = uVar2 + 1;
                     *(undefined1*)( *(long*)( this + 8 ) + (ulong)uVar2 ) = 0x1c;
                  }
 else {
                     cVar3 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this, uVar2 + 1, false);
                     if (cVar3 == '\0') goto LAB_00106b08;
                     uVar2 = *(uint*)( this + 4 );
                     *(uint*)( this + 4 ) = uVar2 + 1;
                     *(undefined1*)( *(long*)( this + 8 ) + (ulong)uVar2 ) = 0x1c;
                  }

                  goto LAB_001067d3;
               }

               if (iVar4 + 0x6bU < 0xd7) {
                  CFF::str_encoder_t::encode_byte(this, (char)iVar4 + 0x8b);
               }
 else {
                  if (iVar4 < 1) {
                     iVar4 = -0x6c - iVar4;
                     uVar5 = (char)( (uint)iVar4 >> 8 ) + 0xfb;
                  }
 else {
                     iVar4 = iVar4 + -0x6c;
                     uVar5 = (char)( (uint)iVar4 >> 8 ) + 0xf7;
                  }

                  CFF::str_encoder_t::encode_byte(this, uVar5);
                  CFF::str_encoder_t::encode_byte(this, (uchar)iVar4);
               }

               LAB_0010673e:uVar8 = uVar8 + 1;
               pcVar9 = pcVar9 + 8;
               if (*(uint*)( param_2 + 0x14 ) <= uVar8) goto LAB_0010681f;
            }
;
            uVar2 = *(uint*)( this + 4 );
            iVar7 = (int)( dVar1 * __LC10 );
            if ((int)uVar2 < *(int*)this) {
               *(uint*)( this + 4 ) = uVar2 + 1;
               *(undefined1*)( *(long*)( this + 8 ) + (ulong)uVar2 ) = 0xff;
            }
 else {
               cVar3 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this, uVar2 + 1, false);
               if (cVar3 == '\0') {
                  _hb_CrapPool = _hb_NullPool;
               }
 else {
                  uVar2 = *(uint*)( this + 4 );
                  *(uint*)( this + 4 ) = uVar2 + 1;
                  *(undefined1*)( *(long*)( this + 8 ) + (ulong)uVar2 ) = 0xff;
               }

            }

            uVar2 = *(uint*)( this + 4 );
            uVar6 = ( undefined1 )((uint)iVar7 >> 0x18);
            if ((int)uVar2 < *(int*)this) {
               *(uint*)( this + 4 ) = uVar2 + 1;
               *(undefined1*)( *(long*)( this + 8 ) + (ulong)uVar2 ) = uVar6;
            }
 else {
               cVar3 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this, uVar2 + 1, false);
               if (cVar3 == '\0') {
                  _hb_CrapPool = _hb_NullPool;
               }
 else {
                  uVar2 = *(uint*)( this + 4 );
                  *(uint*)( this + 4 ) = uVar2 + 1;
                  *(undefined1*)( *(long*)( this + 8 ) + (ulong)uVar2 ) = uVar6;
               }

            }

            uVar2 = *(uint*)( this + 4 );
            uVar6 = ( undefined1 )((uint)iVar7 >> 0x10);
            if ((int)uVar2 < *(int*)this) {
               *(uint*)( this + 4 ) = uVar2 + 1;
               *(undefined1*)( *(long*)( this + 8 ) + (ulong)uVar2 ) = uVar6;
            }
 else {
               cVar3 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this, uVar2 + 1, false);
               if (cVar3 == '\0') {
                  LAB_00106b08:_hb_CrapPool = _hb_NullPool;
               }
 else {
                  uVar2 = *(uint*)( this + 4 );
                  *(uint*)( this + 4 ) = uVar2 + 1;
                  *(undefined1*)( *(long*)( this + 8 ) + (ulong)uVar2 ) = uVar6;
               }

            }

            LAB_001067d3:uVar2 = *(uint*)( this + 4 );
            uVar6 = ( undefined1 )((uint)iVar7 >> 8);
            if ((int)uVar2 < *(int*)this) {
               *(uint*)( this + 4 ) = uVar2 + 1;
               *(undefined1*)( *(long*)( this + 8 ) + (ulong)uVar2 ) = uVar6;
            }
 else {
               cVar3 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this, uVar2 + 1, false);
               if (cVar3 == '\0') {
                  _hb_CrapPool = _hb_NullPool;
               }
 else {
                  uVar2 = *(uint*)( this + 4 );
                  *(uint*)( this + 4 ) = uVar2 + 1;
                  *(undefined1*)( *(long*)( this + 8 ) + (ulong)uVar2 ) = uVar6;
               }

            }

            uVar2 = *(uint*)( this + 4 );
            if (*(int*)this <= (int)uVar2) {
               cVar3 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this, uVar2 + 1, false);
               if (cVar3 == '\0') {
                  _hb_CrapPool = _hb_NullPool;
               }
 else {
                  uVar2 = *(uint*)( this + 4 );
                  *(uint*)( this + 4 ) = uVar2 + 1;
                  *(char*)( *(long*)( this + 8 ) + (ulong)uVar2 ) = (char)iVar7;
               }

               goto LAB_0010673e;
            }

            *(uint*)( this + 4 ) = uVar2 + 1;
            uVar8 = uVar8 + 1;
            pcVar9 = pcVar9 + 8;
            *(char*)( *(long*)( this + 8 ) + (ulong)uVar2 ) = (char)iVar7;
         }
 while ( uVar8 < *(uint*)( param_2 + 0x14 ) );
         LAB_0010681f:this * (str_encoder_t**)param_3;
      }

      *(undefined4*)( param_2 + 0x14 ) = 0;
      *(undefined4*)( param_2 + 0x1174 ) = 0;
      if (0xff < param_1) {
         CFF::str_encoder_t::encode_byte(this, '\f');
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00106b3e;
         goto LAB_0010686c;
      }

   }
 else {
      local_48 = *(undefined8*)param_3;
      CFF::str_encoder_t::encode_num_cs((str_encoder_t*)&local_48, (number_t*)param_2);
      if (0x17 < param_1) goto LAB_001069b3;
      LAB_001066a2:if (( param_1 != 0 ) && ( ( 0x9c000aUL >> ( (ulong)param_1 & 0x3f ) & 1 ) != 0 )) {
         LAB_001066b9:if (param_3[8] != (flatten_param_t)0x0) {
            *(undefined4*)( param_2 + 0x1174 ) = 0;
            *(undefined4*)( param_2 + 0x14 ) = 0;
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_00106b3e;
         }

         goto LAB_001066c7;
      }

      uVar8 = *(uint*)( param_2 + 0x1174 );
      this * (str_encoder_t**)param_3;
      if (uVar8 < *(uint*)( param_2 + 0x14 )) goto LAB_001066e1;
      *(undefined4*)( param_2 + 0x14 ) = 0;
      *(undefined4*)( param_2 + 0x1174 ) = 0;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      LAB_00106b3e:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   LAB_0010686c:CFF::str_encoder_t::encode_byte(this, (uchar)param_1);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::opset_t<CFF::number_t>::process_op(unsigned int, CFF::interp_env_t<CFF::number_t>&) */void CFF::opset_t<CFF::number_t>::process_op(uint param_1, interp_env_t *param_2) {
   undefined1 uVar1;
   undefined1 uVar2;
   byte bVar3;
   uint uVar4;
   uint uVar5;
   byte *pbVar6;
   undefined *puVar7;
   interp_env_t *piVar8;
   if (param_1 < 0xfb) {
      if (0xf6 < param_1) {
         uVar5 = *(uint*)( param_2 + 0xc );
         if (uVar5 < *(uint*)( param_2 + 8 )) {
            pbVar6 = (byte*)( (ulong)uVar5 + *(long*)param_2 );
         }
 else {
            uVar5 = *(uint*)( param_2 + 8 ) + 1;
            pbVar6 = &_hb_NullPool;
            *(uint*)( param_2 + 0xc ) = uVar5;
         }

         bVar3 = *pbVar6;
         uVar4 = *(uint*)( param_2 + 0x14 );
         if (uVar4 < 0x201) {
            piVar8 = param_2 + (ulong)uVar4 * 8 + 0x18;
            *(uint*)( param_2 + 0x14 ) = uVar4 + 1;
         }
 else {
            __hb_CrapPool = __hb_NullPool;
            param_2[0x10] = (interp_env_t)0x1;
            piVar8 = (interp_env_t*)&_hb_CrapPool;
         }

         *(double*)piVar8 = (double)(int)(short)( ( (short)param_1 + -0xf7 ) * 0x100 + 0x6c + (ushort)bVar3 );
         *(uint*)( param_2 + 0xc ) = uVar5 + 1;
         return;
      }

      if (param_1 == 0x1c) {
         uVar5 = *(uint*)( param_2 + 0xc );
         uVar4 = *(uint*)( param_2 + 8 );
         if (uVar5 < uVar4) {
            puVar7 = (undefined*)( (ulong)uVar5 + *(long*)param_2 );
         }
 else {
            uVar5 = uVar4 + 1;
            puVar7 = &_hb_NullPool;
            *(uint*)( param_2 + 0xc ) = uVar5;
         }

         uVar1 = *puVar7;
         if (uVar5 + 1 < uVar4) {
            puVar7 = (undefined*)( ( ulong )(uVar5 + 1) + *(long*)param_2 );
         }
 else {
            uVar5 = uVar4 + 1;
            puVar7 = &_hb_NullPool;
            *(uint*)( param_2 + 0xc ) = uVar5;
         }

         uVar2 = *puVar7;
         uVar4 = *(uint*)( param_2 + 0x14 );
         if (uVar4 < 0x201) {
            piVar8 = param_2 + (ulong)uVar4 * 8 + 0x18;
            *(uint*)( param_2 + 0x14 ) = uVar4 + 1;
         }
 else {
            __hb_CrapPool = __hb_NullPool;
            param_2[0x10] = (interp_env_t)0x1;
            piVar8 = (interp_env_t*)&_hb_CrapPool;
         }

         *(double*)piVar8 = (double)(int)CONCAT11(uVar1, uVar2);
         *(uint*)( param_2 + 0xc ) = uVar5 + 2;
         return;
      }

      if (param_1 - 0x20 < 0xd7) {
         uVar5 = *(uint*)( param_2 + 0x14 );
         if (uVar5 < 0x201) {
            piVar8 = param_2 + (ulong)uVar5 * 8 + 0x18;
            *(uint*)( param_2 + 0x14 ) = uVar5 + 1;
         }
 else {
            __hb_CrapPool = __hb_NullPool;
            param_2[0x10] = (interp_env_t)0x1;
            piVar8 = (interp_env_t*)&_hb_CrapPool;
         }

         *(double*)piVar8 = (double)(int)( param_1 - 0x8b );
         return;
      }

   }
 else if (param_1 - 0xfb < 4) {
      uVar5 = *(uint*)( param_2 + 0xc );
      if (uVar5 < *(uint*)( param_2 + 8 )) {
         pbVar6 = (byte*)( (ulong)uVar5 + *(long*)param_2 );
      }
 else {
         uVar5 = *(uint*)( param_2 + 8 ) + 1;
         pbVar6 = &_hb_NullPool;
         *(uint*)( param_2 + 0xc ) = uVar5;
      }

      bVar3 = *pbVar6;
      uVar4 = *(uint*)( param_2 + 0x14 );
      if (uVar4 < 0x201) {
         piVar8 = param_2 + (ulong)uVar4 * 8 + 0x18;
         *(uint*)( param_2 + 0x14 ) = uVar4 + 1;
      }
 else {
         __hb_CrapPool = __hb_NullPool;
         param_2[0x10] = (interp_env_t)0x1;
         piVar8 = (interp_env_t*)&_hb_CrapPool;
      }

      *(double*)piVar8 = (double)(int)( ( ( param_1 - 0xfb & 0xffff ) * -0x100 - (uint)bVar3 ) + -0x6c );
      *(uint*)( param_2 + 0xc ) = uVar5 + 1;
      return;
   }

   *(undefined4*)( param_2 + 0x14 ) = 0;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* bool CFF::Dict::serialize_link_op<OT::IntType<int, 4u>, 29>(hb_serialize_context_t*, unsigned
   int, unsigned int, hb_serialize_context_t::whence_t) */bool CFF::Dict::serialize_link_op<OT::IntType<int,4u>,29>(long param_1, uint param_2, uint param_3, uint param_4) {
   uint uVar1;
   uint uVar2;
   undefined1 *puVar3;
   undefined1 *puVar4;
   undefined4 *puVar5;
   undefined8 uVar6;
   void *pvVar7;
   uint *puVar8;
   uint uVar9;
   undefined8 *puVar10;
   uint uVar11;
   puVar3 = *(undefined1**)( param_1 + 8 );
   if (*(int*)( param_1 + 0x2c ) != 0) {
      return false;
   }

   if (*(undefined1**)( param_1 + 0x10 ) == puVar3 || (long)*(undefined1**)( param_1 + 0x10 ) - (long)puVar3 < 0) {
      LAB_00106f78:*(undefined4*)( param_1 + 0x2c ) = 4;
      return false;
   }

   *puVar3 = 0;
   puVar4 = *(undefined1**)( param_1 + 8 );
   *(undefined1**)( param_1 + 8 ) = puVar4 + 1;
   if (puVar4 == (undefined1*)0x0) {
      return false;
   }

   *puVar4 = 0x1d;
   if (*(int*)( param_1 + 0x2c ) != 0) {
      return false;
   }

   if (*(long*)( param_1 + 0x10 ) - (long)( puVar4 + 1 ) < 4) goto LAB_00106f78;
   *(undefined4*)( puVar4 + 1 ) = 0;
   puVar5 = *(undefined4**)( param_1 + 8 );
   *(undefined4**)( param_1 + 8 ) = puVar5 + 1;
   if (puVar5 == (undefined4*)0x0) {
      return false;
   }

   *puVar5 = 0;
   if (*(int*)( param_1 + 0x2c ) != 0) {
      return false;
   }

   puVar4 = *(undefined1**)( param_1 + 8 );
   if (*(long*)( param_1 + 0x10 ) - (long)puVar4 < (long)( ulong )(2 - ( param_2 < 0x100 ))) goto LAB_00106f78;
   *(undefined1**)( param_1 + 8 ) = puVar4 + ( 2 - ( ulong )(param_2 < 0x100) );
   if (puVar4 == (undefined1*)0x0) {
      return false;
   }

   if (param_2 < 0x100) {
      *puVar4 = (char)param_2;
   }
 else {
      *puVar4 = 0xc;
      puVar4[1] = (char)param_2;
   }

   if (param_3 == 0) {
      return true;
   }

   puVar10 = *(undefined8**)( param_1 + 0x48 );
   uVar1 = *(uint*)( puVar10 + 2 );
   uVar2 = *(uint*)( (long)puVar10 + 0x14 );
   if (-1 < (int)uVar1) {
      uVar11 = uVar2 + 1;
      if ((int)uVar11 < 0) {
         uVar11 = 0;
      }

      uVar9 = uVar1;
      if (uVar11 <= uVar1) {
         LAB_00106f0f:pvVar7 = (void*)puVar10[3];
         LAB_00106f13:if (uVar2 < uVar11) {
            hb_memset((void*)( (long)pvVar7 + (ulong)uVar2 * 0xc ), ( uVar11 - uVar2 ) * 0xc, (uint)pvVar7);
            pvVar7 = (void*)puVar10[3];
         }

         *(uint*)( (long)puVar10 + 0x14 ) = uVar11;
         puVar10 = *(undefined8**)( param_1 + 0x48 );
         puVar8 = (uint*)( (long)pvVar7 + ( ulong )(uVar11 - 1) * 0xc );
         goto LAB_00106f48;
      }

      do {
         uVar9 = uVar9 + 8 + ( uVar9 >> 1 );
      }
 while ( uVar9 < uVar11 );
      if (uVar9 < 0x15555556) {
         pvVar7 = realloc((void*)puVar10[3], (ulong)uVar9 * 0xc);
         if (pvVar7 != (void*)0x0) {
            puVar10[3] = pvVar7;
            uVar2 = *(uint*)( (long)puVar10 + 0x14 );
            *(uint*)( puVar10 + 2 ) = uVar9;
            goto LAB_00106f13;
         }

         if (uVar9 <= *(uint*)( puVar10 + 2 )) {
            uVar2 = *(uint*)( (long)puVar10 + 0x14 );
            goto LAB_00106f0f;
         }

         *(uint*)( puVar10 + 2 ) = ~*(uint *)(puVar10 + 2);
         puVar10 = *(undefined8**)( param_1 + 0x48 );
      }
 else {
         *(uint*)( puVar10 + 2 ) = ~uVar1;
      }

   }

   __hb_CrapPool = __hb_NullPool;
   _memcpy = _lookup_expert_subset_charset_for_sid;
   puVar8 = (uint*)&_hb_CrapPool;
   LAB_00106f48:if (*(int*)( puVar10 + 2 ) < 0) {
      *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) | 1;
   }

   uVar6 = *puVar10;
   puVar8[2] = param_3;
   puVar8[1] = ( (int)puVar3 + 1 ) - (int)uVar6;
   *puVar8 = ( param_4 & 3 ) << 4 | 0xc;
   return true;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::parsed_values_t<CFF::cff1_top_dict_val_t>::add_op(unsigned int, CFF::byte_str_ref_t const&,
   CFF::cff1_top_dict_val_t const&) */void CFF::parsed_values_t<CFF::cff1_top_dict_val_t>::add_op(parsed_values_t<CFF::cff1_top_dict_val_t> *this, uint param_1, byte_str_ref_t *param_2, cff1_top_dict_val_t *param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   void *pvVar4;
   long *plVar5;
   uint uVar6;
   ulong uVar7;
   undefined1 uVar8;
   uint uVar9;
   uint uVar10;
   uVar10 = *(uint*)( this + 0xc );
   uVar7 = (ulong)uVar10;
   uVar9 = *(uint*)( this + 8 );
   uVar6 = uVar10 + 1;
   if ((int)uVar10 < (int)uVar9) {
      LAB_00107055:pvVar4 = *(void**)( this + 0x10 );
   }
 else {
      if ((int)uVar9 < 0) {
         LAB_00107111:_realloc = _lookup_expert_charset_for_sid;
         __hb_CrapPool = __hb_NullPool;
         _memcpy = _lookup_expert_subset_charset_for_sid;
         plVar5 = (long*)&_hb_CrapPool;
         goto LAB_00107076;
      }

      uVar10 = uVar9;
      if (uVar6 <= uVar9) goto LAB_00107055;
      do {
         uVar10 = ( uVar10 >> 1 ) + 8 + uVar10;
      }
 while ( uVar10 < uVar6 );
      if (0xaaaaaaa < uVar10) {
         LAB_0010710c:*(uint*)( this + 8 ) = ~uVar9;
         goto LAB_00107111;
      }

      pvVar4 = realloc(*(void**)( this + 0x10 ), (ulong)uVar10 * 0x18);
      if (pvVar4 == (void*)0x0) {
         uVar9 = *(uint*)( this + 8 );
         if (uVar9 < uVar10) goto LAB_0010710c;
         uVar7 = ( ulong ) * (uint*)( this + 0xc );
         pvVar4 = *(void**)( this + 0x10 );
         uVar6 = *(uint*)( this + 0xc ) + 1;
      }
 else {
         uVar7 = ( ulong ) * (uint*)( this + 0xc );
         *(void**)( this + 0x10 ) = pvVar4;
         *(uint*)( this + 8 ) = uVar10;
         uVar6 = *(uint*)( this + 0xc ) + 1;
      }

   }

   lVar2 = *(long*)param_3;
   lVar3 = *(long*)( param_3 + 8 );
   *(uint*)( this + 0xc ) = uVar6;
   plVar5 = (long*)( (long)pvVar4 + uVar7 * 0x18 );
   *plVar5 = lVar2;
   plVar5[1] = lVar3;
   plVar5[2] = *(long*)( param_3 + 0x10 );
   LAB_00107076:uVar10 = *(uint*)this;
   iVar1 = *(int*)( param_2 + 0xc );
   *(uint*)( plVar5 + 1 ) = param_1;
   lVar2 = *(long*)param_2;
   if (*(uint*)( param_2 + 8 ) < uVar10) {
      uVar8 = 0;
   }
 else {
      uVar9 = *(uint*)( param_2 + 8 ) - uVar10;
      uVar6 = iVar1 - uVar10;
      uVar8 = (undefined1)uVar9;
      if (uVar6 <= uVar9) {
         uVar8 = (undefined1)uVar6;
      }

   }

   *(undefined1*)( (long)plVar5 + 0xc ) = uVar8;
   *plVar5 = (ulong)uVar10 + lVar2;
   *(int*)this = iVar1;
   return;
}
/* OT::CFFIndex<OT::IntType<unsigned short, 2u> >::operator[](unsigned int) const */undefined1[16];OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator (CFFIndex<OT::IntType<unsigned_short,2u>> *this,uint param_1) {
   CFFIndex<OT::IntType<unsigned_short,2u>> CVar1;
   uint uVar2;
   ushort uVar3;
   uint uVar4;
   CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar5;
   ushort uVar6;
   uint uVar7;
   uint uVar8;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   if (param_1 < ( ushort )(*(ushort*)this << 8 | *(ushort*)this >> 8)) {
      CVar1 = this[2];
      if (CVar1 == (CFFIndex<OT::IntType<unsigned_short,2u>>)0x3) {
         pCVar5 = this + (ulong)param_1 * 3 + 3;
         uVar7 = ( uint )(byte) * pCVar5 * 0x10000 + (uint)(byte)pCVar5[1] * 0x100 + (uint)(byte)pCVar5[2];
         pCVar5 = this + ( ulong )(param_1 + 1) * 3 + 3;
         uVar4 = ( uint )(byte) * pCVar5 * 0x10000 + (uint)(byte)pCVar5[1] * 0x100 + (uint)(byte)pCVar5[2];
         if (uVar4 < uVar7) goto LAB_00107238;
         uVar3 = *(ushort*)this << 8 | *(ushort*)this >> 8;
         uVar2 = (uint)uVar3;
         pCVar5 = this + (ulong)uVar3 * 3 + 3;
         uVar8 = ( uint )(byte) * pCVar5 * 0x10000 + (uint)(byte)pCVar5[1] * 0x100 + (uint)(byte)pCVar5[2];
      }
 else if ((byte)CVar1 < 4) {
         if (CVar1 == (CFFIndex<OT::IntType<unsigned_short,2u>>)0x1) {
            uVar7 = (uint)(byte)this[(ulong)param_1 + 3];
            uVar4 = (uint)(byte)this[( ulong )(param_1 + 1) + 3];
            if (uVar4 < uVar7) goto LAB_00107238;
            uVar3 = *(ushort*)this << 8 | *(ushort*)this >> 8;
            uVar2 = (uint)uVar3;
            uVar8 = (uint)(byte)this[(ulong)uVar3 + 3];
         }
 else {
            if (CVar1 != (CFFIndex<OT::IntType<unsigned_short,2u>>)0x2) goto LAB_00107240;
            uVar6 = *(ushort*)( this + (ulong)param_1 * 2 + 3 ) << 8 | *(ushort*)( this + (ulong)param_1 * 2 + 3 ) >> 8;
            uVar3 = *(ushort*)( this + ( ulong )(param_1 + 1) * 2 + 3 ) << 8 | *(ushort*)( this + ( ulong )(param_1 + 1) * 2 + 3 ) >> 8;
            uVar7 = (uint)uVar6;
            uVar4 = (uint)uVar3;
            if (uVar3 < uVar6) goto LAB_00107238;
            uVar3 = *(ushort*)this << 8 | *(ushort*)this >> 8;
            uVar2 = (uint)uVar3;
            uVar8 = ( uint )(ushort)(*(ushort*)( this + (ulong)uVar3 * 2 + 3 ) << 8 | *(ushort*)( this + (ulong)uVar3 * 2 + 3 ) >> 8);
         }

      }
 else {
         if (CVar1 != (CFFIndex<OT::IntType<unsigned_short,2u>>)0x4) {
            LAB_00107240:auVar11._0_8_ = this + ( ( ( ushort )(*(ushort*)this << 8 | *(ushort*)this >> 8) + 1 ) * (uint)(byte)CVar1 + 2 );
            auVar11._8_8_ = 0;
            return auVar11;
         }

         uVar4 = *(uint*)( this + (ulong)param_1 * 4 + 3 );
         uVar2 = *(uint*)( this + ( ulong )(param_1 + 1) * 4 + 3 );
         uVar7 = uVar4 >> 0x18 | ( uVar4 & 0xff0000 ) >> 8 | ( uVar4 & 0xff00 ) << 8 | uVar4 << 0x18;
         uVar4 = uVar2 >> 0x18 | ( uVar2 & 0xff0000 ) >> 8 | ( uVar2 & 0xff00 ) << 8 | uVar2 << 0x18;
         if (uVar4 < uVar7) goto LAB_00107238;
         uVar3 = *(ushort*)this << 8 | *(ushort*)this >> 8;
         uVar2 = (uint)uVar3;
         uVar8 = *(uint*)( this + (ulong)uVar3 * 4 + 3 );
         uVar8 = uVar8 >> 0x18 | ( uVar8 & 0xff0000 ) >> 8 | ( uVar8 & 0xff00 ) << 8 | uVar8 << 0x18;
      }

      if (uVar4 <= uVar8) {
         auVar9._8_4_ = uVar4 - uVar7;
         auVar9._0_8_ = this + ( ulong )(( uVar2 + 1 ) * (uint)(byte)CVar1 + 2) + (ulong)uVar7;
         auVar9._12_4_ = 0;
         return auVar9;
      }

   }

   LAB_00107238:auVar10._12_4_ = 0;
   auVar10._0_12_ = ZEXT812(0);
   return auVar10;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::cs_interp_env_t<CFF::number_t, CFF::Subrs<OT::IntType<unsigned short, 2u> >
   >::call_subr(CFF::biased_subrs_t<CFF::Subrs<OT::IntType<unsigned short, 2u> > > const&,
   CFF::cs_type_t) */void CFF::cs_interp_env_t<CFF::number_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>>::call_subr(cs_interp_env_t<CFF::number_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>> *this, int *param_1, undefined4 param_3) {
   long lVar1;
   uint uVar2;
   CFFIndex<OT::IntType<unsigned_short,2u>> *this_00;
   undefined8 uVar3;
   cs_interp_env_t<CFF::number_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>> *pcVar4;
   uint uVar5;
   undefined1 auVar6[12];
   uVar5 = *(uint*)( this + 0x14 );
   if (uVar5 == 0) {
      __hb_CrapPool = __hb_NullPool;
      this[0x10] = (cs_interp_env_t<CFF::number_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>>)0x1;
      pcVar4 = (cs_interp_env_t<CFF::number_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>>*)&_hb_CrapPool;
   }
 else {
      pcVar4 = this + (ulong)uVar5 * 8 + 0x10;
      *(uint*)( this + 0x14 ) = uVar5 - 1;
   }

   uVar5 = (int)*(double*)pcVar4 + *param_1;
   if (( ( -1 < (int)uVar5 ) && ( this_00 = *(CFFIndex<OT::IntType<unsigned_short,2u>>**)( param_1 + 2 ) ),this_00 != (CFFIndex<OT::IntType<unsigned_short,2u>>*)0x0 )) {
      uVar2 = *(uint*)( this + 0x104c );
      if (uVar2 < 10) {
         uVar3 = *(undefined8*)( this + 8 );
         lVar1 = (ulong)uVar2 * 0x18;
         *(uint*)( this + 0x104c ) = uVar2 + 1;
         *(undefined8*)( this + 0x1020 ) = *(undefined8*)this;
         *(undefined8*)( this + 0x1028 ) = uVar3;
         *(undefined8*)( this + lVar1 + 0x1050 ) = *(undefined8*)this;
         *(undefined8*)( this + lVar1 + 0x1058 ) = uVar3;
         *(undefined8*)( this + lVar1 + 0x1060 ) = *(undefined8*)( this + 0x1030 );
         auVar6 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator [](this_00, uVar5);
         *(undefined4*)( this + 0x1030 ) = param_3;
         *(undefined1(*) [12])( this + 0x1020 ) = auVar6;
         *(undefined4*)( this + 0x102c ) = 0;
         *(uint*)( this + 0x1034 ) = uVar5;
         *(undefined8*)this = *(undefined8*)( this + 0x1020 );
         *(undefined8*)( this + 8 ) = *(undefined8*)( this + 0x1028 );
         return;
      }

   }

   *(int*)( this + 0xc ) = *(int*)( this + 8 ) + 1;
   return;
}
/* CFF::subr_subsetter_t<cff1_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned short, 2u> >,
   OT::cff1::accelerator_subset_t const, CFF::cff1_cs_interp_env_t, cff1_cs_opset_subr_subset_t,
   14u>::subr_subsetter_t(OT::cff1::accelerator_subset_t const&, hb_subset_plan_t const*) */void CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::subr_subsetter_t(subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u> *this, accelerator_subset_t *param_1, hb_subset_plan_t *param_2) {
   undefined4 *puVar1;
   uint uVar2;
   ulong uVar3;
   void *pvVar4;
   uint uVar5;
   uVar2 = *(uint*)( param_1 + 0x90 );
   *(accelerator_subset_t**)this = param_1;
   *(hb_subset_plan_t**)( this + 8 ) = param_2;
   *(undefined4*)( this + 0x10 ) = 1;
   *(undefined4*)( this + 0x14 ) = 1;
   uVar5 = 0;
   if (-1 < (int)uVar2) {
      uVar5 = uVar2;
   }

   *(undefined8*)( this + 0x18 ) = 0;
   this[0x20] = (subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>)0x1;
   *(undefined4*)( this + 0x24 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i + 48 ) ) = 0;
   }

   this[0x50] = (subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>)0x0;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined8*)( this + 0x60 ) = 0;
   if ((int)uVar2 < 1) {
      LAB_00107544:*(uint*)( this + 0x5c ) = uVar5;
   }
 else {
      if (( (int)uVar2 < 0x38e38e4 ) && ( pvVar4 = malloc((long)(int)uVar5 * 0x48) ),pvVar4 != (void*)0x0) {
         *(uint*)( this + 0x58 ) = uVar5;
         *(void**)( this + 0x60 ) = pvVar4;
         uVar3 = 0;
         do {
            puVar1 = (undefined4*)( *(long*)( this + 0x60 ) + uVar3 * 0x48 );
            *puVar1 = 1;
            puVar1[1] = 1;
            *(undefined8*)( puVar1 + 2 ) = 0;
            *(undefined1*)( puVar1 + 4 ) = 1;
            puVar1[5] = 0;
            puVar1[6] = 0;
            for (int i = 0; i < 4; i++) {
               *(undefined8*)( puVar1 + ( 2*i + 8 ) ) = 0;
            }

            *(undefined1*)( puVar1 + 0x10 ) = 0;
            uVar2 = *(int*)( this + 0x5c ) + 1;
            uVar3 = (ulong)uVar2;
            *(uint*)( this + 0x5c ) = uVar2;
         }
 while ( uVar2 < uVar5 );
         goto LAB_00107544;
      }

      *(undefined4*)( this + 0x58 ) = 0xffffffff;
   }

   *(undefined8*)( this + 0x68 ) = 0;
   uVar2 = *(uint*)( param_1 + 0x90 );
   *(undefined8*)( this + 0x70 ) = 0;
   *(undefined4*)( this + 0x88 ) = 1;
   *(undefined4*)( this + 0x8c ) = 1;
   *(undefined8*)( this + 0x90 ) = 0;
   uVar5 = 0;
   if (-1 < (int)uVar2) {
      uVar5 = uVar2;
   }

   this[0x98] = (subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>)0x1;
   *(undefined2*)( this + 0x9a ) = 0;
   *(undefined8*)( this + 0xb0 ) = 0;
   *(undefined8*)( this + 0xb8 ) = 0;
   *(undefined8*)( this + 0xc0 ) = 0;
   *(undefined8*)( this + 0xd0 ) = 0;
   *(undefined8*)( this + 0xd8 ) = 0;
   *(undefined1(*) [16])( this + 0x9c ) = (undefined1[16])0x0;
   if (0 < (int)uVar2) {
      uVar2 = 0;
      do {
         uVar2 = uVar2 + 8 + ( uVar2 >> 1 );
      }
 while ( uVar2 < uVar5 );
      if (( 0x38e38e3 < uVar2 ) || ( pvVar4 = malloc((ulong)uVar2 * 0x48) ),pvVar4 == (void*)0x0) {
         *(undefined4*)( this + 0xd0 ) = 0xffffffff;
         goto LAB_001075dd;
      }

      *(void**)( this + 0xd8 ) = pvVar4;
      uVar3 = 0;
      *(uint*)( this + 0xd0 ) = uVar2;
      while (true) {
         puVar1 = (undefined4*)( (long)pvVar4 + uVar3 * 0x48 );
         *(undefined1(*) [16])( puVar1 + 4 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( puVar1 + 8 ) = (undefined1[16])0x0;
         *(undefined8*)( puVar1 + 0x10 ) = 0;
         *puVar1 = 1;
         puVar1[1] = 1;
         *(undefined8*)( puVar1 + 2 ) = 0;
         *(undefined1*)( puVar1 + 4 ) = 1;
         *(undefined8*)( puVar1 + 0xc ) = 0;
         *(undefined8*)( puVar1 + 0xe ) = 0;
         *(undefined1(*) [16])( puVar1 + 5 ) = (undefined1[16])0x0;
         uVar2 = *(int*)( this + 0xd4 ) + 1;
         uVar3 = (ulong)uVar2;
         *(uint*)( this + 0xd4 ) = uVar2;
         if (uVar5 <= uVar2) break;
         pvVar4 = *(void**)( this + 0xd8 );
      }
;
   }

   *(uint*)( this + 0xd4 ) = uVar5;
   LAB_001075dd:*(undefined8*)( this + 0xe0 ) = 0;
   for (int i = 0; i < 5; i++) {
      *(undefined8*)( this + ( 8*i + 232 ) ) = 0;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::cff1::accelerator_templ_t<CFF::cff1_private_dict_opset_subset_t,
   CFF::cff1_private_dict_values_base_t<CFF::op_str_t> >::create_glyph_to_sid_map() const */uint * __thiscall
OT::cff1::
accelerator_templ_t<CFF::cff1_private_dict_opset_subset_t,CFF::cff1_private_dict_values_base_t<CFF::op_str_t>>
::create_glyph_to_sid_map
          (accelerator_templ_t<CFF::cff1_private_dict_opset_subset_t,CFF::cff1_private_dict_values_base_t<CFF::op_str_t>>
           *this){
   int iVar1;
   int *piVar2;
   char cVar3;
   uint uVar4;
   char *pcVar5;
   long lVar6;
   undefined8 uVar7;
   uint uVar8;
   uint *puVar9;
   undefined8 *puVar10;
   ulong uVar11;
   void *pvVar12;
   ushort uVar13;
   ulong uVar14;
   int iVar15;
   int iVar16;
   uint uVar17;
   uint uVar18;
   pcVar5 = *(char**)( this + 0x50 );
   if (( pcVar5 == &_hb_NullPool ) || ( puVar9 = (uint*)malloc(0x10) ),puVar9 == (uint*)0x0) {
      return (uint*)0x0;
   }

   for (int i = 0; i < 3; i++) {
      puVar9[( i + 1 )] = 0;
   }

   puVar10 = (undefined8*)malloc(0x40);
   uVar7 = _LC11;
   if (puVar10 == (undefined8*)0x0) {
      __hb_CrapPool = __hb_NullPool;
      *puVar9 = 0xffffffff;
   }
 else {
      *(undefined8**)( puVar9 + 2 ) = puVar10;
      puVar9[0] = 8;
      puVar9[1] = 1;
      *puVar10 = uVar7;
   }

   cVar3 = *pcVar5;
   uVar4 = *(uint*)( this + 0x128 );
   if (cVar3 != '\x01') {
      if (cVar3 != '\x02') {
         if (cVar3 != '\0') {
            return puVar9;
         }

         uVar8 = *puVar9;
         if ((int)uVar8 < 0) goto LAB_001077b2;
         uVar17 = 0;
         if (-1 < (int)uVar4) {
            uVar17 = uVar4;
         }

         uVar18 = uVar8;
         if (uVar8 < uVar17) {
            do {
               uVar18 = uVar18 + 8 + ( uVar18 >> 1 );
            }
 while ( uVar18 < uVar17 );
            if (0x1fffffff < uVar18) {
               LAB_001078a2:*puVar9 = ~uVar8;
               goto LAB_001077b2;
            }

            pvVar12 = realloc(*(void**)( puVar9 + 2 ), (ulong)uVar18 << 3);
            if (pvVar12 == (void*)0x0) {
               uVar8 = *puVar9;
               if (uVar8 < uVar18) goto LAB_001078a2;
            }
 else {
               *(void**)( puVar9 + 2 ) = pvVar12;
               *puVar9 = uVar18;
            }

         }

         puVar9[1] = uVar17;
         LAB_001077b2:if (uVar4 < 2) {
            return puVar9;
         }

         lVar6 = *(long*)( puVar9 + 2 );
         uVar11 = 1;
         do {
            uVar13 = *(ushort*)( pcVar5 + uVar11 * 2 + -1 );
            *(int*)( lVar6 + 4 + uVar11 * 8 ) = (int)uVar11;
            *(uint*)( lVar6 + uVar11 * 8 ) = ( uint )(ushort)(uVar13 << 8 | uVar13 >> 8);
            uVar11 = uVar11 + 1;
         }
 while ( uVar11 != uVar4 );
         return puVar9;
      }

      uVar8 = *puVar9;
      if ((int)uVar8 < 0) goto LAB_00107820;
      uVar17 = 0;
      if (-1 < (int)uVar4) {
         uVar17 = uVar4;
      }

      uVar18 = uVar8;
      if (uVar8 < uVar17) {
         do {
            uVar18 = uVar18 + 8 + ( uVar18 >> 1 );
         }
 while ( uVar18 < uVar17 );
         if (0x1fffffff < uVar18) {
            LAB_001078c7:*puVar9 = ~uVar8;
            goto LAB_00107820;
         }

         pvVar12 = realloc(*(void**)( puVar9 + 2 ), (ulong)uVar18 << 3);
         if (pvVar12 == (void*)0x0) {
            uVar8 = *puVar9;
            if (uVar8 < uVar18) goto LAB_001078c7;
         }
 else {
            *(void**)( puVar9 + 2 ) = pvVar12;
            *puVar9 = uVar18;
         }

      }

      puVar9[1] = uVar17;
      LAB_00107820:if (uVar4 < 2) {
         return puVar9;
      }

      lVar6 = *(long*)( puVar9 + 2 );
      uVar11 = 0;
      uVar8 = 1;
      while (true) {
         uVar13 = *(ushort*)( pcVar5 + uVar11 * 4 + 3 ) << 8 | *(ushort*)( pcVar5 + uVar11 * 4 + 3 ) >> 8;
         iVar16 = uVar13 + uVar8;
         uVar17 = uVar13 + 1 + uVar8;
         iVar15 = ( ushort )(*(ushort*)( pcVar5 + uVar11 * 4 + 1 ) << 8 | *(ushort*)( pcVar5 + uVar11 * 4 + 1 ) >> 8) - uVar8;
         do {
            uVar14 = (ulong)uVar8;
            iVar1 = iVar15 + uVar8;
            uVar8 = uVar8 + 1;
            piVar2 = (int*)( lVar6 + uVar14 * 8 );
            *piVar2 = iVar1;
            piVar2[1] = iVar16;
         }
 while ( uVar8 != uVar17 );
         if (uVar4 <= uVar8) break;
         uVar11 = ( ulong )((int)uVar11 + 1);
      }
;
      return puVar9;
   }

   uVar8 = *puVar9;
   if ((int)uVar8 < 0) goto LAB_001078ec;
   uVar17 = 0;
   if (-1 < (int)uVar4) {
      uVar17 = uVar4;
   }

   uVar18 = uVar8;
   if (uVar8 < uVar17) {
      do {
         uVar18 = ( uVar18 >> 1 ) + 8 + uVar18;
      }
 while ( uVar18 < uVar17 );
      if (0x1fffffff < uVar18) {
         LAB_0010796e:*puVar9 = ~uVar8;
         goto LAB_001078ec;
      }

      pvVar12 = realloc(*(void**)( puVar9 + 2 ), (ulong)uVar18 << 3);
      if (pvVar12 == (void*)0x0) {
         uVar8 = *puVar9;
         if (uVar8 < uVar18) goto LAB_0010796e;
      }
 else {
         *(void**)( puVar9 + 2 ) = pvVar12;
         *puVar9 = uVar18;
      }

   }

   puVar9[1] = uVar17;
   LAB_001078ec:if (1 < uVar4) {
      lVar6 = *(long*)( puVar9 + 2 );
      uVar11 = 0;
      uVar8 = 1;
      while (true) {
         iVar16 = (byte)pcVar5[uVar11 * 3 + 3] + uVar8;
         uVar17 = (byte)pcVar5[uVar11 * 3 + 3] + 1 + uVar8;
         iVar15 = ( ushort )(*(ushort*)( pcVar5 + uVar11 * 3 + 1 ) << 8 | *(ushort*)( pcVar5 + uVar11 * 3 + 1 ) >> 8) - uVar8;
         do {
            uVar14 = (ulong)uVar8;
            iVar1 = iVar15 + uVar8;
            uVar8 = uVar8 + 1;
            piVar2 = (int*)( lVar6 + uVar14 * 8 );
            *piVar2 = iVar1;
            piVar2[1] = iVar16;
         }
 while ( uVar8 != uVar17 );
         if (uVar4 <= uVar8) break;
         uVar11 = ( ulong )((int)uVar11 + 1);
      }
;
   }

   return puVar9;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::cff1_subset_plan::plan_subset_charset(OT::cff1::accelerator_subset_t const&,
   hb_subset_plan_t*) */undefined8 OT::cff1_subset_plan::plan_subset_charset(cff1_subset_plan *this, accelerator_subset_t *param_1, hb_subset_plan_t *param_2) {
   long *plVar1;
   int iVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   bool bVar6;
   cff1_subset_plan cVar7;
   uint uVar8;
   uint uVar9;
   ulong uVar10;
   undefined8 uVar11;
   uint *puVar12;
   void *pvVar13;
   int *__ptr;
   uint uVar14;
   uint *puVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   uint uVar19;
   int iVar20;
   long in_FS_OFFSET;
   bool bVar21;
   uint *local_90;
   uint local_7c;
   uVar18 = *(uint*)( this + 0x170 );
   lVar4 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((int)uVar18 < 0) {
      LAB_00107cb2:param_2[0x10] = (hb_subset_plan_t)0x0;
      uVar11 = 0;
      goto LAB_00107c68;
   }

   uVar8 = *(uint*)( param_2 + 0x58 );
   *(undefined4*)( this + 0x174 ) = 0;
   uVar16 = *(uint*)( param_1 + 300 );
   if (uVar8 <= *(uint*)( param_1 + 300 )) {
      uVar16 = uVar8;
   }

   uVar17 = uVar18;
   if (uVar18 < uVar16) {
      do {
         uVar17 = ( uVar17 >> 1 ) + 8 + uVar17;
      }
 while ( uVar17 < uVar16 );
      if (0x1fffffff < uVar17) {
         *(uint*)( this + 0x170 ) = ~uVar18;
         goto LAB_00107cb2;
      }

      pvVar13 = realloc(*(void**)( this + 0x178 ), (ulong)uVar17 << 3);
      if (pvVar13 == (void*)0x0) {
         if (*(uint*)( this + 0x170 ) < uVar17) {
            *(uint*)( this + 0x170 ) = ~*(uint *)(this + 0x170);
            goto LAB_00107cb2;
         }

      }
 else {
         *(void**)( this + 0x178 ) = pvVar13;
         *(uint*)( this + 0x170 ) = uVar17;
      }

   }

   if (*(long*)( param_1 + 0x130 ) == 0) {
      LAB_00107cc0:bVar6 = false;
      bVar21 = false;
      __ptr = (int*)0x0;
   }
 else {
      __ptr = *(int**)( *(long*)( param_1 + 0x130 ) + 0x30 );
      if (__ptr == (int*)0x0) {
         if (*(long*)( param_1 + 0x130 ) == 0) goto LAB_00107cc0;
         __ptr = (int*)cff1::accelerator_templ_t<CFF::cff1_private_dict_opset_subset_t,CFF::cff1_private_dict_values_base_t<CFF::op_str_t>>::create_glyph_to_sid_map((accelerator_templ_t<CFF::cff1_private_dict_opset_subset_t,CFF::cff1_private_dict_values_base_t<CFF::op_str_t>>*)param_1);
         bVar6 = true;
         bVar21 = __ptr != (int*)0x0;
      }
 else {
         bVar6 = false;
         bVar21 = true;
      }

   }

   iVar20 = *(int*)( param_2 + 0xc4 );
   puVar12 = *(uint**)( param_2 + 200 );
   local_90 = puVar12;
   if (iVar20 == 0) {
      puVar12 = (uint*)&_hb_NullPool;
      uVar18 = __hb_NullPool;
   }
 else {
      uVar18 = *puVar12;
      if (uVar18 == 0) {
         local_90 = puVar12 + 2;
         iVar20 = iVar20 + -1;
         if (iVar20 == 0) {
            puVar12 = (uint*)&_hb_NullPool;
            uVar18 = __hb_NullPool;
         }
 else {
            uVar18 = puVar12[2];
            puVar12 = local_90;
         }

      }

   }

   iVar2 = *(int*)( param_1 + 0xdc );
   local_7c = puVar12[1];
   if (iVar2 == -1) {
      hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc((hb_hashmap_t<unsigned_int,unsigned_int,true>*)( this + 400 ), uVar8);
      hb_vector_t<unsigned_int,false>::alloc((hb_vector_t<unsigned_int,false>*)( this + 0x1c0 ), uVar8, true);
   }

   uVar16 = 1;
   uVar17 = 0xfffffffe;
   if (1 < uVar8) {
      do {
         if (uVar18 == uVar16) {
            puVar12 = (uint*)&_hb_NullPool;
            if (iVar20 != 0) {
               local_90 = local_90 + 2;
               iVar20 = iVar20 + -1;
               if (iVar20 != 0) {
                  puVar12 = local_90;
               }

            }

            uVar18 = *puVar12;
            uVar14 = local_7c;
            local_7c = puVar12[1];
            if (__ptr != (int*)0x0) goto LAB_00107b44;
            LAB_00107d06:uVar9 = cff1::accelerator_templ_t<CFF::cff1_private_dict_opset_subset_t,CFF::cff1_private_dict_values_base_t<CFF::op_str_t>>::glyph_to_sid(( uint ) * (undefined8*)( param_1 + 0x50 ), (code_pair_t*)( ulong ) * (uint*)( param_1 + 0x128 ));
            if (iVar2 != -1) goto LAB_00107b5a;
            LAB_00107d60:uVar17 = uVar17 + 1;
            uVar9 = remap_sid_t::add((remap_sid_t*)( this + 0x188 ), uVar9);
            if (uVar9 != uVar17) goto LAB_00107b5e;
         }
 else {
            uVar14 = uVar16;
            if (__ptr == (int*)0x0) goto LAB_00107d06;
            LAB_00107b44:uVar9 = *(uint*)( *(long*)( __ptr + 2 ) + (ulong)uVar14 * 8 );
            if (iVar2 == -1) goto LAB_00107d60;
            LAB_00107b5a:uVar17 = uVar17 + 1;
            if (uVar9 != uVar17) {
               LAB_00107b5e:uVar17 = uVar9;
               uVar9 = *(uint*)( this + 0x174 );
               uVar10 = (ulong)uVar9;
               uVar3 = *(uint*)( this + 0x170 );
               uVar19 = uVar9 + 1;
               if ((int)uVar9 < (int)uVar3) {
                  LAB_00107b79:pvVar13 = *(void**)( this + 0x178 );
               }
 else {
                  if ((int)uVar3 < 0) {
                     LAB_00107fc3:__hb_CrapPool = CONCAT44(_DAT_0011100c, __hb_NullPool);
                     goto LAB_00107b94;
                  }

                  uVar9 = uVar3;
                  if (uVar19 <= uVar3) goto LAB_00107b79;
                  do {
                     uVar9 = uVar9 + 8 + ( uVar9 >> 1 );
                  }
 while ( uVar9 < uVar19 );
                  if (0x1fffffff < uVar9) {
                     *(uint*)( this + 0x170 ) = ~uVar3;
                     goto LAB_00107fc3;
                  }

                  pvVar13 = realloc(*(void**)( this + 0x178 ), (ulong)uVar9 << 3);
                  if (pvVar13 == (void*)0x0) {
                     if (*(uint*)( this + 0x170 ) < uVar9) {
                        *(uint*)( this + 0x170 ) = ~*(uint *)(this + 0x170);
                        goto LAB_00107fc3;
                     }

                     uVar10 = ( ulong ) * (uint*)( this + 0x174 );
                     pvVar13 = *(void**)( this + 0x178 );
                     uVar19 = *(uint*)( this + 0x174 ) + 1;
                  }
 else {
                     *(void**)( this + 0x178 ) = pvVar13;
                     uVar10 = ( ulong ) * (uint*)( this + 0x174 );
                     *(uint*)( this + 0x170 ) = uVar9;
                     uVar19 = *(uint*)( this + 0x174 ) + 1;
                  }

               }

               puVar12 = (uint*)( (long)pvVar13 + uVar10 * 8 );
               *(uint*)( this + 0x174 ) = uVar19;
               *puVar12 = uVar17;
               puVar12[1] = uVar16;
            }

            LAB_00107b94:if (( uVar14 == uVar16 ) && ( (bool)( iVar2 != -1 & bVar21 ) )) {
               uVar9 = *(uint*)( *(long*)( __ptr + 2 ) + 4 + (ulong)uVar14 * 8 );
               uVar16 = uVar18 - 1;
               if (uVar9 < uVar18 - 1) {
                  uVar16 = uVar9;
               }

               uVar17 = uVar17 + ( uVar16 - uVar14 );
            }

         }

         uVar16 = uVar16 + 1;
      }
 while ( uVar16 < uVar8 );
   }

   if (bVar6) {
      if (( *(long*)( param_2 + 0xad0 ) != 0 ) || ( *(long*)( param_1 + 0x130 ) == 0 )) {
         plVar1 = (long*)( *(long*)( param_1 + 0x130 ) + 0x30 );
         LOCK();
         bVar21 = *plVar1 == 0;
         if (bVar21) {
            *plVar1 = (long)__ptr;
         }

         UNLOCK();
         if (bVar21) goto LAB_00107bf6;
      }

      if (*__ptr != 0) {
         free(*(void**)( __ptr + 2 ));
      }

      free(__ptr);
   }

   LAB_00107bf6:iVar20 = *(int*)( this + 0x174 );
   lVar5 = *(long*)( this + 0x178 );
   if (iVar20 == 0) {
      LAB_00107ea0:cVar7 = (cff1_subset_plan)0x1;
   }
 else {
      uVar18 = 0;
      puVar12 = (uint*)( lVar5 + 4 + ( ulong )(iVar20 - 1) * 8 );
      do {
         uVar16 = *puVar12;
         puVar15 = puVar12 + -2;
         uVar8 = ( uVar8 - uVar16 ) - 1;
         *puVar12 = uVar8;
         uVar18 = uVar18 | uVar8;
         puVar12 = puVar15;
         uVar8 = uVar16;
      }
 while ( (uint*)( lVar5 + -4 ) != puVar15 );
      uVar8 = *(int*)( param_2 + 0x58 ) * 2 - 2;
      if (uVar18 < 0x100) {
         cVar7 = (cff1_subset_plan)0x0;
         if (( uint )(iVar20 * 3) <= uVar8) goto LAB_00107ea0;
      }
 else {
         cVar7 = ( cff1_subset_plan )(( ( uint )(iVar20 << 2) <= uVar8 ) * '\x02');
      }

   }

   this[0x168] = cVar7;
   uVar11 = 1;
   LAB_00107c68:if (lVar4 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar11;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_hashmap_t<hb_serialize_context_t::object_t const*, unsigned int, false>::alloc(unsigned int)
    */hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc(hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> *this, uint param_1) {
   byte bVar1;
   int iVar2;
   long *__ptr;
   long lVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   char cVar6;
   int iVar7;
   void *pvVar8;
   int iVar9;
   undefined4 uVar10;
   ulong uVar11;
   uint uVar12;
   ulong uVar13;
   long *plVar14;
   uint uVar15;
   int iVar16;
   uint uVar17;
   hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> hVar18;
   uint uVar19;
   size_t __size;
   short sVar20;
   ulong uVar21;
   long in_FS_OFFSET;
   long *local_118;
   undefined8 uStack_c8;
   undefined8 uStack_c0;
   undefined8 uStack_b8;
   undefined8 uStack_b0;
   undefined8 uStack_a8;
   undefined8 uStack_a0;
   undefined8 uStack_98;
   undefined8 uStack_90;
   undefined8 uStack_88;
   undefined8 uStack_80;
   undefined8 uStack_78;
   undefined8 uStack_70;
   undefined8 uStack_68;
   undefined8 uStack_60;
   undefined8 uStack_58;
   undefined8 uStack_50;
   long local_40;
   hVar18 = this[0x10];
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (hVar18 == (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0) {
      LAB_00108507:hVar18 = (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0;
   }
 else {
      if (param_1 == 0) {
         param_1 = *(uint*)( this + 0x14 );
      }
 else {
         if (( param_1 >> 1 ) + param_1 < *(uint*)( this + 0x1c )) goto LAB_0010847b;
         if (param_1 < *(uint*)( this + 0x14 )) {
            param_1 = *(uint*)( this + 0x14 );
         }

      }

      uVar12 = param_1 * 2 + 8;
      uVar13 = (ulong)uVar12;
      if (uVar12 == 0) {
         pvVar8 = malloc(0x10);
         if (pvVar8 == (void*)0x0) goto LAB_00108502;
         iVar16 = 0;
         sVar20 = 0;
         iVar9 = 0x10;
         __size = 0x10;
         LAB_001080f6:pvVar8 = (void*)__memset_chk(pvVar8, 0, iVar9, __size);
      }
 else {
         iVar9 = 0x1f;
         if (uVar12 != 0) {
            for (; uVar12 >> iVar9 == 0; iVar9 = iVar9 + -1) {}
         }

         uVar12 = iVar9 + 1;
         uVar13 = (ulong)uVar12;
         uVar15 = 1 << ( (byte)uVar12 & 0x1f );
         __size = (ulong)uVar15 << 4;
         pvVar8 = malloc(__size);
         if (pvVar8 == (void*)0x0) {
            LAB_00108502:this[0x10] = (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0;
            goto LAB_00108507;
         }

         sVar20 = (short)uVar12 * 2;
         iVar16 = uVar15 - 1;
         iVar9 = 0x10 << ( (byte)uVar12 & 0x1f );
         if (iVar9 != 0) goto LAB_001080f6;
      }

      uStack_c0 = _UNK_0010f8e8;
      uStack_c8 = __LC14;
      iVar9 = *(int*)( this + 0x1c );
      *(undefined8*)( this + 0x14 ) = 0;
      *(int*)( this + 0x1c ) = iVar16;
      __ptr = *(long**)( this + 0x28 );
      uVar12 = ( iVar9 + 1 ) - ( uint )(iVar9 == 0);
      uStack_b8 = __LC1;
      uStack_b0 = _UNK_0010f8f8;
      uStack_a8 = __LC2;
      uStack_a0 = _UNK_0010f908;
      uStack_98 = __LC3;
      uStack_90 = _UNK_0010f918;
      uStack_88 = __LC4;
      uStack_80 = _UNK_0010f928;
      uStack_78 = __LC5;
      uStack_70 = _UNK_0010f938;
      uStack_68 = __LC6;
      uStack_60 = _UNK_0010f948;
      uStack_58 = __LC7;
      uStack_50 = _UNK_0010f958;
      if ((int)uVar13 == 0x20) {
         uVar10 = 0x7fffffff;
      }
 else {
         uVar10 = *(undefined4*)( (long)&uStack_c8 + uVar13 * 4 );
      }

      *(undefined4*)( this + 0x20 ) = uVar10;
      *(short*)( this + 0x12 ) = sVar20;
      *(void**)( this + 0x28 ) = pvVar8;
      if (uVar12 != 0) {
         local_118 = __ptr;
         do {
            if (( ( *(byte*)( local_118 + 1 ) & 1 ) != 0 ) && ( uVar15 = *(uint*)( local_118 + 1 ) >> 2 ),this[0x10] != (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0) {
               uVar17 = *(uint*)( this + 0x18 );
               if (*(uint*)( this + 0x1c ) <= ( uVar17 >> 1 ) + uVar17) {
                  cVar6 = alloc(this, 0);
                  if (cVar6 == '\0') goto LAB_001081e0;
                  uVar17 = *(uint*)( this + 0x18 );
               }

               lVar3 = *(long*)( this + 0x28 );
               iVar9 = *(int*)( this + 0x14 );
               uVar13 = (ulong)uVar15 % ( ulong ) * (uint*)( this + 0x20 );
               puVar4 = (undefined8*)*local_118;
               plVar14 = (long*)( uVar13 * 0x10 + lVar3 );
               bVar1 = *(byte*)( plVar14 + 1 );
               if (( bVar1 & 2 ) == 0) {
                  *plVar14 = (long)puVar4;
                  *(undefined4*)( (long)plVar14 + 0xc ) = *(undefined4*)( (long)local_118 + 0xc );
                  *(uint*)( plVar14 + 1 ) = uVar15 * 4 + 3;
                  *(uint*)( this + 0x18 ) = uVar17 + 1;
                  *(int*)( this + 0x14 ) = iVar9 + 1;
               }
 else {
                  uVar19 = 0;
                  uVar21 = 0xffffffff;
                  do {
                     if (uVar15 == *(uint*)( plVar14 + 1 ) >> 2) {
                        puVar5 = (undefined8*)*plVar14;
                        uVar11 = puVar5[1] - (long)*puVar5;
                        if (uVar11 == puVar4[1] - (long)*puVar4) {
                           iVar16 = *(int*)( (long)puVar5 + 0x14 );
                           iVar2 = *(int*)( (long)puVar4 + 0x14 );
                           if (( iVar16 == iVar2 ) && ( ( (int)uVar11 == 0 || ( iVar7 = memcmp((void*)*puVar5, (void*)*puVar4, uVar11 & 0xffffffff) ),iVar7 == 0 ) )) {
                              if (( iVar2 * 0xc == iVar16 * 0xc ) && ( ( ( iVar2 * 3 & 0x3fffffffU ) == 0 || ( iVar16 = memcmp((void*)puVar5[3], (void*)puVar4[3], ( ulong )(uint)(iVar2 * 0xc)) ),iVar16 == 0 ) )) {
                                 if ((int)uVar21 == -1) goto LAB_001083a0;
                                 goto LAB_00108396;
                              }

                           }

                        }

                     }

                     if (( (int)uVar21 == -1 ) && ( ( bVar1 & 1 ) == 0 )) {
                        uVar21 = uVar13;
                     }

                     uVar19 = uVar19 + 1;
                     uVar13 = ( ulong )((int)uVar13 + uVar19 & *(uint*)( this + 0x1c ));
                     plVar14 = (long*)( uVar13 * 0x10 + lVar3 );
                     bVar1 = *(byte*)( plVar14 + 1 );
                  }
 while ( ( bVar1 & 2 ) != 0 );
                  if ((int)uVar21 == -1) {
                     LAB_00108458:uVar17 = uVar17 + 1;
                  }
 else {
                     LAB_00108396:plVar14 = (long*)( uVar21 * 0x10 + lVar3 );
                     LAB_001083a0:if (( *(byte*)( plVar14 + 1 ) & 2 ) == 0) goto LAB_00108458;
                     iVar9 = iVar9 - ( *(byte*)( plVar14 + 1 ) & 1 );
                     *(uint*)( this + 0x18 ) = uVar17 - 1;
                     *(int*)( this + 0x14 ) = iVar9;
                  }

                  *plVar14 = (long)puVar4;
                  *(undefined4*)( (long)plVar14 + 0xc ) = *(undefined4*)( (long)local_118 + 0xc );
                  *(uint*)( plVar14 + 1 ) = uVar15 * 4 + 3;
                  *(int*)( this + 0x14 ) = iVar9 + 1;
                  *(uint*)( this + 0x18 ) = uVar17;
                  if (( *(ushort*)( this + 0x12 ) < uVar19 ) && ( *(uint*)( this + 0x1c ) < uVar17 * 8 )) {
                     alloc(this, *(uint*)( this + 0x1c ) - 8);
                  }

               }

            }

            LAB_001081e0:local_118 = local_118 + 2;
         }
 while ( __ptr + (ulong)uVar12 * 2 != local_118 );
      }

      free(__ptr);
   }

   LAB_0010847b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return hVar18;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_serialize_context_t::pop_pack(bool) */uint hb_serialize_context_t::pop_pack(hb_serialize_context_t *this, bool param_1) {
   undefined8 *puVar1;
   byte bVar2;
   long *plVar3;
   void *pvVar4;
   undefined8 *puVar5;
   char cVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   long lVar10;
   undefined8 uVar11;
   void *pvVar12;
   uint uVar13;
   ulong uVar14;
   uint uVar15;
   uint uVar16;
   undefined8 *puVar17;
   int iVar18;
   long *plVar19;
   ulong uVar20;
   void *pvVar21;
   uint *puVar22;
   uint uVar23;
   hb_serialize_context_t *phVar24;
   ulong uVar25;
   uint local_88;
   plVar3 = *(long**)( this + 0x48 );
   if (plVar3 == (long*)0x0) {
      return 0;
   }

   uVar16 = *(uint*)( this + 0x2c );
   if (uVar16 != 0) {
      if (0x10 < uVar16) {
         return 0;
      }

      if (( 0x10104UL >> ( (ulong)uVar16 & 0x3f ) & 1 ) == 0) {
         return 0;
      }

   }

   pvVar12 = (void*)*plVar3;
   *(long*)( this + 0x48 ) = plVar3[6];
   lVar10 = *(long*)( this + 8 );
   pvVar4 = *(void**)( this + 0x20 );
   plVar3[6] = 0;
   plVar3[1] = lVar10;
   uVar20 = lVar10 - (long)pvVar12;
   pvVar21 = pvVar4;
   if (pvVar4 == (void*)0x0) {
      pvVar21 = pvVar12;
   }

   *(undefined8*)( this + 0x20 ) = 0;
   *(void**)( this + 8 ) = pvVar21;
   if ((int)lVar10 == (int)pvVar12) {
      return 0;
   }

   if (param_1) {
      uVar25 = 0x80;
      if ((long)uVar20 < 0x81) {
         uVar25 = uVar20;
      }

      phVar24 = this;
      uVar25 = fasthash64(pvVar12, uVar25 & 0xffffffff, (ulong)pvVar21);
      pvVar21 = (void*)plVar3[3];
      iVar18 = *(int*)( (long)plVar3 + 0x14 );
      uVar23 = iVar18 * 0xc;
      uVar11 = fasthash64(pvVar21, (ulong)uVar23, uVar25 >> 0x20);
      local_88 = (int)uVar11 - (int)( (ulong)uVar11 >> 0x20 ) ^ (int)uVar25 - (int)( uVar25 >> 0x20 );
      lVar10 = *(long*)( phVar24 + 0x88 );
      uVar16 = *(uint*)( phVar24 + 0x7c );
      puVar22 = (uint*)&_hb_NullPool;
      if (lVar10 == 0) {
         LAB_00108872:uVar13 = *puVar22;
      }
 else {
         uVar25 = ( ulong )(local_88 & 0x3fffffff) % ( ulong ) * (uint*)( phVar24 + 0x80 );
         plVar19 = (long*)( uVar25 * 0x10 + lVar10 );
         bVar2 = *(byte*)( plVar19 + 1 );
         if (( bVar2 & 2 ) == 0) goto LAB_00108872;
         iVar9 = 0;
         do {
            if (( local_88 & 0x3fffffff ) == *(uint*)( plVar19 + 1 ) >> 2) {
               puVar5 = (undefined8*)*plVar19;
               if (( ( ( ( uVar20 == puVar5[1] - (long)*puVar5 ) && ( iVar7 = *(int*)( (long)puVar5 + 0x14 ) ),iVar18 == iVar7 ) ) && ( ( (int)uVar20 == 0 || ( iVar8 = memcmp((void*)*puVar5, pvVar12, uVar20 & 0xffffffff) ),iVar8 == 0 ) ) )) {
                  puVar22 = (uint*)&_hb_NullPool;
                  if (( bVar2 & 1 ) != 0) {
                     puVar22 = (uint*)( (long)plVar19 + 0xc );
                  }

                  goto LAB_00108872;
               }

            }

            iVar9 = iVar9 + 1;
            uVar25 = ( ulong )((int)uVar25 + iVar9 & uVar16);
            plVar19 = (long*)( uVar25 * 0x10 + lVar10 );
            bVar2 = *(byte*)( plVar19 + 1 );
            uVar13 = __hb_NullPool;
         }
 while ( ( bVar2 & 2 ) != 0 );
      }

      if (uVar13 != 0) {
         if (uVar13 < *(uint*)( this + 0x54 )) {
            plVar19 = (long*)( *(long*)( this + 0x58 ) + (ulong)uVar13 * 8 );
         }
 else {
            __hb_CrapPool = CONCAT44(_DAT_0011100c, __hb_NullPool);
            plVar19 = (long*)&_hb_CrapPool;
         }

         lVar10 = *plVar19;
         puVar17 = (undefined8*)plVar3[5];
         puVar5 = (undefined8*)( (long)puVar17 + ( ulong ) * (uint*)( (long)plVar3 + 0x24 ) * 0xc );
         do {
            if (puVar17 == puVar5) {
               if ((int)plVar3[2] != 0) {
                  free((void*)plVar3[3]);
               }

               plVar3[2] = 0;
               plVar3[3] = 0;
               if ((int)plVar3[4] != 0) {
                  free((void*)plVar3[5]);
               }

               plVar3[4] = 0;
               plVar3[5] = 0;
               return uVar13;
            }

            uVar16 = *(uint*)( lVar10 + 0x24 );
            uVar20 = (ulong)uVar16;
            uVar23 = *(uint*)( lVar10 + 0x20 );
            uVar15 = uVar16 + 1;
            if ((int)uVar16 < (int)uVar23) {
               LAB_001088d1:pvVar12 = *(void**)( lVar10 + 0x28 );
               LAB_001088d5:*(uint*)( lVar10 + 0x24 ) = uVar15;
               puVar1 = (undefined8*)( (long)pvVar12 + uVar20 * 0xc );
               *puVar1 = *puVar17;
               *(undefined4*)( puVar1 + 1 ) = *(undefined4*)( puVar17 + 1 );
            }
 else {
               if (-1 < (int)uVar23) {
                  uVar16 = uVar23;
                  if (uVar15 <= uVar23) goto LAB_001088d1;
                  do {
                     uVar16 = ( uVar16 >> 1 ) + 8 + uVar16;
                  }
 while ( uVar16 < uVar15 );
                  if (0x15555555 < uVar16) {
                     *(uint*)( lVar10 + 0x20 ) = ~uVar23;
                     goto LAB_00108e55;
                  }

                  pvVar12 = realloc(*(void**)( lVar10 + 0x28 ), (ulong)uVar16 * 0xc);
                  if (pvVar12 == (void*)0x0) {
                     if (*(uint*)( lVar10 + 0x20 ) < uVar16) {
                        *(uint*)( lVar10 + 0x20 ) = ~*(uint *)(lVar10 + 0x20);
                        goto LAB_00108e55;
                     }

                     uVar20 = ( ulong ) * (uint*)( lVar10 + 0x24 );
                     pvVar12 = *(void**)( lVar10 + 0x28 );
                     uVar15 = *(uint*)( lVar10 + 0x24 ) + 1;
                  }
 else {
                     *(void**)( lVar10 + 0x28 ) = pvVar12;
                     uVar20 = ( ulong ) * (uint*)( lVar10 + 0x24 );
                     *(uint*)( lVar10 + 0x20 ) = uVar16;
                     uVar15 = *(uint*)( lVar10 + 0x24 ) + 1;
                  }

                  goto LAB_001088d5;
               }

               LAB_00108e55:__hb_CrapPool = CONCAT44(_DAT_0011100c, __hb_NullPool);
               _memcpy = _lookup_expert_subset_charset_for_sid;
            }

            puVar17 = (undefined8*)( (long)puVar17 + 0xc );
         }
 while ( true );
      }

   }
 else {
      local_88 = 0;
   }

   uVar20 = uVar20 & 0xffffffff;
   lVar10 = *(long*)( this + 0x10 );
   pvVar21 = (void*)( lVar10 - uVar20 );
   *(void**)( this + 0x10 ) = pvVar21;
   if (pvVar4 == (void*)0x0) {
      memmove(pvVar21, pvVar12, uVar20);
      pvVar21 = *(void**)( this + 0x10 );
      lVar10 = (long)pvVar21 + uVar20;
   }

   plVar3[1] = lVar10;
   *plVar3 = (long)pvVar21;
   uVar16 = *(uint*)( this + 0x54 );
   uVar20 = (ulong)uVar16;
   uVar23 = *(uint*)( this + 0x50 );
   uVar13 = uVar16 + 1;
   if ((int)uVar23 <= (int)uVar16) {
      if (-1 < (int)uVar23) {
         uVar16 = uVar23;
         if (uVar13 <= uVar23) goto LAB_00108626;
         do {
            uVar16 = ( uVar16 >> 1 ) + 8 + uVar16;
         }
 while ( uVar16 < uVar13 );
         if (0x1fffffff < uVar16) {
            LAB_00108e74:__hb_CrapPool = CONCAT44(_DAT_0011100c, __hb_NullPool);
            iVar18 = *(int*)( this + 0x2c );
            *(uint*)( this + 0x50 ) = ~uVar23;
            goto joined_r0x00108e90;
         }

         pvVar12 = realloc(*(void**)( this + 0x58 ), (ulong)uVar16 << 3);
         if (pvVar12 == (void*)0x0) {
            uVar23 = *(uint*)( this + 0x50 );
            if (uVar23 < uVar16) goto LAB_00108e74;
            pvVar12 = *(void**)( this + 0x58 );
            uVar20 = ( ulong ) * (uint*)( this + 0x54 );
            uVar13 = *(uint*)( this + 0x54 ) + 1;
         }
 else {
            *(void**)( this + 0x58 ) = pvVar12;
            *(uint*)( this + 0x50 ) = uVar16;
            uVar20 = ( ulong ) * (uint*)( this + 0x54 );
            uVar13 = *(uint*)( this + 0x54 ) + 1;
            uVar23 = uVar16;
         }

         goto LAB_0010862f;
      }

      __hb_CrapPool = CONCAT44(_DAT_0011100c, __hb_NullPool);
      iVar18 = *(int*)( this + 0x2c );
      joined_r0x00108e90:if (iVar18 != 0) goto LAB_00108648;
      LAB_001089b0:*(undefined4*)( this + 0x2c ) = 1;
      LAB_00108648:if ((int)plVar3[2] != 0) {
         free((void*)plVar3[3]);
      }

      plVar3[2] = 0;
      plVar3[3] = 0;
      if ((int)plVar3[4] != 0) {
         free((void*)plVar3[5]);
      }

      plVar3[4] = 0;
      plVar3[5] = 0;
      return 0;
   }

   LAB_00108626:pvVar12 = *(void**)( this + 0x58 );
   LAB_0010862f:iVar18 = *(int*)( this + 0x2c );
   *(uint*)( this + 0x54 ) = uVar13;
   *(long**)( (long)pvVar12 + uVar20 * 8 ) = plVar3;
   if (iVar18 != 0) goto LAB_00108648;
   if ((int)uVar23 < 0) goto LAB_001089b0;
   uVar16 = *(int*)( this + 0x54 ) - 1;
   iVar18 = 0;
   if (param_1) {
      if (this[0x70] == (hb_serialize_context_t)0x0) goto LAB_0010896d;
      uVar23 = *(uint*)( this + 0x78 );
      if (( uVar23 >> 1 ) + uVar23 < *(uint*)( this + 0x7c )) {
         LAB_001089f4:lVar10 = *(long*)( this + 0x88 );
         iVar18 = *(int*)( this + 0x74 );
         uVar20 = ( ulong )(local_88 & 0x3fffffff) % ( ulong ) * (uint*)( this + 0x80 );
         plVar19 = (long*)( lVar10 + uVar20 * 0x10 );
         bVar2 = *(byte*)( plVar19 + 1 );
         if (( bVar2 & 2 ) == 0) {
            *plVar19 = (long)plVar3;
            *(uint*)( (long)plVar19 + 0xc ) = uVar16;
            *(uint*)( plVar19 + 1 ) = local_88 * 4 + 3;
            *(uint*)( this + 0x78 ) = uVar23 + 1;
            *(int*)( this + 0x74 ) = iVar18 + 1;
         }
 else {
            uVar25 = 0xffffffff;
            uVar13 = 0;
            do {
               if (( local_88 & 0x3fffffff ) == *(uint*)( plVar19 + 1 ) >> 2) {
                  puVar5 = (undefined8*)*plVar19;
                  uVar14 = puVar5[1] - (long)*puVar5;
                  if (uVar14 == plVar3[1] - *plVar3) {
                     iVar9 = *(int*)( (long)puVar5 + 0x14 );
                     iVar7 = *(int*)( (long)plVar3 + 0x14 );
                     if (( iVar9 == iVar7 ) && ( ( (int)uVar14 == 0 || ( iVar8 = memcmp((void*)*puVar5, (void*)*plVar3, uVar14 & 0xffffffff) ),iVar8 == 0 ) )) {
                        if (( iVar7 * 0xc == iVar9 * 0xc ) && ( ( ( iVar7 * 3 & 0x3fffffffU ) == 0 || ( iVar9 = memcmp((void*)puVar5[3], (void*)plVar3[3], ( ulong )(uint)(iVar7 * 0xc)) ),iVar9 == 0 ) )) {
                           if ((int)uVar25 == -1) goto LAB_00108bd1;
                           goto LAB_00108bc6;
                        }

                     }

                  }

               }

               if (( (int)uVar25 == -1 ) && ( ( bVar2 & 1 ) == 0 )) {
                  uVar25 = uVar20;
               }

               uVar13 = uVar13 + 1;
               uVar15 = (int)uVar20 + uVar13 & *(uint*)( this + 0x7c );
               uVar20 = (ulong)uVar15;
               plVar19 = (long*)( (ulong)uVar15 * 0x10 + lVar10 );
               bVar2 = *(byte*)( plVar19 + 1 );
            }
 while ( ( bVar2 & 2 ) != 0 );
            if ((int)uVar25 == -1) {
               LAB_00108c68:uVar23 = uVar23 + 1;
            }
 else {
               LAB_00108bc6:plVar19 = (long*)( lVar10 + uVar25 * 0x10 );
               LAB_00108bd1:if (( *(byte*)( plVar19 + 1 ) & 2 ) == 0) goto LAB_00108c68;
               iVar18 = iVar18 - ( *(byte*)( plVar19 + 1 ) & 1 );
            }

            *plVar19 = (long)plVar3;
            *(uint*)( (long)plVar19 + 0xc ) = uVar16;
            *(uint*)( plVar19 + 1 ) = local_88 * 4 + 3;
            *(int*)( this + 0x74 ) = iVar18 + 1;
            *(uint*)( this + 0x78 ) = uVar23;
            if (( *(ushort*)( this + 0x72 ) < uVar13 ) && ( *(uint*)( this + 0x7c ) < uVar23 * 8 )) {
               hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)( this + 0x60 ), *(uint*)( this + 0x7c ) - 8);
               iVar18 = *(int*)( this + 0x2c );
               goto LAB_00108955;
            }

         }

      }
 else {
         cVar6 = hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>*)( this + 0x60 ), 0);
         if (cVar6 != '\0') {
            uVar23 = *(uint*)( this + 0x78 );
            goto LAB_001089f4;
         }

      }

      iVar18 = *(int*)( this + 0x2c );
   }

   LAB_00108955:if (this[0x70] != (hb_serialize_context_t)0x0) {
      return uVar16;
   }

   if (iVar18 != 0) {
      return uVar16;
   }

   LAB_0010896d:*(undefined4*)( this + 0x2c ) = 1;
   return uVar16;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* hb_pool_t<hb_serialize_context_t::object_t, 32u>::alloc() */undefined1(*)[16];hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc (hb_pool_t<hb_serialize_context_t::object_t,32u> *this) {
   undefined1(*pauVar1)[16];
   ulong uVar2;
   undefined1(*pauVar3)[16];
   undefined1(*pauVar4)[16];
   void *pvVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   pauVar1 = *(undefined1(**) [16])this;
   if (pauVar1 != (undefined1(*) [16])0x0) goto LAB_00108ee3;
   uVar7 = *(uint*)( this + 8 );
   if ((int)uVar7 < 0) {
      return (undefined1(*) [16])0x0;
   }

   uVar8 = uVar7;
   if (uVar7 < *(int*)( this + 0xc ) + 1U) {
      do {
         uVar8 = ( uVar8 >> 1 ) + 8 + uVar8;
      }
 while ( uVar8 < *(int*)( this + 0xc ) + 1U );
      if (0x1fffffff < uVar8) {
         *(uint*)( this + 8 ) = ~uVar7;
         return (undefined1(*) [16])0x0;
      }

      pvVar5 = realloc(*(void**)( this + 0x10 ), (ulong)uVar8 << 3);
      if (pvVar5 == (void*)0x0) {
         if (*(uint*)( this + 8 ) < uVar8) {
            *(uint*)( this + 8 ) = ~*(uint *)(this + 8);
            return (undefined1(*) [16])0x0;
         }

      }
 else {
         *(void**)( this + 0x10 ) = pvVar5;
         *(uint*)( this + 8 ) = uVar8;
      }

   }

   pauVar1 = (undefined1(*) [16])malloc(0x700);
   if (pauVar1 == (undefined1(*) [16])0x0) {
      return (undefined1(*) [16])0x0;
   }

   uVar7 = *(uint*)( this + 0xc );
   uVar2 = (ulong)uVar7;
   uVar8 = *(uint*)( this + 8 );
   uVar6 = uVar7 + 1;
   if ((int)uVar7 < (int)uVar8) {
      LAB_00108f47:*(uint*)( this + 0xc ) = uVar6;
      *(undefined1(**) [16])( *(long*)( this + 0x10 ) + uVar2 * 8 ) = pauVar1;
   }
 else {
      if (-1 < (int)uVar8) {
         uVar7 = uVar8;
         if (uVar8 < uVar6) {
            do {
               uVar7 = uVar7 + 8 + ( uVar7 >> 1 );
            }
 while ( uVar7 < uVar6 );
            if (0x1fffffff < uVar7) {
               *(uint*)( this + 8 ) = ~uVar8;
               goto LAB_00109037;
            }

            pvVar5 = realloc(*(void**)( this + 0x10 ), (ulong)uVar7 << 3);
            if (pvVar5 == (void*)0x0) {
               if (*(uint*)( this + 8 ) < uVar7) {
                  *(uint*)( this + 8 ) = ~*(uint *)(this + 8);
                  goto LAB_00109037;
               }

            }
 else {
               *(void**)( this + 0x10 ) = pvVar5;
               *(uint*)( this + 8 ) = uVar7;
            }

            uVar2 = ( ulong ) * (uint*)( this + 0xc );
            uVar6 = *(uint*)( this + 0xc ) + 1;
         }

         goto LAB_00108f47;
      }

      LAB_00109037:__hb_CrapPool = __hb_NullPool;
   }

   *(undefined1**)*pauVar1 = pauVar1[3] + 8;
   pauVar3 = pauVar1 + 7;
   do {
      *(undefined1(**) [16])( pauVar3[-4] + 8 ) = pauVar3;
      pauVar4 = pauVar3 + 7;
      *(undefined1**)*pauVar3 = pauVar3[3] + 8;
      pauVar3 = pauVar4;
   }
 while ( pauVar1 + 0x70 != pauVar4 );
   *(undefined8*)( pauVar1[0x6c] + 8 ) = 0;
   *(undefined1(**) [16])this = pauVar1;
   LAB_00108ee3:*(undefined8*)this = *(undefined8*)*pauVar1;
   *(undefined8*)pauVar1[3] = 0;
   *pauVar1 = (undefined1[16])0x0;
   pauVar1[1] = (undefined1[16])0x0;
   pauVar1[2] = (undefined1[16])0x0;
   return pauVar1;
}
/* bool CFF::UnsizedByteStr::serialize_int<OT::IntType<short, 2u>, unsigned
   int>(hb_serialize_context_t*, unsigned int, unsigned int) */bool CFF::UnsizedByteStr::serialize_int<OT::IntType<short,2u>,unsigned_int>(hb_serialize_context_t *param_1, uint param_2, uint param_3) {
   undefined1 *puVar1;
   ushort *puVar2;
   ushort uVar3;
   if (*(int*)( param_1 + 0x2c ) == 0) {
      puVar1 = *(undefined1**)( param_1 + 8 );
      if (*(undefined1**)( param_1 + 0x10 ) == puVar1 || (long)*(undefined1**)( param_1 + 0x10 ) - (long)puVar1 < 0) {
         LAB_00109100:*(undefined4*)( param_1 + 0x2c ) = 4;
         return false;
      }

      *puVar1 = 0;
      puVar1 = *(undefined1**)( param_1 + 8 );
      *(undefined1**)( param_1 + 8 ) = puVar1 + 1;
      if (( puVar1 != (undefined1*)0x0 ) && ( *puVar1 = (char)param_2 * (int*)( param_1 + 0x2c ) == 0 )) {
         if (*(long*)( param_1 + 0x10 ) - (long)( puVar1 + 1 ) < 2) goto LAB_00109100;
         *(undefined2*)( puVar1 + 1 ) = 0;
         puVar2 = *(ushort**)( param_1 + 8 );
         *(ushort**)( param_1 + 8 ) = puVar2 + 1;
         if (puVar2 != (ushort*)0x0) {
            uVar3 = (ushort)param_3;
            *puVar2 = uVar3 << 8 | uVar3 >> 8;
            if ((long)(short)( ( uVar3 >> 8 ) << 8 | uVar3 & 0xff ) == (ulong)param_3) {
               return true;
            }

            *(uint*)( param_1 + 0x2c ) = *(uint*)( param_1 + 0x2c ) | 8;
         }

      }

   }

   return false;
}
/* hb_vector_t<CFF::parsed_cs_op_t, false>::alloc(unsigned int, bool) */undefined8 hb_vector_t<CFF::parsed_cs_op_t,false>::alloc(hb_vector_t<CFF::parsed_cs_op_t,false> *this, uint param_1, bool param_2) {
   uint uVar1;
   void *pvVar2;
   uint uVar3;
   uVar1 = *(uint*)this;
   if ((int)uVar1 < 0) {
      return 0;
   }

   if (param_2) {
      uVar3 = *(uint*)( this + 4 );
      if (*(uint*)( this + 4 ) <= param_1) {
         uVar3 = param_1;
      }

      if (uVar1 < uVar3) {
         if (0xfffffff < uVar3) goto LAB_00109156;
         pvVar2 = *(void**)( this + 8 );
      }
 else {
         if (uVar1 >> 2 <= uVar3) {
            return 1;
         }

         if (0xfffffff < uVar3) goto LAB_00109156;
         pvVar2 = *(void**)( this + 8 );
         if (uVar3 == 0) {
            free(pvVar2);
            uVar3 = 0;
            pvVar2 = (void*)0x0;
            goto LAB_001091c6;
         }

      }

   }
 else {
      uVar3 = uVar1;
      if (param_1 <= uVar1) {
         return 1;
      }

      do {
         uVar3 = uVar3 + 8 + ( uVar3 >> 1 );
      }
 while ( uVar3 < param_1 );
      if (0xfffffff < uVar3) goto LAB_00109156;
      pvVar2 = *(void**)( this + 8 );
   }

   pvVar2 = realloc(pvVar2, (ulong)uVar3 << 4);
   if (pvVar2 != (void*)0x0) {
      LAB_001091c6:*(void**)( this + 8 ) = pvVar2;
      *(uint*)this = uVar3;
      return 1;
   }

   uVar1 = *(uint*)this;
   if (uVar3 <= uVar1) {
      return 1;
   }

   LAB_00109156:*(uint*)this = ~uVar1;
   return 0;
}
/* CFF::parsed_cs_str_t::compact() */void CFF::parsed_cs_str_t::compact(parsed_cs_str_t *this) {
   byte bVar1;
   byte bVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   long *plVar7;
   uint uVar8;
   ulong uVar9;
   ulong uVar10;
   uVar3 = *(uint*)( this + 0xc );
   if (uVar3 < 2) {
      return;
   }

   uVar9 = 0;
   uVar10 = 0;
   lVar4 = *(long*)( this + 0x10 );
   plVar6 = (long*)( lVar4 + 0x10 );
   do {
      plVar7 = (long*)( uVar10 * 0x10 + lVar4 );
      if (( ( ( (int)plVar7[1] == 10 ) || ( (int)plVar7[1] == 0x1d ) ) || ( (int)plVar6[1] == 10 ) ) || ( ( ( (int)plVar6[1] == 0x1d || ( *(char*)( (long)plVar7 + 0xd ) != *(char*)( (long)plVar6 + 0xd ) ) ) || ( ( bVar1 = *(byte*)( (long)plVar7 + 0xc ) * plVar6 != (ulong)bVar1 + *plVar7 || ( bVar2 = *(byte*)( (long)plVar6 + 0xc ) < (uint)bVar1 + (uint)bVar2 ) ) ) ) )) {
         uVar9 = ( ulong )((int)uVar9 + 1);
         lVar5 = plVar6[1];
         plVar7 = (long*)( lVar4 + uVar9 * 0x10 );
         *plVar7 = *plVar6;
         plVar7[1] = lVar5;
         uVar10 = uVar9;
      }
 else {
         *(undefined4*)( plVar7 + 1 ) = 0xffff;
         *(byte*)( (long)plVar7 + 0xc ) = bVar1 + bVar2;
      }

      plVar6 = plVar6 + 2;
   }
 while ( (long*)( lVar4 + 0x20 + ( ulong )(uVar3 - 2) * 0x10 ) != plVar6 );
   uVar8 = (int)uVar9 + 1;
   if ((int)uVar8 < 0) {
      uVar8 = 0;
   }

   if (uVar8 < uVar3) {
      *(uint*)( this + 0xc ) = uVar8;
      hb_vector_t<CFF::parsed_cs_op_t,false>::alloc((hb_vector_t<CFF::parsed_cs_op_t,false>*)( this + 8 ), uVar8, true);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* cff1_cs_opset_subr_subset_t::process_call_subr(unsigned int, CFF::cs_type_t,
   CFF::cff1_cs_interp_env_t&, CFF::subr_subset_param_t&,
   CFF::biased_subrs_t<CFF::Subrs<OT::IntType<unsigned short, 2u> > >&, hb_set_t*) */void cff1_cs_opset_subr_subset_t::process_call_subr(undefined4 param_1, undefined4 param_2, long *param_3, long *param_4, int *param_5, long param_6) {
   uint uVar1;
   uint uVar2;
   int iVar3;
   CFFIndex<OT::IntType<unsigned_short,2u>> *this;
   uint *puVar4;
   byte bVar5;
   long lVar6;
   char cVar7;
   ulong uVar8;
   undefined4 *puVar9;
   long *plVar10;
   double *pdVar11;
   uint uVar12;
   long lVar13;
   undefined1 uVar14;
   uint uVar15;
   uint uVar16;
   uint uVar17;
   undefined1 auVar18[12];
   lVar13 = *param_3;
   uVar1 = *(uint*)( param_3 + 1 );
   uVar2 = *(uint*)( (long)param_3 + 0xc );
   uVar12 = *(uint*)( (long)param_3 + 0x14 );
   if (uVar12 == 0) {
      __hb_CrapPool = __hb_NullPool;
      *(undefined1*)( param_3 + 2 ) = 1;
      pdVar11 = (double*)&_hb_CrapPool;
   }
 else {
      pdVar11 = (double*)( param_3 + (ulong)uVar12 + 2 );
      *(uint*)( (long)param_3 + 0x14 ) = uVar12 - 1;
   }

   uVar12 = (int)*pdVar11 + *param_5;
   if (( ( (int)uVar12 < 0 ) || ( this = *(CFFIndex<OT::IntType<unsigned_short,2u>>**)( param_5 + 2 ) ),this == (CFFIndex<OT::IntType<unsigned_short,2u>>*)0x0 )) {
      LAB_00109580:uVar12 = *(uint*)( (long)param_3 + 0x1034 );
      *(uint*)( (long)param_3 + 0xc ) = uVar1 + 1;
   }
 else {
      uVar17 = *(uint*)( (long)param_3 + 0x104c );
      uVar8 = (ulong)uVar17;
      if (9 < uVar17) goto LAB_00109580;
      lVar6 = param_3[1];
      *(uint*)( (long)param_3 + 0x104c ) = uVar17 + 1;
      param_3[0x204] = *param_3;
      param_3[0x205] = lVar6;
      param_3[uVar8 * 3 + 0x20a] = *param_3;
      param_3[uVar8 * 3 + 0x20b] = lVar6;
      param_3[uVar8 * 3 + 0x20c] = param_3[0x206];
      auVar18 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator [](this, uVar12);
      *(undefined4*)( param_3 + 0x206 ) = param_2;
      *(undefined1(*) [12])( param_3 + 0x204 ) = auVar18;
      *(undefined4*)( (long)param_3 + 0x102c ) = 0;
      *(uint*)( (long)param_3 + 0x1034 ) = uVar12;
      *param_3 = param_3[0x204];
      param_3[1] = param_3[0x205];
   }

   puVar4 = (uint*)*param_4;
   if (( (byte)puVar4[6] & 1 ) == 0) {
      *(byte*)( puVar4 + 6 ) = (byte)puVar4[6] | 0x10;
      uVar17 = puVar4[3];
      uVar16 = 1;
      uVar15 = uVar17;
      if (uVar17 != 0) {
         uVar15 = uVar17 - 1;
         puVar4[3] = uVar15;
         uVar16 = uVar17;
      }

      uVar17 = uVar12;
      if ((int)uVar15 < (int)puVar4[2]) {
         LAB_001094d5:plVar10 = (long*)( (ulong)uVar15 * 0x10 + *(long*)( puVar4 + 4 ) );
         puVar4[3] = uVar16;
         *plVar10 = 0;
         *(undefined4*)( plVar10 + 1 ) = 0xffff;
         *(undefined2*)( (long)plVar10 + 0xc ) = 0;
         *(short*)( (long)plVar10 + 0xe ) = (short)uVar12;
         uVar12 = uVar17;
      }
 else {
         cVar7 = hb_vector_t<CFF::parsed_cs_op_t,false>::alloc((hb_vector_t<CFF::parsed_cs_op_t,false>*)( puVar4 + 2 ), uVar16, false);
         if (cVar7 != '\0') {
            uVar15 = puVar4[3];
            uVar17 = *(uint*)( (long)param_3 + 0x1034 );
            uVar16 = uVar15 + 1;
            goto LAB_001094d5;
         }

         __hb_CrapPool = __hb_NullPool;
         _memcpy = _lookup_expert_subset_charset_for_sid;
         uVar12 = *(uint*)( (long)param_3 + 0x1034 );
         plVar10 = (long*)&_hb_CrapPool;
      }

      uVar17 = *puVar4;
      *(undefined4*)( plVar10 + 1 ) = param_1;
      if (uVar1 < uVar17) {
         uVar14 = 0;
      }
 else {
         uVar15 = uVar2 - uVar17;
         uVar14 = (undefined1)uVar15;
         if (uVar1 - uVar17 < uVar15) {
            uVar14 = ( undefined1 )(uVar1 - uVar17);
         }

      }

      *(undefined1*)( (long)plVar10 + 0xc ) = uVar14;
      *plVar10 = lVar13 + (ulong)uVar17;
      *puVar4 = uVar2;
   }

   if (*(char*)( param_6 + 0x40 ) == '\0') {
      if (( uVar12 != 0xffffffff ) && ( *(char*)( param_6 + 0x10 ) == '\x01' )) {
         *(undefined4*)( param_6 + 0x14 ) = 0xffffffff;
         puVar9 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)( param_6 + 0x10 ), uVar12, true);
         if (puVar9 != (undefined4*)0x0) {
            *(ulong*)( puVar9 + ( ulong )(uVar12 >> 6 & 7) * 2 + 2 ) = *(ulong*)( puVar9 + ( ulong )(uVar12 >> 6 & 7) * 2 + 2 ) | 1L << ( (byte)uVar12 & 0x3f );
            *puVar9 = 0xffffffff;
         }

      }

   }
 else if (( *(char*)( param_6 + 0x10 ) != '\0' ) && ( puVar9 = (undefined4*)hb_bit_set_t::page_for((hb_bit_set_t*)( param_6 + 0x10 ), uVar12, false) ),puVar9 != (undefined4*)0x0) {
      *(undefined4*)( param_6 + 0x14 ) = 0xffffffff;
      bVar5 = (byte)uVar12 & 0x3f;
      *(ulong*)( puVar9 + ( ulong )(uVar12 >> 6 & 7) * 2 + 2 ) = *(ulong*)( puVar9 + ( ulong )(uVar12 >> 6 & 7) * 2 + 2 ) & ( -2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5 );
      *puVar9 = 0xffffffff;
   }

   iVar3 = (int)param_3[0x206];
   if (iVar3 == 1) {
      lVar13 = param_4[2];
      uVar1 = *(uint*)( (long)param_3 + 0x1034 );
      if (*(uint*)( lVar13 + 4 ) <= uVar1) goto LAB_00109458;
      LAB_0010947f:lVar13 = *(long*)( lVar13 + 8 ) + (ulong)uVar1 * 0x28;
   }
 else {
      if (iVar3 == 2) {
         lVar13 = param_4[3];
         uVar1 = *(uint*)( (long)param_3 + 0x1034 );
         if (*(uint*)( lVar13 + 4 ) <= uVar1) goto LAB_00109458;
         goto LAB_0010947f;
      }

      if (iVar3 != 0) goto LAB_00109458;
      lVar13 = param_4[1];
   }

   if (lVar13 != 0) {
      if (( *(byte*)( lVar13 + 0x18 ) & 1 ) != 0) {
         *param_4 = lVar13;
         return;
      }

      if (*(int*)( lVar13 + 0xc ) != 0) {
         *(uint*)( (long)param_3 + 0xc ) = *(uint*)( param_3 + 1 ) + 1;
         return;
      }

      hb_vector_t<CFF::parsed_cs_op_t,false>::alloc((hb_vector_t<CFF::parsed_cs_op_t,false>*)( lVar13 + 8 ), *(uint*)( param_3 + 1 ), true);
      *param_4 = lVar13;
      return;
   }

   LAB_00109458:*(int*)( (long)param_3 + 0xc ) = (int)param_3[1] + 1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* cff1_cs_opset_subr_subset_t::process_op(unsigned int, CFF::cff1_cs_interp_env_t&,
   CFF::subr_subset_param_t&) */void cff1_cs_opset_subr_subset_t::process_op(uint param_1, cff1_cs_interp_env_t *param_2, subr_subset_param_t *param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   char cVar4;
   uint uVar5;
   long *plVar6;
   cff1_cs_interp_env_t *pcVar7;
   uint *puVar8;
   uint uVar9;
   int iVar10;
   long lVar11;
   uint *puVar12;
   undefined1 uVar13;
   uint uVar14;
   uint uVar15;
   if (param_1 != 0xe) {
      if (param_1 < 0xf) {
         if (param_1 == 10) {
            process_call_subr(10, 2, param_2, param_3, param_2 + 0x1150, *(undefined8*)( param_3 + 0x28 ));
            return;
         }

         if (param_1 == 0xb) {
            puVar8 = *(uint**)param_3;
            puVar12 = puVar8;
            if (( puVar8[6] & 1 ) == 0) {
               uVar5 = puVar8[3];
               if ((int)uVar5 < (int)puVar8[2]) {
                  LAB_0010983f:plVar6 = (long*)( (ulong)uVar5 * 0x10 + *(long*)( puVar8 + 4 ) );
                  puVar8[3] = uVar5 + 1;
                  *plVar6 = 0;
                  plVar6[1] = 0xffff;
               }
 else {
                  cVar4 = hb_vector_t<CFF::parsed_cs_op_t,false>::alloc((hb_vector_t<CFF::parsed_cs_op_t,false>*)( puVar8 + 2 ), uVar5 + 1, false);
                  if (cVar4 != '\0') {
                     uVar5 = puVar8[3];
                     puVar12 = *(uint**)param_3;
                     goto LAB_0010983f;
                  }

                  __hb_CrapPool = __hb_NullPool;
                  _memcpy = _lookup_expert_subset_charset_for_sid;
                  plVar6 = (long*)&_hb_CrapPool;
                  puVar12 = *(uint**)param_3;
               }

               uVar14 = *puVar8;
               uVar5 = *(uint*)( param_2 + 0xc );
               *(undefined4*)( plVar6 + 1 ) = 0xb;
               uVar9 = *(uint*)( param_2 + 8 );
               lVar11 = *(long*)param_2;
               if (uVar9 < uVar14) {
                  uVar13 = 0;
               }
 else {
                  uVar13 = ( undefined1 )(uVar5 - uVar14);
                  if (uVar9 - uVar14 < uVar5 - uVar14) {
                     uVar13 = ( undefined1 )(uVar9 - uVar14);
                  }

               }

               *(undefined1*)( (long)plVar6 + 0xc ) = uVar13;
               *plVar6 = (ulong)uVar14 + lVar11;
               *puVar8 = uVar5;
            }
 else {
               uVar5 = *(uint*)( param_2 + 0xc );
               uVar9 = *(uint*)( param_2 + 8 );
            }

            *(byte*)( puVar12 + 6 ) = (byte)puVar12[6] | 1;
            if (uVar9 < uVar5) {
               *(uint*)( param_2 + 0xc ) = uVar9 + 1;
            }

            if (*(int*)( param_2 + 0x104c ) == 0) {
               _realloc = _lookup_expert_charset_for_sid;
               __hb_CrapPool = __hb_NullPool;
               _memcpy = _lookup_expert_subset_charset_for_sid;
               param_2[0x1048] = (cff1_cs_interp_env_t)0x1;
               pcVar7 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
            }
 else {
               uVar5 = *(int*)( param_2 + 0x104c ) - 1;
               *(uint*)( param_2 + 0x104c ) = uVar5;
               pcVar7 = param_2 + (ulong)uVar5 * 0x18 + 0x1050;
            }

            uVar2 = *(undefined8*)pcVar7;
            uVar3 = *(undefined8*)( pcVar7 + 8 );
            *(undefined8*)( param_2 + 0x1020 ) = uVar2;
            *(undefined8*)( param_2 + 0x1028 ) = uVar3;
            uVar1 = *(undefined8*)( pcVar7 + 0x10 );
            *(undefined8*)param_2 = uVar2;
            *(undefined8*)( param_2 + 8 ) = uVar3;
            *(undefined8*)( param_2 + 0x1030 ) = uVar1;
            iVar10 = (int)uVar1;
            if (iVar10 == 1) {
               lVar11 = *(long*)( param_3 + 0x10 );
               uVar5 = *(uint*)( param_2 + 0x1034 );
               if (*(uint*)( lVar11 + 4 ) <= uVar5) goto LAB_0010975a;
               LAB_00109963:lVar11 = *(long*)( lVar11 + 8 ) + (ulong)uVar5 * 0x28;
            }
 else {
               if (iVar10 == 2) {
                  lVar11 = *(long*)( param_3 + 0x18 );
                  uVar5 = *(uint*)( param_2 + 0x1034 );
                  if (*(uint*)( lVar11 + 4 ) <= uVar5) goto LAB_0010975a;
                  goto LAB_00109963;
               }

               if (iVar10 != 0) goto LAB_0010975a;
               lVar11 = *(long*)( param_3 + 8 );
            }

            if (lVar11 != 0) {
               if (( *(byte*)( lVar11 + 0x18 ) & 1 ) == 0) {
                  hb_vector_t<CFF::parsed_cs_op_t,false>::alloc((hb_vector_t<CFF::parsed_cs_op_t,false>*)( lVar11 + 8 ), *(uint*)( param_2 + 8 ), true);
               }

               *(long*)param_3 = lVar11;
               return;
            }

            LAB_0010975a:*(int*)( param_2 + 0xc ) = *(int*)( param_2 + 8 ) + 1;
            return;
         }

         if (( param_1 != 0 ) && ( param_1 < 0x20 )) {
            LAB_001099a1:/* WARNING: Could not recover jumptable at 0x001099b1. Too many branches *//* WARNING: Treating indirect jump as call */( *(code*)( &DAT_00109e18 + *(int*)( &DAT_00109e18 + (ulong)param_1 * 4 ) ) )();
            return;
         }

         LAB_00109a70:CFF::opset_t<CFF::number_t>::process_op(param_1, (interp_env_t*)param_2);
      }
 else {
         if (param_1 == 0x1d) {
            process_call_subr(0x1d, 1, param_2, param_3, param_2 + 0x1140, *(undefined8*)( param_3 + 0x20 ));
            return;
         }

         if (param_1 != 0x100) {
            if (param_1 < 0x20) goto LAB_001099a1;
            if (param_1 == 0xff) {
               uVar5 = *(uint*)( param_2 + 0xc );
               uVar9 = *(uint*)( param_2 + 8 );
               uVar14 = uVar5 + 4;
               if (uVar14 <= uVar9) {
                  if (uVar5 < uVar9) {
                     puVar8 = (uint*)( (ulong)uVar5 + *(long*)param_2 );
                  }
 else {
                     uVar14 = uVar9 + 5;
                     *(uint*)( param_2 + 0xc ) = uVar9 + 1;
                     puVar8 = (uint*)&_hb_NullPool;
                  }

                  uVar5 = *puVar8;
                  uVar9 = *(uint*)( param_2 + 0x14 );
                  if (uVar9 < 0x201) {
                     pcVar7 = param_2 + (ulong)uVar9 * 8 + 0x18;
                     *(uint*)( param_2 + 0x14 ) = uVar9 + 1;
                  }
 else {
                     __hb_CrapPool = __hb_NullPool;
                     param_2[0x10] = (cff1_cs_interp_env_t)0x1;
                     pcVar7 = (cff1_cs_interp_env_t*)&_hb_CrapPool;
                  }

                  *(double*)pcVar7 = (double)(int)( uVar5 >> 0x18 | ( uVar5 & 0xff0000 ) >> 8 | ( uVar5 & 0xff00 ) << 8 | uVar5 << 0x18 ) * __LC12;
                  *(uint*)( param_2 + 0xc ) = uVar14;
               }

               goto LAB_001099d5;
            }

            if (3 < param_1 - 0x122) goto LAB_00109a70;
         }

         *(undefined4*)( param_2 + 0x14 ) = 0;
         *(undefined4*)( param_2 + 0x1174 ) = 0;
      }

      LAB_001099d5:puVar8 = *(uint**)param_3;
      if (( puVar8[6] & 1 ) != 0) {
         return;
      }

      uVar5 = puVar8[3];
      if ((int)puVar8[2] <= (int)uVar5) {
         cVar4 = hb_vector_t<CFF::parsed_cs_op_t,false>::alloc((hb_vector_t<CFF::parsed_cs_op_t,false>*)( puVar8 + 2 ), uVar5 + 1, false);
         if (cVar4 == '\0') {
            __hb_CrapPool = __hb_NullPool;
            _memcpy = _lookup_expert_subset_charset_for_sid;
            plVar6 = (long*)&_hb_CrapPool;
            goto LAB_00109a14;
         }

         uVar5 = puVar8[3];
      }

      plVar6 = (long*)( (ulong)uVar5 * 0x10 + *(long*)( puVar8 + 4 ) );
      puVar8[3] = uVar5 + 1;
      *plVar6 = 0;
      plVar6[1] = 0xffff;
      LAB_00109a14:uVar5 = *puVar8;
      uVar9 = *(uint*)( param_2 + 0xc );
      *(uint*)( plVar6 + 1 ) = param_1;
      lVar11 = *(long*)param_2;
      if (*(uint*)( param_2 + 8 ) < uVar5) {
         uVar13 = 0;
      }
 else {
         uVar14 = *(uint*)( param_2 + 8 ) - uVar5;
         uVar15 = uVar9 - uVar5;
         uVar13 = (undefined1)uVar14;
         if (uVar15 <= uVar14) {
            uVar13 = (undefined1)uVar15;
         }

      }

      *(undefined1*)( (long)plVar6 + 0xc ) = uVar13;
      *plVar6 = (ulong)uVar5 + lVar11;
      *puVar8 = uVar9;
      return;
   }

   puVar8 = *(uint**)param_3;
   puVar12 = puVar8;
   if (( puVar8[6] & 1 ) != 0) goto LAB_001097ad;
   uVar5 = puVar8[3];
   if ((int)uVar5 < (int)puVar8[2]) {
      LAB_001098af:plVar6 = (long*)( (ulong)uVar5 * 0x10 + *(long*)( puVar8 + 4 ) );
      puVar8[3] = uVar5 + 1;
      *plVar6 = 0;
      plVar6[1] = 0xffff;
   }
 else {
      cVar4 = hb_vector_t<CFF::parsed_cs_op_t,false>::alloc((hb_vector_t<CFF::parsed_cs_op_t,false>*)( puVar8 + 2 ), uVar5 + 1, false);
      if (cVar4 != '\0') {
         uVar5 = puVar8[3];
         puVar12 = *(uint**)param_3;
         goto LAB_001098af;
      }

      __hb_CrapPool = __hb_NullPool;
      _memcpy = _lookup_expert_subset_charset_for_sid;
      plVar6 = (long*)&_hb_CrapPool;
      puVar12 = *(uint**)param_3;
   }

   uVar5 = *puVar8;
   uVar9 = *(uint*)( param_2 + 0xc );
   *(undefined4*)( plVar6 + 1 ) = 0xe;
   lVar11 = *(long*)param_2;
   if (*(uint*)( param_2 + 8 ) < uVar5) {
      uVar13 = 0;
   }
 else {
      uVar14 = *(uint*)( param_2 + 8 ) - uVar5;
      uVar15 = uVar9 - uVar5;
      uVar13 = (undefined1)uVar14;
      if (uVar15 <= uVar14) {
         uVar13 = (undefined1)uVar15;
      }

   }

   *(undefined1*)( (long)plVar6 + 0xc ) = uVar13;
   *plVar6 = (ulong)uVar5 + lVar11;
   *puVar8 = uVar9;
   LAB_001097ad:*(byte*)( puVar12 + 6 ) = (byte)puVar12[6] | 1;
   if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if (( *(uint*)( param_2 + 0x14 ) != 0 ) && ( ( *(uint*)( param_2 + 0x14 ) & 1 ) != 0 )) {
         param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
         *(undefined8*)( param_2 + 0x1178 ) = *(undefined8*)( param_2 + 0x18 );
      }

      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
   }

   *(undefined4*)( param_2 + 0x14 ) = 0;
   *(undefined4*)( param_2 + 0x1174 ) = 0;
   param_2[0x1038] = (cff1_cs_interp_env_t)0x1;
   return;
}
/* hb_vector_t<CFF::parsed_cs_str_t, false>::alloc(unsigned int, bool) */undefined8 hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(hb_vector_t<CFF::parsed_cs_str_t,false> *this, uint param_1, bool param_2) {
   undefined4 *puVar1;
   undefined8 uVar2;
   byte bVar3;
   byte bVar4;
   undefined4 uVar5;
   undefined4 *puVar6;
   byte bVar7;
   byte bVar8;
   byte bVar9;
   undefined4 *puVar10;
   void *__ptr;
   uint uVar11;
   ulong uVar12;
   uint uVar13;
   long lVar14;
   uVar13 = *(uint*)this;
   if ((int)uVar13 < 0) {
      return 0;
   }

   if (param_2) {
      uVar12 = ( ulong ) * (uint*)( this + 4 );
      if (*(uint*)( this + 4 ) <= param_1) {
         uVar12 = (ulong)param_1;
      }

      uVar11 = (uint)uVar12;
      if (uVar11 <= uVar13) {
         if (uVar13 >> 2 <= uVar11) {
            return 1;
         }

         if (0x6666666 < uVar11) goto LAB_00109ef9;
         if (uVar11 == 0) {
            puVar6 = (undefined4*)0x0;
            free(*(void**)( this + 8 ));
            goto LAB_0010a06d;
         }

         goto LAB_0010a0a4;
      }

      if (( 0x6666666 < uVar11 ) || ( puVar6 = (undefined4*)malloc(uVar12 * 0x28) ),puVar6 == (undefined4*)0x0) goto LAB_00109ef9;
   }
 else {
      if (param_1 <= uVar13) {
         return 1;
      }

      uVar12 = (ulong)uVar13;
      do {
         uVar11 = (int)uVar12 + 8 + (int)( uVar12 >> 1 );
         uVar12 = (ulong)uVar11;
      }
 while ( uVar11 < param_1 );
      if (0x6666666 < uVar11) goto LAB_00109ef9;
      LAB_0010a0a4:uVar11 = (uint)uVar12;
      puVar6 = (undefined4*)malloc(uVar12 * 0x28);
      if (puVar6 == (undefined4*)0x0) {
         if (uVar11 <= uVar13) {
            return 1;
         }

         LAB_00109ef9:*(uint*)this = ~uVar13;
         return 0;
      }

   }

   __ptr = *(void**)( this + 8 );
   lVar14 = 0;
   uVar13 = 0;
   puVar10 = puVar6;
   if (*(int*)( this + 4 ) != 0) {
      do {
         puVar1 = (undefined4*)( (long)__ptr + lVar14 );
         *(byte*)( puVar10 + 6 ) = *(byte*)( puVar10 + 6 ) & 0xe4;
         puVar10[2] = 0;
         puVar10[3] = 0;
         *puVar10 = 0;
         uVar5 = *puVar1;
         *(undefined8*)( puVar10 + 4 ) = 0;
         *puVar10 = uVar5;
         uVar5 = puVar1[2];
         *(undefined8*)( puVar10 + 8 ) = 0;
         puVar10[2] = uVar5;
         puVar1[2] = 0;
         puVar10[3] = puVar1[3];
         *(undefined8*)( puVar10 + 4 ) = *(undefined8*)( puVar1 + 4 );
         *(undefined8*)( puVar1 + 4 ) = 0;
         bVar3 = *(byte*)( puVar10 + 6 );
         bVar7 = *(byte*)( puVar1 + 6 ) & 1;
         *(byte*)( puVar10 + 6 ) = bVar3 & 0xfe | bVar7;
         bVar8 = *(byte*)( puVar1 + 6 ) & 2;
         *(byte*)( puVar10 + 6 ) = bVar3 & 0xfc | bVar7 | bVar8;
         bVar9 = *(byte*)( puVar1 + 6 ) & 4;
         *(byte*)( puVar10 + 6 ) = bVar3 & 0xf8 | bVar7 | bVar8 | bVar9;
         bVar4 = *(byte*)( puVar1 + 6 );
         *(byte*)( puVar10 + 6 ) = bVar3 & 0xf0 | bVar7 | bVar8 | bVar9 | bVar4 & 8;
         *(byte*)( puVar10 + 6 ) = bVar3 & 0xe0 | bVar7 | bVar8 | bVar9 | bVar4 & 8 | *(byte*)( puVar1 + 6 ) & 0x10;
         uVar2 = *(undefined8*)( puVar1 + 8 );
         puVar10[7] = puVar1[7];
         *(undefined8*)( puVar10 + 8 ) = uVar2;
         if (puVar1[2] != 0) {
            free(*(void**)( puVar1 + 4 ));
            __ptr = *(void**)( this + 8 );
         }

         uVar13 = uVar13 + 1;
         puVar10 = puVar10 + 10;
         lVar14 = lVar14 + 0x28;
      }
 while ( uVar13 < *(uint*)( this + 4 ) );
   }

   free(__ptr);
   LAB_0010a06d:*(undefined4**)( this + 8 ) = puVar6;
   *(uint*)this = uVar11;
   return 1;
}
/* hb_vector_t<CFF::parsed_cs_str_vec_t, false>::resize(int, bool, bool) */undefined8 hb_vector_t<CFF::parsed_cs_str_vec_t,false>::resize(hb_vector_t<CFF::parsed_cs_str_vec_t,false> *this, int param_1, bool param_2, bool param_3) {
   int *piVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   undefined4 *puVar5;
   undefined4 *puVar6;
   void *pvVar7;
   uint uVar8;
   ulong uVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   int *piVar13;
   int *piVar14;
   uVar3 = 0;
   if (-1 < param_1) {
      uVar3 = param_1;
   }

   uVar4 = *(uint*)this;
   if ((int)uVar4 < 0) {
      return 0;
   }

   if (param_3) {
      uVar8 = *(uint*)( this + 4 );
      uVar2 = uVar8;
      if (uVar8 <= uVar3) {
         uVar2 = uVar3;
      }

      uVar9 = (ulong)uVar2;
      if (uVar4 < uVar2) {
         if (0xfffffff < uVar2) goto LAB_0010a19a;
         pvVar7 = *(void**)( this + 8 );
         LAB_0010a2a4:uVar8 = (uint)uVar9;
         pvVar7 = realloc(pvVar7, uVar9 << 4);
         if (pvVar7 == (void*)0x0) {
            uVar4 = *(uint*)this;
            if (uVar4 < uVar8) {
               LAB_0010a19a:*(uint*)this = ~uVar4;
               return 0;
            }

            goto LAB_0010a109;
         }

      }
 else {
         if (uVar4 >> 2 <= uVar2) goto LAB_0010a10c;
         if (0xfffffff < uVar2) goto LAB_0010a19a;
         pvVar7 = *(void**)( this + 8 );
         if (uVar2 != 0) goto LAB_0010a2a4;
         free(pvVar7);
         uVar8 = 0;
         pvVar7 = (void*)0x0;
      }

      *(void**)( this + 8 ) = pvVar7;
      *(uint*)this = uVar8;
   }
 else {
      uVar8 = uVar4;
      if (uVar4 < uVar3) {
         do {
            uVar8 = ( uVar8 >> 1 ) + 8 + uVar8;
         }
 while ( uVar8 < uVar3 );
         if (0xfffffff < uVar8) goto LAB_0010a19a;
         pvVar7 = *(void**)( this + 8 );
         uVar9 = (ulong)uVar8;
         goto LAB_0010a2a4;
      }

   }

   LAB_0010a109:uVar8 = *(uint*)( this + 4 );
   LAB_0010a10c:if (uVar8 < uVar3) {
      if (param_2) {
         lVar10 = *(long*)( this + 8 );
         puVar5 = (undefined4*)( (ulong)uVar8 * 0x10 + lVar10 );
         do {
            *puVar5 = 0;
            puVar6 = puVar5 + 4;
            puVar5[1] = 0;
            *(undefined8*)( puVar5 + 2 ) = 0;
            puVar5 = puVar6;
         }
 while ( (undefined4*)( lVar10 + 0x10 + ( ( ulong )(( uVar3 - 1 ) - uVar8) + (ulong)uVar8 ) * 0x10 ) != puVar6 );
      }

   }
 else if (( uVar3 < uVar8 ) && ( param_2 )) {
      piVar1 = (int*)( *(long*)( this + 8 ) + -0x10 + (ulong)uVar8 * 0x10 );
      piVar13 = piVar1;
      do {
         piVar14 = piVar13 + -4;
         if (*piVar13 != 0) {
            uVar4 = piVar13[1];
            pvVar7 = *(void**)( piVar13 + 2 );
            lVar10 = (long)pvVar7 + (ulong)uVar4 * 0x28 + -0x28;
            if (uVar4 != 0) {
               lVar12 = ( ( ulong )(uVar4 - 1) + 1 ) * -0x28 + lVar10;
               do {
                  while (lVar11 = lVar10 + -0x28,*(int*)( lVar10 + 8 ) != 0) {
                     free(*(void**)( lVar10 + 0x10 ));
                     lVar10 = lVar11;
                     if (lVar12 == lVar11) goto LAB_0010a261;
                  }
;
                  lVar10 = lVar11;
               }
 while ( lVar12 != lVar11 );
               LAB_0010a261:pvVar7 = *(void**)( piVar13 + 2 );
            }

            free(pvVar7);
         }

         piVar13 = piVar14;
      }
 while ( piVar1 + ( ulong )(uVar8 - uVar3) * -4 != piVar14 );
   }

   *(uint*)( this + 4 ) = uVar3;
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::subr_subsetter_t<cff1_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned short, 2u> >,
   OT::cff1::accelerator_subset_t const, CFF::cff1_cs_interp_env_t, cff1_cs_opset_subr_subset_t,
   14u>::closure_subroutines(CFF::parsed_cs_str_vec_t const&, hb_vector_t<CFF::parsed_cs_str_vec_t,
   false> const&) */undefined8 CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::closure_subroutines(subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u> *this, parsed_cs_str_vec_t *param_1, hb_vector_t *param_2) {
   ushort *puVar1;
   uint *puVar2;
   uint uVar3;
   char *pcVar4;
   undefined8 uVar5;
   uint uVar6;
   ulong uVar7;
   undefined8 uVar8;
   uint uVar9;
   parsed_cs_str_vec_t *ppVar10;
   parsed_cs_str_vec_t *ppVar11;
   undefined *puVar12;
   long lVar13;
   uint *puVar14;
   int iVar15;
   int iVar16;
   long lVar17;
   long in_FS_OFFSET;
   parsed_cs_str_vec_t *local_a8;
   undefined *local_78;
   undefined *local_70;
   parsed_cs_str_vec_t *local_68;
   parsed_cs_str_vec_t *local_60;
   subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u> *local_58;
   hb_set_t *local_50;
   byte local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   hb_bit_set_t::resize((hb_bit_set_t*)( this + 0x20 ), 0, true, false);
   if (this[0x20] != (subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>)0x0) {
      *(undefined4*)( this + 0x24 ) = 0;
      this[0x50] = (subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>)0x0;
   }

   lVar13 = 0;
   if (*(int*)( this + 0x5c ) != 0) {
      do {
         lVar17 = *(long*)( this + 0x60 ) + lVar13 * 0x48;
         hb_bit_set_t::resize((hb_bit_set_t*)( lVar17 + 0x10 ), 0, true, false);
         if (*(char*)( lVar17 + 0x10 ) != '\0') {
            *(undefined4*)( lVar17 + 0x14 ) = 0;
            *(undefined1*)( lVar17 + 0x40 ) = 0;
         }

         lVar13 = lVar13 + 1;
      }
 while ( (uint)lVar13 < *(uint*)( this + 0x5c ) );
   }

   puVar14 = *(uint**)( *(long*)( this + 8 ) + 200 );
   local_a8 = (parsed_cs_str_vec_t*)&_hb_NullPool;
   puVar2 = puVar14 + ( ulong ) * (uint*)( *(long*)( this + 8 ) + 0xc4 ) * 2;
   do {
      if (puVar2 == puVar14) {
         uVar8 = 1;
         LAB_0010a494:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar8;
      }

      lVar13 = *(long*)this;
      uVar3 = *puVar14;
      pcVar4 = *(char**)( lVar13 + 0x88 );
      if (pcVar4 == &_hb_NullPool) {
         LAB_0010a4c0:uVar7 = 0;
         LAB_0010a4c2:if (*(uint*)( lVar13 + 0x90 ) <= (uint)uVar7) {
            LAB_0010a492:uVar8 = 0;
            goto LAB_0010a494;
         }

      }
 else {
         uVar6 = puVar14[1];
         if (*pcVar4 == '\0') {
            uVar7 = (ulong)(byte)pcVar4[(ulong)uVar6 + 1];
            lVar13 = *(long*)this;
            goto LAB_0010a4c2;
         }

         if (*pcVar4 != '\x03') goto LAB_0010a4c0;
         ppVar11 = local_a8;
         if (*(short*)( pcVar4 + 1 ) != 0) {
            ppVar11 = (parsed_cs_str_vec_t*)( pcVar4 + 3 );
         }

         iVar15 = ( ushort )(*(ushort*)( pcVar4 + 1 ) << 8 | *(ushort*)( pcVar4 + 1 ) >> 8) - 2;
         if (-1 < iVar15) {
            iVar16 = 0;
            do {
               while (true) {
                  uVar9 = ( uint )(iVar16 + iVar15) >> 1;
                  ppVar10 = ppVar11 + (ulong)uVar9 * 3;
                  if (( ushort )(*(ushort*)ppVar10 << 8 | *(ushort*)ppVar10 >> 8) <= uVar6) break;
                  iVar15 = uVar9 - 1;
                  if (iVar15 < iVar16) goto LAB_0010a453;
               }
;
               if (uVar6 < ( ushort )(*(ushort*)( ppVar10 + 3 ) << 8 | *(ushort*)( ppVar10 + 3 ) >> 8)) goto LAB_0010a480;
               iVar16 = uVar9 + 1;
            }
 while ( iVar16 <= iVar15 );
         }

         LAB_0010a453:uVar6 = ( ushort )(*(ushort*)( pcVar4 + 1 ) << 8 | *(ushort*)( pcVar4 + 1 ) >> 8) - 1;
         ppVar10 = local_a8;
         if (uVar6 < ( ushort )(*(ushort*)( pcVar4 + 1 ) << 8 | *(ushort*)( pcVar4 + 1 ) >> 8)) {
            ppVar10 = (parsed_cs_str_vec_t*)( pcVar4 + (ulong)uVar6 * 3 + 3 );
         }

         LAB_0010a480:uVar7 = (ulong)(byte)ppVar10[2];
         if (*(uint*)( *(long*)this + 0x90 ) <= (uint)(byte)ppVar10[2]) goto LAB_0010a492;
      }

      local_48 = ( byte ) * (undefined4*)( *(long*)( this + 8 ) + 0x14 ) & 1;
      if ((uint)uVar7 < *(uint*)( this + 0x5c )) {
         local_50 = (hb_set_t*)( *(long*)( this + 0x60 ) + uVar7 * 0x48 );
         uVar8 = __hb_CrapPool;
         uVar5 = _memcpy;
      }
 else {
         local_50 = (hb_set_t*)&_hb_CrapPool;
         uVar8 = __hb_NullPool;
         uVar5 = _lookup_expert_subset_charset_for_sid;
         _realloc = _lookup_expert_charset_for_sid;
         _memmove = _pthread_mutex_lock;
         _memcmp = _pthread_mutex_unlock;
         _malloc = _pthread_mutex_destroy;
         ___memset_chk = _free;
         ___stack_chk_fail = __hb_CrapPool;
         _lookup_expert_encoding_for_code = _memcpy;
      }

      _memcpy = uVar5;
      __hb_CrapPool = uVar8;
      local_58 = this + 0x10;
      local_60 = local_a8;
      if ((uint)uVar7 < *(uint*)( param_2 + 4 )) {
         local_60 = (parsed_cs_str_vec_t*)( uVar7 * 0x10 + *(long*)( param_2 + 8 ) );
      }

      if (*(uint*)( this + 0x6c ) == 0) {
         if (uVar3 < *(uint*)( this + 0xe4 )) {
            puVar12 = (undefined*)( *(long*)( this + 0xe8 ) + (ulong)uVar3 * 0x28 );
            local_70 = puVar12;
         }
 else {
            local_70 = &_hb_NullPool;
            puVar12 = &_hb_NullPool;
         }

      }
 else {
         ppVar11 = local_a8;
         if (uVar3 < *(uint*)( this + 0x6c )) {
            ppVar11 = (parsed_cs_str_vec_t*)( *(long*)( this + 0x70 ) + (ulong)uVar3 * 8 );
         }

         puVar12 = *(undefined**)ppVar11;
         local_70 = *(undefined**)ppVar11;
      }

      local_78 = local_70;
      local_68 = param_1;
      if (( puVar12[0x18] & 0x10 ) != 0) {
         lVar17 = *(long*)( puVar12 + 0x10 );
         lVar13 = lVar17 + ( ulong ) * (uint*)( puVar12 + 0xc ) * 0x10;
         for (; lVar17 != lVar13; lVar17 = lVar17 + 0x10) {
            while (true) {
               if (( local_48 != 0 ) && ( *(char*)( lVar17 + 0xd ) != '\0' )) goto LAB_0010a58c;
               if (*(int*)( lVar17 + 8 ) != 10) break;
               puVar1 = (ushort*)( lVar17 + 0xe );
               lVar17 = lVar17 + 0x10;
               collect_subr_refs_in_subr(( uint ) * puVar1, local_60, local_50, (subr_subset_param_t*)&local_78);
               if (lVar13 == lVar17) goto LAB_0010a5d0;
            }
;
            if (*(int*)( lVar17 + 8 ) == 0x1d) {
               collect_subr_refs_in_subr(( uint ) * (ushort*)( lVar17 + 0xe ), local_68, (hb_set_t*)local_58, (subr_subset_param_t*)&local_78);
            }

            LAB_0010a58c:;
         }

      }

      LAB_0010a5d0:puVar14 = puVar14 + 2;
   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::subr_subsetter_t<cff1_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned short, 2u> >,
   OT::cff1::accelerator_subset_t const, CFF::cff1_cs_interp_env_t, cff1_cs_opset_subr_subset_t,
   14u>::subset() */undefined8 CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::subset(subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u> *this) {
   uint uVar1;
   uint *puVar2;
   cff1_cs_interp_env_t *pcVar3;
   byte bVar4;
   byte bVar5;
   undefined4 uVar6;
   char *pcVar7;
   undefined8 uVar8;
   char cVar9;
   void *pvVar10;
   long *plVar11;
   hb_vector_t<CFF::parsed_cs_str_t,false> *phVar12;
   undefined1(*pauVar13)[16];
   undefined1(*pauVar14)[16];
   int *piVar15;
   long lVar16;
   undefined8 uVar17;
   undefined8 *puVar18;
   uint uVar19;
   undefined *puVar20;
   ulong uVar21;
   byte bVar22;
   byte bVar23;
   byte bVar24;
   ushort *puVar25;
   long *plVar26;
   size_t sVar27;
   long lVar28;
   long lVar29;
   uint uVar30;
   long lVar31;
   long lVar32;
   cff1_cs_interp_env_t *pcVar33;
   undefined4 *puVar34;
   ushort uVar35;
   uint uVar36;
   hb_set_t *phVar37;
   int iVar38;
   uint uVar39;
   parsed_cs_str_t *ppVar40;
   uint uVar41;
   int iVar42;
   ulong uVar43;
   char *pcVar44;
   undefined4 *puVar45;
   hb_vector_t<CFF::parsed_cs_str_vec_t,false> *this_00;
   uint *puVar46;
   hb_vector_t<CFF::parsed_cs_str_t,false> *phVar47;
   int *piVar48;
   long in_FS_OFFSET;
   byte bVar49;
   undefined1 auVar50[16];
   int local_125c;
   undefined4 local_124c;
   undefined *local_1248;
   undefined *puStack_1240;
   subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u> *local_1238;
   undefined *local_1230;
   subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u> *local_1228;
   undefined *local_1220;
   byte local_1218;
   parsed_cs_str_t *local_1208;
   parsed_cs_str_t *ppStack_1200;
   subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u> *local_11f8;
   undefined *local_11f0;
   subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u> *local_11e8;
   undefined *local_11e0;
   byte local_11d8;
   long local_11c8;
   undefined8 local_11c0;
   undefined8 local_11b8;
   undefined8 local_11b0[513];
   long local_1a8;
   uint local_1a0;
   undefined4 local_19c;
   undefined8 local_198;
   char local_190;
   undefined2 local_18f;
   undefined8 local_18c;
   undefined4 local_184;
   char local_180;
   uint local_17c;
   undefined1 local_178[240];
   int local_88[2];
   ushort *local_80;
   int local_78;
   ushort *local_70;
   undefined1 local_68[16];
   undefined2 local_58;
   undefined4 local_54;
   undefined8 local_50;
   undefined1 local_48;
   long local_40;
   bVar49 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar38 = *(int*)( *(long*)this + 0x90 );
   lVar31 = *(long*)( *(long*)this + 0x130 );
   uVar43 = ( ulong ) * (uint*)( *(long*)( this + 8 ) + 0x58 );
   if ((int)*(uint*)( *(long*)( this + 8 ) + 0x58 ) < 0) {
      uVar43 = 0;
   }

   uVar41 = (uint)uVar43;
   if (lVar31 == 0) {
      cVar9 = hb_vector_t<CFF::parsed_cs_str_t,false>::alloc((hb_vector_t<CFF::parsed_cs_str_t,false>*)( this + 0xe0 ), uVar41, true);
      if (cVar9 != '\0') {
         uVar36 = *(uint*)( this + 0xe4 );
         if (uVar36 < uVar41) {
            lVar32 = *(long*)( this + 0xe8 );
            puVar45 = (undefined4*)( lVar32 + (ulong)uVar36 * 0x28 );
            do {
               *(byte*)( puVar45 + 6 ) = *(byte*)( puVar45 + 6 ) & 0xe4;
               puVar34 = puVar45 + 10;
               puVar45[2] = 0;
               puVar45[3] = 0;
               *(undefined8*)( puVar45 + 4 ) = 0;
               *(undefined8*)( puVar45 + 8 ) = 0;
               *puVar45 = 0;
               puVar45 = puVar34;
            }
 while ( puVar34 != (undefined4*)( lVar32 + 0x28 + ( ( ulong )(( uVar41 - uVar36 ) - 1) + (ulong)uVar36 ) * 0x28 ) );
         }
 else if (uVar41 < uVar36) {
            lVar32 = *(long*)( this + 0xe8 ) + -0x28 + (ulong)uVar36 * 0x28;
            lVar29 = lVar32;
            do {
               lVar28 = lVar29 + -0x28;
               if (*(int*)( lVar29 + 8 ) != 0) {
                  free(*(void**)( lVar29 + 0x10 ));
               }

               lVar29 = lVar28;
            }
 while ( lVar28 != ( ulong )(uVar36 - uVar41) * -0x28 + lVar32 );
         }

         *(uint*)( this + 0xe4 ) = uVar41;
      }

      phVar12 = (hb_vector_t<CFF::parsed_cs_str_t,false>*)( this + 0xf0 );
      uVar35 = **(ushort**)( *(long*)this + 0x70 ) << 8 | **(ushort**)( *(long*)this + 0x70 ) >> 8;
      cVar9 = hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(phVar12, (uint)uVar35, true);
      if (cVar9 != '\0') {
         uVar41 = *(uint*)( this + 0xf4 );
         uVar36 = (uint)uVar35;
         if (uVar41 < uVar35) {
            lVar32 = *(long*)( this + 0xf8 );
            puVar45 = (undefined4*)( lVar32 + (ulong)uVar41 * 0x28 );
            do {
               *(byte*)( puVar45 + 6 ) = *(byte*)( puVar45 + 6 ) & 0xe4;
               puVar34 = puVar45 + 10;
               puVar45[2] = 0;
               puVar45[3] = 0;
               *(undefined8*)( puVar45 + 4 ) = 0;
               *(undefined8*)( puVar45 + 8 ) = 0;
               *puVar45 = 0;
               puVar45 = puVar34;
            }
 while ( (undefined4*)( lVar32 + 0x28 + ( ( ulong )(( uVar36 - uVar41 ) - 1) + (ulong)uVar41 ) * 0x28 ) != puVar34 );
         }
 else if (uVar36 < uVar41) {
            lVar32 = *(long*)( this + 0xf8 ) + -0x28 + (ulong)uVar41 * 0x28;
            lVar29 = lVar32;
            do {
               lVar28 = lVar29 + -0x28;
               if (*(int*)( lVar29 + 8 ) != 0) {
                  free(*(void**)( lVar29 + 0x10 ));
               }

               lVar29 = lVar28;
            }
 while ( lVar32 + ( ulong )(uVar41 - uVar36) * -0x28 != lVar28 );
         }

         *(uint*)( this + 0xf4 ) = uVar36;
      }

      this_00 = (hb_vector_t<CFF::parsed_cs_str_vec_t,false>*)( this + 0x100 );
      cVar9 = hb_vector_t<CFF::parsed_cs_str_vec_t,false>::resize(this_00, iVar38, true, false);
      if (cVar9 != '\0') {
         lVar32 = *(long*)this;
         if (*(int*)( lVar32 + 0x90 ) != 0) {
            uVar41 = *(uint*)( this + 0x104 );
            lVar29 = 0;
            do {
               uVar36 = (uint)lVar29;
               puVar20 = &_hb_NullPool;
               if (uVar36 < *(uint*)( lVar32 + 0x11c )) {
                  puVar20 = (undefined*)( *(long*)( lVar32 + 0x120 ) + lVar29 * 0x28 );
               }

               uVar35 = **(ushort**)( puVar20 + 0x20 ) << 8 | **(ushort**)( puVar20 + 0x20 ) >> 8;
               if (uVar36 < uVar41) {
                  phVar47 = (hb_vector_t<CFF::parsed_cs_str_t,false>*)( lVar29 * 0x10 + *(long*)( this + 0x108 ) );
               }
 else {
                  __hb_CrapPool = __hb_NullPool;
                  _memcpy = _lookup_expert_subset_charset_for_sid;
                  phVar47 = (hb_vector_t<CFF::parsed_cs_str_t,false>*)&_hb_CrapPool;
               }

               cVar9 = hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(phVar47, (uint)uVar35, false);
               if (cVar9 != '\0') {
                  uVar41 = *(uint*)( phVar47 + 4 );
                  uVar19 = (uint)uVar35;
                  if (uVar41 < uVar35) {
                     lVar32 = *(long*)( phVar47 + 8 );
                     puVar45 = (undefined4*)( lVar32 + (ulong)uVar41 * 0x28 );
                     do {
                        *(byte*)( puVar45 + 6 ) = *(byte*)( puVar45 + 6 ) & 0xe4;
                        puVar34 = puVar45 + 10;
                        puVar45[2] = 0;
                        puVar45[3] = 0;
                        *(undefined8*)( puVar45 + 4 ) = 0;
                        *(undefined8*)( puVar45 + 8 ) = 0;
                        *puVar45 = 0;
                        puVar45 = puVar34;
                     }
 while ( puVar34 != (undefined4*)( lVar32 + 0x28 + ( ( ulong )(( uVar35 - 1 ) - uVar41) + (ulong)uVar41 ) * 0x28 ) );
                  }
 else if (uVar19 < uVar41) {
                     lVar32 = *(long*)( phVar47 + 8 ) + -0x28 + (ulong)uVar41 * 0x28;
                     lVar28 = lVar32;
                     do {
                        lVar16 = lVar28 + -0x28;
                        if (*(int*)( lVar28 + 8 ) != 0) {
                           free(*(void**)( lVar28 + 0x10 ));
                        }

                        lVar28 = lVar16;
                     }
 while ( lVar16 != ( ulong )(uVar41 - uVar19) * -0x28 + lVar32 );
                  }

                  *(uint*)( phVar47 + 4 ) = uVar19;
               }

               uVar41 = *(uint*)( this + 0x104 );
               if (uVar36 < uVar41) {
                  piVar15 = (int*)( lVar29 * 0x10 + *(long*)( this + 0x108 ) );
               }
 else {
                  __hb_CrapPool = __hb_NullPool;
                  _memcpy = _lookup_expert_subset_charset_for_sid;
                  piVar15 = (int*)&_hb_CrapPool;
               }

               if (*piVar15 < 0) goto LAB_0010a960;
               lVar32 = *(long*)this;
               lVar29 = lVar29 + 1;
            }
 while ( (uint)lVar29 < *(uint*)( lVar32 + 0x90 ) );
         }

         goto LAB_0010a7db;
      }

   }
 else {
      uVar36 = *(uint*)( this + 0x68 );
      if (-1 < (int)uVar36) {
         uVar19 = *(uint*)( this + 0x6c );
         if (uVar41 <= uVar19) {
            uVar43 = (ulong)uVar19;
         }

         uVar30 = (uint)uVar43;
         if (uVar36 < uVar30) {
            if (uVar30 < 0x20000000) {
               pvVar10 = *(void**)( this + 0x70 );
               LAB_0010a792:pvVar10 = realloc(pvVar10, uVar43 << 3);
               if (pvVar10 != (void*)0x0) goto LAB_0010a7a6;
               uVar36 = *(uint*)( this + 0x68 );
               if (uVar30 <= uVar36) goto LAB_0010a7ad;
            }

            *(uint*)( this + 0x68 ) = ~uVar36;
         }
 else {
            if (uVar30<uVar36> > 2) {
               pvVar10 = *(void**)( this + 0x70 );
               if (uVar30 != 0) goto LAB_0010a792;
               free(pvVar10);
               pvVar10 = (void*)0x0;
               LAB_0010a7a6:*(void**)( this + 0x70 ) = pvVar10;
               *(uint*)( this + 0x68 ) = uVar30;
               LAB_0010a7ad:uVar19 = *(uint*)( this + 0x6c );
            }

            if (uVar19 < uVar41) {
               hb_memset((void*)( *(long*)( this + 0x70 ) + (ulong)uVar19 * 8 ), ( uVar41 - uVar19 ) * 8, uVar19);
            }

            *(uint*)( this + 0x6c ) = uVar41;
         }

      }

      phVar12 = (hb_vector_t<CFF::parsed_cs_str_t,false>*)( lVar31 + 0x10 );
      this_00 = (hb_vector_t<CFF::parsed_cs_str_vec_t,false>*)( lVar31 + 0x20 );
      LAB_0010a7db:*(hb_vector_t<CFF::parsed_cs_str_t,false>**)( this + 0x78 ) = phVar12;
      *(hb_vector_t<CFF::parsed_cs_str_vec_t,false>**)( this + 0x80 ) = this_00;
      if (( ( ( -1 < *(int*)( this + 0xd0 ) ) && ( -1 < *(int*)( this + 0x68 ) ) ) && ( -1 < *(int*)( this + 0xe0 ) ) ) && ( ( -1 < *(int*)phVar12 && ( -1 < *(int*)( this + 0x58 ) ) ) )) {
         puVar46 = *(uint**)( *(long*)( this + 8 ) + 200 );
         puVar2 = puVar46 + ( ulong ) * (uint*)( *(long*)( this + 8 ) + 0xc4 ) * 2;
         if (puVar2 != puVar46) {
            do {
               uVar41 = puVar46[1];
               uVar36 = *puVar46;
               uVar43 = (ulong)uVar36;
               auVar50 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator [](*(CFFIndex<OT::IntType<unsigned_short,2u>>**)( *(long*)this + 0x78 ), uVar41);
               lVar32 = *(long*)this;
               pcVar7 = *(char**)( lVar32 + 0x88 );
               if (pcVar7 == &_hb_NullPool) {
                  LAB_0010a990:uVar21 = 0;
                  LAB_0010a993:if (*(uint*)( lVar32 + 0x90 ) <= (uint)uVar21) goto LAB_0010a960;
               }
 else {
                  if (*pcVar7 == '\0') {
                     uVar21 = (ulong)(byte)pcVar7[(ulong)uVar41 + 1];
                     lVar32 = *(long*)this;
                     goto LAB_0010a993;
                  }

                  if (*pcVar7 != '\x03') goto LAB_0010a990;
                  pcVar44 = &_hb_NullPool;
                  if (*(short*)( pcVar7 + 1 ) != 0) {
                     pcVar44 = pcVar7 + 3;
                  }

                  iVar38 = ( ushort )(*(ushort*)( pcVar7 + 1 ) << 8 | *(ushort*)( pcVar7 + 1 ) >> 8) - 2;
                  if (-1 < iVar38) {
                     iVar42 = 0;
                     do {
                        while (true) {
                           uVar19 = ( uint )(iVar42 + iVar38) >> 1;
                           puVar25 = (ushort*)( pcVar44 + (ulong)uVar19 * 3 );
                           if (( ushort )(*puVar25 << 8 | *puVar25 >> 8) <= uVar41) break;
                           iVar38 = uVar19 - 1;
                           if (iVar38 < iVar42) goto LAB_0010a915;
                        }
;
                        if (uVar41 < ( ushort )(*(ushort*)( (long)puVar25 + 3 ) << 8 | *(ushort*)( (long)puVar25 + 3 ) >> 8)) goto LAB_0010a948;
                        iVar42 = uVar19 + 1;
                     }
 while ( iVar42 <= iVar38 );
                  }

                  LAB_0010a915:puVar25 = (ushort*)&_hb_NullPool;
                  uVar19 = ( ushort )(*(ushort*)( pcVar7 + 1 ) << 8 | *(ushort*)( pcVar7 + 1 ) >> 8) - 1;
                  if (uVar19 < ( ushort )(*(ushort*)( pcVar7 + 1 ) << 8 | *(ushort*)( pcVar7 + 1 ) >> 8)) {
                     puVar25 = (ushort*)( pcVar7 + (ulong)uVar19 * 3 + 3 );
                  }

                  LAB_0010a948:lVar32 = *(long*)this;
                  uVar21 = (ulong)(byte)puVar25[1];
                  if (*(uint*)( lVar32 + 0x90 ) <= (uint)(byte)puVar25[1]) goto LAB_0010a960;
               }

               if (lVar31 == 0) {
                  puVar20 = &_hb_NullPool;
                  uVar41 = (uint)uVar21;
                  if (uVar41 < *(uint*)( lVar32 + 0x11c )) {
                     puVar20 = (undefined*)( *(long*)( lVar32 + 0x120 ) + uVar21 * 0x28 );
                  }

                  local_80 = *(ushort**)( lVar32 + 0x70 );
                  local_11b8 = 0;
                  local_70 = *(ushort**)( puVar20 + 0x20 );
                  puVar18 = local_11b0;
                  for (lVar32 = 0x201; lVar32 != 0; lVar32 = lVar32 + -1) {
                     *puVar18 = 0;
                     puVar18 = puVar18 + (ulong)bVar49 * -2 + 1;
                  }

                  local_180 = '\0';
                  local_11c0._0_4_ = auVar50._8_4_;
                  local_1a0 = (uint)local_11c0;
                  local_11c0 = auVar50._8_8_ & 0xffffffff;
                  local_17c = 0;
                  pauVar13 = (undefined1(*) [16])local_178;
                  do {
                     pauVar14 = pauVar13 + 3;
                     *pauVar13 = (undefined1[16])0x0;
                     *(undefined1(*) [16])( pauVar13[1] + 8 ) = (undefined1[16])0x0;
                     pauVar13 = pauVar14;
                  }
 while ( (undefined1(*) [16])local_88 != pauVar14 );
                  local_18f = _LC14;
                  local_88[0] = 0x6b;
                  local_19c = 0;
                  local_198 = 0;
                  local_18c = 0;
                  local_184 = 0;
                  local_68 = (undefined1[16])0x0;
                  if (( local_80 != (ushort*)0x0 ) && ( uVar35 = 0x4d7 < uVar35 )) {
                     local_88[0] = ( -(uint)(uVar35 < 0x846c) & 0xffff846b ) + 0x8000;
                  }

                  local_78 = 0x6b;
                  if (( local_70 != (ushort*)0x0 ) && ( uVar35 = 0x4d7 < uVar35 )) {
                     local_78 = ( -(uint)(uVar35 < 0x846c) & 0xffff846b ) + 0x8000;
                  }

                  local_50 = 0;
                  local_58 = 0;
                  local_54 = 0;
                  local_48 = 0;
                  if (uVar36 < *(uint*)( this + 0xe4 )) {
                     puVar20 = (undefined*)( *(long*)( this + 0xe8 ) + (ulong)uVar36 * 0x28 );
                  }
 else {
                     puVar20 = &_hb_CrapPool;
                     __hb_CrapPool = __hb_NullPool;
                     _memcpy = _lookup_expert_subset_charset_for_sid;
                     _memcmp = _pthread_mutex_unlock;
                     _realloc = _lookup_expert_charset_for_sid;
                     _memmove = _pthread_mutex_lock;
                  }

                  local_11c8 = auVar50._0_8_;
                  local_1a8 = auVar50._0_8_;
                  hb_vector_t<CFF::parsed_cs_op_t,false>::alloc((hb_vector_t<CFF::parsed_cs_op_t,false>*)( puVar20 + 8 ), local_1a0, true);
                  local_1218 = ( byte ) * (undefined4*)( *(long*)( this + 8 ) + 0x14 ) & 1;
                  if (uVar41 < *(uint*)( this + 0x5c )) {
                     local_1220 = (undefined*)( *(long*)( this + 0x60 ) + uVar21 * 0x48 );
                  }
 else {
                     local_1220 = &_hb_CrapPool;
                     __hb_CrapPool = __hb_NullPool;
                     _lookup_expert_encoding_for_code = _memcpy;
                     _realloc = _lookup_expert_charset_for_sid;
                     _memmove = _pthread_mutex_lock;
                     _memcmp = _pthread_mutex_unlock;
                     _malloc = _pthread_mutex_destroy;
                     ___memset_chk = _free;
                     ___stack_chk_fail = __hb_NullPool;
                     _memcpy = _lookup_expert_subset_charset_for_sid;
                  }

                  if (uVar41 < *(uint*)( this + 0x104 )) {
                     local_1230 = (undefined*)( uVar21 * 0x10 + *(long*)( this + 0x108 ) );
                  }
 else {
                     local_1230 = &_hb_CrapPool;
                     __hb_CrapPool = __hb_NullPool;
                     _memcpy = _lookup_expert_subset_charset_for_sid;
                  }

                  if (uVar36 < *(uint*)( this + 0xe4 )) {
                     local_1248 = (undefined*)( *(long*)( this + 0xe8 ) + (ulong)uVar36 * 0x28 );
                  }
 else {
                     __hb_CrapPool = __hb_NullPool;
                     _memcpy = _lookup_expert_subset_charset_for_sid;
                     _memcmp = _pthread_mutex_unlock;
                     _realloc = _lookup_expert_charset_for_sid;
                     _memmove = _pthread_mutex_lock;
                     local_1248 = &_hb_CrapPool;
                  }

                  local_190 = '\0';
                  local_125c = 200000;
                  uVar19 = (uint)local_11c0;
                  uVar30 = local_11c0._4_4_;
                  puStack_1240 = local_1248;
                  local_1238 = this + 0xf0;
                  local_1228 = this + 0x10;
                  do {
                     uVar1 = uVar30 + 1;
                     if (uVar19 < uVar1) {
                        LAB_0010b826:uVar39 = 0xffff;
                     }
 else {
                        local_11c0 = CONCAT44(uVar1, (uint)local_11c0);
                        uVar39 = ( uint ) * (byte*)( local_11c8 + (ulong)uVar30 );
                        if (*(byte*)( local_11c8 + (ulong)uVar30 ) == 0xc) {
                           if (uVar19 < uVar30 + 2) goto LAB_0010b826;
                           local_11c0 = CONCAT44(uVar30 + 2, (uint)local_11c0);
                           uVar39 = *(byte*)( local_11c8 + (ulong)uVar1 ) + 0x100;
                        }

                     }

                     cff1_cs_opset_subr_subset_t::process_op(uVar39, (cff1_cs_interp_env_t*)&local_11c8, (subr_subset_param_t*)&local_1248);
                     if (local_180 != '\0') goto LAB_0010a960;
                     uVar19 = (uint)local_11c0;
                     if (( ( (uint)local_11c0 < local_11c0._4_4_ ) || ( (char)local_11b8 != '\0' ) ) || ( local_125c = local_125c == 0 )) goto LAB_0010a960;
                     uVar30 = local_11c0._4_4_;
                  }
 while ( local_190 == '\0' );
                  uVar30 = *(uint*)( this + 0xe4 );
                  if (uVar36 < uVar30) {
                     ppVar40 = (parsed_cs_str_t*)( *(long*)( this + 0xe8 ) + (ulong)uVar36 * 0x28 );
                  }
 else {
                     ppVar40 = (parsed_cs_str_t*)&_hb_CrapPool;
                     __hb_CrapPool = __hb_NullPool;
                     _memcpy = _lookup_expert_subset_charset_for_sid;
                     _memcmp = _pthread_mutex_unlock;
                     _realloc = _lookup_expert_charset_for_sid;
                     _memmove = _pthread_mutex_lock;
                  }

                  if (local_58._1_1_ != '\0') {
                     ppVar40[0x18] = ( parsed_cs_str_t )((byte)ppVar40[0x18] | 8);
                     *(undefined4*)( ppVar40 + 0x1c ) = 0xffff;
                     *(undefined8*)( ppVar40 + 0x20 ) = local_50;
                  }

                  local_1248[0x18] = local_1248[0x18] | 1;
                  if (local_17c != 0) {
                     pcVar3 = (cff1_cs_interp_env_t*)&local_11c8 + (ulong)local_17c * 0x18;
                     pcVar33 = (cff1_cs_interp_env_t*)&local_11c8;
                     do {
                        while (iVar38 = *(int*)( pcVar33 + 0x1060 ),iVar38 == 1) {
                           if (*(uint*)( pcVar33 + 0x1064 ) < *(uint*)( local_1238 + 4 )) {
                              puVar20 = (undefined*)( *(long*)( local_1238 + 8 ) + ( ulong ) * (uint*)( pcVar33 + 0x1064 ) * 0x28 );
                              goto LAB_0010b29c;
                           }

                           LAB_0010b258:pcVar33 = pcVar33 + 0x18;
                           local_11c0 = CONCAT44(uVar19 + 1, (uint)local_11c0);
                           if (pcVar3 == pcVar33) goto LAB_0010b2ae;
                        }
;
                        if (iVar38 != 2) {
                           puVar20 = puStack_1240;
                           if (iVar38 == 0) goto LAB_0010b29c;
                           goto LAB_0010b258;
                        }

                        if (*(uint*)( local_1230 + 4 ) <= *(uint*)( pcVar33 + 0x1064 )) goto LAB_0010b258;
                        puVar20 = (undefined*)( *(long*)( local_1230 + 8 ) + ( ulong ) * (uint*)( pcVar33 + 0x1064 ) * 0x28 );
                        LAB_0010b29c:if (puVar20 == (undefined*)0x0) goto LAB_0010b258;
                        pcVar33 = pcVar33 + 0x18;
                        puVar20[0x18] = puVar20[0x18] | 1;
                     }
 while ( pcVar3 != pcVar33 );
                  }

                  LAB_0010b2ae:uVar19 = *(uint*)( *(long*)( this + 8 ) + 0x14 );
                  if (( ( uVar19 & 1 ) == 0 ) && ( *(long*)( *(long*)( this + 8 ) + 0xad8 ) == 0 )) {
                     LAB_0010b389:if (uVar36 < uVar30) {
                        lVar32 = *(long*)( this + 0xe8 );
                        goto LAB_0010b39c;
                     }

                     ppVar40 = (parsed_cs_str_t*)&_hb_CrapPool;
                     __hb_CrapPool = __hb_NullPool;
                     _memcpy = _lookup_expert_subset_charset_for_sid;
                     _memcmp = _pthread_mutex_unlock;
                     _realloc = _lookup_expert_charset_for_sid;
                     _memmove = _pthread_mutex_lock;
                  }
 else {
                     local_11d8 = (byte)uVar19 & 1;
                     if (uVar41 < *(uint*)( this + 0x5c )) {
                        local_11e0 = (undefined*)( *(long*)( this + 0x60 ) + uVar21 * 0x48 );
                     }
 else {
                        _realloc = _lookup_expert_charset_for_sid;
                        _memmove = _pthread_mutex_lock;
                        _lookup_expert_encoding_for_code = _memcpy;
                        _memcpy = _lookup_expert_subset_charset_for_sid;
                        ___memset_chk = _free;
                        ___stack_chk_fail = __hb_CrapPool;
                        _memcmp = _pthread_mutex_unlock;
                        _malloc = _pthread_mutex_destroy;
                        local_11e0 = &_hb_CrapPool;
                        __hb_CrapPool = __hb_NullPool;
                     }

                     if (uVar41 < *(uint*)( this + 0x104 )) {
                        local_11f0 = (undefined*)( uVar21 * 0x10 + *(long*)( this + 0x108 ) );
                     }
 else {
                        local_11f0 = &_hb_CrapPool;
                        __hb_CrapPool = __hb_NullPool;
                        _memcpy = _lookup_expert_subset_charset_for_sid;
                     }

                     local_124c = 0;
                     if (uVar30 <= uVar36) {
                        __hb_CrapPool = __hb_NullPool;
                        _memcpy = _lookup_expert_subset_charset_for_sid;
                        _memcmp = _pthread_mutex_unlock;
                        _realloc = _lookup_expert_charset_for_sid;
                        _memmove = _pthread_mutex_lock;
                     }

                     local_1208 = ppVar40;
                     ppStack_1200 = ppVar40;
                     local_11f8 = this + 0xf0;
                     local_11e8 = this + 0x10;
                     cVar9 = drop_hints_in_str(ppVar40, (subr_subset_param_t*)&local_1208, (drop_hints_param_t*)&local_124c);
                     uVar30 = *(uint*)( this + 0xe4 );
                     if (cVar9 == '\0') goto LAB_0010b389;
                     if (uVar30 <= uVar36) {
                        _realloc = _lookup_expert_charset_for_sid;
                        _memmove = _pthread_mutex_lock;
                        __hb_CrapPool = __hb_NullPool;
                        _memcpy = _lookup_expert_subset_charset_for_sid;
                        _memcmp = _pthread_mutex_unlock;
                        if (local_124c._3_1_ != '\0') {
                           puVar20 = &_hb_CrapPool;
                           goto LAB_0010b385;
                        }

                        _memmove = _pthread_mutex_lock | 2;
                        goto LAB_0010b389;
                     }

                     lVar32 = *(long*)( this + 0xe8 );
                     puVar20 = (undefined*)( lVar32 + uVar43 * 0x28 );
                     puVar20[0x18] = puVar20[0x18] | 2;
                     if (local_124c._3_1_ != '\0') {
                        LAB_0010b385:puVar20[0x18] = puVar20[0x18] | 4;
                        goto LAB_0010b389;
                     }

                     LAB_0010b39c:ppVar40 = (parsed_cs_str_t*)( lVar32 + uVar43 * 0x28 );
                  }

                  parsed_cs_str_t::compact(ppVar40);
               }
 else if (*(uint*)( this + 0x6c ) == 0) {
                  puVar45 = (undefined4*)&_hb_NullPool;
                  if (uVar41 < *(uint*)( lVar31 + 4 )) {
                     puVar45 = (undefined4*)( *(long*)( lVar31 + 8 ) + (ulong)uVar41 * 0x28 );
                  }

                  if (uVar36 < *(uint*)( this + 0xe4 )) {
                     puVar34 = (undefined4*)( *(long*)( this + 0xe8 ) + uVar43 * 0x28 );
                  }
 else {
                     puVar34 = (undefined4*)&_hb_CrapPool;
                     __hb_CrapPool = __hb_NullPool;
                     _memcpy = _lookup_expert_subset_charset_for_sid;
                     _memcmp = _pthread_mutex_unlock;
                     _realloc = _lookup_expert_charset_for_sid;
                     _memmove = _pthread_mutex_lock;
                  }

                  *puVar34 = *puVar45;
                  if ((int)puVar34[2] < 0) {
                     puVar34[2] = ~puVar34[2];
                  }

                  cVar9 = hb_vector_t<CFF::parsed_cs_op_t,false>::alloc((hb_vector_t<CFF::parsed_cs_op_t,false>*)( puVar34 + 2 ), 0, false);
                  if (cVar9 != '\0') {
                     puVar34[3] = 0;
                  }

                  hb_vector_t<CFF::parsed_cs_op_t,false>::alloc((hb_vector_t<CFF::parsed_cs_op_t,false>*)( puVar34 + 2 ), puVar45[3], true);
                  if (-1 < (int)puVar34[2]) {
                     uVar41 = puVar45[3];
                     lVar32 = *(long*)( puVar45 + 4 );
                     puVar34[3] = uVar41;
                     if (uVar41 != 0) {
                        lVar29 = *(long*)( puVar34 + 4 );
                        lVar28 = 0;
                        do {
                           uVar17 = ( (undefined8*)( lVar32 + lVar28 ) )[1];
                           *(undefined8*)( lVar29 + lVar28 ) = *(undefined8*)( lVar32 + lVar28 );
                           ( (undefined8*)( lVar29 + lVar28 ) )[1] = uVar17;
                           lVar28 = lVar28 + 0x10;
                        }
 while ( (ulong)uVar41 << 4 != lVar28 );
                     }

                  }

                  bVar5 = *(byte*)( puVar34 + 6 );
                  bVar22 = *(byte*)( puVar45 + 6 ) & 1;
                  *(byte*)( puVar34 + 6 ) = bVar5 & 0xfe | bVar22;
                  bVar23 = *(byte*)( puVar45 + 6 ) & 2;
                  *(byte*)( puVar34 + 6 ) = bVar5 & 0xfc | bVar22 | bVar23;
                  bVar24 = *(byte*)( puVar45 + 6 ) & 4;
                  *(byte*)( puVar34 + 6 ) = bVar5 & 0xf8 | bVar22 | bVar23 | bVar24;
                  bVar4 = *(byte*)( puVar45 + 6 );
                  *(byte*)( puVar34 + 6 ) = bVar5 & 0xf0 | bVar22 | bVar23 | bVar24 | bVar4 & 8;
                  *(byte*)( puVar34 + 6 ) = bVar5 & 0xe0 | bVar22 | bVar23 | bVar24 | bVar4 & 8 | *(byte*)( puVar45 + 6 ) & 0x10;
                  uVar17 = *(undefined8*)( puVar45 + 8 );
                  puVar34[7] = puVar45[7];
                  *(undefined8*)( puVar34 + 8 ) = uVar17;
               }
 else {
                  puVar20 = &_hb_NullPool;
                  if (uVar41 < *(uint*)( lVar31 + 4 )) {
                     puVar20 = (undefined*)( *(long*)( lVar31 + 8 ) + (ulong)uVar41 * 0x28 );
                  }

                  if (uVar36 < *(uint*)( this + 0x6c )) {
                     puVar18 = (undefined8*)( *(long*)( this + 0x70 ) + uVar43 * 8 );
                  }
 else {
                     __hb_CrapPool = __hb_NullPool;
                     puVar18 = (undefined8*)&_hb_CrapPool;
                  }

                  *puVar18 = puVar20;
               }

               puVar46 = puVar46 + 2;
            }
 while ( puVar2 != puVar46 );
         }

         if (( ( lVar31 == 0 ) && ( ( *(byte*)( *(long*)( this + 8 ) + 0x14 ) & 1 ) == 0 ) ) || ( cVar9 = closure_subroutines(this, *(parsed_cs_str_vec_t**)( this + 0x78 ), *(hb_vector_t**)( this + 0x80 )) ),cVar9 != '\0') {
            lVar31 = 0;
            subr_remap_t::create((subr_remap_t*)( this + 0x88 ), (hb_set_t*)( this + 0x10 ));
            if (*(int*)( this + 0xd4 ) != 0) {
               do {
                  if ((uint)lVar31 < *(uint*)( this + 0x5c )) {
                     phVar37 = (hb_set_t*)( lVar31 * 0x48 + *(long*)( this + 0x60 ) );
                  }
 else {
                     __hb_CrapPool = __hb_NullPool;
                     _lookup_expert_encoding_for_code = _memcpy;
                     phVar37 = (hb_set_t*)&_hb_CrapPool;
                     _realloc = _lookup_expert_charset_for_sid;
                     _memmove = _pthread_mutex_lock;
                     _memcmp = _pthread_mutex_unlock;
                     _malloc = _pthread_mutex_destroy;
                     ___memset_chk = _free;
                     ___stack_chk_fail = __hb_NullPool;
                     _memcpy = _lookup_expert_subset_charset_for_sid;
                  }

                  subr_remap_t::create((subr_remap_t*)( *(long*)( this + 0xd8 ) + lVar31 * 0x48 ), phVar37);
                  lVar31 = lVar31 + 1;
               }
 while ( (uint)lVar31 < *(uint*)( this + 0xd4 ) );
            }

            if (*(long*)( *(long*)( this + 8 ) + 0xad8 ) != 0) {
               lVar32 = *(long*)( this + 0xf8 );
               lVar31 = lVar32 + ( ulong ) * (uint*)( this + 0xf4 ) * 0x28;
               for (; lVar32 != lVar31; lVar32 = lVar32 + 0x28) {
                  uVar41 = *(uint*)( lVar32 + 0xc );
                  if (1 < uVar41) {
                     lVar29 = *(long*)( lVar32 + 0x10 );
                     uVar21 = 0;
                     uVar43 = 0;
                     plVar11 = (long*)( lVar29 + 0x10 );
                     do {
                        plVar26 = (long*)( uVar43 * 0x10 + lVar29 );
                        if (( ( ( ( (int)plVar26[1] == 10 ) || ( (int)plVar26[1] == 0x1d ) ) || ( (int)plVar11[1] == 10 ) ) || ( ( (int)plVar11[1] == 0x1d || ( *(char*)( (long)plVar26 + 0xd ) != *(char*)( (long)plVar11 + 0xd ) ) ) ) ) || ( ( bVar49 = *(byte*)( (long)plVar26 + 0xc ) * plVar11 != (ulong)bVar49 + *plVar26 || ( bVar5 = *(byte*)( (long)plVar11 + 0xc ) < (uint)bVar49 + (uint)bVar5 ) ) )) {
                           uVar21 = ( ulong )((int)uVar21 + 1);
                           lVar28 = plVar11[1];
                           plVar26 = (long*)( lVar29 + uVar21 * 0x10 );
                           *plVar26 = *plVar11;
                           plVar26[1] = lVar28;
                           uVar43 = uVar21;
                        }
 else {
                           *(undefined4*)( plVar26 + 1 ) = 0xffff;
                           *(byte*)( (long)plVar26 + 0xc ) = bVar49 + bVar5;
                        }

                        plVar11 = plVar11 + 2;
                     }
 while ( (long*)( lVar29 + 0x20 + ( ulong )(uVar41 - 2) * 0x10 ) != plVar11 );
                     uVar36 = (int)uVar21 + 1;
                     if ((int)uVar36 < 0) {
                        uVar36 = 0;
                     }

                     if (uVar36 < uVar41) {
                        *(uint*)( lVar32 + 0xc ) = uVar36;
                        hb_vector_t<CFF::parsed_cs_op_t,false>::alloc((hb_vector_t<CFF::parsed_cs_op_t,false>*)( lVar32 + 8 ), uVar36, true);
                     }

                  }

               }

               lVar32 = *(long*)( this + 0x108 );
               lVar31 = lVar32 + ( ulong ) * (uint*)( this + 0x104 ) * 0x10;
               for (; lVar32 != lVar31; lVar32 = lVar32 + 0x10) {
                  lVar28 = *(long*)( lVar32 + 8 );
                  lVar29 = lVar28 + ( ulong ) * (uint*)( lVar32 + 4 ) * 0x28;
                  for (; lVar28 != lVar29; lVar28 = lVar28 + 0x28) {
                     uVar41 = *(uint*)( lVar28 + 0xc );
                     if (1 < uVar41) {
                        pvVar10 = *(void**)( lVar28 + 0x10 );
                        uVar21 = 0;
                        uVar43 = 0;
                        plVar11 = (long*)( (long)pvVar10 + 0x10 );
                        do {
                           plVar26 = (long*)( uVar43 * 0x10 + (long)pvVar10 );
                           if (( ( ( (int)plVar26[1] == 10 ) || ( (int)plVar26[1] == 0x1d ) ) || ( ( (int)plVar11[1] == 10 || ( ( ( (int)plVar11[1] == 0x1d || ( *(char*)( (long)plVar26 + 0xd ) != *(char*)( (long)plVar11 + 0xd ) ) ) || ( bVar49 = *(byte*)( (long)plVar26 + 0xc ) * plVar11 != (ulong)bVar49 + *plVar26 ) ) ) ) ) ) || ( bVar5 = *(byte*)( (long)plVar11 + 0xc ) ),0xff < (uint)bVar49 + (uint)bVar5) {
                              uVar21 = ( ulong )((int)uVar21 + 1);
                              lVar16 = plVar11[1];
                              plVar26 = (long*)( (long)pvVar10 + uVar21 * 0x10 );
                              *plVar26 = *plVar11;
                              plVar26[1] = lVar16;
                              uVar43 = uVar21;
                           }
 else {
                              *(undefined4*)( plVar26 + 1 ) = 0xffff;
                              *(byte*)( (long)plVar26 + 0xc ) = bVar49 + bVar5;
                           }

                           plVar11 = plVar11 + 2;
                        }
 while ( plVar11 != (long*)( (long)pvVar10 + ( ulong )(uVar41 - 2) * 0x10 + 0x20 ) );
                        uVar19 = (int)uVar21 + 1;
                        uVar36 = 0;
                        if (-1 < (int)uVar19) {
                           uVar36 = uVar19;
                        }

                        if (uVar36 < uVar41) {
                           uVar41 = *(uint*)( lVar28 + 8 );
                           *(uint*)( lVar28 + 0xc ) = uVar36;
                           if (-1 < (int)uVar41) {
                              if (uVar41 < uVar36) {
                                 if ((int)uVar19 < 0x10000000) {
                                    LAB_0010ac60:pvVar10 = realloc(pvVar10, (long)(int)uVar36 << 4);
                                    if (pvVar10 != (void*)0x0) {
                                       LAB_0010ac75:*(void**)( lVar28 + 0x10 ) = pvVar10;
                                       *(uint*)( lVar28 + 8 ) = uVar36;
                                       goto LAB_0010ac80;
                                    }

                                    uVar41 = *(uint*)( lVar28 + 8 );
                                    if (uVar36 <= uVar41) goto LAB_0010ac80;
                                 }

                              }
 else {
                                 if (uVar41 >> 2 <= uVar36) goto LAB_0010ac80;
                                 if ((int)uVar19 < 0x10000000) {
                                    if (0 < (int)uVar19) goto LAB_0010ac60;
                                    free(pvVar10);
                                    pvVar10 = (void*)0x0;
                                    goto LAB_0010ac75;
                                 }

                              }

                              *(uint*)( lVar28 + 8 ) = ~uVar41;
                           }

                        }

                     }

                     LAB_0010ac80:;
                  }

               }

               lVar31 = *(long*)this;
               uVar17 = *(undefined8*)( lVar31 + 0x40 );
               phVar12 = (hb_vector_t<CFF::parsed_cs_str_t,false>*)malloc(0x40);
               if (phVar12 != (hb_vector_t<CFF::parsed_cs_str_t,false>*)0x0) {
                  *(undefined8*)phVar12 = 0;
                  for (int i = 0; i < 4; i++) {
                     *(undefined8*)( phVar12 + ( 8*i + 8 ) ) = 0;
                  }

                  *(undefined1(*) [16])( phVar12 + 0x28 ) = (undefined1[16])0x0;
                  cVar9 = hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(phVar12, 0, false);
                  if (cVar9 != '\0') {
                     uVar41 = *(uint*)( phVar12 + 4 );
                     if (uVar41 != 0) {
                        lVar32 = *(long*)( phVar12 + 8 ) + -0x28 + (ulong)uVar41 * 0x28;
                        lVar29 = lVar32;
                        do {
                           lVar28 = lVar29 + -0x28;
                           if (*(int*)( lVar29 + 8 ) != 0) {
                              free(*(void**)( lVar29 + 0x10 ));
                           }

                           lVar29 = lVar28;
                        }
 while ( lVar28 != lVar32 + (ulong)uVar41 * -0x28 );
                     }

                     *(undefined4*)( phVar12 + 4 ) = 0;
                  }

                  hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(phVar12, *(uint*)( this + 0xe4 ), true);
                  if (-1 < *(int*)phVar12) {
                     iVar38 = *(int*)( this + 0xe4 );
                     *(undefined4*)( phVar12 + 4 ) = 0;
                     if (iVar38 != 0) {
                        iVar42 = 0;
                        puVar45 = *(undefined4**)( phVar12 + 8 );
                        puVar34 = *(undefined4**)( this + 0xe8 );
                        do {
                           iVar42 = iVar42 + 1;
                           *(int*)( phVar12 + 4 ) = iVar42;
                           uVar6 = *puVar34;
                           puVar45[2] = 0;
                           *puVar45 = uVar6;
                           uVar41 = puVar34[3];
                           puVar45[3] = 0;
                           *(undefined8*)( puVar45 + 4 ) = 0;
                           if (uVar41 != 0) {
                              if (uVar41 < 0x10000000) {
                                 pvVar10 = malloc((ulong)uVar41 << 4);
                                 if (pvVar10 != (void*)0x0) {
                                    *(void**)( puVar45 + 4 ) = pvVar10;
                                    lVar32 = *(long*)( puVar34 + 4 );
                                    puVar45[2] = uVar41;
                                    puVar45[3] = uVar41;
                                    sVar27 = 0;
                                    do {
                                       uVar8 = ( (undefined8*)( lVar32 + sVar27 ) )[1];
                                       *(undefined8*)( (long)pvVar10 + sVar27 ) = *(undefined8*)( lVar32 + sVar27 );
                                       ( (undefined8*)( (long)pvVar10 + sVar27 ) )[1] = uVar8;
                                       sVar27 = sVar27 + 0x10;
                                    }
 while ( sVar27 != (ulong)uVar41 << 4 );
                                    goto LAB_0010bce2;
                                 }

                              }

                              puVar45[2] = 0xffffffff;
                           }

                           LAB_0010bce2:bVar49 = *(byte*)( puVar34 + 6 );
                           *(undefined8*)( puVar45 + 8 ) = *(undefined8*)( puVar34 + 8 );
                           *(byte*)( puVar45 + 6 ) = *(byte*)( puVar45 + 6 ) & 0xe0 | bVar49 & 0x1f;
                           puVar45[7] = puVar34[7];
                           puVar45 = puVar45 + 10;
                           puVar34 = puVar34 + 10;
                        }
 while ( iVar38 != iVar42 );
                     }

                  }

                  if ((int)*(uint*)( phVar12 + 0x10 ) < 0) {
                     *(uint*)( phVar12 + 0x10 ) = ~*(uint *)(phVar12 + 0x10);
                  }

                  cVar9 = hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(phVar12 + 0x10, 0, false);
                  if (cVar9 != '\0') {
                     uVar41 = *(uint*)( phVar12 + 0x14 );
                     if (uVar41 != 0) {
                        lVar32 = *(long*)( phVar12 + 0x18 ) + -0x28 + (ulong)uVar41 * 0x28;
                        lVar29 = lVar32;
                        do {
                           lVar28 = lVar29 + -0x28;
                           if (*(int*)( lVar29 + 8 ) != 0) {
                              free(*(void**)( lVar29 + 0x10 ));
                           }

                           lVar29 = lVar28;
                        }
 while ( lVar28 != lVar32 + (ulong)uVar41 * -0x28 );
                     }

                     *(undefined4*)( phVar12 + 0x14 ) = 0;
                  }

                  hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(phVar12 + 0x10, *(uint*)( this + 0xf4 ), true);
                  if (-1 < *(int*)( phVar12 + 0x10 )) {
                     iVar38 = *(int*)( this + 0xf4 );
                     *(undefined4*)( phVar12 + 0x14 ) = 0;
                     if (iVar38 != 0) {
                        iVar42 = 0;
                        puVar45 = *(undefined4**)( phVar12 + 0x18 );
                        puVar34 = *(undefined4**)( this + 0xf8 );
                        do {
                           iVar42 = iVar42 + 1;
                           *(int*)( phVar12 + 0x14 ) = iVar42;
                           uVar6 = *puVar34;
                           puVar45[2] = 0;
                           *puVar45 = uVar6;
                           uVar41 = puVar34[3];
                           puVar45[3] = 0;
                           *(undefined8*)( puVar45 + 4 ) = 0;
                           if (uVar41 != 0) {
                              if (uVar41 < 0x10000000) {
                                 pvVar10 = malloc((ulong)uVar41 << 4);
                                 if (pvVar10 != (void*)0x0) {
                                    *(void**)( puVar45 + 4 ) = pvVar10;
                                    lVar32 = *(long*)( puVar34 + 4 );
                                    puVar45[2] = uVar41;
                                    puVar45[3] = uVar41;
                                    sVar27 = 0;
                                    do {
                                       uVar8 = ( (undefined8*)( lVar32 + sVar27 ) )[1];
                                       *(undefined8*)( (long)pvVar10 + sVar27 ) = *(undefined8*)( lVar32 + sVar27 );
                                       ( (undefined8*)( (long)pvVar10 + sVar27 ) )[1] = uVar8;
                                       sVar27 = sVar27 + 0x10;
                                    }
 while ( sVar27 != (ulong)uVar41 << 4 );
                                    goto LAB_0010be82;
                                 }

                              }

                              puVar45[2] = 0xffffffff;
                           }

                           LAB_0010be82:bVar49 = *(byte*)( puVar34 + 6 );
                           *(undefined8*)( puVar45 + 8 ) = *(undefined8*)( puVar34 + 8 );
                           *(byte*)( puVar45 + 6 ) = *(byte*)( puVar45 + 6 ) & 0xe0 | bVar49 & 0x1f;
                           puVar45[7] = puVar34[7];
                           puVar45 = puVar45 + 10;
                           puVar34 = puVar34 + 10;
                        }
 while ( iVar38 != iVar42 );
                     }

                  }

                  if ((int)*(uint*)( phVar12 + 0x20 ) < 0) {
                     *(uint*)( phVar12 + 0x20 ) = ~*(uint *)(phVar12 + 0x20);
                  }

                  uVar41 = *(uint*)( phVar12 + 0x24 );
                  if (uVar41 != 0) {
                     piVar48 = (int*)( *(long*)( phVar12 + 0x28 ) + -0x10 + (ulong)uVar41 * 0x10 );
                     piVar15 = piVar48 + ( ulong )(uVar41 - 1) * -4 + -4;
                     do {
                        if (*piVar48 != 0) {
                           uVar41 = piVar48[1];
                           pvVar10 = *(void**)( piVar48 + 2 );
                           lVar32 = (long)pvVar10 + (ulong)uVar41 * 0x28 + -0x28;
                           if (uVar41 != 0) {
                              lVar29 = lVar32;
                              do {
                                 lVar28 = lVar29 + -0x28;
                                 if (*(int*)( lVar29 + 8 ) != 0) {
                                    free(*(void**)( lVar29 + 0x10 ));
                                 }

                                 lVar29 = lVar28;
                              }
 while ( lVar28 != ( ( ulong )(uVar41 - 1) + 1 ) * -0x28 + lVar32 );
                              pvVar10 = *(void**)( piVar48 + 2 );
                           }

                           free(pvVar10);
                        }

                        piVar48 = piVar48 + -4;
                     }
 while ( piVar15 != piVar48 );
                  }

                  uVar36 = *(uint*)( this + 0x104 );
                  uVar41 = *(uint*)( phVar12 + 0x20 );
                  *(undefined4*)( phVar12 + 0x24 ) = 0;
                  if (-1 < (int)uVar41) {
                     if (uVar41 < uVar36) {
                        if (uVar36 < 0x10000000) {
                           pvVar10 = *(void**)( phVar12 + 0x28 );
                           LAB_0010bfa2:pvVar10 = realloc(pvVar10, (ulong)uVar36 << 4);
                           if (pvVar10 != (void*)0x0) {
                              LAB_0010bfc2:*(void**)( phVar12 + 0x28 ) = pvVar10;
                              *(uint*)( phVar12 + 0x20 ) = uVar36;
                              uVar36 = *(uint*)( this + 0x104 );
                              goto LAB_0010bfd7;
                           }

                           uVar41 = *(uint*)( phVar12 + 0x20 );
                           if (uVar36 <= uVar41) {
                              if (-1 < (int)uVar41) {
                                 uVar36 = *(uint*)( this + 0x104 );
                                 goto LAB_0010bfd7;
                              }

                              goto LAB_0010b6fc;
                           }

                        }

                     }
 else {
                        if (uVar41 >> 2 <= uVar36) {
                           LAB_0010bfd7:lVar32 = *(long*)( this + 0x108 );
                           *(undefined4*)( phVar12 + 0x24 ) = 0;
                           uVar43 = 0;
                           while ((uint)uVar43 < uVar36) {
                              *(uint*)( phVar12 + 0x24 ) = (uint)uVar43 + 1;
                              phVar47 = (hb_vector_t<CFF::parsed_cs_str_t,false>*)( *(long*)( phVar12 + 0x28 ) + uVar43 * 0x10 );
                              lVar29 = lVar32 + uVar43 * 0x10;
                              *(undefined8*)phVar47 = 0;
                              uVar41 = *(uint*)( lVar29 + 4 );
                              *(undefined8*)( phVar47 + 8 ) = 0;
                              hb_vector_t<CFF::parsed_cs_str_t,false>::alloc(phVar47, uVar41, true);
                              if (-1 < *(int*)phVar47) {
                                 iVar38 = *(int*)( lVar29 + 4 );
                                 puVar45 = *(undefined4**)( lVar29 + 8 );
                                 *(undefined4*)( phVar47 + 4 ) = 0;
                                 if (iVar38 != 0) {
                                    iVar42 = 0;
                                    puVar34 = *(undefined4**)( phVar47 + 8 );
                                    do {
                                       iVar42 = iVar42 + 1;
                                       *(int*)( phVar47 + 4 ) = iVar42;
                                       uVar6 = *puVar45;
                                       puVar34[2] = 0;
                                       *puVar34 = uVar6;
                                       uVar41 = puVar45[3];
                                       puVar34[3] = 0;
                                       *(undefined8*)( puVar34 + 4 ) = 0;
                                       if (uVar41 != 0) {
                                          if (uVar41 < 0x10000000) {
                                             pvVar10 = malloc((ulong)uVar41 << 4);
                                             if (pvVar10 != (void*)0x0) {
                                                *(void**)( puVar34 + 4 ) = pvVar10;
                                                lVar29 = *(long*)( puVar45 + 4 );
                                                puVar34[2] = uVar41;
                                                puVar34[3] = uVar41;
                                                sVar27 = 0;
                                                do {
                                                   uVar8 = ( (undefined8*)( lVar29 + sVar27 ) )[1];
                                                   *(undefined8*)( (long)pvVar10 + sVar27 ) = *(undefined8*)( lVar29 + sVar27 );
                                                   ( (undefined8*)( (long)pvVar10 + sVar27 ) )[1] = uVar8;
                                                   sVar27 = sVar27 + 0x10;
                                                }
 while ( (ulong)uVar41 << 4 != sVar27 );
                                                goto LAB_0010c0e2;
                                             }

                                          }

                                          puVar34[2] = 0xffffffff;
                                       }

                                       LAB_0010c0e2:bVar49 = *(byte*)( puVar45 + 6 );
                                       *(undefined8*)( puVar34 + 8 ) = *(undefined8*)( puVar45 + 8 );
                                       *(byte*)( puVar34 + 6 ) = *(byte*)( puVar34 + 6 ) & 0xe0 | bVar49 & 0x1f;
                                       puVar34[7] = puVar45[7];
                                       puVar34 = puVar34 + 10;
                                       puVar45 = puVar45 + 10;
                                    }
 while ( iVar38 != iVar42 );
                                 }

                              }

                              uVar43 = ( ulong ) * (uint*)( phVar12 + 0x24 );
                           }
;
                           goto LAB_0010b6fc;
                        }

                        if (uVar36 < 0x10000000) {
                           pvVar10 = *(void**)( phVar12 + 0x28 );
                           if (uVar36 != 0) goto LAB_0010bfa2;
                           free(pvVar10);
                           pvVar10 = (void*)0x0;
                           goto LAB_0010bfc2;
                        }

                     }

                     *(uint*)( phVar12 + 0x20 ) = ~uVar41;
                  }

                  LAB_0010b6fc:uVar17 = hb_blob_reference(uVar17);
                  *(undefined8*)( phVar12 + 0x38 ) = uVar17;
               }

               *(hb_vector_t<CFF::parsed_cs_str_t,false>**)( lVar31 + 0x130 ) = phVar12;
            }

            uVar17 = 1;
            goto LAB_0010a962;
         }

      }

   }

   LAB_0010a960:uVar17 = 0;
   LAB_0010a962:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar17;
}
/* CFF::subr_subsetter_t<cff1_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned short, 2u> >,
   OT::cff1::accelerator_subset_t const, CFF::cff1_cs_interp_env_t, cff1_cs_opset_subr_subset_t,
   14u>::encode_str(CFF::parsed_cs_str_t const&, unsigned int, hb_vector_t<unsigned char, false>&,
   bool) const */uint CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::encode_str(subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u> *this, parsed_cs_str_t *param_1, uint param_2, hb_vector_t *param_3, bool param_4) {
   byte bVar1;
   uint uVar2;
   uint uVar3;
   undefined8 *puVar4;
   void *pvVar5;
   uint *puVar6;
   undefined8 *puVar7;
   long lVar8;
   ulong uVar9;
   int iVar10;
   uint uVar11;
   undefined8 *puVar12;
   uchar uVar13;
   uint uVar14;
   undefined *puVar15;
   uint *puVar16;
   undefined8 *puVar17;
   long in_FS_OFFSET;
   byte bVar18;
   int local_4c;
   hb_vector_t *local_48;
   long local_40;
   bVar18 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((int)*(uint*)param_3 < 0) {
      *(uint*)param_3 = ~*(uint *)param_3;
   }

   lVar8 = *(long*)( this + 8 );
   *(undefined4*)( param_3 + 4 ) = 0;
   uVar14 = 0;
   uVar3 = *(uint*)( lVar8 + 0x14 );
   local_48 = param_3;
   if (param_4) {
      uVar14 = 0;
      if (( ( ( (byte)param_1[0x18] & 8 ) != 0 ) && ( ( uVar3 & 1 ) != 0 ) ) && ( ( (byte)param_1[0x18] & 2 ) != 0 )) {
         str_encoder_t::encode_num_cs((str_encoder_t*)&local_48, (number_t*)param_1);
         uVar14 = *(uint*)( param_1 + 0x1c );
         if (uVar14 == 0xffff) {
            uVar14 = *(uint*)( param_3 + 4 );
         }
 else if (uVar14 < 0x100) {
            str_encoder_t::encode_byte((str_encoder_t*)param_3, (uchar)uVar14);
            uVar14 = *(uint*)( param_3 + 4 );
         }
 else {
            str_encoder_t::encode_byte((str_encoder_t*)param_3, '\f');
            str_encoder_t::encode_byte((str_encoder_t*)param_3, (uchar)uVar14);
            uVar14 = *(uint*)( param_3 + 4 );
         }

      }

   }

   puVar12 = *(undefined8**)( param_1 + 0x10 );
   puVar17 = puVar12 + ( ulong ) * (uint*)( param_1 + 0xc ) * 2;
   if (puVar12 == puVar17) {
      uVar2 = *(uint*)param_3;
      uVar11 = uVar14;
   }
 else {
      iVar10 = 0;
      puVar4 = puVar12;
      do {
         while (true) {
            iVar10 = iVar10 + ( uint ) * (byte*)( (long)puVar4 + 0xc );
            if (( *(int*)( puVar4 + 1 ) != 0x1d ) && ( *(int*)( puVar4 + 1 ) != 10 )) break;
            puVar4 = puVar4 + 2;
            iVar10 = iVar10 + 3;
            if (puVar17 == puVar4) goto LAB_0010c308;
         }
;
         puVar4 = puVar4 + 2;
      }
 while ( puVar17 != puVar4 );
      LAB_0010c308:uVar2 = *(uint*)param_3;
      uVar11 = iVar10 + uVar14;
   }

   if ((int)uVar2 < 0) {
      uVar3 = 0;
      goto LAB_0010c4f3;
   }

   if (uVar14 <= uVar11) {
      uVar14 = uVar11;
   }

   if (uVar2 < uVar14) {
      pvVar5 = *(void**)( param_3 + 8 );
      LAB_0010c329:pvVar5 = realloc(pvVar5, (ulong)uVar14);
      if (pvVar5 == (void*)0x0) {
         if (*(uint*)param_3 < uVar14) {
            *(uint*)param_3 = ~*(uint *)param_3;
            uVar3 = 0;
            goto LAB_0010c4f3;
         }

      }
 else {
         LAB_0010c344:*(void**)( param_3 + 8 ) = pvVar5;
         *(uint*)param_3 = uVar14;
      }

      puVar12 = *(undefined8**)( param_1 + 0x10 );
      puVar17 = puVar12 + ( ulong ) * (uint*)( param_1 + 0xc ) * 2;
   }
 else if (uVar14<uVar2> > 2) {
      pvVar5 = *(void**)( param_3 + 8 );
      if (uVar14 != 0) goto LAB_0010c329;
      free(pvVar5);
      pvVar5 = (void*)0x0;
      goto LAB_0010c344;
   }

   if (puVar17 != puVar12) {
      do {
         if (( uVar3 & 1 ) != 0) {
            while (*(char*)( (long)puVar12 + 0xd ) != '\0') {
               puVar12 = puVar12 + 2;
               if (puVar17 == puVar12) goto LAB_0010c4eb;
            }
;
         }

         if (*(int*)( puVar12 + 1 ) == 10) {
            puVar15 = &_hb_NullPool;
            if (param_2 < *(uint*)( this + 0xd4 )) {
               puVar15 = (undefined*)( (ulong)param_2 * 0x48 + *(long*)( this + 0xd8 ) );
            }

            lVar8 = *(long*)( puVar15 + 0x28 );
            puVar16 = (uint*)&minus_1;
            if (lVar8 != 0) {
               uVar9 = ( ulong )(( uint ) * (ushort*)( (long)puVar12 + 0xe ) * -0x61c8864f & 0x3fffffff) % ( ulong ) * (uint*)( puVar15 + 0x20 );
               puVar6 = (uint*)( lVar8 + uVar9 * 0xc );
               bVar1 = (byte)puVar6[1];
               if (( bVar1 & 2 ) != 0) {
                  iVar10 = 0;
                  do {
                     if (( uint ) * (ushort*)( (long)puVar12 + 0xe ) == *puVar6) {
                        puVar16 = (uint*)&minus_1;
                        if (( bVar1 & 1 ) != 0) {
                           puVar16 = puVar6 + 2;
                        }

                        goto LAB_0010c63a;
                     }

                     iVar10 = iVar10 + 1;
                     uVar9 = ( ulong )((int)uVar9 + iVar10 & *(uint*)( puVar15 + 0x1c ));
                     puVar6 = (uint*)( lVar8 + uVar9 * 0xc );
                     bVar1 = (byte)puVar6[1];
                  }
 while ( ( bVar1 & 2 ) != 0 );
                  puVar16 = (uint*)&minus_1;
               }

            }

            LAB_0010c63a:local_4c = *puVar16 - *(int*)( puVar15 + 0x40 );
            if (local_4c + 0x46bU < 0x8d7) goto LAB_0010c455;
            LAB_0010c652:if (0x7fff < local_4c) {
               local_4c = 0x7fff;
            }

            if (local_4c < -0x8000) {
               local_4c = -0x8000;
            }

            str_encoder_t::encode_byte((str_encoder_t*)param_3, '\x1c');
            uVar13 = ( uchar )((uint)local_4c >> 8);
            LAB_0010c47f:str_encoder_t::encode_byte((str_encoder_t*)param_3, uVar13);
            str_encoder_t::encode_byte((str_encoder_t*)param_3, (uchar)local_4c);
         }
 else if (*(int*)( puVar12 + 1 ) == 0x1d) {
            lVar8 = *(long*)( this + 0xb0 );
            puVar16 = (uint*)&minus_1;
            if (lVar8 != 0) {
               uVar9 = ( ulong )(( uint ) * (ushort*)( (long)puVar12 + 0xe ) * -0x61c8864f & 0x3fffffff) % ( ulong ) * (uint*)( this + 0xa8 );
               puVar6 = (uint*)( lVar8 + uVar9 * 0xc );
               bVar1 = (byte)puVar6[1];
               if (( bVar1 & 2 ) != 0) {
                  iVar10 = 0;
                  do {
                     if (( uint ) * (ushort*)( (long)puVar12 + 0xe ) == *puVar6) {
                        puVar16 = (uint*)&minus_1;
                        if (( bVar1 & 1 ) != 0) {
                           puVar16 = puVar6 + 2;
                        }

                        goto LAB_0010c439;
                     }

                     iVar10 = iVar10 + 1;
                     uVar9 = ( ulong )((int)uVar9 + iVar10 & *(uint*)( this + 0xa4 ));
                     puVar6 = (uint*)( lVar8 + uVar9 * 0xc );
                     bVar1 = (byte)puVar6[1];
                  }
 while ( ( bVar1 & 2 ) != 0 );
                  puVar16 = (uint*)&minus_1;
               }

            }

            LAB_0010c439:local_4c = *puVar16 - *(int*)( this + 200 );
            if (0x8d6 < local_4c + 0x46bU) goto LAB_0010c652;
            LAB_0010c455:if (local_4c + 0x6bU < 0xd7) {
               str_encoder_t::encode_byte((str_encoder_t*)param_3, (char)local_4c + 0x8b);
            }
 else {
               if (0 < local_4c) {
                  local_4c = local_4c + -0x6c;
                  uVar13 = (char)( (uint)local_4c >> 8 ) + 0xf7;
                  goto LAB_0010c47f;
               }

               str_encoder_t::encode_byte((str_encoder_t*)param_3, (char)( ( uint )(-0x6c - local_4c) >> 8 ) + 0xfb);
               str_encoder_t::encode_byte((str_encoder_t*)param_3, ( uchar )(-0x6c - local_4c));
            }

         }

         uVar14 = *(uint*)( param_3 + 4 );
         bVar1 = *(byte*)( (long)puVar12 + 0xc );
         uVar9 = (ulong)bVar1;
         puVar4 = (undefined8*)*puVar12;
         puVar7 = (undefined8*)( (ulong)uVar14 + *(long*)( param_3 + 8 ) );
         if (uVar9 != 0) {
            if (bVar1 < 8) {
               if (( bVar1 & 4 ) == 0) {
                  if (bVar1 != 0) {
                     *(undefined1*)puVar7 = *(undefined1*)puVar4;
                     if (( bVar1 & 2 ) == 0) goto LAB_0010c4d5;
                     *(undefined2*)( (long)puVar7 + ( uVar9 - 2 ) ) = *(undefined2*)( (long)puVar4 + ( uVar9 - 2 ) );
                     uVar14 = *(uint*)( param_3 + 4 );
                  }

               }
 else {
                  *(undefined4*)puVar7 = *(undefined4*)puVar4;
                  *(undefined4*)( (long)puVar7 + ( uVar9 - 4 ) ) = *(undefined4*)( (long)puVar4 + ( uVar9 - 4 ) );
                  uVar14 = *(uint*)( param_3 + 4 );
               }

            }
 else {
               *puVar7 = *puVar4;
               *(undefined8*)( (long)puVar7 + ( uVar9 - 8 ) ) = *(undefined8*)( (long)puVar4 + ( uVar9 - 8 ) );
               lVar8 = (long)puVar7 - (long)( ( ulong )(puVar7 + 1) & 0xfffffffffffffff8 );
               puVar4 = (undefined8*)( (long)puVar4 - lVar8 );
               puVar7 = (undefined8*)( ( ulong )(puVar7 + 1) & 0xfffffffffffffff8 );
               for (uVar9 = ( ulong )((int)lVar8 + (uint)bVar1 >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
                  *puVar7 = *puVar4;
                  puVar4 = puVar4 + (ulong)bVar18 * -2 + 1;
                  puVar7 = puVar7 + (ulong)bVar18 * -2 + 1;
               }

               LAB_0010c4d5:uVar14 = *(uint*)( param_3 + 4 );
            }

         }

         puVar12 = puVar12 + 2;
         *(uint*)( param_3 + 4 ) = uVar14 + bVar1;
      }
 while ( puVar17 != puVar12 );
   }

   LAB_0010c4eb:uVar3 = ~*(uint *)param_3 >> 0x1f;
   LAB_0010c4f3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* bool CFF::FDArray<OT::IntType<unsigned short, 2u> >::serialize<CFF::cff1_font_dict_values_mod_t,
   CFF::cff1_font_dict_values_mod_t, hb_zip_iter_t<hb_array_t<CFF::cff1_font_dict_values_mod_t
   const>, hb_array_t<CFF::cff1_font_dict_values_mod_t const> >,
   cff1_font_dict_op_serializer_t>(hb_serialize_context_t*,
   hb_zip_iter_t<hb_array_t<CFF::cff1_font_dict_values_mod_t const>,
   hb_array_t<CFF::cff1_font_dict_values_mod_t const> >, cff1_font_dict_op_serializer_t&) */bool CFF::FDArray<OT::IntType<unsigned_short,2u>>::serialize<CFF::cff1_font_dict_values_mod_t,CFF::cff1_font_dict_values_mod_t,hb_zip_iter_t<hb_array_t<CFF::cff1_font_dict_values_mod_t_const>,hb_array_t<CFF::cff1_font_dict_values_mod_t_const>>,cff1_font_dict_op_serializer_t>(ushort *param_1, hb_serialize_context_t *param_2) {
   undefined1 *puVar1;
   long *plVar2;
   long *plVar3;
   byte bVar4;
   int iVar5;
   undefined8 uVar6;
   ushort *puVar7;
   undefined8 uVar8;
   int aiVar9[2];
   int *__ptr;
   char cVar10;
   ushort uVar11;
   undefined8 *puVar12;
   long lVar13;
   ulong uVar14;
   long lVar15;
   uint extraout_EDX;
   undefined2 *puVar16;
   undefined1 *puVar17;
   long lVar18;
   uint uVar19;
   int *piVar20;
   int *piVar21;
   undefined2 *puVar22;
   void *__s;
   undefined2 *puVar23;
   undefined2 *puVar24;
   long *plVar25;
   int iVar26;
   ulong uVar27;
   int iVar28;
   long in_FS_OFFSET;
   bool bVar29;
   long *in_stack_00000008;
   uint in_stack_00000010;
   long in_stack_00000018;
   uint in_stack_00000020;
   uint *local_90;
   int local_58[2];
   int *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar14 = (ulong)in_stack_00000010;
   local_58[0] = 0;
   local_58[1] = 0;
   local_50 = (int*)0x0;
   if (in_stack_00000020 <= in_stack_00000010) {
      in_stack_00000010 = in_stack_00000020;
   }

   hb_vector_t<unsigned_int,false>::alloc((hb_vector_t<unsigned_int,false>*)local_58, in_stack_00000010, false);
   if (*(int*)( param_2 + 0x2c ) == 0) {
      puVar12 = (undefined8*)hb_pool_t<hb_serialize_context_t::object_t,32u>::alloc((hb_pool_t<hb_serialize_context_t::object_t,32u>*)( param_2 + 0x30 ));
      puVar24 = *(undefined2**)( param_2 + 8 );
      if (puVar12 == (undefined8*)0x0) {
         if (*(int*)( param_2 + 0x2c ) == 0) {
            *(undefined4*)( param_2 + 0x2c ) = 1;
         }

      }
 else {
         uVar8 = *(undefined8*)( param_2 + 0x10 );
         uVar6 = *(undefined8*)( param_2 + 0x48 );
         *puVar12 = *(undefined8*)( param_2 + 8 );
         puVar12[1] = uVar8;
         puVar12[6] = uVar6;
         *(undefined8**)( param_2 + 0x48 ) = puVar12;
      }

   }
 else {
      puVar24 = *(undefined2**)( param_2 + 8 );
   }

   local_90 = (uint*)( in_stack_00000018 + 0xc );
   plVar2 = in_stack_00000008 + uVar14 * 3;
   plVar3 = in_stack_00000008 + (ulong)in_stack_00000020 * 3;
   puVar16 = puVar24;
   iVar28 = local_58[0];
   if (plVar2 != in_stack_00000008) {
      LAB_0010c8e0:if (plVar3 != in_stack_00000008) {
         lVar15 = *in_stack_00000008;
         lVar18 = 0;
         iVar26 = 0;
         puVar23 = puVar16;
         if (*(int*)( lVar15 + 0xc ) != 0) {
            LAB_0010c910:iVar5 = *(int*)( param_2 + 0x2c );
            plVar25 = (long*)( lVar18 * 0x10 + *(long*)( lVar15 + 0x10 ) );
            iVar26 = (int)puVar16;
            if ((int)plVar25[1] == 0x126) {
               if (iVar5 != 0) goto LAB_0010c9ad;
               uVar19 = local_90[2];
               if (*(undefined2**)( param_2 + 0x10 ) != puVar23 && -1 < (long)*(undefined2**)( param_2 + 0x10 ) - (long)puVar23) {
                  hb_memset(puVar23, 1, 0);
                  puVar1 = *(undefined1**)( param_2 + 8 );
                  puVar23 = (undefined2*)( puVar1 + 1 );
                  *(undefined2**)( param_2 + 8 ) = puVar23;
                  if (puVar1 == (undefined1*)0x0) {
                     LAB_0010cf9f:puVar23 = (undefined2*)0x1;
                     iVar26 = 1 - iVar26;
                     goto LAB_0010c9b9;
                  }

                  *puVar1 = 0x1c;
                  if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010c9ad;
                  if (1 < *(long*)( param_2 + 0x10 ) - (long)puVar23) {
                     hb_memset(puVar23, 2, extraout_EDX);
                     puVar7 = *(ushort**)( param_2 + 8 );
                     *(ushort**)( param_2 + 8 ) = puVar7 + 1;
                     if (puVar7 != (ushort*)0x0) {
                        uVar11 = (ushort)uVar19;
                        *puVar7 = uVar11 << 8 | uVar11 >> 8;
                        if ((long)(short)( ( uVar11 >> 8 ) << 8 | uVar11 & 0xff ) != (ulong)uVar19) {
                           LAB_0010cb77:puVar23 = *(undefined2**)( param_2 + 8 );
                           *(uint*)( param_2 + 0x2c ) = *(uint*)( param_2 + 0x2c ) | 8;
                           iVar26 = (int)puVar23 - iVar26;
                           goto LAB_0010c9b9;
                        }

                        puVar23 = *(undefined2**)( param_2 + 8 );
                        if (*(int*)( param_2 + 0x2c ) != 0) {
                           iVar26 = (int)puVar23 - iVar26;
                           goto LAB_0010c9b9;
                        }

                        if (*(long*)( param_2 + 0x10 ) - (long)puVar23 < 2) {
                           *(undefined4*)( param_2 + 0x2c ) = 4;
                           iVar26 = (int)puVar23 - iVar26;
                           goto LAB_0010c9b9;
                        }

                        puVar22 = puVar23 + 1;
                        *(undefined2**)( param_2 + 8 ) = puVar22;
                        if (puVar23 != (undefined2*)0x0) {
                           *puVar23 = _LC18;
                           goto LAB_0010c99d;
                        }

                     }

                     LAB_0010cf86:puVar23 = (undefined2*)0x2;
                     iVar26 = 2 - iVar26;
                     goto LAB_0010c9b9;
                  }

               }

            }
 else {
               if ((int)plVar25[1] != 0x12) {
                  if (iVar5 != 0) goto LAB_0010c9ad;
                  bVar4 = *(byte*)( (long)plVar25 + 0xc );
                  if (*(long*)( param_2 + 0x10 ) - (long)puVar23 < (long)(ulong)bVar4) goto LAB_0010cbd8;
                  hb_memset(puVar23, (uint)bVar4, ( uint )(*(long*)( param_2 + 0x10 ) - (long)puVar23));
                  lVar15 = *(long*)( param_2 + 8 );
                  puVar22 = (undefined2*)( lVar15 + (ulong)bVar4 );
                  *(undefined2**)( param_2 + 8 ) = puVar22;
                  puVar23 = puVar22;
                  if (lVar15 == 0) goto LAB_0010c9ad;
                  if (*(char*)( (long)plVar25 + 0xc ) != '\0') {
                     lVar13 = 0;
                     do {
                        *(undefined1*)( lVar15 + lVar13 ) = *(undefined1*)( *plVar25 + lVar13 );
                        lVar13 = lVar13 + 1;
                     }
 while ( (uint)lVar13 < ( uint ) * (byte*)( (long)plVar25 + 0xc ) );
                     LAB_0010c999:puVar22 = *(undefined2**)( param_2 + 8 );
                  }

                  LAB_0010c99d:lVar15 = *in_stack_00000008;
                  lVar18 = lVar18 + 1;
                  puVar23 = puVar22;
                  if (*(uint*)( lVar15 + 0xc ) <= (uint)lVar18) goto LAB_0010c9ad;
                  goto LAB_0010c910;
               }

               if (iVar5 != 0) goto LAB_0010c9ad;
               uVar19 = *local_90;
               if (*(undefined2**)( param_2 + 0x10 ) == puVar23 || (long)*(undefined2**)( param_2 + 0x10 ) - (long)puVar23 < 0) goto LAB_0010cbd8;
               *(undefined1*)puVar23 = 0;
               puVar1 = *(undefined1**)( param_2 + 8 );
               puVar23 = (undefined2*)( puVar1 + 1 );
               *(undefined2**)( param_2 + 8 ) = puVar23;
               if (puVar1 == (undefined1*)0x0) goto LAB_0010cf9f;
               *puVar1 = 0x1c;
               if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010c9ad;
               if (1 < *(long*)( param_2 + 0x10 ) - (long)puVar23) {
                  hb_memset(puVar23, 2, uVar19);
                  puVar7 = *(ushort**)( param_2 + 8 );
                  *(ushort**)( param_2 + 8 ) = puVar7 + 1;
                  if (puVar7 == (ushort*)0x0) goto LAB_0010cf86;
                  uVar11 = (ushort)uVar19;
                  *puVar7 = uVar11 << 8 | uVar11 >> 8;
                  if ((long)(short)( ( uVar11 >> 8 ) << 8 | uVar11 & 0xff ) != (ulong)uVar19) goto LAB_0010cb77;
                  bVar29 = Dict::serialize_link_op<OT::IntType<int,4u>,29>(param_2, (int)plVar25[1], local_90[1], 2);
                  if (bVar29) goto LAB_0010c999;
                  puVar23 = *(undefined2**)( param_2 + 8 );
                  iVar26 = (int)puVar23 - iVar26;
                  goto LAB_0010c9b9;
               }

            }

            LAB_0010cbd8:*(undefined4*)( param_2 + 0x2c ) = 4;
            iVar26 = (int)puVar23 - iVar26;
         }

         goto LAB_0010c9b9;
      }

   }

   LAB_0010c9f0:hb_serialize_context_t::pop_pack(param_2, false);
   __ptr = local_50;
   aiVar9 = local_58;
   if (iVar28 < 0) {
      bVar29 = false;
   }
 else {
      iVar26 = local_58[1];
      uVar14 = (ulong)(uint)local_58[1];
      uVar19 = ( (int)puVar16 - (int)puVar24 ) + 1;
      if (uVar19 != 0) {
         iVar5 = 0x1f;
         if (uVar19 != 0) {
            for (; uVar19 >> iVar5 == 0; iVar5 = iVar5 + -1) {}
         }

         uVar19 = iVar5 + 8U >> 3;
      }

      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010ce0f;
      uVar27 = (long)( param_1 + 1 ) - (long)*(void**)( param_2 + 8 );
      if (( 0x7fffffff < uVar27 ) || ( *(ushort**)( param_2 + 0x10 ) < param_1 + 1 )) goto LAB_0010ce08;
      hb_memset(*(void**)( param_2 + 8 ), (int)uVar27, 0x80000000);
      lVar15 = *(long*)( param_2 + 8 );
      *(ulong*)( param_2 + 8 ) = uVar27 + lVar15;
      if (lVar15 == 0) {
         LAB_0010ce0f:bVar29 = false;
      }
 else {
         uVar11 = aiVar9[1]._0_2_;
         *param_1 = uVar11 << 8 | uVar11 >> 8;
         if (uVar11 != 0) {
            if (*(int*)( param_2 + 0x2c ) == 0) {
               __s = *(void**)( param_2 + 8 );
               puVar1 = (undefined1*)( (long)param_1 + 3 );
               uVar27 = (long)puVar1 - (long)__s;
               if (( uVar27 < 0x80000000 ) && ( puVar1 <= *(undefined1**)( param_2 + 0x10 ) )) {
                  puVar17 = puVar1;
                  if ((int)uVar27 != 0) {
                     memset(__s, 0, uVar27);
                     __s = *(void**)( param_2 + 8 );
                     puVar17 = (undefined1*)( (long)__s + uVar27 );
                  }

                  *(undefined1**)( param_2 + 8 ) = puVar17;
                  if (__s != (void*)0x0) {
                     *(char*)( param_1 + 1 ) = (char)uVar19;
                     uVar27 = ( ulong )(( ( ushort )(*param_1 << 8 | *param_1 >> 8) + 1 ) * uVar19);
                     if (*(int*)( param_2 + 0x2c ) == 0) {
                        if ((long)uVar27 <= *(long*)( param_2 + 0x10 ) - (long)puVar17) {
                           *(undefined1**)( param_2 + 8 ) = puVar17 + uVar27;
                           if (uVar19 == 3) {
                              iVar26 = 1;
                              puVar17 = puVar1;
                              piVar20 = __ptr;
                              do {
                                 puVar17[1] = (char)( (uint)iVar26 >> 8 );
                                 piVar21 = piVar20 + 1;
                                 puVar17[2] = (char)iVar26;
                                 *puVar17 = (char)( (uint)iVar26 >> 0x10 );
                                 iVar26 = iVar26 + *piVar20;
                                 puVar17 = puVar17 + 3;
                                 piVar20 = piVar21;
                              }
 while ( __ptr + uVar14 != piVar21 );
                              *(ushort*)( puVar1 + ( ( ulong )((long)( __ptr + uVar14 ) + ( -4 - (long)__ptr )) >> 2 ) * 3 + 3 + 1 ) = (ushort)iVar26 << 8 | (ushort)iVar26 >> 8;
                              puVar1[( ( ulong )((long)( __ptr + uVar14 ) + ( -4 - (long)__ptr )) >> 2 ) * 3 + 3] = (char)( (uint)iVar26 >> 0x10 );
                           }
 else if (uVar19 == 4) {
                              *(undefined4*)( (long)param_1 + 3 ) = 0x1000000;
                              uVar19 = *__ptr + 1;
                              if (__ptr + (uint)iVar26 != __ptr + 1) {
                                 lVar15 = 0;
                                 do {
                                    *(uint*)( (long)param_1 + lVar15 + 7 ) = uVar19 >> 0x18 | ( uVar19 & 0xff0000 ) >> 8 | ( uVar19 & 0xff00 ) << 8 | uVar19 << 0x18;
                                    uVar19 = uVar19 + *(int*)( (long)__ptr + lVar15 + 4 );
                                    lVar15 = lVar15 + 4;
                                 }
 while ( (long)( __ptr + (uint)iVar26 ) + ( -4 - (long)__ptr ) != lVar15 );
                              }

                              *(uint*)( (long)param_1 + (ulong)(uint)iVar26 * 4 + 3 ) = uVar19 >> 0x18 | ( uVar19 & 0xff0000 ) >> 8 | ( uVar19 & 0xff00 ) << 8 | uVar19 << 0x18;
                           }
 else if (uVar19 == 1) {
                              uVar27 = uVar14 * 4 - 4 >> 2;
                              iVar26 = 1;
                              uVar14 = 0;
                              do {
                                 *(char*)( (long)param_1 + uVar14 + 3 ) = (char)iVar26;
                                 iVar26 = iVar26 + __ptr[uVar14];
                                 bVar29 = uVar14 != uVar27;
                                 uVar14 = uVar14 + 1;
                              }
 while ( bVar29 );
                              *(char*)( (long)param_1 + uVar27 + 4 ) = (char)iVar26;
                           }
 else if (uVar19 == 2) {
                              piVar20 = __ptr + uVar14;
                              *(undefined2*)( (long)param_1 + 3 ) = 0x100;
                              iVar26 = *__ptr + 1;
                              uVar11 = (ushort)iVar26;
                              if (piVar20 != __ptr + 1) {
                                 lVar15 = 0;
                                 do {
                                    *(ushort*)( (long)param_1 + lVar15 + 5 ) = (ushort)iVar26 << 8 | (ushort)iVar26 >> 8;
                                    iVar26 = iVar26 + *(int*)( (long)__ptr + lVar15 * 2 + 4 );
                                    uVar11 = (ushort)iVar26;
                                    lVar15 = lVar15 + 2;
                                 }
 while ( ( ( ulong )((long)piVar20 + ( -8 - (long)__ptr )) >> 2 ) * 2 + 2 != lVar15 );
                              }

                              *(ushort*)( (long)param_1 + ( ( ulong )((long)piVar20 + ( -4 - (long)__ptr )) >> 2 ) * 2 + 5 ) = uVar11 << 8 | uVar11 >> 8;
                           }

                           goto LAB_0010caa3;
                        }

                        goto LAB_0010ce08;
                     }

                  }

               }
 else {
                  LAB_0010ce08:*(undefined4*)( param_2 + 0x2c ) = 4;
               }

            }

            goto LAB_0010ce0f;
         }

         LAB_0010caa3:bVar29 = true;
      }

      if (iVar28 == 0) goto LAB_0010cab1;
   }

   free(__ptr);
   LAB_0010cab1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar29;
   LAB_0010c9ad:iVar26 = (int)puVar23 - iVar26;
   LAB_0010c9b9:puVar16 = puVar23;
   if (iVar28 <= local_58[1]) {
      cVar10 = hb_vector_t<unsigned_int,false>::alloc((hb_vector_t<unsigned_int,false>*)local_58, local_58[1] + 1, false);
      iVar28 = local_58[0];
      if (cVar10 == '\0') {
         __hb_CrapPool = __hb_NullPool;
         puVar16 = *(undefined2**)( param_2 + 8 );
         goto LAB_0010c9d9;
      }

      puVar16 = *(undefined2**)( param_2 + 8 );
   }

   uVar14 = (ulong)(uint)local_58[1];
   local_58[1] = local_58[1] + 1;
   local_50[uVar14] = iVar26;
   LAB_0010c9d9:local_90 = local_90 + 6;
   in_stack_00000008 = in_stack_00000008 + 3;
   if (plVar2 == in_stack_00000008) goto LAB_0010c9f0;
   goto LAB_0010c8e0;
}
/* hb_vector_t<hb_vector_t<unsigned char, false>, false>::resize(int, bool, bool) */undefined8 hb_vector_t<hb_vector_t<unsigned_char,false>,false>::resize(hb_vector_t<hb_vector_t<unsigned_char,false>,false> *this, int param_1, bool param_2, bool param_3) {
   int *piVar1;
   uint uVar2;
   uint uVar3;
   uint uVar4;
   void *pvVar5;
   uint uVar6;
   ulong uVar7;
   int *piVar8;
   int *piVar9;
   uVar3 = 0;
   if (-1 < param_1) {
      uVar3 = param_1;
   }

   uVar4 = *(uint*)this;
   if ((int)uVar4 < 0) {
      return 0;
   }

   if (param_3) {
      uVar6 = *(uint*)( this + 4 );
      uVar2 = uVar6;
      if (uVar6 <= uVar3) {
         uVar2 = uVar3;
      }

      uVar7 = (ulong)uVar2;
      if (uVar4 < uVar2) {
         if (0xfffffff < uVar2) goto LAB_0010d052;
         pvVar5 = *(void**)( this + 8 );
         LAB_0010d124:uVar6 = (uint)uVar7;
         pvVar5 = realloc(pvVar5, uVar7 << 4);
         if (pvVar5 == (void*)0x0) {
            uVar4 = *(uint*)this;
            if (uVar4 < uVar6) {
               LAB_0010d052:*(uint*)this = ~uVar4;
               return 0;
            }

            goto LAB_0010d00d;
         }

      }
 else {
         if (uVar4 >> 2 <= uVar2) goto LAB_0010d010;
         if (0xfffffff < uVar2) goto LAB_0010d052;
         pvVar5 = *(void**)( this + 8 );
         if (uVar2 != 0) goto LAB_0010d124;
         free(pvVar5);
         uVar6 = 0;
         pvVar5 = (void*)0x0;
      }

      *(void**)( this + 8 ) = pvVar5;
      *(uint*)this = uVar6;
   }
 else {
      uVar6 = uVar4;
      if (uVar4 < uVar3) {
         do {
            uVar6 = uVar6 + 8 + ( uVar6 >> 1 );
         }
 while ( uVar6 < uVar3 );
         if (0xfffffff < uVar6) goto LAB_0010d052;
         pvVar5 = *(void**)( this + 8 );
         uVar7 = (ulong)uVar6;
         goto LAB_0010d124;
      }

   }

   LAB_0010d00d:uVar6 = *(uint*)( this + 4 );
   LAB_0010d010:if (uVar6 < uVar3) {
      if (param_2) {
         hb_memset((void*)( (ulong)uVar6 * 0x10 + *(long*)( this + 8 ) ), ( uVar3 - uVar6 ) * 0x10, uVar6);
      }

   }
 else if (( uVar3 < uVar6 ) && ( param_2 )) {
      piVar1 = (int*)( *(long*)( this + 8 ) + -0x10 + (ulong)uVar6 * 0x10 );
      piVar8 = piVar1;
      do {
         piVar9 = piVar8 + -4;
         if (*piVar8 != 0) {
            free(*(void**)( piVar8 + 2 ));
         }

         piVar8 = piVar9;
      }
 while ( piVar1 + ( ulong )(uVar6 - uVar3) * -4 != piVar9 );
   }

   *(uint*)( this + 4 ) = uVar3;
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::subr_subsetter_t<cff1_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned short, 2u> >,
   OT::cff1::accelerator_subset_t const, CFF::cff1_cs_interp_env_t, cff1_cs_opset_subr_subset_t,
   14u>::encode_charstrings(hb_vector_t<hb_vector_t<unsigned char, false>, false>&, bool) const */ulong CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::encode_charstrings(subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u> *this, hb_vector_t *param_1, bool param_2) {
   uint *puVar1;
   uint uVar2;
   uint uVar3;
   char *pcVar4;
   undefined8 uVar5;
   char cVar6;
   uint uVar7;
   ulong uVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   ulong uVar12;
   uint uVar13;
   ushort *puVar14;
   uint uVar15;
   int iVar16;
   parsed_cs_str_t *ppVar17;
   int iVar18;
   undefined8 *puVar19;
   char *pcVar20;
   uint *puVar21;
   uVar2 = *(uint*)( *(long*)( this + 8 ) + 0x58 );
   uVar8 = hb_vector_t<hb_vector_t<unsigned_char,false>,false>::resize((hb_vector_t<hb_vector_t<unsigned_char,false>,false>*)param_1, uVar2, true, true);
   if ((char)uVar8 == '\0') {
      LAB_0010d328:uVar8 = 0;
   }
 else {
      uVar15 = 0;
      puVar21 = *(uint**)( *(long*)( this + 8 ) + 200 );
      puVar1 = puVar21 + ( ulong ) * (uint*)( *(long*)( this + 8 ) + 0xc4 ) * 2;
      if (puVar1 != puVar21) {
         do {
            uVar5 = _endchar_str;
            uVar3 = *puVar21;
            uVar7 = puVar21[1];
            uVar13 = uVar15;
            if (uVar15 < uVar3) {
               lVar11 = *(long*)( param_1 + 8 );
               lVar9 = (ulong)uVar15 * 0x10 + lVar11;
               do {
                  *(undefined4*)( lVar9 + 4 ) = 1;
                  lVar10 = lVar9 + 0x10;
                  *(undefined8*)( lVar9 + 8 ) = uVar5;
                  lVar9 = lVar10;
                  uVar13 = uVar3;
               }
 while ( lVar10 != lVar11 + 0x10 + ( ( ulong )(( uVar3 - uVar15 ) - 1) + (ulong)uVar15 ) * 0x10 );
            }

            lVar11 = *(long*)this;
            uVar15 = uVar13 + 1;
            pcVar4 = *(char**)( lVar11 + 0x88 );
            if (pcVar4 == &_hb_NullPool) {
               LAB_0010d340:uVar7 = 0;
               LAB_0010d342:if (*(uint*)( lVar11 + 0x90 ) <= uVar7) goto LAB_0010d328;
            }
 else {
               if (*pcVar4 == '\0') {
                  uVar7 = (uint)(byte)pcVar4[(ulong)uVar7 + 1];
                  lVar11 = *(long*)this;
                  goto LAB_0010d342;
               }

               if (*pcVar4 != '\x03') goto LAB_0010d340;
               pcVar20 = &_hb_NullPool;
               if (*(short*)( pcVar4 + 1 ) != 0) {
                  pcVar20 = pcVar4 + 3;
               }

               iVar16 = ( ushort )(*(ushort*)( pcVar4 + 1 ) << 8 | *(ushort*)( pcVar4 + 1 ) >> 8) - 2;
               if (-1 < iVar16) {
                  iVar18 = 0;
                  do {
                     while (true) {
                        uVar13 = ( uint )(iVar18 + iVar16) >> 1;
                        puVar14 = (ushort*)( pcVar20 + (ulong)uVar13 * 3 );
                        if (( ushort )(*puVar14 << 8 | *puVar14 >> 8) <= uVar7) break;
                        iVar16 = uVar13 - 1;
                        if (iVar16 < iVar18) goto LAB_0010d2db;
                     }
;
                     if (uVar7 < ( ushort )(*(ushort*)( (long)puVar14 + 3 ) << 8 | *(ushort*)( (long)puVar14 + 3 ) >> 8)) goto LAB_0010d310;
                     iVar18 = uVar13 + 1;
                  }
 while ( iVar18 <= iVar16 );
               }

               LAB_0010d2db:puVar14 = (ushort*)&_hb_NullPool;
               uVar7 = ( ushort )(*(ushort*)( pcVar4 + 1 ) << 8 | *(ushort*)( pcVar4 + 1 ) >> 8) - 1;
               if (uVar7 < ( ushort )(*(ushort*)( pcVar4 + 1 ) << 8 | *(ushort*)( pcVar4 + 1 ) >> 8)) {
                  puVar14 = (ushort*)( pcVar4 + (ulong)uVar7 * 3 + 3 );
               }

               LAB_0010d310:uVar7 = (uint)(byte)puVar14[1];
               if (*(uint*)( *(long*)this + 0x90 ) <= (uint)(byte)puVar14[1]) goto LAB_0010d328;
            }

            uVar12 = (ulong)uVar3;
            if (*(uint*)( this + 0x6c ) == 0) {
               ppVar17 = (parsed_cs_str_t*)&_hb_NullPool;
               if (uVar3 < *(uint*)( this + 0xe4 )) {
                  ppVar17 = (parsed_cs_str_t*)( *(long*)( this + 0xe8 ) + uVar12 * 0x28 );
               }

            }
 else {
               puVar19 = (undefined8*)&_hb_NullPool;
               if (uVar3 < *(uint*)( this + 0x6c )) {
                  puVar19 = (undefined8*)( *(long*)( this + 0x70 ) + uVar12 * 8 );
               }

               ppVar17 = (parsed_cs_str_t*)*puVar19;
            }

            cVar6 = encode_str(this, ppVar17, uVar7, (hb_vector_t*)( uVar12 * 0x10 + *(long*)( param_1 + 8 ) ), param_2);
            if (cVar6 == '\0') goto LAB_0010d328;
            puVar21 = puVar21 + 2;
         }
 while ( puVar1 != puVar21 );
         uVar8 = uVar8 & 0xff;
      }

      uVar5 = _endchar_str;
      if (uVar15 < uVar2) {
         lVar11 = *(long*)( param_1 + 8 );
         lVar9 = (ulong)uVar15 * 0x10 + lVar11;
         do {
            *(undefined4*)( lVar9 + 4 ) = 1;
            lVar10 = lVar9 + 0x10;
            *(undefined8*)( lVar9 + 8 ) = uVar5;
            lVar9 = lVar10;
         }
 while ( lVar11 + 0x10 + ( ( ulong )(( uVar2 - 1 ) - uVar15) + (ulong)uVar15 ) * 0x10 != lVar10 );
         return uVar8;
      }

   }

   return uVar8;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::cs_opset_t<CFF::number_t, cff1_cs_opset_flatten_t, CFF::cff1_cs_interp_env_t,
   CFF::flatten_param_t, CFF::path_procs_null_t<CFF::cff1_cs_interp_env_t, CFF::flatten_param_t>
   >::process_op(unsigned int, CFF::cff1_cs_interp_env_t&, CFF::flatten_param_t&) */void CFF::cs_opset_t<CFF::number_t,cff1_cs_opset_flatten_t,CFF::cff1_cs_interp_env_t,CFF::flatten_param_t,CFF::path_procs_null_t<CFF::cff1_cs_interp_env_t,CFF::flatten_param_t>>::process_op(uint param_1, cff1_cs_interp_env_t *param_2, flatten_param_t *param_3) {
   uint uVar1;
   str_encoder_t *this;
   undefined8 uVar2;
   undefined8 uVar3;
   int iVar4;
   uint uVar5;
   uchar *puVar6;
   uint *puVar7;
   cff1_cs_interp_env_t *pcVar8;
   undefined8 uVar9;
   uint uVar10;
   if (0x1f < param_1) {
      switch (param_1) {
         case 0xff:
      uVar10 = *(uint *)(param_2 + 0xc);
      uVar1 = *(uint *)(param_2 + 8);
      uVar5 = uVar10 + 4;
      if (uVar1 < uVar5) {
        return;
      }
      if (uVar10 < uVar1) {
        puVar7 = (uint *)((ulong)uVar10 + *(long *)param_2);
      }
      else {
        uVar5 = uVar1 + 5;
        *(uint *)(param_2 + 0xc) = uVar1 + 1;
        puVar7 = (uint *)&_hb_NullPool;
      }
      uVar10 = *puVar7;
      uVar1 = *(uint *)(param_2 + 0x14);
      if (uVar1 < 0x201) {
        pcVar8 = param_2 + (ulong)uVar1 * 8 + 0x18;
        *(uint *)(param_2 + 0x14) = uVar1 + 1;
      }
      else {
        __hb_CrapPool = __hb_NullPool;
        param_2[0x10] = (cff1_cs_interp_env_t)0x1;
        pcVar8 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
      }
      *(double *)pcVar8 =
           (double)(int)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                        uVar10 << 0x18) * __LC12;
      *(uint *)(param_2 + 0xc) = uVar5;
      return;
         case 0x122:
      cff1_cs_opset_flatten_t::flush_args_and_op(0x122,param_2,param_3);
      return;
         case 0x123:
      cff1_cs_opset_flatten_t::flush_args_and_op(0x123,param_2,param_3);
      return;
         case 0x124:
      cff1_cs_opset_flatten_t::flush_args_and_op(0x124,param_2,param_3);
      return;
         case 0x125:
      cff1_cs_opset_flatten_t::flush_args_and_op(0x125,param_2,param_3);
      return;
      }

      switchD_0010d45c_caseD_2:opset_t<CFF::number_t>::process_op(param_1, (interp_env_t*)param_2);
      return;
   }

   switch (param_1) {
      case 1:
      case 0x12:
    cff1_cs_opset_t<cff1_cs_opset_flatten_t,CFF::flatten_param_t,CFF::path_procs_null_t<CFF::cff1_cs_interp_env_t,CFF::flatten_param_t>>
    ::check_width(param_1,param_2,(flatten_param_t *)&DAT_0010da40);
    *(uint *)(param_2 + 0x103c) = *(int *)(param_2 + 0x103c) + (*(uint *)(param_2 + 0x14) >> 1);
    break;
      default:
    goto switchD_0010d45c_caseD_2;
      case 3:
      case 0x17:
    cff1_cs_opset_t<cff1_cs_opset_flatten_t,CFF::flatten_param_t,CFF::path_procs_null_t<CFF::cff1_cs_interp_env_t,CFF::flatten_param_t>>
    ::check_width(param_1,param_2,(flatten_param_t *)&DAT_0010da40);
    *(uint *)(param_2 + 0x1040) = *(int *)(param_2 + 0x1040) + (*(uint *)(param_2 + 0x14) >> 1);
    break;
      case 4:
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if (1 < *(uint *)(param_2 + 0x14)) {
        param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
        *(undefined4 *)(param_2 + 0x1174) = 1;
        *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      }
      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
    }
    if (param_2[0x1039] == (cff1_cs_interp_env_t)0x0) {
      if (param_2[0x103a] == (cff1_cs_interp_env_t)0x0) {
        param_2[0x103a] = (cff1_cs_interp_env_t)0x1;
        iVar4 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x1040);
        *(int *)(param_2 + 0x1040) = iVar4;
        *(uint *)(param_2 + 0x1044) = (uint)(iVar4 + 7 + *(int *)(param_2 + 0x103c)) >> 3;
      }
      param_2[0x1039] = (cff1_cs_interp_env_t)0x1;
    }
    cff1_cs_opset_flatten_t::flush_args_and_op(4,param_2,param_3);
    return;
      case 5:
    cff1_cs_opset_flatten_t::flush_args_and_op(5,param_2,param_3);
    return;
      case 6:
    cff1_cs_opset_flatten_t::flush_args_and_op(6,param_2,param_3);
    return;
      case 7:
    cff1_cs_opset_flatten_t::flush_args_and_op(7,param_2,param_3);
    return;
      case 8:
    cff1_cs_opset_flatten_t::flush_args_and_op(8,param_2,param_3);
    return;
      case 10:
    pcVar8 = param_2 + 0x1150;
    uVar9 = 2;
    goto LAB_0010d58c;
      case 0xb:
    if (*(uint *)(param_2 + 8) < *(uint *)(param_2 + 0xc)) {
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 8) + 1;
    }
    if (*(int *)(param_2 + 0x104c) == 0) {
      _realloc = _lookup_expert_charset_for_sid;
      __hb_CrapPool = __hb_NullPool;
      _memcpy = _lookup_expert_subset_charset_for_sid;
      param_2[0x1048] = (cff1_cs_interp_env_t)0x1;
      pcVar8 = (cff1_cs_interp_env_t *)&_hb_CrapPool;
    }
    else {
      uVar5 = *(int *)(param_2 + 0x104c) - 1;
      *(uint *)(param_2 + 0x104c) = uVar5;
      pcVar8 = param_2 + (ulong)uVar5 * 0x18 + 0x1050;
    }
    uVar2 = *(undefined8 *)pcVar8;
    uVar3 = *(undefined8 *)(pcVar8 + 8);
    *(undefined8 *)(param_2 + 0x1020) = uVar2;
    *(undefined8 *)(param_2 + 0x1028) = uVar3;
    uVar9 = *(undefined8 *)(pcVar8 + 0x10);
    *(undefined8 *)param_2 = uVar2;
    *(undefined8 *)(param_2 + 8) = uVar3;
    *(undefined8 *)(param_2 + 0x1030) = uVar9;
    return;
      case 0xe:
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if ((*(uint *)(param_2 + 0x14) != 0) && ((*(uint *)(param_2 + 0x14) & 1) != 0)) {
        param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
        *(undefined4 *)(param_2 + 0x1174) = 1;
        *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      }
      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
    }
    param_2[0x1038] = (cff1_cs_interp_env_t)0x1;
    cff1_cs_opset_flatten_t::flush_args_and_op(0xe,param_2,param_3);
    return;
      case 0x13:
      case 0x14:
    pcVar8 = param_2;
    cff1_cs_opset_t<cff1_cs_opset_flatten_t,CFF::flatten_param_t,CFF::path_procs_null_t<CFF::cff1_cs_interp_env_t,CFF::flatten_param_t>>
    ::check_width(param_1,param_2,(flatten_param_t *)&DAT_0010da40);
    if (pcVar8[0x103a] == (cff1_cs_interp_env_t)0x0) {
      pcVar8[0x103a] = (cff1_cs_interp_env_t)0x1;
      iVar4 = (*(uint *)(pcVar8 + 0x14) >> 1) + *(int *)(pcVar8 + 0x1040);
      *(int *)(pcVar8 + 0x1040) = iVar4;
      uVar5 = (uint)(iVar4 + 7 + *(int *)(pcVar8 + 0x103c)) >> 3;
      *(uint *)(pcVar8 + 0x1044) = uVar5;
    }
    else {
      uVar5 = *(uint *)(pcVar8 + 0x1044);
    }
    if (uVar5 + *(int *)(param_2 + 0xc) <= *(uint *)(param_2 + 8)) {
      cff1_cs_opset_flatten_t::flush_args_and_op(param_1,param_2,param_3);
      if (param_3[8] == (flatten_param_t)0x0) {
        uVar5 = *(uint *)(param_2 + 0x1044);
        this = *(str_encoder_t **)param_3;
        if (uVar5 != 0) {
          uVar10 = 0;
          do {
            if (uVar10 + *(int *)(param_2 + 0xc) < *(uint *)(param_2 + 8)) {
              puVar6 = (uchar *)((ulong)(uVar10 + *(int *)(param_2 + 0xc)) + *(long *)param_2);
            }
            else {
              puVar6 = &_hb_NullPool;
              *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 8) + 1;
            }
            uVar10 = uVar10 + 1;
            str_encoder_t::encode_byte(this,*puVar6);
            uVar5 = *(uint *)(param_2 + 0x1044);
          } while (uVar10 < uVar5);
        }
      }
      else {
        uVar5 = *(uint *)(param_2 + 0x1044);
      }
      *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + uVar5;
    }
    return;
      case 0x15:
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if (2 < *(uint *)(param_2 + 0x14)) {
        param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
        *(undefined4 *)(param_2 + 0x1174) = 1;
        *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      }
      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
    }
    if (param_2[0x1039] == (cff1_cs_interp_env_t)0x0) {
      if (param_2[0x103a] == (cff1_cs_interp_env_t)0x0) {
        param_2[0x103a] = (cff1_cs_interp_env_t)0x1;
        iVar4 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x1040);
        *(int *)(param_2 + 0x1040) = iVar4;
        *(uint *)(param_2 + 0x1044) = (uint)(iVar4 + 7 + *(int *)(param_2 + 0x103c)) >> 3;
      }
      param_2[0x1039] = (cff1_cs_interp_env_t)0x1;
    }
    cff1_cs_opset_flatten_t::flush_args_and_op(0x15,param_2,param_3);
    return;
      case 0x16:
    if (param_2[0x1170] == (cff1_cs_interp_env_t)0x0) {
      if (1 < *(uint *)(param_2 + 0x14)) {
        param_2[0x1171] = (cff1_cs_interp_env_t)0x1;
        *(undefined4 *)(param_2 + 0x1174) = 1;
        *(undefined8 *)(param_2 + 0x1178) = *(undefined8 *)(param_2 + 0x18);
      }
      param_2[0x1170] = (cff1_cs_interp_env_t)0x1;
    }
    if (param_2[0x1039] == (cff1_cs_interp_env_t)0x0) {
      if (param_2[0x103a] == (cff1_cs_interp_env_t)0x0) {
        param_2[0x103a] = (cff1_cs_interp_env_t)0x1;
        iVar4 = (*(uint *)(param_2 + 0x14) >> 1) + *(int *)(param_2 + 0x1040);
        *(int *)(param_2 + 0x1040) = iVar4;
        *(uint *)(param_2 + 0x1044) = (uint)(iVar4 + 7 + *(int *)(param_2 + 0x103c)) >> 3;
      }
      param_2[0x1039] = (cff1_cs_interp_env_t)0x1;
    }
    cff1_cs_opset_flatten_t::flush_args_and_op(0x16,param_2,param_3);
    return;
      case 0x18:
    cff1_cs_opset_flatten_t::flush_args_and_op(0x18,param_2,param_3);
    return;
      case 0x19:
    cff1_cs_opset_flatten_t::flush_args_and_op(0x19,param_2,param_3);
    return;
      case 0x1a:
    cff1_cs_opset_flatten_t::flush_args_and_op(0x1a,param_2,param_3);
    return;
      case 0x1b:
    cff1_cs_opset_flatten_t::flush_args_and_op(0x1b,param_2,param_3);
    return;
      case 0x1d:
    pcVar8 = param_2 + 0x1140;
    uVar9 = 1;
LAB_0010d58c:
    cs_interp_env_t<CFF::number_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>>::call_subr
              ((cs_interp_env_t<CFF::number_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>> *)param_2,
               pcVar8,uVar9);
    return;
      case 0x1e:
    cff1_cs_opset_flatten_t::flush_args_and_op(0x1e,param_2,param_3);
    return;
      case 0x1f:
    cff1_cs_opset_flatten_t::flush_args_and_op(0x1f,param_2,param_3);
    return;
   }

   cff1_cs_opset_flatten_t::flush_args_and_op(param_1, param_2, param_3);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* CFF::subr_flattener_t<OT::cff1::accelerator_subset_t const, CFF::cff1_cs_interp_env_t,
   cff1_cs_opset_flatten_t, 14u>::flatten(hb_vector_t<hb_vector_t<unsigned char, false>, false>&) */uint CFF::subr_flattener_t<OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_flatten_t,14u>::flatten(subr_flattener_t<OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_flatten_t,14u> *this, hb_vector_t *param_1) {
   double dVar1;
   byte bVar2;
   uint uVar3;
   long lVar4;
   char *pcVar5;
   bool bVar6;
   undefined8 uVar7;
   char cVar8;
   uint uVar9;
   uint uVar10;
   uint *puVar11;
   ulong uVar12;
   undefined1(*pauVar13)[16];
   undefined1(*pauVar14)[16];
   undefined1 uVar15;
   ushort uVar17;
   uint uVar18;
   undefined *puVar19;
   long lVar20;
   uint *puVar21;
   ushort *puVar22;
   hb_vector_t<unsigned_char,false> *this_00;
   str_encoder_t *this_01;
   undefined1 uVar23;
   uchar uVar24;
   uint uVar25;
   int iVar26;
   uint uVar27;
   undefined8 *puVar28;
   uint uVar29;
   int iVar30;
   ulong uVar31;
   cff1_cs_interp_env_t *pcVar32;
   char *pcVar33;
   long in_FS_OFFSET;
   byte bVar34;
   undefined1 auVar35[16];
   int local_1208;
   str_encoder_t *local_11e8;
   byte local_11e0;
   long local_11d8;
   long local_11c8;
   undefined8 local_11c0;
   undefined8 local_11b8;
   undefined8 local_11b0[513];
   long local_1a8;
   uint local_1a0;
   undefined4 local_19c;
   undefined8 local_198;
   char local_190;
   undefined2 local_18f;
   undefined8 local_18c;
   undefined4 local_184;
   char local_180;
   undefined4 local_17c;
   undefined1 local_178[240];
   int local_88[2];
   ushort *local_80;
   int local_78;
   ushort *local_70;
   undefined1 local_68[16];
   undefined2 local_58;
   uint local_54;
   undefined8 local_50;
   undefined1 local_48;
   long local_40;
   undefined1 uVar16;
   bVar34 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = *(uint*)( *(long*)( this + 8 ) + 0x58 );
   uVar9 = hb_vector_t<hb_vector_t<unsigned_char,false>,false>::resize((hb_vector_t<hb_vector_t<unsigned_char,false>,false>*)param_1, uVar3, true, true);
   if ((char)uVar9 == '\0') {
      LAB_0010dd70:uVar9 = 0;
   }
 else {
      uVar31 = 0;
      if (uVar3 != 0) {
         uVar29 = 0;
         do {
            lVar20 = *(long*)( *(long*)( this + 8 ) + 0x30 );
            lVar4 = *(long*)( lVar20 + 0x28 );
            puVar21 = (uint*)&minus_1;
            if (lVar4 != 0) {
               uVar12 = ( ulong )(uVar29 & 0x3fffffff) % ( ulong ) * (uint*)( lVar20 + 0x20 );
               puVar11 = (uint*)( lVar4 + uVar12 * 0xc );
               bVar2 = (byte)puVar11[1];
               if (( bVar2 & 2 ) != 0) {
                  iVar26 = 0;
                  do {
                     if (*puVar11 == (uint)uVar31) {
                        puVar21 = (uint*)&minus_1;
                        if (( bVar2 & 1 ) != 0) {
                           puVar21 = puVar11 + 2;
                        }

                        goto LAB_0010dc5f;
                     }

                     iVar26 = iVar26 + 1;
                     uVar12 = ( ulong )((int)uVar12 + iVar26 & *(uint*)( lVar20 + 0x1c ));
                     puVar11 = (uint*)( lVar4 + uVar12 * 0xc );
                     bVar2 = (byte)puVar11[1];
                  }
 while ( ( bVar2 & 2 ) != 0 );
                  puVar21 = (uint*)&minus_1;
               }

            }

            LAB_0010dc5f:uVar10 = *puVar21;
            if (uVar10 == 0xffffffff) {
               if ((uint)uVar31 < *(uint*)( param_1 + 4 )) {
                  this_00 = (hb_vector_t<unsigned_char,false>*)( uVar31 * 0x10 + *(long*)( param_1 + 8 ) );
                  uVar10 = *(uint*)( this_00 + 4 );
                  uVar12 = (ulong)uVar10;
                  if ((int)uVar10 < *(int*)this_00) goto LAB_0010ddc0;
                  LAB_0010e368:cVar8 = hb_vector_t<unsigned_char,false>::alloc(this_00, uVar10 + 1, false);
                  if (cVar8 != '\0') {
                     uVar12 = ( ulong ) * (uint*)( this_00 + 4 );
                     goto LAB_0010ddc0;
                  }

                  __hb_CrapPool = CONCAT71(_DAT_00111041, _hb_NullPool);
               }
 else {
                  uVar7 = CONCAT71(_DAT_00111009, _hb_NullPool);
                  _memcpy = _lookup_expert_subset_charset_for_sid;
                  this_00 = (hb_vector_t<unsigned_char,false>*)&_hb_CrapPool;
                  _DAT_00111044 = ( uint )((uint7)_DAT_00111009 >> 0x18);
                  uVar12 = (ulong)_DAT_00111044;
                  __hb_CrapPool = (int)uVar7;
                  bVar6 = __hb_CrapPool <= (int)_DAT_00111044;
                  uVar10 = _DAT_00111044;
                  __hb_CrapPool = uVar7;
                  if (bVar6) goto LAB_0010e368;
                  LAB_0010ddc0:*(int*)( this_00 + 4 ) = (int)uVar12 + 1;
                  *(undefined1*)( *(long*)( this_00 + 8 ) + uVar12 ) = 0xe;
               }

            }
 else {
               auVar35 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator [](*(CFFIndex<OT::IntType<unsigned_short,2u>>**)( *(long*)this + 0x78 ), uVar10);
               lVar20 = *(long*)this;
               pcVar5 = *(char**)( lVar20 + 0x88 );
               if (pcVar5 == &_hb_NullPool) {
                  LAB_0010ddf8:uVar12 = 0;
                  LAB_0010ddfa:if (*(uint*)( lVar20 + 0x90 ) <= (uint)uVar12) goto LAB_0010dd70;
               }
 else {
                  if (*pcVar5 == '\0') {
                     uVar12 = (ulong)(byte)pcVar5[(ulong)uVar10 + 1];
                     lVar20 = *(long*)this;
                     goto LAB_0010ddfa;
                  }

                  if (*pcVar5 != '\x03') goto LAB_0010ddf8;
                  pcVar33 = &_hb_NullPool;
                  if (*(short*)( pcVar5 + 1 ) != 0) {
                     pcVar33 = pcVar5 + 3;
                  }

                  iVar26 = ( ushort )(*(ushort*)( pcVar5 + 1 ) << 8 | *(ushort*)( pcVar5 + 1 ) >> 8) - 2;
                  if (-1 < iVar26) {
                     iVar30 = 0;
                     do {
                        while (true) {
                           uVar18 = ( uint )(iVar30 + iVar26) >> 1;
                           puVar22 = (ushort*)( pcVar33 + (ulong)uVar18 * 3 );
                           if (( ushort )(*puVar22 << 8 | *puVar22 >> 8) <= uVar10) break;
                           iVar26 = uVar18 - 1;
                           if (iVar26 < iVar30) goto LAB_0010dd1d;
                        }
;
                        if (uVar10 < ( ushort )(*(ushort*)( (long)puVar22 + 3 ) << 8 | *(ushort*)( (long)puVar22 + 3 ) >> 8)) goto LAB_0010dd50;
                        iVar30 = uVar18 + 1;
                     }
 while ( iVar30 <= iVar26 );
                  }

                  LAB_0010dd1d:puVar22 = (ushort*)&_hb_NullPool;
                  uVar10 = ( ushort )(*(ushort*)( pcVar5 + 1 ) << 8 | *(ushort*)( pcVar5 + 1 ) >> 8) - 1;
                  if (uVar10 < ( ushort )(*(ushort*)( pcVar5 + 1 ) << 8 | *(ushort*)( pcVar5 + 1 ) >> 8)) {
                     puVar22 = (ushort*)( pcVar5 + (ulong)uVar10 * 3 + 3 );
                  }

                  LAB_0010dd50:lVar20 = *(long*)this;
                  uVar12 = (ulong)(byte)puVar22[1];
                  if (*(uint*)( lVar20 + 0x90 ) <= (uint)(byte)puVar22[1]) goto LAB_0010dd70;
               }

               local_11d8 = *(long*)( this + 8 );
               puVar19 = &_hb_NullPool;
               if ((uint)uVar12 < *(uint*)( lVar20 + 0x11c )) {
                  puVar19 = (undefined*)( *(long*)( lVar20 + 0x120 ) + uVar12 * 0x28 );
               }

               local_70 = *(ushort**)( puVar19 + 0x20 );
               local_80 = *(ushort**)( lVar20 + 0x70 );
               local_11b8 = 0;
               puVar28 = local_11b0;
               for (lVar20 = 0x201; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *puVar28 = 0;
                  puVar28 = puVar28 + (ulong)bVar34 * -2 + 1;
               }

               local_11c0._0_4_ = auVar35._8_4_;
               local_1a0 = (uint)local_11c0;
               local_11c0 = auVar35._8_8_ & 0xffffffff;
               uVar12 = local_11c0;
               local_180 = '\0';
               local_17c = 0;
               pauVar13 = (undefined1(*) [16])local_178;
               do {
                  pauVar14 = pauVar13 + 3;
                  *pauVar13 = (undefined1[16])0x0;
                  *(undefined1(*) [16])( pauVar13[1] + 8 ) = (undefined1[16])0x0;
                  pauVar13 = pauVar14;
               }
 while ( pauVar14 != (undefined1(*) [16])local_88 );
               local_18f = _LC14;
               local_88[0] = 0x6b;
               local_19c = 0;
               local_198 = 0;
               local_18c = 0;
               local_184 = 0;
               local_68 = (undefined1[16])0x0;
               if (( local_80 != (ushort*)0x0 ) && ( uVar17 = 0x4d7 < uVar17 )) {
                  local_88[0] = ( -(uint)(uVar17 < 0x846c) & 0xffff846b ) + 0x8000;
               }

               local_78 = 0x6b;
               if (( local_70 != (ushort*)0x0 ) && ( uVar17 = 0x4d7 < uVar17 )) {
                  local_78 = ( -(uint)(uVar17 < 0x846c) & 0xffff846b ) + 0x8000;
               }

               local_58 = 0;
               this_01 = (str_encoder_t*)( uVar31 * 0x10 + *(long*)( param_1 + 8 ) );
               local_48 = 0;
               local_11c0._4_4_ = 0;
               local_11e0 = ( byte ) * (undefined4*)( local_11d8 + 0x14 ) & 1;
               local_50 = 0;
               local_54 = 0;
               local_190 = '\0';
               local_1208 = 200000;
               uVar10 = local_1a0;
               uVar18 = local_11c0._4_4_;
               local_11e8 = this_01;
               local_11c8 = auVar35._0_8_;
               local_11c0 = uVar12;
               local_1a8 = auVar35._0_8_;
               do {
                  uVar25 = uVar18 + 1;
                  if (uVar10 < uVar25) {
                     LAB_0010e0c0:uVar27 = 0xffff;
                     LAB_0010e0c5:cs_opset_t<CFF::number_t,cff1_cs_opset_flatten_t,CFF::cff1_cs_interp_env_t,CFF::flatten_param_t,CFF::path_procs_null_t<CFF::cff1_cs_interp_env_t,CFF::flatten_param_t>>::process_op(uVar27, (cff1_cs_interp_env_t*)&local_11c8, (flatten_param_t*)&local_11e8);
                  }
 else {
                     local_11c0 = CONCAT44(uVar25, (uint)local_11c0);
                     bVar2 = *(byte*)( local_11c8 + (ulong)uVar18 );
                     uVar27 = (uint)bVar2;
                     if (bVar2 == 0xc) {
                        if (uVar10 < uVar18 + 2) goto LAB_0010e0c0;
                        local_11c0 = CONCAT44(uVar18 + 2, (uint)local_11c0);
                        uVar27 = *(byte*)( local_11c8 + (ulong)uVar25 ) + 0x100;
                        if (*(byte*)( local_11c8 + (ulong)uVar25 ) != 0) goto LAB_0010e0c5;
                        if (local_54 < local_11b8._4_4_) {
                           uVar12 = (ulong)local_54;
                           uVar10 = ( local_11b8._4_4_ - 1 ) - local_54;
                           pcVar32 = (cff1_cs_interp_env_t*)&local_11c8 + uVar12 * 8;
                           do {
                              while (true) {
                                 dVar1 = *(double*)( pcVar32 + 0x18 );
                                 iVar26 = (int)dVar1;
                                 if (dVar1 == (double)(int)(short)iVar26) break;
                                 uVar18 = *(uint*)( this_01 + 4 );
                                 iVar26 = (int)( dVar1 * __LC10 );
                                 if ((int)uVar18 < *(int*)this_01) {
                                    *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                    *(undefined1*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = 0xff;
                                 }
 else {
                                    cVar8 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this_01, uVar18 + 1, false);
                                    if (cVar8 == '\0') {
                                       __hb_CrapPool = CONCAT71(_DAT_00111041, _hb_NullPool);
                                    }
 else {
                                       uVar18 = *(uint*)( this_01 + 4 );
                                       *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                       *(undefined1*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = 0xff;
                                    }

                                 }

                                 uVar18 = *(uint*)( this_01 + 4 );
                                 uVar23 = ( undefined1 )((uint)iVar26 >> 8);
                                 uVar15 = ( undefined1 )((uint)iVar26 >> 0x10);
                                 uVar16 = ( undefined1 )((uint)iVar26 >> 0x18);
                                 if ((int)uVar18 < *(int*)this_01) {
                                    *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                    *(undefined1*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = uVar16;
                                    LAB_0010e1e1:uVar18 = *(uint*)( this_01 + 4 );
                                    uVar25 = uVar18 + 1;
                                    if ((int)uVar18 < *(int*)this_01) goto LAB_0010e1f4;
                                    LAB_0010e3d0:cVar8 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this_01, uVar25, false);
                                    if (cVar8 == '\0') {
                                       __hb_CrapPool = CONCAT71(_DAT_00111041, _hb_NullPool);
                                       goto LAB_0010e1fe;
                                    }

                                    uVar18 = *(uint*)( this_01 + 4 );
                                    *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                    *(undefined1*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = uVar15;
                                    uVar18 = *(uint*)( this_01 + 4 );
                                    uVar25 = uVar18 + 1;
                                    if ((int)uVar18 < *(int*)this_01) goto LAB_0010e211;
                                    LAB_0010e410:cVar8 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this_01, uVar25, false);
                                    if (cVar8 == '\0') {
                                       __hb_CrapPool = CONCAT71(_DAT_00111041, _hb_NullPool);
                                       goto LAB_0010e21b;
                                    }

                                    uVar18 = *(uint*)( this_01 + 4 );
                                    *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                    *(undefined1*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = uVar23;
                                    uVar18 = *(uint*)( this_01 + 4 );
                                    uVar25 = uVar18 + 1;
                                    if (*(int*)this_01 <= (int)uVar18) goto LAB_0010e450;
                                 }
 else {
                                    cVar8 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this_01, uVar18 + 1, false);
                                    if (cVar8 == '\0') {
                                       __hb_CrapPool = CONCAT71(_DAT_00111041, _hb_NullPool);
                                       goto LAB_0010e1e1;
                                    }

                                    uVar18 = *(uint*)( this_01 + 4 );
                                    *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                    *(undefined1*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = uVar16;
                                    uVar18 = *(uint*)( this_01 + 4 );
                                    uVar25 = uVar18 + 1;
                                    if (*(int*)this_01 <= (int)uVar18) goto LAB_0010e3d0;
                                    LAB_0010e1f4:*(uint*)( this_01 + 4 ) = uVar25;
                                    *(undefined1*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = uVar15;
                                    LAB_0010e1fe:uVar18 = *(uint*)( this_01 + 4 );
                                    uVar25 = uVar18 + 1;
                                    if (*(int*)this_01 <= (int)uVar18) goto LAB_0010e410;
                                    LAB_0010e211:*(uint*)( this_01 + 4 ) = uVar25;
                                    *(undefined1*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = uVar23;
                                    LAB_0010e21b:uVar18 = *(uint*)( this_01 + 4 );
                                    uVar25 = uVar18 + 1;
                                    if (*(int*)this_01 <= (int)uVar18) {
                                       LAB_0010e450:cVar8 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this_01, uVar25, false);
                                       if (cVar8 == '\0') goto LAB_0010e55c;
                                       uVar18 = *(uint*)( this_01 + 4 );
                                       *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                       *(char*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = (char)iVar26;
                                       goto LAB_0010e174;
                                    }

                                 }

                                 pcVar32 = pcVar32 + 8;
                                 *(uint*)( this_01 + 4 ) = uVar25;
                                 *(char*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = (char)iVar26;
                                 if (pcVar32 == (cff1_cs_interp_env_t*)( &local_11c0 + uVar10 + uVar12 )) goto LAB_0010e246;
                              }
;
                              if (iVar26 + 0x46bU < 0x8d7) {
                                 if (iVar26 + 0x6bU < 0xd7) {
                                    str_encoder_t::encode_byte(this_01, (char)iVar26 + 0x8b);
                                 }
 else {
                                    if (iVar26 < 1) {
                                       iVar26 = -0x6c - iVar26;
                                       uVar24 = (char)( (uint)iVar26 >> 8 ) + 0xfb;
                                    }
 else {
                                       iVar26 = iVar26 + -0x6c;
                                       uVar24 = (char)( (uint)iVar26 >> 8 ) + 0xf7;
                                    }

                                    str_encoder_t::encode_byte(this_01, uVar24);
                                    str_encoder_t::encode_byte(this_01, (uchar)iVar26);
                                 }

                              }
 else {
                                 iVar30 = 0x7fff;
                                 if (iVar26 < 0x8000) {
                                    iVar30 = iVar26;
                                 }

                                 if (iVar30 < -0x8000) {
                                    iVar30 = -0x8000;
                                 }

                                 uVar18 = *(uint*)( this_01 + 4 );
                                 if ((int)uVar18 < *(int*)this_01) {
                                    *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                    *(undefined1*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = 0x1c;
                                 }
 else {
                                    cVar8 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this_01, uVar18 + 1, false);
                                    if (cVar8 == '\0') {
                                       __hb_CrapPool = CONCAT71(_DAT_00111041, _hb_NullPool);
                                    }
 else {
                                       uVar18 = *(uint*)( this_01 + 4 );
                                       *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                       *(undefined1*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = 0x1c;
                                    }

                                 }

                                 uVar18 = *(uint*)( this_01 + 4 );
                                 uVar23 = ( undefined1 )((uint)iVar30 >> 8);
                                 if ((int)uVar18 < *(int*)this_01) {
                                    *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                    *(undefined1*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = uVar23;
                                 }
 else {
                                    cVar8 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this_01, uVar18 + 1, false);
                                    if (cVar8 == '\0') {
                                       __hb_CrapPool = CONCAT71(_DAT_00111041, _hb_NullPool);
                                    }
 else {
                                       uVar18 = *(uint*)( this_01 + 4 );
                                       *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                       *(undefined1*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = uVar23;
                                    }

                                 }

                                 uVar18 = *(uint*)( this_01 + 4 );
                                 if ((int)uVar18 < *(int*)this_01) {
                                    *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                    *(char*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = (char)iVar30;
                                 }
 else {
                                    cVar8 = hb_vector_t<unsigned_char,false>::alloc((hb_vector_t<unsigned_char,false>*)this_01, uVar18 + 1, false);
                                    if (cVar8 != '\0') {
                                       uVar18 = *(uint*)( this_01 + 4 );
                                       *(uint*)( this_01 + 4 ) = uVar18 + 1;
                                       *(char*)( *(long*)( this_01 + 8 ) + (ulong)uVar18 ) = (char)iVar30;
                                       goto LAB_0010e174;
                                    }

                                    LAB_0010e55c:__hb_CrapPool = CONCAT71(_DAT_00111041, _hb_NullPool);
                                 }

                              }

                              LAB_0010e174:pcVar32 = pcVar32 + 8;
                           }
 while ( pcVar32 != (cff1_cs_interp_env_t*)( &local_11c0 + uVar10 + uVar12 ) );
                        }

                        LAB_0010e246:local_11b8 = local_11b8 & 0xffffffff;
                        local_54 = 0;
                        str_encoder_t::encode_byte(this_01, '\f');
                        str_encoder_t::encode_byte(this_01, '\0');
                     }
 else {
                        if (bVar2 != 0xe) goto LAB_0010e0c5;
                        if ((char)local_58 == '\0') {
                           if (( local_11b8._4_4_ != 0 ) && ( ( local_11b8 & 0x100000000 ) != 0 )) {
                              local_58 = 0x100;
                              local_54 = 1;
                              local_50 = local_11b0[0];
                           }

                           local_58 = CONCAT11(local_58._1_1_, 1);
                        }

                        cff1_cs_opset_flatten_t::flush_args_and_op(0xe, (cff1_cs_interp_env_t*)&local_11c8, (flatten_param_t*)&local_11e8);
                        local_190 = '\x01';
                     }

                  }

                  if (local_180 != '\0') goto LAB_0010dd70;
                  if (( ( (uint)local_11c0 < local_11c0._4_4_ ) || ( (char)local_11b8 != '\0' ) ) || ( local_1208 = local_1208 == 0 )) goto LAB_0010dd70;
                  uVar10 = (uint)local_11c0;
                  uVar18 = local_11c0._4_4_;
               }
 while ( local_190 == '\0' );
            }

            uVar31 = uVar31 + 1;
            uVar29 = uVar29 + 0x9e3779b1;
         }
 while ( uVar31 != uVar3 );
         uVar9 = uVar9 & 0xff;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OT::cff1_subset_plan::create(OT::cff1::accelerator_subset_t const&, hb_subset_plan_t*) */undefined4 OT::cff1_subset_plan::create(cff1_subset_plan *this, accelerator_subset_t *param_1, hb_subset_plan_t *param_2) {
   long *plVar1;
   undefined4 *puVar2;
   undefined8 *puVar3;
   byte bVar4;
   bool bVar5;
   bool bVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   char cVar9;
   undefined4 uVar10;
   int *piVar11;
   undefined *puVar12;
   undefined4 *puVar13;
   int *piVar14;
   void *pvVar15;
   uint *puVar16;
   int iVar17;
   int iVar18;
   uint uVar19;
   hb_vector_t *phVar20;
   cff1_subset_plan cVar21;
   uint extraout_EDX;
   long lVar22;
   ulong uVar23;
   int *piVar24;
   int *piVar25;
   uint uVar26;
   long lVar27;
   parsed_cs_str_t *ppVar28;
   int iVar29;
   long lVar30;
   hb_vector_t<hb_vector_t<unsigned_char,false>,false> *this_00;
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   undefined *puVar34;
   int *piVar35;
   long in_FS_OFFSET;
   byte_str_ref_t local_168[16];
   accelerator_subset_t *local_158;
   undefined8 local_150;
   undefined4 local_148;
   long local_e0;
   long local_d8;
   uint local_bc;
   uint local_9c;
   long local_98;
   uint local_84;
   long local_80;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   piVar14 = *(int**)( *(long*)( param_2 + 0x30 ) + 0x28 );
   piVar11 = (int*)&minus_1;
   if (( piVar14 != (int*)0x0 ) && ( bVar4 = *(byte*)( piVar14 + 1 )(bVar4 & 2) != 0 )) {
      uVar31 = 0;
      iVar29 = 0;
      piVar11 = piVar14;
      do {
         if (*piVar11 == 0) {
            piVar11 = piVar11 + 2;
            if (( bVar4 & 1 ) == 0) {
               piVar11 = (int*)&minus_1;
            }

            goto LAB_0010e66a;
         }

         iVar29 = iVar29 + 1;
         uVar31 = uVar31 + iVar29 & *(uint*)( *(long*)( param_2 + 0x30 ) + 0x1c );
         piVar11 = piVar14 + (ulong)uVar31 * 3;
         bVar4 = *(byte*)( piVar11 + 1 );
      }
 while ( ( bVar4 & 2 ) != 0 );
      piVar11 = (int*)&minus_1;
   }

   LAB_0010e66a:if (*piVar11 == 0) {
      *(ulong*)( this + 0xa0 ) = CONCAT44(*(undefined4*)( param_1 + 0x90 ), *(undefined4*)( param_2 + 0x58 ));
      uVar31 = *(uint*)( param_2 + 0x14 );
      *(undefined4*)( this + 0x200 ) = 0;
      this[0x140] = SUB41(uVar31, 0);
      this[0x140] = ( cff1_subset_plan )((byte)this[0x140] & 1);
      iVar29 = *(int*)( param_1 + 0xf4 );
      this[0x1fc] = ( cff1_subset_plan )(( byte )(uVar31 >> 2) & 1);
      this[0x180] = ( cff1_subset_plan )(2 < iVar29);
      if (iVar29 < 3) {
         piVar14 = *(int**)( param_2 + 200 );
         piVar11 = piVar14 + ( ulong ) * (uint*)( param_2 + 0xc4 ) * 2;
         for (; piVar14 != piVar11; piVar14 = piVar14 + 2) {
            if (*piVar14 != piVar14[1]) {
               this[0x180] = (cff1_subset_plan)0x1;
               goto LAB_0010e6cd;
            }

         }

         bVar5 = false;
      }
 else {
         LAB_0010e6cd:bVar5 = true;
      }

      uVar7 = _LC20;
      cVar21 = (cff1_subset_plan)0x0;
      if (*(int*)( param_1 + 0xdc ) == -1) {
         cVar21 = ( cff1_subset_plan )(1 < *(int*)( param_1 + 0xf0 ));
      }

      this[0x142] = cVar21;
      for (int i = 0; i < 4; i++) {
         *(undefined4*)( this + ( 4*i + 48 ) ) = 4294967295;
      }

      *(undefined8*)( this + 0x50 ) = uVar7;
      *(undefined4*)this = 0;
      *(undefined8*)( this + 8 ) = 0;
      *(undefined8*)( this + 0x10 ) = 0;
      *(undefined8*)( this + 0x18 ) = 0;
      *(undefined8*)( this + 0x58 ) = 0;
      *(undefined8*)( this + 0x60 ) = 0;
      *(undefined8*)( this + 0x68 ) = 0;
      *(accelerator_subset_t**)( this + 0x70 ) = param_1 + 0x98;
      *(undefined4*)( this + 0x20 ) = 0xffffffff;
      *(undefined4*)( this + 0x24 ) = 0xffffffff;
      *(undefined4*)( this + 0x28 ) = 0xffffffff;
      *(undefined4*)( this + 0x2c ) = 0xffffffff;
      *(undefined4*)( this + 0x3c ) = 0xffffffff;
      *(undefined4*)( this + 0x40 ) = 0xffffffff;
      *(undefined4*)( this + 0x44 ) = 0xffffffff;
      *(undefined4*)( this + 0x48 ) = 0xffffffff;
      if (cVar21 == (cff1_subset_plan)0x0) {
         if (bVar5) {
            lVar27 = *(long*)( param_1 + 0xa8 );
            lVar30 = lVar27 + ( ulong ) * (uint*)( param_1 + 0xa4 ) * 0x18;
            bVar6 = false;
            if (lVar30 != lVar27) {
               LAB_0010e785:do {
                  if (*(int*)( lVar27 + 8 ) == 0xf) {
                     if (!bVar6) goto LAB_0010e7d0;
                     goto LAB_0010e78f;
                  }

                  lVar27 = lVar27 + 0x18;
               }
 while ( lVar30 != lVar27 );
               if (bVar6) goto LAB_0010f343;
            }

            LAB_0010f06d:local_158 = (accelerator_subset_t*)0x0;
            local_150._4_4_ = ( uint )((ulong)local_150 >> 0x20) & 0xffffff00;
            local_148 = 0;
            local_150 = (hb_subset_plan_t*)CONCAT44(local_150._4_4_, 0xffff);
            for (int i = 0; i < 16; i++) {
               local_168[i] = (byte_str_ref_t)0;
            }

            CFF::parsed_values_t<CFF::cff1_top_dict_val_t>::add_op((parsed_values_t<CFF::cff1_top_dict_val_t>*)this, 0xf, local_168, (cff1_top_dict_val_t*)&local_158);
         }

      }
 else {
         lVar27 = *(long*)( param_1 + 0xa8 );
         lVar30 = lVar27 + ( ulong ) * (uint*)( param_1 + 0xa4 ) * 0x18;
         lVar22 = lVar27;
         if (lVar27 == lVar30) {
            if (bVar5) {
               LAB_0010f343:local_158 = (accelerator_subset_t*)0x0;
               local_150 = (hb_subset_plan_t*)( (ulong)local_150._5_3_ << 0x28 );
               local_148 = 0;
               local_150 = (hb_subset_plan_t*)CONCAT44(local_150._4_4_, 0xffff);
               for (int i = 0; i < 16; i++) {
                  local_168[i] = (byte_str_ref_t)0;
               }

               CFF::parsed_values_t<CFF::cff1_top_dict_val_t>::add_op((parsed_values_t<CFF::cff1_top_dict_val_t>*)this, 0x10, local_168, (cff1_top_dict_val_t*)&local_158);
               goto LAB_0010f06d;
            }

         }
 else {
            do {
               if (*(int*)( lVar22 + 8 ) == 0x10) {
                  bVar6 = false;
                  if (bVar5) goto LAB_0010e785;
                  goto LAB_0010e7d0;
               }

               lVar22 = lVar22 + 0x18;
            }
 while ( lVar30 != lVar22 );
            bVar6 = bVar5;
            if (bVar5) goto LAB_0010e785;
         }

         LAB_0010e78f:local_150 = (hb_subset_plan_t*)( (ulong)local_150._5_3_ << 0x28 );
         local_158 = (accelerator_subset_t*)0x0;
         local_148 = 0;
         local_150 = (hb_subset_plan_t*)CONCAT44(local_150._4_4_, 0xffff);
         for (int i = 0; i < 16; i++) {
            local_168[i] = (byte_str_ref_t)0;
         }

         CFF::parsed_values_t<CFF::cff1_top_dict_val_t>::add_op((parsed_values_t<CFF::cff1_top_dict_val_t>*)this, 0x10, local_168, (cff1_top_dict_val_t*)&local_158);
      }

      LAB_0010e7d0:if (*(FDSelect**)( param_1 + 0x88 ) == (FDSelect*)&_hb_NullPool) {
         if (this[0xd0] != (cff1_subset_plan)0x0) {
            if (*(int*)( this + 0xdc ) != 0) {
               puVar13 = *(undefined4**)( this + 0xe8 );
               puVar2 = puVar13 + ( ulong )(*(int*)( this + 0xdc ) + 1) * 3;
               for (; puVar13 != puVar2; puVar13 = puVar13 + 3) {
                  *puVar13 = 0;
                  puVar13[1] = 0;
                  puVar13[2] = 0;
               }

            }

            *(undefined8*)( this + 0xd4 ) = 0;
         }

         cVar9 = hb_vector_t<unsigned_int,false>::alloc((hb_vector_t<unsigned_int,false>*)( this + 0xf0 ), 0, false);
         if (cVar9 != '\0') {
            *(undefined4*)( this + 0xf4 ) = 0;
         }

         piVar11 = *(int**)( this + 0xe8 );
         puVar16 = (uint*)&minus_1;
         if (( piVar11 != (int*)0x0 ) && ( bVar4 = *(byte*)( piVar11 + 1 )(bVar4 & 2) != 0 )) {
            uVar31 = 0;
            iVar29 = 0;
            piVar14 = piVar11;
            do {
               if (*piVar14 == 0) {
                  puVar16 = (uint*)( piVar14 + 2 );
                  if (( bVar4 & 1 ) == 0) {
                     puVar16 = (uint*)&minus_1;
                  }

                  goto LAB_0010ef0b;
               }

               iVar29 = iVar29 + 1;
               uVar31 = uVar31 + iVar29 & *(uint*)( this + 0xdc );
               piVar14 = piVar11 + (ulong)uVar31 * 3;
               bVar4 = *(byte*)( piVar14 + 1 );
            }
 while ( ( bVar4 & 2 ) != 0 );
            puVar16 = (uint*)&minus_1;
         }

         LAB_0010ef0b:uVar33 = ( ulong ) * puVar16;
         if (*puVar16 != 0xffffffff) goto LAB_0010e823;
         uVar31 = *(uint*)( this + 0xf4 );
         if (this[0xd0] != (cff1_subset_plan)0x0) {
            uVar32 = *(uint*)( this + 0xd8 );
            if (( uVar32 >> 1 ) + uVar32 < *(uint*)( this + 0xdc )) {
               LAB_0010ef4a:bVar4 = *(byte*)( piVar11 + 1 );
               iVar29 = *(int*)( this + 0xd4 );
               if (( bVar4 & 2 ) == 0) {
                  piVar11[2] = uVar31;
                  piVar11[0] = 0;
                  piVar11[1] = 3;
                  *(uint*)( this + 0xd8 ) = uVar32 + 1;
                  *(int*)( this + 0xd4 ) = iVar29 + 1;
               }
 else {
                  uVar23 = 0;
                  uVar19 = 0;
                  lVar30 = 0;
                  piVar14 = piVar11;
                  do {
                     if (*piVar14 == 0) {
                        if ((int)uVar33 == -1) goto LAB_0010efba;
                        goto LAB_0010efb2;
                     }

                     if (( (int)uVar33 == -1 ) && ( ( bVar4 & 1 ) == 0 )) {
                        uVar33 = uVar23;
                     }

                     uVar19 = uVar19 + 1;
                     uVar23 = ( ulong )((int)uVar23 + uVar19 & *(uint*)( this + 0xdc ));
                     lVar30 = uVar23 * 0xc;
                     piVar14 = piVar11 + uVar23 * 3;
                     bVar4 = *(byte*)( piVar14 + 1 );
                  }
 while ( ( bVar4 & 2 ) != 0 );
                  if ((int)uVar33 == -1) {
                     LAB_0010f0b6:uVar32 = uVar32 + 1;
                  }
 else {
                     LAB_0010efb2:lVar30 = uVar33 * 0xc;
                     LAB_0010efba:piVar14 = (int*)( lVar30 + (long)piVar11 );
                     if (( *(byte*)( piVar14 + 1 ) & 2 ) == 0) goto LAB_0010f0b6;
                     iVar29 = iVar29 - ( *(byte*)( piVar14 + 1 ) & 1 );
                  }

                  piVar14[2] = uVar31;
                  piVar14[0] = 0;
                  piVar14[1] = 3;
                  *(uint*)( this + 0xd8 ) = uVar32;
                  *(int*)( this + 0xd4 ) = iVar29 + 1;
                  if (( *(ushort*)( this + 0xd2 ) < uVar19 ) && ( *(uint*)( this + 0xdc ) < uVar32 << 3 )) {
                     hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc((hb_hashmap_t<unsigned_int,unsigned_int,true>*)( this + 0xc0 ), *(uint*)( this + 0xdc ) - 8);
                  }

               }

            }
 else {
               cVar9 = hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc((hb_hashmap_t<unsigned_int,unsigned_int,true>*)( this + 0xc0 ), 0);
               if (cVar9 != '\0') {
                  piVar11 = *(int**)( this + 0xe8 );
                  uVar32 = *(uint*)( this + 0xd8 );
                  goto LAB_0010ef4a;
               }

            }

            uVar31 = *(uint*)( this + 0xf4 );
         }

         if (*(int*)( this + 0xf0 ) <= (int)uVar31) {
            cVar9 = hb_vector_t<unsigned_int,false>::alloc((hb_vector_t<unsigned_int,false>*)( this + 0xf0 ), uVar31 + 1, false);
            if (cVar9 == '\0') {
               __hb_CrapPool = CONCAT44(_DAT_00111044, __hb_NullPool);
               goto LAB_0010e823;
            }

            uVar31 = *(uint*)( this + 0xf4 );
         }

         *(uint*)( this + 0xf4 ) = uVar31 + 1;
         *(undefined4*)( *(long*)( this + 0xf8 ) + (ulong)uVar31 * 4 ) = 0;
      }
 else {
         cVar9 = hb_plan_subset_cff_fdselect(param_2, *(uint*)( this + 0xa4 ), *(FDSelect**)( param_1 + 0x88 ), (uint*)( this + 0xa8 ), (uint*)( this + 0x7c ), (uint*)( this + 0xac ), (hb_vector_t*)( this + 0xb0 ), (hb_inc_bimap_t*)( this + 0xc0 ));
         if (cVar9 == '\0') goto LAB_0010ecf0;
      }

      LAB_0010e823:lVar30 = 0;
      do {
         if (*(uint*)( param_1 + lVar30 + 0xb8 ) != 0xffffffff) {
            uVar10 = remap_sid_t::add((remap_sid_t*)( this + 0x188 ), *(uint*)( param_1 + lVar30 + 0xb8 ));
            *(undefined4*)( this + lVar30 + 0x1d0 ) = uVar10;
         }

         lVar30 = lVar30 + 4;
      }
 while ( lVar30 != 0x2c );
      if (( *(undefined**)( param_1 + 0x80 ) != &_hb_NullPool ) && ( *(int*)( this + 0xa4 ) != 0 )) {
         uVar32 = 0;
         uVar31 = 0;
         lVar30 = 0;
         do {
            lVar27 = *(long*)( this + 0xe8 );
            if (lVar27 != 0) {
               uVar33 = ( ulong )(uVar32 & 0x3fffffff) % ( ulong ) * (uint*)( this + 0xe0 );
               puVar16 = (uint*)( lVar27 + uVar33 * 0xc );
               bVar4 = (byte)puVar16[1];
               if (( bVar4 & 2 ) != 0) {
                  iVar29 = 0;
                  do {
                     if (*puVar16 == uVar31) {
                        if (( bVar4 & 1 ) != 0) {
                           puVar12 = &_hb_NullPool;
                           if (uVar31 < *(uint*)( param_1 + 0x10c )) {
                              puVar12 = (undefined*)( *(long*)( param_1 + 0x110 ) + lVar30 );
                           }

                           remap_sid_t::add((remap_sid_t*)( this + 0x188 ), *(uint*)( puVar12 + 0x24 ));
                        }

                        break;
                     }

                     iVar29 = iVar29 + 1;
                     uVar33 = ( ulong )((int)uVar33 + iVar29 & *(uint*)( this + 0xdc ));
                     puVar16 = (uint*)( lVar27 + uVar33 * 0xc );
                     bVar4 = (byte)puVar16[1];
                  }
 while ( ( bVar4 & 2 ) != 0 );
               }

            }

            uVar31 = uVar31 + 1;
            uVar32 = uVar32 + 0x9e3779b1;
            lVar30 = lVar30 + 0x28;
         }
 while ( uVar31 < *(uint*)( this + 0xa4 ) );
      }

      if (( *(uint*)( this + 0x1c4 ) < 0x8001 ) && ( ( this[0x180] == (cff1_subset_plan)0x0 || ( cVar9 = plan_subset_charset(this, param_1, param_2) ),cVar9 != '\0' ) )) {
         lVar30 = *(long*)( this + 0x70 );
         lVar27 = 0x20;
         do {
            uVar31 = *(uint*)( lVar30 + lVar27 );
            if (( 0x186 < uVar31 ) && ( uVar31 != 0xffffffff )) {
               lVar22 = *(long*)( this + 0x1b8 );
               piVar11 = (int*)&minus_1;
               if (lVar22 != 0) {
                  uVar33 = ( ulong )(( uVar31 - 0x187 ) * -0x61c8864f & 0x3fffffff) % ( ulong ) * (uint*)( this + 0x1b0 );
                  piVar14 = (int*)( lVar22 + uVar33 * 0xc );
                  bVar4 = *(byte*)( piVar14 + 1 );
                  if (( bVar4 & 2 ) != 0) {
                     iVar29 = 0;
                     do {
                        if (uVar31 - 0x187 == *piVar14) {
                           piVar11 = piVar14 + 2;
                           if (( bVar4 & 1 ) == 0) {
                              piVar11 = (int*)&minus_1;
                           }

                           goto LAB_0010ea16;
                        }

                        iVar29 = iVar29 + 1;
                        uVar33 = ( ulong )((int)uVar33 + iVar29 & *(uint*)( this + 0x1ac ));
                        piVar14 = (int*)( lVar22 + uVar33 * 0xc );
                        bVar4 = *(byte*)( piVar14 + 1 );
                     }
 while ( ( bVar4 & 2 ) != 0 );
                     piVar11 = (int*)&minus_1;
                  }

               }

               LAB_0010ea16:uVar31 = *piVar11 + 0x187;
            }

            *(uint*)( this + lVar27 ) = uVar31;
            lVar27 = lVar27 + 4;
         }
 while ( lVar27 != 0x4c );
         if (this[0x1fc] == (cff1_subset_plan)0x0) {
            CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::subr_subsetter_t((subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>*)&local_158, param_1, param_2);
            cVar9 = CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::subset((subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>*)&local_158);
            if (( ( cVar9 != '\0' ) && ( cVar9 = CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::encode_charstrings((subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>*)&local_158, (hb_vector_t*)( this + 0x100 ), true) ),cVar9 != '\0' )) {
               uVar33 = 0;
               if (local_bc != 0) {
                  do {
                     puVar16 = (uint*)&_hb_NullPool;
                     if ((uint)uVar33 < local_9c) {
                        puVar16 = (uint*)( local_98 + uVar33 * 4 );
                     }

                     if ((uint)uVar33 < *(uint*)( this + 0x114 )) {
                        phVar20 = (hb_vector_t*)( uVar33 * 0x10 + *(long*)( this + 0x118 ) );
                     }
 else {
                        phVar20 = (hb_vector_t*)&_hb_CrapPool;
                        __hb_CrapPool = CONCAT44(_DAT_0011100c, __hb_NullPool);
                        _memcpy = _lookup_expert_subset_charset_for_sid;
                     }

                     ppVar28 = (parsed_cs_str_t*)&_hb_NullPool;
                     if (*puVar16 < *(uint*)( local_e0 + 4 )) {
                        ppVar28 = (parsed_cs_str_t*)( *(long*)( local_e0 + 8 ) + ( ulong ) * puVar16 * 0x28 );
                     }

                     cVar9 = CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::encode_str((subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>*)&local_158, ppVar28, 0, phVar20, true);
                     if (cVar9 == '\0') goto LAB_0010ee16;
                     uVar33 = uVar33 + 1;
                  }
 while ( uVar33 != local_bc );
               }

               uVar31 = *(uint*)( this + 0x120 );
               if (-1 < (int)uVar31) {
                  uVar19 = 0;
                  uVar32 = *(uint*)( this + 0xa4 );
                  if ((int)*(uint*)( this + 0xa4 ) < 0) {
                     uVar32 = 0;
                  }

                  uVar26 = uVar31;
                  if (uVar31 < uVar32) {
                     do {
                        uVar26 = ( uVar26 >> 1 ) + 8 + uVar26;
                     }
 while ( uVar26 < uVar32 );
                     if (0xfffffff < uVar26) {
                        LAB_0010f7d6:*(uint*)( this + 0x120 ) = ~uVar31;
                        goto LAB_0010ee16;
                     }

                     pvVar15 = realloc(*(void**)( this + 0x128 ), (ulong)uVar26 << 4);
                     uVar19 = extraout_EDX;
                     if (pvVar15 == (void*)0x0) {
                        uVar31 = *(uint*)( this + 0x120 );
                        if (uVar31 < uVar26) goto LAB_0010f7d6;
                     }
 else {
                        *(void**)( this + 0x128 ) = pvVar15;
                        *(uint*)( this + 0x120 ) = uVar26;
                     }

                  }

                  uVar31 = *(uint*)( this + 0x124 );
                  if (uVar31 < uVar32) {
                     hb_memset((void*)( (ulong)uVar31 * 0x10 + *(long*)( this + 0x128 ) ), ( uVar32 - uVar31 ) * 0x10, uVar19);
                  }
 else if (uVar32 < uVar31) {
                     piVar11 = (int*)( *(long*)( this + 0x128 ) + -0x10 + (ulong)uVar31 * 0x10 );
                     piVar14 = piVar11;
                     do {
                        piVar25 = piVar14 + -4;
                        if (*piVar14 != 0) {
                           uVar19 = piVar14[1];
                           pvVar15 = *(void**)( piVar14 + 2 );
                           piVar35 = (int*)( (long)pvVar15 + (ulong)uVar19 * 0x10 + -0x10 );
                           if (uVar19 != 0) {
                              piVar24 = piVar35 + ( ulong )(uVar19 - 1) * -4 + -4;
                              do {
                                 if (*piVar35 != 0) {
                                    free(*(void**)( piVar35 + 2 ));
                                 }

                                 piVar35 = piVar35 + -4;
                              }
 while ( piVar24 != piVar35 );
                              pvVar15 = *(void**)( piVar14 + 2 );
                           }

                           free(pvVar15);
                        }

                        piVar14 = piVar25;
                     }
 while ( piVar11 + ( ulong )(uVar31 - uVar32) * -4 != piVar25 );
                  }

                  *(uint*)( this + 0x124 ) = uVar32;
                  if (*(int*)( this + 0xa4 ) != 0) {
                     uVar31 = 0;
                     lVar30 = 0;
                     LAB_0010f43a:uVar19 = (uint)lVar30;
                     if (uVar19 < uVar32) {
                        this_00 = (hb_vector_t<hb_vector_t<unsigned_char,false>,false>*)( lVar30 * 0x10 + *(long*)( this + 0x128 ) );
                     }
 else {
                        __hb_CrapPool = CONCAT44(_DAT_0011100c, __hb_NullPool);
                        _memcpy = _lookup_expert_subset_charset_for_sid;
                        this_00 = (hb_vector_t<hb_vector_t<unsigned_char,false>,false>*)&_hb_CrapPool;
                     }

                     *(undefined8*)this_00 = 0;
                     lVar27 = *(long*)( this + 0xe8 );
                     *(undefined8*)( this_00 + 8 ) = 0;
                     if (lVar27 != 0) {
                        uVar33 = ( ulong )(uVar31 & 0x3fffffff) % ( ulong ) * (uint*)( this + 0xe0 );
                        puVar16 = (uint*)( lVar27 + uVar33 * 0xc );
                        bVar4 = (byte)puVar16[1];
                        if (( bVar4 & 2 ) != 0) {
                           iVar29 = 0;
                           do {
                              if (uVar19 == *puVar16) {
                                 if (( bVar4 & 1 ) != 0) {
                                    if (uVar32 <= uVar19) {
                                       __hb_CrapPool = CONCAT44(_DAT_0011100c, __hb_NullPool);
                                       _memcpy = _lookup_expert_subset_charset_for_sid;
                                    }

                                    puVar12 = &_hb_NullPool;
                                    if (uVar19 < local_84) {
                                       puVar12 = (undefined*)( local_80 + lVar30 * 0x48 );
                                    }

                                    puVar34 = &_hb_NullPool;
                                    if (uVar19 < *(uint*)( local_d8 + 4 )) {
                                       puVar34 = (undefined*)( lVar30 * 0x10 + *(long*)( local_d8 + 8 ) );
                                    }

                                    uVar32 = *(uint*)( puVar12 + 0x14 );
                                    cVar9 = hb_vector_t<hb_vector_t<unsigned_char,false>,false>::resize(this_00, uVar32, true, true);
                                    if (cVar9 == '\0') goto LAB_0010ee16;
                                    if (uVar32 != 0) {
                                       uVar33 = 0;
                                       goto LAB_0010f5c3;
                                    }

                                 }

                                 break;
                              }

                              iVar29 = iVar29 + 1;
                              uVar33 = ( ulong )((int)uVar33 + iVar29 & *(uint*)( this + 0xdc ));
                              puVar16 = (uint*)( lVar27 + uVar33 * 0xc );
                              bVar4 = (byte)puVar16[1];
                           }
 while ( ( bVar4 & 2 ) != 0 );
                        }

                     }

                     goto LAB_0010f661;
                  }

                  LAB_0010f6e9:CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::~subr_subsetter_t((subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>*)&local_158);
                  goto LAB_0010ea5f;
               }

            }

            LAB_0010ee16:CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::~subr_subsetter_t((subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>*)&local_158);
         }
 else {
            local_158 = param_1;
            local_150 = param_2;
            cVar9 = CFF::subr_flattener_t<OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_flatten_t,14u>::flatten((subr_flattener_t<OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_flatten_t,14u>*)&local_158, (hb_vector_t*)( this + 0x100 ));
            if (cVar9 != '\0') {
               LAB_0010ea5f:if (this[0x142] != (cff1_subset_plan)0x0) {
                  plan_subset_encoding(this, param_1, param_2);
               }

               if (*(int*)( param_1 + 0xdc ) == -1) {
                  uVar31 = *(uint*)( this + 0x134 );
                  uVar33 = (ulong)uVar31;
                  uVar32 = *(uint*)( this + 0x130 );
                  uVar19 = uVar31 + 1;
                  if ((int)uVar32 <= (int)uVar31) {
                     if ((int)uVar32 < 0) {
                        LAB_0010f8a5:__hb_CrapPool = CONCAT44(_DAT_0011100c, __hb_NullPool);
                        _memcpy = _lookup_expert_subset_charset_for_sid;
                        _realloc = _lookup_expert_charset_for_sid;
                        goto LAB_0010ece1;
                     }

                     uVar31 = uVar32;
                     if (uVar32 < uVar19) {
                        do {
                           uVar31 = ( uVar31 >> 1 ) + 8 + uVar31;
                        }
 while ( uVar31 < uVar19 );
                        if (0xaaaaaaa < uVar31) {
                           *(uint*)( this + 0x130 ) = ~uVar32;
                           goto LAB_0010f8a5;
                        }

                        pvVar15 = realloc(*(void**)( this + 0x138 ), (ulong)uVar31 * 0x18);
                        if (pvVar15 == (void*)0x0) {
                           if (*(uint*)( this + 0x130 ) < uVar31) {
                              *(uint*)( this + 0x130 ) = ~*(uint *)(this + 0x130);
                              goto LAB_0010f8a5;
                           }

                        }
 else {
                           *(void**)( this + 0x138 ) = pvVar15;
                           *(uint*)( this + 0x130 ) = uVar31;
                        }

                        uVar33 = ( ulong ) * (uint*)( this + 0x134 );
                        uVar19 = *(uint*)( this + 0x134 ) + 1;
                     }

                  }

                  uVar8 = _LC8;
                  uVar7 = __LC21;
                  *(uint*)( this + 0x134 ) = uVar19;
                  puVar3 = (undefined8*)( *(long*)( this + 0x138 ) + uVar33 * 0x18 );
                  *puVar3 = &_hb_NullPool;
                  puVar3[1] = uVar7;
                  puVar3[2] = uVar8;
               }
 else {
                  iVar29 = *(int*)( param_1 + 0x10c );
                  if (iVar29 != 0) {
                     lVar30 = *(long*)( this + 0xe8 );
                     lVar27 = *(long*)( param_1 + 0x110 );
                     do {
                        iVar17 = (int)( lVar27 - *(long*)( param_1 + 0x110 ) >> 3 );
                        if (lVar30 != 0) {
                           uVar33 = ( ulong )(iVar17 * -0x138e8143 & 0x3fffffff) % ( ulong ) * (uint*)( this + 0xe0 );
                           piVar11 = (int*)( lVar30 + uVar33 * 0xc );
                           bVar4 = *(byte*)( piVar11 + 1 );
                           if (( bVar4 & 2 ) != 0) {
                              iVar18 = 0;
                              do {
                                 if (iVar17 * -0x33333333 == *piVar11) {
                                    if (( bVar4 & 1 ) != 0) goto LAB_0010eb40;
                                    break;
                                 }

                                 iVar18 = iVar18 + 1;
                                 uVar33 = ( ulong )((int)uVar33 + iVar18 & *(uint*)( this + 0xdc ));
                                 piVar11 = (int*)( lVar30 + uVar33 * 0xc );
                                 bVar4 = *(byte*)( piVar11 + 1 );
                              }
 while ( ( bVar4 & 2 ) != 0 );
                           }

                        }

                        lVar27 = lVar27 + 0x28;
                        iVar29 = iVar29 + -1;
                     }
 while ( iVar29 != 0 );
                  }

               }

               LAB_0010ece1:if (( param_2[0x10] != (hb_subset_plan_t)0x0 ) && ( *(int*)( this + 0x104 ) == *(int*)( param_2 + 0x58 ) )) {
                  uVar10 = CONCAT31(( int3 )(( uint ) * (int*)( this + 0xa8 ) >> 8), *(int*)( this + 0x134 ) == *(int*)( this + 0xa8 ));
                  goto LAB_0010ecf2;
               }

            }

         }

      }

   }

   LAB_0010ecf0:uVar10 = 0;
   LAB_0010ecf2:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar10;
   while (uVar33 = uVar33 + 1,uVar32 != uVar33) {
      LAB_0010f5c3:puVar16 = (uint*)&_hb_NullPool;
      if ((uint)uVar33 < *(uint*)( puVar12 + 0x34 )) {
         puVar16 = (uint*)( *(long*)( puVar12 + 0x38 ) + uVar33 * 4 );
      }

      if ((uint)uVar33 < *(uint*)( this_00 + 4 )) {
         phVar20 = (hb_vector_t*)( uVar33 * 0x10 + *(long*)( this_00 + 8 ) );
      }
 else {
         __hb_CrapPool = CONCAT44(_DAT_0011100c, __hb_NullPool);
         _memcpy = _lookup_expert_subset_charset_for_sid;
         phVar20 = (hb_vector_t*)&_hb_CrapPool;
      }

      ppVar28 = (parsed_cs_str_t*)&_hb_NullPool;
      if (*puVar16 < *(uint*)( puVar34 + 4 )) {
         ppVar28 = (parsed_cs_str_t*)( *(long*)( puVar34 + 8 ) + ( ulong ) * puVar16 * 0x28 );
      }

      cVar9 = CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::encode_str((subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>*)&local_158, ppVar28, uVar19, phVar20, true);
      if (cVar9 == '\0') goto LAB_0010ee16;
   }
;
   LAB_0010f661:lVar30 = lVar30 + 1;
   uVar31 = uVar31 + 0x9e3779b1;
   if (*(uint*)( this + 0xa4 ) <= (uint)lVar30) goto LAB_0010f6e9;
   uVar32 = *(uint*)( this + 0x124 );
   goto LAB_0010f43a;
   LAB_0010eb40:uVar31 = *(uint*)( lVar27 + 0x24 );
   if (( 0x186 < uVar31 ) && ( uVar31 != 0xffffffff )) {
      lVar30 = *(long*)( this + 0x1b8 );
      piVar11 = (int*)&minus_1;
      if (lVar30 != 0) {
         uVar33 = ( ( ulong )(( uVar31 - 0x187 ) * -0x61c8864f) & 0xffffffff3fffffff ) % ( ulong ) * (uint*)( this + 0x1b0 );
         piVar14 = (int*)( lVar30 + uVar33 * 0xc );
         bVar4 = *(byte*)( piVar14 + 1 );
         if (( bVar4 & 2 ) != 0) {
            iVar17 = 0;
            do {
               if (uVar31 - 0x187 == *piVar14) {
                  piVar11 = (int*)&minus_1;
                  if (( bVar4 & 1 ) != 0) {
                     piVar11 = piVar14 + 2;
                  }

                  goto LAB_0010ebe0;
               }

               iVar17 = iVar17 + 1;
               uVar33 = ( ulong )((int)uVar33 + iVar17 & *(uint*)( this + 0x1ac ));
               piVar14 = (int*)( lVar30 + uVar33 * 0xc );
               bVar4 = *(byte*)( piVar14 + 1 );
            }
 while ( ( bVar4 & 2 ) != 0 );
            piVar11 = (int*)&minus_1;
         }

      }

      LAB_0010ebe0:uVar31 = *piVar11 + 0x187;
   }

   uVar32 = *(uint*)( this + 0x134 );
   uVar33 = (ulong)uVar32;
   uVar19 = *(uint*)( this + 0x130 );
   uVar26 = uVar32 + 1;
   if ((int)uVar32 < (int)uVar19) {
      LAB_0010ebff:pvVar15 = *(void**)( this + 0x138 );
   }
 else {
      if ((int)uVar19 < 0) {
         LAB_0010f268:__hb_CrapPool = CONCAT44(_DAT_0011100c, __hb_NullPool);
         _memcpy = _lookup_expert_subset_charset_for_sid;
         _realloc = _lookup_expert_charset_for_sid;
         goto joined_r0x0010ec34;
      }

      uVar32 = uVar19;
      if (uVar26 <= uVar19) goto LAB_0010ebff;
      do {
         uVar32 = uVar32 + 8 + ( uVar32 >> 1 );
      }
 while ( uVar32 < uVar26 );
      if (0xaaaaaaa < uVar32) {
         *(uint*)( this + 0x130 ) = ~uVar19;
         goto LAB_0010f268;
      }

      pvVar15 = realloc(*(void**)( this + 0x138 ), (ulong)uVar32 * 0x18);
      if (pvVar15 == (void*)0x0) {
         if (*(uint*)( this + 0x130 ) < uVar32) {
            *(uint*)( this + 0x130 ) = ~*(uint *)(this + 0x130);
            goto LAB_0010f268;
         }

         uVar33 = ( ulong ) * (uint*)( this + 0x134 );
         pvVar15 = *(void**)( this + 0x138 );
         uVar26 = *(uint*)( this + 0x134 ) + 1;
      }
 else {
         *(void**)( this + 0x138 ) = pvVar15;
         uVar33 = ( ulong ) * (uint*)( this + 0x134 );
         *(uint*)( this + 0x130 ) = uVar32;
         uVar26 = *(uint*)( this + 0x134 ) + 1;
      }

   }

   *(uint*)( this + 0x134 ) = uVar26;
   plVar1 = (long*)( (long)pvVar15 + uVar33 * 0x18 );
   *plVar1 = lVar27;
   plVar1[1] = 0;
   *(undefined4*)( plVar1 + 2 ) = 0;
   *(uint*)( (long)plVar1 + 0x14 ) = uVar31;
   joined_r0x0010ec34:do {
      iVar29 = iVar29 + -1;
      if (iVar29 == 0) goto LAB_0010ece1;
      lVar27 = lVar27 + 0x28;
      puVar12 = &_hb_NullPool;
      if (*(int*)( param_1 + 0x10c ) != 0) {
         puVar12 = *(undefined**)( param_1 + 0x110 );
      }

      lVar30 = *(long*)( this + 0xe8 );
      iVar17 = (int)( lVar27 - (long)puVar12 >> 3 );
      if (lVar30 != 0) {
         uVar33 = ( ulong )(iVar17 * -0x138e8143 & 0x3fffffff) % ( ulong ) * (uint*)( this + 0xe0 );
         piVar11 = (int*)( lVar30 + uVar33 * 0xc );
         bVar4 = *(byte*)( piVar11 + 1 );
         if (( bVar4 & 2 ) != 0) {
            iVar18 = 0;
            do {
               if (iVar17 * -0x33333333 == *piVar11) {
                  if (( bVar4 & 1 ) != 0) goto LAB_0010eb40;
                  break;
               }

               iVar18 = iVar18 + 1;
               uVar33 = ( ulong )((int)uVar33 + iVar18 & *(uint*)( this + 0xdc ));
               piVar11 = (int*)( lVar30 + uVar33 * 0xc );
               bVar4 = *(byte*)( piVar11 + 1 );
            }
 while ( ( bVar4 & 2 ) != 0 );
         }

      }

   }
 while ( true );
}
/* WARNING: Control flow encountered bad instruction data *//* CFF::subr_subsetter_t<cff1_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned short, 2u> >,
   OT::cff1::accelerator_subset_t const, CFF::cff1_cs_interp_env_t, cff1_cs_opset_subr_subset_t,
   14u>::subr_subsetter_t(OT::cff1::accelerator_subset_t const&, hb_subset_plan_t const*) */void CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::subr_subsetter_t(accelerator_subset_t *param_1, hb_subset_plan_t *param_2) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CFF::subr_subsetter_t<cff1_subr_subsetter_t, CFF::Subrs<OT::IntType<unsigned short, 2u> >,
   OT::cff1::accelerator_subset_t const, CFF::cff1_cs_interp_env_t, cff1_cs_opset_subr_subset_t,
   14u>::~subr_subsetter_t() */void CFF::subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u>::~subr_subsetter_t(subr_subsetter_t<cff1_subr_subsetter_t,CFF::Subrs<OT::IntType<unsigned_short,2u>>,OT::cff1::accelerator_subset_t_const,CFF::cff1_cs_interp_env_t,cff1_cs_opset_subr_subset_t,14u> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

