/* tinyexr::hufCanonicalCodeTable(long long*) */void tinyexr::hufCanonicalCodeTable(longlong *param_1) {
   ulong *puVar1;
   long lVar2;
   ulong *puVar3;
   ulong *puVar4;
   long *plVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   long in_FS_OFFSET;
   long alStack_1e8[58];
   long local_18[3];
   local_18[1] = *(long*)( in_FS_OFFSET + 0x28 );
   puVar1 = (ulong*)( param_1 + 0x10001 );
   plVar5 = alStack_1e8;
   for (lVar8 = 0x3b; puVar3 = (ulong*)param_1,lVar8 != 0; lVar8 = lVar8 + -1) {
      *plVar5 = 0;
      plVar5 = plVar5 + 1;
   }

   do {
      puVar4 = puVar3 + 1;
      alStack_1e8[*puVar3] = alStack_1e8[*puVar3] + 1;
      puVar3 = puVar4;
   }
 while ( puVar4 != puVar1 );
   lVar8 = 0;
   plVar5 = local_18;
   do {
      lVar2 = *plVar5;
      plVar6 = plVar5 + -1;
      *plVar5 = lVar8;
      lVar8 = lVar2 + lVar8 >> 1;
      plVar5 = plVar6;
   }
 while ( plVar6 != alStack_1e8 );
   do {
      if (0 < (int)*param_1) {
         uVar7 = (ulong)(int)*param_1;
         lVar8 = alStack_1e8[uVar7];
         alStack_1e8[uVar7] = lVar8 + 1;
         *param_1 = lVar8 << 6 | uVar7;
      }

      param_1 = (longlong*)( (ulong*)param_1 + 1 );
   }
 while ( (ulong*)param_1 != puVar1 );
   if (local_18[1] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* tinyexr::getCode(int, int, long long&, int&, char const*&, char const*, unsigned short*&,
   unsigned short const*, unsigned short const*) */undefined8 tinyexr::getCode(int param_1, int param_2, longlong *param_3, int *param_4, char **param_5, char *param_6, ushort **param_7, ushort *param_8, ushort *param_9) {
   ushort *puVar1;
   ushort uVar2;
   ushort *puVar3;
   byte *pbVar4;
   long lVar5;
   ulong uVar6;
   ushort *puVar7;
   int iVar8;
   if (param_1 == param_2) {
      iVar8 = *param_4;
      if (iVar8 < 8) {
         pbVar4 = (byte*)*param_5;
         if (param_6 <= pbVar4) {
            return 0;
         }

         lVar5 = *param_3;
         *param_5 = (char*)( pbVar4 + 1 );
         uVar6 = ( ulong ) * pbVar4 | lVar5 << 8;
         *param_3 = uVar6;
      }
 else {
         uVar6 = *param_3;
         iVar8 = iVar8 + -8;
      }

      *param_4 = iVar8;
      puVar3 = *param_7;
      uVar6 = (long)uVar6 >> ( (byte)iVar8 & 0x3f );
      if (( param_9 < puVar3 + ( uVar6 & 0xff ) ) || ( puVar3 + -1 < param_8 )) {
         return 0;
      }

      uVar2 = puVar3[-1];
      if ((char)uVar6 != '\0') {
         uVar6 = ( ulong )((int)uVar6 - 1U & 0xff);
         puVar1 = puVar3 + 1;
         puVar7 = puVar3;
         if (( (int)( puVar1 + uVar6 ) - (int)puVar3 & 2U ) == 0) goto LAB_00100160;
         *puVar3 = uVar2;
         for (puVar7 = puVar1; puVar7 != puVar1 + uVar6; puVar7 = puVar7 + 2) {
            LAB_00100160:*puVar7 = uVar2;
            puVar7[1] = uVar2;
         }

         *param_7 = puVar3 + uVar6 + 1;
         puVar3[uVar6] = uVar2;
         return 1;
      }

   }
 else {
      puVar3 = *param_7;
      if (param_9 <= puVar3) {
         return 0;
      }

      *param_7 = puVar3 + 1;
      *puVar3 = (ushort)param_1;
   }

   return 1;
}
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tinyexr::DecodeTiledLevel(TEXRImage*,
   TEXRHeader const*, tinyexr::OffsetData const&, std::vector<unsigned long, std::allocator<unsigned
   long> > const&, int, unsigned char const*, unsigned long, std::__cxx11::string*)::{lambda()#1}> >
   >::~_State_impl() */void std::thread::_State_impl<std::thread::_Invoker < std::tuple<tinyexr::DecodeTiledLevel(TEXRImage *, TEXRHeader_const *, tinyexr::OffsetData_const &, std::vector<unsigned_long,std::allocator<unsigned_long>> const &, int, unsigned_char_const *, unsigned_long, std::__cxx11::string *)::{lambda()#1}>>>::~_State_impl(_State_impl<std::thread::_Invoker < std::tuple<tinyexr::DecodeTiledLevel(TEXRImage *, TEXRHeader_const *, tinyexr::OffsetData_const &, std::vector<unsigned_long,std::allocator<unsigned_long>> const &, int, unsigned_char_const *, unsigned_long, std::__cxx11::string *)::_lambda()_1_> >> *this) {
   *(undefined***)this = &PTR___State_impl_0011cd10;
   std::thread::_State::~_State((_State*)this);
   return;
}
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tinyexr::DecodeTiledLevel(TEXRImage*,
   TEXRHeader const*, tinyexr::OffsetData const&, std::vector<unsigned long, std::allocator<unsigned
   long> > const&, int, unsigned char const*, unsigned long, std::__cxx11::string*)::{lambda()#1}> >
   >::~_State_impl() */void std::thread::_State_impl<std::thread::_Invoker < std::tuple<tinyexr::DecodeTiledLevel(TEXRImage *, TEXRHeader_const *, tinyexr::OffsetData_const &, std::vector<unsigned_long,std::allocator<unsigned_long>> const &, int, unsigned_char_const *, unsigned_long, std::__cxx11::string *)::{lambda()#1}>>>::~_State_impl(_State_impl<std::thread::_Invoker < std::tuple<tinyexr::DecodeTiledLevel(TEXRImage *, TEXRHeader_const *, tinyexr::OffsetData_const &, std::vector<unsigned_long,std::allocator<unsigned_long>> const &, int, unsigned_char_const *, unsigned_long, std::__cxx11::string *)::_lambda()_1_> >> *this) {
   *(undefined***)this = &PTR___State_impl_0011cd10;
   std::thread::_State::~_State((_State*)this);
   operator_delete(this, 0x70);
   return;
}
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tinyexr::DecodeChunk(TEXRImage*,
   TEXRHeader const*, tinyexr::OffsetData const&, unsigned char const*, unsigned long,
   std::__cxx11::string*)::{lambda()#1}> > >::~_State_impl() */void std::thread::_State_impl<std::thread::_Invoker < std::tuple<tinyexr::DecodeChunk(TEXRImage *, TEXRHeader_const *, tinyexr::OffsetData_const &, unsigned_char_const *, unsigned_long, std::__cxx11::string *)::{lambda()#1}>>>::~_State_impl(_State_impl<std::thread::_Invoker < std::tuple<tinyexr::DecodeChunk(TEXRImage *, TEXRHeader_const *, tinyexr::OffsetData_const &, unsigned_char_const *, unsigned_long, std::__cxx11::string *)::_lambda()_1_> >> *this) {
   *(undefined***)this = &PTR___State_impl_0011cd38;
   std::thread::_State::~_State((_State*)this);
   return;
}
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tinyexr::DecodeChunk(TEXRImage*,
   TEXRHeader const*, tinyexr::OffsetData const&, unsigned char const*, unsigned long,
   std::__cxx11::string*)::{lambda()#1}> > >::~_State_impl() */void std::thread::_State_impl<std::thread::_Invoker < std::tuple<tinyexr::DecodeChunk(TEXRImage *, TEXRHeader_const *, tinyexr::OffsetData_const &, unsigned_char_const *, unsigned_long, std::__cxx11::string *)::{lambda()#1}>>>::~_State_impl(_State_impl<std::thread::_Invoker < std::tuple<tinyexr::DecodeChunk(TEXRImage *, TEXRHeader_const *, tinyexr::OffsetData_const &, unsigned_char_const *, unsigned_long, std::__cxx11::string *)::_lambda()_1_> >> *this) {
   *(undefined***)this = &PTR___State_impl_0011cd38;
   std::thread::_State::~_State((_State*)this);
   operator_delete(this, 0x70);
   return;
}
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tinyexr::EncodeTiledLevel(TEXRImage
   const*, TEXRHeader const*, std::vector<tinyexr::TChannelInfo,
   std::allocator<tinyexr::TChannelInfo> > const&, std::vector<std::vector<unsigned char,
   std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,
   std::allocator<unsigned char> > > >&, unsigned long, int, int, std::vector<unsigned long,
   std::allocator<unsigned long> > const&, int, void const*, std::__cxx11::string*)::{lambda()#1}> >
   >::~_State_impl() */void std::thread::_State_impl<std::thread::_Invoker < std::tuple<tinyexr::EncodeTiledLevel(TEXRImage_const *, TEXRHeader_const *, std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> const &, std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> &, unsigned_long, int, int, std::vector<unsigned_long,std::allocator<unsigned_long>> const &, int, void_const *, std::__cxx11::string *)::{lambda()#1}>>>::~_State_impl(_State_impl<std::thread::_Invoker < std::tuple<tinyexr::EncodeTiledLevel(TEXRImage_const *, TEXRHeader_const *, std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> const &, std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> &, unsigned_long, int, int, std::vector<unsigned_long,std::allocator<unsigned_long>> const &, int, void_const *, std::__cxx11::string *)::_lambda()_1_> >> *this) {
   *(undefined***)this = &PTR___State_impl_0011cd60;
   std::thread::_State::~_State((_State*)this);
   return;
}
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tinyexr::EncodeTiledLevel(TEXRImage
   const*, TEXRHeader const*, std::vector<tinyexr::TChannelInfo,
   std::allocator<tinyexr::TChannelInfo> > const&, std::vector<std::vector<unsigned char,
   std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,
   std::allocator<unsigned char> > > >&, unsigned long, int, int, std::vector<unsigned long,
   std::allocator<unsigned long> > const&, int, void const*, std::__cxx11::string*)::{lambda()#1}> >
   >::~_State_impl() */void std::thread::_State_impl<std::thread::_Invoker < std::tuple<tinyexr::EncodeTiledLevel(TEXRImage_const *, TEXRHeader_const *, std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> const &, std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> &, unsigned_long, int, int, std::vector<unsigned_long,std::allocator<unsigned_long>> const &, int, void_const *, std::__cxx11::string *)::{lambda()#1}>>>::~_State_impl(_State_impl<std::thread::_Invoker < std::tuple<tinyexr::EncodeTiledLevel(TEXRImage_const *, TEXRHeader_const *, std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> const &, std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> &, unsigned_long, int, int, std::vector<unsigned_long,std::allocator<unsigned_long>> const &, int, void_const *, std::__cxx11::string *)::_lambda()_1_> >> *this) {
   *(undefined***)this = &PTR___State_impl_0011cd60;
   std::thread::_State::~_State((_State*)this);
   operator_delete(this, 0x70);
   return;
}
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tinyexr::EncodeChunk(TEXRImage const*,
   TEXRHeader const*, std::vector<tinyexr::TChannelInfo, std::allocator<tinyexr::TChannelInfo> >
   const&, int, unsigned long, bool, tinyexr::OffsetData&, std::vector<std::vector<unsigned char,
   std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,
   std::allocator<unsigned char> > > >&, unsigned long&, std::__cxx11::string*)::{lambda()#1}> >
   >::~_State_impl() */void std::thread::_State_impl<std::thread::_Invoker < std::tuple<tinyexr::EncodeChunk(TEXRImage_const *, TEXRHeader_const *, std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> const &, int, unsigned_long, bool, tinyexr::OffsetData &, std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> &, unsigned_long &, std::__cxx11::string *)::{lambda()#1}>>>::~_State_impl(_State_impl<std::thread::_Invoker < std::tuple<tinyexr::EncodeChunk(TEXRImage_const *, TEXRHeader_const *, std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> const &, int, unsigned_long, bool, tinyexr::OffsetData &, std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> &, unsigned_long &, std::__cxx11::string *)::_lambda()_1_> >> *this) {
   *(undefined***)this = &PTR___State_impl_0011cd88;
   std::thread::_State::~_State((_State*)this);
   return;
}
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tinyexr::EncodeChunk(TEXRImage const*,
   TEXRHeader const*, std::vector<tinyexr::TChannelInfo, std::allocator<tinyexr::TChannelInfo> >
   const&, int, unsigned long, bool, tinyexr::OffsetData&, std::vector<std::vector<unsigned char,
   std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,
   std::allocator<unsigned char> > > >&, unsigned long&, std::__cxx11::string*)::{lambda()#1}> >
   >::~_State_impl() */void std::thread::_State_impl<std::thread::_Invoker < std::tuple<tinyexr::EncodeChunk(TEXRImage_const *, TEXRHeader_const *, std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> const &, int, unsigned_long, bool, tinyexr::OffsetData &, std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> &, unsigned_long &, std::__cxx11::string *)::{lambda()#1}>>>::~_State_impl(_State_impl<std::thread::_Invoker < std::tuple<tinyexr::EncodeChunk(TEXRImage_const *, TEXRHeader_const *, std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> const &, int, unsigned_long, bool, tinyexr::OffsetData &, std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> &, unsigned_long &, std::__cxx11::string *)::_lambda()_1_> >> *this) {
   *(undefined***)this = &PTR___State_impl_0011cd88;
   std::thread::_State::~_State((_State*)this);
   operator_delete(this, 0x68);
   return;
}
void EXRSetNameAttr_part_0(long param_1, char *param_2) {
   uint uVar1;
   ulong uVar2;
   ulong uVar3;
   char *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   byte bVar7;
   bVar7 = 0;
   *(undefined8*)( param_1 + 0x88 ) = 0;
   *(undefined8*)( param_1 + 0x180 ) = 0;
   puVar5 = (undefined8*)( param_1 + 0x90U & 0xfffffffffffffff8 );
   uVar2 = ( ulong )(( (int)( param_1 + 0x88 ) - (int)puVar5 ) + 0x100U >> 3);
   for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
   }

   if (param_2 != (char*)0x0) {
      uVar2 = strlen(param_2);
      if (uVar2 < 0x100) {
         if (uVar2 == 0) {
            return;
         }

      }
 else {
         uVar2 = 0xff;
      }

      uVar1 = (uint)uVar2;
      uVar3 = uVar2 & 0xffffffff;
      if (7 < uVar1) {
         puVar5 = (undefined8*)( param_1 + 0x90U & 0xfffffffffffffff8 );
         *(undefined8*)( param_1 + 0x88 ) = *(undefined8*)param_2;
         *(undefined8*)( param_1 + 0x80 + ( uVar2 & 0xffffffff ) ) = *(undefined8*)( param_2 + ( ( uVar2 & 0xffffffff ) - 8 ) );
         lVar6 = ( param_1 + 0x88 ) - (long)puVar5;
         pcVar4 = param_2 + -lVar6;
         for (uVar2 = ( ulong )(uVar1 + (int)lVar6 >> 3); uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar5 = *(undefined8*)pcVar4;
            pcVar4 = pcVar4 + ( (ulong)bVar7 * -2 + 1 ) * 8;
            puVar5 = puVar5 + (ulong)bVar7 * -2 + 1;
         }

         return;
      }

      if (( uVar2 & 4 ) == 0) {
         if (( uVar1 != 0 ) && ( *(char*)( param_1 + 0x88 ) = *param_2(uVar2 & 2) != 0 )) {
            *(undefined2*)( param_1 + 0x86 + uVar3 ) = *(undefined2*)( param_2 + ( uVar3 - 2 ) );
         }

      }
 else {
         *(undefined4*)( param_1 + 0x88 ) = *(undefined4*)param_2;
         *(undefined4*)( param_1 + 0x84 + uVar3 ) = *(undefined4*)( param_2 + ( uVar3 - 4 ) );
      }

   }

   return;
}
/* tinyexr::AllocateImage(int, TEXRChannelInfo const*, int const*, int, int, bool*) [clone
   .constprop.0] */undefined8 *tinyexr::AllocateImage(int param_1, TEXRChannelInfo *param_2, int *param_3, int param_4, int param_5, bool *param_6) {
   int iVar1;
   bool bVar2;
   undefined8 *puVar3;
   void *pvVar4;
   undefined8 *puVar5;
   long lVar6;
   TEXRChannelInfo *pTVar7;
   long lVar8;
   lVar6 = (long)param_1;
   puVar3 = (undefined8*)calloc(lVar6 * 8, 1);
   if (lVar6 != 0) {
      pTVar7 = param_2 + 0x100;
      lVar8 = 0;
      puVar5 = puVar3;
      do {
         iVar1 = *(int*)pTVar7;
         if (iVar1 != 1) {
            if (( iVar1 == 2 ) || ( iVar1 == 0 )) {
               LAB_00100471:pvVar4 = malloc((long)param_4 * (long)param_5 * 4);
               goto LAB_00100479;
            }

            LAB_001004ac:*puVar5 = 0;
            puVar5 = puVar3;
            do {
               if ((void*)*puVar5 != (void*)0x0) {
                  free((void*)*puVar5);
                  *puVar5 = 0;
               }

               puVar5 = puVar5 + 1;
            }
 while ( puVar3 + lVar6 != puVar5 );
            bVar2 = false;
            goto LAB_001004fd;
         }

         if (param_3[lVar8] != 1) {
            if (param_3[lVar8] == 2) goto LAB_00100471;
            goto LAB_001004ac;
         }

         pvVar4 = malloc((long)param_4 * (long)param_5 * 2);
         LAB_00100479:lVar8 = lVar8 + 1;
         *puVar5 = pvVar4;
         pTVar7 = pTVar7 + 0x110;
         puVar5 = puVar5 + 1;
      }
 while ( lVar6 != lVar8 );
   }

   bVar2 = true;
   LAB_001004fd:*param_6 = bVar2;
   return puVar3;
}
/* tinyexr::SetErrorMessage(std::__cxx11::string const&, char const**) [clone .part.0] [clone
   .isra.0] */void tinyexr::SetErrorMessage(string *param_1, char **param_2) {
   char *pcVar1;
   pcVar1 = strdup((char*)param_1);
   *param_2 = pcVar1;
   return;
}
/* std::__cxx11::string::append(char const*) [clone .isra.0] */void std::__cxx11::string::append(string *this, char *param_1) {
   size_t sVar1;
   sVar1 = strlen(param_1);
   if (sVar1 <= 0x3fffffffffffffffU - *(long*)( this + 8 )) {
      std::__cxx11::string::_M_append((char*)this, (ulong)param_1);
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_length_error("basic_string::append");
}
/* std::vector<unsigned char, std::allocator<unsigned char> >::_M_range_check(unsigned long) const
   [clone .isra.0] */void std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_check(ulong param_1) {
   undefined1 *__dest;
   undefined1 *in_RDX;
   long extraout_RDX;
   ulong __n;
   long in_RSI;
   char *pcVar1;
   long in_FS_OFFSET;
   ulong uStack_30;
   long lStack_28;
   if (in_RDX < (undefined1*)( in_RSI - param_1 )) {
      return;
   }

   pcVar1 = _LC1;
   std::__throw_out_of_range_fmt(_LC1);
   __n = extraout_RDX - (long)in_RDX;
   lStack_28 = *(long*)( in_FS_OFFSET + 0x28 );
   uStack_30 = __n;
   if (__n < 0x10) {
      __dest = *(undefined1**)pcVar1;
      if (__n == 1) {
         *__dest = *in_RDX;
         __dest = *(undefined1**)pcVar1;
         goto LAB_001005e4;
      }

      if (__n == 0) goto LAB_001005e4;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create((ulong*)pcVar1, ( ulong ) & uStack_30);
      *(undefined1**)pcVar1 = __dest;
      *(ulong*)( (long)pcVar1 + 0x10 ) = uStack_30;
   }

   memcpy(__dest, in_RDX, __n);
   __dest = *(undefined1**)pcVar1;
   LAB_001005e4:*(ulong*)( (long)pcVar1 + 8 ) = uStack_30;
   __dest[uStack_30] = 0;
   if (lStack_28 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */void std::__cxx11::string::_M_construct<char_const*>(ulong *param_1, undefined1 *param_2, long param_3) {
   undefined1 *__dest;
   ulong __n;
   long in_FS_OFFSET;
   ulong local_28;
   long local_20;
   __n = param_3 - (long)param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = __n;
   if (__n < 0x10) {
      __dest = (undefined1*)*param_1;
      if (__n == 1) {
         *__dest = *param_2;
         __dest = (undefined1*)*param_1;
         goto LAB_001005e4;
      }

      if (__n == 0) goto LAB_001005e4;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_001005e4:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* std::__cxx11::string::compare(char const*) const [clone .isra.0] */ulong std::__cxx11::string::compare(char *param_1) {
   uint uVar1;
   size_t sVar2;
   ulong uVar3;
   char *in_RDX;
   ulong uVar4;
   ulong in_RSI;
   sVar2 = strlen(in_RDX);
   uVar3 = in_RSI;
   if (sVar2 <= in_RSI) {
      uVar3 = sVar2;
   }

   if (uVar3 != 0) {
      uVar1 = memcmp(param_1, in_RDX, uVar3);
      if (uVar1 != 0) {
         return (ulong)uVar1;
      }

   }

   uVar4 = in_RSI - sVar2;
   uVar3 = 0x7fffffff;
   if (( (long)uVar4 < 0x80000000 ) && ( uVar3 = 0x80000000 ),-0x80000001 < (long)uVar4) {
      uVar3 = uVar4 & 0xffffffff;
   }

   return uVar3;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* std::ostream& std::endl<char, std::char_traits<char> >(std::ostream&) [clone .isra.0] */ostream *std::endl<char,std::char_traits<char>>(ostream *param_1) {
   long *plVar1;
   ostream *poVar2;
   undefined1 *__dest;
   long extraout_RDX;
   ulong __n;
   undefined1 *in_RSI;
   long in_FS_OFFSET;
   ulong uStack_40;
   long lStack_38;
   plVar1 = *(long**)( param_1 + *(long*)( *(long*)param_1 + -0x18 ) + 0xf0 );
   if (plVar1 != (long*)0x0) {
      if ((char)plVar1[7] == '\0') {
         std::ctype<char>::_M_widen_init();
         if (*(code**)( *plVar1 + 0x30 ) != ctype<char>::do_widen) {
            ( **(code**)( *plVar1 + 0x30 ) )(plVar1, 10);
         }

      }

      std::ostream::put((char)param_1);
      poVar2 = (ostream*)std::ostream::flush();
      return poVar2;
   }

   std::__throw_bad_cast();
   __n = extraout_RDX - (long)in_RSI;
   lStack_38 = *(long*)( in_FS_OFFSET + 0x28 );
   uStack_40 = __n;
   if (__n < 0x10) {
      __dest = *(undefined1**)param_1;
      if (__n == 1) {
         *__dest = *in_RSI;
         __dest = *(undefined1**)param_1;
         goto LAB_00100774;
      }

      if (__n == 0) goto LAB_00100774;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create((ulong*)param_1, ( ulong ) & uStack_40);
      *(undefined1**)param_1 = __dest;
      *(ulong*)( param_1 + 0x10 ) = uStack_40;
   }

   memcpy(__dest, in_RSI, __n);
   __dest = *(undefined1**)param_1;
   LAB_00100774:*(ulong*)( param_1 + 8 ) = uStack_40;
   __dest[uStack_40] = 0;
   if (lStack_38 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return (ostream*)0x0;
}
/* void std::__cxx11::string::_M_construct<char*>(char*, char*, std::forward_iterator_tag) [clone
   .isra.0] */void std::__cxx11::string::_M_construct<char*>(ulong *param_1, undefined1 *param_2, long param_3) {
   undefined1 *__dest;
   ulong __n;
   long in_FS_OFFSET;
   ulong local_28;
   long local_20;
   __n = param_3 - (long)param_2;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = __n;
   if (__n < 0x10) {
      __dest = (undefined1*)*param_1;
      if (__n == 1) {
         *__dest = *param_2;
         __dest = (undefined1*)*param_1;
         goto LAB_00100774;
      }

      if (__n == 0) goto LAB_00100774;
   }
 else {
      __dest = (undefined1*)std::__cxx11::string::_M_create(param_1, ( ulong ) & local_28);
      *param_1 = (ulong)__dest;
      param_1[2] = local_28;
   }

   memcpy(__dest, param_2, __n);
   __dest = (undefined1*)*param_1;
   LAB_00100774:param_1[1] = local_28;
   __dest[local_28] = 0;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* void std::__adjust_heap<long long**, long, long long*,
   __gnu_cxx::__ops::_Iter_comp_iter<tinyexr::FHeapCompare> >(long long**, long, long, long long*,
   __gnu_cxx::__ops::_Iter_comp_iter<tinyexr::FHeapCompare>) [clone .isra.0] */void std::__adjust_heap<long_long**,long,long_long*,__gnu_cxx::__ops::_Iter_comp_iter<tinyexr::FHeapCompare>>(long param_1, long param_2, ulong param_3, long *param_4) {
   undefined8 *puVar1;
   long lVar2;
   undefined8 *puVar3;
   long lVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   lVar7 = (long)( param_3 - 1 ) / 2;
   lVar6 = param_2;
   if (param_2 < lVar7) {
      do {
         lVar2 = ( lVar6 + 1 ) * 2;
         lVar4 = ( lVar6 + 1 ) * 0x10;
         puVar3 = (undefined8*)( param_1 + lVar4 );
         plVar5 = (long*)*puVar3;
         if (**(long**)( param_1 + -8 + lVar4 ) < *plVar5) {
            lVar2 = lVar2 + -1;
            puVar3 = (undefined8*)( param_1 + lVar2 * 8 );
            plVar5 = (long*)*puVar3;
         }

         *(long**)( param_1 + lVar6 * 8 ) = plVar5;
         lVar6 = lVar2;
      }
 while ( lVar2 < lVar7 );
      if (( param_3 & 1 ) == 0) goto LAB_001008c0;
   }
 else {
      puVar3 = (undefined8*)( param_1 + param_2 * 8 );
      lVar2 = param_2;
      if (( param_3 & 1 ) != 0) goto LAB_001008a2;
      LAB_001008c0:if (lVar2 == (long)( param_3 - 2 ) / 2) {
         lVar6 = lVar2 * 2;
         lVar2 = lVar6 + 1;
         *puVar3 = *(undefined8*)( param_1 + -8 + ( lVar6 + 2 ) * 8 );
         puVar3 = (undefined8*)( param_1 + lVar2 * 8 );
      }

   }

   lVar6 = ( lVar2 + -1 ) - ( lVar2 + -1 >> 0x3f );
   if (param_2 < lVar2) {
      lVar7 = *param_4;
      while (true) {
         lVar4 = lVar6 >> 1;
         puVar1 = (undefined8*)( param_1 + lVar4 * 8 );
         puVar3 = (undefined8*)( param_1 + lVar2 * 8 );
         plVar5 = (long*)*puVar1;
         if (*plVar5 <= lVar7) break;
         *puVar3 = plVar5;
         lVar6 = ( lVar4 + -1 ) - ( lVar4 + -1 >> 0x3f );
         lVar2 = lVar4;
         if (lVar4 <= param_2) {
            *puVar1 = param_4;
            return;
         }

      }
;
   }

   LAB_001008a2:*puVar3 = param_4;
   return;
}
/* tinyexr::CalculateNumTiles(std::vector<int, std::allocator<int> >&, int, int, int) [clone
   .isra.0] */undefined1  [16] __thiscalltinyexr::CalculateNumTiles(tinyexr *this, vector *param_1, int param_2, int param_3, int param_4) {
   undefined1 auVar1[16];
   uint uVar2;
   ulong uVar3;
   undefined4 in_register_00000014;
   ulong uVar4;
   int iVar5;
   undefined1 auVar6[16];
   uVar4 = CONCAT44(in_register_00000014, param_2);
   uVar3 = 0;
   if (param_1 == (vector*)this) {
      LAB_001009a0:auVar6._8_8_ = uVar4;
      auVar6._0_8_ = 1;
      return auVar6;
   }

   do {
      iVar5 = 1 << ( (byte)uVar3 & 0x1f );
      uVar2 = param_2 / iVar5;
      uVar4 = (long)param_2 % (long)iVar5 & 0xffffffff;
      if (param_4 == 1) {
         uVar4 = ( ulong )(uVar2 + 1);
         if ((int)( uVar2 << ( (byte)uVar3 & 0x1f ) ) < param_2) {
            uVar2 = uVar2 + 1;
         }

      }

      if ((int)uVar2 < 1) {
         uVar2 = 1;
      }
 else if (-0x80000000 - param_3 < (int)uVar2) break;
      iVar5 = ( uVar2 - 1 ) + param_3;
      uVar4 = (long)iVar5 % (long)param_3 & 0xffffffff;
      *(int*)( this + uVar3 * 4 ) = iVar5 / param_3;
      uVar3 = uVar3 + 1;
      if (( ulong )((long)param_1 - (long)this >> 2) <= uVar3) goto LAB_001009a0;
   }
 while ( uVar3 != 0x80000000 );
   auVar1._8_8_ = 0;
   auVar1._0_8_ = uVar4;
   return auVar1 << 0x40;
}
/* std::__cxx11::string::string<std::allocator<char> >(char const*, std::allocator<char> const&)
   [clone .constprop.0] */void std::__cxx11::string::string<std::allocator<char>>(string *this, char *param_1, allocator *param_2) {
   void *__src;
   ulong uVar1;
   size_t __n;
   string *__dest;
   ulong uVar2;
   char *pcVar3;
   char *pcVar4;
   char *pcVar5;
   ulong uVar6;
   long in_FS_OFFSET;
   size_t local_38;
   long local_30;
   __dest = this + 0x10;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(string**)this = __dest;
   if (param_1 != (char*)0x0) {
      __n = strlen(param_1);
      local_38 = __n;
      if (__n < 0x10) {
         if (__n == 1) {
            this[0x10] = ( string ) * param_1;
            goto LAB_00100a03;
         }

         if (__n == 0) goto LAB_00100a03;
      }
 else {
         __dest = (string*)std::__cxx11::string::_M_create((ulong*)this, ( ulong ) & local_38);
         *(string**)this = __dest;
         *(size_t*)( this + 0x10 ) = local_38;
      }

      memcpy(__dest, param_1, __n);
      __dest = *(string**)this;
      LAB_00100a03:*(size_t*)( this + 8 ) = local_38;
      __dest[local_38] = (string)0x0;
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   pcVar5 = "basic_string: construction from null is not valid";
   std::__throw_logic_error("basic_string: construction from null is not valid");
   pcVar3 = *(char**)( pcVar5 + 8 );
   if (pcVar3 != *(char**)( pcVar5 + 0x10 )) {
      *pcVar3 = *param_1;
      *(long*)( pcVar5 + 8 ) = *(long*)( pcVar5 + 8 ) + 1;
      return;
   }

   __src = *(void**)pcVar5;
   uVar2 = (long)pcVar3 - (long)__src;
   if (uVar2 == 0x7fffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (uVar2 == 0) {
      uVar6 = 1;
      pcVar3 = (char*)operator_new(1);
      *pcVar3 = *param_1;
      LAB_00100b83:pcVar4 = pcVar3 + uVar2 + 1;
      if (__src == (void*)0x0) goto LAB_00100b48;
      uVar2 = *(long*)( pcVar5 + 0x10 ) - (long)__src;
   }
 else {
      uVar1 = uVar2 * 2;
      uVar6 = 0x7fffffffffffffff;
      if (uVar1 < 0x8000000000000000) {
         uVar6 = uVar1;
      }

      if (uVar1 < uVar2) {
         uVar6 = 0x7fffffffffffffff;
      }

      pcVar3 = (char*)operator_new(uVar6);
      pcVar3[uVar2] = *param_1;
      if ((long)uVar2 < 1) goto LAB_00100b83;
      pcVar4 = pcVar3 + uVar2 + 1;
      memmove(pcVar3, __src, uVar2);
      uVar2 = *(long*)( pcVar5 + 0x10 ) - (long)__src;
   }

   operator_delete(__src, uVar2);
   LAB_00100b48:*(char**)pcVar5 = pcVar3;
   *(char**)( pcVar5 + 8 ) = pcVar4;
   *(char**)( pcVar5 + 0x10 ) = pcVar3 + uVar6;
   return;
}
/* unsigned char& std::vector<unsigned char, std::allocator<unsigned char> >::emplace_back<unsigned
   char>(unsigned char&&) [clone .isra.0] */uchar * __thiscall
std::vector<unsigned_char,std::allocator<unsigned_char>>::emplace_back<unsigned_char>
          (vector<unsigned_char,std::allocator<unsigned_char>> *this,uchar *param_1){
   byte bVar1;
   void *__src;
   ulong uVar2;
   ulong uVar3;
   byte *__dest;
   uchar *puVar4;
   uchar *extraout_RAX;
   byte *pbVar5;
   ulong uVar6;
   puVar4 = *(uchar**)( this + 8 );
   if (puVar4 != *(uchar**)( this + 0x10 )) {
      *puVar4 = *param_1;
      *(long*)( this + 8 ) = *(long*)( this + 8 ) + 1;
      return puVar4;
   }

   __src = *(void**)this;
   uVar3 = (long)puVar4 - (long)__src;
   if (uVar3 == 0x7fffffffffffffff) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
   }

   if (uVar3 == 0) {
      uVar6 = 1;
      __dest = (byte*)operator_new(1);
      bVar1 = *param_1;
      *__dest = bVar1;
      LAB_00100b83:puVar4 = (uchar*)(ulong)bVar1;
      pbVar5 = __dest + uVar3 + 1;
      if (__src == (void*)0x0) goto LAB_00100b48;
      uVar3 = *(long*)( this + 0x10 ) - (long)__src;
   }
 else {
      uVar2 = uVar3 * 2;
      uVar6 = 0x7fffffffffffffff;
      if (uVar2 < 0x8000000000000000) {
         uVar6 = uVar2;
      }

      if (uVar2 < uVar3) {
         uVar6 = 0x7fffffffffffffff;
      }

      __dest = (byte*)operator_new(uVar6);
      bVar1 = *param_1;
      __dest[uVar3] = bVar1;
      if ((long)uVar3 < 1) goto LAB_00100b83;
      pbVar5 = __dest + uVar3 + 1;
      memmove(__dest, __src, uVar3);
      uVar3 = *(long*)( this + 0x10 ) - (long)__src;
   }

   operator_delete(__src, uVar3);
   puVar4 = extraout_RAX;
   LAB_00100b48:*(byte**)this = __dest;
   *(byte**)( this + 8 ) = pbVar5;
   *(byte**)( this + 0x10 ) = __dest + uVar6;
   return puVar4;
}
/* void std::vector<unsigned char, std::allocator<unsigned char> >::_M_range_insert<char
   const*>(__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
   std::allocator<unsigned char> > >, char const*, char const*, std::forward_iterator_tag) [clone
   .isra.0] */void std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_insert<char_const*>(undefined8 *param_1, undefined1 *param_2, long param_3, long param_4) {
   undefined1 *__dest;
   long lVar1;
   ulong uVar2;
   undefined1 *puVar3;
   size_t sVar4;
   ulong uVar5;
   ulong uVar6;
   undefined1 *puVar7;
   ulong uVar8;
   undefined1 *local_50;
   undefined1 *local_48;
   if (param_3 == param_4) {
      return;
   }

   uVar5 = param_4 - param_3;
   __dest = (undefined1*)param_1[1];
   if (uVar5 <= ( ulong )(param_1[2] - (long)__dest)) {
      uVar6 = (long)__dest - (long)param_2;
      if (uVar5 < uVar6) {
         puVar7 = __dest + -uVar5;
         if ((long)uVar5 < 2) {
            puVar3 = __dest;
            if (uVar5 == 1) {
               *__dest = *puVar7;
               puVar3 = (undefined1*)param_1[1];
            }

         }
 else {
            __dest = (undefined1*)memmove(__dest, puVar7, uVar5);
            puVar3 = (undefined1*)param_1[1];
         }

         sVar4 = (long)puVar7 - (long)param_2;
         param_1[1] = puVar3 + uVar5;
         if ((long)sVar4 < 2) {
            if (sVar4 == 1) {
               __dest[-1] = *param_2;
            }

         }
 else {
            memmove(__dest + -sVar4, param_2, sVar4);
         }

         if (0 < (long)uVar5) {
            uVar6 = 0;
            do {
               param_2[uVar6] = *(undefined1*)( param_3 + uVar6 );
               uVar6 = uVar6 + 1;
            }
 while ( uVar5 != uVar6 );
         }

         return;
      }

      param_4 = param_4 - ( param_3 + uVar6 );
      if (0 < param_4) {
         lVar1 = 0;
         do {
            __dest[lVar1] = *(undefined1*)( param_3 + uVar6 + lVar1 );
            lVar1 = lVar1 + 1;
         }
 while ( param_4 != lVar1 );
         __dest = (undefined1*)param_1[1];
      }

      puVar7 = __dest + ( uVar5 - uVar6 );
      param_1[1] = puVar7;
      if ((long)uVar6 < 2) {
         if (uVar6 != 1) {
            param_1[1] = __dest + uVar5;
            return;
         }

         *puVar7 = *param_2;
         lVar1 = param_1[1];
      }
 else {
         memmove(puVar7, param_2, uVar6);
         lVar1 = param_1[1];
      }

      param_1[1] = lVar1 + uVar6;
      uVar5 = 0;
      do {
         param_2[uVar5] = *(undefined1*)( param_3 + uVar5 );
         uVar5 = uVar5 + 1;
      }
 while ( uVar6 != uVar5 );
      return;
   }

   puVar7 = (undefined1*)*param_1;
   uVar6 = (long)__dest - (long)puVar7;
   if (0x7fffffffffffffff - uVar6 < uVar5) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_range_insert");
   }

   if (uVar6 < uVar5) {
      uVar2 = uVar6 + uVar5;
      uVar8 = 0x7fffffffffffffff;
      if (!CARRY8(uVar6,uVar5)) {
         if (uVar2 == 0) {
            local_48 = (undefined1*)0x0;
            local_50 = (undefined1*)0x0;
            goto LAB_00100cd6;
         }

         uVar8 = 0x7fffffffffffffff;
         if (uVar2 < 0x8000000000000000) {
            uVar8 = uVar2;
         }

      }

   }
 else {
      uVar2 = uVar6 * 2;
      uVar8 = 0x7fffffffffffffff;
      if (uVar2 < 0x8000000000000000) {
         uVar8 = uVar2;
      }

      if (uVar2 < uVar6) {
         uVar8 = 0x7fffffffffffffff;
      }

   }

   local_50 = (undefined1*)operator_new(uVar8);
   local_48 = local_50 + uVar8;
   LAB_00100cd6:sVar4 = (long)param_2 - (long)puVar7;
   if ((long)sVar4 < 2) {
      if (sVar4 == 1) {
         *local_50 = *puVar7;
      }

   }
 else {
      memmove(local_50, puVar7, sVar4);
   }

   puVar3 = local_50 + sVar4;
   if (0 < (long)uVar5) {
      uVar6 = 0;
      do {
         puVar3[uVar6] = *(undefined1*)( param_3 + uVar6 );
         uVar6 = uVar6 + 1;
      }
 while ( uVar5 != uVar6 );
      puVar3 = puVar3 + uVar5;
   }

   sVar4 = (long)__dest - (long)param_2;
   if ((long)sVar4 < 2) {
      if (sVar4 == 1) {
         *puVar3 = *param_2;
      }

   }
 else {
      puVar3 = (undefined1*)memcpy(puVar3, param_2, sVar4);
   }

   if (puVar7 != (undefined1*)0x0) {
      operator_delete(puVar7, param_1[2] - (long)puVar7);
   }

   param_1[1] = puVar3 + sVar4;
   *param_1 = local_50;
   param_1[2] = local_48;
   return;
}
/* void std::vector<unsigned char, std::allocator<unsigned char>
   >::_M_range_insert<__gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
   std::allocator<unsigned char> > > >(__gnu_cxx::__normal_iterator<unsigned char*,
   std::vector<unsigned char, std::allocator<unsigned char> > >,
   __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char, std::allocator<unsigned
   char> > >, __gnu_cxx::__normal_iterator<unsigned char*, std::vector<unsigned char,
   std::allocator<unsigned char> > >, std::forward_iterator_tag) [clone .isra.0] */void std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_insert<__gnu_cxx::__normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator<unsigned_char>>>>(undefined8 *param_1, undefined1 *param_2, undefined1 *param_3, undefined1 *param_4) {
   undefined1 *puVar1;
   ulong uVar2;
   size_t sVar3;
   ulong uVar4;
   undefined1 *puVar5;
   ulong uVar6;
   ulong __n;
   undefined1 *__dest;
   undefined1 *local_50;
   undefined1 *local_40;
   if (param_3 == param_4) {
      return;
   }

   __n = (long)param_4 - (long)param_3;
   __dest = (undefined1*)param_1[1];
   if (__n <= ( ulong )(param_1[2] - (long)__dest)) {
      uVar4 = (long)__dest - (long)param_2;
      if (__n < uVar4) {
         puVar5 = __dest + -__n;
         if ((long)__n < 2) {
            puVar1 = __dest;
            if (__n == 1) {
               *__dest = *puVar5;
               puVar1 = (undefined1*)param_1[1];
            }

         }
 else {
            memmove(__dest, puVar5, __n);
            puVar1 = (undefined1*)param_1[1];
         }

         sVar3 = (long)puVar5 - (long)param_2;
         param_1[1] = puVar1 + __n;
         if ((long)sVar3 < 2) {
            if (sVar3 == 1) {
               __dest[-1] = *param_2;
            }

         }
 else {
            memmove(__dest + -sVar3, param_2, sVar3);
         }

         if (1 < (long)__n) {
            LAB_00100f9d:memmove(param_2, param_3, __n);
            return;
         }

         if (__n != 1) {
            return;
         }

      }
 else {
         puVar5 = param_3 + uVar4;
         sVar3 = (long)param_4 - (long)puVar5;
         if ((long)sVar3 < 2) {
            if (sVar3 == 1) {
               *__dest = *puVar5;
               __dest = (undefined1*)param_1[1];
            }

         }
 else {
            memmove(__dest, puVar5, sVar3);
            __dest = (undefined1*)param_1[1];
         }

         puVar5 = __dest + ( __n - uVar4 );
         param_1[1] = puVar5;
         if (1 < (long)uVar4) {
            memmove(puVar5, param_2, uVar4);
            param_1[1] = param_1[1] + uVar4;
            __n = uVar4;
            goto LAB_00100f9d;
         }

         if (uVar4 != 1) {
            param_1[1] = __dest + __n;
            return;
         }

         *puVar5 = *param_2;
         param_1[1] = param_1[1] + 1;
      }

      *param_2 = *param_3;
      return;
   }

   puVar5 = (undefined1*)*param_1;
   uVar4 = (long)__dest - (long)puVar5;
   if (0x7fffffffffffffff - uVar4 < __n) {
      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_range_insert");
   }

   if (uVar4 < __n) {
      uVar2 = uVar4 + __n;
      uVar6 = 0x7fffffffffffffff;
      if (!CARRY8(uVar4,__n)) {
         if (uVar2 == 0) {
            local_40 = (undefined1*)0x0;
            local_50 = (undefined1*)0x0;
            goto LAB_00101021;
         }

         uVar6 = 0x7fffffffffffffff;
         if (uVar2 < 0x8000000000000000) {
            uVar6 = uVar2;
         }

      }

   }
 else {
      uVar2 = uVar4 * 2;
      uVar6 = 0x7fffffffffffffff;
      if (uVar2 < 0x8000000000000000) {
         uVar6 = uVar2;
      }

      if (uVar2 < uVar4) {
         uVar6 = 0x7fffffffffffffff;
      }

   }

   local_50 = (undefined1*)operator_new(uVar6);
   local_40 = local_50 + uVar6;
   LAB_00101021:sVar3 = (long)param_2 - (long)puVar5;
   if ((long)sVar3 < 2) {
      if (sVar3 == 1) {
         *local_50 = *puVar5;
      }

   }
 else {
      memmove(local_50, puVar5, sVar3);
   }

   puVar1 = local_50 + sVar3;
   if ((long)__n < 2) {
      if (__n == 1) {
         *puVar1 = *param_3;
      }

   }
 else {
      puVar1 = (undefined1*)memcpy(puVar1, param_3, __n);
   }

   sVar3 = (long)__dest - (long)param_2;
   puVar1 = puVar1 + __n;
   if ((long)sVar3 < 2) {
      if (sVar3 == 1) {
         *puVar1 = *param_2;
      }

   }
 else {
      puVar1 = (undefined1*)memcpy(puVar1, param_2, sVar3);
   }

   if (puVar5 != (undefined1*)0x0) {
      operator_delete(puVar5, param_1[2] - (long)puVar5);
   }

   param_1[1] = puVar1 + sVar3;
   *param_1 = local_50;
   param_1[2] = local_40;
   return;
}
/* tinyexr::WriteAttributeToMemory(std::vector<unsigned char, std::allocator<unsigned char> >*, char
   const*, char const*, unsigned char const*, int) */void tinyexr::WriteAttributeToMemory(vector *param_1, char *param_2, char *param_3, uchar *param_4, int param_5) {
   undefined1 uVar1;
   size_t sVar2;
   undefined1 *puVar3;
   void *pvVar4;
   undefined1 *__dest;
   uchar *puVar5;
   uchar *puVar6;
   int *piVar7;
   undefined1 *puVar8;
   ulong uVar9;
   ulong uVar10;
   ulong uVar11;
   ulong __n;
   __n = (ulong)param_5;
   sVar2 = strlen(param_2);
   std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_insert<char_const*>(param_1, *(undefined8*)( param_1 + 8 ), param_2, param_2 + sVar2 + 1);
   sVar2 = strlen(param_3);
   std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_insert<char_const*>(param_1, *(undefined8*)( param_1 + 8 ), param_3, param_3 + sVar2 + 1);
   piVar7 = *(int**)( param_1 + 8 );
   puVar3 = *(undefined1**)param_1;
   if (( ulong )(*(long*)( param_1 + 0x10 ) - (long)piVar7) < 4) {
      uVar10 = (long)piVar7 - (long)puVar3;
      if (0x7fffffffffffffff - uVar10 < 4) goto LAB_00101621;
      if (uVar10 < 4) {
         uVar9 = uVar10 + 4;
         __dest = (undefined1*)operator_new(uVar9);
         if (1 < (long)uVar10) goto LAB_0010144a;
         if (uVar10 != 1) {
            uVar9 = 4;
            goto LAB_00101540;
         }

         uVar1 = *puVar3;
         uVar10 = *(long*)( param_1 + 0x10 ) - (long)puVar3;
         *(int*)( __dest + 1 ) = param_5;
         piVar7 = (int*)( __dest + 5 );
         uVar11 = 5;
         uVar9 = 5;
         *__dest = uVar1;
         LAB_00101473:operator_delete(puVar3, uVar10);
      }
 else {
         uVar11 = uVar10 * 2;
         uVar9 = 0x7fffffffffffffff;
         if (( uVar10 <= uVar11 ) && ( uVar9 = uVar11 < 0x8000000000000000 )) {
            uVar9 = uVar11;
         }

         __dest = (undefined1*)operator_new(uVar9);
         if (1 < (long)uVar10) {
            LAB_0010144a:memmove(__dest, puVar3, uVar10);
            piVar7 = (int*)( (long)( __dest + uVar10 ) + 4 );
            *(int*)( __dest + uVar10 ) = param_5;
            uVar11 = (long)piVar7 - (long)__dest;
            uVar10 = *(long*)( param_1 + 0x10 ) - (long)puVar3;
            goto LAB_00101473;
         }

         LAB_00101540:*(int*)( __dest + uVar10 ) = param_5;
         piVar7 = (int*)( (long)( __dest + uVar10 ) + 4 );
         uVar11 = (long)piVar7 - (long)__dest;
         if (puVar3 != (undefined1*)0x0) {
            uVar10 = *(long*)( param_1 + 0x10 ) - (long)puVar3;
            goto LAB_00101473;
         }

      }

      *(undefined1**)param_1 = __dest;
      *(int**)( param_1 + 8 ) = piVar7;
      *(undefined1**)( param_1 + 0x10 ) = __dest + uVar9;
   }
 else {
      *piVar7 = param_5;
      __dest = *(undefined1**)param_1;
      piVar7 = (int*)( *(long*)( param_1 + 8 ) + 4 );
      *(int**)( param_1 + 8 ) = piVar7;
      uVar11 = (long)piVar7 - (long)__dest;
   }

   if (__n == 0) {
      return;
   }

   if (__n <= ( ulong )(*(long*)( param_1 + 0x10 ) - (long)piVar7)) {
      if ((long)__n < 2) {
         if (__n == 1) {
            *(uchar*)piVar7 = *param_4;
            piVar7 = *(int**)( param_1 + 8 );
         }

      }
 else {
         memmove(piVar7, param_4, __n);
         piVar7 = *(int**)( param_1 + 8 );
      }

      *(uchar**)( param_1 + 8 ) = (uchar*)( (long)piVar7 + __n );
      return;
   }

   if (0x7fffffffffffffff - uVar11 < __n) {
      LAB_00101621:/* WARNING: Subroutine does not return */std::__throw_length_error("vector::_M_range_insert");
   }

   if (uVar11 < __n) {
      uVar9 = __n + uVar11;
      uVar10 = 0x7fffffffffffffff;
      if (CARRY8(__n, uVar11)) goto LAB_00101367;
      if (uVar9 != 0) {
         uVar10 = uVar9;
         if (0x7fffffffffffffff < uVar9) {
            uVar10 = 0x7fffffffffffffff;
         }

         goto LAB_00101367;
      }

      puVar8 = (undefined1*)0x0;
      puVar3 = (undefined1*)0x0;
   }
 else {
      uVar9 = uVar11 * 2;
      uVar10 = 0x7fffffffffffffff;
      if (uVar9 < 0x8000000000000000) {
         uVar10 = uVar9;
      }

      if (uVar9 < uVar11) {
         uVar10 = 0x7fffffffffffffff;
      }

      LAB_00101367:puVar3 = (undefined1*)operator_new(uVar10);
      puVar8 = puVar3 + uVar10;
   }

   if ((long)uVar11 < 2) {
      if (uVar11 == 1) {
         *puVar3 = *__dest;
         goto joined_r0x001015d0;
      }

      puVar5 = puVar3 + uVar11;
      if ((long)__n < 2) {
         if (__n == 1) {
            *puVar5 = *param_4;
         }

      }
 else {
         puVar5 = (uchar*)memcpy(puVar5, param_4, __n);
      }

      puVar5 = puVar5 + __n;
      if (__dest == (undefined1*)0x0) goto LAB_001013e3;
   }
 else {
      memmove(puVar3, __dest, uVar11);
      joined_r0x001015d0:if ((long)__n < 2) {
         puVar6 = puVar3 + uVar11;
         puVar5 = puVar6 + __n;
         if (__n == 1) {
            *puVar6 = *param_4;
            puVar5 = puVar6 + 1;
         }

      }
 else {
         pvVar4 = memcpy(puVar3 + uVar11, param_4, __n);
         puVar5 = (uchar*)( (long)pvVar4 + __n );
      }

   }

   operator_delete(__dest, *(long*)( param_1 + 0x10 ) - (long)__dest);
   LAB_001013e3:*(undefined1**)param_1 = puVar3;
   *(uchar**)( param_1 + 8 ) = puVar5;
   *(undefined1**)( param_1 + 0x10 ) = puVar8;
   return;
}
/* tinyexr::DecompressZip(unsigned char*, unsigned long*, unsigned char const*, unsigned long) */undefined8 tinyexr::DecompressZip(uchar *param_1, ulong *param_2, uchar *param_3, ulong param_4) {
   ulong __n;
   ulong uVar1;
   uchar uVar2;
   int iVar3;
   uchar *puVar4;
   ulong uVar5;
   uchar *puVar6;
   uchar *puVar7;
   char *pcVar8;
   undefined8 uVar9;
   bool bVar10;
   __n = *param_2;
   if (__n != param_4) {
      if ((long)__n < 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("cannot create std::vector larger than max_size()");
      }

      if (__n != 0) {
         puVar4 = (uchar*)operator_new(__n);
         puVar6 = puVar4 + 1;
         *puVar4 = '\0';
         puVar7 = puVar6;
         if (__n != 1) {
            puVar7 = puVar4 + __n;
            memset(puVar6, 0, __n - 1);
         }

         if (puVar7 != puVar4) {
            iVar3 = uncompress(puVar4, param_2, param_3, param_4);
            uVar9 = 0;
            if (iVar3 == 0) {
               uVar1 = *param_2;
               if (puVar6 < puVar4 + uVar1) {
                  uVar2 = *puVar4;
                  do {
                     puVar7 = puVar6 + 1;
                     uVar2 = *puVar6 + 0x80 + uVar2;
                     *puVar6 = uVar2;
                     puVar6 = puVar7;
                  }
 while ( puVar4 + uVar1 != puVar7 );
               }

               puVar6 = param_1 + uVar1;
               if (( param_1 < puVar6 ) && ( *param_1 = param_1 + 1 < puVar6 )) {
                  uVar5 = 0;
                  do {
                     param_1[uVar5 * 2 + 1] = puVar4[uVar5 + ( uVar1 + 1 >> 1 )];
                     if (uVar1 - 1 >> 1 == uVar5) break;
                     param_1[uVar5 * 2 + 2] = puVar4[uVar5 + 1];
                     bVar10 = ( ulong )(puVar6 + ( -2 - (long)param_1 )) >> 1 != uVar5;
                     uVar5 = uVar5 + 1;
                  }
 while ( bVar10 );
               }

               uVar9 = 1;
            }

            operator_delete(puVar4, __n);
            return uVar9;
         }

      }

      pcVar8 = _LC1;
      std::__throw_out_of_range_fmt(_LC1, 0, 0);
      param_1 = (uchar*)pcVar8;
   }

   memcpy(param_1, param_3, __n);
   return 1;
}
/* std::_Rb_tree<std::__cxx11::string, std::__cxx11::string, std::_Identity<std::__cxx11::string >,
   std::less<std::__cxx11::string >, std::allocator<std::__cxx11::string >
   >::_M_erase(std::_Rb_tree_node<std::__cxx11::string >*) [clone .isra.0] */void std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_erase(_Rb_tree_node *param_1) {
   void *pvVar1;
   void *pvVar2;
   void *pvVar3;
   void *pvVar4;
   void *pvVar5;
   void *pvVar6;
   void *pvVar7;
   void *pvVar8;
   _Rb_tree_node *p_Var9;
   void *pvVar10;
   _Rb_tree_node *local_40;
   local_40 = param_1;
   if (param_1 != (_Rb_tree_node*)0x0) {
      do {
         pvVar10 = *(void**)( local_40 + 0x18 );
         while (pvVar10 != (void*)0x0) {
            pvVar8 = *(void**)( (long)pvVar10 + 0x18 );
            while (pvVar8 != (void*)0x0) {
               pvVar7 = *(void**)( (long)pvVar8 + 0x18 );
               while (pvVar7 != (void*)0x0) {
                  pvVar5 = *(void**)( (long)pvVar7 + 0x18 );
                  while (pvVar5 != (void*)0x0) {
                     pvVar3 = *(void**)( (long)pvVar5 + 0x18 );
                     while (pvVar3 != (void*)0x0) {
                        pvVar4 = *(void**)( (long)pvVar3 + 0x18 );
                        while (pvVar4 != (void*)0x0) {
                           pvVar6 = *(void**)( (long)pvVar4 + 0x18 );
                           while (pvVar6 != (void*)0x0) {
                              pvVar2 = *(void**)( (long)pvVar6 + 0x18 );
                              while (pvVar2 != (void*)0x0) {
                                 _M_erase(*(_Rb_tree_node**)( (long)pvVar2 + 0x18 ));
                                 pvVar1 = *(void**)( (long)pvVar2 + 0x10 );
                                 if (*(void**)( (long)pvVar2 + 0x20 ) != (void*)( (long)pvVar2 + 0x30 )) {
                                    operator_delete(*(void**)( (long)pvVar2 + 0x20 ), *(long*)( (long)pvVar2 + 0x30 ) + 1);
                                 }

                                 operator_delete(pvVar2, 0x40);
                                 pvVar2 = pvVar1;
                              }
;
                              pvVar2 = *(void**)( (long)pvVar6 + 0x10 );
                              if (*(void**)( (long)pvVar6 + 0x20 ) != (void*)( (long)pvVar6 + 0x30 )) {
                                 operator_delete(*(void**)( (long)pvVar6 + 0x20 ), *(long*)( (long)pvVar6 + 0x30 ) + 1);
                              }

                              operator_delete(pvVar6, 0x40);
                              pvVar6 = pvVar2;
                           }
;
                           pvVar6 = *(void**)( (long)pvVar4 + 0x10 );
                           if (*(void**)( (long)pvVar4 + 0x20 ) != (void*)( (long)pvVar4 + 0x30 )) {
                              operator_delete(*(void**)( (long)pvVar4 + 0x20 ), *(long*)( (long)pvVar4 + 0x30 ) + 1);
                           }

                           operator_delete(pvVar4, 0x40);
                           pvVar4 = pvVar6;
                        }
;
                        pvVar4 = *(void**)( (long)pvVar3 + 0x10 );
                        if (*(void**)( (long)pvVar3 + 0x20 ) != (void*)( (long)pvVar3 + 0x30 )) {
                           operator_delete(*(void**)( (long)pvVar3 + 0x20 ), *(long*)( (long)pvVar3 + 0x30 ) + 1);
                        }

                        operator_delete(pvVar3, 0x40);
                        pvVar3 = pvVar4;
                     }
;
                     pvVar3 = *(void**)( (long)pvVar5 + 0x10 );
                     if (*(void**)( (long)pvVar5 + 0x20 ) != (void*)( (long)pvVar5 + 0x30 )) {
                        operator_delete(*(void**)( (long)pvVar5 + 0x20 ), *(long*)( (long)pvVar5 + 0x30 ) + 1);
                     }

                     operator_delete(pvVar5, 0x40);
                     pvVar5 = pvVar3;
                  }
;
                  pvVar5 = *(void**)( (long)pvVar7 + 0x10 );
                  if (*(void**)( (long)pvVar7 + 0x20 ) != (void*)( (long)pvVar7 + 0x30 )) {
                     operator_delete(*(void**)( (long)pvVar7 + 0x20 ), *(long*)( (long)pvVar7 + 0x30 ) + 1);
                  }

                  operator_delete(pvVar7, 0x40);
                  pvVar7 = pvVar5;
               }
;
               pvVar7 = *(void**)( (long)pvVar8 + 0x10 );
               if (*(void**)( (long)pvVar8 + 0x20 ) != (void*)( (long)pvVar8 + 0x30 )) {
                  operator_delete(*(void**)( (long)pvVar8 + 0x20 ), *(long*)( (long)pvVar8 + 0x30 ) + 1);
               }

               operator_delete(pvVar8, 0x40);
               pvVar8 = pvVar7;
            }
;
            pvVar8 = *(void**)( (long)pvVar10 + 0x10 );
            if (*(void**)( (long)pvVar10 + 0x20 ) != (void*)( (long)pvVar10 + 0x30 )) {
               operator_delete(*(void**)( (long)pvVar10 + 0x20 ), *(long*)( (long)pvVar10 + 0x30 ) + 1);
            }

            operator_delete(pvVar10, 0x40);
            pvVar10 = pvVar8;
         }
;
         p_Var9 = *(_Rb_tree_node**)( local_40 + 0x10 );
         if (*(_Rb_tree_node**)( local_40 + 0x20 ) != local_40 + 0x30) {
            operator_delete(*(_Rb_tree_node**)( local_40 + 0x20 ), *(long*)( local_40 + 0x30 ) + 1);
         }

         operator_delete(local_40, 0x40);
         local_40 = p_Var9;
      }
 while ( p_Var9 != (_Rb_tree_node*)0x0 );
   }

   return;
}
/* WARNING: Type propagation algorithm not settling *//* tinyexr::DecodePixelData(unsigned char**, int const*, unsigned char const*, unsigned long, int,
   int, int, int, int, int, int, int, unsigned long, unsigned long, TEXRAttribute const*, unsigned
   long, TEXRChannelInfo const*, std::vector<unsigned long, std::allocator<unsigned long> > const&)
   [clone .isra.0] */undefined8 tinyexr::DecodePixelData(uchar **param_1, int *param_2, uchar *param_3, ulong param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11, int param_12, ulong param_13, ulong param_14, TEXRAttribute *param_15, ulong param_16, TEXRChannelInfo *param_17, vector *param_18) {
   uchar *puVar1;
   long lVar2;
   ushort uVar3;
   undefined4 uVar4;
   int iVar5;
   size_t __n;
   long lVar6;
   int iVar7;
   ushort uVar8;
   float fVar9;
   char cVar10;
   uint uVar11;
   long lVar12;
   long lVar13;
   undefined8 uVar14;
   TEXRAttribute *pTVar15;
   TEXRAttribute *pTVar16;
   undefined4 *puVar17;
   TEXRAttribute *pTVar18;
   void *pvVar19;
   void *pvVar20;
   byte bVar21;
   short sVar22;
   int iVar23;
   long lVar24;
   ulong uVar25;
   TEXRAttribute *pTVar26;
   TEXRAttribute TVar27;
   short sVar28;
   uint uVar29;
   int iVar30;
   long lVar31;
   ulong uVar32;
   TEXRAttribute *pTVar33;
   TEXRAttribute *pTVar34;
   ushort uVar35;
   uchar *puVar36;
   long lVar37;
   TEXRAttribute *unaff_RBP;
   long lVar38;
   TEXRAttribute *pTVar39;
   uint uVar40;
   uint uVar41;
   uint uVar42;
   uint uVar43;
   long lVar44;
   uchar *puVar45;
   long lVar46;
   undefined4 *puVar47;
   uint *puVar48;
   TEXRAttribute *pTVar49;
   uint uVar50;
   uint uVar51;
   uchar *puVar52;
   long *plVar53;
   ulong uVar54;
   undefined8 *puVar55;
   int iVar56;
   long lVar57;
   TEXRAttribute *pTVar58;
   ushort *puVar59;
   TEXRAttribute *pTVar60;
   TEXRAttribute *pTVar61;
   float fVar62;
   long lVar63;
   TEXRAttribute *pTVar64;
   TEXRAttribute *pTVar65;
   long lVar66;
   TEXRAttribute *pTVar67;
   long lVar68;
   TEXRAttribute *pTVar69;
   long lVar70;
   TEXRAttribute *pTVar71;
   TEXRAttribute *pTVar72;
   ushort uVar73;
   TEXRAttribute *pTVar74;
   long in_FS_OFFSET;
   bool bVar75;
   undefined1 auVar76[16];
   undefined1 auVar77[16];
   TEXRAttribute *local_190;
   TEXRAttribute *local_188;
   TEXRAttribute *local_180;
   TEXRAttribute *local_178;
   TEXRAttribute *local_158;
   TEXRAttribute *local_150;
   ulong local_140;
   TEXRAttribute *local_138;
   long local_130;
   TEXRAttribute *local_100;
   TEXRAttribute *local_f8;
   undefined8 *local_f0;
   TEXRAttribute *local_e8;
   TEXRAttribute *local_e0;
   ulong local_d8;
   void *local_d0;
   TEXRAttribute *local_c8;
   TEXRAttribute *local_c0;
   int local_5c;
   TEXRAttribute *local_58;
   TEXRAttribute *local_50;
   TEXRAttribute *local_48;
   long local_40;
   fVar9 = _LC6;
   bVar21 = 0;
   local_100 = param_15;
   local_150 = (TEXRAttribute*)(ulong)(uint)param_6;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_180 = (TEXRAttribute*)param_3;
   local_178 = (TEXRAttribute*)param_4;
   local_f8 = (TEXRAttribute*)param_1;
   if (param_5 == 4) {
      if (( param_12 != 0 && param_13 != 0 ) && ( param_7 != 0 )) {
         local_138 = (TEXRAttribute*)( ulong )(uint)(param_7 * param_12);
         local_130 = (long)( param_7 * param_12 );
         local_c8 = (TEXRAttribute*)( local_130 * param_13 );
         if ((long)local_c8 < 0) goto LAB_001042e0;
         local_158 = (TEXRAttribute*)operator_new((ulong)local_c8);
         local_e0 = (TEXRAttribute*)0x1;
         *local_158 = (TEXRAttribute)0x0;
         if (local_c8 != (TEXRAttribute*)0x1) {
            memset(local_158 + 1, 0, (size_t)( local_c8 + -1 ));
            local_e0 = local_c8;
         }

         if ((TEXRAttribute*)param_4 == local_e0) {
            memcpy(local_158, param_3, (size_t)local_e0);
            goto LAB_00102c32;
         }

         local_f0 = (undefined8*)operator_new(0x2000);
         *local_f0 = 0;
         local_f0[0x3ff] = 0;
         puVar55 = (undefined8*)( ( ulong )(local_f0 + 1) & 0xfffffffffffffff8 );
         for (uVar25 = ( ulong )(( (int)local_f0 - (int)(undefined8*)( ( ulong )(local_f0 + 1) & 0xfffffffffffffff8 ) ) + 0x2000U >> 3); uVar25 != 0; uVar25 = uVar25 - 1) {
            *puVar55 = 0;
            puVar55 = puVar55 + (ulong)bVar21 * -2 + 1;
         }

         if (3 < param_4) {
            uVar73 = *(ushort*)param_3;
            uVar3 = *(ushort*)( param_3 + 2 );
            if (uVar3 < 0x2000) {
               pTVar58 = (TEXRAttribute*)( param_3 + 4 );
               if (uVar3 < uVar73) {
                  if (( uVar3 == 0 ) && ( uVar73 == 0x1fff )) {
                     pTVar15 = (TEXRAttribute*)0x8;
                     goto LAB_00101faa;
                  }

               }
 else {
                  uVar25 = (ulong)(int)( ( (uint)uVar3 - (uint)uVar73 ) + 5 );
                  if (uVar25 <= param_4) {
                     uVar50 = ( (uint)uVar3 - (uint)uVar73 ) + 1;
                     uVar32 = (ulong)(int)uVar50;
                     auVar77._8_8_ = uVar25;
                     auVar77._0_8_ = uVar32;
                     pTVar15 = (TEXRAttribute*)( (ulong)uVar73 + (long)local_f0 );
                     if (uVar32 < 8) {
                        if (( uVar32 & 4 ) == 0) {
                           if (( uVar32 != 0 ) && ( *pTVar15 = *pTVar58(uVar50 & 2) != 0 )) {
                              LAB_00104305:*(undefined2*)( pTVar15 + auVar77._0_8_ + -2 ) = *(undefined2*)( pTVar58 + auVar77._0_8_ + -2 );
                           }

                        }
 else {
                           *(undefined4*)pTVar15 = *(undefined4*)pTVar58;
                           *(undefined4*)( pTVar15 + ( uVar32 - 4 ) ) = *(undefined4*)( param_3 + uVar32 );
                        }

                     }
 else {
                        *(undefined8*)pTVar15 = *(undefined8*)pTVar58;
                        *(undefined8*)( pTVar15 + ( uVar32 - 8 ) ) = *(undefined8*)( param_3 + ( uVar32 - 4 ) );
                        lVar46 = (long)pTVar15 - (long)( ( ulong )(pTVar15 + 8) & 0xfffffffffffffff8 );
                        pTVar26 = pTVar58 + -lVar46;
                        puVar55 = (undefined8*)( ( ulong )(pTVar15 + 8) & 0xfffffffffffffff8 );
                        for (uVar25 = lVar46 + uVar32 >> 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                           *puVar55 = *(undefined8*)pTVar26;
                           pTVar26 = pTVar26 + ( (ulong)bVar21 * -2 + 1 ) * 8;
                           puVar55 = puVar55 + (ulong)bVar21 * -2 + 1;
                        }

                     }

                     pTVar58 = pTVar58 + auVar77._0_8_;
                     pTVar15 = (TEXRAttribute*)( auVar77._8_8_ + 4 );
                     LAB_00101faa:local_d0 = operator_new(0x20000);
                     memset(local_d0, 0, 0x20000);
                     uVar50 = 1;
                     uVar51 = 1;
                     do {
                        if (( *(byte*)( (long)local_f0 + (long)( (int)uVar50 >> 3 ) ) >> ( uVar50 & 7 ) & 1 ) != 0) {
                           lVar46 = (long)(int)uVar51;
                           uVar51 = uVar51 + 1;
                           *(short*)( (long)local_d0 + lVar46 * 2 ) = (short)uVar50;
                        }

                        uVar50 = uVar50 + 1;
                     }
 while ( uVar50 != 0x10000 );
                     local_140 = (ulong)uVar51;
                     uVar25 = local_140;
                     local_140._0_2_ = (short)uVar51;
                     if ((int)uVar51 < 0x10000) {
                        memset((void*)( (long)local_d0 + (long)(int)uVar51 * 2 ), 0, ( ulong )(0x10000 - uVar51) * 2);
                     }

                     if (pTVar15 <= local_178) {
                        iVar56 = *(int*)pTVar58;
                        lVar46 = (long)iVar56;
                        if (pTVar58 + 4 + ( lVar46 - (long)local_180 ) <= local_178) {
                           local_d8 = (ulong)local_e0 >> 1;
                           if (local_d8 == 0) {
                              local_c0 = (TEXRAttribute*)0x0;
                              unaff_RBP = (TEXRAttribute*)0x0;
                              local_180 = (TEXRAttribute*)0x0;
                           }
 else {
                              uVar32 = local_d8 * 2;
                              unaff_RBP = (TEXRAttribute*)operator_new(uVar32);
                              local_c0 = unaff_RBP + uVar32;
                              *(undefined2*)unaff_RBP = 0;
                              pTVar15 = unaff_RBP + 2;
                              local_180 = pTVar15;
                              if (( local_d8 != 1 ) && ( local_180 = pTVar15 != local_c0 )) {
                                 memset(pTVar15, 0, uVar32 - 2);
                              }

                           }

                           if (iVar56 == 0) goto LAB_001031d0;
                           uVar50 = *(uint*)( pTVar58 + 4 );
                           uVar51 = *(uint*)( pTVar58 + 8 );
                           local_188 = (TEXRAttribute*)(ulong)uVar51;
                           if (0x10000 < uVar51) goto LAB_001031d0;
                           if (0x10000 < uVar50) goto LAB_001031d0;
                           local_178._0_4_ = *(int*)( pTVar58 + 0x10 );
                           pTVar26 = pTVar58 + 0x18;
                           local_190 = (TEXRAttribute*)operator_new(0x80008);
                           *(undefined8*)local_190 = 0;
                           memset(local_190 + 8, 0, 0x80000);
                           pTVar18 = (TEXRAttribute*)operator_new(0x40000);
                           *(undefined4*)pTVar18 = 0;
                           *(undefined8*)( pTVar18 + 8 ) = 0;
                           pTVar15 = pTVar18 + 0x10;
                           do {
                              uVar14 = *(undefined8*)( pTVar18 + 8 );
                              pTVar67 = pTVar15 + 0x10;
                              *(undefined8*)pTVar15 = *(undefined8*)pTVar18;
                              *(undefined8*)( pTVar15 + 8 ) = uVar14;
                              pTVar65 = pTVar18;
                              pTVar15 = pTVar67;
                           }
 while ( pTVar18 + 0x40000 != pTVar67 );
                           do {
                              *(undefined4*)pTVar65 = 0;
                              pTVar15 = pTVar65 + 0x10;
                              *(undefined8*)( pTVar65 + 8 ) = 0;
                              pTVar65 = pTVar15;
                           }
 while ( pTVar18 + 0x40000 != pTVar15 );
                           memset(local_190, 0, 0x80008);
                           pTVar15 = pTVar26;
                           if ((int)uVar51 < (int)uVar50) {
                              LAB_0010395a:hufCanonicalCodeTable((longlong*)local_190);
                              if (( lVar46 - ( (long)pTVar15 - (long)( pTVar58 + 4 ) ) ) * 8 < (long)(int)local_178) goto LAB_001031b4;
                              pTVar26 = pTVar15;
                              if ((int)uVar51 < (int)uVar50) goto LAB_00103a85;
                           }
 else {
                              lVar12 = (long)( iVar56 + -0x14 );
                              if (0 < lVar12) {
                                 iVar56 = 0;
                                 uVar32 = 0;
                                 uVar43 = uVar50;
                                 do {
                                    pTVar65 = local_190 + (long)(int)uVar43 * 8;
                                    if (iVar56 < 6) {
                                       TVar27 = *pTVar15;
                                       pTVar15 = pTVar15 + 1;
                                       iVar56 = iVar56 + 8;
                                       uVar32 = uVar32 << 8 | (ulong)(byte)TVar27;
                                    }

                                    iVar23 = iVar56 + -6;
                                    uVar29 = ( uint )((long)uVar32 >> ( (byte)iVar23 & 0x3f )) & 0x3f;
                                    uVar54 = (ulong)uVar29;
                                    *(ulong*)pTVar65 = uVar54;
                                    if (uVar54 == 0x3f) {
                                       if (lVar12 < (long)pTVar15 - (long)pTVar26) break;
                                       iVar56 = iVar56 + -0xe;
                                       if (iVar23 < 8) {
                                          TVar27 = *pTVar15;
                                          pTVar15 = pTVar15 + 1;
                                          uVar32 = uVar32 << 8 | (ulong)(byte)TVar27;
                                          iVar56 = iVar23;
                                       }

                                       uVar29 = ( uint )((long)uVar32 >> ( (byte)iVar56 & 0x3f )) & 0xff;
                                       uVar11 = uVar29 + 6;
                                       if ((int)( uVar51 + 1 ) < (int)( uVar11 + uVar43 )) break;
                                       lVar13 = (ulong)uVar11 * 8;
                                       uVar43 = uVar43 + 6 + uVar29;
                                       *(ulong*)pTVar65 = 0;
                                       *(undefined8*)( pTVar65 + lVar13 + -8 ) = 0;
                                       puVar55 = (undefined8*)( ( ulong )(pTVar65 + 8) & 0xfffffffffffffff8 );
                                       for (uVar54 = ( ulong )(( uint )((int)lVar13 + ( (int)pTVar65 - (int)(undefined8*)( ( ulong )(pTVar65 + 8) & 0xfffffffffffffff8 ) )) >> 3); uVar54 != 0; uVar54 = uVar54 - 1) {
                                          *puVar55 = 0;
                                          puVar55 = puVar55 + (ulong)bVar21 * -2 + 1;
                                       }

                                    }
 else if (uVar54 < 0x3b) {
                                       uVar43 = uVar43 + 1;
                                       iVar56 = iVar23;
                                    }
 else {
                                       if ((int)( uVar51 + 1 ) < (int)( ( uVar29 - 0x39 ) + uVar43 )) break;
                                       uVar11 = ( uVar29 - 0x39 ) * 8;
                                       *(ulong*)pTVar65 = 0;
                                       *(undefined8*)( pTVar65 + ( (ulong)uVar11 - 8 ) ) = 0;
                                       uVar11 = uVar11 + ( (int)pTVar65 - (int)( ( ulong )(pTVar65 + 8) & 0xfffffffffffffff8 ) ) & 0xfffffff8;
                                       if (7 < uVar11) {
                                          uVar54 = 0;
                                          do {
                                             uVar40 = (int)uVar54 + 8;
                                             *(undefined8*)( ( ( ulong )(pTVar65 + 8) & 0xfffffffffffffff8 ) + uVar54 ) = 0;
                                             uVar54 = (ulong)uVar40;
                                          }
 while ( uVar40 < uVar11 );
                                       }

                                       uVar43 = ( uVar43 - 0x39 ) + uVar29;
                                       iVar56 = iVar23;
                                    }

                                    if ((int)uVar51 < (int)uVar43) goto LAB_0010395a;
                                 }
 while ( (long)pTVar15 - (long)pTVar26 < lVar12 );
                              }

                              if (lVar46 * 8 + -0xa0 < (long)(int)local_178) goto LAB_001031b4;
                           }

                           pTVar58 = local_190 + (ulong)uVar50 * 8;
                           do {
                              uVar32 = *(ulong*)pTVar58;
                              lVar46 = (long)uVar32 >> 6;
                              uVar43 = (uint)uVar32 & 0x3f;
                              pTVar15 = pTVar26;
                              if (lVar46 >> ( (byte)uVar32 & 0x3f ) != 0) break;
                              if (uVar43 < 0xf) {
                                 if (( uVar32 & 0x3f ) != 0) {
                                    bVar21 = 0xe - (char)uVar43;
                                    lVar12 = 1L << ( bVar21 & 0x3f );
                                    pTVar65 = pTVar18 + ( lVar46 << ( bVar21 & 0x3f ) ) * 0x10;
                                    do {
                                       if (( *pTVar65 != (TEXRAttribute)0x0 ) || ( *(long*)( pTVar65 + 8 ) != 0 )) goto LAB_00103a85;
                                       *(uint*)pTVar65 = uVar43 | uVar50 << 8;
                                       lVar12 = lVar12 + -1;
                                       pTVar65 = pTVar65 + 0x10;
                                    }
 while ( lVar12 != 0 );
                                 }

                              }
 else {
                                 pTVar65 = pTVar18 + ( lVar46 >> ( (char)uVar43 - 0xeU & 0x3f ) ) * 0x10;
                                 if (*pTVar65 != (TEXRAttribute)0x0) break;
                                 pvVar19 = *(void**)( pTVar65 + 8 );
                                 uVar43 = ( *(uint*)pTVar65 >> 8 ) + 1 & 0xffffff;
                                 *(uint*)pTVar65 = *(uint*)pTVar65 & 0xff | uVar43 << 8;
                                 if (pvVar19 == (void*)0x0) {
                                    pvVar19 = operator_new__(4);
                                    *(void**)( pTVar65 + 8 ) = pvVar19;
                                 }
 else {
                                    pvVar20 = operator_new__((ulong)uVar43 * 4);
                                    uVar43 = *(uint*)pTVar65;
                                    *(void**)( pTVar65 + 8 ) = pvVar20;
                                    lVar46 = 0;
                                    if (uVar43 >> 8 != 1) {
                                       do {
                                          *(undefined4*)( (long)pvVar20 + lVar46 * 4 ) = *(undefined4*)( (long)pvVar19 + lVar46 * 4 );
                                          lVar46 = lVar46 + 1;
                                       }
 while ( (uint)lVar46 < ( uVar43 >> 8 ) - 1 );
                                    }

                                    operator_delete__(pvVar19);
                                 }

                                 *(uint*)( *(long*)( pTVar65 + 8 ) + -4 + ( ulong )(*(uint*)pTVar65 >> 8) * 4 ) = uVar50;
                              }

                              uVar50 = uVar50 + 1;
                              pTVar58 = pTVar58 + 8;
                           }
 while ( (int)uVar50 <= (int)uVar51 );
                           LAB_00103a85:local_5c = 0;
                           local_48 = (TEXRAttribute*)0x0;
                           pTVar58 = unaff_RBP + (long)(int)( (long)local_180 - (long)unaff_RBP >> 1 ) * 2;
                           pTVar26 = pTVar15 + ( (int)local_178 + 7 ) / 8;
                           local_58 = pTVar15;
                           local_50 = unaff_RBP;
                           LAB_00103ad8:if (pTVar26 <= local_58) goto LAB_001030f0;
                           local_5c = local_5c + 8;
                           local_48 = (TEXRAttribute*)( (long)local_48 << 8 | ( ulong )(byte) * local_58 );
                           local_58 = local_58 + 1;
                           joined_r0x00103b1e:while (0xd < local_5c) {
                              pTVar15 = pTVar18 + ( ulong )(( uint )((long)local_48 >> ( (char)local_5c - 0xeU & 0x3f )) & 0x3fff) * 0x10;
                              puVar48 = *(uint**)( pTVar15 + 8 );
                              uVar50 = *(uint*)pTVar15 >> 8;
                              if (*pTVar15 == (TEXRAttribute)0x0) {
                                 if (puVar48 == (uint*)0x0) goto LAB_0010318a;
                                 if (uVar50 == 0) goto LAB_0010318a;
                                 uVar43 = 0;
                                 do {
                                    uVar29 = ( uint ) * (long*)( local_190 + ( ulong ) * puVar48 * 8 ) & 0x3f;
                                    for (iVar56 = local_5c; iVar56 < (int)uVar29; iVar56 = iVar56 + 8) {
                                       if (pTVar26 <= local_58) {
                                          if (iVar56 < (int)uVar29) goto LAB_00103c46;
                                          break;
                                       }

                                       local_48 = (TEXRAttribute*)( (long)local_48 << 8 | ( ulong )(byte) * local_58 );
                                       local_58 = local_58 + 1;
                                    }

                                    local_5c = iVar56 - uVar29;
                                    if (*(long*)( local_190 + ( ulong ) * puVar48 * 8 ) >> 6 == ( (long)local_48 >> ( (byte)local_5c & 0x3f ) & ( 1L << (sbyte)uVar29 ) - 1U )) goto code_r0x00103d01;
                                    LAB_00103c46:uVar43 = uVar43 + 1;
                                    puVar48 = puVar48 + 1;
                                    local_5c = iVar56;
                                    if (uVar43 == uVar50) goto LAB_0010318a;
                                 }
 while ( true );
                              }

                              local_5c = local_5c - ( uint )(byte) * pTVar15;
                              cVar10 = getCode(uVar50, uVar51, (longlong*)&local_48, &local_5c, (char**)&local_58, (char*)pTVar26, (ushort**)&local_50, (ushort*)unaff_RBP, (ushort*)pTVar58);
                              if (cVar10 == '\0') goto LAB_0010318a;
                           }
;
                           goto LAB_00103ad8;
                        }

                     }

                     operator_delete(local_d0, 0x20000);
                  }

               }

            }

         }

         operator_delete(local_f0, 0x2000);
         LAB_001022c1:operator_delete(local_158, (ulong)local_c8);
      }

   }
 else if (param_5 - 2U < 2) {
      local_190 = (TEXRAttribute*)(long)param_12;
      pTVar18 = (TEXRAttribute*)(long)param_7;
      pTVar26 = (TEXRAttribute*)( (long)local_190 * param_13 * (long)pTVar18 );
      if ((long)pTVar26 < 0) {
         LAB_001042e0:/* WARNING: Subroutine does not return */std::__throw_length_error("cannot create std::vector larger than max_size()");
      }

      if (pTVar26 != (TEXRAttribute*)0x0) {
         puVar36 = (uchar*)operator_new((ulong)pTVar26);
         *puVar36 = '\0';
         if (pTVar26 == (TEXRAttribute*)0x1) {
            pTVar58 = (TEXRAttribute*)0x1;
         }
 else {
            memset(puVar36 + 1, 0, (size_t)( pTVar26 + -1 ));
            pTVar58 = pTVar26;
         }

         local_48 = pTVar58;
         cVar10 = DecompressZip(puVar36, (ulong*)&local_48, param_3, param_4);
         fVar9 = _LC6;
         if (cVar10 != '\0') {
            if (param_14 != 0) {
               lVar12 = (long)param_11;
               pTVar33 = (TEXRAttribute*)(long)param_9;
               local_188 = (TEXRAttribute*)( (long)pTVar33 * 8 );
               pTVar67 = (TEXRAttribute*)( param_13 * (long)pTVar18 );
               lVar46 = (long)param_8 + -1;
               local_150 = param_15 + 0x100;
               pTVar39 = (TEXRAttribute*)( ( ( lVar12 * 2 + 1 ) - (long)param_8 ) * (long)pTVar33 * 4 );
               local_180 = (TEXRAttribute*)( (long)pTVar33 * 4 * lVar46 );
               pTVar60 = (TEXRAttribute*)( lVar12 * (long)pTVar33 );
               local_100 = (TEXRAttribute*)( ( ( lVar46 - lVar12 ) - lVar12 ) * (long)pTVar33 );
               local_130 = (long)pTVar33 * 2;
               pTVar72 = (TEXRAttribute*)0x0;
               local_138 = (TEXRAttribute*)( (long)pTVar33 * -2 - (long)pTVar67 );
               pTVar15 = (TEXRAttribute*)(ulong)(uint)param_6;
               pTVar65 = pTVar60;
               do {
                  iVar56 = *(int*)local_150;
                  if (iVar56 == 1) {
                     if (local_190 != (TEXRAttribute*)0x0) {
                        pTVar65 = (TEXRAttribute*)( *(long*)( *(long*)param_16 + (long)pTVar72 * 8 ) * (long)pTVar18 );
                        pTVar69 = (TEXRAttribute*)( ( ( lVar46 - lVar12 ) * (long)pTVar33 * 2 - (long)puVar36 ) - (long)pTVar65 );
                        pTVar61 = (TEXRAttribute*)0x0;
                        pTVar16 = pTVar18 + (long)pTVar60;
                        pTVar74 = local_100;
                        do {
                           local_f8 = local_150;
                           if (pTVar58 <= pTVar65) {
                              auVar77 = std::__throw_out_of_range_fmt(_LC1, pTVar65, pTVar58);
                              local_150 = pTVar58;
                              goto LAB_00104305;
                           }

                           if (pTVar18 != (TEXRAttribute*)0x0) {
                              puVar59 = (ushort*)( puVar36 + (long)pTVar65 );
                              iVar56 = param_2[(long)pTVar72];
                              pTVar71 = pTVar16 + -(long)pTVar18;
                              do {
                                 while (true) {
                                    uVar73 = *puVar59;
                                    local_178 = pTVar18;
                                    local_158 = pTVar61;
                                    if (iVar56 != 1) break;
                                    if (param_6 == 0) {
                                       pTVar64 = (TEXRAttribute*)( (long)pTVar71 * 2 );
                                    }
 else {
                                       pTVar64 = (TEXRAttribute*)( (long)puVar59 + (long)pTVar69 );
                                    }

                                    pTVar71 = pTVar71 + 1;
                                    *(ushort*)( pTVar64 + (long)*param_1 ) = uVar73;
                                    puVar59 = puVar59 + 1;
                                    if (pTVar16 == pTVar71) goto LAB_00102aff;
                                 }
;
                                 uVar50 = (uint)uVar73 << 0xd;
                                 uVar51 = uVar50 & 0xf800000;
                                 uVar50 = uVar50 & 0xfffe000;
                                 if (uVar51 == 0xf800000) {
                                    fVar62 = (float)( uVar50 + 0x70000000 );
                                 }
 else if (uVar51 == 0) {
                                    fVar62 = (float)( uVar50 + 0x38800000 ) - fVar9;
                                 }
 else {
                                    fVar62 = (float)( uVar50 + 0x38000000 );
                                 }

                                 pTVar64 = pTVar71 + (long)pTVar74;
                                 if (param_6 == 0) {
                                    pTVar64 = pTVar71;
                                 }

                                 pTVar71 = pTVar71 + 1;
                                 puVar59 = puVar59 + 1;
                                 *(uint*)( (long)*param_1 + (long)pTVar64 * 4 ) = ( uVar73 & 0x8000 ) << 0x10 | (uint)fVar62;
                              }
 while ( pTVar16 != pTVar71 );
                           }

                           LAB_00102aff:pTVar61 = pTVar61 + 1;
                           pTVar65 = pTVar65 + (long)pTVar67;
                           pTVar16 = pTVar16 + (long)pTVar33;
                           pTVar74 = pTVar74 + (long)pTVar33 * -2;
                           pTVar69 = pTVar69 + (long)local_138;
                        }
 while ( local_190 != pTVar61 );
                     }

                  }
 else {
                     pTVar16 = pTVar72;
                     pTVar69 = pTVar39;
                     pTVar74 = pTVar60;
                     if (iVar56 == 0) {
                        if (param_2[(long)pTVar72] != 0) goto LAB_00102bbc;
                        if (local_190 != (TEXRAttribute*)0x0) {
                           pTVar71 = (TEXRAttribute*)0x0;
                           pTVar61 = (TEXRAttribute*)( *(long*)( *(long*)param_16 + (long)pTVar72 * 8 ) * (long)pTVar18 );
                           do {
                              if (pTVar58 <= pTVar61) {
                                 LAB_00103e07:auVar76 = std::__throw_out_of_range_fmt(_LC1, pTVar61, pTVar58);
                                 local_158 = pTVar72;
                                 goto LAB_00103e1b;
                              }

                              if (pTVar18 != (TEXRAttribute*)0x0) {
                                 lVar13 = (long)*param_1;
                                 pTVar65 = (TEXRAttribute*)( puVar36 + (long)pTVar61 );
                                 pTVar16 = (TEXRAttribute*)( (uchar*)local_180 + lVar13 + (long)pTVar74 * -4 );
                                 do {
                                    uVar4 = *(undefined4*)pTVar65;
                                    pTVar64 = pTVar69 + (long)pTVar16;
                                    if (param_6 != 0) {
                                       pTVar64 = pTVar16;
                                    }

                                    pTVar16 = pTVar16 + 4;
                                    pTVar65 = pTVar65 + 4;
                                    *(undefined4*)pTVar64 = uVar4;
                                    local_178 = pTVar33;
                                 }
 while ( (TEXRAttribute*)( lVar13 + (long)( pTVar18 + lVar46 * (long)pTVar33 ) * 4 + (long)pTVar74 * -4 ) != pTVar16 );
                              }

                              pTVar71 = pTVar71 + 1;
                              pTVar61 = pTVar61 + (long)pTVar67;
                              pTVar74 = pTVar74 + (long)pTVar33;
                              pTVar69 = pTVar69 + (long)local_188;
                              pTVar16 = local_188;
                              local_158 = pTVar72;
                           }
 while ( local_190 != pTVar71 );
                        }

                     }
 else {
                        if (( iVar56 != 2 ) || ( param_2[(long)pTVar72] != 2 )) goto LAB_00102bbc;
                        if (local_190 != (TEXRAttribute*)0x0) {
                           pTVar71 = (TEXRAttribute*)0x0;
                           pTVar61 = (TEXRAttribute*)( *(long*)( *(long*)param_16 + (long)pTVar72 * 8 ) * (long)pTVar18 );
                           do {
                              if (pTVar58 <= pTVar61) goto LAB_00103e07;
                              if (pTVar18 != (TEXRAttribute*)0x0) {
                                 lVar13 = (long)*param_1;
                                 pTVar65 = (TEXRAttribute*)( puVar36 + (long)pTVar61 );
                                 local_178 = (TEXRAttribute*)( (uchar*)local_180 + lVar13 + (long)pTVar74 * -4 );
                                 pTVar16 = local_178;
                                 do {
                                    uVar4 = *(undefined4*)pTVar65;
                                    pTVar64 = pTVar16 + (long)pTVar69;
                                    if (param_6 != 0) {
                                       pTVar64 = pTVar16;
                                    }

                                    pTVar16 = pTVar16 + 4;
                                    pTVar65 = pTVar65 + 4;
                                    *(undefined4*)pTVar64 = uVar4;
                                 }
 while ( pTVar16 != (TEXRAttribute*)( lVar13 + (long)( pTVar18 + lVar46 * (long)pTVar33 ) * 4 + (long)pTVar74 * -4 ) );
                              }

                              pTVar71 = pTVar71 + 1;
                              pTVar61 = pTVar61 + (long)pTVar67;
                              pTVar74 = pTVar74 + (long)pTVar33;
                              pTVar69 = pTVar69 + (long)local_188;
                              pTVar16 = local_188;
                              local_158 = pTVar72;
                           }
 while ( local_190 != pTVar71 );
                        }

                     }

                  }

                  pTVar72 = pTVar72 + 1;
                  local_150 = local_150 + 0x110;
                  param_1 = (uchar**)( (long)param_1 + 8 );
               }
 while ( (TEXRAttribute*)param_14 != pTVar72 );
            }

            operator_delete(puVar36, (ulong)pTVar26);
            goto LAB_00102486;
         }

         LAB_00102bbc:operator_delete(puVar36, (ulong)pTVar26);
      }

   }
 else if (param_5 == 1) {
      pTVar67 = (TEXRAttribute*)(long)param_12;
      local_188 = (TEXRAttribute*)(long)param_7;
      local_158 = (TEXRAttribute*)( param_13 * (long)pTVar67 * (long)local_188 );
      if ((long)local_158 < 0) goto LAB_001042e0;
      if (local_158 != (TEXRAttribute*)0x0) {
         pTVar15 = (TEXRAttribute*)operator_new((ulong)local_158);
         *pTVar15 = (TEXRAttribute)0x0;
         local_190 = pTVar15 + 1;
         if (local_158 == (TEXRAttribute*)0x1) {
            pTVar74 = local_190;
            if (param_4 == 1) {
               LAB_00103e32:memcpy(pTVar15, param_3, param_4);
               pTVar26 = pTVar67;
               local_150._0_4_ = param_6;
               goto LAB_00103e44;
            }

            if (2 < param_4) {
               pTVar16 = (TEXRAttribute*)operator_new(1);
               pTVar26 = pTVar16 + 1;
               *pTVar16 = (TEXRAttribute)0x0;
               pTVar18 = pTVar26;
               LAB_00102525:if (pTVar16 == pTVar26) {
                  LAB_0010365f:std::__throw_out_of_range_fmt(_LC1, 0, 0);
                  LAB_00103671:if ((int)local_d8 < 1) {
                     if (param_12 < 1) goto LAB_00103889;
                     pTVar15 = (TEXRAttribute*)0x0;
                     pTVar58 = (TEXRAttribute*)0x0;
                     lVar46 = 0;
                     goto LAB_00103815;
                  }

                  pTVar15 = (TEXRAttribute*)0x0;
                  pTVar58 = (TEXRAttribute*)0x0;
                  lVar46 = 0;
                  LAB_00103686:pTVar26 = unaff_RBP;
                  do {
                     pTVar18 = pTVar26 + 2;
                     *(undefined2*)pTVar26 = *(undefined2*)( (long)local_d0 + ( ulong ) * (ushort*)pTVar26 * 2 );
                     pTVar26 = pTVar18;
                  }
 while ( pTVar18 != unaff_RBP + ( ulong )((int)local_d8 - 1) * 2 + 2 );
                  LAB_00103808:if (param_12 < 1) goto LAB_00103876;
                  LAB_00103815:local_190 = pTVar15 + lVar46;
                  iVar56 = 0;
                  pTVar26 = local_158;
                  pTVar18 = pTVar15;
                  if (pTVar67 == (TEXRAttribute*)0x0) {
                     do {
                        iVar56 = iVar56 + 1;
                     }
 while ( param_12 != iVar56 );
                  }
 else {
                     do {
                        do {
                           __n = (long)( *(int*)( pTVar18 + 0x10 ) * *(int*)( pTVar18 + 0x1c ) ) * 2;
                           pvVar19 = memcpy(pTVar26, *(void**)( pTVar18 + 8 ), __n);
                           *(size_t*)( pTVar18 + 8 ) = *(long*)( pTVar18 + 8 ) + __n;
                           pTVar18 = pTVar18 + 0x20;
                           pTVar26 = (TEXRAttribute*)( (long)pvVar19 + __n );
                        }
 while ( pTVar18 != local_190 );
                        iVar56 = iVar56 + 1;
                        pTVar18 = pTVar15;
                     }
 while ( param_12 != iVar56 );
                  }

                  LAB_00103876:if (pTVar15 == (TEXRAttribute*)0x0) goto LAB_00103889;
                  LAB_0010387b:operator_delete(pTVar15, (long)pTVar58 - (long)pTVar15);
                  LAB_00103889:if (unaff_RBP != (TEXRAttribute*)0x0) {
                     operator_delete(unaff_RBP, (long)local_c0 - (long)unaff_RBP);
                  }

                  operator_delete(local_d0, 0x20000);
                  operator_delete(local_f0, 0x2000);
                  LAB_00102c32:fVar9 = _LC6;
                  if (param_14 != 0) {
                     lVar46 = (long)param_9;
                     uVar32 = (ulong)param_7;
                     pTVar33 = (TEXRAttribute*)0x0;
                     pTVar65 = (TEXRAttribute*)( param_13 * uVar32 );
                     pTVar39 = local_100 + 0x100;
                     local_138 = (TEXRAttribute*)( lVar46 * param_11 );
                     pTVar67 = (TEXRAttribute*)(long)param_12;
                     local_178._0_4_ = param_12;
                     uVar25 = lVar46 * 2 - (long)pTVar65;
                     local_130 = lVar46 * 2 * (long)param_11 - (long)local_158;
                     iVar23 = ( param_8 + -1 ) - param_11;
                     local_190 = (TEXRAttribute*)CONCAT44(local_190._4_4_, iVar23);
                     iVar56 = (uint)local_150;
                     pTVar15 = local_f8;
                     do {
                        iVar30 = *(int*)pTVar39;
                        pTVar58 = local_e0;
                        if (iVar30 == 1) {
                           local_188 = (TEXRAttribute*)( *(long*)( *(long*)param_16 + (long)pTVar33 * 8 ) * uVar32 );
                           pTVar60 = (TEXRAttribute*)( local_130 - (long)local_188 );
                           pTVar72 = (TEXRAttribute*)0x0;
                           pTVar26 = pTVar39;
                           pTVar18 = local_138;
                           do {
                              pTVar16 = pTVar72;
                              local_150 = pTVar33;
                              if (local_e0 <= local_188) {
                                 std::__throw_out_of_range_fmt(_LC1, local_188, local_e0);
                                 goto LAB_001030d7;
                              }

                              uVar50 = param_2[(long)pTVar33];
                              pTVar26 = (TEXRAttribute*)(ulong)uVar50;
                              unaff_RBP = (TEXRAttribute*)( ( iVar23 - (int)pTVar16 ) * lVar46 );
                              pTVar72 = local_158 + (long)local_188;
                              pTVar74 = (TEXRAttribute*)( (long)unaff_RBP * 2 - (long)pTVar72 );
                              uVar54 = 0;
                              pTVar58 = pTVar74;
                              do {
                                 while (true) {
                                    uVar73 = *(ushort*)pTVar72;
                                    if (uVar50 != 1) break;
                                    pTVar69 = pTVar74;
                                    if (iVar56 == 0) {
                                       pTVar69 = pTVar60;
                                    }

                                    uVar54 = uVar54 + 1;
                                    *(ushort*)( pTVar69 + (long)pTVar72 + *(long*)pTVar15 ) = uVar73;
                                    pTVar72 = pTVar72 + 2;
                                    if (uVar32 <= uVar54) goto LAB_00102fe0;
                                 }
;
                                 uVar51 = (uint)uVar73 << 0xd;
                                 uVar43 = uVar51 & 0xf800000;
                                 uVar51 = uVar51 & 0xfffe000;
                                 if (uVar43 == 0xf800000) {
                                    fVar62 = (float)( uVar51 + 0x70000000 );
                                 }
 else if (uVar43 == 0) {
                                    fVar62 = (float)( uVar51 + 0x38800000 ) - fVar9;
                                 }
 else {
                                    fVar62 = (float)( uVar51 + 0x38000000 );
                                 }

                                 pTVar58 = pTVar18 + uVar54;
                                 pTVar69 = unaff_RBP + uVar54;
                                 if (iVar56 == 0) {
                                    pTVar69 = pTVar58;
                                 }

                                 uVar54 = uVar54 + 1;
                                 pTVar72 = pTVar72 + 2;
                                 *(uint*)( *(long*)pTVar15 + (long)pTVar69 * 4 ) = ( uVar73 & 0x8000 ) << 0x10 | (uint)fVar62;
                              }
 while ( uVar54 < uVar32 );
                              LAB_00102fe0:pTVar18 = pTVar18 + lVar46;
                              local_188 = local_188 + (long)pTVar65;
                              pTVar60 = pTVar60 + uVar25;
                              pTVar72 = pTVar16 + 1;
                              local_180 = pTVar16;
                           }
 while ( pTVar16 + 1 < pTVar67 );
                        }
 else {
                           pTVar26 = pTVar67;
                           if (iVar30 == 0) {
                              if (param_2[(long)pTVar33] != 0) goto LAB_001022c1;
                              pTVar18 = (TEXRAttribute*)0x0;
                              unaff_RBP = (TEXRAttribute*)( *(long*)( *(long*)param_16 + (long)pTVar33 * 8 ) * uVar32 );
                              pTVar72 = local_138;
                              do {
                                 local_180 = pTVar39;
                                 if (local_e0 <= unaff_RBP) goto LAB_001030d7;
                                 uVar54 = 0;
                                 pTVar60 = local_158 + (long)unaff_RBP;
                                 lVar12 = ( iVar23 - (int)pTVar18 ) * lVar46;
                                 puVar17 = (undefined4*)( *(long*)pTVar15 + lVar12 * 4 );
                                 do {
                                    uVar4 = *(undefined4*)pTVar60;
                                    puVar47 = puVar17 + ( (long)pTVar72 - lVar12 );
                                    if (iVar56 != 0) {
                                       puVar47 = puVar17;
                                    }

                                    uVar54 = uVar54 + 1;
                                    pTVar60 = pTVar60 + 4;
                                    puVar17 = puVar17 + 1;
                                    *puVar47 = uVar4;
                                 }
 while ( uVar54 < uVar32 );
                                 pTVar18 = pTVar18 + 1;
                                 pTVar72 = pTVar72 + lVar46;
                                 unaff_RBP = unaff_RBP + (long)pTVar65;
                                 local_188 = pTVar65;
                              }
 while ( pTVar18 < pTVar67 );
                           }
 else {
                              if (( iVar30 != 2 ) || ( param_2[(long)pTVar33] != 2 )) goto LAB_001022c1;
                              pTVar18 = (TEXRAttribute*)0x0;
                              unaff_RBP = (TEXRAttribute*)( *(long*)( *(long*)param_16 + (long)pTVar33 * 8 ) * uVar32 );
                              pTVar72 = local_138;
                              do {
                                 local_188 = pTVar39;
                                 local_180 = pTVar33;
                                 if (local_e0 <= unaff_RBP) goto LAB_001030d7;
                                 uVar54 = 0;
                                 pTVar60 = local_158 + (long)unaff_RBP;
                                 lVar12 = ( iVar23 - (int)pTVar18 ) * lVar46;
                                 puVar17 = (undefined4*)( *(long*)pTVar15 + lVar12 * 4 );
                                 do {
                                    uVar4 = *(undefined4*)pTVar60;
                                    puVar47 = puVar17 + ( (long)pTVar72 - lVar12 );
                                    if (iVar56 != 0) {
                                       puVar47 = puVar17;
                                    }

                                    uVar54 = uVar54 + 1;
                                    pTVar60 = pTVar60 + 4;
                                    puVar17 = puVar17 + 1;
                                    *puVar47 = uVar4;
                                 }
 while ( uVar54 < uVar32 );
                                 pTVar18 = pTVar18 + 1;
                                 unaff_RBP = unaff_RBP + (long)pTVar65;
                                 pTVar72 = pTVar72 + lVar46;
                              }
 while ( pTVar18 < pTVar67 );
                           }

                        }

                        pTVar33 = pTVar33 + 1;
                        pTVar39 = pTVar39 + 0x110;
                        pTVar15 = pTVar15 + 8;
                     }
 while ( (TEXRAttribute*)param_14 != pTVar33 );
                  }

                  operator_delete(local_158, (ulong)local_c8);
                  goto LAB_00102486;
               }

               pTVar61 = (TEXRAttribute*)( param_4 & 0xffffffff );
               pTVar58 = pTVar16;
               pTVar69 = pTVar15;
               uVar50 = param_6;
               if ((int)param_4 < 1) goto LAB_0010306f;
               pTVar65 = (TEXRAttribute*)( (ulong)local_158 & 0xffffffff );
               LAB_001025b4:param_1 = (uchar**)pTVar18;
               TVar27 = ( TEXRAttribute ) * param_3;
               if (-1 < (char)TVar27) {
                  uVar50 = (int)(char)TVar27 + 1;
                  uVar51 = (int)pTVar61 - 2;
                  pTVar61 = (TEXRAttribute*)(ulong)uVar51;
                  uVar43 = (int)pTVar65 - uVar50;
                  pTVar65 = (TEXRAttribute*)(ulong)uVar43;
                  if (( uVar51 != 0xffffffff ) && ( -1 < (int)uVar43 )) {
                     lVar46 = ( ulong )(byte)((TEXRAttribute*)param_3)[1] * 0x101010101010101;
                     if (uVar50 < 8) {
                        if (( uVar50 & 4 ) == 0) {
                           if (( uVar50 != 0 ) && ( *pTVar58 = SUB81(lVar46, 0)(uVar50 & 2) != 0 )) {
                              *(short*)( pTVar58 + ( (ulong)uVar50 - 2 ) ) = (short)lVar46;
                           }

                        }
 else {
                           *(int*)pTVar58 = (int)lVar46;
                           *(int*)( pTVar58 + ( (ulong)uVar50 - 4 ) ) = (int)lVar46;
                        }

                     }
 else {
                        *(long*)pTVar58 = lVar46;
                        *(long*)( pTVar58 + ( (ulong)uVar50 - 8 ) ) = lVar46;
                        plVar53 = (long*)( ( ulong )(pTVar58 + 8) & 0xfffffffffffffff8 );
                        for (uVar25 = ( ulong )(uVar50 + ( (int)pTVar58 - (int)(long*)( ( ulong )(pTVar58 + 8) & 0xfffffffffffffff8 ) ) >> 3); uVar25 != 0; uVar25 = uVar25 - 1) {
                           *plVar53 = lVar46;
                           plVar53 = plVar53 + (ulong)bVar21 * -2 + 1;
                        }

                     }

                     pTVar58 = pTVar58 + (long)(char)TVar27 + 1;
                     param_3 = (uchar*)( (TEXRAttribute*)param_3 + 2 );
                     pTVar18 = (TEXRAttribute*)param_1;
                     goto LAB_001025ab;
                  }

                  LAB_001030ac:iVar56 = 0;
                  pTVar15 = pTVar69;
                  goto LAB_00103072;
               }

               uVar50 = (int)pTVar61 + -1 + (int)(char)TVar27;
               pTVar61 = (TEXRAttribute*)(ulong)uVar50;
               pTVar15 = (TEXRAttribute*)param_3 + 1;
               auVar76._8_8_ = pTVar26;
               auVar76._0_8_ = pTVar15;
               uVar51 = (int)pTVar65 + (int)(char)TVar27;
               pTVar65 = (TEXRAttribute*)(ulong)uVar51;
               param_6 = -(int)(char)TVar27;
               if ((int)( uVar50 | uVar51 ) < 0) goto LAB_001030ac;
               pTVar71 = (TEXRAttribute*)(long)param_6;
               if ((uint)param_6 < 8) {
                  if (( param_6 & 4U ) != 0) goto LAB_001042cb;
                  if (( param_6 != 0 ) && ( *pTVar58 = *pTVar15(param_6 & 2U) != 0 )) {
                     LAB_00103e1b:*(undefined2*)( pTVar58 + ( (ulong)(uint)param_6 - 2 ) ) = *(undefined2*)( auVar76._0_8_ + ( (ulong)(uint)param_6 - 2 ) );
                  }

               }
 else {
                  *(undefined8*)pTVar58 = *(undefined8*)pTVar15;
                  *(undefined8*)( pTVar58 + ( (ulong)(uint)param_6 - 8 ) ) = *(undefined8*)( (TEXRAttribute*)param_3 + ( (ulong)(uint)param_6 - 7 ) );
                  lVar46 = (long)pTVar58 - (long)( ( ulong )(pTVar58 + 8) & 0xfffffffffffffff8 );
                  local_180._0_4_ = (int)lVar46;
                  pTVar15 = pTVar15 + -lVar46;
                  puVar55 = (undefined8*)( ( ulong )(pTVar58 + 8) & 0xfffffffffffffff8 );
                  for (uVar25 = ( ulong )(( uint )(param_6 + (int)local_180) >> 3); uVar25 != 0; uVar25 = uVar25 - 1) {
                     *puVar55 = *(undefined8*)pTVar15;
                     pTVar15 = pTVar15 + ( (ulong)bVar21 * -2 + 1 ) * 8;
                     puVar55 = puVar55 + (ulong)bVar21 * -2 + 1;
                  }

               }

               LAB_00102604:pTVar26 = auVar76._8_8_;
               pTVar58 = pTVar58 + (long)pTVar71;
               param_3 = (uchar*)( pTVar71 + auVar76._0_8_ );
               pTVar18 = (TEXRAttribute*)param_1;
               LAB_001025ab:uVar50 = (uint)local_150;
               if ((int)pTVar61 == 0) {
                  LAB_0010306f:local_150._0_4_ = uVar50;
                  iVar56 = (int)pTVar58 - (int)pTVar16;
                  param_1 = (uchar**)pTVar18;
                  pTVar15 = pTVar69;
                  LAB_00103072:if ((int)local_158 != iVar56) {
                     operator_delete(pTVar16, (ulong)local_158);
                     goto LAB_00102c0e;
                  }

                  if (param_1 < pTVar26) {
                     TVar27 = *pTVar16;
                     do {
                        pTVar58 = (TEXRAttribute*)( (long)param_1 + 1 );
                        TVar27 = ( TEXRAttribute )((char)*(TEXRAttribute*)param_1 + -0x80 + (char)TVar27);
                        *(TEXRAttribute*)param_1 = TVar27;
                        param_1 = (uchar**)pTVar58;
                     }
 while ( pTVar26 != pTVar58 );
                  }

                  if (( pTVar15 < pTVar74 ) && ( *pTVar15 = local_190 < pTVar74 )) {
                     uVar25 = 0;
                     do {
                        pTVar15[uVar25 * 2 + 1] = pTVar16[uVar25 + ( ( ulong )(local_158 + 1) >> 1 )];
                        if (( ulong )(pTVar74 + ( -1 - (long)pTVar15 )) >> 1 == uVar25) break;
                        pTVar15[uVar25 * 2 + 2] = pTVar16[uVar25 + 1];
                        bVar75 = ( ulong )(pTVar74 + ( -2 - (long)pTVar15 )) >> 1 != uVar25;
                        uVar25 = uVar25 + 1;
                     }
 while ( bVar75 );
                  }

                  operator_delete(pTVar16, (ulong)local_158);
                  pTVar26 = pTVar67;
                  LAB_00103e44:param_6 = (uint)local_150;
                  fVar9 = _LC6;
                  if (param_14 != 0) {
                     local_190 = (TEXRAttribute*)(long)param_9;
                     pTVar74 = pTVar74 + -(long)pTVar15;
                     pTVar18 = (TEXRAttribute*)( (long)local_190 * 8 );
                     lVar46 = (long)param_8 + -1;
                     pTVar64 = (TEXRAttribute*)( (long)local_190 * (long)param_11 );
                     pTVar39 = (TEXRAttribute*)( param_13 * (long)local_188 );
                     pTVar72 = local_100 + 0x100;
                     pTVar33 = (TEXRAttribute*)( ( ( (long)param_11 * 2 + 1 ) - (long)param_8 ) * (long)local_190 * 4 );
                     lVar12 = (long)local_190 * 4 * lVar46;
                     pTVar60 = (TEXRAttribute*)0x0;
                     pTVar61 = local_f8;
                     pTVar65 = pTVar64;
                     pTVar71 = pTVar72;
                     while (iVar56 = *(int*)pTVar72,pTVar67 = pTVar26,iVar56 == 1) {
                        if (pTVar26 != (TEXRAttribute*)0x0) {
                           local_150 = local_188;
                           pTVar65 = (TEXRAttribute*)0x0;
                           pTVar58 = (TEXRAttribute*)( *(long*)( *(long*)param_16 + (long)pTVar60 * 8 ) * (long)local_188 );
                           pTVar16 = pTVar58;
                           param_1 = (uchar**)pTVar64;
                           pTVar69 = (TEXRAttribute*)( (long)( local_188 + (long)pTVar64 ) * 2 );
                           do {
                              if (pTVar74 <= pTVar58) {
                                 std::__throw_out_of_range_fmt(_LC1, pTVar58, pTVar74);
                                 pTVar58 = pTVar39;
                                 goto LAB_001042b7;
                              }

                              if (local_188 != (TEXRAttribute*)0x0) {
                                 pTVar34 = (TEXRAttribute*)( (long)param_1 * 2 );
                                 uVar50 = param_2[(long)pTVar60];
                                 pTVar71 = (TEXRAttribute*)(ulong)uVar50;
                                 pTVar67 = (TEXRAttribute*)( lVar46 * (long)local_190 * 2 + (long)param_1 * -2 );
                                 pTVar16 = pTVar15 + (long)pTVar58;
                                 do {
                                    uVar73 = *(ushort*)pTVar16;
                                    if (uVar50 == 1) {
                                       pTVar49 = pTVar67;
                                       if (param_6 == 0) {
                                          pTVar49 = pTVar34;
                                       }

                                       *(ushort*)( pTVar49 + *(long*)pTVar61 ) = uVar73;
                                    }
 else {
                                       uVar43 = (uint)uVar73 << 0xd & 0xf800000;
                                       uVar51 = (uint)uVar73 << 0xd & 0xfffe000;
                                       if (uVar43 == 0xf800000) {
                                          fVar62 = (float)( uVar51 + 0x70000000 );
                                       }
 else if (uVar43 == 0) {
                                          fVar62 = (float)( uVar51 + 0x38800000 ) - fVar9;
                                       }
 else {
                                          fVar62 = (float)( uVar51 + 0x38000000 );
                                       }

                                       pTVar49 = pTVar67;
                                       if (param_6 == 0) {
                                          pTVar49 = pTVar34;
                                       }

                                       *(uint*)( *(long*)pTVar61 + (long)pTVar49 * 2 ) = ( uVar73 & 0x8000 ) << 0x10 | (uint)fVar62;
                                    }

                                    pTVar34 = pTVar34 + 2;
                                    pTVar16 = pTVar16 + 2;
                                    pTVar67 = pTVar67 + 2;
                                 }
 while ( pTVar34 != pTVar69 );
                              }

                              pTVar65 = pTVar65 + 1;
                              pTVar58 = pTVar58 + (long)pTVar39;
                              pTVar69 = pTVar69 + (long)local_190 * 2;
                              param_1 = (uchar**)( (long)param_1 + (long)local_190 );
                           }
 while ( pTVar26 != pTVar65 );
                        }

                        LAB_00104023:pTVar60 = pTVar60 + 1;
                        pTVar72 = pTVar72 + 0x110;
                        pTVar61 = pTVar61 + 8;
                        if ((TEXRAttribute*)param_14 == pTVar60) goto LAB_00104043;
                     }
;
                     pTVar16 = pTVar33;
                     pTVar58 = pTVar60;
                     local_150 = pTVar60;
                     if (iVar56 == 0) {
                        if (param_2[(long)pTVar60] == 0) {
                           if (pTVar26 != (TEXRAttribute*)0x0) {
                              pTVar69 = (TEXRAttribute*)0x0;
                              param_1 = (uchar**)( *(long*)( *(long*)param_16 + (long)pTVar60 * 8 ) * (long)local_188 );
                              pTVar71 = pTVar64;
                              do {
                                 if (pTVar74 <= param_1) goto LAB_001042b7;
                                 if (local_188 != (TEXRAttribute*)0x0) {
                                    pTVar58 = pTVar15 + (long)param_1;
                                    pTVar34 = (TEXRAttribute*)( lVar12 + (long)pTVar71 * -4 + *(long*)pTVar61 );
                                    pTVar65 = (TEXRAttribute*)( *(long*)pTVar61 + (long)( local_188 + lVar46 * (long)local_190 ) * 4 + (long)pTVar71 * -4 );
                                    do {
                                       uVar4 = *(undefined4*)pTVar58;
                                       pTVar49 = pTVar16 + (long)pTVar34;
                                       if (param_6 != 0) {
                                          pTVar49 = pTVar34;
                                       }

                                       pTVar34 = pTVar34 + 4;
                                       pTVar58 = pTVar58 + 4;
                                       *(undefined4*)pTVar49 = uVar4;
                                    }
 while ( pTVar65 != pTVar34 );
                                 }

                                 pTVar69 = pTVar69 + 1;
                                 param_1 = (uchar**)( (long)param_1 + (long)pTVar39 );
                                 pTVar71 = pTVar71 + (long)local_190;
                                 pTVar16 = pTVar16 + (long)pTVar18;
                              }
 while ( pTVar26 != pTVar69 );
                           }

                           goto LAB_00104023;
                        }

                     }
 else if (( iVar56 == 2 ) && ( param_2[(long)pTVar60] == 2 )) {
                        if (pTVar26 != (TEXRAttribute*)0x0) {
                           pTVar69 = (TEXRAttribute*)0x0;
                           param_1 = (uchar**)( *(long*)( *(long*)param_16 + (long)pTVar60 * 8 ) * (long)local_188 );
                           pTVar71 = pTVar64;
                           do {
                              if (pTVar74 <= param_1) goto LAB_001042b7;
                              if (local_188 != (TEXRAttribute*)0x0) {
                                 pTVar58 = pTVar15 + (long)param_1;
                                 pTVar34 = (TEXRAttribute*)( lVar12 + (long)pTVar71 * -4 + *(long*)pTVar61 );
                                 pTVar65 = (TEXRAttribute*)( *(long*)pTVar61 + (long)( local_188 + lVar46 * (long)local_190 ) * 4 + (long)pTVar71 * -4 );
                                 do {
                                    uVar4 = *(undefined4*)pTVar58;
                                    pTVar49 = pTVar34 + (long)pTVar16;
                                    if (param_6 != 0) {
                                       pTVar49 = pTVar34;
                                    }

                                    pTVar34 = pTVar34 + 4;
                                    pTVar58 = pTVar58 + 4;
                                    *(undefined4*)pTVar49 = uVar4;
                                 }
 while ( pTVar34 != pTVar65 );
                              }

                              pTVar69 = pTVar69 + 1;
                              param_1 = (uchar**)( (long)param_1 + (long)pTVar39 );
                              pTVar71 = pTVar71 + (long)local_190;
                              pTVar16 = pTVar16 + (long)pTVar18;
                           }
 while ( pTVar26 != pTVar69 );
                        }

                        goto LAB_00104023;
                     }

                     goto LAB_00102c0e;
                  }

                  LAB_00104043:operator_delete(pTVar15, (ulong)local_158);
                  goto LAB_00102486;
               }

               goto LAB_001025b4;
            }

         }
 else {
            unaff_RBP = local_158 + -1;
            pTVar74 = pTVar15 + (long)local_158;
            memset(local_190, 0, (size_t)unaff_RBP);
            if ((TEXRAttribute*)param_4 == local_158) goto LAB_00103e32;
            if (2 < param_4) {
               pTVar16 = (TEXRAttribute*)operator_new((ulong)local_158);
               *pTVar16 = (TEXRAttribute)0x0;
               pTVar26 = pTVar16 + (long)local_158;
               pTVar18 = (TEXRAttribute*)memset(pTVar16 + 1, 0, (size_t)unaff_RBP);
               goto LAB_00102525;
            }

         }

         LAB_00102c0e:operator_delete(pTVar15, (ulong)local_158);
      }

   }
 else if (param_5 != 0x80) {
      if (( param_5 == 0 ) && ( param_14 != 0 )) {
         lVar12 = (long)param_7;
         lVar31 = (long)param_9;
         lVar46 = lVar12 * 2;
         lVar24 = lVar31 * param_10;
         local_190 = param_15 + 0x100;
         lVar13 = ( (long)param_8 - (long)param_10 ) + -1;
         if (param_12 != 0) {
            uVar25 = 0;
            puVar36 = param_3 + param_4;
            do {
               lVar2 = uVar25 * 8;
               lVar63 = 0;
               lVar37 = 0;
               lVar38 = lVar24 * 4;
               lVar66 = lVar31 * 4 * lVar13;
               lVar68 = lVar24 * 2;
               lVar70 = lVar13 * lVar31 * 2;
               do {
                  iVar56 = *(int*)local_190;
                  if (iVar56 == 1) {
                     lVar57 = ( *(long*)( *(long*)param_16 + lVar2 ) + lVar37 ) * lVar12;
                     if (param_2[uVar25] == 1) {
                        puVar45 = param_1[uVar25];
                        lVar6 = lVar68;
                        if (param_6 != 0) {
                           lVar6 = lVar70;
                        }

                        lVar44 = 0;
                        if (0 < param_7) {
                           do {
                              *(undefined2*)( puVar45 + lVar44 + lVar6 ) = *(undefined2*)( param_3 + lVar44 + lVar57 );
                              lVar44 = lVar44 + 2;
                           }
 while ( lVar46 != lVar44 );
                        }

                     }
 else {
                        if (param_2[uVar25] != 2) goto LAB_00101dd6;
                        puVar45 = param_1[uVar25];
                        lVar6 = lVar66;
                        if (param_6 == 0) {
                           lVar6 = lVar38;
                        }

                        if (puVar36 < param_3 + lVar46 + lVar57) goto LAB_00101dd6;
                        if (0 < param_7) {
                           lVar44 = 0;
                           do {
                              uVar50 = ( uint ) * (ushort*)( param_3 + lVar44 + lVar57 ) << 0xd;
                              uVar51 = uVar50 & 0xf800000;
                              uVar50 = uVar50 & 0xfffe000;
                              if (uVar51 == 0xf800000) {
                                 fVar62 = (float)( uVar50 + 0x70000000 );
                              }
 else if (uVar51 == 0) {
                                 fVar62 = (float)( uVar50 + 0x38800000 ) - fVar9;
                              }
 else {
                                 fVar62 = (float)( uVar50 + 0x38000000 );
                              }

                              *(uint*)( puVar45 + lVar44 * 2 + lVar6 ) = ( *(ushort*)( param_3 + lVar44 + lVar57 ) & 0x8000 ) << 0x10 | (uint)fVar62;
                              lVar44 = lVar44 + 2;
                           }
 while ( lVar46 != lVar44 );
                        }

                     }

                  }
 else if (iVar56 == 2) {
                     puVar45 = param_3 + ( *(long*)( *(long*)param_16 + lVar2 ) + lVar37 ) * lVar12;
                     lVar57 = lVar66;
                     if (param_6 == 0) {
                        lVar57 = lVar38;
                     }

                     puVar1 = puVar45 + lVar12 * 4;
                     if (puVar36 < puVar1) goto LAB_00101dd6;
                     puVar52 = param_1[uVar25] + lVar57;
                     if (0 < param_7) {
                        do {
                           uVar4 = *(undefined4*)puVar45;
                           puVar45 = puVar45 + 4;
                           *(undefined4*)puVar52 = uVar4;
                           puVar52 = puVar52 + 4;
                        }
 while ( puVar45 != puVar1 );
                     }

                  }
 else if (iVar56 == 0) {
                     puVar45 = param_3 + ( *(long*)( *(long*)param_16 + lVar2 ) + lVar37 ) * lVar12;
                     lVar57 = lVar66;
                     if (param_6 == 0) {
                        lVar57 = lVar38;
                     }

                     puVar1 = puVar45 + lVar12 * 4;
                     if (puVar36 < puVar1) goto LAB_00101dd6;
                     puVar52 = param_1[uVar25] + lVar57;
                     if (0 < param_7) {
                        do {
                           uVar4 = *(undefined4*)puVar45;
                           puVar45 = puVar45 + 4;
                           *(undefined4*)puVar52 = uVar4;
                           puVar52 = puVar52 + 4;
                        }
 while ( puVar45 != puVar1 );
                     }

                  }

                  lVar63 = lVar63 + 1;
                  lVar38 = lVar38 + lVar31 * 4;
                  lVar66 = lVar66 + lVar31 * -4;
                  lVar37 = lVar37 + param_13;
                  lVar68 = lVar68 + lVar31 * 2;
                  lVar70 = lVar70 + lVar31 * -2;
               }
 while ( lVar63 != param_12 );
               uVar25 = uVar25 + 1;
               local_190 = local_190 + 0x110;
            }
 while ( param_14 != uVar25 );
         }

      }

      LAB_00102486:uVar14 = 1;
      goto LAB_00101dd8;
   }

   LAB_00101dd6:uVar14 = 0;
   LAB_00101dd8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar14;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   code_r0x00103d01:cVar10 = getCode(*puVar48, uVar51, (longlong*)&local_48, &local_5c, (char**)&local_58, (char*)pTVar26, (ushort**)&local_50, (ushort*)unaff_RBP, (ushort*)pTVar58);
   if (cVar10 == '\0') goto LAB_0010318a;
   if (uVar43 == uVar50) goto LAB_0010318a;
   goto joined_r0x00103b1e;
   LAB_001030d7:pTVar15 = unaff_RBP;
   local_48 = (TEXRAttribute*)std::__throw_out_of_range_fmt(_LC1, unaff_RBP, local_e0);
   local_5c = (int)pTVar15;
   LAB_001030f0:local_140 = uVar25;
   uVar14 = 0xe;
   local_48 = (TEXRAttribute*)( (long)local_48 >> ( sbyte )(-(int)local_178 & 7U) );
   local_5c = local_5c - ( -(int)local_178 & 7U );
   do {
      if (local_5c < 1) break;
      cVar10 = (char)local_5c;
      TVar27 = pTVar18[( ulong )(( uint )((long)local_48 << ( (char)uVar14 - cVar10 & 0x3fU )) & 0x3fff) * 0x10];
      if (TVar27 == (TEXRAttribute)0x0) break;
      local_5c = local_5c - (uint)(byte)TVar27;
      cVar10 = getCode(*(uint*)( pTVar18 + ( ulong )(( uint )((long)local_48 << ( (char)uVar14 - cVar10 & 0x3fU )) & 0x3fff) * 0x10 ) >> 8, (int)local_188, (longlong*)&local_48, &local_5c, (char**)&local_58, (char*)pTVar26, (ushort**)&local_50, (ushort*)unaff_RBP, (ushort*)pTVar58);
   }
 while ( cVar10 != '\0' );
   LAB_0010318a:pTVar58 = pTVar18 + 8;
   do {
      if (*(void**)pTVar58 != (void*)0x0) {
         operator_delete__(*(void**)pTVar58);
         *(undefined8*)pTVar58 = 0;
      }

      pTVar58 = pTVar58 + 0x10;
   }
 while ( pTVar18 + 0x40008 != pTVar58 );
   LAB_001031b4:operator_delete(pTVar18, 0x40000);
   operator_delete(local_190, 0x80008);
   LAB_001031d0:pTVar67 = (TEXRAttribute*)(long)(int)param_14;
   if ((ulong)pTVar67 >> 0x3a != 0) goto LAB_001042e0;
   if (pTVar67 == (TEXRAttribute*)0x0) {
      if (unaff_RBP == local_180) goto LAB_0010365f;
      goto LAB_00103671;
   }

   pTVar15 = (TEXRAttribute*)operator_new((long)pTVar67 * 0x20);
   pTVar58 = pTVar15 + (long)pTVar67 * 0x20;
   *(undefined1(*) [16])pTVar15 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pTVar15 + 0x10 ) = (undefined1[16])0x0;
   pTVar26 = pTVar15 + 0x20;
   pTVar18 = pTVar26;
   if (pTVar67 != (TEXRAttribute*)0x1) {
      for (; pTVar26 = pTVar58,pTVar18 != pTVar58; pTVar18 = pTVar18 + 0x20) {
         uVar14 = *(undefined8*)( pTVar15 + 8 );
         *(undefined8*)pTVar18 = *(undefined8*)pTVar15;
         *(undefined8*)( pTVar18 + 8 ) = uVar14;
         uVar14 = *(undefined8*)( pTVar15 + 0x18 );
         *(undefined8*)( pTVar18 + 0x10 ) = *(undefined8*)( pTVar15 + 0x10 );
         *(undefined8*)( pTVar18 + 0x18 ) = uVar14;
      }

   }

   if (unaff_RBP == local_180) goto LAB_0010365f;
   pTVar18 = local_100 + 0x100;
   pTVar65 = pTVar15;
   pTVar67 = unaff_RBP;
   do {
      iVar56 = *(int*)pTVar18;
      lVar46 = local_130;
      if (iVar56 != 1) {
         iVar56 = 2;
         lVar46 = (long)( (int)local_138 * 2 );
      }

      *(int*)( pTVar65 + 0x1c ) = iVar56;
      pTVar33 = pTVar65 + 0x20;
      *(TEXRAttribute**)pTVar65 = pTVar67;
      *(TEXRAttribute**)( pTVar65 + 8 ) = pTVar67;
      pTVar18 = pTVar18 + 0x110;
      *(int*)( pTVar65 + 0x10 ) = param_7;
      *(int*)( pTVar65 + 0x14 ) = param_12;
      pTVar65 = pTVar33;
      pTVar67 = pTVar67 + lVar46 * 2;
   }
 while ( pTVar58 != pTVar33 );
   pTVar65 = (TEXRAttribute*)0x0;
   lVar46 = (long)pTVar26 - (long)pTVar15;
   uVar73 = (short)local_140 - 1;
   pTVar67 = (TEXRAttribute*)( lVar46 >> 5 );
   pTVar18 = pTVar15;
   if (pTVar26 != pTVar15) goto LAB_001032f3;
   if (0 < (int)local_d8) goto LAB_00103686;
   if (0 < param_12) goto LAB_00103815;
   goto LAB_0010387b;
   while (local_e8 = local_e8 + 2,pTVar26 != local_e8) {
      LAB_00103358:iVar30 = 1;
      do {
         iVar7 = iVar30 * 2;
         iVar5 = iVar30 * -2;
         iVar30 = iVar7;
      }
 while ( SBORROW4(uVar43, iVar7) == (int)( uVar43 + iVar5 ) < 0 );
      uVar29 = iVar7 >> 2;
      uVar11 = iVar7 >> 1;
      if (iVar7 >> 2 != 0) {
         do {
            uVar40 = uVar29;
            iVar30 = uVar40 * iVar56;
            pTVar33 = local_e8;
            if (local_e8 <= local_e8 + (long)(int)( ( uVar51 - uVar11 ) * iVar23 ) * 2) {
               pTVar72 = (TEXRAttribute*)( (long)(int)( iVar23 * uVar11 ) * 2 );
               local_180 = (TEXRAttribute*)( (long)(int)( iVar23 * uVar40 ) * 2 );
               lVar12 = (long)(int)( uVar11 * iVar56 ) * 2;
               lVar13 = (long)iVar30 + (long)(int)( iVar23 * uVar40 );
               pTVar39 = local_e8 + (long)(int)( ( uVar50 - uVar11 ) * iVar56 ) * 2;
               do {
                  pTVar60 = pTVar33;
                  if (pTVar33 <= pTVar39) {
                     pTVar60 = local_180 + (long)pTVar33;
                     pTVar16 = pTVar33 + (long)iVar30 * 2;
                     pTVar74 = pTVar33;
                     do {
                        while (true) {
                           pTVar69 = pTVar74;
                           uVar3 = *(ushort*)pTVar60;
                           uVar35 = *(ushort*)( pTVar69 + lVar13 * 2 );
                           if (uVar73 < 0x4000) break;
                           sVar22 = *(short*)pTVar69 - (short)( (int)(uint)uVar3 >> 1 );
                           uVar41 = (int)*(short*)pTVar16 - ( (int)(uint)uVar35 >> 1 );
                           uVar42 = uVar41 & 0xffff;
                           uVar29 = ( uVar35 - 0x8000 ) + uVar42;
                           sVar28 = ( uVar3 + 0x8000 + sVar22 ) - (short)( (int)( uVar29 & 0xffff ) >> 1 );
                           *(short*)pTVar16 = sVar28;
                           pTVar16 = pTVar16 + lVar12;
                           *(short*)pTVar69 = (short)uVar29 + -0x8000 + sVar28;
                           sVar22 = sVar22 - (short)( (int)uVar42 >> 1 );
                           *(short*)( pTVar69 + lVar13 * 2 ) = sVar22;
                           *(short*)pTVar60 = (short)uVar41 + -0x8000 + sVar22;
                           pTVar60 = pTVar60 + lVar12;
                           pTVar74 = pTVar69 + lVar12;
                           if (pTVar39 < pTVar69 + lVar12) goto LAB_001035ce;
                        }
;
                        sVar22 = *(short*)pTVar69 + ( uVar3 & 1 ) + ( (short)uVar3 >> 1 );
                        uVar8 = ( uVar35 & 1 ) + *(short*)pTVar16 + ( (short)uVar35 >> 1 );
                        sVar28 = ( uVar8 & 1 ) + sVar22 + ( (short)uVar8 >> 1 );
                        uVar3 = ( (short)( uVar8 - uVar35 ) >> 1 ) + ( uVar8 - uVar35 & 1 ) + ( sVar22 - uVar3 );
                        *(short*)pTVar69 = sVar28;
                        *(ushort*)pTVar16 = sVar28 - uVar8;
                        pTVar16 = pTVar16 + lVar12;
                        *(ushort*)pTVar60 = uVar3;
                        pTVar60 = pTVar60 + lVar12;
                        *(ushort*)( pTVar69 + lVar13 * 2 ) = ( uVar35 - uVar8 ) + uVar3;
                        pTVar74 = pTVar69 + lVar12;
                     }
 while ( pTVar69 + lVar12 <= pTVar39 );
                     LAB_001035ce:pTVar60 = pTVar69 + lVar12;
                     local_190 = pTVar33;
                     local_188 = pTVar72;
                  }

                  if (( uVar50 & uVar40 ) != 0) {
                     uVar3 = *(ushort*)( pTVar60 + (long)local_180 );
                     if (uVar73 < 0x4000) {
                        sVar22 = ( (short)uVar3 >> 1 ) + *(short*)pTVar60 + ( uVar3 & 1 );
                        uVar35 = sVar22 - uVar3;
                     }
 else {
                        uVar35 = *(short*)pTVar60 - (short)( (int)(uint)uVar3 >> 1 );
                        sVar22 = uVar35 + 0x8000 + uVar3;
                     }

                     *(ushort*)( pTVar60 + (long)local_180 ) = uVar35;
                     *(short*)pTVar60 = sVar22;
                  }

                  pTVar33 = pTVar33 + (long)pTVar72;
                  pTVar39 = pTVar39 + (long)pTVar72;
               }
 while ( pTVar33 <= local_e8 + (long)(int)( ( uVar51 - uVar11 ) * iVar23 ) * 2 );
            }

            if (( ( uVar51 & uVar40 ) != 0 ) && ( pTVar39 = pTVar33 <= pTVar39 )) {
               do {
                  uVar3 = *(ushort*)( pTVar33 + (long)iVar30 * 2 );
                  if (uVar73 < 0x4000) {
                     sVar22 = ( uVar3 & 1 ) + *(short*)pTVar33 + ( (short)uVar3 >> 1 );
                     sVar28 = sVar22 - uVar3;
                  }
 else {
                     sVar28 = *(short*)pTVar33 - (short)( (int)(uint)uVar3 >> 1 );
                     sVar22 = sVar28 + -0x8000 + uVar3;
                  }

                  *(short*)( pTVar33 + (long)iVar30 * 2 ) = sVar28;
                  *(short*)pTVar33 = sVar22;
                  pTVar33 = pTVar33 + (long)(int)( uVar11 * iVar56 ) * 2;
               }
 while ( pTVar33 <= pTVar39 );
            }

            uVar29 = (int)uVar40 >> 1;
            uVar11 = uVar40;
         }
 while ( (int)uVar40 >> 1 != 0 );
         local_e8 = local_e8 + 2;
         if (local_e8 == pTVar26) break;
         goto LAB_00103358;
      }

   }
;
   while (true) {
      pTVar65 = pTVar65 + 1;
      pTVar18 = pTVar18 + 0x20;
      if (pTVar67 <= pTVar65) break;
      LAB_001032f3:iVar56 = *(int*)( pTVar18 + 0x1c );
      if (0 < iVar56) {
         uVar50 = *(uint*)( pTVar18 + 0x10 );
         iVar23 = iVar56 * uVar50;
         uVar51 = *(uint*)( pTVar18 + 0x14 );
         uVar43 = uVar51;
         if ((int)uVar50 <= (int)uVar51) {
            uVar43 = uVar50;
         }

         local_e8 = *(TEXRAttribute**)pTVar18;
         pTVar26 = local_e8 + (long)iVar56 * 2;
         do {
            if (0 < (int)uVar43) goto LAB_00103358;
            local_e8 = local_e8 + 2;
         }
 while ( local_e8 != pTVar26 );
      }

   }
;
   if (0 < (int)local_d8) goto LAB_00103686;
   goto LAB_00103808;
   LAB_001042b7:auVar76 = std::__throw_out_of_range_fmt(_LC1, param_1, pTVar74);
   local_188 = pTVar18;
   LAB_001042cb:*(undefined4*)pTVar58 = *auVar76._0_8_;
   *(undefined4*)( pTVar58 + ( (ulong)(uint)param_6 - 4 ) ) = *(undefined4*)( (long)auVar76._0_8_ + ( (ulong)(uint)param_6 - 4 ) );
   goto LAB_00102604;
}
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tinyexr::DecodeTiledLevel(TEXRImage*,
   TEXRHeader const*, tinyexr::OffsetData const&, std::vector<unsigned long, std::allocator<unsigned
   long> > const&, int, unsigned char const*, unsigned long, std::__cxx11::string*)::{lambda()#1}> >
   >::_M_run() */void std::thread::_State_impl<std::thread::_Invoker < std::tuple<tinyexr::DecodeTiledLevel(TEXRImage *, TEXRHeader_const *, tinyexr::OffsetData_const &, std::vector<unsigned_long,std::allocator<unsigned_long>> const &, int, unsigned_char_const *, unsigned_long, std::__cxx11::string *)::{lambda()#1}>>>::_M_run(_State_impl<std::thread::_Invoker < std::tuple<tinyexr::DecodeTiledLevel(TEXRImage *, TEXRHeader_const *, tinyexr::OffsetData_const &, std::vector<unsigned_long,std::allocator<unsigned_long>> const &, int, unsigned_char_const *, unsigned_long, std::__cxx11::string *)::_lambda()_1_> >> *this) {
   int iVar1;
   uint uVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int *piVar9;
   long lVar10;
   long *plVar11;
   ulong uVar12;
   TEXRAttribute *pTVar13;
   int iVar14;
   int iVar15;
   char cVar16;
   undefined8 uVar17;
   undefined8 *puVar18;
   int iVar19;
   long lVar20;
   long lVar21;
   int iVar22;
   long in_FS_OFFSET;
   TEXRChannelInfo *pTVar23;
   vector *pvVar24;
   bool local_41;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   LAB_00104430:do {
      while (true) {
         piVar9 = *(int**)( this + 8 );
         LOCK();
         iVar1 = *piVar9;
         *piVar9 = *piVar9 + 1;
         UNLOCK();
         if (**(int**)( this + 0x10 ) <= iVar1) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         lVar20 = (long)iVar1 * 0x20;
         lVar21 = **(long**)( this + 0x28 );
         lVar10 = *(long*)**(undefined8**)( this + 0x18 );
         uVar17 = tinyexr::AllocateImage(**(int**)( this + 0x20 ), *(TEXRChannelInfo**)( lVar21 + 0x68 ), *(int**)( lVar21 + 0x80 ), *(int*)( lVar21 + 0x3c ), *(int*)( lVar21 + 0x40 ), &local_41);
         *(undefined8*)( lVar10 + lVar20 + 0x18 ) = uVar17;
         if (local_41 != false) break;
         LAB_00104650:LOCK();
         **(uint**)( this + 0x30 ) = **(uint**)( this + 0x30 ) | 1;
         UNLOCK();
      }
;
      lVar21 = *(long*)( *(long*)( *(long*)( **(long**)( this + 0x40 ) + (long)**(int**)( this + 0x48 ) * 0x18 ) + (long)( iVar1 / **(int**)( this + 0x38 ) ) * 0x18 ) + (long)( iVar1 % **(int**)( this + 0x38 ) ) * 8 );
      if (lVar21 + 0x14U <= **(ulong**)( this + 0x50 )) {
         plVar11 = (long*)**(long**)( this + 0x18 );
         puVar18 = (undefined8*)( **(long**)( this + 0x58 ) + lVar21 );
         pTVar23 = (TEXRChannelInfo*)*puVar18;
         pvVar24 = (vector*)puVar18[1];
         if (( (int)plVar11[2] != (int)pvVar24 ) || ( *(int*)( (long)plVar11 + 0x14 ) != (int)( (ulong)pvVar24 >> 0x20 ) )) goto LAB_00104650;
         uVar2 = *(uint*)( puVar18 + 2 );
         if (( (int)uVar2 < 2 ) || ( ( **(ulong**)( this + 0x50 ) - 0x14 ) - lVar21 < (ulong)uVar2 )) goto LAB_00104660;
         iVar1 = *(int*)( (long)plVar11 + 0x24 );
         iVar15 = (int)plVar11[4];
         uVar12 = *(ulong*)( this + 0x68 );
         lVar21 = **(long**)( this + 0x28 );
         iVar3 = *(int*)( lVar21 + 4 );
         iVar4 = *(int*)( lVar21 + 0x78 );
         iVar5 = **(int**)( this + 0x60 );
         pTVar13 = *(TEXRAttribute**)( lVar21 + 0x68 );
         iVar6 = *(int*)( lVar21 + 0x7c );
         iVar7 = *(int*)( lVar21 + 0x40 );
         piVar9 = *(int**)( lVar21 + 0x80 );
         iVar8 = *(int*)( lVar21 + 0x3c );
         lVar21 = *plVar11 + lVar20;
         iVar22 = (int)pTVar23 * iVar8;
         if (( iVar15 < iVar22 ) || ( iVar19 = iVar1 < iVar19 )) {
            LAB_00104630:LOCK();
            **(uint**)( this + 0x30 ) = **(uint**)( this + 0x30 ) | 4;
            UNLOCK();
         }
 else {
            iVar14 = iVar15 - iVar22;
            if (iVar8 + iVar22 < iVar15) {
               iVar14 = iVar8;
            }

            iVar15 = iVar1 - iVar19;
            if (iVar7 + iVar19 < iVar1) {
               iVar15 = iVar7;
            }

            *(int*)( lVar21 + 0x10 ) = iVar14;
            *(int*)( lVar21 + 0x14 ) = iVar15;
            cVar16 = tinyexr::DecodePixelData(*(uchar***)( lVar21 + 0x18 ), piVar9, (uchar*)( (long)puVar18 + 0x14 ), (ulong)uVar2, iVar6, iVar3, iVar14, iVar7, iVar8, 0, 0, iVar15, (long)iVar5, (long)iVar4, pTVar13, uVar12, pTVar23, pvVar24);
            if (cVar16 == '\0') goto LAB_00104630;
         }

         lVar21 = *(long*)**(undefined8**)( this + 0x18 );
         *(undefined8*)( lVar21 + lVar20 ) = pTVar23;
         ( (undefined8*)( lVar21 + lVar20 ) )[1] = pvVar24;
         goto LAB_00104430;
      }

      LAB_00104660:LOCK();
      **(uint**)( this + 0x30 ) = **(uint**)( this + 0x30 ) | 2;
      UNLOCK();
   }
 while ( true );
}
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tinyexr::DecodeChunk(TEXRImage*,
   TEXRHeader const*, tinyexr::OffsetData const&, unsigned char const*, unsigned long,
   std::__cxx11::string*)::{lambda()#1}> > >::_M_run() */void std::thread::_State_impl<std::thread::_Invoker < std::tuple<tinyexr::DecodeChunk(TEXRImage *, TEXRHeader_const *, tinyexr::OffsetData_const &, unsigned_char_const *, unsigned_long, std::__cxx11::string *)::{lambda()#1}>>>::_M_run(_State_impl<std::thread::_Invoker < std::tuple<tinyexr::DecodeChunk(TEXRImage *, TEXRHeader_const *, tinyexr::OffsetData_const &, unsigned_char_const *, unsigned_long, std::__cxx11::string *)::_lambda()_1_> >> *this) {
   int iVar1;
   int iVar2;
   int iVar3;
   long lVar4;
   char cVar5;
   int iVar6;
   vector *unaff_RBX;
   int iVar7;
   int *piVar8;
   TEXRChannelInfo *in_stack_ffffffffffffffd8;
   do {
      piVar8 = *(int**)( this + 8 );
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + 1;
      UNLOCK();
      if (**(int**)( this + 0x10 ) <= iVar1) {
         return;
      }

      lVar4 = *(long*)( **(long**)( this + 0x18 ) + (long)iVar1 * 8 );
      if (**(ulong**)( this + 0x20 ) < lVar4 + 8U) goto LAB_00104750;
      piVar8 = (int*)( **(long**)( this + 0x30 ) + lVar4 );
      iVar2 = piVar8[1];
      if (( ( ( **(ulong**)( this + 0x20 ) - 8 ) - lVar4 < (ulong)(long)iVar2 ) || ( iVar3 = 0x400000 < iVar3 + 0x200000U ) ) || ( iVar2 == 0 )) goto LAB_00104750;
      lVar4 = **(long**)( this + 0x40 );
      iVar7 = *(int*)( lVar4 + 0x14 ) + 1;
      if (**(int**)( this + 0x38 ) + iVar3 <= iVar7) {
         iVar7 = **(int**)( this + 0x38 ) + iVar3;
      }

      if (( ( iVar7 - iVar3 < 1 ) || ( 0xfffffffe < ( (long)iVar3 - (long)*(int*)( lVar4 + 0xc ) ) + 0x7fffffffU ) ) || ( ( iVar6 = iVar3 - *(int*)( lVar4 + 0xc ) ),iVar6<0 || ( cVar5 = tinyexr::DecodePixelData(*(uchar***)( **(long**)( this + 0x48 ) + 0x18 ), *(int**)( lVar4 + 0x80 ), (uchar*)( piVar8 + 2 ), (long)iVar2, *(int*)( lVar4 + 0x7c ), *(int*)( lVar4 + 4 ), (int)**(undefined8**)( this + 0x50 ), (int)**(undefined8**)( this + 0x58 ), (int)**(undefined8**)( this + 0x50 ), iVar1, iVar6, iVar7 - iVar3, (long)**(int**)( this + 0x60 ), (long)*(int*)( lVar4 + 0x78 ), *(TEXRAttribute**)( lVar4 + 0x68 ), *(ulong*)( this + 0x68 ), in_stack_ffffffffffffffd8, unaff_RBX) ),cVar5 == '\0' )) {
         LAB_00104750:LOCK();
         **(undefined1**)( this + 0x28 ) = 1;
         UNLOCK();
      }

   }
 while ( true );
}
/* tinyexr::EncodePixelData(std::vector<unsigned char, std::allocator<unsigned char> >&, unsigned
   char const* const*, int, int, int, int, int, int, int, unsigned long,
   std::vector<tinyexr::TChannelInfo, std::allocator<tinyexr::TChannelInfo> > const&,
   std::vector<unsigned long, std::allocator<unsigned long> > const&, std::__cxx11::string*, void
   const*) [clone .constprop.0] */undefined8 tinyexr::EncodePixelData(vector *param_1, uchar **param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, ulong param_10, vector *param_11, vector *param_12, string *param_13, void *param_14) {
   ushort *puVar1;
   char cVar2;
   char cVar3;
   ushort uVar4;
   long lVar5;
   long *plVar6;
   undefined1 uVar7;
   float fVar8;
   undefined1 uVar9;
   ushort uVar10;
   ushort uVar11;
   uint uVar12;
   byte *pbVar13;
   undefined1(*pauVar14)[16];
   undefined1(*pauVar15)[16];
   undefined1(*__n)[16];
   long lVar16;
   short *psVar17;
   undefined1(*pauVar18)[16];
   long *plVar19;
   undefined1(*pauVar20)[16];
   undefined4 *puVar21;
   long *plVar22;
   void *pvVar23;
   longlong *__s;
   long lVar24;
   long lVar25;
   float fVar26;
   uint uVar27;
   undefined1 *puVar28;
   long *plVar29;
   short sVar30;
   ushort uVar31;
   int iVar32;
   ulong uVar33;
   undefined1(*pauVar34)[16];
   ulong uVar35;
   ulong uVar36;
   undefined1(*pauVar37)[16];
   long lVar38;
   int *piVar39;
   ushort *puVar40;
   ulong extraout_RDX;
   long *plVar41;
   ulong uVar42;
   undefined1 uVar43;
   int iVar44;
   undefined1(*pauVar45)[16];
   undefined8 uVar46;
   undefined1(*pauVar47)[16];
   undefined1(*__dest)[16];
   ushort *puVar48;
   size_t sVar49;
   short sVar50;
   uint uVar51;
   uint uVar52;
   int iVar53;
   int *piVar54;
   long *plVar55;
   int *piVar56;
   int iVar57;
   uint uVar58;
   undefined1(*pauVar59)[16];
   undefined8 *puVar60;
   uint uVar61;
   undefined4 in_register_00000084;
   ushort uVar62;
   int iVar63;
   int iVar64;
   uint uVar65;
   long lVar66;
   uint uVar67;
   undefined1 *puVar68;
   ushort *puVar69;
   ushort *puVar70;
   undefined1(*pauVar71)[16];
   ushort uVar72;
   undefined1(*pauVar73)[16];
   long in_FS_OFFSET;
   bool bVar74;
   byte bVar75;
   undefined4 in_stack_00000014;
   undefined4 in_stack_0000001c;
   undefined1(*local_158)[16];
   ulong local_148;
   undefined1 *local_140;
   int *local_138;
   ulong local_130;
   undefined1 local_128;
   undefined1 *local_120;
   undefined1 local_110;
   undefined1 local_108;
   long *local_f0;
   undefined1 local_e8;
   int local_e0;
   int *local_d8;
   byte *local_d0;
   undefined1(*local_c8)[16];
   undefined1(*local_c0)[16];
   undefined1(*local_b8)[16];
   undefined1 *local_a8;
   undefined1(*local_a0)[16];
   undefined1(*local_90)[16];
   undefined1 local_7c;
   undefined1(*local_78)[16];
   undefined1(*local_48)[16];
   long local_40;
   pauVar20 = (undefined1(*) [16])CONCAT44(in_register_00000084, param_5);
   bVar75 = 0;
   pauVar45 = (undefined1(*) [16])(long)param_4;
   __dest = (undefined1(*) [16])CONCAT44(in_stack_0000001c, param_9);
   uVar33 = (long)param_7 * CONCAT44(in_stack_00000014, param_8) * (long)pauVar45;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((long)uVar33 < 0) goto LAB_00105a4a;
   pauVar73 = (undefined1(*) [16])(ulong)(uint)param_5;
   __n = (undefined1(*) [16])(ulong)(uint)param_6;
   if (uVar33 == 0) {
      local_a8 = (undefined1*)0x0;
      local_140 = (undefined1*)0x0;
      local_120 = (undefined1*)0x0;
   }
 else {
      local_140 = (undefined1*)operator_new(uVar33);
      local_a8 = local_140 + uVar33;
      *local_140 = 0;
      local_120 = local_140 + 1;
      if (uVar33 != 1) {
         memset(local_140 + 1, 0, uVar33 - 1);
         local_120 = local_a8;
      }

   }

   fVar8 = _LC6;
   lVar16 = *(long*)( (long)*__dest + 8 );
   lVar38 = *(long*)*__dest;
   pauVar14 = pauVar45;
   local_158 = (undefined1(*) [16])param_2;
   if (lVar38 != lVar16) {
      local_138 = (int*)( lVar38 + 0x24 );
      uVar35 = 0;
      lVar66 = 0;
      pauVar47 = (undefined1(*) [16])( (long)param_5 * 4 );
      lVar24 = (long)param_5 * 2;
      pauVar34 = (undefined1(*) [16])( param_6 * lVar24 );
      pauVar15 = (undefined1(*) [16])(ulong)(uint)param_7;
      pauVar59 = (undefined1(*) [16])( (long)param_6 * (long)pauVar47 );
      local_d0 = (byte*)( (long)pauVar45 * 2 );
      pauVar20 = (undefined1(*) [16])CONCAT44(in_stack_00000014, param_8);
      uVar33 = (long)local_120 - (long)local_140;
      pauVar18 = __dest;
      pauVar73 = pauVar47;
      do {
         iVar63 = local_138[-1];
         iVar44 = (int)pauVar14;
         pauVar71 = pauVar14;
         if (iVar63 == 1) {
            if (*local_138 == 2) {
               if (0 < param_7) {
                  __n = (undefined1(*) [16])0x0;
                  iVar63 = 0;
                  lVar5 = *(long*)param_10;
                  pauVar73 = pauVar34;
                  do {
                     uVar36 = (long)( (long)*__n + *(long*)( lVar5 + lVar66 ) ) * (long)pauVar45;
                     if (uVar33 <= uVar36) goto LAB_00105a77;
                     if (0 < iVar44) {
                        pauVar37 = (undefined1(*) [16])0x0;
                        pauVar18 = (undefined1(*) [16])( (long)*pauVar73 + *(long*)( (long)param_2 + lVar66 ) );
                        do {
                           uVar61 = ( uint ) * (ushort*)( (long)*pauVar18 + (long)pauVar37 * 2 );
                           uVar67 = uVar61 << 0xd;
                           uVar27 = uVar67 & 0xf800000;
                           uVar67 = uVar67 & 0xfffe000;
                           if (uVar27 == 0xf800000) {
                              fVar26 = (float)( uVar67 + 0x70000000 );
                           }
 else if (uVar27 == 0) {
                              fVar26 = (float)( uVar67 + 0x38800000 ) - fVar8;
                           }
 else {
                              fVar26 = (float)( uVar67 + 0x38000000 );
                           }

                           *(uint*)( local_140 + (long)pauVar37 * 4 + uVar36 ) = ( uVar61 & 0x8000 ) << 0x10 | (uint)fVar26;
                           pauVar37 = (undefined1(*) [16])( (long)*pauVar37 + 1 );
                        }
 while ( pauVar45 != pauVar37 );
                     }

                     iVar63 = iVar63 + 1;
                     __n = (undefined1(*) [16])( (long)*pauVar20 + (long)*__n );
                     pauVar73 = (undefined1(*) [16])( (long)*pauVar73 + lVar24 );
                  }
 while ( param_7 != iVar63 );
               }

            }
 else {
               if (*local_138 != 1) {
                  LAB_00104f3b:if (param_11 == (vector*)0x0) goto LAB_00104e92;
                  if (0x3fffffffffffffffU - *(long*)( param_11 + 8 ) < 0x1e) {
                     /* WARNING: Subroutine does not return */
                     std::__throw_length_error("basic_string::append");
                  }

                  uVar46 = 0;
                  std::__cxx11::string::_M_append((char*)param_11, 0x118f08);
                  goto LAB_00104e94;
               }

               if (0 < param_7) {
                  pauVar18 = (undefined1(*) [16])0x0;
                  iVar63 = 0;
                  pauVar73 = (undefined1(*) [16])( *(long*)param_10 + lVar66 );
                  __n = pauVar34;
                  do {
                     uVar36 = (long)( (long)*pauVar18 + *(long*)*pauVar73 ) * (long)pauVar45;
                     if (uVar33 <= uVar36) goto LAB_00105a8b;
                     if (0 < iVar44) {
                        lVar5 = *(long*)( (long)param_2 + lVar66 );
                        pbVar13 = (byte*)0x0;
                        do {
                           *(undefined2*)( local_140 + uVar36 + (long)pbVar13 ) = *(undefined2*)( (undefined1*)( (long)*__n + lVar5 ) + (long)pbVar13 );
                           pbVar13 = pbVar13 + 2;
                        }
 while ( local_d0 != pbVar13 );
                     }

                     iVar63 = iVar63 + 1;
                     pauVar18 = (undefined1(*) [16])( (long)*pauVar20 + (long)*pauVar18 );
                     __n = (undefined1(*) [16])( (long)*__n + lVar24 );
                  }
 while ( param_7 != iVar63 );
               }

            }

         }
 else if (iVar63 == 2) {
            if (*local_138 == 1) {
               if (0 < param_7) {
                  puVar28 = (undefined1*)0x0;
                  iVar63 = 0;
                  lVar5 = *(long*)param_10;
                  pauVar73 = pauVar59;
                  do {
                     uVar36 = (long)( puVar28 + *(long*)( lVar5 + lVar66 ) ) * (long)pauVar45;
                     pauVar18 = pauVar15;
                     if (uVar33 <= uVar36) goto LAB_00105a77;
                     if (0 < iVar44) {
                        pauVar37 = (undefined1(*) [16])0x0;
                        pauVar71 = (undefined1(*) [16])( (long)*pauVar73 + *(long*)( (long)param_2 + lVar66 ) );
                        __n = (undefined1(*) [16])( local_140 + uVar36 );
                        do {
                           uVar61 = *(uint*)( (long)*pauVar71 + (long)pauVar37 * 4 );
                           uVar10 = 0;
                           if (( uVar61 >> 0x10 & 0x7f80 ) != 0) {
                              if (( ( ushort )(uVar61 >> 0x10) & 0x7f80 ) == 0x7f80) {
                                 uVar10 = ( ushort )(( uVar61 & 0x7fffff ) != 0) << 9 | 0x7c00;
                              }
 else {
                                 uVar67 = ( uVar61 >> 0x17 & 0xff ) - 0x70;
                                 if ((int)uVar67 < 0x1f) {
                                    if ((int)uVar67 < 1) {
                                       if (( (int)( 0xe - uVar67 ) < 0x19 ) && ( uVar27 = uVar61 & 0x7fffff | 0x800000 ),uVar10 = ( ushort )(uVar27 >> ( ( byte )(0xe - uVar67) & 0x1f )) & 0x3ff,( uVar27 >> ( 0xd - uVar67 & 0x1f ) & 1 ) != 0) {
                                          uVar10 = uVar10 + 1;
                                       }

                                    }
 else {
                                       uVar72 = ( ushort )((int)( uVar61 & 0x7fffff ) >> 0xd) | ( ushort )(( uVar67 & 0x1f ) << 10);
                                       uVar10 = uVar72 + 1;
                                       if (( uVar61 & 0x1000 ) == 0) {
                                          uVar10 = uVar72;
                                       }

                                    }

                                 }
 else {
                                    uVar10 = 0x7c00;
                                 }

                              }

                           }

                           *(ushort*)( (long)*__n + (long)pauVar37 * 2 ) = uVar10 & 0x7fff | ( ushort )(( uVar61 >> 0x1f ) << 0xf);
                           pauVar37 = (undefined1(*) [16])( (long)*pauVar37 + 1 );
                        }
 while ( pauVar45 != pauVar37 );
                     }

                     iVar63 = iVar63 + 1;
                     puVar28 = (undefined1*)( (long)*pauVar20 + (long)puVar28 );
                     pauVar73 = (undefined1(*) [16])( (long)*pauVar47 + (long)*pauVar73 );
                  }
 while ( param_7 != iVar63 );
                  pauVar14 = (undefined1(*) [16])( (ulong)pauVar14 & 0xffffffff );
               }

            }
 else {
               if (*local_138 != 2) goto LAB_00104f3b;
               if (0 < param_7) {
                  pauVar18 = (undefined1(*) [16])0x0;
                  iVar63 = 0;
                  pauVar73 = (undefined1(*) [16])( *(long*)param_10 + lVar66 );
                  __n = pauVar59;
                  do {
                     uVar36 = (long)( (long)*pauVar18 + *(long*)*pauVar73 ) * (long)pauVar45;
                     if (uVar33 <= uVar36) goto LAB_00105a8b;
                     if (0 < iVar44) {
                        lVar5 = *(long*)( (long)param_2 + lVar66 );
                        lVar25 = 0;
                        do {
                           *(undefined4*)( local_140 + lVar25 + uVar36 ) = *(undefined4*)( (long)*__n + lVar25 + lVar5 );
                           lVar25 = lVar25 + 4;
                        }
 while ( lVar25 != (long)pauVar45 * 4 );
                     }

                     iVar63 = iVar63 + 1;
                     pauVar18 = (undefined1(*) [16])( (long)*pauVar20 + (long)*pauVar18 );
                     __n = (undefined1(*) [16])( (long)*pauVar47 + (long)*__n );
                  }
 while ( param_7 != iVar63 );
               }

            }

         }
 else if (( iVar63 == 0 ) && ( 0 < param_7 )) {
            pauVar18 = (undefined1(*) [16])0x0;
            pauVar73 = (undefined1(*) [16])( *(long*)param_10 + lVar66 );
            iVar63 = 0;
            __n = pauVar59;
            do {
               uVar36 = (long)( (long)*pauVar18 + *(long*)*pauVar73 ) * (long)pauVar45;
               if (uVar33 <= uVar36) {
                  uVar36 = std::__throw_out_of_range_fmt(_LC1, uVar36, uVar33);
                  pauVar20 = pauVar15;
                  goto LAB_00105a77;
               }

               if (0 < iVar44) {
                  lVar5 = *(long*)( (long)param_2 + lVar66 );
                  lVar25 = 0;
                  do {
                     *(undefined4*)( local_140 + lVar25 + uVar36 ) = *(undefined4*)( (long)*__n + lVar25 + lVar5 );
                     lVar25 = lVar25 + 4;
                  }
 while ( lVar25 != (long)pauVar45 * 4 );
               }

               iVar63 = iVar63 + 1;
               pauVar18 = (undefined1(*) [16])( (long)*pauVar20 + (long)*pauVar18 );
               __n = (undefined1(*) [16])( (long)*pauVar47 + (long)*__n );
            }
 while ( param_7 != iVar63 );
         }

         uVar35 = uVar35 + 1;
         local_138 = local_138 + 0xe;
         lVar66 = lVar66 + 8;
      }
 while ( uVar35 < ( ulong )(( lVar16 - lVar38 >> 3 ) * 0x6db6db6db6db6db7) );
   }

   pauVar47 = (undefined1(*) [16])(ulong)(uint)param_3;
   if (param_3 == 0) {
      std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_insert<__gnu_cxx::__normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator < unsigned_char>>> > ( param_1,*(undefined8*)( param_1 + 8 ),local_140,local_120 );
   }
 else {
      if (1 < param_3 - 2U) {
         if (param_3 == 1) {
            __n = (undefined1(*) [16])( local_120 + -(long)local_140 );
            __dest = (undefined1(*) [16])( ( ulong )((long)__n * 3) >> 1 );
            local_158 = __n;
            if (__dest != (undefined1(*) [16])0x0) {
               pauVar18 = (undefined1(*) [16])operator_new((ulong)__dest);
               ( *pauVar18 )[0] = 0;
               pauVar45 = (undefined1(*) [16])( (long)*pauVar18 + 1 );
               pauVar34 = pauVar45;
               if (__dest != (undefined1(*) [16])0x1) {
                  pauVar34 = (undefined1(*) [16])( (long)*__dest + (long)*pauVar18 );
                  memset(pauVar45, 0, (size_t)( (long)__dest[-1] + 0xf ));
                  pauVar47 = pauVar34;
               }

               pauVar45 = pauVar18;
               if (( __n != (undefined1(*) [16])0x0 ) && ( pauVar34 != pauVar18 )) {
                  if ((long)__n < 0) goto LAB_00105a4a;
                  pauVar59 = (undefined1(*) [16])operator_new((ulong)__n);
                  pauVar47 = (undefined1(*) [16])( (long)*pauVar59 + 1 );
                  ( *pauVar59 )[0] = 0;
                  pauVar34 = (undefined1(*) [16])( (long)*__n + (long)*pauVar59 );
                  pauVar15 = pauVar47;
                  if (__n != (undefined1(*) [16])0x1) {
                     memset(pauVar47, 0, (size_t)( (long)__n[-1] + 0xf ));
                     pauVar15 = pauVar34;
                  }

                  pauVar14 = pauVar59;
                  if (pauVar59 != pauVar15) {
                     if (( local_140 < local_120 ) && ( ( *pauVar59 )[0] = local_140 + 1 < local_120 )) {
                        uVar33 = 0;
                        do {
                           *(undefined1*)( (long)*pauVar59 + uVar33 + ( ( ulong )((long)*__n + 1) >> 1 ) ) = local_140[uVar33 * 2 + 1];
                           if (uVar33 == ( ulong )(local_120 + ( -1 - (long)local_140 )) >> 1) break;
                           *(undefined1*)( (long)*pauVar59 + uVar33 + 1 ) = local_140[uVar33 * 2 + 2];
                           bVar74 = ( ulong )(local_120 + ( -2 - (long)local_140 )) >> 1 != uVar33;
                           uVar33 = uVar33 + 1;
                        }
 while ( bVar74 );
                     }

                     pauVar20 = pauVar47;
                     cVar2 = ( *pauVar59 )[0];
                     if (pauVar47 < pauVar34) {
                        do {
                           cVar3 = ( *pauVar20 )[0];
                           pauVar73 = (undefined1(*) [16])( (long)*pauVar20 + 1 );
                           ( *pauVar20 )[0] = ( cVar3 - cVar2 ) + -0x80;
                           pauVar20 = pauVar73;
                           cVar2 = cVar3;
                        }
 while ( pauVar73 != pauVar34 );
                     }

                     pauVar73 = (undefined1(*) [16])( (long)*pauVar59 + (long)(int)__n );
                     if (pauVar59 < pauVar73) goto LAB_0010526a;
                     LAB_00105c26:operator_delete(pauVar59, (ulong)__n);
                     if (param_11 != (vector*)0x0) {
                        std::__cxx11::string::append((string*)param_11, "RLE compresssion failed.\n");
                     }

                     uVar46 = 0;
                     operator_delete(pauVar18, (ulong)__dest);
                     goto LAB_00104e94;
                  }

               }

            }

            goto LAB_00105b55;
         }

         if (param_3 != 4) {
            if (( param_11 == (vector*)0x0 ) || ( param_3 != 0x80 )) {
               LAB_00104e92:uVar46 = 0;
            }
 else {
               uVar46 = 0;
               std::__cxx11::string::append((string*)param_11, "ZFP compression is disabled in this build.\n");
            }

            goto LAB_00104e94;
         }

         local_90 = (undefined1(*) [16])( local_120 + -(long)local_140 );
         local_78 = (undefined1(*) [16])( ulong )((int)local_90 * 2 + 0x2000);
         pauVar45 = local_90;
         pauVar73 = local_78;
         local_158 = (undefined1(*) [16])param_2;
         if (local_78 == (undefined1(*) [16])0x0) goto LAB_00105b55;
         local_c0 = (undefined1(*) [16])operator_new((ulong)local_78);
         ( *local_c0 )[0] = 0;
         memset((undefined1*)( (long)*local_c0 + 1 ), 0, (size_t)( (long)local_78[-1] + 0xf ));
         local_158 = (undefined1(*) [16])param_2;
         if (local_90 == (undefined1(*) [16])0x0) goto LAB_00105b55;
         local_d0 = (byte*)operator_new(0x2000);
         pauVar73 = (undefined1(*) [16])( local_d0 + 0x2008 );
         *local_d0 = 0;
         local_d0[1] = 0;
         local_d0[2] = 0;
         local_d0[3] = 0;
         local_d0[4] = 0;
         local_d0[5] = 0;
         local_d0[6] = 0;
         local_d0[7] = 0;
         local_d0[8] = 0;
         local_d0[0x1ff8] = 0;
         local_d0[0x1ff9] = 0;
         local_d0[0x1ffa] = 0;
         local_d0[0x1ffb] = 0;
         local_d0[0x1ffc] = 0;
         local_d0[0x1ffd] = 0;
         local_d0[0x1ffe] = 0;
         local_d0[0x1fff] = 0;
         puVar60 = (undefined8*)( ( ulong )(local_d0 + 9) & 0xfffffffffffffff8 );
         for (uVar33 = ( ulong )(( (int)local_d0 - (int)(undefined8*)( ( ulong )(local_d0 + 9) & 0xfffffffffffffff8 ) ) + 0x2000U >> 3); uVar33 != 0; uVar33 = uVar33 - 1) {
            *puVar60 = 0;
            puVar60 = puVar60 + (ulong)bVar75 * -2 + 1;
         }

         pauVar47 = (undefined1(*) [16])( (ulong)local_90 >> 1 );
         if ((long)local_90 < 0) goto LAB_00105a4a;
         pauVar45 = pauVar47;
         pauVar18 = __dest;
         if (pauVar47 == (undefined1(*) [16])0x0) goto LAB_00105aa2;
         pauVar45 = (undefined1(*) [16])( (long)pauVar47 * 2 );
         __n = (undefined1(*) [16])operator_new((ulong)pauVar45);
         local_a0 = (undefined1(*) [16])( (long)*pauVar45 + (long)*__n );
         pauVar18 = (undefined1(*) [16])( (long)*__n + 2 );
         *(undefined2*)*__n = 0;
         pauVar34 = pauVar18;
         if (( pauVar47 != (undefined1(*) [16])0x1 ) && ( pauVar34 = pauVar18 != local_a0 )) {
            memset(pauVar18, 0, (size_t)( (long)pauVar45[-1] + 0xe ));
         }

         goto LAB_00105455;
      }

      pauVar45 = (undefined1(*) [16])( local_120 + -(long)local_140 );
      pauVar47 = (undefined1(*) [16])compressBound(pauVar45);
      if ((long)pauVar47 < 0) goto LAB_00105a4a;
      __n = pauVar45;
      if (pauVar47 == (undefined1(*) [16])0x0) goto LAB_00105b55;
      __dest = (undefined1(*) [16])operator_new((ulong)pauVar47);
      ( *__dest )[0] = 0;
      pauVar18 = (undefined1(*) [16])( (long)*__dest + 1 );
      pauVar34 = pauVar18;
      if (pauVar47 != (undefined1(*) [16])0x1) {
         pauVar34 = (undefined1(*) [16])( (long)*pauVar47 + (long)*__dest );
         memset(pauVar18, 0, (size_t)( (long)pauVar47[-1] + 0xf ));
         pauVar14 = pauVar34;
      }

      if (( pauVar45 == (undefined1(*) [16])0x0 ) || ( pauVar34 == __dest )) goto LAB_00105b55;
      if ((long)pauVar45 < 0) goto LAB_00105a4a;
      pauVar14 = (undefined1(*) [16])operator_new((ulong)pauVar45);
      pauVar18 = (undefined1(*) [16])( (long)*pauVar14 + 1 );
      ( *pauVar14 )[0] = 0;
      pauVar20 = (undefined1(*) [16])( (long)*pauVar45 + (long)*pauVar14 );
      pauVar34 = pauVar18;
      local_158 = (undefined1(*) [16])param_2;
      if (pauVar45 != (undefined1(*) [16])0x1) {
         pauVar18 = (undefined1(*) [16])memset(pauVar18, 0, (size_t)( (long)pauVar45[-1] + 0xf ));
         pauVar34 = pauVar20;
         local_158 = pauVar20;
      }

      if (pauVar14 == pauVar34) goto LAB_00105b55;
      if (( local_140 < local_120 ) && ( ( *pauVar14 )[0] = local_140 + 1 < local_120 )) {
         uVar33 = 0;
         do {
            *(undefined1*)( (long)*pauVar14 + uVar33 + ( ( ulong )((long)*pauVar45 + 1) >> 1 ) ) = local_140[uVar33 * 2 + 1];
            if (( ulong )(local_120 + ( -1 - (long)local_140 )) >> 1 == uVar33) break;
            *(undefined1*)( (long)*pauVar14 + uVar33 + 1 ) = local_140[uVar33 * 2 + 2];
            bVar74 = uVar33 != ( ulong )(local_120 + ( -2 - (long)local_140 )) >> 1;
            uVar33 = uVar33 + 1;
         }
 while ( bVar74 );
      }

      cVar2 = ( *pauVar14 )[0];
      if (pauVar18 < pauVar20) {
         do {
            cVar3 = ( *pauVar18 )[0];
            pauVar73 = (undefined1(*) [16])( (long)*pauVar18 + 1 );
            ( *pauVar18 )[0] = ( cVar3 - cVar2 ) + -0x80;
            pauVar18 = pauVar73;
            cVar2 = cVar3;
         }
 while ( pauVar73 != pauVar20 );
      }

      local_48 = (undefined1(*) [16])compressBound(pauVar45);
      iVar63 = compress(__dest, &local_48, pauVar14, pauVar45);
      pauVar20 = local_48;
      if (iVar63 != 0) {
         operator_delete(pauVar14, (ulong)pauVar45);
         if (param_11 != (vector*)0x0) {
            std::__cxx11::string::append((string*)param_11, "Zip compresssion failed.\n");
         }

         uVar46 = 0;
         operator_delete(__dest, (ulong)pauVar47);
         goto LAB_00104e94;
      }

      if (local_48 < pauVar45) {
         operator_delete(pauVar14, (ulong)pauVar45);
         pauVar45 = pauVar20;
      }
 else {
         memcpy(__dest, local_140, (size_t)pauVar45);
         operator_delete(pauVar14, (ulong)pauVar45);
      }

      std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_insert<__gnu_cxx::__normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator < unsigned_char>>> > ( param_1,*(undefined8*)( param_1 + 8 ),__dest,(undefined1*)( (long)*__dest + ( (ulong)pauVar45 & 0xffffffff ) ) );
      operator_delete(__dest, (ulong)pauVar47);
   }

   goto LAB_00104ef4;
   LAB_00105848:do {
      uVar58 = 1;
      uVar51 = 2;
      do {
         iVar32 = uVar58 * iVar63;
         puVar70 = puVar40;
         if (puVar40 <= puVar40 + (int)( ( uVar67 - uVar51 ) * iVar44 )) {
            lVar16 = (long)(int)( uVar58 * iVar44 );
            lVar38 = (long)iVar32;
            puVar48 = puVar40 + (int)( ( uVar61 - uVar51 ) * iVar63 );
            puVar69 = puVar40;
            do {
               for (; puVar70 <= puVar48; puVar70 = puVar70 + (int)( iVar63 * uVar51 )) {
                  uVar72 = puVar70[lVar38];
                  uVar31 = *puVar70;
                  uVar11 = puVar70[lVar38 + lVar16];
                  uVar4 = puVar70[lVar16];
                  if (uVar10 < 0x4000) {
                     iVar57 = (int)(short)uVar72 + (int)(short)uVar31 >> 1;
                     iVar64 = (int)(short)uVar11 + (int)(short)uVar4 >> 1;
                     iVar53 = iVar57 - iVar64;
                     uVar62 = ( ushort )(iVar64 + iVar57 >> 1);
                     iVar57 = ( ( (uint)uVar31 - (uint)uVar72 ) - (uint)uVar4 ) + (uint)uVar11;
                     uVar72 = ( ushort )((int)(short)( uVar4 - uVar11 ) + (int)(short)( (uint)uVar31 - (uint)uVar72 ) >> 1);
                  }
 else {
                     uVar52 = (int)( (uint)uVar72 + ( uint )(ushort)(uVar31 + 0x8000) ) >> 1;
                     iVar57 = ( uint )(ushort)(uVar31 + 0x8000) - (uint)uVar72;
                     if (iVar57 < 0) {
                        uVar52 = uVar52 + 0x8000 & 0xffff;
                     }

                     uVar65 = (int)( ( uint )(ushort)(uVar4 + 0x8000) + (uint)uVar11 ) >> 1;
                     uVar12 = ( uint )(ushort)(uVar4 + 0x8000) - (uint)uVar11;
                     if ((int)uVar12 < 0) {
                        uVar65 = uVar65 + 0x8000 & 0xffff;
                     }

                     uVar52 = uVar52 + 0x8000 & 0xffff;
                     uVar72 = ( ushort )((int)( uVar52 + uVar65 ) >> 1);
                     iVar53 = uVar52 - uVar65;
                     uVar62 = uVar72 + 0x8000;
                     if (-1 < iVar53) {
                        uVar62 = uVar72;
                     }

                     uVar52 = iVar57 + 0x8000U & 0xffff;
                     uVar12 = uVar12 & 0xffff;
                     uVar72 = ( ushort )((int)( uVar12 + uVar52 ) >> 1);
                     iVar57 = uVar52 - uVar12;
                     if (iVar57 < 0) {
                        uVar72 = uVar72 + 0x8000;
                     }

                  }

                  *puVar70 = uVar62;
                  puVar70[lVar16] = (ushort)iVar53;
                  puVar70[lVar38] = uVar72;
                  puVar70[lVar38 + lVar16] = (ushort)iVar57;
               }

               if (( uVar61 & uVar58 ) != 0) {
                  uVar72 = *puVar70;
                  uVar31 = puVar70[lVar16];
                  if (uVar10 < 0x4000) {
                     iVar53 = (int)(short)uVar72 - (int)(short)uVar31;
                     uVar11 = ( ushort )((int)(short)uVar72 + (int)(short)uVar31 >> 1);
                  }
 else {
                     uVar11 = ( ushort )((int)( ( uint )(ushort)(uVar72 + 0x8000) + (uint)uVar31 ) >> 1);
                     iVar53 = ( uint )(ushort)(uVar72 + 0x8000) - (uint)uVar31;
                     if (iVar53 < 0) {
                        uVar11 = uVar11 + 0x8000;
                     }

                  }

                  puVar70[lVar16] = (ushort)iVar53;
                  *puVar70 = uVar11;
               }

               puVar70 = puVar69 + (int)( iVar44 * uVar51 );
               puVar48 = puVar48 + (int)( iVar44 * uVar51 );
               puVar69 = puVar70;
            }
 while ( puVar70 <= puVar40 + (int)( ( uVar67 - uVar51 ) * iVar44 ) );
         }

         if (( ( uVar67 & uVar58 ) != 0 ) && ( puVar48 = puVar70 <= puVar48 )) {
            do {
               uVar72 = puVar70[iVar32];
               iVar53 = (int)(short)*puVar70;
               if (uVar10 < 0x4000) {
                  iVar57 = iVar53 - (short)uVar72;
                  uVar31 = ( ushort )((short)uVar72 + iVar53 >> 1);
               }
 else {
                  uVar58 = iVar53 - 0x8000U & 0xffff;
                  uVar31 = ( ushort )((int)( uVar72 + uVar58 ) >> 1);
                  iVar57 = uVar58 - uVar72;
                  if (iVar57 < 0) {
                     uVar31 = uVar31 + 0x8000;
                  }

               }

               puVar70[iVar32] = (ushort)iVar57;
               *puVar70 = uVar31;
               puVar70 = puVar70 + (int)( iVar63 * uVar51 );
            }
 while ( puVar70 <= puVar48 );
         }

         uVar52 = uVar51 * 2;
         iVar32 = uVar51 * -2;
         uVar58 = uVar51;
         uVar51 = uVar52;
      }
 while ( SBORROW4(uVar27, uVar52) == (int)( uVar27 + iVar32 ) < 0 );
      puVar40 = puVar40 + 1;
   }
 while ( puVar40 != puVar1 );
   LAB_00105dc0:uVar35 = uVar35 + 1;
   pauVar20 = pauVar20 + 2;
   if (uVar33 <= uVar35) goto LAB_00105dd9;
   goto LAB_001057f0;
   LAB_00105a77:std::__throw_out_of_range_fmt(_LC1, uVar36, uVar33);
   uVar36 = extraout_RDX;
   pauVar14 = pauVar71;
   LAB_00105a8b:std::__throw_out_of_range_fmt(_LC1, uVar36, uVar33);
   local_c0 = __dest;
   LAB_00105aa2:local_a0 = (undefined1(*) [16])0x0;
   __n = (undefined1(*) [16])0x0;
   pauVar34 = (undefined1(*) [16])0x0;
   __dest = pauVar18;
   LAB_00105455:lVar16 = *(long*)( (long)*__dest + 8 ) - *(long*)*__dest;
   lVar38 = lVar16 >> 3;
   local_158 = (undefined1(*) [16])( lVar38 * 0x6db6db6db6db6db7 );
   if (lVar16 < 0) {
      LAB_00105a4a:/* WARNING: Subroutine does not return */std::__throw_length_error("cannot create std::vector larger than max_size()");
   }

   if (local_158 == (undefined1(*) [16])0x0) {
      local_b8 = (undefined1(*) [16])0x0;
      local_c8 = (undefined1(*) [16])0x0;
      pauVar47 = (undefined1(*) [16])0x0;
      local_158 = (undefined1(*) [16])param_2;
   }
 else {
      local_c8 = (undefined1(*) [16])operator_new(lVar38 * -0x4924924924924920);
      pauVar45 = local_c8 + lVar38 * -0x492492492492492;
      *local_c8 = (undefined1[16])0x0;
      pauVar47 = local_c8 + 2;
      local_c8[1] = (undefined1[16])0x0;
      pauVar18 = pauVar47;
      local_b8 = pauVar45;
      if (local_158 != (undefined1(*) [16])0x1) {
         for (; pauVar47 = pauVar45,pauVar18 != pauVar45; pauVar18 = pauVar18 + 2) {
            uVar46 = *(undefined8*)( (long)*local_c8 + 8 );
            *(undefined8*)*pauVar18 = *(undefined8*)*local_c8;
            *(undefined8*)( (long)*pauVar18 + 8 ) = uVar46;
            uVar46 = *(undefined8*)( (long)local_c8[1] + 8 );
            *(undefined8*)pauVar18[1] = *(undefined8*)local_c8[1];
            *(undefined8*)( (long)pauVar18[1] + 8 ) = uVar46;
         }

      }

   }

   if (pauVar34 == __n) {
      LAB_00105b55:pauVar59 = (undefined1(*) [16])0x0;
      pauVar18 = (undefined1(*) [16])std::__throw_out_of_range_fmt(_LC1, 0, 0);
      do {
         pauVar34 = pauVar18;
         if (0x7e < (long)pauVar20 - (long)pauVar59) break;
         LAB_00105b7c:pauVar20 = pauVar47;
         pauVar47 = (undefined1(*) [16])( (long)*pauVar20 + 1 );
         pauVar34 = pauVar18;
      }
 while ( ( pauVar20 < pauVar73 ) && ( ( ( ( pauVar73 <= pauVar47 || ( ( *pauVar20 )[0] != ( *pauVar47 )[0] ) ) || ( pauVar73 <= (undefined1(*) [16])( (long)*pauVar20 + 2 ) ) ) || ( ( *pauVar47 )[0] != *(char*)( (long)*pauVar20 + 2 ) ) ) ) );
      pauVar18 = (undefined1(*) [16])( (long)*pauVar34 + 1 );
      ( *pauVar34 )[0] = (char)pauVar59 - (char)pauVar20;
      if (pauVar59 < pauVar20) {
         pvVar23 = memcpy(pauVar18, pauVar59, (long)pauVar20 - (long)pauVar59);
         pauVar18 = (undefined1(*) [16])( (long)pvVar23 + ( (long)pauVar20 - (long)pauVar59 ) );
         pauVar59 = pauVar20;
      }

      do {
         if (pauVar73 <= pauVar59) {
            iVar63 = (int)pauVar18 - (int)pauVar45;
            pauVar18 = pauVar45;
            pauVar59 = pauVar14;
            if (iVar63 < 1) goto LAB_00105c26;
            if ((undefined1(*) [16])(long)iVar63 < __n) {
               operator_delete(pauVar14, (ulong)__n);
               local_158 = (undefined1(*) [16])(long)iVar63;
            }
 else {
               memcpy(pauVar45, local_140, (size_t)__n);
               operator_delete(pauVar14, (ulong)__n);
            }

            std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_insert<__gnu_cxx::__normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator < unsigned_char>>> > ( param_1,*(undefined8*)( param_1 + 8 ),pauVar45,(undefined1*)( (long)*pauVar45 + (long)*local_158 ) );
            operator_delete(pauVar45, (ulong)__dest);
            goto LAB_00104ef4;
         }

         LAB_0010526a:lVar16 = (long)pauVar47 - (long)pauVar59;
         pauVar20 = pauVar47;
         if (pauVar47 < pauVar73) {
            do {
               pauVar47 = (undefined1(*) [16])( (long)*pauVar20 + 1 );
               lVar16 = (long)pauVar20 - (long)pauVar59;
               if (( *pauVar59 )[0] != ( *pauVar20 )[0]) goto LAB_001052a8;
               if (0x7f < lVar16) goto LAB_001052b2;
               pauVar20 = pauVar47;
            }
 while ( pauVar73 != pauVar47 );
            lVar16 = (long)pauVar73 - (long)pauVar59;
         }

         LAB_001052a8:pauVar47 = pauVar20;
         if (lVar16 < 3) goto LAB_00105b7c;
         LAB_001052b2:pauVar47 = (undefined1(*) [16])( (long)*pauVar20 + 1 );
         *(ushort*)*pauVar18 = CONCAT11(( *pauVar59 )[0], (char)lVar16 + -1);
         pauVar18 = (undefined1(*) [16])( (long)*pauVar18 + 2 );
         pauVar59 = pauVar20;
      }
 while ( true );
   }

   uVar33 = (long)pauVar47 - (long)local_c8 >> 5;
   if (pauVar47 != local_c8) {
      uVar35 = 0;
      iVar63 = param_7 * (int)pauVar14;
      piVar39 = (int*)( *(long*)*__dest + 0x24 );
      pauVar45 = local_c8;
      pauVar20 = __n;
      do {
         *(int*)pauVar45[1] = (int)pauVar14;
         *(int*)( (long)pauVar45[1] + 4 ) = param_7;
         iVar44 = *piVar39;
         *(undefined1(**) [16])*pauVar45 = pauVar20;
         *(undefined1(**) [16])( (long)*pauVar45 + 8 ) = pauVar20;
         iVar32 = iVar63;
         if (iVar44 != 1) {
            iVar44 = 2;
            iVar32 = iVar63 * 2;
         }

         uVar35 = uVar35 + 1;
         *(int*)( (long)pauVar45[1] + 0xc ) = iVar44;
         pauVar20 = (undefined1(*) [16])( (long)*pauVar20 + (long)iVar32 * 2 );
         pauVar45 = pauVar45 + 2;
         piVar39 = piVar39 + 0xe;
      }
 while ( uVar35 < uVar33 );
   }

   iVar63 = 0;
   puVar28 = local_140;
   if (0 < param_7) {
      do {
         uVar35 = 0;
         plVar19 = (long*)( (long)*local_c8 + 8 );
         puVar68 = puVar28;
         if (pauVar47 != local_c8) {
            do {
               uVar35 = uVar35 + 1;
               sVar49 = (long)( (int)plVar19[1] * *(int*)( (long)plVar19 + 0x14 ) ) * 2;
               puVar68 = puVar28 + sVar49;
               memcpy((void*)*plVar19, puVar28, sVar49);
               *plVar19 = *plVar19 + sVar49;
               plVar19 = plVar19 + 4;
               puVar28 = puVar68;
            }
 while ( uVar35 < uVar33 );
         }

         iVar63 = iVar63 + 1;
         puVar28 = puVar68;
      }
 while ( param_7 != iVar63 );
   }

   for (int i = 0; i < 8; i++) {
      local_d0[i] = 0;
   }

   *(undefined8*)pauVar73[-1] = 0;
   puVar60 = (undefined8*)( ( ulong )(local_d0 + 8) & 0xfffffffffffffff8 );
   for (uVar35 = ( ulong )(( (int)local_d0 - (int)(undefined8*)( ( ulong )(local_d0 + 8) & 0xfffffffffffffff8 ) ) + 0x2000U >> 3); uVar35 != 0; uVar35 = uVar35 - 1) {
      *puVar60 = 0;
      puVar60 = puVar60 + (ulong)bVar75 * -2 + 1;
   }

   local_e0 = (int)( (long)pauVar34 - (long)__n >> 1 );
   if (0 < local_e0) {
      pauVar20 = __n;
      do {
         puVar60 = (undefined8*)*pauVar20;
         pauVar20 = (undefined1(*) [16])( (long)*pauVar20 + 2 );
         local_d0[*(ushort*)puVar60 >> 3] = local_d0[*(ushort*)puVar60 >> 3] | ( byte )(1 << ( ( byte ) * (ushort*)puVar60 & 7 ));
      }
 while ( pauVar20 != (undefined1(*) [16])( (long)*__n + ( ulong )(local_e0 - 1) * 2 + 2 ) );
   }

   uVar35 = 0;
   uVar36 = 0;
   uVar61 = 0x1fff;
   *local_d0 = *local_d0 & 0xfe;
   do {
      if (local_d0[uVar35] != 0) {
         uVar67 = (uint)uVar35;
         if ((int)uVar67 < (int)( uVar61 & 0xffff )) {
            uVar61 = uVar67;
         }

         if ((int)( (uint)uVar36 & 0xffff ) < (int)uVar67) {
            uVar36 = uVar35 & 0xffffffff;
         }

      }

      uVar35 = uVar35 + 1;
   }
 while ( uVar35 != 0x2000 );
   psVar17 = (short*)operator_new(0x20000);
   *psVar17 = 0;
   memset(psVar17 + 1, 0, 0x1fffe);
   lVar16 = 0;
   sVar30 = 0;
   do {
      if (lVar16 == 0) {
         *psVar17 = sVar30;
         lVar16 = 1;
         sVar30 = sVar30 + 1;
      }

      sVar50 = 0;
      if (( local_d0[(int)(uint)lVar16 >> 3] >> ( (uint)lVar16 & 7 ) & 1 ) != 0) {
         sVar50 = sVar30;
         sVar30 = sVar30 + 1;
      }

      psVar17[lVar16] = sVar50;
      lVar16 = lVar16 + 1;
   }
 while ( lVar16 != 0x10000 );
   uVar10 = sVar30 - 1;
   if (0 < local_e0) {
      pauVar20 = __n;
      do {
         pauVar45 = (undefined1(*) [16])( (long)*pauVar20 + 2 );
         *(short*)*pauVar20 = psVar17[*(ushort*)*pauVar20];
         pauVar20 = pauVar45;
      }
 while ( pauVar45 != (undefined1(*) [16])( (long)*__n + ( ulong )(local_e0 - 1) * 2 + 2 ) );
   }

   *(ushort*)*local_c0 = (ushort)uVar61;
   local_d8 = (int*)( (long)*local_c0 + 4 );
   *(ushort*)( (long)*local_c0 + 2 ) = (ushort)uVar36;
   if ((ushort)uVar61 <= (ushort)uVar36) {
      sVar49 = (size_t)(int)( ( ( (uint)uVar36 & 0xffff ) - ( uVar61 & 0xffff ) ) + 1 );
      pvVar23 = memcpy(local_d8, local_d0 + ( uVar61 & 0xffff ), sVar49);
      local_d8 = (int*)( (long)pvVar23 + sVar49 );
   }

   uVar35 = 0;
   pauVar20 = local_c8;
   if (pauVar47 != local_c8) {
      LAB_001057f0:iVar63 = *(int*)( (long)pauVar20[1] + 0xc );
      if (0 < iVar63) {
         uVar61 = *(uint*)pauVar20[1];
         puVar40 = *(ushort**)*pauVar20;
         iVar44 = uVar61 * iVar63;
         uVar67 = *(uint*)( (long)pauVar20[1] + 4 );
         uVar27 = uVar67;
         if ((int)uVar61 <= (int)uVar67) {
            uVar27 = uVar61;
         }

         puVar1 = puVar40 + iVar63;
         do {
            if (1 < (int)uVar27) goto LAB_00105848;
            puVar40 = puVar40 + 1;
         }
 while ( puVar1 != puVar40 );
      }

      goto LAB_00105dc0;
   }

   LAB_00105dd9:iVar44 = 0;
   *local_d8 = 0;
   iVar63 = (int)local_d8 + 4;
   if (local_e0 != 0) {
      plVar19 = (long*)operator_new(0x80008);
      memset(plVar19, 0, 0x80008);
      if (0 < local_e0) {
         pauVar20 = __n;
         do {
            puVar60 = (undefined8*)*pauVar20;
            pauVar20 = (undefined1(*) [16])( (long)*pauVar20 + 2 );
            plVar19[*(ushort*)puVar60] = plVar19[*(ushort*)puVar60] + 1;
         }
 while ( (undefined1(*) [16])( (long)*__n + ( ulong )(local_e0 - 1) * 2 + 2 ) != pauVar20 );
      }

      puVar21 = (undefined4*)operator_new(0x40004);
      *puVar21 = 0;
      memset(puVar21 + 1, 0, 0x40000);
      plVar22 = (long*)operator_new(0x80008);
      *plVar22 = 0;
      memset(plVar22 + 1, 0, 0x80000);
      lVar16 = 1;
      if (*plVar19 == 0) {
         do {
            lVar38 = lVar16;
            lVar16 = lVar38 + 1;
         }
 while ( plVar19[lVar38] == 0 );
         local_138._0_4_ = (int)lVar38;
         local_128 = ( undefined1 )((ulong)lVar38 >> 8);
         local_e8 = (undefined1)lVar38;
         local_110 = ( undefined1 )((ulong)lVar38 >> 0x10);
         if ((int)local_138 < 0x10001) goto LAB_00105ed0;
         local_f0 = plVar19 + 1;
         plVar19[1] = 1;
         iVar32 = 1;
         local_108 = ( undefined1 )((ulong)lVar38 >> 0x18);
         *plVar22 = (long)local_f0;
         local_7c = 0;
         uVar9 = 0;
         uVar7 = 0;
         uVar43 = 1;
         iVar53 = 1;
      }
 else {
         local_110 = 0;
         local_128 = 0;
         local_e8 = 0;
         local_138._0_4_ = 0;
         LAB_00105ed0:uVar33 = (ulong)(int)local_138;
         uVar35 = 0;
         iVar44 = 0;
         plVar29 = plVar19 + uVar33;
         do {
            lVar16 = *plVar29;
            puVar21[uVar33] = (int)uVar33;
            if (lVar16 != 0) {
               lVar16 = (long)iVar44;
               iVar44 = iVar44 + 1;
               plVar22[lVar16] = (long)plVar29;
               uVar35 = uVar33 & 0xffffffff;
            }

            uVar33 = uVar33 + 1;
            plVar29 = plVar29 + 1;
         }
 while ( (int)uVar33 < 0x10001 );
         iVar53 = (int)uVar35 + 1;
         iVar32 = iVar44 + 1;
         local_f0 = plVar19 + iVar53;
         uVar43 = (undefined1)iVar53;
         plVar22[iVar44] = (long)local_f0;
         lVar16 = (long)iVar44 * 8 + 8;
         uVar7 = ( undefined1 )((uint)iVar53 >> 8);
         uVar9 = ( undefined1 )((uint)iVar53 >> 0x10);
         local_7c = ( undefined1 )((uint)iVar53 >> 0x18);
         *local_f0 = 1;
         if (8 < lVar16) {
            lVar16 = lVar16 >> 3;
            for (lVar38 = lVar16 + -2 >> 1; std::__adjust_heap<long_long**,long,long_long*,__gnu_cxx::__ops::_Iter_comp_iter<tinyexr::FHeapCompare>>(plVar22, lVar38, lVar16, plVar22[lVar38]),lVar38 != 0; lVar38 = lVar38 + -1) {}
         }

         local_108 = 0;
      }

      __s = (longlong*)operator_new(0x80008);
      memset(__s, 0, 0x80008);
      if (1 < iVar32) {
         lVar38 = (long)iVar32;
         plVar29 = plVar22 + lVar38 + -2;
         lVar16 = lVar38 * 8 + -8;
         do {
            lVar24 = *plVar22;
            plVar29[1] = lVar24;
            uVar35 = lVar24 - (long)plVar19 >> 3;
            std::__adjust_heap<long_long**,long,long_long*,__gnu_cxx::__ops::_Iter_comp_iter<tinyexr::FHeapCompare>>();
            uVar61 = (uint)uVar35;
            uVar35 = uVar35 & 0xffffffff;
            lVar24 = ( lVar16 >> 3 ) + -1;
            uVar33 = *plVar22 - (long)plVar19 >> 3;
            iVar44 = (int)uVar33;
            if (lVar16 == 8) {
               plVar55 = (long*)*plVar29;
               plVar19[iVar44] = plVar19[iVar44] + plVar19[(int)uVar61];
               plVar41 = plVar22;
            }
 else {
               *plVar29 = *plVar22;
               std::__adjust_heap<long_long**,long,long_long*,__gnu_cxx::__ops::_Iter_comp_iter<tinyexr::FHeapCompare>>();
               plVar55 = (long*)*plVar29;
               lVar66 = ( lVar16 >> 3 ) + -2;
               plVar19[iVar44] = plVar19[iVar44] + plVar19[(int)uVar61];
               lVar66 = lVar66 - ( lVar66 >> 0x3f );
               plVar41 = plVar22;
               if (lVar24 != 0) {
                  lVar5 = *plVar55;
                  do {
                     lVar25 = lVar66 >> 1;
                     plVar6 = (long*)plVar22[lVar25];
                     plVar41 = plVar22 + lVar24;
                     if (*plVar6 <= lVar5) break;
                     plVar22[lVar24] = (long)plVar6;
                     lVar66 = ( lVar25 + -1 ) - ( lVar25 + -1 >> 0x3f );
                     plVar41 = plVar22 + lVar25;
                     lVar24 = lVar25;
                  }
 while ( lVar25 != 0 );
               }

            }

            uVar33 = uVar33 & 0xffffffff;
            *plVar41 = (long)plVar55;
            while (true) {
               uVar67 = (uint)uVar33;
               lVar24 = __s[(int)uVar67] + 1;
               __s[(int)uVar67] = lVar24;
               if (0x3a < lVar24) goto LAB_0010635e;
               uVar27 = puVar21[(int)uVar67];
               if (uVar67 == uVar27) break;
               uVar33 = (ulong)uVar27;
            }
;
            puVar21[(int)uVar67] = uVar61;
            while (true) {
               uVar61 = (uint)uVar35;
               lVar24 = __s[(int)uVar61] + 1;
               __s[(int)uVar61] = lVar24;
               if (0x3a < lVar24) goto LAB_0010635e;
               if (uVar61 == puVar21[(int)uVar61]) break;
               uVar35 = (ulong)(uint)puVar21[(int)uVar61];
            }
;
            plVar29 = plVar29 + -1;
            lVar16 = lVar16 + -8;
         }
 while ( ( lVar38 - ( ulong )(iVar32 - 2) ) * 8 + -0x10 != lVar16 );
      }

      hufCanonicalCodeTable(__s);
      memcpy(plVar19, __s, 0x80008);
      LAB_0010635e:operator_delete(__s, 0x80008);
      operator_delete(plVar22, 0x80008);
      operator_delete(puVar21, 0x40004);
      piVar39 = local_d8 + 6;
      if (iVar53 < (int)local_138) {
         local_158 = (undefined1(*) [16])0x0;
         local_148 = 0;
         local_138 = (int*)0x0;
         local_130 = 0;
      }
 else {
         uVar33 = 0;
         piVar56 = piVar39;
         iVar44 = 0;
         do {
            iVar32 = (int)local_138 + 1;
            if (( ( plVar19[(int)local_138] & 0x3fU ) == 0 ) && ( (int)local_138 < iVar53 )) {
               lVar16 = (long)iVar32;
               iVar57 = 1;
               do {
                  iVar32 = (int)lVar16;
                  if (( *(byte*)( plVar19 + lVar16 ) & 0x3f ) != 0) {
                     if (iVar57 != 1) goto LAB_001065cf;
                     goto LAB_001063b0;
                  }

                  iVar57 = iVar57 + 1;
                  lVar16 = lVar16 + 1;
               }
 while ( iVar32 < iVar53 && iVar57 < 0x105 );
               iVar32 = iVar32 + 1;
               LAB_001065cf:iVar64 = iVar44 + 6;
               if (iVar57 < 6) {
                  uVar33 = uVar33 << 6 | (long)( iVar57 + 0x39 );
                  iVar57 = iVar64;
                  if (1 < iVar44) goto LAB_001063c0;
               }
 else {
                  uVar35 = uVar33 << 6 | 0x3f;
                  if (iVar64 < 8) {
                     uVar33 = uVar35 << 8 | (long)( iVar57 + -6 );
                     iVar57 = iVar44 + 0xe;
                     if (iVar44 + 0xe < 8) goto LAB_001063d1;
                  }
 else {
                     iVar64 = iVar44 + -2;
                     uVar33 = uVar35 << 8 | (long)( iVar57 + -6 );
                     *(char*)piVar56 = (char)( (long)uVar35 >> ( (byte)iVar64 & 0x3f ) );
                     piVar56 = (int*)( (long)piVar56 + 1 );
                  }

                  *(char*)piVar56 = (char)( (long)uVar33 >> ( (byte)iVar64 & 0x3f ) );
                  piVar56 = (int*)( (long)piVar56 + 1 );
                  iVar57 = iVar64;
               }

            }
 else {
               LAB_001063b0:uVar33 = uVar33 << 6 | ( ulong )((uint)plVar19[(int)local_138] & 0x3f);
               iVar57 = iVar44 + 6;
               if (7 < iVar44 + 6) {
                  LAB_001063c0:*(char*)piVar56 = (char)( (long)uVar33 >> ( ( byte )(iVar44 + -2) & 0x3f ) );
                  piVar56 = (int*)( (long)piVar56 + 1 );
                  iVar57 = iVar44 + -2;
               }

            }

            LAB_001063d1:iVar44 = iVar57;
            local_138._0_4_ = iVar32;
         }
 while ( iVar32 <= iVar53 );
         if (iVar57 < 1) {
            uVar33 = (long)piVar56 - (long)piVar39;
            local_138 = (int*)( uVar33 >> 8 & 0xff );
            local_130 = uVar33 & 0xff;
            local_148 = uVar33 >> 0x10 & 0xff;
            local_158 = (undefined1(*) [16])( uVar33 >> 0x18 & 0xff );
            piVar39 = piVar56;
         }
 else {
            *(char*)piVar56 = (char)( uVar33 << ( 8U - (char)iVar57 & 0x3f ) );
            uVar33 = ( (long)piVar56 + 1 ) - (long)piVar39;
            local_138 = (int*)( uVar33 >> 8 & 0xff );
            local_130 = uVar33 & 0xff;
            local_148 = uVar33 >> 0x10 & 0xff;
            local_158 = (undefined1(*) [16])( uVar33 >> 0x18 & 0xff );
            piVar39 = (int*)( (long)piVar56 + 1 );
         }

      }

      uVar33 = ( ulong ) * (ushort*)*__n;
      piVar56 = piVar39;
      if (local_e0 < 2) {
         lVar16 = plVar19[uVar33];
         uVar35 = 0;
         iVar32 = -1;
         iVar44 = 0;
         uVar61 = (uint)lVar16 & 0x3f;
         LAB_001067ac:do {
            iVar44 = iVar44 + uVar61;
            uVar35 = uVar35 << (sbyte)uVar61 | lVar16 >> 6;
            piVar54 = piVar56;
            iVar53 = iVar44;
            if (7 < iVar44) {
               do {
                  iVar53 = iVar53 + -8;
                  *(char*)piVar54 = (char)( (long)uVar35 >> ( (byte)iVar53 & 0x3f ) );
                  piVar54 = (int*)( (long)piVar54 + 1 );
               }
 while ( 7 < iVar53 );
               uVar67 = iVar44 - 8U >> 3;
               piVar56 = (int*)( (long)piVar56 + ( ulong )(uVar67 + 1) );
               iVar44 = ( iVar44 - 8U ) + uVar67 * -8;
            }

            bVar74 = iVar32 != -1;
            piVar54 = piVar56;
            iVar32 = iVar32 + -1;
         }
 while ( bVar74 );
      }
 else {
         puVar40 = (ushort*)( (long)*__n + 2 );
         iVar53 = 0;
         uVar35 = 0;
         uVar36 = *local_f0 >> 6;
         uVar67 = ( uint ) * local_f0 & 0x3f;
         iVar44 = 0;
         do {
            uVar10 = *puVar40;
            uVar61 = (uint)uVar33;
            uVar33 = (ulong)uVar10;
            if (( uVar10 == uVar61 ) && ( iVar53 != 0xff )) {
               iVar53 = iVar53 + 1;
            }
 else {
               uVar27 = (uint)plVar19[(int)uVar61] & 0x3f;
               uVar42 = plVar19[(int)uVar61] >> 6;
               if ((long)( (ulong)uVar67 + 8 + (ulong)uVar27 ) < (long)( (ulong)uVar27 * (long)iVar53 )) {
                  iVar44 = iVar44 + uVar27;
                  uVar42 = uVar35 << (sbyte)uVar27 | uVar42;
                  piVar54 = piVar56;
                  iVar32 = iVar44;
                  if (7 < iVar44) {
                     do {
                        iVar32 = iVar32 + -8;
                        *(char*)piVar54 = (char)( (long)uVar42 >> ( (byte)iVar32 & 0x3f ) );
                        piVar54 = (int*)( (long)piVar54 + 1 );
                     }
 while ( 7 < iVar32 );
                     uVar61 = iVar44 - 8U >> 3;
                     piVar54 = (int*)( (long)piVar56 + ( ulong )(uVar61 + 1) );
                     iVar44 = ( iVar44 - 8U ) + uVar61 * -8;
                  }

                  iVar44 = iVar44 + uVar67;
                  uVar35 = uVar42 << (sbyte)uVar67 | uVar36;
                  piVar56 = piVar54;
                  iVar32 = iVar44;
                  if (iVar44 < 8) {
                     iVar32 = iVar44 + 8;
                  }
 else {
                     do {
                        iVar32 = iVar32 + -8;
                        *(char*)piVar56 = (char)( (long)uVar35 >> ( (byte)iVar32 & 0x3f ) );
                        piVar56 = (int*)( (long)piVar56 + 1 );
                     }
 while ( 7 < iVar32 );
                     uVar61 = iVar44 - 8U >> 3;
                     piVar54 = (int*)( (long)piVar54 + ( ulong )(uVar61 + 1) );
                     iVar57 = uVar61 * -8;
                     iVar32 = iVar44 + iVar57;
                     iVar44 = ( iVar44 - 8U ) + iVar57;
                  }

                  uVar35 = uVar35 << 8 | (long)iVar53;
                  piVar56 = piVar54;
                  if (7 < iVar32) {
                     piVar56 = (int*)( (long)piVar54 + 1 );
                     iVar53 = 0;
                     *(char*)piVar54 = (char)( (long)uVar35 >> ( (byte)iVar44 & 0x3f ) );
                     goto LAB_0010651e;
                  }

               }
 else {
                  iVar57 = iVar53 + -1;
                  iVar32 = iVar44;
                  if (-1 < iVar53) {
                     do {
                        iVar44 = iVar44 + uVar27;
                        uVar35 = uVar35 << (sbyte)uVar27 | uVar42;
                        piVar54 = piVar56;
                        iVar32 = iVar44;
                        if (7 < iVar44) {
                           do {
                              iVar32 = iVar32 + -8;
                              *(char*)piVar54 = (char)( (long)uVar35 >> ( (byte)iVar32 & 0x3f ) );
                              piVar54 = (int*)( (long)piVar54 + 1 );
                           }
 while ( 7 < iVar32 );
                           uVar61 = iVar44 - 8U >> 3;
                           piVar56 = (int*)( (long)piVar56 + ( ulong )(uVar61 + 1) );
                           iVar44 = ( iVar44 - 8U ) + uVar61 * -8;
                        }

                        iVar57 = iVar57 + -1;
                        iVar32 = iVar44;
                     }
 while ( iVar57 != -2 );
                  }

               }

               iVar44 = iVar32;
               iVar53 = 0;
            }

            LAB_0010651e:puVar40 = puVar40 + 1;
         }
 while ( puVar40 != (ushort*)( (long)*__n + ( ulong )(local_e0 - 2) * 2 + 4 ) );
         lVar16 = plVar19[uVar10];
         uVar61 = (uint)lVar16 & 0x3f;
         if ((long)( (ulong)uVar61 + 8 + (ulong)uVar67 ) < (long)( (long)iVar53 * (ulong)uVar61 )) {
            iVar44 = iVar44 + uVar61;
            uVar33 = lVar16 >> 6 | uVar35 << (sbyte)uVar61;
            piVar54 = piVar56;
            iVar32 = iVar44;
            if (7 < iVar44) {
               do {
                  iVar32 = iVar32 + -8;
                  *(char*)piVar54 = (char)( (long)uVar33 >> ( (byte)iVar32 & 0x3f ) );
                  piVar54 = (int*)( (long)piVar54 + 1 );
               }
 while ( 7 < iVar32 );
               uVar61 = iVar44 - 8U >> 3;
               piVar56 = (int*)( (long)piVar56 + ( ulong )(uVar61 + 1) );
               iVar44 = ( iVar44 - 8U ) + uVar61 * -8;
            }

            iVar32 = iVar44 + uVar67;
            uVar36 = uVar36 | uVar33 << (sbyte)uVar67;
            piVar54 = piVar56;
            iVar44 = iVar32;
            if (iVar32 < 8) {
               iVar57 = 8;
               iVar64 = iVar32;
            }
 else {
               do {
                  iVar44 = iVar44 + -8;
                  *(char*)piVar54 = (char)( (long)uVar36 >> ( (byte)iVar44 & 0x3f ) );
                  piVar54 = (int*)( (long)piVar54 + 1 );
               }
 while ( 7 < iVar44 );
               uVar61 = iVar32 - 8U >> 3;
               piVar56 = (int*)( (long)piVar56 + ( ulong )(uVar61 + 1) );
               iVar57 = uVar61 * -8;
               iVar64 = ( iVar32 - 8U ) + iVar57;
            }

            uVar35 = uVar36 << 8 | (long)iVar53;
            piVar54 = piVar56;
            iVar44 = iVar32 + iVar57;
            if (7 < iVar32 + iVar57) {
               piVar54 = (int*)( (long)piVar56 + 1 );
               *(char*)piVar56 = (char)( (long)uVar35 >> ( (byte)iVar64 & 0x3f ) );
               iVar44 = iVar64;
            }

         }
 else {
            iVar32 = iVar53 + -1;
            piVar54 = piVar56;
            if (-1 < iVar53) goto LAB_001067ac;
         }

      }

      if (iVar44 != 0) {
         *(char*)piVar54 = (char)( uVar35 << ( 8U - (char)iVar44 & 0x3f ) );
      }

      uVar61 = iVar44 + ( (int)piVar54 - (int)piVar39 ) * 8;
      iVar44 = uVar61 + 0xe;
      if (-1 < (int)( uVar61 + 7 )) {
         iVar44 = uVar61 + 7;
      }

      local_d8[5] = 0;
      *(ulong*)( local_d8 + 1 ) = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(local_7c, uVar9), uVar7), uVar43), local_108), local_110), local_128), local_e8);
      *(ulong*)( local_d8 + 3 ) = ( ( ( ( ( ( ( ulong )(uVar61 >> 0x18) << 8 | ( ulong )(uVar61 >> 0x10 & 0xff) ) << 8 | ( ulong )(uVar61 >> 8 & 0xff) ) << 8 | ( ulong )(uVar61 & 0xff) ) << 8 | (ulong)local_158 ) << 8 | local_148 ) << 8 | (ulong)local_138 ) << 8 | local_130;
      iVar44 = ( ( iVar44 >> 3 ) + (int)piVar39 ) - iVar63;
      operator_delete(plVar19, 0x80008);
   }

   *local_d8 = iVar44;
   pauVar20 = (undefined1(*) [16])( ulong )(uint)(iVar44 + ( iVar63 - (int)local_c0 ));
   if (local_90 <= pauVar20) {
      memcpy(local_c0, local_140, (size_t)local_90);
      pauVar20 = local_90;
   }

   operator_delete(psVar17, 0x20000);
   if (local_c8 != (undefined1(*) [16])0x0) {
      operator_delete(local_c8, (long)local_b8 - (long)local_c8);
   }

   if (__n != (undefined1(*) [16])0x0) {
      operator_delete(__n, (long)local_a0 - (long)__n);
   }

   operator_delete(local_d0, 0x2000);
   std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_insert<__gnu_cxx::__normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator < unsigned_char>>> > ( param_1,*(undefined8*)( param_1 + 8 ),local_c0,(undefined1*)( (long)*pauVar20 + (long)*local_c0 ) );
   operator_delete(local_c0, (ulong)local_78);
   LAB_00104ef4:uVar46 = 1;
   LAB_00104e94:if (local_140 != (undefined1*)0x0) {
      operator_delete(local_140, (long)local_a8 - (long)local_140);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar46;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* tinyexr::ConvertHeader(TEXRHeader*, tinyexr::HeaderInfo const&, std::__cxx11::string*,
   std::__cxx11::string*) [clone .constprop.0] */undefined8 tinyexr::ConvertHeader(TEXRHeader *param_1, HeaderInfo *param_2, string *param_3, string *param_4) {
   undefined4 uVar1;
   undefined4 uVar2;
   code *pcVar3;
   void *pvVar4;
   undefined4 *puVar5;
   undefined4 *puVar6;
   undefined4 *puVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   ostream *poVar10;
   long lVar11;
   undefined4 *puVar12;
   undefined8 *puVar13;
   int iVar14;
   long lVar15;
   ulong uVar16;
   ulong uVar17;
   ulong uVar18;
   streambuf *psVar19;
   long lVar20;
   undefined4 *puVar21;
   long in_FS_OFFSET;
   undefined1 *local_1e8;
   ulong local_1e0;
   undefined1 local_1d8;
   undefined7 uStack_1d7;
   code *local_1c8[2];
   pointer_____offset_0x10___ local_1b8[2];
   undefined1 local_1a8[16];
   undefined1 local_198[16];
   undefined1 local_188[16];
   locale local_178[8];
   undefined4 local_170;
   undefined1 *local_168;
   undefined8 local_160;
   undefined1 local_158;
   undefined7 uStack_157;
   code *local_148[27];
   undefined8 local_70;
   undefined2 local_68;
   undefined1 local_60[16];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *(undefined4*)( param_2 + 100 );
   *(undefined4*)param_1 = *(undefined4*)( param_2 + 0x60 );
   *(undefined4*)( param_1 + 0x28 ) = *(undefined4*)( param_2 + 0x54 );
   *(undefined4*)( param_1 + 0x2c ) = *(undefined4*)( param_2 + 0x58 );
   uVar1 = *(undefined4*)( param_2 + 0x5c );
   *(undefined4*)( param_1 + 0x34 ) = uVar2;
   uVar2 = *(undefined4*)( param_2 + 0x44 );
   *(undefined4*)( param_1 + 0x30 ) = uVar1;
   *(undefined4*)( param_1 + 0x18 ) = uVar2;
   *(undefined4*)( param_1 + 0x1c ) = *(undefined4*)( param_2 + 0x48 );
   *(undefined4*)( param_1 + 0x20 ) = *(undefined4*)( param_2 + 0x4c );
   *(undefined4*)( param_1 + 0x24 ) = *(undefined4*)( param_2 + 0x50 );
   *(undefined4*)( param_1 + 8 ) = *(undefined4*)( param_2 + 0x30 );
   *(undefined4*)( param_1 + 0xc ) = *(undefined4*)( param_2 + 0x34 );
   *(undefined4*)( param_1 + 0x10 ) = *(undefined4*)( param_2 + 0x38 );
   *(undefined4*)( param_1 + 0x14 ) = *(undefined4*)( param_2 + 0x3c );
   *(undefined4*)( param_1 + 4 ) = *(undefined4*)( param_2 + 0x40 );
   *(undefined4*)( param_1 + 0x7c ) = *(undefined4*)( param_2 + 0x80 );
   iVar14 = *(int*)( param_2 + 0x68 );
   *(int*)( param_1 + 0x38 ) = iVar14;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( param_1 + ( 4*i + 60 ) ) = *(undefined4*)( param_2 + ( 4*i + 108 ) );
   }

   EXRSetNameAttr_part_0();
   lVar20 = *(long*)( param_2 + 0xb0 );
   if (lVar20 != 0) {
      if (lVar20 == 0xd) {
         if (( **(long**)( param_2 + 0xa8 ) != 0x656e696c6e616373 ) || ( *(long*)( (long)*(long**)( param_2 + 0xa8 ) + 5 ) != 0x6567616d69656e69 )) goto LAB_00106f18;
         if (iVar14 != 0) {
            if (0x3f < 0x3fffffffffffffffU - *(long*)( param_4 + 8 )) {
               std::__cxx11::string::_M_append((char*)param_4, 0x118f58);
               uVar9 = 0;
               goto LAB_00106ea9;
            }

            goto LAB_00107376;
         }

      }
 else if (lVar20 == 10) {
         if (( **(long**)( param_2 + 0xa8 ) != 0x616d6964656c6974 ) || ( (short)( *(long**)( param_2 + 0xa8 ) )[1] != 0x6567 )) goto LAB_00106f18;
         if (iVar14 == 0) {
            if (0x3fffffffffffffffU - *(long*)( param_4 + 8 ) < 0x3c) goto LAB_00107376;
            std::__cxx11::string::_M_append((char*)param_4, 0x118fa0);
            uVar9 = 0;
            goto LAB_00106ea9;
         }

      }
 else if (lVar20 == 8) {
         if (**(long**)( param_2 + 0xa8 ) == 0x656c697470656564) {
            *(undefined4*)( param_1 + 0x50 ) = 1;
            if (iVar14 == 0) {
               std::__cxx11::string::append(param_4, "(ConvertHeader) tiled bit must be on for `deeptile` type.\n");
               uVar9 = 0;
               goto LAB_00106ea9;
            }

         }
 else {
            LAB_00106f18:std::ios_base::ios_base((ios_base*)local_148);
            pcVar3 = _init;
            local_60 = (undefined1[16])0x0;
            local_50 = (undefined1[16])0x0;
            local_68 = 0;
            local_148[0] = (code*)&std::__cxx11::stringstream::vtable;
            local_70 = 0;
            local_1c8[0] = _init;
            *(undefined8*)( (long)local_1c8 + *(long*)( _init + -0x18 ) ) = _vtable;
            local_1c8[1] = (code*)0x0;
            std::ios::init((streambuf*)( (long)local_1c8 + *(long*)( _init + -0x18 ) ));
            local_1b8[0] = _locale;
            psVar19 = (streambuf*)( (ostream*)local_1b8 + *(long*)( _locale + -0x18 ) );
            *(undefined8*)psVar19 = _vtable;
            std::ios::init(psVar19);
            *(undefined8*)( (long)local_1c8 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
            local_1c8[0] = std::__ostream_insert<char,std::char_traits<char>>;
            local_148[0] = open64;
            local_1b8[0] = PTR_vtable_0011cce8;
            local_1b8[1] = PTR_vtable_0011ccf0;
            local_1a8 = (undefined1[16])0x0;
            local_198 = (undefined1[16])0x0;
            local_188 = (undefined1[16])0x0;
            std::locale::locale(local_178);
            local_170 = 0x18;
            local_1b8[1] = std::__cxx11::string::_M_replace;
            local_160 = 0;
            local_158 = 0;
            local_168 = &local_158;
            std::ios::init((streambuf*)local_148);
            std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_1b8, "(ConvertHeader) Unsupported or unknown info.type: ", 0x32);
            poVar10 = std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_1b8, *(char**)( param_2 + 0xa8 ), *(long*)( param_2 + 0xb0 ));
            std::__ostream_insert<char,std::char_traits<char>>(poVar10, "\n", 1);
            local_1e0 = 0;
            local_1d8 = 0;
            local_1e8 = &local_1d8;
            if (local_188._0_8_ == 0) {
               std::__cxx11::string::_M_assign((string*)&local_1e8);
            }
 else {
               std::__cxx11::string::_M_replace(( ulong ) & local_1e8, 0, (char*)0x0, local_198._8_8_);
            }

            if (0x3fffffffffffffffU - *(long*)( param_3 + 8 ) < local_1e0) {
               LAB_00107376:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
            }

            std::__cxx11::string::_M_append((char*)param_3, (ulong)local_1e8);
            if (local_1e8 != &local_1d8) {
               operator_delete(local_1e8, CONCAT71(uStack_1d7, local_1d8) + 1);
            }

            local_1c8[0] = std::__ostream_insert<char,std::char_traits<char>>;
            local_148[0] = open64;
            local_1b8[0] = PTR_vtable_0011cce8;
            local_1b8[1] = PTR_vtable_0011ccf8;
            if (local_168 != &local_158) {
               operator_delete(local_168, CONCAT71(uStack_157, local_158) + 1);
            }

            local_1b8[1] = std::ios_base::~ios_base;
            std::locale::~locale(local_178);
            *(undefined8*)( (long)local_1c8 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
            local_1b8[0] = _locale;
            *(undefined8*)( (long)local_1b8 + *(long*)( _locale + -0x18 ) ) = _vtable;
            local_1c8[0] = pcVar3;
            *(undefined8*)( (long)local_1c8 + *(long*)( pcVar3 + -0x18 ) ) = _vtable;
            local_1c8[1] = (code*)0x0;
            local_148[0] = (code*)&std::__cxx11::stringstream::vtable;
            std::ios_base::~ios_base((ios_base*)local_148);
         }

      }
 else {
         if (( ( lVar20 != 0xc ) || ( **(long**)( param_2 + 0xa8 ) != 0x6e61637370656564 ) ) || ( (int)( *(long**)( param_2 + 0xa8 ) )[1] != 0x656e696c )) goto LAB_00106f18;
         *(undefined4*)( param_1 + 0x50 ) = 1;
         if (iVar14 != 0) {
            std::__cxx11::string::append(param_4, "(ConvertHeader) tiled bit must be off for `deepscanline` type.\n");
         }

      }

   }

   lVar20 = *(long*)param_2;
   iVar14 = (int)( *(long*)( param_2 + 8 ) - lVar20 >> 3 ) * -0x49249249;
   *(int*)( param_1 + 0x78 ) = iVar14;
   pvVar4 = malloc((long)iVar14 * 0x110);
   *(void**)( param_1 + 0x68 ) = pvVar4;
   if ((long)iVar14 == 0) {
      pvVar4 = malloc(0);
      *(void**)( param_1 + 0x70 ) = pvVar4;
      pvVar4 = malloc(0);
      *(void**)( param_1 + 0x80 ) = pvVar4;
   }
 else {
      uVar17 = 0;
      do {
         uVar18 = uVar17 + 1;
         lVar15 = uVar17 * 0x110;
         strncpy((char*)( (long)pvVar4 + lVar15 ), *(char**)( lVar20 + uVar17 * 0x38 ), 0xff);
         *(undefined1*)( *(long*)( param_1 + 0x68 ) + 0xff + lVar15 ) = 0;
         lVar20 = *(long*)( param_1 + 0x68 );
         lVar11 = *(long*)param_2 + uVar17 * 0x38;
         *(undefined4*)( lVar20 + lVar15 + 0x100 ) = *(undefined4*)( lVar11 + 0x20 );
         *(undefined1*)( lVar20 + lVar15 + 0x10c ) = *(undefined1*)( lVar11 + 0x30 );
         lVar20 = *(long*)param_2;
         pvVar4 = *(void**)( param_1 + 0x68 );
         lVar11 = lVar20 + uVar17 * 0x38;
         *(undefined4*)( (long)pvVar4 + lVar15 + 0x104 ) = *(undefined4*)( lVar11 + 0x28 );
         *(undefined4*)( (long)pvVar4 + lVar15 + 0x108 ) = *(undefined4*)( lVar11 + 0x2c );
         uVar16 = ( ulong ) * (int*)( param_1 + 0x78 );
         uVar17 = uVar18;
      }
 while ( uVar18 < uVar16 );
      puVar5 = (undefined4*)malloc(uVar16 * 4);
      *(undefined4**)( param_1 + 0x70 ) = puVar5;
      if (uVar16 == 0) {
         pvVar4 = malloc(0);
         *(void**)( param_1 + 0x80 ) = pvVar4;
      }
 else {
         puVar21 = (undefined4*)( lVar20 + 0x20 );
         puVar7 = puVar5;
         puVar12 = puVar21;
         do {
            uVar1 = *puVar12;
            puVar6 = puVar7 + 1;
            puVar12 = puVar12 + 0xe;
            *puVar7 = uVar1;
            puVar7 = puVar6;
         }
 while ( puVar5 + uVar16 != puVar6 );
         puVar7 = (undefined4*)malloc(uVar16 * 4);
         *(undefined4**)( param_1 + 0x80 ) = puVar7;
         puVar5 = puVar7;
         do {
            uVar1 = *puVar21;
            puVar12 = puVar5 + 1;
            puVar21 = puVar21 + 0xe;
            *puVar5 = uVar1;
            puVar5 = puVar12;
         }
 while ( puVar7 + uVar16 != puVar12 );
      }

   }

   iVar14 = (int)( *(long*)( param_2 + 0x20 ) - *(long*)( param_2 + 0x18 ) >> 4 ) * 0x3e0f83e1;
   *(int*)( param_1 + 0x5c ) = iVar14;
   if (iVar14 < 1) {
      *(undefined8*)( param_1 + 0x60 ) = 0;
   }
 else {
      if (0x80 < iVar14) {
         iVar14 = 0x80;
      }

      *(int*)( param_1 + 0x5c ) = iVar14;
      pvVar4 = malloc((long)iVar14 * 0x210);
      *(void**)( param_1 + 0x60 ) = pvVar4;
      lVar20 = *(long*)( param_2 + 0x18 );
      uVar17 = 0;
      do {
         uVar16 = uVar17 + 1;
         lVar11 = uVar17 * 0x210;
         puVar13 = (undefined8*)( lVar20 + lVar11 );
         puVar8 = (undefined8*)( (long)pvVar4 + lVar11 );
         uVar9 = puVar13[1];
         *puVar8 = *puVar13;
         puVar8[1] = uVar9;
         for (int i = 0; i < 15; i++) {
            uVar9 = puVar13[( 2*i + 3 )];
            puVar8[( 2*i + 2 )] = puVar13[( 2*i + 2 )];
            puVar8[( 2*i + 3 )] = uVar9;
         }

         lVar15 = *(long*)( param_2 + 0x18 ) + lVar11;
         lVar20 = *(long*)( param_1 + 0x60 ) + lVar11;
         for (int i = 0; i < 16; i++) {
            uVar9 = *(undefined8*)( lVar15 + ( 16*i + 264 ) );
            *(undefined8*)( lVar20 + ( 16*i + 256 ) ) = *(undefined8*)( lVar15 + ( 16*i + 256 ) );
            *(undefined8*)( lVar20 + ( 16*i + 264 ) ) = uVar9;
         }

         lVar20 = *(long*)( param_2 + 0x18 );
         pvVar4 = *(void**)( param_1 + 0x60 );
         uVar9 = *(undefined8*)( lVar20 + lVar11 + 0x200 );
         *(undefined4*)( (long)pvVar4 + lVar11 + 0x208 ) = *(undefined4*)( lVar20 + lVar11 + 0x208 );
         *(undefined8*)( (long)pvVar4 + lVar11 + 0x200 ) = uVar9;
         uVar17 = uVar16;
      }
 while ( uVar16 < ( ulong )(long) * (int*)( param_1 + 0x5c ) );
   }

   *(undefined4*)( param_1 + 0x58 ) = *(undefined4*)( param_2 + 0x7c );
   uVar9 = 1;
   LAB_00106ea9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar9;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void InitEXRImage(undefined1 (*param_1)[16]) {
   if (param_1 != (undefined1(*) [16])0x0) {
      *(undefined8*)( param_1[1] + 8 ) = 0;
      *(undefined8*)param_1[1] = 0;
      *param_1 = (undefined1[16])0x0;
      param_1[2] = (undefined1[16])0x0;
   }

   return;
}
void FreeEXRErrorMessage(void *param_1) {
   if (param_1 != (void*)0x0) {
      free(param_1);
      return;
   }

   return;
}
void InitEXRHeader(undefined8 *param_1) {
   ulong uVar1;
   undefined8 *puVar2;
   if (param_1 != (undefined8*)0x0) {
      *param_1 = 0;
      param_1[0x30] = 0;
      puVar2 = (undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 );
      for (uVar1 = ( ulong )(( (int)param_1 - (int)(undefined8*)( ( ulong )(param_1 + 1) & 0xfffffffffffffff8 ) ) + 0x188U >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
         *puVar2 = 0;
         puVar2 = puVar2 + 1;
      }

   }

   return;
}
undefined8 FreeEXRHeader(long param_1) {
   void *__ptr;
   void *__ptr_00;
   ulong uVar1;
   int iVar2;
   undefined8 *puVar3;
   long lVar4;
   byte bVar5;
   bVar5 = 0;
   if (param_1 != 0) {
      if (*(void**)( param_1 + 0x68 ) != (void*)0x0) {
         free(*(void**)( param_1 + 0x68 ));
      }

      if (*(void**)( param_1 + 0x70 ) != (void*)0x0) {
         free(*(void**)( param_1 + 0x70 ));
      }

      if (*(void**)( param_1 + 0x80 ) != (void*)0x0) {
         free(*(void**)( param_1 + 0x80 ));
      }

      __ptr_00 = *(void**)( param_1 + 0x60 );
      if (0 < *(int*)( param_1 + 0x5c )) {
         lVar4 = 0;
         iVar2 = 0;
         do {
            __ptr = *(void**)( (long)__ptr_00 + lVar4 + 0x200 );
            if (__ptr != (void*)0x0) {
               free(__ptr);
               __ptr_00 = *(void**)( param_1 + 0x60 );
            }

            iVar2 = iVar2 + 1;
            lVar4 = lVar4 + 0x210;
         }
 while ( iVar2 < *(int*)( param_1 + 0x5c ) );
      }

      if (__ptr_00 != (void*)0x0) {
         free(__ptr_00);
      }

      *(undefined8*)( param_1 + 0x88 ) = 0;
      *(undefined8*)( param_1 + 0x180 ) = 0;
      puVar3 = (undefined8*)( param_1 + 0x90U & 0xfffffffffffffff8 );
      uVar1 = ( ulong )(( (int)param_1 - (int)puVar3 ) + 0x188U >> 3);
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
         *puVar3 = 0;
         puVar3 = puVar3 + (ulong)bVar5 * -2 + 1;
      }

      return 0;
   }

   return 0xfffffffd;
}
void EXRSetNameAttr(long param_1) {
   if (param_1 != 0) {
      EXRSetNameAttr_part_0();
      return;
   }

   return;
}
int EXRNumLevels(long param_1) {
   long lVar1;
   int iVar2;
   if (param_1 == 0) {
      return 0;
   }

   iVar2 = 1;
   if (( *(long*)( param_1 + 0x18 ) == 0 ) && ( lVar1 = lVar1 != 0 )) {
      do {
         lVar1 = *(long*)( lVar1 + 8 );
         iVar2 = iVar2 + 1;
      }
 while ( lVar1 != 0 );
      return iVar2;
   }

   return 1;
}
undefined8 FreeEXRImage(long *param_1) {
   void *pvVar1;
   long lVar2;
   void *pvVar3;
   long lVar4;
   long lVar5;
   if (param_1 == (long*)0x0) {
      return 0xfffffffd;
   }

   if (param_1[1] != 0) {
      FreeEXRImage();
      if ((void*)param_1[1] != (void*)0x0) {
         operator_delete((void*)param_1[1], 0x30);
      }

   }

   pvVar3 = (void*)param_1[3];
   if (0 < (int)param_1[5]) {
      lVar4 = 0;
      do {
         if (pvVar3 != (void*)0x0) {
            while (pvVar1 = *(void**)( (long)pvVar3 + lVar4 * 8 ),pvVar1 == (void*)0x0) {
               lVar4 = lVar4 + 1;
               if ((int)param_1[5] <= (int)lVar4) goto LAB_001075dc;
            }
;
            free(pvVar1);
            pvVar3 = (void*)param_1[3];
         }

         lVar4 = lVar4 + 1;
      }
 while ( (int)lVar4 < (int)param_1[5] );
   }

   LAB_001075dc:if (pvVar3 != (void*)0x0) {
      free(pvVar3);
   }

   pvVar3 = (void*)*param_1;
   if (pvVar3 != (void*)0x0) {
      lVar4 = 0;
      if (0 < *(int*)( (long)param_1 + 0x2c )) {
         do {
            lVar5 = 0;
            if (0 < (int)param_1[5]) {
               do {
                  lVar2 = *(long*)( (long)pvVar3 + lVar4 * 0x20 + 0x18 );
                  if (( lVar2 != 0 ) && ( pvVar1 = *(void**)( lVar2 + lVar5 * 8 ) ),pvVar1 != (void*)0x0) {
                     free(pvVar1);
                     pvVar3 = (void*)*param_1;
                  }

                  lVar5 = lVar5 + 1;
               }
 while ( (int)lVar5 < (int)param_1[5] );
            }

            pvVar1 = *(void**)( (long)pvVar3 + lVar4 * 0x20 + 0x18 );
            if (pvVar1 != (void*)0x0) {
               free(pvVar1);
               pvVar3 = (void*)*param_1;
            }

            lVar4 = lVar4 + 1;
         }
 while ( (int)lVar4 < *(int*)( (long)param_1 + 0x2c ) );
      }

      free(pvVar3);
   }

   return 0;
}
undefined8 ParseEXRVersionFromMemory(undefined4 *param_1, int *param_2, ulong param_3) {
   if (( param_1 == (undefined4*)0x0 ) || ( param_2 == (int*)0x0 )) {
      return 0xfffffffd;
   }

   if (param_3 < 8) {
      return 0xfffffffc;
   }

   if (_LC25 == *param_2) {
      *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
      if ((char)param_2[1] == '\x02') {
         *param_1 = 2;
         for (int i = 0; i < 3; i++) {
            param_1[( i + 1 )] = *(byte*)( (long)param_2 + 5 ) >> ( i + 1 ) & 1;
         }

         if (( *(byte*)( (long)param_2 + 5 ) & 0x10 ) != 0) {
            param_1[4] = 1;
         }

         return 0;
      }

      return 0xfffffffe;
   }

   return 0xffffffff;
}
void IsEXRFromMemory(undefined8 param_1, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined1 auStack_28[24];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ParseEXRVersionFromMemory(auStack_28, param_1, param_2);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
undefined8 ParseEXRVersionFromFile(undefined8 param_1, char *param_2) {
   FILE *__stream;
   size_t sVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined1 auStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == (char*)0x0) {
      uVar2 = 0xfffffffd;
   }
 else {
      __stream = fopen64(param_2, "rb");
      if (__stream == (FILE*)0x0) {
         uVar2 = 0xfffffff9;
      }
 else {
         sVar1 = fread(auStack_38, 1, 8, __stream);
         fclose(__stream);
         if (sVar1 == 8) {
            uVar2 = ParseEXRVersionFromMemory(param_1, auStack_38, 8);
         }
 else {
            uVar2 = 0xfffffffb;
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
void IsEXR(undefined8 param_1) {
   long in_FS_OFFSET;
   undefined1 auStack_28[24];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ParseEXRVersionFromFile(auStack_28, param_1);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tinyexr::EncodeChunk(TEXRImage const*,
   TEXRHeader const*, std::vector<tinyexr::TChannelInfo, std::allocator<tinyexr::TChannelInfo> >
   const&, int, unsigned long, bool, tinyexr::OffsetData&, std::vector<std::vector<unsigned char,
   std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,
   std::allocator<unsigned char> > > >&, unsigned long&, std::__cxx11::string*)::{lambda()#1}> >
   >::_M_run() */void std::thread::_State_impl<std::thread::_Invoker < std::tuple<tinyexr::EncodeChunk(TEXRImage_const *, TEXRHeader_const *, std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> const &, int, unsigned_long, bool, tinyexr::OffsetData &, std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> &, unsigned_long &, std::__cxx11::string *)::{lambda()#1}>>>::_M_run(_State_impl<std::thread::_Invoker < std::tuple<tinyexr::EncodeChunk(TEXRImage_const *, TEXRHeader_const *, std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> const &, int, unsigned_long, bool, tinyexr::OffsetData &, std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> &, unsigned_long &, std::__cxx11::string *)::_lambda()_1_> >> *this) {
   long lVar1;
   int iVar2;
   int *piVar3;
   char cVar4;
   int iVar5;
   uchar **ppuVar6;
   ulong uVar7;
   long lVar8;
   long lVar9;
   vector *this_00;
   int iVar10;
   ulong uVar11;
   int iVar12;
   vector *in_stack_ffffffffffffffb0;
   undefined4 in_stack_ffffffffffffffb8;
   int in_stack_ffffffffffffffbc;
   uchar **in_stack_ffffffffffffffc0;
   LAB_00107888:do {
      piVar3 = *(int**)( this + 8 );
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      if (**(int**)( this + 0x10 ) <= iVar2) {
         return;
      }

      lVar8 = **(long**)( this + 0x20 );
      iVar12 = **(int**)( this + 0x18 ) * iVar2;
      lVar1 = (long)iVar2 * 0x18;
      iVar5 = **(int**)( this + 0x18 ) + iVar12;
      iVar10 = *(int*)( lVar8 + 0x24 );
      if (iVar5 <= *(int*)( lVar8 + 0x24 )) {
         iVar10 = iVar5;
      }

      this_00 = (vector*)( **(long**)( this + 0x28 ) + lVar1 );
      ppuVar6 = *(uchar***)( lVar8 + 0x18 );
      iVar10 = iVar10 - iVar12;
      uVar11 = *(long*)( (vector<unsigned_char,std::allocator<unsigned_char>>*)this_00 + 8 ) - *(long*)this_00;
      if (uVar11 < 8) {
         in_stack_ffffffffffffffb0 = (vector*)0x1079d7;
         vector<unsigned_char,std::allocator<unsigned_char>>::_M_default_append((vector<unsigned_char,std::allocator<unsigned_char>>*)this_00, 8 - uVar11);
         this_00 = (vector*)( **(long**)( this + 0x28 ) + lVar1 );
         lVar8 = **(long**)( this + 0x20 );
         uVar11 = *(long*)( this_00 + 8 ) - *(long*)this_00;
         in_stack_ffffffffffffffbc = iVar10;
         in_stack_ffffffffffffffc0 = ppuVar6;
      }
 else {
         if (uVar11 != 8) {
            lVar9 = *(long*)this_00 + 8;
            if (*(long*)( (vector<unsigned_char,std::allocator<unsigned_char>>*)this_00 + 8 ) == lVar9) goto LAB_00107913;
            *(long*)( (vector<unsigned_char,std::allocator<unsigned_char>>*)this_00 + 8 ) = lVar9;
         }

         uVar11 = 8;
      }

      LAB_00107913:cVar4 = tinyexr::EncodePixelData(this_00, ppuVar6, *(int*)( **(long**)( this + 0x30 ) + 0x7c ), *(int*)( lVar8 + 0x20 ), *(int*)( lVar8 + 0x20 ), iVar12, iVar10, **(int**)( this + 0x38 ), (int)*(undefined8*)( this + 0x40 ), *(ulong*)( this + 0x48 ), (vector*)**(undefined8**)( this + 0x50 ), in_stack_ffffffffffffffb0, (string*)CONCAT44(in_stack_ffffffffffffffbc, in_stack_ffffffffffffffb8), in_stack_ffffffffffffffc0);
      if (cVar4 != '\0') {
         piVar3 = *(int**)( **(long**)( this + 0x28 ) + lVar1 );
         uVar7 = ( (long*)( **(long**)( this + 0x28 ) + lVar1 ) )[1] - (long)piVar3;
         if (uVar11 < uVar7) {
            *piVar3 = iVar12;
            *(int*)( *(long*)( **(long**)( this + 0x28 ) + (long)iVar2 * 0x18 ) + 4 ) = (int)uVar7 - (int)uVar11;
            goto LAB_00107888;
         }

      }

      LOCK();
      **(undefined1**)( this + 0x60 ) = 1;
      UNLOCK();
   }
 while ( true );
}
/* std::thread::_State_impl<std::thread::_Invoker<std::tuple<tinyexr::EncodeTiledLevel(TEXRImage
   const*, TEXRHeader const*, std::vector<tinyexr::TChannelInfo,
   std::allocator<tinyexr::TChannelInfo> > const&, std::vector<std::vector<unsigned char,
   std::allocator<unsigned char> >, std::allocator<std::vector<unsigned char,
   std::allocator<unsigned char> > > >&, unsigned long, int, int, std::vector<unsigned long,
   std::allocator<unsigned long> > const&, int, void const*, std::__cxx11::string*)::{lambda()#1}> >
   >::_M_run() */void std::thread::_State_impl<std::thread::_Invoker < std::tuple<tinyexr::EncodeTiledLevel(TEXRImage_const *, TEXRHeader_const *, std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> const &, std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> &, unsigned_long, int, int, std::vector<unsigned_long,std::allocator<unsigned_long>> const &, int, void_const *, std::__cxx11::string *)::{lambda()#1}>>>::_M_run(_State_impl<std::thread::_Invoker < std::tuple<tinyexr::EncodeTiledLevel(TEXRImage_const *, TEXRHeader_const *, std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> const &, std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> &, unsigned_long, int, int, std::vector<unsigned_long,std::allocator<unsigned_long>> const &, int, void_const *, std::__cxx11::string *)::_lambda()_1_> >> *this) {
   long lVar1;
   int iVar2;
   int *piVar3;
   uchar **ppuVar4;
   char cVar5;
   ulong uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   vector *this_00;
   vector *in_stack_ffffffffffffffa0;
   string *in_stack_ffffffffffffffa8;
   undefined4 in_stack_ffffffffffffffb0;
   int iVar11;
   LAB_00107a38:do {
      piVar3 = *(int**)( this + 8 );
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      if (**(int**)( this + 0x10 ) <= iVar2) {
         return;
      }

      lVar8 = (long)iVar2 + **(long**)( this + 0x18 );
      iVar11 = **(int**)( this + 0x20 );
      lVar1 = lVar8 * 0x18;
      this_00 = (vector*)( **(long**)( this + 0x30 ) + lVar1 );
      lVar7 = (long)iVar2 * 0x20 + *(long*)**(undefined8**)( this + 0x28 );
      ppuVar4 = *(uchar***)( lVar7 + 0x18 );
      uVar10 = *(long*)( (vector<unsigned_char,std::allocator<unsigned_char>>*)this_00 + 8 ) - *(long*)this_00;
      if (uVar10 < 0x14) {
         in_stack_ffffffffffffffa0 = (vector*)0x107bc7;
         vector<unsigned_char,std::allocator<unsigned_char>>::_M_default_append((vector<unsigned_char,std::allocator<unsigned_char>>*)this_00, 0x14 - uVar10);
         this_00 = (vector*)( **(long**)( this + 0x30 ) + lVar1 );
         uVar10 = *(long*)( this_00 + 8 ) - *(long*)this_00;
      }
 else {
         if (uVar10 != 0x14) {
            lVar9 = *(long*)this_00 + 0x14;
            if (*(long*)( (vector<unsigned_char,std::allocator<unsigned_char>>*)this_00 + 8 ) == lVar9) goto LAB_00107ac2;
            *(long*)( (vector<unsigned_char,std::allocator<unsigned_char>>*)this_00 + 8 ) = lVar9;
         }

         uVar10 = 0x14;
      }

      LAB_00107ac2:cVar5 = tinyexr::EncodePixelData(this_00, ppuVar4, *(int*)( **(long**)( this + 0x38 ) + 0x7c ), *(int*)( lVar7 + 0x10 ), *(int*)( **(long**)( this + 0x38 ) + 0x3c ), 0, *(int*)( lVar7 + 0x14 ), **(int**)( this + 0x40 ), (int)*(undefined8*)( this + 0x48 ), *(ulong*)( this + 0x50 ), (vector*)**(undefined8**)( this + 0x58 ), in_stack_ffffffffffffffa0, in_stack_ffffffffffffffa8, (void*)CONCAT44(iVar11, in_stack_ffffffffffffffb0));
      if (cVar5 != '\0') {
         piVar3 = *(int**)( lVar1 + **(long**)( this + 0x30 ) );
         uVar6 = ( (long*)( lVar1 + **(long**)( this + 0x30 ) ) )[1] - (long)piVar3;
         if (uVar10 < uVar6) {
            *piVar3 = iVar2 % iVar11;
            *(int*)( *(long*)( **(long**)( this + 0x30 ) + lVar8 * 0x18 ) + 4 ) = iVar2 / iVar11;
            *(undefined4*)( *(long*)( **(long**)( this + 0x30 ) + lVar8 * 0x18 ) + 8 ) = *(undefined4*)( **(long**)( this + 0x28 ) + 0x10 );
            *(undefined4*)( *(long*)( **(long**)( this + 0x30 ) + lVar8 * 0x18 ) + 0xc ) = *(undefined4*)( **(long**)( this + 0x28 ) + 0x14 );
            *(int*)( *(long*)( **(long**)( this + 0x30 ) + lVar8 * 0x18 ) + 0x10 ) = (int)uVar6 - (int)uVar10;
            goto LAB_00107a38;
         }

      }

      LOCK();
      **(undefined1**)( this + 0x68 ) = 1;
      UNLOCK();
   }
 while ( true );
}
/* WARNING: Removing unreachable block (ram,0x001083a8) *//* WARNING: Type propagation algorithm not settling *//* tinyexr::ReadAttribute(std::__cxx11::string*, std::__cxx11::string*, std::vector<unsigned char,
   std::allocator<unsigned char> >*, unsigned long*, char const*, unsigned long) [clone
   .constprop.0] */undefined8 tinyexr::ReadAttribute(string *param_1, string *param_2, vector *param_3, ulong *param_4, char *param_5, ulong param_6) {
   char *pcVar1;
   uint *puVar2;
   undefined1 *puVar3;
   vector<unsigned_char,std::allocator<unsigned_char>> *pvVar4;
   long *plVar5;
   ulong *puVar6;
   vector *pvVar7;
   int iVar8;
   uint uVar9;
   size_t sVar10;
   size_t sVar11;
   undefined1 *puVar12;
   vector<unsigned_char,std::allocator<unsigned_char>> *pvVar13;
   undefined8 uVar14;
   string *psVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   vector<unsigned_char,std::allocator<unsigned_char>> *pvVar19;
   ulong uVar20;
   size_t __maxlen;
   char *pcVar21;
   ulong *puVar22;
   vector<unsigned_char,std::allocator<unsigned_char>> *__dest;
   char *pcVar23;
   vector<unsigned_char,std::allocator<unsigned_char>> *__n;
   long in_FS_OFFSET;
   ulong *puStack_120;
   undefined8 uStack_118;
   ulong auStack_110[2];
   ulong *puStack_100;
   ulong uStack_f8;
   ulong auStack_f0[2];
   undefined4 uStack_e0;
   undefined4 uStack_dc;
   undefined4 uStack_d8;
   undefined4 uStack_d4;
   char cStack_d0;
   undefined2 uStack_cf;
   undefined1 uStack_cd;
   long lStack_c8;
   vector<unsigned_char,std::allocator<unsigned_char>> *pvStack_b8;
   size_t sStack_b0;
   vector<unsigned_char,std::allocator<unsigned_char>> *pvStack_a8;
   size_t sStack_a0;
   uint *puStack_98;
   string *psStack_90;
   vector *local_80;
   ulong *local_78;
   string **local_70;
   string *local_68;
   undefined8 local_60;
   long alStack_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   psStack_90 = (string*)0x107c3f;
   local_80 = param_3;
   local_78 = param_4;
   sVar10 = strnlen(param_5, param_6);
   if (param_6 != sVar10) {
      local_70 = &local_68;
      psStack_90 = (string*)0x107c6b;
      local_68 = (string*)alStack_58;
      std::__cxx11::string::_M_construct<char_const*>(local_70, param_5, param_5 + sVar10);
      psVar15 = *(string**)param_1;
      if (psVar15 == param_1 + 0x10) {
         if (local_68 == (string*)alStack_58) goto LAB_00107ec0;
         *(string**)param_1 = local_68;
         *(ulong*)( param_1 + 8 ) = local_60;
         *(long*)( param_1 + 0x10 ) = alStack_58[0];
         local_68 = (string*)alStack_58;
      }
 else if (local_68 == (string*)alStack_58) {
         LAB_00107ec0:if (local_60 != 0) {
            if (local_60 == 1) {
               *psVar15 = alStack_58[0]._0_1_;
               psVar15 = *(string**)param_1;
            }
 else {
               uVar9 = (uint)local_60;
               uVar20 = local_60 & 0xffffffff;
               if (uVar9 < 8) {
                  if (( local_60 & 4 ) == 0) {
                     if (uVar9 != 0) {
                        *psVar15 = alStack_58[0]._0_1_;
                        if (( local_60 & 2 ) == 0) goto LAB_00107efe;
                        *(undefined2*)( psVar15 + ( uVar20 - 2 ) ) = *(undefined2*)( (long)alStack_58 + ( uVar20 - 2 ) );
                        psVar15 = *(string**)param_1;
                     }

                  }
 else {
                     *(undefined4*)psVar15 = (undefined4)alStack_58[0];
                     *(undefined4*)( psVar15 + ( uVar20 - 4 ) ) = *(undefined4*)( (long)alStack_58 + ( uVar20 - 4 ) );
                     psVar15 = *(string**)param_1;
                  }

               }
 else {
                  *(long*)psVar15 = alStack_58[0];
                  *(undefined8*)( psVar15 + ( ( local_60 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)alStack_58 + ( ( local_60 & 0xffffffff ) - 8 ) );
                  lVar17 = (long)psVar15 - ( ( ulong )(psVar15 + 8) & 0xfffffffffffffff8 );
                  uVar9 = (int)lVar17 + uVar9 & 0xfffffff8;
                  if (7 < uVar9) {
                     uVar18 = 0;
                     do {
                        uVar20 = (ulong)uVar18;
                        uVar18 = uVar18 + 8;
                        *(undefined8*)( ( ( ulong )(psVar15 + 8) & 0xfffffffffffffff8 ) + uVar20 ) = *(undefined8*)( (string*)alStack_58 + ( uVar20 - lVar17 ) );
                     }
 while ( uVar18 < uVar9 );
                  }

                  LAB_00107efe:psVar15 = *(string**)param_1;
               }

            }

         }

         *(ulong*)( param_1 + 8 ) = local_60;
         psVar15[local_60] = (string)0x0;
      }
 else {
         lVar17 = *(long*)( param_1 + 0x10 );
         *(string**)param_1 = local_68;
         *(ulong*)( param_1 + 8 ) = local_60;
         *(long*)( param_1 + 0x10 ) = alStack_58[0];
         local_68 = (string*)alStack_58;
         if (psVar15 != (string*)0x0) {
            local_68 = psVar15;
            alStack_58[0] = lVar17;
         }

      }

      local_60 = 0;
      *local_68 = (string)0x0;
      if (local_68 != (string*)alStack_58) {
         psStack_90 = (string*)0x107cd7;
         operator_delete(local_68, alStack_58[0] + 1);
      }

      pcVar1 = param_5 + sVar10 + 1;
      __maxlen = ( param_6 - 1 ) - sVar10;
      psStack_90 = (string*)0x107cee;
      sVar11 = strnlen(pcVar1, __maxlen);
      if (__maxlen != sVar11) {
         psStack_90 = (string*)0x107d10;
         local_68 = (string*)alStack_58;
         std::__cxx11::string::_M_construct<char_const*>(local_70, pcVar1, pcVar1 + sVar11);
         psVar15 = *(string**)param_2;
         if (psVar15 == param_2 + 0x10) {
            if (local_68 == (string*)alStack_58) goto LAB_00107f80;
            *(string**)param_2 = local_68;
            *(ulong*)( param_2 + 8 ) = local_60;
            *(long*)( param_2 + 0x10 ) = alStack_58[0];
            local_68 = (string*)alStack_58;
         }
 else if (local_68 == (string*)alStack_58) {
            LAB_00107f80:if (local_60 != 0) {
               if (local_60 == 1) {
                  *psVar15 = alStack_58[0]._0_1_;
                  psVar15 = *(string**)param_2;
               }
 else {
                  uVar9 = (uint)local_60;
                  uVar20 = local_60 & 0xffffffff;
                  if (uVar9 < 8) {
                     if (( local_60 & 4 ) == 0) {
                        if (uVar9 != 0) {
                           *psVar15 = alStack_58[0]._0_1_;
                           if (( local_60 & 2 ) == 0) goto LAB_00107fbe;
                           *(undefined2*)( psVar15 + ( uVar20 - 2 ) ) = *(undefined2*)( (long)alStack_58 + ( uVar20 - 2 ) );
                           psVar15 = *(string**)param_2;
                        }

                     }
 else {
                        *(undefined4*)psVar15 = (undefined4)alStack_58[0];
                        *(undefined4*)( psVar15 + ( uVar20 - 4 ) ) = *(undefined4*)( (long)alStack_58 + ( uVar20 - 4 ) );
                        psVar15 = *(string**)param_2;
                     }

                  }
 else {
                     *(long*)psVar15 = alStack_58[0];
                     *(undefined8*)( psVar15 + ( ( local_60 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)alStack_58 + ( ( local_60 & 0xffffffff ) - 8 ) );
                     lVar17 = (long)psVar15 - ( ( ulong )(psVar15 + 8) & 0xfffffffffffffff8 );
                     uVar9 = (int)lVar17 + uVar9 & 0xfffffff8;
                     if (7 < uVar9) {
                        uVar18 = 0;
                        do {
                           uVar20 = (ulong)uVar18;
                           uVar18 = uVar18 + 8;
                           *(undefined8*)( ( ( ulong )(psVar15 + 8) & 0xfffffffffffffff8 ) + uVar20 ) = *(undefined8*)( (string*)alStack_58 + ( uVar20 - lVar17 ) );
                        }
 while ( uVar18 < uVar9 );
                     }

                     LAB_00107fbe:psVar15 = *(string**)param_2;
                  }

               }

            }

            *(ulong*)( param_2 + 8 ) = local_60;
            psVar15[local_60] = (string)0x0;
         }
 else {
            lVar17 = *(long*)( param_2 + 0x10 );
            *(string**)param_2 = local_68;
            *(ulong*)( param_2 + 8 ) = local_60;
            *(long*)( param_2 + 0x10 ) = alStack_58[0];
            local_68 = (string*)alStack_58;
            if (psVar15 != (string*)0x0) {
               local_68 = psVar15;
               alStack_58[0] = lVar17;
            }

         }

         local_60 = 0;
         *local_68 = (string)0x0;
         if (local_68 != (string*)alStack_58) {
            psStack_90 = (string*)0x107d7f;
            operator_delete(local_68, alStack_58[0] + 1);
         }

         pvVar7 = local_80;
         if (3 < ( __maxlen - sVar11 ) - 1) {
            puVar2 = (uint*)( pcVar1 + sVar11 + 1 );
            if (*puVar2 == 0) {
               uVar20 = *(ulong*)( param_2 + 8 );
               if (( uVar20 < 7 ) && ( uVar20 != 0 )) {
                  psStack_90 = (string*)0x107dc3;
                  iVar8 = memcmp(*(void**)param_2, "string", uVar20);
                  pvVar7 = local_80;
                  if (( iVar8 == 0 ) && ( (int)uVar20 == 6 )) {
                     *local_78 = sVar10 + 6 + sVar11;
                     puVar3 = *(undefined1**)( local_80 + 8 );
                     puVar12 = *(undefined1**)local_80;
                     if (puVar3 == puVar12) {
                        psStack_90 = (string*)0x108082;
                        std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_default_append((vector<unsigned_char,std::allocator<unsigned_char>>*)local_80, 1);
                        puVar12 = *(undefined1**)pvVar7;
                     }
 else if (( (long)puVar3 - (long)puVar12 != 1 ) && ( puVar3 != puVar12 + 1 )) {
                        *(undefined1**)( local_80 + 8 ) = puVar12 + 1;
                     }

                     *puVar12 = 0;
                     goto LAB_00107eb5;
                  }

               }

            }
 else {
               __n = (vector<unsigned_char,std::allocator<unsigned_char>>*)( ulong ) * puVar2;
               pvStack_b8 = (vector<unsigned_char,std::allocator<unsigned_char>>*)( ( __maxlen - sVar11 ) - 5 );
               if (__n <= pvStack_b8) {
                  pvVar4 = *(vector<unsigned_char,std::allocator<unsigned_char>>**)( local_80 + 8 );
                  __dest = *(vector<unsigned_char,std::allocator<unsigned_char>>**)local_80;
                  pvVar19 = pvVar4 + -(long)__dest;
                  if (pvVar19 < __n) {
                     psStack_90 = (string*)0x107ff1;
                     std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_default_append((vector<unsigned_char,std::allocator<unsigned_char>>*)local_80, (long)__n - (long)pvVar19);
                     __dest = *(vector<unsigned_char,std::allocator<unsigned_char>>**)pvVar7;
                     pvVar13 = *(vector<unsigned_char,std::allocator<unsigned_char>>**)( pvVar7 + 8 );
                     pvStack_b8 = (vector<unsigned_char,std::allocator<unsigned_char>>*)pvVar7;
                  }
 else {
                     pvVar13 = pvVar4;
                     if (( __n < pvVar19 ) && ( pvVar13 = pvVar4 != pvVar13 )) {
                        *(vector<unsigned_char,std::allocator<unsigned_char>>**)( local_80 + 8 ) = pvVar13;
                     }

                  }

                  if (pvVar13 == __dest) {
                     puVar22 = (ulong*)0x0;
                     pcVar23 = _LC1;
                     psStack_90 = (string*)0x10817c;
                     std::__throw_out_of_range_fmt(_LC1, 0, 0);
                     pcVar1 = (char*)*puVar22;
                     lStack_c8 = *(long*)( in_FS_OFFSET + 0x28 );
                     uVar20 = (long)puVar22[1] - (long)pcVar1;
                     sStack_b0 = sVar10;
                     pvStack_a8 = __n;
                     sStack_a0 = sVar11;
                     puStack_98 = puVar2;
                     psStack_90 = (string*)alStack_58;
                     if (pcVar1 == (char*)puVar22[1]) {
                        std::__throw_out_of_range_fmt(_LC1, 0, 0);
                     }
 else {
                        if (*pcVar1 == '\0') {
                           LAB_0010848b:uVar14 = 1;
                        }
 else {
                           while (true) {
                              auStack_f0[0] = auStack_f0[0] & 0xffffffffffffff00;
                              uStack_dc = 0;
                              uStack_f8 = 0;
                              puStack_100 = auStack_f0;
                              if ((long)uVar20 < 0) break;
                              uStack_dc = 0;
                              uStack_f8 = 0;
                              uVar16 = 0;
                              pcVar21 = pcVar1;
                              if (uVar20 == 0) {
                                 LAB_001083bb:if (puStack_100 != auStack_f0) {
                                    operator_delete(puStack_100, auStack_f0[0] + 1);
                                 }

                                 break;
                              }

                              while (*pcVar21 != '\0') {
                                 pcVar21 = pcVar21 + 1;
                                 uVar16 = (long)pcVar21 - (long)pcVar1;
                                 if (uVar20 <= uVar16) goto LAB_001083bb;
                              }
;
                              if (uVar20 <= uVar16) goto LAB_001083bb;
                              uStack_118 = 0;
                              puStack_120 = auStack_110;
                              std::__cxx11::string::_M_construct<char_const*>(&puStack_120, pcVar1, pcVar21);
                              uVar20 = auStack_f0[0];
                              puVar6 = puStack_100;
                              if (puStack_120 == auStack_110) {
                                 if (uStack_118 != 0) {
                                    if (uStack_118 == 1) {
                                       *(undefined1*)puStack_100 = (undefined1)auStack_110[0];
                                       uStack_f8 = uStack_118;
                                       *(undefined1*)( (long)puStack_100 + 1 ) = 0;
                                       goto LAB_00108286;
                                    }

                                    uVar9 = (uint)uStack_118;
                                    uVar20 = uStack_118 & 0xffffffff;
                                    if (uVar9 < 8) {
                                       if (( uStack_118 & 4 ) == 0) {
                                          if (( uVar9 != 0 ) && ( *(undefined1*)puStack_100 = (undefined1)auStack_110[0](uStack_118 & 2) != 0 )) {
                                             *(undefined2*)( (long)puStack_100 + ( uVar20 - 2 ) ) = *(undefined2*)( (long)auStack_110 + ( uVar20 - 2 ) );
                                          }

                                       }
 else {
                                          *(undefined4*)puStack_100 = (undefined4)auStack_110[0];
                                          *(undefined4*)( (long)puStack_100 + ( uVar20 - 4 ) ) = *(undefined4*)( (long)auStack_110 + ( uVar20 - 4 ) );
                                       }

                                    }
 else {
                                       *puStack_100 = auStack_110[0];
                                       *(undefined8*)( (long)puStack_100 + ( ( uStack_118 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)auStack_110 + ( ( uStack_118 & 0xffffffff ) - 8 ) );
                                       lVar17 = (long)puStack_100 - ( ( ulong )(puStack_100 + 1) & 0xfffffffffffffff8 );
                                       uVar9 = (int)lVar17 + uVar9 & 0xfffffff8;
                                       if (7 < uVar9) {
                                          uVar18 = 0;
                                          do {
                                             uVar20 = (ulong)uVar18;
                                             uVar18 = uVar18 + 8;
                                             *(undefined8*)( ( ( ulong )(puStack_100 + 1) & 0xfffffffffffffff8 ) + uVar20 ) = *(undefined8*)( (long)auStack_110 + ( uVar20 - lVar17 ) );
                                          }
 while ( uVar18 < uVar9 );
                                       }

                                    }

                                 }

                                 *(undefined1*)( (long)puStack_100 + uStack_118 ) = 0;
                                 uStack_f8 = uStack_118;
                              }
 else {
                                 if (puStack_100 != auStack_f0) {
                                    puStack_100 = puStack_120;
                                    uStack_f8 = uStack_118;
                                    auStack_f0[0] = auStack_110[0];
                                    if (puVar6 != (ulong*)0x0) {
                                       puStack_120 = puVar6;
                                       auStack_110[0] = uVar20;
                                       goto LAB_00108286;
                                    }

                                 }

                                 auStack_f0[0] = auStack_110[0];
                                 uStack_f8 = uStack_118;
                                 puStack_100 = puStack_120;
                                 puStack_120 = auStack_110;
                              }

                              LAB_00108286:uStack_118 = 0;
                              *(undefined1*)puStack_120 = 0;
                              if (puStack_120 != auStack_110) {
                                 operator_delete(puStack_120, auStack_110[0] + 1);
                              }

                              pcVar1 = pcVar21 + 0x11;
                              if ((char*)puVar22[1] <= pcVar1) goto LAB_001083bb;
                              uStack_e0 = *(undefined4*)( pcVar21 + 1 );
                              plVar5 = *(long**)( (vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>>*)pcVar23 + 8 );
                              cStack_d0 = pcVar21[5];
                              uStack_d8 = *(undefined4*)( pcVar21 + 9 );
                              uStack_d4 = *(undefined4*)( pcVar21 + 0xd );
                              if (plVar5 == *(long**)( (vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>>*)pcVar23 + 0x10 )) {
                                 std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>>::_M_realloc_insert<tinyexr::TChannelInfo_const&>((vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>>*)pcVar23, plVar5, &puStack_100);
                              }
 else {
                                 *plVar5 = (long)( plVar5 + 2 );
                                 std::__cxx11::string::_M_construct<char*>(plVar5, puStack_100, (undefined1*)( uStack_f8 + (long)puStack_100 ));
                                 *(char*)( plVar5 + 6 ) = cStack_d0;
                                 plVar5[4] = CONCAT44(uStack_dc, uStack_e0);
                                 plVar5[5] = CONCAT44(uStack_d4, uStack_d8);
                                 *(undefined2*)( (long)plVar5 + 0x31 ) = uStack_cf;
                                 *(undefined1*)( (long)plVar5 + 0x33 ) = uStack_cd;
                                 *(long*)( (vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>>*)pcVar23 + 8 ) = *(long*)( (vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>>*)pcVar23 + 8 ) + 0x38;
                              }

                              if (puStack_100 != auStack_f0) {
                                 operator_delete(puStack_100, auStack_f0[0] + 1);
                              }

                              if (pcVar21[0x11] == '\0') goto LAB_0010848b;
                              uVar20 = puVar22[1] - (long)pcVar1;
                           }
;
                           uVar14 = 0;
                        }

                        if (lStack_c8 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           return uVar14;
                        }

                     }

                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  psStack_90 = (string*)0x107ea5;
                  memcpy(__dest, puVar2 + 1, (size_t)__n);
                  *local_78 = ( ulong )(__n + sVar10 + 6 + sVar11);
                  LAB_00107eb5:uVar14 = 1;
                  goto LAB_00107e22;
               }

            }

         }

      }

   }

   uVar14 = 0;
   LAB_00107e22:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar14;
   }

   /* WARNING: Subroutine does not return */
   psStack_90 = (string*)0x10816a;
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x001083a8) *//* tinyexr::ReadChannelInfo(std::vector<tinyexr::TChannelInfo, std::allocator<tinyexr::TChannelInfo>
   >&, std::vector<unsigned char, std::allocator<unsigned char> > const&) */undefined8 tinyexr::ReadChannelInfo(vector *param_1, vector *param_2) {
   char *pcVar1;
   long *plVar2;
   ulong *puVar3;
   uint uVar4;
   ulong uVar5;
   undefined8 uVar6;
   long lVar7;
   uint uVar8;
   ulong uVar9;
   char *pcVar10;
   long in_FS_OFFSET;
   ulong *local_98;
   undefined8 local_90;
   ulong auStack_88[2];
   ulong *local_78;
   ulong local_70;
   ulong auStack_68[2];
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   char local_48;
   undefined2 local_47;
   undefined1 local_45;
   long local_40;
   pcVar1 = *(char**)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = (long)*(char**)( param_2 + 8 ) - (long)pcVar1;
   if (pcVar1 == *(char**)( param_2 + 8 )) {
      std::__throw_out_of_range_fmt(_LC1, 0, 0);
   }
 else {
      if (*pcVar1 == '\0') {
         LAB_0010848b:uVar6 = 1;
      }
 else {
         auStack_68[0] = auStack_68[0] & 0xffffffffffffff00;
         while (true) {
            uStack_54 = 0;
            local_70 = 0;
            local_78 = auStack_68;
            if ((long)uVar9 < 0) break;
            uStack_54 = 0;
            local_70 = 0;
            uVar5 = 0;
            pcVar10 = pcVar1;
            if (uVar9 == 0) {
               LAB_001083bb:if (local_78 != auStack_68) {
                  operator_delete(local_78, auStack_68[0] + 1);
               }

               break;
            }

            while (*pcVar10 != '\0') {
               pcVar10 = pcVar10 + 1;
               uVar5 = (long)pcVar10 - (long)pcVar1;
               if (uVar9 <= uVar5) goto LAB_001083bb;
            }
;
            if (uVar9 <= uVar5) goto LAB_001083bb;
            local_90 = 0;
            local_98 = auStack_88;
            std::__cxx11::string::_M_construct<char_const*>(&local_98, pcVar1, pcVar10);
            uVar9 = auStack_68[0];
            puVar3 = local_78;
            if (local_98 == auStack_88) {
               if (local_90 != 0) {
                  if (local_90 == 1) {
                     *(undefined1*)local_78 = (undefined1)auStack_88[0];
                     local_70 = local_90;
                     *(undefined1*)( (long)local_78 + 1 ) = 0;
                     goto LAB_00108286;
                  }

                  uVar4 = (uint)local_90;
                  uVar9 = local_90 & 0xffffffff;
                  if (uVar4 < 8) {
                     if (( local_90 & 4 ) == 0) {
                        if (( uVar4 != 0 ) && ( *(undefined1*)local_78 = (undefined1)auStack_88[0](local_90 & 2) != 0 )) {
                           *(undefined2*)( (long)local_78 + ( uVar9 - 2 ) ) = *(undefined2*)( (long)auStack_88 + ( uVar9 - 2 ) );
                        }

                     }
 else {
                        *(undefined4*)local_78 = (undefined4)auStack_88[0];
                        *(undefined4*)( (long)local_78 + ( uVar9 - 4 ) ) = *(undefined4*)( (long)auStack_88 + ( uVar9 - 4 ) );
                     }

                  }
 else {
                     *local_78 = auStack_88[0];
                     *(undefined8*)( (long)local_78 + ( ( local_90 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)auStack_88 + ( ( local_90 & 0xffffffff ) - 8 ) );
                     lVar7 = (long)local_78 - ( ( ulong )(local_78 + 1) & 0xfffffffffffffff8 );
                     uVar4 = (int)lVar7 + uVar4 & 0xfffffff8;
                     if (7 < uVar4) {
                        uVar8 = 0;
                        do {
                           uVar9 = (ulong)uVar8;
                           uVar8 = uVar8 + 8;
                           *(undefined8*)( ( ( ulong )(local_78 + 1) & 0xfffffffffffffff8 ) + uVar9 ) = *(undefined8*)( (long)auStack_88 + ( uVar9 - lVar7 ) );
                        }
 while ( uVar8 < uVar4 );
                     }

                  }

               }

               *(undefined1*)( (long)local_78 + local_90 ) = 0;
               local_70 = local_90;
            }
 else {
               if (local_78 != auStack_68) {
                  local_78 = local_98;
                  local_70 = local_90;
                  auStack_68[0] = auStack_88[0];
                  if (puVar3 != (ulong*)0x0) {
                     local_98 = puVar3;
                     auStack_88[0] = uVar9;
                     goto LAB_00108286;
                  }

               }

               auStack_68[0] = auStack_88[0];
               local_70 = local_90;
               local_78 = local_98;
               local_98 = auStack_88;
            }

            LAB_00108286:local_90 = 0;
            *(undefined1*)local_98 = 0;
            if (local_98 != auStack_88) {
               operator_delete(local_98, auStack_88[0] + 1);
            }

            pcVar1 = pcVar10 + 0x11;
            if (*(char**)( param_2 + 8 ) <= pcVar1) goto LAB_001083bb;
            local_58 = *(undefined4*)( pcVar10 + 1 );
            plVar2 = *(long**)( param_1 + 8 );
            local_48 = pcVar10[5];
            uStack_50 = *(undefined4*)( pcVar10 + 9 );
            uStack_4c = *(undefined4*)( pcVar10 + 0xd );
            if (plVar2 == *(long**)( param_1 + 0x10 )) {
               std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>>::_M_realloc_insert<tinyexr::TChannelInfo_const&>((vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>>*)param_1, plVar2, &local_78);
            }
 else {
               *plVar2 = (long)( plVar2 + 2 );
               std::__cxx11::string::_M_construct<char*>(plVar2, local_78, (undefined1*)( local_70 + (long)local_78 ));
               *(char*)( plVar2 + 6 ) = local_48;
               plVar2[4] = CONCAT44(uStack_54, local_58);
               plVar2[5] = CONCAT44(uStack_4c, uStack_50);
               *(undefined2*)( (long)plVar2 + 0x31 ) = local_47;
               *(undefined1*)( (long)plVar2 + 0x33 ) = local_45;
               *(long*)( param_1 + 8 ) = *(long*)( param_1 + 8 ) + 0x38;
            }

            if (local_78 != auStack_68) {
               operator_delete(local_78, auStack_68[0] + 1);
            }

            if (pcVar10[0x11] == '\0') goto LAB_0010848b;
            auStack_68[0] = auStack_68[0] & 0xffffffffffffff00;
            uVar9 = *(long*)( param_2 + 8 ) - (long)pcVar1;
         }
;
         uVar6 = 0;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar6;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */undefined8 LoadDeepEXR(undefined8 *param_1, char *param_2, allocator *param_3) {
   string *psVar1;
   size_t __size;
   size_t sVar2;
   vector *__s1;
   char cVar3;
   int __fd;
   int iVar4;
   int iVar5;
   vector *pvVar6;
   char *pcVar7;
   long *plVar8;
   undefined8 *puVar9;
   void *pvVar10;
   undefined8 *puVar11;
   vector *pvVar12;
   undefined4 *puVar13;
   void *pvVar14;
   int iVar15;
   uint *puVar16;
   float fVar17;
   uint uVar18;
   uint uVar19;
   allocator *extraout_RDX;
   allocator *extraout_RDX_00;
   allocator *extraout_RDX_01;
   ulong uVar20;
   allocator *extraout_RDX_02;
   string *psVar21;
   allocator *paVar22;
   long lVar23;
   long lVar24;
   long lVar25;
   undefined8 *puVar26;
   ulong uVar27;
   vector *pvVar28;
   string *psVar29;
   undefined4 *puVar30;
   ulong uVar31;
   undefined8 uVar32;
   allocator *paVar33;
   vector *pvVar34;
   vector *pvVar35;
   allocator *paVar36;
   long in_FS_OFFSET;
   bool bVar37;
   vector *local_348;
   ulong local_340;
   vector *local_330;
   int local_31c;
   uint local_318;
   vector *local_310;
   long *local_308;
   uint local_300;
   vector *local_2f8;
   allocator *local_2f0;
   vector *local_2d8;
   ulong local_2d0;
   long local_2c8;
   allocator **local_2c0;
   long *local_2a8;
   long local_2a0;
   vector *local_298;
   ulong local_290;
   size_t local_288;
   allocator *local_280;
   ulong local_278;
   allocator *local_270;
   undefined1 local_268[16];
   long local_258;
   undefined1 local_248[16];
   long local_238;
   vector *local_228;
   allocator *local_220;
   vector local_218;
   undefined7 uStack_217;
   vector *local_208;
   undefined8 local_200;
   vector local_1f8;
   undefined7 uStack_1f7;
   long *local_1e8[2];
   long local_1d8[2];
   undefined1 local_1c8[16];
   code *local_1b8[4];
   size_t local_198;
   locale local_178[16];
   long *local_168;
   long local_158[2];
   code *local_148[33];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (undefined8*)0x0) {
      std::__cxx11::string::string<std::allocator<char>>((string*)local_1c8, "Invalid argument for LoadDeepEXR", param_3);
      if (param_3 != (allocator*)0x0) {
         tinyexr::SetErrorMessage((string*)local_1c8._0_8_, (char**)param_3);
      }

      uVar32 = 0xfffffffd;
      std::__cxx11::string::_M_dispose();
      goto LAB_001089b9;
   }

   __fd = open64(param_2, 0);
   paVar36 = extraout_RDX;
   if (__fd == -1) {
      LAB_001089e8:std::__cxx11::string::string<std::allocator<char>>((string*)local_1e8, param_2, paVar36);
      plVar8 = (long*)std::__cxx11::string::_M_replace((ulong)local_1e8, 0, (char*)0x0, 0x1189a7);
      psVar1 = (string*)( plVar8 + 2 );
      if ((string*)*plVar8 == psVar1) {
         uVar31 = plVar8[1] + 1;
         psVar21 = psVar1;
         psVar29 = (string*)local_1b8;
         if (7 < (uint)uVar31) {
            uVar20 = 0;
            do {
               uVar18 = (int)uVar20 + 8;
               uVar27 = (ulong)uVar18;
               *(undefined8*)( (string*)local_1b8 + uVar20 ) = *(undefined8*)( psVar1 + uVar20 );
               uVar20 = uVar27;
            }
 while ( uVar18 < ( (uint)uVar31 & 0xfffffff8 ) );
            psVar29 = (string*)local_1b8 + uVar27;
            psVar21 = psVar1 + uVar27;
         }

         lVar25 = 0;
         if (( uVar31 & 4 ) != 0) {
            *(undefined4*)psVar29 = *(undefined4*)psVar21;
            lVar25 = 4;
         }

         if (( uVar31 & 2 ) != 0) {
            *(undefined2*)( psVar29 + lVar25 ) = *(undefined2*)( psVar21 + lVar25 );
            lVar25 = lVar25 + 2;
         }

         local_1c8._0_8_ = (string*)local_1b8;
         if (( uVar31 & 1 ) != 0) {
            psVar29[lVar25] = psVar21[lVar25];
         }

      }
 else {
         local_1b8[0] = (code*)plVar8[2];
         local_1c8._0_8_ = (string*)*plVar8;
      }

      local_1c8._8_8_ = plVar8[1];
      *plVar8 = (long)psVar1;
      plVar8[1] = 0;
      *(undefined1*)( plVar8 + 2 ) = 0;
      if (param_3 != (allocator*)0x0) {
         pcVar7 = strdup((char*)local_1c8._0_8_);
         *(char**)param_3 = pcVar7;
      }

      if ((string*)local_1c8._0_8_ != (string*)local_1b8) {
         operator_delete((void*)local_1c8._0_8_, ( ulong )(local_1b8[0] + 1));
      }

      if (local_1e8[0] != local_1d8) {
         operator_delete(local_1e8[0], local_1d8[0] + 1);
      }

      uVar32 = 0xfffffff9;
      if (__fd == -1) goto LAB_001089b9;
   }
 else {
      iVar4 = fstat64(__fd, (stat64*)local_1c8);
      paVar36 = extraout_RDX_00;
      if (( iVar4 < 0 ) || ( (long)local_198 < 0 )) goto LAB_001089e8;
      pvVar6 = (vector*)mmap64((void*)0x0, local_198, 1, 1, __fd, 0);
      paVar36 = extraout_RDX_01;
      if (( pvVar6 == (vector*)0xffffffffffffffff ) || ( pvVar6 == (vector*)0x0 )) goto LAB_001089e8;
      if (local_198 == 0) {
         std::__cxx11::string::string<std::allocator<char>>((string*)local_1e8, param_2, extraout_RDX_01);
         plVar8 = (long*)std::__cxx11::string::_M_replace((ulong)local_1e8, 0, (char*)0x0, 0x1189b9);
         psVar1 = (string*)( plVar8 + 2 );
         if ((string*)*plVar8 == psVar1) {
            uVar31 = plVar8[1] + 1;
            psVar21 = psVar1;
            psVar29 = (string*)local_1b8;
            if (7 < (uint)uVar31) {
               uVar20 = 0;
               do {
                  uVar18 = (int)uVar20 + 8;
                  uVar27 = (ulong)uVar18;
                  *(undefined8*)( (string*)local_1b8 + uVar20 ) = *(undefined8*)( psVar1 + uVar20 );
                  uVar20 = uVar27;
               }
 while ( uVar18 < ( (uint)uVar31 & 0xfffffff8 ) );
               psVar29 = (string*)local_1b8 + uVar27;
               psVar21 = psVar1 + uVar27;
            }

            lVar25 = 0;
            if (( uVar31 & 4 ) != 0) {
               *(undefined4*)psVar29 = *(undefined4*)psVar21;
               lVar25 = 4;
            }

            if (( uVar31 & 2 ) != 0) {
               *(undefined2*)( psVar29 + lVar25 ) = *(undefined2*)( psVar21 + lVar25 );
               lVar25 = lVar25 + 2;
            }

            local_1c8._0_8_ = (string*)local_1b8;
            if (( uVar31 & 1 ) != 0) {
               psVar29[lVar25] = psVar21[lVar25];
            }

         }
 else {
            local_1b8[0] = (code*)plVar8[2];
            local_1c8._0_8_ = (string*)*plVar8;
         }

         local_1c8._8_8_ = plVar8[1];
         *plVar8 = (long)psVar1;
         plVar8[1] = 0;
         *(undefined1*)( plVar8 + 2 ) = 0;
         if (param_3 != (allocator*)0x0) {
            pcVar7 = strdup((char*)local_1c8._0_8_);
            *(char**)param_3 = pcVar7;
         }

         if ((string*)local_1c8._0_8_ != (string*)local_1b8) {
            operator_delete((void*)local_1c8._0_8_, ( ulong )(local_1b8[0] + 1));
         }

         if (local_1e8[0] != local_1d8) {
            operator_delete(local_1e8[0], local_1d8[0] + 1);
         }

         uVar32 = 0xfffffffb;
      }
 else if (_LC25 == *(int*)pvVar6) {
         paVar36 = param_3;
         if (( ( ( pvVar6[4] == (vector)0x2 ) && ( pvVar6[5] == (vector)0x8 ) ) && ( pvVar6[6] == (vector)0x0 ) ) && ( pvVar6[7] == (vector)0x0 )) {
            pvVar34 = pvVar6 + 8;
            local_258 = 0;
            local_268 = (undefined1[16])0x0;
            uVar31 = local_198 - 8;
            if (uVar31 == 0) {
               uVar32 = 0xfffffffc;
            }
 else {
               local_310 = (vector*)CONCAT44(local_310._4_4_, 0xffffffff);
               local_318 = 0xffffffff;
               local_31c = -1;
               local_348._0_4_ = 0xffffffff;
               local_340._0_4_ = 1;
               local_308 = (long*)CONCAT44(local_308._4_4_, 0xffffffff);
               local_300 = 0xffffffff;
               iVar4 = 0x11f140;
               do {
            local_2f0 = param_3;
            if (*pvVar34 == (vector)0x0) {
              if ((-1 < (int)(local_318 | (uint)local_308 | (uint)local_310 | local_300)) &&
                 (0 < local_31c)) {
                iVar15 = local_300 - (uint)local_308;
                uVar18 = iVar15 + 1;
                local_2f8 = (vector *)(ulong)uVar18;
                bVar37 = (int)local_340 * ((int)uVar18 / (int)local_340) < (int)uVar18;
                paVar36 = (allocator *)(ulong)bVar37;
                uVar31 = (ulong)(int)((int)uVar18 / (int)local_340 + (uint)bVar37);
                if (uVar31 >> 0x3c != 0) goto LAB_00109f8a;
                if (uVar31 == 0) {
                  local_308 = (long *)0x0;
                  local_2a8 = (long *)0x0;
                }
                else {
                  local_308 = (long *)operator_new(uVar31 * 8);
                  local_2a8 = local_308 + uVar31;
                  *local_308 = 0;
                  if ((uVar31 != 1) && (local_308 + 1 != local_2a8)) {
                    memset(local_308 + 1,0,uVar31 * 8 - 8);
                  }
                  uVar20 = 0;
                  do {
                    paVar36 = *(allocator **)(pvVar34 + uVar20 * 8 + 1);
                    local_308[uVar20] = (long)paVar36;
                    uVar20 = uVar20 + 1;
                  } while (uVar31 != uVar20);
                }
                if ((uint)local_348 < 5) {
                  pvVar35 = (vector *)(long)local_31c;
                  lVar25 = 0;
                  local_288 = (long)pvVar35 * 8;
                  pvVar14 = malloc(local_288);
                  param_1[1] = pvVar14;
                  do {
                    pvVar10 = malloc((long)(int)uVar18 << 3);
                    *(void **)((long)pvVar14 + lVar25 * 8) = pvVar10;
                    lVar25 = lVar25 + 1;
                  } while ((int)lVar25 < local_31c);
                  iVar4 = ((uint)local_310 - local_318) + 1;
                  puVar11 = (undefined8 *)malloc((long)(int)uVar18 << 3);
                  param_1[2] = puVar11;
                  if (0 < (int)uVar18) {
                    puVar9 = puVar11;
                    do {
                      puVar26 = puVar9 + 1;
                      pvVar14 = malloc((long)iVar4 << 2);
                      *puVar9 = pvVar14;
                      puVar9 = puVar26;
                    } while (puVar26 != puVar11 + (long)iVar15 + 1);
                  }
                  if (uVar31 != 0) {
                    local_290 = (ulong)iVar4;
                    pvVar34 = pvVar6 + *local_308;
                    uVar20 = *(ulong *)(pvVar34 + 4);
                    local_340 = *(ulong *)(pvVar34 + 0xc);
                    pvVar28 = *(vector **)(pvVar34 + 0x14);
                    if (local_290 >> 0x3d == 0) {
                      if (local_290 != 0) {
                        local_2f0 = (allocator *)(local_290 << 2);
                        local_2d0 = (long)pvVar35 * 4;
                        local_2c8 = (long)(int)((uint)local_310 - local_318);
                        local_330 = (vector *)0x0;
                        local_2a0 = local_2c8 << 2;
                        local_298 = (vector *)(uVar31 * 8 + -8);
                        local_2c0 = &local_270;
                        local_310 = pvVar6;
                        local_280 = param_3;
                        goto LAB_0010977c;
                      }
                      local_270 = (allocator *)0x0;
                      pvVar35 = pvVar6;
                      paVar36 = param_3;
                      local_330 = pvVar6;
LAB_00109cdf:
                      std::__throw_out_of_range_fmt(_LC1,0,0);
LAB_00109cf8:
                      local_2d8 = (vector *)0x0;
                      pvVar12 = (vector *)0x0;
                      local_348 = (vector *)0x0;
                      paVar33 = paVar36;
                      do {
                        puVar13 = (undefined4 *)operator_new(local_2d0);
                        *puVar13 = 0;
                        if ((pvVar35 != (vector *)0x1) &&
                           (puVar13 + 1 != (undefined4 *)((long)puVar13 + local_2d0))) {
                          memset(puVar13 + 1,0,local_2d0 - 4);
                        }
                        iVar15 = 0;
                        pvVar6 = (vector *)0x0;
                        paVar22 = (allocator *)(local_268._0_8_ + 0x20);
                        do {
                          puVar13[(long)pvVar6] = iVar15;
                          iVar5 = *(int *)paVar22;
                          paVar36 = paVar33;
                          puVar30 = puVar13;
                          if (iVar5 == 0) {
LAB_00109941:
                            iVar15 = iVar15 + 4;
                          }
                          else {
                            if (iVar5 != 1) {
                              if (iVar5 == 2) goto LAB_00109941;
                              std::__cxx11::string::string<std::allocator<char>>
                                        ((string *)local_1c8,"Invalid pixel_type in chnnels.",
                                         paVar22);
                              if (local_280 != (allocator *)0x0) {
                                tinyexr::SetErrorMessage
                                          ((string *)local_1c8._0_8_,(char **)local_280);
                              }
                              std::__cxx11::string::_M_dispose();
                              goto LAB_00109e0a;
                            }
                            iVar15 = iVar15 + 2;
                          }
                          pvVar6 = pvVar6 + 1;
                          paVar22 = paVar22 + 0x38;
                        } while (pvVar6 < pvVar35);
                        if ((iVar15 < 2) ||
                           (uVar31 = (long)local_348 - (long)pvVar12,
                           (long)(*(int *)(paVar33 + local_2a0) * iVar15) != uVar31)) {
LAB_00109e0a:
                          uVar32 = 0xfffffffc;
                          operator_delete(puVar30,local_2d0);
                          if (pvVar12 == (vector *)0x0) goto LAB_00109e4c;
                          pvVar28 = local_2d8 + -(long)pvVar12;
                          goto LAB_00109e3a;
                        }
                        pvVar6 = (vector *)0x0;
                        uVar20 = 0;
                        lVar24 = (long)(int)((long)((ulong)(uint)((int)uVar31 >> 0x1f) << 0x20 |
                                                   uVar31 & 0xffffffff) / (long)iVar15);
                        __size = lVar24 * 4;
                        lVar25 = param_1[1];
                        paVar36 = (allocator *)(local_268._0_8_ + 0x20);
                        do {
                          lVar23 = *(long *)(lVar25 + (long)pvVar6 * 8);
                          pvVar14 = malloc(__size);
                          *(void **)(local_330 + lVar23) = pvVar14;
                          uVar27 = uVar20;
                          sVar2 = __size;
                          if (*(int *)paVar36 == 0) {
                            if (lVar24 != 0) {
                              if (uVar31 <= uVar20) goto LAB_00109f0a;
                              lVar23 = 0;
                              while( true ) {
                                *(float *)((long)pvVar14 + lVar23 * 4) =
                                     (float)*(uint *)(pvVar12 + uVar27);
                                lVar23 = lVar23 + 1;
                                if (lVar24 == lVar23) break;
                                uVar27 = uVar27 + 4;
                                if (uVar31 <= uVar27) goto LAB_00109f0a;
                              }
                            }
                          }
                          else if (*(int *)paVar36 == 1) {
                            sVar2 = lVar24 * 2;
                            if (lVar24 != 0) {
                              if (uVar31 <= uVar20) {
LAB_00109f0a:
                                std::__throw_out_of_range_fmt(_LC1,uVar27,uVar31);
                                goto LAB_00109e0a;
                              }
                              lVar23 = 0;
                              puVar30 = (undefined4 *)((long)pvVar14 + uVar20 * -2);
                              while( true ) {
                                uVar18 = (uint)*(ushort *)(pvVar12 + uVar27) << 0xd;
                                uVar19 = uVar18 & 0xf800000;
                                uVar18 = uVar18 & 0xfffe000;
                                if (uVar19 == 0xf800000) {
                                  fVar17 = (float)(uVar18 + 0x70000000);
                                }
                                else if (uVar19 == 0) {
                                  fVar17 = (float)(uVar18 + 0x38800000) - _LC6;
                                }
                                else {
                                  fVar17 = (float)(uVar18 + 0x38000000);
                                }
                                lVar23 = lVar23 + 1;
                                *(uint *)((long)puVar30 + uVar27 * 2) =
                                     (*(ushort *)(pvVar12 + uVar27) & 0x8000) << 0x10 | (uint)fVar17
                                ;
                                if (lVar24 == lVar23) break;
                                uVar27 = uVar27 + 2;
                                if (uVar31 <= uVar27) goto LAB_00109f0a;
                              }
                            }
                          }
                          else if (lVar24 != 0) {
                            if (uVar31 <= uVar20) goto LAB_00109f0a;
                            lVar23 = 0;
                            while( true ) {
                              *(undefined4 *)((long)pvVar14 + lVar23 * 4) =
                                   *(undefined4 *)(pvVar12 + uVar27);
                              lVar23 = lVar23 + 1;
                              if (lVar24 == lVar23) break;
                              uVar27 = uVar27 + 4;
                              if (uVar31 <= uVar27) goto LAB_00109f0a;
                            }
                          }
                          uVar20 = uVar20 + sVar2;
                          pvVar6 = pvVar6 + 1;
                          paVar36 = paVar36 + 0x38;
                        } while (pvVar6 < pvVar35);
                        operator_delete(puVar13,local_2d0);
                        if (pvVar12 != (vector *)0x0) {
                          operator_delete(pvVar12,(long)local_2d8 - (long)pvVar12);
                        }
                        operator_delete(paVar33,(ulong)local_2f0);
                        pvVar6 = local_310;
                        uVar18 = (uint)local_2f8;
                        if (local_298 == local_330) goto LAB_00109e95;
                        local_330 = local_330 + 8;
                        pvVar34 = local_310 + *(long *)((long)local_308 + (long)local_330);
                        local_340 = *(ulong *)(pvVar34 + 0xc);
                        uVar20 = *(ulong *)(pvVar34 + 4);
                        pvVar28 = *(vector **)(pvVar34 + 0x14);
LAB_0010977c:
                        paVar36 = (allocator *)operator_new((ulong)local_2f0);
                        *(int *)paVar36 = 0;
                        if ((local_290 == 1) || (paVar36 + 4 == local_2f0 + (long)paVar36)) {
                          paVar33 = (allocator *)0x4;
                        }
                        else {
                          memset(paVar36 + 4,0,(size_t)(local_2f0 + -4));
                          paVar33 = local_2f0;
                        }
                        local_270 = paVar33;
                        cVar3 = tinyexr::DecompressZip
                                          ((uchar *)paVar36,(ulong *)local_2c0,
                                           (uchar *)(pvVar34 + 0x1c),uVar20);
                        if (cVar3 == '\0') {
                          uVar32 = 0;
                          goto LAB_00109e4c;
                        }
                        if (local_270 != paVar33) {
                          uVar32 = 0xfffffffc;
                          goto LAB_00109e4c;
                        }
                        lVar25 = *(long *)(local_330 + param_1[2]);
                        lVar24 = 0;
                        do {
                          *(undefined4 *)(lVar25 + lVar24 * 4) =
                               *(undefined4 *)(paVar36 + lVar24 * 4);
                          bVar37 = local_2c8 != lVar24;
                          lVar24 = lVar24 + 1;
                        } while (bVar37);
                        if ((long)pvVar28 < 0) break;
                        if (pvVar28 == (vector *)0x0) goto LAB_00109cf8;
                        pvVar12 = (vector *)operator_new((ulong)pvVar28);
                        local_2d8 = pvVar12 + (long)pvVar28;
                        *pvVar12 = (vector)0x0;
                        pvVar6 = (vector *)0x1;
                        local_348 = pvVar12 + 1;
                        if (pvVar28 != (vector *)0x1) {
                          memset(pvVar12 + 1,0,(size_t)(pvVar28 + -1));
                          pvVar6 = pvVar28;
                          local_348 = local_2d8;
                        }
                        local_248._0_8_ = pvVar6;
                        std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_check
                                  ((ulong)pvVar12);
                        cVar3 = tinyexr::DecompressZip
                                          ((uchar *)pvVar12,(ulong *)local_248,
                                           (uchar *)(pvVar34 + uVar20 + 0x1c),local_340);
                        if (cVar3 == '\0') {
                          uVar32 = 0;
                          goto LAB_00109e3a;
                        }
                        paVar33 = paVar36;
                        if ((vector *)local_248._0_8_ != pvVar28) goto LAB_00109f74;
                      } while( true );
                    }
LAB_00109f8a:
                    /* WARNING: Subroutine does not return */
                    std::__throw_length_error("cannot create std::vector larger than max_size()");
                  }
LAB_00109e95:
                  local_2f8._0_4_ = uVar18;
                  pvVar34 = (vector *)0x0;
                  *(int *)((long)param_1 + 0x1c) = iVar4;
                  *(uint *)(param_1 + 4) = (uint)local_2f8;
                  pvVar14 = malloc(local_288);
                  *param_1 = pvVar14;
                  lVar25 = 0;
                  do {
                    puVar11 = (undefined8 *)(local_268._0_8_ + lVar25);
                    lVar25 = lVar25 + 0x38;
                    pcVar7 = strdup((char *)*puVar11);
                    *(char **)((long)pvVar14 + (long)pvVar34 * 8) = pcVar7;
                    pvVar34 = pvVar34 + 1;
                  } while (pvVar34 < pvVar35);
                  uVar32 = 0;
                  *(int *)(param_1 + 3) = local_31c;
                  local_310 = pvVar6;
                }
                else {
                  std::__cxx11::string::string<std::allocator<char>>
                            ((string *)local_1c8,"Unsupported compression format",paVar36);
                  if (param_3 != (allocator *)0x0) {
                    tinyexr::SetErrorMessage((string *)local_1c8._0_8_,(char **)param_3);
                  }
                  uVar32 = 0xfffffff8;
                  std::__cxx11::string::_M_dispose();
                  local_310 = pvVar6;
                }
                pvVar6 = local_310;
                if (local_308 != (long *)0x0) {
LAB_00109e59:
                  operator_delete(local_308,(long)local_2a8 - (long)local_308);
                  pvVar6 = local_310;
                }
                puVar9 = (undefined8 *)local_268._8_8_;
                puVar11 = (undefined8 *)local_268._0_8_;
LAB_00108ff0:
                uVar31 = local_258 - (long)puVar11;
                puVar26 = puVar11;
                goto joined_r0x00109007;
              }
              break;
            }
            pvVar12 = &local_218;
            pvVar28 = &local_1f8;
            local_220 = (allocator *)0x0;
            local_218 = (vector)0x0;
            local_200 = 0;
            local_1f8 = (vector)0x0;
            local_238 = 0;
            local_248 = (undefined1  [16])0x0;
            local_228 = pvVar12;
            local_208 = pvVar28;
            cVar3 = tinyexr::ReadAttribute
                              ((string *)&local_228,(string *)&local_208,(vector *)local_248,
                               &local_278,(char *)pvVar34,uVar31);
            paVar36 = local_220;
            __s1 = local_228;
            if (cVar3 == '\0') {
              std::__cxx11::stringstream::stringstream((stringstream *)local_1c8);
              std::__ostream_insert<char,std::char_traits<char>>
                        ((ostream *)local_1b8,"Failed to parse attribute\n",0x1a);
              std::__cxx11::stringbuf::str();
              if (param_3 != (allocator *)0x0) {
                pcVar7 = strdup((char *)local_1e8[0]);
                *(char **)param_3 = pcVar7;
              }
              std::__cxx11::string::_M_dispose();
              local_1c8._0_8_ = std::__ostream_insert<char,std::char_traits<char>>;
              local_148[0] = open64;
              local_1b8[0] = std::__cxx11::string::_M_assign;
              local_1b8[1] = std::__cxx11::string::_M_replace;
              if (local_168 != local_158) {
                operator_delete(local_168,local_158[0] + 1);
              }
              uVar32 = 0xfffffffc;
              local_1b8[1] = std::ios_base::~ios_base;
              std::locale::~locale(local_178);
              *(undefined8 *)(local_1c8 + *(long *)(_vtable + -0x18)) =
                   ___ostream_insert<char,std::char_traits<char>>;
              local_1b8[0] = _locale;
              *(undefined8 *)((long)local_1b8 + *(long *)(_locale + -0x18)) = _vtable;
              local_1c8._0_8_ = _init;
              *(undefined8 *)(local_1c8 + (long)*(code **)(_init + -0x18)) = _vtable;
              local_148[0] = (code *)&std::__cxx11::stringstream::vtable;
              local_1c8._8_8_ = (code *)0x0;
              std::ios_base::~ios_base((ios_base *)local_148);
              puVar9 = (undefined8 *)local_268._8_8_;
              puVar16 = (uint *)local_248._0_8_;
              puVar11 = (undefined8 *)local_268._0_8_;
LAB_00108f60:
              if (puVar16 != (uint *)0x0) {
                operator_delete(puVar16,local_238 - (long)puVar16);
              }
              if (local_208 != pvVar28) {
                operator_delete(local_208,CONCAT71(uStack_1f7,local_1f8) + 1);
              }
              if (local_228 != pvVar12) {
                operator_delete(local_228,CONCAT71(uStack_217,local_218) + 1);
              }
              goto LAB_00108ff0;
            }
            pvVar34 = pvVar34 + local_278;
            uVar31 = uVar31 - local_278;
            iVar15 = (int)local_220;
            pvVar35 = (vector *)local_248;
            local_2f8 = pvVar6;
            if (local_220 < (allocator *)0xc) {
              puVar16 = (uint *)local_248._0_8_;
              if (local_220 == (allocator *)0x0) goto LAB_001086e9;
              local_330 = local_228;
              iVar5 = memcmp(local_228,"compression",(size_t)local_220);
              if ((iVar5 != 0) || (iVar15 != 0xb)) {
LAB_00108b40:
                local_330 = __s1;
                paVar33 = (allocator *)0x8;
                if (paVar36 < (allocator *)0x9) {
                  paVar33 = paVar36;
                }
                iVar5 = memcmp(__s1,"channels",(size_t)paVar33);
                if (iVar5 == 0) {
                  if ((long)(paVar36 + -8) < 0x80000000) goto LAB_00108e6b;
                  goto LAB_00108d80;
                }
LAB_00108b6a:
                if ((allocator *)0xa < paVar36) goto LAB_00108825;
                local_330 = __s1;
                iVar5 = memcmp(__s1,"dataWindow",(size_t)paVar36);
                if ((iVar5 == 0) && (iVar15 == 10)) goto LAB_00108b9f;
LAB_00108878:
                iVar5 = memcmp(__s1,"displayWindow",(size_t)paVar36);
                if (iVar5 != 0) goto LAB_00108daf;
                goto LAB_00108893;
              }
              local_348._0_4_ = (uint)*(byte *)puVar16;
              if (4 < (uint)local_348) {
                std::__cxx11::stringstream::stringstream((stringstream *)local_1c8);
                std::__ostream_insert<char,std::char_traits<char>>
                          ((ostream *)local_1b8,"Unsupported compression type : ",0x1f);
                std::ostream::operator<<((ostream *)local_1b8,(uint)local_348);
                std::__cxx11::stringbuf::str();
                if (param_3 != (allocator *)0x0) {
                  pcVar7 = strdup((char *)local_1e8[0]);
                  *(char **)param_3 = pcVar7;
                }
                std::__cxx11::string::_M_dispose();
                local_1c8._0_8_ = std::__ostream_insert<char,std::char_traits<char>>;
                local_148[0] = open64;
                local_1b8[0] = std::__cxx11::string::_M_assign;
                local_1b8[1] = std::__cxx11::string::_M_replace;
                if (local_168 != local_158) {
                  operator_delete(local_168,local_158[0] + 1);
                }
                uVar32 = 0xfffffff8;
                local_1b8[1] = std::ios_base::~ios_base;
                std::locale::~locale(local_178);
                *(undefined8 *)(local_1c8 + *(long *)(_vtable + -0x18)) =
                     ___ostream_insert<char,std::char_traits<char>>;
                local_1b8[0] = _locale;
                *(undefined8 *)((long)local_1b8 + *(long *)(_locale + -0x18)) = _vtable;
                local_1c8._0_8_ = _init;
                *(undefined8 *)(local_1c8 + (long)*(code **)(_init + -0x18)) = _vtable;
                local_148[0] = (code *)&std::__cxx11::stringstream::vtable;
                local_1c8._8_8_ = (code *)0x0;
                std::ios_base::~ios_base((ios_base *)local_148);
                puVar9 = (undefined8 *)local_268._8_8_;
                puVar11 = (undefined8 *)local_268._0_8_;
                goto LAB_00108f60;
              }
              iVar15 = 0x10;
              if ((uint)local_348 != 3) {
                iVar15 = (int)local_340;
              }
LAB_00108b28:
              local_340._0_4_ = iVar15;
              uVar20 = local_238 - (long)puVar16;
LAB_00108b33:
              operator_delete(puVar16,uVar20);
              goto LAB_001086f2;
            }
            if ((*(long *)local_228 == 0x73736572706d6f63) &&
               (*(int *)(local_228 + 7) == 0x6e6f6973)) {
              if (0x7fffffff < (long)(local_220 + -0xb)) {
                if (*(long *)local_228 == 0x736c656e6e616863) goto LAB_00108d80;
                goto LAB_00108825;
              }
              if (-0x80000001 < (long)(local_220 + -0xb)) goto LAB_00108b40;
              if (*(long *)local_228 == 0x736c656e6e616863) {
                if ((long)(local_220 + -8) < -0x80000000) goto LAB_00108d80;
                goto LAB_00108825;
              }
              local_330 = local_228;
              iVar5 = memcmp(local_228,"dataWindow",10);
              if (iVar5 != 0) goto LAB_00108da0;
LAB_00108854:
              if ((long)(paVar36 + -10) < -0x80000000) goto LAB_00108da0;
              if ((int)(paVar36 + -10) != 0) {
LAB_00108868:
                if (paVar36 < (allocator *)0xe) goto LAB_00108878;
                goto LAB_00108da0;
              }
LAB_00108b9f:
              uVar20 = local_248._8_8_ - local_248._0_8_;
              if (local_248._8_8_ != local_248._0_8_) {
                local_318 = *(uint *)local_248._0_8_;
                if (uVar20 < 5) goto LAB_00109f4e;
                local_308 = (long *)CONCAT44(local_308._4_4_,*(uint *)(local_248._0_8_ + 4));
                if (uVar20 < 9) goto LAB_00109f61;
                local_310 = (vector *)CONCAT44(local_310._4_4_,*(uint *)(local_248._0_8_ + 8));
                if (uVar20 < 0xd) goto LAB_001088d3;
                local_300 = *(uint *)(local_248._0_8_ + 0xc);
                uVar20 = local_238 - local_248._0_8_;
                puVar16 = (uint *)local_248._0_8_;
                goto LAB_00108b33;
              }
              goto LAB_00109cdf;
            }
            if (*(long *)local_228 == 0x736c656e6e616863) {
              if (((long)(local_220 + -8) < 0x80000000) && (-0x80000001 < (long)(local_220 + -8))) {
LAB_00108e6b:
                if (iVar15 != 8) goto LAB_00108b6a;
                cVar3 = tinyexr::ReadChannelInfo((vector *)local_268,(vector *)local_248);
                puVar16 = (uint *)local_248._0_8_;
                if (cVar3 == '\0') {
                  std::__cxx11::string::string<std::allocator<char>>
                            ((string *)local_1c8,"Failed to parse channel info",extraout_RDX_02);
                  if (param_3 != (allocator *)0x0) {
                    tinyexr::SetErrorMessage((string *)local_1c8._0_8_,(char **)param_3);
                  }
                  uVar32 = 0xfffffffc;
                  std::__cxx11::string::_M_dispose();
                  puVar9 = (undefined8 *)local_268._8_8_;
                  puVar11 = (undefined8 *)local_268._0_8_;
                }
                else {
                  puVar9 = (undefined8 *)local_268._8_8_;
                  puVar11 = (undefined8 *)local_268._0_8_;
                  paVar36 = (allocator *)
                            (((long)(local_268._8_8_ - local_268._0_8_) >> 3) * 0x6db6db6db6db6db7);
                  local_31c = (int)paVar36;
                  if (0 < local_31c) goto LAB_001086e9;
                  std::__cxx11::string::string<std::allocator<char>>
                            ((string *)local_1c8,"Invalid channels format",paVar36);
                  if (param_3 != (allocator *)0x0) {
                    tinyexr::SetErrorMessage((string *)local_1c8._0_8_,(char **)param_3);
                  }
                  uVar32 = 0xfffffffc;
                  std::__cxx11::string::_M_dispose();
                }
                goto LAB_00108f60;
              }
LAB_00108d80:
              if ((*(long *)__s1 == 0x646e695761746164) && (*(short *)(__s1 + 8) == 0x776f))
              goto LAB_00108844;
            }
            else {
LAB_00108825:
              iVar5 = memcmp(__s1,"dataWindow",10);
              local_330 = __s1;
              if (iVar5 != 0) goto LAB_00108868;
LAB_00108844:
              if ((long)(paVar36 + -10) < 0x80000000) goto LAB_00108854;
            }
LAB_00108da0:
            if ((((*(long *)__s1 == 0x5779616c70736964) &&
                 (*(long *)(__s1 + 5) == 0x776f646e69577961)) &&
                ((long)(paVar36 + -0xd) < 0x80000000)) && (-0x80000001 < (long)(paVar36 + -0xd))) {
LAB_00108893:
              if (iVar15 == 0xd) {
                uVar20 = local_248._8_8_ - local_248._0_8_;
                if (local_248._8_8_ == local_248._0_8_) goto LAB_00109cdf;
                if (uVar20 < 5) {
LAB_00109f4e:
                  std::__throw_out_of_range_fmt(_LC1,4);
                }
                else if (8 < uVar20) {
                  if (0xc < uVar20) goto LAB_001086e9;
LAB_001088d3:
                  std::__throw_out_of_range_fmt(_LC1,0xc);
                  pvVar6 = (vector *)local_248;
                  goto LAB_001088f0;
                }
LAB_00109f61:
                std::__throw_out_of_range_fmt(_LC1,8);
LAB_00109f74:
                uVar32 = 0xfffffffc;
LAB_00109e3a:
                operator_delete(pvVar12,(ulong)pvVar28);
LAB_00109e4c:
                operator_delete(paVar36,(ulong)local_2f0);
                goto LAB_00109e59;
              }
            }
            else {
LAB_00108daf:
            }
LAB_001086e9:
            puVar16 = (uint *)local_248._0_8_;
            iVar15 = (int)local_340;
            if ((uint *)local_248._0_8_ != (uint *)0x0) goto LAB_00108b28;
LAB_001086f2:
            if (local_208 != pvVar28) {
              operator_delete(local_208,CONCAT71(uStack_1f7,local_1f8) + 1);
            }
            if (local_228 != pvVar12) {
              operator_delete(local_228,CONCAT71(uStack_217,local_218) + 1);
            }
          } while (uVar31 != 0);
          uVar32 = 0xfffffffc;
          uVar31 = local_258 - local_268._0_8_;
          puVar11 = (undefined8 *)local_268._0_8_;
          puVar26 = (undefined8 *)local_268._0_8_;
          puVar9 = (undefined8 *)local_268._8_8_;
joined_r0x00109007:
          for (; puVar9 != puVar11; puVar11 = puVar11 + 7) {
            if ((undefined8 *)*puVar11 != puVar11 + 2) {
              operator_delete((undefined8 *)*puVar11,puVar11[2] + 1);
            }
          }
          if (puVar26 != (undefined8 *)0x0) {
            operator_delete(puVar26,uVar31);
          }
        }
      }
      else {
LAB_001088f0:
        local_248._0_8_ = 0x1f;
        local_1c8._0_8_ = (string *)local_1b8;
        local_1c8._0_8_ = std::__cxx11::string::_M_create((ulong *)local_1c8,(ulong)local_248);
        uVar32 = _LC44._8_8_;
        local_1b8[0] = (code *)local_248._0_8_;
        *(undefined8 *)local_1c8._0_8_ = _LC44._0_8_;
        *(undefined8 *)(local_1c8._0_8_ + 8) = uVar32;
        uVar32 = _LC44._24_8_;
        *(undefined8 *)(local_1c8._0_8_ + 0xf) = _LC44._16_8_;
        *(undefined8 *)(local_1c8._0_8_ + 0x17) = uVar32;
        local_1c8._8_8_ = local_248._0_8_;
        *(string *)(local_1c8._0_8_ + local_248._0_8_) = (string)0x0;
        if (paVar36 != (allocator *)0x0) {
          pcVar7 = strdup((char *)local_1c8._0_8_);
          *(char **)paVar36 = pcVar7;
        }
        if ((string *)local_1c8._0_8_ != (string *)local_1b8) {
          operator_delete((void *)local_1c8._0_8_,(ulong)(local_1b8[0] + 1));
        }
        uVar32 = 0xfffffff8;
            }

         }
 else {
            std::__cxx11::string::string<std::allocator<char>>((string*)local_1c8, "Invalid magic number", extraout_RDX_01);
            if (param_3 != (allocator*)0x0) {
               pcVar7 = strdup((char*)local_1c8._0_8_);
               *(char**)param_3 = pcVar7;
            }

            if ((string*)local_1c8._0_8_ != (string*)local_1b8) {
               operator_delete((void*)local_1c8._0_8_, ( ulong )(local_1b8[0] + 1));
            }

            uVar32 = 0xffffffff;
         }

         munmap(pvVar6, local_198);
      }

      close(__fd);
      LAB_001089b9:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar32;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* tinyexr::ParseEXRHeader(tinyexr::HeaderInfo*, bool*, TEXRVersion const*, std::__cxx11::string*,
   unsigned char const*, unsigned long) [clone .constprop.0] */
   undefined8 tinyexr::ParseEXRHeader(HeaderInfo *param_1, bool *param_2, TEXRVersion *param_3, string *param_4, uchar *param_5, ulong param_6) {
      undefined8 uVar1;
      char cVar2;
      uint uVar3;
      int iVar4;
      int iVar5;
      size_t sVar6;
      void *pvVar7;
      long lVar8;
      undefined8 uVar9;
      vector *this;
      ulong uVar10;
      code **ppcVar11;
      undefined8 *puVar12;
      char cVar13;
      byte bVar14;
      ulong uVar15;
      ulong uVar16;
      ostream *poVar17;
      code *pcVar18;
      long in_FS_OFFSET;
      byte bVar19;
      ios_base *local_350;
      ostream *local_348;
      size_t local_340;
      byte *local_330;
      byte local_311;
      char local_308;
      char local_307;
      byte local_306;
      char local_305;
      char local_304;
      char local_303;
      char local_302;
      char local_301;
      uchar local_2e1;
      ulong local_2e0;
      undefined1 local_2d8[16];
      long local_2c8;
      ostream *local_2b8;
      ulong local_2b0;
      ostream local_2a8;
      undefined7 uStack_2a7;
      code *local_298;
      undefined8 local_290;
      undefined1 local_288;
      undefined7 uStack_287;
      undefined1 *local_278;
      ulong local_270;
      undefined1 local_268;
      undefined7 uStack_267;
      code *local_258[2];
      pointer_____offset_0x10___ local_248[2];
      undefined1 local_238[16];
      undefined1 local_228[16];
      undefined1 local_218[16];
      locale local_208[8];
      undefined4 local_200;
      undefined1 *local_1f8;
      undefined8 local_1f0;
      undefined1 local_1e8;
      undefined7 uStack_1e7;
      code *local_1d8[15];
      undefined1 local_159;
      char local_158[88];
      undefined8 local_100;
      undefined2 local_f8;
      undefined1 local_f0[16];
      undefined1 local_e0[16];
      undefined1 local_59;
      void *local_58;
      undefined4 local_50;
      long local_40;
      bVar19 = 0;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (param_2 != (bool*)0x0) {
         *param_2 = false;
      }

      if (( ( *(int*)( param_3 + 0x10 ) == 0 ) || ( param_6 == 0 ) ) || ( *param_5 != '\0' )) {
         *(undefined8*)( param_1 + 0x90 ) = 0;
         **(undefined1**)( param_1 + 0x88 ) = 0;
         *(undefined8*)( param_1 + 0xb0 ) = 0;
         **(undefined1**)( param_1 + 0xa8 ) = 0;
         *(undefined1(*) [16])( param_1 + 0x30 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( param_1 + 0x40 ) = (undefined1[16])0x0;
         uVar9 = _UNK_0011cdd8;
         *(undefined8*)( param_1 + 0x54 ) = ram0x0011cdd0;
         *(undefined8*)( param_1 + 0x5c ) = uVar9;
         uVar1 = _LC141;
         uVar9 = __LC47;
         *(undefined4*)( param_1 + 0x50 ) = 0;
         *(undefined4*)( param_1 + 0x78 ) = 0xffffffff;
         *(undefined8*)( param_1 + 0x68 ) = uVar9;
         *(undefined8*)( param_1 + 0x70 ) = uVar1;
         if (*(long*)( param_1 + 0x18 ) != *(long*)( param_1 + 0x20 )) {
            *(long*)( param_1 + 0x20 ) = *(long*)( param_1 + 0x18 );
         }

         if (param_6 == 0) {
            LAB_0010a3b7:if (0x3fffffffffffffffU - *(long*)( param_4 + 8 ) < 0x27) {
               LAB_0010b67c:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
            }

            uVar9 = 0xfffffffc;
            std::__cxx11::string::_M_append((char*)param_4, 0x119120);
         }
 else {
            local_350 = (ios_base*)0x400;
            local_302 = '\0';
            local_301 = '\0';
            local_303 = '\0';
            local_304 = '\0';
            local_305 = '\0';
            local_307 = '\0';
            local_306 = 0;
            local_308 = '\0';
            local_311 = 0;
            cVar2 = '\0';
            uVar10 = param_6;
            uVar16 = param_6;
            LAB_0010a0d0:if (( streambuf ) * param_5 == (streambuf)0x0) {
               uVar16 = uVar16 - 1;
               goto LAB_0010a9d9;
            }

            this(vector * local_2d8);
            local_2b0 = 0;
            poVar17 = &local_2a8;
            local_2a8 = (ostream)0x0;
            pcVar18 = (code*)&local_288;
            local_290 = 0;
            local_288 = (code)0x0;
            local_2c8 = 0;
            local_2d8 = (undefined1[16])0x0;
            local_2b8 = poVar17;
            local_298 = pcVar18;
            uVar3 = ReadAttribute((string*)&local_2b8, (string*)&local_298, this, &local_2e0, (char*)param_5, uVar16);
            local_340 = local_2b0;
            local_348 = local_2b8;
            uVar10 = (ulong)uVar3;
            bVar14 = (byte)uVar3;
            if (bVar14 != 0) {
               param_5 = (uchar*)( (streambuf*)param_5 + local_2e0 );
               uVar16 = uVar16 - local_2e0;
               local_330 = (byte*)local_2d8._0_8_;
               iVar4 = (int)local_2b0;
               uVar15 = uVar10;
               if (( ( *(int*)( param_3 + 4 ) == 0 ) && ( *(int*)( param_3 + 0x10 ) == 0 ) ) && ( *(int*)( param_3 + 0xc ) == 0 )) {
                  if (0xb < local_2b0) goto LAB_0010a1d8;
                  if (local_2b0 == 0) goto LAB_0010a43b;
                  LAB_0010a52e:iVar5 = memcmp(local_348, "compression", local_340);
                  uVar10 = (ulong)bVar14;
                  if (( iVar5 == 0 ) && ( iVar4 == 0xb )) {
                     bVar14 = *local_330;
                     if (bVar14 < 5) {
                        *(uint*)( param_1 + 0x80 ) = (uint)bVar14;
                        goto LAB_0010a58c;
                     }

                     if (bVar14 == 0x80) {
                        std::__cxx11::string::_M_replace((ulong)param_4, 0, *(char**)( param_4 + 8 ), 0x119198);
                     }
 else {
                        std::__cxx11::string::_M_replace((ulong)param_4, 0, *(char**)( param_4 + 8 ), 0x118a9b);
                     }

                     uVar9 = 0xfffffff8;
                     goto LAB_0010addb;
                  }

                  LAB_0010a668:sVar6 = 8;
                  if (local_340 < 9) {
                     sVar6 = local_340;
                  }

                  iVar5 = memcmp(local_348, "channels", sVar6);
                  uVar10 = (ulong)bVar14;
                  if (iVar5 == 0) {
                     LAB_0010a300:bVar14 = (byte)uVar10;
                     lVar8 = local_340 - 8;
                     if (0x7fffffff < lVar8) goto LAB_0010a955;
                     if (-0x80000001 < lVar8) {
                        if ((int)lVar8 == 0) {
                           cVar2 = ReadChannelInfo((vector*)param_1, this);
                           if (cVar2 == '\0') {
                              uVar9 = 0xfffffffc;
                              std::__cxx11::string::append(param_4, "Failed to parse channel info.\n");
                           }
 else {
                              if (*(long*)( param_1 + 8 ) != *(long*)param_1) goto LAB_0010a35d;
                              uVar9 = 0xfffffffc;
                              std::__cxx11::string::append(param_4, "# of channels is zero.\n");
                           }

                           goto LAB_0010addb;
                        }

                        goto LAB_0010a6b1;
                     }

                  }
 else {
                     LAB_0010a6b1:bVar14 = (byte)uVar10;
                     if (local_340 < 0xb) {
                        uVar15 = uVar10;
                        if (local_340 != 0) {
                           iVar5 = memcmp(local_348, "dataWindow", local_340);
                           uVar10 = uVar10 & 0xff;
                           if (iVar5 != 0) goto LAB_0010a260;
                           if (iVar4 != 10) {
                              iVar4 = memcmp(local_348, "displayWindow", local_340);
                              if (iVar4 == 0) goto LAB_0010a2a0;
                              goto LAB_0010a87a;
                           }

                           goto LAB_0010a710;
                        }

                        goto LAB_0010a43b;
                     }

                  }

                  LAB_0010a206:iVar4 = memcmp(local_348, "dataWindow", 10);
                  uVar10 = (ulong)bVar14;
                  if (iVar4 == 0) {
                     if (0x7fffffff < (long)( local_340 - 10 )) goto LAB_0010a955;
                     goto LAB_0010a80f;
                  }

               }
 else {
                  if (local_2b0 < 6) {
                     if (local_2b0 == 0) goto LAB_0010a43b;
                     iVar5 = memcmp(local_2b8, "tiles", local_2b0);
                     uVar10 = (ulong)bVar14;
                     if (( iVar5 != 0 ) || ( iVar4 != 5 )) goto LAB_0010a52e;
                     if (local_2d8._8_8_ - (long)local_330 != 9) {
                        uVar9 = 0xfffffffc;
                        std::__cxx11::string::append(param_4, "(ParseEXRHeader) Invalid attribute data size. Attribute data size must be 9.\n");
                        goto LAB_0010addb;
                     }

                     bVar14 = *(byte*)( (undefined8)local_330 + 8 );
                     if (( -1 < *(int*)local_330 ) && ( -1 < *(int*)( (undefined8)local_330 + 4 ) )) {
                        *(undefined8*)( param_1 + 0x6c ) = *(undefined8*)local_330;
                        *(undefined4*)( param_1 + 0x68 ) = 1;
                        *(uint*)( param_1 + 0x74 ) = bVar14 & 3;
                        *(uint*)( param_1 + 0x78 ) = bVar14 >> 4 & 1;
                        goto LAB_0010a64c;
                     }

                     uVar9 = 0xfffffff8;
                     std::__cxx11::string::_M_replace((ulong)param_4, 0, *(char**)( param_4 + 8 ), 0x118a82);
                     uVar10 = local_2c8 - (long)local_330;
                     goto LAB_0010ae6f;
                  }

                  if (( *(int*)local_2b8 == 0x656c6974 ) && ( local_2b8[4] == (ostream)0x73 )) {
                     if (( 0x7fffffff < (long)( local_2b0 - 5 ) ) || ( (long)( local_2b0 - 5 ) < -0x80000000 )) goto LAB_0010a1d8;
                     if (local_2b0 < 0xc) goto LAB_0010a52e;
                     if (( *(long*)local_2b8 == 0x73736572706d6f63 ) && ( *(int*)( local_2b8 + 7 ) == 0x6e6f6973 )) goto LAB_0010a7a4;
                     LAB_0010a1eb:if (*(long*)local_2b8 == 0x736c656e6e616863) goto LAB_0010a300;
                     goto LAB_0010a206;
                  }

                  if (local_2b0 < 0xc) goto LAB_0010a52e;
                  LAB_0010a1d8:if (( *(long*)local_2b8 != 0x73736572706d6f63 ) || ( *(int*)( local_2b8 + 7 ) != 0x6e6f6973 )) goto LAB_0010a1eb;
                  if (0x7fffffff < (long)( local_2b0 - 0xb )) goto LAB_0010a955;
                  LAB_0010a7a4:if (-0x80000001 < (long)( local_2b0 - 0xb )) goto LAB_0010a668;
                  if (*(long*)local_2b8 == 0x736c656e6e616863) goto LAB_0010a206;
                  iVar4 = memcmp(local_2b8, "dataWindow", 10);
                  uVar10 = (ulong)bVar14;
                  if (iVar4 != 0) goto LAB_0010b660;
                  local_330 = (byte*)local_2d8._0_8_;
                  LAB_0010a80f:if ((long)( local_340 - 10 ) < -0x80000000) goto LAB_0010a955;
                  if ((int)( local_340 - 10 ) == 0) {
                     LAB_0010a710:if (( ulong )(local_2d8._8_8_ - (long)local_330) < 0x10) goto LAB_0010a35d;
                     local_308 = (char)uVar10;
                     *(undefined4*)( param_1 + 0x30 ) = *(undefined4*)local_330;
                     for (int i = 0; i < 3; i++) {
                        *(undefined4*)( param_1 + ( 4*i + 52 ) ) = *(undefined4*)( local_330 + ( 4*i + 4 ) );
                     }

                     goto LAB_0010a64c;
                  }

               }

               bVar14 = (byte)uVar10;
               if (0xd < local_340) goto LAB_0010a955;
               uVar15 = uVar10;
               if (local_340 != 0) goto LAB_0010a260;
               LAB_0010a43b:cVar13 = (char)uVar15;
               iVar4 = std::__cxx11::string::compare((char*)local_348);
               uVar10 = uVar15 & 0xff;
               if (iVar4 == 0) {
                  if (( ulong )(local_2d8._8_8_ - (long)local_330) < 8) goto LAB_0010a35d;
                  std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_check((ulong)local_330);
                  *(undefined4*)( param_1 + 0x54 ) = *(undefined4*)local_330;
                  std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_check((ulong)local_330);
                  uVar10 = uVar15 & 0xff;
                  *(undefined4*)( param_1 + 0x58 ) = *(undefined4*)( local_330 + 4 );
                  local_304 = cVar13;
               }
 else {
                  iVar4 = std::__cxx11::string::compare((char*)local_348);
                  uVar10 = uVar15 & 0xff;
                  if (iVar4 == 0) {
                     if (( ulong )(local_2d8._8_8_ - (long)local_330) < 4) goto LAB_0010a35d;
                     std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_check((ulong)local_330);
                     uVar10 = uVar15 & 0xff;
                     *(undefined4*)( param_1 + 0x5c ) = *(undefined4*)local_330;
                     local_303 = cVar13;
                  }
 else {
                     iVar4 = std::__cxx11::string::compare((char*)local_348);
                     uVar10 = uVar15 & 0xff;
                     if (iVar4 == 0) {
                        if (( ulong )(local_2d8._8_8_ - (long)local_330) < 4) goto LAB_0010a35d;
                        std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_check((ulong)local_330);
                        *(undefined4*)( param_1 + 100 ) = *(undefined4*)local_330;
                     }
 else {
                        iVar4 = std::__cxx11::string::compare((char*)local_348);
                        uVar10 = uVar15 & 0xff;
                        if (iVar4 == 0) {
                           if ((byte*)local_2d8._8_8_ == local_330) goto LAB_0010a35d;
                           if (*local_330 != 0) {
                              local_2e1 = '\0';
                              std::vector<unsigned_char,std::allocator<unsigned_char>>::emplace_back<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)this, &local_2e1);
                              local_330 = (byte*)local_2d8._0_8_;
                              sVar6 = strlen((char*)local_2d8._0_8_);
                              std::__cxx11::string::resize(( ulong )(param_1 + 0x88), (char)sVar6);
                              std::__cxx11::string::_M_replace(( ulong )(param_1 + 0x88), 0, *(char**)( param_1 + 0x90 ), (ulong)local_330);
                              uVar10 = uVar15 & 0xff;
                              local_301 = cVar13;
                           }

                        }
 else {
                           iVar4 = std::__cxx11::string::compare((char*)local_348);
                           if (iVar4 != 0) {
                              puVar12 = *(undefined8**)( param_1 + 0x20 );
                              if (0x105f0 < ( ulong )((long)puVar12 - *(long*)( param_1 + 0x18 ))) goto LAB_0010a35d;
                              strncpy((char*)local_258, (char*)local_348, 0xff);
                              strncpy(local_158, (char*)local_298, 0xff);
                              local_159 = 0;
                              local_59 = 0;
                              sVar6 = local_2d8._8_8_ - (long)local_330;
                              local_50 = (undefined4)sVar6;
                              pvVar7 = malloc(sVar6);
                              local_58 = pvVar7;
                              std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_check((ulong)local_330);
                              __memcpy_chk(pvVar7, local_330, sVar6);
                              if (puVar12 != *(undefined8**)( param_1 + 0x28 )) {
                                 uVar10 = (ulong)local_311;
                                 ppcVar11 = local_258;
                                 for (lVar8 = 0x42; lVar8 != 0; lVar8 = lVar8 + -1) {
                                    *puVar12 = *ppcVar11;
                                    ppcVar11 = ppcVar11 + (ulong)bVar19 * -2 + 1;
                                    puVar12 = puVar12 + (ulong)bVar19 * -2 + 1;
                                 }

                                 *(long*)( param_1 + 0x20 ) = *(long*)( param_1 + 0x20 ) + 0x210;
                                 goto LAB_0010a58c;
                              }

                              std::vector<TEXRAttribute,std::allocator<TEXRAttribute>>::_M_realloc_insert<TEXRAttribute_const&>((vector<TEXRAttribute,std::allocator<TEXRAttribute>>*)( param_1 + 0x18 ), puVar12, local_258);
                              uVar10 = (ulong)local_311;
                              goto LAB_0010a58c;
                           }

                           if ((byte*)local_2d8._8_8_ == local_330) goto LAB_0010a35d;
                           uVar10 = uVar15 & 0xff;
                           if (*local_330 != 0) {
                              local_2e1 = '\0';
                              std::vector<unsigned_char,std::allocator<unsigned_char>>::emplace_back<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)this, &local_2e1);
                              local_330 = (byte*)local_2d8._0_8_;
                              sVar6 = strlen((char*)local_2d8._0_8_);
                              std::__cxx11::string::resize(( ulong )(param_1 + 0xa8), (char)sVar6);
                              std::__cxx11::string::_M_replace(( ulong )(param_1 + 0xa8), 0, *(char**)( param_1 + 0xb0 ), (ulong)local_330);
                              uVar10 = uVar15 & 0xff;
                              local_302 = cVar13;
                           }

                        }

                     }

                  }

               }

               LAB_0010a64c:do {
                  operator_delete(local_330, local_2c8 - (long)local_330);
                  LAB_0010a366:if (local_298 != pcVar18) {
                     operator_delete(local_298, CONCAT71(uStack_287, local_288) + 1);
                  }

                  if (local_2b8 != poVar17) {
                     operator_delete(local_2b8, CONCAT71(uStack_2a7, local_2a8) + 1);
                  }

                  local_350 = local_350 + -1;
                  if (local_350 != (ios_base*)0x0) {
                     if (uVar16 == 0) goto LAB_0010a3b7;
                     goto LAB_0010a0d0;
                  }

                  LAB_0010a9d9:local_350 = (ios_base*)local_1d8;
                  poVar17 = (ostream*)local_248;
                  std::ios_base::ios_base(local_350);
                  pcVar18 = _init;
                  local_340 = 0;
                  local_f8 = 0;
                  local_f0 = (undefined1[16])0x0;
                  local_e0 = (undefined1[16])0x0;
                  local_1d8[0] = (code*)&std::__cxx11::stringstream::vtable;
                  local_100 = 0;
                  local_258[0] = _init;
                  *(undefined8*)( (long)local_258 + *(long*)( _init + -0x18 ) ) = _vtable;
                  local_258[1] = (code*)0x0;
                  param_5 = (uchar*)( (stringstream*)local_258 + *(long*)( _init + -0x18 ) );
                  std::ios::init((streambuf*)param_5);
                  local_248[0] = _locale;
                  lVar8 = *(long*)( _locale + -0x18 );
                  *(undefined8*)( poVar17 + lVar8 ) = _vtable;
                  std::ios::init((streambuf*)( poVar17 + lVar8 ));
                  *(undefined8*)( (long)local_258 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
                  local_258[0] = std::__ostream_insert<char,std::char_traits<char>>;
                  local_1d8[0] = open64;
                  local_248[0] = PTR_vtable_0011cce8;
                  local_248[1] = PTR_vtable_0011ccf0;
                  local_238 = (undefined1[16])0x0;
                  local_228 = (undefined1[16])0x0;
                  local_218 = (undefined1[16])0x0;
                  std::locale::locale(local_208);
                  local_200 = 0x18;
                  local_248[1] = std::__cxx11::string::_M_replace;
                  local_1e8 = 0;
                  local_1f0 = 0;
                  local_1f8 = &local_1e8;
                  std::ios::init((streambuf*)local_350);
                  if (local_311 == 0) {
                     std::__ostream_insert<char,std::char_traits<char>>(poVar17, "\"compression\" attribute not found in the header.", 0x30);
                     std::endl<char,std::char_traits<char>>(poVar17);
                  }

                  if (cVar2 == '\0') {
                     std::__ostream_insert<char,std::char_traits<char>>(poVar17, "\"channels\" attribute not found in the header.", 0x2d);
                     std::endl<char,std::char_traits<char>>(poVar17);
                  }

                  if (local_307 == '\0') {
                     std::__ostream_insert<char,std::char_traits<char>>(poVar17, "\"lineOrder\" attribute not found in the header.", 0x2e);
                     std::endl<char,std::char_traits<char>>(poVar17);
                  }

                  if (local_306 != 0) {
                     LAB_0010aba8:if (local_308 == '\0') {
                        std::__ostream_insert<char,std::char_traits<char>>(poVar17, "\"dataWindow\" attribute not found in the header or invalid.", 0x3a);
                        std::endl<char,std::char_traits<char>>(poVar17);
                     }

                     if (local_305 == '\0') {
                        std::__ostream_insert<char,std::char_traits<char>>(poVar17, "\"pixelAspectRatio\" attribute not found in the header.", 0x35);
                        std::endl<char,std::char_traits<char>>(poVar17);
                     }

                     if (local_303 == '\0') {
                        std::__ostream_insert<char,std::char_traits<char>>(poVar17, "\"screenWindowWidth\" attribute not found in the header.", 0x36);
                        std::endl<char,std::char_traits<char>>(poVar17);
                     }

                     if (local_304 == '\0') {
                        std::__ostream_insert<char,std::char_traits<char>>(poVar17, "\"screenWindowCenter\" attribute not found in the header.", 0x37);
                        std::endl<char,std::char_traits<char>>(poVar17);
                     }

                     if (( *(int*)( param_3 + 0x10 ) != 0 ) || ( *(int*)( param_3 + 0xc ) != 0 )) {
                        if (local_301 == '\0') {
                           std::__ostream_insert<char,std::char_traits<char>>(poVar17, "\"name\" attribute not found in the header.", 0x29);
                           std::endl<char,std::char_traits<char>>(poVar17);
                        }

                        if (local_302 == '\0') {
                           std::__ostream_insert<char,std::char_traits<char>>(poVar17, "\"type\" attribute not found in the header.", 0x29);
                           std::endl<char,std::char_traits<char>>(poVar17);
                        }

                     }

                     local_270 = 0;
                     local_268 = 0;
                     local_278 = &local_268;
                     if (local_218._0_8_ == 0) {
                        std::__cxx11::string::_M_assign((string*)&local_278);
                     }
 else {
                        std::__cxx11::string::_M_replace(( ulong ) & local_278, 0, (char*)0x0, local_228._8_8_);
                     }

                     uVar10 = local_270;
                     if (local_278 != &local_268) {
                        operator_delete(local_278, CONCAT71(uStack_267, local_268) + 1);
                     }

                     if (uVar10 == 0) {
                        local_258[0] = std::__ostream_insert<char,std::char_traits<char>>;
                        local_1d8[0] = open64;
                        local_248[0] = PTR_vtable_0011cce8;
                        local_248[1] = PTR_vtable_0011ccf8;
                        if (local_1f8 != &local_1e8) {
                           operator_delete(local_1f8, CONCAT71(uStack_1e7, local_1e8) + 1);
                        }

                        local_248[1] = std::ios_base::~ios_base;
                        std::locale::~locale(local_208);
                        *(undefined8*)( (long)local_258 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
                        local_248[0] = _locale;
                        *(undefined8*)( (long)local_248 + *(long*)( _locale + -0x18 ) ) = _vtable;
                        local_258[0] = pcVar18;
                        *(undefined8*)( (long)local_258 + *(long*)( pcVar18 + -0x18 ) ) = _vtable;
                        local_258[1] = (code*)0x0;
                        local_1d8[0] = (code*)&std::__cxx11::stringstream::vtable;
                        std::ios_base::~ios_base(local_350);
                        *(int*)( param_1 + 0x7c ) = (int)param_6 - (int)uVar16;
                        uVar9 = 0;
                     }
 else {
                        std::__cxx11::stringbuf::str();
                        if (0x3fffffffffffffffU - *(long*)( param_4 + 8 ) < local_270) goto LAB_0010b67c;
                        std::__cxx11::string::_M_append((char*)param_4, (ulong)local_278);
                        uVar9 = 0xfffffff7;
                        std::__cxx11::string::_M_dispose();
                        std::__cxx11::stringstream::~stringstream((stringstream*)local_258);
                     }

                     goto LAB_0010a3f0;
                  }

                  std::__ostream_insert<char,std::char_traits<char>>(poVar17, "\"displayWindow\" attribute not found in the header.", 0x32);
                  local_348 = *(ostream**)( local_158 + *(long*)( local_248[0] + -0x18 ) );
                  if (local_348 != (ostream*)0x0) {
                     if (local_348[0x38] == (ostream)0x0) {
                        std::ctype<char>::_M_widen_init();
                        if (*(code**)( *(long*)local_348 + 0x30 ) != std::ctype<char>::do_widen) {
                           ( **(code**)( *(long*)local_348 + 0x30 ) )();
                        }

                     }

                     std::ostream::put((char)poVar17);
                     std::ostream::flush();
                     goto LAB_0010aba8;
                  }

                  std::__throw_bad_cast();
                  this(vector * param_6);
                  LAB_0010b660:bVar14 = (byte)uVar10;
                  local_330 = (byte*)local_2d8._0_8_;
                  if (local_340 < 0xe) {
                     LAB_0010a260:iVar4 = memcmp(local_348, "displayWindow", local_340);
                     if (iVar4 != 0) {
                        LAB_0010a870:if (9 < local_340) goto LAB_0010a968;
                        LAB_0010a87a:iVar4 = memcmp(local_348, "lineOrder", local_340);
                        uVar10 = (ulong)bVar14;
                        if (iVar4 != 0) goto LAB_0010a8ba;
                        uVar15 = uVar10;
                        if ((long)( local_340 - 9 ) < -0x80000000) goto LAB_0010b070;
                        if ((int)( local_340 - 9 ) != 0) goto LAB_0010b1fd;
                        LAB_0010b16b:if ((byte*)local_2d8._8_8_ == local_330) goto LAB_0010a35d;
                        local_307 = (char)uVar10;
                        *(uint*)( param_1 + 0x40 ) = ( uint ) * local_330;
                        goto LAB_0010a64c;
                     }

                     LAB_0010a2a0:uVar10 = (ulong)bVar14;
                     if ((int)local_340 != 0xd) goto LAB_0010a870;
                     if (( ulong )(local_2d8._8_8_ - (long)local_330) < 0x10) goto LAB_0010a35d;
                     *(undefined4*)( param_1 + 0x44 ) = *(undefined4*)local_330;
                     for (int i = 0; i < 3; i++) {
                        *(undefined4*)( param_1 + ( 4*i + 72 ) ) = *(undefined4*)( local_330 + ( 4*i + 4 ) );
                     }

                     operator_delete(local_330, local_2c8 - (long)local_330);
                     local_306 = bVar14;
                     goto LAB_0010a366;
                  }

                  LAB_0010a955:bVar14 = (byte)uVar10;
                  if (( ( *(long*)local_348 == 0x5779616c70736964 ) && ( *(long*)( local_348 + 5 ) == 0x776f646e69577961 ) ) && ( ( uVar15 = uVar10 ),0x7fffffff < (long)( local_340 - 0xd ) || ( (long)( local_340 - 0xd ) < -0x80000000 ) )) {
                     LAB_0010b070:if (( ( *(long*)local_348 != 0x7073416c65786970 || *(long*)( local_348 + 8 ) != 0x6f69746152746365 ) || ( lVar8 = 0x7fffffff < lVar8 ) ) || ( uVar10 = lVar8 < -0x80000000 )) goto LAB_0010a43b;
                  }
 else {
                     LAB_0010a968:iVar4 = memcmp(local_348, "lineOrder", 9);
                     uVar10 = (ulong)bVar14;
                     uVar15 = uVar10;
                     if (iVar4 == 0) {
                        lVar8 = local_340 - 9;
                        if (( lVar8 < 0x80000000 ) && ( -0x80000001 < lVar8 )) {
                           if ((int)lVar8 == 0) goto LAB_0010b16b;
                           if (0x10 < local_340) goto LAB_0010b070;
                           LAB_0010b1fd:bVar14 = (byte)uVar10;
                           uVar15 = uVar10;
                           if (local_340 != 0) goto LAB_0010a8ba;
                           goto LAB_0010a43b;
                        }

                        goto LAB_0010b070;
                     }

                     if (0x10 < local_340) goto LAB_0010b070;
                     LAB_0010a8ba:iVar4 = memcmp(local_348, "pixelAspectRatio", local_340);
                     uVar10 = (ulong)bVar14;
                     uVar15 = uVar10;
                     if (iVar4 != 0) goto LAB_0010a43b;
                     lVar8 = local_340 - 0x10;
                  }

                  uVar15 = uVar10;
                  if ((int)lVar8 != 0) goto LAB_0010a43b;
                  if (( ulong )(local_2d8._8_8_ - (long)local_330) < 4) {
                     LAB_0010a35d:if (local_330 != (byte*)0x0) {
                        uVar10 = (ulong)local_311;
                        LAB_0010a58c:local_311 = (byte)uVar10;
                        operator_delete(local_330, local_2c8 - (long)local_330);
                     }

                     goto LAB_0010a366;
                  }

                  local_305 = (char)uVar10;
                  *(undefined4*)( param_1 + 0x60 ) = *(undefined4*)local_330;
               }
 while ( true );
            }

            if (0x3fffffffffffffffU - *(long*)( param_4 + 8 ) < 0x1a) goto LAB_0010b67c;
            uVar9 = 0xfffffffc;
            std::__cxx11::string::_M_append((char*)param_4, 0x118a61);
            local_330 = (byte*)local_2d8._0_8_;
            LAB_0010addb:if (local_330 != (byte*)0x0) {
               uVar10 = local_2c8 - (long)local_330;
               LAB_0010ae6f:operator_delete(local_330, uVar10);
            }

            if (local_298 != pcVar18) {
               operator_delete(local_298, CONCAT71(uStack_287, local_288) + 1);
            }

            if (local_2b8 != poVar17) {
               operator_delete(local_2b8, CONCAT71(uStack_2a7, local_2a8) + 1);
            }

         }

      }
 else {
         if (param_2 != (bool*)0x0) {
            *param_2 = true;
         }

         uVar9 = 0;
      }

      LAB_0010a3f0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar9;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   int ParseEXRHeaderFromMemory(TEXRHeader *param_1, TEXRVersion *param_2, allocator *param_3, ulong param_4, undefined8 *param_5) {
      void *__ptr;
      undefined8 uVar1;
      char cVar2;
      int iVar3;
      char *pcVar4;
      char *pcVar5;
      undefined8 *puVar6;
      long lVar7;
      ulong uVar8;
      long lVar9;
      long in_FS_OFFSET;
      undefined1 *local_148;
      undefined8 local_140;
      undefined1 local_138;
      undefined7 uStack_137;
      char *local_128;
      long local_120;
      char local_118;
      undefined7 uStack_117;
      undefined1 local_108[16];
      undefined1 local_f8[16];
      undefined1 local_e8[16];
      undefined1 local_d8[16];
      undefined1 local_c8[16];
      undefined4 local_b8;
      undefined1 local_b4[16];
      undefined1 local_a4[16];
      undefined8 local_94;
      undefined4 local_8c;
      undefined4 local_88;
      undefined1 *local_80;
      undefined8 local_78;
      undefined1 local_70;
      undefined7 uStack_6f;
      undefined1 *local_60;
      undefined8 local_58;
      undefined1 local_50;
      undefined7 uStack_4f;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_3 == (allocator*)0x0 ) || ( param_1 == (TEXRHeader*)0x0 )) {
         std::__cxx11::string::string<std::allocator<char>>((string*)local_108, "Invalid argument. `memory` or `exr_header` argument is null in ParseEXRHeaderFromMemory()", param_3);
         if (param_5 != (undefined8*)0x0) {
            pcVar4 = strdup((char*)local_108._0_8_);
            *param_5 = pcVar4;
         }

         iVar3 = -3;
         std::__cxx11::string::_M_dispose();
      }
 else if (param_4 < 8) {
         std::__cxx11::string::string<std::allocator<char>>((string*)local_108, "Insufficient header/data size.\n", param_3);
         if (param_5 != (undefined8*)0x0) {
            pcVar4 = strdup((char*)local_108._0_8_);
            *param_5 = pcVar4;
         }

         if ((undefined1*)local_108._0_8_ != local_f8) {
            operator_delete((void*)local_108._0_8_, local_f8._0_8_ + 1);
         }

         iVar3 = -4;
      }
 else {
         local_108 = (undefined1[16])0x0;
         local_f8 = (undefined1[16])0x0;
         local_e8 = (undefined1[16])0x0;
         local_78 = 0;
         local_70 = 0;
         local_58 = 0;
         local_50 = 0;
         local_b8 = 0;
         local_94 = 0;
         local_8c = 0;
         local_88 = 0;
         local_120 = 0;
         local_118 = '\0';
         local_d8 = (undefined1[16])0x0;
         local_c8 = (undefined1[16])0x0;
         local_b4 = (undefined1[16])0x0;
         local_a4 = (undefined1[16])0x0;
         local_128 = &local_118;
         local_80 = &local_70;
         local_60 = &local_50;
         iVar3 = tinyexr::ParseEXRHeader((HeaderInfo*)local_108, (bool*)0x0, param_2, (string*)&local_128, (uchar*)( param_3 + 8 ), param_4 - 8);
         if (( ( param_5 != (undefined8*)0x0 ) && ( iVar3 != 0 ) ) && ( local_120 != 0 )) {
            pcVar4 = strdup(local_128);
            *param_5 = pcVar4;
         }

         if (local_128 != &local_118) {
            operator_delete(local_128, CONCAT71(uStack_117, local_118) + 1);
         }

         local_140 = 0;
         local_138 = 0;
         local_120 = 0;
         local_118 = '\0';
         local_148 = &local_138;
         local_128 = &local_118;
         cVar2 = tinyexr::ConvertHeader(param_1, (HeaderInfo*)local_108, (string*)&local_148, (string*)&local_128);
         pcVar4 = local_128;
         if (cVar2 == '\0') {
            lVar9 = 0;
            uVar8 = 0;
            lVar7 = local_f8._8_8_;
            if (local_e8._0_8_ != local_f8._8_8_) {
               do {
                  __ptr = *(void**)( lVar7 + 0x200 + lVar9 );
                  if (__ptr != (void*)0x0) {
                     free(__ptr);
                     lVar7 = local_f8._8_8_;
                  }

                  uVar8 = uVar8 + 1;
                  lVar9 = lVar9 + 0x210;
               }
 while ( uVar8 < ( ulong )(( local_e8._0_8_ - lVar7 >> 4 ) * 0xf83e0f83e0f83e1) );
            }

            pcVar4 = local_128;
            if (( param_5 != (undefined8*)0x0 ) && ( local_120 != 0 )) {
               pcVar5 = strdup(local_128);
               *param_5 = pcVar5;
            }

            iVar3 = -9;
         }

         if (pcVar4 != &local_118) {
            operator_delete(pcVar4, CONCAT71(uStack_117, local_118) + 1);
         }

         if (local_148 != &local_138) {
            operator_delete(local_148, CONCAT71(uStack_137, local_138) + 1);
         }

         *(uint*)( param_1 + 0x54 ) = ( uint )(*(int*)( param_2 + 0x10 ) != 0);
         *(uint*)( param_1 + 0x50 ) = ( uint )(*(int*)( param_2 + 0xc ) != 0);
         if (local_60 != &local_50) {
            operator_delete(local_60, CONCAT71(uStack_4f, local_50) + 1);
         }

         if (local_80 != &local_70) {
            operator_delete(local_80, CONCAT71(uStack_6f, local_70) + 1);
         }

         if ((void*)local_f8._8_8_ != (void*)0x0) {
            operator_delete((void*)local_f8._8_8_, local_e8._8_8_ - local_f8._8_8_);
         }

         uVar1 = local_108._8_8_;
         puVar6 = (undefined8*)local_108._0_8_;
         if (local_108._8_8_ != local_108._0_8_) {
            do {
               if ((undefined8*)*puVar6 != puVar6 + 2) {
                  operator_delete((undefined8*)*puVar6, puVar6[2] + 1);
               }

               puVar6 = puVar6 + 7;
            }
 while ( (undefined8*)uVar1 != puVar6 );
         }

         if ((undefined8*)local_108._0_8_ != (undefined8*)0x0) {
            operator_delete((void*)local_108._0_8_, local_f8._0_8_ - local_108._0_8_);
         }

      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return iVar3;
   }

   undefined4 ParseEXRHeaderFromFile(long param_1, long param_2, char *param_3, undefined8 *param_4) {
      long *plVar1;
      __nlink_t *p_Var2;
      int __fd;
      int iVar3;
      undefined4 uVar4;
      void *__addr;
      size_t __n;
      long *plVar5;
      char *pcVar6;
      uint uVar7;
      size_t *psVar8;
      ulong uVar9;
      long *plVar11;
      ulong uVar12;
      long lVar13;
      __nlink_t *p_Var14;
      long in_FS_OFFSET;
      size_t local_100;
      size_t *local_f8;
      size_t local_f0;
      size_t local_e8[2];
      stat64 local_d8;
      long local_40;
      ulong uVar10;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_2 == 0 || param_3 == (char*)0x0 ) || ( param_1 == 0 )) {
         std::__cxx11::string::string<std::allocator<char>>((string*)&local_d8, "Invalid argument for ParseEXRHeaderFromFile", (allocator*)CONCAT71(( int7 )((ulong)param_3 >> 8), param_3 == (char*)0x0));
         if (param_4 != (undefined8*)0x0) {
            pcVar6 = strdup((char*)local_d8.st_dev);
            *param_4 = pcVar6;
         }

         if ((__nlink_t*)local_d8.st_dev != &local_d8.st_nlink) {
            operator_delete((void*)local_d8.st_dev, local_d8.st_nlink + 1);
         }

         uVar4 = 0xfffffffd;
         goto LAB_0010bbce;
      }

      __fd = open64(param_3, 0);
      if (( ( ( __fd == -1 ) || ( iVar3 = fstat64(__fd, &local_d8) ),iVar3 < 0 ) ) || ( local_d8.st_size < 0 )) {
         local_f8 = local_e8;
         __n = strlen(param_3);
         local_100 = __n;
         if (__n < 0x10) {
            psVar8 = local_e8;
            if (__n == 1) {
               local_e8[0] = CONCAT71(local_e8[0]._1_7_, *param_3);
            }
 else if (__n != 0) goto LAB_0010bd31;
         }
 else {
            local_f8 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_f8, ( ulong ) & local_100);
            local_e8[0] = local_100;
            psVar8 = local_f8;
            LAB_0010bd31:memcpy(psVar8, param_3, __n);
            psVar8 = local_f8;
         }

         *(undefined1*)( (long)psVar8 + local_100 ) = 0;
         p_Var2 = &local_d8.st_nlink;
         local_f0 = local_100;
         plVar5 = (long*)std::__cxx11::string::_M_replace(( ulong ) & local_f8, 0, (char*)0x0, 0x1189a7);
         plVar1 = plVar5 + 2;
         if ((__nlink_t*)*plVar5 == (__nlink_t*)plVar1) {
            uVar12 = plVar5[1] + 1;
            plVar11 = plVar1;
            p_Var14 = p_Var2;
            if (7 < (uint)uVar12) {
               uVar9 = 0;
               do {
                  uVar7 = (int)uVar9 + 8;
                  uVar10 = (ulong)uVar7;
                  *(undefined8*)( (long)p_Var2 + uVar9 ) = *(undefined8*)( (long)plVar1 + uVar9 );
                  uVar9 = uVar10;
               }
 while ( uVar7 < ( (uint)uVar12 & 0xfffffff8 ) );
               p_Var14 = (__nlink_t*)( (long)p_Var2 + uVar10 );
               plVar11 = (long*)( uVar10 + (long)plVar1 );
            }

            lVar13 = 0;
            if (( uVar12 & 4 ) != 0) {
               *(int*)p_Var14 = (int)*plVar11;
               lVar13 = 4;
            }

            if (( uVar12 & 2 ) != 0) {
               *(undefined2*)( (long)p_Var14 + lVar13 ) = *(undefined2*)( (long)plVar11 + lVar13 );
               lVar13 = lVar13 + 2;
            }

            local_d8.st_dev = (__dev_t)p_Var2;
            if (( uVar12 & 1 ) != 0) {
               *(undefined1*)( (long)p_Var14 + lVar13 ) = *(undefined1*)( (long)plVar11 + lVar13 );
            }

         }
 else {
            local_d8.st_nlink = plVar5[2];
            local_d8.st_dev = ( __dev_t ) * plVar5;
         }

         local_d8.st_ino = plVar5[1];
         *plVar5 = (long)plVar1;
         plVar5[1] = 0;
         *(undefined1*)( plVar5 + 2 ) = 0;
         if (param_4 != (undefined8*)0x0) {
            pcVar6 = strdup((char*)local_d8.st_dev);
            *param_4 = pcVar6;
         }

         if ((__nlink_t*)local_d8.st_dev != p_Var2) {
            operator_delete((void*)local_d8.st_dev, local_d8.st_nlink + 1);
         }

         if (local_f8 != local_e8) {
            operator_delete(local_f8, local_e8[0] + 1);
         }

         uVar4 = 0xfffffff9;
         if (__fd == -1) goto LAB_0010bbce;
      }
 else {
         uVar4 = ParseEXRHeaderFromMemory(param_1, param_2, __addr, local_d8.st_size, param_4);
         munmap(__addr, local_d8.st_size);
      }

      close(__fd);
      LAB_0010bbce:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar4;
   }

   /* tinyexr::DecodeTiledLevel(TEXRImage*, TEXRHeader const*, tinyexr::OffsetData const&,
   std::vector<unsigned long, std::allocator<unsigned long> > const&, int, unsigned char const*,
   unsigned long, std::__cxx11::string*) */
   uint tinyexr::DecodeTiledLevel(TEXRImage *param_1, TEXRHeader *param_2, OffsetData *param_3, vector *param_4, int param_5, uchar *param_6, ulong param_7, string *param_8) {
      string *psVar1;
      int iVar2;
      void *pvVar3;
      long lVar4;
      uint uVar5;
      long *plVar6;
      int iVar7;
      long *plVar8;
      long *plVar9;
      long in_FS_OFFSET;
      uchar *local_a8;
      int local_a0;
      int local_9c;
      TEXRHeader *local_98;
      TEXRImage *local_90[2];
      undefined4 local_80;
      int local_7c;
      int local_78;
      int local_74;
      uint local_70;
      undefined4 local_6c;
      long local_68;
      long *local_60;
      undefined1 local_58[16];
      long *local_48;
      long local_40;
      psVar1 = param_8;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_80 = *(undefined4*)( param_2 + 0x78 );
      local_7c = *(int*)( param_1 + 0x10 );
      iVar7 = *(int*)( param_2 + 0x44 );
      if (iVar7 == 1) {
         lVar4 = (long)local_7c * 0x18;
      }
 else if (iVar7 == 2) {
         local_7c = *(int*)( param_3 + 0x18 ) * *(int*)( param_1 + 0x14 ) + local_7c;
         lVar4 = (long)local_7c * 0x18;
      }
 else {
         lVar4 = 0;
         local_7c = iVar7;
         if (iVar7 != 0) {
            lVar4 = -0x18;
            local_7c = -1;
         }

      }

      plVar6 = *(long**)( lVar4 + *(long*)param_3 );
      iVar7 = (int)( ( (long*)( lVar4 + *(long*)param_3 ) )[1] - (long)plVar6 >> 3 ) * -0x55555555;
      local_a8 = param_6;
      local_9c = param_5;
      local_98 = param_2;
      local_90[0] = param_1;
      if (( iVar7 < 1 ) || ( local_78 = local_78 < 1 )) {
         uVar5 = 0xfffffffc;
         goto LAB_0010c218;
      }

      local_74 = iVar7 * local_78;
      local_70 = 0;
      pvVar3 = calloc((long)local_74, 0x20);
      local_48 = (long*)0x0;
      *(void**)param_1 = pvVar3;
      local_6c = 0;
      local_58 = (undefined1[16])0x0;
      iVar2 = std::thread::hardware_concurrency();
      iVar7 = 1;
      if (0 < iVar2) {
         iVar7 = iVar2;
      }

      if (local_74 < iVar7) {
         iVar7 = local_74;
      }

      if (0 < iVar7) {
         iVar2 = 0;
         plVar6 = (long*)0x0;
         plVar9 = (long*)0x0;
         local_a0 = iVar7;
         do {
            local_68 = 0;
            local_60 = (long*)operator_new(0x70);
            local_60[10] = (long)&param_7;
            local_60[0xc] = (long)&local_9c;
            local_60[8] = (long)param_3;
            local_60[9] = (long)&local_7c;
            local_60[0xb] = (long)&local_a8;
            local_60[0xd] = (long)param_4;
            *local_60 = (long)&PTR___State_impl_0011cd10;
            local_60[1] = (long)&local_6c;
            local_60[2] = (long)&local_74;
            local_60[3] = (long)local_90;
            local_60[4] = (long)&local_80;
            local_60[5] = (long)&local_98;
            local_60[6] = (long)&local_70;
            local_60[7] = (long)&local_78;
            std::thread::_M_start_thread(&local_68, &local_60, std::thread::_M_thread_deps_never_run);
            if (local_60 != (long*)0x0) {
               ( **(code**)( *local_60 + 8 ) )();
            }

            if (plVar9 == plVar6) {
               std::vector<std::thread,std::allocator<std::thread>>::_M_realloc_insert<std::thread>((vector<std::thread,std::allocator<std::thread>>*)local_58, plVar9, &local_68);
               if (local_68 != 0) goto LAB_0010c2fe;
               plVar8 = (long*)local_58._8_8_;
               if (local_a0 == iVar2 + 1) goto LAB_0010c160;
            }
 else {
               *plVar9 = 0;
               plVar8 = plVar9 + 1;
               *plVar9 = local_68;
               local_58._8_8_ = plVar8;
               if (local_a0 == iVar2 + 1) goto LAB_0010c160;
            }

            iVar2 = iVar2 + 1;
            plVar6 = local_48;
            plVar9 = plVar8;
         }
 while ( true );
      }

      LAB_0010c188:*(ulong*)( local_90[0] + 0x28 ) = CONCAT44(local_74, local_80);
      uVar5 = -(uint)(local_70 != 0) & 0xfffffffc;
      if (( local_70 & 2 ) != 0) {
         if (0x3fffffffffffffffU - *(long*)( psVar1 + 8 ) < 0x1a) goto LAB_0010c303;
         std::__cxx11::string::_M_append((char*)psVar1, 0x118b22);
      }

      if (( local_70 & 4 ) != 0) {
         if (0x3fffffffffffffffU - *(long*)( psVar1 + 8 ) < 0x1c) {
            LAB_0010c303:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
         }

         std::__cxx11::string::_M_append((char*)psVar1, 0x118b3d);
      }

      for (plVar6 = (long*)local_58._0_8_; (long*)local_58._8_8_ != plVar6; plVar6 = plVar6 + 1) {
         if (*plVar6 != 0) {
            LAB_0010c2fe:/* WARNING: Subroutine does not return */std::terminate();
         }

      }

      if ((long*)local_58._0_8_ != (long*)0x0) {
         operator_delete((void*)local_58._0_8_, (long)local_48 - local_58._0_8_);
      }

      LAB_0010c218:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar5;
      LAB_0010c160:for (plVar6 = (long*)local_58._0_8_; plVar6 != plVar8; plVar6 = plVar6 + 1) {
         std::thread::join();
      }

      goto LAB_0010c188;
   }

   /* WARNING: Type propagation algorithm not settling */
   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* tinyexr::DecodeChunk(TEXRImage*, TEXRHeader const*, tinyexr::OffsetData const&, unsigned char
   const*, unsigned long, std::__cxx11::string*) [clone .constprop.0] */
   ulong tinyexr::DecodeChunk(TEXRImage *param_1, TEXRHeader *param_2, OffsetData *param_3, uchar *param_4, ulong param_5, string *param_6) {
      int iVar1;
      long lVar2;
      void *__ptr;
      bool bVar3;
      pointer_____offset_0x10___ puVar4;
      code *pcVar5;
      code *pcVar6;
      int iVar7;
      ulong uVar8;
      undefined1(*pauVar9)[16];
      undefined8 uVar10;
      long *plVar11;
      long lVar12;
      ostream *poVar13;
      TEXRImage *pTVar14;
      int *piVar15;
      ulong uVar16;
      long *plVar17;
      long lVar18;
      streambuf *psVar19;
      int iVar20;
      int iVar21;
      int iVar22;
      long *plVar23;
      long *plVar24;
      long in_FS_OFFSET;
      ulong local_af8;
      uchar *local_af0;
      TEXRHeader *local_ae8;
      TEXRImage *local_ae0[2];
      char local_ace;
      bool local_acd;
      undefined4 local_acc;
      int local_ac8[2];
      long local_ac0;
      long local_ab8;
      long local_ab0;
      long local_aa8;
      long *local_aa0;
      undefined1 local_a98[16];
      long local_a88;
      undefined1 local_a78[16];
      long *local_a68;
      long *local_a58;
      ulong local_a50;
      long local_a48[2];
      undefined1 *local_a38;
      ulong local_a30;
      undefined1 local_a28;
      undefined7 uStack_a27;
      ulong local_a18;
      ulong local_a10;
      undefined1 *local_9f8;
      ulong local_9f0;
      undefined1 local_9e8;
      undefined7 uStack_9e7;
      ulong local_9d8;
      ulong local_9d0;
      ulong local_9b8;
      ulong local_9b0;
      code *local_998[2];
      code *local_988[8];
      locale local_948[16];
      long *local_938;
      long local_928[2];
      code *local_918[34];
      stringstream local_808[16];
      ostream local_7f8[384];
      code *local_678[2];
      code *local_668[2];
      undefined1 local_658[16];
      undefined1 local_648[16];
      undefined1 local_638[16];
      locale local_628[8];
      undefined4 local_620;
      undefined1 *local_618;
      undefined8 local_610;
      undefined1 local_608;
      undefined7 uStack_607;
      code *local_5f8[27];
      undefined8 local_520;
      undefined2 local_518;
      undefined1 local_510[16];
      undefined1 local_500[16];
      code *local_4e8[2];
      code *local_4d8[2];
      undefined1 local_4c8[16];
      undefined1 local_4b8[16];
      undefined1 local_4a8[16];
      locale local_498[8];
      undefined4 local_490;
      undefined1 *local_488;
      undefined8 local_480;
      undefined1 local_478;
      undefined7 uStack_477;
      code *local_468[27];
      undefined8 local_390;
      undefined2 local_388;
      undefined1 local_380[16];
      undefined1 local_370[16];
      code *local_358[2];
      code *local_348[2];
      undefined1 local_338[16];
      undefined1 local_328[16];
      undefined1 local_318[16];
      locale local_308[8];
      undefined4 local_300;
      undefined1 *local_2f8;
      undefined8 local_2f0;
      undefined1 local_2e8;
      undefined7 uStack_2e7;
      code *local_2d8[27];
      undefined8 local_200;
      undefined2 local_1f8;
      undefined1 local_1f0[16];
      undefined1 local_1e0[16];
      code *local_1c8[2];
      code *local_1b8[2];
      undefined1 local_1a8[16];
      undefined1 local_198[16];
      undefined1 local_188[16];
      locale local_178[8];
      undefined4 local_170;
      undefined1 *local_168;
      undefined8 local_160;
      undefined1 local_158;
      undefined7 uStack_157;
      code *local_148[27];
      undefined8 local_70;
      undefined2 local_68;
      undefined1 local_60[16];
      undefined1 local_50[16];
      long local_40;
      puVar4 = PTR_vtable_0011ccf0;
      iVar1 = *(int*)( param_2 + 0x78 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar20 = *(int*)( param_2 + 0x7c );
      local_acc = 1;
      if (iVar20 == 3) {
         LAB_0010c660:local_acc = 0x10;
      }
 else if (iVar20 == 4) {
         local_acc = 0x20;
      }
 else if (iVar20 == 0x80) goto LAB_0010c660;
      local_af8 = param_5;
      local_af0 = param_4;
      local_ae8 = param_2;
      local_ae0[0] = param_1;
      if (*(int*)( param_2 + 0x10 ) < *(int*)( param_2 + 8 )) {
         LAB_0010da58:std::__cxx11::string::append(param_6, "Invalid data window.\n");
      }
 else {
         if (*(int*)( param_2 + 0x14 ) < *(int*)( param_2 + 0xc )) goto LAB_0010da58;
         local_ac0 = ( (long)*(int*)( param_2 + 0x10 ) - (long)*(int*)( param_2 + 8 ) ) + 1;
         local_ab8 = ( (long)*(int*)( param_2 + 0x14 ) - (long)*(int*)( param_2 + 0xc ) ) + 1;
         if (local_ac0 < 1) {
            std::__cxx11::string::append(param_6, "Invalid data window width.\n");
         }
 else if (local_ab8 < 1) {
            std::__cxx11::string::append(param_6, "Invalid data window height.\n");
         }
 else {
            bVar3 = 0x800000 < local_ab8 || 0x800000 < local_ac0;
            if (bVar3) {
               std::__cxx11::stringstream::stringstream((stringstream*)local_998);
               std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_988, "data_with or data_height too large. data_width: ", 0x30);
               poVar13 = std::ostream::_M_insert<long>((long)local_988);
               std::__ostream_insert<char,std::char_traits<char>>(poVar13, ", ", 2);
               std::__ostream_insert<char,std::char_traits<char>>(poVar13, "data_height = ", 0xe);
               poVar13 = std::ostream::_M_insert<long>((long)poVar13);
               std::endl<char,std::char_traits<char>>(poVar13);
               std::__cxx11::stringbuf::str();
               if (0x3fffffffffffffffU - *(long*)( param_6 + 8 ) < local_9b0) goto LAB_0010dd60;
               std::__cxx11::string::_M_append((char*)param_6, local_9b8);
               std::__cxx11::string::_M_dispose();
               local_998[0] = std::__ostream_insert<char,std::char_traits<char>>;
               local_918[0] = open64;
               local_988[0] = std::__cxx11::string::_M_assign;
               local_988[1] = std::__cxx11::string::_M_replace;
               if (local_938 != local_928) {
                  operator_delete(local_938, local_928[0] + 1);
               }

               local_988[1] = std::ios_base::~ios_base;
               std::locale::~locale(local_948);
               *(undefined8*)( (long)local_998 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
               local_988[0] = _locale;
               *(undefined8*)( (long)local_988 + *(long*)( _locale + -0x18 ) ) = _vtable;
               local_998[0] = _init;
               *(undefined8*)( (long)local_998 + *(long*)( _init + -0x18 ) ) = _vtable;
               local_998[1] = (code*)0x0;
               local_918[0] = (code*)&std::__cxx11::stringstream::vtable;
               std::ios_base::~ios_base((ios_base*)local_918);
            }
 else {
               if (( *(int*)( param_2 + 0x38 ) == 0 ) || ( ( *(int*)( param_2 + 0x3c ) < 0x800001 && ( *(int*)( param_2 + 0x40 ) < 0x800001 ) ) )) {
                  uVar16 = (ulong)iVar1;
                  local_ac8[0] = 0;
                  lVar2 = *(long*)( param_2 + 0x68 );
                  plVar17 = (long*)**(long**)param_3;
                  local_a98 = (undefined1[16])0x0;
                  local_a88 = 0;
                  local_ab0 = plVar17[1] - *plVar17 >> 3;
                  if (uVar16 == 0) {
                     if (*(int*)( param_2 + 0x38 ) == 0) {
                        LAB_0010cb58:local_ace = '\0';
                        std::ios_base::ios_base((ios_base*)local_2d8);
                        pcVar5 = _init;
                        local_1f8 = 0;
                        local_1f0 = (undefined1[16])0x0;
                        local_1e0 = (undefined1[16])0x0;
                        local_2d8[0] = (code*)&std::__cxx11::stringstream::vtable;
                        local_200 = 0;
                        local_358[0] = _init;
                        *(undefined8*)( (long)local_358 + *(long*)( _init + -0x18 ) ) = _vtable;
                        local_358[1] = (code*)0x0;
                        std::ios::init((streambuf*)( (long)local_358 + *(long*)( _init + -0x18 ) ));
                        local_348[0] = _locale;
                        psVar19 = (streambuf*)( (ostream*)local_348 + *(long*)( _locale + -0x18 ) );
                        *(undefined8*)psVar19 = _vtable;
                        std::ios::init(psVar19);
                        *(undefined8*)( (long)local_358 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
                        local_358[0] = std::__ostream_insert<char,std::char_traits<char>>;
                        local_348[0] = std::__cxx11::string::_M_assign;
                        local_348[1] = (code*)puVar4;
                        local_338 = (undefined1[16])0x0;
                        local_328 = (undefined1[16])0x0;
                        local_318 = (undefined1[16])0x0;
                        local_2d8[0] = open64;
                        std::locale::locale(local_308);
                        local_348[1] = std::__cxx11::string::_M_replace;
                        local_2e8 = 0;
                        local_300 = 0x18;
                        local_2f0 = 0;
                        local_2f8 = &local_2e8;
                        std::ios::init((streambuf*)local_2d8);
                        std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_348, "Image data size is zero or too large: width = ", 0x2e);
                        poVar13 = std::ostream::_M_insert<long>((long)local_348);
                        std::__ostream_insert<char,std::char_traits<char>>(poVar13, ", height = ", 0xb);
                        poVar13 = std::ostream::_M_insert<long>((long)poVar13);
                        std::__ostream_insert<char,std::char_traits<char>>(poVar13, ", channels = ", 0xd);
                        poVar13 = (ostream*)std::ostream::operator <<(poVar13, iVar1);
                        std::endl<char,std::char_traits<char>>(poVar13);
                        local_a30 = 0;
                        local_a28 = 0;
                        local_a38 = &local_a28;
                        if (local_318._0_8_ == 0) {
                           std::__cxx11::string::_M_assign((string*)&local_a38);
                        }
 else {
                           std::__cxx11::string::_M_replace(( ulong ) & local_a38, 0, (char*)0x0, local_328._8_8_);
                        }

                        if (0x3fffffffffffffffU - *(long*)( param_6 + 8 ) < local_a30) goto LAB_0010dd60;
                        std::__cxx11::string::_M_append((char*)param_6, (ulong)local_a38);
                        if (local_a38 != &local_a28) {
                           operator_delete(local_a38, CONCAT71(uStack_a27, local_a28) + 1);
                        }

                        local_2d8[0] = open64;
                        local_358[0] = std::__ostream_insert<char,std::char_traits<char>>;
                        local_348[0] = std::__cxx11::string::_M_assign;
                        local_348[1] = std::__cxx11::string::_M_replace;
                        if (local_2f8 != &local_2e8) {
                           operator_delete(local_2f8, CONCAT71(uStack_2e7, local_2e8) + 1);
                        }

                        local_348[1] = std::ios_base::~ios_base;
                        std::locale::~locale(local_308);
                        *(undefined8*)( (long)local_358 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
                        local_348[0] = _locale;
                        *(undefined8*)( (long)local_348 + *(long*)( _locale + -0x18 ) ) = _vtable;
                        local_358[0] = pcVar5;
                        *(undefined8*)( (long)local_358 + *(long*)( pcVar5 + -0x18 ) ) = _vtable;
                        local_358[1] = (code*)0x0;
                        local_2d8[0] = (code*)&std::__cxx11::stringstream::vtable;
                        std::ios_base::~ios_base((ios_base*)local_2d8);
                        goto LAB_0010cb00;
                     }

                     LAB_0010c4c4:local_ace = '\0';
                     if (*(int*)( local_ae8 + 0x3c ) < 0) {
                        std::ios_base::ios_base((ios_base*)local_5f8);
                        pcVar5 = _init;
                        local_510 = (undefined1[16])0x0;
                        local_500 = (undefined1[16])0x0;
                        local_518 = 0;
                        local_5f8[0] = (code*)&std::__cxx11::stringstream::vtable;
                        local_520 = 0;
                        local_678[0] = _init;
                        *(undefined8*)( (long)local_678 + *(long*)( _init + -0x18 ) ) = _vtable;
                        local_678[1] = (code*)0x0;
                        std::ios::init((streambuf*)( (long)local_678 + *(long*)( _init + -0x18 ) ));
                        pcVar6 = _locale;
                        local_668[0] = _locale;
                        psVar19 = (streambuf*)( (ostream*)local_668 + *(long*)( _locale + -0x18 ) );
                        *(undefined8*)psVar19 = _vtable;
                        std::ios::init(psVar19);
                        *(undefined8*)( (long)local_678 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
                        local_678[0] = std::__ostream_insert<char,std::char_traits<char>>;
                        local_668[0] = std::__cxx11::string::_M_assign;
                        local_668[1] = (code*)puVar4;
                        local_658 = (undefined1[16])0x0;
                        local_648 = (undefined1[16])0x0;
                        local_638 = (undefined1[16])0x0;
                        local_5f8[0] = open64;
                        std::locale::locale(local_628);
                        local_668[1] = std::__cxx11::string::_M_replace;
                        local_608 = 0;
                        local_620 = 0x18;
                        local_610 = 0;
                        local_618 = &local_608;
                        std::ios::init((streambuf*)local_5f8);
                        std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_668, "Invalid tile size x : ", 0x16);
                        poVar13 = (ostream*)std::ostream::operator <<((ostream*)local_668, *(int*)( local_ae8 + 0x3c ));
                        std::__ostream_insert<char,std::char_traits<char>>(poVar13, "\n", 1);
                        local_9f0 = 0;
                        local_9e8 = 0;
                        local_9f8 = &local_9e8;
                        if (local_638._0_8_ == 0) {
                           std::__cxx11::string::_M_assign((string*)&local_9f8);
                        }
 else {
                           std::__cxx11::string::_M_replace(( ulong ) & local_9f8, 0, (char*)0x0, local_648._8_8_);
                        }

                        if (0x3fffffffffffffffU - *(long*)( param_6 + 8 ) < local_9f0) {
                           LAB_0010dd60:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
                        }

                        std::__cxx11::string::_M_append((char*)param_6, (ulong)local_9f8);
                        if (local_9f8 != &local_9e8) {
                           operator_delete(local_9f8, CONCAT71(uStack_9e7, local_9e8) + 1);
                        }

                        local_5f8[0] = open64;
                        local_678[0] = std::__ostream_insert<char,std::char_traits<char>>;
                        local_668[0] = std::__cxx11::string::_M_assign;
                        local_668[1] = std::__cxx11::string::_M_replace;
                        if (local_618 != &local_608) {
                           operator_delete(local_618, CONCAT71(uStack_607, local_608) + 1);
                        }

                        local_668[1] = std::ios_base::~ios_base;
                        std::locale::~locale(local_628);
                        *(undefined8*)( (long)local_678 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
                        local_668[0] = pcVar6;
                        *(undefined8*)( (long)local_668 + *(long*)( pcVar6 + -0x18 ) ) = _vtable;
                        local_678[0] = pcVar5;
                        *(undefined8*)( (long)local_678 + *(long*)( pcVar5 + -0x18 ) ) = _vtable;
                        local_678[1] = (code*)0x0;
                        local_5f8[0] = (code*)&std::__cxx11::stringstream::vtable;
                        std::ios_base::~ios_base((ios_base*)local_5f8);
                        LAB_0010d63d:uVar8 = 0xfffffff7;
                     }
 else {
                        if (*(int*)( local_ae8 + 0x40 ) < 0) {
                           std::ios_base::ios_base((ios_base*)local_468);
                           pcVar5 = _init;
                           local_388 = 0;
                           local_380 = (undefined1[16])0x0;
                           local_370 = (undefined1[16])0x0;
                           local_468[0] = (code*)&std::__cxx11::stringstream::vtable;
                           local_390 = 0;
                           local_4e8[0] = _init;
                           *(undefined8*)( (long)local_4e8 + *(long*)( _init + -0x18 ) ) = _vtable;
                           local_4e8[1] = (code*)0x0;
                           std::ios::init((streambuf*)( (long)local_4e8 + *(long*)( _init + -0x18 ) ));
                           local_4d8[0] = _locale;
                           psVar19 = (streambuf*)( (ostream*)local_4d8 + *(long*)( _locale + -0x18 ) );
                           *(undefined8*)psVar19 = _vtable;
                           std::ios::init(psVar19);
                           *(undefined8*)( (long)local_4e8 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
                           local_4d8[0] = std::__cxx11::string::_M_assign;
                           local_4d8[1] = (code*)puVar4;
                           local_4c8 = (undefined1[16])0x0;
                           local_4b8 = (undefined1[16])0x0;
                           local_4a8 = (undefined1[16])0x0;
                           local_4e8[0] = std::__ostream_insert<char,std::char_traits<char>>;
                           local_468[0] = open64;
                           std::locale::locale(local_498);
                           local_4d8[1] = std::__cxx11::string::_M_replace;
                           local_490 = 0x18;
                           local_480 = 0;
                           local_478 = 0;
                           local_488 = &local_478;
                           std::ios::init((streambuf*)local_468);
                           std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_4d8, "Invalid tile size y : ", 0x16);
                           poVar13 = (ostream*)std::ostream::operator <<((ostream*)local_4d8, *(int*)( local_ae8 + 0x40 ));
                           std::__ostream_insert<char,std::char_traits<char>>(poVar13, "\n", 1);
                           std::__cxx11::stringbuf::str();
                           if (0x3fffffffffffffffU - *(long*)( param_6 + 8 ) < local_a10) goto LAB_0010dd60;
                           std::__cxx11::string::_M_append((char*)param_6, local_a18);
                           std::__cxx11::string::_M_dispose();
                           local_4e8[0] = std::__ostream_insert<char,std::char_traits<char>>;
                           local_468[0] = open64;
                           local_4d8[0] = std::__cxx11::string::_M_assign;
                           local_4d8[1] = std::__cxx11::string::_M_replace;
                           if (local_488 != &local_478) {
                              operator_delete(local_488, CONCAT71(uStack_477, local_478) + 1);
                           }

                           local_4d8[1] = std::ios_base::~ios_base;
                           std::locale::~locale(local_498);
                           *(undefined8*)( (long)local_4e8 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
                           local_4d8[0] = _locale;
                           *(undefined8*)( (long)local_4d8 + *(long*)( _locale + -0x18 ) ) = _vtable;
                           local_4e8[0] = pcVar5;
                           *(undefined8*)( (long)local_4e8 + *(long*)( pcVar5 + -0x18 ) ) = _vtable;
                           local_4e8[1] = (code*)0x0;
                           local_468[0] = (code*)&std::__cxx11::stringstream::vtable;
                           std::ios_base::~ios_base((ios_base*)local_468);
                           goto LAB_0010d63d;
                        }

                        if (*(int*)( local_ae8 + 0x44 ) == 2) {
                           pTVar14 = (TEXRImage*)0x0;
                           iVar20 = 0;
                           if (0 < *(int*)( param_3 + 0x1c )) {
                              do {
                                 if (0 < *(int*)( param_3 + 0x18 )) {
                                    if (pTVar14 != (TEXRImage*)0x0) {
                                       iVar7 = 0;
                                       goto LAB_0010d2ee;
                                    }

                                    iVar7 = 0;
                                    pTVar14 = local_ae0[0];
                                    iVar22 = ( *(int*)( local_ae8 + 0x10 ) - *(int*)( local_ae8 + 8 ) ) + 1;
                                    while (true) {
                                       if (iVar22 < 1) {
                                          iVar22 = 1;
                                       }

                                       *(int*)( pTVar14 + 0x20 ) = iVar22;
                                       iVar22 = ( *(int*)( local_ae8 + 0x14 ) - *(int*)( local_ae8 + 0xc ) ) + 1;
                                       iVar21 = iVar22 / ( 1 << ( (byte)iVar20 & 0x1f ) );
                                       if (( *(int*)( local_ae8 + 0x48 ) == 1 ) && ( iVar21 << ( (byte)iVar20 & 0x1f ) < iVar22 )) {
                                          iVar21 = iVar21 + 1;
                                       }

                                       *(int*)( pTVar14 + 0x10 ) = iVar7;
                                       if (iVar21 < 1) {
                                          iVar21 = 1;
                                       }

                                       *(int*)( pTVar14 + 0x14 ) = iVar20;
                                       *(int*)( pTVar14 + 0x24 ) = iVar21;
                                       uVar8 = DecodeTiledLevel(pTVar14, local_ae8, param_3, (vector*)local_a98, local_ac8[0], local_af0, local_af8, param_6);
                                       if ((int)uVar8 != 0) goto LAB_0010cb05;
                                       iVar7 = iVar7 + 1;
                                       if (*(int*)( param_3 + 0x18 ) <= iVar7) break;
                                       LAB_0010d2ee:pauVar9 = (undefined1(*) [16])operator_new(0x30);
                                       *(undefined1(**) [16])( pTVar14 + 8 ) = pauVar9;
                                       *pauVar9 = (undefined1[16])0x0;
                                       pTVar14 = *(TEXRImage**)( pTVar14 + 8 );
                                       *(undefined8*)pauVar9[1] = 0;
                                       pauVar9[2] = (undefined1[16])0x0;
                                       *(undefined8*)( pauVar9[1] + 8 ) = 0;
                                       iVar21 = ( *(int*)( local_ae8 + 0x10 ) - *(int*)( local_ae8 + 8 ) ) + 1;
                                       iVar22 = iVar21 / ( 1 << ( (byte)iVar7 & 0x1f ) );
                                       if (( *(int*)( local_ae8 + 0x48 ) == 1 ) && ( iVar22 << ( (byte)iVar7 & 0x1f ) < iVar21 )) {
                                          iVar22 = iVar22 + 1;
                                       }

                                    }
;
                                 }

                                 iVar20 = iVar20 + 1;
                              }
 while ( iVar20 < *(int*)( param_3 + 0x1c ) );
                           }

                        }
 else if (0 < *(int*)( param_3 + 0x18 )) {
                           iVar22 = 0;
                           uVar10 = 0;
                           iVar7 = 1;
                           pTVar14 = local_ae0[0];
                           iVar20 = ( *(int*)( local_ae8 + 0x10 ) - *(int*)( local_ae8 + 8 ) ) + 1;
                           while (true) {
                              iVar21 = 1;
                              if (0 < iVar20) {
                                 iVar21 = iVar20;
                              }

                              *(int*)( pTVar14 + 0x20 ) = iVar21;
                              iVar20 = ( *(int*)( local_ae8 + 0x14 ) - *(int*)( local_ae8 + 0xc ) ) + 1;
                              iVar7 = iVar20 / iVar7;
                              if (( *(int*)( local_ae8 + 0x48 ) == 1 ) && ( iVar7 << ( (byte)iVar22 & 0x1f ) < iVar20 )) {
                                 iVar7 = iVar7 + 1;
                              }

                              *(undefined8*)( pTVar14 + 0x10 ) = uVar10;
                              if (iVar7 < 1) {
                                 iVar7 = 1;
                              }

                              *(int*)( pTVar14 + 0x24 ) = iVar7;
                              uVar8 = DecodeTiledLevel(pTVar14, local_ae8, param_3, (vector*)local_a98, local_ac8[0], local_af0, local_af8, param_6);
                              if ((int)uVar8 != 0) goto LAB_0010cb05;
                              iVar22 = iVar22 + 1;
                              if (*(int*)( param_3 + 0x18 ) <= iVar22) break;
                              uVar10 = CONCAT44(iVar22, iVar22);
                              pauVar9 = (undefined1(*) [16])operator_new(0x30);
                              *(undefined1(**) [16])( pTVar14 + 8 ) = pauVar9;
                              *pauVar9 = (undefined1[16])0x0;
                              iVar7 = 1 << ( (byte)iVar22 & 0x1f );
                              pTVar14 = *(TEXRImage**)( pTVar14 + 8 );
                              *(undefined8*)pauVar9[1] = 0;
                              pauVar9[2] = (undefined1[16])0x0;
                              iVar21 = ( *(int*)( local_ae8 + 0x10 ) - *(int*)( local_ae8 + 8 ) ) + 1;
                              *(undefined8*)( pauVar9[1] + 8 ) = 0;
                              iVar20 = iVar21 / iVar7;
                              if (( *(int*)( local_ae8 + 0x48 ) == 1 ) && ( iVar20 << ( (byte)iVar22 & 0x1f ) < iVar21 )) {
                                 iVar20 = iVar20 + 1;
                              }

                           }
;
                        }

                        if (local_ace != '\0') {
                           std::__cxx11::string::append(param_6, "Invalid/Corrupted data found when decoding pixels.\n");
                           if (uVar16 != 0) goto LAB_0010d658;
                           goto LAB_0010cb00;
                        }

                        LAB_0010d1b3:if (0 < *(int*)( local_ae8 + 0x78 )) {
                           lVar2 = *(long*)( local_ae8 + 0x80 );
                           lVar18 = *(long*)( local_ae8 + 0x70 );
                           lVar12 = 0;
                           do {
                              *(undefined4*)( lVar18 + lVar12 * 4 ) = *(undefined4*)( lVar2 + lVar12 * 4 );
                              lVar12 = lVar12 + 1;
                           }
 while ( (int)lVar12 < *(int*)( local_ae8 + 0x78 ) );
                        }

                        *(int*)( local_ae0[0] + 0x20 ) = (int)local_ac0;
                        *(int*)( local_ae0[0] + 0x28 ) = iVar1;
                        *(int*)( local_ae0[0] + 0x24 ) = (int)local_ab8;
                        uVar8 = 0;
                     }

                  }
 else {
                     std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append((vector<unsigned_long,std::allocator<unsigned_long>>*)local_a98, uVar16);
                     pTVar14 = local_ae0[0];
                     iVar20 = 0;
                     lVar18 = 0;
                     local_ac8[0] = 0;
                     piVar15 = (int*)( lVar2 + 0x100 );
                     uVar8 = 0;
                     do {
                        iVar7 = *piVar15;
                        *(long*)( local_a98._0_8_ + uVar8 * 8 ) = lVar18;
                        if (iVar7 == 1) {
                           iVar20 = iVar20 + 2;
                           lVar18 = lVar18 + 2;
                        }
 else {
                           if (( iVar7 != 2 ) && ( iVar7 != 0 )) {
                              if (bVar3) {
                                 local_ac8[0] = iVar20;
                              }

                              if (0x3fffffffffffffffU - *(long*)( param_6 + 8 ) < 0x22) goto LAB_0010dd60;
                              std::__cxx11::string::_M_append((char*)param_6, 0x119518);
                              goto LAB_0010cb00;
                           }

                           iVar20 = iVar20 + 4;
                           lVar18 = lVar18 + 4;
                        }

                        uVar8 = uVar8 + 1;
                        piVar15 = piVar15 + 0x44;
                        bVar3 = true;
                     }
 while ( uVar16 != uVar8 );
                     local_ace = '\0';
                     local_ac8[0] = iVar20;
                     if (*(int*)( local_ae8 + 0x38 ) != 0) goto LAB_0010c4c4;
                     if (0x3ffffffffe < local_ac0 * local_ab8 * uVar16 - 1) goto LAB_0010cb58;
                     uVar10 = AllocateImage(iVar1, *(TEXRChannelInfo**)( local_ae8 + 0x68 ), *(int**)( local_ae8 + 0x80 ), (int)local_ac0, (int)local_ab8, &local_acd);
                     *(undefined8*)( pTVar14 + 0x18 ) = uVar10;
                     if (local_acd == false) {
                        std::ios_base::ios_base((ios_base*)local_148);
                        pcVar5 = _init;
                        local_68 = 0;
                        local_60 = (undefined1[16])0x0;
                        local_50 = (undefined1[16])0x0;
                        local_148[0] = (code*)&std::__cxx11::stringstream::vtable;
                        local_70 = 0;
                        local_1c8[0] = _init;
                        *(undefined8*)( (long)local_1c8 + *(long*)( _init + -0x18 ) ) = _vtable;
                        local_1c8[1] = (code*)0x0;
                        std::ios::init((streambuf*)( (long)local_1c8 + *(long*)( _init + -0x18 ) ));
                        pcVar6 = _locale;
                        local_1b8[0] = _locale;
                        psVar19 = (streambuf*)( (ostream*)local_1b8 + *(long*)( _locale + -0x18 ) );
                        *(undefined8*)psVar19 = _vtable;
                        std::ios::init(psVar19);
                        *(undefined8*)( (long)local_1c8 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
                        local_1c8[0] = std::__ostream_insert<char,std::char_traits<char>>;
                        local_1b8[0] = std::__cxx11::string::_M_assign;
                        local_1b8[1] = (code*)puVar4;
                        local_1a8 = (undefined1[16])0x0;
                        local_198 = (undefined1[16])0x0;
                        local_188 = (undefined1[16])0x0;
                        local_148[0] = open64;
                        std::locale::locale(local_178);
                        local_1b8[1] = std::__cxx11::string::_M_replace;
                        local_170 = 0x18;
                        local_160 = 0;
                        local_158 = 0;
                        local_168 = &local_158;
                        std::ios::init((streambuf*)local_148);
                        std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_1b8, "Failed to allocate memory for Images. Maybe EXR header is corrupted or Image data size is too large: width = ", 0x6d);
                        poVar13 = std::ostream::_M_insert<long>((long)local_1b8);
                        std::__ostream_insert<char,std::char_traits<char>>(poVar13, ", height = ", 0xb);
                        poVar13 = std::ostream::_M_insert<long>((long)poVar13);
                        std::__ostream_insert<char,std::char_traits<char>>(poVar13, ", channels = ", 0xd);
                        poVar13 = (ostream*)std::ostream::operator <<(poVar13, iVar1);
                        std::endl<char,std::char_traits<char>>(poVar13);
                        std::__cxx11::stringbuf::str();
                        if (0x3fffffffffffffffU - *(long*)( param_6 + 8 ) < local_a50) goto LAB_0010dd60;
                        std::__cxx11::string::_M_append((char*)param_6, (ulong)local_a58);
                        if (local_a58 != local_a48) {
                           operator_delete(local_a58, local_a48[0] + 1);
                        }

                        local_148[0] = open64;
                        local_1c8[0] = std::__ostream_insert<char,std::char_traits<char>>;
                        local_1b8[0] = std::__cxx11::string::_M_assign;
                        local_1b8[1] = std::__cxx11::string::_M_replace;
                        if (local_168 != &local_158) {
                           operator_delete(local_168, CONCAT71(uStack_157, local_158) + 1);
                        }

                        local_1b8[1] = std::ios_base::~ios_base;
                        std::locale::~locale(local_178);
                        *(undefined8*)( (long)local_1c8 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
                        local_1b8[0] = pcVar6;
                        *(undefined8*)( (long)local_1b8 + *(long*)( pcVar6 + -0x18 ) ) = _vtable;
                        local_1c8[0] = pcVar5;
                        *(undefined8*)( (long)local_1c8 + *(long*)( pcVar5 + -0x18 ) ) = _vtable;
                        local_1c8[1] = (code*)0x0;
                        local_148[0] = (code*)&std::__cxx11::stringstream::vtable;
                        std::ios_base::~ios_base((ios_base*)local_148);
                        goto LAB_0010cb00;
                     }

                     local_a68 = (long*)0x0;
                     local_ac8[1] = 0;
                     local_a78 = (undefined1[16])0x0;
                     iVar7 = std::thread::hardware_concurrency();
                     iVar20 = 1;
                     if (0 < iVar7) {
                        iVar20 = iVar7;
                     }

                     if ((int)local_ab0 < iVar20) {
                        iVar20 = (int)local_ab0;
                     }

                     if (0 < iVar20) {
                        iVar7 = 0;
                        plVar11 = (long*)0x0;
                        plVar24 = (long*)0x0;
                        do {
                           local_aa8 = 0;
                           local_aa0 = (long*)operator_new(0x70);
                           local_aa0[3] = (long)plVar17;
                           local_aa0[2] = (long)&local_ab0;
                           local_aa0[4] = (long)&local_af8;
                           local_aa0[5] = (long)&local_ace;
                           local_aa0[6] = (long)&local_af0;
                           local_aa0[7] = (long)&local_acc;
                           local_aa0[8] = (long)&local_ae8;
                           local_aa0[9] = (long)local_ae0;
                           local_aa0[0xb] = (long)&local_ab8;
                           local_aa0[10] = (long)&local_ac0;
                           local_aa0[0xc] = (long)local_ac8;
                           local_aa0[0xd] = (long)local_a98;
                           *local_aa0 = (long)&PTR___State_impl_0011cd38;
                           local_aa0[1] = (long)( local_ac8 + 1 );
                           std::thread::_M_start_thread(&local_aa8, &local_aa0, std::thread::_M_thread_deps_never_run);
                           if (local_aa0 != (long*)0x0) {
                              ( **(code**)( *local_aa0 + 8 ) )();
                           }

                           if (plVar24 == plVar11) {
                              std::vector<std::thread,std::allocator<std::thread>>::_M_realloc_insert<std::thread>((vector<std::thread,std::allocator<std::thread>>*)local_a78, plVar24, &local_aa8);
                              if (local_aa8 != 0) goto LAB_0010dd56;
                              plVar23 = (long*)local_a78._8_8_;
                           }
 else {
                              *plVar24 = 0;
                              plVar23 = plVar24 + 1;
                              *plVar24 = local_aa8;
                              local_a78._8_8_ = plVar23;
                           }

                           iVar7 = iVar7 + 1;
                           plVar11 = local_a68;
                           plVar24 = plVar23;
                        }
 while ( iVar20 != iVar7 );
                        uVar10 = local_a78._0_8_;
                        plVar17 = (long*)local_a78._0_8_;
                        if ((long*)local_a78._0_8_ == plVar23) {
                           uVar8 = (long)local_a68 - (long)plVar23;
                        }
 else {
                           do {
                              plVar17 = plVar17 + 1;
                              std::thread::join();
                              plVar11 = (long*)uVar10;
                           }
 while ( plVar23 != plVar17 );
                           do {
                              if (*plVar11 != 0) {
                                 LAB_0010dd56:/* WARNING: Subroutine does not return */std::terminate();
                              }

                              plVar11 = plVar11 + 1;
                           }
 while ( plVar23 != plVar11 );
                           uVar8 = (long)local_a68 - uVar10;
                        }

                        if ((long*)uVar10 != (long*)0x0) {
                           operator_delete((void*)uVar10, uVar8);
                        }

                     }

                     if (local_ace == '\0') goto LAB_0010d1b3;
                     std::__cxx11::string::append(param_6, "Invalid/Corrupted data found when decoding pixels.\n");
                     LAB_0010d658:uVar8 = 0;
                     pTVar14 = local_ae0[0];
                     do {
                        __ptr = *(void**)( *(long*)( pTVar14 + 0x18 ) + uVar8 * 8 );
                        if (__ptr != (void*)0x0) {
                           free(__ptr);
                           *(undefined8*)( *(long*)( local_ae0[0] + 0x18 ) + uVar8 * 8 ) = 0;
                           pTVar14 = local_ae0[0];
                        }

                        uVar8 = uVar8 + 1;
                     }
 while ( uVar8 != uVar16 );
                     LAB_0010cb00:uVar8 = 0xfffffffc;
                  }

                  LAB_0010cb05:if ((void*)local_a98._0_8_ != (void*)0x0) {
                     operator_delete((void*)local_a98._0_8_, local_a88 - local_a98._0_8_);
                     uVar8 = uVar8 & 0xffffffff;
                  }

                  goto LAB_0010cb2a;
               }

               std::__cxx11::stringstream::stringstream(local_808);
               std::__ostream_insert<char,std::char_traits<char>>(local_7f8, "tile with or tile height too large. tile width: ", 0x30);
               poVar13 = (ostream*)std::ostream::operator <<(local_7f8, *(int*)( local_ae8 + 0x3c ));
               std::__ostream_insert<char,std::char_traits<char>>(poVar13, ", ", 2);
               std::__ostream_insert<char,std::char_traits<char>>(poVar13, "tile height = ", 0xe);
               poVar13 = (ostream*)std::ostream::operator <<(poVar13, *(int*)( local_ae8 + 0x40 ));
               std::endl<char,std::char_traits<char>>(poVar13);
               std::__cxx11::stringbuf::str();
               if (0x3fffffffffffffffU - *(long*)( param_6 + 8 ) < local_9d0) goto LAB_0010dd60;
               std::__cxx11::string::_M_append((char*)param_6, local_9d8);
               std::__cxx11::string::_M_dispose();
               std::__cxx11::stringstream::~stringstream(local_808);
            }

         }

      }

      uVar8 = 0xfffffffc;
      LAB_0010cb2a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar8;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* tinyexr::PrecalculateTileInfo(std::vector<int, std::allocator<int> >&, std::vector<int,
   std::allocator<int> >&, TEXRHeader const*) [clone .constprop.0] */
   undefined8 tinyexr::PrecalculateTileInfo(vector *param_1, vector *param_2, TEXRHeader *param_3) {
      uint uVar1;
      long lVar2;
      int iVar3;
      int iVar4;
      char cVar5;
      ulong uVar6;
      undefined8 uVar7;
      ulong uVar8;
      int iVar9;
      int iVar10;
      ulong uVar11;
      uint uVar12;
      int iVar13;
      int iVar14;
      int iVar15;
      ulong uVar16;
      iVar15 = *(int*)( param_3 + 8 );
      iVar9 = *(int*)( param_3 + 0x10 );
      iVar3 = *(int*)( param_3 + 0xc );
      iVar4 = *(int*)( param_3 + 0x14 );
      iVar13 = *(int*)( param_3 + 0x44 );
      if (iVar13 == 1) {
         iVar9 = iVar9 - iVar15;
         iVar15 = iVar4 - iVar3;
         uVar12 = iVar9 + 1;
         uVar6 = (ulong)uVar12;
         uVar1 = iVar15 + 1;
         uVar16 = (ulong)uVar1;
         if (iVar9 < iVar15) {
            if (*(int*)( param_3 + 0x48 ) != 0) {
               uVar8 = uVar16;
               if (uVar1 < 2) goto LAB_0010dfef;
               LAB_0010e049:iVar10 = 0;
               iVar13 = 0;
               do {
                  iVar14 = iVar13;
                  if (( uVar8 & 1 ) != 0) {
                     iVar10 = 1;
                  }

                  uVar8 = uVar8 >> 1;
                  iVar13 = iVar14 + 1;
               }
 while ( (int)uVar8 != 1 );
               uVar8 = uVar16;
               if (iVar15 <= iVar9) {
                  uVar8 = uVar6;
               }

               uVar11 = ( ulong )(iVar14 + 2 + iVar10);
               goto LAB_0010e077;
            }

            uVar11 = 1;
            uVar8 = uVar16;
            if (1 < uVar1) goto LAB_0010df28;
         }
 else {
            if (*(int*)( param_3 + 0x48 ) != 0) {
               uVar8 = uVar6;
               if (1 < uVar12) goto LAB_0010e049;
               LAB_0010dfef:uVar11 = 1;
               LAB_0010e077:if (1 < (uint)uVar8) {
                  iVar15 = 0;
                  iVar9 = 0;
                  do {
                     if (( uVar8 & 1 ) != 0) {
                        iVar15 = 1;
                     }

                     uVar8 = uVar8 >> 1;
                     iVar9 = iVar9 + 1;
                  }
 while ( (int)uVar8 != 1 );
                  goto LAB_0010dfd0;
               }

               goto LAB_0010e0d0;
            }

            uVar8 = uVar6;
            if (uVar12 < 2) {
               uVar11 = 1;
               uVar16 = uVar6;
            }
 else {
               LAB_0010df28:iVar13 = 0;
               do {
                  iVar10 = iVar13;
                  uVar8 = uVar8 >> 1;
                  iVar13 = iVar10 + 1;
               }
 while ( (int)uVar8 != 1 );
               if (iVar15 <= iVar9) {
                  uVar16 = uVar6;
               }

               uVar11 = ( ulong )(iVar10 + 2);
            }

         }

         if (1 < (uint)uVar16) {
            iVar15 = 0;
            do {
               iVar9 = iVar15;
               uVar16 = uVar16 >> 1;
               iVar15 = iVar9 + 1;
            }
 while ( (int)uVar16 != 1 );
            LAB_0010decd:uVar16 = ( ulong )(iVar9 + 2);
            goto LAB_0010ddc2;
         }

      }
 else {
         if (iVar13 != 2) {
            if (iVar13 != 0) {
               return 0;
            }

            uVar16 = 1;
            uVar11 = 1;
            uVar12 = ( iVar9 - iVar15 ) + 1;
            goto LAB_0010ddc2;
         }

         uVar12 = ( iVar9 - iVar15 ) + 1;
         uVar16 = (ulong)uVar12;
         uVar1 = ( iVar4 - iVar3 ) + 1;
         uVar6 = (ulong)uVar1;
         if (*(int*)( param_3 + 0x48 ) == 0) {
            if (uVar12 < 2) {
               uVar11 = 1;
            }
 else {
               iVar15 = 0;
               do {
                  iVar9 = iVar15;
                  uVar16 = uVar16 >> 1;
                  iVar15 = iVar9 + 1;
               }
 while ( (int)uVar16 != 1 );
               uVar11 = ( ulong )(iVar9 + 2);
            }

            iVar15 = 0;
            if (uVar1 < 2) goto LAB_0010e0d0;
            do {
               iVar9 = iVar15;
               uVar6 = uVar6 >> 1;
               iVar15 = iVar9 + 1;
            }
 while ( (int)uVar6 != 1 );
            goto LAB_0010decd;
         }

         if (uVar12 < 2) {
            uVar11 = 1;
         }
 else {
            iVar9 = 0;
            iVar15 = 0;
            do {
               iVar13 = iVar15;
               if (( uVar16 & 1 ) != 0) {
                  iVar9 = 1;
               }

               uVar16 = uVar16 >> 1;
               iVar15 = iVar13 + 1;
            }
 while ( (int)uVar16 != 1 );
            uVar11 = ( ulong )(iVar13 + 2 + iVar9);
         }

         iVar9 = 0;
         iVar15 = 0;
         if (1 < uVar1) {
            do {
               if (( uVar6 & 1 ) != 0) {
                  iVar15 = 1;
               }

               uVar6 = uVar6 >> 1;
               iVar9 = iVar9 + 1;
            }
 while ( (int)uVar6 != 1 );
            LAB_0010dfd0:uVar16 = ( ulong )(iVar9 + 1 + iVar15);
            goto LAB_0010ddc2;
         }

      }

      LAB_0010e0d0:uVar16 = 1;
      LAB_0010ddc2:uVar6 = *(long*)( param_1 + 8 ) - *(long*)param_1 >> 2;
      if (uVar6 < uVar11) {
         std::vector<int,std::allocator<int>>::_M_default_append((vector<int,std::allocator<int>>*)param_1, uVar11 - uVar6);
      }
 else if (( uVar11 < uVar6 ) && ( lVar2 = *(long*)param_1 + uVar11 * 4 * (long*)( param_1 + 8 ) != lVar2 )) {
         *(long*)( param_1 + 8 ) = lVar2;
      }

      uVar6 = *(long*)( param_2 + 8 ) - *(long*)param_2 >> 2;
      if (uVar6 < uVar16) {
         std::vector<int,std::allocator<int>>::_M_default_append((vector<int,std::allocator<int>>*)param_2, uVar16 - uVar6);
      }
 else if (( uVar16 < uVar6 ) && ( lVar2 = *(long*)param_2 + uVar16 * 4 * (long*)( param_2 + 8 ) != lVar2 )) {
         *(long*)( param_2 + 8 ) = lVar2;
      }

      cVar5 = CalculateNumTiles(*(tinyexr**)param_1, *(vector**)( param_1 + 8 ), uVar12, *(int*)( param_3 + 0x3c ), *(int*)( param_3 + 0x48 ));
      if (cVar5 == '\0') {
         return 0;
      }

      uVar7 = CalculateNumTiles(*(tinyexr**)param_2, *(vector**)( param_2 + 8 ), ( iVar4 - iVar3 ) + 1, *(int*)( param_3 + 0x40 ), *(int*)( param_3 + 0x48 ));
      return uVar7;
   }

   /* tinyexr::InitTileOffsets(tinyexr::OffsetData&, TEXRHeader const*, std::vector<int,
   std::allocator<int> > const&, std::vector<int, std::allocator<int> > const&) */
   int tinyexr::InitTileOffsets(OffsetData *param_1, TEXRHeader *param_2, vector *param_3, vector *param_4) {
      vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>> *pvVar1;
      vector<unsigned_long,std::allocator<unsigned_long>> *pvVar2;
      void *pvVar3;
      int iVar4;
      ulong uVar5;
      undefined8 *puVar6;
      long lVar7;
      ulong uVar8;
      long lVar9;
      ulong uVar10;
      undefined8 *puVar11;
      long lVar12;
      undefined8 *puVar13;
      undefined8 *puVar14;
      long *plVar15;
      ulong uVar16;
      long lVar17;
      long *plVar18;
      long lVar19;
      int iVar20;
      int iVar21;
      long *plVar22;
      long *plVar23;
      uint local_70;
      lVar7 = *(long*)( param_4 + 8 );
      lVar19 = *(long*)param_4;
      iVar4 = (int)( *(long*)( param_3 + 8 ) - *(long*)param_3 >> 2 );
      *(int*)( param_1 + 0x18 ) = iVar4;
      iVar20 = (int)( lVar7 - lVar19 >> 2 );
      *(int*)( param_1 + 0x1c ) = iVar20;
      iVar21 = *(int*)( param_2 + 0x44 );
      if (iVar21 < 2) {
         if (( -1 < iVar21 ) && ( iVar4 == iVar20 )) {
            uVar5 = (ulong)iVar4;
            plVar23 = *(long**)( param_1 + 8 );
            plVar18 = *(long**)param_1;
            lVar7 = (long)plVar23 - (long)plVar18 >> 3;
            uVar8 = lVar7 * -0x5555555555555555;
            if (uVar8 < uVar5) {
               std::vector<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>,std::allocator<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator < unsigned_long>>>>> > ::_M_default_append(( vector<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>,std::allocator<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator < unsigned_long>>>>> > *)param_1,uVar5 + lVar7 * 0x5555555555555555 ));
               plVar23 = *(long**)( param_1 + 8 );
               plVar18 = *(long**)param_1;
            }
 else if (( uVar5 < uVar8 ) && ( plVar22 = plVar18 + uVar5 * 3 ),plVar15 = plVar22,plVar23 != plVar22) {
               do {
                  puVar11 = (undefined8*)plVar15[1];
                  puVar6 = (undefined8*)*plVar15;
                  if (puVar11 != puVar6) {
                     do {
                        pvVar3 = (void*)*puVar6;
                        if (pvVar3 != (void*)0x0) {
                           operator_delete(pvVar3, puVar6[2] - (long)pvVar3);
                        }

                        puVar6 = puVar6 + 3;
                     }
 while ( puVar11 != puVar6 );
                     puVar6 = (undefined8*)*plVar15;
                  }

                  if (puVar6 != (undefined8*)0x0) {
                     operator_delete(puVar6, plVar15[2] - (long)puVar6);
                  }

                  plVar15 = plVar15 + 3;
               }
 while ( plVar23 != plVar15 );
               *(long**)( param_1 + 8 ) = plVar22;
               plVar18 = *(long**)param_1;
               plVar23 = plVar22;
            }

            local_70 = 0;
            iVar21 = 0;
            uVar5 = 0;
            if (plVar23 != plVar18) {
               do {
                  pvVar1 = (vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>*)( plVar18 + uVar5 * 3 );
                  puVar11 = *(undefined8**)( pvVar1 + 8 );
                  uVar10 = ( ulong ) * (int*)( *(long*)param_4 + uVar5 * 4 );
                  lVar7 = (long)puVar11 - *(long*)pvVar1 >> 3;
                  uVar8 = lVar7 * -0x5555555555555555;
                  if (uVar8 < uVar10) {
                     std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>::_M_default_append(pvVar1, uVar10 + lVar7 * 0x5555555555555555);
                     plVar18 = *(long**)param_1;
                  }
 else if (( uVar10 < uVar8 ) && ( puVar6 = (undefined8*)( *(long*)pvVar1 + uVar10 * 0x18 ) ),puVar14 = puVar6,puVar11 != puVar6) {
                     do {
                        pvVar3 = (void*)*puVar14;
                        if (pvVar3 != (void*)0x0) {
                           operator_delete(pvVar3, puVar14[2] - (long)pvVar3);
                        }

                        puVar14 = puVar14 + 3;
                     }
 while ( puVar11 != puVar14 );
                     *(undefined8**)( pvVar1 + 8 ) = puVar6;
                     plVar18 = *(long**)param_1;
                  }

                  lVar7 = plVar18[uVar5 * 3];
                  if (( plVar18 + uVar5 * 3 )[1] != lVar7) {
                     uVar8 = 0;
                     iVar20 = *(int*)( *(long*)param_3 + uVar5 * 4 );
                     do {
                        pvVar2 = (vector<unsigned_long,std::allocator<unsigned_long>>*)( lVar7 + uVar8 * 0x18 );
                        uVar16 = (ulong)iVar20;
                        uVar10 = *(long*)( pvVar2 + 8 ) - *(long*)pvVar2 >> 3;
                        if (uVar10 < uVar16) {
                           std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append(pvVar2, uVar16 - uVar10);
                           plVar18 = *(long**)param_1;
                           iVar20 = *(int*)( *(long*)param_3 + uVar5 * 4 );
                        }
 else if (( uVar16 < uVar10 ) && ( lVar7 = *(long*)pvVar2 + uVar16 * 8 * (long*)( pvVar2 + 8 ) != lVar7 )) {
                           *(long*)( pvVar2 + 8 ) = lVar7;
                        }

                        uVar8 = ( ulong )((int)uVar8 + 1);
                        iVar21 = iVar21 + iVar20;
                        lVar7 = plVar18[uVar5 * 3];
                     }
 while ( uVar8 < ( ulong )(( ( plVar18 + uVar5 * 3 )[1] - lVar7 >> 3 ) * -0x5555555555555555) );
                  }

                  local_70 = local_70 + 1;
                  uVar5 = (ulong)local_70;
               }
 while ( uVar5 < ( ulong )(( *(long*)( param_1 + 8 ) - (long)plVar18 >> 3 ) * -0x5555555555555555) );
               return iVar21;
            }

         }

      }
 else if (iVar21 == 2) {
         uVar5 = (long)iVar4 * (long)iVar20;
         plVar18 = *(long**)( param_1 + 8 );
         lVar7 = (long)plVar18 - *(long*)param_1 >> 3;
         uVar8 = lVar7 * -0x5555555555555555;
         if (uVar8 < uVar5) {
            std::vector<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>,std::allocator<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator < unsigned_long>>>>> > ::_M_default_append(( vector<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>,std::allocator<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator < unsigned_long>>>>> > *)param_1,uVar5 + lVar7 * 0x5555555555555555 ));
            iVar20 = *(int*)( param_1 + 0x1c );
         }
 else if (( uVar5 < uVar8 ) && ( plVar23 = (long*)( *(long*)param_1 + uVar5 * 0x18 ) ),plVar22 = plVar23,plVar18 != plVar23) {
            do {
               puVar11 = (undefined8*)plVar22[1];
               puVar6 = (undefined8*)*plVar22;
               if (puVar11 != puVar6) {
                  do {
                     pvVar3 = (void*)*puVar6;
                     if (pvVar3 != (void*)0x0) {
                        operator_delete(pvVar3, puVar6[2] - (long)pvVar3);
                     }

                     puVar6 = puVar6 + 3;
                  }
 while ( puVar11 != puVar6 );
                  puVar6 = (undefined8*)*plVar22;
               }

               if (puVar6 != (undefined8*)0x0) {
                  operator_delete(puVar6, plVar22[2] - (long)puVar6);
               }

               plVar22 = plVar22 + 3;
            }
 while ( plVar18 != plVar22 );
            *(long**)( param_1 + 8 ) = plVar23;
            iVar20 = *(int*)( param_1 + 0x1c );
         }

         if (0 < iVar20) {
            lVar7 = 0;
            iVar20 = 0;
            iVar21 = *(int*)( param_1 + 0x18 );
            do {
               if (0 < iVar21) {
                  lVar17 = 0;
                  lVar19 = *(long*)param_1;
                  do {
                     lVar12 = (long)( iVar21 * (int)lVar7 + (int)lVar17 ) * 0x18;
                     pvVar1 = (vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>*)( lVar19 + lVar12 );
                     uVar5 = ( ulong ) * (int*)( *(long*)param_4 + lVar7 * 4 );
                     puVar11 = *(undefined8**)( pvVar1 + 8 );
                     puVar6 = *(undefined8**)pvVar1;
                     lVar9 = (long)puVar11 - (long)puVar6 >> 3;
                     uVar8 = lVar9 * -0x5555555555555555;
                     if (uVar8 < uVar5) {
                        std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>::_M_default_append(pvVar1, uVar5 + lVar9 * 0x5555555555555555);
                        lVar19 = *(long*)param_1;
                        puVar11 = (undefined8*)( (undefined8*)( lVar19 + lVar12 ) )[1];
                        puVar6 = *(undefined8**)( lVar19 + lVar12 );
                     }
 else if (( uVar5 < uVar8 ) && ( puVar14 = puVar6 + uVar5 * 3 ),puVar13 = puVar14,puVar11 != puVar14) {
                        do {
                           pvVar3 = (void*)*puVar13;
                           if (pvVar3 != (void*)0x0) {
                              operator_delete(pvVar3, puVar13[2] - (long)pvVar3);
                           }

                           puVar13 = puVar13 + 3;
                        }
 while ( puVar11 != puVar13 );
                        lVar19 = *(long*)param_1;
                        *(undefined8**)( pvVar1 + 8 ) = puVar14;
                        puVar11 = (undefined8*)( (undefined8*)( lVar19 + lVar12 ) )[1];
                        puVar6 = *(undefined8**)( lVar19 + lVar12 );
                     }

                     if (puVar11 != puVar6) {
                        uVar5 = 0;
                        iVar21 = *(int*)( *(long*)param_3 + lVar17 * 4 );
                        do {
                           pvVar2 = (vector<unsigned_long,std::allocator<unsigned_long>>*)( puVar6 + uVar5 * 3 );
                           uVar10 = (ulong)iVar21;
                           uVar8 = *(long*)( pvVar2 + 8 ) - *(long*)pvVar2 >> 3;
                           if (uVar8 < uVar10) {
                              std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append(pvVar2, uVar10 - uVar8);
                              iVar21 = *(int*)( *(long*)param_3 + lVar17 * 4 );
                              lVar19 = *(long*)param_1;
                           }
 else if (( uVar10 < uVar8 ) && ( lVar9 = *(long*)pvVar2 + uVar10 * 8 * (long*)( pvVar2 + 8 ) != lVar9 )) {
                              *(long*)( pvVar2 + 8 ) = lVar9;
                           }

                           uVar5 = uVar5 + 1;
                           iVar20 = iVar20 + iVar21;
                           puVar6 = *(undefined8**)( lVar19 + lVar12 );
                        }
 while ( uVar5 < ( ulong )(( ( (undefined8*)( lVar19 + lVar12 ) )[1] - (long)puVar6 >> 3 ) * -0x5555555555555555) );
                     }

                     lVar17 = lVar17 + 1;
                     iVar21 = *(int*)( param_1 + 0x18 );
                  }
 while ( (int)lVar17 < iVar21 );
               }

               lVar7 = lVar7 + 1;
            }
 while ( (int)lVar7 < *(int*)( param_1 + 0x1c ) );
            return iVar20;
         }

      }

      return 0;
   }

   /* tinyexr::InitSingleResolutionOffsets(tinyexr::OffsetData&, unsigned long) */
   void tinyexr::InitSingleResolutionOffsets(OffsetData *param_1, ulong param_2) {
      vector<unsigned_long,std::allocator<unsigned_long>> *pvVar1;
      vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>> *pvVar2;
      vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>> *pvVar3;
      vector<unsigned_long,std::allocator<unsigned_long>> *pvVar4;
      void *pvVar5;
      undefined8 *puVar6;
      long lVar7;
      ulong uVar8;
      vector<unsigned_long,std::allocator<unsigned_long>> *pvVar9;
      vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>> *this;
      vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>> *pvVar10;
      vector<unsigned_long,std::allocator<unsigned_long>> *this_00;
      undefined8 *puVar11;
      pvVar3 = *(vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>**)( param_1 + 8 );
      this * (vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>**)param_1;
      if (pvVar3 == this) {
         std::vector<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>,std::allocator<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator < unsigned_long>>>>> > ::_M_default_append(( vector<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>,std::allocator<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator < unsigned_long>>>>> > *)param_1,1 ));
         this * (vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>**)param_1;
      }
 else if (( (long)pvVar3 - (long)this != 0x18 ) && ( pvVar2 = this + 0x18 ),pvVar10 = pvVar2,pvVar3 != pvVar2) {
         do {
            puVar6 = *(undefined8**)( pvVar10 + 8 );
            puVar11 = *(undefined8**)pvVar10;
            if (puVar6 != puVar11) {
               do {
                  pvVar5 = (void*)*puVar11;
                  if (pvVar5 != (void*)0x0) {
                     operator_delete(pvVar5, puVar11[2] - (long)pvVar5);
                  }

                  puVar11 = puVar11 + 3;
               }
 while ( puVar6 != puVar11 );
               puVar11 = *(undefined8**)pvVar10;
            }

            if (puVar11 != (undefined8*)0x0) {
               operator_delete(puVar11, *(long*)( pvVar10 + 0x10 ) - (long)puVar11);
            }

            pvVar10 = pvVar10 + 0x18;
         }
 while ( pvVar3 != pvVar10 );
         this * (vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>**)param_1;
         pvVar4 = *(vector<unsigned_long,std::allocator<unsigned_long>>**)( this + 8 );
         this_00 = *(vector<unsigned_long,std::allocator<unsigned_long>>**)this;
         *(vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>**)( param_1 + 8 ) = pvVar2;
         lVar7 = (long)pvVar4 - (long)this_00;
         goto joined_r0x0010e83a;
      }

      pvVar4 = *(vector<unsigned_long,std::allocator<unsigned_long>>**)( this + 8 );
      this_00 = *(vector<unsigned_long,std::allocator<unsigned_long>>**)this;
      lVar7 = (long)pvVar4 - (long)this_00;
      joined_r0x0010e83a:if (lVar7 == 0) {
         std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>::_M_default_append(this, 1);
         this_00 = (vector<unsigned_long,std::allocator<unsigned_long>>*)**(undefined8**)param_1;
      }
 else if (( lVar7 != 0x18 ) && ( pvVar1 = this_00 + 0x18 ),pvVar9 = pvVar1,pvVar4 != pvVar1) {
         do {
            pvVar5 = *(void**)pvVar9;
            if (pvVar5 != (void*)0x0) {
               operator_delete(pvVar5, *(long*)( pvVar9 + 0x10 ) - (long)pvVar5);
            }

            pvVar9 = pvVar9 + 0x18;
         }
 while ( pvVar4 != pvVar9 );
         puVar6 = *(undefined8**)param_1;
         *(vector<unsigned_long,std::allocator<unsigned_long>>**)( this + 8 ) = pvVar1;
         this_00 = (vector<unsigned_long,std::allocator<unsigned_long>>*)*puVar6;
      }

      uVar8 = *(long*)( this_00 + 8 ) - *(long*)this_00 >> 3;
      if (uVar8 < param_2) {
         std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append(this_00, param_2 - uVar8);
      }
 else if (( param_2 < uVar8 ) && ( lVar7 = *(long*)this_00 + param_2 * 8 * (long*)( this_00 + 8 ) != lVar7 )) {
         *(long*)( this_00 + 8 ) = lVar7;
      }

      *(undefined8*)( param_1 + 0x18 ) = _LC95;
      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* tinyexr::DecodeEXRImage(TEXRImage*, TEXRHeader const*, unsigned char const*, unsigned char
   const*, unsigned long, char const**) */
   int tinyexr::DecodeEXRImage(TEXRImage *param_1, TEXRHeader *param_2, uchar *param_3, uchar *param_4, ulong param_5, char **param_6) {
      int iVar1;
      uint uVar2;
      uint uVar3;
      int iVar4;
      long lVar5;
      long lVar6;
      long lVar7;
      undefined8 *puVar8;
      void *pvVar9;
      undefined8 uVar10;
      char cVar11;
      uint uVar12;
      int iVar13;
      long lVar14;
      char *pcVar15;
      ulong uVar16;
      ulong uVar17;
      ulong uVar18;
      ulong uVar19;
      undefined8 uVar20;
      allocator *paVar21;
      long lVar22;
      allocator *paVar23;
      allocator *paVar24;
      allocator *paVar25;
      undefined8 *puVar26;
      allocator *paVar27;
      ulong uVar28;
      long *plVar29;
      ulong uVar30;
      long in_FS_OFFSET;
      OffsetData *local_120;
      allocator *local_110;
      ulong local_d0;
      undefined1 local_c8[16];
      long local_b8;
      undefined1 local_a8[16];
      long local_98;
      undefined1 local_88[16];
      long local_78;
      undefined8 local_70;
      string *local_68;
      ulong local_60;
      ulong local_58[3];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( ( param_4 == (uchar*)0x0 || param_5 < 9 ) || param_3 == (uchar*)0x0 ) || param_2 == (TEXRHeader*)0x0 ) || ( param_1 == (TEXRImage*)0x0 )) {
         std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Invalid argument for DecodeEXRImage().", (allocator*)CONCAT71(( int7 )((ulong)param_3 >> 8), param_2 == (TEXRHeader*)0x0));
         if (param_6 != (char**)0x0) {
            pcVar15 = strdup((char*)local_68);
            *param_6 = pcVar15;
         }

         if (local_68 != (string*)local_58) {
            operator_delete(local_68, local_58[0] + 1);
         }

         iVar13 = -3;
         goto LAB_0010ee8e;
      }

      uVar28 = 0x10;
      iVar13 = *(int*)( param_2 + 0x7c );
      if (( ( iVar13 != 3 ) && ( uVar28 = 0x20 ),iVar13 != 4 )) {
         uVar28 = 1;
      }

      iVar13 = *(int*)( param_2 + 0x10 );
      iVar1 = *(int*)( param_2 + 8 );
      paVar23 = (allocator*)(long)iVar1;
      if (( iVar13 < iVar1 ) || ( iVar13 - iVar1 == 0x7fffffff )) {
         std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Invalid data width value", paVar23);
         joined_r0x0010f612:if (param_6 != (char**)0x0) {
            pcVar15 = strdup((char*)local_68);
            *param_6 = pcVar15;
         }

      }
 else {
         lVar14 = ( (long)iVar13 - (long)paVar23 ) + 1;
         if (lVar14 < 1) {
            std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Invalid data window width value", paVar23);
         }
 else {
            iVar13 = *(int*)( param_2 + 0x14 );
            iVar1 = *(int*)( param_2 + 0xc );
            if (( iVar13 < iVar1 ) || ( iVar13 - iVar1 == 0x7fffffff )) {
               std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Invalid data height value", (allocator*)(long)iVar13);
               goto joined_r0x0010f612;
            }

            paVar24 = (allocator*)(long)iVar13 + -(long)iVar1;
            paVar23 = paVar24 + 1;
            if ((long)paVar23 < 1) {
               std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Invalid data window height value", paVar24);
            }
 else {
               if (0x800000 < lVar14) {
                  std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "data width too large.", paVar24);
                  goto joined_r0x0010f612;
               }

               if ((long)paVar23 < 0x800001) {
                  if (*(int*)( param_2 + 0x38 ) == 0) {
                     local_78 = 0;
                     local_70 = 0;
                     local_88 = (undefined1[16])0x0;
                     if (*(int*)( param_2 + 0x34 ) < 1) {
                        paVar23 = (allocator*)( (ulong)paVar23 / uVar28 + ( ulong )((allocator*)( uVar28 * ( (ulong)paVar23 / uVar28 ) ) < paVar23) );
                        InitSingleResolutionOffsets((OffsetData*)local_88, (ulong)paVar23);
                        LAB_0010ec31:if (*(int*)( param_2 + 0x38 ) == 0) {
                           plVar29 = *(long**)local_88._0_8_;
                           if (paVar23 != (allocator*)0x0) goto LAB_0010ec54;
                        }

                     }
 else {
                        paVar23 = (allocator*)(long)*(int*)( param_2 + 0x34 );
                        InitSingleResolutionOffsets((OffsetData*)local_88, (ulong)paVar23);
                        if (*(int*)( param_2 + 0x38 ) != 0) goto LAB_0010ed9e;
                        plVar29 = *(long**)local_88._0_8_;
                        LAB_0010ec54:paVar24 = (allocator*)0x0;
                        do {
                           param_4 = (uchar*)( (allocator*)param_4 + 8 );
                           if ((allocator*)( param_3 + param_5 ) <= param_4) {
                              local_68 = (string*)local_58;
                              local_a8._0_8_ = 0x27;
                              local_68 = (string*)std::__cxx11::string::_M_create((ulong*)&local_68, (ulong)local_a8);
                              uVar10 = _UNK_0011ce18;
                              local_58[0] = local_a8._0_8_;
                              uVar20 = 0x2e656c6261742074;
                              *(undefined8*)local_68 = __LC112;
                              *(undefined8*)( local_68 + 8 ) = uVar10;
                              uVar10 = _UNK_0011ce28;
                              *(undefined8*)( local_68 + 0x10 ) = __LC113;
                              *(undefined8*)( local_68 + 0x18 ) = uVar10;
                              LAB_0010ed06:*(undefined8*)( local_68 + 0x1f ) = uVar20;
                              local_60 = local_a8._0_8_;
                              local_68[local_a8._0_8_] = (string)0x0;
                              if (param_6 != (char**)0x0) {
                                 pcVar15 = strdup((char*)local_68);
                                 *param_6 = pcVar15;
                              }

                              if (local_68 != (string*)local_58) {
                                 LAB_0010ed48:operator_delete(local_68, local_58[0] + 1);
                              }

                              goto LAB_0010ed59;
                           }

                           if (param_5 <= *(ulong*)( (allocator*)param_4 + -8 )) {
                              local_68 = (string*)local_58;
                              local_a8._0_8_ = 0x27;
                              local_68 = (string*)std::__cxx11::string::_M_create((ulong*)&local_68, (ulong)local_a8);
                              uVar10 = _UNK_0011ce38;
                              uVar20 = 0x2e6567616d495258;
                              local_58[0] = local_a8._0_8_;
                              *(undefined8*)local_68 = __LC114;
                              *(undefined8*)( local_68 + 8 ) = uVar10;
                              uVar10 = _UNK_0011ce48;
                              *(undefined8*)( local_68 + 0x10 ) = __LC115;
                              *(undefined8*)( local_68 + 0x18 ) = uVar10;
                              goto LAB_0010ed06;
                           }

                           lVar14 = *plVar29;
                           *(ulong*)( lVar14 + (long)paVar24 * 8 ) = *(ulong*)( (allocator*)param_4 + -8 );
                           paVar24 = paVar24 + 1;
                        }
 while ( paVar24 < paVar23 );
                        paVar24 = (allocator*)0x0;
                        do {
                           if (*(long*)( lVar14 + (long)paVar24 * 8 ) == 0) {
                              paVar24 = (allocator*)0x0;
                              if (( param_4 <= param_3 ) || ( paVar23 != (allocator*)( plVar29[1] - lVar14 >> 3 ) )) goto LAB_0010ef8b;
                              goto LAB_0010efe7;
                           }

                           paVar24 = paVar24 + 1;
                        }
 while ( paVar24 < paVar23 );
                     }

                     LAB_0010ed9e:local_120 = (OffsetData*)local_88;
                     local_60 = 0;
                     local_58[0] = local_58[0] & 0xffffffffffffff00;
                     local_68 = (string*)local_58;
                     iVar13 = DecodeChunk(param_1, param_2, local_120, param_3, param_5, (string*)&local_68);
                     if (iVar13 != 0) {
                        if (( local_60 != 0 ) && ( param_6 != (char**)0x0 )) {
                           pcVar15 = strdup((char*)local_68);
                           *param_6 = pcVar15;
                        }

                        FreeEXRImage(param_1);
                     }

                     if (local_68 != (string*)local_58) {
                        operator_delete(local_68, local_58[0] + 1);
                     }

                     goto LAB_0010ee0b;
                  }

                  if (*(int*)( param_2 + 0x3c ) < 0x800001) {
                     if (*(int*)( param_2 + 0x40 ) < 0x800001) {
                        local_78 = 0;
                        local_70 = 0;
                        local_b8 = 0;
                        local_98 = 0;
                        local_88 = (undefined1[16])0x0;
                        local_c8 = (undefined1[16])0x0;
                        local_a8 = (undefined1[16])0x0;
                        cVar11 = PrecalculateTileInfo((vector*)local_c8, (vector*)local_a8, param_2);
                        if (cVar11 == '\0') {
                           local_d0 = 0x21;
                           local_68 = (string*)local_58;
                           local_68 = (string*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_d0);
                           uVar10 = _UNK_0011cdf8;
                           local_58[0] = local_d0;
                           *(undefined8*)local_68 = __LC110;
                           *(undefined8*)( local_68 + 8 ) = uVar10;
                           uVar20 = _UNK_0011ce08;
                           uVar10 = __LC111;
                           local_68[0x20] = (string)0x2e;
                           *(undefined8*)( local_68 + 0x10 ) = uVar10;
                           *(undefined8*)( local_68 + 0x18 ) = uVar20;
                           local_60 = local_d0;
                           local_68[local_d0] = (string)0x0;
                           if (param_6 != (char**)0x0) {
                              pcVar15 = strdup((char*)local_68);
                              *param_6 = pcVar15;
                           }

                           if (local_68 != (string*)local_58) {
                              LAB_0010f093:operator_delete(local_68, local_58[0] + 1);
                           }

                        }
 else {
                           uVar12 = InitTileOffsets((OffsetData*)local_88, param_2, (vector*)local_c8, (vector*)local_a8);
                           uVar2 = *(uint*)( param_2 + 0x34 );
                           paVar23 = (allocator*)(long)(int)uVar12;
                           if (( (int)uVar2 < 1 ) || ( uVar12 == uVar2 )) {
                              if ((void*)local_a8._0_8_ != (void*)0x0) {
                                 operator_delete((void*)local_a8._0_8_, local_98 - local_a8._0_8_);
                              }

                              if ((void*)local_c8._0_8_ != (void*)0x0) {
                                 operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
                              }

                              uVar28 = ( (long)( local_88._8_8_ - local_88._0_8_ ) >> 3 ) * -0x5555555555555555;
                              uVar17 = 0;
                              if (local_88._8_8_ != local_88._0_8_) {
                                 do {
                                    uVar16 = 0;
                                    lVar14 = ( (long*)( local_88._0_8_ + uVar17 * 3 * 8 ) )[1];
                                    lVar5 = *(long*)( local_88._0_8_ + uVar17 * 3 * 8 );
                                    if (lVar5 != lVar14) {
                                       do {
                                          paVar24 = (allocator*)( lVar5 + uVar16 * 0x18 );
                                          lVar6 = *(long*)( paVar24 + 8 );
                                          lVar7 = *(long*)paVar24;
                                          if (lVar7 != lVar6) {
                                             param_4 = (uchar*)( (allocator*)param_4 + 8 );
                                             if ((allocator*)( param_3 + param_5 ) <= param_4) {
                                                LAB_0010f0e4:std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Insufficient data size in offset table.", paVar24);
                                                joined_r0x0010eba0:if (param_6 != (char**)0x0) {
                                                   pcVar15 = strdup((char*)local_68);
                                                   *param_6 = pcVar15;
                                                }

                                                if (local_68 != (string*)local_58) goto LAB_0010ed48;
                                                goto LAB_0010ed59;
                                             }

                                             paVar24 = (allocator*)0x0;
                                             while (true) {
                                                if (param_5 <= *(ulong*)( (allocator*)param_4 + -8 )) {
                                                   std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Invalid offset value in DecodeEXRImage.", paVar24);
                                                   goto joined_r0x0010eba0;
                                                }

                                                *(ulong*)( lVar7 + (long)paVar24 * 8 ) = *(ulong*)( (allocator*)param_4 + -8 );
                                                paVar24 = (allocator*)( ulong )((int)paVar24 + 1);
                                                if ((allocator*)( lVar6 - lVar7 >> 3 ) <= paVar24) break;
                                                param_4 = (uchar*)( (allocator*)param_4 + 8 );
                                                if ((allocator*)( param_3 + param_5 ) <= param_4) goto LAB_0010f0e4;
                                             }
;
                                          }

                                          uVar16 = ( ulong )((int)uVar16 + 1);
                                       }
 while ( uVar16 < ( ulong )(( lVar14 - lVar5 >> 3 ) * -0x5555555555555555) );
                                    }

                                    uVar17 = ( ulong )((int)uVar17 + 1);
                                 }
 while ( uVar17 < uVar28 );
                                 uVar17 = 0;
                                 do {
                                    uVar16 = 0;
                                    lVar14 = ( (long*)( local_88._0_8_ + uVar17 * 3 * 8 ) )[1];
                                    lVar5 = *(long*)( local_88._0_8_ + uVar17 * 3 * 8 );
                                    if (lVar14 != lVar5) {
                                       do {
                                          uVar18 = 0;
                                          plVar29 = (long*)( lVar5 + uVar16 * 0x18 );
                                          lVar6 = plVar29[1];
                                          lVar7 = *plVar29;
                                          if (lVar6 != lVar7) {
                                             do {
                                                if (*(long*)( lVar7 + uVar18 * 8 ) < 1) {
                                                   iVar13 = *(int*)( param_2 + 0x50 );
                                                   iVar1 = *(int*)( param_2 + 0x54 );
                                                   if (uVar28 == 0) goto LAB_0010ec31;
                                                   uVar17 = 0;
                                                   paVar24 = (allocator*)( param_3 + param_5 );
                                                   local_110 = (allocator*)param_4;
                                                   goto LAB_0010f1f2;
                                                }

                                                uVar18 = ( ulong )((int)uVar18 + 1);
                                             }
 while ( uVar18 < ( ulong )(lVar6 - lVar7 >> 3) );
                                          }

                                          uVar16 = ( ulong )((int)uVar16 + 1);
                                       }
 while ( uVar16 < ( ulong )(( lVar14 - lVar5 >> 3 ) * -0x5555555555555555) );
                                    }

                                    uVar17 = ( ulong )((int)uVar17 + 1);
                                 }
 while ( uVar17 < uVar28 );
                              }

                              goto LAB_0010ec31;
                           }

                           std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Invalid offset table size.", (allocator*)(ulong)uVar2);
                           if (param_6 != (char**)0x0) {
                              pcVar15 = strdup((char*)local_68);
                              *param_6 = pcVar15;
                           }

                           if (local_68 != (string*)local_58) goto LAB_0010f093;
                        }

                        if ((void*)local_a8._0_8_ != (void*)0x0) {
                           operator_delete((void*)local_a8._0_8_, local_98 - local_a8._0_8_);
                        }

                        if ((void*)local_c8._0_8_ != (void*)0x0) {
                           operator_delete((void*)local_c8._0_8_, local_b8 - local_c8._0_8_);
                        }

                        goto LAB_0010ed59;
                     }

                     std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "tile height too large.", paVar24);
                  }
 else {
                     std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "tile width too large.", paVar24);
                  }

               }
 else {
                  std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "data height too large.", paVar24);
               }

            }

         }

         if (param_6 != (char**)0x0) {
            SetErrorMessage(local_68, param_6);
         }

      }

      iVar13 = -4;
      std::__cxx11::string::_M_dispose();
      LAB_0010ee8e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return iVar13;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
      LAB_0010f1f2:do {
         lVar14 = ( (long*)( local_88._0_8_ + uVar17 * 3 * 8 ) )[1];
         lVar5 = *(long*)( local_88._0_8_ + uVar17 * 3 * 8 );
         if (lVar5 != lVar14) {
            uVar16 = 0;
            paVar25 = (allocator*)param_4;
            do {
               plVar29 = (long*)( lVar5 + uVar16 * 0x18 );
               lVar6 = plVar29[1];
               lVar7 = *plVar29;
               if (lVar6 != lVar7) {
                  uVar18 = 0;
                  do {
                     paVar21 = local_110;
                     if (( ( iVar1 != 0 ) && ( paVar21 = paVar24 <= local_110 + 4 ) ) || ( paVar24 <= paVar21 + 0x10 )) {
                        LAB_0010f2f8:std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Invalid Tile Offsets data.", paVar25);
                        goto joined_r0x0010f317;
                     }

                     paVar25 = (allocator*)(long)(int)*(uint*)paVar21;
                     uVar2 = *(uint*)( paVar21 + 4 );
                     uVar19 = (ulong)(int)uVar2;
                     uVar12 = *(uint*)( paVar21 + 8 );
                     uVar3 = *(uint*)( paVar21 + 0xc );
                     if (iVar13 == 0) {
                        if (( paVar21 + 0x14 < paVar24 ) && ( paVar27 = paVar27 < paVar24 )) goto LAB_0010f2c4;
                        goto LAB_0010f2f8;
                     }

                     if (( paVar24 <= paVar21 + 0x20 ) || ( paVar27 = paVar21 + *(long*)( paVar21 + 0x18 ) + *(long*)( paVar21 + 0x10 ) + 0x28 ),paVar24 <= paVar27) goto LAB_0010f2f8;
                     LAB_0010f2c4:if ((int)( *(uint*)paVar21 | uVar2 | uVar12 | uVar3 ) < 0) goto LAB_0010f2f8;
                     iVar4 = *(int*)( param_2 + 0x44 );
                     if (iVar4 != 1) {
                        if (iVar4 == 2) {
                           uVar30 = (ulong)uVar3 * (long)(int)local_70 + (ulong)uVar12;
                           if (( ( (int)uVar12 < (int)local_70 && (int)uVar3 < local_70._4_4_ ) && ( uVar30 < uVar28 ) ) && ( ( lVar22 = *(long*)( local_88._0_8_ + uVar30 * 3 * 8 ) ),uVar19 < ( ulong )(( ( (long*)( local_88._0_8_ + uVar30 * 3 * 8 ) )[1] - lVar22 >> 3 ) * -0x5555555555555555) && ( ( paVar25 < (allocator*)( *(long*)( lVar22 + 8 + uVar19 * 0x18 ) - *(long*)( lVar22 + uVar19 * 0x18 ) >> 3 ) && ( uVar12 = -1 < (int)uVar12 ) ) ) )) goto LAB_0010f4d2;
                        }
 else if (( iVar4 == 0 ) && ( uVar3 == 0 && uVar12 == 0 )) {
                           lVar22 = *(long*)local_88._0_8_;
                           uVar19 = (ulong)(int)uVar2;
                           if (( uVar19 < ( ulong )(( *(long*)( local_88._0_8_ + 8 ) - lVar22 >> 3 ) * -0x5555555555555555) ) && ( paVar25 < (allocator*)( *(long*)( lVar22 + 8 + uVar19 * 0x18 ) - *(long*)( lVar22 + uVar19 * 0x18 ) >> 3 ) )) {
                              uVar19 = (ulong)uVar2;
                              goto LAB_0010f510;
                           }

                        }

                        goto LAB_0010f2f8;
                     }

                     if (( ( ( (int)local_70 <= (int)uVar12 ) || ( local_70._4_4_ <= (int)uVar3 ) ) || ( uVar28 <= uVar12 ) ) || ( ( lVar22 = *(long*)( local_88._0_8_ + (ulong)uVar12 * 3 * 8 )(ulong)(( ( (long*)( local_88._0_8_ + (ulong)uVar12 * 3 * 8 ) )[1] - lVar22 >> 3 ) * -0x5555555555555555) <= uVar19 || ( (allocator*)( *(long*)( lVar22 + 8 + uVar19 * 0x18 ) - *(long*)( lVar22 + uVar19 * 0x18 ) >> 3 ) <= paVar25 ) ) )) goto LAB_0010f2f8;
                     LAB_0010f4d2:if (( uVar28 <= (ulong)(long)(int)uVar12 ) || ( lVar22 = *(long*)( local_88._0_8_ + (long)(int)uVar12 * 3 * 8 )(ulong)(( ( (long*)( local_88._0_8_ + (long)(int)uVar12 * 3 * 8 ) )[1] - lVar22 >> 3 ) * -0x5555555555555555) <= uVar19 )) goto LAB_0010f2f8;
                     LAB_0010f510:plVar29 = (long*)( lVar22 + uVar19 * 0x18 );
                     lVar22 = *plVar29;
                     if ((allocator*)( plVar29[1] - lVar22 >> 3 ) <= paVar25) goto LAB_0010f2f8;
                     *(long*)( lVar22 + (long)paVar25 * 8 ) = (long)local_110 - (long)param_3;
                     uVar18 = ( ulong )((int)uVar18 + 1);
                     local_110 = paVar27;
                  }
 while ( uVar18 < ( ulong )(lVar6 - lVar7 >> 3) );
               }

               uVar16 = ( ulong )((int)uVar16 + 1);
            }
 while ( uVar16 < ( ulong )(( lVar14 - lVar5 >> 3 ) * -0x5555555555555555) );
         }

         uVar17 = ( ulong )((int)uVar17 + 1);
      }
 while ( uVar17 < uVar28 );
      goto LAB_0010ec31;
      while (true) {
         *(long*)( lVar14 + (long)paVar24 * 8 ) = (long)param_4 - (long)param_3;
         paVar24 = paVar24 + 1;
         param_4 = (uchar*)( (allocator*)param_4 + ( uVar2 + 8 ) );
         if (paVar23 <= paVar24) break;
         LAB_0010efe7:if (( param_5 <= ( (long)param_4 - (long)param_3 ) + 8U ) || ( uVar2 = param_5 <= uVar2 )) goto LAB_0010ef8b;
      }
;
      goto LAB_0010ed9e;
      LAB_0010ef8b:std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Cannot reconstruct lineOffset table in DecodeEXRImage.", paVar24);
      joined_r0x0010f317:if (param_6 != (char**)0x0) {
         pcVar15 = strdup((char*)local_68);
         *param_6 = pcVar15;
      }

      std::__cxx11::string::_M_dispose();
      LAB_0010ed59:iVar13 = -4;
      LAB_0010ee0b:uVar10 = local_88._8_8_;
      plVar29 = (long*)local_88._0_8_;
      if (local_88._8_8_ != local_88._0_8_) {
         do {
            puVar8 = (undefined8*)plVar29[1];
            puVar26 = (undefined8*)*plVar29;
            if (puVar8 != puVar26) {
               do {
                  pvVar9 = (void*)*puVar26;
                  if (pvVar9 != (void*)0x0) {
                     operator_delete(pvVar9, puVar26[2] - (long)pvVar9);
                  }

                  puVar26 = puVar26 + 3;
               }
 while ( puVar8 != puVar26 );
               puVar26 = (undefined8*)*plVar29;
            }

            if (puVar26 != (undefined8*)0x0) {
               operator_delete(puVar26, plVar29[2] - (long)puVar26);
            }

            plVar29 = plVar29 + 3;
         }
 while ( (long*)uVar10 != plVar29 );
      }

      if ((long*)local_88._0_8_ != (long*)0x0) {
         operator_delete((void*)local_88._0_8_, local_78 - local_88._0_8_);
      }

      goto LAB_0010ee8e;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   undefined8 LoadEXRImageFromMemory(TEXRImage *param_1, TEXRHeader *param_2, allocator *param_3, ulong param_4, char **param_5) {
      long lVar1;
      undefined8 uVar2;
      char *pcVar3;
      long in_FS_OFFSET;
      long local_40;
      long *local_38;
      long local_30;
      long local_28[3];
      long local_10;
      local_10 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_3 == (allocator*)0x0 || param_4 < 8 ) || ( param_1 == (TEXRImage*)0x0 )) {
         local_40 = 0x2b;
         local_38 = local_28;
         local_38 = (long*)std::__cxx11::string::_M_create((ulong*)&local_38, ( ulong ) & local_40);
         lVar1 = _UNK_0011ce58;
         local_28[0] = local_40;
         *local_38 = __LC117;
         local_38[1] = lVar1;
         lVar1 = _UNK_0011ce68;
         local_38[2] = __LC118;
         local_38[3] = lVar1;
         uVar2 = _UNK_0011ce78;
         *(undefined8*)( (long)local_38 + 0x1b ) = __LC119;
         *(undefined8*)( (long)local_38 + 0x23 ) = uVar2;
         local_30 = local_40;
         *(char*)( (long)local_38 + local_40 ) = '\0';
         if (param_5 != (char**)0x0) {
            pcVar3 = strdup((char*)local_38);
            *param_5 = pcVar3;
         }

         if (local_38 != local_28) {
            LAB_0010f8af:operator_delete(local_38, local_28[0] + 1);
         }

      }
 else {
         if (*(uint*)( param_2 + 0x58 ) != 0) {
            if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar2 = tinyexr::DecodeEXRImage(param_1, param_2, (uchar*)param_3, (uchar*)( param_3 + ( ulong ) * (uint*)( param_2 + 0x58 ) + 8 ), param_4, param_5);
               return uVar2;
            }

            goto LAB_0010f923;
         }

         std::__cxx11::string::string<std::allocator<char>>((string*)&local_38, "EXRHeader variable is not initialized.", param_3);
         if (param_5 != (char**)0x0) {
            pcVar3 = strdup((char*)local_38);
            *param_5 = pcVar3;
         }

         if (local_38 != local_28) goto LAB_0010f8af;
      }

      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 0xfffffffd;
      }

      LAB_0010f923:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   int LoadEXRFromMemory(undefined8 *param_1, int *param_2, allocator *param_3, long param_4, undefined8 param_5, char **param_6) {
      ulong uVar1;
      undefined4 uVar2;
      char cVar3;
      int iVar4;
      int iVar5;
      long lVar6;
      long lVar7;
      long lVar8;
      string *psVar9;
      undefined4 uVar10;
      undefined4 uVar11;
      uint uVar12;
      uint uVar13;
      ulong uVar14;
      void *pvVar15;
      ulong uVar16;
      undefined4 *puVar17;
      ostream *poVar18;
      char *pcVar19;
      undefined4 *puVar20;
      undefined4 *puVar21;
      long lVar22;
      long lVar23;
      int iVar24;
      allocator *extraout_RDX;
      allocator *paVar25;
      ulong uVar26;
      ulong uVar27;
      undefined8 *puVar28;
      undefined1 *puVar29;
      streambuf *psVar30;
      long lVar31;
      char **ppcVar32;
      int *piVar33;
      long lVar34;
      uint uVar35;
      long lVar36;
      int *piVar37;
      long lVar38;
      long lVar39;
      long in_FS_OFFSET;
      undefined4 uVar40;
      int local_3fc;
      undefined1 local_3c8[32];
      undefined1 local_3a8[16];
      undefined8 local_398;
      undefined8 *local_390;
      undefined1 local_388[16];
      char *local_378;
      undefined8 local_370;
      char local_368;
      undefined7 uStack_367;
      undefined8 local_358[7];
      int local_320;
      int local_31c;
      int local_318;
      char *local_2f0;
      long local_2e8;
      uint local_2e0;
      long local_2d8;
      string *local_1c8[2];
      pointer_____offset_0x10___ local_1b8[2];
      undefined1 local_1a8[16];
      undefined1 local_198[16];
      undefined1 local_188[16];
      locale local_178[8];
      undefined4 local_170;
      undefined1 *local_168;
      undefined8 local_160;
      undefined1 local_158;
      undefined7 uStack_157;
      code *local_148[27];
      undefined8 local_70;
      undefined2 local_68;
      undefined1 local_60[16];
      undefined1 local_50[16];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_1 == (undefined8*)0x0 ) || ( param_4 == 0 )) {
         std::__cxx11::string::string<std::allocator<char>>((string*)local_1c8, "Invalid argument for LoadEXRFromMemory", param_3);
         if (param_6 != (char**)0x0) {
            pcVar19 = strdup((char*)local_1c8[0]);
            *param_6 = pcVar19;
         }

         std::__cxx11::string::_M_dispose();
         local_3fc = -3;
         goto LAB_0010fffe;
      }

      puVar28 = local_358;
      for (lVar22 = 0x31; lVar22 != 0; lVar22 = lVar22 + -1) {
         *puVar28 = 0;
         puVar28 = puVar28 + 1;
      }

      puVar29 = local_3c8;
      ppcVar32 = param_6;
      local_3fc = ParseEXRVersionFromMemory(puVar29, param_4, param_5);
      if (local_3fc != 0) {
         std::ios_base::ios_base((ios_base*)local_148);
         psVar9 = _init;
         local_60 = (undefined1[16])0x0;
         local_50 = (undefined1[16])0x0;
         local_68 = 0;
         local_148[0] = (code*)&std::__cxx11::stringstream::vtable;
         local_70 = 0;
         local_1c8[0] = _init;
         *(undefined8*)( (long)local_1c8 + *(long*)( _init + -0x18 ) ) = _vtable;
         local_1c8[1] = (string*)0x0;
         std::ios::init((streambuf*)( (long)local_1c8 + *(long*)( _init + -0x18 ) ));
         local_1b8[0] = _locale;
         psVar30 = (streambuf*)( (ostream*)local_1b8 + *(long*)( _locale + -0x18 ) );
         *(undefined8*)psVar30 = _vtable;
         std::ios::init(psVar30);
         *(undefined8*)( (long)local_1c8 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
         local_1b8[0] = PTR_vtable_0011cce8;
         local_1b8[1] = PTR_vtable_0011ccf0;
         local_1a8 = (undefined1[16])0x0;
         local_198 = (undefined1[16])0x0;
         local_188 = (undefined1[16])0x0;
         local_1c8[0] = (string*)std::__ostream_insert<char,std::char_traits<char>>;
         local_148[0] = open64;
         std::locale::locale(local_178);
         local_1b8[1] = std::__cxx11::string::_M_replace;
         local_170 = 0x18;
         local_160 = 0;
         local_158 = 0;
         local_168 = &local_158;
         std::ios::init((streambuf*)local_148);
         std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_1b8, "Failed to parse EXR version. code(", 0x22);
         poVar18 = (ostream*)std::ostream::operator <<((ostream*)local_1b8, local_3fc);
         std::__ostream_insert<char,std::char_traits<char>>(poVar18, ")", 1);
         local_370 = 0;
         local_368 = '\0';
         local_378 = &local_368;
         if (local_188._0_8_ == 0) {
            std::__cxx11::string::_M_assign((string*)&local_378);
         }
 else {
            std::__cxx11::string::_M_replace(( ulong ) & local_378, 0, (char*)0x0, local_198._8_8_);
         }

         if (param_6 != (char**)0x0) {
            pcVar19 = strdup(local_378);
            *param_6 = pcVar19;
         }

         if (local_378 != &local_368) {
            operator_delete(local_378, CONCAT71(uStack_367, local_368) + 1);
         }

         local_1c8[0] = (string*)std::__ostream_insert<char,std::char_traits<char>>;
         local_148[0] = open64;
         local_1b8[0] = PTR_vtable_0011cce8;
         local_1b8[1] = PTR_vtable_0011ccf8;
         if (local_168 != &local_158) {
            operator_delete(local_168, CONCAT71(uStack_157, local_158) + 1);
         }

         local_1b8[1] = std::ios_base::~ios_base;
         std::locale::~locale(local_178);
         *(undefined8*)( (long)local_1c8 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
         local_1b8[0] = _locale;
         *(undefined8*)( (long)local_1b8 + *(long*)( _locale + -0x18 ) ) = _vtable;
         local_1c8[0] = psVar9;
         *(undefined8*)( (long)local_1c8 + *(long*)( psVar9 + -0x18 ) ) = _vtable;
         local_1c8[1] = (string*)0x0;
         local_148[0] = (code*)&std::__cxx11::stringstream::vtable;
         std::ios_base::~ios_base((ios_base*)local_148);
         goto LAB_0010fffe;
      }

      local_3fc = ParseEXRHeaderFromMemory(local_358, puVar29, param_4, param_5, ppcVar32);
      if (local_3fc != 0) goto LAB_0010fffe;
      if (0 < (int)local_2e0) {
         lVar22 = 0;
         do {
            if (*(int*)( local_2e8 + lVar22 * 4 ) == 1) {
               *(undefined4*)( local_2d8 + lVar22 * 4 ) = 2;
            }

            lVar22 = lVar22 + 1;
         }
 while ( (int)lVar22 < (int)local_2e0 );
      }

      local_3a8 = (undefined1[16])0x0;
      local_390 = (undefined8*)0x0;
      local_398 = 0;
      local_388 = (undefined1[16])0x0;
      local_3fc = LoadEXRImageFromMemory(local_3a8, local_358, param_4, param_5);
      if (local_3fc != 0) goto LAB_0010fffe;
      paVar25 = extraout_RDX;
      if ((int)local_2e0 < 1) {
         LAB_00110370:std::__cxx11::string::string<std::allocator<char>>((string*)local_1c8, "R channel not found", paVar25);
      }
 else {
         uVar35 = 0xffffffff;
         lVar22 = -1;
         lVar36 = -1;
         paVar25 = (allocator*)0xffffffff;
         uVar12 = 0;
         LAB_0010fabe:do {
            uVar13 = uVar12;
            cVar3 = *local_2f0;
            if (( cVar3 == 'R' ) && ( local_2f0[1] == '\0' )) {
               paVar25 = (allocator*)(ulong)uVar13;
            }
 else {
               if (( cVar3 == 'G' ) && ( local_2f0[1] == '\0' )) {
                  lVar36 = (long)(int)uVar13;
                  local_2f0 = local_2f0 + 0x110;
                  uVar12 = uVar13 + 1;
                  if (uVar13 + 1 == local_2e0) break;
                  goto LAB_0010fabe;
               }

               if (( cVar3 == 'B' ) && ( local_2f0[1] == '\0' )) {
                  lVar22 = (long)(int)uVar13;
               }
 else if (( cVar3 == 'A' ) && ( local_2f0[1] == '\0' )) {
                  uVar35 = uVar13;
               }

            }

            local_2f0 = local_2f0 + 0x110;
            uVar12 = uVar13 + 1;
         }
 while ( uVar13 + 1 != local_2e0 );
         uVar10 = local_388._0_4_;
         uVar11 = local_388._4_4_;
         if (uVar13 == 0) {
            uVar14 = (ulong)(int)local_388._4_4_;
            uVar27 = (ulong)(int)local_388._0_4_;
            lVar22 = uVar14 * uVar27;
            puVar17 = (undefined4*)malloc(lVar22 * 0x10);
            *param_1 = puVar17;
            if (local_320 == 0) {
               if (lVar22 != 0) {
                  puVar21 = (undefined4*)*local_390;
                  puVar20 = puVar21 + lVar22;
                  do {
                     uVar2 = *puVar21;
                     puVar21 = puVar21 + 1;
                     *puVar17 = uVar2;
                     for (int i = 0; i < 3; i++) {
                        puVar17[( i + 1 )] = uVar2;
                     }

                     puVar17 = puVar17 + 4;
                  }
 while ( puVar21 != puVar20 );
               }

            }
 else {
               lVar22 = (long)local_31c;
               lVar36 = (long)local_318;
               if (0 < (int)local_388._12_4_) {
                  piVar37 = (int*)( local_3a8._0_8_ + (long)(int)local_388._12_4_ * 8 * 4 );
                  piVar33 = (int*)local_3a8._0_8_;
                  if (lVar36 == 0) {
                     if (( (long)piVar37 - local_3a8._0_8_ & 0x20U ) == 0) goto LAB_001103c8;
                     for (piVar33 = (int*)( local_3a8._0_8_ + 0x20 ); piVar33 != piVar37; piVar33 = piVar33 + 0x10) {
                        LAB_001103c8:;
                     }

                  }
 else {
                     do {
                        lVar38 = 0;
                        if (lVar22 == 0) {
                           do {
                              if (lVar36 == lVar38 + 1) break;
                              lVar38 = lVar38 + 2;
                           }
 while ( lVar36 != lVar38 );
                        }
 else {
                           iVar24 = piVar33[1];
                           iVar4 = *piVar33;
                           lVar39 = 0;
                           do {
                              uVar16 = iVar24 * lVar36 + lVar38;
                              uVar26 = iVar4 * lVar22;
                              lVar31 = lVar39 * 4;
                              uVar1 = uVar26 + lVar22;
                              puVar20 = puVar17 + ( uVar16 * uVar27 + uVar26 ) * 4;
                              do {
                                 if (( uVar26 < uVar27 ) && ( uVar16 < uVar14 )) {
                                    lVar34 = **(long**)( piVar33 + 6 );
                                    uVar2 = *(undefined4*)( lVar34 + lVar31 );
                                    *puVar20 = uVar2;
                                    puVar20[1] = uVar2;
                                    uVar2 = *(undefined4*)( lVar34 + lVar31 );
                                    puVar20[2] = uVar2;
                                    puVar20[3] = uVar2;
                                 }

                                 uVar26 = uVar26 + 1;
                                 lVar31 = lVar31 + 4;
                                 puVar20 = puVar20 + 4;
                              }
 while ( uVar1 != uVar26 );
                              lVar39 = lVar39 + lVar22;
                              lVar38 = lVar38 + 1;
                           }
 while ( lVar38 != lVar36 );
                        }

                        piVar33 = piVar33 + 8;
                     }
 while ( piVar33 != piVar37 );
                  }

               }

            }

            LAB_001100d5:*param_2 = uVar10;
            *(undefined4*)param_3 = uVar11;
            FreeEXRHeader(local_358);
            FreeEXRImage(local_3a8);
            goto LAB_0010fffe;
         }

         iVar24 = (int)paVar25;
         if (iVar24 == -1) goto LAB_00110370;
         if ((int)lVar36 == -1) {
            std::__cxx11::string::string<std::allocator<char>>((string*)local_1c8, "G channel not found", paVar25);
         }
 else {
            if ((int)lVar22 != -1) {
               uVar14 = (ulong)(int)local_388._4_4_;
               uVar27 = (ulong)(int)local_388._0_4_;
               lVar38 = uVar14 * uVar27;
               pvVar15 = malloc(lVar38 * 0x10);
               *param_1 = pvVar15;
               uVar2 = _LC120;
               if (local_320 == 0) {
                  if (lVar38 != 0) {
                     lVar39 = local_390[iVar24];
                     lVar22 = local_390[lVar22];
                     lVar36 = local_390[lVar36];
                     lVar31 = 0;
                     do {
                        *(undefined4*)( (long)pvVar15 + lVar31 * 4 ) = *(undefined4*)( lVar39 + lVar31 );
                        *(undefined4*)( (long)pvVar15 + lVar31 * 4 + 4 ) = *(undefined4*)( lVar36 + lVar31 );
                        *(undefined4*)( (long)pvVar15 + lVar31 * 4 + 8 ) = *(undefined4*)( lVar22 + lVar31 );
                        uVar40 = uVar2;
                        if (uVar35 != 0xffffffff) {
                           uVar40 = *(undefined4*)( local_390[(int)uVar35] + lVar31 );
                        }

                        *(undefined4*)( (long)pvVar15 + lVar31 * 4 + 0xc ) = uVar40;
                        lVar31 = lVar31 + 4;
                     }
 while ( lVar38 * 4 != lVar31 );
                  }

               }
 else {
                  lVar38 = (long)local_318;
                  lVar39 = (long)local_31c;
                  if (0 < (int)local_388._12_4_) {
                     piVar33 = (int*)( local_3a8._0_8_ + (long)(int)local_388._12_4_ * 8 * 4 );
                     piVar37 = (int*)local_3a8._0_8_;
                     if (lVar38 == 0) {
                        if (( (int)piVar33 - local_3a8._0_4_ & 0x20U ) == 0) goto LAB_00110321;
                        for (piVar37 = (int*)( local_3a8._0_8_ + 0x20 ); piVar33 != piVar37; piVar37 = piVar37 + 0x10) {
                           LAB_00110321:;
                        }

                     }
 else {
                        do {
                           lVar31 = 0;
                           if (lVar39 == 0) {
                              do {
                                 lVar31 = lVar31 + 1;
                              }
 while ( lVar38 != lVar31 );
                           }
 else {
                              iVar4 = *piVar37;
                              lVar34 = 0;
                              iVar5 = piVar37[1];
                              do {
                                 lVar23 = lVar34 * 4;
                                 uVar16 = iVar5 * lVar38 + lVar31;
                                 uVar26 = iVar4 * lVar39;
                                 puVar17 = (undefined4*)( ( uVar16 * uVar27 + uVar26 ) * 0x10 + (long)pvVar15 );
                                 uVar1 = uVar26 + lVar39;
                                 do {
                                    if (( uVar26 < uVar27 ) && ( uVar16 < uVar14 )) {
                                       lVar6 = *(long*)( piVar37 + 6 );
                                       lVar7 = *(long*)( lVar6 + (long)(int)lVar36 * 8 );
                                       *puVar17 = *(undefined4*)( *(long*)( lVar6 + (long)iVar24 * 8 ) + lVar23 );
                                       lVar8 = *(long*)( lVar6 + (long)(int)lVar22 * 8 );
                                       puVar17[1] = *(undefined4*)( lVar7 + lVar23 );
                                       puVar17[2] = *(undefined4*)( lVar8 + lVar23 );
                                       if (uVar35 == 0xffffffff) {
                                          puVar17[3] = uVar2;
                                       }
 else {
                                          puVar17[3] = *(undefined4*)( *(long*)( lVar6 + (long)(int)uVar35 * 8 ) + lVar23 );
                                       }

                                    }

                                    uVar26 = uVar26 + 1;
                                    puVar17 = puVar17 + 4;
                                    lVar23 = lVar23 + 4;
                                 }
 while ( uVar1 != uVar26 );
                                 lVar31 = lVar31 + 1;
                                 lVar34 = lVar34 + lVar39;
                              }
 while ( lVar38 != lVar31 );
                           }

                           piVar37 = piVar37 + 8;
                        }
 while ( piVar37 != piVar33 );
                     }

                  }

               }

               goto LAB_001100d5;
            }

            std::__cxx11::string::string<std::allocator<char>>((string*)local_1c8, "B channel not found", paVar25);
         }

      }

      if (param_6 != (char**)0x0) {
         tinyexr::SetErrorMessage(local_1c8[0], param_6);
      }

      std::__cxx11::string::_M_dispose();
      local_3fc = -4;
      LAB_0010fffe:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return local_3fc;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   undefined4 LoadEXRImageFromFile(long param_1, undefined8 param_2, allocator *param_3, undefined8 *param_4) {
      long *plVar1;
      ulong uVar2;
      __nlink_t *p_Var3;
      int __fd;
      int iVar4;
      undefined4 uVar5;
      void *__addr;
      size_t sVar6;
      long *plVar7;
      char *pcVar8;
      uint uVar9;
      size_t *psVar10;
      ulong uVar11;
      long *plVar13;
      long lVar14;
      __nlink_t *p_Var15;
      long in_FS_OFFSET;
      size_t local_100;
      size_t *local_f8;
      size_t local_f0;
      size_t local_e8[2];
      stat64 local_d8;
      long local_40;
      ulong uVar12;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (param_1 == 0) {
         std::__cxx11::string::string<std::allocator<char>>((string*)&local_d8, "Invalid argument for LoadEXRImageFromFile", param_3);
         if (param_4 != (undefined8*)0x0) {
            pcVar8 = strdup((char*)local_d8.st_dev);
            *param_4 = pcVar8;
         }

         uVar5 = 0xfffffffd;
         std::__cxx11::string::_M_dispose();
         goto LAB_001104f6;
      }

      __fd = open64((char*)param_3, 0);
      if (( ( ( __fd == -1 ) || ( iVar4 = fstat64(__fd, &local_d8) ),iVar4 < 0 ) ) || ( local_d8.st_size < 0 )) {
         local_f8 = local_e8;
         sVar6 = strlen((char*)param_3);
         local_100 = sVar6;
         if (sVar6 < 0x10) {
            psVar10 = local_e8;
            if (sVar6 == 1) {
               local_e8[0] = CONCAT71(local_e8[0]._1_7_, *param_3);
            }
 else if (sVar6 != 0) goto LAB_00110832;
         }
 else {
            local_f8 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_f8, ( ulong ) & local_100);
            local_e8[0] = local_100;
            psVar10 = local_f8;
            LAB_00110832:memcpy(psVar10, param_3, sVar6);
            psVar10 = local_f8;
         }

         p_Var3 = &local_d8.st_nlink;
         *(undefined1*)( (long)psVar10 + local_100 ) = 0;
         local_f0 = local_100;
         plVar7 = (long*)std::__cxx11::string::_M_replace(( ulong ) & local_f8, 0, (char*)0x0, 0x1189a7);
         plVar1 = plVar7 + 2;
         if ((__nlink_t*)*plVar7 == (__nlink_t*)plVar1) {
            uVar2 = plVar7[1] + 1;
            plVar13 = plVar1;
            p_Var15 = p_Var3;
            if (7 < (uint)uVar2) {
               uVar11 = 0;
               do {
                  uVar9 = (int)uVar11 + 8;
                  uVar12 = (ulong)uVar9;
                  *(undefined8*)( (long)p_Var3 + uVar11 ) = *(undefined8*)( (long)plVar1 + uVar11 );
                  uVar11 = uVar12;
               }
 while ( uVar9 < ( (uint)uVar2 & 0xfffffff8 ) );
               p_Var15 = (__nlink_t*)( (long)p_Var3 + uVar12 );
               plVar13 = (long*)( uVar12 + (long)plVar1 );
            }

            lVar14 = 0;
            if (( uVar2 & 4 ) != 0) {
               *(int*)p_Var15 = (int)*plVar13;
               lVar14 = 4;
            }

            if (( uVar2 & 2 ) != 0) {
               *(undefined2*)( (long)p_Var15 + lVar14 ) = *(undefined2*)( (long)plVar13 + lVar14 );
               lVar14 = lVar14 + 2;
            }

            local_d8.st_dev = (__dev_t)p_Var3;
            if (( uVar2 & 1 ) != 0) {
               *(undefined1*)( (long)p_Var15 + lVar14 ) = *(undefined1*)( (long)plVar13 + lVar14 );
            }

         }
 else {
            local_d8.st_nlink = plVar7[2];
            local_d8.st_dev = ( __dev_t ) * plVar7;
         }

         local_d8.st_ino = plVar7[1];
         *plVar7 = (long)plVar1;
         plVar7[1] = 0;
         *(undefined1*)( plVar7 + 2 ) = 0;
         if (param_4 != (undefined8*)0x0) {
            pcVar8 = strdup((char*)local_d8.st_dev);
            *param_4 = pcVar8;
         }

         if ((__nlink_t*)local_d8.st_dev != p_Var3) {
            operator_delete((void*)local_d8.st_dev, local_d8.st_nlink + 1);
         }

         if (local_f8 != local_e8) {
            operator_delete(local_f8, local_e8[0] + 1);
         }

         uVar5 = 0xfffffff9;
         if (__fd == -1) goto LAB_001104f6;
      }
 else {
         if ((ulong)local_d8.st_size < 0x10) {
            local_f8 = local_e8;
            sVar6 = strlen((char*)param_3);
            local_100 = sVar6;
            if (sVar6 < 0x10) {
               psVar10 = local_e8;
               if (sVar6 == 1) {
                  local_e8[0] = CONCAT71(local_e8[0]._1_7_, *param_3);
               }
 else if (sVar6 != 0) goto LAB_0011075c;
            }
 else {
               local_f8 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_f8, ( ulong ) & local_100);
               local_e8[0] = local_100;
               psVar10 = local_f8;
               LAB_0011075c:memcpy(psVar10, param_3, sVar6);
               psVar10 = local_f8;
            }

            p_Var3 = &local_d8.st_nlink;
            *(undefined1*)( (long)psVar10 + local_100 ) = 0;
            local_f0 = local_100;
            plVar7 = (long*)std::__cxx11::string::_M_replace(( ulong ) & local_f8, 0, (char*)0x0, 0x118d13);
            plVar1 = plVar7 + 2;
            if ((__nlink_t*)*plVar7 == (__nlink_t*)plVar1) {
               uVar2 = plVar7[1] + 1;
               plVar13 = plVar1;
               p_Var15 = p_Var3;
               if (7 < (uint)uVar2) {
                  uVar11 = 0;
                  do {
                     uVar9 = (int)uVar11 + 8;
                     uVar12 = (ulong)uVar9;
                     *(undefined8*)( (long)p_Var3 + uVar11 ) = *(undefined8*)( (long)plVar1 + uVar11 );
                     uVar11 = uVar12;
                  }
 while ( uVar9 < ( (uint)uVar2 & 0xfffffff8 ) );
                  p_Var15 = (__nlink_t*)( (long)p_Var3 + uVar12 );
                  plVar13 = (long*)( uVar12 + (long)plVar1 );
               }

               lVar14 = 0;
               if (( uVar2 & 4 ) != 0) {
                  *(int*)p_Var15 = (int)*plVar13;
                  lVar14 = 4;
               }

               if (( uVar2 & 2 ) != 0) {
                  *(undefined2*)( (long)p_Var15 + lVar14 ) = *(undefined2*)( (long)plVar13 + lVar14 );
                  lVar14 = lVar14 + 2;
               }

               local_d8.st_dev = (__dev_t)p_Var3;
               if (( uVar2 & 1 ) != 0) {
                  *(undefined1*)( (long)p_Var15 + lVar14 ) = *(undefined1*)( (long)plVar13 + lVar14 );
               }

            }
 else {
               local_d8.st_nlink = plVar7[2];
               local_d8.st_dev = ( __dev_t ) * plVar7;
            }

            local_d8.st_ino = plVar7[1];
            *plVar7 = (long)plVar1;
            plVar7[1] = 0;
            *(undefined1*)( plVar7 + 2 ) = 0;
            if (param_4 != (undefined8*)0x0) {
               pcVar8 = strdup((char*)local_d8.st_dev);
               *param_4 = pcVar8;
            }

            if ((__nlink_t*)local_d8.st_dev != p_Var3) {
               operator_delete((void*)local_d8.st_dev, local_d8.st_nlink + 1);
            }

            if (local_f8 != local_e8) {
               operator_delete(local_f8, local_e8[0] + 1);
            }

            uVar5 = 0xfffffffb;
         }
 else {
            uVar5 = LoadEXRImageFromMemory(param_1, param_2, __addr, local_d8.st_size, param_4);
         }

         munmap(__addr, local_d8.st_size);
      }

      close(__fd);
      LAB_001104f6:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar5;
   }

   /* tinyexr::GetLayers(TEXRHeader const&, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > >&) [clone .constprop.0] */
   void tinyexr::GetLayers(TEXRHeader *param_1, vector *param_2) {
      undefined8 *puVar1;
      undefined8 *puVar2;
      long *plVar3;
      size_t *__s2;
      ulong __n;
      int iVar4;
      size_t sVar5;
      long lVar6;
      size_t sVar7;
      undefined8 *puVar8;
      long lVar9;
      char *__s;
      long *plVar10;
      void *pvVar11;
      long *plVar12;
      long *plVar13;
      long in_FS_OFFSET;
      size_t local_70;
      size_t *local_68;
      ulong local_60;
      size_t local_58[3];
      long local_40;
      puVar1 = *(undefined8**)param_2;
      puVar2 = *(undefined8**)( param_2 + 8 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      puVar8 = puVar1;
      if (puVar1 != puVar2) {
         do {
            if ((undefined8*)*puVar8 != puVar8 + 2) {
               operator_delete((undefined8*)*puVar8, puVar8[2] + 1);
            }

            puVar8 = puVar8 + 4;
         }
 while ( puVar2 != puVar8 );
         *(undefined8**)( param_2 + 8 ) = puVar1;
      }

      if (*(int*)( param_1 + 0x78 ) < 1) {
         LAB_00110cb0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

      }
 else {
         __s = *(char**)( param_1 + 0x68 );
         if (__s != (char*)0x0) {
            lVar9 = 0;
            do {
               local_68 = local_58;
               sVar5 = strlen(__s);
               local_70 = sVar5;
               if (sVar5 < 0x10) {
                  if (sVar5 == 1) {
                     *(char*)local_68 = *__s;
                  }
 else if (sVar5 != 0) goto LAB_00110ab1;
               }
 else {
                  local_68 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_70);
                  local_58[0] = local_70;
                  LAB_00110ab1:memcpy(local_68, __s, sVar5);
               }

               *(undefined1*)( (long)local_68 + local_70 ) = 0;
               local_60 = local_70;
               sVar5 = std::__cxx11::string::rfind((char)&local_68, 0x2e);
               __s2 = local_68;
               if (( sVar5 - 1 < 0xfffffffffffffffe ) && ( sVar5 + 1 < local_60 )) {
                  *(undefined1*)( (long)local_68 + sVar5 ) = 0;
                  plVar3 = *(long**)( param_2 + 8 );
                  plVar12 = *(long**)param_2;
                  lVar6 = (long)plVar3 - (long)plVar12;
                  plVar13 = plVar12;
                  local_60 = sVar5;
                  if (0 < lVar6 >> 7) {
                     plVar10 = plVar12 + ( lVar6 >> 7 ) * 0x10;
                     do {
                        if (plVar12[1] == sVar5) {
                           plVar13 = plVar12;
                           if (( sVar5 == 0 ) || ( iVar4 = iVar4 == 0 )) goto LAB_00110b80;
                           sVar7 = plVar12[5];
                           if (sVar5 != sVar7) {
                              sVar7 = plVar12[9];
                              if (sVar7 == sVar5) goto LAB_00110c59;
                              LAB_00110b42:sVar7 = plVar12[0xd];
                              if (sVar5 != sVar7) goto LAB_00110b4f;
                              plVar13 = plVar12 + 0xc;
                              if (sVar5 != 0) {
                                 LAB_00110c21:pvVar11 = (void*)plVar12[0xc];
                                 goto LAB_00110c25;
                              }

                              goto LAB_00110b80;
                           }

                           pvVar11 = (void*)plVar12[4];
                           LAB_00110bdd:plVar13 = plVar12 + 4;
                           iVar4 = memcmp(pvVar11, __s2, sVar7);
                           if (iVar4 == 0) goto LAB_00110b80;
                           sVar7 = plVar12[9];
                           if (sVar7 == sVar5) {
                              pvVar11 = (void*)plVar12[8];
                              goto LAB_00110c5d;
                           }

                           sVar7 = plVar12[0xd];
                           if (sVar5 == sVar7) goto LAB_00110c21;
                        }
 else {
                           sVar7 = plVar12[5];
                           if (sVar5 == sVar7) {
                              plVar13 = plVar12 + 4;
                              if (sVar5 != 0) {
                                 pvVar11 = (void*)plVar12[4];
                                 goto LAB_00110bdd;
                              }

                              goto LAB_00110b80;
                           }

                           sVar7 = plVar12[9];
                           if (sVar5 != sVar7) goto LAB_00110b42;
                           plVar13 = plVar12 + 8;
                           if (sVar5 == 0) goto LAB_00110b80;
                           LAB_00110c59:pvVar11 = (void*)plVar12[8];
                           LAB_00110c5d:plVar13 = plVar12 + 8;
                           iVar4 = memcmp(pvVar11, __s2, sVar7);
                           if (iVar4 == 0) goto LAB_00110b80;
                           sVar7 = plVar12[0xd];
                           if (sVar5 == sVar7) {
                              pvVar11 = (void*)plVar12[0xc];
                              LAB_00110c25:plVar13 = plVar12 + 0xc;
                              iVar4 = memcmp(pvVar11, __s2, sVar7);
                              if (iVar4 == 0) goto LAB_00110b80;
                           }

                        }

                        LAB_00110b4f:plVar12 = plVar12 + 0x10;
                     }
 while ( plVar12 != plVar10 );
                     lVar6 = (long)plVar3 - (long)plVar12;
                     plVar13 = plVar12;
                  }

                  __n = local_60;
                  lVar6 = lVar6 >> 5;
                  if (lVar6 == 2) {
                     LAB_00110d86:if (( plVar13[1] != __n ) || ( ( __n != 0 && ( iVar4 = memcmp((void*)*plVar13, local_68, __n) ),iVar4 != 0 ) )) {
                        plVar13 = plVar13 + 4;
                        LAB_00110d1f:if (( plVar13[1] != __n ) || ( ( __n != 0 && ( iVar4 = memcmp((void*)*plVar13, local_68, __n) ),iVar4 != 0 ) )) goto LAB_00110b90;
                     }

                     LAB_00110b80:if (plVar3 != plVar13) goto LAB_00110a2c;
                  }
 else {
                     if (lVar6 == 3) {
                        if (( plVar13[1] != local_60 ) || ( ( local_60 != 0 && ( iVar4 = memcmp((void*)*plVar13, local_68, local_60) ),iVar4 != 0 ) )) {
                           plVar13 = plVar13 + 4;
                           goto LAB_00110d86;
                        }

                        goto LAB_00110b80;
                     }

                     if (lVar6 == 1) goto LAB_00110d1f;
                  }

                  LAB_00110b90:if (*(long**)( param_2 + 0x10 ) == plVar3) {
                     std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<std::__cxx11::string_const&>((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>*)param_2, plVar3, &local_68);
                  }
 else {
                     *plVar3 = (long)( plVar3 + 2 );
                     std::__cxx11::string::_M_construct<char*>(plVar3, local_68, (undefined1*)( (long)local_68 + local_60 ));
                     *(long*)( param_2 + 8 ) = *(long*)( param_2 + 8 ) + 0x20;
                  }

               }

               LAB_00110a2c:if (local_68 != local_58) {
                  operator_delete(local_68, local_58[0] + 1);
               }

               lVar9 = lVar9 + 1;
               if (*(int*)( param_1 + 0x78 ) <= (int)lVar9) goto LAB_00110cb0;
               __s = (char*)( lVar9 * 0x110 + *(long*)( param_1 + 0x68 ) );
            }
 while ( true );
         }

         local_68 = local_58;
         std::__throw_logic_error("basic_string: construction from null is not valid");
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   int EXRLayers(undefined8 param_1, undefined8 *param_2, undefined4 *param_3, undefined8 *param_4) {
      undefined8 uVar1;
      undefined8 uVar2;
      int iVar3;
      void *pvVar4;
      char *pcVar5;
      long lVar6;
      allocator *extraout_RDX;
      TEXRHeader *pTVar7;
      ulong uVar8;
      undefined8 *puVar9;
      ulong uVar10;
      long in_FS_OFFSET;
      undefined1 local_228[12];
      int local_21c;
      int local_218;
      undefined1 local_208[16];
      long local_1f8;
      long *local_1e8;
      long local_1e0;
      long local_1d8[2];
      TEXRHeader local_1c8[392];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      pTVar7 = local_1c8;
      for (lVar6 = 0x31; lVar6 != 0; lVar6 = lVar6 + -1) {
         *(undefined8*)pTVar7 = 0;
         pTVar7 = pTVar7 + 8;
      }

      iVar3 = ParseEXRVersionFromFile(local_228, param_1);
      if (iVar3 == 0) {
         if (local_218 == 0 && local_21c == 0) {
            iVar3 = ParseEXRHeaderFromFile(local_1c8, local_228, param_1, param_4);
            if (iVar3 == 0) {
               local_1f8 = 0;
               local_208 = (undefined1[16])0x0;
               tinyexr::GetLayers(local_1c8, (vector*)local_208);
               uVar2 = local_208._8_8_;
               uVar1 = local_208._0_8_;
               uVar8 = (long)( local_208._8_8_ - local_208._0_8_ ) >> 5;
               *param_3 = (int)uVar8;
               pvVar4 = malloc(uVar8 * 8);
               *param_2 = pvVar4;
               if (uVar2 == uVar1) {
                  FreeEXRHeader(local_1c8);
                  if ((undefined8*)uVar1 == (undefined8*)0x0) goto LAB_00110f3d;
               }
 else {
                  uVar10 = 0;
                  do {
                     pcVar5 = strdup(*(char**)( uVar1 + uVar10 * 4 * 8 ));
                     *(char**)( (long)pvVar4 + uVar10 * 8 ) = pcVar5;
                     uVar10 = uVar10 + 1;
                  }
 while ( uVar10 < uVar8 );
                  FreeEXRHeader(local_1c8);
                  puVar9 = (undefined8*)uVar1;
                  do {
                     if ((undefined8*)*puVar9 != puVar9 + 2) {
                        operator_delete((undefined8*)*puVar9, puVar9[2] + 1);
                     }

                     puVar9 = puVar9 + 4;
                  }
 while ( (undefined8*)uVar2 != puVar9 );
               }

               operator_delete((void*)uVar1, local_1f8 - uVar1);
            }
 else {
               FreeEXRHeader(local_1c8);
            }

         }
 else {
            std::__cxx11::string::string<std::allocator<char>>((string*)&local_1e8, "Loading multipart or DeepImage is not supported  in LoadEXR() API", extraout_RDX);
            if (param_4 != (undefined8*)0x0) {
               pcVar5 = strdup((char*)local_1e8);
               *param_4 = pcVar5;
            }

            if (local_1e8 != local_1d8) {
               operator_delete(local_1e8, local_1d8[0] + 1);
            }

            iVar3 = -4;
         }

      }
 else {
         local_208._0_8_ = 0x13;
         local_1e8 = local_1d8;
         local_1e8 = (long*)std::__cxx11::string::_M_create((ulong*)&local_1e8, (ulong)local_208);
         lVar6 = _UNK_0011ce88;
         local_1d8[0] = local_208._0_8_;
         *local_1e8 = __LC130;
         local_1e8[1] = lVar6;
         builtin_strncpy((char*)( (long)local_1e8 + 0xf ), "der.", 4);
         local_1e0 = local_208._0_8_;
         *(char*)( (long)local_1e8 + local_208._0_8_ ) = '\0';
         if (param_4 != (undefined8*)0x0) {
            pcVar5 = strdup((char*)local_1e8);
            *param_4 = pcVar5;
         }

         if (local_1e8 != local_1d8) {
            operator_delete(local_1e8, local_1d8[0] + 1);
         }

      }

      LAB_00110f3d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return iVar3;
   }

   /* WARNING: Type propagation algorithm not settling */
   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   int LoadEXRWithLayer(undefined8 *param_1, int *param_2, allocator *param_3, undefined8 param_4, char *param_5, char **param_6) {
      ulong uVar1;
      undefined4 uVar2;
      char cVar3;
      int iVar4;
      int iVar5;
      long lVar6;
      long lVar7;
      long lVar8;
      undefined8 uVar9;
      undefined8 uVar10;
      undefined4 uVar11;
      undefined4 uVar12;
      uint uVar13;
      pointer_____offset_0x10___ puVar14;
      long lVar15;
      ostream *poVar16;
      pointer_____offset_0x10___ *ppuVar17;
      char *pcVar18;
      uint *puVar19;
      void *pvVar20;
      ulong uVar21;
      undefined4 *puVar22;
      undefined4 *puVar23;
      long lVar24;
      long lVar25;
      long lVar26;
      int iVar27;
      uint uVar28;
      allocator *extraout_RDX;
      allocator *extraout_RDX_00;
      allocator *paVar29;
      allocator *paVar30;
      ulong uVar31;
      string *psVar32;
      uint *puVar33;
      ulong uVar34;
      ulong uVar35;
      TEXRHeader *pTVar36;
      streambuf *psVar37;
      int *piVar38;
      int *piVar39;
      undefined4 *puVar40;
      long lVar41;
      undefined8 *puVar42;
      string *psVar43;
      long lVar44;
      long in_FS_OFFSET;
      undefined4 uVar45;
      undefined1 auVar46[16];
      pointer_____offset_0x10___ *local_4d0;
      int local_4a4;
      uint *local_498;
      ulong local_470;
      pointer_____offset_0x10___ local_450;
      undefined1 local_448[12];
      int local_43c;
      int local_438;
      undefined1 local_428[16];
      long local_418;
      undefined1 local_408[16];
      undefined8 *local_3f8;
      undefined1 local_3e8[16];
      undefined8 local_3d8;
      long local_3d0;
      undefined1 local_3c8[16];
      pointer_____offset_0x10___ *local_3b8;
      pointer_____offset_0x10___ local_3b0;
      pointer_____offset_0x10___ local_3a8[2];
      string *local_398;
      pointer_____offset_0x10___ local_390;
      pointer_____offset_0x10___ apuStack_388[2];
      char *local_378;
      long local_370;
      char local_368;
      undefined7 uStack_367;
      TEXRHeader local_358[56];
      int local_320;
      int local_31c;
      int local_318;
      string *local_2f0;
      long local_2e8;
      int local_2e0;
      long local_2d8;
      string *local_1c8;
      pointer_____offset_0x10___ local_1c0;
      undefined4 uStack_1bc;
      pointer_____offset_0x10___ apuStack_1b8[2];
      undefined1 local_1a8[16];
      undefined1 local_198[16];
      undefined1 local_188[16];
      locale local_178[8];
      undefined4 local_170;
      undefined1 *local_168;
      undefined8 local_160;
      undefined1 local_158;
      undefined7 uStack_157;
      code *local_148[27];
      undefined8 local_70;
      undefined2 local_68;
      undefined1 local_60[16];
      undefined1 local_50[16];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (param_1 == (undefined8*)0x0) {
         std::__cxx11::string::string<std::allocator<char>>((string*)&local_1c8, "Invalid argument for LoadEXR()", param_3);
         if (param_6 != (char**)0x0) {
            tinyexr::SetErrorMessage(local_1c8, param_6);
         }

         std::__cxx11::string::_M_dispose();
         local_4a4 = -3;
      }
 else {
         pTVar36 = local_358;
         for (lVar24 = 0x31; lVar24 != 0; lVar24 = lVar24 + -1) {
            *(undefined8*)pTVar36 = 0;
            pTVar36 = pTVar36 + 8;
         }

         local_3d0 = 0;
         local_3d8 = 0;
         local_3e8 = (undefined1[16])0x0;
         local_3c8 = (undefined1[16])0x0;
         local_4a4 = ParseEXRVersionFromFile(local_448, param_4);
         if (local_4a4 == 0) {
            if (local_438 == 0 && local_43c == 0) {
               local_4a4 = ParseEXRHeaderFromFile(local_358, local_448, param_4, param_6);
               if (local_4a4 == 0) {
                  if (0 < local_2e0) {
                     lVar24 = 0;
                     do {
                        if (*(int*)( local_2e8 + lVar24 * 4 ) == 1) {
                           *(undefined4*)( local_2d8 + lVar24 * 4 ) = 2;
                        }

                        lVar24 = lVar24 + 1;
                     }
 while ( (int)lVar24 < local_2e0 );
                  }

                  local_4a4 = LoadEXRImageFromFile(local_3e8, local_358, param_4, param_6);
                  if (local_4a4 == 0) {
                     local_418 = 0;
                     local_428 = (undefined1[16])0x0;
                     tinyexr::GetLayers(local_358, (vector*)local_428);
                     local_3f8 = (undefined8*)0x0;
                     local_408 = (undefined1[16])0x0;
                     if (param_5 == (char*)0x0) {
                        local_3b8 = local_3a8;
                        local_3b0 = (pointer_____offset_0x10___)0x0;
                        local_3a8[0] = ( pointer_____offset_0x10___ )((ulong)local_3a8[0] & 0xffffffffffffff00);
                        if (0 < local_2e0) goto LAB_0011128b;
                        local_498 = (uint*)0x0;
                        local_470 = 0;
                        paVar29 = extraout_RDX_00;
                        LAB_00111f66:std::__cxx11::string::string<std::allocator<char>>((string*)&local_1c8, "Layer Not Found. Seems EXR contains channels with layer(e.g. `diffuse.R`). if you are using LoadEXR(), please try LoadEXRWithLayer(). LoadEXR() cannot load EXR having channels with layer.", paVar29);
                        if (param_6 != (char**)0x0) {
                           pcVar18 = strdup((char*)local_1c8);
                           *param_6 = pcVar18;
                        }

                        std::__cxx11::string::_M_dispose();
                        LAB_00111f9f:FreeEXRHeader(local_358);
                        FreeEXRImage(local_3e8);
                        local_4a4 = -0xd;
                     }
 else {
                        ppuVar17 = local_3a8;
                        local_3b8 = ppuVar17;
                        puVar14 = (pointer_____offset_0x10___)strlen(param_5);
                        local_450 = puVar14;
                        if (puVar14 < (pointer_____offset_0x10___)0x10) {
                           if (puVar14 == (pointer_____offset_0x10___)0x1) {
                              local_3a8[0] = (pointer_____offset_0x10___)CONCAT71(local_3a8[0]._1_7_, *param_5);
                           }
 else if (puVar14 != (pointer_____offset_0x10___)0x0) goto LAB_00111ac0;
                        }
 else {
                           ppuVar17 = (pointer_____offset_0x10___*)std::__cxx11::string::_M_create((ulong*)&local_3b8, ( ulong ) & local_450);
                           local_3a8[0] = local_450;
                           local_3b8 = ppuVar17;
                           LAB_00111ac0:memcpy(ppuVar17, param_5, (size_t)puVar14);
                           ppuVar17 = local_3b8;
                        }

                        *(undefined1*)( (long)ppuVar17 + (long)local_450 ) = 0;
                        local_3b0 = local_450;
                        if (0 < local_2e0) {
                           LAB_0011128b:if (local_2f0 != (string*)0x0) {
                              lVar24 = 0x110;
                              psVar32 = (string*)0x0;
                              psVar43 = local_2f0;
                              do {
                                 local_398 = (string*)apuStack_388;
                                 puVar14 = (pointer_____offset_0x10___)strlen((char*)psVar43);
                                 local_450 = puVar14;
                                 if (puVar14 < (pointer_____offset_0x10___)0x10) {
                                    if (puVar14 == (pointer_____offset_0x10___)0x1) {
                                       *local_398 = *psVar43;
                                    }
 else if (puVar14 != (pointer_____offset_0x10___)0x0) goto LAB_00111b4a;
                                 }
 else {
                                    local_398 = (string*)std::__cxx11::string::_M_create((ulong*)&local_398, ( ulong ) & local_450);
                                    apuStack_388[0] = local_450;
                                    LAB_00111b4a:memcpy(local_398, psVar43, (size_t)puVar14);
                                 }

                                 puVar14 = local_3b0;
                                 ppuVar17 = local_3b8;
                                 local_390 = local_450;
                                 local_398[(long)local_450] = (string)0x0;
                                 if (local_3b0 == (pointer_____offset_0x10___)0x0) {
                                    puVar14 = (pointer_____offset_0x10___)std::__cxx11::string::rfind((char)&local_398, 0x2e);
                                    if (( puVar14 == (pointer_____offset_0x10___)0xffffffffffffffff ) || ( local_390 <= puVar14 )) goto LAB_001113c0;
                                    if (puVar14 == (pointer_____offset_0x10___)0x0) {
                                       local_1c8 = (string*)apuStack_1b8;
                                       std::__cxx11::string::_M_construct<char_const*>(&local_1c8, local_398 + 1, local_390 + (long)local_398);
                                       puVar14 = local_1c0;
                                       psVar43 = local_1c8;
                                       if (local_1c8 == (string*)apuStack_1b8) {
                                          local_390 = local_1c0;
                                          if (local_1c0 != (pointer_____offset_0x10___)0x0) {
                                             if (local_1c0 == (pointer_____offset_0x10___)0x1) {
                                                LAB_0011247e:*local_398 = apuStack_1b8[0]._0_1_;
                                                local_390 = local_1c0;
                                             }
 else {
                                                uVar13 = (uint)local_1c0;
                                                uVar35 = (ulong)local_1c0 & 0xffffffff;
                                                auVar46._8_8_ = local_398;
                                                auVar46._0_8_ = uVar35;
                                                if (uVar13 < 8) {
                                                   if (( (ulong)local_1c0 & 4 ) != 0) goto LAB_00112638;
                                                   if (uVar13 != 0) {
                                                      *local_398 = *local_1c8;
                                                      joined_r0x00112406:local_390 = local_1c0;
                                                      if (( (ulong)puVar14 & 2 ) != 0) {
                                                         *(undefined2*)( local_398 + ( uVar35 - 2 ) ) = *(undefined2*)( psVar43 + ( uVar35 - 2 ) );
                                                      }

                                                   }

                                                }
 else {
                                                   *(pointer_____offset_0x10___*)local_398 = apuStack_1b8[0];
                                                   *(undefined8*)( local_398 + ( ( (ulong)puVar14 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)&stack0xfffffffffffffe40 + ( (ulong)puVar14 & 0xffffffff ) );
                                                   lVar15 = (long)local_398 - ( ( ulong )(local_398 + 8) & 0xfffffffffffffff8 );
                                                   uVar13 = (int)lVar15 + uVar13 & 0xfffffff8;
                                                   local_390 = local_1c0;
                                                   if (7 < uVar13) {
                                                      uVar35 = 0;
                                                      do {
                                                         uVar28 = (int)uVar35 + 8;
                                                         *(undefined8*)( ( ( ulong )(local_398 + 8) & 0xfffffffffffffff8 ) + uVar35 ) = *(undefined8*)( (string*)apuStack_1b8 + ( uVar35 - lVar15 ) );
                                                         uVar35 = (ulong)uVar28;
                                                      }
 while ( uVar28 < uVar13 );
                                                   }

                                                }

                                             }

                                          }

                                          goto LAB_00111701;
                                       }

                                       LAB_00111348:puVar14 = apuStack_388[0];
                                       if (local_398 != (string*)apuStack_388) {
                                          local_390 = local_1c0;
                                          apuStack_388[0] = apuStack_1b8[0];
                                          if (local_398 != (string*)0x0) {
                                             apuStack_1b8[0] = puVar14;
                                             psVar43 = local_1c8;
                                             local_1c8 = local_398;
                                             goto LAB_0011138b;
                                          }

                                       }

                                       apuStack_388[0] = apuStack_1b8[0];
                                       local_390 = local_1c0;
                                       psVar43 = local_1c8;
                                       local_1c8 = (string*)apuStack_1b8;
                                       goto LAB_0011138b;
                                    }

                                 }
 else {
                                    local_450 = (pointer_____offset_0x10___)CONCAT71(local_450._1_7_, 0x2e);
                                    local_1c0 = (pointer_____offset_0x10___)0x0;
                                    apuStack_1b8[0] = ( pointer_____offset_0x10___ )((ulong)apuStack_1b8[0] & 0xffffffffffffff00);
                                    local_1c8 = (string*)apuStack_1b8;
                                    std::__cxx11::string::reserve(( ulong ) & local_1c8);
                                    if (( ( pointer_____offset_0x10___ )(0x3fffffffffffffffU - (long)local_1c0) < puVar14 ) || ( std::__cxx11::string::_M_append((char*)&local_1c8, (ulong)ppuVar17),local_1c0 == (pointer_____offset_0x10___)0x3fffffffffffffff )) {
                                       /* WARNING: Subroutine does not return */
                                       std::__throw_length_error("basic_string::append");
                                    }

                                    std::__cxx11::string::_M_append((char*)&local_1c8, ( ulong ) & local_450);
                                    lVar15 = std::__cxx11::string::find((char*)&local_398, (ulong)local_1c8, 0);
                                    if (local_1c8 != (string*)apuStack_1b8) {
                                       operator_delete(local_1c8, (long)apuStack_1b8[0] + 1);
                                    }

                                    if (lVar15 != -1) {
                                       if (lVar15 == 0) {
                                          puVar14 = local_3b0 + 1;
                                          if (local_390 < puVar14) {
                                             auVar46 = std::__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", puVar14);
                                             LAB_00112638:*auVar46._8_8_ = apuStack_1b8[0]._0_4_;
                                             *(undefined4*)( (long)auVar46._8_8_ + auVar46._0_8_ + -4 ) = *(undefined4*)( (long)apuStack_1b8 + auVar46._0_8_ + 0xfffffffffffffffcU );
                                             local_390 = local_1c0;
                                          }
 else {
                                             local_1c8 = (string*)apuStack_1b8;
                                             std::__cxx11::string::_M_construct<char_const*>(&local_1c8, local_398 + (long)puVar14, local_390 + (long)local_398);
                                             puVar14 = local_1c0;
                                             psVar43 = local_1c8;
                                             if (local_1c8 != (string*)apuStack_1b8) goto LAB_00111348;
                                             local_390 = local_1c0;
                                             if (local_1c0 != (pointer_____offset_0x10___)0x0) {
                                                if (local_1c0 == (pointer_____offset_0x10___)0x1) goto LAB_0011247e;
                                                uVar13 = (uint)local_1c0;
                                                uVar35 = (ulong)local_1c0 & 0xffffffff;
                                                auVar46._8_8_ = local_398;
                                                auVar46._0_8_ = uVar35;
                                                if (uVar13 < 8) {
                                                   if (( (ulong)local_1c0 & 4 ) != 0) goto LAB_00112638;
                                                   if (uVar13 != 0) {
                                                      *local_398 = apuStack_1b8[0]._0_1_;
                                                      goto joined_r0x00112406;
                                                   }

                                                }
 else {
                                                   *(pointer_____offset_0x10___*)local_398 = apuStack_1b8[0];
                                                   *(undefined8*)( local_398 + ( ( (ulong)puVar14 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)&stack0xfffffffffffffe40 + ( (ulong)puVar14 & 0xffffffff ) );
                                                   lVar15 = (long)local_398 - ( ( ulong )(local_398 + 8) & 0xfffffffffffffff8 );
                                                   uVar13 = (int)lVar15 + uVar13 & 0xfffffff8;
                                                   local_390 = local_1c0;
                                                   if (7 < uVar13) {
                                                      uVar35 = 0;
                                                      do {
                                                         uVar28 = (int)uVar35 + 8;
                                                         *(undefined8*)( ( ( ulong )(local_398 + 8) & 0xfffffffffffffff8 ) + uVar35 ) = *(undefined8*)( (string*)apuStack_1b8 + ( uVar35 - lVar15 ) );
                                                         uVar35 = (ulong)uVar28;
                                                      }
 while ( uVar28 < uVar13 );
                                                   }

                                                }

                                             }

                                          }

                                          LAB_00111701:local_398[(long)local_390] = (string)0x0;
                                          psVar43 = local_398;
                                          LAB_0011138b:local_398 = psVar43;
                                          local_1c0 = (pointer_____offset_0x10___)0x0;
                                          *local_1c8 = (string)0x0;
                                          if (local_1c8 != (string*)apuStack_1b8) {
                                             operator_delete(local_1c8, (long)apuStack_1b8[0] + 1);
                                          }

                                       }

                                       LAB_001113c0:local_378 = &local_368;
                                       std::__cxx11::string::_M_construct<char*>(&local_378, local_398, local_398 + (long)local_390);
                                       local_1c8 = psVar32;
                                       local_1c0 = ( pointer_____offset_0x10___ )(apuStack_1b8 + 1);
                                       std::__cxx11::string::_M_construct<char*>(&stack0xfffffffffffffe40, local_378, local_378 + local_370);
                                       if (local_378 != &local_368) {
                                          operator_delete(local_378, CONCAT71(uStack_367, local_368) + 1);
                                       }

                                       if ((undefined8*)local_408._8_8_ == local_3f8) {
                                          std::vector<tinyexr::LayerChannel,std::allocator<tinyexr::LayerChannel>>::_M_realloc_insert<tinyexr::LayerChannel_const&>((vector<tinyexr::LayerChannel,std::allocator<tinyexr::LayerChannel>>*)local_408, local_408._8_8_, &local_1c8);
                                       }
 else {
                                          *(string**)local_408._8_8_ = local_1c8;
                                          puVar42 = (undefined8*)( local_408._8_8_ + 0x28 );
                                          *(undefined8**)( local_408._8_8_ + 8 ) = (undefined8*)( local_408._8_8_ + 0x18 );
                                          std::__cxx11::string::_M_construct<char*>((undefined8*)( local_408._8_8_ + 8 ), local_1c0, apuStack_1b8[0] + (long)local_1c0);
                                          local_408._8_8_ = puVar42;
                                       }

                                       if (local_1c0 != ( pointer_____offset_0x10___ )(apuStack_1b8 + 1)) {
                                          operator_delete(local_1c0, ( ulong )(apuStack_1b8[1] + 1));
                                       }

                                    }

                                 }

                                 if (local_398 != (string*)apuStack_388) {
                                    operator_delete(local_398, (long)apuStack_388[0] + 1);
                                 }

                                 psVar32 = psVar32 + 1;
                                 if (local_2e0 <= (int)psVar32) goto LAB_00111b92;
                                 psVar43 = local_2f0 + lVar24;
                                 lVar24 = lVar24 + 0x110;
                              }
 while ( true );
                           }

                           local_398 = (string*)apuStack_388;
                           std::__throw_logic_error("basic_string: construction from null is not valid");
                           goto LAB_00112677;
                        }

                        LAB_00111b92:local_4d0 = local_3a8;
                        if (local_3b8 != local_4d0) {
                           operator_delete(local_3b8, (long)local_3a8[0] + 1);
                        }

                        uVar10 = local_408._8_8_;
                        puVar33 = (uint*)local_408._0_8_;
                        local_498 = (uint*)local_408._0_8_;
                        uVar35 = local_408._8_8_ - local_408._0_8_;
                        paVar29 = (allocator*)( ( (long)uVar35 >> 3 ) * -0x3333333333333333 );
                        local_470 = (long)local_3f8 - local_408._0_8_;
                        if (local_408._8_8_ == local_408._0_8_) {
                           if (param_5 == (char*)0x0) goto LAB_00111f66;
                           std::__cxx11::string::string<std::allocator<char>>((string*)&local_1c8, "Layer Not Found", paVar29);
                           if (param_6 != (char**)0x0) {
                              pcVar18 = strdup((char*)local_1c8);
                              *param_6 = pcVar18;
                           }

                           if (local_1c8 != (string*)apuStack_1b8) {
                              operator_delete(local_1c8, (long)apuStack_1b8[0] + 1);
                           }

                           goto LAB_00111f9f;
                        }

                        uVar11 = local_3c8._0_4_;
                        uVar12 = local_3c8._4_4_;
                        if (uVar35 < 0x79) {
                           if (paVar29 != (allocator*)0x0) goto LAB_00111d38;
                           paVar30 = (allocator*)0x0;
                           if (uVar35 != 0x28) {
                              LAB_00111c20:std::__cxx11::string::string<std::allocator<char>>((string*)&local_1c8, "R channel not found", paVar30);
                              goto joined_r0x00112473;
                           }

                           LAB_00112189:uVar34 = (ulong)(int)local_3c8._0_4_;
                           uVar9 = *(undefined8*)local_408._0_8_;
                           uVar35 = (ulong)(int)local_3c8._4_4_;
                           lVar24 = uVar35 * uVar34;
                           puVar22 = (undefined4*)malloc(lVar24 * 0x10);
                           *param_1 = puVar22;
                           if (local_320 == 0) {
                              if (lVar24 != 0) {
                                 puVar40 = *(undefined4**)( local_3d0 + (long)(int)uVar9 * 8 );
                                 puVar23 = puVar40 + lVar24;
                                 do {
                                    uVar2 = *puVar40;
                                    puVar40 = puVar40 + 1;
                                    *puVar22 = uVar2;
                                    for (int i = 0; i < 3; i++) {
                                       puVar22[( i + 1 )] = uVar2;
                                    }

                                    puVar22 = puVar22 + 4;
                                 }
 while ( puVar40 != puVar23 );
                              }

                           }
 else {
                              lVar24 = (long)local_31c;
                              lVar15 = (long)local_318;
                              if (0 < (int)local_3c8._12_4_) {
                                 piVar38 = (int*)( local_3e8._0_8_ + (long)(int)local_3c8._12_4_ * 8 * 4 );
                                 piVar39 = (int*)local_3e8._0_8_;
                                 if (lVar15 == 0) {
                                    if (( (long)piVar38 - local_3e8._0_8_ & 0x20U ) == 0) goto LAB_0011260e;
                                    for (piVar39 = (int*)( local_3e8._0_8_ + 0x20 ); piVar39 != piVar38; piVar39 = piVar39 + 0x10) {
                                       LAB_0011260e:;
                                    }

                                 }
 else {
                                    do {
                                       lVar41 = 0;
                                       if (lVar24 == 0) {
                                          do {
                                             if (lVar15 == lVar41 + 1) break;
                                             lVar41 = lVar41 + 2;
                                          }
 while ( lVar15 != lVar41 );
                                       }
 else {
                                          iVar27 = piVar39[1];
                                          iVar5 = *piVar39;
                                          lVar44 = 0;
                                          do {
                                             uVar21 = iVar27 * lVar15 + lVar41;
                                             uVar31 = iVar5 * lVar24;
                                             lVar26 = lVar44 * 4;
                                             puVar23 = puVar22 + ( uVar21 * uVar34 + uVar31 ) * 4;
                                             uVar1 = uVar31 + lVar24;
                                             do {
                                                if (( uVar31 < uVar34 ) && ( uVar21 < uVar35 )) {
                                                   puVar40 = (undefined4*)( *(long*)( *(long*)( piVar39 + 6 ) + (long)(int)uVar9 * 8 ) + lVar26 );
                                                   uVar2 = *puVar40;
                                                   *puVar23 = uVar2;
                                                   puVar23[1] = uVar2;
                                                   uVar2 = *puVar40;
                                                   puVar23[2] = uVar2;
                                                   puVar23[3] = uVar2;
                                                }

                                                uVar31 = uVar31 + 1;
                                                lVar26 = lVar26 + 4;
                                                puVar23 = puVar23 + 4;
                                             }
 while ( uVar31 != uVar1 );
                                             lVar44 = lVar44 + lVar24;
                                             lVar41 = lVar41 + 1;
                                          }
 while ( lVar41 != lVar15 );
                                       }

                                       piVar39 = piVar39 + 8;
                                    }
 while ( piVar39 != piVar38 );
                                 }

                              }

                           }

                           LAB_00111e7d:*param_2 = uVar11;
                           *(undefined4*)param_3 = uVar12;
                           FreeEXRHeader(local_358);
                           FreeEXRImage(local_3e8);
                        }
 else {
                           paVar29 = (allocator*)0x4;
                           LAB_00111d38:uVar13 = 0xffffffff;
                           uVar28 = 0xffffffff;
                           lVar24 = -1;
                           paVar30 = (allocator*)0xffffffff;
                           puVar19 = (uint*)local_408._0_8_;
                           do {
                              if (*(long*)( puVar19 + 4 ) == 1) {
                                 cVar3 = **(char**)( puVar19 + 2 );
                                 if (cVar3 == 'R') {
                                    lVar24 = (long)(int)*puVar19;
                                 }
 else if (cVar3 == 'G') {
                                    paVar30 = (allocator*)( ulong ) * puVar19;
                                 }
 else if (cVar3 == 'B') {
                                    uVar28 = *puVar19;
                                 }
 else if (cVar3 == 'A') {
                                    uVar13 = *puVar19;
                                 }

                              }

                              puVar19 = puVar19 + 10;
                           }
 while ( puVar19 != (uint*)( local_408._0_8_ + (long)paVar29 * 10 * 4 ) );
                           if (uVar35 == 0x28) goto LAB_00112189;
                           if ((int)lVar24 == -1) goto LAB_00111c20;
                           iVar27 = (int)paVar30;
                           if (iVar27 != -1) {
                              if (uVar28 == 0xffffffff) {
                                 std::__cxx11::string::string<std::allocator<char>>((string*)&local_1c8, "B channel not found", paVar30);
                                 goto joined_r0x00112473;
                              }

                              uVar35 = (ulong)(int)local_3c8._4_4_;
                              uVar34 = (ulong)(int)local_3c8._0_4_;
                              lVar15 = uVar35 * uVar34;
                              pvVar20 = malloc(lVar15 * 0x10);
                              *param_1 = pvVar20;
                              uVar2 = _LC120;
                              if (local_320 == 0) {
                                 if (lVar15 != 0) {
                                    lVar24 = *(long*)( local_3d0 + lVar24 * 8 );
                                    lVar41 = *(long*)( local_3d0 + (long)iVar27 * 8 );
                                    lVar44 = *(long*)( local_3d0 + (long)(int)uVar28 * 8 );
                                    lVar26 = 0;
                                    do {
                                       *(undefined4*)( (long)pvVar20 + lVar26 * 4 ) = *(undefined4*)( lVar24 + lVar26 );
                                       *(undefined4*)( (long)pvVar20 + lVar26 * 4 + 4 ) = *(undefined4*)( lVar41 + lVar26 );
                                       *(undefined4*)( (long)pvVar20 + lVar26 * 4 + 8 ) = *(undefined4*)( lVar44 + lVar26 );
                                       uVar45 = uVar2;
                                       if (uVar13 != 0xffffffff) {
                                          uVar45 = *(undefined4*)( *(long*)( local_3d0 + (long)(int)uVar13 * 8 ) + lVar26 );
                                       }

                                       *(undefined4*)( (long)pvVar20 + lVar26 * 4 + 0xc ) = uVar45;
                                       lVar26 = lVar26 + 4;
                                    }
 while ( lVar26 != lVar15 * 4 );
                                 }

                              }
 else {
                                 lVar15 = (long)local_318;
                                 lVar41 = (long)local_31c;
                                 if (0 < (int)local_3c8._12_4_) {
                                    piVar39 = (int*)( local_3e8._0_8_ + (long)(int)local_3c8._12_4_ * 8 * 4 );
                                    piVar38 = (int*)local_3e8._0_8_;
                                    if (lVar15 == 0) {
                                       if (( (int)piVar39 - local_3e8._0_4_ & 0x20U ) == 0) goto LAB_001124fb;
                                       for (piVar38 = (int*)( local_3e8._0_8_ + 0x20 ); piVar38 != piVar39; piVar38 = piVar38 + 0x10) {
                                          LAB_001124fb:;
                                       }

                                    }
 else {
                                       do {
                                          lVar44 = 0;
                                          if (lVar41 == 0) {
                                             do {
                                                lVar44 = lVar44 + 1;
                                             }
 while ( lVar15 != lVar44 );
                                          }
 else {
                                             iVar5 = *piVar38;
                                             lVar26 = 0;
                                             iVar4 = piVar38[1];
                                             do {
                                                uVar21 = iVar4 * lVar15 + lVar44;
                                                uVar31 = iVar5 * lVar41;
                                                uVar1 = uVar31 + lVar41;
                                                puVar22 = (undefined4*)( ( uVar21 * uVar34 + uVar31 ) * 0x10 + (long)pvVar20 );
                                                lVar25 = lVar26 * 4;
                                                do {
                                                   if (( uVar31 < uVar34 ) && ( uVar21 < uVar35 )) {
                                                      lVar6 = *(long*)( piVar38 + 6 );
                                                      lVar7 = *(long*)( lVar6 + (long)iVar27 * 8 );
                                                      *puVar22 = *(undefined4*)( *(long*)( lVar6 + (long)(int)lVar24 * 8 ) + lVar25 );
                                                      lVar8 = *(long*)( lVar6 + (long)(int)uVar28 * 8 );
                                                      puVar22[1] = *(undefined4*)( lVar7 + lVar25 );
                                                      puVar22[2] = *(undefined4*)( lVar8 + lVar25 );
                                                      if (uVar13 == 0xffffffff) {
                                                         puVar22[3] = uVar2;
                                                      }
 else {
                                                         puVar22[3] = *(undefined4*)( *(long*)( lVar6 + (long)(int)uVar13 * 8 ) + lVar25 );
                                                      }

                                                   }

                                                   uVar31 = uVar31 + 1;
                                                   puVar22 = puVar22 + 4;
                                                   lVar25 = lVar25 + 4;
                                                }
 while ( uVar31 != uVar1 );
                                                lVar44 = lVar44 + 1;
                                                lVar26 = lVar26 + lVar41;
                                             }
 while ( lVar15 != lVar44 );
                                          }

                                          piVar38 = piVar38 + 8;
                                       }
 while ( piVar38 != piVar39 );
                                    }

                                 }

                              }

                              goto LAB_00111e7d;
                           }

                           std::__cxx11::string::string<std::allocator<char>>((string*)&local_1c8, "G channel not found", paVar30);
                           joined_r0x00112473:if (param_6 != (char**)0x0) {
                              pcVar18 = strdup((char*)local_1c8);
                              *param_6 = pcVar18;
                           }

                           if (local_1c8 != (string*)apuStack_1b8) {
                              operator_delete(local_1c8, (long)apuStack_1b8[0] + 1);
                           }

                           FreeEXRHeader(local_358);
                           FreeEXRImage(local_3e8);
                           local_4a4 = -4;
                        }

                        do {
                           if (*(uint**)( puVar33 + 2 ) != puVar33 + 6) {
                              operator_delete(*(uint**)( puVar33 + 2 ), *(long*)( puVar33 + 6 ) + 1);
                           }

                           puVar33 = puVar33 + 10;
                        }
 while ( (uint*)uVar10 != puVar33 );
                     }

                     if (local_498 != (uint*)0x0) {
                        operator_delete(local_498, local_470);
                     }

                     uVar10 = local_428._0_8_;
                     uVar9 = local_428._8_8_;
                     for (puVar42 = (undefined8*)local_428._0_8_; (undefined8*)uVar9 != puVar42; puVar42 = puVar42 + 4) {
                        if ((undefined8*)*puVar42 != puVar42 + 2) {
                           operator_delete((undefined8*)*puVar42, puVar42[2] + 1);
                        }

                     }

                     if ((undefined8*)uVar10 != (undefined8*)0x0) {
                        operator_delete((void*)uVar10, local_418 - uVar10);
                     }

                     goto LAB_00111724;
                  }

               }

               FreeEXRHeader(local_358);
            }
 else {
               std::__cxx11::string::string<std::allocator<char>>((string*)&local_1c8, "Loading multipart or DeepImage is not supported  in LoadEXR() API", extraout_RDX);
               if (param_6 != (char**)0x0) {
                  pcVar18 = strdup((char*)local_1c8);
                  *param_6 = pcVar18;
               }

               std::__cxx11::string::_M_dispose();
               local_4a4 = -4;
            }

         }
 else {
            std::ios_base::ios_base((ios_base*)local_148);
            psVar43 = _init;
            local_60 = (undefined1[16])0x0;
            local_68 = 0;
            local_50 = (undefined1[16])0x0;
            local_148[0] = (code*)&std::__cxx11::stringstream::vtable;
            local_70 = 0;
            local_1c8 = _init;
            *(undefined8*)( (long)&local_1c8 + (long)*(pointer_____offset_0x10___*)( _init + -0x18 ) ) = _vtable;
            local_1c0 = (pointer_____offset_0x10___)0x0;
            std::ios::init((streambuf*)( (long)&local_1c8 + (long)*(pointer_____offset_0x10___*)( _init + -0x18 ) ));
            apuStack_1b8[0] = _locale;
            psVar37 = (streambuf*)( (ostream*)apuStack_1b8 + *(long*)( _locale + -0x18 ) );
            *(undefined8*)psVar37 = _vtable;
            std::ios::init(psVar37);
            *(undefined8*)( (long)&local_1c8 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
            apuStack_1b8[0] = PTR_vtable_0011cce8;
            apuStack_1b8[1] = PTR_vtable_0011ccf0;
            local_1a8 = (undefined1[16])0x0;
            local_198 = (undefined1[16])0x0;
            local_188 = (undefined1[16])0x0;
            local_1c8 = (string*)std::__ostream_insert<char,std::char_traits<char>>;
            local_148[0] = open64;
            std::locale::locale(local_178);
            apuStack_1b8[1] = std::__cxx11::string::_M_replace;
            local_170 = 0x18;
            local_160 = 0;
            local_158 = 0;
            local_168 = &local_158;
            std::ios::init((streambuf*)local_148);
            std::__ostream_insert<char,std::char_traits<char>>((ostream*)apuStack_1b8, "Failed to open EXR file or read version info from EXR file. code(", 0x41);
            poVar16 = (ostream*)std::ostream::operator <<((ostream*)apuStack_1b8, local_4a4);
            std::__ostream_insert<char,std::char_traits<char>>(poVar16, ")", 1);
            local_370 = 0;
            local_368 = '\0';
            local_378 = &local_368;
            if (local_188._0_8_ == 0) {
               std::__cxx11::string::_M_assign((string*)&local_378);
            }
 else {
               std::__cxx11::string::_M_replace(( ulong ) & local_378, 0, (char*)0x0, local_198._8_8_);
            }

            if (param_6 != (char**)0x0) {
               pcVar18 = strdup(local_378);
               *param_6 = pcVar18;
            }

            if (local_378 != &local_368) {
               operator_delete(local_378, CONCAT71(uStack_367, local_368) + 1);
            }

            local_1c8 = (string*)std::__ostream_insert<char,std::char_traits<char>>;
            local_148[0] = open64;
            apuStack_1b8[0] = PTR_vtable_0011cce8;
            apuStack_1b8[1] = PTR_vtable_0011ccf8;
            if (local_168 != &local_158) {
               operator_delete(local_168, CONCAT71(uStack_157, local_158) + 1);
            }

            apuStack_1b8[1] = std::ios_base::~ios_base;
            std::locale::~locale(local_178);
            *(undefined8*)( (long)&local_1c8 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
            apuStack_1b8[0] = _locale;
            *(undefined8*)( (long)apuStack_1b8 + *(long*)( _locale + -0x18 ) ) = _vtable;
            local_1c8 = psVar43;
            *(undefined8*)( (long)&local_1c8 + (long)*(pointer_____offset_0x10___*)( psVar43 + -0x18 ) ) = _vtable;
            local_1c0 = (pointer_____offset_0x10___)0x0;
            local_148[0] = (code*)&std::__cxx11::stringstream::vtable;
            std::ios_base::~ios_base((ios_base*)local_148);
         }

      }

      LAB_00111724:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return local_4a4;
      }

      LAB_00112677:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   void LoadEXR(void) {
      LoadEXRWithLayer();
      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* WARNING: Restarted to delay deadcode elimination for space: stack */
   /* tinyexr::SaveEXRNPartImageToMemory(TEXRImage const*, TEXRHeader const**, unsigned int, unsigned
   char**, char const**) */
   allocator *tinyexr::SaveEXRNPartImageToMemory(TEXRImage *param_1, TEXRHeader **param_2, uint param_3, uchar **param_4, char **param_5) {
      ulong *puVar1;
      undefined2 uVar2;
      undefined1 auVar3[16];
      undefined1 auVar4[16];
      undefined1 auVar5[16];
      string *psVar6;
      char cVar7;
      byte bVar8;
      undefined1 uVar9;
      int iVar10;
      uint uVar11;
      int iVar12;
      long lVar13;
      char *pcVar14;
      uchar *puVar15;
      vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> *pvVar16;
      vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> *pvVar17;
      TEXRHeader *pTVar18;
      ulong uVar19;
      void *pvVar20;
      size_t sVar21;
      ulong uVar22;
      undefined1 *__dest;
      vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> *pvVar23;
      vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> *pvVar24;
      allocator *paVar25;
      undefined8 *puVar26;
      undefined8 *puVar27;
      long *plVar28;
      uchar *puVar29;
      allocator *paVar30;
      long *plVar31;
      allocator *paVar32;
      undefined1 uVar33;
      uint uVar34;
      int iVar35;
      ulong uVar36;
      allocator *extraout_RDX;
      allocator *extraout_RDX_00;
      string *psVar37;
      allocator *extraout_RDX_01;
      allocator *extraout_RDX_02;
      allocator *paVar38;
      allocator *extraout_RDX_03;
      allocator *extraout_RDX_04;
      allocator *extraout_RDX_05;
      allocator *extraout_RDX_06;
      allocator *extraout_RDX_07;
      allocator *extraout_RDX_08;
      undefined8 *puVar39;
      allocator *extraout_RDX_09;
      allocator *extraout_RDX_10;
      TEXRImage *pTVar40;
      ulong uVar41;
      ulong uVar42;
      undefined8 *puVar43;
      undefined1 auVar44[8];
      allocator *paVar45;
      OffsetData *pOVar46;
      _Rb_tree_node *p_Var47;
      long *plVar48;
      uint *puVar49;
      undefined1 *puVar50;
      undefined1 auVar51[8];
      allocator *paVar52;
      undefined4 uVar53;
      int iVar54;
      long lVar55;
      undefined4 *puVar56;
      _Rb_tree_node *p_Var57;
      OffsetData *pOVar58;
      long lVar59;
      vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> *pvVar60;
      long *plVar61;
      vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> *pvVar62;
      ulong *puVar63;
      long in_FS_OFFSET;
      bool bVar64;
      undefined8 uVar65;
      undefined8 uVar66;
      undefined1 auVar67[16];
      TEXRHeader **local_358;
      vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> *local_340;
      TEXRImage *local_320;
      long local_308;
      string *local_2d8;
      TEXRImage *local_2c8;
      OffsetData *local_2b8;
      ulong local_2b0;
      long local_2a0;
      OffsetData *local_290;
      long local_288;
      allocator *local_270;
      vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> *local_238;
      TEXRImage *local_230;
      vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> *local_200;
      OffsetData *local_1f8;
      TEXRImage *local_1f0;
      vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> *local_1d0;
      char local_1b2;
      char local_1b1;
      int local_1b0;
      undefined4 local_1ac;
      int local_1a8;
      undefined4 local_1a4;
      int local_1a0;
      int local_19c;
      int local_198;
      undefined4 local_194;
      TEXRImage *local_190;
      TEXRHeader *local_188;
      string *local_180;
      undefined8 local_178;
      long local_170;
      TEXRImage *local_168;
      TEXRHeader *local_160;
      long local_158;
      undefined8 local_150;
      string *local_148;
      long local_140;
      undefined1 local_138[16];
      undefined1 *local_128;
      undefined1 local_118[16];
      undefined8 *local_108;
      undefined1 local_f8[8];
      allocator *paStack_f0;
      long *local_e8;
      undefined1 local_d8[8];
      _Rb_tree_node *p_Stack_d0;
      _Rb_tree_node *local_c8;
      _Rb_tree_node **local_c0;
      _Rb_tree_node **local_b8;
      long local_b0;
      string *local_a8;
      undefined8 local_a0;
      ulong auStack_98[2];
      string *local_88;
      ulong local_80;
      ulong auStack_78[2];
      undefined4 local_68;
      undefined4 uStack_64;
      long lStack_60;
      undefined1 local_58;
      undefined2 local_57;
      undefined1 local_55;
      undefined4 local_44;
      long local_40[2];
      local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
      lVar13 = 0;
      if (( ( param_1 == (TEXRImage*)0x0 ) || ( param_2 == (TEXRHeader**)0x0 ) ) || ( param_3 == 0 || param_4 == (uchar**)0x0 )) {
         LAB_00112714:local_88 = (string*)auStack_78;
         local_d8 = (undefined1[8])0x2e;
         local_88 = (string*)std::__cxx11::string::_M_create((ulong*)&local_88, (ulong)local_d8);
         uVar22 = _UNK_0011ce58;
         auStack_78[0] = (ulong)local_d8;
         *(ulong*)local_88 = __LC117;
         *(ulong*)( local_88 + 8 ) = uVar22;
         uVar22 = _UNK_0011ce98;
         *(ulong*)( local_88 + 0x10 ) = __LC162;
         *(ulong*)( local_88 + 0x18 ) = uVar22;
         uVar65 = __LC163;
         uVar66 = _UNK_0011cea8;
         LAB_00112786:local_2d8 = (string*)auStack_78;
         *(undefined8*)( local_88 + 0x1e ) = uVar65;
         *(undefined8*)( local_88 + 0x26 ) = uVar66;
         local_80 = (ulong)local_d8;
         local_88[(long)local_d8] = (string)0x0;
         if (param_5 != (char**)0x0) {
            pcVar14 = strdup((char*)local_88);
            *param_5 = pcVar14;
         }

         if (local_88 != local_2d8) {
            operator_delete(local_88, auStack_78[0] + 1);
         }

         local_270 = (allocator*)0x0;
         goto LAB_001127e9;
      }

      do {
         if (*(int*)( param_2[lVar13] + 0x7c ) < 0) goto LAB_00112714;
         if (*(int*)( param_2[lVar13] + 0x7c ) == 0x80) {
            local_88 = (string*)auStack_78;
            local_d8 = (undefined1[8])0x2e;
            local_88 = (string*)std::__cxx11::string::_M_create((ulong*)&local_88, (ulong)local_d8);
            uVar22 = _UNK_0011ceb8;
            auStack_78[0] = (ulong)local_d8;
            *(ulong*)local_88 = __LC164;
            *(ulong*)( local_88 + 8 ) = uVar22;
            uVar22 = _UNK_0011cec8;
            *(ulong*)( local_88 + 0x10 ) = __LC165;
            *(ulong*)( local_88 + 0x18 ) = uVar22;
            uVar65 = __LC166;
            uVar66 = _UNK_0011ced8;
            goto LAB_00112786;
         }

         lVar13 = lVar13 + 1;
      }
 while ( (uint)lVar13 < param_3 );
      local_128 = (undefined1*)0x0;
      local_44 = 0x1312f76;
      local_138 = (undefined1[16])0x0;
      std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_range_insert<char_const*>((vector*)local_138, 0, &local_44, local_40);
      puVar50 = local_128;
      uVar65 = local_138._0_8_;
      iVar54 = *(int*)( *param_2 + 0x4c );
      uVar33 = (undefined1)DAT_0011baa0;
      uVar2 = ( undefined2 )((uint)DAT_0011baa0 >> 0x10);
      if (param_3 == 1) {
         if (*(long*)param_1 == 0) {
            uVar9 = 4;
            if (iVar54 == 0) {
               uVar9 = (char)( (uint)DAT_0011baa0 >> 8 );
            }

            uVar53 = CONCAT22(uVar2, CONCAT11(uVar9, uVar33));
         }
 else {
            uVar53 = CONCAT22(uVar2, CONCAT11(( -(iVar54 == 0) & 0xfcU ) + 6, uVar33));
         }

      }
 else {
         uVar53 = CONCAT22(uVar2, CONCAT11(( -(iVar54 == 0) & 0xfcU ) + 0x14, uVar33));
      }

      if (( ulong )((long)local_128 - local_138._8_8_) < 4) {
         uVar22 = local_138._8_8_ - local_138._0_8_;
         if (0x7fffffffffffffff - uVar22 < 4) {
            /* WARNING: Subroutine does not return */
            std::__throw_length_error("vector::_M_range_insert");
         }

         if (uVar22 < 4) {
            uVar42 = uVar22 + 4;
            __dest = (undefined1*)operator_new(uVar42);
            if (1 < (long)uVar22) goto LAB_0011365a;
            if (uVar22 != 1) {
               uVar42 = 4;
               goto LAB_00114d5c;
            }

            uVar33 = *(undefined1*)uVar65;
            uVar42 = 5;
            *(undefined4*)( __dest + 1 ) = uVar53;
            puVar56 = (undefined4*)( __dest + 5 );
            *__dest = uVar33;
            LAB_00113685:operator_delete((void*)uVar65, (long)puVar50 - uVar65);
         }
 else {
            uVar36 = uVar22 * 2;
            uVar19 = 0x7fffffffffffffff;
            if (uVar36 < 0x8000000000000000) {
               uVar19 = uVar36;
            }

            uVar42 = 0x7fffffffffffffff;
            if (uVar22 <= uVar36) {
               uVar42 = uVar19;
            }

            __dest = (undefined1*)operator_new(uVar42);
            if (1 < (long)uVar22) {
               LAB_0011365a:memmove(__dest, (void*)uVar65, uVar22);
               *(undefined4*)( __dest + uVar22 ) = uVar53;
               puVar56 = (undefined4*)( (long)( __dest + uVar22 ) + 4 );
               goto LAB_00113685;
            }

            LAB_00114d5c:*(undefined4*)( __dest + uVar22 ) = uVar53;
            puVar56 = (undefined4*)( (long)( __dest + uVar22 ) + 4 );
            if ((undefined1*)uVar65 != (undefined1*)0x0) goto LAB_00113685;
         }

         local_128 = __dest + uVar42;
         local_138._8_8_ = puVar56;
         local_138._0_8_ = __dest;
      }
 else {
         *(undefined4*)local_138._8_8_ = uVar53;
         local_138._8_8_ = (undefined4*)( local_138._8_8_ + 4 );
      }

      uVar42 = (ulong)param_3;
      uVar22 = uVar42 * 4;
      puVar15 = (uchar*)operator_new(uVar22);
      for (int i = 0; i < 4; i++) {
         puVar15[i] = '\0';
      }

      if (uVar42 == 1) {
         local_290 = (OffsetData*)operator_new(0x20);
         local_1f8 = local_290 + 0x20;
         *(undefined8*)( local_290 + 0x10 ) = 0;
         *(undefined8*)( local_290 + 0x18 ) = 0;
         *(undefined1(*) [16])local_290 = (undefined1[16])0x0;
      }
 else {
         if (puVar15 + 4 != puVar15 + uVar22) {
            memset(puVar15 + 4, 0, uVar22 - 4);
         }

         local_290 = (OffsetData*)operator_new(uVar42 * 0x20);
         local_1f8 = local_290 + uVar42 * 0x20;
         pOVar46 = local_290;
         uVar36 = uVar42;
         do {
            *(undefined8*)( pOVar46 + 0x10 ) = 0;
            *(undefined1(*) [16])pOVar46 = (undefined1[16])0x0;
            *(undefined8*)( pOVar46 + 0x18 ) = 0;
            uVar36 = uVar36 - 1;
            pOVar46 = pOVar46 + 0x20;
         }
 while ( uVar36 != 0 );
      }

      lVar13 = 0;
      iVar54 = 0;
      pTVar40 = param_1;
      pOVar46 = local_290;
      do {
         pOVar58 = local_290;
         if (*(long*)pTVar40 != 0) {
            local_e8 = (long*)0x0;
            local_c8 = (_Rb_tree_node*)0x0;
            _local_f8 = (undefined1[16])0x0;
            _local_d8 = (undefined1[16])0x0;
            cVar7 = PrecalculateTileInfo((vector*)local_f8, (vector*)local_d8, param_2[lVar13]);
            if (cVar7 == '\0') {
               std::__cxx11::string::string<std::allocator<char>>((string*)&local_88, "Failed to precalculate Tile info", extraout_RDX);
            }
 else {
               iVar35 = InitTileOffsets(pOVar46, param_2[lVar13], (vector*)local_f8, (vector*)local_d8);
               if (0 < iVar35) {
                  *(int*)( puVar15 + lVar13 * 4 ) = iVar35;
                  iVar54 = iVar54 + iVar35;
                  if (local_d8 != (undefined1[8])0x0) {
                     operator_delete((void*)local_d8, (long)local_c8 - (long)local_d8);
                  }

                  if (local_f8 != (undefined1[8])0x0) {
                     operator_delete((void*)local_f8, (long)local_e8 - (long)local_f8);
                  }

                  goto LAB_00112ac1;
               }

               std::__cxx11::string::string<std::allocator<char>>((string*)&local_88, "Failed to compute Tile offsets", extraout_RDX_00);
            }

            if (param_5 != (char**)0x0) {
               pcVar14 = strdup((char*)local_88);
               *param_5 = pcVar14;
            }

            if (local_88 != (string*)auStack_78) {
               operator_delete(local_88, auStack_78[0] + 1);
            }

            if (local_d8 != (undefined1[8])0x0) {
               operator_delete((void*)local_d8, (long)local_c8 - (long)local_d8);
            }

            if (local_f8 != (undefined1[8])0x0) {
               operator_delete((void*)local_f8, (long)local_e8 - (long)local_f8);
            }

            local_270 = (allocator*)0xfffffffffffffffc;
            local_358 = (TEXRHeader**)local_138._0_8_;
            goto LAB_001137d8;
         }

         iVar35 = *(int*)( param_2[lVar13] + 0x7c );
         iVar10 = 0x10;
         if (( iVar35 != 3 ) && ( iVar10 = iVar35 != 4 )) {
            iVar10 = 0x10;
            if (iVar35 != 0x80) {
               iVar10 = 1;
            }

         }

         iVar10 = ( *(int*)( pTVar40 + 0x24 ) + iVar10 + -1 ) / iVar10;
         *(int*)( puVar15 + lVar13 * 4 ) = iVar10;
         InitSingleResolutionOffsets(pOVar46, (long)iVar10);
         iVar54 = iVar54 + *(int*)( puVar15 + lVar13 * 4 );
         LAB_00112ac1:lVar13 = lVar13 + 1;
         pTVar40 = pTVar40 + 0x30;
         pOVar46 = pOVar46 + 0x20;
      }
 while ( (uint)lVar13 < param_3 );
      uVar36 = uVar42 * 0x18;
      pvVar16 = (vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>>*)operator_new(uVar36);
      pvVar60 = pvVar16;
      do {
         *(undefined8*)( pvVar60 + 0x10 ) = 0;
         pvVar17 = pvVar60 + 0x18;
         *(undefined1(*) [16])pvVar60 = (undefined1[16])0x0;
         pvVar60 = pvVar17;
      }
 while ( pvVar17 != pvVar16 + uVar36 );
      local_c0 = &p_Stack_d0;
      p_Stack_d0._0_4_ = 0;
      local_c8 = (_Rb_tree_node*)0x0;
      local_b0 = 0;
      local_308 = 1;
      pvVar60 = pvVar16;
      local_358 = param_2;
      local_320 = param_1;
      local_2d8 = (string*)puVar15;
      local_b8 = local_c0;
      do {
         local_e8 = (long*)0x0;
         _local_f8 = (undefined1[16])0x0;
         pTVar18 = *local_358;
         pvVar17 = pvVar16;
         if (0 < *(int*)( pTVar18 + 0x78 )) {
            lVar55 = 0;
            lVar13 = 0;
            do {
               auStack_78[0] = auStack_78[0] & 0xffffffffffffff00;
               local_58 = 0;
               pcVar14 = (char*)( lVar55 + *(long*)( pTVar18 + 0x68 ) );
               local_80 = 0;
               local_68 = *(undefined4*)( *(long*)( pTVar18 + 0x70 ) + lVar13 * 4 );
               uStack_64 = *(undefined4*)( *(long*)( pTVar18 + 0x80 ) + lVar13 * 4 );
               lStack_60 = _LC95;
               local_a8 = (string*)auStack_98;
               local_88 = (string*)auStack_78;
               if (pcVar14 == (char*)0x0) {
                  std::__throw_logic_error("basic_string: construction from null is not valid");
                  goto LAB_00114e2c;
               }

               uVar19 = strlen(pcVar14);
               local_118._0_8_ = uVar19;
               if (uVar19 < 0x10) {
                  psVar37 = (string*)auStack_98;
                  if (uVar19 == 1) {
                     auStack_98[0] = CONCAT71(auStack_98[0]._1_7_, *pcVar14);
                  }
 else if (uVar19 != 0) goto LAB_00112f19;
               }
 else {
                  local_a8 = (string*)std::__cxx11::string::_M_create((ulong*)&local_a8, (ulong)local_118);
                  auStack_98[0] = local_118._0_8_;
                  psVar37 = local_a8;
                  LAB_00112f19:memcpy(psVar37, pcVar14, uVar19);
                  uVar19 = local_118._0_8_;
                  psVar37 = local_a8;
               }

               uVar41 = auStack_78[0];
               psVar6 = local_88;
               psVar37[uVar19] = (string)0x0;
               if (local_a8 == (string*)auStack_98) {
                  if (uVar19 != 0) {
                     if (uVar19 == 1) {
                        *local_88 = auStack_98[0]._0_1_;
                     }
 else {
                        uVar11 = (uint)uVar19;
                        uVar41 = uVar19 & 0xffffffff;
                        if (uVar11 < 8) {
                           if (( uVar19 & 4 ) == 0) {
                              if (( uVar11 != 0 ) && ( *local_88 = auStack_98[0]._0_1_(uVar19 & 2) != 0 )) {
                                 *(undefined2*)( local_88 + ( uVar41 - 2 ) ) = *(undefined2*)( (long)auStack_98 + ( uVar41 - 2 ) );
                              }

                           }
 else {
                              *(undefined4*)local_88 = (undefined4)auStack_98[0];
                              *(undefined4*)( local_88 + ( uVar41 - 4 ) ) = *(undefined4*)( (long)auStack_98 + ( uVar41 - 4 ) );
                           }

                        }
 else {
                           *(ulong*)local_88 = auStack_98[0];
                           *(undefined8*)( local_88 + ( ( uVar19 & 0xffffffff ) - 8 ) ) = *(undefined8*)( (long)auStack_98 + ( ( uVar19 & 0xffffffff ) - 8 ) );
                           lVar59 = (long)local_88 - ( ( ulong )(local_88 + 8) & 0xfffffffffffffff8 );
                           uVar11 = (int)lVar59 + uVar11 & 0xfffffff8;
                           if (7 < uVar11) {
                              uVar41 = 0;
                              do {
                                 uVar34 = (int)uVar41 + 8;
                                 *(undefined8*)( ( ( ulong )(local_88 + 8) & 0xfffffffffffffff8 ) + uVar41 ) = *(undefined8*)( (string*)auStack_98 + ( uVar41 - lVar59 ) );
                                 uVar41 = (ulong)uVar34;
                              }
 while ( uVar34 < uVar11 );
                           }

                        }

                     }

                  }

                  local_88[uVar19] = (string)0x0;
               }
 else {
                  if (local_88 != (string*)auStack_78) {
                     local_88 = local_a8;
                     auStack_78[0] = auStack_98[0];
                     if (psVar6 != (string*)0x0) {
                        local_a8 = psVar6;
                        auStack_98[0] = uVar41;
                        goto LAB_00112d91;
                     }

                  }

                  auStack_78[0] = auStack_98[0];
                  local_88 = local_a8;
                  local_a8 = (string*)auStack_98;
               }

               LAB_00112d91:local_a0 = 0;
               *local_a8 = (string)0x0;
               local_80 = uVar19;
               if (local_a8 != (string*)auStack_98) {
                  operator_delete(local_a8, auStack_98[0] + 1);
               }

               plVar31 = *(long**)( pvVar60 + 8 );
               if (plVar31 == *(long**)( pvVar60 + 0x10 )) {
                  std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>>::_M_realloc_insert<tinyexr::TChannelInfo_const&>(pvVar60, plVar31, &local_88);
               }
 else {
                  *plVar31 = (long)( plVar31 + 2 );
                  std::__cxx11::string::_M_construct<char*>(plVar31, local_88, local_88 + local_80);
                  plVar31[4] = CONCAT44(uStack_64, local_68);
                  plVar31[5] = lStack_60;
                  *(undefined1*)( plVar31 + 6 ) = local_58;
                  *(undefined2*)( (long)plVar31 + 0x31 ) = local_57;
                  *(undefined1*)( (long)plVar31 + 0x33 ) = local_55;
                  *(long*)( pvVar60 + 8 ) = *(long*)( pvVar60 + 8 ) + 0x38;
               }

               if (local_88 != (string*)auStack_78) {
                  operator_delete(local_88, auStack_78[0] + 1);
               }

               lVar13 = lVar13 + 1;
               lVar55 = lVar55 + 0x110;
               pTVar18 = *local_358;
            }
 while ( (int)lVar13 < *(int*)( pTVar18 + 0x78 ) );
         }

         lVar55 = *(long*)pvVar60;
         lVar13 = 0;
         plVar31 = (long*)( lVar55 + 8 );
         uVar19 = 0;
         if (*(long*)( pvVar60 + 8 ) == lVar55) goto LAB_0011305d;
         do {
            lVar59 = *plVar31;
            uVar19 = uVar19 + 1;
            plVar31 = plVar31 + 7;
            lVar13 = lVar13 + 0x11 + lVar59;
         }
 while ( uVar19 < ( ulong )(( *(long*)( pvVar60 + 8 ) - lVar55 >> 3 ) * 0x6db6db6db6db6db7) );
         uVar19 = lVar13 + 1;
         if (uVar19 != 0) goto LAB_00113062;
         do {
            std::__throw_out_of_range_fmt(_LC1, 0, 0);
            LAB_0011305d:uVar19 = 1;
            LAB_00113062:std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_default_append((vector<unsigned_char,std::allocator<unsigned_char>>*)local_f8, uVar19);
            auVar44 = local_f8;
            lVar13 = (long)paStack_f0 - (long)local_f8;
         }
 while ( lVar13 == 0 );
         lVar55 = *(long*)pvVar60;
         uVar19 = 0;
         auVar51 = local_f8;
         if (*(long*)( pvVar60 + 8 ) != lVar55) {
            do {
               uVar41 = uVar19 + 1;
               lVar59 = uVar19 * 0x38;
               pvVar20 = memcpy((void*)auVar51, *(void**)( lVar55 + lVar59 ), ( (undefined8*)( lVar55 + lVar59 ) )[1]);
               puVar50 = (undefined1*)( (long)pvVar20 + *(long*)( *(long*)pvVar60 + 8 + lVar59 ) );
               *puVar50 = 0;
               auVar51 = ( undefined1[8] )(puVar50 + 0x11);
               uVar65 = *(undefined8*)( *(long*)pvVar60 + lVar59 + 0x28 );
               *(undefined4*)( puVar50 + 1 ) = *(undefined4*)( *(long*)pvVar60 + lVar59 + 0x24 );
               uVar33 = *(undefined1*)( *(long*)pvVar60 + 0x30 + lVar59 );
               *(undefined8*)( puVar50 + 9 ) = uVar65;
               puVar50[5] = uVar33;
               lVar55 = *(long*)pvVar60;
               uVar19 = uVar41;
            }
 while ( uVar41 < ( ulong )(( *(long*)( pvVar60 + 8 ) - lVar55 >> 3 ) * 0x6db6db6db6db6db7) );
         }

         *(uchar*)auVar51 = '\0';
         WriteAttributeToMemory((vector*)local_138, "channels", "chlist", (uchar*)auVar44, (int)lVar13);
         if (auVar44 != (undefined1[8])0x0) {
            operator_delete((void*)auVar44, (long)local_e8 - (long)auVar44);
         }

         local_f8._0_4_ = *(undefined4*)( *local_358 + 0x7c );
         WriteAttributeToMemory((vector*)local_138, "compression", "compression", (uchar*)local_f8, 1);
         local_a8 = (string*)0x0;
         local_a0 = CONCAT44((int)( ( ulong ) * (long*)( local_320 + 0x20 ) >> 0x20 ) + _LC141._4_4_, (int)*(long*)( local_320 + 0x20 ) + (int)_LC141);
         WriteAttributeToMemory((vector*)local_138, "dataWindow", "box2i", (uchar*)&local_a8, 0x10);
         local_88 = (string*)0x0;
         local_80 = CONCAT44((int)( ( ulong ) * (undefined8*)( param_1 + 0x20 ) >> 0x20 ) + _LC141._4_4_, (int)*(undefined8*)( param_1 + 0x20 ) + (int)_LC141);
         WriteAttributeToMemory((vector*)local_138, "displayWindow", "box2i", (uchar*)&local_88, 0x10);
         auVar67[0xf] = 0;
         auVar67._0_15_ = stack0xffffffffffffff09;
         _local_f8 = auVar67 << 8;
         WriteAttributeToMemory((vector*)local_138, "lineOrder", "lineOrder", (uchar*)local_f8, 1);
         local_f8._0_4_ = 0x3f800000;
         WriteAttributeToMemory((vector*)local_138, "pixelAspectRatio", "float", (uchar*)local_f8, 4);
         local_88 = (string*)0x0;
         WriteAttributeToMemory((vector*)local_138, "screenWindowCenter", "v2f", (uchar*)&local_88, 8);
         local_f8._0_4_ = 0x3f800000;
         WriteAttributeToMemory((vector*)local_138, "screenWindowWidth", "float", (uchar*)local_f8, 4);
         if (*(long*)local_320 != 0) {
            pTVar18 = *local_358;
            bVar8 = (byte)pTVar18[0x44] & 3;
            if (*(int*)( pTVar18 + 0x48 ) != 0) {
               bVar8 = bVar8 | 0x10;
            }

            local_88 = *(string**)( pTVar18 + 0x3c );
            local_80 = CONCAT71(( int7 )(local_80 >> 8), bVar8) & 0xffffffff000000ff;
            WriteAttributeToMemory((vector*)local_138, "tiles", "tiledesc", (uchar*)&local_88, 9);
         }

         pTVar18 = *local_358;
         if (param_3 != 1) {
            sVar21 = strlen((char*)( pTVar18 + 0x88 ));
            if (sVar21 == 0) {
               std::__cxx11::string::string<std::allocator<char>>((string*)&local_88, "Invalid \'name\' attribute for a multi-part file", extraout_RDX_01);
            }
 else {
               std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_emplace_unique<char_const(&)[256]>((_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>*)local_d8, (char*)( pTVar18 + 0x88 ));
               if (local_b0 == local_308) {
                  WriteAttributeToMemory((vector*)local_138, "name", "string", (uchar*)( *local_358 + 0x88 ), (int)sVar21);
                  pcVar14 = "tiledimage";
                  if (*(long*)local_320 == 0) {
                     pcVar14 = "scanlineimage";
                  }

                  WriteAttributeToMemory((vector*)local_138, "type", "string", (uchar*)pcVar14, ( -(uint)(*(long *)local_320 == 0) & 3 ) + 10);
                  WriteAttributeToMemory((vector*)local_138, "chunkCount", "int", (uchar*)local_2d8, 4);
                  pTVar18 = *local_358;
                  if (0 < *(int*)( pTVar18 + 0x5c )) goto LAB_001134fb;
                  goto LAB_0011342d;
               }

               std::__cxx11::string::string<std::allocator<char>>((string*)&local_88, "\'name\' attributes must be unique for a multi-part file", extraout_RDX_02);
            }

            if (param_5 != (char**)0x0) {
               pcVar14 = strdup((char*)local_88);
               *param_5 = pcVar14;
            }

            local_270 = (allocator*)0x0;
            std::__cxx11::string::_M_dispose();
            std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_erase(local_c8);
            local_358 = (TEXRHeader**)local_138._0_8_;
            goto LAB_00113e99;
         }

         if (*(int*)( pTVar18 + 0x5c ) < 1) {
            auVar5[0xf] = 0;
            auVar5._0_15_ = stack0xffffffffffffff09;
            _local_f8 = auVar5 << 8;
            std::vector<unsigned_char,std::allocator<unsigned_char>>::emplace_back<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)local_138, (uchar*)local_f8);
            std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_erase(local_c8);
            goto LAB_00113925;
         }

         LAB_001134fb:lVar13 = 0;
         iVar35 = 0;
         do {
            iVar35 = iVar35 + 1;
            pcVar14 = (char*)( *(long*)( pTVar18 + 0x60 ) + lVar13 );
            lVar13 = lVar13 + 0x210;
            WriteAttributeToMemory((vector*)local_138, pcVar14, pcVar14 + 0x100, *(uchar**)( pcVar14 + 0x200 ), *(int*)( pcVar14 + 0x208 ));
            pTVar18 = *local_358;
         }
 while ( iVar35 < *(int*)( pTVar18 + 0x5c ) );
         LAB_0011342d:auVar3[0xf] = 0;
         auVar3._0_15_ = stack0xffffffffffffff09;
         _local_f8 = auVar3 << 8;
         pvVar60 = pvVar60 + 0x18;
         std::vector<unsigned_char,std::allocator<unsigned_char>>::emplace_back<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)local_138, (uchar*)local_f8);
         local_358 = local_358 + 1;
         local_2d8 = local_2d8 + 4;
         local_320 = local_320 + 0x30;
         bVar64 = (uint)local_308 < param_3;
         local_308 = local_308 + 1;
      }
 while ( bVar64 );
      std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_erase(local_c8);
      if (param_3 != 1) {
         auVar4[0xf] = 0;
         auVar4._0_15_ = stack0xffffffffffffff29;
         _local_d8 = auVar4 << 8;
         std::vector<unsigned_char,std::allocator<unsigned_char>>::emplace_back<unsigned_char>((vector<unsigned_char,std::allocator<unsigned_char>>*)local_138, local_d8);
      }

      LAB_00113925:local_270 = (allocator*)( ( local_138._8_8_ - local_138._0_8_ ) + (long)iVar54 * 8 );
      pvVar23 = (vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>*)operator_new(uVar36);
      local_1d0 = pvVar23 + uVar36;
      pvVar62 = pvVar23;
      do {
         *(undefined8*)( pvVar62 + 0x10 ) = 0;
         pvVar24 = pvVar62 + 0x18;
         *(undefined1(*) [16])pvVar62 = (undefined1[16])0x0;
         pvVar62 = pvVar24;
      }
 while ( pvVar24 != local_1d0 );
      local_288 = 0;
      local_2b8 = local_290;
      lVar13 = ( ulong )(param_3 != 1) * 4;
      pvVar62 = pvVar23;
      local_340 = pvVar16;
      local_230 = param_1;
      do {
         auStack_98[0] = auStack_98[0] & 0xffffffffffffff00;
         local_1ac = 0x10;
         local_a0 = 0;
         local_1b0 = *(int*)( puVar15 + local_288 * 4 );
         paVar25 = (allocator*)(long)local_1b0;
         local_188 = param_2[local_288];
         iVar54 = *(int*)( local_188 + 0x7c );
         local_190 = local_230;
         if (( ( iVar54 != 3 ) && ( local_1ac = 0x20 ),iVar54 != 4 )) {
            local_1ac = 1;
         }

         puVar27 = *(undefined8**)( pvVar62 + 8 );
         lVar55 = (long)puVar27 - *(long*)pvVar62 >> 3;
         paVar38 = (allocator*)( lVar55 * -0x5555555555555555 );
         local_180 = (string*)&local_a8;
         local_a8 = (string*)auStack_98;
         if (paVar38 < paVar25) {
            std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>::_M_default_append(pvVar62, ( ulong )(paVar25 + lVar55 * 0x5555555555555555));
            paVar38 = extraout_RDX_06;
         }
 else if (( paVar25 < paVar38 ) && ( puVar39 = (undefined8*)( *(long*)pvVar62 + (long)paVar25 * 0x18 ) ),puVar43 = puVar39,puVar27 != puVar39) {
            do {
               pvVar20 = (void*)*puVar43;
               if (pvVar20 != (void*)0x0) {
                  operator_delete(pvVar20, puVar43[2] - (long)pvVar20);
                  paVar38 = extraout_RDX_03;
               }

               puVar43 = puVar43 + 3;
            }
 while ( puVar27 != puVar43 );
            *(undefined8**)( pvVar62 + 8 ) = puVar39;
         }

         uVar19 = ( ulong ) * (int*)( local_188 + 0x78 );
         if (uVar19 >> 0x3c != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_length_error("cannot create std::vector larger than max_size()");
         }

         local_108 = (undefined8*)0x0;
         local_118 = (undefined1[16])0x0;
         local_238 = pvVar23;
         if (uVar19 == 0) {
            local_108 = (undefined8*)0x0;
            local_118 = ZEXT816(0);
            local_1a8 = 0;
            pTVar18 = local_188;
            iVar54 = local_1a8;
         }
 else {
            paVar38 = (allocator*)( uVar19 * 8 );
            puVar26 = (undefined8*)operator_new((ulong)paVar38);
            pTVar18 = local_188;
            local_118._0_8_ = puVar26;
            puVar27 = puVar26 + 1;
            iVar35 = *(int*)( local_188 + 0x78 );
            local_108 = puVar26 + uVar19;
            *puVar26 = 0;
            puVar39 = puVar27;
            puVar43 = puVar26;
            if (( uVar19 != 1 ) && ( puVar39 = puVar27 != local_108 )) {
               memset(puVar27, 0, (size_t)( paVar38 + -8 ));
               paVar38 = extraout_RDX_04;
               puVar43 = (undefined8*)local_118._0_8_;
            }

            local_118._0_8_ = puVar43;
            local_118._8_8_ = puVar39;
            local_1a8 = 0;
            iVar54 = local_1a8;
            if (iVar35 != 0) {
               bVar64 = false;
               iVar54 = 0;
               lVar55 = 0;
               puVar49 = (uint*)( *(long*)local_340 + 0x24 );
               uVar19 = 0;
               do {
                  uVar11 = *puVar49;
                  paVar38 = (allocator*)(ulong)uVar11;
                  puVar26[uVar19] = lVar55;
                  if (uVar11 == 1) {
                     iVar54 = iVar54 + 2;
                     lVar55 = lVar55 + 2;
                  }
 else {
                     if (( uVar11 != 2 ) && ( uVar11 != 0 )) {
                        if (bVar64) {
                           local_1a8 = iVar54;
                        }

                        if (local_180 == (string*)0x0) goto LAB_00113dbf;
                        if (0x3fffffffffffffffU - (long)*(string**)( local_180 + 8 ) < 0x1e) goto LAB_00114fee;
                        std::__cxx11::string::_M_append((char*)local_180, 0x118f08);
                        goto joined_r0x00114507;
                     }

                     iVar54 = iVar54 + 4;
                     lVar55 = lVar55 + 4;
                  }

                  uVar19 = uVar19 + 1;
                  puVar49 = puVar49 + 0xe;
                  bVar64 = true;
               }
 while ( uVar19 < (ulong)(long)iVar35 );
            }

         }

         local_1a8 = iVar54;
         local_178 = 0;
         if (*(long*)local_190 == 0) {
            local_1b2 = '\0';
            local_1a4 = 0;
            plVar31 = (long*)**(undefined8**)local_2b8;
            _local_f8 = (undefined1[16])0x0;
            local_e8 = (long*)0x0;
            iVar54 = std::thread::hardware_concurrency();
            if (iVar54 < 1) {
               iVar54 = 1;
            }

            if (local_1b0 < iVar54) {
               iVar54 = local_1b0;
            }

            if (0 < iVar54) {
               iVar35 = 0;
               plVar48 = (long*)0x0;
               plVar61 = (long*)0x0;
               do {
                  local_170 = 0;
                  puVar27 = (undefined8*)operator_new(0x68);
                  puVar27[5] = pvVar62;
                  puVar27[4] = &local_190;
                  *puVar27 = &PTR___State_impl_0011cd88;
                  puVar27[1] = &local_1a4;
                  puVar27[6] = &local_188;
                  puVar27[2] = &local_1b0;
                  puVar27[3] = &local_1ac;
                  puVar27[7] = &local_1a8;
                  local_d8 = (undefined1[8])puVar27;
                  puVar27[8] = local_340;
                  puVar27[9] = local_118;
                  puVar27[10] = &local_180;
                  puVar27[0xb] = &local_178;
                  puVar27[0xc] = &local_1b2;
                  std::thread::_M_start_thread(&local_170, local_d8, std::thread::_M_thread_deps_never_run);
                  if (local_d8 != (undefined1[8])0x0) {
                     ( **(code**)( *(long*)local_d8 + 8 ) )();
                  }

                  if (plVar61 == plVar48) {
                     std::vector<std::thread,std::allocator<std::thread>>::_M_realloc_insert<std::thread>((vector<std::thread,std::allocator<std::thread>>*)local_f8, plVar61, &local_170);
                     if (local_170 != 0) goto LAB_00114fba;
                     paVar25 = paStack_f0;
                  }
 else {
                     *plVar61 = 0;
                     paVar25 = (allocator*)( plVar61 + 1 );
                     *plVar61 = local_170;
                     paStack_f0 = paVar25;
                  }

                  iVar35 = iVar35 + 1;
                  plVar48 = local_e8;
                  plVar61 = (long*)paVar25;
               }
 while ( iVar54 != iVar35 );
               for (auVar44 = local_f8; (undefined1[8])paVar25 != auVar44; auVar44 = ( undefined1[8] )((long)auVar44 + 8)) {
                  std::thread::join();
               }

            }

            if (local_1b2 != '\0') goto LAB_00114db8;
            if (local_1b0 != 0) {
               puVar39 = (undefined8*)*plVar31;
               puVar27 = puVar39 + local_1b0;
               plVar31 = (long*)( *(long*)pvVar62 + 8 );
               do {
                  *puVar39 = local_270;
                  puVar39 = puVar39 + 1;
                  local_270 = local_270 + ( *plVar31 - plVar31[-1] ) + lVar13;
                  plVar31 = plVar31 + 3;
               }
 while ( puVar27 != puVar39 );
            }

            for (auVar44 = local_f8; (undefined1[8])paStack_f0 != auVar44; auVar44 = ( undefined1[8] )((long)auVar44 + 8)) {
               if (*(long*)auVar44 != 0) goto LAB_00114fba;
            }

            paVar38 = paStack_f0;
            if (local_f8 != (undefined1[8])0x0) {
               operator_delete((void*)local_f8, (long)local_e8 - (long)local_f8);
               paVar38 = extraout_RDX_09;
            }

            if ((void*)local_118._0_8_ != (void*)0x0) {
               operator_delete((void*)local_118._0_8_, (long)local_108 - local_118._0_8_);
               paVar38 = extraout_RDX_10;
            }

         }
 else {
            iVar54 = *(int*)( pTVar18 + 0x44 );
            uVar11 = *(uint*)( local_2b8 + 0x18 );
            uVar34 = uVar11;
            if (iVar54 == 2) {
               paVar38 = (allocator*)( ulong )(*(int*)( local_2b8 + 0x1c ) * uVar11);
               uVar34 = *(int*)( local_2b8 + 0x1c ) * uVar11;
            }

            if (0 < (int)uVar34) {
               local_2b0 = 0;
               local_2c8 = local_190;
               local_2a0 = 0;
               do {
                  iVar35 = *(int*)( local_2c8 + 0x10 );
                  if (iVar54 == 1) {
                     LAB_00113f12:if (iVar35 < 0) {
                        LAB_00113d89:if (local_180 == (string*)0x0) goto LAB_00113dbf;
                        if (0x3fffffffffffffffU - *(long*)( local_180 + 8 ) < 0x18) goto LAB_00114fee;
                        std::__cxx11::string::_M_append((char*)local_180, 0x118d73);
                        goto LAB_00113dbf;
                     }

                  }
 else {
                     if (iVar54 == 2) {
                        iVar35 = iVar35 + *(int*)( local_2c8 + 0x14 ) * uVar11;
                        goto LAB_00113f12;
                     }

                     if (iVar54 != 0) goto LAB_00113d89;
                     iVar35 = 0;
                  }

                  if (iVar35 != (int)local_2b0) goto LAB_00114e2c;
                  plVar31 = (long*)( *(long*)local_2b8 + local_2b0 * 0x18 );
                  plVar48 = (long*)*plVar31;
                  iVar54 = (int)( plVar31[1] - (long)plVar48 >> 3 ) * -0x55555555;
                  if (iVar54 < 1) {
                     if (local_180 != (string*)0x0) {
                        std::__cxx11::string::append(local_180, "Invalid Y tile size\n");
                     }

                     goto LAB_00113dbf;
                  }

                  iVar35 = (int)( plVar48[1] - *plVar48 >> 3 );
                  if (iVar35 < 1) {
                     if (local_180 != (string*)0x0) {
                        std::__cxx11::string::append(local_180, "Invalid X tile size\n");
                     }

                     goto LAB_00113dbf;
                  }

                  local_80 = 0;
                  local_158 = local_2a0;
                  auStack_78[0] = auStack_78[0] & 0xffffffffffffff00;
                  local_19c = local_1a8;
                  local_168 = local_2c8;
                  local_150 = local_178;
                  local_198 = iVar35 * iVar54;
                  local_1a0 = iVar35;
                  local_160 = pTVar18;
                  local_148 = (string*)&local_88;
                  local_88 = (string*)auStack_78;
                  if (local_198 != *(int*)( local_2c8 + 0x2c )) {
                     std::__cxx11::string::_M_append((char*)&local_88, 0x119a70);
                     LAB_00114e62:if (( local_80 != 0 ) && ( local_180 != (string*)0x0 )) {
                        if (0x3fffffffffffffffU - (long)*(string**)( local_180 + 8 ) < local_80) {
                           LAB_00114fee:/* WARNING: Subroutine does not return */std::__throw_length_error("basic_string::append");
                        }

                        std::__cxx11::string::_M_append((char*)local_180, (ulong)local_88);
                     }

                     if (local_88 != (string*)auStack_78) {
                        operator_delete(local_88, auStack_78[0] + 1);
                     }

                     goto LAB_00113dbf;
                  }

                  if (( ( *(int*)( local_2c8 + 0x20 ) < *(int*)( pTVar18 + 0x3c ) ) || ( *(int*)( local_2c8 + 0x24 ) < *(int*)( pTVar18 + 0x40 ) ) ) && ( *(long*)( local_2c8 + 0x10 ) == 0 )) {
                     std::__cxx11::string::append((string*)&local_88, "Failed to encode tile data.\n");
                     goto LAB_00114e62;
                  }

                  local_1b1 = '\0';
                  local_c8 = (_Rb_tree_node*)0x0;
                  local_194 = 0;
                  _local_d8 = (undefined1[16])0x0;
                  iVar12 = std::thread::hardware_concurrency();
                  iVar10 = 1;
                  if (0 < iVar12) {
                     iVar10 = iVar12;
                  }

                  if (local_198 < iVar10) {
                     iVar10 = local_198;
                  }

                  if (0 < iVar10) {
                     p_Var57 = (_Rb_tree_node*)0x0;
                     p_Var47 = (_Rb_tree_node*)0x0;
                     iVar12 = 0;
                     while (true) {
                        local_140 = 0;
                        puVar27 = (undefined8*)operator_new(0x70);
                        puVar27[6] = pvVar62;
                        puVar27[7] = &local_160;
                        puVar27[0xc] = &local_150;
                        *puVar27 = &PTR___State_impl_0011cd60;
                        puVar27[1] = &local_194;
                        puVar27[8] = &local_19c;
                        puVar27[2] = &local_198;
                        puVar27[3] = &local_158;
                        puVar27[9] = local_340;
                        puVar27[4] = &local_1a0;
                        puVar27[5] = &local_168;
                        puVar27[10] = local_118;
                        local_f8 = (undefined1[8])puVar27;
                        puVar27[0xb] = &local_148;
                        puVar27[0xd] = &local_1b1;
                        std::thread::_M_start_thread(&local_140, (vector<unsigned_char,std::allocator<unsigned_char>>*)local_f8, std::thread::_M_thread_deps_never_run);
                        if (local_f8 != (undefined1[8])0x0) {
                           ( **(code**)( *(long*)local_f8 + 8 ) )();
                        }

                        if (p_Var57 == p_Var47) {
                           std::vector<std::thread,std::allocator<std::thread>>::_M_realloc_insert<std::thread>((vector<std::thread,std::allocator<std::thread>>*)local_d8, p_Var57, &local_140);
                           if (local_140 != 0) goto LAB_00114fba;
                           p_Var57 = p_Stack_d0;
                           p_Var47 = local_c8;
                        }
 else {
                           *(long*)p_Var57 = 0;
                           *(long*)p_Var57 = local_140;
                           p_Stack_d0 = p_Var57 + 8;
                           p_Var57 = p_Var57 + 8;
                           p_Var47 = local_c8;
                        }

                        local_c8 = p_Var47;
                        if (iVar10 == iVar12 + 1) break;
                        iVar12 = iVar12 + 1;
                     }
;
                     for (auVar44 = local_d8; auVar44 != (undefined1[8])p_Var57; auVar44 = ( undefined1[8] )((long)auVar44 + 8)) {
                        std::thread::join();
                     }

                  }

                  if (local_1b1 != '\0') {
                     if (local_148 != (string*)0x0) {
                        if (0x3fffffffffffffffU - *(long*)( local_148 + 8 ) < 0x1c) goto LAB_00114fee;
                        std::__cxx11::string::_M_append((char*)local_148, 0x118db6);
                     }

                     if ((undefined1[8])p_Stack_d0 != local_d8) {
                        iVar10 = -4;
                        auVar44 = local_d8;
                        p_Var57 = p_Stack_d0;
                        auVar51 = local_d8;
                        goto LAB_00114290;
                     }

                     if (p_Stack_d0 != (_Rb_tree_node*)0x0) {
                        operator_delete(p_Stack_d0, (long)local_c8 - (long)p_Stack_d0);
                     }

                     goto LAB_00114e62;
                  }

                  iVar10 = 0;
                  auVar44 = local_d8;
                  p_Var57 = p_Stack_d0;
                  auVar51 = local_d8;
                  if (local_d8 == (undefined1[8])p_Stack_d0) {
                     if (local_d8 != (undefined1[8])0x0) {
                        operator_delete((void*)local_d8, (long)local_c8 - (long)local_d8);
                     }

                  }
 else {
                     LAB_00114290:do {
                        if (*(long*)auVar44 != 0) goto LAB_00114fba;
                        auVar44 = ( undefined1[8] )((long)auVar44 + 8);
                     }
 while ( (undefined1[8])p_Var57 != auVar44 );
                     if (auVar51 != (undefined1[8])0x0) {
                        operator_delete((void*)auVar51, (long)local_c8 - (long)auVar51);
                     }

                     if (iVar10 != 0) goto LAB_00114e62;
                  }

                  lVar55 = (long)iVar35;
                  plVar48 = *(long**)( *(long*)local_2b8 + local_2b0 * 0x18 );
                  paVar25 = (allocator*)( *(long*)pvVar62 + 8 + local_2a0 * 0x18 );
                  plVar31 = plVar48 + (long)iVar54 * 3;
                  do {
                     plVar28 = (long*)*plVar48;
                     plVar61 = plVar28 + lVar55;
                     paVar38 = paVar25;
                     do {
                        *plVar28 = (long)local_270;
                        lVar59 = *(long*)paVar38;
                        plVar28 = plVar28 + 1;
                        paVar45 = paVar38 + -8;
                        paVar38 = paVar38 + 0x18;
                        local_270 = local_270 + ( lVar59 - *(long*)paVar45 ) + lVar13;
                     }
 while ( plVar61 != plVar28 );
                     plVar48 = plVar48 + 3;
                     local_2a0 = local_2a0 + lVar55;
                     paVar25 = paVar25 + lVar55 * 0x18;
                  }
 while ( plVar31 != plVar48 );
                  local_2c8 = *(TEXRImage**)( local_2c8 + 8 );
                  if (local_88 != (string*)auStack_78) {
                     operator_delete(local_88, auStack_78[0] + 1);
                     paVar38 = extraout_RDX_05;
                  }

                  if (local_2b0 == uVar34 - 1) goto LAB_0011452b;
                  local_2b0 = local_2b0 + 1;
                  if (local_2c8 == (TEXRImage*)0x0) {
                     if (local_180 != (string*)0x0) {
                        std::__cxx11::string::append(local_180, "Invalid number of tiled levels for EncodeChunk\n");
                     }

                     goto LAB_00113dbf;
                  }

                  uVar11 = *(uint*)( local_2b8 + 0x18 );
                  iVar54 = *(int*)( local_188 + 0x44 );
                  pTVar18 = local_188;
               }
 while ( true );
            }

            local_2a0 = 0;
            LAB_0011452b:if (local_1b0 != (int)local_2a0) {
               if ((void*)local_118._0_8_ != (void*)0x0) {
                  operator_delete((void*)local_118._0_8_, (long)local_108 - local_118._0_8_);
               }

               goto LAB_00113ddc;
            }

            if ((void*)local_118._0_8_ != (void*)0x0) {
               operator_delete((void*)local_118._0_8_, (long)local_108 - local_118._0_8_);
               paVar38 = extraout_RDX_07;
            }

         }

         if (local_a8 != (string*)auStack_98) {
            operator_delete(local_a8, auStack_98[0] + 1);
            paVar38 = extraout_RDX_08;
         }

         local_288 = local_288 + 1;
         pvVar62 = pvVar62 + 0x18;
         local_340 = local_340 + 0x18;
         local_230 = local_230 + 0x30;
         local_2b8 = local_2b8 + 0x20;
      }
 while ( (uint)local_288 < param_3 );
      uVar65 = local_138._0_8_;
      pcVar14 = "Output memory size is zero";
      local_358 = (TEXRHeader**)local_138._0_8_;
      if (local_270 == (allocator*)0x0) {
         LAB_00114f1b:std::__cxx11::string::string<std::allocator<char>>((string*)&local_88, pcVar14, paVar38);
         if (param_5 != (char**)0x0) {
            SetErrorMessage(local_88, param_5);
         }

         LAB_00114d3e:local_270 = (allocator*)0xfffffffffffffffc;
         std::__cxx11::string::_M_dispose();
      }
 else {
         puVar29 = (uchar*)malloc((size_t)local_270);
         paVar45 = (allocator*)( local_138._8_8_ - uVar65 );
         *param_4 = puVar29;
         auVar67 = __memcpy_chk(puVar29, uVar65, paVar45, local_270);
         paVar38 = auVar67._8_8_;
         paVar25 = local_270;
         if (local_270 <= paVar45) {
            paVar25 = paVar45;
         }

         lVar13 = 0;
         paVar52 = paVar45 + auVar67._0_8_;
         paVar25 = paVar25 + -(long)paVar45;
         pOVar46 = local_290;
         local_1f0 = param_1;
         do {
            if (*(long*)local_1f0 == 0) {
               lVar55 = (long)*(int*)( puVar15 + lVar13 * 4 ) * 8;
               paVar45 = paVar45 + lVar55;
               if (local_270 < paVar45) {
                  pcVar14 = "Invalid offset bytes in Part image.";
                  goto LAB_00114f1b;
               }

               lVar59 = __memcpy_chk(paVar52, *(undefined8*)**(undefined8**)pOVar46, lVar55, paVar25);
               paVar38 = paVar25;
               if (paVar25 <= local_270) {
                  paVar38 = local_270;
               }

               paVar30 = paVar38 + lVar55;
               paVar32 = paVar30 + -(long)paVar25;
               if (paVar30 + -(long)paVar25 < paVar38) {
                  paVar32 = paVar38;
               }

               paVar52 = (allocator*)( lVar59 + lVar55 );
               paVar25 = paVar32 + ( (long)paVar25 - (long)paVar30 );
            }
 else {
               paVar38 = (allocator*)param_2[lVar13];
               iVar54 = *(int*)( pOVar46 + 0x18 );
               if (*(int*)( paVar38 + 0x44 ) == 2) {
                  iVar54 = iVar54 * *(int*)( pOVar46 + 0x1c );
               }

               if (0 < iVar54) {
                  puVar63 = *(ulong**)pOVar46;
                  puVar1 = puVar63 + (long)iVar54 * 3;
                  do {
                     plVar31 = (long*)*puVar63;
                     if ((long*)puVar63[1] != plVar31) {
                        lVar55 = *plVar31;
                        lVar59 = plVar31[1] - lVar55;
                        paVar45 = paVar45 + lVar59;
                        if (local_270 < paVar45) {
                           LAB_00114d10:std::__cxx11::string::string<std::allocator<char>>((string*)&local_88, "Invalid offset bytes in Tiled Part image.", paVar38);
                           if (param_5 != (char**)0x0) {
                              pcVar14 = strdup((char*)local_88);
                              *param_5 = pcVar14;
                           }

                           goto LAB_00114d3e;
                        }

                        uVar19 = 0;
                        while (true) {
                           lVar55 = __memcpy_chk(paVar52, lVar55, lVar59, paVar25);
                           paVar38 = local_270;
                           if (local_270 <= paVar25) {
                              paVar38 = paVar25;
                           }

                           paVar30 = paVar38 + lVar59;
                           paVar32 = paVar30 + -(long)paVar25;
                           if (paVar30 + -(long)paVar25 < paVar38) {
                              paVar32 = paVar38;
                           }

                           paVar38 = (allocator*)*puVar63;
                           uVar19 = uVar19 + 1;
                           paVar52 = (allocator*)( lVar55 + lVar59 );
                           paVar25 = paVar32 + ( (long)paVar25 - (long)paVar30 );
                           if (( ulong )(( (long)( puVar63[1] - (long)paVar38 ) >> 3 ) * -0x5555555555555555) <= uVar19) break;
                           lVar55 = *(long*)( paVar38 + uVar19 * 0x18 );
                           lVar59 = *(long*)( paVar38 + uVar19 * 0x18 + 8 ) - lVar55;
                           paVar45 = paVar45 + lVar59;
                           if (local_270 < paVar45) goto LAB_00114d10;
                        }
;
                     }

                     puVar63 = puVar63 + 3;
                  }
 while ( puVar63 != puVar1 );
               }

            }

            lVar13 = lVar13 + 1;
            pOVar46 = pOVar46 + 0x20;
            local_1f0 = local_1f0 + 0x30;
         }
 while ( (uint)lVar13 < param_3 );
         lVar13 = 0;
         local_200 = pvVar23;
         do {
            lVar55 = 0;
            iVar54 = *(int*)( puVar15 + lVar13 * 4 );
            if (iVar54 != 0) {
               do {
                  if (param_3 != 1) {
                     paVar45 = paVar45 + 4;
                     if (paVar45 <= local_270) {
                        local_d8._0_4_ = (int)lVar13;
                        lVar59 = __memcpy_chk(paVar52, local_d8, 4, paVar25);
                        paVar38 = local_270;
                        if (local_270 <= paVar25) {
                           paVar38 = paVar25;
                        }

                        paVar30 = paVar38 + ( 4 - (long)paVar25 );
                        if (paVar38 + ( 4 - (long)paVar25 ) < paVar38) {
                           paVar30 = paVar38;
                        }

                        paVar52 = (allocator*)( lVar59 + 4 );
                        paVar25 = paVar30 + (long)( paVar25 + ( -4 - (long)paVar38 ) );
                        goto LAB_001147c2;
                     }

                     LAB_001147ec:pcVar14 = "Buffer overrun in reading Part image chunk data.";
                     goto LAB_00114f1b;
                  }

                  LAB_001147c2:plVar31 = (long*)( *(long*)local_200 + lVar55 * 0x18 );
                  paVar38 = (allocator*)( plVar31[1] - *plVar31 );
                  paVar45 = paVar45 + (long)paVar38;
                  if (local_270 < paVar45) goto LAB_001147ec;
                  lVar59 = __memcpy_chk(paVar52, *plVar31, paVar38, paVar25);
                  paVar52 = local_270;
                  if (local_270 <= paVar25) {
                     paVar52 = paVar25;
                  }

                  paVar30 = paVar52 + ( plVar31[1] - *plVar31 );
                  paVar38 = paVar30 + -(long)paVar25;
                  if (paVar30 + -(long)paVar25 < paVar52) {
                     paVar38 = paVar52;
                  }

                  paVar52 = (allocator*)( lVar59 + ( plVar31[1] - *plVar31 ) );
                  lVar55 = lVar55 + 1;
                  paVar25 = paVar38 + ( (long)paVar25 - (long)paVar30 );
               }
 while ( lVar55 != iVar54 );
            }

            local_200 = local_200 + 0x18;
            lVar13 = lVar13 + 1;
         }
 while ( (uint)lVar13 < param_3 );
         if (paVar45 != local_270) {
            pcVar14 = "Corrupted Part image chunk data.";
            goto LAB_00114f1b;
         }

      }

      goto LAB_00113e22;
      LAB_00114e2c:if (local_180 != (string*)0x0) {
         std::__cxx11::string::append(local_180, "Incorrect level ordering in tiled image\n");
      }

      goto LAB_00113dbf;
      LAB_00114db8:if (local_180 != (string*)0x0) {
         std::__cxx11::string::append(local_180, "Failed to encode scanline data.\n");
      }

      for (auVar44 = local_f8; (undefined1[8])paStack_f0 != auVar44; auVar44 = ( undefined1[8] )((long)auVar44 + 8)) {
         if (*(long*)auVar44 != 0) {
            LAB_00114fba:/* WARNING: Subroutine does not return */std::terminate();
         }

      }

      if (local_f8 != (undefined1[8])0x0) {
         operator_delete((void*)local_f8, (long)local_e8 - (long)local_f8);
      }

      LAB_00113dbf:joined_r0x00114507:if ((void*)local_118._0_8_ != (void*)0x0) {
         operator_delete((void*)local_118._0_8_, (long)local_108 - local_118._0_8_);
      }

      LAB_00113ddc:if (( local_a0 != 0 ) && ( param_5 != (char**)0x0 )) {
         pcVar14 = strdup((char*)local_a8);
         *param_5 = pcVar14;
      }

      local_270 = (allocator*)0x0;
      std::__cxx11::string::_M_dispose();
      local_358 = (TEXRHeader**)local_138._0_8_;
      pvVar23 = local_238;
      LAB_00113e22:do {
         puVar27 = *(undefined8**)( pvVar23 + 8 );
         puVar39 = *(undefined8**)pvVar23;
         if (puVar27 != puVar39) {
            do {
               pvVar20 = (void*)*puVar39;
               if (pvVar20 != (void*)0x0) {
                  operator_delete(pvVar20, puVar39[2] - (long)pvVar20);
               }

               puVar39 = puVar39 + 3;
            }
 while ( puVar27 != puVar39 );
            puVar39 = *(undefined8**)pvVar23;
         }

         if (puVar39 != (undefined8*)0x0) {
            operator_delete(puVar39, *(long*)( pvVar23 + 0x10 ) - (long)puVar39);
         }

         pvVar23 = pvVar23 + 0x18;
      }
 while ( local_1d0 != pvVar23 );
      operator_delete(local_238, uVar36);
      LAB_00113e99:do {
         puVar27 = *(undefined8**)( pvVar17 + 8 );
         puVar39 = *(undefined8**)pvVar17;
         if (puVar27 != puVar39) {
            do {
               if ((undefined8*)*puVar39 != puVar39 + 2) {
                  operator_delete((undefined8*)*puVar39, puVar39[2] + 1);
               }

               puVar39 = puVar39 + 7;
            }
 while ( puVar27 != puVar39 );
            puVar39 = *(undefined8**)pvVar17;
         }

         if (puVar39 != (undefined8*)0x0) {
            operator_delete(puVar39, *(long*)( pvVar17 + 0x10 ) - (long)puVar39);
         }

         pvVar17 = pvVar17 + 0x18;
      }
 while ( pvVar16 + uVar36 != pvVar17 );
      operator_delete(pvVar16, uVar36);
      LAB_001137d8:do {
         plVar31 = *(long**)( pOVar58 + 8 );
         plVar48 = *(long**)pOVar58;
         if (plVar31 != plVar48) {
            do {
               puVar27 = (undefined8*)plVar48[1];
               puVar39 = (undefined8*)*plVar48;
               if (puVar27 != puVar39) {
                  do {
                     pvVar20 = (void*)*puVar39;
                     if (pvVar20 != (void*)0x0) {
                        operator_delete(pvVar20, puVar39[2] - (long)pvVar20);
                     }

                     puVar39 = puVar39 + 3;
                  }
 while ( puVar27 != puVar39 );
                  puVar39 = (undefined8*)*plVar48;
               }

               if (puVar39 != (undefined8*)0x0) {
                  operator_delete(puVar39, plVar48[2] - (long)puVar39);
               }

               plVar48 = plVar48 + 3;
            }
 while ( plVar31 != plVar48 );
            plVar48 = *(long**)pOVar58;
         }

         if (plVar48 != (long*)0x0) {
            operator_delete(plVar48, *(long*)( pOVar58 + 0x10 ) - (long)plVar48);
         }

         pOVar58 = pOVar58 + 0x20;
      }
 while ( pOVar58 != local_290 + uVar42 * 0x20 );
      operator_delete(local_290, (long)local_1f8 - (long)local_290);
      operator_delete(puVar15, uVar22);
      if (local_358 != (TEXRHeader**)0x0) {
         operator_delete(local_358, (long)local_128 - (long)local_358);
      }

      LAB_001127e9:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return local_270;
   }

   void SaveEXRImageToMemory(TEXRImage *param_1, TEXRHeader *param_2, uchar **param_3, char **param_4) {
      TEXRHeader *local_10[2];
      local_10[0] = param_2;
      tinyexr::SaveEXRNPartImageToMemory(param_1, local_10, 1, param_3, param_4);
      return;
   }

   undefined8 SaveEXRImageToFile(TEXRImage *param_1, TEXRHeader *param_2, allocator *param_3, char **param_4) {
      uchar *__ptr;
      FILE *__stream;
      size_t __n;
      size_t sVar1;
      char *pcVar2;
      undefined8 uVar3;
      allocator *extraout_RDX;
      allocator *extraout_RDX_00;
      allocator *extraout_RDX_01;
      allocator *paVar4;
      long in_FS_OFFSET;
      uchar *local_88;
      TEXRHeader *local_80;
      string local_78[32];
      string *local_58[2];
      long local_48[3];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( param_1 == (TEXRImage*)0x0 ) || ( param_3 == (allocator*)0x0 ) ) || ( *(int*)( param_2 + 0x7c ) < 0 )) {
         std::__cxx11::string::string<std::allocator<char>>((string*)local_58, "Invalid argument for SaveEXRImageToFile", param_3);
         if (param_4 != (char**)0x0) {
            pcVar2 = strdup((char*)local_58[0]);
            *param_4 = pcVar2;
         }

         if (local_58[0] != (string*)local_48) {
            operator_delete(local_58[0], local_48[0] + 1);
         }

         uVar3 = 0xfffffffd;
      }
 else if (*(int*)( param_2 + 0x7c ) == 0x80) {
         std::__cxx11::string::string<std::allocator<char>>((string*)local_58, "ZFP compression is not supported in this build", param_3);
         if (param_4 != (char**)0x0) {
            pcVar2 = strdup((char*)local_58[0]);
            *param_4 = pcVar2;
         }

         if (local_58[0] != (string*)local_48) {
            operator_delete(local_58[0], local_48[0] + 1);
         }

         uVar3 = 0xfffffff6;
      }
 else {
         __stream = fopen64((char*)param_3, "wb");
         if (__stream == (FILE*)0x0) {
            std::__cxx11::string::string<std::allocator<char>>(local_78, (char*)param_3, extraout_RDX);
            std::operator +((char*)local_58, (string*)"Cannot write a file: ");
            if (param_4 != (char**)0x0) {
               tinyexr::SetErrorMessage(local_58[0], param_4);
            }

            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
         }
 else {
            local_88 = (uchar*)0x0;
            local_80 = param_2;
            __n = tinyexr::SaveEXRNPartImageToMemory(param_1, &local_80, 1, &local_88, param_4);
            __ptr = local_88;
            if (__n == 0) {
               fclose(__stream);
               uVar3 = 0xfffffff4;
               goto LAB_00115126;
            }

            if (local_88 == (uchar*)0x0) {
               fclose(__stream);
               paVar4 = extraout_RDX_01;
            }
 else {
               sVar1 = fwrite(local_88, 1, __n, __stream);
               free(__ptr);
               fclose(__stream);
               paVar4 = extraout_RDX_00;
               if (sVar1 == __n) {
                  uVar3 = 0;
                  goto LAB_00115126;
               }

            }

            std::__cxx11::string::string<std::allocator<char>>((string*)local_58, "Cannot write a file", paVar4);
            if (param_4 != (char**)0x0) {
               pcVar2 = strdup((char*)local_58[0]);
               *param_4 = pcVar2;
            }

            if (local_58[0] != (string*)local_48) {
               operator_delete(local_58[0], local_48[0] + 1);
            }

         }

         uVar3 = 0xfffffff5;
      }

      LAB_00115126:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar3;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   undefined8 SaveEXRMultipartImageToMemory(TEXRImage *param_1, TEXRHeader **param_2, uint param_3, uchar **param_4, char **param_5) {
      long lVar1;
      undefined8 uVar2;
      char *pcVar3;
      long in_FS_OFFSET;
      long local_50;
      long *local_48;
      long local_40;
      long local_38[3];
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( ( param_1 == (TEXRImage*)0x0 ) || ( param_2 == (TEXRHeader**)0x0 ) ) || ( param_3 < 2 ) ) || ( param_4 == (uchar**)0x0 )) {
         local_50 = 0x2e;
         local_48 = local_38;
         local_48 = (long*)std::__cxx11::string::_M_create((ulong*)&local_48, ( ulong ) & local_50);
         lVar1 = _UNK_0011ce58;
         local_38[0] = local_50;
         *local_48 = __LC117;
         local_48[1] = lVar1;
         lVar1 = _UNK_0011ce98;
         local_40 = local_50;
         local_48[2] = __LC162;
         local_48[3] = lVar1;
         uVar2 = _UNK_0011cea8;
         *(undefined8*)( (long)local_48 + 0x1e ) = __LC163;
         *(undefined8*)( (long)local_48 + 0x26 ) = uVar2;
         *(char*)( (long)local_48 + local_50 ) = '\0';
         if (param_5 != (char**)0x0) {
            pcVar3 = strdup((char*)local_48);
            *param_5 = pcVar3;
         }

         if (local_48 != local_38) {
            operator_delete(local_48, local_38[0] + 1);
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 0;
         }

      }
 else if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar2 = tinyexr::SaveEXRNPartImageToMemory(param_1, param_2, param_3, param_4, param_5);
         return uVar2;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   undefined8 SaveEXRMultipartImageToFile(long param_1, long param_2, uint param_3, char *param_4, char **param_5) {
      void *pvVar1;
      FILE *__stream;
      size_t __n;
      size_t sVar2;
      char *pcVar3;
      undefined8 uVar4;
      allocator *extraout_RDX;
      allocator *extraout_RDX_00;
      allocator *extraout_RDX_01;
      allocator *paVar5;
      long in_FS_OFFSET;
      void *local_90;
      string local_88[32];
      string *local_68;
      void *local_60;
      void *local_58[3];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_2 == 0 || param_3 < 2 ) || ( param_1 == 0 )) {
         local_90 = (void*)0x30;
         local_68 = (string*)local_58;
         local_68 = (string*)std::__cxx11::string::_M_create((ulong*)&local_68, ( ulong ) & local_90);
         pvVar1 = _UNK_0011ce58;
         local_58[0] = local_90;
         *(void**)local_68 = __LC117;
         *(void**)( local_68 + 8 ) = pvVar1;
         pvVar1 = _UNK_0011cee8;
         *(void**)( local_68 + 0x10 ) = __LC172;
         *(void**)( local_68 + 0x18 ) = pvVar1;
         pvVar1 = _UNK_0011cef8;
         *(void**)( local_68 + 0x20 ) = __LC173;
         *(void**)( local_68 + 0x28 ) = pvVar1;
         local_60 = local_90;
         local_68[(long)local_90] = (string)0x0;
         if (param_5 != (char**)0x0) {
            pcVar3 = strdup((char*)local_68);
            *param_5 = pcVar3;
         }

         if (local_68 != (string*)local_58) {
            operator_delete(local_68, (long)local_58[0] + 1);
         }

         uVar4 = 0xfffffffd;
      }
 else {
         __stream = fopen64(param_4, "wb");
         if (__stream == (FILE*)0x0) {
            std::__cxx11::string::string<std::allocator<char>>(local_88, param_4, extraout_RDX);
            std::operator +((char*)&local_68, (string*)"Cannot write a file: ");
            if (param_5 != (char**)0x0) {
               tinyexr::SetErrorMessage(local_68, param_5);
            }

            std::__cxx11::string::_M_dispose();
            std::__cxx11::string::_M_dispose();
         }
 else {
            local_90 = (void*)0x0;
            __n = SaveEXRMultipartImageToMemory(param_1, param_2, param_3, &local_90, param_5);
            pvVar1 = local_90;
            if (__n == 0) {
               fclose(__stream);
               uVar4 = 0xfffffff4;
               goto LAB_0011546b;
            }

            if (local_90 == (void*)0x0) {
               fclose(__stream);
               paVar5 = extraout_RDX_01;
            }
 else {
               sVar2 = fwrite(local_90, 1, __n, __stream);
               free(pvVar1);
               fclose(__stream);
               paVar5 = extraout_RDX_00;
               if (__n == sVar2) {
                  uVar4 = 0;
                  goto LAB_0011546b;
               }

            }

            std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Cannot write a file", paVar5);
            if (param_5 != (char**)0x0) {
               pcVar3 = strdup((char*)local_68);
               *param_5 = pcVar3;
            }

            if (local_68 != (string*)local_58) {
               operator_delete(local_68, (long)local_58[0] + 1);
            }

         }

         uVar4 = 0xfffffff5;
      }

      LAB_0011546b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return uVar4;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   int LoadEXRMultipartImageFromMemory(TEXRImage *param_1, long param_2, uint param_3, uchar *param_4, ulong param_5, char **param_6) {
      long *plVar1;
      undefined8 *puVar2;
      void *pvVar3;
      TEXRHeader *pTVar4;
      long lVar5;
      long lVar6;
      long lVar7;
      long lVar8;
      allocator *paVar9;
      undefined8 uVar10;
      char cVar11;
      uint uVar12;
      int iVar13;
      char *pcVar14;
      ulong uVar15;
      ulong uVar16;
      long lVar17;
      ulong uVar18;
      ulong uVar19;
      bool bVar20;
      ulong uVar22;
      allocator *extraout_RDX;
      long *plVar23;
      OffsetData *pOVar24;
      ulong *puVar25;
      OffsetData *pOVar26;
      long lVar27;
      undefined8 *puVar28;
      OffsetData *pOVar29;
      int iVar30;
      long in_FS_OFFSET;
      OffsetData *local_118;
      TEXRImage *local_110;
      undefined1 local_c8[16];
      long local_b8;
      undefined1 local_a8[16];
      long local_98;
      undefined1 local_88[16];
      long local_78;
      string *local_68;
      ulong local_60;
      ulong local_58[3];
      long local_40;
      allocator *paVar21;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      paVar21 = (allocator*)0x0;
      if (( ( ( param_1 == (TEXRImage*)0x0 ) || ( param_2 == 0 ) ) || ( bVar20 = param_3 == 0 || param_4 == (uchar*)0x0 ),paVar21 = (allocator*)(ulong)bVar20,bVar20 )) {
         std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Invalid argument for LoadEXRMultipartImageFromMemory()", paVar21);
         if (param_6 != (char**)0x0) {
            pcVar14 = strdup((char*)local_68);
            *param_6 = pcVar14;
         }

         if (local_68 != (string*)local_58) {
            LAB_0011572a:operator_delete(local_68, local_58[0] + 1);
         }

         LAB_0011573b:iVar13 = -3;
      }
 else {
         lVar17 = 0;
         lVar27 = 0;
         do {
            uVar12 = *(uint*)( *(long*)( param_2 + lVar17 * 8 ) + 0x58 );
            if (uVar12 == 0) {
               local_88._0_8_ = 0x26;
               local_68 = (string*)local_58;
               local_68 = (string*)std::__cxx11::string::_M_create((ulong*)&local_68, (ulong)local_88);
               uVar15 = _UNK_0011cf08;
               local_58[0] = local_88._0_8_;
               *(ulong*)local_68 = __LC177;
               *(ulong*)( local_68 + 8 ) = uVar15;
               uVar15 = _UNK_0011cf18;
               *(ulong*)( local_68 + 0x10 ) = __LC178;
               *(ulong*)( local_68 + 0x18 ) = uVar15;
               *(undefined8*)( local_68 + 0x1e ) = 0x2e64657a696c6169;
               local_60 = local_88._0_8_;
               local_68[local_88._0_8_] = (string)0x0;
               if (param_6 != (char**)0x0) {
                  pcVar14 = strdup((char*)local_68);
                  *param_6 = pcVar14;
               }

               if (local_68 == (string*)local_58) goto LAB_0011573b;
               goto LAB_0011572a;
            }

            lVar17 = lVar17 + 1;
            lVar27 = lVar27 + (ulong)uVar12;
         }
 while ( (uint)lVar17 < param_3 );
         local_b8 = 0;
         puVar25 = (ulong*)( param_4 + lVar27 + 9 );
         uVar15 = (ulong)param_3;
         local_c8 = (undefined1[16])0x0;
         std::vector<tinyexr::OffsetData,std::allocator<tinyexr::OffsetData>>::reserve((vector<tinyexr::OffsetData,std::allocator<tinyexr::OffsetData>>*)local_c8, uVar15);
         local_110 = (TEXRImage*)0x0;
         local_118 = (OffsetData*)local_c8._0_8_;
         pOVar29 = (OffsetData*)local_c8._8_8_;
         do {
            if ((long)pOVar29 - (long)local_118 == -0x20) {
               pOVar24 = local_118;
               if (local_118 != pOVar29) {
                  do {
                     plVar1 = *(long**)( pOVar24 + 8 );
                     plVar23 = *(long**)pOVar24;
                     if (plVar1 != plVar23) {
                        do {
                           puVar2 = (undefined8*)plVar23[1];
                           puVar28 = (undefined8*)*plVar23;
                           if (puVar2 != puVar28) {
                              do {
                                 pvVar3 = (void*)*puVar28;
                                 if (pvVar3 != (void*)0x0) {
                                    operator_delete(pvVar3, puVar28[2] - (long)pvVar3);
                                 }

                                 puVar28 = puVar28 + 3;
                              }
 while ( puVar2 != puVar28 );
                              puVar28 = (undefined8*)*plVar23;
                           }

                           if (puVar28 != (undefined8*)0x0) {
                              operator_delete(puVar28, plVar23[2] - (long)puVar28);
                           }

                           plVar23 = plVar23 + 3;
                        }
 while ( plVar1 != plVar23 );
                        plVar23 = *(long**)pOVar24;
                     }

                     if (plVar23 != (long*)0x0) {
                        operator_delete(plVar23, *(long*)( pOVar24 + 0x10 ) - (long)plVar23);
                     }

                     pOVar24 = pOVar24 + 0x20;
                  }
 while ( pOVar24 != pOVar29 );
                  local_c8._8_8_ = local_118;
                  pOVar29 = local_118;
               }

            }
 else {
               std::vector<tinyexr::OffsetData,std::allocator<tinyexr::OffsetData>>::_M_default_append((vector<tinyexr::OffsetData,std::allocator<tinyexr::OffsetData>>*)local_c8, 1);
               local_118 = (OffsetData*)local_c8._0_8_;
               pOVar29 = (OffsetData*)local_c8._8_8_;
            }

            pTVar4 = *(TEXRHeader**)( param_2 + (long)local_110 * 8 );
            pOVar24 = local_118;
            if (( *(int*)( pTVar4 + 0x38 ) != 0 ) && ( *(int*)( pTVar4 + 0x44 ) != 0 )) {
               local_98 = 0;
               local_78 = 0;
               local_a8 = (undefined1[16])0x0;
               local_88 = (undefined1[16])0x0;
               cVar11 = tinyexr::PrecalculateTileInfo((vector*)local_a8, (vector*)local_88, pTVar4);
               if (cVar11 == '\0') {
                  std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Invalid tile info.", extraout_RDX);
               }
 else {
                  uVar12 = tinyexr::InitTileOffsets(pOVar29 + -0x20, *(TEXRHeader**)( param_2 + (long)local_110 * 8 ), (vector*)local_a8, (vector*)local_88);
                  if (*(uint*)( *(long*)( param_2 + (long)local_110 * 8 ) + 0x34 ) == uVar12) {
                     if ((void*)local_88._0_8_ != (void*)0x0) {
                        operator_delete((void*)local_88._0_8_, local_78 - local_88._0_8_);
                     }

                     if ((void*)local_a8._0_8_ != (void*)0x0) {
                        operator_delete((void*)local_a8._0_8_, local_98 - local_a8._0_8_);
                     }

                     lVar17 = *(long*)( pOVar29 + -0x18 );
                     lVar27 = *(long*)( pOVar29 + -0x20 );
                     uVar22 = 0;
                     if (lVar17 != lVar27) {
                        do {
                           uVar16 = 0;
                           plVar1 = (long*)( lVar27 + uVar22 * 0x18 );
                           lVar8 = plVar1[1];
                           lVar5 = *plVar1;
                           if (lVar8 != lVar5) {
                              do {
                                 uVar18 = 0;
                                 plVar1 = (long*)( lVar5 + uVar16 * 0x18 );
                                 lVar6 = plVar1[1];
                                 lVar7 = *plVar1;
                                 if (lVar6 != lVar7) {
                                    do {
                                       uVar19 = *puVar25;
                                       if (param_5 <= uVar19) {
                                          goto LAB_00115952;
                                       }

                                       puVar25 = puVar25 + 1;
                                       *(ulong*)( lVar7 + uVar18 * 8 ) = uVar19 + 4;
                                       uVar18 = ( ulong )((int)uVar18 + 1);
                                    }
 while ( uVar18 < ( ulong )(lVar6 - lVar7 >> 3) );
                                 }

                                 uVar16 = ( ulong )((int)uVar16 + 1);
                              }
 while ( uVar16 < ( ulong )(( lVar8 - lVar5 >> 3 ) * -0x5555555555555555) );
                           }

                           uVar22 = ( ulong )((int)uVar22 + 1);
                        }
 while ( uVar22 < ( ulong )(( lVar17 - lVar27 >> 3 ) * -0x5555555555555555) );
                     }

                     goto LAB_00115c74;
                  }

                  std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Invalid offset table size.", (allocator*)(ulong)uVar12);
               }

               if (param_6 != (char**)0x0) {
                  pcVar14 = strdup((char*)local_68);
                  *param_6 = pcVar14;
               }

               std::__cxx11::string::_M_dispose();
               if ((void*)local_88._0_8_ != (void*)0x0) {
                  operator_delete((void*)local_88._0_8_, local_78 - local_88._0_8_);
               }

               if ((void*)local_a8._0_8_ != (void*)0x0) {
                  operator_delete((void*)local_a8._0_8_, local_98 - local_a8._0_8_);
               }

               LAB_00115dac:iVar13 = -4;
               goto joined_r0x00115db6;
            }

            tinyexr::InitSingleResolutionOffsets(pOVar29 + -0x20, (long)*(int*)( pTVar4 + 0x34 ));
            lVar17 = ( (long*)**(long**)( pOVar29 + -0x20 ) )[1];
            lVar27 = *(long*)**(long**)( pOVar29 + -0x20 );
            if (lVar17 != lVar27) {
               uVar22 = 0;
               LAB_00115919:uVar16 = *puVar25;
               if (uVar16 < param_5) goto LAB_00115900;
               LAB_00115952:local_88._0_8_ = 0x29;
               local_68 = (string*)local_58;
               local_68 = (string*)std::__cxx11::string::_M_create((ulong*)&local_68, (ulong)local_88);
               uVar15 = _UNK_0011cf28;
               local_58[0] = local_88._0_8_;
               *(ulong*)local_68 = __LC179;
               *(ulong*)( local_68 + 8 ) = uVar15;
               uVar15 = _UNK_0011cf38;
               *(ulong*)( local_68 + 0x10 ) = __LC180;
               *(ulong*)( local_68 + 0x18 ) = uVar15;
               uVar10 = _UNK_0011cf48;
               *(undefined8*)( local_68 + 0x19 ) = __LC181;
               *(undefined8*)( local_68 + 0x21 ) = uVar10;
               local_60 = local_88._0_8_;
               local_68[local_88._0_8_] = (string)0x0;
               if (param_6 != (char**)0x0) {
                  pcVar14 = strdup((char*)local_68);
                  *param_6 = pcVar14;
               }

               if (local_68 != (string*)local_58) {
                  operator_delete(local_68, local_58[0] + 1);
               }

               iVar13 = -4;
               iVar30 = -4;
               if (local_118 != pOVar29) goto LAB_00115a00;
               goto LAB_00115a8f;
            }

            LAB_00115c74:local_110 = (TEXRImage*)( (long)local_110 + 1 );
         }
 while ( local_110 < uVar15 );
         uVar22 = 0;
         pOVar26 = local_118;
         local_110 = param_1;
         do {
            lVar17 = *(long*)pOVar26;
            uVar16 = 0;
            if (*(long*)( pOVar26 + 8 ) != lVar17) {
               do {
                  uVar18 = 0;
                  plVar1 = (long*)( lVar17 + uVar16 * 0x18 );
                  lVar27 = plVar1[1];
                  lVar8 = *plVar1;
                  if (lVar27 != lVar8) {
                     do {
                        uVar19 = 0;
                        puVar2 = (undefined8*)( lVar8 + uVar18 * 0x18 );
                        paVar21 = (allocator*)puVar2[1];
                        paVar9 = (allocator*)*puVar2;
                        if (paVar21 != paVar9) {
                           do {
                              if (*(uint*)( param_4 + *(long*)( paVar9 + uVar19 * 8 ) + -4 ) != uVar22) {
                                 std::__cxx11::string::string<std::allocator<char>>((string*)&local_68, "Invalid `part number\' in EXR header chunks.", paVar9);
                                 if (param_6 != (char**)0x0) {
                                    pcVar14 = strdup((char*)local_68);
                                    *param_6 = pcVar14;
                                 }

                                 std::__cxx11::string::_M_dispose();
                                 goto LAB_00115dac;
                              }

                              uVar19 = ( ulong )((int)uVar19 + 1);
                           }
 while ( uVar19 < ( ulong )((long)paVar21 - (long)paVar9 >> 3) );
                        }

                        uVar18 = ( ulong )((int)uVar18 + 1);
                     }
 while ( uVar18 < ( ulong )(( lVar27 - lVar8 >> 3 ) * -0x5555555555555555) );
                  }

                  uVar16 = ( ulong )((int)uVar16 + 1);
               }
 while ( uVar16 < ( ulong )(( *(long*)( pOVar26 + 8 ) - lVar17 >> 3 ) * -0x5555555555555555) );
            }

            local_68 = (string*)local_58;
            local_60 = 0;
            local_58[0] = local_58[0] & 0xffffffffffffff00;
            iVar13 = tinyexr::DecodeChunk(local_110, *(TEXRHeader**)( param_2 + uVar22 * 8 ), pOVar26, param_4, param_5, (string*)&local_68);
            if (iVar13 != 0) {
               if (( local_60 != 0 ) && ( param_6 != (char**)0x0 )) {
                  tinyexr::SetErrorMessage(local_68, param_6);
               }

               std::__cxx11::string::_M_dispose();
               goto joined_r0x00115db6;
            }

            uVar22 = uVar22 + 1;
            pOVar26 = pOVar26 + 0x20;
            std::__cxx11::string::_M_dispose();
            local_110 = local_110 + 0x30;
         }
 while ( uVar22 < uVar15 );
         iVar13 = 0;
         joined_r0x00115db6:for (; iVar30 = iVar13,pOVar24 != pOVar29; pOVar24 = pOVar24 + 0x20) {
            LAB_00115a00:plVar1 = *(long**)( pOVar24 + 8 );
            plVar23 = *(long**)pOVar24;
            if (plVar1 != plVar23) {
               do {
                  puVar2 = (undefined8*)plVar23[1];
                  puVar28 = (undefined8*)*plVar23;
                  if (puVar2 != puVar28) {
                     do {
                        pvVar3 = (void*)*puVar28;
                        if (pvVar3 != (void*)0x0) {
                           operator_delete(pvVar3, puVar28[2] - (long)pvVar3);
                        }

                        puVar28 = puVar28 + 3;
                     }
 while ( puVar2 != puVar28 );
                     puVar28 = (undefined8*)*plVar23;
                  }

                  if (puVar28 != (undefined8*)0x0) {
                     operator_delete(puVar28, plVar23[2] - (long)puVar28);
                  }

                  plVar23 = plVar23 + 3;
               }
 while ( plVar1 != plVar23 );
               plVar23 = *(long**)pOVar24;
            }

            if (plVar23 != (long*)0x0) {
               operator_delete(plVar23, *(long*)( pOVar24 + 0x10 ) - (long)plVar23);
            }

            iVar13 = iVar30;
         }

         if (local_118 != (OffsetData*)0x0) {
            LAB_00115a8f:operator_delete(local_118, local_b8 - (long)local_118);
         }

      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return iVar13;
      LAB_00115900:puVar25 = puVar25 + 1;
      *(ulong*)( lVar27 + uVar22 * 8 ) = uVar16 + 4;
      uVar22 = uVar22 + 1;
      if (( ulong )(lVar17 - lVar27 >> 3) <= uVar22) goto LAB_00115c74;
      goto LAB_00115919;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   undefined4 LoadEXRMultipartImageFromFile(long param_1, long param_2, int param_3, char *param_4, undefined8 *param_5) {
      long *plVar1;
      ulong uVar2;
      __nlink_t *p_Var3;
      undefined8 uVar4;
      __dev_t _Var5;
      __blksize_t _Var6;
      int __fd;
      int iVar7;
      undefined4 uVar8;
      void *__addr;
      size_t __n;
      long *plVar9;
      char *pcVar10;
      uint uVar11;
      size_t *psVar12;
      ulong uVar13;
      long *plVar15;
      long lVar16;
      __nlink_t *p_Var17;
      long in_FS_OFFSET;
      size_t local_100;
      size_t *local_f8;
      size_t local_f0;
      size_t local_e8[2];
      stat64 local_d8;
      long local_40;
      ulong uVar14;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_2 == 0 || param_3 == 0 ) || ( param_1 == 0 )) {
         local_100 = 0x32;
         local_d8.st_dev = ( __dev_t ) & local_d8.st_nlink;
         local_d8.st_dev = std::__cxx11::string::_M_create(&local_d8.st_dev, ( ulong ) & local_100);
         uVar4 = _UNK_0011ce58;
         local_d8.st_nlink = local_100;
         *(__nlink_t*)local_d8.st_dev = __LC117;
         *(undefined8*)( local_d8.st_dev + 8 ) = uVar4;
         _Var5 = _UNK_0011cf58;
         uVar4 = __LC182;
         *(undefined2*)( local_d8.st_dev + 0x30 ) = 0x656c;
         *(undefined8*)( local_d8.st_dev + 0x10 ) = uVar4;
         *(__dev_t*)( local_d8.st_dev + 0x18 ) = _Var5;
         _Var6 = _UNK_0011cf68;
         *(__off_t*)( local_d8.st_dev + 0x20 ) = __LC183;
         *(__blksize_t*)( local_d8.st_dev + 0x28 ) = _Var6;
         local_d8.st_ino = local_100;
         *(char*)( local_d8.st_dev + local_100 ) = '\0';
         if (param_5 != (undefined8*)0x0) {
            pcVar10 = strdup((char*)local_d8.st_dev);
            *param_5 = pcVar10;
         }

         if ((__nlink_t*)local_d8.st_dev != &local_d8.st_nlink) {
            operator_delete((void*)local_d8.st_dev, local_d8.st_nlink + 1);
         }

         uVar8 = 0xfffffffd;
         goto LAB_001160a7;
      }

      __fd = open64(param_4, 0);
      if (( ( ( __fd == -1 ) || ( iVar7 = fstat64(__fd, &local_d8) ),iVar7 < 0 ) ) || ( local_d8.st_size < 0 )) {
         local_f8 = local_e8;
         __n = strlen(param_4);
         local_100 = __n;
         if (__n < 0x10) {
            psVar12 = local_e8;
            if (__n == 1) {
               local_e8[0] = CONCAT71(local_e8[0]._1_7_, *param_4);
            }
 else if (__n != 0) goto LAB_00116211;
         }
 else {
            local_f8 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_f8, ( ulong ) & local_100);
            local_e8[0] = local_100;
            psVar12 = local_f8;
            LAB_00116211:memcpy(psVar12, param_4, __n);
            psVar12 = local_f8;
         }

         *(undefined1*)( (long)psVar12 + local_100 ) = 0;
         p_Var3 = &local_d8.st_nlink;
         local_f0 = local_100;
         plVar9 = (long*)std::__cxx11::string::_M_replace(( ulong ) & local_f8, 0, (char*)0x0, 0x1189a7);
         plVar1 = plVar9 + 2;
         if ((__nlink_t*)*plVar9 == (__nlink_t*)plVar1) {
            uVar2 = plVar9[1] + 1;
            plVar15 = plVar1;
            p_Var17 = p_Var3;
            if (7 < (uint)uVar2) {
               uVar13 = 0;
               do {
                  uVar11 = (int)uVar13 + 8;
                  uVar14 = (ulong)uVar11;
                  *(undefined8*)( (long)p_Var3 + uVar13 ) = *(undefined8*)( (long)plVar1 + uVar13 );
                  uVar13 = uVar14;
               }
 while ( uVar11 < ( (uint)uVar2 & 0xfffffff8 ) );
               p_Var17 = (__nlink_t*)( (long)p_Var3 + uVar14 );
               plVar15 = (long*)( uVar14 + (long)plVar1 );
            }

            lVar16 = 0;
            if (( uVar2 & 4 ) != 0) {
               *(int*)p_Var17 = (int)*plVar15;
               lVar16 = 4;
            }

            if (( uVar2 & 2 ) != 0) {
               *(undefined2*)( (long)p_Var17 + lVar16 ) = *(undefined2*)( (long)plVar15 + lVar16 );
               lVar16 = lVar16 + 2;
            }

            local_d8.st_dev = (__dev_t)p_Var3;
            if (( uVar2 & 1 ) != 0) {
               *(undefined1*)( (long)p_Var17 + lVar16 ) = *(undefined1*)( (long)plVar15 + lVar16 );
            }

         }
 else {
            local_d8.st_nlink = plVar9[2];
            local_d8.st_dev = ( __dev_t ) * plVar9;
         }

         local_d8.st_ino = plVar9[1];
         *plVar9 = (long)plVar1;
         plVar9[1] = 0;
         *(undefined1*)( plVar9 + 2 ) = 0;
         if (param_5 != (undefined8*)0x0) {
            pcVar10 = strdup((char*)local_d8.st_dev);
            *param_5 = pcVar10;
         }

         if ((__nlink_t*)local_d8.st_dev != p_Var3) {
            operator_delete((void*)local_d8.st_dev, local_d8.st_nlink + 1);
         }

         if (local_f8 != local_e8) {
            operator_delete(local_f8, local_e8[0] + 1);
         }

         uVar8 = 0xfffffff9;
         if (__fd == -1) goto LAB_001160a7;
      }
 else {
         uVar8 = LoadEXRMultipartImageFromMemory(param_1, param_2, param_3, __addr, local_d8.st_size, param_5);
         munmap(__addr, local_d8.st_size);
      }

      close(__fd);
      LAB_001160a7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar8;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   ulong SaveEXRToMemory(undefined4 *param_1, int param_2, int param_3, int param_4, int param_5, undefined8 *param_6, char **param_7) {
      code *pcVar1;
      ulong uVar2;
      void *pvVar3;
      void *pvVar4;
      ostream *poVar5;
      char *pcVar6;
      long lVar7;
      TEXRHeader *pTVar8;
      TEXRHeader *pTVar9;
      ulong uVar10;
      long in_FS_OFFSET;
      uchar *local_288;
      TEXRHeader *local_280;
      TEXRImage local_278[16];
      undefined8 local_268;
      undefined1 *local_260;
      undefined8 local_258;
      int local_250;
      undefined4 local_24c;
      undefined1 local_248[16];
      undefined1 local_238[16];
      undefined1 local_228[16];
      undefined1 local_218[16];
      undefined1 local_208[16];
      undefined1 local_1f8[16];
      undefined1 local_1e8[16];
      undefined1 local_1d8[16];
      code *local_1c8[2];
      code *local_1b8[8];
      locale local_178[16];
      void **local_168;
      undefined8 *local_160;
      void *local_158;
      undefined4 local_150;
      undefined4 local_14c;
      code *local_148[33];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_4 - 3U < 2 ) || ( param_4 == 1 )) {
         pTVar8 = (TEXRHeader*)local_1c8;
         for (lVar7 = 0x31; lVar7 != 0; lVar7 = lVar7 + -1) {
            *(code**)pTVar8 = (code*)0x0;
            pTVar8 = pTVar8 + 8;
         }

         if (( 0xf < param_2 ) || ( 0xf < param_3 )) {
            local_14c = 3;
         }

         local_258 = 0;
         local_24c = 0;
         local_260 = (undefined1*)0x0;
         local_268 = 0;
         uVar10 = ( ulong )(param_2 * param_3);
         for (int i = 0; i < 16; i++) {
            local_278[i] = (TEXRImage)0;
         }

         local_228 = (undefined1[16])0x0;
         local_218 = (undefined1[16])0x0;
         local_208 = (undefined1[16])0x0;
         local_1f8 = (undefined1[16])0x0;
         local_1e8 = (undefined1[16])0x0;
         local_1d8 = (undefined1[16])0x0;
         local_250 = param_4;
         if (param_4 == 1) {
            local_228._0_8_ = (void*)0x0;
            pvVar3 = (void*)0x0;
            if (uVar10 != 0) {
               std::vector<float,std::allocator<float>>::_M_default_append((vector<float,std::allocator<float>>*)local_228, uVar10);
               pvVar3 = (void*)local_228._8_8_;
            }

            pvVar4 = memcpy((void*)local_228._0_8_, param_1, uVar10 * 4);
            local_248 = (undefined1[16])0x0;
            local_238 = (undefined1[16])0x0;
            if (pvVar4 != pvVar3) {
               local_248._8_8_ = 0;
               local_248._0_8_ = pvVar4;
               local_260 = local_248;
               lVar7 = 1;
               local_258 = CONCAT44(param_3, param_2);
               local_150 = 1;
               local_160 = (undefined8*)malloc(0x110);
               *(undefined1(*) [16])( local_160 + 0x1c ) = (undefined1[16])0x0;
               *local_160 = 0x41;
               local_160[1] = 0;
               for (int i = 0; i < 13; i++) {
                  *(undefined1(*) [16])( local_160 + ( 2*i + 2 ) ) = (undefined1[16])0;
               }

               *(undefined1(*) [16])( (long)local_160 + 0xef ) = (undefined1[16])0x0;
               goto LAB_001167f0;
            }

         }
 else {
            if (uVar10 == 0) {
               local_1f8._8_8_ = 0;
               local_1f8._0_8_ = 0;
               uVar2 = 0;
               LAB_0011692a:if (( uVar10 < uVar2 ) && ( lVar7 = local_1f8._8_8_ != lVar7 )) {
                  local_1f8._8_8_ = lVar7;
               }

            }
 else {
               std::vector<float,std::allocator<float>>::_M_default_append((vector<float,std::allocator<float>>*)local_228, uVar10);
               uVar2 = (long)( local_208._0_8_ - local_218._8_8_ ) >> 2;
               if (uVar2 < uVar10) {
                  std::vector<float,std::allocator<float>>::_M_default_append((vector<float,std::allocator<float>>*)( local_218 + 8 ), uVar10 - uVar2);
               }
 else if (( uVar10 < uVar2 ) && ( lVar7 = lVar7 != local_208._0_8_ )) {
                  local_208._0_8_ = lVar7;
               }

               uVar2 = (long)( local_1f8._8_8_ - local_1f8._0_8_ ) >> 2;
               if (uVar10 <= uVar2) goto LAB_0011692a;
               std::vector<float,std::allocator<float>>::_M_default_append((vector<float,std::allocator<float>>*)local_1f8, uVar10 - uVar2);
            }

            uVar2 = (long)( local_1d8._0_8_ - local_1e8._8_8_ ) >> 2;
            if (uVar2 < uVar10) {
               std::vector<float,std::allocator<float>>::_M_default_append((vector<float,std::allocator<float>>*)( local_1e8 + 8 ), uVar10 - uVar2);
               LAB_0011658c:uVar2 = 0;
               do {
                  *(undefined4*)( local_228._0_8_ + uVar2 * 4 ) = *param_1;
                  *(undefined4*)( local_218._8_8_ + uVar2 * 4 ) = param_1[1];
                  *(undefined4*)( local_1f8._0_8_ + uVar2 * 4 ) = param_1[2];
                  if (param_4 == 4) {
                     *(undefined4*)( local_1e8._8_8_ + uVar2 * 4 ) = param_1[3];
                  }

                  uVar2 = uVar2 + 1;
                  param_1 = param_1 + param_4;
               }
 while ( uVar2 < uVar10 );
            }
 else {
               if (( uVar10 < uVar2 ) && ( lVar7 = local_1d8._0_8_ != lVar7 )) {
                  local_1d8._0_8_ = lVar7;
               }

               if (uVar10 != 0) goto LAB_0011658c;
            }

            local_248 = (undefined1[16])0x0;
            local_238 = (undefined1[16])0x0;
            if (param_4 == 4) {
               if (( ( ( local_1e8._8_8_ != local_1d8._0_8_ ) && ( local_248._8_8_ = 0 ),local_248._0_8_ = local_1e8._8_8_,local_1f8._0_8_ != local_1f8._8_8_ ) ) && ( local_248._8_8_ = local_1f8._0_8_ ),local_218._8_8_ != local_208._0_8_) {
                  local_238._8_8_ = local_228._0_8_;
                  local_260 = local_248;
                  lVar7 = 4;
                  local_258 = CONCAT44(param_3, param_2);
                  local_150 = 4;
                  local_160 = (undefined8*)malloc(0x440);
                  *(undefined1(*) [16])( local_160 + 0x1c ) = (undefined1[16])0x0;
                  *local_160 = 0x41;
                  local_160[1] = 0;
                  local_160[0x22] = 0x42;
                  local_160[0x23] = 0;
                  for (int i = 0; i < 13; i++) {
                     *(undefined1(*) [16])( local_160 + ( 2*i + 2 ) ) = (undefined1[16])0;
                  }

                  *(undefined1(*) [16])( (long)local_160 + 0xef ) = (undefined1[16])0x0;
                  for (int i = 0; i < 7; i++) {
                     *(undefined1(*) [16])( local_160 + ( 4*i + 36 ) ) = (undefined1[16])0;
                     *(undefined1(*) [16])( local_160 + ( 4*i + 38 ) ) = (undefined1[16])0;
                  }

                  *(undefined1(*) [16])( local_160 + 0x60 ) = (undefined1[16])0x0;
                  local_160[0x44] = 0x47;
                  local_160[0x45] = 0;
                  local_160[0x66] = 0x52;
                  local_160[0x67] = 0;
                  *(undefined1(*) [16])( (long)local_160 + 0x1ff ) = (undefined1[16])0x0;
                  for (int i = 0; i < 13; i++) {
                     *(undefined1(*) [16])( local_160 + ( 2*i + 70 ) ) = (undefined1[16])0;
                  }

                  *(undefined1(*) [16])( (long)local_160 + 0x30f ) = (undefined1[16])0x0;
                  for (int i = 0; i < 4; i++) {
                     *(undefined1(*) [16])( local_160 + ( 6*i + 104 ) ) = (undefined1[16])0;
                     *(undefined1(*) [16])( local_160 + ( 6*i + 106 ) ) = (undefined1[16])0;
                     *(undefined1(*) [16])( local_160 + ( 6*i + 108 ) ) = (undefined1[16])0;
                  }

                  *(undefined1(*) [16])( local_160 + 0x82 ) = (undefined1[16])0x0;
                  *(undefined1(*) [16])( local_160 + 0x80 ) = (undefined1[16])0x0;
                  *(undefined1(*) [16])( (long)local_160 + 0x41f ) = (undefined1[16])0x0;
                  goto LAB_001167f0;
               }

            }
 else if (( ( local_1f8._0_8_ != local_1f8._8_8_ ) && ( local_248._8_8_ = 0 ),local_248._0_8_ = local_1f8._0_8_,local_218._8_8_ != local_208._0_8_ )) {
               local_238._8_8_ = 0;
               local_238._0_8_ = local_228._0_8_;
               local_260 = local_248;
               lVar7 = 3;
               local_258 = CONCAT44(param_3, param_2);
               local_150 = 3;
               local_160 = (undefined8*)malloc(0x330);
               *(undefined1(*) [16])( local_160 + 0x1c ) = (undefined1[16])0x0;
               *local_160 = 0x42;
               local_160[1] = 0;
               local_160[0x22] = 0x47;
               local_160[0x23] = 0;
               for (int i = 0; i < 13; i++) {
                  *(undefined1(*) [16])( local_160 + ( 2*i + 2 ) ) = (undefined1[16])0;
               }

               *(undefined1(*) [16])( (long)local_160 + 0xef ) = (undefined1[16])0x0;
               for (int i = 0; i < 13; i++) {
                  *(undefined1(*) [16])( local_160 + ( 2*i + 36 ) ) = (undefined1[16])0;
               }

               local_160[0x44] = 0x52;
               local_160[0x45] = 0;
               *(undefined1(*) [16])( local_160 + 0x3e ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( local_160 + 0x60 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( (long)local_160 + 0x1ff ) = (undefined1[16])0x0;
               for (int i = 0; i < 13; i++) {
                  *(undefined1(*) [16])( local_160 + ( 2*i + 70 ) ) = (undefined1[16])0;
               }

               *(undefined1(*) [16])( (long)local_160 + 0x30f ) = (undefined1[16])0x0;
               LAB_001167f0:pvVar3 = malloc(lVar7 << 2);
               local_158 = pvVar3;
               local_148[0] = (code*)malloc(lVar7 << 2);
               lVar7 = 0;
               do {
                  *(undefined4*)( (long)pvVar3 + lVar7 * 4 ) = 2;
                  *(uint*)( local_148[0] + lVar7 * 4 ) = ( param_5 < 1 ) + 1;
                  lVar7 = lVar7 + 1;
               }
 while ( (int)lVar7 < param_4 );
               uVar2 = 0xfffffff4;
               local_280 = (TEXRHeader*)local_1c8;
               uVar10 = tinyexr::SaveEXRNPartImageToMemory(local_278, &local_280, 1, &local_288, param_7);
               if (uVar10 != 0) {
                  free(local_160);
                  free(local_158);
                  free(local_148[0]);
                  if (uVar10 < 0x80000000) {
                     uVar2 = uVar10 & 0xffffffff;
                     *param_6 = local_288;
                  }
 else {
                     free(local_288);
                     uVar2 = 0xfffffff2;
                  }

               }

               pTVar8 = (TEXRHeader*)local_1c8;
               do {
                  pcVar1 = *(code**)( pTVar8 + -0x18 );
                  pTVar9 = pTVar8 + -0x18;
                  if (pcVar1 != (code*)0x0) {
                     operator_delete(pcVar1, (long)*(code**)( pTVar8 + -8 ) - (long)pcVar1);
                  }

                  pTVar8 = pTVar9;
               }
 while ( pTVar9 != (TEXRHeader*)local_228 );
               goto LAB_001168dc;
            }

         }

         std::__throw_out_of_range_fmt(_LC1, 0, 0);
      }
 else {
         std::__cxx11::stringstream::stringstream((stringstream*)local_1c8);
         std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_1b8, "Unsupported component value : ", 0x1e);
         poVar5 = (ostream*)std::ostream::operator <<((ostream*)local_1b8, param_4);
         std::endl<char,std::char_traits<char>>(poVar5);
         std::__cxx11::stringbuf::str();
         if (param_7 != (char**)0x0) {
            pcVar6 = strdup((char*)local_228._0_8_);
            *param_7 = pcVar6;
         }

         std::__cxx11::string::_M_dispose();
         local_1c8[0] = std::__ostream_insert<char,std::char_traits<char>>;
         local_148[0] = open64;
         local_1b8[0] = std::__cxx11::string::_M_assign;
         local_1b8[1] = std::__cxx11::string::_M_replace;
         if (local_168 != &local_158) {
            operator_delete(local_168, (long)local_158 + 1);
         }

         uVar2 = 0xfffffffd;
         local_1b8[1] = std::ios_base::~ios_base;
         std::locale::~locale(local_178);
         *(undefined8*)( (long)local_1c8 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
         local_1b8[0] = _locale;
         *(undefined8*)( (long)local_1b8 + *(long*)( _locale + -0x18 ) ) = _vtable;
         local_1c8[0] = _init;
         *(undefined8*)( (long)local_1c8 + *(long*)( _init + -0x18 ) ) = _vtable;
         local_1c8[1] = (code*)0x0;
         local_148[0] = (code*)&std::__cxx11::stringstream::vtable;
         std::ios_base::~ios_base((ios_base*)local_148);
         LAB_001168dc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar2;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   undefined4 SaveEXR(undefined4 *param_1, int param_2, int param_3, int param_4, int param_5, undefined8 param_6, undefined8 *param_7) {
      code *pcVar1;
      undefined4 uVar2;
      ulong uVar3;
      void *pvVar4;
      void *pvVar5;
      ostream *poVar6;
      char *pcVar7;
      long lVar8;
      ulong uVar9;
      code **ppcVar10;
      code **ppcVar11;
      long in_FS_OFFSET;
      undefined1 local_278[16];
      undefined8 local_268;
      undefined1 *local_260;
      undefined8 local_258;
      int local_250;
      undefined4 local_24c;
      undefined1 local_248[16];
      undefined1 local_238[16];
      undefined1 local_228[16];
      undefined1 local_218[16];
      undefined1 local_208[16];
      undefined1 local_1f8[16];
      undefined1 local_1e8[16];
      undefined1 local_1d8[16];
      code *local_1c8[2];
      code *local_1b8[8];
      locale local_178[16];
      void **local_168;
      undefined8 *local_160;
      void *local_158;
      undefined4 local_150;
      undefined4 local_14c;
      code *local_148[33];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_4 - 3U < 2 ) || ( param_4 == 1 )) {
         ppcVar10 = local_1c8;
         for (lVar8 = 0x31; lVar8 != 0; lVar8 = lVar8 + -1) {
            *ppcVar10 = (code*)0x0;
            ppcVar10 = ppcVar10 + 1;
         }

         if (( 0xf < param_2 ) || ( 0xf < param_3 )) {
            local_14c = 3;
         }

         local_258 = 0;
         uVar9 = (long)param_2 * (long)param_3;
         local_260 = (undefined1*)0x0;
         local_268 = 0;
         local_24c = 0;
         local_278 = (undefined1[16])0x0;
         local_228 = (undefined1[16])0x0;
         local_218 = (undefined1[16])0x0;
         local_208 = (undefined1[16])0x0;
         local_1f8 = (undefined1[16])0x0;
         local_1e8 = (undefined1[16])0x0;
         local_1d8 = (undefined1[16])0x0;
         local_250 = param_4;
         if (param_4 == 1) {
            local_228._0_8_ = (code*)0x0;
            pvVar4 = (void*)0x0;
            if (uVar9 != 0) {
               std::vector<float,std::allocator<float>>::_M_default_append((vector<float,std::allocator<float>>*)local_228, uVar9);
               pvVar4 = (void*)local_228._8_8_;
            }

            pvVar5 = memcpy((void*)local_228._0_8_, param_1, uVar9 * 4);
            local_248 = (undefined1[16])0x0;
            local_238 = (undefined1[16])0x0;
            if (pvVar5 != pvVar4) {
               local_248._8_8_ = 0;
               local_248._0_8_ = pvVar5;
               local_260 = local_248;
               lVar8 = 1;
               local_258 = CONCAT44(param_3, param_2);
               local_150 = 1;
               local_160 = (undefined8*)malloc(0x110);
               *(undefined1(*) [16])( local_160 + 0x1c ) = (undefined1[16])0x0;
               *local_160 = 0x41;
               local_160[1] = 0;
               for (int i = 0; i < 13; i++) {
                  *(undefined1(*) [16])( local_160 + ( 2*i + 2 ) ) = (undefined1[16])0;
               }

               *(undefined1(*) [16])( (long)local_160 + 0xef ) = (undefined1[16])0x0;
               goto LAB_00117378;
            }

         }
 else {
            if (uVar9 == 0) {
               local_1f8._8_8_ = 0;
               local_1f8._0_8_ = 0;
               uVar3 = 0;
               LAB_0011747a:if (( uVar9 < uVar3 ) && ( lVar8 = local_1f8._8_8_ != lVar8 )) {
                  local_1f8._8_8_ = lVar8;
               }

            }
 else {
               std::vector<float,std::allocator<float>>::_M_default_append((vector<float,std::allocator<float>>*)local_228, uVar9);
               uVar3 = (long)( local_208._0_8_ - local_218._8_8_ ) >> 2;
               if (uVar3 < uVar9) {
                  std::vector<float,std::allocator<float>>::_M_default_append((vector<float,std::allocator<float>>*)( local_218 + 8 ), uVar9 - uVar3);
               }
 else if (( uVar9 < uVar3 ) && ( lVar8 = lVar8 != local_208._0_8_ )) {
                  local_208._0_8_ = lVar8;
               }

               uVar3 = (long)( local_1f8._8_8_ - local_1f8._0_8_ ) >> 2;
               if (uVar9 <= uVar3) goto LAB_0011747a;
               std::vector<float,std::allocator<float>>::_M_default_append((vector<float,std::allocator<float>>*)local_1f8, uVar9 - uVar3);
            }

            uVar3 = (long)( local_1d8._0_8_ - local_1e8._8_8_ ) >> 2;
            if (uVar3 < uVar9) {
               std::vector<float,std::allocator<float>>::_M_default_append((vector<float,std::allocator<float>>*)( local_1e8 + 8 ), uVar9 - uVar3);
               LAB_00117119:uVar3 = 0;
               do {
                  *(undefined4*)( local_228._0_8_ + uVar3 * 4 ) = *param_1;
                  *(undefined4*)( local_218._8_8_ + uVar3 * 4 ) = param_1[1];
                  *(undefined4*)( local_1f8._0_8_ + uVar3 * 4 ) = param_1[2];
                  if (param_4 == 4) {
                     *(undefined4*)( local_1e8._8_8_ + uVar3 * 4 ) = param_1[3];
                  }

                  uVar3 = uVar3 + 1;
                  param_1 = param_1 + param_4;
               }
 while ( uVar3 < uVar9 );
            }
 else {
               if (( uVar9 < uVar3 ) && ( lVar8 = local_1d8._0_8_ != lVar8 )) {
                  local_1d8._0_8_ = lVar8;
               }

               if (uVar9 != 0) goto LAB_00117119;
            }

            local_248 = (undefined1[16])0x0;
            local_238 = (undefined1[16])0x0;
            if (param_4 == 4) {
               if (( ( ( local_1e8._8_8_ != local_1d8._0_8_ ) && ( local_248._8_8_ = 0 ),local_248._0_8_ = local_1e8._8_8_,local_1f8._0_8_ != local_1f8._8_8_ ) ) && ( local_248._8_8_ = local_1f8._0_8_ ),local_218._8_8_ != local_208._0_8_) {
                  local_238._8_8_ = local_228._0_8_;
                  local_260 = local_248;
                  lVar8 = 4;
                  local_258 = CONCAT44(param_3, param_2);
                  local_150 = 4;
                  local_160 = (undefined8*)malloc(0x440);
                  *(undefined1(*) [16])( local_160 + 0x1c ) = (undefined1[16])0x0;
                  *local_160 = 0x41;
                  local_160[1] = 0;
                  local_160[0x22] = 0x42;
                  local_160[0x23] = 0;
                  for (int i = 0; i < 13; i++) {
                     *(undefined1(*) [16])( local_160 + ( 2*i + 2 ) ) = (undefined1[16])0;
                  }

                  *(undefined1(*) [16])( (long)local_160 + 0xef ) = (undefined1[16])0x0;
                  for (int i = 0; i < 7; i++) {
                     *(undefined1(*) [16])( local_160 + ( 4*i + 36 ) ) = (undefined1[16])0;
                     *(undefined1(*) [16])( local_160 + ( 4*i + 38 ) ) = (undefined1[16])0;
                  }

                  *(undefined1(*) [16])( local_160 + 0x60 ) = (undefined1[16])0x0;
                  local_160[0x44] = 0x47;
                  local_160[0x45] = 0;
                  local_160[0x66] = 0x52;
                  local_160[0x67] = 0;
                  *(undefined1(*) [16])( (long)local_160 + 0x1ff ) = (undefined1[16])0x0;
                  for (int i = 0; i < 13; i++) {
                     *(undefined1(*) [16])( local_160 + ( 2*i + 70 ) ) = (undefined1[16])0;
                  }

                  *(undefined1(*) [16])( (long)local_160 + 0x30f ) = (undefined1[16])0x0;
                  for (int i = 0; i < 4; i++) {
                     *(undefined1(*) [16])( local_160 + ( 6*i + 104 ) ) = (undefined1[16])0;
                     *(undefined1(*) [16])( local_160 + ( 6*i + 106 ) ) = (undefined1[16])0;
                     *(undefined1(*) [16])( local_160 + ( 6*i + 108 ) ) = (undefined1[16])0;
                  }

                  *(undefined1(*) [16])( local_160 + 0x82 ) = (undefined1[16])0x0;
                  *(undefined1(*) [16])( local_160 + 0x80 ) = (undefined1[16])0x0;
                  *(undefined1(*) [16])( (long)local_160 + 0x41f ) = (undefined1[16])0x0;
                  goto LAB_00117378;
               }

            }
 else if (( ( local_1f8._0_8_ != local_1f8._8_8_ ) && ( local_248._8_8_ = 0 ),local_248._0_8_ = local_1f8._0_8_,local_218._8_8_ != local_208._0_8_ )) {
               local_238._8_8_ = 0;
               local_238._0_8_ = local_228._0_8_;
               local_260 = local_248;
               lVar8 = 3;
               local_258 = CONCAT44(param_3, param_2);
               local_150 = 3;
               local_160 = (undefined8*)malloc(0x330);
               *(undefined1(*) [16])( local_160 + 0x1c ) = (undefined1[16])0x0;
               *local_160 = 0x42;
               local_160[1] = 0;
               local_160[0x22] = 0x47;
               local_160[0x23] = 0;
               for (int i = 0; i < 13; i++) {
                  *(undefined1(*) [16])( local_160 + ( 2*i + 2 ) ) = (undefined1[16])0;
               }

               *(undefined1(*) [16])( (long)local_160 + 0xef ) = (undefined1[16])0x0;
               for (int i = 0; i < 13; i++) {
                  *(undefined1(*) [16])( local_160 + ( 2*i + 36 ) ) = (undefined1[16])0;
               }

               local_160[0x44] = 0x52;
               local_160[0x45] = 0;
               *(undefined1(*) [16])( local_160 + 0x3e ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( local_160 + 0x60 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( (long)local_160 + 0x1ff ) = (undefined1[16])0x0;
               for (int i = 0; i < 13; i++) {
                  *(undefined1(*) [16])( local_160 + ( 2*i + 70 ) ) = (undefined1[16])0;
               }

               *(undefined1(*) [16])( (long)local_160 + 0x30f ) = (undefined1[16])0x0;
               LAB_00117378:pvVar4 = malloc(lVar8 << 2);
               local_158 = pvVar4;
               local_148[0] = (code*)malloc(lVar8 << 2);
               lVar8 = 0;
               do {
                  *(undefined4*)( (long)pvVar4 + lVar8 * 4 ) = 2;
                  *(uint*)( local_148[0] + lVar8 * 4 ) = ( param_5 < 1 ) + 1;
                  lVar8 = lVar8 + 1;
               }
 while ( (int)lVar8 < param_4 );
               uVar2 = SaveEXRImageToFile(local_278, local_1c8, param_6, param_7);
               free(local_160);
               free(local_158);
               free(local_148[0]);
               ppcVar10 = local_1c8;
               do {
                  pcVar1 = ppcVar10[-3];
                  ppcVar11 = ppcVar10 + -3;
                  if (pcVar1 != (code*)0x0) {
                     operator_delete(pcVar1, (long)ppcVar10[-1] - (long)pcVar1);
                  }

                  ppcVar10 = ppcVar11;
               }
 while ( ppcVar11 != (code**)local_228 );
               goto LAB_0011742c;
            }

         }

         std::__throw_out_of_range_fmt(_LC1, 0, 0);
      }
 else {
         std::__cxx11::stringstream::stringstream((stringstream*)local_1c8);
         std::__ostream_insert<char,std::char_traits<char>>((ostream*)local_1b8, "Unsupported component value : ", 0x1e);
         poVar6 = (ostream*)std::ostream::operator <<((ostream*)local_1b8, param_4);
         std::endl<char,std::char_traits<char>>(poVar6);
         std::__cxx11::stringbuf::str();
         if (param_7 != (undefined8*)0x0) {
            pcVar7 = strdup((char*)local_228._0_8_);
            *param_7 = pcVar7;
         }

         std::__cxx11::string::_M_dispose();
         local_1c8[0] = std::__ostream_insert<char,std::char_traits<char>>;
         local_148[0] = open64;
         local_1b8[0] = std::__cxx11::string::_M_assign;
         local_1b8[1] = std::__cxx11::string::_M_replace;
         if (local_168 != &local_158) {
            operator_delete(local_168, (long)local_158 + 1);
         }

         uVar2 = 0xfffffffd;
         local_1b8[1] = std::ios_base::~ios_base;
         std::locale::~locale(local_178);
         *(undefined8*)( (long)local_1c8 + *(long*)( _vtable + -0x18 ) ) = ___ostream_insert<char,std::char_traits<char>>;
         local_1b8[0] = _locale;
         *(undefined8*)( (long)local_1b8 + *(long*)( _locale + -0x18 ) ) = _vtable;
         local_1c8[0] = _init;
         *(undefined8*)( (long)local_1c8 + *(long*)( _init + -0x18 ) ) = _vtable;
         local_1c8[1] = (code*)0x0;
         local_148[0] = (code*)&std::__cxx11::stringstream::vtable;
         std::ios_base::~ios_base((ios_base*)local_148);
         LAB_0011742c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return uVar2;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   int ParseEXRMultipartHeaderFromMemory(long *param_1, undefined4 *param_2, allocator *param_3, long param_4, ulong param_5, undefined8 *param_6) {
      void *pvVar1;
      undefined1 auVar2[16];
      undefined8 uVar3;
      char cVar4;
      int iVar5;
      void *pvVar6;
      TEXRHeader *pTVar7;
      char *pcVar8;
      char *pcVar9;
      HeaderInfo *pHVar10;
      HeaderInfo *this;
      uchar *puVar11;
      undefined8 *puVar12;
      undefined8 *puVar13;
      HeaderInfo *pHVar14;
      ulong uVar15;
      ulong uVar16;
      long lVar17;
      ulong uVar18;
      long lVar19;
      long in_FS_OFFSET;
      undefined4 local_1d0;
      HeaderInfo *local_1c0;
      bool local_171;
      ulong local_170;
      undefined1 local_168[16];
      HeaderInfo *local_158;
      char *local_148;
      undefined8 local_140;
      char local_138;
      undefined7 uStack_137;
      ulong *local_128;
      ulong local_120;
      ulong local_118[2];
      undefined1 local_108[16];
      undefined1 local_f8[8];
      void *pvStack_f0;
      undefined1 local_e8[16];
      undefined1 local_d8[16];
      undefined1 local_c8[16];
      undefined4 local_b8;
      undefined1 local_b4[16];
      undefined1 local_a4[16];
      undefined8 local_94;
      uint local_8c;
      undefined4 local_88;
      undefined1 *local_80;
      undefined8 local_78;
      undefined1 local_70;
      undefined7 uStack_6f;
      undefined1 *local_60;
      undefined8 local_58;
      undefined1 local_50;
      undefined7 uStack_4f;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( ( param_4 == 0 ) || ( param_1 == (long*)0x0 ) ) || ( param_2 == (undefined4*)0x0 ) ) || ( param_3 == (allocator*)0x0 )) {
         std::__cxx11::string::string<std::allocator<char>>((string*)local_108, "Invalid argument for ParseEXRMultipartHeaderFromMemory", param_3);
         if (param_6 != (undefined8*)0x0) {
            pcVar9 = strdup((char*)local_108._0_8_);
            *param_6 = pcVar9;
         }

         std::__cxx11::string::_M_dispose();
         iVar5 = -3;
      }
 else if (param_5 < 8) {
         std::__cxx11::string::string<std::allocator<char>>((string*)local_108, "Data size too short", param_3);
         if (param_6 != (undefined8*)0x0) {
            pcVar9 = strdup((char*)local_108._0_8_);
            *param_6 = pcVar9;
         }

         std::__cxx11::string::_M_dispose();
         iVar5 = -4;
      }
 else {
         puVar11 = (uchar*)( param_4 + 8 );
         this(HeaderInfo * 0x0);
         local_158 = (HeaderInfo*)0x0;
         local_1c0 = (HeaderInfo*)0x0;
         local_168 = (undefined1[16])0x0;
         while (true) {
            local_78 = 0;
            local_70 = 0;
            local_58 = 0;
            local_50 = 0;
            local_b8 = 0;
            local_94 = 0;
            local_8c = 0;
            local_88 = 0;
            local_140 = 0;
            local_138 = '\0';
            local_171 = false;
            local_108 = (undefined1[16])0x0;
            _local_f8 = (undefined1[16])0x0;
            local_e8 = (undefined1[16])0x0;
            local_d8 = (undefined1[16])0x0;
            local_c8 = (undefined1[16])0x0;
            local_b4 = (undefined1[16])0x0;
            local_a4 = (undefined1[16])0x0;
            local_148 = &local_138;
            local_80 = &local_70;
            local_60 = &local_50;
            iVar5 = tinyexr::ParseEXRHeader((HeaderInfo*)local_108, &local_171, (TEXRVersion*)param_3, (string*)&local_148, puVar11, param_5 - 8);
            if (iVar5 != 0) break;
            if (local_171 != false) {
               if (local_148 != &local_138) {
                  operator_delete(local_148, CONCAT71(uStack_137, local_138) + 1);
               }

               if (local_60 != &local_50) {
                  operator_delete(local_60, CONCAT71(uStack_4f, local_50) + 1);
               }

               if (local_80 != &local_70) {
                  operator_delete(local_80, CONCAT71(uStack_6f, local_70) + 1);
               }

               if (pvStack_f0 != (void*)0x0) {
                  operator_delete(pvStack_f0, local_e8._8_8_ - (long)pvStack_f0);
               }

               uVar3 = local_108._8_8_;
               puVar13 = (undefined8*)local_108._0_8_;
               if (local_108._8_8_ != local_108._0_8_) {
                  do {
                     if ((undefined8*)*puVar13 != puVar13 + 2) {
                        operator_delete((undefined8*)*puVar13, puVar13[2] + 1);
                     }

                     puVar13 = puVar13 + 7;
                  }
 while ( (undefined8*)uVar3 != puVar13 );
               }

               if ((undefined8*)local_108._0_8_ != (undefined8*)0x0) {
                  operator_delete((void*)local_108._0_8_, (long)local_f8 - local_108._0_8_);
               }

               pHVar10 = (HeaderInfo*)local_168._0_8_;
               lVar19 = (long)this - local_168._0_8_ >> 3;
               uVar15 = lVar19 * -0x70a3d70a3d70a3d7;
               pvVar6 = malloc(lVar19 * 0x7ae147ae147ae148);
               *param_1 = (long)pvVar6;
               local_1d0 = (undefined4)uVar15;
               if (pHVar10 != this) {
                  uVar16 = 0;
                  pHVar14 = pHVar10;
                  do {
                     pTVar7 = (TEXRHeader*)calloc(0x188, 1);
                     local_120 = 0;
                     local_118[0] = local_118[0] & 0xffffffffffffff00;
                     local_108._8_8_ = 0;
                     local_108._0_8_ = local_f8;
                     auVar2[0xf] = 0;
                     auVar2._0_15_ = stack0xffffffffffffff09;
                     _local_f8 = auVar2 << 8;
                     local_128 = local_118;
                     cVar4 = tinyexr::ConvertHeader(pTVar7, pHVar14, (string*)&local_128, (string*)local_108);
                     if (cVar4 == '\0') {
                        lVar19 = *(long*)( pHVar14 + 0x18 );
                        lVar17 = 0;
                        uVar18 = 0;
                        if (lVar19 != *(long*)( pHVar14 + 0x20 )) {
                           do {
                              pvVar6 = *(void**)( lVar19 + 0x200 + lVar17 );
                              if (pvVar6 != (void*)0x0) {
                                 free(pvVar6);
                                 lVar19 = *(long*)( pHVar14 + 0x18 );
                              }

                              uVar18 = uVar18 + 1;
                              lVar17 = lVar17 + 0x210;
                           }
 while ( uVar18 < ( ulong )(( *(long*)( pHVar14 + 0x20 ) - lVar19 >> 4 ) * 0xf83e0f83e0f83e1) );
                        }

                        pcVar9 = (char*)local_108._0_8_;
                        if (( local_108._8_8_ != 0 ) && ( param_6 != (undefined8*)0x0 )) {
                           pcVar8 = strdup((char*)local_108._0_8_);
                           *param_6 = pcVar8;
                        }

                        iVar5 = -9;
                     }
 else {
                        pcVar9 = (char*)local_108._0_8_;
                     }

                     *(uint*)( pTVar7 + 0x54 ) = ( uint )(*(int*)( param_3 + 0x10 ) != 0);
                     *(TEXRHeader**)( *param_1 + uVar16 * 8 ) = pTVar7;
                     if (pcVar9 != local_f8) {
                        operator_delete(pcVar9, (long)local_f8 + 1);
                     }

                     if (local_128 != local_118) {
                        operator_delete(local_128, local_118[0] + 1);
                     }

                     uVar16 = uVar16 + 1;
                     pHVar14 = pHVar14 + 200;
                  }
 while ( uVar16 < uVar15 );
                  *param_2 = local_1d0;
                  pHVar14 = pHVar10;
                  goto joined_r0x00117efd;
               }

               *param_2 = local_1d0;
               goto LAB_00117fc1;
            }

            if (local_a4._0_4_ == 0) {
               lVar19 = 0;
               uVar15 = 0;
               pvVar6 = pvStack_f0;
               if ((void*)local_e8._0_8_ != pvStack_f0) {
                  do {
                     pvVar1 = *(void**)( (long)pvVar6 + 0x200 + lVar19 );
                     if (pvVar1 != (void*)0x0) {
                        free(pvVar1);
                        pvVar6 = pvStack_f0;
                     }

                     uVar15 = uVar15 + 1;
                     lVar19 = lVar19 + 0x210;
                  }
 while ( uVar15 < ( ulong )(( local_e8._0_8_ - (long)pvVar6 >> 4 ) * 0xf83e0f83e0f83e1) );
               }

               local_170 = 0x32;
               local_128 = local_118;
               local_128 = (ulong*)std::__cxx11::string::_M_create((ulong*)&local_128, ( ulong ) & local_170);
               uVar15 = _UNK_0011cf78;
               local_118[0] = local_170;
               *local_128 = __LC188;
               local_128[1] = uVar15;
               uVar16 = _UNK_0011cf88;
               uVar15 = __LC189;
               *(undefined2*)( local_128 + 6 ) = 0x2e72;
               local_128[2] = uVar15;
               local_128[3] = uVar16;
               uVar15 = _UNK_0011cf98;
               local_128[4] = __LC190;
               local_128[5] = uVar15;
               local_120 = local_170;
               *(char*)( (long)local_128 + local_170 ) = '\0';
               if (param_6 != (undefined8*)0x0) {
                  pcVar9 = strdup((char*)local_128);
                  *param_6 = pcVar9;
               }

               if (local_128 != local_118) {
                  operator_delete(local_128, local_118[0] + 1);
               }

               iVar5 = -4;
               pcVar9 = local_148;
               goto LAB_00117df0;
            }

            if (this == local_1c0) {
               std::vector<tinyexr::HeaderInfo,std::allocator<tinyexr::HeaderInfo>>::_M_realloc_insert<tinyexr::HeaderInfo_const&>((vector<tinyexr::HeaderInfo,std::allocator<tinyexr::HeaderInfo>>*)local_168, this, (HeaderInfo*)local_108);
               local_1c0 = local_158;
               this(HeaderInfo * local_168._8_8_);
            }
 else {
               tinyexr::HeaderInfo::HeaderInfo(this, (HeaderInfo*)local_108);
               local_168._8_8_ = this + 200;
               this =
               this + 200;
            }

            puVar11 = puVar11 + local_8c;
            if (local_148 != &local_138) {
               operator_delete(local_148, CONCAT71(uStack_137, local_138) + 1);
            }

            if (local_60 != &local_50) {
               operator_delete(local_60, CONCAT71(uStack_4f, local_50) + 1);
            }

            if (local_80 != &local_70) {
               operator_delete(local_80, CONCAT71(uStack_6f, local_70) + 1);
            }

            if (pvStack_f0 != (void*)0x0) {
               operator_delete(pvStack_f0, local_e8._8_8_ - (long)pvStack_f0);
            }

            uVar3 = local_108._8_8_;
            puVar13 = (undefined8*)local_108._0_8_;
            if (local_108._8_8_ != local_108._0_8_) {
               do {
                  if ((undefined8*)*puVar13 != puVar13 + 2) {
                     operator_delete((undefined8*)*puVar13, puVar13[2] + 1);
                  }

                  puVar13 = puVar13 + 7;
               }
 while ( (undefined8*)uVar3 != puVar13 );
            }

            if ((undefined8*)local_108._0_8_ != (undefined8*)0x0) {
               operator_delete((void*)local_108._0_8_, (long)local_f8 - local_108._0_8_);
            }

         }
;
         lVar19 = 0;
         uVar15 = 0;
         pvVar6 = pvStack_f0;
         if (pvStack_f0 != (void*)local_e8._0_8_) {
            do {
               pvVar1 = *(void**)( (long)pvVar6 + 0x200 + lVar19 );
               if (pvVar1 != (void*)0x0) {
                  free(pvVar1);
                  pvVar6 = pvStack_f0;
               }

               uVar15 = uVar15 + 1;
               lVar19 = lVar19 + 0x210;
            }
 while ( uVar15 < ( ulong )(( local_e8._0_8_ - (long)pvVar6 >> 4 ) * 0xf83e0f83e0f83e1) );
         }

         pcVar9 = local_148;
         if (param_6 != (undefined8*)0x0) {
            pcVar8 = strdup(local_148);
            *param_6 = pcVar8;
         }

         LAB_00117df0:if (pcVar9 != &local_138) {
            operator_delete(pcVar9, CONCAT71(uStack_137, local_138) + 1);
         }

         if (local_60 != &local_50) {
            operator_delete(local_60, CONCAT71(uStack_4f, local_50) + 1);
         }

         if (local_80 != &local_70) {
            operator_delete(local_80, CONCAT71(uStack_6f, local_70) + 1);
         }

         if (pvStack_f0 != (void*)0x0) {
            operator_delete(pvStack_f0, local_e8._8_8_ - (long)pvStack_f0);
         }

         uVar3 = local_108._8_8_;
         puVar13 = (undefined8*)local_108._0_8_;
         if (local_108._8_8_ != local_108._0_8_) {
            do {
               if ((undefined8*)*puVar13 != puVar13 + 2) {
                  operator_delete((undefined8*)*puVar13, puVar13[2] + 1);
               }

               puVar13 = puVar13 + 7;
            }
 while ( (undefined8*)uVar3 != puVar13 );
         }

         if ((undefined8*)local_108._0_8_ != (undefined8*)0x0) {
            operator_delete((void*)local_108._0_8_, (long)local_f8 - local_108._0_8_);
         }

         pHVar14 = (HeaderInfo*)local_168._0_8_;
         pHVar10 = (HeaderInfo*)local_168._0_8_;
         joined_r0x00117efd:for (; this != pHVar14; pHVar14 = pHVar14 + 200) {
            if (*(HeaderInfo**)( pHVar14 + 0xa8 ) != pHVar14 + 0xb8) {
               operator_delete(*(HeaderInfo**)( pHVar14 + 0xa8 ), *(long*)( pHVar14 + 0xb8 ) + 1);
            }

            if (*(HeaderInfo**)( pHVar14 + 0x88 ) != pHVar14 + 0x98) {
               operator_delete(*(HeaderInfo**)( pHVar14 + 0x88 ), *(long*)( pHVar14 + 0x98 ) + 1);
            }

            pvVar6 = *(void**)( pHVar14 + 0x18 );
            if (pvVar6 != (void*)0x0) {
               operator_delete(pvVar6, *(long*)( pHVar14 + 0x28 ) - (long)pvVar6);
            }

            puVar13 = *(undefined8**)( pHVar14 + 8 );
            puVar12 = *(undefined8**)pHVar14;
            if (puVar13 != puVar12) {
               do {
                  if ((undefined8*)*puVar12 != puVar12 + 2) {
                     operator_delete((undefined8*)*puVar12, puVar12[2] + 1);
                  }

                  puVar12 = puVar12 + 7;
               }
 while ( puVar13 != puVar12 );
               puVar12 = *(undefined8**)pHVar14;
            }

            if (puVar12 != (undefined8*)0x0) {
               operator_delete(puVar12, *(long*)( pHVar14 + 0x10 ) - (long)puVar12);
            }

         }

         LAB_00117fc1:if (pHVar10 != (HeaderInfo*)0x0) {
            operator_delete(pHVar10, (long)local_1c0 - (long)pHVar10);
         }

      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return iVar5;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   undefined4 ParseEXRMultipartHeaderFromFile(long param_1, long param_2, long param_3, char *param_4, undefined8 *param_5) {
      long *plVar1;
      ulong uVar2;
      __nlink_t *p_Var3;
      undefined8 uVar4;
      __dev_t _Var5;
      __blksize_t _Var6;
      int __fd;
      int iVar7;
      undefined4 uVar8;
      void *__addr;
      size_t __n;
      long *plVar9;
      char *pcVar10;
      uint uVar11;
      size_t *psVar12;
      ulong uVar13;
      long *plVar15;
      long lVar16;
      __nlink_t *p_Var17;
      long in_FS_OFFSET;
      size_t local_100;
      size_t *local_f8;
      size_t local_f0;
      size_t local_e8[2];
      stat64 local_d8;
      long local_40;
      ulong uVar14;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( ( ( param_1 == 0 ) || ( param_2 == 0 ) ) || ( param_3 == 0 ) ) || ( param_4 == (char*)0x0 )) {
         local_100 = 0x36;
         local_d8.st_dev = ( __dev_t ) & local_d8.st_nlink;
         local_d8.st_dev = std::__cxx11::string::_M_create(&local_d8.st_dev, ( ulong ) & local_100);
         uVar4 = _UNK_0011ce58;
         local_d8.st_nlink = local_100;
         *(__nlink_t*)local_d8.st_dev = __LC117;
         *(undefined8*)( local_d8.st_dev + 8 ) = uVar4;
         _Var5 = _UNK_0011cfa8;
         *(undefined8*)( local_d8.st_dev + 0x10 ) = __LC192;
         *(__dev_t*)( local_d8.st_dev + 0x18 ) = _Var5;
         _Var6 = _UNK_0011cfb8;
         *(__off_t*)( local_d8.st_dev + 0x20 ) = __LC193;
         *(__blksize_t*)( local_d8.st_dev + 0x28 ) = _Var6;
         builtin_strncpy((char*)( local_d8.st_dev + 0x2e ), "omFile()", 8);
         local_d8.st_ino = local_100;
         *(char*)( local_d8.st_dev + local_100 ) = '\0';
         if (param_5 != (undefined8*)0x0) {
            pcVar10 = strdup((char*)local_d8.st_dev);
            *param_5 = pcVar10;
         }

         if ((__nlink_t*)local_d8.st_dev != &local_d8.st_nlink) {
            operator_delete((void*)local_d8.st_dev, local_d8.st_nlink + 1);
         }

         uVar8 = 0xfffffffd;
         goto LAB_0011860f;
      }

      __fd = open64(param_4, 0);
      if (( ( __fd == -1 ) || ( iVar7 = iVar7 < 0 ) ) || ( ( local_d8.st_size < 0 || ( ( __addr = mmap64((void*)0x0, local_d8.st_size, 1, 1, __fd, 0) ),__addr == (void*)0xffffffffffffffff || ( __addr == (void*)0x0 ) ) ) )) {
         local_f8 = local_e8;
         __n = strlen(param_4);
         local_100 = __n;
         if (__n < 0x10) {
            psVar12 = local_e8;
            if (__n == 1) {
               local_e8[0] = CONCAT71(local_e8[0]._1_7_, *param_4);
            }
 else if (__n != 0) goto LAB_00118771;
         }
 else {
            local_f8 = (size_t*)std::__cxx11::string::_M_create((ulong*)&local_f8, ( ulong ) & local_100);
            local_e8[0] = local_100;
            psVar12 = local_f8;
            LAB_00118771:memcpy(psVar12, param_4, __n);
            psVar12 = local_f8;
         }

         *(undefined1*)( (long)psVar12 + local_100 ) = 0;
         p_Var3 = &local_d8.st_nlink;
         local_f0 = local_100;
         plVar9 = (long*)std::__cxx11::string::_M_replace(( ulong ) & local_f8, 0, (char*)0x0, 0x1189a7);
         plVar1 = plVar9 + 2;
         if ((__nlink_t*)*plVar9 == (__nlink_t*)plVar1) {
            uVar2 = plVar9[1] + 1;
            plVar15 = plVar1;
            p_Var17 = p_Var3;
            if (7 < (uint)uVar2) {
               uVar13 = 0;
               do {
                  uVar11 = (int)uVar13 + 8;
                  uVar14 = (ulong)uVar11;
                  *(undefined8*)( (long)p_Var3 + uVar13 ) = *(undefined8*)( (long)plVar1 + uVar13 );
                  uVar13 = uVar14;
               }
 while ( uVar11 < ( (uint)uVar2 & 0xfffffff8 ) );
               p_Var17 = (__nlink_t*)( (long)p_Var3 + uVar14 );
               plVar15 = (long*)( uVar14 + (long)plVar1 );
            }

            lVar16 = 0;
            if (( uVar2 & 4 ) != 0) {
               *(int*)p_Var17 = (int)*plVar15;
               lVar16 = 4;
            }

            if (( uVar2 & 2 ) != 0) {
               *(undefined2*)( (long)p_Var17 + lVar16 ) = *(undefined2*)( (long)plVar15 + lVar16 );
               lVar16 = lVar16 + 2;
            }

            local_d8.st_dev = (__dev_t)p_Var3;
            if (( uVar2 & 1 ) != 0) {
               *(undefined1*)( (long)p_Var17 + lVar16 ) = *(undefined1*)( (long)plVar15 + lVar16 );
            }

         }
 else {
            local_d8.st_nlink = plVar9[2];
            local_d8.st_dev = ( __dev_t ) * plVar9;
         }

         local_d8.st_ino = plVar9[1];
         *plVar9 = (long)plVar1;
         plVar9[1] = 0;
         *(undefined1*)( plVar9 + 2 ) = 0;
         if (param_5 != (undefined8*)0x0) {
            pcVar10 = strdup((char*)local_d8.st_dev);
            *param_5 = pcVar10;
         }

         if ((__nlink_t*)local_d8.st_dev != p_Var3) {
            operator_delete((void*)local_d8.st_dev, local_d8.st_nlink + 1);
         }

         if (local_f8 != local_e8) {
            operator_delete(local_f8, local_e8[0] + 1);
         }

         uVar8 = 0xfffffff9;
         if (__fd == -1) goto LAB_0011860f;
      }
 else {
         uVar8 = ParseEXRMultipartHeaderFromMemory(param_1, param_2, param_3, __addr, local_d8.st_size, param_5);
         munmap(__addr, local_d8.st_size);
      }

      close(__fd);
      LAB_0011860f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar8;
   }

   /* std::ctype<char>::do_widen(char) const */
   undefined4 std::ctype<char>::do_widen(ctype<char> *this, char param_1) {
      undefined3 in_register_00000031;
      return CONCAT31(in_register_00000031, param_1);
   }

   /* std::thread::_M_thread_deps_never_run() */
   void std::thread::_M_thread_deps_never_run(void) {
      return;
   }

   /* WARNING: Unknown calling convention -- yet parameter storage is locked */
   /* std::__cxx11::string std::TEMPNAMEPLACEHOLDERVALUE(char const*, std::__cxx11::string&&) */
   char *std::operator +(char *param_1, string *param_2) {
      long *plVar1;
      long *plVar2;
      long lVar3;
      uint uVar4;
      ulong in_RDX;
      ulong uVar5;
      uint uVar6;
      strlen((char*)param_2);
      plVar2 = (long*)std::__cxx11::string::_M_replace(in_RDX, 0, (char*)0x0, (ulong)param_2);
      *(char**)param_1 = param_1 + 0x10;
      plVar1 = plVar2 + 2;
      if ((long*)*plVar2 == plVar1) {
         lVar3 = plVar2[1];
         uVar5 = lVar3 + 1;
         uVar6 = (uint)uVar5;
         if (uVar6 < 8) {
            if (( uVar5 & 4 ) != 0) {
               *(int*)( param_1 + 0x10 ) = (int)plVar2[2];
               *(undefined4*)( param_1 + ( uVar5 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)plVar2 + ( uVar5 & 0xffffffff ) + 0xc );
               lVar3 = plVar2[1];
               goto LAB_00119cdd;
            }

            if (uVar6 == 0) goto LAB_00119cdd;
            param_1[0x10] = (char)plVar2[2];
            if (( uVar5 & 2 ) != 0) {
               *(undefined2*)( param_1 + ( uVar5 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)plVar2 + ( uVar5 & 0xffffffff ) + 0xe );
               lVar3 = plVar2[1];
               goto LAB_00119cdd;
            }

         }
 else {
            *(long*)( param_1 + 0x10 ) = plVar2[2];
            *(undefined8*)( param_1 + ( uVar5 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)plVar2 + ( uVar5 & 0xffffffff ) + 8 );
            lVar3 = (long)( param_1 + 0x10 ) - ( ( ulong )(param_1 + 0x18) & 0xfffffffffffffff8 );
            uVar6 = uVar6 + (int)lVar3 & 0xfffffff8;
            if (7 < uVar6) {
               uVar5 = 0;
               do {
                  uVar4 = (int)uVar5 + 8;
                  *(undefined8*)( ( ( ulong )(param_1 + 0x18) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( (long)plVar1 + ( uVar5 - lVar3 ) );
                  uVar5 = (ulong)uVar4;
               }
 while ( uVar4 < uVar6 );
            }

         }

      }
 else {
         *(long*)param_1 = *plVar2;
         *(long*)( param_1 + 0x10 ) = plVar2[2];
      }

      lVar3 = plVar2[1];
      LAB_00119cdd:*(long*)( param_1 + 8 ) = lVar3;
      *plVar2 = (long)plVar1;
      plVar2[1] = 0;
      *(undefined1*)( plVar2 + 2 ) = 0;
      return param_1;
   }

   /* std::vector<tinyexr::OffsetData, std::allocator<tinyexr::OffsetData> >::reserve(unsigned long) */
   void std::vector<tinyexr::OffsetData,std::allocator<tinyexr::OffsetData>>::reserve(vector<tinyexr::OffsetData,std::allocator<tinyexr::OffsetData>> *this, ulong param_1) {
      long lVar1;
      long lVar2;
      undefined8 *puVar3;
      undefined8 *puVar4;
      undefined8 uVar5;
      undefined8 uVar6;
      undefined8 uVar7;
      undefined8 *puVar8;
      undefined8 *puVar9;
      undefined8 *puVar10;
      undefined8 *puVar11;
      if (param_1 >> 0x3a != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::reserve");
      }

      lVar1 = *(long*)this;
      if (param_1 <= ( ulong )(*(long*)( this + 0x10 ) - lVar1 >> 5)) {
         return;
      }

      lVar2 = *(long*)( this + 8 );
      puVar8 = (undefined8*)operator_new(param_1 * 0x20);
      puVar3 = *(undefined8**)this;
      puVar4 = *(undefined8**)( this + 8 );
      if (puVar4 != puVar3) {
         puVar9 = puVar8;
         puVar11 = puVar3;
         do {
            uVar6 = *puVar11;
            uVar7 = puVar11[1];
            puVar10 = puVar9 + 4;
            puVar9[2] = puVar11[2];
            uVar5 = puVar11[3];
            *puVar9 = uVar6;
            puVar9[1] = uVar7;
            puVar9[3] = uVar5;
            puVar9 = puVar10;
            puVar11 = puVar11 + 4;
         }
 while ( puVar10 != (undefined8*)( (long)puVar8 + ( (long)puVar4 - (long)puVar3 ) ) );
      }

      if (puVar3 != (undefined8*)0x0) {
         operator_delete(puVar3, *(long*)( this + 0x10 ) - (long)puVar3);
      }

      *(undefined8**)this = puVar8;
      *(long*)( this + 8 ) = (long)puVar8 + ( lVar2 - lVar1 );
      *(undefined8**)( this + 0x10 ) = puVar8 + param_1 * 4;
      return;
   }

   /* std::vector<unsigned char, std::allocator<unsigned char> >::_M_default_append(unsigned long) */
   void std::vector<unsigned_char,std::allocator<unsigned_char>>::_M_default_append(vector<unsigned_char,std::allocator<unsigned_char>> *this, ulong param_1) {
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
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_default_append");
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

         if (uVar3 != 0) goto LAB_00119f52;
         if (__src == (void*)0x0) goto LAB_00119f6f;
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

         LAB_00119f52:memmove(__dest, __src, uVar3);
         uVar3 = *(long*)( this + 0x10 ) - (long)__src;
      }

      operator_delete(__src, uVar3);
      LAB_00119f6f:*(void**)this = __dest;
      *(ulong*)( this + 8 ) = uVar1 + (long)__dest;
      *(ulong*)( this + 0x10 ) = (long)__dest + uVar5;
      return;
   }

   /* void std::vector<tinyexr::TChannelInfo, std::allocator<tinyexr::TChannelInfo>
   >::_M_realloc_insert<tinyexr::TChannelInfo
   const&>(__gnu_cxx::__normal_iterator<tinyexr::TChannelInfo*, std::vector<tinyexr::TChannelInfo,
   std::allocator<tinyexr::TChannelInfo> > >, tinyexr::TChannelInfo const&) */
   void std::vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>>::_M_realloc_insert<tinyexr::TChannelInfo_const&>(vector<tinyexr::TChannelInfo,std::allocator<tinyexr::TChannelInfo>> *this, long *param_2, long *param_3) {
      undefined2 uVar1;
      long *plVar2;
      long *plVar3;
      long *plVar4;
      long lVar5;
      long lVar6;
      ulong uVar7;
      long *plVar8;
      undefined8 *puVar9;
      undefined8 *puVar10;
      long *plVar11;
      uint uVar12;
      long lVar13;
      ulong uVar14;
      uint uVar15;
      undefined8 *local_58;
      long local_48;
      plVar2 = *(long**)( this + 8 );
      plVar3 = *(long**)this;
      lVar6 = (long)plVar2 - (long)plVar3 >> 3;
      uVar7 = lVar6 * 0x6db6db6db6db6db7;
      if (uVar7 == 0x249249249249249) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_realloc_insert");
      }

      if (plVar3 == plVar2) {
         uVar14 = uVar7 + 1;
         if (0xfffffffffffffffe < uVar7) goto LAB_0011a218;
         if (0x249249249249249 < uVar14) {
            uVar14 = 0x249249249249249;
         }

         uVar14 = uVar14 * 0x38;
      }
 else {
         uVar14 = lVar6 * -0x2492492492492492;
         if (uVar14 < uVar7) {
            LAB_0011a218:uVar14 = 0x7ffffffffffffff8;
         }
 else {
            if (uVar14 == 0) {
               local_48 = 0;
               puVar10 = (undefined8*)0x38;
               local_58 = (undefined8*)0x0;
               goto LAB_0011a0d8;
            }

            if (0x249249249249249 < uVar14) {
               uVar14 = 0x249249249249249;
            }

            uVar14 = uVar14 * 0x38;
         }

      }

      local_58 = (undefined8*)operator_new(uVar14);
      local_48 = (long)local_58 + uVar14;
      puVar10 = local_58 + 7;
      LAB_0011a0d8:lVar6 = *param_3;
      plVar8 = (long*)( (long)local_58 + ( (long)param_2 - (long)plVar3 ) );
      *plVar8 = (long)( plVar8 + 2 );
      __cxx11::string::_M_construct<char*>(plVar8, lVar6, param_3[1] + lVar6);
      lVar6 = param_3[4];
      lVar13 = param_3[5];
      *(char*)( plVar8 + 6 ) = (char)param_3[6];
      uVar1 = *(undefined2*)( (long)param_3 + 0x31 );
      plVar8[4] = lVar6;
      plVar8[5] = lVar13;
      *(undefined2*)( (long)plVar8 + 0x31 ) = uVar1;
      *(undefined1*)( (long)plVar8 + 0x33 ) = *(undefined1*)( (long)param_3 + 0x33 );
      if (param_2 != plVar3) {
         plVar8 = plVar3 + 2;
         puVar9 = local_58;
         do {
            puVar10 = puVar9;
            plVar11 = puVar10 + 2;
            *puVar10 = plVar11;
            if (plVar8 == (long*)plVar8[-2]) {
               uVar7 = plVar8[-1] + 1;
               uVar15 = (uint)uVar7;
               if (uVar15 < 8) {
                  if (( uVar7 & 4 ) == 0) {
                     if (( uVar15 != 0 ) && ( *(char*)plVar11 = (char)*plVar8(uVar7 & 2) != 0 )) {
                        *(undefined2*)( (long)puVar10 + ( uVar7 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)plVar8 + ( ( uVar7 & 0xffffffff ) - 2 ) );
                     }

                  }
 else {
                     *(int*)plVar11 = (int)*plVar8;
                     *(undefined4*)( (long)puVar10 + ( uVar7 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)plVar8 + ( ( uVar7 & 0xffffffff ) - 4 ) );
                  }

               }
 else {
                  *plVar11 = *plVar8;
                  *(undefined8*)( (long)puVar10 + ( uVar7 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)plVar8 + ( ( uVar7 & 0xffffffff ) - 8 ) );
                  lVar6 = (long)plVar11 - ( ( ulong )(puVar10 + 3) & 0xfffffffffffffff8 );
                  uVar15 = uVar15 + (int)lVar6 & 0xfffffff8;
                  if (7 < uVar15) {
                     uVar7 = 0;
                     do {
                        uVar12 = (int)uVar7 + 8;
                        *(undefined8*)( ( ( ulong )(puVar10 + 3) & 0xfffffffffffffff8 ) + uVar7 ) = *(undefined8*)( (long)plVar8 + ( uVar7 - lVar6 ) );
                        uVar7 = (ulong)uVar12;
                     }
 while ( uVar12 < uVar15 );
                  }

               }

            }
 else {
               *puVar10 = (long*)plVar8[-2];
               puVar10[2] = *plVar8;
            }

            lVar6 = plVar8[-1];
            lVar13 = plVar8[2];
            lVar5 = plVar8[3];
            plVar8[-2] = (long)plVar8;
            plVar8[-1] = 0;
            puVar10[1] = lVar6;
            *(undefined1*)plVar8 = 0;
            *(char*)( puVar10 + 6 ) = (char)plVar8[4];
            uVar1 = *(undefined2*)( (long)plVar8 + 0x21 );
            puVar10[4] = lVar13;
            puVar10[5] = lVar5;
            *(undefined2*)( (long)puVar10 + 0x31 ) = uVar1;
            *(undefined1*)( (long)puVar10 + 0x33 ) = *(undefined1*)( (long)plVar8 + 0x23 );
            if (plVar8 != (long*)plVar8[-2]) {
               operator_delete((long*)plVar8[-2], *plVar8 + 1);
            }

            plVar11 = plVar8 + 5;
            plVar8 = plVar8 + 7;
            puVar9 = puVar10 + 7;
         }
 while ( param_2 != plVar11 );
         puVar10 = puVar10 + 0xe;
      }

      plVar8 = param_2;
      puVar9 = puVar10;
      if (param_2 != plVar2) {
         do {
            plVar4 = (long*)*plVar8;
            plVar11 = puVar9 + 2;
            lVar6 = plVar8[1];
            *puVar9 = plVar11;
            if (plVar4 == plVar8 + 2) {
               uVar7 = lVar6 + 1;
               uVar15 = (uint)uVar7;
               if (uVar15 < 8) {
                  if (( uVar7 & 4 ) == 0) {
                     if (( uVar15 != 0 ) && ( *(char*)plVar11 = (char)*plVar4(uVar7 & 2) != 0 )) {
                        *(undefined2*)( (long)puVar9 + ( uVar7 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)plVar4 + ( ( uVar7 & 0xffffffff ) - 2 ) );
                     }

                  }
 else {
                     *(int*)plVar11 = (int)*plVar4;
                     *(undefined4*)( (long)puVar9 + ( uVar7 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)plVar4 + ( ( uVar7 & 0xffffffff ) - 4 ) );
                  }

               }
 else {
                  *plVar11 = *plVar4;
                  *(undefined8*)( (long)puVar9 + ( uVar7 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)plVar4 + ( ( uVar7 & 0xffffffff ) - 8 ) );
                  lVar13 = (long)plVar11 - ( ( ulong )(puVar9 + 3) & 0xfffffffffffffff8 );
                  uVar15 = uVar15 + (int)lVar13 & 0xfffffff8;
                  if (7 < uVar15) {
                     uVar12 = 0;
                     do {
                        uVar7 = (ulong)uVar12;
                        uVar12 = uVar12 + 8;
                        *(undefined8*)( ( ( ulong )(puVar9 + 3) & 0xfffffffffffffff8 ) + uVar7 ) = *(undefined8*)( (long)plVar4 + ( uVar7 - lVar13 ) );
                     }
 while ( uVar12 < uVar15 );
                  }

               }

            }
 else {
               *puVar9 = plVar4;
               puVar9[2] = plVar8[2];
            }

            lVar5 = plVar8[6];
            plVar11 = plVar8 + 7;
            puVar9[1] = lVar6;
            lVar6 = plVar8[4];
            lVar13 = plVar8[5];
            *(char*)( puVar9 + 6 ) = (char)lVar5;
            uVar1 = *(undefined2*)( (long)plVar8 + 0x31 );
            puVar9[4] = lVar6;
            puVar9[5] = lVar13;
            *(undefined2*)( (long)puVar9 + 0x31 ) = uVar1;
            *(undefined1*)( (long)puVar9 + 0x33 ) = *(undefined1*)( (long)plVar8 + 0x33 );
            plVar8 = plVar11;
            puVar9 = puVar9 + 7;
         }
 while ( plVar2 != plVar11 );
         puVar10 = puVar10 + ( ( ( ( ulong )((long)plVar2 + ( -0x38 - (long)param_2 )) >> 3 ) * 0xdb6db6db6db6db7 & 0x1fffffffffffffff ) + 1 ) * 7;
      }

      if (plVar3 != (long*)0x0) {
         operator_delete(plVar3, *(long*)( this + 0x10 ) - (long)plVar3);
      }

      *(undefined8**)( this + 8 ) = puVar10;
      *(undefined8**)this = local_58;
      *(long*)( this + 0x10 ) = local_48;
      return;
   }

   /* std::vector<unsigned long, std::allocator<unsigned long> >::_M_default_append(unsigned long) */
   void std::vector<unsigned_long,std::allocator<unsigned_long>>::_M_default_append(vector<unsigned_long,std::allocator<unsigned_long>> *this, ulong param_1) {
      ulong uVar1;
      ulong uVar2;
      void *__dest;
      void *pvVar3;
      undefined8 *__s;
      size_t sVar4;
      ulong uVar5;
      undefined8 *puVar6;
      if (param_1 == 0) {
         return;
      }

      puVar6 = *(undefined8**)( this + 8 );
      pvVar3 = *(void**)this;
      if (param_1 <= ( ulong )(*(long*)( this + 0x10 ) - (long)puVar6 >> 3)) {
         *puVar6 = 0;
         __s = puVar6 + 1;
         if (param_1 - 1 != 0) {
            sVar4 = (long)__s + ( ( param_1 - 1 ) * 8 - (long)puVar6 ) + -8;
            pvVar3 = memset(__s, 0, sVar4);
            __s = (undefined8*)( (long)pvVar3 + sVar4 );
         }

         *(undefined8**)( this + 8 ) = __s;
         return;
      }

      sVar4 = (long)puVar6 - (long)pvVar3;
      uVar2 = (long)sVar4 >> 3;
      if (0xfffffffffffffff - uVar2 < param_1) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_default_append");
      }

      uVar1 = param_1 + uVar2;
      if (uVar2 < param_1) {
         uVar2 = 0xfffffffffffffff;
         if (uVar1 < 0x1000000000000000) {
            uVar2 = uVar1;
         }

         uVar2 = uVar2 * 8;
         __dest = operator_new(uVar2);
         puVar6 = (undefined8*)( (long)__dest + sVar4 );
         *puVar6 = 0;
         if (param_1 - 1 != 0) goto LAB_0011a555;
         LAB_0011a569:if (sVar4 != 0) goto LAB_0011a640;
         if (pvVar3 == (void*)0x0) goto LAB_0011a57b;
         uVar5 = *(long*)( this + 0x10 ) - (long)pvVar3;
      }
 else {
         uVar2 = uVar2 * 2;
         if (0xfffffffffffffff < uVar2) {
            uVar2 = 0xfffffffffffffff;
         }

         uVar2 = uVar2 * 8;
         __dest = operator_new(uVar2);
         puVar6 = (undefined8*)( (long)__dest + sVar4 );
         *puVar6 = 0;
         if (param_1 != 1) {
            LAB_0011a555:memset(puVar6 + 1, 0, ( param_1 - 1 ) * 8);
            goto LAB_0011a569;
         }

         LAB_0011a640:memmove(__dest, pvVar3, sVar4);
         uVar5 = *(long*)( this + 0x10 ) - (long)pvVar3;
      }

      operator_delete(pvVar3, uVar5);
      LAB_0011a57b:*(void**)this = __dest;
      *(void**)( this + 8 ) = (void*)( (long)__dest + uVar1 * 8 );
      *(ulong*)( this + 0x10 ) = (long)__dest + uVar2;
      return;
   }

   /* void std::vector<TEXRAttribute, std::allocator<TEXRAttribute> >::_M_realloc_insert<TEXRAttribute
   const&>(__gnu_cxx::__normal_iterator<TEXRAttribute*, std::vector<TEXRAttribute,
   std::allocator<TEXRAttribute> > >, TEXRAttribute const&) */
   void std::vector<TEXRAttribute,std::allocator<TEXRAttribute>>::_M_realloc_insert<TEXRAttribute_const&>(vector<TEXRAttribute,std::allocator<TEXRAttribute>> *this, void *param_2, undefined8 *param_3) {
      void *pvVar1;
      void *__src;
      long lVar2;
      ulong uVar3;
      void *__dest;
      long lVar4;
      ulong uVar5;
      size_t __n;
      size_t __n_00;
      undefined8 *puVar6;
      byte bVar7;
      bVar7 = 0;
      pvVar1 = *(void**)( this + 8 );
      __src = *(void**)this;
      lVar2 = (long)pvVar1 - (long)__src >> 4;
      uVar3 = lVar2 * 0xf83e0f83e0f83e1;
      if (uVar3 == 0x3e0f83e0f83e0f) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_realloc_insert");
      }

      __n = (long)param_2 - (long)__src;
      if (__src == pvVar1) {
         uVar5 = uVar3 + 1;
         if (0xfffffffffffffffe < uVar3) goto LAB_0011a758;
         if (0x3e0f83e0f83e0f < uVar5) {
            uVar5 = 0x3e0f83e0f83e0f;
         }

         uVar5 = uVar5 * 0x210;
         LAB_0011a762:__dest = operator_new(uVar5);
         lVar2 = uVar5 + (long)__dest;
      }
 else {
         uVar5 = lVar2 * 0x1f07c1f07c1f07c2;
         if (uVar5 < uVar3) {
            LAB_0011a758:uVar5 = 0x7ffffffffffffef0;
            goto LAB_0011a762;
         }

         if (uVar5 != 0) {
            if (0x3e0f83e0f83e0f < uVar5) {
               uVar5 = 0x3e0f83e0f83e0f;
            }

            uVar5 = uVar5 * 0x210;
            goto LAB_0011a762;
         }

         lVar2 = 0;
         __dest = (void*)0x0;
      }

      __n_00 = (long)pvVar1 - (long)param_2;
      puVar6 = (undefined8*)( (long)__dest + __n );
      for (lVar4 = 0x42; lVar4 != 0; lVar4 = lVar4 + -1) {
         *puVar6 = *param_3;
         param_3 = param_3 + (ulong)bVar7 * -2 + 1;
         puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
      }

      pvVar1 = (void*)( (long)__dest + __n + 0x210 );
      if ((long)__n < 1) {
         if (0 < (long)__n_00) {
            memcpy(pvVar1, param_2, __n_00);
         }

         if (__src == (void*)0x0) goto LAB_0011a737;
      }
 else {
         __dest = memmove(__dest, __src, __n);
         if (0 < (long)__n_00) {
            memcpy(pvVar1, param_2, __n_00);
         }

      }

      operator_delete(__src, *(long*)( this + 0x10 ) - (long)__src);
      LAB_0011a737:*(void**)this = __dest;
      *(size_t*)( this + 8 ) = (long)pvVar1 + __n_00;
      *(long*)( this + 0x10 ) = lVar2;
      return;
   }

   /* void std::vector<std::thread, std::allocator<std::thread>
   >::_M_realloc_insert<std::thread>(__gnu_cxx::__normal_iterator<std::thread*,
   std::vector<std::thread, std::allocator<std::thread> > >, std::thread&&) */
   void std::vector<std::thread,std::allocator<std::thread>>::_M_realloc_insert<std::thread>(vector<std::thread,std::allocator<std::thread>> *this, undefined8 *param_2, undefined8 *param_3) {
      undefined8 *puVar1;
      undefined8 *puVar2;
      undefined8 uVar3;
      ulong uVar4;
      undefined8 *puVar5;
      undefined8 *puVar6;
      undefined8 *puVar7;
      ulong uVar8;
      long local_50;
      puVar1 = *(undefined8**)( this + 8 );
      puVar2 = *(undefined8**)this;
      uVar4 = (long)puVar1 - (long)puVar2 >> 3;
      if (uVar4 == 0xfffffffffffffff) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_realloc_insert");
      }

      if (puVar2 == puVar1) {
         if (0xfffffffffffffffe < uVar4) goto LAB_0011a930;
         uVar8 = 0xfffffffffffffff;
         if (uVar4 + 1 < 0x1000000000000000) {
            uVar8 = uVar4 + 1;
         }

         uVar8 = uVar8 << 3;
         LAB_0011a93a:puVar5 = (undefined8*)operator_new(uVar8);
         local_50 = (long)puVar5 + uVar8;
         uVar3 = *param_3;
         puVar6 = puVar5 + 1;
         *param_3 = 0;
         *(undefined8*)( (long)puVar5 + ( (long)param_2 - (long)puVar2 ) ) = uVar3;
         if (param_2 != puVar2) {
            LAB_0011a8b4:puVar6 = puVar2;
            puVar7 = puVar5;
            do {
               uVar3 = *puVar6;
               puVar6 = puVar6 + 1;
               *puVar7 = uVar3;
               puVar7 = puVar7 + 1;
            }
 while ( puVar6 != param_2 );
            puVar6 = (undefined8*)( (long)puVar5 + (long)param_2 + ( 8 - (long)puVar2 ) );
         }

         puVar7 = puVar6;
         if (param_2 == puVar1) goto LAB_0011a8f2;
      }
 else {
         uVar8 = uVar4 * 2;
         if (uVar8 < uVar4) {
            LAB_0011a930:uVar8 = 0x7ffffffffffffff8;
            goto LAB_0011a93a;
         }

         if (uVar8 != 0) {
            if (0xfffffffffffffff < uVar8) {
               uVar8 = 0xfffffffffffffff;
            }

            uVar8 = uVar8 * 8;
            goto LAB_0011a93a;
         }

         uVar3 = *param_3;
         puVar5 = (undefined8*)0x0;
         *param_3 = 0;
         puVar6 = (undefined8*)0x8;
         local_50 = 0;
         *(undefined8*)( (long)param_2 - (long)puVar2 ) = uVar3;
         if (param_2 != puVar2) goto LAB_0011a8b4;
      }

      puVar7 = (undefined8*)( (long)puVar6 + ( (long)puVar1 - (long)param_2 ) );
      memcpy(puVar6, param_2, (long)puVar1 - (long)param_2);
      LAB_0011a8f2:if (puVar2 != (undefined8*)0x0) {
         operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
      }

      *(undefined8**)this = puVar5;
      *(undefined8**)( this + 8 ) = puVar7;
      *(long*)( this + 0x10 ) = local_50;
      return;
   }

   /* std::vector<int, std::allocator<int> >::_M_default_append(unsigned long) */
   void std::vector<int,std::allocator<int>>::_M_default_append(vector<int,std::allocator<int>> *this, ulong param_1) {
      ulong uVar1;
      ulong uVar2;
      void *__dest;
      void *pvVar3;
      undefined4 *__s;
      size_t sVar4;
      ulong uVar5;
      undefined4 *puVar6;
      if (param_1 == 0) {
         return;
      }

      puVar6 = *(undefined4**)( this + 8 );
      pvVar3 = *(void**)this;
      if (param_1 <= ( ulong )(*(long*)( this + 0x10 ) - (long)puVar6 >> 2)) {
         *puVar6 = 0;
         __s = puVar6 + 1;
         if (param_1 - 1 != 0) {
            sVar4 = (long)__s + ( ( param_1 - 1 ) * 4 - (long)puVar6 ) + -4;
            pvVar3 = memset(__s, 0, sVar4);
            __s = (undefined4*)( (long)pvVar3 + sVar4 );
         }

         *(undefined4**)( this + 8 ) = __s;
         return;
      }

      sVar4 = (long)puVar6 - (long)pvVar3;
      uVar2 = (long)sVar4 >> 2;
      if (0x1fffffffffffffff - uVar2 < param_1) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_default_append");
      }

      uVar1 = param_1 + uVar2;
      if (uVar2 < param_1) {
         uVar2 = 0x1fffffffffffffff;
         if (uVar1 < 0x2000000000000000) {
            uVar2 = uVar1;
         }

         uVar2 = uVar2 * 4;
         __dest = operator_new(uVar2);
         puVar6 = (undefined4*)( (long)__dest + sVar4 );
         *puVar6 = 0;
         if (param_1 - 1 != 0) goto LAB_0011aa94;
         LAB_0011aaa8:if (sVar4 != 0) goto LAB_0011ab78;
         if (pvVar3 == (void*)0x0) goto LAB_0011aaba;
         uVar5 = *(long*)( this + 0x10 ) - (long)pvVar3;
      }
 else {
         uVar2 = uVar2 * 2;
         if (0x1fffffffffffffff < uVar2) {
            uVar2 = 0x1fffffffffffffff;
         }

         uVar2 = uVar2 * 4;
         __dest = operator_new(uVar2);
         puVar6 = (undefined4*)( (long)__dest + sVar4 );
         *puVar6 = 0;
         if (param_1 != 1) {
            LAB_0011aa94:memset(puVar6 + 1, 0, ( param_1 - 1 ) * 4);
            goto LAB_0011aaa8;
         }

         LAB_0011ab78:memmove(__dest, pvVar3, sVar4);
         uVar5 = *(long*)( this + 0x10 ) - (long)pvVar3;
      }

      operator_delete(pvVar3, uVar5);
      LAB_0011aaba:*(void**)this = __dest;
      *(void**)( this + 8 ) = (void*)( (long)__dest + uVar1 * 4 );
      *(ulong*)( this + 0x10 ) = (long)__dest + uVar2;
      return;
   }

   /* std::vector<std::vector<std::vector<unsigned long, std::allocator<unsigned long> >,
   std::allocator<std::vector<unsigned long, std::allocator<unsigned long> > > >,
   std::allocator<std::vector<std::vector<unsigned long, std::allocator<unsigned long> >,
   std::allocator<std::vector<unsigned long, std::allocator<unsigned long> > > > >
   >::_M_default_append(unsigned long) */
   void std::vector<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>,std::allocator<std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>>>::_M_default_append(vector<std::vector<std::vector<unsigned_long,std::allocator < unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>, std::allocator<std::vector<std::vector<unsigned_long,std::allocator < unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>> >> *this, ulong param_1) {
      ulong uVar1;
      undefined1(*pauVar2)[16];
      undefined8 uVar3;
      undefined8 uVar4;
      undefined1(*pauVar5)[16];
      undefined8 *puVar6;
      undefined1(*pauVar7)[16];
      long lVar8;
      ulong uVar9;
      undefined8 *puVar10;
      undefined1(*pauVar11)[16];
      undefined1(*pauVar12)[16];
      undefined1(*pauVar13)[16];
      if (param_1 == 0) {
         return;
      }

      pauVar2 = *(undefined1(**) [16])( this + 8 );
      pauVar12 = *(undefined1(**) [16])this;
      if (param_1 <= ( ulong )(( *(long*)( this + 0x10 ) - (long)pauVar2 >> 3 ) * -0x5555555555555555)) {
         pauVar12 = pauVar2;
         do {
            *(undefined8*)pauVar12[1] = 0;
            pauVar13 = (undefined1(*) [16])( pauVar12[1] + 8 );
            *pauVar12 = (undefined1[16])0x0;
            pauVar12 = pauVar13;
         }
 while ( pauVar13 != (undefined1(*) [16])( (long)pauVar2 + param_1 * 0x18 ) );
         *(undefined1(**) [16])( this + 8 ) = pauVar13;
         return;
      }

      lVar8 = (long)pauVar2 - (long)pauVar12 >> 3;
      if (param_1 <= lVar8 * 0x5555555555555555 + 0x555555555555555U) {
         uVar1 = param_1 + lVar8 * -0x5555555555555555;
         uVar9 = 0x555555555555555;
         if (uVar1 < 0x555555555555556) {
            uVar9 = uVar1;
         }

         if (( param_1 <= ( ulong )(lVar8 * -0x5555555555555555) ) && ( uVar9 = 0x555555555555555 < uVar9 )) {
            uVar9 = 0x555555555555555;
         }

         puVar10 = (undefined8*)operator_new(uVar9 * 0x18);
         pauVar13 = (undefined1(*) [16])( (long)puVar10 + ( (long)pauVar2 - (long)pauVar12 ) );
         pauVar11 = pauVar13;
         do {
            *(undefined8*)pauVar11[1] = 0;
            pauVar7 = pauVar11 + 1;
            *pauVar11 = (undefined1[16])0x0;
            pauVar11 = (undefined1(*) [16])( *pauVar7 + 8 );
            pauVar5 = pauVar12;
            puVar6 = puVar10;
         }
 while ( (undefined1(*) [16])( *pauVar7 + 8 ) != (undefined1(*) [16])( (long)pauVar13 + param_1 * 0x18 ) );
         for (; pauVar5 != pauVar2; pauVar5 = (undefined1(*) [16])( pauVar5[1] + 8 )) {
            uVar4 = *(undefined8*)( *pauVar5 + 8 );
            uVar3 = *(undefined8*)pauVar5[1];
            *puVar6 = *(undefined8*)*pauVar5;
            puVar6[1] = uVar4;
            puVar6[2] = uVar3;
            puVar6 = puVar6 + 3;
         }

         if (pauVar12 != (undefined1(*) [16])0x0) {
            operator_delete(pauVar12, *(long*)( this + 0x10 ) - (long)pauVar12);
         }

         *(undefined8**)this = puVar10;
         *(undefined8**)( this + 8 ) = puVar10 + uVar1 * 3;
         *(undefined8**)( this + 0x10 ) = puVar10 + uVar9 * 3;
         return;
      }

      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
   }

   /* std::vector<std::vector<unsigned long, std::allocator<unsigned long> >,
   std::allocator<std::vector<unsigned long, std::allocator<unsigned long> > >
   >::_M_default_append(unsigned long) */
   void std::vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>>::_M_default_append(vector<std::vector<unsigned_long,std::allocator<unsigned_long>>,std::allocator<std::vector<unsigned_long,std::allocator<unsigned_long>>>> *this, ulong param_1) {
      ulong uVar1;
      undefined1(*pauVar2)[16];
      undefined8 uVar3;
      undefined8 uVar4;
      undefined1(*pauVar5)[16];
      undefined8 *puVar6;
      undefined1(*pauVar7)[16];
      long lVar8;
      ulong uVar9;
      undefined8 *puVar10;
      undefined1(*pauVar11)[16];
      undefined1(*pauVar12)[16];
      undefined1(*pauVar13)[16];
      if (param_1 == 0) {
         return;
      }

      pauVar2 = *(undefined1(**) [16])( this + 8 );
      pauVar12 = *(undefined1(**) [16])this;
      if (param_1 <= ( ulong )(( *(long*)( this + 0x10 ) - (long)pauVar2 >> 3 ) * -0x5555555555555555)) {
         pauVar12 = pauVar2;
         do {
            *(undefined8*)pauVar12[1] = 0;
            pauVar13 = (undefined1(*) [16])( pauVar12[1] + 8 );
            *pauVar12 = (undefined1[16])0x0;
            pauVar12 = pauVar13;
         }
 while ( pauVar13 != (undefined1(*) [16])( (long)pauVar2 + param_1 * 0x18 ) );
         *(undefined1(**) [16])( this + 8 ) = pauVar13;
         return;
      }

      lVar8 = (long)pauVar2 - (long)pauVar12 >> 3;
      if (param_1 <= lVar8 * 0x5555555555555555 + 0x555555555555555U) {
         uVar1 = param_1 + lVar8 * -0x5555555555555555;
         uVar9 = 0x555555555555555;
         if (uVar1 < 0x555555555555556) {
            uVar9 = uVar1;
         }

         if (( param_1 <= ( ulong )(lVar8 * -0x5555555555555555) ) && ( uVar9 = 0x555555555555555 < uVar9 )) {
            uVar9 = 0x555555555555555;
         }

         puVar10 = (undefined8*)operator_new(uVar9 * 0x18);
         pauVar13 = (undefined1(*) [16])( (long)puVar10 + ( (long)pauVar2 - (long)pauVar12 ) );
         pauVar11 = pauVar13;
         do {
            *(undefined8*)pauVar11[1] = 0;
            pauVar7 = pauVar11 + 1;
            *pauVar11 = (undefined1[16])0x0;
            pauVar11 = (undefined1(*) [16])( *pauVar7 + 8 );
            pauVar5 = pauVar12;
            puVar6 = puVar10;
         }
 while ( (undefined1(*) [16])( *pauVar7 + 8 ) != (undefined1(*) [16])( (long)pauVar13 + param_1 * 0x18 ) );
         for (; pauVar5 != pauVar2; pauVar5 = (undefined1(*) [16])( pauVar5[1] + 8 )) {
            uVar4 = *(undefined8*)( *pauVar5 + 8 );
            uVar3 = *(undefined8*)pauVar5[1];
            *puVar6 = *(undefined8*)*pauVar5;
            puVar6[1] = uVar4;
            puVar6[2] = uVar3;
            puVar6 = puVar6 + 3;
         }

         if (pauVar12 != (undefined1(*) [16])0x0) {
            operator_delete(pauVar12, *(long*)( this + 0x10 ) - (long)pauVar12);
         }

         *(undefined8**)this = puVar10;
         *(undefined8**)( this + 8 ) = puVar10 + uVar1 * 3;
         *(undefined8**)( this + 0x10 ) = puVar10 + uVar9 * 3;
         return;
      }

      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
   }

   /* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<std::__cxx11::string
   const&>(__gnu_cxx::__normal_iterator<std::__cxx11::string*, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > > >, std::__cxx11::string const&) */
   void std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::_M_realloc_insert<std::__cxx11::string_const&>(vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this, void *param_2, long *param_3) {
      long *plVar1;
      void *pvVar2;
      void *pvVar3;
      long *plVar4;
      ulong uVar5;
      long *plVar6;
      long *plVar7;
      uint uVar8;
      long lVar9;
      uint uVar10;
      long *plVar11;
      long lVar12;
      long lVar13;
      ulong uVar14;
      long *plVar15;
      pvVar2 = *(void**)( this + 8 );
      pvVar3 = *(void**)this;
      uVar5 = (long)pvVar2 - (long)pvVar3 >> 5;
      if (uVar5 == 0x3ffffffffffffff) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_realloc_insert");
      }

      if (pvVar3 == pvVar2) {
         if (0xfffffffffffffffe < uVar5) goto LAB_0011b018;
         uVar14 = 0x3ffffffffffffff;
         if (uVar5 + 1 < 0x400000000000000) {
            uVar14 = uVar5 + 1;
         }

         uVar14 = uVar14 << 5;
      }
 else {
         uVar14 = uVar5 * 2;
         if (uVar14 < uVar5) {
            LAB_0011b018:uVar14 = 0x7fffffffffffffe0;
         }
 else {
            if (uVar14 == 0) {
               plVar11 = (long*)0x20;
               lVar12 = 0;
               plVar6 = (long*)0x0;
               goto LAB_0011af6b;
            }

            if (0x3ffffffffffffff < uVar14) {
               uVar14 = 0x3ffffffffffffff;
            }

            uVar14 = uVar14 << 5;
         }

      }

      plVar6 = (long*)operator_new(uVar14);
      lVar12 = uVar14 + (long)plVar6;
      plVar11 = plVar6 + 4;
      LAB_0011af6b:plVar15 = (long*)( (long)plVar6 + ( (long)param_2 - (long)pvVar3 ) );
      lVar13 = *param_3;
      *plVar15 = (long)( plVar15 + 2 );
      __cxx11::string::_M_construct<char*>(plVar15, lVar13, param_3[1] + lVar13);
      if (param_2 != pvVar3) {
         plVar15 = (long*)( (long)pvVar3 + 0x10 );
         plVar11 = (long*)( ( (long)param_2 - (long)pvVar3 ) + (long)plVar6 );
         plVar7 = plVar6;
         do {
            plVar1 = plVar7 + 2;
            lVar13 = plVar15[-1];
            *plVar7 = (long)plVar1;
            if (plVar15 == (long*)plVar15[-2]) {
               uVar5 = lVar13 + 1;
               uVar10 = (uint)uVar5;
               if (uVar10 < 8) {
                  if (( uVar5 & 4 ) == 0) {
                     if (uVar10 != 0) {
                        *(char*)plVar1 = (char)*plVar15;
                        if (( uVar5 & 2 ) == 0) goto LAB_0011b00c;
                        *(undefined2*)( (long)plVar7 + ( uVar5 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)plVar15 + ( ( uVar5 & 0xffffffff ) - 2 ) );
                        lVar13 = plVar15[-1];
                     }

                  }
 else {
                     *(int*)plVar1 = (int)*plVar15;
                     *(undefined4*)( (long)plVar7 + ( uVar5 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)plVar15 + ( ( uVar5 & 0xffffffff ) - 4 ) );
                     lVar13 = plVar15[-1];
                  }

               }
 else {
                  *plVar1 = *plVar15;
                  *(undefined8*)( (long)plVar7 + ( uVar5 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)plVar15 + ( ( uVar5 & 0xffffffff ) - 8 ) );
                  lVar13 = (long)plVar1 - ( ( ulong )(plVar7 + 3) & 0xfffffffffffffff8 );
                  uVar10 = uVar10 + (int)lVar13 & 0xfffffff8;
                  if (7 < uVar10) {
                     uVar8 = 0;
                     do {
                        uVar5 = (ulong)uVar8;
                        uVar8 = uVar8 + 8;
                        *(undefined8*)( ( ( ulong )(plVar7 + 3) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( (long)plVar15 + ( uVar5 - lVar13 ) );
                     }
 while ( uVar8 < uVar10 );
                  }

                  LAB_0011b00c:lVar13 = plVar15[-1];
               }

            }
 else {
               *plVar7 = plVar15[-2];
               plVar7[2] = *plVar15;
            }

            plVar7[1] = lVar13;
            plVar7 = plVar7 + 4;
            plVar15 = plVar15 + 4;
         }
 while ( plVar11 != plVar7 );
         plVar11 = plVar11 + 4;
      }

      plVar15 = plVar11;
      if (param_2 != pvVar2) {
         plVar7 = (long*)( (long)param_2 + 0x10 );
         plVar15 = (long*)( ( (long)pvVar2 - (long)param_2 ) + (long)plVar11 );
         do {
            plVar4 = (long*)plVar7[-2];
            plVar1 = plVar11 + 2;
            lVar13 = plVar7[-1];
            *plVar11 = (long)plVar1;
            if (plVar7 == plVar4) {
               uVar5 = lVar13 + 1;
               uVar10 = (uint)uVar5;
               if (uVar10 < 8) {
                  if (( uVar5 & 4 ) == 0) {
                     if (( uVar10 != 0 ) && ( *(char*)plVar1 = (char)*plVar7(uVar5 & 2) != 0 )) {
                        *(undefined2*)( (long)plVar11 + ( uVar5 & 0xffffffff ) + 0xe ) = *(undefined2*)( (long)plVar7 + ( ( uVar5 & 0xffffffff ) - 2 ) );
                     }

                  }
 else {
                     *(int*)plVar1 = (int)*plVar7;
                     *(undefined4*)( (long)plVar11 + ( uVar5 & 0xffffffff ) + 0xc ) = *(undefined4*)( (long)plVar7 + ( ( uVar5 & 0xffffffff ) - 4 ) );
                  }

               }
 else {
                  *plVar1 = *plVar7;
                  *(undefined8*)( (long)plVar11 + ( uVar5 & 0xffffffff ) + 8 ) = *(undefined8*)( (long)plVar7 + ( ( uVar5 & 0xffffffff ) - 8 ) );
                  lVar9 = (long)plVar1 - ( ( ulong )(plVar11 + 3) & 0xfffffffffffffff8 );
                  uVar10 = uVar10 + (int)lVar9 & 0xfffffff8;
                  if (7 < uVar10) {
                     uVar8 = 0;
                     do {
                        uVar5 = (ulong)uVar8;
                        uVar8 = uVar8 + 8;
                        *(undefined8*)( ( ( ulong )(plVar11 + 3) & 0xfffffffffffffff8 ) + uVar5 ) = *(undefined8*)( (long)plVar7 + ( uVar5 - lVar9 ) );
                     }
 while ( uVar8 < uVar10 );
                  }

               }

            }
 else {
               *plVar11 = (long)plVar4;
               plVar11[2] = *plVar7;
            }

            plVar11[1] = lVar13;
            plVar11 = plVar11 + 4;
            plVar7 = plVar7 + 4;
         }
 while ( plVar11 != plVar15 );
      }

      if (pvVar3 != (void*)0x0) {
         operator_delete(pvVar3, *(long*)( this + 0x10 ) - (long)pvVar3);
      }

      *(long**)this = plVar6;
      *(long**)( this + 8 ) = plVar15;
      *(long*)( this + 0x10 ) = lVar12;
      return;
   }

   /* void std::vector<tinyexr::LayerChannel, std::allocator<tinyexr::LayerChannel>
   >::_M_realloc_insert<tinyexr::LayerChannel
   const&>(__gnu_cxx::__normal_iterator<tinyexr::LayerChannel*, std::vector<tinyexr::LayerChannel,
   std::allocator<tinyexr::LayerChannel> > >, tinyexr::LayerChannel const&) */
   void std::vector<tinyexr::LayerChannel,std::allocator<tinyexr::LayerChannel>>::_M_realloc_insert<tinyexr::LayerChannel_const&>(vector<tinyexr::LayerChannel,std::allocator<tinyexr::LayerChannel>> *this, undefined8 *param_2, undefined8 *param_3) {
      undefined8 *puVar1;
      undefined8 *puVar2;
      undefined8 uVar3;
      undefined8 *puVar4;
      undefined8 *puVar5;
      long lVar6;
      ulong uVar7;
      undefined8 *puVar8;
      undefined8 *puVar9;
      undefined8 *puVar10;
      undefined8 *puVar11;
      uint uVar12;
      long lVar13;
      ulong uVar14;
      uint uVar15;
      long local_50;
      puVar1 = *(undefined8**)( this + 8 );
      puVar2 = *(undefined8**)this;
      lVar6 = (long)puVar1 - (long)puVar2 >> 3;
      uVar7 = lVar6 * -0x3333333333333333;
      if (uVar7 == 0x333333333333333) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_realloc_insert");
      }

      if (puVar2 == puVar1) {
         uVar14 = uVar7 + 1;
         if (0xfffffffffffffffe < uVar7) goto LAB_0011b398;
         if (0x333333333333333 < uVar14) {
            uVar14 = 0x333333333333333;
         }

         uVar14 = uVar14 * 0x28;
      }
 else {
         uVar14 = lVar6 * -0x6666666666666666;
         if (uVar14 < uVar7) {
            LAB_0011b398:uVar14 = 0x7ffffffffffffff8;
         }
 else {
            if (uVar14 == 0) {
               local_50 = 0;
               puVar11 = (undefined8*)0x28;
               puVar8 = (undefined8*)0x0;
               goto LAB_0011b2d0;
            }

            if (0x333333333333333 < uVar14) {
               uVar14 = 0x333333333333333;
            }

            uVar14 = uVar14 * 0x28;
         }

      }

      puVar8 = (undefined8*)operator_new(uVar14);
      local_50 = (long)puVar8 + uVar14;
      puVar11 = puVar8 + 5;
      LAB_0011b2d0:puVar9 = (undefined8*)( (long)puVar8 + ( (long)param_2 - (long)puVar2 ) );
      lVar6 = param_3[1];
      *puVar9 = *param_3;
      puVar9[1] = puVar9 + 3;
      __cxx11::string::_M_construct<char*>(puVar9 + 1, lVar6, param_3[2] + lVar6);
      puVar9 = puVar2;
      puVar10 = puVar8;
      if (param_2 != puVar2) {
         do {
            uVar3 = *puVar9;
            puVar11 = puVar10 + 3;
            puVar10[1] = puVar11;
            *puVar10 = uVar3;
            puVar4 = (undefined8*)puVar9[1];
            if (puVar4 == puVar9 + 3) {
               lVar6 = puVar9[2];
               uVar7 = lVar6 + 1;
               uVar15 = (uint)uVar7;
               if (7 < uVar15) {
                  *puVar11 = *puVar4;
                  *(undefined8*)( (long)puVar10 + ( uVar7 & 0xffffffff ) + 0x10 ) = *(undefined8*)( (long)puVar4 + ( ( uVar7 & 0xffffffff ) - 8 ) );
                  lVar6 = (long)puVar11 - ( ( ulong )(puVar10 + 4) & 0xfffffffffffffff8 );
                  uVar15 = uVar15 + (int)lVar6 & 0xfffffff8;
                  if (7 < uVar15) {
                     uVar12 = 0;
                     do {
                        uVar7 = (ulong)uVar12;
                        uVar12 = uVar12 + 8;
                        *(undefined8*)( ( ( ulong )(puVar10 + 4) & 0xfffffffffffffff8 ) + uVar7 ) = *(undefined8*)( (long)puVar4 + ( uVar7 - lVar6 ) );
                     }
 while ( uVar12 < uVar15 );
                  }

                  goto LAB_0011b31c;
               }

               if (( uVar7 & 4 ) == 0) {
                  if (uVar15 != 0) {
                     *(undefined1*)puVar11 = *(undefined1*)puVar4;
                     if (( uVar7 & 2 ) == 0) goto LAB_0011b31c;
                     *(undefined2*)( (long)puVar10 + ( uVar7 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)puVar4 + ( ( uVar7 & 0xffffffff ) - 2 ) );
                     lVar6 = puVar9[2];
                  }

               }
 else {
                  *(undefined4*)puVar11 = *(undefined4*)puVar4;
                  *(undefined4*)( (long)puVar10 + ( uVar7 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)puVar4 + ( ( uVar7 & 0xffffffff ) - 4 ) );
                  lVar6 = puVar9[2];
               }

            }
 else {
               puVar10[1] = puVar4;
               puVar10[3] = puVar9[3];
               LAB_0011b31c:lVar6 = puVar9[2];
            }

            puVar9 = puVar9 + 5;
            puVar10[2] = lVar6;
            puVar10 = puVar10 + 5;
         }
 while ( param_2 != puVar9 );
         puVar11 = (undefined8*)( (long)puVar8 + ( (long)param_2 + ( -0x28 - (long)puVar2 ) & 0xfffffffffffffff8U ) + 0x50 );
      }

      puVar9 = param_2;
      puVar10 = puVar11;
      if (param_2 != puVar1) {
         do {
            uVar3 = *puVar9;
            puVar4 = puVar10 + 3;
            lVar6 = puVar9[2];
            puVar10[1] = puVar4;
            *puVar10 = uVar3;
            puVar5 = (undefined8*)puVar9[1];
            if (puVar5 == puVar9 + 3) {
               uVar7 = lVar6 + 1;
               uVar15 = (uint)uVar7;
               if (uVar15 < 8) {
                  if (( uVar7 & 4 ) == 0) {
                     if (( uVar15 != 0 ) && ( *(undefined1*)puVar4 = *(undefined1*)puVar5(uVar7 & 2) != 0 )) {
                        *(undefined2*)( (long)puVar10 + ( uVar7 & 0xffffffff ) + 0x16 ) = *(undefined2*)( (long)puVar5 + ( ( uVar7 & 0xffffffff ) - 2 ) );
                     }

                  }
 else {
                     *(undefined4*)puVar4 = *(undefined4*)puVar5;
                     *(undefined4*)( (long)puVar10 + ( uVar7 & 0xffffffff ) + 0x14 ) = *(undefined4*)( (long)puVar5 + ( ( uVar7 & 0xffffffff ) - 4 ) );
                  }

               }
 else {
                  *puVar4 = *puVar5;
                  *(undefined8*)( (long)puVar10 + ( uVar7 & 0xffffffff ) + 0x10 ) = *(undefined8*)( (long)puVar5 + ( ( uVar7 & 0xffffffff ) - 8 ) );
                  lVar13 = (long)puVar4 - ( ( ulong )(puVar10 + 4) & 0xfffffffffffffff8 );
                  uVar15 = uVar15 + (int)lVar13 & 0xfffffff8;
                  if (7 < uVar15) {
                     uVar12 = 0;
                     do {
                        uVar7 = (ulong)uVar12;
                        uVar12 = uVar12 + 8;
                        *(undefined8*)( ( ( ulong )(puVar10 + 4) & 0xfffffffffffffff8 ) + uVar7 ) = *(undefined8*)( (long)puVar5 + ( uVar7 - lVar13 ) );
                     }
 while ( uVar12 < uVar15 );
                  }

               }

            }
 else {
               puVar10[1] = puVar5;
               puVar10[3] = puVar9[3];
            }

            puVar9 = puVar9 + 5;
            puVar10[2] = lVar6;
            puVar10 = puVar10 + 5;
         }
 while ( puVar1 != puVar9 );
         puVar11 = (undefined8*)( (long)puVar11 + ( (long)puVar1 + ( -0x28 - (long)param_2 ) & 0xfffffffffffffff8U ) + 0x28 );
      }

      if (puVar2 != (undefined8*)0x0) {
         operator_delete(puVar2, *(long*)( this + 0x10 ) - (long)puVar2);
      }

      *(undefined8**)this = puVar8;
      *(undefined8**)( this + 8 ) = puVar11;
      *(long*)( this + 0x10 ) = local_50;
      return;
   }

   /* std::vector<std::vector<unsigned char, std::allocator<unsigned char> >,
   std::allocator<std::vector<unsigned char, std::allocator<unsigned char> > >
   >::_M_default_append(unsigned long) */
   void std::vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>>::_M_default_append(vector<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::allocator<std::vector<unsigned_char,std::allocator<unsigned_char>>>> *this, ulong param_1) {
      ulong uVar1;
      undefined1(*pauVar2)[16];
      undefined8 uVar3;
      undefined8 uVar4;
      undefined1(*pauVar5)[16];
      undefined8 *puVar6;
      undefined1(*pauVar7)[16];
      long lVar8;
      ulong uVar9;
      undefined8 *puVar10;
      undefined1(*pauVar11)[16];
      undefined1(*pauVar12)[16];
      undefined1(*pauVar13)[16];
      if (param_1 == 0) {
         return;
      }

      pauVar2 = *(undefined1(**) [16])( this + 8 );
      pauVar12 = *(undefined1(**) [16])this;
      if (param_1 <= ( ulong )(( *(long*)( this + 0x10 ) - (long)pauVar2 >> 3 ) * -0x5555555555555555)) {
         pauVar12 = pauVar2;
         do {
            *(undefined8*)pauVar12[1] = 0;
            pauVar13 = (undefined1(*) [16])( pauVar12[1] + 8 );
            *pauVar12 = (undefined1[16])0x0;
            pauVar12 = pauVar13;
         }
 while ( pauVar13 != (undefined1(*) [16])( (long)pauVar2 + param_1 * 0x18 ) );
         *(undefined1(**) [16])( this + 8 ) = pauVar13;
         return;
      }

      lVar8 = (long)pauVar2 - (long)pauVar12 >> 3;
      if (param_1 <= lVar8 * 0x5555555555555555 + 0x555555555555555U) {
         uVar1 = param_1 + lVar8 * -0x5555555555555555;
         uVar9 = 0x555555555555555;
         if (uVar1 < 0x555555555555556) {
            uVar9 = uVar1;
         }

         if (( param_1 <= ( ulong )(lVar8 * -0x5555555555555555) ) && ( uVar9 = 0x555555555555555 < uVar9 )) {
            uVar9 = 0x555555555555555;
         }

         puVar10 = (undefined8*)operator_new(uVar9 * 0x18);
         pauVar13 = (undefined1(*) [16])( (long)puVar10 + ( (long)pauVar2 - (long)pauVar12 ) );
         pauVar11 = pauVar13;
         do {
            *(undefined8*)pauVar11[1] = 0;
            pauVar7 = pauVar11 + 1;
            *pauVar11 = (undefined1[16])0x0;
            pauVar11 = (undefined1(*) [16])( *pauVar7 + 8 );
            pauVar5 = pauVar12;
            puVar6 = puVar10;
         }
 while ( (undefined1(*) [16])( *pauVar7 + 8 ) != (undefined1(*) [16])( (long)pauVar13 + param_1 * 0x18 ) );
         for (; pauVar5 != pauVar2; pauVar5 = (undefined1(*) [16])( pauVar5[1] + 8 )) {
            uVar4 = *(undefined8*)( *pauVar5 + 8 );
            uVar3 = *(undefined8*)pauVar5[1];
            *puVar6 = *(undefined8*)*pauVar5;
            puVar6[1] = uVar4;
            puVar6[2] = uVar3;
            puVar6 = puVar6 + 3;
         }

         if (pauVar12 != (undefined1(*) [16])0x0) {
            operator_delete(pauVar12, *(long*)( this + 0x10 ) - (long)pauVar12);
         }

         *(undefined8**)this = puVar10;
         *(undefined8**)( this + 8 ) = puVar10 + uVar1 * 3;
         *(undefined8**)( this + 0x10 ) = puVar10 + uVar9 * 3;
         return;
      }

      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
   }

   /* std::pair<std::_Rb_tree_iterator<std::__cxx11::string >, bool>
   std::_Rb_tree<std::__cxx11::string, std::__cxx11::string, std::_Identity<std::__cxx11::string >,
   std::less<std::__cxx11::string >, std::allocator<std::__cxx11::string > >::_M_emplace_unique<char
   const (&) [256]>(char const (&) [256]) */
   undefined1[16];
   std::_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>::_M_emplace_unique<char_const(&)[256]> (_Rb_tree<std::__cxx11::string,std::__cxx11::string,std::_Identity<std::__cxx11::string>,std::less<std::__cxx11::string>,std::allocator<std::__cxx11::string>>
           *this,char *param_1) {
      uint uVar1;
      int iVar2;
      _Rb_tree_node_base *p_Var3;
      _Rb_tree_node_base *p_Var4;
      size_t sVar5;
      _Rb_tree_node_base *p_Var6;
      ulong uVar7;
      _Rb_tree_node_base *p_Var8;
      _Rb_tree_node_base *p_Var9;
      void *__s2;
      bool bVar10;
      long lVar11;
      _Rb_tree_node_base *p_Var12;
      ulong uVar13;
      undefined8 uVar14;
      ulong uVar15;
      long in_FS_OFFSET;
      undefined1 auVar16[16];
      _Rb_tree_node_base *local_70;
      size_t local_48;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      p_Var3 = (_Rb_tree_node_base*)operator_new(0x40);
      p_Var4 = p_Var3 + 0x30;
      *(_Rb_tree_node_base**)( p_Var3 + 0x20 ) = p_Var4;
      sVar5 = strlen(param_1);
      local_48 = sVar5;
      if (sVar5 < 0x10) {
         p_Var9 = p_Var4;
         if (sVar5 == 1) {
            p_Var3[0x30] = ( _Rb_tree_node_base ) * param_1;
         }
 else if (sVar5 != 0) goto LAB_0011ba0f;
      }
 else {
         p_Var9 = (_Rb_tree_node_base*)std::__cxx11::string::_M_create((ulong*)( p_Var3 + 0x20 ), ( ulong ) & local_48);
         *(_Rb_tree_node_base**)( p_Var3 + 0x20 ) = p_Var9;
         *(size_t*)( p_Var3 + 0x30 ) = local_48;
         LAB_0011ba0f:memcpy(p_Var9, param_1, sVar5);
         p_Var9 = *(_Rb_tree_node_base**)( p_Var3 + 0x20 );
      }

      *(size_t*)( p_Var3 + 0x28 ) = local_48;
      p_Var9[local_48] = (_Rb_tree_node_base)0x0;
      p_Var6 = (_Rb_tree_node_base*)( this + 8 );
      p_Var9 = p_Var6;
      if (*(_Rb_tree_node_base**)( this + 0x10 ) != (_Rb_tree_node_base*)0x0) {
         local_70 = *(_Rb_tree_node_base**)( p_Var3 + 0x20 );
         uVar13 = *(ulong*)( p_Var3 + 0x28 );
         p_Var8 = *(_Rb_tree_node_base**)( this + 0x10 );
         do {
            p_Var9 = p_Var8;
            uVar15 = *(ulong*)( p_Var9 + 0x28 );
            __s2 = *(void**)( p_Var9 + 0x20 );
            sVar5 = uVar15;
            if (uVar13 <= uVar15) {
               sVar5 = uVar13;
            }

            if (sVar5 == 0) {
               LAB_0011b87c:uVar7 = uVar13 - uVar15;
               if ((long)uVar7 < 0x80000000) {
                  if (-0x80000001 < (long)uVar7) goto LAB_0011b89b;
                  goto LAB_0011b840;
               }

               LAB_0011b89f:p_Var8 = *(_Rb_tree_node_base**)( p_Var9 + 0x18 );
               bVar10 = false;
            }
 else {
               uVar1 = memcmp(local_70, __s2, sVar5);
               uVar7 = (ulong)uVar1;
               if (uVar1 == 0) goto LAB_0011b87c;
               LAB_0011b89b:if (-1 < (int)uVar7) goto LAB_0011b89f;
               LAB_0011b840:p_Var8 = *(_Rb_tree_node_base**)( p_Var9 + 0x10 );
               bVar10 = true;
            }

         }
 while ( p_Var8 != (_Rb_tree_node_base*)0x0 );
         p_Var8 = p_Var9;
         if (bVar10) goto LAB_0011b9ad;
         LAB_0011b8b6:p_Var12 = p_Var9;
         if (( sVar5 == 0 ) || ( iVar2 = iVar2 == 0 )) {
            lVar11 = uVar15 - uVar13;
            if (lVar11 < 0x80000000) {
               if (lVar11 < -0x80000000) goto LAB_0011b970;
               iVar2 = (int)lVar11;
               goto LAB_0011b8f4;
            }

         }
 else {
            LAB_0011b8f4:if (iVar2 < 0) goto LAB_0011b970;
         }

         uVar14 = 0;
         if (p_Var4 != local_70) {
            operator_delete(local_70, *(long*)( p_Var3 + 0x30 ) + 1);
         }

         operator_delete(p_Var3, 0x40);
         p_Var3 = p_Var8;
         goto LAB_0011b929;
      }

      LAB_0011b9ad:p_Var12 = *(_Rb_tree_node_base**)( this + 0x18 );
      if (p_Var9 != p_Var12) {
         p_Var8 = (_Rb_tree_node_base*)std::_Rb_tree_decrement(p_Var9);
         uVar13 = *(ulong*)( p_Var3 + 0x28 );
         local_70 = *(_Rb_tree_node_base**)( p_Var3 + 0x20 );
         uVar15 = *(ulong*)( p_Var8 + 0x28 );
         __s2 = *(void**)( p_Var8 + 0x20 );
         sVar5 = uVar15;
         if (uVar13 <= uVar15) {
            sVar5 = uVar13;
         }

         goto LAB_0011b8b6;
      }

      LAB_0011b970:bVar10 = true;
      if (p_Var6 != p_Var12) {
         uVar13 = *(ulong*)( p_Var3 + 0x28 );
         uVar15 = *(ulong*)( p_Var12 + 0x28 );
         uVar7 = uVar15;
         if (uVar13 <= uVar15) {
            uVar7 = uVar13;
         }

         if (( uVar7 == 0 ) || ( iVar2 = memcmp(*(void**)( p_Var3 + 0x20 ), *(void**)( p_Var12 + 0x20 ), uVar7) ),iVar2 == 0) {
            lVar11 = uVar13 - uVar15;
            bVar10 = false;
            if (lVar11 < 0x80000000) {
               if (-0x80000001 < lVar11) {
                  iVar2 = (int)lVar11;
                  goto LAB_0011ba81;
               }

               bVar10 = true;
            }

         }
 else {
            LAB_0011ba81:bVar10 = SUB41((uint)iVar2 >> 0x1f, 0);
         }

      }

      uVar14 = 1;
      std::_Rb_tree_insert_and_rebalance(bVar10, p_Var3, p_Var12, p_Var6);
      *(long*)( this + 0x28 ) = *(long*)( this + 0x28 ) + 1;
      LAB_0011b929:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         auVar16._8_8_ = uVar14;
         auVar16._0_8_ = p_Var3;
         return auVar16;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* std::vector<tinyexr::OffsetData, std::allocator<tinyexr::OffsetData>
   >::_M_default_append(unsigned long) */
   void std::vector<tinyexr::OffsetData,std::allocator<tinyexr::OffsetData>>::_M_default_append(vector<tinyexr::OffsetData,std::allocator<tinyexr::OffsetData>> *this, ulong param_1) {
      ulong uVar1;
      undefined1(*pauVar2)[16];
      undefined8 uVar3;
      undefined8 uVar4;
      undefined8 uVar5;
      ulong uVar6;
      undefined8 *puVar7;
      undefined1(*pauVar8)[16];
      undefined1(*pauVar9)[16];
      undefined1(*pauVar10)[16];
      undefined8 *puVar11;
      undefined8 *puVar12;
      undefined1(*pauVar13)[16];
      ulong uVar14;
      if (param_1 == 0) {
         return;
      }

      pauVar2 = *(undefined1(**) [16])( this + 8 );
      pauVar13 = *(undefined1(**) [16])this;
      if (param_1 <= ( ulong )(*(long*)( this + 0x10 ) - (long)pauVar2 >> 5)) {
         pauVar13 = pauVar2;
         do {
            *(undefined8*)pauVar13[1] = 0;
            pauVar10 = pauVar13 + 2;
            *pauVar13 = (undefined1[16])0x0;
            *(undefined8*)( pauVar13[1] + 8 ) = 0;
            pauVar13 = pauVar10;
         }
 while ( pauVar10 != pauVar2 + param_1 * 2 );
         *(undefined1(**) [16])( this + 8 ) = pauVar10;
         return;
      }

      uVar6 = (long)pauVar2 - (long)pauVar13 >> 5;
      if (param_1 <= 0x3ffffffffffffff - uVar6) {
         uVar1 = param_1 + uVar6;
         uVar14 = 0x3ffffffffffffff;
         if (uVar1 < 0x400000000000000) {
            uVar14 = uVar1;
         }

         if (( param_1 <= uVar6 ) && ( uVar14 = 0x3ffffffffffffff < uVar14 )) {
            uVar14 = 0x3ffffffffffffff;
         }

         puVar7 = (undefined8*)operator_new(uVar14 * 0x20);
         pauVar10 = (undefined1(*) [16])( (long)puVar7 + ( (long)pauVar2 - (long)pauVar13 ) );
         pauVar8 = pauVar10;
         do {
            *(undefined8*)pauVar8[1] = 0;
            pauVar9 = pauVar8 + 2;
            *pauVar8 = (undefined1[16])0x0;
            *(undefined8*)( pauVar8[1] + 8 ) = 0;
            pauVar8 = pauVar9;
         }
 while ( pauVar9 != pauVar10 + param_1 * 2 );
         if (pauVar13 != pauVar2) {
            pauVar10 = pauVar13;
            puVar11 = puVar7;
            do {
               uVar4 = *(undefined8*)*pauVar10;
               uVar5 = *(undefined8*)( *pauVar10 + 8 );
               puVar12 = puVar11 + 4;
               puVar11[2] = *(undefined8*)pauVar10[1];
               uVar3 = *(undefined8*)( pauVar10[1] + 8 );
               *puVar11 = uVar4;
               puVar11[1] = uVar5;
               puVar11[3] = uVar3;
               pauVar10 = pauVar10 + 2;
               puVar11 = puVar12;
            }
 while ( (undefined8*)( ( (long)pauVar2 - (long)pauVar13 ) + (long)puVar7 ) != puVar12 );
         }

         if (pauVar13 != (undefined1(*) [16])0x0) {
            operator_delete(pauVar13, *(long*)( this + 0x10 ) - (long)pauVar13);
         }

         *(undefined8**)this = puVar7;
         *(undefined8**)( this + 8 ) = puVar7 + uVar1 * 4;
         *(undefined8**)( this + 0x10 ) = puVar7 + uVar14 * 4;
         return;
      }

      /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_default_append");
   }

   /* std::vector<float, std::allocator<float> >::_M_default_append(unsigned long) */
   void std::vector<float,std::allocator<float>>::_M_default_append(vector<float,std::allocator<float>> *this, ulong param_1) {
      ulong uVar1;
      ulong uVar2;
      void *__dest;
      void *pvVar3;
      undefined4 *__s;
      size_t sVar4;
      ulong uVar5;
      undefined4 *puVar6;
      if (param_1 == 0) {
         return;
      }

      puVar6 = *(undefined4**)( this + 8 );
      pvVar3 = *(void**)this;
      if (param_1 <= ( ulong )(*(long*)( this + 0x10 ) - (long)puVar6 >> 2)) {
         *puVar6 = 0;
         __s = puVar6 + 1;
         if (param_1 - 1 != 0) {
            sVar4 = (long)__s + ( ( param_1 - 1 ) * 4 - (long)puVar6 ) + -4;
            pvVar3 = memset(__s, 0, sVar4);
            __s = (undefined4*)( (long)pvVar3 + sVar4 );
         }

         *(undefined4**)( this + 8 ) = __s;
         return;
      }

      sVar4 = (long)puVar6 - (long)pvVar3;
      uVar2 = (long)sVar4 >> 2;
      if (0x1fffffffffffffff - uVar2 < param_1) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_default_append");
      }

      uVar1 = param_1 + uVar2;
      if (uVar2 < param_1) {
         uVar2 = 0x1fffffffffffffff;
         if (uVar1 < 0x2000000000000000) {
            uVar2 = uVar1;
         }

         uVar2 = uVar2 * 4;
         __dest = operator_new(uVar2);
         puVar6 = (undefined4*)( (long)__dest + sVar4 );
         *puVar6 = 0;
         if (param_1 - 1 != 0) goto LAB_0011c0c4;
         LAB_0011c0d8:if (sVar4 != 0) goto LAB_0011c1a8;
         if (pvVar3 == (void*)0x0) goto LAB_0011c0ea;
         uVar5 = *(long*)( this + 0x10 ) - (long)pvVar3;
      }
 else {
         uVar2 = uVar2 * 2;
         if (0x1fffffffffffffff < uVar2) {
            uVar2 = 0x1fffffffffffffff;
         }

         uVar2 = uVar2 * 4;
         __dest = operator_new(uVar2);
         puVar6 = (undefined4*)( (long)__dest + sVar4 );
         *puVar6 = 0;
         if (param_1 != 1) {
            LAB_0011c0c4:memset(puVar6 + 1, 0, ( param_1 - 1 ) * 4);
            goto LAB_0011c0d8;
         }

         LAB_0011c1a8:memmove(__dest, pvVar3, sVar4);
         uVar5 = *(long*)( this + 0x10 ) - (long)pvVar3;
      }

      operator_delete(pvVar3, uVar5);
      LAB_0011c0ea:*(void**)this = __dest;
      *(void**)( this + 8 ) = (void*)( (long)__dest + uVar1 * 4 );
      *(ulong*)( this + 0x10 ) = (long)__dest + uVar2;
      return;
   }

   /* tinyexr::HeaderInfo::HeaderInfo(tinyexr::HeaderInfo const&) */
   void tinyexr::HeaderInfo::HeaderInfo(HeaderInfo *this, HeaderInfo *param_1) {
      undefined2 uVar1;
      undefined4 uVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      long lVar5;
      undefined8 uVar6;
      undefined8 uVar7;
      undefined8 uVar8;
      undefined8 uVar9;
      undefined8 uVar10;
      undefined8 uVar11;
      long *plVar12;
      long lVar13;
      ulong unaff_RBX;
      ulong uVar14;
      undefined8 *puVar15;
      HeaderInfo *pHVar16;
      undefined8 *puVar17;
      undefined8 *in_R8;
      undefined1 uVar18;
      byte bVar19;
      bVar19 = 0;
      uVar14 = *(long*)( param_1 + 8 ) - *(long*)param_1;
      *(undefined8*)( this + 0x10 ) = 0;
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      pHVar16 = param_1;
      if (uVar14 == 0) {
         uVar14 = 0;
         plVar12 = (long*)0x0;
         LAB_0011c23c:*(ulong*)( this + 0x10 ) = uVar14 + (long)plVar12;
         *(long**)this = plVar12;
         *(long**)( this + 8 ) = plVar12;
         puVar17 = *(undefined8**)( param_1 + 8 );
         for (puVar15 = *(undefined8**)param_1; puVar17 != puVar15; puVar15 = puVar15 + 7) {
            lVar13 = puVar15[1];
            *plVar12 = (long)( plVar12 + 2 );
            pHVar16 = (HeaderInfo*)*puVar15;
            std::__cxx11::string::_M_construct<char*>(plVar12, pHVar16, pHVar16 + lVar13);
            lVar13 = puVar15[4];
            lVar5 = puVar15[5];
            *(undefined1*)( plVar12 + 6 ) = *(undefined1*)( puVar15 + 6 );
            uVar1 = *(undefined2*)( (long)puVar15 + 0x31 );
            plVar12[4] = lVar13;
            plVar12[5] = lVar5;
            *(undefined2*)( (long)plVar12 + 0x31 ) = uVar1;
            *(undefined1*)( (long)plVar12 + 0x33 ) = *(undefined1*)( (long)puVar15 + 0x33 );
            plVar12 = plVar12 + 7;
         }

         *(long**)( this + 8 ) = plVar12;
         unaff_RBX = *(long*)( param_1 + 0x20 ) - *(long*)( param_1 + 0x18 );
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         *(undefined8*)( this + 0x28 ) = 0;
         if (unaff_RBX == 0) {
            in_R8 = (undefined8*)0x0;
         }
 else {
            uVar18 = unaff_RBX == 0x7ffffffffffffef0;
            if (0x7ffffffffffffef0 < unaff_RBX) goto LAB_0011c400;
            in_R8 = (undefined8*)operator_new(unaff_RBX);
         }

         *(ulong*)( this + 0x28 ) = unaff_RBX + (long)in_R8;
         *(undefined8**)( this + 0x18 ) = in_R8;
         *(undefined8**)( this + 0x20 ) = in_R8;
         pHVar16 = *(HeaderInfo**)( param_1 + 0x18 );
         unaff_RBX = *(long*)( param_1 + 0x20 ) - (long)pHVar16;
         uVar18 = unaff_RBX == 0x210;
         if (0x210 < (long)unaff_RBX) {
            in_R8 = (undefined8*)memmove(in_R8, pHVar16, unaff_RBX);
            goto LAB_0011c327;
         }

      }
 else {
         uVar18 = uVar14 == 0x7ffffffffffffff8;
         if (uVar14 < 0x7ffffffffffffff9) {
            plVar12 = (long*)operator_new(uVar14);
            goto LAB_0011c23c;
         }

         LAB_0011c400:std::__throw_bad_array_new_length();
      }

      if ((bool)uVar18) {
         puVar17 = in_R8;
         for (lVar13 = 0x42; lVar13 != 0; lVar13 = lVar13 + -1) {
            *puVar17 = *(undefined8*)pHVar16;
            pHVar16 = pHVar16 + (ulong)bVar19 * -0x10 + 8;
            puVar17 = puVar17 + (ulong)bVar19 * -2 + 1;
         }

      }

      LAB_0011c327:uVar2 = *(undefined4*)( param_1 + 0x40 );
      uVar3 = *(undefined8*)( param_1 + 0x5c );
      *(ulong*)( this + 0x20 ) = (long)in_R8 + unaff_RBX;
      uVar6 = *(undefined8*)( param_1 + 0x30 );
      uVar7 = *(undefined8*)( param_1 + 0x38 );
      *(undefined4*)( this + 0x40 ) = uVar2;
      uVar4 = *(undefined8*)( param_1 + 0x54 );
      uVar8 = *(undefined8*)( param_1 + 0x44 );
      uVar9 = *(undefined8*)( param_1 + 0x4c );
      uVar10 = *(undefined8*)( param_1 + 100 );
      uVar11 = *(undefined8*)( param_1 + 0x6c );
      *(undefined8*)( this + 0x5c ) = uVar3;
      *(undefined8*)( this + 0x54 ) = uVar4;
      uVar3 = *(undefined8*)( param_1 + 0x74 );
      *(undefined8*)( this + 0x30 ) = uVar6;
      *(undefined8*)( this + 0x38 ) = uVar7;
      *(undefined8*)( this + 0x74 ) = uVar3;
      uVar3 = *(undefined8*)( param_1 + 0x7c );
      *(undefined8*)( this + 0x44 ) = uVar8;
      *(undefined8*)( this + 0x4c ) = uVar9;
      *(undefined8*)( this + 0x7c ) = uVar3;
      lVar13 = *(long*)( param_1 + 0x90 );
      *(HeaderInfo**)( this + 0x88 ) = this + 0x98;
      lVar5 = *(long*)( param_1 + 0x88 );
      *(undefined8*)( this + 100 ) = uVar10;
      *(undefined8*)( this + 0x6c ) = uVar11;
      std::__cxx11::string::_M_construct<char*>(this + 0x88, lVar5, lVar13 + lVar5);
      lVar13 = *(long*)( param_1 + 0xb0 );
      *(HeaderInfo**)( this + 0xa8 ) = this + 0xb8;
      std::__cxx11::string::_M_construct<char*>(this + 0xa8, *(long*)( param_1 + 0xa8 ), lVar13 + *(long*)( param_1 + 0xa8 ));
      return;
   }

   /* void std::vector<tinyexr::HeaderInfo, std::allocator<tinyexr::HeaderInfo>
   >::_M_realloc_insert<tinyexr::HeaderInfo
   const&>(__gnu_cxx::__normal_iterator<tinyexr::HeaderInfo*, std::vector<tinyexr::HeaderInfo,
   std::allocator<tinyexr::HeaderInfo> > >, tinyexr::HeaderInfo const&) */
   void std::vector<tinyexr::HeaderInfo,std::allocator<tinyexr::HeaderInfo>>::_M_realloc_insert<tinyexr::HeaderInfo_const&>(vector<tinyexr::HeaderInfo,std::allocator<tinyexr::HeaderInfo>> *this, undefined1 (*param_2)[16], HeaderInfo *param_3) {
      undefined1(*pauVar1)[16];
      undefined4 uVar2;
      undefined1(*pauVar3)[16];
      undefined1(*pauVar4)[16];
      undefined8 uVar5;
      long *plVar6;
      void *pvVar7;
      undefined8 *puVar8;
      long *plVar9;
      long lVar10;
      long lVar11;
      long lVar12;
      long lVar13;
      undefined8 uVar14;
      undefined8 uVar15;
      undefined8 uVar16;
      undefined8 uVar17;
      long lVar18;
      long lVar19;
      long lVar20;
      long *plVar21;
      long lVar22;
      ulong uVar23;
      long *plVar24;
      undefined1(*pauVar25)[16];
      uint uVar26;
      long lVar27;
      ulong uVar28;
      long *plVar29;
      uint uVar30;
      long *plVar31;
      undefined8 *puVar32;
      long local_58;
      pauVar3 = *(undefined1(**) [16])( this + 8 );
      pauVar4 = *(undefined1(**) [16])this;
      lVar22 = (long)pauVar3 - (long)pauVar4 >> 3;
      uVar23 = lVar22 * -0x70a3d70a3d70a3d7;
      if (uVar23 == 0xa3d70a3d70a3d7) {
         /* WARNING: Subroutine does not return */
         std::__throw_length_error("vector::_M_realloc_insert");
      }

      pauVar25 = param_2;
      if (pauVar4 == pauVar3) {
         uVar28 = uVar23 + 1;
         if (0xfffffffffffffffe < uVar23) goto LAB_0011c6ea;
         if (0xa3d70a3d70a3d7 < uVar28) {
            uVar28 = 0xa3d70a3d70a3d7;
         }

         uVar28 = uVar28 * 200;
         LAB_0011c6f4:plVar24 = (long*)operator_new(uVar28);
         local_58 = (long)plVar24 + uVar28;
         plVar29 = plVar24 + 0x19;
         tinyexr::HeaderInfo::HeaderInfo((HeaderInfo*)( (long)plVar24 + ( (long)param_2 - (long)pauVar4 ) ), param_3);
         if (param_2 != pauVar4) {
            LAB_0011c4ce:plVar31 = (long*)( pauVar4[9] + 8 );
            plVar21 = plVar24;
            do {
               plVar29 = plVar21;
               lVar22 = plVar31[-0xf];
               lVar27 = plVar31[-0xe];
               plVar21 = plVar29 + 0x13;
               lVar10 = plVar31[-0x13];
               lVar11 = plVar31[-0x12];
               plVar31[-0x12] = 0;
               lVar12 = plVar31[-0x11];
               lVar13 = plVar31[-0x10];
               plVar31[-0x13] = 0;
               *plVar29 = lVar10;
               plVar29[1] = lVar11;
               plVar29[2] = lVar12;
               plVar29[3] = lVar13;
               plVar29[4] = lVar22;
               plVar29[5] = lVar27;
               lVar22 = plVar31[-0xd];
               lVar27 = plVar31[-0xc];
               plVar31[-0xe] = 0;
               uVar14 = *(undefined8*)( (long)plVar31 + -0x54 );
               uVar15 = *(undefined8*)( (long)plVar31 + -0x4c );
               plVar31[-0xf] = 0;
               uVar16 = *(undefined8*)( (long)plVar31 + -0x34 );
               uVar17 = *(undefined8*)( (long)plVar31 + -0x2c );
               plVar31[-0x11] = 0;
               plVar31[-0x10] = 0;
               *(int*)( plVar29 + 8 ) = (int)plVar31[-0xb];
               uVar5 = *(undefined8*)( (long)plVar31 + -0x44 );
               plVar29[6] = lVar22;
               plVar29[7] = lVar27;
               *(undefined8*)( (long)plVar29 + 0x54 ) = uVar5;
               uVar5 = *(undefined8*)( (long)plVar31 + -0x3c );
               *(undefined8*)( (long)plVar29 + 0x44 ) = uVar14;
               *(undefined8*)( (long)plVar29 + 0x4c ) = uVar15;
               *(undefined8*)( (long)plVar29 + 0x5c ) = uVar5;
               uVar5 = *(undefined8*)( (long)plVar31 + -0x24 );
               *(undefined8*)( (long)plVar29 + 100 ) = uVar16;
               *(undefined8*)( (long)plVar29 + 0x6c ) = uVar17;
               *(undefined8*)( (long)plVar29 + 0x74 ) = uVar5;
               *(undefined4*)( (long)plVar29 + 0x7c ) = *(undefined4*)( (long)plVar31 + -0x1c );
               lVar22 = plVar31[-3];
               plVar29[0x11] = (long)plVar21;
               *(int*)( plVar29 + 0x10 ) = (int)lVar22;
               if ((long*)plVar31[-2] == plVar31) {
                  lVar22 = plVar31[-1];
                  uVar23 = lVar22 + 1;
                  uVar30 = (uint)uVar23;
                  if (7 < uVar30) {
                     *plVar21 = *plVar31;
                     *(undefined8*)( (long)plVar29 + ( uVar23 & 0xffffffff ) + 0x90 ) = *(undefined8*)( (long)plVar31 + ( ( uVar23 & 0xffffffff ) - 8 ) );
                     lVar22 = (long)plVar21 - ( ( ulong )(plVar29 + 0x14) & 0xfffffffffffffff8 );
                     uVar30 = uVar30 + (int)lVar22 & 0xfffffff8;
                     if (7 < uVar30) {
                        uVar26 = 0;
                        do {
                           uVar23 = (ulong)uVar26;
                           uVar26 = uVar26 + 8;
                           *(undefined8*)( ( ( ulong )(plVar29 + 0x14) & 0xfffffffffffffff8 ) + uVar23 ) = *(undefined8*)( (long)plVar31 + ( uVar23 - lVar22 ) );
                        }
 while ( uVar26 < uVar30 );
                     }

                     goto LAB_0011c5db;
                  }

                  if (( uVar23 & 4 ) == 0) {
                     if (uVar30 != 0) {
                        *(char*)plVar21 = (char)*plVar31;
                        if (( uVar23 & 2 ) == 0) goto LAB_0011c5db;
                        *(undefined2*)( (long)plVar29 + ( uVar23 & 0xffffffff ) + 0x96 ) = *(undefined2*)( (long)plVar31 + ( ( uVar23 & 0xffffffff ) - 2 ) );
                        lVar22 = plVar31[-1];
                     }

                  }
 else {
                     *(int*)plVar21 = (int)*plVar31;
                     *(undefined4*)( (long)plVar29 + ( uVar23 & 0xffffffff ) + 0x94 ) = *(undefined4*)( (long)plVar31 + ( ( uVar23 & 0xffffffff ) - 4 ) );
                     lVar22 = plVar31[-1];
                  }

               }
 else {
                  plVar29[0x11] = plVar31[-2];
                  plVar29[0x13] = *plVar31;
                  LAB_0011c5db:lVar22 = plVar31[-1];
               }

               plVar21 = plVar29 + 0x17;
               plVar29[0x12] = lVar22;
               plVar31[-2] = (long)plVar31;
               plVar31[-1] = 0;
               *(undefined1*)plVar31 = 0;
               plVar29[0x15] = (long)plVar21;
               plVar6 = (long*)plVar31[2];
               if (plVar6 == plVar31 + 4) {
                  lVar22 = plVar31[3];
                  uVar23 = lVar22 + 1;
                  uVar30 = (uint)uVar23;
                  if (7 < uVar30) {
                     *plVar21 = *plVar6;
                     *(undefined8*)( (long)plVar29 + ( uVar23 & 0xffffffff ) + 0xb0 ) = *(undefined8*)( (long)plVar6 + ( ( uVar23 & 0xffffffff ) - 8 ) );
                     lVar22 = (long)plVar21 - ( ( ulong )(plVar29 + 0x18) & 0xfffffffffffffff8 );
                     uVar30 = uVar30 + (int)lVar22 & 0xfffffff8;
                     if (7 < uVar30) {
                        uVar26 = 0;
                        do {
                           uVar23 = (ulong)uVar26;
                           uVar26 = uVar26 + 8;
                           *(undefined8*)( ( ( ulong )(plVar29 + 0x18) & 0xfffffffffffffff8 ) + uVar23 ) = *(undefined8*)( (long)plVar6 + ( uVar23 - lVar22 ) );
                        }
 while ( uVar26 < uVar30 );
                     }

                     goto LAB_0011c62e;
                  }

                  if (( uVar23 & 4 ) == 0) {
                     if (uVar30 != 0) {
                        *(char*)plVar21 = (char)*plVar6;
                        if (( uVar23 & 2 ) == 0) goto LAB_0011c62e;
                        *(undefined2*)( (long)plVar29 + ( uVar23 & 0xffffffff ) + 0xb6 ) = *(undefined2*)( (long)plVar6 + ( ( uVar23 & 0xffffffff ) - 2 ) );
                        lVar22 = plVar31[3];
                     }

                  }
 else {
                     *(int*)plVar21 = (int)*plVar6;
                     *(undefined4*)( (long)plVar29 + ( uVar23 & 0xffffffff ) + 0xb4 ) = *(undefined4*)( (long)plVar6 + ( ( uVar23 & 0xffffffff ) - 4 ) );
                     lVar22 = plVar31[3];
                  }

               }
 else {
                  plVar29[0x15] = (long)plVar6;
                  plVar29[0x17] = plVar31[4];
                  LAB_0011c62e:lVar22 = plVar31[3];
               }

               plVar29[0x16] = lVar22;
               if ((long*)plVar31[-2] != plVar31) {
                  operator_delete((long*)plVar31[-2], *plVar31 + 1);
               }

               pvVar7 = (void*)plVar31[-0x10];
               if (pvVar7 != (void*)0x0) {
                  operator_delete(pvVar7, plVar31[-0xe] - (long)pvVar7);
               }

               puVar8 = (undefined8*)plVar31[-0x12];
               puVar32 = (undefined8*)plVar31[-0x13];
               if (puVar8 != puVar32) {
                  do {
                     if ((undefined8*)*puVar32 != puVar32 + 2) {
                        operator_delete((undefined8*)*puVar32, puVar32[2] + 1);
                     }

                     puVar32 = puVar32 + 7;
                  }
 while ( puVar8 != puVar32 );
                  puVar32 = (undefined8*)plVar31[-0x13];
               }

               if (puVar32 != (undefined8*)0x0) {
                  operator_delete(puVar32, plVar31[-0x11] - (long)puVar32);
               }

               pauVar1 = (undefined1(*) [16])( plVar31 + 6 );
               plVar31 = plVar31 + 0x19;
               plVar21 = plVar29 + 0x19;
            }
 while ( param_2 != pauVar1 );
            plVar29 = plVar29 + 0x32;
         }

         plVar31 = plVar29;
         if (param_2 == pauVar3) goto LAB_0011ca06;
      }
 else {
         uVar28 = lVar22 * 0x1eb851eb851eb852;
         if (uVar28 < uVar23) {
            LAB_0011c6ea:uVar28 = 0x7ffffffffffffff8;
            goto LAB_0011c6f4;
         }

         if (uVar28 != 0) {
            if (0xa3d70a3d70a3d7 < uVar28) {
               uVar28 = 0xa3d70a3d70a3d7;
            }

            uVar28 = uVar28 * 200;
            goto LAB_0011c6f4;
         }

         plVar24 = (long*)0x0;
         tinyexr::HeaderInfo::HeaderInfo((HeaderInfo*)( (long)param_2 - (long)pauVar4 ), param_3);
         local_58 = 0;
         plVar29 = (long*)0xc8;
         plVar31 = plVar29;
         if (param_2 != pauVar4) goto LAB_0011c4ce;
      }

      do {
         uVar2 = *(undefined4*)pauVar25[4];
         lVar27 = *(long*)*pauVar25;
         lVar10 = *(long*)( *pauVar25 + 8 );
         *pauVar25 = (undefined1[16])0x0;
         plVar21 = plVar29 + 0x13;
         lVar11 = *(long*)pauVar25[1];
         lVar12 = *(long*)( pauVar25[1] + 8 );
         lVar13 = *(long*)pauVar25[2];
         lVar18 = *(long*)( pauVar25[2] + 8 );
         pauVar25[1] = (undefined1[16])0x0;
         lVar19 = *(long*)pauVar25[3];
         lVar20 = *(long*)( pauVar25[3] + 8 );
         uVar14 = *(undefined8*)( pauVar25[4] + 4 );
         uVar15 = *(undefined8*)( pauVar25[4] + 0xc );
         *(undefined4*)( plVar29 + 8 ) = uVar2;
         uVar5 = *(undefined8*)( pauVar25[5] + 4 );
         uVar16 = *(undefined8*)( pauVar25[6] + 4 );
         uVar17 = *(undefined8*)( pauVar25[6] + 0xc );
         plVar29[0x11] = (long)plVar21;
         plVar9 = *(long**)( pauVar25[8] + 8 );
         lVar22 = *(long*)pauVar25[9];
         *plVar29 = lVar27;
         plVar29[1] = lVar10;
         *(undefined8*)( (long)plVar29 + 0x54 ) = uVar5;
         uVar5 = *(undefined8*)( pauVar25[5] + 0xc );
         plVar29[2] = lVar11;
         plVar29[3] = lVar12;
         *(undefined8*)( (long)plVar29 + 0x5c ) = uVar5;
         uVar5 = *(undefined8*)( pauVar25[7] + 4 );
         plVar29[4] = lVar13;
         plVar29[5] = lVar18;
         *(undefined8*)( (long)plVar29 + 0x74 ) = uVar5;
         uVar2 = *(undefined4*)( pauVar25[7] + 0xc );
         pauVar25[2] = (undefined1[16])0x0;
         *(undefined4*)( (long)plVar29 + 0x7c ) = uVar2;
         uVar2 = *(undefined4*)pauVar25[8];
         plVar29[6] = lVar19;
         plVar29[7] = lVar20;
         *(undefined4*)( plVar29 + 0x10 ) = uVar2;
         plVar6 = (long*)( pauVar25[9] + 8 );
         *(undefined8*)( (long)plVar29 + 0x44 ) = uVar14;
         *(undefined8*)( (long)plVar29 + 0x4c ) = uVar15;
         *(undefined8*)( (long)plVar29 + 100 ) = uVar16;
         *(undefined8*)( (long)plVar29 + 0x6c ) = uVar17;
         if (plVar9 == plVar6) {
            uVar23 = lVar22 + 1;
            uVar30 = (uint)uVar23;
            if (uVar30 < 8) {
               if (( uVar23 & 4 ) == 0) {
                  if (( uVar30 != 0 ) && ( *(char*)plVar21 = (char)*plVar6(uVar23 & 2) != 0 )) {
                     *(undefined2*)( (long)plVar29 + ( uVar23 & 0xffffffff ) + 0x96 ) = *(undefined2*)( pauVar25[9] + ( uVar23 & 0xffffffff ) + 6 );
                  }

               }
 else {
                  *(int*)plVar21 = (int)*plVar6;
                  *(undefined4*)( (long)plVar29 + ( uVar23 & 0xffffffff ) + 0x94 ) = *(undefined4*)( pauVar25[9] + ( uVar23 & 0xffffffff ) + 4 );
               }

            }
 else {
               *plVar21 = *plVar6;
               *(undefined8*)( (long)plVar29 + ( uVar23 & 0xffffffff ) + 0x90 ) = *(undefined8*)( pauVar25[9] + ( uVar23 & 0xffffffff ) );
               lVar27 = (long)plVar21 - ( ( ulong )(plVar29 + 0x14) & 0xfffffffffffffff8 );
               uVar30 = uVar30 + (int)lVar27 & 0xfffffff8;
               if (7 < uVar30) {
                  uVar26 = 0;
                  do {
                     uVar23 = (ulong)uVar26;
                     uVar26 = uVar26 + 8;
                     *(undefined8*)( ( ( ulong )(plVar29 + 0x14) & 0xfffffffffffffff8 ) + uVar23 ) = *(undefined8*)( (long)plVar6 + ( uVar23 - lVar27 ) );
                  }
 while ( uVar26 < uVar30 );
               }

            }

         }
 else {
            plVar29[0x11] = (long)plVar9;
            plVar29[0x13] = *(long*)( pauVar25[9] + 8 );
         }

         *(long**)( pauVar25[8] + 8 ) = plVar6;
         plVar6 = *(long**)( pauVar25[10] + 8 );
         plVar29[0x12] = lVar22;
         plVar21 = plVar29 + 0x17;
         lVar22 = *(long*)pauVar25[0xb];
         *(undefined8*)pauVar25[9] = 0;
         pauVar25[9][8] = 0;
         plVar29[0x15] = (long)plVar21;
         if (plVar6 == (long*)( pauVar25[0xb] + 8 )) {
            uVar23 = lVar22 + 1;
            uVar30 = (uint)uVar23;
            if (uVar30 < 8) {
               if (( uVar23 & 4 ) == 0) {
                  if (( uVar30 != 0 ) && ( *(char*)plVar21 = (char)*plVar6(uVar23 & 2) != 0 )) {
                     *(undefined2*)( (long)plVar29 + ( uVar23 & 0xffffffff ) + 0xb6 ) = *(undefined2*)( (long)plVar6 + ( ( uVar23 & 0xffffffff ) - 2 ) );
                  }

               }
 else {
                  *(int*)plVar21 = (int)*plVar6;
                  *(undefined4*)( (long)plVar29 + ( uVar23 & 0xffffffff ) + 0xb4 ) = *(undefined4*)( (long)plVar6 + ( ( uVar23 & 0xffffffff ) - 4 ) );
               }

            }
 else {
               *plVar21 = *plVar6;
               *(undefined8*)( (long)plVar29 + ( uVar23 & 0xffffffff ) + 0xb0 ) = *(undefined8*)( (long)plVar6 + ( ( uVar23 & 0xffffffff ) - 8 ) );
               lVar27 = (long)plVar21 - ( ( ulong )(plVar29 + 0x18) & 0xfffffffffffffff8 );
               uVar30 = uVar30 + (int)lVar27 & 0xfffffff8;
               if (7 < uVar30) {
                  uVar26 = 0;
                  do {
                     uVar23 = (ulong)uVar26;
                     uVar26 = uVar26 + 8;
                     *(undefined8*)( ( ( ulong )(plVar29 + 0x18) & 0xfffffffffffffff8 ) + uVar23 ) = *(undefined8*)( (long)plVar6 + ( uVar23 - lVar27 ) );
                  }
 while ( uVar26 < uVar30 );
               }

            }

         }
 else {
            plVar29[0x15] = (long)plVar6;
            plVar29[0x17] = *(long*)( pauVar25[0xb] + 8 );
         }

         pauVar1 = pauVar25 + 0xc;
         plVar29[0x16] = lVar22;
         plVar29 = plVar29 + 0x19;
         pauVar25 = (undefined1(*) [16])( *pauVar1 + 8 );
      }
 while ( pauVar3 != (undefined1(*) [16])( *pauVar1 + 8 ) );
      plVar29 = plVar31 + ( ( ( ( ulong )((long)pauVar3 + ( -200 - (long)param_2 )) >> 3 ) * 0xf5c28f5c28f5c29 & 0x1fffffffffffffff ) * 5 + 5 ) * 5;
      LAB_0011ca06:if (pauVar4 != (undefined1(*) [16])0x0) {
         operator_delete(pauVar4, *(long*)( this + 0x10 ) - (long)pauVar4);
      }

      *(long**)this = plVar24;
      *(long**)( this + 8 ) = plVar29;
      *(long*)( this + 0x10 ) = local_58;
      return;
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* tinyexr::HeaderInfo::HeaderInfo(tinyexr::HeaderInfo const&) */
   void tinyexr::HeaderInfo::HeaderInfo(HeaderInfo *this, HeaderInfo *param_1) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}

